#!/usr/bin/env python3

###
# Defines names for addresses inside linked units in the linker script.
#
# While an address range is delinked, dsd's object defines every symbols.txt name in it. Once the range belongs to a
# compiled (complete) unit, only the names the compiler emits as global symbols exist. Two kinds of names are lost,
# although other code still uses them:
#   * a label inside an object: dsd made `data_021d7352` out of a literal that is really `data_021d7350 + 2`, and
#     compiled sources of other units declare the label `extern` and use it. The unit that owns the object defines
#     `data_021d7350` only, so the link stops with `Undefined: "data_021d7352"`;
#   * a name for a place that the compiler only gives a local symbol: the first word of main's .ctor table is
#     `.p__sinit_<file>` (local) in the object, and the delinked runtime has a relocation to it. A reference from a
#     delinked object is weak: nothing is reported, the word is linked as 0.
# Such names are recorded in `lcf_symbols.txt` next to the module's symbols.txt:
#
#     # name             address           where it is
#     data_021d7352      addr:0x021d7352   base:data_021d7350
#     p__sinit_020c2cd0  addr:0x020d1dd8   base:ARM9_CTOR_START
#
# `base` is either a symbol of the same module's symbols.txt that a compiled unit defines (a global object), or the
# start of one of the module's sections as dsd's linker script names it (`ARM9_CTOR_START`, `OV004_DATA_START`,
# `AUTOLOAD_3_BSS_START`). This step, which runs between tools/aliases.py and tools/force_active.py when a module
# has such a file, appends one assignment per line to the end of SECTIONS:
#
#     data_021d7352 = data_021d7350 + 0x2;
#     p__sinit_020c2cd0 = ARM9_CTOR_START;
#
# mwld resolves undefined references of compiled objects and the weak references of delinked objects to these
# symbols, also for bss in a region without an output file. It does not check anything, so this tool does:
#   * mwld evaluates a base that is not linked (misspelt, dead-stripped) as 0 without a message. A symbol base must
#     therefore be in symbols.txt (tools/force_active.py then keeps it) and be a global of a linked object;
#   * when an object defines the name too, mwld silently lets the assignment win for data. A name that any linked
#     object defines is an error;
#   * the address must be the base's address plus a non-negative offset, inside (or at the end of) the range of the
#     complete unit that owns the base. If the range is not complete the name belongs in symbols.txt, not here;
#   * a name may also be in the module's symbols.txt (dsd needs a symbol at every unit boundary and names
#     relocations after it), but only at the same address. Names must be identifiers: mwld's script syntax has no
#     way to write `.p__sinit_020c2cd0`, so such a symbol gets an identifier name in symbols.txt.
# Every recorded name is defined, whether or not something refers to it at the moment; `-v` lists the users.
#
# Usage:
#   python3 tools/lcf_symbols.py build/usa/objects.txt build/usa/arm9.lcf --config config/usa/arm9 \
#       -o build/usa/arm9_lcf_symbols.lcf [-v]
###

import argparse
import re
import struct
import sys
from pathlib import Path

DESCRIPTION_FILE = "lcf_symbols.txt"
IDENTIFIER = r"[A-Za-z_][A-Za-z0-9_]*"
SHT_SYMTAB = 2
STB_LOCAL = 0
SHN_LORESERVE = 0xff00


class LabelError(Exception):
    pass


class Label:
    def __init__(self, name: str, address: int, base: str, where: str):
        self.name = name
        self.address = address
        self.base = base
        self.where = where
        self.offset = 0


def description_files(config: Path) -> list[Path]:
    return sorted(config.rglob(DESCRIPTION_FILE))


def parse_description(path: Path) -> list[Label]:
    labels = []
    for number, line in enumerate(path.read_text().splitlines(), 1):
        line = line.split("#", 1)[0].strip()
        if not line:
            continue
        where = f"{path}:{number}"
        match = re.fullmatch(r"(\S+)\s+addr:(0x[0-9a-fA-F]+)\s+base:(\S+)", line)
        if not match:
            raise LabelError(f"{where}: expected `<name> addr:<0xaddress> base:<symbol or SECTION_START>`")
        for word in (match[1], match[3]):
            if not re.fullmatch(IDENTIFIER, word):
                raise LabelError(f"{where}: {word} is not an identifier; a linker script cannot define or use it "
                                 f"(give the symbol an identifier name in symbols.txt)")
        labels.append(Label(match[1], int(match[2], 16), match[3], where))
    return labels


def has_labels(config: Path) -> bool:
    '''Whether the build needs this step'''
    try:
        return any(parse_description(path) for path in description_files(config))
    except LabelError as error:
        sys.exit(f"lcf_symbols.py: {error}")


def section_prefix(config: Path, module_dir: Path) -> str:
    '''The module's name in dsd's linker script symbols: ARM9, OV004, AUTOLOAD_3, ITCM'''
    return "ARM9" if module_dir == config else module_dir.name.upper()


def parse_delinks(path: Path):
    '''Returns the module's sections {name: (start, end)} and its unit ranges [(start, end, section, unit, complete)]'''
    sections = {}
    ranges = []
    complete = {}
    current = None
    for line in path.read_text().splitlines():
        if not line.strip():
            continue
        if not line[0].isspace():
            current = line.strip().rstrip(":")
            complete[current] = False
            continue
        if current and line.strip() == "complete":
            complete[current] = True
            continue
        match = re.match(r"\s*(\.\S+)\s+start:(0x[0-9a-fA-F]+) end:(0x[0-9a-fA-F]+)", line)
        if not match:
            continue
        if current is None:
            sections[match[1]] = (int(match[2], 16), int(match[3], 16))
        else:
            ranges.append((int(match[2], 16), int(match[3], 16), match[1], current))
    return sections, [(start, end, section, unit, complete[unit]) for start, end, section, unit in ranges]


def parse_symbols(path: Path) -> dict[str, list[tuple[int, str]]]:
    '''name -> [(address, kind)]'''
    symbols: dict[str, list[tuple[int, str]]] = {}
    for line in path.read_text().splitlines():
        match = re.match(r"(\S+) kind:(\S+) addr:(0x[0-9a-fA-F]+)", line)
        if match:
            symbols.setdefault(match[1], []).append((int(match[3], 16), match[2]))
    return symbols


def object_symbols(path: Path) -> tuple[set[str], set[str]]:
    '''(names the object defines as global symbols, names it refers to without defining them)'''
    data = path.read_bytes()
    (e_shoff,) = struct.unpack_from("<I", data, 0x20)
    e_shentsize, e_shnum = struct.unpack_from("<HH", data, 0x2e)
    sections = [struct.unpack_from("<10I", data, e_shoff + i * e_shentsize) for i in range(e_shnum)]
    defined, undefined = set(), set()
    for _, type, _, _, offset, size, link, _, _, _ in sections:
        if type != SHT_SYMTAB:
            continue
        strtab = sections[link]
        for i in range(0, size, 16):
            name, _, _, info, _, shndx = struct.unpack_from("<IIIBBH", data, offset + i)
            if info >> 4 == STB_LOCAL or not name:
                continue
            start = strtab[4] + name
            symbol = data[start:data.index(b"\0", start)].decode()
            if shndx == 0:
                undefined.add(symbol)
            elif shndx < SHN_LORESERVE:
                defined.add(symbol)
    return defined, undefined


def resolve(config: Path, lcf: str) -> list[Label]:
    '''Reads every lcf_symbols.txt and checks it against the dsd config; returns the labels with their offsets'''
    labels = []
    seen: dict[str, str] = {}
    all_symbols = {path.parent: parse_symbols(path) for path in sorted(config.rglob("symbols.txt"))}
    for description in description_files(config):
        module_dir = description.parent
        if module_dir not in all_symbols or not (module_dir / "delinks.txt").is_file():
            raise LabelError(f"{description}: not in a module directory (no symbols.txt/delinks.txt next to it)")
        symbols = all_symbols[module_dir]
        sections, ranges = parse_delinks(module_dir / "delinks.txt")
        prefix = section_prefix(config, module_dir)
        starts = {f"{prefix}_{name[1:].upper()}_START": (name, start) for name, (start, _) in sections.items()}
        for label in parse_description(description):
            if label.name in seen:
                raise LabelError(f"{label.where}: {label.name} is already defined at {seen[label.name]}")
            seen[label.name] = label.where
            for other_dir, other in all_symbols.items():
                for address, kind in other.get(label.name, []):
                    if other_dir != module_dir or address != label.address:
                        raise LabelError(f"{label.where}: {label.name} is {label.address:#010x} here, but "
                                         f"{other_dir / 'symbols.txt'} has it at {address:#010x}")

            def owner(address: int, inclusive_end: bool):
                found = [r for r in ranges if r[0] <= address < r[1] or (inclusive_end and address == r[1])]
                return found[0] if found else None

            if label.base in symbols:
                if len(symbols[label.base]) != 1:
                    raise LabelError(f"{label.where}: {module_dir / 'symbols.txt'} has several symbols named "
                                     f"{label.base}")
                base_address, kind = symbols[label.base][0]
                if not kind.startswith(("data", "bss")):
                    raise LabelError(f"{label.where}: the base {label.base} is kind:{kind}; it must be a data or bss "
                                     f"object")
                unit = owner(base_address, False)
                if unit is None or not unit[4]:
                    raise LabelError(f"{label.where}: the base {label.base} ({base_address:#010x}) is not inside a "
                                     f"complete unit of {module_dir / 'delinks.txt'}. While the range is delinked, "
                                     f"{label.name} belongs in symbols.txt, not here")
                if not (base_address <= label.address <= unit[1]):
                    raise LabelError(f"{label.where}: {label.name} ({label.address:#010x}) is not inside the {unit[2]} "
                                     f"range {base_address:#010x}-{unit[1]:#010x} that {unit[3]} has from "
                                     f"{label.base} on")
            elif label.base in starts:
                section, base_address = starts[label.base]
                if not re.search(rf"^\s*{label.base} = \.;\s*$", lcf, re.M):
                    raise LabelError(f"{label.where}: the linker script does not define {label.base}")
                if not (base_address <= label.address <= sections[section][1]):
                    raise LabelError(f"{label.where}: {label.name} ({label.address:#010x}) is not inside the module's "
                                     f"{section} ({base_address:#010x}-{sections[section][1]:#010x})")
                unit = owner(label.address, False)
                if unit is None or not unit[4] or unit[2] != section:
                    raise LabelError(f"{label.where}: {label.address:#010x} is not inside the {section} range of a "
                                     f"complete unit of {module_dir / 'delinks.txt'}. While the range is delinked, "
                                     f"dsd's object defines the symbols.txt name; remove this line")
            else:
                raise LabelError(f"{label.where}: the base {label.base} is neither a symbol of "
                                 f"{module_dir / 'symbols.txt'} nor a section start of the module "
                                 f"({', '.join(sorted(starts))})")
            label.offset = label.address - base_address
            label.symbol_base = label.base in symbols
            labels.append(label)
    return labels


def process(lcf: str, objects: list[str], config: Path, verbose: bool) -> str:
    labels = resolve(config, lcf)
    if not labels:
        return lcf
    names = {label.name: label for label in labels}
    bases = {label.base for label in labels if label.symbol_base}
    base_owner = {}
    users: dict[str, list[str]] = {}
    for line in objects:
        path = Path(line.strip().strip('"'))
        if not line.strip():
            continue
        defined, undefined = object_symbols(path)
        for name in defined & names.keys():
            raise LabelError(f"{names[name].where}: {name} is defined by {path}. An object's definition and a linker "
                             f"script assignment must not both exist (mwld reports nothing and picks one): remove "
                             f"the line, or the definition")
        for name in defined & bases:
            base_owner[name] = path
        for name in undefined & names.keys():
            users.setdefault(name, []).append(path.name)
    for label in labels:
        if label.symbol_base and label.base not in base_owner:
            raise LabelError(f"{label.where}: no linked object defines the base {label.base} as a global symbol; "
                             f"mwld would evaluate it as 0 without a message")
        if label.symbol_base and "delinks" in base_owner[label.base].parts:
            raise LabelError(f"{label.where}: the base {label.base} is defined by the delinked object "
                             f"{base_owner[label.base]}, not by a compiled unit")
    lines = [f"    {label.name} = {label.base}" + (f" + {label.offset:#x}" if label.offset else "") + ";\n"
             for label in sorted(labels, key=lambda label: label.address)]
    used = sum(1 for label in labels if label.name in users)
    print(f"lcf_symbols.py: {len(labels)} names defined, {used} of them referenced by linked objects")
    if verbose:
        for label in sorted(labels, key=lambda label: label.address):
            who = users.get(label.name, [])
            print(f"  {label.address:#010x} {label.name} = {label.base} + {label.offset:#x}: "
                  + (f"{len(who)} objects ({', '.join(who[:4])}{' ...' if len(who) > 4 else ''})" if who
                     else "not referenced"))
    end = lcf.rindex("}")
    return lcf[:end] + "\n" + "".join(lines) + lcf[end:]


def main() -> None:
    parser = argparse.ArgumentParser(description="Defines the names of lcf_symbols.txt files in the linker script")
    parser.add_argument("objects_file", type=Path, help="list of objects to link")
    parser.add_argument("lcf", type=Path, help="Linker script")
    parser.add_argument("--config", type=Path, required=True, help="dsd config directory, e.g. config/usa/arm9")
    parser.add_argument("-o", type=Path, dest="out", required=True, help="Output linker script")
    parser.add_argument("-v", "--verbose", action="store_true", help="Print every name and the objects that use it")
    args = parser.parse_args()
    try:
        lcf = process(args.lcf.read_text(), args.objects_file.read_text().splitlines(), args.config, args.verbose)
    except LabelError as error:
        sys.exit(f"lcf_symbols.py: {error}")
    args.out.write_text(lcf)


if __name__ == "__main__":
    main()

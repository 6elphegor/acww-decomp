#!/usr/bin/env python3

###
# Gives the functions of compiled ARM9 units (main, autoload_2, itcm and the overlays) their second names.
#
# symbols.txt may hold several names for one address: the function symbol and `kind:label` aliases (added with
# tools/pipeline/alias.py). The usual case is a constructor: mwcc emits a complete-object (C1) and a base-object
# (C2) variant with identical code, the original linker kept one body, and linked units call that address by either
# name. While the address is delinked, dsd's object defines every name. Once the unit that contains it is compiled:
#   * mwcc emits both variants as separate functions. The build keeps every global that symbols.txt names
#     (tools/force_active.py), so both bodies would be linked and everything after them would shift;
#   * a name the unit's source does not define at all (another class's name for the same function) is undefined.
# A linker script assignment (`alias = name + 1;`, as tools/object_order.py writes for its units) does not help
# when the object defines the alias itself: mwld prefers the object's definition and links both bodies.
#
# So this step rewrites the symbol table of each compiled unit that has such names, into a copy of the object
# under build/<version>/aliases/, and links the copy instead:
#   * if the object defines two names of one address in two sections, the sections must be identical (bytes and
#     relocations); the alias is redirected to the section of the primary name (size 0) and the duplicate, now
#     nameless and unreferenced, is dead-stripped by the linker;
#   * names the object does not define are added as global symbols on the primary name's section (size 0, same
#     type and Thumb bit, so interworking calls from ARM code stay correct).
# The primary name is the `kind:function` symbol if the object defines it, else the first alias it defines.
# Objects without such names are linked as they are. The step is part of the build when a module has complete units.
#
# Modules: main, the library modules autoload_2 and itcm, and every overlay. Each module's own symbols.txt gives the
# names of its complete units' functions. A unit placed object by object (an overlay's object_order.txt, see
# tools/object_order.py) has its extra objects treated like the main object, with the unit's .text range; a name is
# not added to one object when another object of the link defines it. Names of such a unit at an address where no
# object defines any of the names are left to object_order.py's linker script aliases.
#
# Usage:
#   python3 tools/aliases.py build/usa/objects.txt --config config/usa/arm9 --build build/usa \
#       --objects-out build/usa/objects_aliases.txt [-v]
###

import argparse
import re
import struct
import sys
from pathlib import Path

import object_order

SHT_SYMTAB = 2
SHT_RELA = 4
STB_LOCAL = 0
SHN_LORESERVE = 0xff00


# Modules whose compiled units get alias names: main (the config directory itself), the library autoloads and
# every overlay (config/<version>/arm9/overlays/ovNNN)
UNIT_MODULES = ("", "autoload_2", "itcm")
OVERLAYS_DIR = "overlays"


def module_dirs(config: Path) -> list[Path]:
    dirs = [config / name for name in UNIT_MODULES]
    if (config / OVERLAYS_DIR).is_dir():
        dirs += sorted(path for path in (config / OVERLAYS_DIR).iterdir() if path.is_dir())
    return [path for path in dirs if (path / "delinks.txt").is_file()]


def complete_units(config: Path) -> dict[str, tuple[int, int]]:
    '''{source: .text range} of the complete units of all modules, including the extra sources of units placed
    object by object'''
    units = {}
    for module_dir in module_dirs(config):
        units.update(module_unit_sources(module_dir))
    return units


def module_unit_sources(module_dir: Path) -> dict[str, tuple[int, int]]:
    '''{source: .text range} of a module's complete units and of the extra sources (object_order.txt) of those'''
    units = module_complete_units(module_dir)
    description = module_dir / object_order.DESCRIPTION_FILE
    if description.is_file():
        for unit in object_order.parse_description(description):
            if unit.source in units:
                units.update({source: units[unit.source] for source, _ in unit.extras})
    return units


def module_complete_units(module_dir: Path) -> dict[str, tuple[int, int]]:
    '''{source: .text range} of the complete units of one module's delinks.txt'''
    units = {}
    current = None
    complete = False
    for line in (module_dir / "delinks.txt").read_text().splitlines():
        if line and not line[0].isspace():
            current = line.rstrip().rstrip(":")
            complete = False
        elif line.strip() == "complete":
            complete = True
        else:
            match = re.match(r"\s+\.text\s+start:(0x[0-9a-fA-F]+) end:(0x[0-9a-fA-F]+)", line)
            if match and current and complete:
                units[current] = (int(match[1], 16), int(match[2], 16))
    return units


def has_complete_units(config: Path) -> bool:
    return bool(complete_units(config))


def names_by_address(module_dir: Path) -> dict[int, list[tuple[str, bool]]]:
    '''address -> [(name, is function symbol)] for a module's addresses that have more than one global name'''
    found: dict[int, list[tuple[str, bool]]] = {}
    for line in (module_dir / "symbols.txt").read_text().splitlines():
        match = re.match(r"(\S+) kind:(function|label)\(\S+ addr:(0x[0-9a-fA-F]+)(.*)", line)
        if not match or "local" in match[4].split():
            continue
        found.setdefault(int(match[3], 16), []).append((match[1], match[2] == "function"))
    return {address: names for address, names in found.items() if len(names) > 1}


class Elf:
    def __init__(self, path: Path):
        self.path = path
        self.data = bytearray(path.read_bytes())
        d = self.data
        (self.shoff,) = struct.unpack_from("<I", d, 0x20)
        self.shentsize, self.shnum, _ = struct.unpack_from("<HHH", d, 0x2e)
        self.sections = [list(struct.unpack_from("<10I", d, self.shoff + i * self.shentsize))
                         for i in range(self.shnum)]
        self.symtab = next(i for i, s in enumerate(self.sections) if s[1] == SHT_SYMTAB)
        self.strtab = self.sections[self.symtab][6]
        sym = self.sections[self.symtab]
        self.symbols = [list(struct.unpack_from("<IIIBBH", d, sym[4] + i)) for i in range(0, sym[5], 16)]
        self.strings = bytearray(d[self.sections[self.strtab][4]:self.sections[self.strtab][4]
                                   + self.sections[self.strtab][5]])

    def name(self, symbol) -> str:
        return self.strings[symbol[0]:self.strings.index(b"\0", symbol[0])].decode()

    def globals(self) -> dict[str, int]:
        '''name -> symbol index of the defined global symbols'''
        return {self.name(s): i for i, s in enumerate(self.symbols)
                if s[3] >> 4 != STB_LOCAL and 0 < s[5] < SHN_LORESERVE}

    def section_image(self, index: int):
        '''bytes and relocations of a section, to compare two sections'''
        s = self.sections[index]
        body = bytes(self.data[s[4]:s[4] + s[5]])
        relocs = []
        for r in self.sections:
            if r[1] == SHT_RELA and r[7] == index:
                relocs += [struct.unpack_from("<IIi", self.data, r[4] + i) for i in range(0, r[5], 12)]
        return body, sorted(relocs)

    def write(self, path: Path):
        '''Writes the object with the current symbol and string tables appended at the end of the file'''
        d = bytearray(self.data)
        for index, blob in ((self.strtab, bytes(self.strings)),
                            (self.symtab, b"".join(struct.pack("<IIIBBH", *s) for s in self.symbols))):
            while len(d) % 4:
                d.append(0)
            self.sections[index][4] = len(d)
            self.sections[index][5] = len(blob)
            d += blob
        for i, s in enumerate(self.sections):
            struct.pack_into("<10I", d, self.shoff + i * self.shentsize, *s)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(d)


def process_object(elf: Elf, text: tuple[int, int], names, elsewhere: set[str], log) -> bool:
    '''Folds and adds alias names; returns whether the object changed. Names in `elsewhere` are defined by another
    object of the link (another object of a unit placed object by object) and are not added.'''
    defined = elf.globals()
    changed = False
    for address, group in sorted(names.items()):
        if not (text[0] <= address < text[1]):
            continue
        have = [(name, is_function) for name, is_function in group if name in defined]
        if not have:
            continue  # the link reports the undefined names
        primary = next((name for name, is_function in have if is_function), have[0][0])
        psym = elf.symbols[defined[primary]]
        for name, _ in group:
            if name == primary:
                continue
            if name in defined:
                sym = elf.symbols[defined[name]]
                if sym[5] == psym[5] and sym[1] == psym[1]:
                    continue  # already the same place
                if elf.section_image(sym[5]) != elf.section_image(psym[5]) or sym[1] != psym[1]:
                    sys.exit(f"aliases.py: {elf.path}: {name} and {primary} are two names of {address:#010x} in "
                             f"symbols.txt, but the object defines them with different code. Define only one of "
                             f"them in the source, or remove the alias from symbols.txt.")
                sym[1], sym[2], sym[5] = psym[1], 0, psym[5]
                log(f"  {name} folded into {primary} ({address:#010x})")
            elif name in elsewhere:
                continue
            else:
                offset = len(elf.strings)
                elf.strings += name.encode() + b"\0"
                elf.symbols.append([offset, psym[1], 0, psym[3], psym[4], psym[5]])
                log(f"  {name} added as a second name of {primary} ({address:#010x})")
            changed = True
    return changed


def process(objects: list[str], config: Path, build: Path, verbose: bool) -> list[str]:
    out = []
    by_object = {}  # object path -> (.text range, alias names of its module)
    for module_dir in module_dirs(config):
        names = names_by_address(module_dir)
        for source, text in module_unit_sources(module_dir).items():
            by_object[str(build / Path(source).with_suffix(".o"))] = (text, names)
    elves = {}  # object path -> Elf, for the objects that have alias names in their range
    for line in objects:
        path = line.strip().strip('"')
        text, names = by_object.get(path, (None, {}))
        if text is not None and any(text[0] <= a < text[1] for a in names) and Path(path).exists():
            elves[path] = Elf(Path(path))
    defined_by = {}  # name -> object paths that define it
    for path, elf in elves.items():
        for name in elf.globals():
            defined_by.setdefault(name, set()).add(path)
    for line in objects:
        path = line.strip().strip('"')
        if path not in elves:
            out.append(line)
            continue
        elf = elves[path]
        text, names = by_object[path]
        elsewhere = {name for name, paths in defined_by.items() if paths - {path}}
        messages = []
        if process_object(elf, text, names, elsewhere, messages.append):
            target = build / "aliases" / Path(path).relative_to(build)
            elf.write(target)
            out.append(f'"{target.as_posix()}"')
            print(f"{path}: {len(messages)} alias names")
            if verbose:
                print("\n".join(messages))
        else:
            out.append(line)
    return out


def main() -> None:
    parser = argparse.ArgumentParser(description="Defines the alias names of compiled units")
    parser.add_argument("objects_file", type=Path, help="list of objects to link")
    parser.add_argument("--config", type=Path, required=True, help="dsd config directory, e.g. config/usa/arm9")
    parser.add_argument("--build", type=Path, required=True, help="Build directory, e.g. build/usa")
    parser.add_argument("--objects-out", type=Path, required=True, help="Output list of objects to link")
    parser.add_argument("-v", "--verbose", action="store_true", help="Print every name")
    args = parser.parse_args()
    objects = process(args.objects_file.read_text().splitlines(), args.config, args.build, args.verbose)
    args.objects_out.write_text("\n".join(objects) + "\n")


if __name__ == "__main__":
    main()

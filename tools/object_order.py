#!/usr/bin/env python3

###
# Links translation units that were built from more than one compiled object, by placing every function and data
# object of the unit individually with mwld's OBJECT(symbol, file.o) selector, in the original address order.
#
# Some original units cannot be reproduced by one compiler: their `_ZThn` thunks need mwcc 1.2/sp2 and one or two of
# their switch functions need 1.2/base. Such a unit is written as a main source file (listed in delinks.txt as usual)
# plus small extra source files that hold only the functions the other compiler has to build. The extra files are
# named in the overlay's object_order.txt, next to its delinks.txt:
#
#     src/ov009/unk_ov009_0225b880.cpp:
#         extra src/ov009/unk_ov009_0225b880_switch.cpp _ZN18Unk_ov009_0225e29c8vfunc_4cEjh
#         place __arraydtor$303 0x0225e05c
#
# This tool runs after `dsd lcf` and before tools/force_active.py. For every unit named in an object_order.txt it:
#   * finds the original address of each section of the unit's objects (mwcc emits one section per function and per
#     data object): by symbol name in symbols.txt, else from the relocations of already placed sections (relocs.txt
#     says where the original pointer at that address points), else from an explicit `place` line;
#   * checks that the placed sections tile each of the unit's delinks.txt ranges exactly;
#   * replaces the unit's `file.o(.text)`, `(.rodata)`, `(.data)` and `(.bss)` lines of the linker script with
#     OBJECT selectors in address order (`.init` and `.ctor` stay as they are);
#   * moves the overlay's bss into a MEMORY region of its own without an output file, because mwld writes
#     OBJECT-selected bss into the overlay file as zero bytes otherwise, and makes the overlays that load AFTER this
#     one start after that region;
#   * defines the other symbols.txt names of the unit's functions (labels) as linker script aliases;
#   * adds the extra objects to the list of objects to link.
# Without any object_order.txt the linker script and the object list are passed through unchanged.
#
# See tools/pipeline/linking.md, "Units built by two compilers".
#
# Usage:
#   python3 tools/object_order.py build/usa/objects.txt build/usa/arm9.lcf --config config/usa/arm9 \
#       --build build/usa -o build/usa/arm9_object_order.lcf --objects-out build/usa/objects_object_order.txt
###

import argparse
import re
import struct
import sys
from pathlib import Path

DESCRIPTION_FILE = "object_order.txt"

SHT_SYMTAB = 2
SHT_RELA = 4
SHT_NOBITS = 8
SHF_ALLOC = 2
STT_OBJECT = 1
STT_FUNC = 2
STB_LOCAL = 0
STB_GLOBAL = 1
SHN_LORESERVE = 0xff00
R_ARM_ABS32 = 2

# Sections placed with OBJECT selectors. .init and .ctor keep their file-level selectors: a unit has at most one of
# each, and both only come from the main object.
ORDERED_KINDS = (".text", ".rodata", ".data", ".bss")
# The linker script aligns every input section to 4 (ALIGNALL(4)).
SECTION_ALIGN = 4


class OrderError(Exception):
    pass


def align(value: int, to: int) -> int:
    return (value + to - 1) & ~(to - 1)


# ---------------------------------------------------------------- description file
class Unit:
    def __init__(self, source: str):
        self.source = source
        '''Main source file, as named in delinks.txt'''
        self.extras: list[tuple[str, list[str]]] = []
        '''(extra source file, symbols it provides)'''
        self.places: dict[str, int] = {}
        '''object symbol -> address, for sections whose address cannot be derived'''

    def sources(self) -> list[str]:
        return [self.source] + [source for source, _ in self.extras]


def parse_description(path: Path) -> list[Unit]:
    units = []
    for number, raw in enumerate(path.read_text().splitlines(), 1):
        line = raw.split("#", 1)[0].rstrip()
        if not line.strip():
            continue
        where = f"{path}:{number}"
        if not line[0].isspace():
            if not line.endswith(":"):
                raise OrderError(f"{where}: expected '<source file>:'")
            units.append(Unit(line[:-1].strip()))
            continue
        if not units:
            raise OrderError(f"{where}: no unit before this line")
        fields = line.split()
        if fields[0] == "extra" and len(fields) >= 3:
            units[-1].extras.append((fields[1], fields[2:]))
        elif fields[0] == "place" and len(fields) == 3:
            units[-1].places[fields[1]] = int(fields[2], 16)
        else:
            raise OrderError(f"{where}: expected 'extra <source file> <symbol>...' or 'place <symbol> <address>'")
    return units


def description_files(config: Path) -> list[Path]:
    return sorted(config.rglob(DESCRIPTION_FILE))


# ---------------------------------------------------------------- dsd config
def parse_delinks(path: Path):
    '''Returns the module's sections {name: (start, end, align)} and its units {source: {section: (start, end)}}'''
    module = {}
    units = {}
    current = None
    for line in path.read_text().splitlines():
        if not line.strip():
            continue
        if not line[0].isspace():
            current = units.setdefault(line.strip().rstrip(":"), {})
            continue
        match = re.match(r"\s*(\.\S+)\s+start:(0x[0-9a-fA-F]+) end:(0x[0-9a-fA-F]+)(?:.*align:(\d+))?", line)
        if not match:
            continue
        start, end = int(match[2], 16), int(match[3], 16)
        if current is None:
            module[match[1]] = (start, end, int(match[4] or 4))
        else:
            current[match[1]] = (start, end)
    return module, units


def parse_symbols(path: Path) -> list[tuple[str, int, str]]:
    '''Returns (name, address, kind) of every symbol'''
    symbols = []
    for line in path.read_text().splitlines():
        match = re.match(r"(\S+) kind:(\S+) addr:(0x[0-9a-fA-F]+)", line)
        if match:
            symbols.append((match[1], int(match[3], 16), match[2]))
    return symbols


def parse_relocs(path: Path) -> dict[int, int]:
    '''Returns {address of a pointer: where it points} for the module's data pointers (kind:load)'''
    relocs = {}
    for line in path.read_text().splitlines():
        match = re.match(r"from:(0x[0-9a-fA-F]+) kind:load to:(0x[0-9a-fA-F]+)(?: add:(-?0x[0-9a-fA-F]+))?", line)
        if match:
            relocs[int(match[1], 16)] = int(match[2], 16) + (int(match[3], 16) if match[3] else 0)
    return relocs


# ---------------------------------------------------------------- ELF objects
class Section:
    def __init__(self, obj: "Object", index: int, kind: str, size: int):
        self.obj = obj
        self.index = index
        self.kind = kind
        self.size = size
        self.symbols: list[tuple[str, int, int]] = []
        '''(name, binding, type) of the function/object symbols at the start of the section'''
        self.relocs: list[tuple[int, int, int]] = []
        '''(offset, symbol index, addend) of the section's absolute pointers'''
        self.address: int | None = None
        self.evidence = ""

    def selector(self) -> str:
        '''Name to select this section by: a symbols.txt name if it has one, else a global, else a local symbol'''
        if not self.symbols:
            raise OrderError(f"{self.obj.path}: section {self.index} ({self.kind}) has no symbol to select it by")
        names = [name for name, _, _ in self.symbols]
        for name in names:
            if name == self.evidence_name:
                return name
        for name, binding, _ in self.symbols:
            if binding != STB_LOCAL:
                return name
        if sum(1 for s in self.obj.sections.values() if names[0] in [n for n, _, _ in s.symbols]) > 1:
            raise OrderError(f"{self.obj.path}: local symbol {names[0]} names more than one section")
        return names[0]

    evidence_name = None


class Object:
    def __init__(self, path: Path):
        self.path = path
        self._global_names = None
        try:
            data = path.read_bytes()
        except FileNotFoundError:
            raise OrderError(f"{path} does not exist yet (it is compiled by the same build; run ninja again)")
        (e_shoff,) = struct.unpack_from("<I", data, 0x20)
        e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", data, 0x2e)
        headers = [struct.unpack_from("<10I", data, e_shoff + i * e_shentsize) for i in range(e_shnum)]

        def string(table, offset):
            start = table[4] + offset
            return data[start:data.index(b"\0", start)].decode()

        self.sections: dict[int, Section] = {}
        for index, header in enumerate(headers):
            name = string(headers[e_shstrndx], header[0])
            if header[2] & SHF_ALLOC and header[5] and name in ORDERED_KINDS + (".init",):
                self.sections[index] = Section(self, index, name, header[5])

        self.symbols: list[tuple[str, int, int, int, int]] = []
        '''(name, value, type, binding, section index)'''
        for header in headers:
            if header[1] != SHT_SYMTAB:
                continue
            for i in range(0, header[5], 16):
                name, value, _, info, _, shndx = struct.unpack_from("<IIIBBH", data, header[4] + i)
                self.symbols.append((string(headers[header[6]], name), value, info & 15, info >> 4, shndx))
        for name, value, type, binding, shndx in self.symbols:
            if name in ("$a", "$t", "$d", "$b"):
                continue  # mapping symbols
            if shndx in self.sections and type in (STT_OBJECT, STT_FUNC) and value & ~1 == 0:
                self.sections[shndx].symbols.append((name, binding, type))

        for header in headers:
            if header[1] != SHT_RELA or header[7] not in self.sections:
                continue
            for i in range(0, header[5], 12):
                offset, info, addend = struct.unpack_from("<IIi", data, header[4] + i)
                if info & 0xff == R_ARM_ABS32:
                    self.sections[header[7]].relocs.append((offset, info >> 8, addend))

    def global_names(self) -> set[str]:
        if self._global_names is None:
            self._global_names = {name for name, _, _, binding, shndx in self.symbols
                                  if binding != STB_LOCAL and 0 < shndx < SHN_LORESERVE}
        return self._global_names

    def section_named(self, name: str) -> Section | None:
        found = [s for s in self.sections.values() if name in [n for n, _, _ in s.symbols]]
        if len(found) > 1:
            raise OrderError(f"{self.path}: {name} names more than one section")
        return found[0] if found else None


# ---------------------------------------------------------------- placement
class Placement:
    '''Original addresses of the sections of one unit's objects'''

    def __init__(self, module: str, unit: Unit, ranges: dict, module_sections: dict, symbols, relocs, build: Path):
        self.module = module
        self.unit = unit
        self.ranges = ranges
        self.module_sections = module_sections
        self.symbols = symbols
        self.relocs = relocs
        self.main = Object(build / Path(unit.source).with_suffix(".o"))
        self.extras = [(Object(build / Path(source).with_suffix(".o")), provided) for source, provided in unit.extras]
        self.objects = [self.main] + [obj for obj, _ in self.extras]
        self.placed: dict[str, list[Section]] = {}

    def kind_of(self, address: int) -> str | None:
        for kind in ORDERED_KINDS:
            if kind in self.ranges and self.ranges[kind][0] <= address < self.ranges[kind][1]:
                return kind
        return None

    def assign(self, section: Section, address: int, evidence: str, name: str | None = None):
        if section.kind == ".init":
            return
        if section.address is not None:
            if section.address != address:
                raise OrderError(
                    f"{section.obj.path}: {section.symbols[0][0] if section.symbols else section.index} is at "
                    f"{section.address:#010x} according to {section.evidence} but at {address:#010x} according to "
                    f"{evidence}")
            return
        if self.kind_of(address) != section.kind:
            raise OrderError(
                f"{section.obj.path}: {section.symbols[0][0] if section.symbols else section.index} ({section.kind}) "
                f"would be placed at {address:#010x} ({evidence}), outside the unit's {section.kind} range")
        section.address = address
        section.evidence = evidence
        section.evidence_name = name

    def owner(self, name: str) -> Object | None:
        '''Object that provides a global symbol: the extra file that lists it, else the main object'''
        for obj, provided in self.extras:
            if name in provided:
                return obj
        for obj in self.objects:
            if name in obj.global_names():
                return obj
        return None

    def resolve(self):
        # 1. Sections named in symbols.txt
        provided_by_extra = {name for _, provided in self.extras for name in provided}
        for obj, provided in self.extras:
            for name in provided:
                if obj.section_named(name) is None:
                    raise OrderError(f"{obj.path} does not define {name}, which {DESCRIPTION_FILE} says it provides")
        for name, address, _ in self.symbols:
            if self.kind_of(address) is None:
                continue
            obj = self.owner(name)
            if obj is None or (obj is not self.main and name not in provided_by_extra):
                continue
            section = obj.section_named(name)
            if section is not None and section.kind == self.kind_of(address):
                self.assign(section, address, "symbols.txt", name)

        # 2. Explicit addresses
        for name, address in self.unit.places.items():
            sections = [s for s in (obj.section_named(name) for obj in self.objects) if s is not None]
            if len(sections) != 1:
                raise OrderError(f"{self.unit.source}: 'place {name}' matches {len(sections)} sections")
            self.assign(sections[0], address, DESCRIPTION_FILE, name)

        # 3. Sections that placed code or data points to. The static initialiser is placed by the linker script's
        #    own .init selector, at the start of the unit's .init range.
        init = [s for s in self.main.sections.values() if s.kind == ".init"]
        if ".init" in self.ranges and len(init) == 1:
            init[0].address = self.ranges[".init"][0]
        changed = True
        while changed:
            changed = False
            for obj in self.objects:
                for section in obj.sections.values():
                    if section.address is None:
                        continue
                    for offset, symbol, addend in section.relocs:
                        to = self.relocs.get(section.address + offset)
                        if to is None:
                            continue
                        name, value, _, binding, shndx = obj.symbols[symbol]
                        target_obj = obj
                        if shndx == 0 and binding != STB_LOCAL:
                            target_obj = self.owner(name)
                            if target_obj is None:
                                continue
                            found = [(v, i) for n, v, _, b, i in target_obj.symbols
                                     if n == name and b != STB_LOCAL and 0 < i < SHN_LORESERVE]
                            if not found:
                                continue
                            value, shndx = found[0]
                        target = target_obj.sections.get(shndx)
                        if target is None or target.address is not None or target.kind == ".init":
                            continue
                        if self.kind_of(to & ~1) != target.kind:
                            continue
                        if target_obj is not self.main and target.symbols and all(
                                b != STB_LOCAL and n not in provided_by_extra for n, b, _ in target.symbols):
                            # A global that the extra file does not provide: the main object's copy is the one used
                            continue
                        if target.kind == ".text":
                            address = (to & ~1) - (value & ~1)
                        else:
                            address = to - addend - value
                        self.assign(target, address, f"the pointer at {section.address + offset:#010x}")
                        changed = True

        for obj in self.objects:
            for section in obj.sections.values():
                if section.address is not None and section.kind != ".init":
                    self.placed.setdefault(section.kind, []).append(section)
        for sections in self.placed.values():
            sections.sort(key=lambda s: s.address)

    def unplaced(self, kinds) -> list[Section]:
        return [s for obj in self.objects for s in obj.sections.values() if s.address is None and s.kind in kinds]

    def check(self):
        '''The placed sections must cover each range of the unit exactly'''
        for kind in ORDERED_KINDS:
            if kind not in self.ranges:
                if self.placed.get(kind):
                    raise OrderError(f"{self.unit.source}: has {kind} objects but no {kind} range in delinks.txt")
                continue
            start, end = self.ranges[kind]
            position = start
            for section in self.placed.get(kind, []):
                position = align(position, SECTION_ALIGN)
                if section.address != position:
                    problem = "overlaps the previous object" if section.address < position else "leaves a hole"
                    raise OrderError(
                        f"{self.unit.source}: {kind} object {section.selector()} at {section.address:#010x} "
                        f"{problem}: expected an object at {position:#010x}" + self.hint(kind, position))
                position += section.size
            module_end = self.module_sections[kind][1] if kind in self.module_sections else None
            module_align = self.module_sections[kind][2] if kind in self.module_sections else SECTION_ALIGN
            if align(position, SECTION_ALIGN) != end and not (
                    end == module_end and align(position, module_align) == end):
                raise OrderError(
                    f"{self.unit.source}: {kind} objects end at {position:#010x}, the unit's range ends at "
                    f"{end:#010x}" + self.hint(kind, align(position, SECTION_ALIGN)))

    def hint(self, kind: str, address: int) -> str:
        names = [name for name, a, _ in self.symbols if a == address]
        left = [s.selector() for s in self.unplaced((kind,)) if s.symbols]
        text = f" (symbols.txt: {', '.join(names)})" if names else ""
        if left:
            text += f"; unplaced {kind} objects: {', '.join(left[:12])}" + (" ..." if len(left) > 12 else "")
        return text

    def selectors(self, kind: str) -> list[str]:
        return [f"OBJECT({section.selector()}, {section.obj.path.name})" for section in self.placed.get(kind, [])]

    def aliases(self) -> list[str]:
        '''Other symbols.txt names of the unit's functions, which no object defines'''
        defined = set()
        for obj in self.objects:
            defined |= obj.global_names()
        by_address = {section.address: section for section in self.placed.get(".text", [])}
        lines = []
        for name, address, kind in self.symbols:
            section = by_address.get(address)
            if section is None or name in defined or not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", name):
                continue
            match = re.match(r"(?:function|label)\((thumb|arm)", kind)
            if not match:
                continue
            target = section.selector()
            if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", target):
                continue
            lines.append(f"{name} = {target}{' + 1' if match[1] == 'thumb' else ''};")
        return lines


# ---------------------------------------------------------------- linker script
def replace_selector(block: str, obj_name: str, kind: str, selectors: list[str], where: str) -> str:
    pattern = re.compile(r"^([ \t]*)" + re.escape(obj_name) + r"\(" + re.escape(kind) + r"\)[ \t]*$", re.M)
    match = pattern.search(block)
    if not match:
        raise OrderError(f"{where}: the linker script has no '{obj_name}({kind})' line to replace")
    text = "\n".join(match[1] + selector for selector in selectors)
    return block[:match.start()] + text + block[match.end():]


def split_bss(lcf: str, module: str) -> str:
    '''Moves a module's bss into its own MEMORY region, which has no output file'''
    region = module.upper()
    bss_region = f"UNINITIALIZED_{region}"  # must not start with OV: dsd reads such regions as overlays
    if bss_region in lcf:
        return lcf
    # Modules placed after this one have to start after its bss
    lcf = re.sub(r"AFTER\([^)]*\)", lambda m: re.sub(rf"\b{region}\b", bss_region, m[0]), lcf)
    memory = re.search(rf"^([ \t]*){region} :[^\n]*$", lcf, re.M)
    if not memory:
        raise OrderError(f"the linker script has no MEMORY region {region}")
    lcf = lcf[:memory.end()] + f"\n{memory[1]}{bss_region} : ORIGIN = AFTER({region})" + lcf[memory.end():]
    pattern = re.compile(
        rf"(?P<head>^    \.{module} : \{{\n.*?)"
        rf"(?P<bss>^[ \t]*\. = ALIGN\(\d+\);\n[ \t]*{region}_BSS_START = \.;\n.*?)"
        rf"(?P<tail>^    \}} > {region}$)", re.S | re.M)
    match = pattern.search(lcf)
    if not match:
        raise OrderError(f"the linker script has no bss part in section .{module}")
    replacement = (f"{match['head']}    }} > {region}\n\n    .{module}_bss : {{\n        ALIGNALL({SECTION_ALIGN});\n"
                   f"{match['bss']}    }} > {bss_region}")
    return lcf[:match.start()] + replacement + lcf[match.end():]


def module_block(lcf: str, module: str) -> re.Match:
    match = re.search(rf"^    \.{module} : \{{\n.*?^    \}} > {module.upper()}$", lcf, re.S | re.M)
    if not match:
        raise OrderError(f"the linker script has no section .{module}")
    return match


def process(lcf: str, objects: list[str], config: Path, build: Path, verbose: bool) -> tuple[str, list[str]]:
    aliases = []
    for description in description_files(config):
        module_dir = description.parent
        module = module_dir.name
        if module_dir.parent.name != "overlays":
            raise OrderError(f"{description}: only overlays are supported")
        module_sections, delink_units = parse_delinks(module_dir / "delinks.txt")
        symbols = parse_symbols(module_dir / "symbols.txt")
        relocs = parse_relocs(module_dir / "relocs.txt")
        has_bss = False
        for unit in parse_description(description):
            if unit.source not in delink_units:
                raise OrderError(f"{description}: {unit.source} is not a unit of {module_dir / 'delinks.txt'}")
            placement = Placement(module, unit, delink_units[unit.source], module_sections, symbols, relocs, build)
            placement.resolve()
            placement.check()

            block = module_block(lcf, module)
            text = block[0]
            for kind in ORDERED_KINDS:
                if kind in placement.ranges:
                    text = replace_selector(text, placement.main.path.name, kind, placement.selectors(kind),
                                            unit.source)
            lcf = lcf[:block.start()] + text + lcf[block.end():]
            has_bss = has_bss or bool(placement.placed.get(".bss"))
            aliases += placement.aliases()

            main_line = f'"{placement.main.path.as_posix()}"'
            if main_line not in objects:
                raise OrderError(f"{unit.source} is not linked (is it marked complete in delinks.txt?)")
            at = objects.index(main_line) + 1
            objects[at:at] = [f'"{obj.path.as_posix()}"' for obj, _ in placement.extras]

            print(f"{unit.source}: " + ", ".join(
                f"{len(placement.placed.get(kind, []))} {kind}" for kind in ORDERED_KINDS if kind in placement.ranges)
                + f" objects placed, {len(placement.aliases())} aliases")
            if verbose:
                for kind in ORDERED_KINDS:
                    for section in placement.placed.get(kind, []):
                        print(f"  {section.address:#010x} {section.size:#6x} {section.obj.path.name} "
                              f"{section.selector()}  [{section.evidence}]")
                for section in placement.unplaced(ORDERED_KINDS):
                    names = ", ".join(name for name, _, _ in section.symbols) or f"section {section.index}"
                    print(f"  not placed: {section.obj.path.name} {section.kind} {names}")
        if has_bss:
            lcf = split_bss(lcf, module)

    if aliases:
        end = lcf.rindex("}")
        lcf = lcf[:end] + "\n" + "".join(f"    {line}\n" for line in aliases) + lcf[end:]
    return lcf, objects


def main() -> None:
    parser = argparse.ArgumentParser(description="Places the objects of units named in object_order.txt files")
    parser.add_argument("objects_file", type=Path, help="objects.txt generated by dsd lcf")
    parser.add_argument("lcf", type=Path, help="Linker script generated by dsd lcf")
    parser.add_argument("--config", type=Path, required=True, help="dsd config directory, e.g. config/usa/arm9")
    parser.add_argument("--build", type=Path, required=True, help="Build directory, e.g. build/usa")
    parser.add_argument("-o", type=Path, dest="out", required=True, help="Output linker script")
    parser.add_argument("--objects-out", type=Path, required=True, help="Output list of objects to link")
    parser.add_argument("-v", "--verbose", action="store_true", help="Print every placed and unplaced object")
    args = parser.parse_args()

    try:
        lcf, objects = process(args.lcf.read_text(), args.objects_file.read_text().splitlines(),
                               args.config, args.build, args.verbose)
    except OrderError as error:
        sys.exit(f"object_order.py: {error}")
    args.out.write_text(lcf)
    args.objects_out.write_text("\n".join(objects) + "\n")


if __name__ == "__main__":
    main()

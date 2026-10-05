#!/usr/bin/env python3

###
# Lets a compiled unit own sections in a module other than its own: placeholder units.
#
# A dsd unit belongs to one module, and `dsd lcf` refuses a source file that is listed in two delinks.txt files
# ("Delink file name ... already used"). Two kinds of units need ranges in a second module:
#
# * `.bss` - the ARM9 main module has no .bss of its own: the zero-initialised objects of its files are the first part
#   of the bss-only autoload `autoload_3`, and so are those of the library modules autoload_2 and itcm. The bss part
#   of such a unit is listed in config/<version>/arm9/autoload_3/delinks.txt under a placeholder name, the unit's own
#   name with `.bss` before the extension:
#
#     config/usa/arm9/delinks.txt                  config/usa/arm9/autoload_3/delinks.txt
#         src/main/unk_0209c37c.cpp:                   src/main/unk_0209c37c.bss.cpp:
#             complete                                     complete
#             .text  start:0x0209c37c end:0x0209c390       .bss   start:0x021d7168 end:0x021d726c
#
# * `.main` - a library unit (autoload_2, itcm) whose file has a static initialiser: the original linker put every
#   file's `.init` (`__sinit_<file>`) and `.ctor` word into the main module, behind main's own (and the C++
#   runtime's `.exception` data there as well). The unit's ranges in main are listed in config/<version>/arm9/
#   delinks.txt under the unit's name with `.main` before the extension:
#
#     config/usa/arm9/autoload_2/delinks.txt       config/usa/arm9/delinks.txt
#         src/autoload_2/unk_020f0dec.cpp:             src/autoload_2/unk_020f0dec.main.cpp:
#             complete                                     complete
#             .text  start:0x020f0dec end:0x020f0fb4       .init  start:0x020c6080 end:0x020c6094
#                                                          .ctor  start:0x020d1f50 end:0x020d1f54
#
# A placeholder has no source file. dsd splits the module's gap objects at the placeholder's ranges and writes
# `unk_0209c37c.bss.o(.bss)` (`unk_020f0dec.main.o(.init)`, `...(.ctor)`) between the gap pieces in the linker
# script. This tool, which runs right after `dsd lcf`, renames each of those selectors to the real object,
# `unk_0209c37c.o(.bss)`, and removes the placeholder from the list of objects to link, so those sections of the
# unit's object land in the second module at the placeholder's ranges (mwld takes a `file.o(.section)` selector
# where it stands, in whatever output section). Nothing else changes; without a placeholder unit the step is not
# part of the build.
#
# DTCM units. NitroSDK places objects in DTCM with `#pragma section DTCM begin` ... `end`; with the one-name section
# definition `#pragma define_section DTCM ".dtcm" abs32 RWX` mwcc emits them, zero objects included, as `.dtcm`
# sections (see src/dtcm/unk_027e0000.c). dsd selects a unit's `.data` only, so this step adds the unit's `.dtcm`
# right after it (`unk_027e0000.o(.data)` is followed by `unk_027e0000.o(.dtcm)`) for every complete unit of
# config/<version>/arm9/dtcm/delinks.txt. A unit has one or the other; the step also runs when there are DTCM units
# but no placeholders.
#
# Usage:
#   python3 tools/bss_units.py build/usa/objects.txt build/usa/arm9.lcf --config config/usa/arm9 \
#       -o build/usa/arm9_bss_units.lcf --objects-out build/usa/objects_bss_units.txt
###

import argparse
import re
import sys
from pathlib import Path

SUFFIX = ".bss"  # a unit's bss in autoload_3
MAIN_SUFFIX = ".main"  # a library unit's sections in the main module
# the sections each kind of placeholder may list
PLACEHOLDER_SECTIONS = {SUFFIX: (".bss",), MAIN_SUFFIX: (".init", ".ctor", ".exception", ".exceptix")}


def placeholder_suffix(source: str) -> str | None:
    '''`.bss` / `.main` for a placeholder unit name (src/main/unk_x.bss.cpp), else None'''
    suffix = Path(source).with_suffix("").suffix
    return suffix if suffix in PLACEHOLDER_SECTIONS else None


def placeholder_name(source: str, suffix: str) -> str:
    '''src/autoload_2/unk_x.c -> src/autoload_2/unk_x<suffix>.c'''
    path = Path(source)
    return str(path.with_name(path.stem + suffix + path.suffix))


def placeholders(config: Path) -> list[tuple[Path, str]]:
    '''(delinks.txt, placeholder source) of every placeholder unit in the config'''
    found = []
    for delinks in sorted(config.rglob("delinks.txt")):
        for line in delinks.read_text().splitlines():
            if line and not line[0].isspace() and line.rstrip().endswith(":"):
                source = line.rstrip()[:-1].strip()
                if placeholder_suffix(source):
                    found.append((delinks, source))
    return found


DTCM_MODULE = "dtcm"  # the module whose units may emit `.dtcm` sections


def dtcm_units(config: Path) -> list[str]:
    '''the complete units of the DTCM module'''
    delinks = config / DTCM_MODULE / "delinks.txt"
    if not delinks.is_file():
        return []
    return [unit for unit, complete in unit_names(delinks).items() if complete]


def real_source(placeholder: str) -> str:
    path = Path(placeholder)
    return str(path.with_name(path.with_suffix("").with_suffix("").name + path.suffix))


def unit_names(delinks: Path) -> dict[str, bool]:
    '''{source: complete} for every unit of a delinks.txt'''
    units = {}
    current = None
    for line in delinks.read_text().splitlines():
        if line and not line[0].isspace() and line.rstrip().endswith(":"):
            current = line.rstrip()[:-1].strip()
            units[current] = False
        elif current and line.strip() == "complete":
            units[current] = True
    return units


def unit_sections(delinks: Path, unit: str) -> list[str]:
    '''the section names that one unit of a delinks.txt lists'''
    sections = []
    current = None
    for line in delinks.read_text().splitlines():
        if line and not line[0].isspace():
            current = line.rstrip()[:-1].strip() if line.rstrip().endswith(":") else None
            continue
        match = re.match(r"\s+(\.\S+)\s+start:", line)
        if match and current == unit:
            sections.append(match.group(1))
    return sections


def process(lcf: str, objects: list[str], config: Path) -> tuple[str, list[str]]:
    owner = {}  # complete unit -> its delinks.txt
    for delinks in config.rglob("delinks.txt"):
        for unit, complete in unit_names(delinks).items():
            if complete:
                owner.setdefault(unit, delinks)
    for delinks, placeholder in placeholders(config):
        suffix = placeholder_suffix(placeholder)
        source = real_source(placeholder)
        if not unit_names(delinks).get(placeholder):
            sys.exit(f"bss_units.py: {delinks}: {placeholder} must be marked complete")
        if source not in owner:
            sys.exit(f"bss_units.py: {delinks}: {placeholder} holds sections of {source}, which is not a complete "
                     f"unit of any delinks.txt")
        if owner[source] == delinks:
            sys.exit(f"bss_units.py: {delinks}: {placeholder} and {source} are in the same delinks.txt; a "
                     f"placeholder holds the unit's ranges in another module")
        sections = unit_sections(delinks, placeholder)
        wrong = [s for s in sections if s not in PLACEHOLDER_SECTIONS[suffix]]
        if wrong or not sections:
            sys.exit(f"bss_units.py: {delinks}: {placeholder} lists {', '.join(wrong) or 'no section'}; a `{suffix}` "
                     f"placeholder holds {', '.join(PLACEHOLDER_SECTIONS[suffix])}")
        stem = Path(source).with_suffix("").name
        for section in sections:
            pattern = re.compile(r"^([ \t]*)" + re.escape(f"{stem}{suffix}.o({section})") + r"[ \t]*$", re.M)
            if section == ".exceptix" and not pattern.findall(lcf):
                # no selector: the linker script's EXCEPTION directive builds main's exception index from the
                # .exceptix sections of all linked objects, sorted by function address. The placeholder's range
                # only makes dsd leave those entries out of its delinked objects.
                continue
            if len(pattern.findall(lcf)) != 1:
                sys.exit(f"bss_units.py: the linker script has no single '{stem}{suffix}.o({section})' line for "
                         f"{placeholder}")
            lcf = pattern.sub(lambda m: f"{m[1]}{stem}.o({section})", lcf)
    for source in dtcm_units(config):
        stem = Path(source).with_suffix("").name
        pattern = re.compile(r"^([ \t]*)" + re.escape(f"{stem}.o(.data)") + r"[ \t]*$", re.M)
        if len(pattern.findall(lcf)) != 1:
            sys.exit(f"bss_units.py: the linker script has no single '{stem}.o(.data)' line for the DTCM unit {source}")
        lcf = pattern.sub(lambda m: f"{m[1]}{stem}.o(.data)\n{m[1]}{stem}.o(.dtcm)", lcf)
    # dsd lists the placeholder's object under the real object's name or under its own, depending on the version
    kept = []
    for line in objects:
        path = Path(line.strip().strip('"'))
        if path.with_suffix("").suffix in PLACEHOLDER_SECTIONS or line in kept:
            continue
        kept.append(line)
    return lcf, kept


def main() -> None:
    parser = argparse.ArgumentParser(description="Gives units their ranges in a second module (placeholder units)")
    parser.add_argument("objects_file", type=Path, help="objects.txt generated by dsd lcf")
    parser.add_argument("lcf", type=Path, help="Linker script generated by dsd lcf")
    parser.add_argument("--config", type=Path, required=True, help="dsd config directory, e.g. config/usa/arm9")
    parser.add_argument("-o", type=Path, dest="out", required=True, help="Output linker script")
    parser.add_argument("--objects-out", type=Path, required=True, help="Output list of objects to link")
    args = parser.parse_args()
    lcf, objects = process(args.lcf.read_text(), args.objects_file.read_text().splitlines(), args.config)
    args.out.write_text(lcf)
    args.objects_out.write_text("\n".join(objects) + "\n")


if __name__ == "__main__":
    main()

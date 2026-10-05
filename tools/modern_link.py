#!/usr/bin/env python3
"""Generate the GNU ld linker script of the modern build (see docs/modern.md, "Linking").

The script reproduces the module layout that dsd's `rom config` reads from a linked ELF, the same layout the
matching build gets from mwld:
  * one output section per module, named like the module's mwld memory region (ARM9, ITCM, DTCM, AUTOLOAD_2,
    AUTOLOAD_3, OV000...), plus `<MODULE>.bss` (NOLOAD) for the bss of DTCM and the overlays;
  * `<MODULE>_<SECTION>_START/_END` around each section that the module's delinks.txt lists;
  * `<MODULE>_CTOR_START/_END` around a zero-terminated table of static-initialiser pointers (GCC's .init_array),
    the table that __call_static_initializers (main) and FS_StartOverlay (overlays) walk;
  * the overlays placed after the modules they are loaded with, like mwld's MEMORY `AFTER()` list in the matching
    build's arm9.lcf.
Objects go to the module of their source directory (src/main -> ARM9, src/ovNNN -> OVNNN, ...); the bss of main and
of the libraries is in AUTOLOAD_3, as in the original. Object order within a module follows the matching linker script.

Names that symbols.txt gives to addresses the compiled objects do not name themselves (second names of a function,
labels inside a data object) are PROVIDEd relative to the object that contains them.

Usage: modern_link.py --config config/usa/arm9 --lcf build/usa/arm9.lcf --order-lcf build/usa/arm9_force_active.lcf
           --objects <objects.txt> --nm <nm> -o <script.ld>
"""
import argparse
import bisect
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

import yaml


SECTION_INPUTS = {
    "text": [".text", ".text.*", ".gnu.linkonce.t.*", ".init", ".glue_7", ".glue_7t", ".vfp11_veneer", ".v4_bx"],
    "rodata": [".rodata", ".rodata.*", ".gnu.linkonce.r.*", ".data.rel.ro", ".data.rel.ro.*"],
    "ctor": [".init_array", ".init_array.*", ".ctor", ".ctors"],
    "data": [".data", ".data.*", ".gnu.linkonce.d.*"],
    "bss": [".bss", ".bss.*", "COMMON", ".gnu.linkonce.b.*"],
}
# delinks.txt section names -> the group of input sections that fills them (others stay empty)
GROUP_OF = {".text": "text", ".rodata": "rodata", ".ctor": "ctor", ".data": "data", ".bss": "bss"}


def parse_args():
    p = argparse.ArgumentParser()
    p.add_argument("--config", type=Path, required=True)
    p.add_argument("--lcf", type=Path, required=True, help="matching build's arm9.lcf (MEMORY AFTER lists)")
    p.add_argument("--order-lcf", type=Path, required=True, help="matching build's final linker script (object order)")
    p.add_argument("--objects", type=Path, required=True, help="file with the objects to link, one per line")
    p.add_argument("--nm", required=True)
    p.add_argument("-o", "--output", type=Path, required=True)
    return p.parse_args()


def module_sections(delinks: Path) -> list[tuple[str, str]]:
    """(name, kind) of the sections in the header of a delinks.txt"""
    out = []
    for line in delinks.read_text().splitlines():
        if not line.strip():
            break
        m = re.match(r"\s*(\S+)\s+start:\S+\s+end:\S+\s+kind:(\w+)", line)
        if m:
            out.append((m.group(1), m.group(2)))
    return out


def read_symbols(path: Path) -> list[tuple[str, str, int]]:
    out = []
    for line in path.read_text().splitlines():
        m = re.match(r"(\S+)\s+kind:(\S+)\s+addr:(0x[0-9a-fA-F]+)", line)
        if m:
            out.append((m.group(1), m.group(2), int(m.group(3), 16)))
    return out


def memory_after(lcf: Path) -> dict[str, list[str]]:
    deps = {}
    in_memory = False
    for line in lcf.read_text().splitlines():
        if line.startswith("MEMORY"):
            in_memory = True
            continue
        if in_memory and line.startswith("}"):
            break
        m = re.match(r"\s*(\w+)\s*:\s*ORIGIN\s*=\s*AFTER\(([^)]*)\)", line)
        if m:
            deps[m.group(1)] = [d.strip() for d in m.group(2).split(",")]
    return deps


def object_order(lcf: Path) -> list[str]:
    """Object stems in order of first appearance in the matching linker script"""
    seen = {}
    for m in re.finditer(r"(?:OBJECT\(\s*[^,]+,\s*|^\s+)([A-Za-z0-9_@.]+?)(?:\.main|\.bss)?\.o\b", lcf.read_text(), re.M):
        seen.setdefault(m.group(1), len(seen))
    return list(seen)


def object_module(obj: str) -> str:
    stem = Path(obj).name
    m = re.match(r"_dsd_gap@(\w+?)_\d+\.o$", stem)  # build/modern_usa/gaps/ copies of the matching build's gaps
    if m:
        name = m.group(1)
        return "ARM9" if name == "main" else name.upper()
    parts = Path(obj).parts
    if "src" not in parts:
        return "ARM9"  # modern/: support code of the modern build
    i = parts.index("src")
    d = parts[i + 1]
    return {"main": "ARM9", "itcm": "ITCM", "dtcm": "DTCM", "autoload_2": "AUTOLOAD_2"}.get(d, d.upper())


def defined_symbols(nm: str, objects: list[str]) -> set[str]:
    out = subprocess.run([nm, "--defined-only", "-g", *objects], capture_output=True, text=True, check=True).stdout
    names = set()
    for line in out.splitlines():
        parts = line.split()
        if len(parts) == 3:
            names.add(parts[2])
    return names


# Per-variable sections (GCC -fdata-sections) that must start on a 32-byte boundary: the variables that the
# original image has at 32-byte aligned addresses. NitroSDK aligns DMA, cache-maintained and PXI buffers with
# ATTRIBUTE_ALIGN(32); the decompiled declarations don't say so (the matching build places every object at its
# original address anyway), and code such as CTRDGi_SendtoPxi passes such addresses in 32-byte units.
ALIGNED_SECTIONS: dict[str, list[str]] = {}
# Per object and group (data/bss/rodata): its per-variable sections with the variables' original addresses, in that
# order. Variables the original has at 32-byte aligned addresses are aligned again: NitroSDK aligns DMA,
# cache-maintained and PXI buffers with ATTRIBUTE_ALIGN(32).
ORDERED_SECTIONS: dict[str, dict[str, list[tuple[str, int]]]] = {}
# Gap objects (bytes no source file owns yet, delinked from the original): original start address modulo 32
GAP_PHASE: dict[str, int] = {}


def object_sections(objdump: str, objects: list[str]) -> dict[str, list[str]]:
    out = subprocess.run([objdump, "-h", *objects], capture_output=True, text=True, check=True).stdout
    result, current = {}, None
    for line in out.splitlines():
        m = re.match(r"^(\S+\.o):\s+file format", line)
        if m:
            current = result.setdefault(m.group(1), [])
            continue
        parts = line.split()
        if current is not None and len(parts) >= 7 and parts[0].isdigit():
            current.append(parts[1])
    return result


def inputs(objs: list[str], group: str, keep: bool = False) -> list[str]:
    pats = " ".join(SECTION_INPUTS[group])
    if keep:
        return [f'        KEEP("{o}"({pats}))' for o in objs]
    lines = []
    for o in objs:
        if o in GAP_PHASE and group != "text":
            # a gap keeps the original relative layout of its bytes: start it at its original address modulo 32
            phase = GAP_PHASE[o]
            lines.append(f"        . = ALIGN(32) + {phase:#x};" if phase else "        . = ALIGN(32);")
        if group in ("data", "bss", "rodata"):
            # the object's variables in their original address order: code that reaches one variable from another
            # (a record split over two variables, a table indexed past its declared end) keeps working as long as
            # the variables have their original sizes
            for sec, addr in ORDERED_SECTIONS.get(o, {}).get(group, ()):
                align = "ALIGN(32)" if addr % 32 == 0 else None
                lines.append(f'        {". = " + align + "; " if align else ""}"{o}"({sec})')
        lines.append(f'        "{o}"({pats})')
    return lines


def main():
    args = parse_args()
    config = yaml.safe_load((args.config / "config.yaml").read_text())
    objects = [l.strip() for l in args.objects.read_text().splitlines() if l.strip()]

    order = {stem: i for i, stem in enumerate(object_order(args.order_lcf))}
    by_module = defaultdict(list)
    for obj in objects:
        by_module[object_module(obj)].append(obj)
    for mod, objs in by_module.items():
        objs.sort(key=lambda o: order.get(Path(o).stem, len(order)))

    deps = memory_after(args.lcf)

    aligned_names = set()
    for path in sorted(args.config.glob("**/symbols.txt")):
        for name, kind, addr in read_symbols(path):
            if kind.startswith(("data", "bss")) and addr % 32 == 0:
                aligned_names.add(name)
    all_symbol_addrs = {}
    for path in sorted(args.config.glob("**/symbols.txt")):
        for name, kind, addr in read_symbols(path):
            all_symbol_addrs.setdefault(name, addr)
    for obj in objects:
        if "/gaps/" not in obj:
            continue
        out = subprocess.run([args.nm, obj], capture_output=True, text=True, check=True).stdout
        for line in out.splitlines():
            parts = line.split()
            if len(parts) == 3 and parts[1] in "bBdDrR" and parts[2] in all_symbol_addrs:
                GAP_PHASE[obj] = (all_symbol_addrs[parts[2]] - int(parts[0], 16)) % 32
                break
    module_symbols = {}
    module_dirs = {"ARM9": args.config, "ITCM": args.config / "itcm", "DTCM": args.config / "dtcm",
                   "AUTOLOAD_2": args.config / "autoload_2", "AUTOLOAD_3": args.config / "autoload_3"}
    for o in config["overlays"]:
        module_dirs[f"OV{o['id']:03}"] = args.config / "overlays" / f"ov{o['id']:03}"
    for mod, d in module_dirs.items():
        if (d / "symbols.txt").is_file():
            module_symbols[mod] = {name: addr for name, kind, addr in read_symbols(d / "symbols.txt")
                                   if kind.startswith(("data", "bss"))}
    for obj, secs in object_sections(args.nm.replace("-nm", "-objdump"), objects).items():
        mod = object_module(obj)
        tables = [module_symbols.get(mod, {}), module_symbols.get("AUTOLOAD_3", {})]
        groups = {}
        for s in secs:
            for group, prefix in (("bss", ".bss."), ("data", ".data."), ("rodata", ".rodata.")):
                if s.startswith(prefix):
                    name = s[len(prefix):]
                    addr = next((tb[name] for tb in tables if name in tb), None)
                    if addr is not None:
                        groups.setdefault(group, []).append((s, addr))
        for g in groups.values():
            g.sort(key=lambda e: e[1])
        if groups:
            ORDERED_SECTIONS[obj] = groups

    modules = {"ARM9": args.config / config["main_module"]["delinks"]}
    for a in config["autoloads"]:
        kind = a["kind"]
        name = kind.upper() if isinstance(kind, str) else f"AUTOLOAD_{kind['Unknown']}"
        modules[name] = args.config / a["delinks"]
    overlay_ids = []
    for o in config["overlays"]:
        modules[f"OV{o['id']:03}"] = args.config / o["delinks"]
        overlay_ids.append(o["id"])
    unknown = set(by_module) - set(modules)
    if unknown:
        sys.exit(f"modern_link.py: objects for unknown modules {sorted(unknown)}")

    lines = ["/* Generated by tools/modern_link.py */", "ENTRY(Entry)", "", "SECTIONS {"]
    w = lines.append

    # The modules whose bss lives in AUTOLOAD_3, and whose static initialisers are in main's table
    static_mods = ["ARM9", "ITCM", "AUTOLOAD_2"]

    def end_of(mod: str) -> str:
        if mod in ("ARM9", "AUTOLOAD_2", "ITCM"):
            return f"(ADDR({mod}) + SIZEOF({mod}))"
        return f"(ADDR({mod}.bss) + SIZEOF({mod}.bss))"

    def emit_module(mod: str, address: str, has_own_bss: bool, extra_ctor_objs: list[str] = ()):
        objs = by_module.get(mod, [])
        sections = module_sections(modules[mod])
        names = [s for s, _ in sections]
        loaded = [s for s, k in sections if k != "bss"]
        w(f"    {mod} {address} : {{")
        # groups of input sections without a section of their own in delinks.txt (code that GCC generates for a
        # data-only module: static initialisers) go into the first loaded section, so that dsd loads them
        missing = [g for g in ("text", "rodata", "data") if not any(GROUP_OF.get(s) == g for s in loaded)]
        for sec in loaded:
            b = sec.lstrip(".").upper()
            w(f"        . = ALIGN({32 if sec in ('.text', '.data') else 4});")
            w(f"        {mod}_{b}_START = .;")
            if sec == loaded[0]:
                for g in missing:
                    lines.extend(inputs(objs, g))
                missing = []
            group = GROUP_OF.get(sec)
            if sec == ".ctor":
                if mod == "ARM9":
                    w("        p__sinit_020c2cd0 = .;")
                lines.extend(inputs(list(objs) + list(extra_ctor_objs), "ctor", keep=True))
                w("        LONG(0);")
            elif group:
                lines.extend(inputs(objs, group))
                if mod == "ARM9":
                    # libgcc (division, soft float, Thumb switch helpers) and the linker's interworking stubs
                    w(f"        *libgcc.a:*({' '.join(SECTION_INPUTS[group])})")
                    if group == "text":
                        w("        *(.glue_7 .glue_7t .vfp11_veneer .v4_bx)")
            if mod == "ARM9" and sec == ".exceptix":
                w("        __exception_table_start__ = .;")
                w("        __exception_table_end__ = .;")
            w(f"        . = ALIGN(4);")
            w(f"        {mod}_{b}_END = .;")
        if ".ctor" not in names:
            # GCC may emit static initialisers where mwcc had none; collect them so nothing is lost
            w(f"        {mod}_CTOR_START = .;")
            lines.extend(inputs(list(objs) + list(extra_ctor_objs), "ctor", keep=True))
            w("        LONG(0);")
            w(f"        {mod}_CTOR_END = .;")
        w("        . = ALIGN(32);")
        if not has_own_bss:
            w(f"        {mod}_BSS_START = .;")
            w(f"        {mod}_BSS_END = .;")
        w("    }")
        if has_own_bss:
            w(f"    {mod}.bss (NOLOAD) : {{")
            w("        . = ALIGN(32);")
            w(f"        {mod}_BSS_START = .;")
            lines.extend(inputs(objs, "bss"))
            w("        . = ALIGN(32);")
            w(f"        {mod}_BSS_END = .;")
            w("    }")
        w("")

    statics = [o for m in static_mods for o in by_module.get(m, []) if m != "ARM9"]
    emit_module("ARM9", "0x02000000", False, extra_ctor_objs=statics + by_module.get("DTCM", []))
    # ITCM, AUTOLOAD_2 and DTCM: their initialisers are already in main's table
    w("    ITCM 0x01ff8000 : {")
    w("        ITCM_TEXT_START = .;")
    lines.extend(inputs(by_module.get("ITCM", []), "text"))
    lines.extend(inputs(by_module.get("ITCM", []), "rodata"))
    lines.extend(inputs(by_module.get("ITCM", []), "data"))
    w("        . = ALIGN(32);")
    w("        ITCM_TEXT_END = .;")
    w("        ITCM_BSS_START = .;")
    w("        ITCM_BSS_END = .;")
    w("    }")
    w("    SDK_SECTION_ARENA_ITCM_START = ITCM_BSS_END;")
    w("")
    w("    AUTOLOAD_2 ALIGN(ADDR(ARM9) + SIZEOF(ARM9), 32) : {")
    for sec, kind in module_sections(modules["AUTOLOAD_2"]):
        if kind == "bss":
            continue
        b = sec.lstrip(".").upper()
        w(f"        . = ALIGN({32 if sec == '.text' else 8 if sec == '.data' else 4});")
        w(f"        AUTOLOAD_2_{b}_START = .;")
        lines.extend(inputs(by_module.get("AUTOLOAD_2", []), GROUP_OF[sec]))
        w("        . = ALIGN(4);")
        w(f"        AUTOLOAD_2_{b}_END = .;")
    w("        . = ALIGN(32);")
    w("        AUTOLOAD_2_BSS_START = .;")
    w("        AUTOLOAD_2_BSS_END = .;")
    w("    }")
    w("")
    w("    AUTOLOAD_3 ALIGN(ADDR(AUTOLOAD_2) + SIZEOF(AUTOLOAD_2), 32) (NOLOAD) : {")
    w("        AUTOLOAD_3_BSS_START = .;")
    for mod in ("ARM9", "AUTOLOAD_2", "ITCM", "AUTOLOAD_3"):
        lines.extend(inputs(by_module.get(mod, []), "bss"))
    w(f"        *libgcc.a:*({' '.join(SECTION_INPUTS['bss'])})")
    w("        . = ALIGN(32);")
    w("        AUTOLOAD_3_BSS_END = .;")
    w("    }")
    w("")
    w("    DTCM 0x027e0000 : {")
    w("        DTCM_DATA_START = .;")
    lines.extend(inputs(by_module.get("DTCM", []), "text"))
    lines.extend(inputs(by_module.get("DTCM", []), "rodata"))
    lines.extend(inputs(by_module.get("DTCM", []), "data"))
    w("        . = ALIGN(32);")
    w("        DTCM_DATA_END = .;")
    w("    }")
    w("    DTCM.bss (NOLOAD) : {")
    w("        DTCM_BSS_START = .;")
    lines.extend(inputs(by_module.get("DTCM", []), "bss"))
    w("        . = ALIGN(32);")
    w("        DTCM_BSS_END = .;")
    w("    }")
    w("    __DTCM_LO = ADDR(DTCM);")
    w("    SDK_SECTION_ARENA_DTCM_START = DTCM_BSS_END;")
    w("")

    def ends(names: list[str]) -> str:
        exprs = []
        for d in names:
            exprs.append({"ARM9": end_of("ARM9"), "AUTOLOAD_2": end_of("AUTOLOAD_2"),
                          "AUTOLOAD_3": "(ADDR(AUTOLOAD_3) + SIZEOF(AUTOLOAD_3))"}.get(d, end_of(d)))
        e = exprs[0]
        for x in exprs[1:]:
            e = f"MAX({e}, {x})"
        return e

    # Overlays in the order of the matching build's MEMORY list (each one after the regions it depends on)
    memory_order = [m for m in deps if m.startswith("OV")]
    for mod in memory_order:
        emit_module(mod, f"ALIGN({ends(deps[mod])}, 32)", True)

    everything = ["ARM9", "AUTOLOAD_2", "AUTOLOAD_3"] + memory_order
    w(f"    SDK_MAIN_ARENA_LO = ALIGN({ends(everything)}, 32);")
    w("    __CODE_HI = SDK_MAIN_ARENA_LO;")
    w(f"    __OVERLAY_COUNT = {len(overlay_ids)};")
    for i in overlay_ids:
        w(f"    OVERLAY_{i}_ID = {i};")
    abs_file = args.config / "abs_symbols.txt"
    if abs_file.is_file():
        for line in abs_file.read_text().splitlines():
            m = re.match(r"(\w+)\s+abs:(0x[0-9a-fA-F]+)", line)
            if m and m.group(1) != "SDK_SECTION_ARENA_DTCM_START":
                w(f"    {m.group(1)} = {m.group(2)};")
    w("")

    # Second names and interior labels from symbols.txt
    defined = defined_symbols(args.nm, objects)
    provides = 0
    module_symbol_files = [args.config / config["main_module"]["symbols"]]
    module_symbol_files += [args.config / a["symbols"] for a in config["autoloads"]]
    module_symbol_files += [args.config / o["symbols"] for o in config["overlays"]]
    for path in module_symbol_files:
        syms = sorted(read_symbols(path), key=lambda s: s[2])
        # anchors: names the objects define; at one address, a function/data symbol is preferred over a label
        anchors = sorted((addr, kind.startswith("label"), name, kind) for name, kind, addr in syms if name in defined)
        keys = [a[0] for a in anchors]
        for name, kind, addr in syms:
            if name in defined or name.startswith(".L"):
                continue
            i = bisect.bisect_left(keys, addr)
            if i < len(keys) and keys[i] == addr:
                base_addr, _, base, base_kind = anchors[i]
            elif kind.startswith(("data", "bss")):
                # a label inside a data object
                i -= 1
                if i < 0:
                    continue
                base_addr, _, base, base_kind = anchors[i]
                if not base_kind.startswith(("data", "bss")) or addr - base_addr > 0x10000:
                    continue
            else:
                # a function the objects don't define: no alias, the link reports it
                continue
            off = addr - base_addr
            w(f'    PROVIDE("{name}" = "{base}"{f" + {off:#x}" if off else ""});')
            provides += 1
    # Operators new written as mangled names with mwcc's size_t (unsigned long, `m`); GCC's is unsigned int (`j`)
    for name in sorted(defined):
        if re.search(r"(nw|na)Em$", name) or name in ("_Znwm", "_Znam"):
            w(f'    PROVIDE("{name[:-1]}j" = "{name}");')
            provides += 1

    # Names the matching build's linker script defines relative to a base (lcf_symbols.txt of each module)
    all_addrs = {}
    for path in module_symbol_files:
        for name, kind, addr in read_symbols(path):
            all_addrs.setdefault(name, addr)
    for mod, delinks in modules.items():
        for line in delinks.read_text().splitlines():
            if not line.strip():
                break
            m = re.match(r"\s*\.(\S+)\s+start:(0x[0-9a-fA-F]+)", line)
            if m:
                all_addrs[f"{mod}_{m.group(1).upper()}_START"] = int(m.group(2), 16)
    lcf_files = sorted(args.config.glob("**/lcf_symbols.txt"))
    for path in lcf_files:
        for line in path.read_text().splitlines():
            m = re.match(r"(\S+)\s+addr:(0x[0-9a-fA-F]+)\s+base:(\S+)", line)
            if not m or m.group(1) in defined:
                continue
            name, addr, base = m.group(1), int(m.group(2), 16), m.group(3)
            if base not in all_addrs:
                continue
            off = addr - all_addrs[base]
            w(f'    PROVIDE("{name}" = "{base}"{f" + {off:#x}" if off else ""});')
            provides += 1
    w("")
    # Debug information and build attributes (not loaded)
    for sec in (".debug_info", ".debug_abbrev", ".debug_line", ".debug_line_str", ".debug_str", ".debug_str_offsets",
                ".debug_aranges", ".debug_ranges", ".debug_rnglists", ".debug_loc", ".debug_loclists", ".debug_frame",
                ".debug_addr", ".debug_macro", ".debug_pubnames", ".debug_pubtypes", ".ARM.attributes"):
        w(f"    {sec} 0 : {{ KEEP(*({sec})) }}")
    w("    /DISCARD/ : { *(.iplt) *(.rel.iplt) *(.igot.plt) *(.rel.dyn) }")
    w("    /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.fini_array*) *(.dtors*) *(.comment) *(.note*) }")
    w("}")
    args.output.write_text("\n".join(lines) + "\n")
    print(f"modern_link.py: {len(objects)} objects, {provides} provided names", file=sys.stderr)


if __name__ == "__main__":
    main()

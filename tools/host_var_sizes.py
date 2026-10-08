#!/usr/bin/env python3
"""Global variables whose units disagree about their size in a 64-bit host build.

A pointer kept in `u8 x[4]` or a u32 by the defining unit and declared `void *x` elsewhere: on the DS both are 4
bytes, on a 64-bit host the 8-byte stores run over the definition into the next variable. For every global variable
this collects the size of its type in each compile unit (definitions and extern declarations, the 64-bit build's
debug information) and reports the ones with more than one size (arrays of unknown bound left out).

Usage: host_var_sizes.py <acww, 64-bit> [--small-defs]
"""
import sys
from collections import defaultdict

from elftools.elf.elffile import ELFFile

sys.path.insert(0, __file__.rsplit("/", 1)[0])
from host_relayout import size_of  # noqa: E402


def main():
    seen = defaultdict(dict)  # name -> {cu: (size, is definition)}
    for cu in ELFFile(open([a for a in sys.argv[1:] if not a.startswith("--")][0], "rb")).get_dwarf_info().iter_CUs():
        cu_name = cu.get_top_DIE().attributes["DW_AT_name"].value.decode()
        for die in cu.iter_DIEs():
            if die.tag != "DW_TAG_variable" or "DW_AT_type" not in die.attributes:
                continue
            parent = die.get_parent()
            if parent is None or parent.tag not in ("DW_TAG_compile_unit", "DW_TAG_namespace"):
                continue  # (locals)
            spec = die
            if "DW_AT_specification" in die.attributes:
                spec = die.get_DIE_from_attribute("DW_AT_specification")
            name = None
            for a in ("DW_AT_linkage_name", "DW_AT_MIPS_linkage_name", "DW_AT_name"):
                if a in spec.attributes:
                    name = spec.attributes[a].value.decode()
                    break
            if name is None:
                continue
            s = size_of(die.get_DIE_from_attribute("DW_AT_type"))
            if not s:
                continue
            seen[name][f"{cu_name}@{die.offset:#x}"] = (s, "DW_AT_declaration" not in die.attributes)
    only_small = "--small-defs" in sys.argv  # only definitions smaller than a declaration (stores run over)
    n = 0
    for name, cus in sorted(seen.items()):
        sizes = {s for s, _ in cus.values()}
        defs_ = [s for s, d in cus.values() if d]
        if only_small and not (defs_ and max(s for s, _ in cus.values()) > min(defs_)):
            continue
        decls_ = [s for s, d in cus.values() if not d]
        if "--small-decls" in sys.argv and not (defs_ and decls_ and min(decls_) < max(defs_)):
            continue  # (declarations smaller than the definition: readers with a narrower view, a u32 table of pointers)
        if len(sizes) > 1:
            defs = [f"{c} {s:#x}{' (def)' if d else ''}" for c, (s, d) in sorted(cus.items(), key=lambda x: -x[1][1])]
            print(f"{name}: " + "; ".join(defs[:4]) + (" ..." if len(defs) > 4 else ""))
            n += 1
    print(f"{n} variables with several sizes", file=sys.stderr)


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""Find the shared variables whose source files disagree about their layout on a 64-bit host.

Many units declare a shared object with their own structure: real fields in one file, byte padding in another.
On the DS (and the 32-bit host) the views agree byte for byte. On a 64-bit host the pointers in one view grow and
the padding in another doesn't, so the same DS byte lands at different offsets. For every global variable with a
structure type declared in several compile units this maps each view's members from their DS offset (the 32-bit
host build's debug information) to their 64-bit offset (the 64-bit build's) and reports where two views put the
same DS byte at different places. Arrays of scalars (padding) count byte by byte.

Usage: host_view_conflicts.py <game_all.o, 32-bit> <game_all.o, 64-bit> [--json out.json]
"""
import json
import sys
from collections import defaultdict

from elftools.elf.elffile import ELFFile

sys.path.insert(0, __file__.rsplit("/", 1)[0])
from host_relayout import members, size_of, strip  # noqa: E402


def leaves(die, base=0, path=(), out=None, depth=0):
    """(offset, size, path) of the scalar leaves of a value of type `die` (arrays of scalars: per element)"""
    if out is None:
        out = []
    die = strip(die)
    if die is None or depth > 12:
        return out
    if die.tag == "DW_TAG_array_type":
        el = die.get_DIE_from_attribute("DW_AT_type")
        es, total = size_of(el), size_of(die)
        if not es or not total:
            return out
        for i in range(min(total // es, 4096)):
            leaves(el, base + i * es, path + (i,), out, depth + 1)
        return out
    if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type"):
        for name, loc, t in members(die):
            leaves(t, base + loc, path + (name,), out, depth + 1)
        return out
    if die.tag == "DW_TAG_union_type":
        # a union: its first member stands for it
        for name, loc, t in members(die):
            return leaves(t, base, path + (name,), out, depth + 1)
        return out
    s = size_of(die)
    if s:
        out.append((base, s, path))
    return out


def views(path):
    """variable name -> {compile unit name: type DIE} (structure / array types only)"""
    f = open(path, "rb")
    elf = ELFFile(f)
    out = defaultdict(dict)
    for cu in elf.get_dwarf_info().iter_CUs():
        top = cu.get_top_DIE()
        cu_name = top.attributes["DW_AT_name"].value.decode() if "DW_AT_name" in top.attributes else "?"
        for die in top.iter_children():
            if die.tag != "DW_TAG_variable" or "DW_AT_type" not in die.attributes:
                continue
            name = None
            for a in ("DW_AT_linkage_name", "DW_AT_MIPS_linkage_name", "DW_AT_name"):
                if a in die.attributes:
                    name = die.attributes[a].value.decode()
                    break
            if name is None:
                continue
            if "DW_AT_specification" in die.attributes:
                continue
            t = strip(die.get_DIE_from_attribute("DW_AT_type"))
            if t is None or t.tag not in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_array_type",
                                          "DW_TAG_union_type"):
                continue
            out[name][cu_name] = t
    return out, f


def main():
    o32, o64 = sys.argv[1], sys.argv[2]
    js = sys.argv[sys.argv.index("--json") + 1] if "--json" in sys.argv else None
    v32, f32 = views(o32)
    v64, f64 = views(o64)
    conflicts = []
    for name, cus64 in sorted(v64.items()):
        cus = [c for c in cus64 if c in v32.get(name, {})]
        if len(cus) < 2:
            continue
        # each view: DS byte -> 64-bit byte
        maps = {}
        for c in cus:
            l32 = leaves(v32[name][c])
            l64 = leaves(cus64[c])
            if len(l32) != len(l64):
                maps[c] = None
                continue
            m = {}
            for (a, s, p), (b, s2, p2) in zip(l32, l64):
                m[a] = (b, p)
            maps[c] = m
        base = None
        for c in cus:
            if maps[c] is None:
                continue
            if base is None:
                base = c
                continue
            bad = [(ds, maps[base][ds], maps[c][ds]) for ds in maps[base] if ds in maps[c] and maps[base][ds][0] != maps[c][ds][0]]
            if bad:
                ds, (o1, p1), (o2, p2) = bad[0]
                conflicts.append({"var": name, "a": base, "b": c, "ds_offset": ds, "a_off64": o1, "a_path": list(map(str, p1)),
                                  "b_off64": o2, "b_path": list(map(str, p2)), "count": len(bad)})
    for c in conflicts:
        print(f"{c['var']}: DS +{c['ds_offset']:#x} is {'.'.join(c['a_path'])} at +{c['a_off64']:#x} in {c['a']}, "
              f"{'.'.join(c['b_path'])} at +{c['b_off64']:#x} in {c['b']} ({c['count']} bytes differ)")
    print(f"{len(conflicts)} variables with conflicting views", file=sys.stderr)
    if js:
        json.dump(conflicts, open(js, "w"), indent=1)


if __name__ == "__main__":
    main()

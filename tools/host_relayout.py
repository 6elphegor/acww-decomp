#!/usr/bin/env python3
"""Move the labels inside data for a 64-bit host build (no longer part of the build: the labels are C now,
tools/host_labels.py; the DWARF helpers here are used by the layout tools).

The linker script names some addresses inside variables (`PROVIDE("x" = "base" + 0x10)`, tools/host_provides.py):
a member of a structure, an element of an array, an entry of a vtable. The offsets are the DS's, which the 32-bit
host build shares; on a 64-bit host every pointer before the label moves it. This finds what each label names in
the 32-bit build's debug information (the member path / array index under `base`) and the offset of the same thing
in the 64-bit build's. Vtables (_ZTV*) are arrays of pointers. A label whose base has no type information (gap data,
which keeps the DS's layout) keeps its offset.

Only the labels the 64-bit object refers to are looked up (its undefined symbols); the others keep their offsets.

Usage: host_relayout.py <provides.ld> <game_all.o, 32-bit> <game_all.o, 64-bit> <out.ld>
"""
import re
import subprocess
import sys

from elftools.elf.elffile import ELFFile


def strip(die):
    """through typedefs and qualifiers"""
    while die is not None and die.tag in ("DW_TAG_typedef", "DW_TAG_const_type", "DW_TAG_volatile_type",
                                          "DW_TAG_restrict_type", "DW_TAG_atomic_type"):
        if "DW_AT_type" not in die.attributes:
            return None
        die = die.get_DIE_from_attribute("DW_AT_type")
    return die


def size_of(die):
    die = strip(die)
    if die is None:
        return None
    if "DW_AT_byte_size" in die.attributes:
        return die.attributes["DW_AT_byte_size"].value
    if die.tag == "DW_TAG_array_type":
        el = size_of(die.get_DIE_from_attribute("DW_AT_type"))
        n = 1
        for sub in die.iter_children():
            if sub.tag == "DW_TAG_subrange_type":
                if "DW_AT_count" in sub.attributes:
                    n *= sub.attributes["DW_AT_count"].value
                elif "DW_AT_upper_bound" in sub.attributes:
                    n *= sub.attributes["DW_AT_upper_bound"].value + 1
                else:
                    return None
        return None if el is None else el * n
    return None


def members(die):
    for c in die.iter_children():
        if c.tag in ("DW_TAG_member", "DW_TAG_inheritance") and "DW_AT_data_member_location" in c.attributes:
            loc = c.attributes["DW_AT_data_member_location"].value
            if isinstance(loc, int):
                name = c.attributes["DW_AT_name"].value.decode() if "DW_AT_name" in c.attributes else \
                    "<base:%s>" % (strip(c.get_DIE_from_attribute("DW_AT_type")).attributes.get("DW_AT_name").value.decode()
                                  if c.tag == "DW_TAG_inheritance" else "?")
                yield name, loc, c.get_DIE_from_attribute("DW_AT_type")
        if c.tag == "DW_TAG_member" and "DW_AT_data_member_location" not in c.attributes and "DW_AT_name" in c.attributes:
            # a union's members are at 0
            if die.tag == "DW_TAG_union_type":
                yield c.attributes["DW_AT_name"].value.decode(), 0, c.get_DIE_from_attribute("DW_AT_type")


def path_at(die, off):
    """the access path to byte `off` inside a value of type `die`: [('m', name) | ('i', index)], remainder"""
    path = []
    while True:
        die = strip(die)
        if die is None:
            return path, off
        if die.tag == "DW_TAG_array_type":
            el = die.get_DIE_from_attribute("DW_AT_type")
            es = size_of(el)
            if not es:
                return path, off
            path.append(("i", off // es))
            off %= es
            die = el
            continue
        if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
            best = None
            for name, loc, t in members(die):
                s = size_of(t)
                if s is None:
                    continue
                if loc <= off < loc + max(s, 1) and (best is None or loc >= best[1]):
                    best = (name, loc, t)
            if best is None:
                return path, off
            path.append(("m", best[0]))
            off -= best[1]
            die = best[2]
            continue
        return path, off


def offset_of(die, path):
    off = 0
    for kind, v in path:
        die = strip(die)
        if die is None:
            return None
        if kind == "i":
            if die.tag != "DW_TAG_array_type":
                return None
            el = die.get_DIE_from_attribute("DW_AT_type")
            es = size_of(el)
            if es is None:
                return None
            off += v * es
            die = el
        else:
            for name, loc, t in members(die):
                if name == v:
                    off += loc
                    die = t
                    break
            else:
                return None
    return off


def variables(path, wanted):
    """name -> type DIE for the wanted global variables with a type"""
    out = {}
    f = open(path, "rb")
    elf = ELFFile(f)
    dw = elf.get_dwarf_info()
    for cu in dw.iter_CUs():
        for die in cu.iter_DIEs():
            if die.tag != "DW_TAG_variable" or "DW_AT_type" not in die.attributes:
                continue
            name = None
            for a in ("DW_AT_linkage_name", "DW_AT_MIPS_linkage_name", "DW_AT_name"):
                if a in die.attributes:
                    name = die.attributes[a].value.decode()
                    break
            if name in wanted and name not in out:
                t = die.get_DIE_from_attribute("DW_AT_type")
                if size_of(t):
                    out[name] = t
    return out, f


def main():
    provides, o32, o64, out_path = sys.argv[1:5]
    used = {l.split()[-1] for l in subprocess.run(["nm", "-u", o64], capture_output=True, text=True).stdout.splitlines() if l.strip()}
    lines = open(provides).read().splitlines()
    rx = re.compile(r'PROVIDE\("?([^"= ]+)"? *= *"?([A-Za-z_][\w$.]*)"? *\+ *(0x[0-9a-fA-F]+|\d+)\);')
    todo = {}
    for i, l in enumerate(lines):
        m = rx.match(l)
        if m and m.group(1) in used:
            todo[i] = (m.group(1), m.group(2), int(m.group(3), 0))
    bases = {b for _, b, _ in todo.values()}
    v32, f32 = variables(o32, bases)
    v64, f64 = variables(o64, bases)
    moved = same = kept = 0
    report = []
    for i, (name, base, off) in todo.items():
        if base.startswith("_ZTV"):
            new = off * 2  # entries of 4 bytes on the DS, 8 here
        elif base in v32 and base in v64:
            path, rem = path_at(v32[base], off)
            o = offset_of(v64[base], path)
            if o is None:
                report.append(f"{name} = {base} + {off:#x}: no counterpart for {path}")
                kept += 1
                continue
            new = o + rem
        else:
            kept += 1
            continue
        if new != off:
            moved += 1
            lines[i] = f'PROVIDE("{name}" = "{base}" + {new:#x});  /* DS: + {off:#x} */'
        else:
            same += 1
    open(out_path, "w").write("\n".join(lines) + "\n")
    for r in report:
        print("host_relayout.py:", r, file=sys.stderr)
    print(f"host_relayout.py: {moved} labels moved, {same} unchanged, {kept} kept (no type: DS layout)", file=sys.stderr)


if __name__ == "__main__":
    main()

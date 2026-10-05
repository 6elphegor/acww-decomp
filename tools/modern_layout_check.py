#!/usr/bin/env python3
"""Compare GCC's layout of every C++ class/struct with the layout mwcc gives it (see docs/modern.md, "Class layout").

Measured with mwcc 1.2 (C and C++): a member is placed after the previous member's sizeof (as in GCC); a derived
class's first member is placed after the base's *data size* (tail padding reused, POD bases too; GCC reuses it for
non-POD bases only); a class's data size ends at its last member's data size, recursively (GCC: at its sizeof); 64-bit
types are aligned to 4 (GCC: 8). Code written
against mwcc's offsets (view classes with padding arrays, hardcoded offsets, data tables) breaks for every class where
the two differ.

Pass 1 reads the DWARF of the modern build's objects (compiled with -g) and records every class definition by name:
its bases and members with GCC's offsets and their types. Pass 2 recomputes each class with mwcc's rule and lists those
whose member offsets or size differ, with the first differing members.

Usage: modern_layout_check.py <objects.txt> [--align64 4|8]
"""
import sys
from collections import OrderedDict

from elftools.elf.elffile import ELFFile

ALIGN64 = 8


def name_of(die):
    a = die.attributes.get("DW_AT_name")
    return a.value.decode() if a else None


def strip(die):
    while die is not None and die.tag in ("DW_TAG_typedef", "DW_TAG_const_type", "DW_TAG_volatile_type"):
        if "DW_AT_type" not in die.attributes:
            return None
        die = die.get_DIE_from_attribute("DW_AT_type")
    return die


def describe(die, depth=0):
    """a type as a small tuple usable across objects"""
    die = strip(die)
    if die is None or depth > 20:
        return ("scalar", 0, 1)
    tag = die.tag
    size = die.attributes["DW_AT_byte_size"].value if "DW_AT_byte_size" in die.attributes else 0
    if tag == "DW_TAG_base_type":
        return ("scalar", size, size)
    if tag in ("DW_TAG_pointer_type", "DW_TAG_reference_type", "DW_TAG_rvalue_reference_type"):
        return ("scalar", 4, 4)
    if tag == "DW_TAG_ptr_to_member_type":
        return ("scalar", size or 8, 4)
    if tag == "DW_TAG_enumeration_type":
        return ("scalar", size, size)
    if tag == "DW_TAG_array_type":
        n = 1
        for sub in die.iter_children():
            if sub.tag == "DW_TAG_subrange_type":
                if "DW_AT_count" in sub.attributes:
                    n *= sub.attributes["DW_AT_count"].value
                elif "DW_AT_upper_bound" in sub.attributes:
                    n *= sub.attributes["DW_AT_upper_bound"].value + 1
                else:
                    n = 0
        return ("array", describe(die.get_DIE_from_attribute("DW_AT_type"), depth + 1), n)
    if tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
        nm = name_of(die)
        if nm is None:
            return ("anon", record(die, depth + 1))
        return ("class", nm)
    return ("scalar", size, 1)


def record(die, depth=0):
    """bases and members of a class definition: list of (kind, name, gcc_offset, type, bitinfo)"""
    fields = []
    for c in die.iter_children():
        if c.tag == "DW_TAG_inheritance":
            off = c.attributes["DW_AT_data_member_location"].value
            fields.append(("base", None, off, describe(c.get_DIE_from_attribute("DW_AT_type"), depth), None))
        elif c.tag == "DW_TAG_member":
            if "DW_AT_external" in c.attributes or "DW_AT_declaration" in c.attributes:
                continue  # static member
            t = describe(c.get_DIE_from_attribute("DW_AT_type"), depth)
            if "DW_AT_data_bit_offset" in c.attributes:
                bits = c.attributes["DW_AT_data_bit_offset"].value
                width = c.attributes["DW_AT_bit_size"].value
                fields.append(("bits", name_of(c), bits // 8, t, (bits, width)))
            elif "DW_AT_data_member_location" in c.attributes:
                fields.append(("member", name_of(c), c.attributes["DW_AT_data_member_location"].value, t, None))
    size = die.attributes["DW_AT_byte_size"].value if "DW_AT_byte_size" in die.attributes else 0
    return (die.tag == "DW_TAG_union_type", fields, size)


CLASSES = {}
MEMO = {}


def info(t):
    """(sizeof, align, dsize) under mwcc's rule"""
    kind = t[0]
    if kind == "scalar":
        size, align = t[1], t[2]
        if size == 8:
            align = ALIGN64
        return (size, max(1, min(align, 8)), size)
    if kind == "array":
        s, a, d = info(t[1])
        return (s * t[2], a, s * t[2])
    if kind == "anon":
        return layout(t[1])[1:]
    if kind == "class":
        if t[1] not in CLASSES:
            return (0, 1, 0)
        if t[1] in MEMO:
            return MEMO[t[1]]
        MEMO[t[1]] = (0, 1, 0)  # recursion guard
        r = layout(CLASSES[t[1]])[1:]
        MEMO[t[1]] = r
        return r
    return (0, 1, 0)


def layout(rec):
    """mwcc offsets (list parallel to fields), sizeof, align, dsize"""
    union, fields, _ = rec
    cursor, align, dsize = 0, 1, 0
    offs = []
    unit = None  # (gcc unit start, our unit start) of the current bitfield storage unit
    for kind, name, goff, t, bit in fields:
        s, a, d = info(t)
        if kind == "bits":
            ustart_gcc = (bit[0] // (s * 8)) * s if s else goff
            if unit and unit[0] == ustart_gcc:
                o = unit[1] + (goff - ustart_gcc)
            else:
                ustart = 0 if union else (cursor + a - 1) // a * a
                unit = (ustart_gcc, ustart)
                o = ustart + (goff - ustart_gcc)
                cursor = max(cursor, ustart + s)
            offs.append(o)
            dsize = max(dsize, cursor)
            align = max(align, a)
            continue
        unit = None
        o = 0 if union else (cursor + a - 1) // a * a
        offs.append(o)
        # a base: the next member goes after its data size (tail padding reused, POD bases too); a member: after
        # its sizeof. The class's own data size ends at the last member's data size (recursively).
        end_d = o + d
        end_s = o + (d if kind == "base" else s)
        cursor = max(cursor, end_s) if union else end_s
        dsize = max(dsize, end_d) if union else end_d
        align = max(align, a)
    size = (max(cursor, dsize) + align - 1) // align * align
    return offs, size, align, dsize


def main():
    global ALIGN64
    args = sys.argv[1:]
    if "--align64" in args:
        ALIGN64 = int(args[args.index("--align64") + 1])
    objects = [l.strip() for l in open(args[0]) if l.strip() and "/gaps/" not in l]
    where = {}
    for obj in objects:
        try:
            with open(obj, "rb") as f:
                elf = ELFFile(f)
                if not elf.has_dwarf_info():
                    continue
                for cu in elf.get_dwarf_info().iter_CUs():
                    for die in cu.iter_DIEs():
                        if die.tag not in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
                            continue
                        nm = name_of(die)
                        if nm is None or "DW_AT_declaration" in die.attributes or nm in CLASSES:
                            continue
                        CLASSES[nm] = record(die)
                        where[nm] = obj
        except Exception as e:
            print(f"{obj}: {e}", file=sys.stderr)
    out = []
    for nm, rec in sorted(CLASSES.items()):
        union, fields, gsize = rec
        offs, msize, _, _ = layout(rec)
        diffs = [(f[1] or "<base>", f[2], o) for f, o in zip(fields, offs) if f[2] != o]
        if diffs or msize != gsize:
            d = ", ".join(f"{n} gcc {a:#x} mwcc {b:#x}" for n, a, b in diffs[:3]) or "size only"
            out.append(f"{nm}: size gcc {gsize:#x} mwcc {msize:#x}; {d}  [{where[nm]}]")
    print("\n".join(out))
    print(f"{len(out)} of {len(CLASSES)} classes laid out differently", file=sys.stderr)


if __name__ == "__main__":
    main()

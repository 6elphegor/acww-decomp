#!/usr/bin/env python3
"""List the classes that need MWCC_LAYOUT / MWCC_TAIL (include/types.h) for GCC to lay them out like mwcc (see
docs/modern.md, "Class layout").

mwcc places a derived class's first member after its base's data size, and a class's data size ends at its last
member's data size. GCC does both only for a base that isn't POD (for layout) and for a last member that is
[[no_unique_address]]. Starting from every class used as a base whose data size (mwcc's) is smaller than its sizeof:
  * MWCC_LAYOUT (in the class) if GCC sees it as POD (no vptr, no non-POD base or member);
  * MWCC_TAIL on its last member if that member is of class type with a data size below its sizeof; the member's
    type then needs the same, recursively.

Usage: modern_layout_needs.py <objects.txt>
"""
import sys

sys.path.insert(0, __import__("os").path.dirname(__file__))
import modern_layout_check as L  # noqa: E402

from elftools.elf.elffile import ELFFile  # noqa: E402


def main():
    objects = [l.strip() for l in open(sys.argv[1]) if l.strip() and "/gaps/" not in l]
    L.ALIGN64 = 4
    for obj in objects:
        with open(obj, "rb") as f:
            elf = ELFFile(f)
            if not elf.has_dwarf_info():
                continue
            for cu in elf.get_dwarf_info().iter_CUs():
                for die in cu.iter_DIEs():
                    if die.tag not in ("DW_TAG_structure_type", "DW_TAG_class_type"):
                        continue
                    nm = L.name_of(die)
                    if nm is None or "DW_AT_declaration" in die.attributes or nm in L.CLASSES:
                        continue
                    L.CLASSES[nm] = L.record(die)

    def padded(name):
        if name not in L.CLASSES:
            return False
        s, a, d = L.info(("class", name))
        return d < s

    def nonpod(name, seen=()):
        rec = L.CLASSES.get(name)
        if not rec or name in seen:
            return False
        for kind, n, _, t, _ in rec[1]:
            if kind == "member" and n and n.startswith("_vptr"):
                return True
            if t[0] == "class" and kind in ("base", "member") and nonpod(t[1], seen + (name,)):
                return True
        return False

    bases = {t[1] for _, (u, fields, _) in L.CLASSES.items() for kind, _, _, t, _ in fields
             if kind == "base" and t[0] == "class"}
    todo = [b for b in sorted(bases) if padded(b)]
    layout, tail, done = set(), {}, set()
    while todo:
        c = todo.pop()
        if c in done:
            continue
        done.add(c)
        if not nonpod(c):
            layout.add(c)
        fields = [f for f in L.CLASSES[c][1] if f[0] in ("member", "base", "bits")]
        if not fields:
            continue
        last = fields[-1]
        if last[0] == "base" and last[3][0] == "class" and padded(last[3][1]):
            todo.append(last[3][1])
        elif last[0] == "member" and last[3][0] == "class" and padded(last[3][1]):
            tail[c] = last[1]
            todo.append(last[3][1])
    for c in sorted(layout):
        print(f"LAYOUT {c}")
    for c, m in sorted(tail.items()):
        print(f"TAIL {c}.{m}")
    print(f"{len(layout)} MWCC_LAYOUT, {len(tail)} MWCC_TAIL", file=sys.stderr)


if __name__ == "__main__":
    main()

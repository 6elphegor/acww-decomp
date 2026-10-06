#!/usr/bin/env python3
"""Members reached by their DS offset from an object pointer, rewritten to name the member on hosts.

`*(Mtx43 *)((u8 *)this + 0x314)` reaches a member by its offset on the DS; on a 64-bit host the member is elsewhere.
For `(u8 *)this + N` in a member function of class C (and `(u8 *)p + N` where `C *p` is declared in the
function), the member at DS offset N of C (the 32-bit build's debug information, the compile unit of the file) is
looked up, and the expression becomes HOST_AT(this, N, member.path, rem) (include/uptr.h): the same expression on
the DS, `(u8 *)&this->member.path + rem` on hosts. Offsets inside a base class or into padding are reported, not
rewritten.

Usage: host_this_offsets.py <game_all.o, 32-bit> [--check] FILE...
"""
import re
import sys

from elftools.elf.elffile import ELFFile

sys.path.insert(0, __file__.rsplit("/", 1)[0])
import host_view_layout as hv  # noqa: E402

EXPR = re.compile(r"\(u8 \*\)\s*([A-Za-z_]\w*) \+ (0x[0-9a-fA-F]+|\d+)\b")


def class_dies(path):
    """(compile unit name, class name) -> complete class DIE"""
    out = {}
    for cu in ELFFile(open(path, "rb")).get_dwarf_info().iter_CUs():
        cu_name = cu.get_top_DIE().attributes["DW_AT_name"].value.decode()
        for die in cu.iter_DIEs():
            if die.tag in ("DW_TAG_class_type", "DW_TAG_structure_type") and "DW_AT_name" in die.attributes \
                    and "DW_AT_declaration" not in die.attributes:
                out.setdefault((cu_name, die.attributes["DW_AT_name"].value.decode()), die)
    return out


def enclosing_class(text, pos, var):
    """the class of `this` / `self` at pos: the member function's class, or self's declared type"""
    head = text[:pos]
    if var == "this":
        for m in reversed(list(re.finditer(r"^[^\n;{}]*?\b(\w+)::~?\w+\s*\([^;{]*\)\s*(?:const\s*)?\{", head, re.M))):
            return m.group(1)
        return None
    fn = head.rfind("\n}")
    region = head[fn if fn >= 0 else 0:]
    m = list(re.finditer(r"\b(\w+)\s*\*\s*" + re.escape(var) + r"\b\s*[=;,)]", region))
    if not m:
        return None
    ty = m[-1].group(1)
    return None if ty in ("u8", "s8", "char", "void", "u16", "s16", "u32", "s32", "int", "const") else ty


def main():
    obj = sys.argv[1]
    check = "--check" in sys.argv
    files = [a for a in sys.argv[2:] if a != "--check"]
    hv.load_defs(obj)
    dies = class_dies(obj)
    total = skipped = 0
    for f in files:
        t = open(f).read()
        cu = next((k for k in dies if k[0].endswith(f)), None)
        out, last, n = [], 0, 0
        for m in EXPR.finditer(t):
            var, off = m.group(1), int(m.group(2), 0)
            cls = enclosing_class(t, m.start(), var)
            die = dies.get((cu[0] if cu else "", cls)) if cls else None
            if die is None:
                die = next((d for (c, name), d in dies.items() if name == cls and c.endswith(f)), None)
            if die is None:
                print(f"{f}:{t[:m.start()].count(chr(10)) + 1}: {cls}: no type information, skipped")
                skipped += 1
                continue
            path, rem = hv.path_at_c(die, off, obj)
            if not path or any(k == "m" and v.startswith("_vptr") for k, v in path):
                print(f"{f}:{t[:m.start()].count(chr(10)) + 1}: {cls}+{off:#x}: {path} (base / padding), skipped")
                skipped += 1
                continue
            mem = ""
            base = None
            for k, v in path:
                if k == "m" and v == "?":  # an anonymous union / struct: its members are the class's
                    continue
                if k == "m" and v.startswith("<base:"):  # a base class: its members are inherited (named directly)
                    continue
                mem += f"[{v}]" if k == "i" else (("." if mem else "") + v)
            if not mem:
                print(f"{f}:{t[:m.start()].count(chr(10)) + 1}: {cls}+{off:#x}: {path} (a base inside a member / the base itself), skipped")
                skipped += 1
                continue

            new = f"HOST_AT({var}, {m.group(2)}, {mem}, {rem})"
            out.append(t[last:m.start()] + new)
            last = m.end()
            n += 1
            print(f"{f}:{t[:m.start()].count(chr(10)) + 1}: {m.group(0)} -> {new}")
        if n and not check:
            t2 = "".join(out) + t[last:]
            if '"uptr.h"' not in t2:
                t2 = '#include "uptr.h"\n' + t2
            open(f, "w").write(t2)
        total += n
    print(f"total {total}, skipped {skipped}", file=sys.stderr)


if __name__ == "__main__":
    main()

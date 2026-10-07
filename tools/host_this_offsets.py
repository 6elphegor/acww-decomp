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
    # an alias: u8 *var = (u8 *)other;  -> other's type
    al = list(re.finditer(r"\bu8\s*\*\s*" + re.escape(var) + r"\s*=\s*\(u8 \*\)\s*(\w+)\s*;", region))
    if al and al[-1].group(1) != var:
        return enclosing_class(text, pos, al[-1].group(1))
    m = list(re.finditer(r"\b(\w+)\s*\*\s*" + re.escape(var) + r"\b\s*[=;,)]", region))
    if not m:
        return None
    ty = m[-1].group(1)
    return None if ty in ("u8", "s8", "char", "void", "u16", "s16", "u32", "s32", "int", "const") else ty


def assumed_pass(t, f, assumes, dies, cu, obj):
    """parameters known to point at a T (--assume file function var T): b + N and b[N] in the function (a u8 *b),
    (u8 *)b + N (a typed b, e.g. a base class pointer to a T)"""
    n = 0
    for func, var, cls in assumes:
        m = re.search(r"\b" + re.escape(func) + r"\s*\([^)]*\b\w+\s*\*\s*" + re.escape(var) + r"\b[^)]*\)\s*\{", t)
        if not m:
            print(f"{f}: {func}({var}): not found")
            continue
        start = m.end()
        end = t.find("\n}", start)
        die = dies.get((cu[0] if cu else "", cls)) or next((d for (c, nm), d in dies.items() if nm == cls), None)
        if die is None:
            print(f"{f}: {cls}: no type information")
            continue
        seg = t[start:end]
        pieces, plast = [], 0
        # var + N / var[N] with a u8 * var, or (u8 *)var + N with a typed one (the base class's pointer to a
        # derived object: the member is the derived class's)
        # (and the macro-expanded form ((u8 *)(var) + (N)))
        for um in re.finditer(r"(?<![\w.>])(?:(\(u8 \*\))?" + re.escape(var) + r"(?: \+ (0x[0-9a-fA-F]+|\d+)\b|\[(0x[0-9a-fA-F]+|\d+)\])"
                              r"|\(\(u8 \*\)\(" + re.escape(var) + r"\) \+ \((0x[0-9a-fA-F]+|\d+)\)\))", seg):
            cast, g1, g2 = um.group(1), um.group(2), um.group(3)
            if um.group(4):
                cast, g1 = "(u8 *)", um.group(4)
            num = g1 or g2
            off = int(num, 0)
            path, rem = hv.path_at_c(die, off, obj)
            while path and rem == 0 and path[-1][0] == "m" and path[-1][1].startswith(("_vptr", "<base:")):
                path = path[:-1]
            mem = ""
            for k, v in path:
                if k == "m" and (v == "?" or v.startswith("<base:")):
                    continue
                if k == "m" and v.startswith("_vptr"):
                    mem = ""
                    break
                mem += f"[{v}]" if k == "i" else (("." if mem else "") + v)
            if not mem:
                print(f"{f}: {func}: {var}+{off:#x}: {path}, skipped")
                continue
            e = f"HOST_AT_A({'(u8 *)' if cast else ''}{var}, {cls}, {num}, {mem}, {rem})"
            pieces.append(seg[plast:um.start()] + (e if g1 else f"(*{e})"))
            plast = um.end()
            n += 1
        t = t[:start] + "".join(pieces) + seg[plast:] + t[end:]
    return t, n


def main():
    obj = sys.argv[1]
    check = "--check" in sys.argv
    args = [a for a in sys.argv[2:] if a != "--check"]
    assume = {}
    if "--assume" in args:
        i = args.index("--assume")
        for line in open(args[i + 1]):
            if line.strip() and not line.startswith("#"):
                af, fn, var, cls = line.split()
                assume.setdefault(af, []).append((fn, var, cls))
        del args[i:i + 2]
    files = args
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
            td = re.search(r"\btypedef\s+(?:class\s+|struct\s+)?(\w+)\s+" + re.escape(cls) + r"\s*;", t) if cls else None
            if td:
                cls = td.group(1)  # (a typedef of the class)
            die = dies.get((cu[0] if cu else "", cls)) if cls else None
            if die is None:
                die = next((d for (c, name), d in dies.items() if name == cls and c.endswith(f)), None)
            if die is None:
                print(f"{f}:{t[:m.start()].count(chr(10)) + 1}: {cls}: no type information, skipped")
                skipped += 1
                continue
            path, rem = hv.path_at_c(die, off, obj)
            # a member object's start (its vtable pointer / base at offset 0 in it): the member itself
            while path and rem == 0 and path[-1][0] == "m" and path[-1][1].startswith(("_vptr", "<base:")):
                path = path[:-1]
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

            if re.search(r"\bu8\s*\*\s*" + re.escape(var) + r"\s*=\s*\(u8 \*\)", t[:m.start()][t[:m.start()].rfind("\n}"):]):
                # (an alias of a typed pointer: the DS expression stays `(u8 *)a + N`)
                new = f"(u8 *)HOST_AT_A({var}, {cls}, {m.group(2)}, {mem}, {rem})"
            else:
                new = f"HOST_AT({var}, {m.group(2)}, {mem}, {rem})"
            out.append(t[last:m.start()] + new)
            last = m.end()
            n += 1
            print(f"{f}:{t[:m.start()].count(chr(10)) + 1}: {m.group(0)} -> {new}")
        t = "".join(out) + t[last:]
        # aliases: u8 *a = (u8 *)this; ... a + N (no cast) within the function
        alias_n = 0
        for am in list(re.finditer(r"\bu8\s*\*\s*(\w+)\s*=\s*\(u8 \*\)\s*(\w+)\s*;", t))[::-1]:
            a, src_var = am.group(1), am.group(2)
            end = t.find("\n}", am.end())
            end = len(t) if end < 0 else end
            cls = enclosing_class(t, am.start(), src_var)
            die = None
            if cls:
                die = dies.get((cu[0] if cu else "", cls)) or next((d for (c, nm), d in dies.items() if nm == cls and c.endswith(f)), None)
            if die is None:
                continue
            seg = t[am.end():end]
            pieces, plast = [], 0
            for um in re.finditer(r"(?<![\w)])(?<!\(u8 \*\))" + re.escape(a) + r" \+ (0x[0-9a-fA-F]+|\d+)\b", seg):
                off = int(um.group(1), 0)
                path, rem = hv.path_at_c(die, off, obj)
                while path and rem == 0 and path[-1][0] == "m" and path[-1][1].startswith(("_vptr", "<base:")):
                    path = path[:-1]
                mem = ""
                for k, v in path:
                    if k == "m" and (v == "?" or v.startswith("<base:")):
                        continue
                    if k == "m" and v.startswith("_vptr"):
                        mem = ""
                        break
                    mem += f"[{v}]" if k == "i" else (("." if mem else "") + v)
                if not mem:
                    skipped += 1
                    continue
                pieces.append(seg[plast:um.start()] + f"HOST_AT_A({a}, {cls}, {um.group(1)}, {mem}, {rem})")
                plast = um.end()
                alias_n += 1
                print(f"{f}: {a} + {um.group(1)} ({cls}) -> {mem} + {rem}")
            if pieces:
                t = t[:am.end()] + "".join(pieces) + seg[plast:] + t[end:]
        n += alias_n
        if f in assume:
            t, k = assumed_pass(t, f, assume[f], dies, cu, obj)
            n += k
        out, last = [t], len(t)
        if n and not check:
            t2 = "".join(out) + t[last:]
            if '"uptr.h"' not in t2:
                t2 = '#include "uptr.h"\n' + t2
            open(f, "w").write(t2)
        total += n
    print(f"total {total}, skipped {skipped}", file=sys.stderr)


if __name__ == "__main__":
    main()

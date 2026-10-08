#!/usr/bin/env python3
"""Rewrite the game's integer divisions with a non-constant divisor into the DS_DIV family (include/ds_div.h).

The DS has no divide instruction: mwcc's runtime routines give a / 0 = a (and INT_MIN / -1 = INT_MIN) without
trapping, while x86 traps and arm64 gives 0. Every integer `/`, `%`, `/=` and `%=` whose divisor isn't a constant
expression is rewritten into a call with the DS's result:

    a / b   ->  DS_DIV(a, b)      (int; DS_UDIV for unsigned int; DS_DIV64 / DS_UDIV64 for 64-bit operands)
    a % b   ->  DS_MOD(a, b)      (DS_UMOD, DS_MOD64, DS_UMOD64)
    a /= b  ->  a = DS_DIV(a, b)  (only when `a` is a plain name or member: no side effects to repeat)

The helper is picked from the type of the operation as the DS sees it: the units are parsed with libclang for i386
(32-bit long and pointers, as on the DS). The file gets `#include "ds_div.h"` before its first #include.

Usage: tools/host_div_rewrite.py [--check] [files...]   (default: every game source under src/ and modern/ds/, and
the headers under include/ they use). --check rewrites nothing and lists the remaining sites (exit 1 if any).
Sites the tool can't rewrite (a division inside a macro, a dependent type in a template, a compound assignment with
a complex left side) are listed for a manual fix.
"""
import argparse
import collections
import glob
import os
import sys
from multiprocessing import Pool

import clang.cindex as ci

for lib in ("/usr/lib/llvm-21/lib/libclang-21.so.1", "/usr/lib/llvm-20/lib/libclang-20.so.1",
            "/usr/lib/llvm-19/lib/libclang-19.so.1"):
    if os.path.exists(lib):
        ci.Config.set_library_file(lib)
        break

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
COMMON = ["--target=i386-pc-linux-gnu", "-ffreestanding", "-nostdinc", "-fsigned-char", "-fshort-wchar", "-fno-builtin",
          "-fno-short-enums", "-DMODERN", "-DHOST", "-DGAME_VERSION_USA", "-Iinclude", "-Wno-everything",
          "-ferror-limit=0"]
K = ci.CursorKind
T = ci.TypeKind
FLOATS = {T.FLOAT, T.DOUBLE, T.LONGDOUBLE, T.HALF, T.FLOAT128}
SIGNED = {T.INT, T.LONG, T.LONGLONG, T.SHORT, T.SCHAR, T.CHAR_S, T.INT128}
UNSIGNED = {T.UINT, T.ULONG, T.ULONGLONG, T.USHORT, T.UCHAR, T.CHAR_U, T.BOOL, T.UINT128, T.CHAR16, T.CHAR32, T.WCHAR}
HELPERS = {("Div", True, 4): "DS_DIV", ("Div", False, 4): "DS_UDIV", ("Div", True, 8): "DS_DIV64",
           ("Div", False, 8): "DS_UDIV64", ("Rem", True, 4): "DS_MOD", ("Rem", False, 4): "DS_UMOD",
           ("Rem", True, 8): "DS_MOD64", ("Rem", False, 8): "DS_UMOD64"}


def nonconst(c):
    """Whether an expression can't be a constant: it refers to a variable, a member, a call..."""
    if c.kind == K.DECL_REF_EXPR:
        d = c.referenced
        return not (d is not None and d.kind in (K.ENUM_CONSTANT_DECL, K.TEMPLATE_NON_TYPE_PARAMETER))
    if c.kind in (K.MEMBER_REF_EXPR, K.CALL_EXPR, K.ARRAY_SUBSCRIPT_EXPR):
        return True
    if c.kind == K.CXX_UNARY_EXPR:  # sizeof, alignof
        return False
    return any(nonconst(ch) for ch in c.get_children())


def op_of(c):
    try:
        return c.binary_operator.name
    except Exception:
        return None


def is_game_file(name):
    rel = os.path.relpath(os.path.abspath(name), ROOT)
    return (rel.startswith("src/") or rel.startswith("include/") or rel.startswith("modern/ds/")) and \
        not rel.endswith("include/ds_div.h")


def int_kind(t):
    """(signed, size) of an integer type, None for anything else."""
    t = t.get_canonical()
    if t.kind == T.ENUM:
        t = t.get_declaration().enum_type.get_canonical()
    if t.kind in SIGNED:
        return True, t.get_size()
    if t.kind in UNSIGNED:
        return False, t.get_size()
    return None


def promote(a, b):
    """The usual arithmetic conversions of two (signed, size) integer kinds."""
    a = (True, 4) if a[1] < 4 else a
    b = (True, 4) if b[1] < 4 else b
    if a[1] != b[1]:
        return a if a[1] > b[1] else b
    return (a[0] and b[0], a[1])


def parse(path):
    idx = ci.Index.create()
    if path.endswith(".c"):
        args = ["-x", "c", "-std=gnu11"]
    else:
        args = ["-x", "c++", "-std=gnu++14", "-fno-exceptions", "-fno-rtti"]
    return idx.parse(path, args=args + COMMON)


def scan(path):
    """The division sites of one unit (and of the game headers it includes): a list of dicts."""
    try:
        tu = parse(path)
    except Exception as e:
        return path, [], [f"{path}: parse failed: {e}"]
    sites, manual = [], []

    def walk(n):
        for c in n.get_children():
            f = c.location.file
            if f is None or not is_game_file(f.name):
                continue
            if c.kind in (K.BINARY_OPERATOR, K.COMPOUND_ASSIGNMENT_OPERATOR):
                op = op_of(c)
                if op in ("Div", "Rem", "DivAssign", "RemAssign"):
                    ch = list(c.get_children())
                    if len(ch) == 2 and nonconst(ch[1]):
                        site = classify(c, op, ch)
                        if site is not None:
                            (sites if "helper" in site else manual).append(site)
            walk(c)

    def classify(c, op, ch):
        fname = os.path.relpath(c.location.file.name, ROOT)
        loc = f"{fname}:{c.location.line}"
        lt, rt = ch[0].type.get_canonical(), ch[1].type.get_canonical()
        if c.type.get_canonical().kind in FLOATS or lt.kind in FLOATS or rt.kind in FLOATS:
            return None
        base = op[:3]
        if op.endswith("Assign"):
            lk, rk = int_kind(lt), int_kind(rt)
            kind = promote(lk, rk) if lk and rk else None
        else:
            kind = int_kind(c.type)
        if kind is None or kind[1] not in (4, 8):
            return {"loc": loc, "why": f"type {c.type.spelling} / {lt.spelling}, {rt.spelling}"}
        e, le, re_ = c.extent, ch[0].extent, ch[1].extent
        for x in (e, le, re_):
            if x.start.file is None or x.end.file is None or x.start.file.name != c.location.file.name or \
                    x.end.file.name != c.location.file.name:
                return {"loc": loc, "why": "extent outside the file (macro?)"}
        return {"loc": loc, "file": fname, "op": op, "helper": HELPERS[(base, kind[0], kind[1])],
                "s": e.start.offset, "e": e.end.offset, "l0": le.start.offset, "l1": le.end.offset,
                "r0": re_.start.offset, "r1": re_.end.offset}

    walk(tu.cursor)
    return path, sites, manual


SIMPLE_LHS = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_.->[] ")


def apply(fname, sites):
    """Rewrite one file's sites; returns the list of sites it couldn't rewrite."""
    src = open(os.path.join(ROOT, fname), "rb").read()
    edits = []  # (offset, order, end, text): text inserted at offset or replacing [offset, end)
    bad = []
    for s in sites:
        between = src[s["l1"]:s["r0"]].decode("utf-8", "replace").strip()
        want = {"Div": "/", "Rem": "%", "DivAssign": "/=", "RemAssign": "%="}[s["op"]]
        if between != want or s["s"] != s["l0"] or s["e"] != s["r1"]:
            bad.append(dict(s, why=f"operator text {between!r}"))
            continue
        span = s["e"] - s["s"]
        if s["op"].endswith("Assign"):
            lhs = src[s["l0"]:s["l1"]].decode()
            if not set(lhs) <= SIMPLE_LHS or "--" in lhs:
                bad.append(dict(s, why=f"compound assignment to {lhs!r}"))
                continue
            edits.append((s["l1"], 1, s["r0"], f" = {s['helper']}({lhs}, "))
        else:
            # openers of enclosing sites first (sort: larger span first), closers of inner sites first
            edits.append((s["l0"], 0, -span, f"{s['helper']}("))
            edits.append((s["l1"], 1, s["r0"], ", "))
        edits.append((s["r1"], -1, span, ")"))
    out, pos = [], 0
    for off, order, key, text in sorted(edits, key=lambda x: (x[0], x[1], x[2])):
        out.append(src[pos:off])
        out.append(text.encode())
        pos = key if order == 1 else off
    out.append(src[pos:])
    new = b"".join(out)
    if new != src:
        if b'#include "ds_div.h"' not in new:
            i = new.find(b"\n#include")
            i = 0 if new.startswith(b"#include") else (i + 1 if i >= 0 else 0)
            if i == 0 and not new.startswith(b"#include"):
                # no include: after the leading comment block
                lines = new.split(b"\n")
                k = 0
                while k < len(lines) and (lines[k].startswith(b"//") or not lines[k].strip()):
                    k += 1
                i = sum(len(x) + 1 for x in lines[:k])
            new = new[:i] + b'#include "ds_div.h"\n' + new[i:]
        open(os.path.join(ROOT, fname), "wb").write(new)
    return bad


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--check", action="store_true")
    ap.add_argument("files", nargs="*")
    a = ap.parse_args()
    os.chdir(ROOT)
    files = a.files or sorted(glob.glob("src/**/*.c", recursive=True) + glob.glob("src/**/*.cpp", recursive=True) +
                              glob.glob("modern/ds/*.c"))
    by_file = collections.defaultdict(dict)
    manual = {}
    with Pool(os.cpu_count() or 4) as p:
        for path, sites, man in p.imap_unordered(scan, files, chunksize=4):
            for s in sites:
                by_file[s["file"]][s["s"], s["op"]] = s  # a header's site once, whichever unit saw it
            for m in man:
                if isinstance(m, str):
                    print(m, file=sys.stderr)
                else:
                    manual[m["loc"]] = m["why"]
    count = collections.Counter(s["helper"] for f in by_file.values() for s in f.values())
    total = sum(count.values())
    print(f"{total} sites in {len(by_file)} files: {dict(sorted(count.items()))}; {len(manual)} for a manual fix")
    if a.check:
        for f in sorted(by_file):
            for s in sorted(by_file[f].values(), key=lambda s: s["s"]):
                print(f"  {s['loc']} {s['op']} -> {s['helper']}")
    else:
        for f in sorted(by_file):
            for b in apply(f, list(by_file[f].values())):
                manual[b["loc"]] = b["why"]
    for loc, why in sorted(manual.items()):
        print(f"  manual: {loc}: {why}")
    return 1 if a.check and (total or manual) else 0


if __name__ == "__main__":
    sys.exit(main())

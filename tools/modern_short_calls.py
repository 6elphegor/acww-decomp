#!/usr/bin/env python3
"""List calls that pass fewer arguments than the called function's definition takes (see docs/modern.md).

The decompiled code calls many functions through local declarations, often by their mangled C++ name with an
explicit `this` (`#define Heap_adjust _ZN4Heap6adjustEv`). Where the original left the missing argument in a register
(r0 = `this` from the previous expression, r1 = a value from the statement before), the call matches with mwcc but
passes garbage under GCC. GCC's LTO check reports each mismatching symbol only once; this scans every call site.

Expected parameter counts come from the definitions in src/ (C functions and extern "C" functions by name) and, for
mangled names (`_Z...`), from the demangled signature (+1 for `this` of a member function). Calls through a
`#define NAME TARGET` alias are resolved.

Usage: modern_short_calls.py [--c++filt <c++filt>] [src dir]
"""
import argparse
import os
import re
import subprocess
from pathlib import Path

DEF = re.compile(r'^(?:extern "C"\s+)?(?:static\s+)?(?:inline\s+)?[A-Za-z_][\w\s\*:<>,]*?[\s\*]([A-Za-z_]\w*)\s*\(([^;{}]*)\)\s*(?:const\s*)?\{',
                 re.M)
DEFINE = re.compile(r'^\s*#\s*define\s+([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*$', re.M)
# a call, also through a namespace of local declarations (`F5::Scene_GetMaxSpNpcs()`); `Class::method(` isn't in the
# definitions table (only free functions are), so qualified member calls don't match
CALL = re.compile(r'(?<![\w.>])(?:([A-Za-z_]\w*)::)?([A-Za-z_]\w*)\s*\(')
KEYWORDS = {"if", "while", "for", "switch", "return", "sizeof", "case", "do", "else", "new", "delete", "defined",
            "__attribute__", "asm", "__builtin_offsetof", "offsetof", "static_cast", "reinterpret_cast", "typeof"}


def strip_comments_strings(text: str) -> str:
    def blank(m):
        s = m.group(0)
        if s[0] in "\"'":
            return "0" + " " * (len(s) - 1)  # a literal stays one token (an argument)
        return re.sub(r"[^\n]", " ", s)
    return re.sub(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\\n])*"|\'(?:\\.|[^\'\\\n])*\'', blank, text, flags=re.S)


def count_params(inner: str) -> int | None:
    inner = inner.strip()
    if inner in ("", "void"):
        return 0
    if "..." in inner:
        return None
    if "=" in inner:
        return None  # default arguments
    return split_top(inner)


def split_top(inner: str) -> int:
    depth, count = 0, 1
    for c in inner:
        if c in "([{<":
            depth += 1
        elif c in ")]}>":
            depth -= 1
        elif c == "," and depth == 0:
            count += 1
    return count


def call_args(text: str, start: int) -> tuple[int, int] | None:
    """Argument count of the call whose '(' is at text[start]; and the end index"""
    depth = 0
    for i in range(start, min(len(text), start + 4000)):
        c = text[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                inner = text[start + 1:i]
                if not inner.strip():
                    return 0, i
                d, n = 0, 1
                for ch in inner:
                    if ch in "([{":
                        d += 1
                    elif ch in ")]}":
                        d -= 1
                    elif ch == "," and d == 0:
                        n += 1
                return n, i
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--c++filt", dest="cxxfilt", default="c++filt")
    ap.add_argument("src", nargs="?", default="src")
    args = ap.parse_args()

    files = [Path(r) / f for r, _, fs in os.walk(args.src) for f in fs if f.endswith((".c", ".cpp"))]
    texts = {f: strip_comments_strings(f.read_text(errors="replace")) for f in files}

    # definitions: name -> set of parameter counts (a name defined differently in two files is ambiguous)
    defs: dict[str, set] = {}
    for f, t in texts.items():
        for m in DEF.finditer(t):
            name = m.group(1)
            if name in KEYWORDS:
                continue
            pc = count_params(m.group(2))
            if pc is None:
                defs.setdefault(name, set()).add(None)
            else:
                defs.setdefault(name, set()).add(pc)

    # mangled names used anywhere
    mangled = set()
    for t in texts.values():
        mangled.update(re.findall(r"\b(_Z[A-Za-z0-9_]+)\b", t))
    demangled = {}
    names = sorted(mangled)
    out = subprocess.run([args.cxxfilt], input="\n".join(names), capture_output=True, text=True).stdout.splitlines()
    for name, d in zip(names, out):
        m = re.match(r"^(.*?)\((.*)\)(\s*const)?$", d)
        if not m or d == name:
            continue
        qual, params = m.group(1), m.group(2)
        if "..." in params:
            continue
        n = 0 if params in ("", "void") else split_top(params)
        # member function: qualified name whose scope is a class (heuristic: the scope starts with an upper-case
        # letter or is a known class name pattern; constructors/destructors too)
        scope = qual.rsplit("::", 1)[0] if "::" in qual else ""
        is_member = bool(scope) and re.match(r"^[A-Z]", scope.split("::")[-1]) is not None
        demangled[name] = n + (1 if is_member else 0)

    # class names: their constructors (declared in the class, `new X()`) aren't calls of a free function
    classes = set()
    for t in texts.values():
        classes.update(re.findall(r"\b(?:class|struct)\s+([A-Za-z_]\w*)", t))
    for d in ("include",):
        for r, _, fs in os.walk(d):
            for fn in fs:
                classes.update(re.findall(r"\b(?:class|struct)\s+([A-Za-z_]\w*)",
                                          (Path(r) / fn).read_text(errors="replace")))

    results = []
    for f, t in sorted(texts.items()):
        aliases = {m.group(1): m.group(2) for m in DEFINE.finditer(t)}
        for m in CALL.finditer(t):
            ident = m.group(2)
            if ident in KEYWORDS or ident in classes or ident == m.group(1):
                continue  # (X::X( is a constructor)
            # skip declarations/definitions: the identifier is preceded by a type on the same statement
            line_start = t.rfind("\n", 0, m.start()) + 1
            before = t[line_start:m.start()]
            if re.search(r"[A-Za-z_][\w:<>]*[\s\*&]+$", before) and not re.search(
                    r"(return|=|\(|,|\?|:|&&|\|\||!|\+|-|\*\s*\(|else|do|;)\s*$", before.rstrip()) :
                continue
            target = aliases.get(ident, ident)
            if target.startswith("_Z"):
                expected = demangled.get(target)
            else:
                counts = defs.get(target)
                expected = next(iter(counts)) if counts and len(counts) == 1 else None
            if expected is None:
                continue
            ca = call_args(t, m.end() - 1)
            if ca is None:
                continue
            n, _ = ca
            if n < expected:
                line = t.count("\n", 0, m.start()) + 1
                results.append((str(f), line, ident if ident == target else f"{ident} ({target})", n, expected))
    for f, line, name, n, e in results:
        print(f"{f}:{line}: {name}: {n} argument(s), takes {e}")
    print(f"{len(results)} short calls", flush=True)


if __name__ == "__main__":
    main()

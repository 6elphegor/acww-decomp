#!/usr/bin/env python3
"""List calls that use the value of a function defined `void` (see docs/modern.md).

The original code often returns a value by leaving it in r0 (the result of the last call, or the argument of an
empty identity function), and the decompiled definition says `void`; callers declare it with a return type and use
the value. With mwcc that works; with GCC the value is whatever the void function left behind.

Usage: modern_void_used.py [src dir]
"""
import os
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from modern_short_calls import strip_comments_strings  # noqa: E402

VOID_DEF = re.compile(r'^(?:extern "C"\s+)?(?:static\s+)?(?:inline\s+)?void\s+(?:[A-Za-z_]\w*::)*([A-Za-z_]\w*)\s*\([^;{}]*\)\s*\{', re.M)
DEFINE = re.compile(r'^\s*#\s*define\s+([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*$', re.M)
NONVOID_DEF = re.compile(r'^(?:extern "C"\s+)?(?:static\s+)?(?:inline\s+)?(?!void\b)[A-Za-z_][\w\s\*:<>,]*?[\s\*]([A-Za-z_]\w*)\s*\([^;{}]*\)\s*\{', re.M)


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else "src"
    files = [Path(r) / f for r, _, fs in os.walk(src) for f in fs if f.endswith((".c", ".cpp"))]
    texts = {f: strip_comments_strings(f.read_text(errors="replace")) for f in files}
    void_defs, other_defs = {}, set()
    for f, t in texts.items():
        for m in VOID_DEF.finditer(t):
            void_defs.setdefault(m.group(1), str(f))
        for m in NONVOID_DEF.finditer(t):
            other_defs.add(m.group(1))
    candidates = {n: f for n, f in void_defs.items() if n not in other_defs}
    use = re.compile(r'(=|return|\bif\s*\(|\bwhile\s*\(|&&|\|\||!|\?|,|\(\s*)\s*(?:\([^()]*\)\s*)?\(?\s*([A-Za-z_]\w*)\s*\(')
    hits = 0
    for f, t in sorted(texts.items()):
        aliases = {m.group(1): m.group(2) for m in DEFINE.finditer(t)}
        for m in use.finditer(t):
            name = m.group(2)
            target = aliases.get(name, name)
            if target not in candidates:
                continue
            line = t.count("\n", 0, m.start()) + 1
            text = t.splitlines()[line - 1].strip()
            if re.match(r'^(?:extern\b|typedef\b|#)', text) or re.search(r'\bvoid\s+' + re.escape(name) + r'\s*\(', text):
                continue
            print(f"{f}:{line}: {name}{f' ({target})' if target != name else ''} is void ({candidates[target]}): {text[:120]}")
            hits += 1
    print(f"{hits} uses of void functions' values", file=sys.stderr)


if __name__ == "__main__":
    main()

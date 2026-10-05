#!/usr/bin/env python3
"""Sort the warnings of the modern build's LTO check (configure_modern.py --lto-check) into what matters for the port.

-Wlto-type-mismatch reports every declaration whose type differs from the definition in another file. Most are
harmless on the ARM ABI (a different pointer type, a missing const). The ones that break the modern build are calls
through a declaration with fewer parameters than the definition: mwcc happened to leave the missing arguments in
r1-r3 (the decompiled call relies on it), GCC doesn't. This lists, per call site file, the functions declared with
fewer parameters than they are defined with and actually called in that file.

Usage: modern_lto_report.py <lto log> [--all]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

WARN = re.compile(r"^(\S+?):(\d+):\d+: warning: type of '([^']+)' does not match original declaration")
NOTE = re.compile(r"^(\S+?):(\d+):\d+: note: '([^']+)' was previously declared here")


def declaration_text(path: str, line: int) -> str:
    try:
        lines = Path(path).read_text(errors="replace").splitlines()
    except OSError:
        return ""
    text = ""
    for l in lines[line - 1:line + 6]:
        text += " " + l.strip()
        if ")" in l and ("{" in l or ";" in l or text.count("(") <= text.count(")")):
            break
    return text


def param_count(text: str, name: str) -> int | None:
    i = text.find(name + "(")
    if i < 0:
        m = re.search(re.escape(name.split("::")[-1]) + r"\s*\(", text)
        if not m:
            return None
        i = m.start()
    j = text.index("(", i)
    depth, k = 0, j
    for k in range(j, len(text)):
        if text[k] == "(":
            depth += 1
        elif text[k] == ")":
            depth -= 1
            if depth == 0:
                break
    inner = text[j + 1:k].strip()
    if inner in ("", "void"):
        return 0
    depth, count = 0, 1
    for c in inner:
        if c in "(<[":
            depth += 1
        elif c in ")>]":
            depth -= 1
        elif c == "," and depth == 0:
            count += 1
    if "..." in inner:
        return 99
    return count


def main():
    log = Path(sys.argv[1]).read_text(errors="replace").splitlines()
    show_all = "--all" in sys.argv
    results = defaultdict(list)
    seen = set()
    for i, line in enumerate(log):
        m = WARN.match(line)
        if not m:
            continue
        decl_file, decl_line, sym = m.group(1), int(m.group(2)), m.group(3)
        for nl in log[i + 1:i + 8]:
            n = NOTE.match(nl)
            if n:
                break
        else:
            continue
        def_file, def_line, def_name = n.group(1), int(n.group(2)), n.group(3)
        key = (decl_file, sym)
        if key in seen:
            continue
        seen.add(key)
        decl = declaration_text(decl_file, decl_line)
        defn = declaration_text(def_file, def_line)
        short = sym if not sym.startswith("_Z") else sym
        dc = param_count(decl, sym) if sym in decl else param_count(decl, def_name)
        fc = param_count(defn, def_name)
        if dc is None or fc is None:
            continue
        member = "::" in defn.split("(")[0] and "static" not in defn.split("(")[0]
        if member and sym.startswith("_ZN") and sym in decl:
            fc += 1  # the declaration is the mangled name with an explicit `this`
        if dc >= fc or fc == 99:
            continue
        src = Path(decl_file).read_text(errors="replace")
        name = sym if sym in decl else def_name
        calls = [l for l in src.splitlines() if re.search(r"\b" + re.escape(name) + r"\s*\(", l)
                 and not re.match(r"\s*(extern\b|[A-Za-z_][\w\s\*:<>,]*\b" + re.escape(name) + r"\s*\([^)]*\)\s*;)", l)]
        # arguments actually passed at the calls (a C declaration `f()` is unprototyped: calls may pass more)
        short_calls = []
        for l in calls:
            for cm in re.finditer(r"\b" + re.escape(name) + r"\s*\(", l):
                ac = param_count(l[cm.start():], name)
                if ac is not None and ac < fc:
                    short_calls.append((ac, l.strip()))
        if not short_calls and not show_all:
            continue
        results[decl_file].append((name, min((a for a, _ in short_calls), default=dc), fc,
                                   f"{def_file}:{def_line}", len(short_calls)))
    total = 0
    for f in sorted(results):
        for name, dc, fc, where, ncalls in results[f]:
            print(f"{f}: {name}: called with {dc} argument(s), defined with {fc} ({where}); {ncalls} short call(s)")
            total += 1
    print(f"{total} call sites with too few parameters", file=sys.stderr)


if __name__ == "__main__":
    main()

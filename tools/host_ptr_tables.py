#!/usr/bin/env python3
"""Tables of pointers defined as u32 arrays, made pointer-sized for 64-bit hosts.

`extern "C" u32 sLoaders[9] = {(u32)FnA, (u32)FnB, ...};` read elsewhere as `Fn sLoaders[]`: on a 64-bit host the
readers step 8 bytes and read two entries as one pointer. For every u32 array definition whose initialisers are all
address casts (or 0), the element type becomes `uptr` (include/uptr.h: u32 on the DS), as do the u32 declarations
of the same name in all sources, so readers through either view see pointer-sized entries.

Usage: host_ptr_tables.py [--check] FILE...  (the definitions are looked for in FILE, declarations in all of src/)
"""
import glob
import re
import sys

DEF = re.compile(r'^((?:extern "C" )?(?:static )?(?:const )?)u32 (\w+)\[(\w*)\] = \{([^;]*?)\};', re.M | re.S)
ELEM = re.compile(r'\(u32\)\s*&?\s*[A-Za-z_][\w:]*(\s*\+\s*\w+)?|0')


def main():
    check = "--check" in sys.argv
    files = [a for a in sys.argv[1:] if a != "--check"]
    names = set()
    for f in files:
        t = open(f).read()
        out, last = [], 0
        for m in DEF.finditer(t):
            els = [e.strip() for e in m.group(4).split(",") if e.strip()]
            if not els or not all(ELEM.fullmatch(e) for e in els) or all(e == "0" for e in els):
                continue
            names.add(m.group(2))
            body = m.group(4).replace("(u32)", "(uptr)")
            out.append(t[last:m.start()] + f"{m.group(1)}uptr {m.group(2)}[{m.group(3)}] = {{{body}}};")
            last = m.end()
        if out and not check:
            t2 = "".join(out) + t[last:]
            if '"uptr.h"' not in t2:
                t2 = '#include "uptr.h"\n' + t2
            open(f, "w").write(t2)
    print(f"{len(names)} tables", file=sys.stderr)
    # the u32 declarations of the same names anywhere
    rx = re.compile(r'\b(extern\s+(?:"C"\s+)?(?:const\s+)?)u32(\s+)(' + "|".join(map(re.escape, sorted(names))) + r')(\s*\[)')
    nd = 0
    for f in glob.glob("src/**/*.c*", recursive=True) + glob.glob("include/**/*.h", recursive=True):
        t = open(f, errors="replace").read()
        t2, k = rx.subn(r"\1uptr\2\3\4", t)
        if k:
            nd += k
            print(f"{f}: {k} declarations")
            if not check:
                if '"uptr.h"' not in t2:
                    t2 = '#include "uptr.h"\n' + t2
                open(f, "w").write(t2)
    print(f"{nd} declarations", file=sys.stderr)


if __name__ == "__main__":
    main()

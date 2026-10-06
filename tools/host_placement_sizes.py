#!/usr/bin/env python3
"""Heap blocks that objects are constructed in, sized for 64-bit hosts.

`p = Heap_Alloc(heap, 0x84); ... new (p) MsgTextLabel(...)` or `... _ZN12MsgTextLabelC1Ev(p)`: the block has the
object's DS size; on a 64-bit host the object is larger. For an allocation into a variable with a constant size
whose variable is constructed as a class within the next few lines, the size becomes HOST_SIZED(N, Class)
(include/uptr.h) and the class's header is included (not for a class the file defines itself).

Usage: host_placement_sizes.py [--check] FILE...
"""
import re
import sys

sys.path.insert(0, __file__.rsplit("/", 1)[0])
from host_ctor_buffers import class_headers  # noqa: E402

ALLOC = re.compile(r"\b(\w+)\s*=\s*(?:\([^()]*\)\s*)?(?:\w+::)*(Heap_Alloc|Heap_AllocTail|Mem_Alloc|Mem_AllocTail|"
                   r"WfcHeap_Alloc|WfcHeap_AllocClear)\s*\(([^;]*)\);")
SIZE_ARG = {"Heap_Alloc": 1, "Heap_AllocTail": 1, "Mem_Alloc": 0, "Mem_AllocTail": 0, "WfcHeap_Alloc": 0,
            "WfcHeap_AllocClear": 0}
LOOKAHEAD = 8


def main():
    check = "--check" in sys.argv
    files = [a for a in sys.argv[1:] if a != "--check"]
    headers = class_headers()
    total = 0
    for f in files:
        t = open(f).read()
        lines = t.split("\n")
        need, n = set(), 0
        for li, line in enumerate(lines):
            m = ALLOC.search(line)
            if not m:
                continue
            var, fn = m.group(1), m.group(2)
            args = [a.strip() for a in m.group(3).split(",")]
            k = SIZE_ARG[fn]
            if k >= len(args) or not re.fullmatch(r"0x[0-9a-fA-F]+|\d+", args[k]):
                continue
            cls = None
            for nxt in lines[li + 1:li + 1 + LOOKAHEAD]:
                c = re.search(r"\bnew\s*\(\s*" + re.escape(var) + r"\s*\)\s*(\w+)", nxt)
                if c:
                    cls = c.group(1)
                    break
                c = re.search(r"\b_ZN(\d+)(\w+?)C[12]E\w*\(\s*(?:\([^()]*\)\s*)?" + re.escape(var) + r"\b", nxt)
                if c:
                    cls = c.group(2)[:int(c.group(1))]
                    break
            if cls is None:
                continue
            local = re.search(r"^(?:class|struct) %s\b[^;]*\{" % re.escape(cls), t, re.M)
            if not local and cls not in headers:
                print(f"{f}:{li + 1}: {cls}: no definition, skipped")
                continue
            new = f"HOST_SIZED({args[k]}, {cls})"
            # replace the size argument inside the call text
            call = m.group(3)
            parts = call.split(",")
            parts[k] = parts[k].replace(args[k], new, 1)
            lines[li] = line[:m.start(3)] + ",".join(parts) + line[m.end(3):]
            if not local:
                need.add(headers[cls])
            n += 1
            print(f"{f}:{li + 1}: {args[k]} -> {new}")
        if n and not check:
            t2 = "\n".join(lines)
            inc = "".join(f'#include "{h}"\n' for h in sorted(need) if f'#include "{h}"' not in t2)
            if "uptr.h" not in t2 and "uptr.h" not in inc:
                inc += '#include "uptr.h"\n'
            open(f, "w").write(inc + t2)
        total += n
    print(f"total {total}", file=sys.stderr)


if __name__ == "__main__":
    main()

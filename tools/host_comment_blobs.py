#!/usr/bin/env python3
"""Member blobs that name their type in a comment, sized for 64-bit hosts.

`/* 0x000 */ u8 seEmitter[0x40];      // SndSeEmitter` keeps an object as raw storage of its DS size (constructed by
hand elsewhere); on a 64-bit host the object is larger and its constructor writes over the next member. When the
comment names a class that a header in include/ defines (or the file itself), the array becomes
`u8 name[HOST_SIZED(N, Type)] HOST_ALIGN8` (include/uptr.h: N on the DS) and the header is included.

Usage: host_comment_blobs.py [--check] FILE...
"""
import re
import sys

sys.path.insert(0, __file__.rsplit("/", 1)[0])
from host_ctor_buffers import class_headers  # noqa: E402

DECL = re.compile(r"^(\s*(?:/\*[^*]*\*/\s*)?)u8 (\w+)\[((?:0x[0-9a-fA-F]+|\d+)(?:\s*[-+]\s*(?:0x[0-9a-fA-F]+|\d+))*)\];(\s*//\s*([A-Z]\w+)\b[^\n]*)$", re.M)


# views with named members inside (the model unions), and the save data (the DS file format: never resized)
SKIP_TYPES = {"AnimModel", "BlendAnimModel", "CachedModel", "Model", "NNSG3dRenderObj", "Letter", "TownExchangeRecord",
              "BlancaFaceRecord"}


def main():
    check = "--check" in sys.argv
    files = [a for a in sys.argv[1:] if a != "--check"]
    headers = class_headers()
    total = 0
    for f in files:
        t = open(f).read()
        need = set()
        out, last, n = [], 0, 0
        for m in DECL.finditer(t):
            ty = m.group(5)
            if ty in SKIP_TYPES:
                continue
            local = re.search(r"^(?:class|struct) %s\b[^;]*\{" % re.escape(ty), t, re.M)
            hdr = headers.get(ty)
            if not local and not hdr:
                continue
            if hdr and f.endswith(hdr):
                continue  # (the header that defines the type itself)
            size = eval(m.group(3))
            new = f"{m.group(1)}u8 {m.group(2)}[HOST_SIZED({size:#x}, {ty})] HOST_ALIGN8;{m.group(4)}"
            out.append(t[last:m.start()] + new)
            last = m.end()
            if not local:
                need.add(hdr)
            n += 1
            print(f"{f}: {m.group(2)}[{m.group(3)}] -> HOST_SIZED({size:#x}, {ty})")
        if n and not check:
            t2 = "".join(out) + t[last:]
            inc = "".join(f'#include "{h}"\n' for h in sorted(need) if f'#include "{h}"' not in t2)
            if '"uptr.h"' not in t2:
                inc += '#include "uptr.h"\n'
            # after the include guard of a header, at the top of a source
            g = re.search(r"#define \w+_H\n", t2)
            if g and f.endswith(".h"):
                t2 = t2[:g.end()] + inc + t2[g.end():]
            else:
                t2 = inc + t2
            open(f, "w").write(t2)
        total += n
    print(f"total {total}", file=sys.stderr)


if __name__ == "__main__":
    main()

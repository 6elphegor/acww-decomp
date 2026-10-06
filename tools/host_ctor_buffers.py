#!/usr/bin/env python3
"""Stack and member buffers that C++ objects are constructed in, sized for 64-bit hosts.

The sources build objects in raw buffers by calling the constructor's mangled name: `u32 src[16];
_ZN11LabelStringC1Ev(src);`. The buffer has the object's DS size; on a 64-bit host the object is larger (vtable
pointer, pointers) and its constructor writes past the buffer. For each such call whose argument is an array declared
in the same function, the array's size becomes HOST_SIZED(bytes, Class) / element size (include/uptr.h: the DS size on
the DS) and the class's header (include/**.h with `class Class`) is included.

Usage: host_ctor_buffers.py [--check] FILE...
"""
import glob
import re
import sys

CTOR = re.compile(r"_ZN(\d+)(\w+?)C[12]Ev\(\s*&?\s*([A-Za-z_]\w*)\s*\)")
ELEM = {"u8": 1, "s8": 1, "char": 1, "u16": 2, "s16": 2, "u32": 4, "s32": 4, "int": 4}


def class_headers():
    out = {}
    for h in glob.glob("include/**/*.h", recursive=True):
        for m in re.finditer(r"^(?:class|struct) (\w+)\s*(?::[^{;]*)?\{", open(h, errors="replace").read(), re.M):
            out.setdefault(m.group(1), h[len("include/"):])
    return out


def in_type_body(t, pos):
    """whether the line at pos is inside a class / struct definition (scanning back to its opening line)"""
    for line in reversed(t[:pos].split("\n")[:-1]):
        if re.match(r"(?:typedef\s+)?(?:class|struct|union)\b[^;()]*\{\s*$", line):
            return True
        if re.match(r"\S", line) and not line.startswith(("#", "//", "public:", "private:", "protected:")):
            return False
    return False


def main():
    check = "--check" in sys.argv
    files = [a for a in sys.argv[1:] if a != "--check"]
    headers = class_headers()
    total = 0
    for f in files:
        t = open(f).read()
        edits = []
        need = set()
        for m in CTOR.finditer(t):
            n, name, var = int(m.group(1)), m.group(2), m.group(3)
            cls = name[:n] if len(name) >= n else name
            # the declaration of var: the last one before the call, in the same function (no '}' at column 0 between)
            before = t[:m.start()]
            fn_start = before.rfind("\n}")
            region = before[fn_start if fn_start >= 0 else 0:]
            decls = list(re.finditer(r"\b(u8|s8|char|u16|s16|u32|s32|int)\s+" + re.escape(var) + r"\s*\[\s*(0x[0-9a-fA-F]+|\d+)\s*\]", region))
            if not decls:
                # a member of the class (an array member constructed in place): its declaration in a class / struct body
                decls = list(re.finditer(r"^(\s+)(?:/\*[^*]*\*/\s*)?(u8|s8|char|u16|s16|u32|s32|int)\s+" + re.escape(var) +
                                         r"\s*\[\s*(0x[0-9a-fA-F]+|\d+)\s*\]\s*;", t, re.M))
                decls = [d for d in decls if in_type_body(t, d.start())]
                if len(decls) != 1:
                    continue
                d = decls[0]
                elem, count = d.group(2), int(d.group(3), 0)
                if cls not in headers and not re.search(r"^(?:class|struct) %s\b[^;]*\{" % re.escape(cls), t, re.M):
                    print(f"{f}: {cls} ({var}): no header with the class, skipped")
                    continue
                byte_size = count * ELEM[elem]
                s0 = d.start(2)
                e0 = d.end() - 1  # before the ';'
                new = f"{elem} {var}[HOST_SIZED({byte_size:#x}, {cls}) / {ELEM[elem]}] HOST_ALIGN8"
                if (s0, e0, new) not in edits:
                    edits.append((s0, e0, new))
                    if cls in headers:
                        need.add(headers[cls])
                    print(f"{f}: member {t[s0:e0]} -> {new}  ({cls})")
                continue
            d = decls[-1]
            elem, count = d.group(1), int(d.group(2), 0)
            if cls not in headers:
                print(f"{f}: {cls} ({var}): no header with the class, skipped")
                continue
            byte_size = count * ELEM[elem]
            new = f"{elem} {var}[HOST_SIZED({byte_size:#x}, {cls}) / {ELEM[elem]}] HOST_ALIGN8"
            start = (fn_start if fn_start >= 0 else 0) + d.start()
            end = (fn_start if fn_start >= 0 else 0) + d.end()
            if "HOST_SIZED" in t[start:end + 40]:
                continue
            edits.append((start, end, new))
            need.add(headers[cls])
            print(f"{f}: {t[start:end]} -> {new}  ({cls})")
        for s, e, new in sorted(set(edits), reverse=True):
            t = t[:s] + new + t[e:]
        if edits and not check:
            # (not for a class the file defines itself: that definition is complete where the buffer is)
            need = {h for h in need if not any(headers.get(c) == h and re.search(r"^(?:class|struct) %s\b[^;]*\{" % re.escape(c), t, re.M)
                                               for c in headers)}
            inc = "".join(f'#include "{h}"\n' for h in sorted(need) if f'#include "{h}"' not in t)
            open(f, "w").write(inc + t)
        total += len(set(edits))
    print(f"total {total}", file=sys.stderr)


if __name__ == "__main__":
    main()

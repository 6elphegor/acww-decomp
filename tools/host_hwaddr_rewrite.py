#!/usr/bin/env python3
"""Rewrite casts of DS memory addresses to pointers into the host objects of include/host_mem.h
(docs/portability.md 3.2).

    python3 tools/host_hwaddr_rewrite.py [--check] [files or directories ...]   (default: src)

A cast of a literal address, `(T *)0x027fffa8` (also inside a `*(...)` dereference or a #define), becomes
- the system work area 0x027ff000-0x027fffff: HW_SYSWORK(T, member) / HW_SYSWORK_AT(T, member, offset), the member
  found by its address in HostSysWork's comments (include/host_mem.h). Members that hold pointers (the arena bounds,
  the thread info, the exception vector) are pointer-sized on 64-bit hosts: a cast to them is reported and left for a
  hand edit (their users take the member's real type);
- DTCM 0x027e0000-0x027e3fff: (T *)(HW_DTCM_BLOCK + offset);
- the palettes 0x05000000-0x050007ff: (T *)(HW_PLTT + offset); OAM 0x07000000-0x070007ff: (T *)(HW_OAM + offset);
- VRAM 0x06000000-0x068fffff: (T *)HostVram_CpuPtr(address).
Files that get a rewrite include "host_mem.h". --check only lists the casts (exit status 1 if any). Addresses
computed at run time (VRAM pointers from register values, table entries) aren't literals: they were converted by
hand (HostVram_CpuPtr where the number becomes a pointer).
"""
import argparse
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TYPE_SIZES = {"unsigned char": 1, "unsigned short": 2, "unsigned int": 4}


def members():
    """HostSysWork's members: (address, size, name, is_pointer) from include/host_mem.h"""
    src = open(os.path.join(ROOT, "include", "host_mem.h")).read()
    body = src[src.index("typedef struct HostSysWork {"):src.index("} HostSysWork;")]
    out = []
    for m in re.finditer(r"^\s*(unsigned char|unsigned short|unsigned int|void \*)\s*(\w+)(?:\[(\w+)\])?;\s*//\s*(0x[0-9a-f]+)",
                         body, re.M):
        t, name, n, addr = m.groups()
        ptr = t == "void *"
        size = (4 if ptr else TYPE_SIZES[t]) * (int(n, 0) if n else 1)  # (the DS's sizes)
        out.append((int(addr, 16), size, name, ptr))
    out.sort()
    for (a, s, n, _), (b, _, _, _) in zip(out, out[1:]):
        if a + s != b:
            raise SystemExit(f"host_mem.h: {n} at {a:#x} size {s:#x} doesn't reach the next member at {b:#x}")
    if out[0][0] != 0x027ff000 or out[-1][0] + out[-1][1] != 0x02800000:
        raise SystemExit("host_mem.h: HostSysWork doesn't cover 0x027ff000-0x027fffff")
    return out


def strip(s):
    """the source with comments and string/char literals blanked out (same length)"""
    out = []
    i, n = 0, len(s)
    while i < n:
        if s.startswith("//", i):
            j = s.find("\n", i)
            j = n if j < 0 else j
            out.append(" " * (j - i))
            i = j
        elif s.startswith("/*", i):
            j = s.find("*/", i + 2)
            j = n if j < 0 else j + 2
            out.append(re.sub(r"[^\n]", " ", s[i:j]))
            i = j
        elif s[i] in "\"'":
            j = i + 1
            while j < n and s[j] != s[i]:
                j += 2 if s[j] == "\\" else 1
            out.append(" " * (min(j, n - 1) - i + 1))
            i = j + 1
        else:
            out.append(s[i])
            i += 1
    return "".join(out)[:n]


CAST = re.compile(r"\(\s*((?:const\s+)?(?:volatile\s+)?[A-Za-z_]\w*(?:\s+volatile)?(?:\s+const)?)\s*\*\s*\)\s*"
                  r"(0[xX][0-9a-fA-F]{7,8})[uUlL]*\b")


def rewrite_cast(t, a, mem):
    """the replacement of `(t *)a`, or None (not a host object's address), or a string starting with '!' (a
    hand edit)"""
    if 0x027ff000 <= a < 0x02800000:
        for base, size, name, ptr in mem:
            if base <= a < base + size:
                if ptr:
                    return f"!{name} holds a pointer"
                return f"HW_SYSWORK({t}, {name})" if a == base else f"HW_SYSWORK_AT({t}, {name}, {a - base:#x})"
    if 0x027e0000 <= a < 0x027e4000:
        return f"({t} *)(HW_DTCM_BLOCK + {a - 0x027e0000:#x})" if a != 0x027e0000 else f"({t} *)HW_DTCM_BLOCK"
    if 0x05000000 <= a < 0x05000800:
        return f"({t} *)(HW_PLTT + {a - 0x05000000:#x})" if a != 0x05000000 else f"({t} *)HW_PLTT"
    if 0x07000000 <= a < 0x07000800:
        return f"({t} *)(HW_OAM + {a - 0x07000000:#x})" if a != 0x07000000 else f"({t} *)HW_OAM"
    if 0x06000000 <= a < 0x06900000:
        return f"({t} *)HostVram_CpuPtr({a:#010x})"
    return None


def add_include(s):
    if '#include "host_mem.h"' in s:
        return s
    lines = s.split("\n")
    for i, l in enumerate(lines):
        if l.startswith("#include"):
            lines.insert(i + 1, '#include "host_mem.h"')
            return "\n".join(lines)
    # no include: after the leading comment lines
    i = 0
    while i < len(lines) and lines[i].startswith("//"):
        i += 1
    lines.insert(i, '#include "host_mem.h"')
    return "\n".join(lines)


def process(path, mem, check):
    s = open(path, encoding="utf-8").read()
    code = strip(s)
    edits, notes = [], []
    for m in CAST.finditer(code):
        r = rewrite_cast(re.sub(r"\s+", " ", m.group(1).strip()), int(m.group(2), 16), mem)
        if r is None:
            continue
        line = code.count("\n", 0, m.start()) + 1
        if r.startswith("!"):
            notes.append(f"{path}:{line}: {r[1:]}: {s[m.start():m.end()]}")
            continue
        edits.append((m.start(), m.end(), r, line))
    for e in edits:
        print(f"{path}:{e[3]}: {s[e[0]:e[1]]} -> {e[2]}")
    for n in notes:
        print(f"{n} (hand edit)")
    if check or not edits:
        return len(edits) + len(notes)
    for a, b, r, _ in reversed(edits):
        s = s[:a] + r + s[b:]
    open(path, "w", encoding="utf-8").write(add_include(s))
    return len(edits) + len(notes)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--check", action="store_true")
    ap.add_argument("paths", nargs="*", default=["src"])
    args = ap.parse_args()
    os.chdir(ROOT)
    mem = members()
    n = 0
    for p in args.paths:
        files = [p] if os.path.isfile(p) else sorted(os.path.join(d, f) for d, _, fs in os.walk(p) for f in fs
                                                     if f.endswith((".c", ".cpp", ".h")))
        for f in files:
            n += process(f, mem, args.check)
    print(f"{n} casts", file=sys.stderr)
    return 1 if args.check and n else 0


if __name__ == "__main__":
    sys.exit(main())

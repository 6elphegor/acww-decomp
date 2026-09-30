#!/usr/bin/env python3
"""
disambiguate.py [--write] : resolve main's ambiguous relocations into overlays ("module:overlays(a,b,...)").

Overlays that share a load address make some references ambiguous, and dsd then names the target after the first
listed overlay. Once that overlay is linked from source, the name may no longer exist (or be at a different
object), so the reference breaks. Main's scene table (0x020e2xxx) points at each overlay's scene registration
entry {factory, u16 id, u16 id}; exactly one candidate overlay has such an entry at the target address. This tool
finds it and rewrites the relocation to "module:overlay(N)". Without --write it only reports.
"""
import re
import struct
import sys
from pathlib import Path

CFG = Path("config/usa/arm9")


def sections(ov):
    out = {}
    for line in (CFG / "overlays" / ov / "delinks.txt").read_text().split("\n\n")[0].splitlines():
        m = re.match(r"\s*(\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
        if m:
            out[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    return out


def is_scene_entry(n, addr):
    ov = f"ov{n:03d}"
    secs = sections(ov)
    if ".text" not in secs or ".data" not in secs or not (secs[".data"][0] <= addr < secs[".data"][1] - 4):
        return False
    b = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
    base = secs[".text"][0]
    fn, ids = struct.unpack_from("<II", b, addr - base)
    t0, t1 = secs[".text"]
    return fn & 1 and t0 <= (fn & ~1) < t1 and (ids & 0xffff) < 0x400 and (ids >> 16) < 0x400


def main():
    p = CFG / "relocs.txt"
    lines = p.read_text().splitlines()
    fixed = unresolved = 0
    for i, line in enumerate(lines):
        m = re.match(r"(from:0x[0-9a-f]+ kind:\S+ to:(0x[0-9a-f]+)) module:overlays\(([\d,]+)\)", line)
        if not m:
            continue
        addr = int(m.group(2), 16)
        cands = [int(x) for x in m.group(3).split(",")]
        hits = [n for n in cands if is_scene_entry(n, addr)]
        if len(hits) == 1:
            lines[i] = f"{m.group(1)} module:overlay({hits[0]})"
            fixed += 1
        else:
            unresolved += 1
    print(f"{fixed} ambiguous relocations resolved to one overlay, {unresolved} left ambiguous")
    if "--write" in sys.argv:
        p.write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()

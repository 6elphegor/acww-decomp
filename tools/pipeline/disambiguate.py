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


SCENE_TABLE = 0x020e1e2c  # main's scene table: slot = SCENE_TABLE + 4 * (the entry's first id)


def scene_entry_id(n, addr):
    '''first id of overlay n's scene entry at addr, or None'''
    if not is_scene_entry(n, addr):
        return None
    ov = f"ov{n:03d}"
    secs = sections(ov)
    b = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
    return struct.unpack_from("<H", b, addr - secs[".text"][0] + 4)[0]


def is_scene_entry(n, addr):
    ov = f"ov{n:03d}"
    secs = sections(ov)
    if ".text" not in secs or ".data" not in secs or not (secs[".data"][0] <= addr < secs[".data"][1] - 4):
        return False
    b = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
    base = secs[".text"][0]
    fn, ids = struct.unpack_from("<II", b, addr - base)
    t0, t1 = secs[".text"]
    return fn & 1 and t0 <= (fn & ~1) < t1 and 0 < (ids & 0xffff) < 0x400 and 0 < (ids >> 16) < 0x400


def dependencies(lines, own):
    '''overlays a module references unambiguously (its code depends on them being loaded)'''
    deps = set()
    for line in lines:
        m = re.search(r"module:overlay\((\d+)\)", line)
        if m and int(m.group(1)) != own:
            deps.add(int(m.group(1)))
    return deps


_SYMADDR = {}


def symbol_addresses(n):
    if n not in _SYMADDR:
        s = set()
        p = CFG / "overlays" / f"ov{n:03d}" / "symbols.txt"
        for line in p.read_text().splitlines() if p.exists() else []:
            m = re.search(r"addr:(0x[0-9a-f]+)", line)
            if m:
                s.add(int(m.group(1), 16))
        _SYMADDR[n] = s
    return _SYMADDR[n]


def consistent_overlay(lines):
    '''the one candidate overlay that has a symbol at every ambiguous target of this module, if unique'''
    refs = []
    for line in lines:
        m = re.search(r"to:(0x[0-9a-f]+) module:overlays\(([\d,]+)\)", line)
        if m:
            refs.append((int(m.group(1), 16) & ~1, [int(x) for x in m.group(2).split(",")]))
    if not refs:
        return {}
    out = {}
    cands = {n for _, c in refs for n in c}
    good = [n for n in cands if all(a in symbol_addresses(n) for a, c in refs if n in c)]
    # per candidate list, pick the good candidate this module references most (unique maximum)
    uses = {n: sum(1 for _, c in refs if n in c) for n in good}
    for _, c in refs:
        g = sorted((n for n in c if n in good), key=lambda n: -uses[n])
        if len(g) == 1 or (len(g) > 1 and uses[g[0]] > uses[g[1]]):
            out[tuple(c)] = g[0]
    return out


def resolve_file(p, own, write):
    '''own: the module's own overlay number (None for main)'''
    lines = p.read_text().splitlines()
    deps = dependencies(lines, own)
    consistent = consistent_overlay(lines) if own is not None else {}
    fixed = left = 0
    for i, line in enumerate(lines):
        m = re.match(r"(from:0x[0-9a-f]+ kind:\S+ to:(0x[0-9a-f]+)) module:overlays\(([\d,]+)\)", line)
        if not m:
            continue
        addr = int(m.group(2), 16)
        cands = [int(x) for x in m.group(3).split(",")]
        hits = [n for n in cands if is_scene_entry(n, addr)] if own is None else []
        if len(hits) > 1:
            # several overlays have an entry there: the slot's index is the owning entry's first id
            slot = (int(m.group(1).split()[0][5:], 16) - SCENE_TABLE) // 4
            hits = [n for n in hits if scene_entry_id(n, addr) == slot]
        if len(hits) != 1:
            # the overlay this module already depends on (e.g. ov125 on its library ov124)
            hits = [n for n in cands if n in deps]
        if len(hits) != 1 and tuple(cands) in consistent:
            hits = [consistent[tuple(cands)]]
        if len(hits) == 1:
            lines[i] = f"{m.group(1)} module:overlay({hits[0]})"
            fixed += 1
        else:
            left += 1
    if write and fixed:
        p.write_text("\n".join(lines) + "\n")
    return fixed, left


def main():
    write = "--write" in sys.argv
    tf, tl = resolve_file(CFG / "relocs.txt", None, write)
    print(f"main: {tf} ambiguous relocations resolved, {tl} left")
    of = ol = 0
    for d in sorted((CFG / "overlays").iterdir()):
        f, l = resolve_file(d / "relocs.txt", int(d.name[2:]), write)
        of += f
        ol += l
    print(f"overlays: {of} ambiguous relocations resolved, {ol} left")


if __name__ == "__main__":
    main()

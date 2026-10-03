#!/usr/bin/env python3
"""
ovdump.py <ovNNN> : dump an overlay's .data section as words, with relocation targets and symbols.txt labels,
to see which data objects a linked unit must define. Run from the repository root.
"""
import re
import struct
import sys
from pathlib import Path

ov = sys.argv[1]
cfg = Path("config/usa/arm9/overlays") / ov
secs = {}
for line in (cfg / "delinks.txt").read_text().split("\n\n")[0].splitlines():
    m = re.match(r"\s*(\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
    if m:
        secs[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
labels = {}
for line in (cfg / "symbols.txt").read_text().splitlines():
    m = re.match(r"(\S+) .*addr:(0x[0-9a-f]+)", line)
    if m:
        labels.setdefault(int(m.group(2), 16), []).append(m.group(1))
relocs = {}
for line in (cfg / "relocs.txt").read_text().splitlines():
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)", line)
    if m:
        relocs[int(m.group(1), 16)] = int(m.group(3), 16)
names = {}
for p in Path("config/usa/arm9").rglob("symbols.txt"):
    for line in p.read_text().splitlines():
        m = re.match(r"(\S+) kind:function.*addr:(0x[0-9a-f]+)", line)
        if m and (p.parent == cfg or p.parent.name in ("arm9", "autoload_2", "itcm", "overlays") or True):
            names.setdefault(int(m.group(2), 16), m.group(1))
b = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
base = min(a for a, _ in secs.values())  # the image start (.text, or .init for an overlay without code)
for sec in (".rodata", ".data"):
    if sec not in secs:
        continue
    a0, a1 = secs[sec]
    print(f"{sec} {a0:#x}-{a1:#x}")
    for a in range(a0, a1, 4):
        w, = struct.unpack_from("<I", b, a - base)
        lab = " ".join(labels.get(a, []))
        tgt = ""
        if a in relocs:
            t = relocs[a]
            tgt = f" -> {names.get(t & ~1, hex(t))}"
        txt = "".join(chr(c) if 32 <= c < 127 else "." for c in b[a - base:a - base + 4])
        print(f"  {a:#010x} {w:08x} {txt} {lab}{tgt}")
if ".bss" in secs:
    a0, a1 = secs[".bss"]
    print(f".bss {a0:#x}-{a1:#x}: " + ", ".join(f"{a:#x} {' '.join(v)}" for a, v in sorted(labels.items()) if a0 <= a < a1))

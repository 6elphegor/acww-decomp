#!/usr/bin/env python3
"""maincheck.py <obj.o> [<src-unit-path>] : compare a compiled MAIN-module unit with the original arm9.bin.

linkprep.py check only understands overlays; this is the per-function part of it for the ARM9 main module.
For every function the object defines whose name is a main symbols.txt function, the bytes are compared with
extract/usa/arm9/arm9.bin (relocated words masked). Output, one line per problem:
  BYTES   <name> differs from the original at +0x<first offset> (<n> bytes)[, size 0x.. vs original 0x..]
  EXTRA   <name> (0x<size> bytes) is not a main symbols.txt function
  MISSING <name> is inside the unit's .text range but the object does not define it   (needs <src-unit-path>:
          the unit's name as written in config/usa/arm9/delinks.txt, e.g. src/main/unk_02001234.cpp)
and a final summary line. No BYTES line for a function = byte-identical. Run from the repository root.
"""
import re
import sys
from pathlib import Path

sys.dont_write_bytecode = True
sys.path.insert(0, str(Path(__file__).parent))
import linkprep  # noqa: E402

CFG = Path("config/usa/arm9")
BASE = 0x02000000
arm9 = Path("extract/usa/arm9/arm9.bin").read_bytes()

byname = {}
for line in (CFG / "symbols.txt").read_text().splitlines():
    m = re.match(r"(\S+) kind:function\((\w+),size=(0x[0-9a-f]+)\) addr:(0x[0-9a-f]+)", line)
    if m:
        byname[m.group(1)] = (int(m.group(4), 16), int(m.group(3), 16))

o = linkprep.Obj(sys.argv[1])
defined = {}
for i, s in enumerate(o.sh):
    if o.secname[i] == ".text" and s[5]:
        names = [y[0] for y in o.syms if y[5] == i and y[3] == 2 and not y[0].startswith("$")]
        if names:
            defined[names[0]] = i

nbytes = nextra = nmissing = 0
for name, i in sorted(defined.items(), key=lambda kv: byname.get(kv[0], (0, 0))[0]):
    mine = o.section_bytes(i)
    if name not in byname:
        if not re.search(r"[CD]2E", name):  # C2/D2 twins are dropped by the linker when unreferenced
            print(f"EXTRA   {name} ({len(mine):#x} bytes) is not a main symbols.txt function")
            nextra += 1
        continue
    addr, size = byname[name]
    theirs = arm9[addr - BASE:addr - BASE + size]
    masked = set()
    for off, *_ in o.relocs.get(i, []):
        masked.update(range(off, off + 4))
    diff = [k for k in range(min(len(mine), len(theirs))) if k not in masked and mine[k] != theirs[k]]
    if diff or len(mine) != len(theirs):
        first = diff[0] if diff else min(len(mine), len(theirs))
        extra = f", size {len(mine):#x} vs original {size:#x}" if len(mine) != len(theirs) else ""
        print(f"BYTES   {name} differs from the original at +{first:#x} ({len(diff)} bytes){extra}")
        nbytes += 1

if len(sys.argv) > 2:
    rng = None
    cur = None
    for line in (CFG / "delinks.txt").read_text().splitlines():
        if line.startswith("src/"):
            cur = line.rstrip(":")
        m = re.match(r"\s*\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
        if m and cur == sys.argv[2]:
            rng = (int(m.group(1), 16), int(m.group(2), 16))
    if rng is None:
        print(f"(unit {sys.argv[2]} not found in delinks.txt: no MISSING check)")
    else:
        for name, (addr, size) in sorted(byname.items(), key=lambda kv: kv[1][0]):
            if rng[0] <= addr < rng[1] and name not in defined:
                print(f"MISSING {name} is inside the unit's .text range but the object does not define it")
                nmissing += 1

print(f"{nbytes} functions differ, {nextra} extra, {nmissing} missing, {len(defined)} defined")

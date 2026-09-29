#!/usr/bin/env python3
# integrate.py <source.cpp> <pairs.txt> <unit name> : add a matched group file as an unlinked unit
import re, sys, shutil
from pathlib import Path
root = Path("/Users/belphegor/Animal Crossing Wild World/acww-decomp")
src, pairs, unit = Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3]
symp = root/"config/usa/arm9/symbols.txt"; delp = root/"config/usa/arm9/delinks.txt"
lines = symp.read_text().splitlines()
byname = {}
for i, l in enumerate(lines):
    m = re.match(r"(\S+) kind:function\(\w+,size=(0x[0-9a-f]+)[^)]*\) addr:(0x[0-9a-f]+)", l)
    if m: byname[m.group(1)] = (i, int(m.group(3), 16), int(m.group(2), 16))
ren = {}
for l in pairs.read_text().splitlines():
    p = l.split()
    if len(p) < 2: continue
    if len(p) == 4 and p[2].startswith("func_"): p = [p[0] + p[1], p[2]]  # "<sym> <args> <orig> <args>" form
    comp, orig = p[0], p[1]
    if orig not in byname: sys.exit(f"{orig} not in symbols.txt")
    ren[orig] = comp
addrs = [byname[o][1] for o in ren]; ends = [byname[o][1] + byname[o][2] for o in ren]
start, end = min(addrs), (max(ends) + 3) & ~3
# overlap check against existing units
for m in re.finditer(r"\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", delp.read_text().split("\n\n", 1)[1]):
    a, b = int(m.group(1), 16), int(m.group(2), 16)
    if a < end and start < b: sys.exit(f"overlap with existing unit {a:#x}-{b:#x}")
names = {l.split(" ", 1)[0] for l in lines}
for orig, comp in ren.items():
    if comp != orig and comp in names: sys.exit(f"duplicate symbol {comp}")
for orig, comp in ren.items():
    i = byname[orig][0]; lines[i] = comp + " " + lines[i].split(" ", 1)[1]
symp.write_text("\n".join(lines) + "\n")
dst = root/"src/main"/f"{unit}.cpp"; shutil.copy(src, dst)
with delp.open("a") as f: f.write(f"\nsrc/main/{unit}.cpp:\n    .text       start:{start:#010x} end:{end:#010x}\n")
print(f"{unit}: {len(ren)} functions, {start:#x}-{end:#x}")

#!/usr/bin/env python3
"""Install an overlay as several complete units (the original was several translation units).

usage: install_units.py <ovNNN> <spec>

<spec> lists one unit per block: a line `unit <source.cpp>` (path of the prepared file), then one line
per section the unit owns: `<.section> <start> <end>`. Units are given in address order. Each unit is
written to src/<ovNNN>/unk_<ovNNN>_<text start>.cpp, the overlay's old units are removed with git rm,
and delinks.txt gets one `complete` entry per unit. renames.txt next to the first source (if present)
is applied like the link runner does. Run from the repo root; build and check the ROM afterwards.
"""
import re
import subprocess
import sys
from pathlib import Path

ov, spec = sys.argv[1], Path(sys.argv[2])
units = []
for line in spec.read_text().splitlines():
    p = line.split()
    if not p or p[0].startswith('#'):
        continue
    if p[0] == 'unit':
        units.append((Path(line.split(None, 1)[1].strip()), []))
    else:
        units[-1][1].append((p[0], int(p[1], 16), int(p[2], 16)))

missing = [str(s) for s, _ in units if not s.is_file()]
if missing:
    sys.exit(f"missing unit sources: {missing}")
cfg = Path(f"config/usa/arm9/overlays/{ov}")
head, _, old = (cfg / "delinks.txt").read_text().partition("\n\n")
for f in re.findall(r"^(src/\S+\.cpp):", old, re.M):
    subprocess.run(["git", "rm", "-q", f], check=True)
out = head.rstrip("\n") + "\n"
for src, secs in units:
    text = next(a for s, a, b in secs if s == ".text")
    name = f"src/{ov}/unk_{ov}_{text:08x}.cpp"
    Path(name).parent.mkdir(parents=True, exist_ok=True)
    Path(name).write_text(src.read_text())
    out += f"\n{name}:\n    complete\n"
    for s, a, b in secs:
        out += f"    {s:<11} start:{a:#010x} end:{b:#010x}\n"
(cfg / "delinks.txt").write_text(out)

ren = units[0][0].parent / "renames.txt"
if ren.exists():
    for line in ren.read_text().splitlines():
        p = line.split()
        if len(p) != 3:
            continue
        mod, addr, new = p
        sub = "" if mod == "main" else (f"overlays/{mod}" if mod.startswith("ov") else mod)
        sp = Path("config/usa/arm9") / sub / "symbols.txt"
        lines = sp.read_text().splitlines()
        a = int(addr, 16)
        for i, l in enumerate(lines):
            if f"addr:{a:#010x}" in l and ("kind:function" in l or "kind:data" in l or "kind:label" in l):
                lines[i] = new + " " + l.split(" ", 1)[1]
                break
        sp.write_text("\n".join(lines) + "\n")
print(f"installed {ov} as {len(units)} units")

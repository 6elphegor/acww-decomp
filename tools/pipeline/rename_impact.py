#!/usr/bin/env python3
"""
rename_impact.py <renames.txt> : for each rename, show the current name and which linked (complete) units'
compiled objects reference it — those would stop linking if it is renamed. Run after a build.
"""
import re
import subprocess
import sys
from pathlib import Path

CFG = Path("config/usa/arm9")


def symfile(mod):
    if mod == "main":
        return CFG / "symbols.txt"
    return CFG / (f"overlays/{mod}" if mod.startswith("ov") else mod) / "symbols.txt"


complete = []
for p in CFG.rglob("delinks.txt"):
    for m in re.finditer(r"^(src/\S+\.cpp):\n\s+complete", p.read_text(), re.M):
        complete.append(Path("build/usa") / Path(m.group(1)).with_suffix(".o"))
undef = {}
for o in complete:
    if o.exists():
        out = subprocess.run(["arm-none-eabi-nm", "-u", str(o)], capture_output=True, text=True).stdout
        for line in out.split():
            if line != "U":
                undef.setdefault(line, []).append(o.parent.name + "/" + o.stem)
bad = 0
for line in Path(sys.argv[1]).read_text().splitlines():
    f = line.split()
    if len(f) != 3:
        continue
    mod, addr, new = f
    a = int(addr, 16)
    cur = next((l.split(" ", 1)[0] for l in symfile(mod).read_text().splitlines() if f"addr:{a:#010x}" in l), None)
    users = undef.get(cur, []) if cur != new else []
    flag = "  <-- used by linked " + ", ".join(users) if users else ""
    bad += bool(users)
    print(f"{mod} {addr}: {cur} -> {new}{flag}")
print(f"{bad} renames would break linked units")

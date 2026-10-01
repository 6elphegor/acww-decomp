#!/usr/bin/env python3
"""Install ONE original translation unit of an overlay as a complete unit, leaving the rest of the overlay as it is.

usage: install_tu.py <ovNNN> <spec>

<spec> is one block in install_units.py format: `unit <source.cpp>` then `<.section> <start> <end>` lines for
the sections the TU owns. The TU is written to src/<ovNNN>/unk_<ovNNN>_<text start>.cpp and listed `complete`.
Existing units of the overlay are adjusted so nothing overlaps the TU's .text range:
  - a non-complete unit whose .text lies entirely inside the TU's range is removed (git rm + delinks entry);
  - a non-complete unit that straddles the range keeps its file, and its .text range is trimmed to the part
    outside the TU (a unit covering both sides keeps the lower part; the upper part becomes a gap, i.e. original);
  - complete units are never touched (overlap with one is an error).
renames.txt next to the source (if present) is applied. Run from the repo root; then build and check the ROM.
"""
import re
import subprocess
import sys
from pathlib import Path

ov, spec = sys.argv[1], Path(sys.argv[2])
src = None
secs = []
for line in spec.read_text().splitlines():
    p = line.split()
    if not p or p[0].startswith('#'):
        continue
    if p[0] == 'unit':
        src = Path(line.split(None, 1)[1].strip())
    else:
        secs.append((p[0], int(p[1], 16), int(p[2], 16)))
if src is None or not src.is_file():
    sys.exit(f"missing unit source: {src}")
t0, t1 = next((a, b) for s, a, b in secs if s == ".text")

cfg = Path(f"config/usa/arm9/overlays/{ov}")
head, _, rest = (cfg / "delinks.txt").read_text().partition("\n\n")
blocks = [b for b in re.split(r"\n\s*\n", rest.strip()) if b.strip()]
out_blocks = []
for b in blocks:
    lines = b.splitlines()
    name = lines[0].rstrip(":").strip()
    complete = any(l.strip() == "complete" for l in lines[1:])
    m = next((re.match(r"\s*\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", l) for l in lines[1:]
              if l.strip().startswith(".text")), None)
    if m is None:
        out_blocks.append(b)
        continue
    a, e = int(m.group(1), 16), int(m.group(2), 16)
    if e <= t0 or a >= t1:
        out_blocks.append(b)
        continue
    if complete:
        sys.exit(f"{name} is complete and overlaps the TU's text range")
    if a >= t0 and e <= t1:
        subprocess.run(["git", "rm", "-q", name], check=True)
        print(f"removed {name}")
        continue
    na, ne = (a, t0) if a < t0 else (t1, e)
    new = [lines[0]] + [f"    .text       start:{na:#010x} end:{ne:#010x}" if l.strip().startswith(".text") else l
                        for l in lines[1:]]
    out_blocks.append("\n".join(new))
    print(f"trimmed {name} to {na:#010x}..{ne:#010x}")

name = f"src/{ov}/unk_{ov}_{t0:08x}.cpp"
Path(name).parent.mkdir(parents=True, exist_ok=True)
Path(name).write_text(src.read_text())
tu = name + ":\n    complete\n" + "".join(f"    {s:<11} start:{a:#010x} end:{b:#010x}\n" for s, a, b in secs)
out_blocks.append(tu.rstrip("\n"))


def text_start(b):
    m = re.search(r"\.text\s+start:(0x[0-9a-f]+)", b)
    return int(m.group(1), 16) if m else 0


out_blocks.sort(key=text_start)
(cfg / "delinks.txt").write_text(head.rstrip("\n") + "\n\n" + "\n\n".join(out_blocks) + "\n")

ren = src.parent / "renames.txt"
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
print(f"installed {name}")

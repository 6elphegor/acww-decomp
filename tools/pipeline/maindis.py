#!/usr/bin/env python3
"""maindis.py <address> <length> [arm] : disassemble original ARM9 main code (Thumb unless `arm` is given) and list
the relocations of that range with the symbols.txt names of their targets. For reading a `__sinit` or checking a
call target. Addresses and lengths are hex. Needs arm-none-eabi-objdump. Run from the repository root.

    python3 tools/pipeline/maindis.py 0x020c2d4c 0x28
"""
import re
import subprocess
import sys
import tempfile
from pathlib import Path

CFG = Path("config/usa/arm9")
BASE = 0x02000000

a = sys.argv[1:]
if len(a) < 2:
    sys.exit(__doc__)
addr, length = int(a[0], 16), int(a[1], 16)
image = Path("extract/usa/arm9/arm9.bin").read_bytes()
if not (BASE <= addr and addr + length <= BASE + len(image)):
    sys.exit("the range is not inside the main module")
with tempfile.NamedTemporaryFile(suffix=".bin") as f:
    f.write(image[addr - BASE:addr - BASE + length])
    f.flush()
    cmd = ["arm-none-eabi-objdump", "-D", "-b", "binary", "-marm", f"--adjust-vma={addr:#x}", f.name]
    if "arm" not in a[2:]:
        cmd.insert(5, "-Mforce-thumb")
    out = subprocess.run(cmd, capture_output=True, text=True).stdout
print("\n".join(line for line in out.splitlines() if re.match(r"\s*[0-9a-f]+:\t", line)))

names = {}
for p in sorted(CFG.rglob("symbols.txt")):
    for line in p.read_text().splitlines():
        m = re.match(r"(\S+) kind:(\S+) addr:(0x[0-9a-f]+)", line)
        if m and not m.group(2).startswith("label"):
            mod = p.parent.name if p.parent != CFG else "main"
            names.setdefault((mod, int(m.group(3), 16)), m.group(1))


def modules(field):
    m = re.match(r"overlays?\(([\d,]+)\)", field)
    if m:
        return [f"ov{int(n):03d}" for n in m.group(1).split(",")]
    m = re.match(r"autoload\((\d+)\)", field)
    return [f"autoload_{m.group(1)}"] if m else [field]


print()
for line in (CFG / "relocs.txt").read_text().splitlines():
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)(?: add:(-?0x[0-9a-f]+))? module:(\S+)", line)
    if m and addr <= int(m.group(1), 16) < addr + length:
        to = int(m.group(3), 16)
        target = " / ".join(names.get((mod, to & ~1), names.get((mod, to), "?")) for mod in modules(m.group(5)))
        add = f" + {m.group(4)}" if m.group(4) else ""
        print(f"{m.group(1)} {m.group(2):<15} {m.group(3)} {target}{add}  [{m.group(5)}]")

#!/usr/bin/env python3
"""maindis.py <address> <length> [arm|thumb] : disassemble original code of the ARM9 main module or of the library
modules autoload_2 / itcm (the module is found from the address) and list the relocations of that range with the
symbols.txt names of their targets. For reading a `__sinit` or checking a call target. main is disassembled as
Thumb unless `arm` is given, autoload_2 and itcm as ARM unless `thumb` is given. Addresses and lengths are hex.
Needs arm-none-eabi-objdump. Run from the repository root.

    python3 tools/pipeline/maindis.py 0x020c2d4c 0x28
    python3 tools/pipeline/maindis.py 0x0210f0c4 0x90
"""
import re
import subprocess
import sys
import tempfile
from pathlib import Path

CFG = Path("config/usa/arm9")
# module -> (config directory, load address, original image)
MODULES = {
    "main": (CFG, 0x02000000, "extract/usa/arm9/arm9.bin"),
    "autoload_2": (CFG / "autoload_2", 0x020e7500, "extract/usa/arm9/unk_autoload_2.bin"),
    "itcm": (CFG / "itcm", 0x01ff8000, "extract/usa/arm9/itcm.bin"),
}

a = sys.argv[1:]
if len(a) < 2:
    sys.exit(__doc__)
addr, length = int(a[0], 16), int(a[1], 16)
for module, (MODCFG, BASE, image_path) in MODULES.items():
    image = Path(image_path).read_bytes()
    if BASE <= addr and addr + length <= BASE + len(image):
        break
else:
    sys.exit("the range is not inside main, autoload_2 or itcm")
thumb = "arm" not in a[2:] if module == "main" else "thumb" in a[2:]
with tempfile.NamedTemporaryFile(suffix=".bin") as f:
    f.write(image[addr - BASE:addr - BASE + length])
    f.flush()
    cmd = ["arm-none-eabi-objdump", "-D", "-b", "binary", "-marm", f"--adjust-vma={addr:#x}", f.name]
    if thumb:
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
for line in (MODCFG / "relocs.txt").read_text().splitlines():
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)(?: add:(-?0x[0-9a-f]+))? module:(\S+)", line)
    if m and addr <= int(m.group(1), 16) < addr + length:
        to = int(m.group(3), 16)
        target = " / ".join(names.get((mod, to & ~1), names.get((mod, to), "?")) for mod in modules(m.group(5)))
        add = f" + {m.group(4)}" if m.group(4) else ""
        print(f"{m.group(1)} {m.group(2):<15} {m.group(3)} {target}{add}  [{m.group(5)}]")

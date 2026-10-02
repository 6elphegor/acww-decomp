#!/usr/bin/env python3
"""romdiff.py : list which built modules (arm9 main, autoloads, overlays) differ from the original extract."""
from pathlib import Path

b = Path("build/usa/build")
e = Path("extract/usa")
pairs = [(b / "arm9.bin", e / "arm9/arm9.bin")]
for p in sorted(b.glob("arm9_ov*.bin")):
    n = int(p.stem[len("arm9_ov"):])
    pairs.append((p, e / f"arm9_overlays/ov{n:03d}.bin"))
# built name, original name (dsd extracts the unnamed autoloads as unk_autoload_N.bin)
for built_name, orig_name in (("itcm", "itcm"), ("dtcm", "dtcm"), ("autoload_2", "unk_autoload_2"),
                              ("autoload_3", "unk_autoload_3")):
    pairs.append((b / f"{built_name}.bin", e / f"arm9/{orig_name}.bin"))
bad = 0
for built, orig in pairs:
    if not built.exists() or not orig.exists():
        continue
    x, y = built.read_bytes(), orig.read_bytes()
    if x != y:
        bad += 1
        first = next((i for i in range(min(len(x), len(y))) if x[i] != y[i]), min(len(x), len(y)))
        print(f"{built.name}: differs (sizes {len(x):#x}/{len(y):#x}, first difference at +{first:#x})")
print(f"{bad} modules differ")

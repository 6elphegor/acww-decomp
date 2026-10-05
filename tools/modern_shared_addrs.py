#!/usr/bin/env python3
"""List references from main, ITCM, DTCM and the autoloads to an overlay symbol whose address another overlay also
uses (modern build, see docs/modern.md).

The original's main code holds fixed addresses inside overlays (callback tables, mode tables). Several overlays are
loaded at the same addresses, and the decompiled code names the address after one overlay's symbol: if that's the
wrong overlay, the matching build still matches (same address) but the modern build points at the named symbol, in
an overlay that isn't loaded (sCameraModeTable named ov065's SslCert_MatchHostName for ov068's
CameraEventModes::initModeFollowTarget). Each hit needs a look at which overlay is loaded when the code runs.

Usage: modern_shared_addrs.py <nm> <objects.txt> [config dir]
"""
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path


def main():
    nm, objects_file = sys.argv[1], sys.argv[2]
    config = Path(sys.argv[3] if len(sys.argv) > 3 else "config/usa/arm9")
    by_addr = defaultdict(list)  # address -> [(overlay, name)]
    owner = {}
    for f in sorted((config / "overlays").glob("*/symbols.txt")):
        ov = f.parent.name
        for line in f.read_text().splitlines():
            m = re.match(r"(\S+) kind:(\w+)\S* addr:0x([0-9a-f]+)", line)
            if m:
                a = int(m.group(3), 16)
                by_addr[a].append((ov, m.group(1)))
                owner[m.group(1)] = (ov, a)
    objects = [l.strip() for l in open(objects_file) if l.strip()]
    hits = 0
    for obj in objects:
        if re.search(r"/src/ov\d+/", obj) or "/gaps/" in obj:
            continue
        out = subprocess.run([nm, "-u", obj], capture_output=True, text=True).stdout
        for line in out.splitlines():
            name = line.split()[-1]
            if name not in owner:
                continue
            ov, a = owner[name]
            others = [f"{o}:{n}" for o, n in by_addr[a] if o != ov]
            if others:
                print(f"{obj}: {name} ({ov} {a:#x}); also {', '.join(others[:4])}")
                hits += 1
    print(f"{hits} references to shared overlay addresses", file=sys.stderr)


if __name__ == "__main__":
    main()

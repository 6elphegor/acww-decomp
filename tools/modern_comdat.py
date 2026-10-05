#!/usr/bin/env python3
"""Give an overlay object's vague-linkage definitions (inline functions, vtables, template instances) names of their
own overlay (modern build, see docs/modern.md).

GCC emits an inline function or a vtable whose class has no key function in every object that uses it, as a weak
symbol in a COMDAT group, and GNU ld keeps the first copy it meets. That copy may be in an overlay: main (or another
overlay) then calls whatever overlay happens to be loaded at that address (VillagerActor's constructor in main called
NpcActor's constructor in ov074). mwld kept a copy per module. The overlay's objects get every weak symbol they
define, and its COMDAT group signatures, renamed to `<name>.<overlay>` (references in the object follow):
the copies are merged within the overlay and never chosen by another module.

Usage: modern_comdat.py --nm <nm> --objcopy <objcopy> --readelf <readelf> <overlay name> <in.o> <out.o>
"""
import argparse
import re
import subprocess
import tempfile
from pathlib import Path


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--nm", required=True)
    ap.add_argument("--objcopy", required=True)
    ap.add_argument("--readelf", required=True)
    ap.add_argument("overlay")
    ap.add_argument("input")
    ap.add_argument("output")
    args = ap.parse_args()
    out = subprocess.run([args.nm, "--defined-only", args.input], capture_output=True, text=True, check=True).stdout
    weak = [p[2] for p in (line.split() for line in out.splitlines()) if len(p) == 3 and p[1] in "WV"]
    # group signatures that aren't one of those symbols (a constructor's group is named after the C5 "comdat"
    # constructor, a local symbol of the group section)
    groups = subprocess.run([args.readelf, "-gW", args.input], capture_output=True, text=True, check=True).stdout
    weak += sorted(set(re.findall(r"^COMDAT group section \[\s*\d+\] `\.group' \[(.+)\]", groups, re.M)) - set(weak))
    with tempfile.NamedTemporaryFile("w", suffix=".syms", delete=False) as f:
        f.write("".join(f"{s} {s}.{args.overlay}\n" for s in weak))
        syms = f.name
    try:
        subprocess.run([args.objcopy, f"--redefine-syms={syms}", args.input, args.output], check=True)
    finally:
        Path(syms).unlink()


if __name__ == "__main__":
    main()

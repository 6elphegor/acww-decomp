#!/usr/bin/env python3
"""Apply an aliases.txt (lines `<new name> <addr>`) to the first of the given symbols.txt files that has a
function symbol at that address.

usage: apply_aliases.py <aliases.txt> <symbols.txt>...

Each new name becomes a zero-size label of the function's mode, right after the function symbol (see alias.py).
Names already present in that file are skipped. Overlays share address ranges, so list only the modules the
aliases belong to (e.g. main's symbols.txt and the overlay's own).
"""
import re
import sys
from pathlib import Path

alias_file = Path(sys.argv[1])
files = [Path(p) for p in sys.argv[2:]]
texts = {p: p.read_text().splitlines(keepends=True) for p in files}
added = 0
for line in alias_file.read_text().splitlines():
    p = line.split()
    if len(p) != 2:
        continue
    new, addr = p[0], int(p[1], 16)
    for f in files:
        lines = texts[f]
        if any(l.split(' ', 1)[0] == new for l in lines):
            break
        hit = next((i for i, l in enumerate(lines) if f"addr:{addr:#010x}" in l and "kind:function" in l), None)
        if hit is None:
            continue
        mode = re.search(r'kind:function\((thumb|arm)', lines[hit]).group(1)
        lines.insert(hit + 1, f"{new} kind:label({mode}) addr:{addr:#010x}\n")
        print(f"{f.parent.name}: {new} -> {lines[hit].split(' ', 1)[0]}")
        added += 1
        break
    else:
        sys.exit(f"no function symbol at {addr:#010x} for {new}")
for f in files:
    f.write_text(''.join(texts[f]))
print(f"{added} aliases added")

#!/usr/bin/env python3
"""Add alias names by address: alias_addr.py <symbols.txt> <addr>=<new name>...

Like alias.py, but the existing symbol is found by its address. Each new name becomes a zero-size label of the
same mode right after the function symbol at that address. Names already present are skipped.
"""
import re
import sys

path = sys.argv[1]
lines = open(path).read().splitlines(keepends=True)
names = {l.split(' ', 1)[0] for l in lines}
for arg in sys.argv[2:]:
    addr, new = arg.split('=', 1)
    a = int(addr, 16)
    if new in names:
        print(f"{new} already present")
        continue
    for i, ln in enumerate(lines):
        if f"addr:{a:#010x}" in ln and "kind:function" in ln:
            mode = re.search(r'kind:function\((thumb|arm)', ln).group(1)
            lines.insert(i + 1, f"{new} kind:label({mode}) addr:{a:#010x}\n")
            names.add(new)
            print(f"added {new} as an alias of {ln.split(' ', 1)[0]}")
            break
    else:
        sys.exit(f"no function symbol at {addr}")
open(path, 'w').write(''.join(lines))

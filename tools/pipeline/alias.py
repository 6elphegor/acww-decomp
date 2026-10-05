#!/usr/bin/env python3
"""Give an existing symbol a second name at the same address.

usage: alias.py <symbols.txt> <existing name> <new name>

mwcc emits a complete-object (C1) and a base-object (C2) constructor; the game
keeps one body for both, so one address may be called by either name from
different linked units. symbols.txt holds one function symbol per address, and
mwld rejects two full-size symbols at the same address ("the sum of all symbol
sizes exceed section size"), so the alias is added as a zero-size label of the
same mode (thumb/arm), right after the existing symbol.

Use the symbols.txt of the module that holds the address (config/usa/arm9/
symbols.txt for main, .../autoload_2/, .../itcm/, .../overlays/ovNNN/ for an
overlay). Both names then resolve in every module: while the address is
delinked, dsd's object defines both; once its unit is compiled, the build step
tools/aliases.py adds the name the object lacks (or folds an identical second
copy) in main, autoload_2, itcm and the overlays alike. See
tools/pipeline/linking.md, "Second names of functions".
"""
import re
import sys

path, old, new = sys.argv[1:4]
lines = open(path).read().splitlines(keepends=True)
if any(l.split(' ', 1)[0] == new for l in lines):
    sys.exit(f"{new} already present")
out = []
done = False
for ln in lines:
    out.append(ln)
    if not done and ln.split(' ', 1)[0] == old:
        mode = re.search(r'kind:function\((thumb|arm)', ln)
        addr = re.search(r'addr:0x[0-9a-fA-F]+', ln)
        if not mode or not addr:
            sys.exit(f"{old} is not a function symbol")
        out.append(f"{new} kind:label({mode.group(1)}) {addr.group(0)}\n")
        done = True
if not done:
    sys.exit(f"{old} not found")
open(path, 'w').write(''.join(out))
print(f"added {new} as an alias of {old}")

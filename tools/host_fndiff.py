#!/usr/bin/env python3
"""fndiff.py A.dis B.dis [-v]: functions whose disassembly differs (sections from -ffunction-sections)."""
import re, sys, difflib
def funcs(p):
    d, cur = {}, None
    for l in open(p):
        m = re.match(r'^[0-9a-f]+ <(.*)>:$', l)
        if m:
            cur = m.group(1); d[cur] = []
            continue
        if cur and l.strip() and not l.startswith('Disassembly of section'):
            l = re.sub(r'\b[0-9a-f]+ <([^>+]*)\+0x[0-9a-f]+>', r'<\1+X>', l)
            l = re.sub(r'^\s*[0-9a-f]+: (R_)', r'\1', l.strip())
            d[cur].append(l.rstrip())
    return d
a, b = funcs(sys.argv[1]), funcs(sys.argv[2])
for k in sorted(set(a) | set(b)):
    if a.get(k) != b.get(k):
        print('==', k, 'only A' if k not in b else 'only B' if k not in a else '')
        if '-v' in sys.argv and k in a and k in b:
            for l in difflib.unified_diff(a[k], b[k], lineterm='', n=2):
                print('   ', l)

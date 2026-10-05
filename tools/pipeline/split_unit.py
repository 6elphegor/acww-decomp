#!/usr/bin/env python3
"""Split a linked library/main unit into several units at function addresses.

    python3 tools/pipeline/split_unit.py <module> <src> <cut address> [<cut address> ...]

Writes src/<module>/unk_<lowest function address>.<ext> for every part (the first part keeps the source's name):
everything before the first function that has a symbols.txt address (includes, types, declarations, inline helpers)
is copied into every part, and each function definition goes to the part of its address, keeping the source's
order (mwcc emits a file's functions last to first, so the sources are in descending address order). Text after the
last function (data definitions) goes to the last part; move it by hand if it belongs elsewhere. The new
delinks.txt entries (one `.text` range per part, and the data ranges) are written by hand. Used when a unit turns
out to be several original files: each file's data and bss are sorted by size on their own (linking.md, "Data of
library units"). Run from the repository root; check every part with `linkprep.py check`.
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from linkprep import top_level_chunks, is_function  # noqa: E402


def main():
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    mod, src = sys.argv[1], sys.argv[2]
    cuts = sorted(int(x, 16) for x in sys.argv[3:])
    cfg = 'config/usa/arm9/' + ('' if mod == 'main' else mod + '/')
    addr = {}
    for line in open(cfg + 'symbols.txt'):
        p = line.split()
        a = [x for x in p if x.startswith('addr:')]
        if a and 'kind:function' in line:
            addr[p[0]] = int(a[0][5:], 16)
    text = open(src).read()
    funcs = []
    for a, b in top_level_chunks(text):
        c = text[a:b]
        if is_function(c):
            head = c.split('{')[0]
            m = re.search(r'(\w+)\s*\([^()]*(\([^()]*\)[^()]*)*\)\s*(const\s*)?$', head.strip())
            funcs.append((a, b, m.group(1) if m else None))
    first = min(a for a, b, n in funcs if n in addr)
    pre = text[:first]

    def part(ad):
        return sum(1 for c in cuts if ad >= c)
    parts = {}
    prev = first
    for a, b, n in funcs:
        if a < first:
            continue
        if n not in addr:
            sys.exit('no symbols.txt address for %r' % n)
        parts.setdefault(part(addr[n]), []).append(text[prev:b])
        prev = b
    tail = text[prev:]
    ext = os.path.splitext(src)[1]
    keys = sorted(parts)
    for i, k in enumerate(keys):
        lo = min(addr[n] for a, b, n in funcs if n in addr and part(addr[n]) == k)
        out = pre + ''.join(parts[k]).lstrip('\n')
        if i == len(keys) - 1:
            out = out.rstrip('\n') + '\n' + tail
        fn = os.path.join(os.path.dirname(src), 'unk_%08x%s' % (lo, ext))
        open(fn, 'w').write(out.rstrip('\n') + '\n')
        print(fn, hex(lo))


if __name__ == '__main__':
    main()

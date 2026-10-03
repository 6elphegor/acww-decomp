#!/usr/bin/env python3
"""
link_candidates.py : list overlays that can be linked whole: their units cover the entire .text and none of their
functions is a recorded near-miss (tools/pipeline/nearmiss.txt). Prints status per overlay. Run from the repo root.
An overlay without .text is `linked` only when complete units cover all of its sections, `data-only` before that.
"""
import re
from pathlib import Path

near = set(re.findall(r"func_(ov\d+)_", Path("tools/pipeline/nearmiss.txt").read_text()))
rows = []
for d in sorted(Path("config/usa/arm9/overlays").iterdir()):
    ov = d.name
    text = (d / "delinks.txt").read_text()
    head, _, units = text.partition("\n\n")
    m = re.search(r"\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", head)
    if not m:
        # no code of its own (only .init/.ctor/.data/.bss, e.g. ov005-ov044): linked once complete units cover every
        # byte of its sections; until then it needs a data unit (linking.md, "Overlays without .text")
        need = sum(int(b, 16) - int(a, 16) for a, b in re.findall(r"start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", head))
        done = sum(int(b, 16) - int(a, 16) for blk in re.split(r"\n\s*\n", units.strip())
                   if any(l.strip() == "complete" for l in blk.splitlines()[1:])
                   for a, b in re.findall(r"start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", blk))
        if need:
            rows.append((ov, "linked" if done >= need else "data-only", units.count(".cpp:"), done, need,
                         " ".join(re.findall(r"^\s+(\.\w+)\s+start", head, re.M))))
        continue
    t0, t1 = int(m.group(1), 16), int(m.group(2), 16)
    ranges = sorted((int(a, 16), int(b, 16)) for a, b in re.findall(r"\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", units))
    covered = sum(b - a for a, b in ranges)
    complete = "complete" in units
    nunits = units.count(".cpp:")
    other = sorted(set(re.findall(r"^\s+(\.\w+)\s+start", units, re.M)) - {".text"})
    status = ("linked" if complete else
              "near-miss" if ov in near else
              "partial" if covered < t1 - t0 else
              "ready")
    rows.append((ov, status, nunits, covered, t1 - t0, " ".join(s for s in re.findall(r"^\s+(\.\w+)\s+start", head, re.M))))
for ov, st, n, c, t, secs in rows:
    if n or st == "data-only":
        what = "data" if st == "data-only" or ".text" not in secs.split() else "text"
        print(f"{ov} {st:9} units={n:2} {what}={c:#x}/{t:#x} sections: {secs}")
print({s: sum(1 for r in rows if r[1] == s and (r[2] or s == "data-only"))
       for s in ("ready", "near-miss", "partial", "linked", "data-only")})

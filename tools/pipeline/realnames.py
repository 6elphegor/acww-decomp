#!/usr/bin/env python3
"""realnames.py [-n] <unit.cpp> <unit.o> : call other units' functions by their symbols.txt names.

The matching units declared most callees as plain `extern "C"` functions named after their address
(`func_0208f154`, `func_ov113_02291f60`), while symbols.txt has since been given the real, usually mangled name
(`_ZN12Unk_0208f23813func_0208f154Ev`). A linked unit must use the symbols.txt name. For every undefined symbol of
the object that is `func_<8 hex digits>` or `func_ovNNN_<8 hex digits>` and is not in symbols.txt, this tool looks
up the address (main, autoload_2, itcm, or the named overlay) and, if there is a function symbol there, replaces
the identifier in the source by that name (whole words only). The declaration stays an `extern "C"` function whose
name is the mangled symbol and whose first parameter is the object, which compiles to the same call (linking.md,
section 1). Names it cannot resolve are listed. -n only reports. Run from the repository root; recompile after.
"""
import re
import sys
from pathlib import Path

sys.dont_write_bytecode = True
sys.path.insert(0, str(Path(__file__).parent))
import linkprep  # noqa: E402

CFG = Path("config/usa/arm9")


def functions_at(path):
    out = {}
    for line in path.read_text().splitlines():
        m = re.match(r"(\S+) kind:function\(\S+ addr:(0x[0-9a-f]+)", line)
        if m:
            out.setdefault(int(m.group(2), 16), m.group(1))
    return out


def main():
    a = sys.argv[1:]
    dry = "-n" in a
    a = [x for x in a if x != "-n"]
    if len(a) != 2:
        sys.exit(__doc__)
    src, obj = Path(a[0]), a[1]
    linkprep.load_renames(obj)
    syms = linkprep.load_symbols()
    o = linkprep.Obj(obj)
    own = {y[0] for y in o.syms if y[5] != 0}
    undefined = sorted({y[0] for y in o.syms if y[5] == 0 and y[0] and y[0] not in own and y[0] not in syms
                        and not re.fullmatch(linkprep.LCF_SYMBOL, y[0])})
    tables = {}
    text = src.read_text()
    left = []
    done = 0
    for name in undefined:
        m = re.fullmatch(r"func_(?:(ov\d{3})_)?([0-9a-f]{8})", name)
        if not m:
            left.append(name)
            continue
        addr = int(m.group(2), 16)
        if m.group(1):
            paths = [CFG / "overlays" / m.group(1) / "symbols.txt"]
        else:
            paths = [CFG / "symbols.txt", CFG / "autoload_2" / "symbols.txt", CFG / "itcm" / "symbols.txt"]
        new = None
        for p in paths:
            if p.exists():
                tables.setdefault(p, functions_at(p))
                new = new or tables[p].get(addr)
        if not new or not re.fullmatch(r"[A-Za-z_]\w*", new):
            left.append(name)
            continue
        n = len(re.findall(rf"\b{name}\b", text))
        text = re.sub(rf"\b{name}\b", new, text)
        print(f"{name} -> {new} ({n} places)")
        done += 1
    if done and not dry:
        src.write_text(text)
    for name in left:
        print(f"unresolved: {name}")
    print(f"{done} names replaced, {len(left)} left")


if __name__ == "__main__":
    main()

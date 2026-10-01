#!/usr/bin/env python3
"""vtable_rename.py [-n] <module> <address> <_ZTV name | class name> : name a vtable at its real start.
vtable_rename.py [-n] --interior <module> <label address> <object start> : drop a label inside an object.

dsd labelled every vtable 8 bytes into the object (`data_020d6df4` is the first virtual function slot; the two
zero words before it are the vtable's header), and code refers to that label. A compiled unit emits the whole
object as `_ZTV<class>`, so when the unit is linked
  * the symbol must be `_ZTV<class>` at the object's start (label address - 8), and
  * every relocation of every module that targets the old label must become `to:<start> add:0x8` (an existing
    `add:` is increased by 8), because a leftover undefined `data_` label is linked as 0 without any error.

<module> is `main`, `autoload_2`, `ovNNN`, ...; <address> is either the label's address or the vtable's start
(the tool looks at which of the two has a symbol). The label's line in symbols.txt is replaced by the new symbol
at the start address; relocs.txt of all modules are rewritten. -n only prints what would change. Already-renamed
vtables are left alone. Run from the repository root.

install_tu.py calls this for every `_ZTV` line of a unit's renames.txt.

--interior: many `data_` labels of main are not objects but addresses inside one (mwcc reaches a member at a large
offset through a literal `object + 0x200` and a small displacement, and dsd made a symbol of the literal). When
the object's unit is linked, relocations of other code to such a label must become `to:<object start>
add:<offset>` and the label goes away (renames.txt line: `<module> <label address> interior:<object start>`).
"""
import re
import sys
from pathlib import Path

CFG = Path("config/usa/arm9")
HEADER = 8


def module_dir(mod):
    if mod == "main":
        return CFG
    return CFG / "overlays" / mod if mod.startswith("ov") else CFG / mod


def mangled(name):
    return name if name.startswith("_ZTV") else f"_ZTV{len(name)}{name}"


def relocs_module_pattern(mod):
    '''regex for the module field of a relocation that can target <mod>'''
    if mod == "main":
        return r"module:main\b"
    if mod.startswith("ov"):
        n = int(mod[2:])
        return rf"module:overlays?\((?:\d+,)*{n}(?:,\d+)*\)"
    if mod.startswith("autoload_"):
        return rf"module:autoload\({mod.split('_')[1]}\)"
    return rf"module:{mod}\b"


def rename(mod, addr, name, dry=False, quiet=False):
    '''returns (start address, number of relocations rewritten); raises ValueError when nothing fits'''
    name = mangled(name)
    sp = module_dir(mod) / "symbols.txt"
    lines = sp.read_text().splitlines()
    at = {}
    for i, l in enumerate(lines):
        m = re.search(r" addr:(0x[0-9a-f]+)", l)
        if m and "kind:data" in l:
            at.setdefault(int(m.group(1), 16), i)
    for l in lines:
        if l.split(" ", 1)[0] == name:
            have = int(re.search(r"addr:(0x[0-9a-f]+)", l).group(1), 16)
            if have in (addr, addr - HEADER):
                return have, 0  # already done
            raise ValueError(f"{name} already exists at {have:#010x}")
    if addr in at and lines[at[addr]].startswith("data_") and addr - HEADER not in at:
        label = addr
    elif addr + HEADER in at and addr not in at:
        label = addr + HEADER
    elif addr in at and addr + HEADER in at:
        raise ValueError(f"{mod} {addr:#010x}: both the start and start+8 have a symbol; rename by hand")
    else:
        raise ValueError(f"{mod}: no data symbol at {addr:#010x} or {addr + HEADER:#010x}")
    start = label - HEADER
    old = lines[at[label]]
    rest = old.split(" ", 1)[1].replace(f"addr:{label:#010x}", f"addr:{start:#010x}")
    lines[at[label]] = f"{name} {rest}"
    if not quiet:
        print(f"{sp}: {old.split(' ', 1)[0]} at {label:#010x} -> {name} at {start:#010x}")
    if not dry:
        sp.write_text("\n".join(lines) + "\n")
    modpat = relocs_module_pattern(mod)
    pat = re.compile(rf"^(from:0x[0-9a-f]+ kind:\S+ to:){label:#010x}(?: add:(-?0x[0-9a-f]+))?( {modpat}.*)$")
    total = 0
    for rp in sorted(CFG.rglob("relocs.txt")):
        out = []
        n = 0
        for l in rp.read_text().splitlines():
            m = pat.match(l)
            if m:
                add = HEADER + (int(m.group(2), 16) if m.group(2) else 0)
                l = f"{m.group(1)}{start:#010x} add:{add:#x}{m.group(3)}"
                n += 1
            out.append(l)
        if n:
            total += n
            if not quiet:
                print(f"{rp}: {n} relocations now to:{start:#010x} add:0x8")
            if not dry:
                rp.write_text("\n".join(out) + "\n")
    return start, total


def interior(mod, label, start, dry=False, quiet=False):
    '''returns the number of relocations rewritten; the label's symbols.txt line is removed'''
    if not start < label:
        raise ValueError(f"{label:#010x} is not after the object start {start:#010x}")
    sp = module_dir(mod) / "symbols.txt"
    lines = sp.read_text().splitlines()
    if not any(re.search(rf" addr:{start:#010x}\b", l) for l in lines):
        raise ValueError(f"{mod}: no symbol at the object start {start:#010x}")
    keep = [l for l in lines if not (re.search(rf" addr:{label:#010x}\b", l) and ("kind:data" in l or "kind:bss" in l))]
    if len(keep) != len(lines):
        if not quiet:
            print(f"{sp}: removed the label at {label:#010x} (inside the object at {start:#010x})")
        if not dry:
            sp.write_text("\n".join(keep) + "\n")
    modpat = relocs_module_pattern(mod)
    pat = re.compile(rf"^(from:0x[0-9a-f]+ kind:\S+ to:){label:#010x}(?: add:(-?0x[0-9a-f]+))?( {modpat}.*)$")
    total = 0
    for rp in sorted(CFG.rglob("relocs.txt")):
        out = []
        n = 0
        for l in rp.read_text().splitlines():
            m = pat.match(l)
            if m:
                add = label - start + (int(m.group(2), 16) if m.group(2) else 0)
                l = f"{m.group(1)}{start:#010x} add:{add:#x}{m.group(3)}"
                n += 1
            out.append(l)
        if n:
            total += n
            if not quiet:
                print(f"{rp}: {n} relocations now to:{start:#010x} add:{label - start:#x}")
            if not dry:
                rp.write_text("\n".join(out) + "\n")
    return total


if __name__ == "__main__":
    a = sys.argv[1:]
    dry = "-n" in a
    a = [x for x in a if x != "-n"]
    if a and a[0] == "--interior" and len(a) == 4:
        try:
            interior(a[1], int(a[2], 16), int(a[3], 16), dry)
        except ValueError as e:
            sys.exit(f"vtable_rename.py: {e}")
        sys.exit(0)
    if len(a) != 3:
        sys.exit(__doc__)
    try:
        rename(a[0], int(a[1], 16), a[2], dry)
    except ValueError as e:
        sys.exit(f"vtable_rename.py: {e}")

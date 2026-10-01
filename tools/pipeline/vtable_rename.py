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
The label's name is not lost: it is recorded in the module's lcf_symbols.txt as `<label> addr:<address>
base:<object>`, and the build defines it in the linker script (tools/lcf_symbols.py) for the compiled sources that
declare the label `extern`.

vtable_rename.py [-n] --section <module> <address> [<.section>] : keep a symbol as a linker script name.
For a symbol that code outside the unit refers to and that the compiled unit cannot define under any name, because
the compiler's symbol for that place is local: the first word of main's .ctor table, `.p__sinit_<file>` in the object,
which the runtime in autoload_2 points to. The symbol stays in symbols.txt (dsd needs it for the relocation and as
the range boundary), gets an identifier name if it has none (`.p__sinit_020c2cd0` -> `p__sinit_020c2cd0`), and is
recorded in lcf_symbols.txt relative to the start of its section (`base:ARM9_CTOR_START`). renames.txt line:
`<module> <address> section:<.section>`.
"""
import re
import sys
from pathlib import Path

CFG = Path("config/usa/arm9")
HEADER = 8
IDENTIFIER = r"[A-Za-z_][A-Za-z0-9_]*"
LCF_SYMBOLS = "lcf_symbols.txt"
LCF_SYMBOLS_HEAD = """\
# Names that the linker script defines, see tools/lcf_symbols.py and tools/pipeline/linking.md ("Names the linker
# script defines"). <name> addr:<address> base:<object of this module's symbols.txt, or <MODULE>_<SECTION>_START>
"""


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


def section_prefix(mod):
    '''the module's name in the section symbols of dsd's linker script (ARM9_CTOR_START, OV004_DATA_START)'''
    return "ARM9" if mod == "main" else mod.upper()


def record_lcf_symbol(mod, name, addr, base, dry=False, quiet=False):
    '''adds `<name> addr:<addr> base:<base>` to the module's lcf_symbols.txt (see tools/lcf_symbols.py);
    returns False when the line is already there'''
    if not re.fullmatch(IDENTIFIER, name) or not re.fullmatch(IDENTIFIER, base):
        raise ValueError(f"{name} / {base}: a linker script name must be an identifier")
    path = module_dir(mod) / LCF_SYMBOLS
    lines = path.read_text().splitlines() if path.exists() else LCF_SYMBOLS_HEAD.splitlines()
    entry = f"{name} addr:{addr:#010x} base:{base}"
    for l in lines:
        f = l.split("#", 1)[0].split()
        if f and f[0] == name:
            if f == entry.split():
                return False
            raise ValueError(f"{path} already has `{l.strip()}`, which is not `{entry}`")
    head = [l for l in lines if not l.split("#", 1)[0].strip()]
    body = [l for l in lines if l.split("#", 1)[0].strip()] + [entry]
    body.sort(key=lambda l: int(re.search(r"addr:(0x[0-9a-fA-F]+)", l).group(1), 16))
    if not quiet:
        print(f"{path}: {entry}")
    if not dry:
        path.write_text("\n".join(head + body) + "\n")
    return True


def interior(mod, label, start, dry=False, quiet=False):
    '''returns the number of relocations rewritten; the label's symbols.txt line is removed and the label is
    recorded in lcf_symbols.txt as object + offset'''
    if not start < label:
        raise ValueError(f"{label:#010x} is not after the object start {start:#010x}")
    sp = module_dir(mod) / "symbols.txt"
    lines = sp.read_text().splitlines()
    if not any(re.search(rf" addr:{start:#010x}\b", l) for l in lines):
        raise ValueError(f"{mod}: no symbol at the object start {start:#010x}")

    def is_label(l):
        return re.search(rf" addr:{label:#010x}\b", l) and ("kind:data" in l or "kind:bss" in l)
    keep = [l for l in lines if not is_label(l)]
    if len(keep) != len(lines):
        if not quiet:
            print(f"{sp}: removed the label at {label:#010x} (inside the object at {start:#010x})")
        # the name stays usable for compiled code: the linker script defines it as object + offset
        base = next((l.split(" ", 1)[0] for l in lines if re.search(rf" addr:{start:#010x}\b", l)
                     and ("kind:data" in l or "kind:bss" in l)), None)
        for name in [l.split(" ", 1)[0] for l in lines if is_label(l)]:
            if base is None or not re.fullmatch(IDENTIFIER, name) or not re.fullmatch(IDENTIFIER, base):
                print(f"NOTE: {name} ({label:#010x}) is not recorded in {LCF_SYMBOLS}: "
                      + ("no data symbol at the object start" if base is None else "not an identifier"))
                continue
            record_lcf_symbol(mod, name, label, base, dry, quiet)
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


def section_label(mod, addr, section=None, dry=False, quiet=False):
    '''records the symbol at <addr> as a linker script name relative to the start of its section; returns its
    (possibly new) name. The symbol stays in symbols.txt.'''
    secs = {}
    for l in (module_dir(mod) / "delinks.txt").read_text().partition("\n\n")[0].splitlines():
        m = re.match(r"\s*(\.\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", l)
        if m:
            secs[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    inside = [k for k, (a, b) in secs.items() if a <= addr < b]
    if not inside:
        raise ValueError(f"{mod}: {addr:#010x} is not inside a section of the module")
    if section is not None and section != inside[0]:
        raise ValueError(f"{mod}: {addr:#010x} is in {inside[0]}, not in {section}")
    section = inside[0]
    sp = module_dir(mod) / "symbols.txt"
    lines = sp.read_text().splitlines()
    at = [i for i, l in enumerate(lines) if re.search(rf" addr:{addr:#010x}\b", l)
          and ("kind:data" in l or "kind:bss" in l)]
    if not at:
        raise ValueError(f"{mod}: no data symbol at {addr:#010x}")
    name = lines[at[0]].split(" ", 1)[0]
    if not re.fullmatch(IDENTIFIER, name):
        new = re.sub(r"[^A-Za-z0-9_]", "_", name.lstrip("."))
        if not re.fullmatch(IDENTIFIER, new):
            new = f"data_{addr:08x}"
        if any(l.split(" ", 1)[0] == new for l in lines):
            raise ValueError(f"{mod}: cannot rename {name} to {new}: the name exists")
        if not quiet:
            print(f"{sp}: {name} -> {new} (a linker script name must be an identifier)")
        lines[at[0]] = new + " " + lines[at[0]].split(" ", 1)[1]
        name = new
        if not dry:
            sp.write_text("\n".join(lines) + "\n")
    record_lcf_symbol(mod, name, addr, f"{section_prefix(mod)}_{section[1:].upper()}_START", dry, quiet)
    return name


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
    if a and a[0] == "--section" and len(a) in (3, 4):
        try:
            section_label(a[1], int(a[2], 16), a[3] if len(a) == 4 else None, dry)
        except ValueError as e:
            sys.exit(f"vtable_rename.py: {e}")
        sys.exit(0)
    if len(a) != 3:
        sys.exit(__doc__)
    try:
        rename(a[0], int(a[1], 16), a[2], dry)
    except ValueError as e:
        sys.exit(f"vtable_rename.py: {e}")

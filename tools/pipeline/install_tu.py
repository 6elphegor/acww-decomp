#!/usr/bin/env python3
"""Install ONE original translation unit of a module as a complete unit, leaving the rest of the module as it is.

usage: install_tu.py [--replace] <ovNNN | main | autoload_2 | itcm> <spec>

<spec> is one block in install_units.py format: `unit <source.cpp>` then `<.section> <start> <end>` lines for
the sections the TU owns. The TU is written to src/<ovNNN>/unk_<ovNNN>_<text start>.cpp (overlays) or
src/main/unk_<text start>.cpp (main) and listed `complete`.
Existing units of the module are adjusted so nothing overlaps the TU's .text range:
  - a non-complete unit whose .text lies entirely inside the TU's range is removed (git rm + delinks entry);
  - a non-complete unit that straddles the range keeps its file, and its .text range is trimmed to the part
    outside the TU (a unit covering both sides keeps the lower part; the upper part becomes a gap, i.e. original).
    If the kept file has the name the TU needs (it started where the TU starts), it is renamed (git mv) to
    unk_<its new start>.cpp;
  - complete units are never touched (overlap with one is an error), unless --replace is given: then a complete
    unit that lies entirely inside the TU's .text range is removed with all its sections (this is how the code-only
    pieces of main that were linked early are replaced by their real translation unit).
aliases.txt next to the source (if present) is applied first: `module existingname secondname` per line adds the
second name as a label of an existing function (tools/pipeline/alias.py; e.g. a runtime helper that linked units
already call by another name).
renames.txt next to the source (if present) is applied: `module hexaddr newname` per line. A `_ZTV...` name whose
address has no symbol but address+8 has a `data_` label is a vtable: the label is replaced by the name at the
vtable's start and every relocation to the label becomes `to:<start> add:0x8` (tools/pipeline/vtable_rename.py).
A line `module labeladdr interior:objectaddr` says that the label is an address inside the object at objectaddr:
the label is removed from symbols.txt, relocations to it become `to:<object> add:<offset>`, and the label is recorded
in the module's lcf_symbols.txt as `<label> addr:<address> base:<object>` so that the linker script defines it for
compiled sources that still use it as an extern (tools/lcf_symbols.py).
A line `module addr section:.ctor` says that the symbol at addr is used from outside the unit but cannot be defined
by the object (the compiler's symbol there is local, e.g. the first word of the .ctor table): the symbol stays in
symbols.txt, gets an identifier name if needed, and is recorded in lcf_symbols.txt relative to the section start.

main only: a `.bss` line gives the unit's range in autoload_3 (main has no .bss of its own). It is written to
config/usa/arm9/autoload_3/delinks.txt as the placeholder unit src/main/unk_<text start>.bss.cpp (see
tools/bss_units.py). Every range of the spec must start and end on a symbol of the module's symbols.txt (dsd
requires it). A .text/.init boundary without a symbol is an error (nothing is changed); for a data or bss boundary
the symbol `data_<address>` is added to symbols.txt and reported (a vtable start should be named in renames.txt
instead: `main <start> _ZTV<class>`, also when the vtable belongs to the neighbouring unit).

autoload_2 and itcm (the library modules: NitroSDK and runtime, C or C++ sources compiled as ARM code with a
`// mwcc-flags: -nothumb` line) are installed like main: the unit becomes src/<module>/unk_<text start>.c (the
extension of the spec's source is kept), listed `complete` in config/usa/arm9/<module>/delinks.txt, and its `.bss`
range, which lies in autoload_3 behind main's, becomes the placeholder unit src/<module>/unk_<text start>.bss.c
there. Boundary symbols, renames.txt and aliases.txt work as for main (module names `autoload_2`, `itcm`).
A library unit's `.init`, `.ctor`, `.exception` and `.exceptix` ranges are in MAIN (static initialisers of the
library's C++ files and the C++ runtime's exception tables were linked there): they are checked against main's
section table and symbols, and written to config/usa/arm9/delinks.txt as the placeholder unit
src/<module>/unk_<text start>.main.<ext> (tools/bss_units.py renames its linker script selectors).
A .text/.init range may end where the original has data between two functions (an assembly routine's constant pool
placed before it) when the range's last function ends exactly there: the boundary gets `data_<address>` like a data
boundary, and the data stays delinked.

Run from the repo root; then `python3 tools/configure.py usa`, build and check the ROM.
"""
import re
import subprocess
import sys
from pathlib import Path

sys.dont_write_bytecode = True
sys.path.insert(0, str(Path(__file__).parent))
import vtable_rename  # noqa: E402

args = [a for a in sys.argv[1:] if not a.startswith("--")]
replace = "--replace" in sys.argv[1:]
if len(args) != 2:
    sys.exit(__doc__)
ov, spec = args[0], Path(args[1])
UNIT_MODULES = ("main", "autoload_2", "itcm")
# modules linked one translation unit at a time, with their bss in autoload_3 (called `is_main` below for all three)
is_main = ov in UNIT_MODULES
src = None
secs = []
for line in spec.read_text().splitlines():
    p = line.split()
    if not p or p[0].startswith('#'):
        continue
    if p[0] == 'unit':
        src = Path(line.split(None, 1)[1].strip())
        # a relative source is relative to the spec's directory (never to the current directory: a stray file of
        # the same name there must not be picked up)
        if not src.is_absolute():
            src = spec.parent / src
    else:
        secs.append((p[0], int(p[1], 16), int(p[2], 16)))
if src is None or not src.is_file():
    sys.exit(f"missing unit source: {src}")
# a data-only unit has no .text: nothing can overlap it, and it is named and ordered by its first section
t0, t1 = next(((a, b) for s, a, b in secs if s == ".text"), (0, 0))
first = t0 if t1 else secs[0][1]

ARM9 = Path("config/usa/arm9")
cfg = ARM9 if ov == "main" else ARM9 / ov if is_main else ARM9 / "overlays" / ov
if not (cfg / "delinks.txt").is_file():
    sys.exit(f"{ov}: no module {cfg}")
BSS_CFG = ARM9 / "autoload_3"  # where the bss of main, autoload_2 and itcm lives
if ov == "main":
    name = f"src/main/unk_{first:08x}.cpp"
elif is_main:
    if src.suffix not in (".c", ".cpp"):
        sys.exit(f"{src}: a unit source is a .c or .cpp file")
    name = f"src/{ov}/unk_{first:08x}{src.suffix}"
else:
    name = f"src/{ov}/unk_{ov}_{first:08x}.cpp"


def bss_placeholder(unit):
    '''src/main/unk_x.cpp -> src/main/unk_x.bss.cpp (tools/bss_units.py)'''
    path = Path(unit)
    return str(path.with_name(path.stem + ".bss" + path.suffix))


bss_name = bss_placeholder(name)
# library modules: the sections their files have in the MAIN module (static initialisers: `__sinit` in main's .init,
# its word in main's .ctor; the C++ runtime's exception tables). A spec's lines for these become the placeholder unit
# src/<module>/unk_<text start>.main.<ext> in config/usa/arm9/delinks.txt (tools/bss_units.py).
MAIN_KINDS = (".init", ".ctor", ".exception", ".exceptix")
in_main = is_main and ov != "main"
main_name = str(Path(name).with_name(Path(name).stem + ".main" + Path(name).suffix))


def split_delinks(path):
    head, _, rest = path.read_text().partition("\n\n")
    return head, [b for b in re.split(r"\n\s*\n", rest.strip()) if b.strip()]


def block_name(b):
    return b.splitlines()[0].rstrip(":").strip()


def text_start(b):
    m = re.search(r"\.text\s+start:(0x[0-9a-f]+)", b) or re.search(r"start:(0x[0-9a-f]+)", b)
    return int(m.group(1), 16) if m else 0


def write_delinks(path, head, blocks):
    blocks = sorted(blocks, key=text_start)
    path.write_text(head.rstrip("\n") + "\n" + "".join("\n" + b.rstrip("\n") + "\n" for b in blocks))




def module_info(module_cfg):
    '''section table, symbol addresses and [start, end) of every function of one module'''
    sections = {}
    for l in (module_cfg / "delinks.txt").read_text().partition("\n\n")[0].splitlines():
        m = re.match(r"\s*(\.\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", l)
        if m:
            sections[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    text = (module_cfg / "symbols.txt").read_text()
    addrs = {int(m, 16) for m in re.findall(r" addr:(0x[0-9a-f]+)", text)}
    spans = [(int(m.group(2), 16), int(m.group(2), 16) + int(m.group(1), 16))
             for m in re.finditer(r"kind:function\([^)]*size=(0x[0-9a-f]+)[^)]*\) addr:(0x[0-9a-f]+)", text)]
    return sections, addrs, spans


def data_after_code(spans, a, b, x):
    '''x, the end of the code range a..b, has no symbol: allowed when the range's last function ends exactly at x
    and no function covers x (a code range may end between two functions, where the original has data in .text:
    the constant pool an assembly routine keeps before itself). The bytes from x to the next function stay with the
    delinked neighbour and get a `data_<x>` symbol (dsd needs a symbol at every unit boundary).'''
    return (x == b and not any(fa < x < fe for fa, fe in spans)
            and any(fe == b for fa, fe in spans if a <= fa < b))


if is_main:
    # dsd: every range of a unit ends (and starts) on a symbol. Check before touching anything.
    module_secs, main_addrs, func_spans = module_info(cfg)
    if in_main:
        home_secs, home_addrs, home_spans = module_info(ARM9)
    bss_addrs = {int(m, 16) for m in re.findall(r" addr:(0x[0-9a-f]+)", (BSS_CFG / "symbols.txt").read_text())}
    bss_head = (BSS_CFG / "delinks.txt").read_text().partition("\n\n")[0]
    bm = re.search(r"\.bss\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", bss_head)
    bss_range = (int(bm.group(1), 16), int(bm.group(2), 16))
    pending_vtables = set()
    ren = src.parent / "renames.txt"
    if ren.exists():
        for line in ren.read_text().splitlines():
            p = line.split("#", 1)[0].split()
            if len(p) == 3 and p[0] == ov and p[2].startswith("_ZTV"):
                pending_vtables.add(int(p[1], 16))
    bad = []
    add_bounds = []
    for s, a, b in secs:
        spans = func_spans
        if s == ".bss":
            if not (bss_range[0] <= a < b <= bss_range[1]):
                bad.append(f".bss {a:#010x}-{b:#010x} is not inside autoload_3 "
                           f"({bss_range[0]:#010x}-{bss_range[1]:#010x})")
            addrs, lim, symfile = bss_addrs, bss_range, BSS_CFG / "symbols.txt"
        elif in_main and s in MAIN_KINDS:
            # the library unit's range in main: listed as the placeholder unit in main's delinks.txt
            if s not in home_secs or not (home_secs[s][0] <= a < b <= home_secs[s][1]):
                bad.append(f"{s} {a:#010x}-{b:#010x} is not inside main's {s} (a library unit's {s} is in main)")
                continue
            addrs, lim, symfile, spans = home_addrs, home_secs[s], ARM9 / "symbols.txt", home_spans
        else:
            if s not in module_secs or not (module_secs[s][0] <= a < b <= module_secs[s][1]):
                bad.append(f"{s} {a:#010x}-{b:#010x} is not inside {ov}'s {s}")
                continue
            addrs, lim, symfile = main_addrs | pending_vtables, module_secs[s], cfg / "symbols.txt"
        for x in (a, b):
            if x not in addrs and x not in lim:
                if s in (".text", ".init") and data_after_code(spans, a, b, x):
                    add_bounds.append((symfile, s, x))
                elif s in (".text", ".init"):
                    bad.append(f"{s}: no function symbol at the range boundary {x:#010x}"
                               + (" (it is inside a function)" if any(fa < x < fe for fa, fe in spans) else
                                  "" if x == b else " (a code range must start with a function)"))
                else:
                    add_bounds.append((symfile, s, x))
    if bad:
        sys.exit("install_tu.py: nothing installed:\n  " + "\n  ".join(bad))

head, blocks = split_delinks(cfg / "delinks.txt")
out_blocks = []
removed_units = []
git_ops = []
for b in blocks:
    lines = b.splitlines()
    uname = block_name(b)
    complete = any(l.strip() == "complete" for l in lines[1:])
    m = next((re.match(r"\s*\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", l) for l in lines[1:]
              if l.strip().startswith(".text")), None)
    if m is None:
        out_blocks.append(b)
        continue
    a, e = int(m.group(1), 16), int(m.group(2), 16)
    if e <= t0 or a >= t1:
        out_blocks.append(b)
        continue
    inside = a >= t0 and e <= t1
    if complete and not (replace and inside):
        sys.exit(f"{uname} is complete and overlaps the TU's text range"
                 + (" (use --replace to remove complete units that lie inside the TU)" if inside else ""))
    if inside:
        git_ops.append(["git", "rm", "-q", "-f", uname])
        removed_units.append(uname)
        print(f"removed {uname}" + (" (was complete)" if complete else ""))
        continue
    na, ne = (a, t0) if a < t0 else (t1, e)
    if uname == name:
        # the kept upper part needs a new file name: the TU takes this one
        new_uname = str(Path(uname).with_name(Path(name).name.replace(f"{first:08x}", f"{na:08x}")))
        if Path(new_uname).exists():
            sys.exit(f"cannot rename {uname} to {new_uname}: it exists")
        git_ops.append(["git", "mv", uname, new_uname])
        print(f"renamed {uname} -> {new_uname}")
        lines[0] = new_uname + ":"
        uname = new_uname
    new = [lines[0]] + [f"    .text       start:{na:#010x} end:{ne:#010x}" if l.strip().startswith(".text") else l
                        for l in lines[1:]]
    out_blocks.append("\n".join(new))
    print(f"trimmed {uname} to {na:#010x}..{ne:#010x}")
if any(block_name(b) == name for b in out_blocks):
    sys.exit(f"{name} is already a unit of {cfg / 'delinks.txt'}")
main_kinds = [(s, a, b) for s, a, b in secs if in_main and s in MAIN_KINDS]
if in_main:
    # the placeholders of removed units go; the TU's ranges in main must be delinked (no other unit of main has them)
    mhead, mblocks = split_delinks(ARM9 / "delinks.txt")
    gone = {str(Path(u).with_name(Path(u).stem + ".main" + Path(u).suffix)) for u in removed_units}
    main_kept = [b for b in mblocks if block_name(b) not in gone]
    for kb in main_kept:
        if block_name(kb) == main_name:
            sys.exit(f"{main_name} is already a unit of {ARM9 / 'delinks.txt'}")
        for s, a, b in main_kinds:
            for m in re.finditer(re.escape(s) + r"\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", kb):
                if int(m.group(1), 16) < b and a < int(m.group(2), 16):
                    sys.exit(f"the TU's {s} {a:#010x}-{b:#010x} overlaps {block_name(kb)} in {ARM9 / 'delinks.txt'}")
    if main_kinds:
        main_kept.append(f"{main_name}:\n    complete\n" + "".join(
            f"    {s:<11} start:{a:#010x} end:{b:#010x}\n" for s, a, b in main_kinds).rstrip("\n"))

for op in git_ops:
    subprocess.run(op, check=True)
Path(name).parent.mkdir(parents=True, exist_ok=True)
Path(name).write_text(src.read_text())
own = [(s, a, b) for s, a, b in secs if not (is_main and s == ".bss") and (s, a, b) not in main_kinds]
tu = name + ":\n    complete\n" + "".join(f"    {s:<11} start:{a:#010x} end:{b:#010x}\n" for s, a, b in own)
out_blocks.append(tu.rstrip("\n"))
out_blocks.sort(key=text_start)
(cfg / "delinks.txt").write_text(head.rstrip("\n") + "\n\n" + "\n\n".join(out_blocks) + "\n")

if is_main:
    bhead, bblocks = split_delinks(BSS_CFG / "delinks.txt")
    gone = {bss_placeholder(u) for u in removed_units}
    kept = [b for b in bblocks if block_name(b) not in gone]
    for a, b in [(a, b) for s, a, b in secs if s == ".bss"]:
        for kb in kept:
            m = re.search(r"\.bss\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", kb)
            if m and int(m.group(1), 16) < b and a < int(m.group(2), 16):
                sys.exit(f"the TU's .bss overlaps {block_name(kb)} in {BSS_CFG / 'delinks.txt'}")
        kept.append(f"{bss_name}:\n    complete\n    {'.bss':<11} start:{a:#010x} end:{b:#010x}")
        print(f"bss {a:#010x}..{b:#010x} listed as {bss_name} in {BSS_CFG / 'delinks.txt'}")
    if kept != bblocks:
        write_delinks(BSS_CFG / "delinks.txt", bhead, kept)
if in_main and main_kept != mblocks:
    write_delinks(ARM9 / "delinks.txt", mhead, main_kept)
if main_kinds:
    print(f"{', '.join(s for s, _, _ in main_kinds)} listed as {main_name} in {ARM9 / 'delinks.txt'}")

ali = src.parent / "aliases.txt"
if ali.exists():
    for line in ali.read_text().splitlines():
        p = line.split("#", 1)[0].split()
        if len(p) != 3:
            continue
        sp = vtable_rename.module_dir(p[0]) / "symbols.txt"
        if any(l.split(" ", 1)[0] == p[2] for l in sp.read_text().splitlines()):
            continue
        subprocess.run([sys.executable, str(Path(__file__).parent / "alias.py"), str(sp), p[1], p[2]], check=True)

ren = src.parent / "renames.txt"
if ren.exists():
    for line in ren.read_text().splitlines():
        p = line.split("#", 1)[0].split()
        if len(p) != 3:
            continue
        mod, addr, new = p
        if new.startswith("interior:"):
            try:
                n = vtable_rename.interior(mod, int(addr, 16), int(new.split(":", 1)[1], 16), quiet=True)
                print(f"interior label {mod} {int(addr, 16):#010x} removed, {n} relocations rewritten")
            except ValueError as e:
                print(f"WARNING: renames.txt: {line.strip()}: {e}")
            continue
        if new.startswith("section:"):
            try:
                label = vtable_rename.section_label(mod, int(addr, 16), new.split(":", 1)[1], quiet=True)
                print(f"linker script name {label} for {mod} {int(addr, 16):#010x} recorded in "
                      f"{vtable_rename.module_dir(mod) / vtable_rename.LCF_SYMBOLS}")
            except ValueError as e:
                sys.exit(f"install_tu.py: renames.txt: {line.strip()}: {e}")
            continue
        sp = vtable_rename.module_dir(mod) / "symbols.txt"
        lines = sp.read_text().splitlines()
        a = int(addr, 16)
        if any(l.split(" ", 1)[0] == new for l in lines):
            continue  # the name already exists (e.g. as an alias added with alias.py)
        done = False
        for i, l in enumerate(lines):
            if f"addr:{a:#010x}" in l and ("kind:function" in l or "kind:data" in l or "kind:label" in l
                                           or "kind:bss" in l):
                lines[i] = new + " " + l.split(" ", 1)[1]
                done = True
                break
        if done:
            sp.write_text("\n".join(lines) + "\n")
        elif new.startswith("_ZTV"):
            try:
                start, n = vtable_rename.rename(mod, a, new, quiet=True)
                print(f"vtable {new} at {start:#010x}: {n} relocations rewritten to add:0x8")
            except ValueError as e:
                print(f"WARNING: renames.txt: {line.strip()}: {e}")
        else:
            print(f"WARNING: renames.txt: no symbol at {mod} {a:#010x} for {new}")
if is_main:
    for sp, s, x in add_bounds:
        lines = sp.read_text().splitlines()
        if any(f"addr:{x:#010x}" in l for l in lines):
            continue  # a rename put a symbol there
        kind = "bss" if s == ".bss" else "data(any)"
        at = len(lines)
        for i, l in enumerate(lines):
            m = re.search(r" addr:(0x[0-9a-f]+)", l)
            if m and int(m.group(1), 16) > x and ("kind:data" in l or "kind:bss" in l
                                                  or s in (".text", ".init")):
                at = i
                break
        lines.insert(at, f"data_{x:08x} kind:{kind} addr:{x:#010x}")
        sp.write_text("\n".join(lines) + "\n")
        print(f"NOTE: added boundary symbol data_{x:08x} to {sp} ({s} range boundary without a symbol"
              + (": data after the unit's last function, left delinked)" if s in (".text", ".init") else ")"))
print(f"installed {name}")

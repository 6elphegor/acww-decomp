#!/usr/bin/env python3
"""Install ONE original translation unit of a module as a complete unit, leaving the rest of the module as it is.

usage: install_tu.py [--replace] <ovNNN | main> <spec>

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
the label is removed and relocations to it become `to:<object> add:<offset>`.

main only: a `.bss` line gives the unit's range in autoload_3 (main has no .bss of its own). It is written to
config/usa/arm9/autoload_3/delinks.txt as the placeholder unit src/main/unk_<text start>.bss.cpp (see
tools/bss_units.py). Every range of the spec must start and end on a symbol of the module's symbols.txt (dsd
requires it). A .text/.init boundary without a symbol is an error (nothing is changed); for a data or bss boundary
the symbol `data_<address>` is added to symbols.txt and reported (a vtable start should be named in renames.txt
instead: `main <start> _ZTV<class>`, also when the vtable belongs to the neighbouring unit).

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
is_main = ov == "main"
src = None
secs = []
for line in spec.read_text().splitlines():
    p = line.split()
    if not p or p[0].startswith('#'):
        continue
    if p[0] == 'unit':
        src = Path(line.split(None, 1)[1].strip())
        if not src.is_absolute() and not src.is_file():
            src = spec.parent / src
    else:
        secs.append((p[0], int(p[1], 16), int(p[2], 16)))
if src is None or not src.is_file():
    sys.exit(f"missing unit source: {src}")
# a data-only unit has no .text: nothing can overlap it, and it is named and ordered by its first section
t0, t1 = next(((a, b) for s, a, b in secs if s == ".text"), (0, 0))
first = t0 if t1 else secs[0][1]

ARM9 = Path("config/usa/arm9")
cfg = ARM9 if is_main else ARM9 / "overlays" / ov
BSS_CFG = ARM9 / "autoload_3"  # where main's bss lives
name = f"src/main/unk_{first:08x}.cpp" if is_main else f"src/{ov}/unk_{ov}_{first:08x}.cpp"
bss_name = str(Path(name).with_suffix(".bss.cpp"))


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


if is_main:
    # dsd: every range of a unit ends (and starts) on a symbol. Check before touching anything.
    module_secs = {}
    for l in (cfg / "delinks.txt").read_text().partition("\n\n")[0].splitlines():
        m = re.match(r"\s*(\.\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", l)
        if m:
            module_secs[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    main_addrs = {int(m, 16) for m in re.findall(r" addr:(0x[0-9a-f]+)", (cfg / "symbols.txt").read_text())}
    bss_addrs = {int(m, 16) for m in re.findall(r" addr:(0x[0-9a-f]+)", (BSS_CFG / "symbols.txt").read_text())}
    bss_head = (BSS_CFG / "delinks.txt").read_text().partition("\n\n")[0]
    bm = re.search(r"\.bss\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", bss_head)
    bss_range = (int(bm.group(1), 16), int(bm.group(2), 16))
    pending_vtables = set()
    ren = src.parent / "renames.txt"
    if ren.exists():
        for line in ren.read_text().splitlines():
            p = line.split("#", 1)[0].split()
            if len(p) == 3 and p[0] == "main" and p[2].startswith("_ZTV"):
                pending_vtables.add(int(p[1], 16))
    bad = []
    add_bounds = []
    for s, a, b in secs:
        if s == ".bss":
            if not (bss_range[0] <= a < b <= bss_range[1]):
                bad.append(f".bss {a:#010x}-{b:#010x} is not inside autoload_3 "
                           f"({bss_range[0]:#010x}-{bss_range[1]:#010x})")
            addrs, lim = bss_addrs, bss_range
        else:
            if s not in module_secs or not (module_secs[s][0] <= a < b <= module_secs[s][1]):
                bad.append(f"{s} {a:#010x}-{b:#010x} is not inside main's {s}")
                continue
            addrs, lim = main_addrs | pending_vtables, module_secs[s]
        for x in (a, b):
            if x not in addrs and x not in lim:
                if s in (".text", ".init"):
                    bad.append(f"{s}: no function symbol at the range boundary {x:#010x}")
                else:
                    add_bounds.append((s, x))
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
        git_ops.append(["git", "rm", "-q", uname])
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

for op in git_ops:
    subprocess.run(op, check=True)
Path(name).parent.mkdir(parents=True, exist_ok=True)
Path(name).write_text(src.read_text())
own = [(s, a, b) for s, a, b in secs if not (is_main and s == ".bss")]
tu = name + ":\n    complete\n" + "".join(f"    {s:<11} start:{a:#010x} end:{b:#010x}\n" for s, a, b in own)
out_blocks.append(tu.rstrip("\n"))
out_blocks.sort(key=text_start)
(cfg / "delinks.txt").write_text(head.rstrip("\n") + "\n\n" + "\n\n".join(out_blocks) + "\n")

if is_main:
    bhead, bblocks = split_delinks(BSS_CFG / "delinks.txt")
    gone = {str(Path(u).with_suffix(".bss.cpp")) for u in removed_units}
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
    for s, x in add_bounds:
        sp = (BSS_CFG if s == ".bss" else cfg) / "symbols.txt"
        lines = sp.read_text().splitlines()
        if any(f"addr:{x:#010x}" in l for l in lines):
            continue  # a rename put a symbol there
        kind = "bss" if s == ".bss" else "data(any)"
        at = len(lines)
        for i, l in enumerate(lines):
            m = re.search(r" addr:(0x[0-9a-f]+)", l)
            if m and int(m.group(1), 16) > x and ("kind:data" in l or "kind:bss" in l):
                at = i
                break
        lines.insert(at, f"data_{x:08x} kind:{kind} addr:{x:#010x}")
        sp.write_text("\n".join(lines) + "\n")
        print(f"NOTE: added boundary symbol data_{x:08x} to {sp} ({s} range boundary without a symbol)")
print(f"installed {name}")

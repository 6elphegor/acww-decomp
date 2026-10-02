#!/usr/bin/env python3
"""
The ARM9 main module's side of linkprep.py (`linkprep.py check|data|reverse|diff ... main ...` end up here).
See tools/pipeline/linking.md, "Linking the main module". Run from the repository root.

A main unit is described by its section ranges: a spec.txt in install_tu.py format (`.text 0x.. 0x..`, `.rodata`,
`.init`, `.ctor`, `.data`, and `.bss` = the range in autoload_3), or, once installed, by its name in
config/usa/arm9/delinks.txt (src/main/unk_XXXXXXXX.cpp).

  check <obj.o> main <spec.txt | unit>
      Simulates the link of the object at the unit's ranges and compares it with the original:
        ORDER    a function would not land on its symbols.txt address
        BYTES    a function's bytes differ (relocated words masked)
        EXTRA    a function the original does not have is kept by the linker (it shifts the unit)
        FOREIGN  the object defines a symbols.txt function that lives outside the unit's .text range
        MISSING  a symbols.txt function of the range is not defined; or a name other code refers to
                 (relocs.txt of any module, from outside the unit) is not defined by the object at that address
                 and is not a name the linker script defines (lcf_symbols.txt; `interior:`/`section:` lines of
                 renames.txt, which are checked too)
        ALIAS    a second symbols.txt name (label) of one of the unit's functions (information; aliases.py /
                 the build defines it unless the object does)
        NORANGE  the object emits a section kind the spec has no range for
        SIZE     a section's objects do not fill the unit's range exactly
        DATA     an object's bytes at its simulated address differ from the original
        PLACE    a named object would not land on its symbols.txt address
        TARGET   a relocation resolves to another address (or another module) than the original word
      plus the unresolved symbols (`undef`). Sections the linker dead-strips (unreferenced, no symbols.txt name)
      are left out of the simulation, exactly as in the build; they are listed as `unused`.
  data <src.cpp> <obj.o> main <spec.txt | unit> [--apply] [--seed N]
      linkprep's data-order search with the unit's ranges.
  reverse <src.cpp> main
      order the function definitions by descending main address.
  diff main
      compare build/usa/build/{arm9,itcm,dtcm,autoload_2,autoload_3}.bin with the original; differing ranges
      are listed with the symbol and the delinks.txt unit that own them.
  dump main <spec.txt | unit>
      the unit's .rodata/.data/.ctor words with relocation targets and symbols.txt labels, and its bss symbols.

The library modules autoload_2 and itcm (NitroSDK and runtime, C sources in ARM mode) are handled the same way:
give `autoload_2` or `itcm` where `main` stands above. Their units are listed in config/usa/arm9/<module>/delinks.txt
and their bss ranges, like main's, as placeholder units in autoload_3. linkprep.py calls set_module() first.
"""
import re
import struct
import sys
from pathlib import Path

CONFIG = Path("config/usa/arm9")
BSS_MODULE = "autoload_3"
# module -> (config directory, load address, original image, module field of relocs.txt, built image)
MODULES = {
    "main": (CONFIG, 0x02000000, Path("extract/usa/arm9/arm9.bin"), "main", "arm9.bin"),
    "autoload_2": (CONFIG / "autoload_2", 0x020e7500, Path("extract/usa/arm9/unk_autoload_2.bin"), "autoload(2)",
                   "autoload_2.bin"),
    "itcm": (CONFIG / "itcm", 0x01ff8000, Path("extract/usa/arm9/itcm.bin"), "itcm", "itcm.bin"),
}
MOD = "main"
MODCFG, BASE, ORIG, FIELD, BUILT = MODULES[MOD]


def set_module(name):
    '''select the module the unit belongs to: main (default), autoload_2 or itcm'''
    global MOD, MODCFG, BASE, ORIG, FIELD, BUILT
    if name not in MODULES:
        sys.exit(f"{name}: not one of {', '.join(MODULES)}")
    MOD = name
    MODCFG, BASE, ORIG, FIELD, BUILT = MODULES[name]


def bss_placeholder(unit):
    '''name of a unit's bss placeholder in autoload_3: src/main/unk_x.cpp -> src/main/unk_x.bss.cpp'''
    path = Path(unit)
    return str(path.with_name(path.stem + ".bss" + path.suffix))


KINDS = (".text", ".init", ".rodata", ".ctor", ".data", ".bss")
MAX_LINES = 40


def unit_ranges(arg):
    '''{section: (start, end)} of one main unit, from a spec.txt or from the delinks.txt files'''
    p = Path(arg)
    secs = {}
    if p.suffix == ".txt" and p.is_file():
        for line in p.read_text().splitlines():
            f = line.split("#", 1)[0].split()
            if len(f) >= 3 and f[0].startswith("."):
                secs[f[0]] = (int(f[1], 16), int(f[2], 16))
    else:
        for delinks, want in ((MODCFG / "delinks.txt", str(arg)),
                              (CONFIG / BSS_MODULE / "delinks.txt", bss_placeholder(arg))):
            cur = None
            for line in delinks.read_text().splitlines():
                if line and not line[0].isspace():
                    cur = line.rstrip().rstrip(":")
                m = re.match(r"\s+(\.\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
                if m and cur == want:
                    secs[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    if not secs:
        sys.exit(f"{arg}: neither a spec.txt with section lines nor a unit of {MODCFG / 'delinks.txt'}")
    return secs


def module_sections():
    out = {}
    for line in (MODCFG / "delinks.txt").read_text().split("\n\n")[0].splitlines():
        m = re.match(r"\s*(\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
        if m:
            out[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    return out


def main_relocs():
    '''from -> (target incl. add, module field) for the relocations of the selected module (main by default)'''
    out = {}
    for line in (MODCFG / "relocs.txt").read_text().splitlines():
        m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)(?: add:(-?0x[0-9a-f]+))? module:(\S+)", line)
        if m:
            out[int(m.group(1), 16)] = (int(m.group(3), 16) + (int(m.group(4), 16) if m.group(4) else 0),
                                        m.group(5), m.group(2))
    return out


def module_of_field(field):
    '''relocs.txt module field -> set of module names as load_symbols() uses them'''
    m = re.match(r"overlays?\(([\d,]+)\)", field)
    if m:
        return {f"ov{int(n):03d}" for n in m.group(1).split(",")}
    m = re.match(r"autoload\((\d+)\)", field)
    if m:
        return {f"autoload_{m.group(1)}"}
    return {field}


def own_symbols(lp):
    '''[(address, name, rest of line, module)] of main and autoload_3, renames applied'''
    out = []
    for mod, p in ((MOD, MODCFG / "symbols.txt"), (BSS_MODULE, CONFIG / BSS_MODULE / "symbols.txt")):
        for name, addr, line in lp.symbol_lines(p, mod):
            out.append((addr, name, line.split(" ", 1)[1], mod))
    return out


def vtable_renames(lp, own):
    '''label address -> (start address, _ZTV name) for the vtable renames of the loaded renames.txt'''
    have = {a for a, *_ in own}
    out = {}
    for (mod, addr), name in lp.RENAMES.items():
        if mod == MOD and name.startswith("_ZTV") and addr not in have and addr + 8 in have:
            out[addr + 8] = (addr, name)
    return out


def external_refs(ranges, skip_from):
    '''address in the unit -> [(module, from)] for relocations of every module that come from outside the unit'''
    def inside(a):
        return any(s <= a < e for s, e in ranges)
    out = {}
    for rp in sorted(CONFIG.rglob("relocs.txt")):
        mod = rp.parent.name if rp.parent != CONFIG else "main"
        for line in rp.read_text().splitlines():
            m = re.match(r"from:(0x[0-9a-f]+) kind:\S+ to:(0x[0-9a-f]+)(?: add:-?0x[0-9a-f]+)? module:(\S+)", line)
            if not m or m.group(3) not in (FIELD, "autoload(3)"):
                continue
            to = int(m.group(2), 16)
            if not inside(to) and not inside(to & ~1):
                continue
            frm = int(m.group(1), 16)
            if mod == MOD and skip_from(frm):
                continue
            out.setdefault(to, []).append((mod, frm))
    return out


class Layout:
    '''Where the linker would put each section of a compiled main unit'''

    def __init__(self, lp, o, secs, syms, redirect=None):
        self.o = o
        self.secs = secs
        known = set(syms)
        redirect = redirect or {}  # symbol index -> symbol index it is folded into (tools/aliases.py)
        nsec = len(o.sh)
        self.names = {}
        for i in range(nsec):
            cands = [y for y in o.syms if y[5] == i and y[0] and not re.fullmatch(r"\$[atdb]", y[0]) and y[3] != 3]
            want = 2 if o.secname[i] in (".text", ".init") else 1
            pick = [y for y in cands if y[3] == want and y[1] & ~1 == 0] or [y for y in cands if y[1] & ~1 == 0] or cands
            self.names[i] = pick[0][0] if pick else f"sec{i}"
        # dead-stripping: the build keeps every global of a compiled object that symbols.txt names
        # (tools/force_active.py), .ctor, and whatever those reference
        keep = set()
        todo = []
        for idx, (name, value, size, typ, bind, shndx) in enumerate(o.syms):
            if bind != 0 and 0 < shndx < nsec and name in known and idx not in redirect:
                todo.append(shndx)
        todo += [i for i in range(nsec) if o.secname[i] == ".ctor" and o.sh[i][5]]
        while todo:
            i = todo.pop()
            if i in keep:
                continue
            keep.add(i)
            for idx in o.relsym.get(i, []):
                shndx = o.syms[redirect.get(idx, idx)][5]
                if 0 < shndx < nsec and shndx not in keep:
                    todo.append(shndx)
        self.keep = keep
        self.addr = {}       # section index -> simulated address
        self.end = {}        # kind -> end of the simulated block
        self.unused = []
        for kind in KINDS:
            pos = secs[kind][0] if kind in secs else None
            for i, s in enumerate(o.sh):
                if o.secname[i] != kind or not s[5] or not s[2] & 2:
                    continue
                if i not in keep:
                    self.unused.append(i)
                    continue
                if pos is None:
                    continue
                al = max(s[8], 4)
                pos = (pos + al - 1) // al * al
                self.addr[i] = pos
                pos += s[5]
            if pos is not None:
                self.end[kind] = pos
        self.symaddr = {}    # symbol index -> simulated address
        for idx, (name, value, size, typ, bind, shndx) in enumerate(o.syms):
            if idx in redirect:
                name, value, size, typ, bind, shndx = o.syms[redirect[idx]]
            if shndx in self.addr:
                self.symaddr[idx] = self.addr[shndx] + value

    def kept(self, kind):
        return [i for i, s in enumerate(self.o.sh) if self.o.secname[i] == kind and s[5] and i in self.keep
                and s[2] & 2]


def cmd_check(lp, objpath, unit):
    o = lp.Obj(objpath)
    syms = lp.load_symbols()
    secs = unit_ranges(unit)
    modsecs = module_sections()
    image = ORIG.read_bytes()
    relocs = main_relocs()
    own = own_symbols(lp)
    by_addr = {}
    for addr, name, rest, mod in own:
        by_addr.setdefault(addr, []).append((name, rest, mod))
    problems = wrong = 0
    out = []
    # several symbols.txt names for one function (labels): tools/aliases.py folds the copies the object defines
    # into the primary name and adds the names it does not define
    t0, t1 = secs.get(".text", (0, 0))
    redirect = {}
    alias_notes = []
    gidx = {y[0]: i for i, y in enumerate(o.syms) if y[5] != 0 and y[4] != 0 and y[5] < len(o.sh)}
    for addr in sorted(by_addr):
        group = [(n, r) for n, r, m in by_addr[addr] if m == MOD and (r.startswith("kind:function") or (
            r.startswith("kind:label") and "local" not in r.split()))]
        if len(group) < 2 or not (t0 <= addr < t1):
            continue
        have = [n for n, r in group if n in gidx]
        if not have:
            continue
        primary = next((n for n, r in group if r.startswith("kind:function") and n in gidx), have[0])
        for n, r in group:
            if n == primary:
                continue
            if n not in gidx:
                alias_notes.append(f"ALIAS   {n} is a second name of {primary} ({addr:#010x}); tools/aliases.py adds "
                                   f"it to the object at link time")
                continue
            a, b = o.syms[gidx[n]], o.syms[gidx[primary]]
            if a[5] != b[5]:
                same = (o.section_bytes(a[5]) == o.section_bytes(b[5])
                        and o.relocs.get(a[5], []) == o.relocs.get(b[5], []) and a[1] == b[1])
                if not same:
                    alias_notes.append(f"EXTRA   {n} and {primary} are two names of {addr:#010x} in symbols.txt but "
                                       f"the object defines them with different code: tools/aliases.py will refuse")
                    problems += 1
                    continue
                alias_notes.append(f"ALIAS   {n} has the same code as {primary} ({addr:#010x}); tools/aliases.py "
                                   f"folds it into {primary} at link time")
            redirect[gidx[n]] = gidx[primary]
    lay = Layout(lp, o, secs, syms, redirect)
    bss_mod = {}
    for line in (CONFIG / BSS_MODULE / "delinks.txt").read_text().split("\n\n")[0].splitlines():
        m = re.match(r"\s*(\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
        if m:
            bss_mod[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))

    def say(line):
        out.append(line)

    def orig_bytes(addr, n):
        return image[addr - BASE:addr - BASE + n]

    folded_sections = {o.syms[i][5] for i in redirect}
    for i in lay.unused:
        nm = lay.names[i]
        if (o.secname[i] == ".text" and re.search(r"[CD]2E", nm)) or i in folded_sections:
            continue
        say(f"unused  {nm} ({o.secname[i]}, {o.sh[i][5]:#x} bytes) is not referenced and has no symbols.txt name: "
            f"dead-stripped")

    # ---- dsd: every range of a unit starts and ends on a symbol
    vt_starts = {start for start, _ in vtable_renames(lp, own).values()}
    for kind, (start, end) in secs.items():
        lim = modsecs.get(kind, (0, 0)) if kind != ".bss" else (0, 0)
        inside = bss_mod.get(".bss", (0, 0)) if kind == ".bss" else lim
        if not (inside[0] <= start <= end <= inside[1]):
            out.append(f"NORANGE {kind} {start:#010x}-{end:#010x} is not inside "
                       f"{BSS_MODULE if kind == '.bss' else MOD}'s {kind} ({inside[0]:#010x}-{inside[1]:#010x})")
            problems += 1
            continue
        for x in (start, end):
            if x not in by_addr and x not in vt_starts and x not in lim:
                say(f"BOUND   {kind} {start:#010x}-{end:#010x}: symbols.txt has no symbol at {x:#010x}. If a vtable "
                    f"starts there, add `{MOD} {x:08x} _ZTV<class>` to renames.txt; otherwise install_tu.py adds a "
                    f"boundary symbol `data_{x:08x}` (check that the range is right)")
    if any(line.startswith("NORANGE") for line in out):
        # a spec of another module (or a typo): nothing below can be compared
        print("\n".join(out))
        print(f"{problems} layout problems, 0 wrong targets, 0 unresolved symbols (ranges outside {MOD}: not checked)")
        return problems

    # ---- .text
    defined_funcs = set()
    pos = t0
    for i in lay.kept(".text"):
        name = lay.names[i]
        size = o.sh[i][5]
        want = syms.get(name)
        if want is None:
            say(f"EXTRA   {name} ({size:#x} bytes) is not in symbols.txt but something references it: it is linked "
                f"and shifts the unit")
            problems += 1
            continue
        if want[0] != MOD or not (t0 <= want[1] < t1):
            say(f"FOREIGN {name} is defined by this object but symbols.txt has it at {want[1]:#010x} ({want[0]}), "
                f"outside the unit's .text: Multiply-defined at link (reference it instead of defining it)")
            problems += 1
            continue
        defined_funcs.add(name)
        pos = (pos + 3) & ~3
        if want[1] != pos:
            say(f"ORDER   {name} would link at {pos:#010x}, original {want[1]:#010x}")
            problems += 1
            pos = want[1]
        mine = o.section_bytes(i)
        m = re.search(r"size=(0x[0-9a-f]+)", next((r for n, r, _ in by_addr.get(want[1], []) if n == name), ""))
        osize = int(m.group(1), 16) if m else len(mine)
        theirs = orig_bytes(want[1], len(mine))
        masked = set()
        for off, *_ in o.relocs.get(i, []):
            masked.update(range(off, off + 4))
        diff = [k for k in range(len(mine)) if k not in masked and mine[k] != theirs[k]]
        if diff or len(mine) != osize:
            extra = f", size {len(mine):#x} vs original {osize:#x}" if len(mine) != osize else ""
            say(f"BYTES   {name} differs from the original at +{(diff or [min(len(mine), osize)])[0]:#x} "
                f"({len(diff)} bytes){extra}")
            problems += 1
        pos += size
    if ".text" in secs:
        if (pos + 3) & ~3 != t1:
            say(f"SIZE    code ends at {(pos + 3) & ~3:#010x}, the unit's .text ends at {t1:#010x}")
            problems += 1
        defined_addrs = {syms[n][1] for n in defined_funcs}
        for addr, name, rest, mod in sorted(own):
            if mod != MOD or not (t0 <= addr < t1):
                continue
            if rest.startswith("kind:function") and addr not in defined_addrs:
                say(f"MISSING {name} ({addr:#010x}) is inside the unit's .text range but the object does not define it")
                problems += 1
        out.extend(alias_notes)

    # ---- other sections
    for kind in KINDS[1:]:
        kept = lay.kept(kind)
        if kind not in secs:
            if kept:
                names = ", ".join(lay.names[i] for i in kept[:6]) + (" ..." if len(kept) > 6 else "")
                say(f"NORANGE the object emits {len(kept)} {kind} object(s) ({names}) but the unit has no {kind} "
                    f"range: define/declare them so the unit owns exactly the ranges of the spec")
                problems += 1
            continue
        start, end = secs[kind]
        got = (lay.end[kind] + 3) & ~3
        mod_end = modsecs.get(kind, (0, 0))[1]
        if got != end and not (end == mod_end and got <= end):
            say(f"SIZE    {kind} objects end at {got:#010x}, the unit's {kind} range is {start:#010x}-{end:#010x} "
                f"({len(kept)} objects)")
            problems += 1
        if kind == ".bss":
            continue
        shown = 0
        for i in kept:
            a = lay.addr[i]
            mine = o.section_bytes(i)
            theirs = orig_bytes(a, len(mine))
            masked = set()
            for off, *_ in o.relocs.get(i, []):
                masked.update(range(off, off + 4))
            diff = [k for k in range(len(mine)) if k not in masked and (k >= len(theirs) or mine[k] != theirs[k])]
            if diff:
                problems += 1
                shown += 1
                if shown <= MAX_LINES:
                    k = diff[0] & ~3
                    say(f"DATA    {lay.names[i]} ({kind}, {len(mine):#x} bytes) at {a:#010x} differs from the original "
                        f"at +{diff[0]:#x}: original {theirs[k:k + 4].hex()} compiled {mine[k:k + 4].hex()}")
        if shown > MAX_LINES:
            say(f"        ... {shown - MAX_LINES} more DATA lines")

    # ---- named objects on their symbols.txt addresses
    for idx, (name, value, size, typ, bind, shndx) in enumerate(o.syms):
        if idx not in lay.symaddr or bind == 0 or o.secname[shndx] in (".text", ".init", ".ctor"):
            continue
        want = syms.get(name)
        if want and want[0] in (MOD, BSS_MODULE) and want[1] != lay.symaddr[idx]:
            say(f"PLACE   {name} would link at {lay.symaddr[idx]:#010x}, symbols.txt has it at {want[1]:#010x}")
            problems += 1

    # ---- relocation targets
    def resolve(idx):
        name, value, size, typ, bind, shndx = o.syms[idx]
        if idx in lay.symaddr:
            return lay.symaddr[idx], {MOD, BSS_MODULE}
        if shndx == 0 and name in syms:
            mods = {m for m, a in [syms[name]]}
            return syms[name][1], mods
        return None, set()

    for i in sorted(lay.addr):
        kind = o.secname[i]
        if kind == ".bss":
            continue
        a = lay.addr[i]
        if kind == ".text":
            want_addr = syms.get(lay.names[i])
            if not want_addr:
                continue
            a = want_addr[1]
        for (off, sname, addend, rtype), idx in zip(o.relocs.get(i, []), o.relsym.get(i, [])):
            have, mods = resolve(idx)
            if have is None:
                continue  # unresolved: reported below
            rel = relocs.get(a + off)
            where = f"{lay.names[i]}+{off:#x}"
            if rtype == 2:
                word, = struct.unpack_from("<I", image, a + off - BASE)
                got = have + addend
                if (got & ~1) != (word & ~1):
                    names = " ".join(n for n, _ in lp.syms_by_addr(syms, word & ~1)) or \
                        " ".join(n for n, _ in lp.syms_by_addr(syms, word))
                    say(f"TARGET  {where} points to {sname}{'+%#x' % addend if addend else ''} ({got:#010x}); the "
                        f"original word is {word:#010x} {names}")
                    wrong += 1
                    continue
            else:
                if rel is None:
                    continue
                if (have & ~1) != (rel[0] & ~1):
                    names = " ".join(n for n, _ in lp.syms_by_addr(syms, rel[0] & ~1))
                    say(f"TARGET  {where} calls {sname} ({have:#010x}); the original calls {rel[0]:#010x} {names}")
                    wrong += 1
                    continue
            if rel is not None and mods and not (mods & module_of_field(rel[1])):
                say(f"TARGET  {where} uses {sname} of {'/'.join(sorted(mods))}; the original relocation is to "
                    f"module:{rel[1]}")
                wrong += 1

    # ---- names that code outside the unit refers to
    ranges = list(secs.values())

    def in_unit(a):
        return any(s <= a < e for s, e in ranges)
    vt = vtable_renames(lp, own)
    defined_at = {}
    for idx, (name, value, size, typ, bind, shndx) in enumerate(o.syms):
        if idx in lay.symaddr and bind != 0:
            defined_at.setdefault(lay.symaddr[idx] & ~1, set()).add(name)
    # functions sit on their symbols.txt address (ORDER lines say when not)
    for name in defined_funcs:
        defined_at.setdefault(syms[name][1], set()).add(name)
    missing = 0
    # names the linker script defines (tools/lcf_symbols.py): recorded ones, and the ones install_tu.py will record
    # from this unit's renames.txt. They satisfy references from outside the unit.
    linker_defined = {a for m, a in lp.lcf_symbols().values() if m in (MOD, BSS_MODULE)}
    for (mod, addr), section in sorted(lp.SECTION_LABELS.items()):
        rng = secs.get(section)
        if mod != MOD or rng is None or not (rng[0] <= addr < rng[1]) or addr not in by_addr:
            say(f"MISSING renames.txt `{mod} {addr:08x} section:{section}`: the address must be a symbols.txt symbol "
                f"of {MOD} inside the unit's {section} range")
            missing += 1
            continue
        linker_defined.add(addr)
    for (mod, addr), start in sorted(lp.INTERIOR.items()):
        if mod not in (MOD, BSS_MODULE) or not in_unit(start) or addr not in by_addr:
            continue  # without a symbols.txt name only the relocations are rewritten
        base = [n for n, r, m in by_addr.get(start, []) if not r.startswith("kind:label")]
        if not in_unit(addr) or not any(n in defined_at.get(start, ()) for n in base):
            say(f"MISSING renames.txt `{mod} {addr:08x} interior:{start:08x}`: the object must define the symbols.txt "
                f"object at {start:#010x} ({', '.join(base) or 'no symbol'}) as a global, and the label must lie in "
                f"the unit: the linker script defines {by_addr[addr][0][0]} as that object + {addr - start:#x} "
                f"(tools/lcf_symbols.py)")
            missing += 1
    ext = external_refs(ranges, in_unit)
    for to in sorted(ext):
        users = ext[to]
        target = to if to in by_addr else to & ~1
        names = [(n, r) for n, r, _ in by_addr.get(target, [])]
        eg = ", ".join(f"{m}:{f:#010x}" for m, f in users[:3])
        if any(k[1] == to for k in lp.INTERIOR):
            continue  # renames.txt: install_tu.py retargets these relocations to the object's start
        if to in linker_defined:
            continue  # the linker script defines the name there (lcf_symbols.txt, or a `section:` line)
        if to in vt:
            start, vname = vt[to]
            if vname not in defined_at.get(start, ()):
                say(f"MISSING {vname} (vtable at {start:#010x}, renames.txt) is not defined by the object there; "
                    f"{len(users)} relocations use it ({eg})")
                missing += 1
            continue
        if not names:
            say(f"MISSING {to:#010x} is the target of {len(users)} relocations from outside the unit ({eg}) but has "
                f"no symbols.txt name (interior address: the relocations need `to:<object start> add:<offset>`)")
            missing += 1
            continue
        kinds = [r for n, r in names if not r.startswith("kind:label")] or [r for n, r in names]
        primary = [n for n, r in names if not r.startswith("kind:label")] or [n for n, r in names]
        if any(n in defined_at.get(target, ()) for n in primary):
            continue
        if kinds[0].startswith("kind:function"):
            continue  # reported as MISSING function above
        hint = ""
        zero = target - 8
        if target - 8 in defined_at and any(n.startswith("_ZTV") for n in defined_at[target - 8]):
            hint = (f": it is the label 8 bytes into {next(n for n in defined_at[zero] if n.startswith('_ZTV'))}; "
                    f"add `{MOD} {zero:08x} <that name>` to renames.txt (install_tu.py rewrites the relocations)")
        elif target not in defined_at:
            hint = (": the address is inside one of the object's objects, or the object order differs. For an "
                    "interior label add `<module> <label address> interior:<object start>` to renames.txt")
        else:
            hint = f": the object has {', '.join(sorted(defined_at[target]))} there (rename it, or list a rename)"
        say(f"MISSING {primary[0]} ({target:#010x}) is used from outside the unit by {len(users)} relocations ({eg}) "
            f"but the object does not define that name there{hint}")
        missing += 1

    for line in out:
        print(line)
    missing += lp.cmd_undef(objpath)
    print(f"{problems} layout problems, {wrong} wrong targets, {missing} unresolved symbols")
    return problems + wrong + missing


def function_addresses(lp):
    '''(class or "", name) -> address for the selected module's functions'''
    return lp.function_addresses_of(MODCFG / "symbols.txt", MOD)


def cmd_diff(lp):
    import bisect
    b = Path("build/usa/build")
    e = Path("extract/usa/arm9")
    own = sorted((a, n) for a, n, r, m in own_symbols(lp) if not r.startswith("kind:label"))
    addrs = [a for a, _ in own]
    units = []
    for delinks in (MODCFG / "delinks.txt", CONFIG / BSS_MODULE / "delinks.txt"):
        cur = None
        for line in delinks.read_text().splitlines():
            if line and not line[0].isspace():
                cur = line.rstrip().rstrip(":")
            m = re.match(r"\s+(\.\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
            if m and cur:
                units.append((int(m.group(2), 16), int(m.group(3), 16), cur, m.group(1)))
    total = 0
    orig = ORIG.read_bytes()
    built = (b / BUILT).read_bytes()
    print(f"{BUILT}: orig {len(orig):#x} built {len(built):#x}")
    diffs = [i for i in range(0, min(len(orig), len(built)), 4) if orig[i:i + 4] != built[i:i + 4]]
    print(f"{len(diffs)} differing words")
    total += len(diffs) + (len(orig) != len(built))
    runs = []
    for d in diffs:
        if runs and d - runs[-1][1] <= 8:
            runs[-1][1] = d
        else:
            runs.append([d, d])
    for a, z in runs[:40]:
        k = bisect.bisect_right(addrs, BASE + a) - 1
        owner = own[k][1] if k >= 0 else "?"
        unit = next((f"{u} {s}" for s0, s1, u, s in units if s0 <= BASE + a < s1), "delinked")
        w0, = struct.unpack_from("<I", orig, a)
        w1, = struct.unpack_from("<I", built, a)
        print(f"  {BASE + a:#010x}-{BASE + z + 4:#010x}  in {owner}  [{unit}]  first word {w0:08x} -> {w1:08x}")
    if len(runs) > 40:
        print(f"  ... {len(runs) - 40} more ranges")
    for built_name, orig_name in (("arm9.bin", "arm9.bin"), ("itcm.bin", "itcm.bin"), ("dtcm.bin", "dtcm.bin"),
                                  ("autoload_2.bin", "unk_autoload_2.bin"), ("autoload_3.bin", "unk_autoload_3.bin")):
        if built_name == BUILT or not (b / built_name).exists() or not (e / orig_name).exists():
            continue
        x, y = (b / built_name).read_bytes(), (e / orig_name).read_bytes()
        if x != y:
            first = next((i for i in range(min(len(x), len(y))) if x[i] != y[i]), min(len(x), len(y)))
            print(f"{built_name}: differs (sizes {len(x):#x}/{len(y):#x}, first difference at +{first:#x})"
                  + (" -- bss written into the file: an OBJECT-selected or mis-sectioned .bss?"
                     if built_name == "autoload_3.bin" else ""))
            total += 1
    if not total:
        print("main and the autoloads match the original")  # arm9.bin, itcm, dtcm, autoload_2, autoload_3
    return total


def cmd_dump(lp, unit):
    secs = unit_ranges(unit)
    image = ORIG.read_bytes()
    relocs = main_relocs()
    syms = lp.load_symbols()
    own = own_symbols(lp)
    labels = {}
    for addr, name, rest, mod in own:
        labels.setdefault(addr, []).append(name)
    for sec in (".rodata", ".ctor", ".data"):
        if sec not in secs:
            continue
        a0, a1 = secs[sec]
        print(f"{sec} {a0:#x}-{a1:#x}")
        for a in range(a0, a1, 4):
            w, = struct.unpack_from("<I", image, a - BASE)
            lab = " ".join(labels.get(a, []) + [f"(+{k}: {' '.join(labels[a + k])})" for k in (1, 2, 3)
                                                if a + k in labels])
            tgt = ""
            if a in relocs:
                t = relocs[a][0]
                names = [n for n, _ in lp.syms_by_addr(syms, t & ~1)] or [n for n, _ in lp.syms_by_addr(syms, t)]
                tgt = f" -> {' '.join(names) or hex(t)} [{relocs[a][1]}]"
            txt = "".join(chr(c) if 32 <= c < 127 else "." for c in image[a - BASE:a - BASE + 4])
            print(f"  {a:#010x} {w:08x} {txt} {lab}{tgt}")
    if ".bss" in secs:
        a0, a1 = secs[".bss"]
        inb = sorted((a, n) for a, n, r, m in own if a0 <= a < a1)
        print(f".bss {a0:#x}-{a1:#x}")
        for k, (a, n) in enumerate(inb):
            nxt = inb[k + 1][0] if k + 1 < len(inb) else a1
            print(f"  {a:#010x} {nxt - a:#6x} {n}")

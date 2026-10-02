#!/usr/bin/env python3
"""
Tools for linking an overlay unit (marking it `complete` so the ROM is built from the compiled object).
Run from the repository root. See tools/pipeline/linking.md for the procedure.

  linkprep.py reverse <src.cpp>
      Rewrite the file with its out-of-line function definitions in reverse order. mwcc emits a file's functions
      last to first, so a file written in address order links backwards. Inline functions stay in place.

  linkprep.py undef <obj.o>
      List the object's undefined symbols that no symbols.txt defines (they would fail to link).

  linkprep.py data <src.cpp> <obj.o> <ovNNN> [--apply] [--seed N]
      Map every .data/.bss object of the compiled unit to its address in the original overlay, then search for
      where to define the file-scope data objects so mwcc emits them in the original order. With --apply, move
      the definitions (and add extern declarations for objects used before their definition).

  linkprep.py diff <ovNNN>
      Compare the built overlay (build/usa/build/arm9_ovNNN.bin) with the original and list differing ranges.

The ARM9 main module is linked one translation unit at a time; there the module argument is `main` followed by
the unit's spec.txt (or its name in config/usa/arm9/delinks.txt once installed). See mainprep.py for the details:

  linkprep.py check <obj.o> main <spec.txt | unit>
  linkprep.py data <src.cpp> <obj.o> main <spec.txt | unit> [--apply] [--seed N]
  linkprep.py reverse <src.cpp> main
  linkprep.py diff main
  linkprep.py dump main <spec.txt | unit>

The library modules `autoload_2` and `itcm` (C sources, ARM code) take the place of `main` in all of these:

  linkprep.py compile <src.c|src.cpp> <obj.o>      -lang by extension, `// mwcc-flags:` / `// mwcc-version:` lines
  linkprep.py check <obj.o> autoload_2 <spec.txt | unit>
  linkprep.py reverse <src.c> itcm
  linkprep.py diff autoload_2
  linkprep.py dump autoload_2 <spec.txt | unit>

Data ordering model (checked against compiler experiments and ov140): mwcc collects a file's data and bss objects
in creation order, heapsorts the reversed list by size (ascending, unstable), and emits them in that order;
string literals follow in a separate pool. Named objects are created at their definition; compiler objects
(member-function-pointer constants, local static tables and guards, local array initialisers) when their
function is compiled, numbered in creation order; the vtable is created last.
"""
import re
import struct
import subprocess
import sys
import random
from pathlib import Path

CONFIG = Path("config/usa/arm9")
# modules that are linked one translation unit at a time, with their bss in autoload_3 (mainprep.py)
UNIT_MODULES = ("main", "autoload_2", "itcm")


# ---------------------------------------------------------------- symbols.txt
RENAMES = {}  # (module, address) -> new name, from a renames.txt next to the object being checked
ALIASES = []  # (module, existing name, second name), from an aliases.txt next to the object being checked
INTERIOR = {}  # (module, label address) -> object start, from `interior:` lines of the renames.txt
SECTION_LABELS = {}  # (module, address) -> section, from `section:` lines of the renames.txt
# symbols the linker script defines
# (dsd's lcf: overlay ids; the bounds of the exception index that mwld's EXCEPTION directive builds in main, which the
# C++ runtime's __FindExceptionTable loads: relocs.txt `kind:link_time_const(__exception_table_start__)`)
LCF_SYMBOL = r"OVERLAY_\d+_ID|__exception_table_(start|end)__"


def load_renames(path):
    '''apply a deliverable's renames.txt ("module hexaddr newname" per line) to every symbols.txt lookup'''
    p = Path(path).parent / "renames.txt"
    if p.exists():
        for line in p.read_text().splitlines():
            f = line.split()
            f = line.split("#", 1)[0].split()
            if len(f) == 3 and f[2].startswith("interior:"):
                INTERIOR[(f[0], int(f[1], 16))] = int(f[2].split(":", 1)[1], 16)
            elif len(f) == 3 and f[2].startswith("section:"):
                SECTION_LABELS[(f[0], int(f[1], 16))] = f[2].split(":", 1)[1]
            elif len(f) == 3:
                RENAMES[(f[0], int(f[1], 16))] = f[2]
        print(f"(applying {len(RENAMES)} renames from {p})")
    p = Path(path).parent / "aliases.txt"
    if p.exists():
        for line in p.read_text().splitlines():
            f = line.split("#", 1)[0].split()
            if len(f) == 3:
                ALIASES.append(tuple(f))


def symbol_lines(p, mod):
    for line in p.read_text().splitlines():
        m = re.match(r"(\S+) (.*addr:(0x[0-9a-f]+).*)", line)
        if m:
            name = RENAMES.get((mod, int(m.group(3), 16)), m.group(1))
            yield name, int(m.group(3), 16), line


def lcf_symbols():
    '''name -> (module, address) for the names the linker script defines (lcf_symbols.txt, tools/lcf_symbols.py)'''
    out = {}
    for p in CONFIG.rglob("lcf_symbols.txt"):
        mod = p.parent.name if p.parent != CONFIG else "main"
        for line in p.read_text().splitlines():
            m = re.match(r"(\S+)\s+addr:(0x[0-9a-fA-F]+)\s+base:\S+", line.split("#", 1)[0].strip())
            if m:
                out[m.group(1)] = (mod, int(m.group(2), 16))
    return out


ABS_MODULE = "abs"  # the "module" of an absolute symbol in load_symbols()


def abs_symbols():
    '''name -> value for the absolute symbols the linker script defines (config/usa/arm9/abs_symbols.txt,
    tools/lcf_symbols.py): numbers that the original SDK took from its linker script, so the word that holds one has
    no relocation in relocs.txt'''
    out = {}
    p = CONFIG / "abs_symbols.txt"
    if p.is_file():
        for line in p.read_text().splitlines():
            m = re.fullmatch(r"(\S+)\s+abs:(0x[0-9a-fA-F]+)", line.split("#", 1)[0].strip())
            if m:
                out[m.group(1)] = int(m.group(2), 16)
    return out


def load_symbols():
    '''name -> (module, address) for every symbols.txt, and for the names the linker script defines'''
    out = {}
    for p in CONFIG.rglob("symbols.txt"):
        mod = p.parent.name if p.parent != CONFIG else "main"
        for name, addr, _ in symbol_lines(p, mod):
            out.setdefault(name, (mod, addr))
    for name, where in lcf_symbols().items():
        out.setdefault(name, where)
    for name, value in abs_symbols().items():
        out.setdefault(name, (ABS_MODULE, value))
    # a rename for an address without a symbol yet (a vtable named at its start, 8 bytes before dsd's label)
    for (mod, addr), name in RENAMES.items():
        out.setdefault(name, (mod, addr))
    for mod, existing, new in ALIASES:
        if existing in out:
            out.setdefault(new, out[existing])
    return out


def overlay_sections(ov):
    secs = {}
    for line in (CONFIG / "overlays" / ov / "delinks.txt").read_text().split("\n\n")[0].splitlines():
        m = re.match(r"\s*(\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
        if m:
            secs[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
    return secs


def overlay_relocs(ov):
    '''from address -> to address for the overlay's relocations'''
    out = {}
    for line in (CONFIG / "overlays" / ov / "relocs.txt").read_text().splitlines():
        m = re.match(r"from:(0x[0-9a-f]+) kind:\S+ to:(0x[0-9a-f]+)(?: add:(-?0x[0-9a-f]+))?", line)
        if m:
            out[int(m.group(1), 16)] = int(m.group(2), 16) + (int(m.group(3), 16) if m.group(3) else 0)
    return out


# ---------------------------------------------------------------- ELF object
class Obj:
    def __init__(self, path):
        self.data = Path(path).read_bytes()
        d = self.data
        e_shoff, = struct.unpack_from("<I", d, 0x20)
        e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", d, 0x2e)
        self.sh = [struct.unpack_from("<10I", d, e_shoff + i * e_shentsize) for i in range(e_shnum)]
        shstr = self.sh[e_shstrndx]
        self.secname = [self._str(shstr, s[0]) for s in self.sh]
        self.syms = []  # (name, value, size, type, bind, shndx)
        for s in self.sh:
            if s[1] == 2:  # SHT_SYMTAB
                strtab = self.sh[s[6]]
                for i in range(0, s[5], 16):
                    name, value, size, info, _, shndx = struct.unpack_from("<IIIBBH", d, s[4] + i)
                    self.syms.append((self._str(strtab, name), value, size, info & 15, info >> 4, shndx))
        self.relocs = {}  # target section index -> [(offset, symbol name, addend, type)]
        self.relsym = {}  # target section index -> [symbol index], parallel to self.relocs
        for s in self.sh:
            if s[1] == 4:  # SHT_RELA
                lst = self.relocs.setdefault(s[7], [])
                idx = self.relsym.setdefault(s[7], [])
                for i in range(0, s[5], 12):
                    off, info, addend = struct.unpack_from("<IIi", d, s[4] + i)
                    lst.append((off, self.syms[info >> 8][0], addend, info & 0xff))
                    idx.append(info >> 8)

    def _str(self, strsec, off):
        start = strsec[4] + off
        return self.data[start:self.data.index(b"\0", start)].decode()

    def section_bytes(self, i):
        s = self.sh[i]
        return b"" if s[1] == 8 else self.data[s[4]:s[4] + s[5]]

    def objects(self):
        '''data/bss objects in section order: dict(idx, kind, size, name, bytes)'''
        out = []
        for i, s in enumerate(self.sh):
            if self.secname[i] in (".data", ".bss", ".rodata") and s[5]:
                names = [y[0] for y in self.syms if y[5] == i and y[3] == 1]
                out.append(dict(idx=i, kind=self.secname[i], size=s[5], name=names[0] if names else f"sec{i}",
                                bytes=self.section_bytes(i)))
        return out

    def functions(self):
        '''text section index -> function symbol name'''
        return {y[5]: y[0] for y in self.syms if y[3] == 2 and y[5] < len(self.sh)}


# ---------------------------------------------------------------- heapsort model
def heapsort(a, key):
    a = a[:]
    n = len(a)

    def sift(s, e):
        r = s
        while 2 * r + 1 <= e:
            c = 2 * r + 1
            sw = r
            if key(a[sw]) < key(a[c]):
                sw = c
            if c + 1 <= e and key(a[sw]) < key(a[c + 1]):
                sw = c + 1
            if sw == r:
                return
            a[r], a[sw] = a[sw], a[r]
            r = sw
    for s in range((n - 2) // 2, -1, -1):
        sift(s, n - 1)
    for e in range(n - 1, 0, -1):
        a[0], a[e] = a[e], a[0]
        sift(0, e - 1)
    return a


def emitted(creation, size):
    return heapsort(creation[::-1], lambda x: size[x])


# ---------------------------------------------------------------- source parsing
def top_level_chunks(text):
    '''split a C++ file into top-level chunks (start, end) at brace depth 0'''
    chunks = []
    depth = 0
    start = 0
    i = 0
    n = len(text)
    while i < n:
        c = text[i]
        if text.startswith("//", i):
            i = text.index("\n", i) if "\n" in text[i:] else n
            continue
        if text.startswith("/*", i):
            i = text.index("*/", i) + 2
            continue
        if c in "\"'":
            j = i + 1
            while text[j] != c:
                j += 2 if text[j] == "\\" else 1
            i = j + 1
            continue
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                j = i + 1
                while j < n and text[j] in " \t":
                    j += 1
                if j < n and text[j] == ";":
                    i = j
                chunks.append((start, i + 1))
                start = i + 1
        elif c == ";" and depth == 0:
            chunks.append((start, i + 1))
            start = i + 1
        elif c == "#" and depth == 0 and (i == 0 or text[i - 1] == "\n"):
            e = text.index("\n", i)
            chunks.append((start, e + 1))
            start = e + 1
            i = e
        i += 1
    chunks.append((start, n))
    return chunks


def is_function(code):
    head = code.split("{")[0]
    code_s = code.strip()
    if not code_s.endswith("}") or "(" not in head:
        return False
    if re.match(r"(class|struct|union|enum|namespace|typedef)\b", head.strip().split("\n")[-1].strip()):
        return False
    if re.search(r"\bextern\s+\"C\"\s*$", head.strip()):
        return False
    if "=" in head.split("(")[0]:
        return False
    return True


def strip_comments(s):
    return re.sub(r"//[^\n]*", "", s).strip()


def overlay_function_addresses(ov):
    '''(class or "", name) -> address for the overlay's functions in symbols.txt'''
    return function_addresses_of(CONFIG / "overlays" / ov / "symbols.txt", ov)


def function_addresses_of(path, mod):
    '''(class or "", name) -> address for the functions of one symbols.txt'''
    out = {}
    for name, addr, line in symbol_lines(path, mod):
        if "kind:function" not in line:
            continue
        mm = re.match(r"_ZN(\d+)(\w+)", name)
        if mm:
            n = int(mm.group(1))
            cls, rest = mm.group(2)[:n], mm.group(2)[n:]
            if rest[:2] in ("D0", "D1", "D2", "C1", "C2"):
                out.setdefault((cls, "~" + cls if rest[0] == "D" else cls), addr)
                continue
            m2 = re.match(r"(\d+)", rest)
            if m2:
                k = int(m2.group(1))
                out.setdefault((cls, rest[len(m2.group(1)):len(m2.group(1)) + k]), addr)
        else:
            out.setdefault(("", name), addr)
    return out


def function_key(code, addrs):
    '''original address of a function definition chunk, or None'''
    head = strip_comments(code).split("{")[0].replace("\n", " ")
    m = re.search(r"(\w+)::(~?\w+)\s*\(", head)
    if m:
        return addrs.get((m.group(1), m.group(2)))
    m = re.search(r"(\w+)\s*\(", head)
    return addrs.get(("", m.group(1))) if m else None


def cmd_reverse(src, ov=None):
    '''order function definitions by descending original address (mwcc emits a file's functions last to first)'''
    if ov is None:
        m = re.search(r"src/(ov\d+|main|autoload_2|itcm)/", str(Path(src).resolve()))
        ov = m.group(1) if m else None
    if ov in UNIT_MODULES:
        addrs = function_addresses_of(CONFIG / "symbols.txt" if ov == "main" else CONFIG / ov / "symbols.txt", ov)
    else:
        addrs = overlay_function_addresses(ov) if ov else {}
    text = Path(src).read_text()
    chunks = top_level_chunks(text)
    parts = [text[a:b] for a, b in chunks]
    funcs = [i for i, p in enumerate(parts) if is_function(strip_comments(p)) and "inline" not in
             strip_comments(p).split("(")[0]]
    if not funcs:
        sys.exit("no function definitions found")
    first, last = funcs[0], funcs[-1]
    body = parts[first:last + 1]
    fn = [p for p in body if is_function(strip_comments(p)) and "inline" not in strip_comments(p).split("(")[0]]
    other = [p for p in body if p not in fn]
    keys = [function_key(p, addrs) for p in fn]
    unknown = [strip_comments(p).split("{")[0].strip().split("\n")[-1] for p, k in zip(fn, keys) if k is None]
    if unknown:
        print("no address for (kept in reversed file order):", *unknown, sep="\n  ")
    # descending address; functions without an address keep their reversed file position
    order = sorted(range(len(fn)), key=lambda i: (-(keys[i] if keys[i] is not None else
                                                    next((keys[j] for j in range(i, -1, -1) if keys[j] is not None), 0)), -i))
    # non-function chunks between functions (data definitions, inline helpers) move before the functions
    out = "".join(parts[:first]) + "".join(other).rstrip("\n") + "\n\n" + \
        "\n\n".join(fn[i].strip("\n") for i in order) + "\n" + "".join(parts[last + 1:])
    Path(src).write_text(re.sub(r"\n{3,}", "\n\n", out))
    print(f"ordered {len(fn)} functions by descending address ({len(other)} other chunks moved above them)")


# ---------------------------------------------------------------- undef
def cmd_undef(objpath):
    o = Obj(objpath)
    syms = load_symbols()
    own = {y[0] for y in o.syms if y[5] != 0}
    missing = sorted({y[0] for y in o.syms if y[5] == 0 and y[0] and y[0] not in own and y[0] not in syms
                      and not re.fullmatch(LCF_SYMBOL, y[0])})
    for m in missing:
        print("MISSING", m)
    print(f"{len(missing)} unresolved")
    return len(missing)


# ---------------------------------------------------------------- data
def definition_spans(text, uninitialised=False):
    '''file-scope data definitions: name -> (start, end) including preceding comment lines.
    uninitialised: also definitions without an initialiser (bss objects, objects with a constructor)'''
    out = {}
    for a, b in top_level_chunks(text):
        code = text[a:b]
        s = strip_comments(code)
        if uninitialised and s.endswith(";") and "=" not in s and "(" not in s and "{" not in s and not re.match(
                r"(extern|typedef|class|struct|union|enum|using|friend|template|#)\b", s):
            m = re.search(r"([A-Za-z_]\w*)\s*(\[[^\]]*\])*\s*;$", s)
            if m and len(s.split()) >= 2:
                out[m.group(1)] = (a, b)
            continue
        if not s.endswith(";") or "=" not in s or is_function(s):
            continue
        head = s.split("=")[0]
        m = re.search(r"([A-Za-z_]\w*)\s*(\[[^\]]*\])*\s*$", head)
        if m and not head.lstrip().startswith(("typedef", "#")):
            # extend start back to include leading comment lines directly above
            out[m.group(1)] = (a, b)
    return out


def function_lines(text):
    '''method/function name -> source offset of its definition start (last occurrence wins for overloads)'''
    out = {}
    for a, b in top_level_chunks(text):
        s = strip_comments(text[a:b])
        if is_function(s):
            head = s.split("{")[0]
            m = re.search(r"(~?\w+)\s*\([^()]*\)\s*(const)?\s*$", head.replace("\n", " "))
            if m:
                out.setdefault(m.group(1), a)
    return out


def method_of(mangled):
    if not mangled.startswith("_Z"):
        return mangled
    m = re.match(r"_ZN(\d+)(\w+)", mangled)
    if m:
        n = int(m.group(1))
        rest = m.group(2)[n:]
        if rest.startswith(("D0", "D1", "D2", "C1", "C2")):
            return "~" if rest[0] == "D" else "ctor"
        m2 = re.match(r"(\d+)", rest)
        if m2:
            k = int(m2.group(1))
            return rest[len(m2.group(1)):len(m2.group(1)) + k]
    return mangled


def cmd_data(src, objpath, ov, apply=False, seed=1, unit=None):
    text = Path(src).read_text()
    o = Obj(objpath)
    syms = load_symbols()
    is_main = ov in UNIT_MODULES
    if is_main:
        mainprep = main_module(ov)
        secs = mainprep.unit_ranges(unit)
        relocs = {k: v[0] for k, v in mainprep.main_relocs().items()}
        orig = mainprep.ORIG.read_bytes()
        base = mainprep.BASE
    else:
        secs = overlay_sections(ov)
        relocs = overlay_relocs(ov)
        orig = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
        base = secs[".text"][0]
    objs = o.objects()
    if is_main:
        # named objects: symbols.txt (main, or autoload_3 for bss) says where they are
        for x in objs:
            if syms.get(x["name"], ("", 0))[0] in (ov, "autoload_3"):
                x["addr"] = syms[x["name"]][1]
        # the static initialiser's pointers
        for i, s in enumerate(o.sh):
            if o.secname[i] == ".init" and s[5] and ".init" in secs:
                for off, sname, addend, _ in o.relocs.get(i, []):
                    for x in objs:
                        if x["name"] == sname and "addr" not in x and secs[".init"][0] + off in relocs \
                                and not sname.startswith("@"):
                            x["addr"] = relocs[secs[".init"][0] + off] - addend
                            x["refby"] = "__sinit"
    byname = {x["name"]: x for x in objs}
    funcs = o.functions()

    # 1. original address of each object via the code that references it
    for sec_i, lst in o.relocs.items():
        fname = funcs.get(sec_i)
        if not fname or fname not in syms:
            continue
        faddr = syms[fname][1]
        for off, sname, addend, _ in lst:
            if sname in byname and faddr + off in relocs:
                byname[sname].setdefault("addr", relocs[faddr + off] - addend)
                byname[sname].setdefault("refby", fname)
    # 2. unreferenced objects: match content (words with relocations masked)
    dstart, dend = secs.get(".data", (0, 0))
    for x in objs:
        if "addr" in x or x["kind"] == ".bss":
            continue
        if is_main:
            dstart, dend = secs.get(x["kind"], (0, 0))
        masked = {off for off, *_ in o.relocs.get(x["idx"], [])}
        cands = []
        for a in range(dstart, dend - x["size"] + 1, 4):
            ob = orig[a - base:a - base + x["size"]]
            if all(ob[k:k + 4] == x["bytes"][k:k + 4] for k in range(0, x["size"], 4) if k not in masked):
                cands.append(a)
        if len(cands) == 1:
            x["addr"] = cands[0]
        elif not cands:
            print(f"ERROR: {x['name']} ({x['size']:#x} bytes): its contents match nowhere in the original .data. "
                  f"Check its initializer against ovdump.py (words are little-endian: 0x00c900cd is u16 0xcd then "
                  f"0xc9) and its size (zero words before a vtable are the vtable's header, not padding).")
        else:
            print(f"warning: {x['name']} ({x['size']:#x}) matches {len(cands)} places by content")
    # contents of every placed data object must equal the original (relocated words are not compared)
    for x in objs:
        if "addr" not in x or x["kind"] == ".bss":
            continue
        masked = {off for off, *_ in o.relocs.get(x["idx"], [])}
        ob = orig[x["addr"] - base:x["addr"] - base + x["size"]]
        bad = [k for k in range(0, x["size"], 4) if k not in masked and ob[k:k + 4] != x["bytes"][k:k + 4]]
        if bad:
            print(f"ERROR: {x['name']} at {x['addr']:#x}: {len(bad)} words differ from the original "
                  f"(first at +{bad[0]:#x}: original {ob[bad[0]:bad[0] + 4].hex()} compiled "
                  f"{x['bytes'][bad[0]:bad[0] + 4].hex()})")
    unplaced = [x["name"] for x in objs if "addr" not in x]
    if unplaced:
        print("cannot place:", unplaced)

    # 3. split the object's order into the size-sorted block and the string pool tail
    sizes = [x["size"] for x in objs]
    cut = len(objs)
    for i in range(1, len(objs)):
        if sizes[i] < sizes[i - 1]:
            cut = i
            break
    sorted_objs, tail = objs[:cut], objs[cut:]
    target = {}
    for kind in (".data", ".bss", ".rodata"):
        target[kind] = [x["name"] for x in sorted(
            [x for x in sorted_objs if x["kind"] == kind and "addr" in x], key=lambda x: x["addr"])]
    tail_ok = [x.get("addr", 0) for x in tail] == sorted(x.get("addr", 0) for x in tail)
    actual_ok = all([x["name"] for x in sorted_objs if x["kind"] == k and "addr" in x] == target[k] for k in target)
    print(f"compiled object's data order: {'MATCHES the original' if actual_ok else 'differs from the original'}")
    print(f"{len(sorted_objs)} sorted objects, {len(tail)} in the literal pool (order {'ok' if tail_ok else 'WRONG'})")

    # 4. creation order units: named file-scope definitions are movable; compiler objects belong to functions
    defs = definition_spans(text, is_main)
    fpos = function_lines(text)
    size = {x["name"]: x["size"] for x in sorted_objs}
    named = [x["name"] for x in sorted_objs if x["name"] in defs]
    # main: what __sinit touches. The registration record (@N, 0xc bytes of bss) of a global with a destructor is
    # created right before the object; objects initialised by __sinit must keep their relative order (it is the
    # order of the code in __sinit).
    attached = {}  # named object -> [its registration record]
    locked = []    # named objects in the order of the ORIGINAL __sinit
    after = []     # (a, b): b must be defined after a (a constant that __sinit reads is not known yet when the
    #                object initialised from it is defined; otherwise mwcc folds its value and emits no code)
    if is_main and ".init" in secs:
        for i, s in enumerate(o.sh):
            if o.secname[i] != ".init" or not s[5]:
                continue
            last = None
            for off, sname, addend, _ in sorted(o.relocs.get(i, [])):
                if sname in defs and sname in byname:
                    last = sname
                elif sname.startswith("@") and sname in byname and byname[sname]["kind"] == ".bss" and last:
                    attached.setdefault(last, []).append(sname)
        at_addr = {x["addr"]: x["name"] for x in objs if "addr" in x and x["name"] in defs}
        b0, b1 = secs.get(".bss", (0, 0))
        last = None
        pending = []
        for frm, tgt in sorted((f, v) for f, v in relocs.items() if secs[".init"][0] <= f < secs[".init"][1]):
            if tgt in at_addr:
                last = at_addr[tgt]
                if byname[last]["kind"] == ".rodata":
                    pending.append(last)
                    continue
                after += [(last, c) for c in pending]
                pending = []
                if last not in locked:
                    locked.append(last)
            elif b0 <= tgt < b1 and last and attached.get(last):
                # the record of `last`: the original says where it is
                byname[attached[last][0]].setdefault("addr", tgt)
        for kind in target:
            target[kind] = [x["name"] for x in sorted(
                [x for x in sorted_objs if x["kind"] == kind and "addr" in x], key=lambda x: x["addr"])]
        now = [n for n in sorted(locked, key=lambda n: defs[n][0])]
        if now != locked:
            print("note: the objects that __sinit initialises are defined in another order than the original "
                  "__sinit uses them: " + ", ".join(locked))
    is_attached = {n for lst in attached.values() for n in lst}
    fixed = []  # (source offset, number, name)
    for x in sorted_objs:
        if x["name"] in defs or x["name"] in is_attached:
            continue
        m = re.search(r"\$?(\d+)$", x["name"])
        if x["name"].startswith("_ZTV"):
            # vtables are created last, in reverse declaration order of their classes
            cm = re.match(r"_ZTV(\d+)(\w+)", x["name"])
            decl = -1
            if cm and is_main:
                cd = re.search(r"\b(?:class|struct)\s+" + re.escape(cm.group(2)[:int(cm.group(1))]) + r"\b[^;{]*\{", text)
                decl = cd.start() if cd else -1
            fixed.append((len(text) + 1, -decl, x["name"]))
            continue
        ref = x.get("refby")
        if ref is None:
            # find any function whose code references it
            for sec_i, lst in o.relocs.items():
                if sec_i in funcs and any(s == x["name"] for _, s, _, _ in lst):
                    ref = funcs[sec_i]
                    break
        pos = fpos.get(method_of(ref)) if ref else None
        if pos is None or not m:
            print(f"warning: cannot tell when {x['name']} is created (referenced by {ref})")
            pos = len(text)
        # within a function: constants (@N) first, then local statics, then their guards (checked on ov140)
        rank = 2 if x["name"].startswith("_ZGV") else 1 if "$" in x["name"] else 0
        fixed.append((pos, rank * 100000 + (int(m.group(1)) if m else 0), x["name"]))
    fixed.sort()
    anchors = sorted({p for p, _, _ in fixed})  # function positions that create objects

    def build(place):
        '''place: named -> gap index (0..len(anchors)); returns creation list'''
        seq = []
        gi = 0
        # named objects at their gap, keeping current relative order inside a gap
        for g in range(len(anchors) + 1):
            for nm in (order_in[g] if g < len(order_in) else []):
                seq += attached.get(nm, []) + [nm]
            if g < len(anchors):
                seq += [nm for p, _, nm in fixed if p == anchors[g]]
        return seq

    def score(seq):
        out = emitted(seq, size)
        s = 0
        if locked:
            at = [seq.index(n) for n in locked if n in seq]
            s -= 10 * sum(1 for i in range(len(at)) for j in range(i + 1, len(at)) if at[i] > at[j])
            s -= 10 * sum(1 for a, b in after if a in seq and b in seq and seq.index(a) > seq.index(b))
        for kind, tgt in target.items():
            got = [n for n in out if byname[n]["kind"] == kind and n in set(tgt)]
            s += sum(1 for a, b in zip(got, tgt) if a == b)
        return s
    full = sum(len(t) for t in target.values())

    def gap_of(n):
        a = defs[n][0]
        return sum(1 for p in anchors if p < a)
    order_in = [[] for _ in range(len(anchors) + 1)]
    for n in sorted(named, key=lambda n: defs[n][0]):
        order_in[gap_of(n)].append(n)
    cur = score(build(None))
    if "--debug" in sys.argv:
        print("creation:", build(None))
        print("emitted: ", emitted(build(None), size))
        print("target:  ", target)
        for p, k, nm in fixed:
            print(f"   fixed {nm} at {p} (#{k}) ref {byname[nm].get('refby')}")
    print(f"current layout: {cur}/{full} objects in place")
    if cur == full:
        print("data order already matches")
        return
    if not named:
        print("no file-scope data definition found to move (definitions must be top-level statements, not inside "
              "an extern \"C\" { } block)")
        return
    rnd = random.Random(seed)
    # nothing can be created after the vtable (it is created last): drop that slot
    slots = len(anchors) if anchors and anchors[-1] > len(text) else len(anchors) + 1
    if slots < len(order_in):
        order_in[slots - 1] += order_in[slots]
        order_in = order_in[:slots]
    best = (cur, [g[:] for g in order_in])
    for restart in range(300):
        if restart:
            order_in = [[] for _ in range(slots)]
            for n in rnd.sample(named, len(named)):
                order_in[rnd.randrange(slots)].append(n)
        s = score(build(None))
        improved = True
        while improved and s < full:
            improved = False
            for n in named:
                g0 = next(i for i, g in enumerate(order_in) if n in g)
                i0 = order_in[g0].index(n)
                for g in range(slots):
                    for i in range(len(order_in[g]) + 1):
                        if g == g0 and i in (i0, i0 + 1):
                            continue
                        trial = [x[:] for x in order_in]
                        trial[g0].remove(n)
                        trial[g].insert(i if not (g == g0 and i > i0) else i - 1, n)
                        saved = order_in
                        order_in = trial
                        t = score(build(None))
                        if t > s:
                            s, improved = t, True
                            break
                        order_in = saved
                    if improved:
                        break
                if improved:
                    break
        if s > best[0]:
            best = (s, [g[:] for g in order_in])
            print(f"  {s}/{full}")
        if s == full:
            break
    import math

    def anneal(start, steps, label):
        '''simulated annealing over placements: random single moves, occasionally downhill'''
        nonlocal order_in
        order_in = [g[:] for g in start]
        s = score(build(None))
        top = (s, [g[:] for g in order_in])
        temp = 2.0
        for step in range(steps):
            n = rnd.choice(named)
            trial = [g[:] for g in order_in]
            g0 = next(i for i, g in enumerate(trial) if n in g)
            trial[g0].remove(n)
            g = rnd.randrange(slots)
            trial[g].insert(rnd.randrange(len(trial[g]) + 1), n)
            saved = order_in
            order_in = trial
            t = score(build(None))
            if t >= s or rnd.random() < math.exp((t - s) / temp):
                s = t
                if s > top[0]:
                    top = (s, [g[:] for g in order_in])
                    if s == full:
                        break
            else:
                order_in = saved
            temp = max(0.05, temp * 0.9999)
        if top[0] > best[0]:
            print(f"  {top[0]}/{full} ({label})")
        return top

    if best[0] < full:
        t = anneal(best[1], 60000, "annealing")
        if t[0] > best[0]:
            best = t
    phantom = None
    if best[0] < full and "--phantom" in sys.argv:
        # the original may have had an object the linker dead-stripped: try one unreferenced padding object of
        # each size at any creation position (it joins the sort but is not in the target order)
        byname["ORDER_PAD"] = {"kind": ".bss"}
        named.append("ORDER_PAD")
        for sz in range(4, 0x84, 4):
            size["ORDER_PAD"] = sz
            for attempt in range(3):
                start = [g[:] for g in best[1]]
                start[rnd.randrange(slots)].append("ORDER_PAD")
                t = anneal(start, 20000, f"padding object of {sz:#x} bytes")
                if t[0] == full:
                    best, phantom = t, sz
                    break
            if phantom:
                break
        if not phantom:
            named.remove("ORDER_PAD")
            best = (best[0], [[n for n in g if n != "ORDER_PAD"] for g in best[1]])
    s, order_in = best
    print(f"best: {s}/{full}")
    anchor_fn = {}
    for p in anchors:
        nm = next(nm for q, _, nm in fixed if q == p)
        anchor_fn[p] = "the function using " + nm
        if byname[nm].get("refby"):
            anchor_fn[p] = byname[nm]["refby"]
    for g in range(slots):
        if order_in[g]:
            where = f"before  {anchor_fn[anchors[g]]}" if g < len(anchors) else "after the last function that creates data"
            print(f"  define {', '.join(order_in[g])}  {where}")
    if phantom:
        print(f"  (ORDER_PAD is an unreferenced {phantom:#x}-byte padding object; the linker strips it)")
    if apply and s == full:
        pad = None
        if phantom:
            pad = (f"// Unreferenced: stands in for an object the original linker dead-stripped (it takes part in\n"
                   f"// mwcc's data ordering)\nextern \"C\" u32 {ov}_order_pad[{phantom // 4}] = {{0}};")
        apply_placement(src, text, defs, anchors, order_in, pad)


def apply_placement(src, text, defs, anchors, order_in, pad=None):
    moved = [n for g in order_in for n in g if n != "ORDER_PAD"]
    pieces = {n: text[defs[n][0]:defs[n][1]].strip("\n") for n in moved}
    if pad:
        pieces["ORDER_PAD"] = pad
    # remove definitions (from the end so offsets stay valid), then insert at anchors (from the end)
    cuts = sorted((defs[n] for n in moved), reverse=True)
    t = text
    shift = []
    for a, b in cuts:
        t = t[:a] + t[b:]
        shift.append((a, b - a))

    def newpos(p):
        return p - sum(ln for a, ln in shift if a < p)
    inserts = []
    for g, names in enumerate(order_in):
        if not names:
            continue
        pos = newpos(anchors[g]) if g < len(anchors) and anchors[g] <= len(text) else None
        inserts.append((pos, "\n\n".join(pieces[n] for n in names)))
    for pos, block in sorted(inserts, key=lambda x: -1 if x[0] is None else x[0], reverse=True):
        if pos is None:
            t = t.rstrip("\n") + "\n\n" + block + "\n"
        else:
            t = t[:pos] + "\n" + block + "\n\n" + t[pos:].lstrip("\n")
    # extern declarations for every moved object, placed before the first function
    decl = []
    for n in moved:
        d = strip_comments(pieces[n]).split("=")[0].strip().rstrip(";")
        d = d if d.startswith("extern") else "extern " + d
        decl.append(d + ";")
    first_fn = min([newpos(a) for a in anchors] or [len(t)])
    # put declarations before the first definition chunk that is a function or a moved object
    # (a definition without an initialiser is also a substring of its own extern declaration: match whole lines)
    found = [re.search(r"^" + re.escape(pieces[n]), t, re.M) for n in moved]
    head_end = min([first_fn] + [m.start() for m in found if m])
    t = t[:head_end] + "// Declarations for data defined further down (definition order sets the data layout)\n" + \
        "\n".join(decl) + "\n\n" + t[head_end:]
    Path(src).write_text(re.sub(r"\n{3,}", "\n\n", t))
    print(f"applied: moved {len(moved)} definitions")


# ---------------------------------------------------------------- check
def cmd_check(objpath, ov):
    '''check a compiled unit's code layout against the original overlay without linking'''
    o = Obj(objpath)
    syms = load_symbols()
    secs = overlay_sections(ov)
    t0, t1 = secs[".text"]
    problems = 0
    # text sections in object order are laid out in that order by the linker
    funcs = []
    for i, s in enumerate(o.sh):
        if o.secname[i] == ".text" and s[5]:
            names = [y[0] for y in o.syms if y[5] == i and y[3] == 2 and not y[0].startswith("$")]
            funcs.append((names[0] if names else f"sec{i}", s[5]))
    pos = t0
    for name, size in funcs:
        want = syms.get(name)
        if want is None or want[0] != ov:
            if re.search(r"(C2|D2)Ev$", name):
                continue  # dead-stripped like the original
            print(f"EXTRA   {name} ({size:#x} bytes) is not in {ov}'s symbols.txt; it will be linked unless unused")
            problems += 1
            continue
        if want[1] != pos:
            print(f"ORDER   {name} would link at {pos:#010x}, original {want[1]:#010x}")
            problems += 1
            pos = want[1]
        pos = (pos + size + 3) & ~3
    if pos != t1 and (pos + 0x1f) & ~0x1f != (t1 + 0x1f) & ~0x1f:
        print(f"SIZE    code ends at {pos:#010x}, original .text ends at {t1:#010x}")
        problems += 1
    # every function's bytes must equal the original's (relocated words and branch fields masked)
    orig = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
    base = t0
    bytes_bad = 0
    for i, s in enumerate(o.sh):
        if o.secname[i] != ".text" or not s[5]:
            continue
        names = [y[0] for y in o.syms if y[5] == i and y[3] == 2 and not y[0].startswith("$")]
        if not names or names[0] not in syms or syms[names[0]][0] != ov:
            continue
        addr = syms[names[0]][1]
        mine = o.section_bytes(i)
        theirs = orig[addr - base:addr - base + len(mine)]
        masked = set()
        for off, _, _, rtype in o.relocs.get(i, []):
            masked.update(range(off, off + 4))
        diff = [k for k in range(len(mine)) if k not in masked and k < len(theirs) and mine[k] != theirs[k]]
        if diff:
            print(f"BYTES   {names[0]} differs from the original at +{diff[0]:#x} ({len(diff)} bytes)")
            bytes_bad += 1
    problems += bytes_bad
    # predicted final address of every object section (the linker lays each kind out in object order)
    layout = {}
    for kind in (".rodata", ".data", ".bss", ".init"):
        if kind not in secs:
            continue
        pos = secs[kind][0]
        for i, s in enumerate(o.sh):
            if o.secname[i] == kind and s[5]:
                align = max(s[8], 4)  # mwld aligns every section to at least 4
                pos = (pos + align - 1) // align * align
                layout[i] = pos
                pos += s[5]
    local = {}
    for name, value, size, typ, bind, shndx in o.syms:
        if shndx in layout and name:
            local.setdefault(name, layout[shndx] + value)

    def target_addr(sname):
        if sname in local:
            return local[sname]
        return syms[sname][1] if sname in syms else None

    # the static initialiser (.init): bytes and every literal-pool target must equal the original's
    if ".init" in secs:
        i0 = secs[".init"][0]
        irel = overlay_relocs(ov)
        for i, s in enumerate(o.sh):
            if o.secname[i] != ".init" or not s[5]:
                continue
            mine = o.section_bytes(i)
            theirs = orig[i0 - base:i0 - base + len(mine)]
            rel = o.relocs.get(i, [])
            masked = set()
            for off, _, _, _ in rel:
                masked.update(range(off, off + 4))
            if any(k not in masked and mine[k] != theirs[k] for k in range(min(len(mine), len(theirs)))):
                print("BYTES   .init differs from the original")
                problems += 1
            for off, sname, addend, rtype in rel:
                want = irel.get(i0 + off)
                have = target_addr(sname)
                if want is None or have is None or rtype in (10, 28, 30):
                    continue
                if ((have + addend) & ~1) != (want & ~1):
                    print(f"TARGET  .init+{off:#x} uses {sname}+{addend:#x} (would link at {have + addend:#010x}); the original uses {want:#010x}")
                    problems += 1
    # every relocation in the code must point where the original's does (right symbol name, not just a name)
    relocs = overlay_relocs(ov)
    local = {}  # symbols defined in this object: name -> original address (via symbols.txt)
    wrong = 0
    fsec = o.functions()
    for sec_i, lst in o.relocs.items():
        fname = fsec.get(sec_i)
        if not fname or fname not in syms or syms[fname][0] != ov:
            continue
        faddr = syms[fname][1]
        for off, sname, addend, rtype in lst:
            want = relocs.get(faddr + off)
            have = target_addr(sname)
            if have is not None and sname not in local and syms[sname][0] == ABS_MODULE:
                # an absolute symbol: right when the original word is that number and has no relocation
                word, = struct.unpack_from("<I", orig, faddr + off - base)
                if rtype != 2 or want is not None or (have + addend) & 0xffffffff != word:
                    print(f"TARGET  {fname}+{off:#x} uses the absolute symbol {sname}{'+%#x' % addend if addend else ''}"
                          f" ({(have + addend) & 0xffffffff:#010x}); the original "
                          + (f"has a relocation to {want:#010x} there" if want is not None else
                             f"word is {word:#010x}" if rtype == 2 else "has a call there"))
                    wrong += 1
                continue
            if want is None or have is None:
                continue
            got = have + (addend if rtype == 2 else 0)
            if rtype in (10, 28, 30):  # thumb/arm calls: compare the function address
                got = have
            if (got & ~1) != (want & ~1):
                print(f"TARGET  {fname}+{off:#x} uses {sname} ({got:#010x}); the original uses {want:#010x} "
                      f"{' '.join(n for n, (m, a) in syms_by_addr(syms, want & ~1))}")
                wrong += 1
    missing = cmd_undef(objpath)
    # the overlay's own symbols are only defined by this object once it is linked
    own = {y[0] for y in o.syms if y[5] != 0}
    for name in sorted({y[0] for y in o.syms if y[5] == 0 and y[0]} - own):
        if syms.get(name, ("", 0))[0] == ov:
            print(f"MISSING {name} belongs to {ov} but this object does not define it (define it in the file)")
            missing += 1
    print(f"{problems} layout problems, {wrong} wrong targets, {missing} unresolved symbols")
    return problems + missing + wrong


_BY_ADDR = None


def syms_by_addr(syms, addr):
    global _BY_ADDR
    if _BY_ADDR is None:
        _BY_ADDR = {}
        for n, (m, a) in syms.items():
            _BY_ADDR.setdefault(a, []).append((n, (m, a)))
    return _BY_ADDR.get(addr, [])[:3]


# ---------------------------------------------------------------- compile
def cmd_compile(src, out):
    '''compile one file exactly as the build does (build.ninja's mwcc rule plus per-file overrides)'''
    ninja = Path("build.ninja").read_text()
    m = re.search(r"^rule mwcc\n  command = (.*?)\n  depfile", ninja, re.M | re.S)
    cmd = m.group(1).replace("$\n      ", "").split(" && ")[0]
    version = None
    extra = []
    for line in Path(src).read_text(errors="replace").splitlines()[:10]:
        mv = re.match(r"\s*//\s*mwcc-version:\s*(\S+)", line)
        mf = re.match(r"\s*//\s*mwcc-flags:\s*(.+?)\s*$", line)
        if mv and version is None:  # the first line of each kind counts, as in tools/configure.py
            version = mv.group(1)
        if mf and not extra:
            extra = mf.group(1).split()
    cc = f"./tools/mwccarm/{version or '1.2/base'}/mwccarm.exe"
    # tools/configure.py (add_mwcc_builds): -lang by extension, then the file's own flags (later flags win, so
    # `// mwcc-flags: -nothumb` gives ARM code although the common flags say -thumb)
    lang = {".cpp": ["-lang=c++"], ".c": ["-lang=c"]}.get(Path(src).suffix, [])
    cmd = cmd.replace('"$cc"', f'"{cc}"').replace("$cc_flags", " ".join(lang + extra))
    cmd = cmd.replace("$game_version", "usa").replace("-MD ", "").replace("$in", f'"{src}"')
    cmd = re.sub(r"-o \$basedir\S*", f'-o "{out}"', cmd)
    r = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    sys.stdout.write(r.stdout + r.stderr)
    return r.returncode


# ---------------------------------------------------------------- diff
def cmd_diff(ov):
    n = int(ov[2:])
    orig = Path(f"extract/usa/arm9_overlays/{ov}.bin").read_bytes()
    built = Path(f"build/usa/build/arm9_ov{n:03d}.bin").read_bytes()
    base = overlay_sections(ov)[".text"][0]
    print(f"orig {len(orig):#x} built {len(built):#x}")
    diffs = [i for i in range(0, min(len(orig), len(built)), 4) if orig[i:i + 4] != built[i:i + 4]]
    print(f"{len(diffs)} differing words")
    syms = sorted((a, nm) for nm, (mod, a) in load_symbols().items() if mod == ov)
    runs = []
    for d in diffs:
        if runs and d - runs[-1][1] <= 8:
            runs[-1][1] = d
        else:
            runs.append([d, d])
    for a, b in runs[:30]:
        owner = [nm for s, nm in syms if s <= base + a][-1:] or ["?"]
        print(f"  {base + a:#010x}-{base + b + 4:#010x}  in {owner[0]}")
    return len(diffs)


def main_module(module="main"):
    '''tools/pipeline/mainprep.py: the variants of check, diff and dump for main, autoload_2 and itcm'''
    sys.dont_write_bytecode = True
    sys.path.insert(0, str(Path(__file__).parent))
    import mainprep
    mainprep.set_module(module)
    return mainprep


if __name__ == "__main__":
    a = sys.argv[1:]
    if not a:
        sys.exit(__doc__)
    me = sys.modules[__name__]
    if a[0] in ("reverse", "undef", "check", "data") and len(a) > 1:
        load_renames(a[2] if a[0] == "data" else a[1])
    if a[0] == "dump" and len(a) > 2 and a[1] in UNIT_MODULES:
        load_renames(a[2])
        main_module(a[1]).cmd_dump(me, a[2])
    elif a[0] == "reverse":
        cmd_reverse(a[1], a[2] if len(a) > 2 else None)
    elif a[0] == "check" and len(a) > 3 and a[2] in UNIT_MODULES:
        sys.exit(1 if main_module(a[2]).cmd_check(me, a[1], a[3]) else 0)
    elif a[0] == "check" and len(a) > 2 and a[2] in UNIT_MODULES:
        sys.exit(f"usage: linkprep.py check <obj.o> {a[2]} <spec.txt | unit>")
    elif a[0] == "check":
        sys.exit(1 if cmd_check(a[1], a[2]) else 0)
    elif a[0] == "undef":
        sys.exit(1 if cmd_undef(a[1]) else 0)
    elif a[0] == "data":
        seed = int(a[a.index("--seed") + 1]) if "--seed" in a else 1
        cmd_data(a[1], a[2], a[3], "--apply" in a, seed, a[4] if a[3] in UNIT_MODULES and len(a) > 4 else None)
    elif a[0] == "compile":
        sys.exit(cmd_compile(a[1], a[2]))
    elif a[0] == "diff" and a[1] in UNIT_MODULES:
        sys.exit(1 if main_module(a[1]).cmd_diff(me) else 0)
    elif a[0] == "diff":
        sys.exit(1 if cmd_diff(a[1]) else 0)
    else:
        sys.exit(__doc__)

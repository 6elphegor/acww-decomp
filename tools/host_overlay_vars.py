#!/usr/bin/env python3
"""The overlays' variables, for resetting them when an overlay is loaded (host build; docs/host.md, "Overlays").

On the DS, loading an overlay reads a fresh copy of its data from the ROM, clears its bss and runs its static
initialisers. The host has every overlay linked in; modern/host/overlay.c resets an overlay's variables from a copy
taken at start-up and runs its units' explicit initialisers. This writes what it needs, as plain C (no linker script,
no section ranges):

  * at the end of every overlay unit (src/ovNNN/*.cpp), the list of the variables it defines
    (HOST_OVERLAY_VARS(<unit>) { HOST_OVERLAY_VAR(x), ... }, include/host_overlay_vars.h), replacing the previous list;
  * modern/gen/overlay_table.c: per overlay, its units' lists and their StaticInit_<unit> functions (the initialisers
    the compiler can't make constant data, written in the unit), in link order.

The variables are the data and bss symbols the units' objects define (nm), in both host builds (build/host_usa and
build/host64_usa, which must be up to date); their names are qualified by libclang where a unit defines them inside
a namespace. A function-local static or a static initialiser the compiler still emits (.init_array) in an overlay
object is reported: a function-local static can't be named from outside its function (move it out, with an explicit
guard if it is initialised at run time), and a static initialiser would run only once, at start-up, instead of at
every load (make the object constant-initialised or initialise it in StaticInit_<unit>). Default constructors that
only set their object's members may stay (their objects are constructed again by StaticInit_<unit>): the allowed
units are listed in ALLOWED_CTORS.

Run it after adding, removing or renaming a variable in an overlay unit; --check only reports (exit 1 if anything is
out of date).

usage: host_overlay_vars.py [--check] [--builds build/host_usa build/host64_usa]
"""
import argparse
import os
import re
import subprocess
import sys
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TABLE = Path("modern/gen/overlay_table.c")
MARK = "// ---- overlay variables (generated: tools/host_overlay_vars.py) ----"
# units whose objects keep a static initialiser: default constructors of objects that StaticInit_<unit> constructs
# again (they only set their objects' members), destructor registrations (the game's atexit does nothing)
ALLOWED_CTORS = {
    "ov003/unk_ov003_022187fc", "ov003/unk_ov003_022192b4", "ov003/unk_ov003_0221ffb8", "ov003/unk_ov003_02225800",
    "ov004/unk_ov004_02228700", "ov004/unk_ov004_0222bed0", "ov004/unk_ov004_02233074", "ov004/unk_ov004_02237440",
    "ov009/unk_ov009_0225b880", "ov004/unk_ov004_0223db88", "ov004/unk_ov004_0223f43c",
    # function-local statics moved out of their functions, initialised at their first use (explicit guard): objects
    # whose class has a default constructor
    "ov004/unk_ov004_02204f24", "ov004/unk_ov004_0222a500", "ov004/unk_ov004_0223e9bc", "ov068/unk_ov068_02266b44",
    "ov120/unk_ov120_02292d00", "ov129/unk_022940e0", "ov139/unk_ov139_02291f60", "ov146/unk_ov146_02291f60",
}

LIBCLANG = '/usr/lib/llvm-21/lib/libclang-21.so.1'
CXX_ARGS = ['-x', 'c++', '-std=gnu++14', '-fno-exceptions', '-fno-rtti', '-m64', '-ffreestanding', '-nostdinc',
            '-fsigned-char', '-fshort-wchar', '-DMODERN', '-DHOST', '-DGAME_VERSION_USA', '-Iinclude', '-include',
            'include/host_libc_rename.h', '-Wno-everything', '-ferror-limit=0']


def nm_vars(obj):
    """(global data/bss names in symbol-table order, local data/bss names): the writable ones. Constant data with
    relocations (tables of pointers, vtables, the HOST_OVERLAY_VARS lists themselves) is in .data.rel.ro* in a
    position-independent object (the x86-64 build since step 3.3), which nm calls data ('d'/'D') too: it is read-only
    once relocated, as .rodata, so it needs no reset and isn't listed."""
    out = subprocess.run(["objdump", "-t", obj], capture_output=True, text=True, check=True).stdout
    glob, loc = [], []
    for line in out.splitlines():
        # address, 7 flag characters (binding first, 'O' for an object last), section, size, name
        m = re.match(r"^[0-9a-f]+ (.{7}) (\S+)\s+[0-9a-f]+\s+(\S+)$", line)
        if not m or m.group(1)[6] != "O":
            continue
        flags, sect, name = m.groups()
        if sect == "*COM*":
            writable = True
        elif sect.startswith(".data.rel.ro"):
            writable = False
        else:
            writable = re.match(r"\.(data|bss)(\.|$)", sect) is not None
        if not writable:
            continue
        if flags[0] in "gu" or sect == "*COM*":
            glob.append(name)
        elif flags[0] == "l":
            loc.append(name)
    return glob, loc


def has_init_array(obj):
    out = subprocess.run(["readelf", "-SW", obj], capture_output=True, text=True, check=True).stdout
    return re.search(r"\]\s+\.init_array\b", out) is not None


def qualified_names(src):
    """name -> (qualified name, offset of the definition) for the variables a unit defines at namespace scope"""
    import clang.cindex as ci
    if not ci.Config.loaded:
        ci.Config.set_library_file(LIBCLANG)
    tu = ci.Index.create().parse(src, args=CXX_ARGS)
    out = {}

    def walk(n, ns):
        for c in n.get_children():
            if c.location.file is None or c.location.file.name != src:
                if c.kind not in (ci.CursorKind.NAMESPACE, ci.CursorKind.LINKAGE_SPEC, ci.CursorKind.UNEXPOSED_DECL):
                    continue
            if c.kind == ci.CursorKind.VAR_DECL and c.is_definition():
                out.setdefault(c.spelling, ("::".join(ns + [c.spelling]), c.extent.start.offset))
            elif c.kind == ci.CursorKind.NAMESPACE:
                walk(c, ns + [c.spelling])
            elif c.kind in (ci.CursorKind.LINKAGE_SPEC, ci.CursorKind.UNEXPOSED_DECL):
                walk(c, ns)
    walk(tu.cursor, [])
    return src, out


def unit_name(src):
    return Path(src).stem


def block(src, names):
    lines = [MARK, '#include "host_overlay_vars.h"', "", f"HOST_OVERLAY_VARS({unit_name(src)}) {{"]
    lines += [f"    HOST_OVERLAY_VAR({n})," for n in names]
    lines += ["    HOST_OVERLAY_VARS_END", "};", ""]
    return "\n".join(lines)


def strip_block(text):
    i = text.find("\n" + MARK)
    return text if i < 0 else text[:i].rstrip("\n") + "\n"


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--check", action="store_true")
    ap.add_argument("--builds", nargs="+", default=["build/host_usa", "build/host64_usa"])
    args = ap.parse_args()
    os.chdir(ROOT)
    sources = sorted(str(p) for p in Path("src").glob("ov[0-9][0-9][0-9]/*.cpp"))
    problems = []
    unit_vars = {}
    for src in sources:
        rel = src[len("src/"):-len(".cpp")]
        order, seen = [], set()
        for b in args.builds:
            obj = f"{b}/src/{rel}.o"
            g, loc = nm_vars(obj)
            for n in g:
                if n not in seen:
                    seen.add(n)
                    order.append(n)
            for n in loc:
                problems.append(f"{src}: function-local or file-local static {n} ({b}): can't be reset")
            if has_init_array(obj) and rel not in ALLOWED_CTORS:
                problems.append(f"{src}: static initialiser in {obj} (runs at start-up, not at the overlay's load)")
        unit_vars[src] = order
    with Pool() as pool:
        quals = dict(pool.map(qualified_names, [s for s in sources if unit_vars[s]]))
    changed = []
    table_units = []
    for src in sources:
        names = unit_vars[src]
        q = quals.get(src, {})
        # definition order where libclang knows the definition, else the symbol table's
        names = sorted(names, key=lambda n: (q[n][1] if n in q else 1 << 40, names.index(n)))
        qnames = [q[n][0] if n in q else n for n in names]
        text = open(src).read()
        base = strip_block(text)
        new = base.rstrip("\n") + "\n\n" + block(src, qnames) if names else base
        if not new.endswith("\n"):
            new += "\n"
        if new != text:
            changed.append(src)
            if not args.check:
                open(src, "w").write(new)
        init = re.search(r"\bvoid\s+StaticInit_%s\s*\(\s*(void)?\s*\)\s*\{" % re.escape(unit_name(src)), base)
        if names or init:
            ov = int(re.match(r"src/ov(\d{3})/", src).group(1))
            table_units.append((ov, unit_name(src), bool(names), bool(init)))
    c = ["// generated by tools/host_overlay_vars.py: each overlay's units, their variables (reset when the overlay is",
         "// loaded) and their explicit static initialisers, in link order (modern/host/overlay.c)",
         '#include "overlay.h"', ""]
    for ov, u, v, i in table_units:
        if v:
            c.append(f"extern const HostOverlayVar gHostOvVars_{u}[];")
        if i:
            c.append(f"void StaticInit_{u}(void);")
    c += ["", "const HostOverlayUnit gHostOverlayUnits[] = {"]
    for ov, u, v, i in table_units:
        c.append(f"    {{{ov}, {'gHostOvVars_' + u if v else '0'}, {'StaticInit_' + u if i else '0'}}},")
    c += ["};", f"const unsigned gHostOverlayUnitCount = {len(table_units)};", ""]
    table = "\n".join(c)
    if not TABLE.exists() or TABLE.read_text() != table:
        changed.append(str(TABLE))
        if not args.check:
            TABLE.write_text(table)
    for p in problems:
        print("host_overlay_vars.py:", p)
    nvars = sum(len(v) for v in unit_vars.values())
    ninit = sum(1 for t in table_units if t[3])
    print(f"host_overlay_vars.py: {len(table_units)} units, {nvars} variables, {ninit} StaticInit functions; "
          f"{len(changed)} files {'out of date' if args.check else 'written'}")
    if args.check and (changed or problems):
        sys.exit(1)


if __name__ == "__main__":
    main()

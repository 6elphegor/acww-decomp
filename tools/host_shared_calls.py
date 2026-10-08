#!/usr/bin/env python3
"""Calls to addresses that several overlays share, as typed C dispatchers (host build; docs/host.md).

The original holds fixed addresses inside overlays (main's player action tables, callbacks, mode tables): several
overlays are loaded at the same address, and the address means the function of whichever is loaded. The decompiled
code names it after one of them. The host has every overlay linked in, so a reference from outside the named
function's overlay goes to a dispatcher instead, Shared_<name>: it asks Modern_SharedResolve (modern/ds/overlays.c)
for the candidate whose overlay is loaded (the named one first, and the named one when none is) and calls it with
the arguments it got. The dispatchers take and return pointers as void * and integers as they are (the candidates'
own types differ), and as many arguments as their callers pass (main's player actions call ov003's functions with
the arguments of the ov004 functions at the same addresses).

This writes, from config/<v>/arm9 (the overlays' symbols.txt) and the objects of both host builds (build/host_usa,
build/host64_usa: up to date):
  * include/host_shared_calls.h: the dispatchers' prototypes;
  * modern/gen/shared_calls.c: the dispatchers;
  * modern/gen/shared_table.c: per dispatcher its candidates (overlay id, address) - the functions at the same
    address that the build defines, named by their symbols (plain C, no prototypes needed);
and with --rename, renames the references (calls and addresses taken) in the units outside the named function's
overlay to the dispatcher (libclang), adding the include. A reference that --rename doesn't find (one in a header's
inline function) is listed: rename it by hand.

Only C functions get a dispatcher. A member function (and a constructor or destructor) is called on an object of its
class, whose code is in the function's overlay, which therefore is loaded: such a call can only mean the named
function, and stays a direct call (listed with --report). References at shared addresses to data are listed with
--report too.

usage: host_shared_calls.py [--rename] [--report] [--check]
"""
import argparse
import collections
import os
import re
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
HEADER = Path("include/host_shared_calls.h")
CALLS = Path("modern/gen/shared_calls.c")
TABLE = Path("modern/gen/shared_table.c")
BUILDS = ["build/host_usa", "build/host64_usa"]
LIBCLANG = '/usr/lib/llvm-21/lib/libclang-21.so.1'
COMMON = ['-m64', '-ffreestanding', '-nostdinc', '-fsigned-char', '-fshort-wchar', '-DMODERN', '-DHOST',
          '-DGAME_VERSION_USA', '-Iinclude', '-include', 'include/host_libc_rename.h', '-Wno-everything',
          '-ferror-limit=0']
C_ARGS = ['-x', 'c', '-std=gnu11'] + COMMON
CXX_ARGS = ['-x', 'c++', '-std=gnu++14', '-fno-exceptions', '-fno-rtti'] + COMMON


def ci_module():
    import clang.cindex as ci
    if not ci.Config.loaded:
        ci.Config.set_library_file(LIBCLANG)
    return ci


def module_of(path):
    m = re.search(r"src/(ov\d+)/", path)
    return m.group(1) if m else "static"


def source_of(obj, build):
    rel = obj[len(build) + 1:-2]
    for ext in (".cpp", ".c"):
        if os.path.exists(rel + ext):
            return rel + ext
    return None


def analyse(config):
    by_addr = collections.defaultdict(list)
    owner = {}
    for f in sorted((config / "overlays").glob("*/symbols.txt")):
        ov = f.parent.name
        for line in f.read_text().splitlines():
            m = re.match(r"(\S+) kind:(\w+)\S* addr:0x([0-9a-f]+)", line)
            if m:
                a = int(m.group(3), 16)
                by_addr[a].append((ov, m.group(1), m.group(2)))
                owner.setdefault(m.group(1), (ov, a, m.group(2)))
    defined_by = collections.defaultdict(set)  # build -> names it defines
    defined_in = {}
    refs = collections.defaultdict(set)  # name -> referencing sources (a reference to Shared_<name> counts)
    direct = collections.defaultdict(set)  # name -> sources referencing the name itself
    for b in BUILDS:
        objs = [l.strip() for l in open(f"{b}/game_objects.txt") if l.strip() and "/src/" in l]
        out = subprocess.run(["nm", "-A", *objs], capture_output=True, text=True, check=True).stdout
        for line in out.splitlines():
            obj, _, rest = line.partition(":")
            p = rest.split()
            if len(p) == 2 and p[0] == "U":
                src = source_of(obj, b)
                if src:
                    n = p[1][len("Shared_"):] if p[1].startswith("Shared_") else p[1]
                    refs[n].add(src)
                    if n == p[1]:
                        direct[n].add(src)
            elif len(p) == 3 and p[1] in "TtWw":
                defined_by[b].add(p[2])
                if p[1] in "TW":
                    defined_in.setdefault(p[2], source_of(obj, b))
    # (a candidate must be defined in both builds: thunks' names differ, _ZThn236_ / _ZThn328_)
    defined = set.intersection(*defined_by.values())
    calls, members, data = {}, {}, collections.defaultdict(set)
    for name, srcs in sorted(refs.items()):
        if name not in owner:
            continue
        ov, a, kind = owner[name]
        others = [(o, n, k) for o, n, k in by_addr[a] if o != ov]
        callers = sorted(s for s in srcs if module_of(s) != ov)
        if not others or not callers:
            continue
        if kind != "function":
            for s in callers:
                data[name].add(s)
            continue
        cands = [(int(o[2:]), n) for o, n, k in others if k == "function" and n in defined]
        if not cands:
            continue  # nothing else is defined at that address: the named function is the only one
        rec = (int(ov[2:]), cands, callers, defined_in.get(name),
               sorted(s for s in direct[name] if module_of(s) != ov))
        (members if name.startswith("_Z") else calls)[name] = rec
    return calls, members, data, owner, by_addr


def canonical(t):
    """a parameter or result type as the dispatcher passes it on: pointers as void *, integers as themselves"""
    ci = ci_module()
    t = t.get_canonical()
    if t.kind in (ci.TypeKind.POINTER, ci.TypeKind.CONSTANTARRAY, ci.TypeKind.INCOMPLETEARRAY,
                  ci.TypeKind.FUNCTIONPROTO, ci.TypeKind.FUNCTIONNOPROTO, ci.TypeKind.LVALUEREFERENCE,
                  ci.TypeKind.NULLPTR):
        return "void *"
    if t.kind in (ci.TypeKind.ENUM, ci.TypeKind.BOOL):
        return "int"
    if t.kind in (ci.TypeKind.VOID, ci.TypeKind.CHAR_S, ci.TypeKind.SCHAR, ci.TypeKind.UCHAR, ci.TypeKind.SHORT,
                  ci.TypeKind.USHORT, ci.TypeKind.INT, ci.TypeKind.UINT, ci.TypeKind.LONG, ci.TypeKind.ULONG,
                  ci.TypeKind.LONGLONG, ci.TypeKind.ULONGLONG):
        return {"char": "signed char"}.get(t.spelling, t.spelling)
    raise ValueError(t.spelling)


def definition_signature(name, src):
    """(result, [parameter types]) of the named function's definition, pointers as void *"""
    ci = ci_module()
    tu = ci.Index.create().parse(src, args=CXX_ARGS if src.endswith(".cpp") else C_ARGS)

    def walk(node):
        for c in node.get_children():
            if c.kind == ci.CursorKind.FUNCTION_DECL and c.spelling == name and c.is_definition():
                return c
            if c.kind in (ci.CursorKind.NAMESPACE, ci.CursorKind.LINKAGE_SPEC, ci.CursorKind.UNEXPOSED_DECL):
                r = walk(c)
                if r is not None:
                    return r
        return None
    f = walk(tu.cursor)
    if f is None:
        return None
    if f.type.kind == ci.TypeKind.FUNCTIONPROTO and f.type.is_function_variadic():
        raise ValueError("variadic")
    return canonical(f.result_type), [canonical(a.type) for a in f.get_arguments()]


def caller_arguments(calls, names):
    """name -> [(source, [argument types])] of the calls to Shared_<name> in the callers (after --rename)"""
    ci = ci_module()
    index = ci.Index.create()
    by_src = collections.defaultdict(set)
    for n in names:
        for s in calls[n][2]:
            by_src[s].add(n)
    out = collections.defaultdict(list)
    with tempfile.NamedTemporaryFile("w", suffix=".h") as decl:
        # every dispatcher taking anything (the real header not included)
        decl.write("#define HOST_SHARED_CALLS_H\n#ifdef __cplusplus\nextern \"C\" {\n"
                   + "".join(f"int Shared_{n}(...);\n" for n in names) + "}\n#else\n"
                   + "".join(f"int Shared_{n}();\n" for n in names) + "#endif\n")
        decl.flush()
        for src in sorted(by_src):
            args = (CXX_ARGS if src.endswith(".cpp") else C_ARGS) + ["-include", decl.name]
            tu = index.parse(src, args=args)

            def walk(node):
                for c in node.get_children():
                    if c.kind == ci.CursorKind.CALL_EXPR and c.spelling.startswith("Shared_") and \
                            c.spelling[7:] in by_src[src]:
                        try:
                            out[c.spelling[7:]].append((src, [canonical(a.type) for a in c.get_arguments()]))
                        except ValueError as e:
                            out[c.spelling[7:]].append((src, ["?" + str(e)]))
                    walk(c)
            walk(tu.cursor)
    return out


def generate(calls, check):
    names = sorted(calls)
    problems, decls, body, table = [], [], [], []
    uses = caller_arguments(calls, names)
    for name in names:
        ov, cands, callers, src, _ = calls[name]
        try:
            sig = definition_signature(name, src) if src else None
        except ValueError as e:
            problems.append(f"{name}: {e}")
            continue
        if sig is None:
            problems.append(f"{name}: no definition found in {src}")
            continue
        ret, ptypes = sig
        # the calls may pass more arguments than the named function takes (another candidate may take them): the
        # dispatcher passes on as many as the callers give
        for s, a in uses.get(name, []):
            if any(t.startswith("?") for t in a):
                problems.append(f"{name}: a call in {s} passes {a}")
            elif len(a) > len(ptypes):
                ptypes = ptypes + a[len(ptypes):]
        plist = ", ".join(f"{t} a{i}" for i, t in enumerate(ptypes)) or "void"
        decls.append(f"{ret} Shared_{name}({plist});")
        cast = f"{ret} (*)({', '.join(ptypes) or 'void'})"
        call = f"(({cast})Modern_SharedResolve(&gSharedCall_{name}))({', '.join(f'a{i}' for i in range(len(ptypes)))})"
        body += [f"{ret} Shared_{name}({plist}) {{", f"    {'return ' if ret != 'void' else ''}{call};", "}", ""]
        table.append((name, ov, cands))
    hdr = ["// generated by tools/host_shared_calls.py: calls to addresses that several overlays share (docs/host.md).",
           "// The dispatchers take and return pointers as void * and integers as they are, and as many arguments as",
           "// their callers pass.",
           "#ifndef HOST_SHARED_CALLS_H", "#define HOST_SHARED_CALLS_H", "",
           "#ifdef __cplusplus", 'extern "C" {', "#endif", "",
           "// one dispatcher's candidates: the overlay and the address of each function at the shared address, the",
           "// named one first (modern/gen/shared_table.c)",
           "typedef struct HostSharedCandidate {", "    unsigned overlay;", "    const void *addr;",
           "} HostSharedCandidate;", "typedef struct HostSharedCall {", "    unsigned count;",
           "    const HostSharedCandidate *cands;", "} HostSharedCall;", "",
           "// the candidate whose overlay is loaded (the named one first; the named one when none is)",
           "void *Modern_SharedResolve(const HostSharedCall *call);", ""]
    hdr += decls
    hdr += ["", "#ifdef __cplusplus", "}", "#endif", "", "#endif", ""]
    calls_c = ["// generated by tools/host_shared_calls.py: the dispatchers (include/host_shared_calls.h)",
               '#include "host_shared_calls.h"', ""]
    calls_c += [f"extern const HostSharedCall gSharedCall_{n};" for n, _, _ in table] + [""] + body
    tab = ["// generated by tools/host_shared_calls.py: each dispatcher's candidates, by their symbols (the named",
           "// function first). The declarations are only for the addresses.", '#include "host_shared_calls.h"', ""]
    syms = sorted({n for n, _, _ in table} | {c for _, _, cs in table for _, c in cs})
    tab += [f"extern char {s}[];" for s in syms] + [""]
    for n, ov, cs in table:
        allc = [(ov, n)] + cs
        tab.append(f"static const HostSharedCandidate sCands_{n}[] = {{")
        tab += [f"    {{{o}, {c}}}," for o, c in allc]
        tab.append("};")
        tab.append(f"const HostSharedCall gSharedCall_{n} = {{{len(allc)}, sCands_{n}}};")
        tab.append("")
    changed = []
    for path, lines in ((HEADER, hdr), (CALLS, calls_c), (TABLE, tab)):
        text = "\n".join(lines)
        if not path.exists() or path.read_text() != text:
            changed.append(str(path))
            if not check:
                path.write_text(text)
    return problems, changed, [n for n, _, _ in table]


def rename(calls, names):
    """the references outside each named function's overlay: to Shared_<name>"""
    ci = ci_module()
    index = ci.Index.create()
    by_src = collections.defaultdict(set)
    for n in names:
        for s in calls[n][4]:
            by_src[s].add(n)
    total = 0
    for src, want in sorted(by_src.items()):
        tu = index.parse(src, args=CXX_ARGS if src.endswith(".cpp") else C_ARGS)
        text = open(src).read()
        offs = set()

        def walk(node):
            for c in node.get_children():
                if c.kind == ci.CursorKind.DECL_REF_EXPR and c.spelling in want and c.location.file is not None \
                        and c.location.file.name == src and c.referenced is not None and \
                        c.referenced.kind == ci.CursorKind.FUNCTION_DECL:
                    o = c.location.offset
                    if text[o:o + len(c.spelling)] == c.spelling:
                        offs.add((o, c.spelling))
                walk(c)
        walk(tu.cursor)
        missing = sorted(want - {n for _, n in offs})
        if missing:
            print(f"host_shared_calls.py: {src}: references to {missing} not found (a header? rename by hand)")
        for o, n in sorted(offs, reverse=True):
            q = re.search(r"(\b\w+\s*::\s*)$", text[max(0, o - 64):o])  # a namespace qualifier: the dispatcher is global
            a = o - len(q.group(1)) if q else o
            text = text[:a] + "Shared_" + n + text[o + len(n):]
        if offs and '#include "host_shared_calls.h"' not in text:
            m = re.search(r'^#include .*\n', text, re.M)
            text = text[:m.end()] + '#include "host_shared_calls.h"\n' + text[m.end():]
        open(src, "w").write(text)
        total += len(offs)
    print(f"host_shared_calls.py: {total} references renamed in {len(by_src)} units")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--config", default="config/usa/arm9", type=Path)
    ap.add_argument("--rename", action="store_true")
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()
    os.chdir(ROOT)
    calls, members, data, owner, by_addr = analyse(args.config)
    if args.rename:
        rename(calls, sorted(calls))
    problems, changed, names = generate(calls, args.check)
    for p in problems:
        print("host_shared_calls.py:", p)
    unrenamed = sorted((n, s) for n, rec in calls.items() for s in rec[4])
    for n, s in unrenamed:
        print(f"host_shared_calls.py: {s} still refers to {n} directly")
    print(f"host_shared_calls.py: {len(names)} dispatchers, {len(members)} member functions called directly, "
          f"{len(data)} data symbols referenced at shared addresses; "
          f"{len(changed)} files {'out of date' if args.check else 'written'}")
    if args.report:
        for n, (ov, cands, callers, src, _) in sorted(members.items()):
            print(f"member {n} (ov{ov:03d}): candidates {cands}; callers {callers}")
        for n, srcs in sorted(data.items()):
            ov, a, k = owner[n]
            others = [f"{o}:{x}" for o, x, kk in by_addr[a] if o != ov]
            print(f"data {n} ({ov} {a:#x} {k}; also {', '.join(others[:4])}): {sorted(srcs)}")
    if args.check and (changed or (unrenamed and not args.rename)):
        sys.exit(1)


if __name__ == "__main__":
    main()

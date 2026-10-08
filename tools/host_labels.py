#!/usr/bin/env python3
"""Labels inside variables as C (host build): what modern/gen/provides.ld's interior labels were.

symbols.txt names some addresses inside variables (gSavePlayers = gSaveData + 0xc, a member of a sound manager, an
entry of a table); the units use those names as variables of their own types. The host build took them from a
linker script (PROVIDE("x" = "base" + off), moved for 64-bit hosts by tools/host_relayout.py from the DWARF of both
builds). This turns them into C, once, for every host:

  * at the end of the unit that defines the base variable, a pointer per label to its place (HOST_LABEL_DEFINE in a
    generated block): a member path where the base has a type (the same member on every host, found in the 32-bit
    build's DWARF as host_relayout.py does), base + offset where it is bytes;
  * include/host_labels.h declares the pointers;
  * every declaration of a label in a unit or header becomes a macro naming the same type at that place
    (`extern u8 gSavePlayers[];` -> `#define gSavePlayers HOST_LABEL(u8 (*)[], gSavePlayers)`), libclang.

Needs both builds' game_all.o (build/host_usa, build/host64_usa) with the labels still provided (run once, before
modern/gen/provides.ld is dropped). usage: host_labels.py [--dry-run]
"""
import argparse
import collections
import os
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, os.path.dirname(__file__))
import host_relayout  # noqa: E402  (DWARF member paths)

ROOT = Path(__file__).resolve().parent.parent
LIBCLANG = '/usr/lib/llvm-21/lib/libclang-21.so.1'
COMMON = ['-m64', '-ffreestanding', '-nostdinc', '-fsigned-char', '-fshort-wchar', '-DMODERN', '-DHOST',
          '-DGAME_VERSION_USA', '-Iinclude', '-include', 'include/host_libc_rename.h', '-Wno-everything',
          '-ferror-limit=0']
C_ARGS = ['-x', 'c', '-std=gnu11'] + COMMON
CXX_ARGS = ['-x', 'c++', '-std=gnu++14', '-fno-exceptions', '-fno-rtti'] + COMMON
MARK = "// ---- labels inside this unit's variables (generated: tools/host_labels.py) ----"


def source_of(obj, build):
    rel = obj[len(build) + 1:-2]
    for ext in (".cpp", ".c"):
        if os.path.exists(rel + ext):
            return rel + ext
    return None


def labels_used():
    rx = re.compile(r'PROVIDE\("?([^"= ]+)"? *= *"?([A-Za-z_][\w$.]*)"? *\+ *(0x[0-9a-fA-F]+|\d+)\s*\);')
    labels = {}
    for line in open("modern/gen/provides.ld"):
        m = rx.match(line)
        if m:
            labels[m.group(1)] = (m.group(2), int(m.group(3), 0))
    used = set()
    users = collections.defaultdict(set)
    defined_in = {}
    for b in ("build/host_usa", "build/host64_usa"):
        objs = [l.strip() for l in open(f"{b}/objects.txt") if l.strip() and not l.strip().endswith("game_all.o")]
        objs += [l.strip() for l in open(f"{b}/game_objects.txt") if l.strip() and "/src/" in l]
        objs += sorted(str(p) for p in Path(b).glob("src/dtcm/*.o"))  # (linked apart, in dtcm.o)
        out = subprocess.run(["nm", "-A", *objs], capture_output=True, text=True, check=True).stdout
        for line in out.splitlines():
            obj, _, rest = line.partition(":")
            p = rest.split()
            if len(p) == 2 and p[0] == "U" and p[1] in labels:
                used.add(p[1])
                s = source_of(obj, b)
                if s:
                    users[p[1]].add(s)
            elif len(p) == 3 and p[1] in "DdBbRrC":
                s = source_of(obj, b)
                if s:
                    defined_in.setdefault(p[2], s)
    return {n: labels[n] for n in used}, users, defined_in


def definition_types(path, wanted):
    """name -> type DIE of the wanted variables, from their definitions (DW_AT_location; a unit's own declaration
    of a variable may view it as another type)"""
    from elftools.elf.elffile import ELFFile
    out = {}
    f = open(path, "rb")
    dw = ELFFile(f).get_dwarf_info()
    for cu in dw.iter_CUs():
        for die in cu.iter_DIEs():
            if die.tag != "DW_TAG_variable" or "DW_AT_location" not in die.attributes:
                continue
            d = die.get_DIE_from_attribute("DW_AT_specification") if "DW_AT_specification" in die.attributes else die
            name = None
            for a in ("DW_AT_linkage_name", "DW_AT_MIPS_linkage_name", "DW_AT_name"):
                if a in d.attributes:
                    name = d.attributes[a].value.decode()
                    break
            if name not in wanted or name in out:
                continue
            t = die if "DW_AT_type" in die.attributes else d
            if "DW_AT_type" in t.attributes:
                ty = t.get_DIE_from_attribute("DW_AT_type")
                if host_relayout.size_of(ty):
                    out[name] = ty
    return out, f


def member_expr(base, off, var_types):
    """C expression for the address `off` bytes into `base`: a member path where the type is known"""
    if base not in var_types or base.startswith("_ZTV"):
        return f"(char *)&{base} + {off:#x}"
    die = var_types[base]
    path, rem = host_relayout.path_at(die, off)
    # a path into a byte array of a member keeps the index as the offset
    expr = base
    for kind, v in path:
        if kind == "m":
            if v.startswith("<base:"):
                return f"(char *)&{base} + {off:#x}"  # (through a base class: keep the offset)
            expr += "." + v
        else:
            expr += f"[{v}]"
    t = host_relayout.strip(die)
    if not path:
        return f"(char *)&{base} + {off:#x}"
    return f"(char *)&{expr}" + (f" + {rem:#x}" if rem else "")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--blocks-only", action="store_true", help="only rewrite the pointers' definitions (step 1)")
    args = ap.parse_args()
    os.chdir(ROOT)
    labels, users, defined_in = labels_used()
    if args.blocks_only:
        # the labels of the existing blocks (the units no longer refer to the labels themselves)
        names = set()
        for p in Path("src").rglob("*.c*"):
            names |= set(re.findall(r"^HOST_LABEL_DEFINE\((\w+),", p.read_text(errors="replace"), re.M))
        rx = re.compile(r'PROVIDE\("?([^"= ]+)"? *= *"?([A-Za-z_][\w$.]*)"? *\+ *(0x[0-9a-fA-F]+|\d+)\s*\);')
        labels = {}
        for line in open("modern/gen/provides.ld"):
            m = rx.match(line)
            if m and m.group(1) in names:
                labels[m.group(1)] = (m.group(2), int(m.group(3), 0))
    bases = {b for b, _ in labels.values()}
    var_types, f32 = definition_types("build/host_usa/game_all.o", bases)
    # 1. the pointers, at the end of the bases' units
    by_unit = collections.defaultdict(list)
    for name, (base, off) in sorted(labels.items()):
        src = defined_in.get(base)
        if src is None:
            sys.exit(f"host_labels.py: {name}: base {base} not defined in a game unit")
        by_unit[src].append((name, member_expr(base, off, var_types)))
    for src, items in sorted(by_unit.items()):
        text = open(src).read()
        i = text.find("\n" + MARK)
        if i >= 0:
            text = text[:i].rstrip("\n") + "\n"
        block = [MARK, '#include "host_labels.h"', ""]
        block += [f"HOST_LABEL_DEFINE({n}, {e});" for n, e in items]
        new = text.rstrip("\n") + "\n\n" + "\n".join(block) + "\n"
        print(f"{src}: {len(items)} labels: " + ", ".join(f"{n} = {e}" for n, e in items))
        if not args.dry_run:
            open(src, "w").write(new)
    if args.blocks_only:
        return
    # 2. the header
    hdr = ["// generated by tools/host_labels.py: labels inside variables (the names symbols.txt gives to places inside",
           "// variables), as pointers to those places, defined at the end of the unit of each variable",
           "#ifndef HOST_LABELS_H", "#define HOST_LABELS_H", "",
           "#ifdef __cplusplus", 'extern "C" {', "#endif"]
    hdr += [f"extern char *const gHostLabel_{n};" for n in sorted(labels)]
    hdr += ["#ifdef __cplusplus", "}",
            "#define HOST_LABEL_DEFINE(name, expr) extern \"C\" char *const gHostLabel_##name = (expr)", "#else",
            "#define HOST_LABEL_DEFINE(name, expr) char *const gHostLabel_##name = (expr)", "#endif", "",
            "// a label as an object of the type a unit declares it with: HOST_LABEL(T (*)[], name) for `T name[]`,",
            "// HOST_LABEL(T *, name) for `T name`",
            "#define HOST_LABEL(ptrtype, name) (*(ptrtype)gHostLabel_##name)", "", "#endif", ""]
    if not args.dry_run:
        Path("include/host_labels.h").write_text("\n".join(hdr))
    # 3. the declarations: each statement that declares a label is replaced by #defines for the labels and
    # declarations of its other names (the statement's own linkage kept)
    import clang.cindex as ci
    ci.Config.set_library_file(LIBCLANG)
    index = ci.Index.create()
    srcs = sorted({s for n in labels for s in users[n]})
    stmts = collections.defaultdict(dict)  # file -> {statement start: [cursor info]}

    def spelled(t, name):
        dims = ""
        while t.kind in (ci.TypeKind.CONSTANTARRAY, ci.TypeKind.INCOMPLETEARRAY):
            dims += f"[{t.element_count}]" if t.kind == ci.TypeKind.CONSTANTARRAY else "[]"
            t = t.element_type
        if dims:
            return f"{t.spelling} {name}{dims}", f"{t.spelling} (*){dims}"
        return f"{t.spelling} {name}", f"{t.spelling} *"
    for src in srcs:
        tu = index.parse(src, args=CXX_ARGS if src.endswith(".cpp") else C_ARGS)

        def walk(node):
            for c in node.get_children():
                if c.kind == ci.CursorKind.VAR_DECL and not c.is_definition() and c.location.file is not None:
                    yield c
                yield from walk(c)
        found = collections.defaultdict(list)
        for c in walk(tu.cursor):
            f = os.path.relpath(c.location.file.name)
            if not f.startswith(".."):
                found[f].append(c)
        for f, cs in found.items():
            text = open(f).read()
            # statements: the declarations ending at the same ';'
            by_end = collections.defaultdict(list)
            for c in cs:
                e = c.extent.end.offset
                while text[e] in " \t\n":
                    e += 1
                if text[e] != ";":
                    continue
                by_end[e].append(c)
            for e, group in by_end.items():
                if not any(c.spelling in labels for c in group):
                    continue
                group = sorted({(c.location.offset, c.spelling): c for c in group}.values(), key=lambda c: c.location.offset)
                a = min(c.extent.start.offset for c in group)
                # a linkage specification right before: extern "C"
                ls = text.rfind("\n", 0, a) + 1
                head = text[ls:a]
                m = re.search(r'extern\s+"C"\s*$', head)
                link = ""
                if m:
                    a = ls + m.start()
                    link = 'extern "C" '
                stmt = text[a:e + 1]
                if not re.match(r'(extern\s+"C"\s+)?extern\b|extern\b', stmt):
                    print(f"host_labels.py: {f}: {stmt!r}: not an extern declaration, by hand")
                    continue
                lines = []
                for c in group:
                    decl, ptr = spelled(c.type, c.spelling)
                    if c.spelling in labels:
                        lines.append(f"#define {c.spelling} HOST_LABEL({ptr}, {c.spelling})")
                    else:
                        lines.append(f"{link}extern {decl};")
                stmts[f][(a, e + 1)] = lines
    for f, es in sorted(stmts.items()):
        text = open(f).read()
        for (a, z), lines in sorted(es.items(), reverse=True):
            before = text[:a]
            after = text[z:]
            pre = "" if before.endswith("\n") or not before else "\n"
            post = "" if after.startswith("\n") else "\n"
            ind = re.match(r"[ \t]*", text[text.rfind("\n", 0, a) + 1:]).group(0) if not pre else ""
            text = before + pre + ("\n".join(ind + l for l in lines)) + post + after
        if '#include "host_labels.h"' not in text:
            m = re.search(r'^#include .*\n', text, re.M)
            if m:
                text = text[:m.end()] + '#include "host_labels.h"\n' + text[m.end():]
            else:
                text = '#include "host_labels.h"\n' + text
        print(f"{f}: {len(es)} declarations")
        if not args.dry_run:
            open(f, "w").write(text)


if __name__ == "__main__":
    main()

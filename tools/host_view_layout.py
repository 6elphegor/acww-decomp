#!/usr/bin/env python3
"""The host (64-bit) layout of a view structure, from the real structure it views.

Many classes are declared twice: the real one with typed members, and a view with the DS offsets (blobs u8 x[N],
the members a function touches). On the DS they agree; on a 64-bit host the real one grows (pointers, vtable
pointers) and the view doesn't. This maps every member of the view from its DS offset to the 64-bit offset of the
same byte in the real structure (the member path in the 32-bit build's debug information, its offset in the 64-bit
build's) and prints the view's members for the host: each member at its mapped place (padding between), blobs
resized to what they cover in the real structure, 4-byte integers that hold a pointer in the real structure uptr.

Usage: host_view_layout.py <game_all.o, 32-bit> <game_all.o, 64-bit> <view type> <real type> <header or source>
       [--cu <source of the compile unit to take both types from>]
The members are printed (to paste into an #ifdef HOST branch of the view's declaration).
"""
import re
import sys

from elftools.elf.elffile import ELFFile

sys.path.insert(0, __file__.rsplit("/", 1)[0])
from host_relayout import members, offset_of, path_at, size_of, strip  # noqa: E402


CU = None  # --cu <source>: the compile unit to take the types from


CUTYPES = {}  # path -> {(compile unit name, type name): DIE} (built once)


def index_types(path):
    if path in CUTYPES:
        return CUTYPES[path]
    idx = {}
    elf = ELFFile(open(path, "rb"))
    for cu in elf.get_dwarf_info().iter_CUs():
        cu_name = cu.get_top_DIE().attributes["DW_AT_name"].value.decode()
        for die in cu.iter_DIEs():
            if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type") and "DW_AT_name" in die.attributes \
                    and "DW_AT_declaration" not in die.attributes:
                idx.setdefault((cu_name, die.attributes["DW_AT_name"].value.decode()), die)
                DEFS.setdefault((path, die.attributes["DW_AT_name"].value.decode()), die)
    CUTYPES[path] = idx
    return idx


def find_type(path, name):
    if path in CUTYPES:
        for (c, n), d in CUTYPES[path].items():
            if n == name and (not CU or c.endswith(CU)):
                return d, None
        raise SystemExit(f"{name}: not in {path}")
    f = open(path, "rb")
    elf = ELFFile(f)
    for cu in elf.get_dwarf_info().iter_CUs():
        top = cu.get_top_DIE()
        if CU and not top.attributes["DW_AT_name"].value.decode().endswith(CU):
            continue
        for die in cu.iter_DIEs():
            if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type") and "DW_AT_name" in die.attributes \
                    and die.attributes["DW_AT_name"].value.decode() == name and "DW_AT_declaration" not in die.attributes:
                return die, f
    raise SystemExit(f"{name}: not in {path}")


DEFS = {}  # (object file, type name) -> its complete definition (for members whose type is a declaration here)


def load_defs(path):
    elf = ELFFile(open(path, "rb"))
    for cu in elf.get_dwarf_info().iter_CUs():
        for die in cu.iter_DIEs():
            if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type") and \
                    "DW_AT_name" in die.attributes and "DW_AT_declaration" not in die.attributes:
                DEFS.setdefault((path, die.attributes["DW_AT_name"].value.decode()), die)


def complete(die, path):
    die = strip(die)
    if die is not None and "DW_AT_declaration" in die.attributes and "DW_AT_name" in die.attributes:
        return DEFS.get((path, die.attributes["DW_AT_name"].value.decode()), die)
    return die


def tsize(die, path):
    die = complete(die, path)
    if die is None:
        return None
    if die.tag == "DW_TAG_array_type" and "DW_AT_byte_size" not in die.attributes:
        el = tsize(die.get_DIE_from_attribute("DW_AT_type"), path)
        n = 1
        for sub in die.iter_children():
            if sub.tag == "DW_TAG_subrange_type":
                if "DW_AT_count" in sub.attributes:
                    n *= sub.attributes["DW_AT_count"].value
                elif "DW_AT_upper_bound" in sub.attributes:
                    n *= sub.attributes["DW_AT_upper_bound"].value + 1
        return None if el is None else el * n
    return size_of(die)


def path_at_c(die, off, path):
    """path_at with the members' declarations completed from their definitions"""
    out = []
    while True:
        die = complete(die, path)
        if die is None:
            return out, off
        if die.tag == "DW_TAG_array_type":
            el = die.get_DIE_from_attribute("DW_AT_type")
            es = tsize(el, path)
            if not es:
                return out, off
            out.append(("i", off // es))
            off %= es
            die = el
            continue
        if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
            best = None
            for name, loc, t in members(die):
                s = tsize(t, path)
                if s is None:
                    continue
                if loc <= off < loc + max(s, 1) and (best is None or loc >= best[1]):
                    best = (name, loc, t)
            if best is None:
                return out, off
            out.append(("m", best[0]))
            off -= best[1]
            die = best[2]
            continue
        return out, off


def offset_of_c(die, p, path):
    off = 0
    for kind, v in p:
        die = complete(die, path)
        if die is None:
            return None
        if kind == "i":
            if die.tag != "DW_TAG_array_type":
                return None
            el = die.get_DIE_from_attribute("DW_AT_type")
            es = tsize(el, path)
            if es is None:
                return None
            off += v * es
            die = el
        else:
            for name, loc, t in members(die):
                if name == v:
                    off += loc
                    die = t
                    break
            else:
                return None
    return off


def leaf_at(die, off):
    """the scalar leaf DIE at byte off of a value of type die (None for padding / aggregates)"""
    while True:
        die = strip(die)
        if die is None:
            return None
        if die.tag == "DW_TAG_array_type":
            el = die.get_DIE_from_attribute("DW_AT_type")
            es = size_of(el)
            if not es:
                return None
            off %= es
            die = el
            continue
        if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
            best = None
            for name, loc, t in members(die):
                s = size_of(t)
                if s and loc <= off < loc + s and (best is None or loc >= best[0]):
                    best = (loc, t)
            if best is None:
                return None
            off -= best[0]
            die = best[1]
            continue
        return die


def view_members(die):
    """the view's members in order: ("m", name, offset, type) or ("bf", [names], unit offset, type, unit size)"""
    out = []
    for c in die.iter_children():
        if c.tag not in ("DW_TAG_member", "DW_TAG_inheritance"):
            continue
        t = c.get_DIE_from_attribute("DW_AT_type")
        name = c.attributes["DW_AT_name"].value.decode() if "DW_AT_name" in c.attributes else "?"
        if "DW_AT_bit_size" in c.attributes:
            us = size_of(t) or 4
            if "DW_AT_data_bit_offset" in c.attributes:
                bit = c.attributes["DW_AT_data_bit_offset"].value
            else:
                bit = c.attributes.get("DW_AT_data_member_location").value * 8
            unit = (bit // (us * 8)) * us
            if out and out[-1][0] == "bf" and out[-1][2] == unit:
                out[-1][1].append(name)
            else:
                out.append(("bf", [name], unit, t, us))
            continue
        loc = c.attributes["DW_AT_data_member_location"].value if "DW_AT_data_member_location" in c.attributes else 0
        out.append(("m", name, loc, t))
    return out


def main():
    global CU
    args = sys.argv[1:]
    if args and args[0] == "--jobs":
        # batch: <32-bit o> <64-bit o> lines "view real source cu1[,cu2...]" from the file; the debug information read once
        jobsfile, o32, o64 = args[1], args[2], args[3]
        index_types(o32)
        index_types(o64)
        for line in open(jobsfile):
            if not line.strip() or line.startswith("#"):
                continue
            v, r, s, cus = line.split()
            done = False
            for cu in cus.split(","):
                if (not any(c.endswith(cu) and n == v for (c, n) in CUTYPES[o32])):
                    continue
                sys.argv = ["x", o32, o64, v, r, s, "--cu", cu, "--apply"]
                try:
                    main()
                    print(f"OK   {v} {s} ({cu})")
                except SystemExit as e:
                    print(f"FAIL {v} {s} ({cu}): {e}")
                done = True
                break
            if not done:
                print(f"NONE {v} {s}")
        return
    apply = "--apply" in args
    if apply:
        args.remove("--apply")
    if "--cu" in args:
        i = args.index("--cu")
        CU = args[i + 1]
        del args[i:i + 2]
    o32, o64, view, real, src = args[:5]
    if o32 not in CUTYPES:
        load_defs(o32)
        load_defs(o64)
    v32, _f1 = find_type(o32, view)
    r32, _f2 = find_type(o32, real)
    r64, _f3 = find_type(o64, real)
    size32, size64 = tsize(r32, o32), tsize(r64, o64)
    vsize32 = tsize(v32, o32)

    def map64(x):
        if x >= size32:
            return size64 + (x - size32)
        p, rem = path_at_c(r32, x, o32)
        if not p and x > 0:  # padding in the real structure: after the byte before it
            return map64(x - 1) + 1
        o = offset_of_c(r64, p, o64)
        if o is None:
            raise SystemExit(f"{real}+{x:#x}: no counterpart for {p}")
        return o + rem

    def host_size(t):
        st = complete(t, o32)
        if st is None:
            return 0
        if st.tag in ("DW_TAG_pointer_type", "DW_TAG_ptr_to_member_type", "DW_TAG_reference_type"):
            return 8
        if st.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type") and "DW_AT_name" in st.attributes:
            d64 = DEFS.get((o64, st.attributes["DW_AT_name"].value.decode()))
            return tsize(d64, o64) if d64 is not None else tsize(st, o32)
        if st.tag == "DW_TAG_array_type":
            el = st.get_DIE_from_attribute("DW_AT_type")
            n = tsize(st, o32) // max(tsize(el, o32), 1)
            return n * host_size(el)
        return tsize(st, o32)

    def scalar(t):
        st = complete(t, o32)
        return st is not None and st.tag in ("DW_TAG_base_type", "DW_TAG_enumeration_type")

    # the view's declarations in the source (the DS branch)
    text_full = open(src).read()
    text = re.sub(r"#ifdef HOST64\n.*?#else\n", "", text_full, flags=re.S)
    m = re.search(r"(?:class|struct) %s\b[^;{]*\{" % re.escape(view), text)
    body = text[m.end():]
    depth, k = 1, 0
    while depth and k < len(body):
        depth += {"{": 1, "}": -1}.get(body[k], 0)
        k += 1
    body = body[:k]
    decl_type = {}
    fnptr = {}  # name -> its declaration (a pointer to a function: emitted as written)
    # (statements of the body: comments out, then split at ';')
    clean = re.sub(r"//[^\n]*|/\*.*?\*/", "", body, flags=re.S)
    for stmt in clean.split(";"):
        stmt = stmt.strip().split("{")[-1].split("}")[-1].strip()
        if not stmt or stmt.startswith(("public", "private", "protected")) or ":" in stmt and "::" not in stmt:
            stmt = re.sub(r"^(public|private|protected)\s*:", "", stmt).strip()
            if not stmt or re.search(r":\s*\d+\s*$", stmt):
                continue
        fm = re.search(r"\(\s*\*\s*(\w+)\s*\)\s*\(", stmt)
        if fm:
            fnptr.setdefault(fm.group(1), stmt + ";")
            continue
        if "(" in stmt:
            continue  # a method
        pieces = [p.strip() for p in stmt.split(",")]
        fm = re.match(r"^(.*?)([\s\*]*)\b(\w+)\s*(\[[^\]]*\])?$", pieces[0])
        if not fm:
            continue
        base = fm.group(1).strip()
        decl_type.setdefault(fm.group(3), ((base + " " + fm.group(2).strip()).strip(), fm.group(4)))
        for p in pieces[1:]:
            pm = re.match(r"^([\s\*]*)(\w+)\s*(\[[^\]]*\])?$", p)
            if pm:
                decl_type.setdefault(pm.group(2), ((base + " " + pm.group(1).strip()).strip(), pm.group(3)))

    def bf_line(name):
        bm = re.search(r"^[ \t]*(?:/\*[^*]*\*/\s*)?[A-Za-z_][\w ]*?\b" + re.escape(name) + r"\s*:\s*\d+\s*;", body, re.M)
        if not bm:
            raise SystemExit(f"{view}.{name}: bitfield declaration not found")
        return "    " + re.sub(r"/\*[^*]*\*/\s*", "", bm.group(0).strip())

    out, cur, npad = [], 0, 0
    asserts = []
    for ent in view_members(v32):
        if ent[0] == "bf":
            _, names, unit, t, us = ent
            o = map64(unit)
            if o > cur:
                out.append(f"    u8 hpad_{npad}[{o - cur:#x}];")
                npad += 1
            for nm in names:
                out.append(bf_line(nm))
            cur = o + us
            continue
        _, name, loc, t = ent
        s = tsize(t, o32)
        o = map64(loc)
        e = map64(loc + s) if loc + s < size32 else size64
        if o > cur:
            out.append(f"    u8 hpad_{npad}[{o - cur:#x}];")
            npad += 1
        elif o < cur:
            raise SystemExit(f"{view}.{name}: maps to {o:#x}, before {cur:#x}")
        if name in fnptr:
            out.append(f"    {fnptr[name]}  // DS +{loc:#x}")
            cur = o + 8
            asserts.append((name, o))
            continue
        ty, arr = decl_type.get(name, (None, None))
        if ty is None:
            raise SystemExit(f"{view}.{name}: declaration not found")
        st = complete(t, o32)
        if st.tag == "DW_TAG_array_type":
            elt = st.get_DIE_from_attribute("DW_AT_type")
            el = tsize(elt, o32)
            if scalar(elt):
                leaf = leaf_at(r64, o) if el == 4 else None
                if leaf is not None and size_of(leaf) == 8 and ty in ("u32", "s32", "int", "unsigned"):
                    out.append(f"    uptr {name}[{(e - o) // 8:#x}];  // DS +{loc:#x} [{s:#x}] (pointers)")
                    cur = e
                else:
                    n = (e - o) // el
                    if (e - o) % el:
                        raise SystemExit(f"{view}.{name}: {e - o:#x} bytes, not whole elements of {el}")
                    out.append(f"    {ty} {name}[{n:#x}];  // DS +{loc:#x} [{s:#x}]")
                    cur = o + n * el
            else:
                n = s // el
                out.append(f"    {ty} {name}[{n:#x}];  // DS +{loc:#x}")
                cur = o + n * host_size(elt)
            asserts.append((name, o))
        else:
            leaf = leaf_at(r64, o) if s == 4 and scalar(t) else None
            if leaf is not None and size_of(leaf) == 8 and ty in ("u32", "s32", "int", "unsigned"):
                ty = "uptr" if ty != "s32" else "sptr"
                out.append(f"    {ty} {name};  // DS +{loc:#x}")
                cur = o + 8
            else:
                out.append(f"    {ty} {name};  // DS +{loc:#x}")
                cur = o + host_size(t)
            asserts.append((name, o))
    end = map64(vsize32) if vsize32 < size32 else size64
    if end > cur:
        out.append(f"    u8 hpad_{npad}[{end - cur:#x}];")
    gen = "\n".join(out)
    checks = [f"static_assert(__builtin_offsetof({view}, {n}) == {o:#x}, \"{view}.{n}\");" for n, o in asserts]
    print(f"// {view}: {vsize32:#x} on the DS, {end:#x} here ({real})", file=sys.stderr)
    if not apply:
        print(gen)
        print("\n".join("// " + c for c in checks))
        return
    # splice: the data member lines of the view's definition -> #ifdef HOST64 (generated) #else (as written) #endif
    ms = re.search(r"(?:class|struct) %s\b[^;{]*\{" % re.escape(view), text_full)
    b0 = ms.end()
    depth, k = 1, b0
    while depth:
        depth += {"{": 1, "}": -1}.get(text_full[k], 0)
        k += 1
    body_full = text_full[b0:k - 1]
    if "#ifdef HOST64" in body_full:
        raise SystemExit(f"{view}: already has a 64-bit branch")
    names = [e[1] if e[0] == "m" else e[1][0] for e in view_members(v32)] + [e[1][-1] for e in view_members(v32) if e[0] == "bf"]
    lines = body_full.split("\n")
    idx = [n for n, l in enumerate(lines) if re.search(r"\b(" + "|".join(map(re.escape, names)) + r")\b\s*(\[[^\]]*\])?\s*(:\s*\d+\s*)?;", l) and "(" not in l
           or re.search(r"\(\s*\*\s*(" + "|".join(map(re.escape, names)) + r")\s*\)", l)]  # (pointers to functions)
    a, b = idx[0], idx[-1]
    new_lines = lines[:a] + ["#ifdef HOST64", "    // the 64-bit layout (tools/host_view_layout.py: the members at their places in " + real + ")", gen,
                             "#else"] + lines[a:b + 1] + ["#endif"] + lines[b + 1:]
    text_full = text_full[:b0] + "\n".join(new_lines) + text_full[k - 1:]
    open(src, "w").write(text_full)
    if CU and CU != src:
        cu_t = open(CU).read()
        cu_t += "\n#ifdef HOST64\n// " + view + " (" + src + ") views " + real + "\n" + "\n".join(checks) + "\n#endif\n"
        open(CU, "w").write(cu_t)
    elif checks:
        open(src, "a").write("\n#ifdef HOST64\n" + "\n".join(checks) + "\n#endif\n")


if __name__ == "__main__":
    main()

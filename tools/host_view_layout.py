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


def find_type(path, name):
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


def main():
    global CU
    args = sys.argv[1:]
    if "--cu" in args:
        i = args.index("--cu")
        CU = args[i + 1]
        del args[i:i + 2]
    o32, o64, view, real, src = args[:5]
    load_defs(o32)
    load_defs(o64)
    v32, _f1 = find_type(o32, view)
    r32, _f2 = find_type(o32, real)
    r64, _f3 = find_type(o64, real)
    size32, size64 = tsize(r32, o32), tsize(r64, o64)

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

    # the view's member declarations in the source: name -> declared type text
    text = open(src).read()
    # (the DS declarations: without a 64-bit branch generated before)
    text = re.sub(r"#ifdef HOST64\n.*?#else\n", "", text, flags=re.S)
    m = re.search(r"(?:class|struct) %s\b[^;{]*\{" % re.escape(view), text)
    body = text[m.end():]
    decl_type = {}
    for dm in re.finditer(r"^\s*(?:/\*[^*]*\*/\s*)?([A-Za-z_][\w\s\*]*?)\s*\b(\w+)\s*(\[[^\]]*\])?\s*;", body, re.M):
        decl_type.setdefault(dm.group(2), (dm.group(1).strip(), dm.group(3)))
        if body[:dm.start()].count("{") < body[:dm.start()].count("}"):
            break

    out, cur, npad = [], 0, 0
    asserts = []
    for name, loc, t in members(v32):
        s = size_of(t)
        o = map64(loc)
        e = map64(loc + s) if loc + s < size32 else size64
        if o > cur:
            out.append(f"    u8 hpad_{npad}[{o - cur:#x}];")
            npad += 1
        elif o < cur:
            raise SystemExit(f"{view}.{name}: maps to {o:#x}, before {cur:#x}")
        ty, arr = decl_type.get(name, (None, None))
        st = strip(t)
        if st.tag == "DW_TAG_array_type":
            el = size_of(st.get_DIE_from_attribute("DW_AT_type"))
            leaf = leaf_at(r64, o) if el == 4 else None
            if leaf is not None and size_of(leaf) == 8 and ty in ("u32", "s32", "int", "unsigned"):
                out.append(f"    uptr {name}[{(e - o) // 8:#x}];  // DS +{loc:#x} [{s:#x}] (pointers)")
                asserts.append(name)
                cur = e
                continue
            n = (e - o) // el
            if (e - o) % el:
                raise SystemExit(f"{view}.{name}: {e - o:#x} bytes, not whole elements of {el}")
            out.append(f"    {ty} {name}[{n:#x}];  // DS +{loc:#x} [{s:#x}]")
            asserts.append(name)
            cur = o + n * el
        else:
            leaf = leaf_at(r64, o) if s == 4 else None
            if leaf is not None and size_of(leaf) == 8 and ty in ("u32", "s32", "int", "unsigned"):
                ty = "uptr" if ty != "s32" else "sptr"
            out.append(f"    {ty} {name};  // DS +{loc:#x}")
            asserts.append(name)
            cur = o + (8 if ty in ("uptr", "sptr") or st.tag in ("DW_TAG_pointer_type", "DW_TAG_ptr_to_member_type") else s)
    if size64 > cur:
        out.append(f"    u8 hpad_{npad}[{size64 - cur:#x}];")
    print("\n".join(out))
    # checks for the unit that has both (the mapped offsets, the size)
    exp = {}
    for name, loc, tt in members(v32):
        exp[name] = map64(loc)
    print(f"\n// checks: static_assert(sizeof({view}) == sizeof({real}), \"\");")
    for n in asserts:
        print(f"//   static_assert(__builtin_offsetof({view}, {n}) == {exp[n]:#x}, \"\");")
    print(f"// {view}: {size_of(v32):#x} on the DS, {size64:#x} here ({real})", file=sys.stderr)


if __name__ == "__main__":
    main()

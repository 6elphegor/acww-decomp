#!/usr/bin/env python3
"""Allocations sized by a structure's DS size, for 64-bit hosts.

`(T *)Heap_Alloc(heap, 0x20)` allocates a T by its size on the DS; on a 64-bit host T may be larger (pointers),
and the code writes past the block. Where the constant is a whole number of T (T's size taken from the 32-bit host
build's debug information, which has the DS layout), the size becomes HOST_SIZED(N, T[k]) (include/uptr.h): N on
the DS, at least the real size on the host. Structure names with several sizes in the program are skipped.

Usage: host_alloc_sizes.py <acww, 32-bit> [--check] FILE...
"""
import re
import sys
from collections import defaultdict

from elftools.elf.elffile import ELFFile

sys.path.insert(0, __file__.rsplit("/", 1)[0])
from host_relayout import size_of, strip  # noqa: E402

# allocation function -> index of its size argument
ALLOCS = {"Heap_Alloc": 1, "Heap_AllocTail": 1, "Heap_AllocAligned": 1, "Mem_Alloc": 0, "Mem_AllocTail": 0,
          "Mem_AllocAligned": 0, "NNS_FndAllocFromExpHeapEx": 1, "NNS_FndAllocFromFrmHeapEx": 1,
          "NNS_FndAllocFromExpHeap": 1, "NNS_FndAllocFromFrmHeap": 1, "NNS_SndHeapAlloc": 1, "WfcHeap_Alloc": 0,
          "WfcHeap_AllocClear": 0, "GsUtil_Alloc": 0}
SKIP_TYPES = {"u8", "s8", "u16", "s16", "u32", "s32", "char", "void", "int", "unsigned", "short", "long", "BOOL"}


def type_sizes(path):
    sizes = defaultdict(set)
    elf = ELFFile(open(path, "rb"))
    for cu in elf.get_dwarf_info().iter_CUs():
        for die in cu.iter_DIEs():
            if die.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type") and \
                    "DW_AT_name" in die.attributes and "DW_AT_declaration" not in die.attributes:
                s = size_of(die)
                if s:
                    sizes[die.attributes["DW_AT_name"].value.decode()].add(s)
            elif die.tag == "DW_TAG_typedef" and "DW_AT_name" in die.attributes and "DW_AT_type" in die.attributes:
                t = strip(die.get_DIE_from_attribute("DW_AT_type"))
                if t is not None and t.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
                    s = size_of(t)
                    if s:
                        sizes[die.attributes["DW_AT_name"].value.decode()].add(s)
    return {k: next(iter(v)) for k, v in sizes.items() if len(v) == 1}


def split_args(s):
    """the top-level comma-separated arguments of s (no outer parentheses)"""
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    out.append(cur)
    return out


def main():
    obj = sys.argv[1]
    check = "--check" in sys.argv
    files = [a for a in sys.argv[2:] if a != "--check"]
    sizes = type_sizes(obj)
    rx = re.compile(r"\(\s*([A-Za-z_]\w*)\s*\*\s*\)\s*((?:\w+::)*)(" + "|".join(ALLOCS) + r")\s*\(")
    total = 0
    for f in files:
        t = open(f).read()
        out, pos, n = [], 0, 0
        for m in rx.finditer(t):
            T, fn = m.group(1), m.group(3)
            if T in SKIP_TYPES or T not in sizes:
                continue
            # the call's arguments
            i, depth = m.end(), 1
            while depth and i < len(t):
                depth += {"(": 1, ")": -1}.get(t[i], 0)
                i += 1
            args = split_args(t[m.end():i - 1])
            k = ALLOCS[fn]
            if k >= len(args):
                continue
            a = args[k].strip()
            mul = re.fullmatch(r"(.+?) \* (0x[0-9a-fA-F]+|\d+)", a) or re.fullmatch(r"(0x[0-9a-fA-F]+|\d+) \* (.+)", a)
            if mul:  # count * size (or size * count): the size part
                c = mul.group(2) if re.fullmatch(r"0x[0-9a-fA-F]+|\d+", mul.group(2)) else mul.group(1)
                N, S = int(c, 0), sizes[T]
                if N != S:
                    continue
                new_arg = a.replace(c, f"HOST_SIZED({c}, {T})", 1)
            elif re.fullmatch(r"0x[0-9a-fA-F]+|\d+", a):
                N, S = int(a, 0), sizes[T]
                if N % S:
                    continue
                new_arg = f"HOST_SIZED({a}, {T})" if N == S else f"HOST_SIZED({a}, {T}[{N // S}])"
            elif re.fullmatch(r"[\w\s*()>.-]+", a) and "*" in a and not re.search(r"[+/]", a):
                # a product (any nesting): its one literal equal to T's size
                lits = [x for x in re.finditer(r"\b(0x[0-9a-fA-F]+|\d+)\b", a)]
                hits = [x for x in lits if int(x.group(1), 0) == sizes[T]]
                if len(hits) != 1 or len(lits) != 1:
                    continue
                x = hits[0]
                new_arg = a[:x.start()] + f"HOST_SIZED({x.group(1)}, {T})" + a[x.end():]
            else:
                continue
            # replace the k-th argument in the source text
            start = m.end() + sum(len(x) + 1 for x in args[:k])
            arg_text = args[k]
            lead = len(arg_text) - len(arg_text.lstrip())
            s0, s1 = start + lead, start + lead + len(a)
            assert t[s0:s1] == a, (f, t[s0:s1], a)
            out.append(t[pos:s0] + new_arg)
            pos = s1
            n += 1
            print(f"{f}: ({T} *){fn}(... {a}) -> {new_arg}")
        if n and not check:
            t2 = "".join(out) + t[pos:]
            if "uptr.h" not in t2 and "types.h" not in t2:
                t2 = '#include "uptr.h"\n' + t2
            open(f, "w").write(t2)
        total += n
    print(f"total {total}", file=sys.stderr)


if __name__ == "__main__":
    main()

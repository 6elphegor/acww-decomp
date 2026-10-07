#!/usr/bin/env python3
"""64-bit offsets for a member access macro that takes DS offsets.
Some units reach the members of `this` through a macro with the DS offset, e.g.
    #define M(T, o) (*(T *)((u8 *)this + (o)))
On a 64-bit host the members move (vtable pointers, pointers). This maps every offset the unit uses with the macro
to the 64-bit offset of the same byte of the same member (its member path in the 32-bit build's debug information,
then that path's offset in the 64-bit build's) and rewrites the macro's definition into
    #ifdef HOST64
    template <unsigned O> struct <Type>HostOff;      // (one specialization per offset used)
    #define M(T, o) (*(T *)((u8 *)this + <Type>HostOff<(o)>::v))
    #else
    (the definition as written)
    #endif
so an offset without a mapping doesn't compile (instead of silently using the DS offset).
Usage: host_offset_map.py <game_all.o, 32-bit> <game_all.o, 64-bit> <type> <source> [--macro M]
The type is taken from the source's compile unit. Run it again after the type changes (it replaces its block).
"""
import re
import sys

sys.path.insert(0, __file__.rsplit("/", 1)[0])
import host_view_layout as hv  # noqa: E402


def main():
    args = sys.argv[1:]
    macro = "M"
    if "--macro" in args:
        i = args.index("--macro")
        macro = args[i + 1]
        del args[i:i + 2]
    o32, o64, tname, src = args[:4]
    hv.CU = src
    hv.index_types(o32)
    hv.index_types(o64)
    t32, _ = hv.find_type(o32, tname)
    t64, _ = hv.find_type(o64, tname)
    text = open(src).read()
    # drop a block from an earlier run (the definition as written is its #else branch)
    text = re.sub(r"#ifdef HOST64\n// %s: the DS offsets of the %s\(\) accesses.*?#else\n(.*?)#endif\n" % (re.escape(tname), re.escape(macro)),
                  r"\1", text, flags=re.S)
    dm = re.search(r"^#define %s\(T, o\) .*\n" % re.escape(macro), text, re.M)
    if not dm:
        raise SystemExit(f"{src}: no #define {macro}(T, o)")
    offs = sorted({int(o, 0) for o in re.findall(r"\b%s\([^,()]+(?:\([^()]*\))?[^,()]*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)" % re.escape(macro), text)})
    lines, bad = [], []
    for o in offs:
        p, rem = hv.path_at_c(t32, o, o32)
        h = hv.offset_of_c(t64, p, o64) if p else None
        if h is None:
            bad.append(f"{o:#x}")
            continue
        h += rem
        name = ".".join(v if k == "m" else f"[{v}]" for k, v in p)
        lines.append(f"template <> struct {tname}HostOff<{o:#x}> {{ enum {{ v = {h:#x} }}; }};  // {name}"
                     + (f" +{rem}" if rem else ""))
    if bad:
        print(f"{tname}: no 64-bit counterpart for {', '.join(bad)} (left out: those accesses won't compile)", file=sys.stderr)
    block = (f"#ifdef HOST64\n// {tname}: the DS offsets of the {macro}() accesses -> the same members on 64-bit hosts "
             f"(tools/host_offset_map.py)\ntemplate <unsigned O> struct {tname}HostOff;\n" + "\n".join(lines) +
             f"\n#define {macro}(T, o) (*(T *)((u8 *)this + {tname}HostOff<(o)>::v))\n#else\n" + dm.group(0) + "#endif\n")
    text = text[:dm.start()] + block + text[dm.end():]
    open(src, "w").write(text)
    print(f"{tname}: {len(lines)} offsets mapped ({src})", file=sys.stderr)


if __name__ == "__main__":
    main()

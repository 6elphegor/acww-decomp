#!/usr/bin/env python3
"""Portability check of the game code (docs/portability.md, step 0.1): every game unit (src/**/*.c, *.cpp and
modern/ds/*.c) is parsed with libclang for several target triples, with the build's game flags. x86_64-linux is the
baseline: its errors are what clang rejects outright (GCC accepts it); for every other target the report lists only
the diagnostics beyond the baseline - what that target's ABI (pointer size, `long`, bitfield layout, ...) adds.

Default targets: macos-arm64 (arm64-apple-macos13), win64-gnu-nomsbf (x86_64-w64-windows-gnu -mno-ms-bitfields,
the Windows target the plan uses). Others: win64-gnu (MS bitfields), win64-msvc, linux-arm64, linux32.

Needs the libclang Python bindings (`pip install --user clang==21.*`) and libclang (found under /usr/lib/llvm-*
or given with --libclang). About a minute per target on 8 cores.

  python3 tools/host_portcheck.py                      # baseline + default targets, summary
  python3 tools/host_portcheck.py -v                   # also every distinct diagnostic (file:line message)
  python3 tools/host_portcheck.py --targets win64-gnu-nomsbf,win64-gnu src/main/foo.cpp
  python3 tools/host_portcheck.py --json DIR           # the raw diagnostics, DIR/diag_<target>.json

Exit status: 0 when the baseline has no errors and no target has anything beyond it, 1 otherwise.
"""
import argparse
import collections
import glob
import json
import os
import re
import sys
from multiprocessing import Pool

BASELINE = "linux64"
TARGETS = {
    "linux64": ["--target=x86_64-pc-linux-gnu"],
    "macos-arm64": ["--target=arm64-apple-macos13"],
    "win64-gnu-nomsbf": ["--target=x86_64-w64-windows-gnu", "-mno-ms-bitfields"],
    "win64-gnu": ["--target=x86_64-w64-windows-gnu"],
    "win64-msvc": ["--target=x86_64-pc-windows-msvc", "-fms-extensions"],
    "linux-arm64": ["--target=aarch64-linux-gnu"],
    "linux32": ["--target=i386-pc-linux-gnu", "-fpcc-struct-return"],
}
DEFAULT_TARGETS = ["macos-arm64", "win64-gnu-nomsbf"]
# the game flags of tools/configure_host.py that clang knows (-malign-data / -fpcc-struct-return are GCC/i386-only),
# and the pointer/integer conversion warnings (a pointer cut to 32 bits shows up as an extra one on LLP64).
# -Wno-everything also silences the warnings clang makes errors by default, which a clang build still rejects
# (with -w too): they are turned back into errors (C++ narrowing in braced initialisers; C's int/pointer and
# function pointer conversions, implicit declarations and int)
COMMON = ["-ffreestanding", "-nostdinc", "-fsigned-char", "-fshort-wchar", "-fno-short-enums", "-fno-builtin",
          "-fno-strict-aliasing", "-DMODERN", "-DHOST", "-DGAME_VERSION_USA", "-Iinclude", "-ferror-limit=0",
          "-Wno-everything", "-Wpointer-to-int-cast", "-Wint-to-pointer-cast", "-Wvoid-pointer-to-int-cast",
          "-Wpointer-to-enum-cast", "-Werror=c++11-narrowing", "-Werror=int-conversion",
          "-Werror=incompatible-function-pointer-types", "-Werror=implicit-function-declaration",
          "-Werror=implicit-int"]
C_ARGS = ["-x", "c", "-std=gnu11"]
CXX_ARGS = ["-x", "c++", "-std=gnu++14", "-fno-exceptions", "-fno-rtti"]

ci = None


def load_libclang(path):
    global ci
    import clang.cindex
    ci = clang.cindex
    if path is None:
        found = sorted(glob.glob("/usr/lib/llvm-*/lib/libclang-*.so.1") + glob.glob("/usr/lib/llvm-*/lib/libclang.so"))
        path = found[-1] if found else None
    if path:
        ci.Config.set_library_file(path)


def source_flags(path):
    # the per-file mwcc flags configure_host.py maps (`// mwcc-flags: ... -char unsigned`)
    with open(path, errors="replace") as f:
        for _, line in zip(range(10), f):
            m = re.match(r"\s*//\s*mwcc-flags:\s*(.+?)\s*$", line)
            if m and "-char unsigned" in m.group(1):
                return ["-funsigned-char"]
    return []


def run(job):
    target, path, libclang = job
    if ci is None:
        load_libclang(libclang)
    args = (C_ARGS if path.endswith(".c") else CXX_ARGS) + TARGETS[target] + COMMON + source_flags(path)
    try:
        tu = ci.Index.create().parse(path, args=args)
    except ci.TranslationUnitLoadError as e:
        return target, path, [["fatal", f"parse failed: {e}", ""]]
    out = []
    for d in tu.diagnostics:
        if d.severity < ci.Diagnostic.Warning:
            continue
        loc = d.location
        out.append(["error" if d.severity >= ci.Diagnostic.Error else "warning", d.spelling,
                    f"{os.path.relpath(str(loc.file))}:{loc.line}" if loc.file else ""])
    return target, path, out


def extras(diags, base):
    """The diagnostics of one unit that the baseline doesn't have (as a multiset of (kind, message, location))."""
    c = collections.Counter(map(tuple, diags))
    c.subtract(collections.Counter(map(tuple, base)))
    return [d for d, k in c.items() for _ in range(k) if k > 0]


def summary(name, per_unit, verbose, limit):
    n = sum(len(v) for v in per_unit.values())
    ne = sum(1 for v in per_unit.values() for d in v if d[0] != "warning")
    files = sorted(f for f, v in per_unit.items() if v)
    distinct = collections.Counter(tuple(d) for v in per_unit.values() for d in v)
    print(f"{name}: {n} diagnostics ({ne} errors, {n - ne} warnings) in {len(files)} units, {len(distinct)} distinct")
    msgs = collections.Counter(re.sub(r"'[^']*'", "'_'", d[1]) for v in per_unit.values() for d in v)
    for m, k in msgs.most_common(limit):
        print(f"    {k:6d}  {m}")
    if verbose:
        for d, k in sorted(distinct.items(), key=lambda x: (x[0][2], x[0][1])):
            print(f"    {d[2]}: {d[0]}: {d[1]}" + (f"  (x{k})" if k > 1 else ""))
    return n


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("files", nargs="*", help="units to check (default: all game units)")
    ap.add_argument("--targets", default=",".join(DEFAULT_TARGETS),
                    help="comma-separated, from: " + ", ".join(t for t in TARGETS if t != BASELINE))
    ap.add_argument("--json", metavar="DIR", help="write DIR/diag_<target>.json (unit -> [kind, message, location])")
    ap.add_argument("--libclang", help="path of libclang.so")
    ap.add_argument("-j", "--jobs", type=int, default=os.cpu_count())
    ap.add_argument("-v", "--verbose", action="store_true", help="list every distinct diagnostic")
    ap.add_argument("--top", type=int, default=8, help="most frequent messages shown per target")
    args = ap.parse_args()
    os.chdir(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    files = args.files or sorted(glob.glob("src/**/*.c", recursive=True) + glob.glob("src/**/*.cpp", recursive=True)
                                 + glob.glob("modern/ds/*.c"))
    args.targets = [t for t in args.targets.split(",") if t]
    for t in args.targets:
        if t not in TARGETS or t == BASELINE:
            ap.error(f"unknown target {t}")
    targets = [BASELINE] + args.targets
    res = {t: {} for t in targets}
    with Pool(args.jobs) as p:
        for t, f, out in p.imap_unordered(run, [(t, f, args.libclang) for t in targets for f in files], chunksize=4):
            res[t][f] = out
    if args.json:
        os.makedirs(args.json, exist_ok=True)
        for t in targets:
            with open(os.path.join(args.json, f"diag_{t}.json"), "w") as fp:
                json.dump(res[t], fp, indent=0, sort_keys=True)
    print(f"{len(files)} units")
    base = res[BASELINE]
    bad = summary(f"{BASELINE} (baseline) errors",
                  {f: [d for d in v if d[0] != "warning"] for f, v in base.items()}, args.verbose, args.top)
    print(f"{BASELINE} (baseline) warnings: {sum(1 for v in base.values() for d in v if d[0] == 'warning')}")
    for t in args.targets:
        bad += summary(f"{t} beyond the baseline", {f: extras(res[t][f], base[f]) for f in files}, args.verbose, args.top)
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())

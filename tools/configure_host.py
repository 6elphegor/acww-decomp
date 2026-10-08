#!/usr/bin/env python3
"""Write build_host.ninja: the game compiled for 32-bit x86 Linux with the host runtime in modern/host/ (see
docs/host.md). Experimental; the DS hardware is being replaced piece by piece.

The game's sources are compiled freestanding, as for the DS (-nostdinc, mwcc's type rules), with -DMODERN -DHOST.
The runtime (modern/host/) uses the host's C library. No linker script supplies names: the labels symbols.txt
gives to places inside variables are pointers defined in C (include/host_labels.h, tools/host_labels.py), the second
names of functions are the functions themselves in the sources.

Needs a 32-bit sysroot (memory: acww-host-toolchain): --sysroot <dir>.
"""
import argparse
import glob
import os
import re
import shutil
import sys
from pathlib import Path

import ninja_syntax

parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
parser.add_argument("--sysroot", default=os.path.expanduser("~/acww/toolchains/i386-sysroot"))
parser.add_argument("--cc", default="gcc",
                    help="the C compiler: gcc, or clang (a separate build: suffix _clang; the LLVM release in "
                         "~/acww/toolchains/LLVM-*/bin when no clang is on the PATH)")
parser.add_argument("--melonds", default=os.path.expanduser("~/acww/ref/melonDS"),
                    help="melonDS source tree patched with tools/host/melonds.patch and built for 32-bit x86 in build-core32 "
                         "(the display renderer)")
parser.add_argument("--sdl2", default=os.path.expanduser("~/acww/toolchains/sdl2-dev"),
                    help="directory with SDL2 development headers (usr/include/SDL2), for the viewer")
parser.add_argument("--arch", choices=["i386", "x86_64"], default="i386",
                    help="i386: build_host.ninja, build/host_<v> (the working build); x86_64: build_host64.ninja, "
                         "build/host64_<v> (64-bit, in progress: docs/host.md)")
parser.add_argument("--extra-cflags", default="",
                    help="more compiler flags for the game code (a debugging build, e.g. -fstack-protector-all; "
                         "use with --suffix)")
parser.add_argument("--suffix", default="",
                    help="a separate build: build_host64<suffix>.ninja, build/host64<suffix>_<v>")
parser.add_argument("--strict-c", action="store_true",
                    help="the game's C units with -Werror=pointer-to-int-cast -Werror=int-to-pointer-cast (and without "
                         "-w, which would hide them): every pointer kept in an integer is an error (docs/portability.md "
                         "0.3; meant for the x86-64 build, with --suffix)")
parser.add_argument("--guards", action="store_true",
                    help="the guard variant (a separate build: suffix _guards): poisoned bytes after every game variable "
                         "(tools/host_guards.py), checked every frame with ACWW_GUARDS=1 (modern/host/guards.c; "
                         "docs/portability.md 2.8)")
parser.add_argument("--regen-gen", action="store_true",
                    help="regenerate modern/gen/gaps.c from the DS build's delinking (build/usa/delinks)")
parser.add_argument("version", nargs="?", default="usa")
args = parser.parse_args()

root = Path(__file__).resolve().parent.parent
CLANG = os.path.basename(args.cc).startswith("clang")
if CLANG:
    if not args.suffix:
        args.suffix = "_clang"
    if not shutil.which(args.cc):
        found = sorted(glob.glob(os.path.expanduser(f"~/acww/toolchains/LLVM-*/bin/{args.cc}")))
        if found:
            args.cc = found[-1]
if args.guards and not args.suffix:
    args.suffix = "_guards"
X64 = args.arch == "x86_64"
build = Path("build") / (f"host64{args.suffix}_{args.version}" if X64 else f"host{args.suffix}_{args.version}")
NINJA_FILE = f"build_host64{args.suffix}.ninja" if X64 else f"build_host{args.suffix}.ninja"
R = args.sysroot
G = f"{R}/usr/lib/gcc/x86_64-linux-gnu/15/32"
M_FLAG = "-m64" if X64 else "-m32"
LD_EMU = "elf_x86_64" if X64 else "elf_i386"

GAME_FLAGS = " ".join([
    M_FLAG, "-fno-pie", "-fno-short-enums", "-fsigned-char", "-fshort-wchar", "-ffreestanding", "-nostdinc",
    "-fno-strict-aliasing", "-fno-builtin", "-O1", "-g", "-w", "-fno-omit-frame-pointer", "-falign-functions=4", "-fdata-sections", "-malign-data=abi",
    "-DMODERN", "-DHOST", f"-DGAME_VERSION_{args.version.upper()}", "-Iinclude",
    # the game's C library names renamed to ds_* (its own libc, apart from the host's)
    "-include", "include/host_libc_rename.h",
])
if not X64:
    # small structs returned in memory, as mwcc does: kept while the 32-bit build is the reference (its captures were
    # taken with it); the 64-bit builds use the platform ABI (clang supports the flag only on i386)
    GAME_FLAGS += " -fpcc-struct-return"
C_FLAGS = "-std=gnu11"
CXX_FLAGS = ("-std=gnu++14 -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit "
             "-fno-sized-deallocation")
# every unit with the full class definitions, in both builds: the layout tools (tools/host_view_layout.py) read the
# types from the 32-bit and the 64-bit debug information (debug information only: the code is the same)
CXX_FLAGS += " -femit-class-debug-always"
if CLANG:
    # GCC-only game flags: -malign-data (GCC's), -fpcc-struct-return (clang: i386 only); clang's name for the class
    # debug information
    GAME_FLAGS = GAME_FLAGS.replace(" -malign-data=abi", "")
    if X64:
        GAME_FLAGS = GAME_FLAGS.replace(" -fpcc-struct-return", "")
    CXX_FLAGS = CXX_FLAGS.replace("-femit-class-debug-always", "-fstandalone-debug")
if args.extra_cflags:
    GAME_FLAGS += " " + args.extra_cflags
# (the guard variant's gdata is larger: its gbss further up, still below the main arena, SDK_MAIN_ARENA_LO)
SECTIONS = ("-Wl,--section-start=.dtcm=0x027e0000 -Wl,--section-start=gdata=0x02001000 "
            f"-Wl,--section-start=gbss={'0x02080000' if args.guards else '0x02040000'}")
M = args.melonds
GUARD_FLAGS = " -DHOST_GUARDS" if args.guards else ""
if X64:
    # the system's own 64-bit libraries; melonDS's 64-bit core (build-core, configured with the JIT and the GDB stub)
    HOST_FLAGS = "-m64 -fno-pie -O1 -g -fno-omit-frame-pointer -Wall -std=gnu11 -DHOST -Iinclude" + GUARD_FLAGS
    # the program above the DS's address space (0x02000000-0x08000000), still below 4 GB
    LINK_FLAGS = f"-m64 -no-pie -Wl,-Ttext-segment=0x10000000 {SECTIONS}"
    HOST_CXX_FLAGS = (f"-m64 -fno-pie -O1 -g -std=c++17 -I{M}/src -I{M}/build-core/src -DJIT_ENABLED -DGDBSTUB_ENABLED "
                      "-DHOST")
    MELON_LIBS = f"{M}/build-core/src/libcore.a {M}/build-core/src/teakra/src/libteakra.a"
    LIBDIR, LIBGCC = "/usr/lib/x86_64-linux-gnu", "/usr/lib/gcc/x86_64-linux-gnu/15/libgcc.a"
else:
    HOST_FLAGS = (f"-m32 -fno-pie -O1 -g -fno-omit-frame-pointer -Wall -std=gnu11 --sysroot={R} -isystem {R}/usr/include "
                  f"-isystem /usr/include/x86_64-linux-gnu -isystem /usr/include -DHOST -Iinclude") + GUARD_FLAGS
    LINK_FLAGS = (f"-m32 -no-pie --sysroot={R} -B{G} -L{G} -Wl,-dynamic-linker,{R}/usr/lib32/ld-linux.so.2 "
                  f"-Wl,--disable-new-dtags -Wl,-rpath,{R}/usr/lib32 {SECTIONS}")
    HOST_CXX_FLAGS = (f"-m32 -fno-pie -O1 -g -std=c++17 --sysroot={R} -isystem {R}/usr/include/x86_64-linux-gnu/c++/15/32 "
                      f"-idirafter {R}/usr/include -idirafter /usr/include/x86_64-linux-gnu -idirafter /usr/include "
                      f"-I{M}/src -I{M}/build-core32/src -DHOST")
    MELON_LIBS = f"{M}/build-core32/src/libcore.a {M}/build-core32/src/teakra/src/libteakra.a"
    LIBDIR, LIBGCC = f"{R}/usr/lib32", f"{G}/libgcc.a"

MWCC_FLAG_MAP = {("-char", "unsigned"): "-funsigned-char"}


def source_flags(source: Path) -> list[str]:
    with open(source, encoding="utf-8", errors="replace") as f:
        for _, line in zip(range(10), f):
            m = re.match(r"\s*//\s*mwcc-flags:\s*(.+?)\s*$", line)
            if m:
                words = m.group(1).split()
                return [g for k, g in MWCC_FLAG_MAP.items()
                        if any(tuple(words[i:i + len(k)]) == k for i in range(len(words)))]
    return []


def sources(base: Path, suffixes):
    for r, _, files in os.walk(base):
        for f in sorted(files):
            p = Path(r) / f
            if p.suffix in suffixes:
                yield p


def main():
    os.chdir(root)
    with open(NINJA_FILE, "w") as file:
        n = ninja_syntax.Writer(file)
        cc_flags = f"{GAME_FLAGS} {C_FLAGS}"
        if args.strict_c:
            cc_flags = cc_flags.replace(" -w ", " ") + " -Werror=pointer-to-int-cast -Werror=int-to-pointer-cast"
        n.rule("cc", f"{args.cc} {cc_flags} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CC $in")
        n.rule("cxx", f"{args.cc} -x c++ {GAME_FLAGS} {CXX_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CXX $in")
        n.rule("hostcc", f"{args.cc} {HOST_FLAGS} $flags -MMD -MF $out.d -c $in -o $out", depfile="$out.d", deps="gcc",
               description="HOSTCC $in")
        n.rule("hostas_S", f"{args.cc} {M_FLAG} -c $in -o $out", description="AS $in")
        n.rule("hostcxx", f"g++ {HOST_CXX_FLAGS} -MMD -MF $out.d -c $in -o $out", depfile="$out.d", deps="gcc",
               description="HOSTCXX $in")
        n.rule("link", f"g++ {LINK_FLAGS} -o $out @$objects {MELON_LIBS} -lstdc++ -lpthread -lm -lc -lgcc",
               description="LINK $out")
        objs = []
        for s in sources(Path("src"), (".c", ".cpp")):
            o = str(build / s.with_suffix(".o"))
            fl = source_flags(s)
            n.build(o, "cxx" if s.suffix == ".cpp" else "cc", str(s), variables={"flags": " ".join(fl)} if fl else None)
            objs.append(o)
        for s in sources(Path("modern/host"), (".c", ".cpp", ".S")):
            if "viewer" in s.parts:
                continue
            o = str(build / s.with_suffix(".o"))
            rule = {".cpp": "hostcxx", ".S": "hostas_S"}.get(s.suffix, "hostcc")
            n.build(o, rule, str(s))
            objs.append(o)
        # The data between the decomp's units (gap objects of the DS build's delinking): generated once from that
        # build, which this branch no longer runs, and kept in modern/gen/. --regen-gen rebuilds it from
        # build/usa/delinks.
        n.rule("gaps", "python3 tools/host_gaps.py $in $out", description="GAPS $out")
        gen_gaps = "modern/gen/gaps.c"  # typed C, the same for every architecture
        if args.regen_gen:
            n.build(gen_gaps, "gaps", "tools/host_objects_aliases.txt", implicit=["tools/host_gaps.py"])
        gaps_c = gen_gaps
        n.build(str(build / "gaps.o"), "hostcc", gaps_c)
        objs.append(str(build / "gaps.o"))
        # game-side runtime pieces: the loaded overlays and the dispatchers of calls to addresses several overlays share
        # (generated C, committed: tools/host_shared_calls.py)
        for s in list(sources(Path("modern/ds"), (".c",))) + [Path("modern/gen/shared_calls.c"),
                                                                Path("modern/gen/shared_table.c")]:
            o = str(build / s.with_suffix(".o"))
            n.build(o, "cc", str(s))
            objs.append(o)
        # the game (and its own C library) in one object
        game_objs = [o for o in objs if "/modern/host/" not in o and not o.endswith("/gaps.o")]
        # DTCM's variables at their DS address (0x027e0000): the SDK computes DTCM addresses from its first one
        dtcm_objs = [o for o in game_objs if "/src/dtcm/" in o]
        game_objs = [o for o in game_objs if o not in dtcm_objs]
        build.mkdir(parents=True, exist_ok=True)
        dtcm_ld = build / "dtcm.ld"
        dtcm_ld.write_text("SECTIONS {\n    .dtcm : { *(.data .data.*) *(.bss .bss.*) *(COMMON) . = 0x4000; }\n}\n")
        n.rule("dtcmld", f"ld -m {LD_EMU} -r -T $script -o $out $in", description="LD -r $out")
        n.build(str(build / "dtcm.o"), "dtcmld", dtcm_objs, implicit=[str(dtcm_ld)], variables={"script": str(dtcm_ld)})
        game_objs.append(str(build / "dtcm.o"))
        # (the DTCM units are in dtcm.o: not linked a second time)
        host_objs = [o for o in objs if o not in game_objs and o not in dtcm_objs]
        game_list = build / "game_objects.txt"
        build.mkdir(parents=True, exist_ok=True)
        game_list.write_text("".join(f"{o}\n" for o in game_objs))
        # the variables in their original order (tools/host_order.py)
        n.rule("order", "python3 tools/host_order.py $in $out", description="ORDER $out")
        order_ld = str(build / "order.ld")
        n.build(order_ld, "order", f"config/{args.version}/arm9", implicit=["tools/host_order.py"])
        # each overlay's units, their variables and static initialisers, for modern/host/overlay.c (generated C,
        # committed: tools/host_overlay_vars.py)
        n.build(str(build / "overlay_table.o"), "hostcc", "modern/gen/overlay_table.c",
                variables={"flags": "-Imodern/host"})
        host_objs.append(str(build / "overlay_table.o"))
        n.rule("partial", f"ld -m {LD_EMU} -r -T $order -o $out @$list", description="LD -r $out")
        if args.guards:
            # the ordinary partial link's map, then the same layout with a guard after every variable
            n.rule("partial_map", f"ld -m {LD_EMU} -r -T $order -Map=$map -o $out @$list", description="LD -r $out")
            n.build([str(build / "game_plain.o"), str(build / "game_plain.map")], "partial_map", game_objs,
                    implicit=[str(game_list), order_ld],
                    variables={"list": str(game_list), "order": order_ld, "map": str(build / "game_plain.map")})
            n.rule("guards", "python3 tools/host_guards.py $in $out", description="GUARDS $out")
            guard_ld, guard_c = str(build / "guards.ld"), str(build / "guard_table.c")
            n.build([guard_ld, guard_c], "guards", str(build / "game_plain.map"), implicit=["tools/host_guards.py"])
            n.build(str(build / "game_all.o"), "partial", game_objs, implicit=[str(game_list), guard_ld],
                    variables={"list": str(game_list), "order": guard_ld})
            n.build(str(build / "guard_table.o"), "hostcc", guard_c, variables={"flags": "-Imodern/host"})
            host_objs.append(str(build / "guard_table.o"))
        else:
            n.build(str(build / "game_all.o"), "partial", game_objs, implicit=[str(game_list), order_ld],
                    variables={"list": str(game_list), "order": order_ld})
        # (the game's C library names don't clash with the host's: include/host_libc_rename.h)
        game_o = str(build / "game_all.o")
        objects_file = build / "objects.txt"
        objects_file.write_text("".join(f"{o}\n" for o in [game_o] + host_objs))
        exe = str(build / "acww")
        n.build(exe, "link", [game_o] + host_objs, implicit=[str(objects_file)], variables={"objects": str(objects_file)})
        # the viewer: a 64-bit SDL2 program (SDL2 headers from --sdl2, the system's libSDL2 at run time)
        n.rule("viewer", f"gcc -O2 -I{args.sdl2}/usr/include -I{args.sdl2}/usr/include/x86_64-linux-gnu $in -o $out "
                         "-l:libSDL2-2.0.so.0", description="VIEWER $out")
        viewer = str(build / "acww-viewer")
        n.build(viewer, "viewer", "modern/host/viewer/viewer.c", implicit=["modern/host/frontend.h"])
        n.default([exe, viewer])


if __name__ == "__main__":
    main()

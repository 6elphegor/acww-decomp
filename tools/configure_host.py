#!/usr/bin/env python3
"""Write build_host.ninja: the game compiled for 32-bit x86 Linux with the host runtime in modern/host/ (see
docs/host.md). Experimental; the DS hardware is being replaced piece by piece.

The game's sources are compiled freestanding, as for the DS (-nostdinc, mwcc's type rules), with -DMODERN -DHOST.
The runtime (modern/host/) uses the host's C library. The names the DS linker script gives to addresses (symbols.txt
aliases, interior labels) come from the modern build's script (build/modern_usa/arm9.ld: PROVIDE lines).

Needs a 32-bit sysroot (memory: acww-host-toolchain): --sysroot <dir>.
"""
import argparse
import os
import re
import sys
from pathlib import Path

import ninja_syntax

parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
parser.add_argument("--sysroot", default=os.path.expanduser("~/acww/toolchains/i386-sysroot"))
parser.add_argument("--cc", default="gcc")
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
parser.add_argument("version", nargs="?", default="usa")
args = parser.parse_args()

root = Path(__file__).resolve().parent.parent
X64 = args.arch == "x86_64"
build = Path("build") / (f"host64{args.suffix}_{args.version}" if X64 else f"host{args.suffix}_{args.version}")
NINJA_FILE = f"build_host64{args.suffix}.ninja" if X64 else f"build_host{args.suffix}.ninja"
R = args.sysroot
G = f"{R}/usr/lib/gcc/x86_64-linux-gnu/15/32"
M_FLAG = "-m64" if X64 else "-m32"
LD_EMU = "elf_x86_64" if X64 else "elf_i386"

GAME_FLAGS = " ".join([
    M_FLAG, "-fno-pie", "-fno-short-enums", "-fsigned-char", "-fshort-wchar", "-ffreestanding", "-nostdinc",
    "-fno-strict-aliasing", "-fpcc-struct-return", "-fno-builtin", "-O1", "-g", "-w", "-fno-omit-frame-pointer", "-falign-functions=4", "-fdata-sections", "-malign-data=abi",
    "-DMODERN", "-DHOST", f"-DGAME_VERSION_{args.version.upper()}", "-Iinclude",
])
C_FLAGS = "-std=gnu11"
CXX_FLAGS = ("-std=gnu++14 -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit "
             "-fno-sized-deallocation")
if X64:
    # no red zone: hw.c's interrupt injection pushes a return address just below the game's stack pointer
    GAME_FLAGS += " -mno-red-zone"
# for now: conversions between pointers and integers are warnings (the game's memory is mapped below 4 GB, so they
# don't lose anything yet). The rewrite toward shared, correct declarations removes them and then this flag
# (docs/host.md; count: tools/host_strict_errors.sh)
CXX_FLAGS += " -fpermissive"
# every unit with the full class definitions, in both builds: the layout tools (tools/host_view_layout.py) read the
# types from the 32-bit and the 64-bit debug information (debug information only: the code is the same)
CXX_FLAGS += " -femit-class-debug-always"
if args.extra_cflags:
    GAME_FLAGS += " " + args.extra_cflags
SECTIONS = ("-Wl,--allow-multiple-definition -Wl,--section-start=.dtcm=0x027e0000 -Wl,--section-start=gdata=0x02001000 "
            "-Wl,--section-start=gbss=0x02040000")
M = args.melonds
if X64:
    # the system's own 64-bit libraries; melonDS's 64-bit core (build-core, configured with the JIT and the GDB stub)
    HOST_FLAGS = "-m64 -fno-pie -O1 -g -fno-omit-frame-pointer -Wall -std=gnu11 -DHOST -Iinclude"
    # the program above the DS's address space (0x02000000-0x08000000), still below 4 GB
    LINK_FLAGS = f"-m64 -no-pie -Wl,-Ttext-segment=0x10000000 {SECTIONS}"
    HOST_CXX_FLAGS = (f"-m64 -fno-pie -O1 -g -std=c++17 -I{M}/src -I{M}/build-core/src -DJIT_ENABLED -DGDBSTUB_ENABLED "
                      "-DHOST")
    MELON_LIBS = f"{M}/build-core/src/libcore.a {M}/build-core/src/teakra/src/libteakra.a"
    LIBDIR, LIBGCC = "/usr/lib/x86_64-linux-gnu", "/usr/lib/gcc/x86_64-linux-gnu/15/libgcc.a"
else:
    HOST_FLAGS = (f"-m32 -fno-pie -O1 -g -fno-omit-frame-pointer -Wall -std=gnu11 --sysroot={R} -isystem {R}/usr/include "
                  f"-isystem /usr/include/x86_64-linux-gnu -isystem /usr/include -DHOST -Iinclude")
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
        n.rule("cc", f"{args.cc} {GAME_FLAGS} {C_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CC $in")
        n.rule("cxx", f"{args.cc} -x c++ {GAME_FLAGS} {CXX_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CXX $in")
        n.rule("hostcc", f"{args.cc} {HOST_FLAGS} -MMD -MF $out.d -c $in -o $out", depfile="$out.d", deps="gcc",
               description="HOSTCC $in")
        n.rule("provides", "python3 tools/host_provides.py $in $out", description="PROVIDES $out")
        n.rule("hostas_S", f"{args.cc} {M_FLAG} -c $in -o $out", description="AS $in")
        n.rule("hostcxx", f"g++ {HOST_CXX_FLAGS} -MMD -MF $out.d -c $in -o $out", depfile="$out.d", deps="gcc",
               description="HOSTCXX $in")
        n.rule("link", f"g++ {LINK_FLAGS} -o $out @$objects $provides {MELON_LIBS} -lstdc++ -lpthread -lm -lc -lgcc",
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
        n.rule("gaps", f"python3 tools/host_gaps.py {'--x86-64 --own-slots tools/host_gap_pointers.txt ' if X64 else ''}$in $out",
               description="GAPS $out")
        gaps_c = str(build / "gaps.c")
        n.build(gaps_c, "gaps", "tools/host_objects_aliases.txt", implicit=["tools/host_gaps.py", "tools/host_gap_pointers.txt"])
        n.build(str(build / "gaps.o"), "hostcc", gaps_c)
        objs.append(str(build / "gaps.o"))
        for s in sources(Path("modern/ds"), (".c",)):
            o = str(build / s.with_suffix(".o"))
            n.build(o, "cc", str(s))
            objs.append(o)
        provides = str(build / "provides.ld")
        n.build(provides, "provides", "build/modern_usa/arm9.ld", implicit=["tools/host_provides.py"])
        # the game (and its own C library) in one object with the C library names made local (host_localize.py)
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
        host_objs = [o for o in objs if o not in game_objs]
        game_list = build / "game_objects.txt"
        build.mkdir(parents=True, exist_ok=True)
        # labels around the game's code (hw.c injects interrupts only there): the partial link concatenates .text
        # in input order
        for edge in ("start", "end"):
            asm = build / f"game_text_{edge}.s"
            asm.write_text(f".text\n.globl host_game_text_{edge}\nhost_game_text_{edge}:\n"
                           '.section .note.GNU-stack,"",@progbits\n')
        n.rule("markeras", f"{args.cc} {M_FLAG} -c $in -o $out", description="AS $in")
        n.build(str(build / "game_text_start.o"), "markeras", str(build / "game_text_start.s"))
        n.build(str(build / "game_text_end.o"), "markeras", str(build / "game_text_end.s"))
        game_objs = [str(build / "game_text_start.o")] + game_objs + [str(build / "game_text_end.o")]
        game_list.write_text("".join(f"{o}\n" for o in game_objs))
        # thunks for calls to addresses several overlays share (tools/modern_shared.py; ld --wrap in the partial
        # link, where the references are still undefined)
        n.rule("shared", f"python3 tools/modern_shared.py --arch {'x86_64' if X64 else 'x86'} --nm nm --objects $list --config config/{args.version}/arm9 "
                         f"--asm {build}/shared.s --wrap {build}/wrap.txt > {build}/shared.log", description="SHARED")
        n.build([str(build / "shared.s"), str(build / "wrap.txt")], "shared", game_objs,
                implicit=["tools/modern_shared.py", str(game_list)], variables={"list": str(game_list)})
        n.rule("hostas", f"{args.cc} {M_FLAG} -c $in -o $out", description="AS $in")
        n.build(str(build / "shared.o"), "hostas", str(build / "shared.s"))
        host_objs.append(str(build / "shared.o"))
        # the variables in their original order (tools/host_order.py)
        n.rule("order", "python3 tools/host_order.py $in $out", description="ORDER $out")
        order_ld = str(build / "order.ld")
        n.build(order_ld, "order", f"config/{args.version}/arm9", implicit=["tools/host_order.py"])
        # the game's operator new/new[] are mwcc's names (unsigned long); its code compiled here calls the x86 names
        # (unsigned int). Aliases inside the game object (made local with the C library names afterwards).
        n.rule("partial", f"ld -m {LD_EMU} -r -T $order --defsym=_Znwj=_Znwm --defsym=_Znaj=_Znam -o $out @$list @$wrap",
               description="LD -r $out")
        n.build(str(build / "game_all.o"), "partial", game_objs, implicit=[str(game_list), str(build / "wrap.txt"), order_ld],
                variables={"list": str(game_list), "wrap": str(build / "wrap.txt"), "order": order_ld})
        libs = f"{LIBDIR}/libc.so.6 {LIBDIR}/libm.so.6 {LIBGCC} {LIBDIR}/libstdc++.so.6"
        n.rule("localize", f"python3 tools/host_localize.py nm objcopy $in $out {libs}", description="LOCALIZE $out")
        game_o = str(build / "game.o")
        n.build(game_o, "localize", str(build / "game_all.o"), implicit=["tools/host_localize.py"])
        objects_file = build / "objects.txt"
        objects_file.write_text("".join(f"{o}\n" for o in [game_o] + host_objs))
        if X64:
            # the labels inside data at their 64-bit offsets (tools/host_relayout.py; needs the 32-bit build's
            # game object for the DS layout: build build_host.ninja first)
            n.rule("relayout", "python3 tools/host_relayout.py $in $out", description="RELAYOUT $out")
            relaid = str(build / "provides64.ld")
            n.build(relaid, "relayout", [provides, f"build/host_{args.version}/game_all.o", str(build / "game_all.o")],
                    implicit=["tools/host_relayout.py"])
            provides = relaid
        exe = str(build / "acww")
        n.build(exe, "link", [game_o] + host_objs, implicit=[provides, str(objects_file)],
                variables={"objects": str(objects_file), "provides": provides})
        # the viewer: a 64-bit SDL2 program (SDL2 headers from --sdl2, the system's libSDL2 at run time)
        n.rule("viewer", f"gcc -O2 -I{args.sdl2}/usr/include -I{args.sdl2}/usr/include/x86_64-linux-gnu $in -o $out "
                         "-l:libSDL2-2.0.so.0", description="VIEWER $out")
        viewer = str(build / "acww-viewer")
        n.build(viewer, "viewer", "modern/host/viewer/viewer.c", implicit=["modern/host/frontend.h"])
        n.default([exe, viewer])


if __name__ == "__main__":
    main()

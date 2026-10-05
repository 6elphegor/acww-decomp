#!/usr/bin/env python3
"""Generates build_modern.ninja: the non-matching build of the game with a modern compiler (arm-none-eabi-gcc).

The matching build (tools/configure.py, build.ninja) stays the reference; this build compiles the same sources with
GCC so the code can move away from mwcc-only constructs, first on the DS (the result runs in an emulator), later on
other hosts. Code that only the matching build needs sits behind `#ifndef MODERN` / `#ifdef MODERN` (the macro is
defined here and never by mwcc). See docs/modern.md.
"""

import argparse
import os
import re
import sys
from pathlib import Path

import ninja_syntax


parser = argparse.ArgumentParser(description="Generates build_modern.ninja")
parser.add_argument("--toolchain", type=Path, default=None,
                    help="Directory with arm-none-eabi-gcc (default: $ARM_TOOLCHAIN, then PATH)")
parser.add_argument("--lto-check", action="store_true",
                    help="Write build_modern_lto.ninja instead: compile with -flto and report declarations that don't "
                         "match their definition across files (-Wlto-type-mismatch, -Wodr)")
parser.add_argument("version", nargs="?", default="usa", help="Game version")
args = parser.parse_args()

root_path = Path(".")
src_path = root_path / "src"
build_path = root_path / "build" / (f"modern_lto_{args.version}" if args.lto_check else f"modern_{args.version}")

toolchain = args.toolchain or (Path(os.environ["ARM_TOOLCHAIN"]) if "ARM_TOOLCHAIN" in os.environ else None)
prefix = str(toolchain / "arm-none-eabi-") if toolchain else "arm-none-eabi-"
CC = prefix + "gcc"
CXX = prefix + "g++"
AS = prefix + "as"
NM = prefix + "nm"
OBJCOPY = prefix + "objcopy"
PYTHON = sys.executable
DSD = "./dsd"
config_path = root_path / "config" / args.version / "arm9"
matching_build = root_path / "build" / args.version
modern_path = root_path / "modern" / "ds"

COMMON_FLAGS = " ".join([
    "-mcpu=arm946e-s",          # Target processor
    "-mthumb",                  # Thumb by default, like the game (-thumb with mwcc)
    "-mthumb-interwork",        # ARM/Thumb interworking
    "-msoft-float",             # The DS has no FPU
    "-mabi=aapcs",
    "-fno-short-enums",         # int-sized enums (-enum int with mwcc)
    "-fsigned-char",            # char is signed (-char signed with mwcc)
    "-fshort-wchar",            # 16-bit wchar_t, like MSL's
    "-ffreestanding",           # No host library: the game ships its own (MSL, NitroSDK)
    "-nostdinc",                # Only the project's headers
    "-fno-strict-aliasing",     # The game reinterprets memory freely
    "-fno-builtin",             # The game's own memcpy/memset/strlen are the ones to call
    "-ffunction-sections",
    "-fdata-sections",
    "-Os",
    "-g",
    "-funreachable-traps",      # falling off a non-void function (UB in C++) traps instead of running on
    "-DMODERN",
    *(["-flto"] if args.lto_check else []),
    f"-DGAME_VERSION_{args.version.upper()}",
    "-Iinclude",
])
C_FLAGS = "-std=gnu11"
CXX_FLAGS = " ".join([
    "-std=gnu++14",
    "-fno-exceptions",          # -Cpp_exceptions off with mwcc
    "-fno-rtti",                # -RTTI off with mwcc
    "-fno-threadsafe-statics",  # No guards around function-local statics, like mwcc
    "-fno-use-cxa-atexit",
    "-fno-sized-deallocation",  # mwcc's runtime has only the unsized operator delete
])


# The `// mwcc-flags:` header of a source file (see configure.py) may change more than code generation: ARM instead
# of Thumb, unsigned char. Those carry over; optimisation and string-pooling flags don't.
MWCC_FLAG_MAP = {
    ("-nothumb",): "-marm",
    ("-char", "unsigned"): "-funsigned-char",
}


def source_flags(source: Path) -> list[str]:
    with open(source, encoding="utf-8", errors="replace") as f:
        for _, line in zip(range(10), f):
            match = re.match(r"\s*//\s*mwcc-flags:\s*(.+?)\s*$", line)
            if match:
                words = match.group(1).split()
                return [gcc for mwcc, gcc in MWCC_FLAG_MAP.items()
                        if any(tuple(words[i:i + len(mwcc)]) == mwcc for i in range(len(words)))]
    return []


def source_files(suffixes=(".c", ".cpp")):
    for base in (src_path, modern_path):
        for root, _, files in os.walk(base):
            for file in sorted(files):
                path = Path(root) / file
                if path.suffix in suffixes:
                    yield path


def gap_objects() -> list[str]:
    """Bytes that no source file owns yet (docs/unmatched.md): the matching build's delinked gap objects"""
    objects_file = matching_build / "objects_aliases.txt"
    if not objects_file.is_file():
        sys.exit(f"configure_modern.py: {objects_file} is missing; build the matching build first (ninja)")
    return [line.strip().strip('"') for line in objects_file.read_text().splitlines()
            if "/delinks/_dsd_gap@" in line]


def main():
    if args.lto_check:
        return lto_check()
    with open("build_modern.ninja", "w") as file:
        n = ninja_syntax.Writer(file)
        n.variable("builddir", str(build_path))
        n.newline()
        n.rule("cc", f"{CC} {COMMON_FLAGS} {C_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CC $in")
        n.rule("cxx", f"{CXX} {COMMON_FLAGS} {CXX_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CXX $in")
        n.newline()

        n.rule("as", f"{PYTHON} tools/gas_from_mwasm.py $in $out.s && "
                     f"{AS} -mcpu=arm946e-s -mthumb-interwork $out.s -o $out", description="AS $in")
        n.rule("ldscript", f"{PYTHON} tools/modern_link.py --config {config_path} --lcf {matching_build}/arm9.lcf "
                           f"--order-lcf {matching_build}/arm9_force_active.lcf --objects $objects --nm {NM} -o $out",
               description="LDSCRIPT $out")
        n.rule("link", f"{CC} -nostdlib -nostartfiles -mcpu=arm946e-s -mthumb-interwork -T $ldscript @$objects "
                       f"-lgcc -Wl,--no-check-sections -Wl,--orphan-handling=error -Wl,--no-warn-rwx-segments -Wl,-Map,$out.map -o $out", description="LINK $out")
        n.rule("rom", f"{PYTHON} tools/modern_rom.py --elf $in --config {config_path} --build {build_path} "
                      f"--objcopy {OBJCOPY} --dsd {DSD} --baserom $baserom -o $out", description="ROM $out")
        n.newline()

        objects = []
        for source in source_files():
            obj = str(build_path / source.with_suffix(".o"))
            flags = source_flags(source)
            n.build(obj, "cxx" if source.suffix == ".cpp" else "cc", str(source),
                    variables={"flags": " ".join(flags)} if flags else None)
            objects.append(obj)
        for source in source_files((".s",)):
            obj = str(build_path / source.with_suffix(".o"))
            n.build(obj, "as", str(source), implicit=["tools/gas_from_mwasm.py"])
            objects.append(obj)
        n.rule("gap", f"{PYTHON} tools/modern_gap.py $in $out", description="GAP $in")
        for gap in gap_objects():
            obj = str(build_path / "gaps" / Path(gap).name)
            n.build(obj, "gap", gap, implicit=["tools/modern_gap.py"])
            objects.append(obj)
        n.newline()
        n.build("objects", "phony", objects)

        objects_file = build_path / "objects.txt"
        build_path.mkdir(parents=True, exist_ok=True)
        objects_file.write_text("".join(f"{o}\n" for o in objects))
        ldscript = str(build_path / "arm9.ld")
        n.build(ldscript, "ldscript", objects, implicit=["tools/modern_link.py", str(objects_file)],
                variables={"objects": str(objects_file)})
        elf = str(build_path / "arm9.elf")
        n.build(elf, "link", objects, implicit=[ldscript, str(objects_file)],
                variables={"ldscript": ldscript, "objects": str(objects_file)})
        rom = f"acww_{args.version}_modern.nds"
        n.build(rom, "rom", elf, implicit=["tools/modern_rom.py", "tools/fix_header.py"],
                variables={"baserom": f"extract/baserom_acww_{args.version}.nds"})
        n.build("elf", "phony", elf)
        n.default(rom)


def lto_check():
    with open("build_modern_lto.ninja", "w") as file:
        n = ninja_syntax.Writer(file)
        n.variable("builddir", str(build_path))
        n.rule("cc", f"{CC} {COMMON_FLAGS} {C_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CC $in")
        n.rule("cxx", f"{CXX} {COMMON_FLAGS} {CXX_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CXX $in")
        # A relocatable LTO link reads every file's declarations; the warnings are the result
        n.rule("lto", f"{CXX} -flto -flto-partition=none -r -nostdlib -mcpu=arm946e-s -Wlto-type-mismatch -Wodr "
                      f"@$objects -o $out 2> $out.log; cat $out.log", description="LTO check")
        objects = []
        for source in source_files():
            obj = str(build_path / source.with_suffix(".o"))
            flags = source_flags(source)
            n.build(obj, "cxx" if source.suffix == ".cpp" else "cc", str(source),
                    variables={"flags": " ".join(flags)} if flags else None)
            objects.append(obj)
        build_path.mkdir(parents=True, exist_ok=True)
        objects_file = build_path / "objects.txt"
        objects_file.write_text("".join(f"{o}\n" for o in objects))
        n.build(str(build_path / "lto_check.o"), "lto", objects, variables={"objects": str(objects_file)})
        n.default(str(build_path / "lto_check.o"))


if __name__ == "__main__":
    sys.exit(main())

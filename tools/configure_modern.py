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
parser.add_argument("version", nargs="?", default="usa", help="Game version")
args = parser.parse_args()

root_path = Path(".")
src_path = root_path / "src"
build_path = root_path / "build" / f"modern_{args.version}"

toolchain = args.toolchain or (Path(os.environ["ARM_TOOLCHAIN"]) if "ARM_TOOLCHAIN" in os.environ else None)
prefix = str(toolchain / "arm-none-eabi-") if toolchain else "arm-none-eabi-"
CC = prefix + "gcc"
CXX = prefix + "g++"

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
    "-DMODERN",
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


def source_files():
    for root, _, files in os.walk(src_path):
        for file in sorted(files):
            path = Path(root) / file
            if path.suffix in (".c", ".cpp"):
                yield path


def main():
    with open("build_modern.ninja", "w") as file:
        n = ninja_syntax.Writer(file)
        n.variable("builddir", str(build_path))
        n.newline()
        n.rule("cc", f"{CC} {COMMON_FLAGS} {C_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CC $in")
        n.rule("cxx", f"{CXX} {COMMON_FLAGS} {CXX_FLAGS} $flags -MMD -MF $out.d -c $in -o $out",
               depfile="$out.d", deps="gcc", description="CXX $in")
        n.newline()

        objects = []
        for source in source_files():
            obj = str(build_path / source.with_suffix(".o"))
            flags = source_flags(source)
            n.build(obj, "cxx" if source.suffix == ".cpp" else "cc", str(source),
                    variables={"flags": " ".join(flags)} if flags else None)
            objects.append(obj)
        n.newline()
        n.build("objects", "phony", objects)
        n.default("objects")


if __name__ == "__main__":
    sys.exit(main())

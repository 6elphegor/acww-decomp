#!/usr/bin/env python3

###
# Compiles a source file with the project's compiler and flags, and diffs one function's disassembly against the
# original. Relocated bytes (calls, pool words) are only filled in at link time, so they're taken from the original.
#
# Usage:
#   python3 tools/asmdiff.py src/main/Unk_02050288.cpp _ZN12Unk_02050288C2Eiii
###

import argparse
import difflib
import re
import subprocess
import tempfile
from pathlib import Path

from compiler_search import Elf, compile, config_path, load_modules, load_symbols, mwcc_root, original_code
from mwcc_config import CC_FLAGS, MWCC_VERSION

OBJDUMP = "arm-none-eabi-objdump"


def disassemble(code: bytes, thumb: bool, address: int) -> list[str]:
    with tempfile.NamedTemporaryFile(suffix=".bin") as f:
        f.write(code)
        f.flush()
        mode = ["-Mforce-thumb"] if thumb else []
        output = subprocess.run([OBJDUMP, "-D", "-b", "binary", "-marm", *mode, "--no-show-raw-insn",
                                 f"--adjust-vma={address:#x}", f.name], capture_output=True, text=True, check=True).stdout
    lines = []
    for line in output.splitlines():
        match = re.match(r"\s+([0-9a-f]+):\s+(.*)", line)
        if match:
            # Drop comments, which differ for pc-relative loads
            text = re.sub(r"\s*[@;].*", "", match.group(2)).strip()
            lines.append(f"{int(match.group(1), 16) - address:5x}: {text}")
    return lines


def main() -> None:
    parser = argparse.ArgumentParser(description="Diffs a compiled function against the original")
    parser.add_argument("source", type=Path)
    parser.add_argument("function", help="Symbol name, as in symbols.txt")
    parser.add_argument("--flags", default=CC_FLAGS, help="Compiler flags, defaults to the project's flags")
    parser.add_argument("--version", default=MWCC_VERSION, help="Compiler version, defaults to the project's")
    args = parser.parse_args()

    symbols = load_symbols()
    if args.function not in symbols:
        parser.error(f"{args.function} not found in symbols.txt")
    address, size = symbols[args.function]
    original = original_code(args.function, address, size, load_modules())

    with tempfile.TemporaryDirectory() as tmp:
        out = Path(tmp) / "out.o"
        if not compile(mwcc_root / args.version / "mwccarm.exe", args.flags, args.source, out):
            parser.error("compilation failed")
        elf = Elf(out.read_bytes())
        functions = elf.functions()
        if args.function not in functions:
            parser.error(f"{args.function} not found in the compiled object")
        shndx, offset, compiled_size = functions[args.function]
        compiled = bytearray(elf.section_data(shndx)[offset:offset + compiled_size])
        for relocated in elf.relocated_offsets(shndx):
            i = relocated - offset
            if 0 <= i < min(len(compiled), len(original)):
                compiled[i] = original[i]

    thumb = "thumb" in next(line for p in config_path.rglob("symbols.txt") for line in p.read_text().splitlines()
                            if line.startswith(args.function + " "))
    diff = list(difflib.unified_diff(disassemble(original, thumb, address), disassemble(compiled, thumb, address),
                                     "original", "compiled", lineterm="", n=3))
    if not diff:
        print(f"{args.function}: match")
    else:
        print("\n".join(diff))


if __name__ == "__main__":
    main()

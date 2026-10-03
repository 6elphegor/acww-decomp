#!/usr/bin/env python3
"""Expand `.incbin "file", offset, length` lines of an assembly unit into `.byte` directives.

mwasmarm's own .incbin reads the file in text mode (0x0a bytes come out as 0x0d), so units that take bytes from the
extracted ROM (the ARM9 secure area's filler) go through this step first; the build assembles the expanded copy.
Usage: expand_incbin.py <in.s> <out.s>
"""
import re
import sys
from pathlib import Path

INCBIN = re.compile(r'^(\s*)\.incbin\s+"([^"]+)"\s*(?:,\s*(\w+))?\s*(?:,\s*(\w+))?\s*(;.*)?$')


def expand(line: str) -> str:
    match = INCBIN.match(line)
    if not match:
        return line
    indent, path, offset, length, comment = match.groups()
    data = Path(path).read_bytes()
    start = int(offset, 0) if offset else 0
    end = start + int(length, 0) if length else len(data)
    if end > len(data):
        sys.exit(f"expand_incbin.py: {path} is too short for offset {start:#x} + length {end - start:#x}")
    chunk = data[start:end]
    out = [f"{indent}{comment}"] if comment else []
    for i in range(0, len(chunk), 16):
        out.append(f"{indent}.byte " + ", ".join(f"0x{b:02x}" for b in chunk[i:i + 16]))
    return "\n".join(out)


def main():
    src, dst = sys.argv[1:3]
    lines = Path(src).read_text().splitlines()
    Path(dst).write_text("\n".join(expand(line) for line in lines) + "\n")


if __name__ == "__main__":
    main()

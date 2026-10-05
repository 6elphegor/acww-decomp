#!/usr/bin/env python3
"""Copy a delinked gap object of the matching build (bytes that no source file owns yet) for the modern build.

dsd writes ELF objects without an ARM EABI version in e_flags; GNU ld refuses to link them with EABI5 objects. The
copy gets EABI version 5. Usage: modern_gap.py <in.o> <out.o>
"""
import struct
import sys
from pathlib import Path

data = bytearray(Path(sys.argv[1]).read_bytes())
if data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
    sys.exit(f"modern_gap.py: {sys.argv[1]} is not a 32-bit little-endian ELF file")
(flags,) = struct.unpack_from("<I", data, 0x24)
struct.pack_into("<I", data, 0x24, (flags & 0x00ffffff) | 0x05000000)
Path(sys.argv[2]).parent.mkdir(parents=True, exist_ok=True)
Path(sys.argv[2]).write_bytes(data)

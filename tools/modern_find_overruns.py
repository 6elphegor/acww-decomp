#!/usr/bin/env python3
"""Find addresses of the form `symbol + offset` that point past the end of the symbol's object (modern build).

The original image has its variables at fixed addresses, and the decompiled code sometimes reaches one variable
through another (`sFieldActions + 0x46c` is the next variable; a thread stack passed as the address of the variable
after the stack). The matching build places every object where it was, so this works there; the modern build
places them differently. In GCC's objects such an address is an R_ARM_ABS32 relocation whose addend (stored in the
word, REL format) is at or beyond the size of the target symbol. Addresses computed at run time (a pointer plus a
constant) aren't found by this.

Usage: modern_find_overruns.py <nm> <objects.txt>
"""
import struct
import subprocess
import sys
from pathlib import Path

R_ARM_ABS32 = 2


def read_elf(path):
    data = Path(path).read_bytes()
    if data[:4] != b"\x7fELF":
        return None
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2e)
    secs = []
    for i in range(shnum):
        secs.append(struct.unpack_from("<10I", data, shoff + i * shentsize))
    return data, secs


def main():
    nm, objects_file = sys.argv[1], sys.argv[2]
    objects = [l.strip() for l in open(objects_file) if l.strip()]
    sizes = {}
    out = subprocess.run([nm, "-S", "--defined-only", *objects], capture_output=True, text=True).stdout
    for line in out.splitlines():
        p = line.split()
        if len(p) == 4 and p[2] in "BbDdRrGgSs":
            sizes.setdefault(p[3], int(p[1], 16))
    hits = 0
    for obj in objects:
        r = read_elf(obj)
        if not r:
            continue
        data, secs = r
        for sh in secs:
            name, typ, flags, addr, offset, size, link, info, align, entsize = sh
            if typ != 9:  # SHT_REL
                continue
            symtab = secs[link]
            strtab = secs[symtab[6]]
            target = secs[info]
            for off in range(offset, offset + size, 8):
                r_offset, r_info = struct.unpack_from("<II", data, off)
                if r_info & 0xff != R_ARM_ABS32:
                    continue
                si = r_info >> 8
                st_name, st_value, st_size, st_info, st_other, st_shndx = struct.unpack_from(
                    "<IIIBBH", data, symtab[4] + 16 * si)
                end = data.index(b"\0", strtab[4] + st_name)
                sym = data[strtab[4] + st_name:end].decode(errors="replace")
                if not sym or (st_info & 0xf) == 3:  # section symbol: addend is an offset in the section
                    continue
                if target[1] == 8:  # NOBITS
                    continue
                addend, = struct.unpack_from("<i", data, target[4] + r_offset)
                full = sizes.get(sym)
                if full and (addend >= full or addend < 0):
                    print(f"{obj}: {sym} + {addend:#x} (size {full:#x})")
                    hits += 1
    print(f"{hits} references past the end of their symbol", file=sys.stderr)


if __name__ == "__main__":
    main()

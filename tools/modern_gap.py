#!/usr/bin/env python3
"""Copy a delinked gap object of the matching build (bytes that no source file owns yet) for the modern build.

dsd's objects need two fixes before GNU ld links them correctly:
  * e_flags has no ARM EABI version; GNU ld refuses to link them with EABI5 objects. The copy gets EABI version 5.
  * the symbol table lists the (weak, undefined) references after the locals but sh_info, the index of the first
    non-local symbol, counts them as locals. mwld doesn't care; GNU ld treats them as local undefined symbols and
    resolves them to 0 (a `bl` becomes a `nop`, a pointer in a literal pool becomes 0). The copy orders the table
    locals first, sets sh_info, renumbers the relocations, and makes the undefined references strong, so that a
    missing symbol is a link error instead of a silent 0.
  * the relocations are RELA (addend in the relocation); ARM objects are REL and GNU ld ignores RELA addends
    there (`gWeatherManager + 0x1000` became `gWeatherManager`). The copy converts them to REL: the addend goes
    into the word (R_ARM_ABS32) or the branch offset (R_ARM_PC24).
Usage: modern_gap.py <in.o> <out.o>
"""
import struct
import sys
from pathlib import Path

SHT_SYMTAB, SHT_REL, SHT_RELA = 2, 9, 4
STB_LOCAL, STB_GLOBAL, STB_WEAK = 0, 1, 2


def main():
    data = bytearray(Path(sys.argv[1]).read_bytes())
    if data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
        sys.exit(f"modern_gap.py: {sys.argv[1]} is not a 32-bit little-endian ELF file")
    (flags,) = struct.unpack_from("<I", data, 0x24)
    struct.pack_into("<I", data, 0x24, (flags & 0x00ffffff) | 0x05000000)

    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum = struct.unpack_from("<HH", data, 0x2e)
    sections = []
    for i in range(shnum):
        off = shoff + i * shentsize
        name, typ, sflags, addr, offset, size, link, info, align, entsize = struct.unpack_from("<10I", data, off)
        sections.append(dict(hdr=off, type=typ, offset=offset, size=size, link=link, info=info, entsize=entsize))

    for si, sec in enumerate(sections):
        if sec["type"] != SHT_SYMTAB:
            continue
        n = sec["size"] // 16
        syms = [data[sec["offset"] + 16 * k:sec["offset"] + 16 * (k + 1)] for k in range(n)]
        binding = [s[12] >> 4 for s in syms]
        order = [k for k in range(n) if binding[k] == STB_LOCAL] + [k for k in range(n) if binding[k] != STB_LOCAL]
        new_index = {old: new for new, old in enumerate(order)}
        for new, old in enumerate(order):
            entry = bytearray(syms[old])
            shndx, = struct.unpack_from("<H", entry, 14)
            if binding[old] == STB_WEAK and shndx == 0:
                entry[12] = (STB_GLOBAL << 4) | (entry[12] & 0xf)
            data[sec["offset"] + 16 * new:sec["offset"] + 16 * (new + 1)] = entry
        first_global = sum(1 for b in binding if b == STB_LOCAL)
        struct.pack_into("<I", data, sec["hdr"] + 28, first_global)
        for rel in sections:
            if rel["type"] not in (SHT_REL, SHT_RELA) or rel["link"] != si:
                continue
            step = 8 if rel["type"] == SHT_REL else 12
            for off in range(rel["offset"], rel["offset"] + rel["size"], step):
                r_info, = struct.unpack_from("<I", data, off + 4)
                sym, typ = r_info >> 8, r_info & 0xff
                struct.pack_into("<I", data, off + 4, (new_index[sym] << 8) | typ)

    for sec in sections:
        if sec["type"] != SHT_RELA:
            continue
        target = sections[sec["info"]]
        entries = []
        for off in range(sec["offset"], sec["offset"] + sec["size"], 12):
            r_offset, r_info, r_addend = struct.unpack_from("<IIi", data, off)
            typ = r_info & 0xff
            where = target["offset"] + r_offset
            if typ == 2:  # R_ARM_ABS32
                word, = struct.unpack_from("<I", data, where)
                struct.pack_into("<I", data, where, (word + r_addend) & 0xffffffff)
            elif typ == 1:  # R_ARM_PC24
                insn, = struct.unpack_from("<I", data, where)
                struct.pack_into("<I", data, where, (insn & 0xff000000) | ((r_addend >> 2) & 0x00ffffff))
            else:
                sys.exit(f"modern_gap.py: {sys.argv[1]}: relocation type {typ} not handled")
            entries.append((r_offset, r_info))
        for k, (r_offset, r_info) in enumerate(entries):
            struct.pack_into("<II", data, sec["offset"] + 8 * k, r_offset, r_info)
        struct.pack_into("<I", data, sec["hdr"] + 4, SHT_REL)
        struct.pack_into("<I", data, sec["hdr"] + 20, 8 * len(entries))
        struct.pack_into("<I", data, sec["hdr"] + 36, 8)

    Path(sys.argv[2]).parent.mkdir(parents=True, exist_ok=True)
    Path(sys.argv[2]).write_bytes(data)


if __name__ == "__main__":
    main()

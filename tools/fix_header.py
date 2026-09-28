#!/usr/bin/env python3

###
# Restores the secure area CRC in a built ROM's header without needing the ARM7 BIOS.
#
# The header stores a CRC of the *encrypted* secure area. dsd needs the Blowfish key from the
# ARM7 BIOS to compute it, and writes 0 otherwise. The secure area itself is stored decrypted and
# rebuilds identically, so the CRC is copied from the base ROM and the header CRC is recomputed.
#
# Usage:
#   python3 tools/fix_header.py <built.nds> --baserom <baserom.nds> -o <out.nds>
###

import argparse
from pathlib import Path

SECURE_AREA_CRC_OFFSET = 0x6c
HEADER_CRC_OFFSET = 0x15e
SECURE_AREA_START = 0x4000
SECURE_AREA_SIZE = 0x800


def crc16_modbus(data: bytes) -> int:
    crc = 0xffff
    for byte in data:
        crc ^= byte
        for _ in range(8):
            crc = (crc >> 1) ^ 0xa001 if crc & 1 else crc >> 1
    return crc


def main() -> None:
    parser = argparse.ArgumentParser(description="Restores the secure area CRC in a built ROM's header")
    parser.add_argument("rom", type=Path, help="ROM built by dsd without the ARM7 BIOS")
    parser.add_argument("--baserom", type=Path, required=True, help="Original ROM")
    parser.add_argument("-o", type=Path, dest="out", required=True, help="Output ROM")
    args = parser.parse_args()

    rom = bytearray(args.rom.read_bytes())
    baserom = args.baserom.read_bytes()

    secure_area = slice(SECURE_AREA_START, SECURE_AREA_START + SECURE_AREA_SIZE)
    if rom[secure_area] == baserom[secure_area]:
        rom[SECURE_AREA_CRC_OFFSET:SECURE_AREA_CRC_OFFSET + 2] = \
            baserom[SECURE_AREA_CRC_OFFSET:SECURE_AREA_CRC_OFFSET + 2]
    else:
        # The CRC can't be computed without the Blowfish key; leave it as dsd wrote it
        print(f"{args.rom}: secure area differs from base ROM, secure area CRC not restored")

    header_crc = crc16_modbus(rom[:HEADER_CRC_OFFSET])
    rom[HEADER_CRC_OFFSET:HEADER_CRC_OFFSET + 2] = header_crc.to_bytes(2, "little")

    args.out.write_bytes(rom)


if __name__ == "__main__":
    main()

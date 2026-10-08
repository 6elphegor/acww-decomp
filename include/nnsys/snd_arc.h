#ifndef NNSYS_SND_ARC_H
#define NNSYS_SND_ARC_H

#include "types.h"
#include "nitro/fs.h"

// NitroSystem's sound archive object (NNSSndArc, sndarc.c: src/autoload_2/unk_0210b448.c): the SDAT header, the file
// it is read from (or 0 for an archive in memory) and the FAT, symbol and info blocks once loaded. Offsets are the DS's
// (on 64-bit hosts the FSFile is 8-byte aligned and the pointers are 8 bytes).
struct Fat;
typedef struct NNSSndArc {
    u8 sig[4];              // 0x00 'SDAT'
    u32 magic;              // 0x04
    u32 fileSize;           // 0x08
    u16 hdrSize;            // 0x0c
    u16 nBlocks;            // 0x0e
    u32 symbOff;            // 0x10
    u32 symbSize;           // 0x14
    u32 infoOff;            // 0x18
    u32 infoSize;           // 0x1c
    u32 fatOff;             // 0x20
    u32 fatSize;            // 0x24
    u32 fileOff;            // 0x28
    u32 fileBlkSize;        // 0x2c
    s32 fromFile;           // 0x30
    FSFile file;            // 0x34
    FSFileID id;            // 0x7c
    struct Fat *fat;        // 0x84
    u8 *symb;               // 0x88
    u8 *info;               // 0x8c
} NNSSndArc;

#endif // NNSYS_SND_ARC_H

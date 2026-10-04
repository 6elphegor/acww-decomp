#ifndef GFX_NNSG3DRESTEX_H
#define GFX_NNSG3DRESTEX_H

#include "types.h"

// NitroSystem G3D TEX0 block (NNSG3dResTex, partial) with its dictionary records (NNSG3dResDict, entry header,
// palette entry), parsed in src/main/unk_020abea8.cpp and unk_020ac750.cpp. G3dResAccess views the same block.

struct NNSG3dResDictEntryHeader {
    /* 0x0 */ u16 sizeUnit;
    /* 0x2 */ u16 ofsName;
    /* 0x4 */ u8 data[4];
};

struct NNSG3dResDict {
    /* 0x0 */ u8 rev;
    /* 0x1 */ u8 num;
    /* 0x2 */ u16 size;
    /* 0x4 */ u16 pad;
    /* 0x6 */ u16 ofsEntry;
};

struct NNSG3dResTex {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 texKey;
    /* 0x0c */ u8 pad_0c[0x20];
    /* 0x2c */ u32 plttKey;
    /* 0x30 */ u8 pad_30[4];
    /* 0x34 */ u16 ofsPlttDict;
    /* 0x36 */ u8 pad_36[6];
    /* 0x3c */ NNSG3dResDict dict;
};

struct NNSG3dResDictPlttData {
    /* 0x0 */ u16 offset;
    /* 0x2 */ u16 flag;
};

#endif

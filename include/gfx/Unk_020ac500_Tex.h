#ifndef GFX_UNK_020AC500_TEX_H
#define GFX_UNK_020AC500_TEX_H

#include "types.h"

// Texture resource block (NNS-style TEX0 header with its palette/texture dictionaries), parsed in
// src/main/unk_020abea8.cpp and unk_020ac750.cpp.

struct Unk_020ac500_DictHdr {
    /* 0x0 */ u16 sizeUnit;
    /* 0x2 */ u16 ofsName;
    /* 0x4 */ u8 data[4];
};

struct Unk_020ac500_Dict {
    /* 0x0 */ u8 rev;
    /* 0x1 */ u8 num;
    /* 0x2 */ u16 size;
    /* 0x4 */ u16 pad;
    /* 0x6 */ u16 ofsEntry;
};

struct Unk_020ac500_Tex {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 texKey;
    /* 0x0c */ u8 pad_0c[0x20];
    /* 0x2c */ u32 plttKey;
    /* 0x30 */ u8 pad_30[4];
    /* 0x34 */ u16 ofsPlttDict;
    /* 0x36 */ u8 pad_36[6];
    /* 0x3c */ Unk_020ac500_Dict dict;
};

struct Unk_020ac500_Pltt {
    /* 0x0 */ u16 offset;
    /* 0x2 */ u16 flag;
};

#endif

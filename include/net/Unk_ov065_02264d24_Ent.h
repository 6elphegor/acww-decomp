#ifndef NET_UNK_OV065_02264D24_ENT_H
#define NET_UNK_OV065_02264D24_ENT_H

#include "types.h"

// Cache entry with an LRU stamp (src/ov065/unk_ov065_02261638.cpp, src/ov065/unk_ov065_02264d0c.cpp).

struct Unk_ov065_02264d24_Ent {
    /* 0x00 */ u8 unk_00[0x50];
    /* 0x50 */ s32 lastUsed;
    /* 0x54 */ u8 unk_54[6];
    /* 0x5a */ u8 inUse;
    /* 0x5b */ u8 unk_5b;
};

#endif

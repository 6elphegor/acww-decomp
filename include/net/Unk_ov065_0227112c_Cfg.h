#ifndef NET_UNK_OV065_0227112C_CFG_H
#define NET_UNK_OV065_0227112C_CFG_H

#include "types.h"

// DWC friend-match init config and a 64-bit hi/lo pair (src/ov065/unk_ov065_0226fc18.cpp,
// src/ov065/unk_ov065_02270e34.cpp).

struct Unk_ov065_0227112c_Cfg {
    /* 0x00 */ u8 inGameName[0x16];
    /* 0x16 */ char gsbrcd[14];
    /* 0x24 */ void *allocFunc;
    /* 0x28 */ void *freeFunc;
};

struct Unk_ov065_0227112c_Pair {
    /* 0x0 */ u32 hi;
    /* 0x4 */ u32 lo;
};

#endif

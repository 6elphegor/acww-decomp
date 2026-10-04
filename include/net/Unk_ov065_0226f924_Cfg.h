#ifndef NET_UNK_OV065_0226F924_CFG_H
#define NET_UNK_OV065_0226F924_CFG_H

#include "types.h"

// NetCheck_Start allocator config and its 12-byte copy view (NetCheck_Start, src/ov065/unk_ov065_0226ec94.cpp).

struct Unk_ov065_0226f924_Blob {
    /* 0x0 */ s32 v[3];
};

struct Unk_ov065_0226f924_Cfg {
    /* 0x0 */ void *(*unk_00)(const void *, u32);
    /* 0x4 */ void (*unk_04)(const void *, void *, u32);
    /* 0x8 */ u32 unk_08;
};

#endif

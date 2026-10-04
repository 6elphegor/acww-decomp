#ifndef NET_UNK_020CBB18_DATA_H
#define NET_UNK_020CBB18_DATA_H

#include "types.h"

// Partial view of CommManager (net/CommManager.h) as reached through gCommManager (0x020cbb18) in
// src/main/unk_02082d74.cpp and unk_020943dc.cpp.
struct Unk_020cbb18_Data {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 myAid;
    /* 0x68 */ s32 localSlot;
};

#endif

#ifndef NET_UNK_OV004_0221B954_GLOBAL_H
#define NET_UNK_OV004_0221B954_GLOBAL_H

#include "types.h"

// Partial view of the comm manager singleton (myAid at 0x64), ov004 room NPC TUs (0221b498, 0221c01c, 0221d748, 0221e3a4).

struct Unk_ov004_0221b954_Global {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 myAid;
};

#endif // NET_UNK_OV004_0221B954_GLOBAL_H

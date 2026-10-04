#ifndef NET_UNK_OV004_022146EC_SING_H
#define NET_UNK_OV004_022146EC_SING_H

#include "types.h"

// Partial view of the comm manager singleton (myAid at 0x64), ov004 unk_ov004_02213b90 + _switch.

struct Unk_ov004_022146ec_Sing {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 myAid;
};

#endif // NET_UNK_OV004_022146EC_SING_H

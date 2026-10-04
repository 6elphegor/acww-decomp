#ifndef NET_UNK_0203E938_NET_H
#define NET_UNK_0203E938_NET_H

#include "types.h"

// CommManager view used for myAid (src/main/unk_0203e7d0.cpp, unk_0203e438.cpp).

struct Unk_0203e938_Net {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 myAid;
};

#endif

#ifndef GAME_UNK_OV068_02268214_FLAGS_H
#define GAME_UNK_OV068_02268214_FLAGS_H

#include "types.h"

// 16-bit packed state flags of the ov068 Unk_ov068_02268214 critter object (dungBeetleWalk / hovererFly).
struct Unk_ov068_02268214_Flags {
    /* 0x00 */ u16 f0_1 : 2;
    u16 f2_3 : 2;
    u16 f4_5 : 2;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
    u16 f9 : 1;
    u16 f10 : 1;
    u16 f11_15 : 5;
};

#endif

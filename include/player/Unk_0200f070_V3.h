#ifndef PLAYER_UNK_0200F070_V3_H
#define PLAYER_UNK_0200F070_V3_H

// Helper records of the unk_0200f070 section of unk_02004558.cpp / unk_02004558_extra.cpp:
// vector, 4x3 matrix, packed date (7/4/5 bits) and a u16 pair.
#include "types.h"

struct Unk_0200f070_V3 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
}; // size 0xc

struct Unk_0200f070_M {
    /* 0x0 */ s32 v[12];
}; // size 0x30

struct Unk_0200f17c_Date {
    /* 0x0 */ u16 a : 7;
    u16 b : 4;
    u16 c : 5;
}; // size 0x2

struct Unk_0200f660_S {
    /* 0x0 */ u16 a;
    /* 0x2 */ u16 b;
}; // size 0x4

#endif // PLAYER_UNK_0200F070_V3_H

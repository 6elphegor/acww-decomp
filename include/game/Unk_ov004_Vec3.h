#ifndef GAME_UNK_OV004_VEC3_H
#define GAME_UNK_OV004_VEC3_H

#include "types.h"

// Plain 12-byte s32 vector (ov004 scene-warp tables, src/ov004/unk_ov004_0223f2c8.cpp).
struct Unk_ov004_Vec3 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

#endif

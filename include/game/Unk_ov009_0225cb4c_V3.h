#ifndef GAME_UNK_OV009_0225CB4C_V3_H
#define GAME_UNK_OV009_0225CB4C_V3_H

#include "types.h"
#include "game/Unk_ov009_0225b880_Vec3.h"

// Constructible s32 vector (inline ctors) of the ov009 building code (src/ov009/unk_ov009_0225b880.cpp and
// unk_ov009_0225b880_switch.cpp, one unit built by two compilers).

struct Unk_ov009_0225cb4c_V3 : Unk_ov009_0225b880_Vec3 {
    Unk_ov009_0225cb4c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov009_0225cb4c_V3() {}
};

#endif

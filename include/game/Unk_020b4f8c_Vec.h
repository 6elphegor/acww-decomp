#ifndef GAME_UNK_020B4F8C_VEC_H
#define GAME_UNK_020B4F8C_VEC_H

#include "types.h"

// 12-byte vector with a copy constructor (so it is passed by address of a copy); by-value parameter of the
// SceneWarp constructor and base of FxVec3.
struct Unk_020b4f8c_Vec {
    /* 0x0 */ s32 x, y, z;
    Unk_020b4f8c_Vec(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_020b4f8c_Vec(const Unk_020b4f8c_Vec &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

#endif

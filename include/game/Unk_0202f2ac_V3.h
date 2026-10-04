#ifndef GAME_UNK_0202F2AC_V3_H
#define GAME_UNK_0202F2AC_V3_H

// s32 vectors of the collision code (CollisionTriangle / CollisionCylinder; unk_0202e9d4.cpp, unk_0202fa70.cpp,
// unk_020b6b44.cpp, unk_020b705c.cpp, ov009). The constructors come from unk_0202fa70.cpp / unk_0202e9d4.cpp.
#include "types.h"

struct Unk_0202f2ac_V3 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) : x(a), y(0), z(c) {}
    Unk_0202f2ac_V3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
}; // size 0xc

struct Unk_0202f660_V3 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
}; // size 0xc

#endif // GAME_UNK_0202F2AC_V3_H

#ifndef GAME_UNK_0202F2AC_V3_H
#define GAME_UNK_0202F2AC_V3_H

// s32 vectors of the collision code (CollisionTriangle / CollisionCylinder; unk_0202e9d4.cpp, unk_0202fa70.cpp,
// unk_020b6b44.cpp, unk_020b705c.cpp, ov009). The constructors come from unk_0202fa70.cpp / unk_0202e9d4.cpp.
// A VecFx32 (x, y, z) with these constructors.
#include "types.h"
#include "gfx/VecFx32.h"

struct Unk_0202f2ac_V3 : VecFx32 {
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) { x = a; y = 0; z = c; }
    Unk_0202f2ac_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
}; // size 0xc

#endif // GAME_UNK_0202F2AC_V3_H

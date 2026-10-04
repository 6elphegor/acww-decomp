#ifndef GAME_FXVEC3_H
#define GAME_FXVEC3_H

#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"

// Fixed-point 3D vector object with an out-of-line constructor/destructor (_ZN6FxVec3C1Ev 0x02000c98,
// _ZN6FxVec3D1Ev 0x02000c8c, main); mostly used for static vectors built in __sinit. The base Unk_020b4f8c_Vec (x, y, z
// and an inline copy constructor) lets the ov003/ov021/ov024/ov032 data tables pass an FxVec3 as the by-value
// Unk_020b4f8c_Vec argument. Units whose statics use an inline empty default constructor keep their own copy.
struct FxVec3 : Unk_020b4f8c_Vec {
    FxVec3();
    FxVec3(s32 a, s32 b, s32 c) : Unk_020b4f8c_Vec(a, b, c) {}
    ~FxVec3();
};

#endif // GAME_FXVEC3_H

#ifndef GAME_FXVEC3_H
#define GAME_FXVEC3_H

#include "types.h"

// Fixed-point 3D vector object with an out-of-line constructor/destructor (_ZN6FxVec3C1Ev 0x02000c98,
// _ZN6FxVec3D1Ev 0x02000c8c, main); mostly used for static vectors built in __sinit.
// Copies with an inline default constructor (or a base class) that is load-bearing stay file-local (notes.md).
struct FxVec3 {
    /* 0x0 */ s32 x, y, z;
    FxVec3();
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

#endif // GAME_FXVEC3_H

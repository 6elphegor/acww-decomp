#ifndef GAME_FXVEC3_H
#define GAME_FXVEC3_H

#include "types.h"
#include "gfx/VecFx32.h"

// Fixed-point 3D vector object with an out-of-line constructor/destructor (_ZN6FxVec3C1Ev 0x02000c98,
// _ZN6FxVec3D1Ev 0x02000c8c, main); mostly used for static vectors built in __sinit. The base VecFx32Copy (x, y, z
// and an inline copy constructor) lets the ov003/ov021/ov024/ov032 data tables pass an FxVec3 as the by-value
// VecFx32Copy argument. Units whose statics use an inline empty default constructor keep their own copy.
struct FxVec3 : VecFx32Copy {
    FxVec3();
    FxVec3(s32 a, s32 b, s32 c) : VecFx32Copy(a, b, c) {}
    ~FxVec3();
};

#endif // GAME_FXVEC3_H

#ifndef GAME_FXVEC3_H
#define GAME_FXVEC3_H

#include "types.h"
#include "gfx/VecFx32.h"

// Fixed-point 3D vector object; mostly used for static vectors (on the DS built in __sinit by an out-of-line
// constructor/destructor, _ZN6FxVec3C1Ev 0x02000c98 / _ZN6FxVec3D1Ev 0x02000c8c, main, both empty). Here the
// constructors are inline and constexpr and the destructor trivial, so the static vectors are constant data and
// nothing runs for them when an overlay is loaded (docs/portability.md 2.9). The base VecFx32Copy (x, y, z and an
// inline copy constructor) lets the ov003/ov021/ov024/ov032 data tables pass an FxVec3 as the by-value VecFx32Copy
// argument.
struct FxVec3 : VecFx32Copy {
    FxVec3() {}
    constexpr FxVec3(s32 a, s32 b, s32 c) : VecFx32Copy(a, b, c) {}
    constexpr FxVec3(s32 v) : VecFx32Copy(v, 0, 0) {}
};

// The same vector for a global whose __sinit only registered the (empty) destructor on the DS: ov003's sWateringPos.
class FxVec3NoCtor : public VecFx32Copy {
};

#endif // GAME_FXVEC3_H

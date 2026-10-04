#ifndef GFX_QUAT_H
#define GFX_QUAT_H

#include "types.h"

// fx32 quaternion. Quat_Mul / Quat_Normalize / Quat_ToMtx43 (src/main/unk_02098e90.cpp) take it as s32 *; the rolling
// snowball (field/Snowball.h) keeps its orientation in one.
struct Quat {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
    /* 0x0c */ s32 w;
};

#endif

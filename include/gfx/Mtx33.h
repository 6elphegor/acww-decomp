#ifndef GFX_MTX33_H
#define GFX_MTX33_H

#include "types.h"

// Plain 3x3 fixed-point rotation matrix (s32[9]): joint pose rotation of JointBlend / Anim_LerpRotMtx
// (src/main/unk_02055c38.cpp) and the joint animation result rotation in src/main/unk_020b0e60.cpp.
struct Mtx33 {
    /* 0x00 */ s32 m[9];
};

#endif

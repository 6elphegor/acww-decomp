#ifndef GFX_MTX43_H
#define GFX_MTX43_H

#include "types.h"

// Plain 4x3 fixed-point matrix (s32[12], translation in m[9..11]): view matrix gViewMtx, the CPU matrix stack and
// current matrix (data_021cb69c), joint/world matrices, Model::mtx and the actor model matrices of ov003/ov004/ov009.
struct Mtx43 {
    /* 0x00 */ s32 m[12];
};

#endif

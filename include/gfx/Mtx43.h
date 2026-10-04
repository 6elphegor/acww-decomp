#ifndef GFX_MTX43_H
#define GFX_MTX43_H

#include "types.h"

// Plain 4x3 fixed-point matrix (s32[12]) used by the main-arm9 drawing helpers (unk_020abbcc, 020abea8, 020ac750,
// 020b60b0, 020b6b44). No defining TU.
struct Mtx43 {
    /* 0x00 */ s32 m[12];
};

#endif

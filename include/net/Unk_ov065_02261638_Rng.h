#ifndef NET_UNK_OV065_02261638_RNG_H
#define NET_UNK_OV065_02261638_RNG_H

#include "types.h"

// 64-bit LCG state, signed view of sIpRandState (used by src/ov065/unk_ov065_0225fdf0.cpp and
// src/ov065/unk_ov065_02261638.cpp; other files view the same object through other Rng types).

struct Unk_ov065_02261638_Rng {
    /* 0x00 */ u64 value;
    /* 0x08 */ s64 multiplier;
    /* 0x10 */ s64 increment;
};

#endif

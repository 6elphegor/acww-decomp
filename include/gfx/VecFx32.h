#ifndef GFX_VECFX32_H
#define GFX_VECFX32_H

#include "types.h"

// NitroSDK-style fixed-point vectors as the C++ units of the particle (SPL) / vector library declare them
// (s32/s16 members). The C units with their own `long` base typedefs keep their typedef'd copies.
struct VecFx32 {
    /* 0x0 */ s32 x, y, z;
};

struct VecFx16 {
    /* 0x0 */ s16 x, y, z;
};

struct V3 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

struct V3Arr {
    /* 0x0 */ s32 v[3];
};

#endif

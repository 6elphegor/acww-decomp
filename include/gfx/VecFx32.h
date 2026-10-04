#ifndef GFX_VECFX32_H
#define GFX_VECFX32_H

#include "types.h"

// NitroSDK-style fixed-point vectors as the C++ units of the particle (SPL) / vector library declare them
// (s32/s16 members). The C units with their own `long` base typedefs keep their typedef'd copies. The plain V3 / V3Arr
// views are in gfx/V3.h.
struct VecFx32 {
    /* 0x0 */ s32 x, y, z;
};

struct VecFx16 {
    /* 0x0 */ s16 x, y, z;
};

#endif

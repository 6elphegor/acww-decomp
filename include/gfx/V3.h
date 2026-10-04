#ifndef GFX_V3_H
#define GFX_V3_H

#include "types.h"
#include "gfx/VecFx32.h"

// Plain s32 vector views (split from gfx/VecFx32.h so headers that need VecFx32 do not clash with file-local
// `V3` typedefs).
struct V3 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

struct V3Arr {
    /* 0x0 */ s32 v[3];
};

#endif

#ifndef GFX_VEC3Z_H
#define GFX_VEC3Z_H

#include "types.h"

// Zero-initialised vectors with an out-of-line (empty, shared) destructor at 0x02000c8c; Vec3Z2 starts as (0, 0, 1.0).
// Used by src/main/unk_020abea8.cpp and unk_020ac750.cpp.
struct Vec3Z2 {
    /* 0x0 */ s32 x, y, z;
    Vec3Z2() {
        x = 0;
        y = 0;
        z = 0x1000;
    }
    ~Vec3Z2();
};

struct Vec3Z {
    /* 0x0 */ s32 x, y, z;
    Vec3Z() {
        x = 0;
        y = 0;
        z = 0;
    }
    ~Vec3Z();
};

#endif

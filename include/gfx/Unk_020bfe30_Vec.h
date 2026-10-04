#ifndef GFX_UNK_020BFE30_VEC_H
#define GFX_UNK_020BFE30_VEC_H

#include "types.h"
#include "gfx/Mtx43.h"

// Sky/weather sprite helpers: fixed-point vector (the 4x3 view matrix type is Mtx43).
// Used by src/main/unk_020b8d9c.cpp, unk_020c00c0.cpp and unk_020c0324.cpp.

struct Unk_020bfe30_Vec {
    /* 0x0 */ s32 x, y, z;
};

#endif

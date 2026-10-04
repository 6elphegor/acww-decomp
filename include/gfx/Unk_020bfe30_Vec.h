#ifndef GFX_UNK_020BFE30_VEC_H
#define GFX_UNK_020BFE30_VEC_H

#include "types.h"
#include "gfx/Mtx43.h"

// Sky/weather sprite helpers: fixed-point vector, two sky-sprite entry views (the 4x3 view matrix type is Mtx43).
// Used by src/main/unk_020b8d9c.cpp, unk_020c00c0.cpp and unk_020c0324.cpp.

struct Unk_020bfe30_Vec {
    /* 0x0 */ s32 x, y, z;
};

struct Unk_020bfe38_Ent {
    /* 0x00 */ u8 unk_00[0x5c];
    /* 0x5c */ s32 position;
    /* 0x60 */ u8 unk_60[8];
    /* 0x68 */ s32 prevPosition;
};

struct Unk_020bfec0_Ent {
    /* 0x00 */ u8 unk_00[0x54];
    /* 0x54 */ s32 rainStrength;
};

#endif

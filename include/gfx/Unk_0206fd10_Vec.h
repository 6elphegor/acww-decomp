#ifndef GFX_UNK_0206FD10_VEC_H
#define GFX_UNK_0206FD10_VEC_H

#include "types.h"
#include "gfx/Mtx43.h"

// Vector argument of the CPU-side matrix helpers (CpuMtx_*: sCpuMtxStack in src/main/unk_0206fde4.cpp and the current
// CPU matrix data_021cb69c, both Mtx43). Used by src/main/unk_0206fde4.cpp, unk_0206fc44.cpp and unk_0206f834.cpp.

struct Unk_0206fd10_Vec {
    s32 x;
    s32 y;
    s32 z;
};

#endif // GFX_UNK_0206FD10_VEC_H

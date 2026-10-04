#ifndef GFX_UNK_0206FD10_MTX_H
#define GFX_UNK_0206FD10_MTX_H

#include "types.h"

// CPU-side 4x3 fixed-point matrices and vector (sCpuMtxStack in src/main/unk_0206fde4.cpp, data_021cb69c).
// Used by src/main/unk_0206fde4.cpp, unk_0206fc44.cpp and unk_0206f834.cpp.

struct Unk_0206fd10_Mtx {
    s32 m[9];
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fde4_Mtx {
    s32 v[12];
};

struct Unk_0206fd10_Vec {
    s32 x;
    s32 y;
    s32 z;
};

#endif // GFX_UNK_0206FD10_MTX_H

#ifndef GFX_UNK_02002848_DATA_H
#define GFX_UNK_02002848_DATA_H

#include "types.h"

// 0x30-byte matrix record copied around by Gfx3d_SetViewMatrix, Gfx3d_Init and Actor::calcModelMatrix (gViewMtx).
// gViewMtx is defined in src/main/unk_020027b4.cpp.

struct Unk_02002848_Data {
    /* 0x00 */ u32 m[12];
};

#endif

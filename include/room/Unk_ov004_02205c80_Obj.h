#ifndef ROOM_UNK_OV004_02205C80_OBJ_H
#define ROOM_UNK_OV004_02205C80_OBJ_H

#include "types.h"
#include "gfx/Unk_ov004_Mtx.h"

// Furniture actor view used by the spawn/surface code (rotY, map layer, model matrix, spawn mode, surface height)
// (src/ov004/unk_ov004_02204f24.cpp, unk_ov004_02209f70.cpp, unk_ov004_02209f70_switch.cpp).

struct Unk_ov004_02205c80_Obj {
    /* 0x000 */ u8 pad_00[0x8e];
    /* 0x08e */ s16 rotY;
    /* 0x090 */ u8 pad_90[0x284 - 0x90];
    /* 0x284 */ u8 mapLayer;
    /* 0x285 */ u8 pad_285[0x598 - 0x285];
    /* 0x598 */ Unk_ov004_Mtx modelMtx;
    /* 0x5c8 */ u8 pad_5c8[0x768 - 0x5c8];
    /* 0x768 */ s32 spawnMode;
    /* 0x76c */ u8 pad_76c[0x789 - 0x76c];
    /* 0x789 */ u8 startsOff;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 surfaceHeight;
};

#endif

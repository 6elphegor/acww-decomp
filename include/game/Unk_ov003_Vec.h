#ifndef GAME_UNK_OV003_VEC_H
#define GAME_UNK_OV003_VEC_H

#include "types.h"

// Plain s32 vector used by ov003 units (e.g. unk_ov003_02215c74.cpp). BuildingActor::entryPos is typed with the ov009
// Unk_ov009_0225b880_Vec3 (town/BuildingActor.h).
struct Unk_ov003_Vec {
    /* 0x00 */ s32 x, y, z;
};

#endif

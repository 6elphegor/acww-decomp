#ifndef GAME_UNK_OV003_VEC_H
#define GAME_UNK_OV003_VEC_H

#include "types.h"

// Plain s32 vector of the ov003 building actors (BuildingActor::entryPos etc.).
struct Unk_ov003_Vec {
    /* 0x00 */ s32 x, y, z;
};

#endif

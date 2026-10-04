#ifndef GAME_UNK_OV083_VEC_H
#define GAME_UNK_OV083_VEC_H

#include "types.h"

// Plain s32 x/y/z position record (used by ov083 and ov068 units).
struct Unk_ov083_Vec {
    /* 0x00 */ s32 x, y, z;
};

#endif

#ifndef PLAYER_UNK_02006D14_OBJ2CC_H
#define PLAYER_UNK_02006D14_OBJ2CC_H

#include "types.h"

// Animation object view (curFrame at 0x8). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_Obj2cc {
    /* 0x0 */ u8 pad[8];
    /* 0x8 */ u32 curFrame;
};

#endif

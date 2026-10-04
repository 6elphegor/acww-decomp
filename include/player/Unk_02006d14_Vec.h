#ifndef PLAYER_UNK_02006D14_VEC_H
#define PLAYER_UNK_02006D14_VEC_H

#include "types.h"

// s32 position vector of the player object (Unk_02006d14::position, walk targets).
// Used in src/main/unk_02004558.cpp (PlayerActor unit), src/main/unk_02094810.cpp and src/main/unk_020943dc.cpp.

struct Unk_02006d14_Vec {
    /* 0x0 */ s32 x, y, z;
    Unk_02006d14_Vec() {}
};

#endif

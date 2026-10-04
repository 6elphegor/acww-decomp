#ifndef PLAYER_UNK_020050E0_R_H
#define PLAYER_UNK_020050E0_R_H

#include "types.h"
#include "player/Unk_02005294_Vec3.h"

// Joint animation result (3x3 rotation, translation) seen by the joint callbacks. Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_020050e0_R {
    /* 0x00 */ u8 unk_00[0x28];
    /* 0x28 */ s32 rot[9];
    /* 0x4c */ Unk_02005294_Vec3 trans;
};

#endif

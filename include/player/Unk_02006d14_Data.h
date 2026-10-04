#ifndef PLAYER_UNK_02006D14_DATA_H
#define PLAYER_UNK_02006D14_DATA_H

#include "types.h"

// Player-unit view of the communication manager (myAid at 0x64, see net/CommManager.h). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_Data {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 myAid;
};

#endif

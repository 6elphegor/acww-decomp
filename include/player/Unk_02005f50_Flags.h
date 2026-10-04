#ifndef PLAYER_UNK_02005F50_FLAGS_H
#define PLAYER_UNK_02005F50_FLAGS_H

#include "types.h"

// Packed type/sub/set flag byte of a player net event. Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02005f50_Flags {
    /* 0x0 */ u8 type : 5;
    /* 0x0 */ u8 sub : 2;
    /* 0x0 */ u8 set : 1;
};

#endif

#ifndef PLAYER_UNK_02005F50_AREA_H
#define PLAYER_UNK_02005F50_AREA_H

#include "types.h"

// Three s32 plus four bytes, used by the player net-event handler (Unk_02005e7c). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02005f50_Area {
    /* 0x0 */ s32 a[3];
    /* 0xc */ u8 e[4];
};

#endif

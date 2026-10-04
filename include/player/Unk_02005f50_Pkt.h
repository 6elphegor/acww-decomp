#ifndef PLAYER_UNK_02005F50_PKT_H
#define PLAYER_UNK_02005F50_PKT_H

#include "types.h"

// Player net-event packet header (type, sub, position). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02005f50_Pkt {
    /* 0x0 */ u8 type;
    /* 0x1 */ u8 sub;
    /* 0x2 */ volatile u16 pos;
};

#endif

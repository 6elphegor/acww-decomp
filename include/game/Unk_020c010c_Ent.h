#ifndef GAME_UNK_020C010C_ENT_H
#define GAME_UNK_020C010C_ENT_H

#include "types.h"

// Entry of today's event list (Event_GetTodayList), used by src/main/unk_020b8d9c.cpp and unk_020c00c0.cpp.
struct Unk_020c010c_Ent {
    /* 0x0 */ u16 eventId;
    /* 0x2 */ u8 unk_02[10];
};

#endif

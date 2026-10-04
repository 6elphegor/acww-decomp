#ifndef GAME_UNK_0203FF50_SLOT_H
#define GAME_UNK_0203FF50_SLOT_H

#include "types.h"

// Weekly event slots (EventWeekSlots_*, WeekVisitors_*) and their entries
// (src/main/unk_0203f104.cpp, unk_02040050.cpp, unk_02040234.cpp, unk_020406c4.cpp).

struct Unk_0203ff20_Entry {
    /* 0x00 */ u16 date;
    /* 0x02 */ u8 eventId, state, occurred, playerMask;
};

struct Unk_0203ff50_Slot {
    /* 0x00 */ u8 pad[0x10];
    /* 0x10 */ u8 reddWeekday, unk_11;
    /* 0x12 */ u8 todayEventId, todayWeekday;
    /* 0x14 */ Unk_0203ff20_Entry ent[5];
    /* 0x34 */ long long weekStart;
};

#endif

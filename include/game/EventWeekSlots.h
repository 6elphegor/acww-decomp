#ifndef GAME_EVENTWEEKSLOTS_H
#define GAME_EVENTWEEKSLOTS_H

#include "types.h"

// Weekly event slots (EventWeekSlots_*, WeekVisitors_*) and their entries
// (src/main/unk_0203f104.cpp, unk_02040050.cpp, unk_02040234.cpp, unk_020406c4.cpp).

struct EventWeekSlot {
    /* 0x00 */ u16 date;
    /* 0x02 */ u8 eventId, state, occurred, playerMask;
};

struct EventWeekSlots {
    /* 0x00 */ u8 pad[0x10];
    /* 0x10 */ u8 reddWeekday, unk_11;
    /* 0x12 */ u8 todayEventId, todayWeekday;
    /* 0x14 */ EventWeekSlot ent[5];
    /* 0x34 */ long long weekStart;
};

#endif

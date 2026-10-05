#ifndef GAME_EVENTSCHEDULERULE_H
#define GAME_EVENTSCHEDULERULE_H

#include "types.h"

// Event schedule rule (0x1c bytes; the table sEventSchedule[99] is defined in src/main/unk_0203f104.cpp, which resolves
// the start / end of each rule into an EventDayEntry: EventSchedule_Match / EventRule_Resolve*). Also declared by
// unk_0203eb78.cpp and unk_0203ecec.cpp.

// one end of a rule (start or end): resolution flags, day offset, hour
struct Unk_0203f554_Sub {
    u32 flags;
    s32 off;
    u32 hour;
};

struct EventScheduleRule {
    u16 id;
    u16 kind;
    Unk_0203f554_Sub a;
    Unk_0203f554_Sub b;
};

// 4-byte date word passed by value to EventSchedule_Match / IsBlocked / Event_AdjustToDay (= unk_0203f104.cpp's EventDate)
union Unk_0203f218_Ver {
    /* 0x00 */ u32 word;
    /* 0x00 */ u8 b[4];
};

#endif

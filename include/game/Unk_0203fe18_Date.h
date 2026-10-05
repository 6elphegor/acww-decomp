#ifndef GAME_UNK_0203FE18_DATE_H
#define GAME_UNK_0203FE18_DATE_H

#include "types.h"
#include "sys/ClockDateTime.h"

// 3-byte date view used by the event/week code (src/main/unk_02040050.cpp); the 8-byte date-time record of these
// units is ClockDateTime (sys/ClockDateTime.h). The 4-byte view is in game/Unk_0203fe18_B4.h.

struct Unk_0203fe18_B3 {
    /* 0x00 */ u8 b0, b1, b2;
};

#endif

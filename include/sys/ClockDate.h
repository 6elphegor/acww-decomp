#ifndef SYS_CLOCKDATE_H
#define SYS_CLOCKDATE_H

#include "types.h"

// Calendar date {day, month, year (0..99), 0} as Clock_GetDate writes it (src/main/unk_0209cb74.cpp). Town data
// stamps (TownState lastUpdate / playerDates[4]); Date_DaysBetween, TownState_ClampDate (src/main/unk_0204c318.cpp).

struct ClockDate {
    /* 0x00 */ u8 day;
    /* 0x01 */ u8 month;
    /* 0x02 */ u8 year;
    /* 0x03 */ u8 pad_03;
};

#endif

#ifndef GAME_WEATHERRECORD_H
#define GAME_WEATHERRECORD_H

#include "types.h"

// 8-byte saved weather state (date, today's / tomorrow's pattern). Handled by Weather_* in main, unk_020c00c0.cpp.
struct WeatherRecord {
    /* 0x0 */ u8 day;
    /* 0x1 */ u8 month;
    /* 0x2 */ u8 year;
    /* 0x3 */ u8 unk_03;
    /* 0x4 */ u8 todayPattern;
    /* 0x5 */ u8 tomorrowPattern;
    /* 0x6 */ s8 hourBase;
    /* 0x7 */ u8 rained;
};

#endif

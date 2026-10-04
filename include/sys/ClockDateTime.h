#ifndef SYS_CLOCKDATETIME_H
#define SYS_CLOCKDATETIME_H

#include "types.h"

// Date and time as Clock_GetDateTime writes it (src/main/unk_0209cb74.cpp; DateTime_Compare / DateTime_AddDays /
// DateTime_AddMinutes work on it). unk_0201c050.cpp, unk_020b8d9c.cpp and unk_0209cb74.cpp still declare their own
// identical copies; unk_0203f104.cpp has a variant with an MI_CpuCopy8 copy constructor (ClockDateTimeCopy) and
// unk_02077ac4.cpp a word/byte union.
struct ClockDateTime {
    /* 0x0 */ u8 second;
    /* 0x1 */ u8 minute;
    /* 0x2 */ u8 hour;
    /* 0x3 */ u8 day;
    /* 0x4 */ u8 month;
    /* 0x5 */ u8 year; // 0..99
    /* 0x6 */ u8 unk_06;
    /* 0x7 */ u8 unk_07;
};

#endif

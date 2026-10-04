#ifndef TOWN_UNK_0204C3C0_VER_H
#define TOWN_UNK_0204C3C0_VER_H

#include "types.h"

// Day/month/year stamps in the town data (lastUpdate and playerDates[4];
// src/main/unk_0204cc1c.cpp, unk_0204c318.cpp, unk_0204c50c.cpp).

struct Unk_0204c3c0_Ver {
    /* 0x00 */ u8 day;
    /* 0x01 */ u8 month;
    /* 0x02 */ u8 year;
    /* 0x03 */ u8 pad_03;
};

struct Unk_0204c3f4_Slot {
    /* 0x00 */ u8 day;
    /* 0x01 */ u8 month;
    /* 0x02 */ u8 year;
    /* 0x03 */ u8 pad_03;
};

#endif

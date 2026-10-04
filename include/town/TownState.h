#ifndef TOWN_TOWNSTATE_H
#define TOWN_TOWNSTATE_H

#include "types.h"
#include "town/Unk_0204c3c0_Ver.h"

// Town calendar state (last update, native fruit, weekly/event update dates, per-player dates).
// Used by src/main/unk_0204c318.cpp, unk_0204c50c.cpp, unk_0204cc1c.cpp (3 identical copies).
struct TownState {
    /* 0x00 */ Unk_0204c3c0_Ver lastUpdate;
    /* 0x04 */ s32 nativeFruit;
    /* 0x08 */ u8 nextWeekDay;
    /* 0x09 */ u8 nextWeekMonth;
    /* 0x0a */ u8 nextWeekYear;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 perfectStreak;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 eventUpdateDay;
    /* 0x55 */ u8 eventUpdateMonth;
    /* 0x56 */ u8 eventUpdateYear;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot playerDates[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

#endif

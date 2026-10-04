#ifndef GAME_UNK_0203F218_SLOT_H
#define GAME_UNK_0203F218_SLOT_H

#include "types.h"

// Event schedule slot (sEventSchedule[99]) plus its version word and date views
// (src/main/unk_0203eb78.cpp, unk_0203ecec.cpp).

union Unk_0203f218_Ver {
    /* 0x00 */ u32 word;
    /* 0x00 */ u8 b[4];
};

struct Unk_0203f218_Date {
    /* 0x00 */ u8 b[8];
};

struct Unk_0203f218_Slot {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u8 unk_04[0x18];
};

#endif

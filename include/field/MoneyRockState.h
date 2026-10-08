#ifndef FIELD_MONEYROCKSTATE_H
#define FIELD_MONEYROCKSTATE_H

#include "types.h"

// The money rock of the day (data_021c47bc, defined in src/main/unk_0204a780.cpp; MoneyRock_* in unk_02041e00.cpp):
// its unit, the hits so far and the hit timer. 8 bytes in the DS's bss.
struct MoneyRockState {
    u8 y;
    u8 x;
    s16 hits;
    s16 timer;
    u8 pad_06[2];
};

#endif

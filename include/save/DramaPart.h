#ifndef SAVE_DRAMAPART_H
#define SAVE_DRAMAPART_H

#include "types.h"
#include "sys/ClockDate.h"

#ifndef __cplusplus
typedef struct Unk_020874e8_Bits Unk_020874e8_Bits;
typedef struct DramaRecord DramaRecord;
#endif

// Part of the scheduled drama (one byte): Drama_FindScheduledPart / Drama_GetAvailablePart fill it, DramaRecord keeps
// the last one seen (src/main/unk_02085940.cpp); the villager talk checks it (src/main/unk_0201c050.cpp).
struct Unk_020874e8_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

// The last drama part a player saw and the date it was seen (PlayerData::dramaRecord, 5 bytes at an odd offset:
// byte-aligned). DramaRecord_* in src/main/unk_02085940.cpp.
struct DramaRecord {
    /* 0x0 */ Unk_020874e8_Bits lastPart;
    /* 0x1 */ ClockDate date;
};

#endif // SAVE_DRAMAPART_H

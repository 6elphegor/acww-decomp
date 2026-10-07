#ifndef SAVE_DRAMAPART_H
#define SAVE_DRAMAPART_H

#include "types.h"

// Part of the scheduled drama (one byte): Drama_FindScheduledPart / Drama_GetAvailablePart fill it, DramaRecord keeps
// the last one seen (src/main/unk_02085940.cpp); the villager talk checks it (src/main/unk_0201c050.cpp).
struct Unk_020874e8_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

#endif // SAVE_DRAMAPART_H

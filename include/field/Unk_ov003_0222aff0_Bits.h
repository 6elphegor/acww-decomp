#ifndef FIELD_UNK_OV003_0222AFF0_BITS_H
#define FIELD_UNK_OV003_0222AFF0_BITS_H

#include "types.h"

// 32-bit packed animation frame word of the ov003 insect records (Unk_ov003_0222adc4_Rec::animFrame at +0xf4).
struct Unk_ov003_0222aff0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

#endif

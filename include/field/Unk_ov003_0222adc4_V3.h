#ifndef FIELD_UNK_OV003_0222ADC4_V3_H
#define FIELD_UNK_OV003_0222ADC4_V3_H

#include "types.h"

// Plain s32 vector of the ov003 insect code (no constructors; Insect_LoadModel copies Insect::scale through it, which
// the ctor-bearing Unk_ov003_0225980c_V3 would compile differently). A01 vector-shape candidate.
struct Unk_ov003_0222adc4_V3 {
    /* 0x00 */ s32 x, y, z;
};

#endif

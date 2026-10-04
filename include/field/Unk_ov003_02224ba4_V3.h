#ifndef FIELD_UNK_OV003_02224BA4_V3_H
#define FIELD_UNK_OV003_02224BA4_V3_H

#include "types.h"

// s32 vectors of the ov003 bottle-throw code (0x02224ba4..0x02225238); the TUs typedef the first one as V3.
struct Unk_ov003_02224ba4_V3 {
    /* 0x00 */ s32 x, y, z;
};

struct Unk_ov003_02224e68_V3 {
    /* 0x00 */ s32 x, y, z;
    Unk_ov003_02224e68_V3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
};

#endif

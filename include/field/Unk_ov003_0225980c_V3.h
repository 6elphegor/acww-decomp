#ifndef FIELD_UNK_OV003_0225980C_V3_H
#define FIELD_UNK_OV003_0225980C_V3_H

#include "types.h"

// s32 vector of the ov003 insect code: type of Insect's position / scale / wander box / target members (every
// namespace of unk_ov003_02225800.cpp typedefs it as V3 / Vec3). A01 vector-shape candidate.
struct Unk_ov003_0225980c_V3 {
    /* 0x00 */ s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
    Unk_ov003_0225980c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

#endif

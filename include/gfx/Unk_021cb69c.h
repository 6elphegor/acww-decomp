#ifndef GFX_UNK_021CB69C_H
#define GFX_UNK_021CB69C_H

#include "types.h"

// 4x3 fixed-point joint matrix (data_021cb69c, Model_GetJointWorldMtx output), used by src/main/unk_02004558.cpp.
struct Unk_021cb69c {
    union {
        struct {
            /* 0x00 */ s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20;
            /* 0x24 */ s32 unk_24, unk_28, unk_2c;
        };
        s32 unk_a[12];
    };
};

#endif

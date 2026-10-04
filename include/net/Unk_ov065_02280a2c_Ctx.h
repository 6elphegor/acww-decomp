#ifndef NET_UNK_OV065_02280A2C_CTX_H
#define NET_UNK_OV065_02280A2C_CTX_H

#include "types.h"

// GP connection view (profile id, error code), callback result and callback pair records
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct Unk_ov065_02280a2c_Ctx {
    /* 0x000 */ u8 pad_000[0x1a0];
    /* 0x1a0 */ s32 profileId;
    /* 0x1a4 */ u8 pad_1a4[0x418 - 0x1a4];
    /* 0x418 */ s32 errorCode;
};

struct Unk_ov065_02280a2c_M0 {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 profileId;
    /* 0x08 */ u8 pad_08[0x18];
};

struct Unk_ov065_02280a2c_Pair {
    /* 0x0 */ s32 func;
    /* 0x4 */ s32 param;
};

struct Unk_ov065_02280a2c_Wrap {
    /* 0x0 */ Unk_ov065_02280a2c_Pair p;
};

#endif

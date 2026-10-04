#ifndef NET_UNK_OV065_02270EB0_X_H
#define NET_UNK_OV065_02270EB0_X_H

#include "types.h"

// GameSpy login request/response records (src/ov065/unk_ov065_0226fc18.cpp, src/ov065/unk_ov065_02270e34.cpp).

struct Unk_ov065_02270eb0_Tri {
    /* 0x0 */ u32 v[3];
};

struct Unk_ov065_02270eb0_P {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 unk_08[0xc];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u8 unk_18[4];
    /* 0x1c */ u32 profileId;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u32 gameCode;
};

struct Unk_ov065_02270eb0_X {
    /* 0x00 */ s32 result;
    /* 0x04 */ u32 profileId;
    /* 0x08 */ u8 unk_08[0x86];
    /* 0x8e */ s8 uniqueNick[1];
};

#endif

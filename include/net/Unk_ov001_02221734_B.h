#ifndef NET_UNK_OV001_02221734_B_H
#define NET_UNK_OV001_02221734_B_H

#include "types.h"

// ov001 user-profile records (favourite colour, nickname) built in unk_ov001_02220ad8.cpp and
// unk_ov001_022218a4.cpp.
struct WfcMoveMbStateCopy {
    /* 0x0 */ u16 v[7];
};

struct Unk_ov001_02221734_D {
    /* 0x00 */ u8 lo : 4;
    /* 0x00 */ u8 hi : 4;
    /* 0x01 */ u8 b1;
    /* 0x02 */ u8 data[0x14];
    /* 0x16 */ WfcMoveMbStateCopy z;
};

struct Unk_ov001_02221734_B {
    /* 0x00 */ u8 pad_00[1];
    /* 0x01 */ u8 favoriteColor;
    /* 0x02 */ u8 pad_02[2];
    /* 0x04 */ u8 nickName[0x14];
    /* 0x18 */ u16 nickNameLength;
    /* 0x1a */ u8 pad_1a[0x54 - 0x1a];
};

#endif

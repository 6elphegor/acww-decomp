#ifndef ROOM_UNK_OV004_0222C9D0_H
#define ROOM_UNK_OV004_0222C9D0_H

#include "types.h"

// 0x94-byte drop slot (ctor 0x0222c9d0, defined in ov004 TU31 unk_ov004_0222c9bc); 15 of them in 0222bed0.

class Unk_ov004_0222c9d0 {
public:
    Unk_ov004_0222c9d0();
    ~Unk_ov004_0222c9d0();

    /* 0x00 */ u32 pad_00[4];
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 pad_18[(0x4c - 0x18) / 4];
    /* 0x4c */ u8 sound[0x48];
};

#endif // ROOM_UNK_OV004_0222C9D0_H

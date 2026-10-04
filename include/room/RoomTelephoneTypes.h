#ifndef ROOM_ROOMTELEPHONETYPES_H
#define ROOM_ROOMTELEPHONETYPES_H

#include "types.h"

// Helper records of RoomTelephone (ov004 unk_ov004_02229660 + _switch).

struct Unk_ov004_02229ae0_Pad {
    /* 0x0 */ s32 v[2];
    Unk_ov004_02229ae0_Pad() {}
    ~Unk_ov004_02229ae0_Pad() {}
};

struct Unk_ov004_02229970_Xyz {
    /* 0x0 */ s32 x, y, z;
};

// Partial view of the comm manager singleton (localSlot at 0x68).
struct Unk_ov004_02229970_Glob {
    /* 0x00 */ u8 pad_00[0x68];
    /* 0x68 */ s32 localSlot;
};

struct Unk_ov004_02229660_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0222a0bc_V3 {
    /* 0x0 */ s32 v[3];
};

#endif // ROOM_ROOMTELEPHONETYPES_H

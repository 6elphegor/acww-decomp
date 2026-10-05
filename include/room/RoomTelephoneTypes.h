#ifndef ROOM_ROOMTELEPHONETYPES_H
#define ROOM_ROOMTELEPHONETYPES_H

#include "types.h"
#include "sys/StackPad.h"
#include "gfx/V3.h"

// Helper records of RoomTelephone (ov004 unk_ov004_02229660 + _switch).

struct Unk_ov004_02229660_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

#endif // ROOM_ROOMTELEPHONETYPES_H

#ifndef ROOM_UNK_OV004_02206570_ACT_H
#define ROOM_UNK_OV004_02206570_ACT_H

#include "types.h"
#include "room/FtrActorParts.h"

// Actor position view (position, prevPosition, rotY) used by the furniture actor code
// (src/ov004/unk_ov004_02204f24.cpp, unk_ov004_02209f70.cpp, unk_ov004_02209f70_switch.cpp).

struct Unk_ov004_02206570_Act {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ Unk_ov004_02206744_V3 position;
    /* 0x68 */ Unk_ov004_02206744_V3 prevPosition;
    /* 0x74 */ u8 pad_74[0x8e - 0x74];
    /* 0x8e */ s16 rotY;
};

#endif

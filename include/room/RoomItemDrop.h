#ifndef ROOM_ROOMITEMDROP_H
#define ROOM_ROOMITEMDROP_H

#include "types.h"
#include "gfx/VecFx32.h"

// One item dropped into a room (0x94 bytes; ctor 0x0222c9d0 / dtor defined in ov004 unk_ov004_0222c9bc.cpp). 15 of
// them form sRoomItemDrops (unk_ov004_0222bed0.cpp, 5 groups of 3), driven by ItemDrop_Init / SetTrajectory / Update
// / Settle / Clear there. The SE emitter at 0x4c is built and destroyed by hand (SndSeEmitter C1 / D1): bounceCount
// sits at 0x8c, inside a by-value SndSeEmitter (0x44 bytes in snd/SndSeEmitter.h).
class RoomItemDrop {
public:
    RoomItemDrop();
    ~RoomItemDrop();

    /* 0x00 */ s32 group;
    /* 0x04 */ s32 state;
    /* 0x08 */ u16 item;
    /* 0x0a */ u16 landItem;
    /* 0x0c */ s32 isStill;
    /* 0x10 */ s32 unitX; // landing unit (PendingUnit_ApplyAt when settled)
    /* 0x14 */ s32 unitZ;
    /* 0x18 */ VecFx32 landPos;
    /* 0x24 */ VecFx32 pos;
    /* 0x30 */ VecFx32 velocity;
    /* 0x3c */ VecFx32 scale;
    /* 0x48 */ s16 unk_48;
    /* 0x4a */ s16 unk_4a;
    /* 0x4c */ u8 seEmitter[0x40];
    /* 0x8c */ s8 bounceCount;
    /* 0x8d */ u8 frameCount;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 needsSettle;
    /* 0x90 */ u8 onFtrSurface;
    /* 0x91 */ u8 pad_91[3];
};

#endif // ROOM_ROOMITEMDROP_H

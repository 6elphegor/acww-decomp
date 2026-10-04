#ifndef NPC_UNK_0201AC88_H
#define NPC_UNK_0201AC88_H

#include "types.h"

// NPC movement state (unk_0201ac80.cpp part of src/main/unk_020119cc.cpp) and Unk_0201accc, the 0x58-byte NpcActor
// member type (moveCtrl) named after its constructor (ctor 0x0201accc, dtor label 0x0201acc8).

struct Unk_0201ac88 {
    s32 curSpeedPreset;
    s32 curSpeedPresetY;
    s32 curSpeedPresetZ;
    u8 speedPresets[0x24];
    s32 moveMode;
    u8 pad_34[4];
    s32 waypoint;
    s32 waypointY;
    s32 waypointZ;
    s32 destination;
    s32 destinationY;
    s32 destinationZ;
    u8 pad_50[4];
    u8 keepAnimFrame;
    u8 turnMode;

    void reset();
    void func_0201acc8();
    Unk_0201ac88 *func_0201accc();
};
// size 0x58

struct Unk_0201accc : Unk_0201ac88 {
    Unk_0201accc();
    ~Unk_0201accc();
};

#endif

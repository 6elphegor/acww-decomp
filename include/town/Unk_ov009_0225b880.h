#ifndef TOWN_UNK_OV009_0225B880_H
#define TOWN_UNK_OV009_0225B880_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "gfx/NNSG3dRS.h"
#include "town/BuildingInfo.h"
#include "gfx/DebugColor.h"
#include "actor/Actor.h"

// Helper records of the ov009 building actor unit (unk_ov009_0225b880.cpp and its _switch twin).
class BuildingActor;

struct BuildingEntryFlags {
    /* 0x0 */ u8 f0 : 1;
    /* 0x0 */ u8 f1 : 1;
    /* 0x0 */ u8 rest : 6;
};

struct Unk_ov009_0225bce0_Pad {
    /* 0x0 */ s32 v[2];
    Unk_ov009_0225bce0_Pad() {}
    ~Unk_ov009_0225bce0_Pad() {}
};

struct BuildingShadowEntry {
    /* 0x00 */ u32 texIndex;
    /* 0x04 */ s32 offsetX;
    /* 0x08 */ s32 offsetZ;
    /* 0x0c */ s32 size;
    /* 0x10 */ s32 shift;
    /* 0x14 */ s32 texLeft;
    /* 0x18 */ s32 texRight;
};

struct Unk_ov009_0225d2a4_Obj {
    /* 0x00 */ u32 pad[0x6c / 4];
};

#endif

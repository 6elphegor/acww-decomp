#ifndef ACTOR_UNK_OV004_SCENEENTRY_H
#define ACTOR_UNK_OV004_SCENEENTRY_H

#include "types.h"

// 0x18-byte actor profile of the ov004 actors (s<Name>Profile data objects): factory, priorities, flags, cull box.
// Unk_ov004_Scene_Entry is the same record. (The 8-byte GameProc profiles {factory, u16, u16} are a different type.)
struct Unk_ov004_SceneEntry {
    /* 0x00 */ void *(*create)();
    /* 0x04 */ u16 executePriority;
    /* 0x06 */ u16 drawPriority;
    /* 0x08 */ u32 actorFlags;
    /* 0x0c */ u32 cullHeight;
    /* 0x10 */ u32 cullRadius;
    /* 0x14 */ u32 cullDepth;
};
typedef Unk_ov004_SceneEntry Unk_ov004_Scene_Entry;

#endif

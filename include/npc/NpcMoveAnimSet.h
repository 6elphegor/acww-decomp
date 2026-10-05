#ifndef NPC_NPCMOVEANIMSET_H
#define NPC_NPCMOVEANIMSET_H

#include "types.h"

// Stand/walk/run animation ids of an NPC, NpcActor::moveAnimSet (unk_0201ac80.cpp part of src/main/unk_020119cc.cpp;
// ctor 0x0201ad3c, dtor label 0x0201ad38).

struct NpcMoveAnimSet {
    NpcMoveAnimSet();
    ~NpcMoveAnimSet();

    s32 standAnim;
    s32 walkAnim;
    s32 runAnim;

    s32 getRunAnim();
    s32 getWalkAnim();
    s32 getStandAnim();
    void setRunAnim(s32 v);
    void setWalkAnim(s32 v);
    void setStandAnim(s32 v);
    void func_0201ad38();
};

#endif

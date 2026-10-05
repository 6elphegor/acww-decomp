#ifndef ACTOR_SPNPCACTOR_H
#define ACTOR_SPNPCACTOR_H

#include "types.h"
#include "actor/NpcActor.h"
#include "npc/NpcResHandleView.h"

// Base of the special (non-villager) NPCs (0x654 bytes). Defined in src/main/unk_0202e2d4.cpp (vtable, D2/D1/D0
// 0x0202e5a8.., overrides 0x0202e2d4..0x0202e55c); the constructor is inline.
class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDelete();
    virtual BOOL preDelete();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual u16 getSpecies();
    /* 0xa8 */ virtual s32 getWalkAnimSpeedScale();

    BOOL loadAnimSet();
    void setColliderSize(s32 a, s32 b);

    /* 0x640 */ SpNpcAnimHeapHandle animHeapHandle;
    /* 0x648 */ s32 colliderRadius;
    /* 0x64c */ s32 colliderHeight;
    /* 0x650 */ u8 talkMelodyPlayed;
    /* 0x651 */ u8 actCounter; // used by the derived classes
};

#endif

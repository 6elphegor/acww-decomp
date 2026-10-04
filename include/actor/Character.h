#ifndef ACTOR_CHARACTER_H
#define ACTOR_CHARACTER_H

#include "types.h"
#include "actor/Actor.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_020d77a4_Vec3.h"

// Actor that can be talked to / interacted with (villagers, special NPCs, players, buildings, interactive field and
// room objects); defined in src/main/unk_0203e438.cpp (vtable 0x020d9668). Members end at 0xea; derived classes
// (NpcActor::unk_ea) start in the tail padding, so no padding member is declared. Size 0xec.
class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 status);
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *other);                       // 0x48 interaction accepted (other: Character)
    virtual void vfunc_4c(u32 a, u8 b);                       // 0x4c
    virtual VecFx32 *getInteractionPos();                     // 0x50
    virtual BOOL acceptsInteractionOutOfRange(void *other);   // 0x54
    virtual BOOL vfunc_58(void *a);                           // 0x58
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *out);            // 0x5c

    void clearCharFlags(u32 mask);
    void setCharFlags(u32 mask);
    BOOL testCharFlags(u32 mask);
    BOOL isAreaSynced();
    void setAreaSynced();
    s32 getTalkStartMode();
    void clearTalkStartMode();
    void setTalkStartMode1();
    void setTalkStartMode0();
    void setInteractionRange(s32 v);
    void detachTalkRequest(s32 a);
    void attachTalkRequest(s32 a);
    BOOL checkInteraction(Character *other);
    BOOL isInInteractionRange(Character *other);
    BOOL isInFacingArcOf(Character *other, s16 lo, s16 hi);
    void setCharId(u32 a);
    u32 getCharId();

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
};

#endif // ACTOR_CHARACTER_H

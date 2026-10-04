#include "types.h"
#include "actor/CharacterListNode.h"
#include "talk/Unk_0203e22c_State.h"
#include "game/CharacterList.h"
#include "net/Unk_0203e938_Net.h"
#include "sys/ProcBase.h"
#include "talk/TalkRequestQueue.h"
#include "actor/Actor.h"
#include "actor/Character.h"




class Character;



extern CharacterList gCharacterList;
extern u32 sCharInteractReservedId;
extern u32 sCharInteractLockIds[4];
extern u8 sCharInteractSyncResult;



extern "C" {
extern Unk_0203e22c_State *gTalkRequestCurrent;
}

extern "C" {
extern u32 sTalkTargetId;
}

extern "C" {
extern u32 sTalkRequestFlags;
}

extern "C" {
extern u32 sTalkRequestList;
}

extern "C" {
extern Unk_0203e938_Net *volatile gCommManager;
}

extern "C" {
extern s16 data_020c905c;
}

extern "C" {
}

extern "C" {
void PrioList_Init(void *);
}

extern "C" {
void TalkRequestPool_Reset(void);
}

extern "C" {
void TalkRequestFlags_Clear(u32);
}

extern "C" {
BOOL PlayerActor_RequestAct10(void);
}

extern "C" {
void TalkRequest_SetTalkTarget(u32);
}

extern "C" {
BOOL PlayerActor_RequestReturnToWait(void);
}

extern "C" {
u32 MenuCtrl_IsFinished(u32);
}

extern "C" {
BOOL MenuCtrl_IsIdle(void);
}

extern "C" {
BOOL PlayerActor_CanOpenMenu(void);
}

extern "C" {
BOOL PlayerActor_RequestAct05(void);
}

extern "C" {
void MenuCtrl_RequestOpen(u32);
}

extern "C" {
s32 Field_GetExitedBuildingKey(void);
}

extern "C" {
Unk_0203e22c_State *TalkRequestPool_Alloc(void);
}

extern "C" {
void List_Remove(void *, void *);
}

extern "C" {
s32 func_01ffcb0c(s32);
}

extern "C" {
u32 Talk_DetachRequest(s32);
}

extern "C" {
u32 Talk_AttachRequestToWindow0(s32);
}

extern "C" {
s32 Math_AngleXZ(VecFx32 *, VecFx32 *);
}

extern "C" {
long long Vec_MagSqXZ(VecFx32 *);
}

extern "C" {
void *PrioList_FindById(void *, u32);
}

extern "C" {
void func_020652dc(void *, void *);
}

extern "C" {
void _ZN5Actor10postCreateEv(void *, s32);
}

extern "C" {
void CharInteractSync_SendReply(u8 a, u32 aid, ...);
}

extern "C" {
void CharInteractSync_ClearLock(u32 idx);
}

extern "C" {
u32 CharInteractSync_IsFree(u32 idx, u32 id);
}

extern "C" {
void CharInteractSync_RequestLock(u32);
}

extern "C" {
s32 CharInteractSync_Check(u32);
}

extern "C" {
BOOL _ZN11CommManager7isMyAidEj(void *, u32);
}

extern "C" {
void *PlayerActor_GetActor(u32);
}

extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *);
}

extern "C" {
void _ZN11CommManager11beginRecordEv(void *);
}

extern "C" {
void _ZN11CommManager11writeRecordEPhj(void *, void *, u32);
}

extern "C" {
void _ZN11CommManager9endRecordEjj(void *, u32, u32);
}

extern "C" {
BOOL NetArea_IsLocalOwner(void);
}

extern "C" {
void CharInteractSync_SendCharMsg(u32 id, u8 x, u8 mode);
}

extern "C" {
void TalkRequestQueue_Reset(void);
}

extern "C" {
void CharInteractSync_Reset(void);
}

extern "C" {
Character *Character_FindByCharId(u32 id);
}



CharacterList gCharacterList;

Character::Character() {
    charNode.prev = 0;
    charNode.next = 0;
    charNode.charId = 0;
}

Character::~Character() {}

extern "C" void Character_ResetList(void) {
    PrioList_Init(&gCharacterList);
}

BOOL Character::vfunc_04() {
    if (!Actor::vfunc_04()) {
        return FALSE;
    }
    charNode.charId = 0;
    charNode.owner = this;
    setInteractionRange(0x3000);
    charFlags = 0;
    setTalkStartMode1();
    return TRUE;
}

void Character::postCreate(s32 a) {
    if (a == 2) {
        func_020652dc(&gCharacterList, &charNode);
    }
    _ZN5Actor10postCreateEv(this, a);
}

BOOL Character::preDelete() {
    if (!Actor::preDelete()) {
        return FALSE;
    }
    List_Remove(&gCharacterList, &charNode);
    return TRUE;
}

BOOL Character::preExecute() {
    if (Actor::preExecute()) {
        return TRUE;
    }
    return FALSE;
}

u32 Character::getCharId() { return charNode.charId; }

void Character::setCharId(u32 a) {
    charNode.charId = a | (*(u16 *)((u8 *)this + 0xc) << 16);
}

extern "C" Character *Character_FindByCharId(u32 id) {
    CharacterListNode *n = (CharacterListNode *)PrioList_FindById(&gCharacterList, id);
    if (n) {
        return n->owner;
    }
    return 0;
}

extern "C" Character *Character_FindInteractionTarget(Character *self) {
    for (CharacterListNode *n = gCharacterList.head; n; n = n->next) {
        Character *o = n->owner;
        if (o == self) {
            continue;
        }
        if (o->checkInteraction(self)) {
            return o;
        }
    }
    return 0;
}

BOOL Character::isInFacingArcOf(Character *other, s16 lo, s16 hi) {
    VecFx32 a, b;
    a = *other->getInteractionPos();
    b = *getInteractionPos();
    s16 d = Math_AngleXZ(&a, &b) - *(s16 *)((u8 *)other + 0x8e);
    if (d >= lo && d <= hi) {
        return TRUE;
    }
    return FALSE;
}

BOOL Character::isInInteractionRange(Character *other) {
    VecFx32 d;
    if (interactionRangeSq == 0) {
        return TRUE;
    }
    d.x = other->getInteractionPos()->x - getInteractionPos()->x;
    d.y = other->getInteractionPos()->y - getInteractionPos()->y;
    d.z = other->getInteractionPos()->z - getInteractionPos()->z;
    if (Vec_MagSqXZ(&d) < (long long)interactionRangeSq) {
        return TRUE;
    }
    return FALSE;
}

BOOL Character::vfunc_48(void *a) { return FALSE; }

BOOL Character::checkInteraction(Character *other) {
    if (isInInteractionRange(other)) {
        s16 t = data_020c905c;
        if (isInFacingArcOf(other, -t, t)) {
            return vfunc_48(other);
        }
    }
    return FALSE;
}

void Character::vfunc_4c(u32 a, u8 b) {}

VecFx32 *Character::getInteractionPos() { return &position; }

BOOL Character::acceptsInteractionOutOfRange(void *a) { return FALSE; }

BOOL Character::vfunc_58(void *a) { return FALSE; }

BOOL Character::vfunc_5c(Unk_020d77a4_Vec3 *out) { return FALSE; }

void Character::attachTalkRequest(s32 a) { Talk_AttachRequestToWindow0(a); }

void Character::detachTalkRequest(s32 a) { Talk_DetachRequest(a); }

void Character::setInteractionRange(s32 v) { interactionRangeSq = func_01ffcb0c(v); }

void Character::setTalkStartMode0() {
    clearCharFlags(3);
    setCharFlags(1);
}

void Character::setTalkStartMode1() {
    clearCharFlags(3);
    setCharFlags(2);
}


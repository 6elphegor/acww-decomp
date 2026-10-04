#include "types.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_0203e4f0_Vec.h"
#include "talk/Unk_0203e22c_State.h"
#include "game/Unk_0203e5d0_List.h"
#include "net/Unk_0203e938_Net.h"
// Library base class; its code is ARM in autoload_2 and ITCM. It allocates its objects on a separate heap.
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

// Vtable at 0x020d8c74. Its constructor and destructor are inline, which is why derived constructors and destructors
// store two vtable pointers in a row.
class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual void postCreate(s32 a);
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};



class Character;



extern Unk_0203e5d0_List gCharacterList;
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
extern u8 gActorList[];
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
void func_020e79a0(void *, void *);
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
s32 Math_AngleXZ(Unk_0203e4f0_Vec *, Unk_0203e4f0_Vec *);
}

extern "C" {
long long func_020e9630(Unk_0203e4f0_Vec *);
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

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor() { func_020e79a0(gActorList, &unk_50); }

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_0203e4f0_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

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
    /* 0xea */ u16 pad_ea;
};

class TalkRequestQueue : public GameProc {
public:
    TalkRequestQueue() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual ~TalkRequestQueue();
};
Unk_0203e5d0_List gCharacterList;

Character::Character() {
    charNode.unk_00 = 0;
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
    func_020e79a0(&gCharacterList, &charNode);
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
    Unk_0203e5d0_Node *n = (Unk_0203e5d0_Node *)PrioList_FindById(&gCharacterList, id);
    if (n) {
        return n->owner;
    }
    return 0;
}

extern "C" Character *Character_FindInteractionTarget(Character *self) {
    for (Unk_0203e5d0_Node *n = gCharacterList.head; n; n = n->next) {
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
    Unk_0203e4f0_Vec a, b;
    a = *other->getInteractionPos();
    b = *getInteractionPos();
    s16 d = Math_AngleXZ(&a, &b) - *(s16 *)((u8 *)other + 0x8e);
    if (d >= lo && d <= hi) {
        return TRUE;
    }
    return FALSE;
}

BOOL Character::isInInteractionRange(Character *other) {
    Unk_0203e4f0_Vec d;
    if (interactionRangeSq == 0) {
        return TRUE;
    }
    d.x = other->getInteractionPos()->x - getInteractionPos()->x;
    d.y = other->getInteractionPos()->y - getInteractionPos()->y;
    d.z = other->getInteractionPos()->z - getInteractionPos()->z;
    if (func_020e9630(&d) < (long long)interactionRangeSq) {
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

Unk_0203e4f0_Vec *Character::getInteractionPos() { return (Unk_0203e4f0_Vec *)position; }

BOOL Character::acceptsInteractionOutOfRange(void *a) { return FALSE; }

BOOL Character::vfunc_58(void *a) { return FALSE; }

BOOL Character::vfunc_5c() { return FALSE; }

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


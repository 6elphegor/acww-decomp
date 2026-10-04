#include "types.h"
#include "sys/ProcBase.h"
#include "talk/TalkRequestQueue.h"
#include "actor/Character.h"

struct Unk_0203dad4_Task;





class Unk_0203e604_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c(s32 a, s32 b);
    virtual void vfunc_50();
    virtual BOOL vfunc_54(Unk_0203e604_Obj *other);
    virtual BOOL vfunc_58(Unk_0203e604_Obj *other);
};

struct Unk_0203dad4_Task {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203dad4_Task *next;
    /* 0x08 */ u8 priority;
    /* 0x09 */ u8 pad[3];
    /* 0x0c */ u32 requesterId;
    /* 0x10 */ u32 targetId;
    /* 0x14 */ u8 phase;
    /* 0x15 */ u8 kind;
    /* 0x16 */ u8 state;
    /* 0x17 */ u8 result;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
};

struct TalkRequestList {
    Unk_0203dad4_Task *head;
    u32 tail;
    TalkRequestList() {
        head = 0;
        tail = 0;
    }
};

typedef BOOL (*Unk_0203dbb8_Fn)(Unk_0203dad4_Task *);

extern Unk_0203dad4_Task *gTalkRequestCurrent;
extern u32 sTalkTargetId;
extern u32 sTalkRequestFlags;
extern TalkRequestList sTalkRequestList;
extern Unk_0203dbb8_Fn sTalkRequestRunFns[];
extern Unk_0203dbb8_Fn sTalkRequestStartFns[];
extern Unk_0203dbb8_Fn sTalkRequestBeginFns[];
extern Unk_0203dbb8_Fn sTalkRequestEndFns[];

extern "C" {
extern u8 gScreenTransition;
extern u8 sCharInteractSyncResult;
extern s32 gActorDefaultParent;
extern s32 gCommManager;

Unk_0203e604_Obj *PlayerActor_GetActor(s32 id);
u32 _ZN9Character9getCharIdEv(Unk_0203e604_Obj *o);
Unk_0203e604_Obj *Character_FindByCharId(u32 id);
Unk_0203dad4_Task *TalkRequestPool_Alloc();
void PrioList_Insert(TalkRequestList *l, Unk_0203dad4_Task *t);
void TalkRequestList_FreeAll(TalkRequestList *l);
void func_020e79a0(void *l, void *t);
void NetArea_SendStateToNewOwner();
void NetArea_SendStateToRequester();
void Scene_CheckExit();
void _ZN8ProcBase8vfunc_20Ev(void *a, u32 b);
BOOL TalkRequest_IsActive();
BOOL _ZN9Character12isAreaSyncedEv();
s32 CharInteractSync_CheckArea();
void CharInteractSync_SendEvent(u32 id, u32 v);
void CharInteractSync_SendQuery(u32 id, u32 v);
void TalkRequest_SetTalkTarget(u32 v);
void TalkRequest_FinishCurrent();
void CharInteractSync_ReleaseLock();
s32 CharInteractSync_Check(u32 id);
void CharInteractSync_RequestLock(u32 id);
BOOL PlayerActor_IsStowFinished();
BOOL PlayerActor_SetEventLock(u32 v);
BOOL PlayerActor_CanAcceptTalk();
BOOL PlayerActor_RequestReturnToWait();
BOOL PlayerActor_IsInterruptible();
BOOL PlayerActor_IsEventIdle();
BOOL PlayerActor_CanStartTalk();
BOOL PlayerActor_RequestAct10();
void PlayerActor_RequestStowThenAct10();
BOOL PlayerActor_LocalRequestExitWalkOut();
u32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(u32 a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(s32 v);
BOOL PlayerActor_LocalRequestLeaveRoom();
Unk_0203e604_Obj *Character_FindInteractionTarget(Unk_0203e604_Obj *o);
BOOL _ZN9Character16checkInteractionEPS_(Unk_0203e604_Obj *a, Unk_0203e604_Obj *b);
s32 _ZN9Character16getTalkStartModeEv(Unk_0203e604_Obj *o);
BOOL TalkRequest_AcquireHostLock(Unk_0203dad4_Task *t);

void TalkRequestFlags_Set(u32 mask);
BOOL TalkRequestFlags_Test(u32 mask);
BOOL TalkRequest_AddPlayerExclusive(u32 x);
void MenuCtrl_RequestForceClose(void);
void TalkRequestEntry_Free(void *p);
s32 _ZN15TalkWindowState13detachRequestEv(u32 x);
u32 TalkWindow_Get(u32 x);
s32 _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(u32 a, u32 b);
u32 MenuCtrl_IsFinished(u32 a);
BOOL MenuCtrl_IsIdle(void);
BOOL PlayerActor_CanOpenMenu(void);
BOOL PlayerActor_RequestAct05(void);
void MenuCtrl_RequestOpen(u32 v);
void TalkRequestQueue_Reset(void);
s32 Field_GetExitedBuildingKey(void);
void PrioList_Init(void *p);
void TalkRequestPool_Reset(void);
void CharInteractSync_Reset(void);
BOOL TalkRequest_Add(u32 a, u32 b, u32 c, u32 d, u8 e);
BOOL TalkRequest_IsCurrentKind(u32 x);
BOOL TalkRequestFlags_IsEventWarpBlock();
BOOL TalkRequestFlags_IsResetti();
BOOL TalkRequestFlags_IsSceneHold();
void TalkRequestFlags_SetEventWarpReady();
void TalkRequestFlags_SetEventWarpStarted();
void TalkRequestFlags_Clear(u32 mask);
void TalkRequest_NotifyTarget(Unk_0203e604_Obj *o, u32 v);
BOOL TalkRequest_AcquireTarget(Unk_0203dad4_Task *t);
BOOL TalkRequest_AcquireAreaTarget(Unk_0203dad4_Task *t);
void TalkRequest_ReleaseTarget(Unk_0203dad4_Task *t, u32 v);
void TalkRequestQueue_StepEnd(Unk_0203dad4_Task *t);
void TalkRequestQueue_StepRun(Unk_0203dad4_Task *t);
void TalkRequestQueue_StepBegin(Unk_0203dad4_Task *t);
void TalkRequestQueue_StartNext(Unk_0203dad4_Task *t);

}

struct Unk_0203d5e4_Arg {
    u8 unk_00[0x3c];
    u32 window;
};

extern "C" BOOL TalkRequest_FinishExclusive(u32 x);
extern "C" BOOL TalkRequest_IsExclusiveRunning(u32 x);

extern "C" void TalkRequestFlags_Set(u32 mask);
extern "C" BOOL TalkRequestFlags_Test(u32 mask);

void Character::clearTalkStartMode() { clearCharFlags(3); }

s32 Character::getTalkStartMode() {
    if (testCharFlags(1)) {
        return 0;
    }
    if (testCharFlags(2)) {
        return 1;
    }
    return 2;
}

void Character::setAreaSynced() { setCharFlags(4); }

BOOL Character::isAreaSynced() { return testCharFlags(4); }

BOOL Character::testCharFlags(u32 mask) {
    if (charFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void Character::setCharFlags(u32 mask) { charFlags = charFlags | mask; }

void Character::clearCharFlags(u32 mask) { charFlags = charFlags & ~mask; }

extern "C" TalkRequestQueue *TalkRequestQueue_Create(void) {
    return new TalkRequestQueue();
}

extern "C" void TalkRequestQueue_Reset(void) {
    PrioList_Init(&sTalkRequestList);
    TalkRequestPool_Reset();
    gTalkRequestCurrent = 0;
    sTalkTargetId = 0;
    TalkRequestFlags_Clear(6);
}

extern "C" void TalkRequestQueue_StartInitial(void) {
    TalkRequestQueue_Reset();
    Unk_0203dad4_Task *s = TalkRequestPool_Alloc();
    s32 r = Field_GetExitedBuildingKey();
    if (r != 0) {
        s->requesterId = (u32)r;
        s->targetId = 0;
        s->kind = 0xc;
        s->phase = 2;
        s->state = 7;
    } else {
        s->requesterId = 0;
        s->targetId = 0;
        s->kind = 4;
        s->phase = 3;
        s->state = 5;
    }
    s->priority = 1;
    s->result = 5;
    gTalkRequestCurrent = s;
}

extern "C" BOOL TalkRequest_IsActive(void) {
    if (gTalkRequestCurrent) {
        return TRUE;
    }
    return FALSE;
}

BOOL TalkRequestQueue::vfunc_00() {
    TalkRequestQueue_Reset();
    CharInteractSync_Reset();
    sTalkRequestFlags = 0;
    return TRUE;
}

BOOL TalkRequestQueue::vfunc_0c() { return TRUE; }

extern "C" BOOL TalkRequest_StartMenu(Unk_0203dad4_Task *s) {
    if (!MenuCtrl_IsIdle()) {
        return FALSE;
    }
    if (!PlayerActor_CanOpenMenu()) {
        return FALSE;
    }
    if (!PlayerActor_RequestAct05()) {
        return FALSE;
    }
    MenuCtrl_RequestOpen(s->state);
    return TRUE;
}

extern "C" u32 TalkRequest_RunMenu(u32 a) {
    return MenuCtrl_IsFinished(a);
}

extern "C" BOOL TalkRequest_EndMenu(void) {
    if (PlayerActor_RequestReturnToWait()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_AcquireHostLock(Unk_0203dad4_Task *s) {
    switch (CharInteractSync_Check(s->targetId)) {
    case 2:
        s->state = 2;
        break;
    case 1:
        s->state = 1;
        break;
    case 0:
        return FALSE;
    }
    if (s->kind != 7 && !PlayerActor_RequestAct10()) {
        return FALSE;
    }
    TalkRequest_SetTalkTarget(s->targetId);
    CharInteractSync_RequestLock(s->targetId);
    return TRUE;
}

extern "C" BOOL TalkRequest_AcquireAreaTarget(Unk_0203dad4_Task *t) {
    s32 r = CharInteractSync_CheckArea();
    switch (r) {
    case 2:
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            Unk_0203e604_Obj *o = Character_FindByCharId(t->targetId);
            if (_ZN9Character12isAreaSyncedEv()) {
                if (t->result == 1) {
                    if (!o->vfunc_58(PlayerActor_GetActor(4))) {
                        return FALSE;
                    }
                }
            }
        }
        t->state = 2;
        break;
    case 1:
        t->state = 0;
        break;
    case 0:
        return FALSE;
    }
    if (t->kind != 7) {
        if (!PlayerActor_RequestAct10()) {
            return FALSE;
        }
    }
    TalkRequest_SetTalkTarget(t->targetId);
    if (r == 1) {
        CharInteractSync_SendQuery(t->targetId, t->result);
    }
    return TRUE;
}

extern "C" BOOL TalkRequest_AcquireTarget(Unk_0203dad4_Task *t) {
    Character_FindByCharId(t->targetId);
    if (_ZN9Character12isAreaSyncedEv()) {
        if (!TalkRequest_AcquireAreaTarget(t)) {
            return FALSE;
        }
    } else {
        if (!TalkRequest_AcquireHostLock(t)) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" void TalkRequest_NotifyTarget(Unk_0203e604_Obj *o, u32 v) {
    if (_ZN9Character12isAreaSyncedEv()) {
        if (CharInteractSync_CheckArea() == 1) {
            CharInteractSync_SendEvent(_ZN9Character9getCharIdEv(o), v);
        }
    }
    o->vfunc_4c(v, 4);
}

extern "C" void TalkRequest_ReleaseTarget(Unk_0203dad4_Task *t, u32 v) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->targetId);
    if (o != NULL) {
        if (_ZN9Character12isAreaSyncedEv()) {
            if (CharInteractSync_CheckArea() == 1) {
                CharInteractSync_SendEvent(t->targetId, v);
            }
        }
        o->vfunc_4c(v, 4);
    }
    TalkRequest_SetTalkTarget(0);
    if (t->kind == 7) {
        PlayerActor_SetEventLock(0);
    }
}

extern "C" BOOL TalkRequest_StartTalk(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *a = Character_FindByCharId(t->targetId);
    Unk_0203e604_Obj *b = Character_FindByCharId(t->requesterId);
    if (!PlayerActor_CanStartTalk()) {
        return FALSE;
    }
    t->result = 0;
    if (a == NULL) {
        Unk_0203e604_Obj *n = Character_FindInteractionTarget(b);
        if (n == NULL) {
            return FALSE;
        }
        t->targetId = _ZN9Character9getCharIdEv(n);
    } else if (!_ZN9Character16checkInteractionEPS_(a, b)) {
        if (a->vfunc_54(b)) {
            t->result = 5;
        } else {
            return FALSE;
        }
    }
    if (TalkRequest_AcquireTarget(t)) {
        PlayerActor_RequestAct10();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_BeginTalk(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->targetId);
    switch (t->state) {
    case 0:
    case 1:
        switch (sCharInteractSyncResult) {
        case 1:
            if (t->kind == 7) {
                t->state = 8;
            } else {
                t->state = 2;
            }
            break;
        case 2:
            t->state = 3;
            break;
        }
        break;
    }
    if (t->state == 8) {
        if (!PlayerActor_CanStartTalk()) {
            return FALSE;
        }
        if (!PlayerActor_RequestAct10()) {
            return FALSE;
        }
        t->state = 2;
    }
    switch (t->state) {
    case 2: {
        o->vfunc_4c(3, 4);
        s32 r = _ZN9Character16getTalkStartModeEv(o);
        if (t->result == 5) {
            r = 2;
        }
        if (r == 2) {
            PlayerActor_RequestAct10();
            TalkRequest_NotifyTarget(o, t->result);
            t->state = 5;
        } else {
            PlayerActor_RequestStowThenAct10();
            t->state = 4;
        }
        return TRUE;
    }
    case 3:
        if (PlayerActor_RequestReturnToWait()) {
            TalkRequest_ReleaseTarget(t, 4);
            TalkRequest_FinishCurrent();
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartTalk6(Unk_0203dad4_Task *t) {
    Character_FindByCharId(t->requesterId);
    if (!PlayerActor_CanStartTalk()) {
        return FALSE;
    }
    t->result = 1;
    if (TalkRequest_AcquireTarget(t)) {
        PlayerActor_RequestAct10();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_RunTalk(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->targetId);
    switch (t->state) {
    case 4:
        if (PlayerActor_IsStowFinished()) {
            TalkRequest_NotifyTarget(o, t->result);
            t->state = 5;
        }
        break;
    case 5:
        break;
    case 6:
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_EndTalk(Unk_0203dad4_Task *t) {
    if (PlayerActor_RequestReturnToWait()) {
        TalkRequest_ReleaseTarget(t, 8);
        CharInteractSync_ReleaseLock();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartTalk7(Unk_0203dad4_Task *t) {
    if (Character_FindByCharId(t->requesterId) == NULL) {
        return FALSE;
    }
    if (!PlayerActor_CanAcceptTalk()) {
        return FALSE;
    }
    if (!PlayerActor_SetEventLock(1)) {
        return FALSE;
    }
    t->result = 1;
    return TalkRequest_AcquireTarget(t);
}

extern "C" BOOL TalkRequest_StartSceneExit(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->requesterId);
    if (!PlayerActor_CanStartTalk()) {
        return FALSE;
    }
    if (!PlayerActor_LocalRequestExitWalkOut()) {
        return FALSE;
    }
    if (o != NULL) {
        o->vfunc_4c(2, 4);
    }
    SceneWarp_RequestExit(Scene_GetWarpRequest(), t->state);
    return TRUE;
}

extern "C" BOOL TalkRequest_StartEventWarp(Unk_0203dad4_Task *) {
    if (!PlayerActor_CanAcceptTalk()) {
        return FALSE;
    }
    PlayerActor_SetEventLock(1);
    TalkRequestFlags_SetEventWarpStarted();
    return TRUE;
}

extern "C" BOOL TalkRequest_BeginEventWarp(Unk_0203dad4_Task *) {
    if (!PlayerActor_IsEventIdle()) {
        return FALSE;
    }
    TalkRequestFlags_SetEventWarpReady();
    return TRUE;
}

extern "C" BOOL TalkRequest_BeginSceneEntryChar(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->requesterId);
    if (o == NULL) {
        return FALSE;
    }
    if (t->state == 7) {
        switch (CharInteractSync_Check(t->requesterId)) {
        case 2:
            t->state = 2;
            break;
        case 1:
            t->state = 1;
            CharInteractSync_RequestLock(t->requesterId);
            break;
        }
    }
    if (t->state == 1) {
        switch (sCharInteractSyncResult) {
        case 1:
            t->state = 2;
            break;
        case 2:
            CharInteractSync_RequestLock(t->requesterId);
            break;
        }
    }
    if (t->state == 2) {
        o->vfunc_4c(6, 4);
        t->state = 5;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_EndSceneEntryChar(Unk_0203dad4_Task *) {
    CharInteractSync_ReleaseLock();
    return TRUE;
}

extern "C" BOOL TalkRequest_RunSceneEntry(Unk_0203dad4_Task *t) {
    if (TalkRequestFlags_IsSceneHold()) {
        return FALSE;
    }
    BOOL b = gScreenTransition == 2 ? TRUE : FALSE;
    if (!b) {
        return FALSE;
    }
    if (t->result == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartExclusive(Unk_0203dad4_Task *t) {
    if (!PlayerActor_CanStartTalk()) {
        return FALSE;
    }
    if (!PlayerActor_RequestAct10()) {
        return FALSE;
    }
    t->state = 5;
    return TRUE;
}

extern "C" BOOL TalkRequest_RunExclusive(Unk_0203dad4_Task *t) {
    if (t->state == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_EndExclusive(Unk_0203dad4_Task *) {
    if (PlayerActor_RequestReturnToWait()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartLeaveRoom(Unk_0203dad4_Task *t) {
    if (!PlayerActor_IsInterruptible()) {
        return FALSE;
    }
    if (!PlayerActor_LocalRequestLeaveRoom()) {
        return FALSE;
    }
    t->state = 5;
    return TRUE;
}

extern "C" BOOL TalkRequest_RunLeaveRoom(Unk_0203dad4_Task *t) {
    if (t->state == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartSimple(Unk_0203dad4_Task *t) {
    t->state = 5;
    return TRUE;
}

extern "C" BOOL TalkRequest_RunSimple(Unk_0203dad4_Task *t) {
    if (t->state == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_RunNetSyncHold(Unk_0203dad4_Task *t) {
    if (t->state == 6) {
        PlayerActor_SetEventLock(0);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StepUnused(Unk_0203dad4_Task *) { return FALSE; }

extern "C" BOOL TalkRequest_StepPass(Unk_0203dad4_Task *) { return TRUE; }

extern "C" BOOL TalkRequest_StepBlock(Unk_0203dad4_Task *) { return FALSE; }

extern "C" void TalkRequestQueue_StartNext(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = sTalkRequestList.head;
    Unk_0203dbb8_Fn *tbl = sTalkRequestStartFns;
    for (; t != NULL; t = t->next) {
        if (tbl[t->kind](t)) {
            func_020e79a0(&sTalkRequestList, t);
            gTalkRequestCurrent = t;
            t->phase = 2;
            break;
        }
    }
}

extern "C" void TalkRequestQueue_StepBegin(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = gTalkRequestCurrent;
    if (t->phase == 2) {
        if (sTalkRequestBeginFns[t->kind](t)) {
            gTalkRequestCurrent->phase = 3;
        }
    }
}

extern "C" void TalkRequestQueue_StepRun(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = gTalkRequestCurrent;
    if (t->phase == 3) {
        if (sTalkRequestRunFns[t->kind](t)) {
            gTalkRequestCurrent->phase = 4;
        }
    }
}

extern "C" void TalkRequestQueue_StepEnd(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = gTalkRequestCurrent;
    if (t->phase == 4) {
        if (sTalkRequestEndFns[t->kind](t)) {
            TalkRequest_FinishCurrent();
        }
    }
}

BOOL TalkRequestQueue::onExecute() {
    if (TalkRequest_IsActive()) {
        TalkRequestQueue_StepRun((Unk_0203dad4_Task *)this);
        TalkRequestQueue_StepEnd((Unk_0203dad4_Task *)this);
    }
    if (!TalkRequest_IsActive()) {
        TalkRequestQueue_StartNext((Unk_0203dad4_Task *)this);
    }
    if (TalkRequest_IsActive()) {
        TalkRequestQueue_StepBegin((Unk_0203dad4_Task *)this);
    }
    TalkRequestList_FreeAll(&sTalkRequestList);
    return TRUE;
}

BOOL TalkRequestQueue::onDraw() {
    return TRUE;
}

BOOL TalkRequestQueue::vfunc_20(u32 b) {
    NetArea_SendStateToNewOwner();
    NetArea_SendStateToRequester();
    if (gActorDefaultParent != 0) {
        Scene_CheckExit();
    }
    _ZN8ProcBase8vfunc_20Ev(this, b);
}

extern "C" BOOL TalkRequest_IsCurrentKind(u32 x) {
    if (gTalkRequestCurrent == NULL) {
        return FALSE;
    }
    if (gTalkRequestCurrent->kind == x) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_Add(u32 a, u32 b, u32 c, u32 d, u8 e) {
    Unk_0203dad4_Task *t = TalkRequestPool_Alloc();
    if (t == NULL) {
        return FALSE;
    }
    t->requesterId = a;
    t->targetId = b;
    t->kind = c;
    t->priority = d;
    t->state = e;
    t->result = 0;
    t->unk_18 = 0;
    t->unk_19 = 0;
    t->phase = 1;
    PrioList_Insert(&sTalkRequestList, t);
    return TRUE;
}

extern "C" BOOL TalkRequest_AddSceneExit(Unk_0203e604_Obj *o, s32 v) {
    u32 id;
    if (v < 0) {
        return FALSE;
    }
    id = 0;
    if (o != NULL) {
        id = _ZN9Character9getCharIdEv(o);
    }
    return TalkRequest_Add(id, 0, 3, 1, (u8)v);
}

extern "C" BOOL TalkRequest_AddLeaveRoom() {
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(PlayerActor_GetActor(4)), 8, 1, 0);
}

extern "C" BOOL TalkRequest_FinishLeaveRoom() {
    if (!TalkRequest_IsCurrentKind(8)) {
        return FALSE;
    }
    gTalkRequestCurrent->state = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_AddMenu(u8 x) {
    Unk_0203e604_Obj *o = PlayerActor_GetActor(4);
    if (o == NULL) {
        return FALSE;
    }
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(o), 1, 2, x);
}

extern "C" BOOL TalkRequest_AddEventWarp() {
    if (TalkRequestFlags_IsResetti() || TalkRequestFlags_IsEventWarpBlock()) {
        return FALSE;
    }
    Unk_0203e604_Obj *o = PlayerActor_GetActor(4);
    if (o == NULL) {
        return FALSE;
    }
    TalkRequestFlags_Clear(6);
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(o), 0xb, 1, 0);
}

extern "C" BOOL TalkRequestFlags_IsEventWarpStarted() { return TalkRequestFlags_Test(2); }

extern "C" BOOL TalkRequestFlags_IsEventWarpReady() { return TalkRequestFlags_Test(4); }

extern "C" void TalkRequestFlags_SetEventWarpStarted() { TalkRequestFlags_Set(2); }

extern "C" void TalkRequestFlags_SetEventWarpReady() { TalkRequestFlags_Set(4); }

extern "C" BOOL TalkRequestFlags_IsSceneHold() { return TalkRequestFlags_Test(1); }

extern "C" void TalkRequestFlags_SetSceneHold() { TalkRequestFlags_Set(1); }

extern "C" void TalkRequestFlags_ClearSceneHold() { TalkRequestFlags_Clear(1); }

extern "C" BOOL TalkRequestFlags_IsResetti() { return TalkRequestFlags_Test(8); }

extern "C" void TalkRequestFlags_SetResetti() { TalkRequestFlags_Set(8); }

extern "C" void TalkRequestFlags_ClearResetti() { TalkRequestFlags_Clear(8); }

extern "C" BOOL TalkRequestFlags_IsEventWarpBlock() { return TalkRequestFlags_Test(0x20); }

extern "C" void TalkRequestFlags_SetEventWarpBlock() { TalkRequestFlags_Set(0x20); }

extern "C" void TalkRequestFlags_ClearEventWarpBlock() { TalkRequestFlags_Clear(0x20); }

extern "C" BOOL TalkRequestFlags_Test(u32 mask) {
    if ((sTalkRequestFlags & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void TalkRequestFlags_Set(u32 mask) {
    sTalkRequestFlags |= mask;
}

extern "C" void TalkRequestFlags_Clear(u32 mask) {
    sTalkRequestFlags &= ~mask;
}

extern "C" BOOL TalkRequest_AddPlayerExclusive(u32 x) {
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(PlayerActor_GetActor(4)), x, 4, 0);
}

extern "C" BOOL TalkRequest_IsExclusiveRunning(u32 x) {
    if (TalkRequest_IsCurrentKind(x) && gTalkRequestCurrent->state != 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_FinishExclusive(u32 x) {
    if (!TalkRequest_IsCurrentKind(x)) {
        return FALSE;
    }
    gTalkRequestCurrent->state = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_AddSaveMenu(void) { return TalkRequest_AddPlayerExclusive(5); }

extern "C" BOOL TalkRequest_IsSaveMenuRunning(void) { return TalkRequest_IsExclusiveRunning(5); }

extern "C" BOOL TalkRequest_FinishSaveMenu(void) { return TalkRequest_FinishExclusive(5); }

extern "C" BOOL TalkRequest_AddCameraView(void) { return TalkRequest_AddPlayerExclusive(0xa); }

extern "C" BOOL TalkRequest_IsCameraViewRunning(void) { return TalkRequest_IsExclusiveRunning(0xa); }

extern "C" BOOL TalkRequest_FinishCameraView(void) { return TalkRequest_FinishExclusive(0xa); }

extern "C" BOOL TalkRequest_AddPlayerMessage(void) {
    if (gTalkRequestCurrent != 0) {
        return FALSE;
    }
    return TalkRequest_Add(0, 0, 9, 0, 0);
}

extern "C" BOOL TalkRequest_FinishPlayerMessage(void) {
    if (!TalkRequest_IsCurrentKind(9)) {
        return FALSE;
    }
    gTalkRequestCurrent->state = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_IsPlayerMessage(void) {
    return TalkRequest_IsCurrentKind(9);
}

extern "C" BOOL TalkRequest_AddSlingshot(void) {
    if (gTalkRequestCurrent != 0) {
        return FALSE;
    }
    return TalkRequest_Add(0, 0, 0xe, 0, 0);
}

extern "C" BOOL TalkRequest_FinishSlingshot(void) {
    if (!TalkRequest_IsCurrentKind(0xe)) {
        return FALSE;
    }
    gTalkRequestCurrent->state = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_FinishSceneEntry(void) {
    if (!TalkRequest_IsCurrentKind(4) && !TalkRequest_IsCurrentKind(0xc)) {
        return FALSE;
    }
    gTalkRequestCurrent->result = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_AddTalk(u32 a, u32 b) {
    u32 t = 0;
    if (b != 0) {
        t = _ZN9Character9getCharIdEv((Unk_0203e604_Obj *)b);
    }
    return TalkRequest_Add(_ZN9Character9getCharIdEv((Unk_0203e604_Obj *)a), t, 2, 3, 0);
}

extern "C" BOOL TalkRequest_AddPlayerTalk6(u32 a, s32 b) {
    if (b == 0) {
        u32 t = _ZN9Character9getCharIdEv(PlayerActor_GetActor(4));
        return TalkRequest_Add(t, _ZN9Character9getCharIdEv((Unk_0203e604_Obj *)a), 6, 3, 0);
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_AddPlayerTalk7(u32 a, s32 b) {
    if (b == 0) {
        u32 t = _ZN9Character9getCharIdEv(PlayerActor_GetActor(4));
        return TalkRequest_Add(t, _ZN9Character9getCharIdEv((Unk_0203e604_Obj *)a), 7, 3, 0);
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_SetTargetDone(u32 x) {
    if (!TalkRequest_IsCurrentKind(2) && !TalkRequest_IsCurrentKind(6) && !TalkRequest_IsCurrentKind(7)) {
        return FALSE;
    }
    Unk_0203dad4_Task *p = gTalkRequestCurrent;
    u32 v = _ZN9Character9getCharIdEv((Unk_0203e604_Obj *)x);
    if (p->targetId != v) {
        return FALSE;
    }
    p->state = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_IsTalking(void) {
    if (TalkRequest_IsCurrentKind(2) || TalkRequest_IsCurrentKind(6) || TalkRequest_IsCurrentKind(7)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void TalkRequest_SetTalkTarget(u32 p) {
    sTalkTargetId = p;
}

extern "C" u32 TalkRequest_GetTalkTarget(void) {
    if (TalkRequest_IsCurrentKind(2) || TalkRequest_IsCurrentKind(6) || TalkRequest_IsCurrentKind(7)) {
        return (u32)Character_FindByCharId(sTalkTargetId);
    }
    return 0;
}

extern "C" s32 Talk_AttachRequestToWindow0(u32 x) {
    return _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(TalkWindow_Get(0), x);
}

extern "C" s32 Talk_DetachRequest(Unk_0203d5e4_Arg *p) {
    return _ZN15TalkWindowState13detachRequestEv(p->window);
}

extern "C" void TalkRequest_FinishCurrent(void) {
    TalkRequestEntry_Free(gTalkRequestCurrent);
    gTalkRequestCurrent = 0;
}

extern "C" BOOL TalkRequest_BeginNetSyncHold(void) {
    if (!PlayerActor_GetActor(4)) {
        return FALSE;
    }
    if (TalkRequest_IsActive()) {
        MenuCtrl_RequestForceClose();
        return FALSE;
    }
    if (!PlayerActor_CanAcceptTalk()) {
        return FALSE;
    }
    PlayerActor_SetEventLock(1);
    Unk_0203dad4_Task *p = TalkRequestPool_Alloc();
    p->requesterId = 0;
    p->targetId = 0;
    p->kind = 0xd;
    p->phase = 3;
    p->state = 5;
    gTalkRequestCurrent = p;
    return TRUE;
}

extern "C" BOOL TalkRequest_EndNetSyncHold(void) {
    if (TalkRequest_IsCurrentKind(0xd)) {
        gTalkRequestCurrent->state = 6;
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 TalkRequestFlags_IsTitleTimeout(void) { return TalkRequestFlags_Test(0x10); }

extern "C" void TalkRequestFlags_SetTitleTimeout(void) { return TalkRequestFlags_Set(0x10); }

extern "C" void TalkRequestFlags_ClearTitleTimeout(void) { return TalkRequestFlags_Clear(0x10); }

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_0203dbb8_Fn sTalkRequestBeginFns[15];
extern Unk_0203dad4_Task *gTalkRequestCurrent;
extern u32 sTalkRequestFlags;
extern Unk_0203dbb8_Fn sTalkRequestRunFns[15];
extern Unk_0203dbb8_Fn sTalkRequestStartFns[15];
extern Unk_0203dbb8_Fn sTalkRequestEndFns[15];
extern u32 sTalkTargetId;
extern TalkRequestList sTalkRequestList;

Unk_0203dbb8_Fn sTalkRequestBeginFns[15] = {
    (Unk_0203dbb8_Fn)TalkRequest_StepUnused, (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_BeginTalk,
    (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StepPass,
    (Unk_0203dbb8_Fn)TalkRequest_BeginTalk, (Unk_0203dbb8_Fn)TalkRequest_BeginTalk, (Unk_0203dbb8_Fn)TalkRequest_StepPass,
    (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_BeginEventWarp,
    (Unk_0203dbb8_Fn)TalkRequest_BeginSceneEntryChar, (Unk_0203dbb8_Fn)TalkRequest_StepBlock, (Unk_0203dbb8_Fn)TalkRequest_StepPass
};

Unk_0203dad4_Task *gTalkRequestCurrent;

u32 sTalkRequestFlags;

// ---- data
Unk_0203dbb8_Fn sTalkRequestRunFns[15] = {
    (Unk_0203dbb8_Fn)TalkRequest_StepUnused, (Unk_0203dbb8_Fn)TalkRequest_RunMenu, (Unk_0203dbb8_Fn)TalkRequest_RunTalk,
    (Unk_0203dbb8_Fn)TalkRequest_StepBlock, (Unk_0203dbb8_Fn)TalkRequest_RunSceneEntry, (Unk_0203dbb8_Fn)TalkRequest_RunExclusive,
    (Unk_0203dbb8_Fn)TalkRequest_RunTalk, (Unk_0203dbb8_Fn)TalkRequest_RunTalk, (Unk_0203dbb8_Fn)TalkRequest_RunLeaveRoom,
    (Unk_0203dbb8_Fn)TalkRequest_RunSimple, (Unk_0203dbb8_Fn)TalkRequest_RunExclusive, (Unk_0203dbb8_Fn)TalkRequest_StepBlock,
    (Unk_0203dbb8_Fn)TalkRequest_RunSceneEntry, (Unk_0203dbb8_Fn)TalkRequest_RunNetSyncHold, (Unk_0203dbb8_Fn)TalkRequest_RunSimple
};

Unk_0203dbb8_Fn sTalkRequestStartFns[15] = {
    (Unk_0203dbb8_Fn)TalkRequest_StepUnused, (Unk_0203dbb8_Fn)TalkRequest_StartMenu, (Unk_0203dbb8_Fn)TalkRequest_StartTalk,
    (Unk_0203dbb8_Fn)TalkRequest_StartSceneExit, (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StartExclusive,
    (Unk_0203dbb8_Fn)TalkRequest_StartTalk6, (Unk_0203dbb8_Fn)TalkRequest_StartTalk7, (Unk_0203dbb8_Fn)TalkRequest_StartLeaveRoom,
    (Unk_0203dbb8_Fn)TalkRequest_StartSimple, (Unk_0203dbb8_Fn)TalkRequest_StartExclusive, (Unk_0203dbb8_Fn)TalkRequest_StartEventWarp,
    (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StepBlock, (Unk_0203dbb8_Fn)TalkRequest_StartSimple
};

Unk_0203dbb8_Fn sTalkRequestEndFns[15] = {
    (Unk_0203dbb8_Fn)TalkRequest_StepUnused, (Unk_0203dbb8_Fn)TalkRequest_EndMenu, (Unk_0203dbb8_Fn)TalkRequest_EndTalk,
    (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_EndExclusive,
    (Unk_0203dbb8_Fn)TalkRequest_EndTalk, (Unk_0203dbb8_Fn)TalkRequest_EndTalk, (Unk_0203dbb8_Fn)TalkRequest_StepPass,
    (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_EndExclusive, (Unk_0203dbb8_Fn)TalkRequest_StepPass,
    (Unk_0203dbb8_Fn)TalkRequest_EndSceneEntryChar, (Unk_0203dbb8_Fn)TalkRequest_StepPass, (Unk_0203dbb8_Fn)TalkRequest_StepPass
};

u32 sTalkTargetId;

TalkRequestList sTalkRequestList;

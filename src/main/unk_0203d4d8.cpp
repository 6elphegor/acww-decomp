#include "types.h"

struct Unk_0203dad4_Task;

// Library base class (local copy of include/GameProc.h; the signatures of slots 0x18 and 0x20 are the ones the
// overrides in this unit need)
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 b);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual void postCreate();
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

class TalkRequestQueue : public GameProc {
public:
    TalkRequestQueue() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual void vfunc_20(u32 b);
    virtual BOOL onDraw();
    // destructor implicit (D1 is at the lower address)
};

// Only the non-virtual methods of this class (vtable and constructor are in the next unit)
class Character {
public:
    void clearCharFlags(u32 mask);
    void setCharFlags(u32 mask);
    BOOL testCharFlags(u32 mask);
    BOOL isAreaSynced();
    void setAreaSynced();
    s32 getTalkStartMode();
    void clearTalkStartMode();

    /* 0x00 */ u8 pad_00[0xe8];
    /* 0xe8 */ u16 unk_e8;
};

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
    /* 0x04 */ Unk_0203dad4_Task *unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad[3];
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
};

struct Unk_0203dc50_List {
    Unk_0203dad4_Task *unk_00;
    u32 unk_04;
    Unk_0203dc50_List() {
        unk_00 = 0;
        unk_04 = 0;
    }
};

typedef BOOL (*Unk_0203dbb8_Fn)(Unk_0203dad4_Task *);

extern Unk_0203dad4_Task *gTalkRequestCurrent;
extern u32 sTalkTargetId;
extern u32 sTalkRequestFlags;
extern Unk_0203dc50_List sTalkRequestList;
extern Unk_0203dbb8_Fn sTalkRequestRunFns[];
extern Unk_0203dbb8_Fn sTalkRequestStartFns[];
extern Unk_0203dbb8_Fn sTalkRequestBeginFns[];
extern Unk_0203dbb8_Fn sTalkRequestEndFns[];

extern "C" {
extern u8 gScreenTransition;
extern u8 data_020d96d0;
extern s32 gActorDefaultParent;
extern s32 gCommManager;

Unk_0203e604_Obj *func_02095204(s32 id);
u32 _ZN9Character9getCharIdEv(Unk_0203e604_Obj *o);
Unk_0203e604_Obj *Character_FindByCharId(u32 id);
Unk_0203dad4_Task *func_0203eb78();
void PrioList_Insert(Unk_0203dc50_List *l, Unk_0203dad4_Task *t);
void func_0203ebdc(Unk_0203dc50_List *l);
void func_020e79a0(Unk_0203dc50_List *l, Unk_0203dad4_Task *t);
void NetArea_SendStateToNewOwner();
void NetArea_SendStateToRequester();
void Scene_CheckExit();
void _ZN8ProcBase8vfunc_20Ev(void *a, u32 b);
BOOL TalkRequest_IsActive();
BOOL _ZN9Character12isAreaSyncedEv();
s32 func_0203e9ac();
void func_0203e994(u32 id, u32 v);
void func_0203e9a0(u32 id, u32 v);
void TalkRequest_SetTalkTarget(u32 v);
void TalkRequest_FinishCurrent();
void func_0203e9d8();
s32 func_0203ea74(u32 id);
void func_0203ea08(u32 id);
BOOL func_020951d0();
BOOL func_02094f64(u32 v);
BOOL func_02094f84();
BOOL func_02094c38();
BOOL func_02094d60();
BOOL func_02094d88();
BOOL func_02094de0();
BOOL func_02094960();
void func_020949a0();
BOOL func_02094898();
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
void func_0203ec00(void *p);
s32 _ZN15TalkWindowState13detachRequestEv(u32 x);
u32 TalkWindow_Get(u32 x);
s32 _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(u32 a, u32 b);
u32 MenuCtrl_IsFinished(u32 a);
BOOL MenuCtrl_IsIdle(void);
BOOL func_02094e64(void);
BOOL PlayerActor_RequestAct05(void);
void MenuCtrl_RequestOpen(u32 v);
void TalkRequestQueue_Reset(void);
s32 func_020b14f0(void);
void PrioList_Init(void *p);
void func_0203ebb0(void);
void func_0203eb38(void);
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
    u32 unk_3c;
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
    if (unk_e8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Character::setCharFlags(u32 mask) { unk_e8 = unk_e8 | mask; }

void Character::clearCharFlags(u32 mask) { unk_e8 = unk_e8 & ~mask; }

extern "C" TalkRequestQueue *TalkRequestQueue_Create(void) {
    return new TalkRequestQueue();
}

extern "C" void TalkRequestQueue_Reset(void) {
    PrioList_Init(&sTalkRequestList);
    func_0203ebb0();
    gTalkRequestCurrent = 0;
    sTalkTargetId = 0;
    TalkRequestFlags_Clear(6);
}

extern "C" void TalkRequestQueue_StartInitial(void) {
    TalkRequestQueue_Reset();
    Unk_0203dad4_Task *s = func_0203eb78();
    s32 r = func_020b14f0();
    if (r != 0) {
        s->unk_0c = (u32)r;
        s->unk_10 = 0;
        s->unk_15 = 0xc;
        s->unk_14 = 2;
        s->unk_16 = 7;
    } else {
        s->unk_0c = 0;
        s->unk_10 = 0;
        s->unk_15 = 4;
        s->unk_14 = 3;
        s->unk_16 = 5;
    }
    s->unk_08 = 1;
    s->unk_17 = 5;
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
    func_0203eb38();
    sTalkRequestFlags = 0;
    return TRUE;
}

BOOL TalkRequestQueue::vfunc_0c() { return TRUE; }

extern "C" BOOL TalkRequest_StartMenu(Unk_0203dad4_Task *s) {
    if (!MenuCtrl_IsIdle()) {
        return FALSE;
    }
    if (!func_02094e64()) {
        return FALSE;
    }
    if (!PlayerActor_RequestAct05()) {
        return FALSE;
    }
    MenuCtrl_RequestOpen(s->unk_16);
    return TRUE;
}

extern "C" u32 TalkRequest_RunMenu(u32 a) {
    return MenuCtrl_IsFinished(a);
}

extern "C" BOOL TalkRequest_EndMenu(void) {
    if (func_02094c38()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_AcquireHostLock(Unk_0203dad4_Task *s) {
    switch (func_0203ea74(s->unk_10)) {
    case 2:
        s->unk_16 = 2;
        break;
    case 1:
        s->unk_16 = 1;
        break;
    case 0:
        return FALSE;
    }
    if (s->unk_15 != 7 && !func_02094960()) {
        return FALSE;
    }
    TalkRequest_SetTalkTarget(s->unk_10);
    func_0203ea08(s->unk_10);
    return TRUE;
}

extern "C" BOOL TalkRequest_AcquireAreaTarget(Unk_0203dad4_Task *t) {
    s32 r = func_0203e9ac();
    switch (r) {
    case 2:
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            Unk_0203e604_Obj *o = Character_FindByCharId(t->unk_10);
            if (_ZN9Character12isAreaSyncedEv()) {
                if (t->unk_17 == 1) {
                    if (!o->vfunc_58(func_02095204(4))) {
                        return FALSE;
                    }
                }
            }
        }
        t->unk_16 = 2;
        break;
    case 1:
        t->unk_16 = 0;
        break;
    case 0:
        return FALSE;
    }
    if (t->unk_15 != 7) {
        if (!func_02094960()) {
            return FALSE;
        }
    }
    TalkRequest_SetTalkTarget(t->unk_10);
    if (r == 1) {
        func_0203e9a0(t->unk_10, t->unk_17);
    }
    return TRUE;
}

extern "C" BOOL TalkRequest_AcquireTarget(Unk_0203dad4_Task *t) {
    Character_FindByCharId(t->unk_10);
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
        if (func_0203e9ac() == 1) {
            func_0203e994(_ZN9Character9getCharIdEv(o), v);
        }
    }
    o->vfunc_4c(v, 4);
}

extern "C" void TalkRequest_ReleaseTarget(Unk_0203dad4_Task *t, u32 v) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->unk_10);
    if (o != NULL) {
        if (_ZN9Character12isAreaSyncedEv()) {
            if (func_0203e9ac() == 1) {
                func_0203e994(t->unk_10, v);
            }
        }
        o->vfunc_4c(v, 4);
    }
    TalkRequest_SetTalkTarget(0);
    if (t->unk_15 == 7) {
        func_02094f64(0);
    }
}

extern "C" BOOL TalkRequest_StartTalk(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *a = Character_FindByCharId(t->unk_10);
    Unk_0203e604_Obj *b = Character_FindByCharId(t->unk_0c);
    if (!func_02094de0()) {
        return FALSE;
    }
    t->unk_17 = 0;
    if (a == NULL) {
        Unk_0203e604_Obj *n = Character_FindInteractionTarget(b);
        if (n == NULL) {
            return FALSE;
        }
        t->unk_10 = _ZN9Character9getCharIdEv(n);
    } else if (!_ZN9Character16checkInteractionEPS_(a, b)) {
        if (a->vfunc_54(b)) {
            t->unk_17 = 5;
        } else {
            return FALSE;
        }
    }
    if (TalkRequest_AcquireTarget(t)) {
        func_02094960();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_BeginTalk(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->unk_10);
    switch (t->unk_16) {
    case 0:
    case 1:
        switch (data_020d96d0) {
        case 1:
            if (t->unk_15 == 7) {
                t->unk_16 = 8;
            } else {
                t->unk_16 = 2;
            }
            break;
        case 2:
            t->unk_16 = 3;
            break;
        }
        break;
    }
    if (t->unk_16 == 8) {
        if (!func_02094de0()) {
            return FALSE;
        }
        if (!func_02094960()) {
            return FALSE;
        }
        t->unk_16 = 2;
    }
    switch (t->unk_16) {
    case 2: {
        o->vfunc_4c(3, 4);
        s32 r = _ZN9Character16getTalkStartModeEv(o);
        if (t->unk_17 == 5) {
            r = 2;
        }
        if (r == 2) {
            func_02094960();
            TalkRequest_NotifyTarget(o, t->unk_17);
            t->unk_16 = 5;
        } else {
            func_020949a0();
            t->unk_16 = 4;
        }
        return TRUE;
    }
    case 3:
        if (func_02094c38()) {
            TalkRequest_ReleaseTarget(t, 4);
            TalkRequest_FinishCurrent();
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartTalk6(Unk_0203dad4_Task *t) {
    Character_FindByCharId(t->unk_0c);
    if (!func_02094de0()) {
        return FALSE;
    }
    t->unk_17 = 1;
    if (TalkRequest_AcquireTarget(t)) {
        func_02094960();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_RunTalk(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->unk_10);
    switch (t->unk_16) {
    case 4:
        if (func_020951d0()) {
            TalkRequest_NotifyTarget(o, t->unk_17);
            t->unk_16 = 5;
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
    if (func_02094c38()) {
        TalkRequest_ReleaseTarget(t, 8);
        func_0203e9d8();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartTalk7(Unk_0203dad4_Task *t) {
    if (Character_FindByCharId(t->unk_0c) == NULL) {
        return FALSE;
    }
    if (!func_02094f84()) {
        return FALSE;
    }
    if (!func_02094f64(1)) {
        return FALSE;
    }
    t->unk_17 = 1;
    return TalkRequest_AcquireTarget(t);
}

extern "C" BOOL TalkRequest_StartSceneExit(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->unk_0c);
    if (!func_02094de0()) {
        return FALSE;
    }
    if (!func_02094898()) {
        return FALSE;
    }
    if (o != NULL) {
        o->vfunc_4c(2, 4);
    }
    SceneWarp_RequestExit(Scene_GetWarpRequest(), t->unk_16);
    return TRUE;
}

extern "C" BOOL TalkRequest_StartEventWarp(Unk_0203dad4_Task *) {
    if (!func_02094f84()) {
        return FALSE;
    }
    func_02094f64(1);
    TalkRequestFlags_SetEventWarpStarted();
    return TRUE;
}

extern "C" BOOL TalkRequest_BeginEventWarp(Unk_0203dad4_Task *) {
    if (!func_02094d88()) {
        return FALSE;
    }
    TalkRequestFlags_SetEventWarpReady();
    return TRUE;
}

extern "C" BOOL TalkRequest_BeginSceneEntryChar(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = Character_FindByCharId(t->unk_0c);
    if (o == NULL) {
        return FALSE;
    }
    if (t->unk_16 == 7) {
        switch (func_0203ea74(t->unk_0c)) {
        case 2:
            t->unk_16 = 2;
            break;
        case 1:
            t->unk_16 = 1;
            func_0203ea08(t->unk_0c);
            break;
        }
    }
    if (t->unk_16 == 1) {
        switch (data_020d96d0) {
        case 1:
            t->unk_16 = 2;
            break;
        case 2:
            func_0203ea08(t->unk_0c);
            break;
        }
    }
    if (t->unk_16 == 2) {
        o->vfunc_4c(6, 4);
        t->unk_16 = 5;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_EndSceneEntryChar(Unk_0203dad4_Task *) {
    func_0203e9d8();
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
    if (t->unk_17 == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartExclusive(Unk_0203dad4_Task *t) {
    if (!func_02094de0()) {
        return FALSE;
    }
    if (!func_02094960()) {
        return FALSE;
    }
    t->unk_16 = 5;
    return TRUE;
}

extern "C" BOOL TalkRequest_RunExclusive(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_EndExclusive(Unk_0203dad4_Task *) {
    if (func_02094c38()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartLeaveRoom(Unk_0203dad4_Task *t) {
    if (!func_02094d60()) {
        return FALSE;
    }
    if (!PlayerActor_LocalRequestLeaveRoom()) {
        return FALSE;
    }
    t->unk_16 = 5;
    return TRUE;
}

extern "C" BOOL TalkRequest_RunLeaveRoom(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StartSimple(Unk_0203dad4_Task *t) {
    t->unk_16 = 5;
    return TRUE;
}

extern "C" BOOL TalkRequest_RunSimple(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_RunNetSyncHold(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        func_02094f64(0);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_StepUnused(Unk_0203dad4_Task *) { return FALSE; }

extern "C" BOOL TalkRequest_StepPass(Unk_0203dad4_Task *) { return TRUE; }

extern "C" BOOL TalkRequest_StepBlock(Unk_0203dad4_Task *) { return FALSE; }

extern "C" void TalkRequestQueue_StartNext(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = sTalkRequestList.unk_00;
    Unk_0203dbb8_Fn *tbl = sTalkRequestStartFns;
    for (; t != NULL; t = t->unk_04) {
        if (tbl[t->unk_15](t)) {
            func_020e79a0(&sTalkRequestList, t);
            gTalkRequestCurrent = t;
            t->unk_14 = 2;
            break;
        }
    }
}

extern "C" void TalkRequestQueue_StepBegin(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = gTalkRequestCurrent;
    if (t->unk_14 == 2) {
        if (sTalkRequestBeginFns[t->unk_15](t)) {
            gTalkRequestCurrent->unk_14 = 3;
        }
    }
}

extern "C" void TalkRequestQueue_StepRun(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = gTalkRequestCurrent;
    if (t->unk_14 == 3) {
        if (sTalkRequestRunFns[t->unk_15](t)) {
            gTalkRequestCurrent->unk_14 = 4;
        }
    }
}

extern "C" void TalkRequestQueue_StepEnd(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = gTalkRequestCurrent;
    if (t->unk_14 == 4) {
        if (sTalkRequestEndFns[t->unk_15](t)) {
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
    func_0203ebdc(&sTalkRequestList);
    return TRUE;
}

BOOL TalkRequestQueue::onDraw() {
    return TRUE;
}

void TalkRequestQueue::vfunc_20(u32 b) {
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
    if (gTalkRequestCurrent->unk_15 == x) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_Add(u32 a, u32 b, u32 c, u32 d, u8 e) {
    Unk_0203dad4_Task *t = func_0203eb78();
    if (t == NULL) {
        return FALSE;
    }
    t->unk_0c = a;
    t->unk_10 = b;
    t->unk_15 = c;
    t->unk_08 = d;
    t->unk_16 = e;
    t->unk_17 = 0;
    t->unk_18 = 0;
    t->unk_19 = 0;
    t->unk_14 = 1;
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
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(func_02095204(4)), 8, 1, 0);
}

extern "C" BOOL TalkRequest_FinishLeaveRoom() {
    if (!TalkRequest_IsCurrentKind(8)) {
        return FALSE;
    }
    gTalkRequestCurrent->unk_16 = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_AddMenu(u8 x) {
    Unk_0203e604_Obj *o = func_02095204(4);
    if (o == NULL) {
        return FALSE;
    }
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(o), 1, 2, x);
}

extern "C" BOOL TalkRequest_AddEventWarp() {
    if (TalkRequestFlags_IsResetti() || TalkRequestFlags_IsEventWarpBlock()) {
        return FALSE;
    }
    Unk_0203e604_Obj *o = func_02095204(4);
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
    return TalkRequest_Add(0, _ZN9Character9getCharIdEv(func_02095204(4)), x, 4, 0);
}

extern "C" BOOL TalkRequest_IsExclusiveRunning(u32 x) {
    if (TalkRequest_IsCurrentKind(x) && gTalkRequestCurrent->unk_16 != 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_FinishExclusive(u32 x) {
    if (!TalkRequest_IsCurrentKind(x)) {
        return FALSE;
    }
    gTalkRequestCurrent->unk_16 = 6;
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
    gTalkRequestCurrent->unk_16 = 6;
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
    gTalkRequestCurrent->unk_16 = 6;
    return TRUE;
}

extern "C" BOOL TalkRequest_FinishSceneEntry(void) {
    if (!TalkRequest_IsCurrentKind(4) && !TalkRequest_IsCurrentKind(0xc)) {
        return FALSE;
    }
    gTalkRequestCurrent->unk_17 = 6;
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
        u32 t = _ZN9Character9getCharIdEv(func_02095204(4));
        return TalkRequest_Add(t, _ZN9Character9getCharIdEv((Unk_0203e604_Obj *)a), 6, 3, 0);
    }
    return FALSE;
}

extern "C" BOOL TalkRequest_AddPlayerTalk7(u32 a, s32 b) {
    if (b == 0) {
        u32 t = _ZN9Character9getCharIdEv(func_02095204(4));
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
    if (p->unk_10 != v) {
        return FALSE;
    }
    p->unk_16 = 6;
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
    return _ZN15TalkWindowState13detachRequestEv(p->unk_3c);
}

extern "C" void TalkRequest_FinishCurrent(void) {
    func_0203ec00(gTalkRequestCurrent);
    gTalkRequestCurrent = 0;
}

extern "C" BOOL TalkRequest_BeginNetSyncHold(void) {
    if (!func_02095204(4)) {
        return FALSE;
    }
    if (TalkRequest_IsActive()) {
        MenuCtrl_RequestForceClose();
        return FALSE;
    }
    if (!func_02094f84()) {
        return FALSE;
    }
    func_02094f64(1);
    Unk_0203dad4_Task *p = func_0203eb78();
    p->unk_0c = 0;
    p->unk_10 = 0;
    p->unk_15 = 0xd;
    p->unk_14 = 3;
    p->unk_16 = 5;
    gTalkRequestCurrent = p;
    return TRUE;
}

extern "C" BOOL TalkRequest_EndNetSyncHold(void) {
    if (TalkRequest_IsCurrentKind(0xd)) {
        gTalkRequestCurrent->unk_16 = 6;
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
extern Unk_0203dc50_List sTalkRequestList;

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

Unk_0203dc50_List sTalkRequestList;

#include "types.h"

// Local copies of the library base classes with the parameters these overrides forward.
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
    virtual BOOL vfunc_14(s32 a);
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

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual void postCreate(s32 a);
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

class LostChildRecord {
public:
    BOOL isEscorting();
    u16 *getTownId();
};

class CommManager {
public:
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ s32 unk_64;
    BOOL isOnline();
    BOOL isSlotActive(s32 i);
    void setSessionMemberMask(u32 v);
    u32 getErrorFlags();
    void setErrorFlags(u32 v);
    void endRecord(u32 a, u32 b);
    void writeRecord(u8 *p, u32 n);
    void beginRecord();
    BOOL isMyAid(u32 v);
    BOOL getAuxLenB();
    void clearAuxLenB();
    void clearAuxLenA();
    BOOL getLoopbackLen();
    BOOL getHeldLen();
    BOOL getDeferredLen();
};

// Static object registered with the atexit-style helper (class of the destructor at func_02000c8c).
struct FxVec3 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    FxVec3() {
        unk_00 = 0x10000;
        unk_04 = 0;
        unk_08 = 0x5000;
    }
    ~FxVec3();
};

struct Unk_020a4778_Id {
    u16 unk_00;
    u8 unk_02[8];
};

// Pieces of the singleton at gNetSessionState
struct Unk_020a6754 {
    u8 unk_00[3];
    Unk_020a6754();
    ~Unk_020a6754();
    void func_020a6754();
    void func_020a6760(u8 *a, u8 *b, u8 *c);
};

struct Unk_020a6720 {
    u32 unk_00[2];
    Unk_020a6720();
    ~Unk_020a6720();
    void func_020a6720();
    void func_020a672c(s32 *a, u8 *b);
};

struct Unk_020a66f8 {
    u32 unk_00;
    Unk_020a66f8();
    ~Unk_020a66f8();
    void func_020a66f8();
    void func_020a6700(u32 *a);
};

struct Unk_020a6790 {
    u32 unk_00[2];
    Unk_020a6790();
    ~Unk_020a6790();
    void func_020a6790();
    void func_020a67a0(u8 *a, u8 *b, u8 *c, u32 *d);
};

// stack objects with plain-function constructors and destructors
extern "C" {
void *func_020a68a8(void *);
void *func_020a6898(void *);
void func_020a6878(void *, u32, u32, u32, u32);
void *func_020a6970(void *);
void *func_020a696c(void *);
void func_020a6968(void *, u32);
void *func_020a6848(void *);
void *func_020a6838(void *);
}

struct Unk_020a67bc {
    u32 unk_00[2];
    Unk_020a67bc() { func_020a68a8(this); }
    ~Unk_020a67bc() { func_020a6898(this); }
    void func_020a6878(u32 a, u32 b, u32 c, u32 d) { ::func_020a6878(this, a, b, c, d); }
};

struct Unk_020a6968 {
    u32 unk_00[2];
    Unk_020a6968() { func_020a6970(this); }
    ~Unk_020a6968() { func_020a696c(this); }
    void func_020a6968(u32 a) { ::func_020a6968(this, a); }
};

struct Unk_020a56c4_Buf {
    u8 v[5];
    Unk_020a56c4_Buf() { func_020a6848(this); }
    ~Unk_020a56c4_Buf() { func_020a6838(this); }
};

// The singleton, composite view (constructor and destructor live here)
class NetSessionState {
public:
    /* 0x00 */ Unk_020a6754 unk_00[4];
    /* 0x0c */ Unk_020a6720 unk_0c[4];
    /* 0x2c */ Unk_020a66f8 unk_2c[4];
    /* 0x3c */ Unk_020a6790 unk_3c[4];
    /* 0x5c */ u8 pad_5c[0x84 - 0x5c];
    /* 0x84 */ s32 unk_84[4];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8[4];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ u8 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u8 unk_c4;

    NetSessionState();
    ~NetSessionState();
    u8 getCtrl07Received();
    void setCtrl07Received(u8 v);
    s32 getActiveSyncKind();
    void setActiveSyncKind(s32 v);
    u8 getGoDelay();
    void setGoDelay(u8 v);
    s32 getReplyTimer();
    void setReplyTimer(s32 v);
    void updateSyncClient();
    void resetAllMemberSyncReplies();
    void resetMemberSyncReply(s32 i);
    s32 getMemberSyncReply(s32 i);
    void setMemberSyncReply(s32 i, s32 v);
    void resetSyncKind();
    s32 getSyncKind();
    void setSyncKind(s32 v);
    void resetSyncRequester();
    s32 getSyncRequester();
    void setSyncRequester(s32 v);
    void resetSyncPhase();
    s32 getSyncPhase();
    void setSyncPhase(s32 v);
    u16 getSyncMemberMask();
    void setSyncMemberMask(u16 v);
    s32 getLastSyncSlot();
    void setLastSyncSlot(s32 v);
    void updateSyncHost();
    void resetSlot(s32 idx);
};

struct Unk_020a512c_Ent {
    u32 a;
    u8 b;
    u8 pad[3];
};

// The singleton, second view (methods of the 0x020a512c class); same memory as NetSessionState
struct NetSessionAreaView {
    u8 unk_00[12];
    Unk_020a512c_Ent unk_0c[4];
    u32 unk_2c[4];
    u8 unk_3c[4][8];
    u8 unk_5c;
    u8 pad_5d[3];
    s32 unk_60;
    s32 unk_64;
    u8 unk_68[4];
    s32 unk_6c;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    u8 unk_7c;
    u8 pad_7d[3];
    s32 unk_80;
    u32 unk_84[4];
    void rejectSyncRequest(u32 a, u32 b);
    void resetSyncStates();
    u32 getSyncState(s32 i);
    void setSyncState(s32 i, u32 v);
    void notifyMovingMember();
    s32 getNotifiedMemberMover();
    void setNotifiedMemberMover(s32 v);
    u32 getOwnerAck();
    void setOwnerAck(u32 v);
    void updateArrivingSlot();
    s32 getArrivingSlot();
    void setArrivingSlot(s32 v);
    s32 getStateRequester();
    void setStateRequester(s32 v);
    s32 getStateSourceSlot();
    void setStateSourceSlot(s32 v);
    void notifyMovingOwner();
    s32 getNotifiedOwnerMover();
    void setNotifiedOwnerMover(s32 v);
    void clearMemberAcks();
    u32 getMemberAck(s32 i);
    void setMemberAck(s32 i, u32 v);
    s32 getHandoffSlot();
    void setHandoffSlot(s32 v);
    void updateMove();
    s32 getMoveState();
    void setMoveState(s32 v);
    u32 getBecomesOwner();
    void setBecomesOwner(u32 v);
    void flushStatusUpdates();
    void processMoveRequest(u32 *a, u32 *b);
    void sendMoveReady();
    void popMoveRequest();
    s32 peekMoveRequest();
    void startNextMove(u32 *a, u32 *b);
    void updateMoveQueue();
    void reset();
};

// Vtable at 0x020e2980; its constructor and destructor are inline.
class SceneBase : public GameProc {
public:
    SceneBase() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~SceneBase() {}
};

extern "C" {
extern CommManager *gCommManager;
extern u8 gScreenTransition;
extern u8 data_021c3cb8;
extern u8 data_021d726c;
extern u32 data_021d72e8;
extern Unk_020a4778_Id gSaveTownId;
}

static inline BOOL Unk_020a42c4_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }
static inline BOOL Unk_020a42c4_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL IsZero_020a5d4c(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" {
void Gfx3d_InitEngine(void);
void Snd_DestroyScene(void);
s32 GameProc_CreateChild(u32 a, u32 b, s32 c, s32 d);
void func_0203d4c0(void);
void TalkRequest_EndNetSyncHold(void);
BOOL TalkRequest_BeginNetSyncHold(void);
s32 TalkRequestQueue_Reset(void);
s32 func_0203eb38(void);
void ScreenTransition_ShowCover(void);
s32 ScreenTransition_StartFadeIn(u32 a, u32 b, u32 c);
s32 ScreenTransition_StartFadeOut(u32 a, u32 b);
void Field_UpdateActions(void);
void func_020535e0(void);
void MenuCtrl_ResetForceClose(void);
u32 _ZN11CommManager10getAuxLenBEv(void *);
void _ZN11CommManager12clearAuxLenBEv(void *);
u32 _ZN11CommManager10getAuxBufBEv(void *);
u32 _ZN11CommManager10getAuxLenAEv(void *);
void _ZN11CommManager12clearAuxLenAEv(void *);
u32 _ZN11CommManager10getAuxBufAEv(void *);
s32 Comm_GetMemberMask(void);
void Comm_ProcessReceived(s32 a);
void func_0208e968(void);
s32 func_02097444(s32 a);
s32 PlayerData_Get(s32 a);
LostChildRecord *_ZN10PlayerData18getLostChildRecordEv(s32 a);
void func_0209caf4(void);
void func_0209f230(s32 a);
void Net_SetJoiningAid(s32 a);
void SaveManager_RequestAct1B(void);
void SaveManager_RequestAct19(void);
void SaveManager_RequestAct18(void);
void SaveManager_RequestAct16(void);
void SaveManager_RequestAct15(void);
void func_020a6388(u32 idx, u32 a, u32 b, u32 c, u32 d);
void func_020a63a8(s32, s32);
void func_020a63bc(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020a6430(s32 a, s32 b);
void func_020a6470(void);
BOOL func_020a6474();
BOOL func_020a6478();
void func_020a647c();
void func_020a64e4(s32 a);
void func_020a6564();
void func_020a65fc(s32 a);
void func_020a66d4(void *p, u32 a, u32 b, u32 c);
void func_020a66f0(void *p);
void func_020a66f4(void *p);
void _ZN12Unk_020a66f813func_020a66f8Ev(void *);
void _ZN12Unk_020a66f813func_020a6700EPj(void *, s32 *);
void _ZN12Unk_020a672013func_020a6720Ev(void *);
void _ZN12Unk_020a672013func_020a672cEPiPh(void *, s32 *, u8 *);
void _ZN12Unk_020a675413func_020a6754Ev(void *);
void _ZN12Unk_020a675413func_020a6760EPhS0_S0_(void *, u8 *, u8 *, u8 *);
void _ZN12Unk_020a679013func_020a6790Ev(void *);
void _ZN12Unk_020a679013func_020a67a0EPhS0_S0_Pj(void *, u8 *, u8 *, u8 *, u32 *);
void func_020a681c(void *, s32, u32, u32, u32, u32);
s32 Scene_GetWarpRequest(void);
u32 Scene_GetRequestedScene(void);
s32 SceneWarp_GetScene(s32 a);
void Scene_SavePlayerPos(s32 a, s32 b);
void SceneWarp_RequestAt(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
void SceneWarp_RequestFade(s32 a, s32 b, s32 c, s32 d);
s32 Scene_GetCurrent(void);
void FieldInfoBalloon_ShowCancelled(void);
void FieldInfoBalloon_ShowSyncKindMsg(s32 a);
void FieldInfoBalloon_ShowSyncWaitMsg(s32 a);
void Net_WifiHostKeepAlive(void);
u32 Net_GetConnectedMask(void);
s32 ProcBase_HasCreatingChild(void *p);
s32 ProcBase_RequestDelete(void *p);
void GX_SetBankForTexPltt(s32 a);
void GX_SetBankForTex(s32 a);
void GX_SetBankForBGExtPltt(s32 a);
void GX_SetBankForOBJ(s32 a);
void GX_SetBankForBG(s32 a);
void G3X_Init(void);
s32 OS_ResetSystem(s32 v);
void MI_CpuCopy8(void *src, void *dst, u32 size);
s32 memcmp(const void *a, const void *b, u32 n);
void func_02133ef8(void *dst, u32 size);
}

extern NetSessionState gNetSessionState;

static inline NetSessionState &V2() { return gNetSessionState; }
static inline NetSessionAreaView &V3() { return *(NetSessionAreaView *)&gNetSessionState; }

struct Unk_020e2978_Rec {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
};
extern u8 sSceneExists;
extern u16 gNextSceneProfile;
extern Unk_020e2978_Rec sSceneBaseProfile;
extern u8 data_021eda50;
extern volatile u8 sSceneFadeInDelay;
extern u8 data_021eda58;
extern u8 sSceneFadeInType;
extern u8 sSceneFadeOutType;
extern u8 gSceneCreating;
extern void *gActorDefaultParent;

// callers pass an untruncated int to these u8/u16 parameters
extern "C" void _ZN15NetSessionState17setSyncMemberMaskEt(void *self, s32 v);
extern "C" void _ZN15NetSessionState17setCtrl07ReceivedEh(void *self, s32 v);

// own prototypes
extern "C" {
s32 NetArea_GetSlotScene(s32 a);
s32 NetArea_IsSlotOwner(s32 a);
s32 NetArea_IsSlotMoving(s32 a);
s32 NetArea_IsLocalOwner();
s32 NetArea_IsLocalMoving();
s32 NetArea_FindOwner(u32 a);
s32 NetArea_ResolveRoute(s32 a, s32 b, u32 c, u8 *d);
s32 NetArea_SendStateA(s32 a);
s32 NetArea_SendStateB(s32 a);
s32 NetArea_FindSlotInScene(u32 a);
void NetArea_SendMoveTarget();
void NetSession_SetSyncState(s32 a, s32 b);
s32 NetSession_GetSyncState(s32 a);
void NetSession_SetSyncMemberMask(s32 a);
void NetSession_GetSyncMemberMask();
void NetSession_SetSyncRequester(s32 a);
void NetSession_SetMemberSyncReply(s32 a, s32 b);
void NetSession_SetSyncKind(s32 a);
void NetSession_GetSyncKind();
void NetSession_SetActiveSyncKind(s32 a);
void NetSession_GetActiveSyncKind();
void NetSession_GetLastSyncSlot();
void NetSession_SetLastSyncSlot(s32 a);
void NetArea_SetMoveState(s32 a);
s32 NetArea_GetMoveState();
void NetArea_SetMemberAck(s32 a, s32 b);
void NetArea_SetStateRequester(s32 a);
void NetArea_SetOwnerAck(s32 a);
void NetArea_GetSlotStatus(s32 idx, u8 *a, u8 *b, u8 *c);
void NetArea_OnStateAReceived();
void NetArea_ApplyStateB();
void NetArea_SendStateToNewOwner();
void NetArea_SendStateToRequester();
void NetSession_SetCtrl07Received(s32 a);
void NetSession_GetCtrl07Received();
BOOL NetArea_IsUnsharedScene(s32 v);
void NetSession_Init();
void NetSession_Exit();
void NetSession_OnBeginHost();
void NetSession_Reset();
void NetSession_RemoveSlot(s32 a);
void NetSession_Update();
void NetSession_PostUpdate();
SceneBase *SceneBase_Create(void);
void SceneBase_SetupGraphics(void);
void Scene_Request(u32 a, u32 b, u32 c, u32 d);
void Scene_RequestBoot(void);
BOOL Scene_CreateRequested(void);
void Scene_CheckExit(void *p);
}


extern "C" s32 NetArea_GetSlotScene(s32 a) {
    u8 v[3];
    if (a < 4) {
        gNetSessionState.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[0];
    }
    return 0x3f;
}

extern "C" s32 NetArea_IsSlotOwner(s32 a) {
    u8 v[3];
    if (a < 4) {
        gNetSessionState.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[1];
    }
    return 1;
}

extern "C" s32 NetArea_IsSlotMoving(s32 a) {
    u8 v[3];
    if (a < 4) {
        gNetSessionState.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[2];
    }
    return 0;
}

extern "C" s32 NetArea_IsLocalOwner() {
    s32 r2 = gCommManager->unk_64;
    u8 v[3];
    if (r2 >= 4) {
        return 1;
    }
    gNetSessionState.unk_00[r2].func_020a6760(&v[0], &v[1], &v[2]);
    if (v[2] == 0) {
        return v[1];
    }
    if (V3().getMoveState() < 7) {
        return v[1];
    }
    return V3().getBecomesOwner();
}

extern "C" s32 NetArea_IsLocalMoving() {
    s32 v = gCommManager->unk_64;
    if (v < 4) {
        return NetArea_IsSlotMoving(v);
    }
    return 1;
}

extern "C" s32 NetArea_FindOwner(u32 a) {
    s32 r6 = 4;
    s32 i;
    u8 v[3];
    i = 3;
    CommManager *o = gCommManager;
    for (; i >= 0; i--) {
        if (o->isSlotActive(i)) {
            gNetSessionState.unk_00[i].func_020a6760(&v[0], &v[1], &v[2]);
            if (v[0] == a && v[1] != 0 && v[2] == 0) {
                r6 = i;
                break;
            }
        }
    }
    return r6;
}

extern "C" s32 NetArea_ResolveRoute(s32 a, s32 b, u32 c, u8 *d) {
    s32 r4 = gCommManager->unk_64;
    u8 v[6];
    *d = 0;
    if (b == 0) {
        if (a != 0) goto fail;
        return a;
    } else if (b == 0) {
        if (a != 0) goto fail;
        return a;
    } else if (b == 1) {
        if (a != 1) goto fail;
        return a;
    } else if (b == 2) {
        if (a != 2) goto fail;
        return a;
    } else if (b == 3) {
        if (a != 3) goto fail;
        return a;
    } else if (b == 4) {
        if (a == r4) goto fail;
        return a;
    } else if (b == 5) {
        if (a == 0) goto fail;
        return a;
    } else if (b == 6) {
        s32 t = NetArea_FindOwner(c);
        if (t < 4) {
            if (t != a) goto fail;
            return a;
        }
        gNetSessionState.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        if (v[0] == c && v[1] != 0 && v[2] != 0) {
            *d = 1;
        }
        goto fail;
    } else if (b == 7) {
        gNetSessionState.unk_00[a].func_020a6760(&v[3], &v[4], &v[5]);
        if (v[3] == c) {
            if (v[4] != 0) goto fail;
            if (v[5] != 0) goto fail;
            if (a == r4) goto fail;
            return a;
        } else {
            s32 t = V3().getArrivingSlot();
            if (t >= 4) goto fail;
            if (t != a) goto fail;
            if (a == r4) goto fail;
            return a;
        }
    }
fail:
    return 4;
}

extern "C" s32 NetArea_SendStateA(s32 a) {
    func_020a65fc(a);
    CommManager *o = gCommManager;
    o->beginRecord();
    u32 r6 = _ZN11CommManager10getAuxBufAEv(o);
    u32 r2 = _ZN11CommManager10getAuxLenAEv(o);
    o->writeRecord((u8 *)r6, r2);
    o->endRecord(0xf, a);
    _ZN11CommManager12clearAuxLenAEv(o);
}

extern "C" s32 NetArea_SendStateB(s32 a) {
    func_020a64e4(a);
    CommManager *o = gCommManager;
    o->beginRecord();
    u32 r6 = _ZN11CommManager10getAuxBufBEv(o);
    u32 r2 = _ZN11CommManager10getAuxLenBEv(o);
    o->writeRecord((u8 *)r6, r2);
    o->endRecord(0x10, a);
    _ZN11CommManager12clearAuxLenBEv(o);
}

extern "C" s32 NetArea_FindSlotInScene(u32 a) {
    s32 r5 = 4, r4 = 4;
    u8 v[3];
    Unk_020a6754 *p = gNetSessionState.unk_00;
    u32 i;
    for (i = 0; i < 4; p++, i++) {
        p->func_020a6760(&v[0], &v[1], &v[2]);
        if (v[0] == a && v[1] != 0) {
            if (v[2] != 0) {
                r5 = i;
            } else {
                r4 = i;
            }
        }
    }
    if (r5 == 4 && r4 == 4) {
        return 4;
    }
    if (r5 != 4 && r4 != 4) {
        return r4;
    }
    if (r5 != 4) {
        return r5;
    }
    return r4;
}

extern "C" void NetArea_SendMoveTarget() {
    CommManager *o = gCommManager;
    if (o->isMyAid(0)) {
        s32 r4 = o->unk_64;
        func_020a6430(r4, Scene_GetRequestedScene());
    } else {
        Unk_020a6968 tmp;
        tmp.func_020a6968(Scene_GetRequestedScene());
        o = gCommManager;
        o->beginRecord();
        o->writeRecord((u8 *)&tmp, 1);
        o->endRecord(8, 0);
    }
}

extern "C" void NetSession_SetSyncState(s32 a, s32 b) {
    V3().setSyncState(a, b);
}

extern "C" s32 NetSession_GetSyncState(s32 a) {
    return V3().getSyncState(a);
}

extern "C" void NetSession_SetSyncMemberMask(s32 a) {
    _ZN15NetSessionState17setSyncMemberMaskEt(&gNetSessionState, a);
}

extern "C" void NetSession_GetSyncMemberMask() {
    gNetSessionState.getSyncMemberMask();
}

extern "C" void NetSession_SetSyncRequester(s32 a) {
    gNetSessionState.setSyncRequester(a);
}

extern "C" void NetSession_SetMemberSyncReply(s32 a, s32 b) {
    gNetSessionState.setMemberSyncReply(a, b);
}

extern "C" void NetSession_SetSyncKind(s32 a) {
    gNetSessionState.setSyncKind(a);
}

extern "C" void NetSession_GetSyncKind() {
    gNetSessionState.getSyncKind();
}

extern "C" void NetSession_SetActiveSyncKind(s32 a) {
    gNetSessionState.setActiveSyncKind(a);
}

extern "C" void NetSession_GetActiveSyncKind() {
    gNetSessionState.getActiveSyncKind();
}

extern "C" void NetSession_GetLastSyncSlot() {
    gNetSessionState.getLastSyncSlot();
}

extern "C" void NetSession_SetLastSyncSlot(s32 a) {
    gNetSessionState.setLastSyncSlot(a);
}

extern "C" void NetArea_SetMoveState(s32 a) {
    V3().setMoveState(a);
}

extern "C" s32 NetArea_GetMoveState() {
    return V3().getMoveState();
}

extern "C" void NetArea_SetMemberAck(s32 a, s32 b) {
    V3().setMemberAck(a, b);
}

extern "C" void NetArea_SetStateRequester(s32 a) {
    V3().setStateRequester(a);
}

extern "C" void NetArea_SetOwnerAck(s32 a) {
    V3().setOwnerAck(a);
}

extern "C" void NetArea_GetSlotStatus(s32 idx, u8 *a, u8 *b, u8 *c) {
    if (idx < 4) {
        gNetSessionState.unk_00[idx].func_020a6760(a, b, c);
    }
}

extern "C" void NetArea_OnStateAReceived() {
    CommManager *o = gCommManager;
    s32 r5 = o->unk_64;
    if (o->isSlotActive(r5)) {
        if (_ZN11CommManager10getAuxLenAEv(o)) {
            func_020a6564();
            func_020a63bc(r5, 0x3f, 1, 0, 2);
            if (o->isOnline()) {
                if (r5 != 0) {
                    Unk_020a67bc tmp;
                    tmp.func_020a6878(0x3f, 1, 0, 2);
                    o = gCommManager;
                    o->beginRecord();
                    o->writeRecord((u8 *)&tmp, 2);
                    o->endRecord(0xb, 0);
                } else {
                    func_020a6388(r5, 0x3f, 1, 0, 2);
                }
            }
        }
    }
}

extern "C" void NetArea_ApplyStateB() {
    CommManager *o = gCommManager;
    if (o->isSlotActive(*(s32 *)((u8 *)o + 0x64))) {
        if (_ZN11CommManager10getAuxLenBEv(o)) {
            func_020a647c();
        }
    }
}

extern "C" void NetArea_SendStateToNewOwner() {
    if (gCommManager->isSlotActive(gCommManager->unk_64)) {
        if (V3().getMoveState() == 3) {
            if (IsZero_020a5d4c(gScreenTransition)) {
                if (!NetArea_IsUnsharedScene(Scene_GetCurrent())) {
                    NetArea_SendStateA(V3().getHandoffSlot());
                }
                V3().setMoveState(5);
            }
        }
    }
}

extern "C" void NetArea_SendStateToRequester() {
    if (gCommManager->isSlotActive(gCommManager->unk_64)) {
        s32 r4 = V3().getStateRequester();
        if (r4 < 4) {
            NetArea_SendStateB(r4);
            V3().setArrivingSlot(r4);
            V3().setStateRequester(4);
        }
    }
}

extern "C" void NetSession_SetCtrl07Received(s32 a) {
    _ZN15NetSessionState17setCtrl07ReceivedEh(&gNetSessionState, a);
}

extern "C" void NetSession_GetCtrl07Received() {
    gNetSessionState.getCtrl07Received();
}

extern "C" BOOL NetArea_IsUnsharedScene(s32 v) {
    switch (v) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x2e:
    case 0x2f:
        return TRUE;
    }
    return FALSE;
}

extern "C" void NetSession_Init() {
}

extern "C" void NetSession_Exit() {
}

extern "C" void NetSession_OnBeginHost() {
}

extern "C" void NetSession_Reset() {
    V3().reset();
}

extern "C" void NetSession_RemoveSlot(s32 a) {
    gNetSessionState.resetSlot(a);
}

extern "C" void NetSession_Update() {
    s32 r4 = gCommManager->unk_64;
    if (gCommManager->isSlotActive(r4)) {
        V3().updateArrivingSlot();
        V3().notifyMovingMember();
        if (r4 == 0) {
            V3().updateMoveQueue();
            V3().flushStatusUpdates();
        }
        if (r4 != 0) {
            V3().sendMoveReady();
        }
        if (r4 == 0) {
            gNetSessionState.updateSyncHost();
        }
        gNetSessionState.updateSyncClient();
        V3().updateMove();
        V3().notifyMovingOwner();
    }
}

extern "C" void NetSession_PostUpdate() {
}

NetSessionState::NetSessionState() {
    ((NetSessionAreaView *)this)->reset();
}

NetSessionState::~NetSessionState() {
}

void NetSessionState::resetSlot(s32 idx) {
    unk_00[idx].func_020a6754();
    unk_0c[idx].func_020a6720();
    unk_2c[idx].func_020a66f8();
    unk_3c[idx].func_020a6790();
    resetMemberSyncReply(idx);
    ((NetSessionAreaView *)this)->setMemberAck(idx, 0);
    if (idx != 0) {
        ((NetSessionAreaView *)this)->setSyncState(idx, 7);
    }
    if (idx == ((NetSessionAreaView *)this)->getHandoffSlot()) {
        ((NetSessionAreaView *)this)->setHandoffSlot(4);
    }
    if (idx == ((NetSessionAreaView *)this)->getNotifiedOwnerMover()) {
        ((NetSessionAreaView *)this)->setNotifiedOwnerMover(4);
    }
    if (idx == ((NetSessionAreaView *)this)->getNotifiedMemberMover()) {
        ((NetSessionAreaView *)this)->setNotifiedMemberMover(4);
    }
    if (idx == ((NetSessionAreaView *)this)->getStateRequester()) {
        ((NetSessionAreaView *)this)->setStateRequester(4);
    }
    if (idx == ((NetSessionAreaView *)this)->getArrivingSlot()) {
        ((NetSessionAreaView *)this)->setArrivingSlot(4);
    }
    if (idx == ((NetSessionAreaView *)this)->getStateSourceSlot()) {
        ((NetSessionAreaView *)this)->setStateSourceSlot(4);
    }
}

void NetSessionAreaView::reset() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        _ZN12Unk_020a675413func_020a6754Ev(&unk_00[i * 3]);
        _ZN12Unk_020a672013func_020a6720Ev(&unk_0c[i]);
        _ZN12Unk_020a66f813func_020a66f8Ev(&unk_2c[i]);
        _ZN12Unk_020a679013func_020a6790Ev(unk_3c[i]);
    }
    ((NetSessionState *)this)->resetSyncPhase();
    ((NetSessionState *)this)->resetSyncRequester();
    ((NetSessionState *)this)->resetSyncKind();
    ((NetSessionState *)this)->resetAllMemberSyncReplies();
    ((NetSessionState *)this)->setReplyTimer(0);
    resetSyncStates();
    setHandoffSlot(4);
    clearMemberAcks();
    setNotifiedOwnerMover(4);
    setMoveState(16);
    setStateRequester(4);
    setArrivingSlot(4);
    setStateSourceSlot(4);
    setOwnerAck(0);
    setNotifiedMemberMover(4);
    ((NetSessionState *)this)->setLastSyncSlot(4);
    setBecomesOwner(0);
    ((NetSessionState *)this)->setGoDelay(0);
    ((NetSessionState *)this)->setActiveSyncKind(4);
    ((NetSessionState *)this)->setCtrl07Received(0);
}

u8 sSceneFadeInType;
u8 data_021eda58;
NetSessionState gNetSessionState;
Unk_020e2978_Rec sSceneBaseProfile = {(void *)SceneBase_Create, 2, 1};

void NetSessionAreaView::updateMoveQueue() {
    struct {
        u8 b0, b1, b2;
        u8 buf[5];
    } l;
    u32 idx[2] = {4, 4};
    u32 cnt[2];
    func_02133ef8(cnt, 8);
    processMoveRequest(&idx[0], &cnt[0]);
    startNextMove(&idx[1], &cnt[1]);
    u32 i = 0;
    CommManager *o = gCommManager;
    for (; i < 2; i++) {
        u32 off = i << 2;
        s32 r7 = *(u32 *)((u8 *)idx + off);
        if (r7 < 4) {
            _ZN12Unk_020a675413func_020a6760EPhS0_S0_(&unk_00[r7 * 3], &l.b0, &l.b1, &l.b2);
            func_020a6848(l.buf);
            func_020a681c(l.buf, r7, l.b0, l.b1, l.b2, *(u32 *)((u8 *)cnt + off));
            o->beginRecord();
            o->writeRecord(l.buf, 2);
            o->endRecord(9, 4);
            func_020a6838(l.buf);
        }
    }
}

void NetSessionAreaView::startNextMove(u32 *a, u32 *b) {
    s32 r5 = 4;
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (NetArea_IsSlotMoving(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 >= 4) {
        s32 r4 = peekMoveRequest();
        if (r4 < 4) {
            func_020a63bc(r4, 0x3f, 0, 1, 4);
            *a = r4;
            *b = 4;
        }
    }
}

s32 NetSessionAreaView::peekMoveRequest() {
    s32 v;
    u8 byte;
    _ZN12Unk_020a672013func_020a672cEPiPh(unk_0c, &v, &byte);
    return v;
}

void NetSessionAreaView::popMoveRequest() {
    if (peekMoveRequest() < 4) {
        u8 *p = (u8 *)unk_0c;
        s32 i;
        for (i = 2; i >= 0; i--) {
            u8 *q = p + 8;
            s32 v;
            u8 byte;
            _ZN12Unk_020a672013func_020a672cEPiPh(q, &v, &byte);
            if (v >= 4) break;
            MI_CpuCopy8(q, p, 8);
            p += 8;
        }
        _ZN12Unk_020a672013func_020a6720Ev(p);
    }
}

void NetSessionAreaView::sendMoveReady() {
    s32 idx = ((volatile CommManager *)gCommManager)->unk_64;
    u32 *p = &unk_2c[idx];
    s32 v;
    _ZN12Unk_020a66f813func_020a6700EPj(p, &v);
    if (v != 0) {
        u8 b = v;
        CommManager *o = gCommManager;
        o->beginRecord();
        o->writeRecord(&b, 1);
        o->endRecord(10, 0);
        _ZN12Unk_020a66f813func_020a66f8Ev(p);
    }
}

void NetSessionAreaView::processMoveRequest(u32 *a, u32 *b) {
    CommManager *o;
    s32 r5 = peekMoveRequest();
    if (r5 < 4) {
        u32 *p = &unk_2c[r5];
        s32 v;
        _ZN12Unk_020a66f813func_020a6700EPj(p, &v);
        if (v == 1) {
            s32 r7 = 1;
            s32 tmp;
            u8 byte;
            _ZN12Unk_020a672013func_020a672cEPiPh(unk_0c, &tmp, &byte);
            s32 i;
            i = 3;
            o = gCommManager;
            for (; i >= 0; i--) {
                if (r5 != i && o->isSlotActive(i) != 0 && byte == NetArea_GetSlotScene(i)) {
                    r7 = 0;
                    break;
                }
            }
            func_020a63bc(r5, byte, r7, 0, 7);
            _ZN12Unk_020a66f813func_020a66f8Ev(p);
            popMoveRequest();
            *a = r5;
            *b = 7;
        }
    }
}

void NetSessionAreaView::flushStatusUpdates() {
    u32 i = 0;
    CommManager *o = gCommManager;
    for (; i < 4; i++) {
        u8 b0, b1, b2;
        u8 buf[5];
        u32 out;
        u8 *p = unk_3c[i];
        _ZN12Unk_020a679013func_020a67a0EPhS0_S0_Pj(p, &b0, &b1, &b2, &out);
        if (out != 0) {
            func_020a63bc(i, b0, b1, b2, out);
            func_020a6848(buf);
            func_020a681c(buf, i, b0, b1, b2, out);
            o->beginRecord();
            o->writeRecord(buf, 2);
            o->endRecord(9, 4);
            _ZN12Unk_020a679013func_020a6790Ev(p);
            func_020a6838(buf);
        }
    }
}

void NetSessionAreaView::setBecomesOwner(u32 v) { unk_5c = v; }

u32 NetSessionAreaView::getBecomesOwner() { return unk_5c; }

void NetSessionAreaView::setMoveState(s32 v) { unk_60 = v; }

s32 NetSessionAreaView::getMoveState() { return unk_60; }

void NetSessionAreaView::updateMove() {
    CommManager *o = gCommManager;
    s32 r7 = o->unk_64;
    u8 b0, b1, b2, b3, b4, b5;
    s32 best;
    s32 flag;
    s32 i;
    switch ((u32)getMoveState()) {
    case 16:
        if (gNextSceneProfile == 5) {
            NetArea_SendMoveTarget();
            clearMemberAcks();
            setOwnerAck(0);
            NetArea_SetMoveState(0);
        }
        break;
    case 0:
        if (NetArea_IsSlotMoving(r7) != 0) {
            setMoveState(1);
        }
        break;
    case 1:
        if (func_020a6478() != 0) break;
        if (func_020a6474() != 0) break;
        NetArea_GetSlotStatus(r7, &b0, &b1, &b2);
        if (b1 != 0) {
            best = 4;
            for (i = 0; i < 4; i++) {
                if (i != r7 && o->isSlotActive(i) != 0 && b0 == NetArea_GetSlotScene(i)) {
                    best = i;
                    break;
                }
            }
            if (best < 4) {
                setHandoffSlot(best);
                setMoveState(2);
            } else {
                setHandoffSlot(4);
                setMoveState(5);
            }
        } else {
            setHandoffSlot(4);
            setMoveState(4);
        }
        break;
    case 2:
        flag = 1;
        if (NetArea_IsUnsharedScene(Scene_GetCurrent()) == 0) {
            for (i = 3; i >= 0; i--) {
                if (i != r7 && o->isSlotActive(i) != 0) {
                    s32 t = NetArea_GetSlotScene(i);
                    if (t == Scene_GetCurrent() && getMemberAck(i) == 0) {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag != 0) {
            if (o->getDeferredLen() != 0) break;
            if (o->getHeldLen() != 0) break;
            if (o->getLoopbackLen() != 0) break;
            if (func_020a6474() != 0) break;
            clearMemberAcks();
            o->clearAuxLenA();
            setMoveState(3);
        }
        break;
    case 4:
        if (getOwnerAck() == 0 && NetArea_IsUnsharedScene(Scene_GetCurrent()) == 0) break;
        setOwnerAck(0);
        setMoveState(5);
        break;
    case 8:
        if (getHandoffSlot() != 4) {
            if (NetArea_IsSlotOwner(getHandoffSlot()) == 0 && NetArea_IsUnsharedScene(Scene_GetCurrent()) == 0) break;
            setMoveState(9);
        } else {
            setMoveState(9);
        }
        break;
    case 9: {
        u32 v = Scene_GetRequestedScene();
        best = 4;
        for (i = 3; i >= 0; i--) {
            if (i != r7 && o->isSlotActive(i) != 0) {
                NetArea_GetSlotStatus(i, &b3, &b4, &b5);
                if (b3 == v && b4 != 0) {
                    best = i;
                    break;
                }
            }
        }
        if (best < 4) {
            setStateSourceSlot(best);
            setBecomesOwner(0);
            o->clearAuxLenB();
            if (NetArea_IsUnsharedScene(Scene_GetRequestedScene()) == 0) {
                CommManager *o2 = gCommManager;
                o2->beginRecord();
                o2->endRecord(0xe, getStateSourceSlot());
            }
            setMoveState(10);
        } else {
            setStateSourceSlot(4);
            setBecomesOwner(1);
            setMoveState(11);
        }
        break;
    }
    case 10:
        if (o->getAuxLenB() != 0 || NetArea_IsUnsharedScene(Scene_GetRequestedScene()) != 0) {
            setMoveState(11);
        }
        break;
    case 11:
    case 12:
    case 13:
        break;
    case 14:
        func_020a63a8(((CommManager *)o)->unk_64, 1);
        setMoveState(15);
        break;
    case 15:
        if (NetArea_IsLocalMoving() == 0) {
            setMoveState(16);
        }
        break;
    }
}

void NetSessionAreaView::setHandoffSlot(s32 v) { unk_64 = v; }

s32 NetSessionAreaView::getHandoffSlot() { return unk_64; }

void NetSessionAreaView::setMemberAck(s32 i, u32 v) { unk_68[i] = v; }

u32 NetSessionAreaView::getMemberAck(s32 i) { return unk_68[i]; }

void NetSessionAreaView::clearMemberAcks() {
    u8 *p = unk_68;
    s32 i;
    for (i = 3; i >= 0; i--) *p++ = 0;
}

void NetSessionAreaView::setNotifiedOwnerMover(s32 v) { unk_6c = v; }

s32 NetSessionAreaView::getNotifiedOwnerMover() { return unk_6c; }

void NetSessionAreaView::notifyMovingOwner() {
    s32 r5 = 4;
    s32 i = 3;
    CommManager *o = gCommManager;
    for (; i >= 0; i--) {
        if (o->isSlotActive(i) != 0 && NetArea_IsSlotMoving(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 != getNotifiedOwnerMover()) {
        if (r5 < 4) {
            if (o->isMyAid(r5) == 0 && (s32)NetArea_GetSlotScene(r5) == Scene_GetCurrent() &&
                NetArea_IsSlotOwner(r5) != 0 && NetArea_IsUnsharedScene(Scene_GetCurrent()) == 0) {
                CommManager *o2 = gCommManager;
                o2->beginRecord();
                o2->endRecord(0xd, r5);
            }
            setNotifiedOwnerMover(r5);
        } else {
            setNotifiedOwnerMover(4);
        }
    }
}

void NetSessionAreaView::setStateSourceSlot(s32 v) { unk_70 = v; }

s32 NetSessionAreaView::getStateSourceSlot() { return unk_70; }

void NetSessionAreaView::setStateRequester(s32 v) { unk_74 = v; }

s32 NetSessionAreaView::getStateRequester() { return unk_74; }

void NetSessionAreaView::setArrivingSlot(s32 v) { unk_78 = v; }

s32 NetSessionAreaView::getArrivingSlot() { return unk_78; }

void NetSessionAreaView::updateArrivingSlot() {
    s32 c = getArrivingSlot();
    if (c < 4) {
        u32 t = NetArea_GetSlotScene(c);
        if ((s32)t == Scene_GetCurrent()) {
            setArrivingSlot(4);
        }
    }
}

void NetSessionAreaView::setOwnerAck(u32 v) { unk_7c = v; }

u32 NetSessionAreaView::getOwnerAck() { return unk_7c; }

void NetSessionAreaView::setNotifiedMemberMover(s32 v) { unk_80 = v; }

s32 NetSessionAreaView::getNotifiedMemberMover() { return unk_80; }

void NetSessionAreaView::notifyMovingMember() {
    s32 r5 = 4;
    CommManager *o = gCommManager;
    s32 saved = o->unk_64;
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (o->isSlotActive(i) != 0 && NetArea_IsSlotMoving(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 != getNotifiedMemberMover()) {
        if (r5 < 4) {
            if (o->isMyAid(r5) == 0 && NetArea_IsSlotOwner(saved) != 0 &&
                (s32)NetArea_GetSlotScene(r5) == Scene_GetCurrent() && NetArea_IsUnsharedScene(Scene_GetCurrent()) == 0) {
                CommManager *o2 = gCommManager;
                o2->beginRecord();
                o2->endRecord(0x11, r5);
            }
            setNotifiedMemberMover(r5);
        } else {
            setNotifiedMemberMover(4);
        }
    }
}

void NetSessionAreaView::setSyncState(s32 i, u32 v) { unk_84[i] = v; }

u32 NetSessionAreaView::getSyncState(s32 i) { return unk_84[i]; }

void NetSessionAreaView::resetSyncStates() {
    u32 *p = unk_84;
    s32 i;
    for (i = 3; i >= 0; i--) *p++ = 7;
}

void NetSessionAreaView::rejectSyncRequest(u32 a, u32 b) {
    if (b != 0) {
        setSyncState(a, 6);
    } else if (a == 0) {
        setSyncState(0, 6);
    } else {
        u8 buf = 6;
        CommManager *o = gCommManager;
        o->beginRecord();
        o->writeRecord(&buf, 1);
        o->endRecord(1, a);
        setSyncState(a, 7);
    }
}

void NetSessionState::updateSyncHost() {
    u32 i;
    u32 slot;
    s32 ok;
    s32 j;
    s32 z24 = 0, z28 = 0, z14 = 0, z18 = 0, z1c = 0, z20 = 0, z2c = 0;
    u8 m[5];
    s32 mode;
    CommManager *g;
    s32 c18;
    s32 k;
    BOOL all;
    BOOL all2;
    i = 0;
    do {
        slot = ((NetSessionAreaView *)this)->getSyncState(i);
        if (slot <= 3) {
            ok = TRUE;
            for (j = 3; j >= 0; j--) {
                switch (((NetSessionAreaView *)this)->getSyncState(j)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 7:
                    break;
                default:
                    ok = z14;
                    break;
                }
                if (!ok) {
                    break;
                }
            }
            if (ok) {
                if (getSyncPhase() != 4) {
                    ok = z18;
                }
            }
            if (ok) {
                if (Scene_GetCurrent() == 0x2e || Scene_GetCurrent() == 0x2f || Scene_GetCurrent() == 0xd) {
                    ok = z1c;
                }
            }
            if (ok) {
                if (SceneWarp_GetScene(Scene_GetWarpRequest()) == 0x2e || SceneWarp_GetScene(Scene_GetWarpRequest()) == 0x2f ||
                    SceneWarp_GetScene(Scene_GetWarpRequest()) == 0xd) {
                    ok = z20;
                }
            }
            if (ok) {
                setSyncPhase(z24);
                setSyncRequester(i);
                if (slot == 0) {
                    setSyncKind(z28);
                } else if (slot == 1) {
                    setSyncKind(1);
                } else if (slot == 2) {
                    setSyncKind(2);
                } else {
                    setSyncKind(3);
                }
                ((NetSessionAreaView *)this)->setSyncState(i, 4);
            } else {
                ((NetSessionAreaView *)this)->rejectSyncRequest(i, slot == 0 ? 1 : z2c);
            }
        }
        i++;
    } while (i < 4);

    if (getSyncPhase() == 0) {
        c18 = getSyncRequester();
        k = 3;
        g = gCommManager;
        for (; k >= 0; k--) {
            if (k != c18 && g->isSlotActive(k)) {
                if (k == 0) {
                    setMemberSyncReply(0, 0);
                } else {
                    func_020a66f4(&m[0]);
                    mode = getSyncKind();
                    func_020a66d4(&m[0], 0, mode, getSyncRequester());
                    g->beginRecord();
                    g->writeRecord(&m[0], 1);
                    g->endRecord(0xc, k);
                    setMemberSyncReply(k, 1);
                    func_020a66f0(&m[0]);
                }
            }
        }
        setSyncPhase(1);
    }
    if (getSyncPhase() == 1) {
        all = TRUE;
        c18 = getSyncRequester();
        k = 3;
        g = gCommManager;
        for (; k >= 0; k--) {
            if (k != c18 && g->isSlotActive(k)) {
                s32 v = getMemberSyncReply(k);
                if (v != 2 && v != 3) {
                    all = FALSE;
                    break;
                }
            }
        }
        if (all) {
            all2 = TRUE;
            for (k = 3; k >= 0; k--) {
                if (k != c18 && g->isSlotActive(k) && getMemberSyncReply(k) == 3) {
                    all2 = FALSE;
                    break;
                }
            }
            if (all2) {
                for (k = 3; k >= 0; k--) {
                    if (k != c18 && g->isSlotActive(k)) {
                        if (k == 0) {
                            setMemberSyncReply(0, 5);
                        } else {
                            func_020a66f4(&m[1]);
                            func_020a66d4(&m[1], 5, 4, getSyncRequester());
                            g->beginRecord();
                            g->writeRecord(&m[1], 1);
                            g->endRecord(0xc, k);
                            setMemberSyncReply(k, 5);
                            func_020a66f0(&m[1]);
                        }
                    }
                }
                if (getSyncKind() == 0 || g->isMyAid(c18) != 0) {
                    ((NetSessionAreaView *)this)->setSyncState(c18, 5);
                } else {
                    m[2] = 5;
                    CommManager *g5 = gCommManager;
                    g5->beginRecord();
                    g5->writeRecord(&m[2], 1);
                    g5->endRecord(1, c18);
                    ((NetSessionAreaView *)this)->setSyncState(c18, 7);
                }
                if (getSyncKind() == 0) {
                    NetSession_SetCtrl07Received(0);
                }
                setLastSyncSlot(c18);
                setSyncPhase(2);
            } else {
                for (k = 3; k >= 0; k--) {
                    if (k != c18 && g->isSlotActive(k)) {
                        if (getMemberSyncReply(k) == 2) {
                            if (k == 0) {
                                setMemberSyncReply(0, 4);
                            } else {
                                func_020a66f4(&m[3]);
                                func_020a66d4(&m[3], 4, 4, getSyncRequester());
                                g->beginRecord();
                                g->writeRecord(&m[3], 1);
                                g->endRecord(0xc, k);
                                setMemberSyncReply(k, 4);
                                func_020a66f0(&m[3]);
                            }
                        } else {
                            setMemberSyncReply(k, 6);
                        }
                    }
                }
                setSyncPhase(3);
            }
        }
    }
    if (getSyncPhase() == 2) {
        BOOL all3 = TRUE;
        s32 c18b = getSyncRequester();
        k = 3;
        CommManager *g6 = gCommManager;
        for (; k >= 0; k--) {
            if (k != c18b && g6->isSlotActive(k) && getMemberSyncReply(k) != 6) {
                all3 = FALSE;
                break;
            }
        }
        if (all3) {
            setSyncPhase(4);
        }
    }
    if (getSyncPhase() == 3) {
        BOOL all4 = TRUE;
        s32 c18c = getSyncRequester();
        k = 3;
        CommManager *g7 = gCommManager;
        for (; k >= 0; k--) {
            if (k != c18c && g7->isSlotActive(k) && getMemberSyncReply(k) != 6) {
                all4 = FALSE;
                break;
            }
        }
        if (all4) {
            if (getSyncKind() == 0 || g7->isMyAid(c18c) != 0) {
                ((NetSessionAreaView *)this)->setSyncState(c18c, 6);
            } else {
                m[4] = 6;
                CommManager *g8 = gCommManager;
                g8->beginRecord();
                g8->writeRecord(&m[4], 1);
                g8->endRecord(1, c18c);
                ((NetSessionAreaView *)this)->setSyncState(c18c, 7);
            }
            if (getSyncKind() == 0) {
                Net_WifiHostKeepAlive();
            }
            setSyncPhase(4);
        }
    }
}

void NetSessionState::setLastSyncSlot(s32 v) { unk_94 = v; }

s32 NetSessionState::getLastSyncSlot() { return unk_94; }

void NetSessionState::setSyncMemberMask(u16 v) { unk_98 = v; }

u16 NetSessionState::getSyncMemberMask() { return unk_98; }

void NetSessionState::setSyncPhase(s32 v) { unk_9c = v; }

s32 NetSessionState::getSyncPhase() { return unk_9c; }

void NetSessionState::resetSyncPhase() { unk_9c = 4; }

void NetSessionState::setSyncRequester(s32 v) { unk_a0 = v; }

s32 NetSessionState::getSyncRequester() { return unk_a0; }

void NetSessionState::resetSyncRequester() { unk_a0 = 4; }

void NetSessionState::setSyncKind(s32 v) { unk_a4 = v; }

s32 NetSessionState::getSyncKind() { return unk_a4; }

void NetSessionState::resetSyncKind() { unk_a4 = 4; }

void NetSessionState::setMemberSyncReply(s32 i, s32 v) { unk_a8[i] = v; }

s32 NetSessionState::getMemberSyncReply(s32 i) { return unk_a8[i]; }

void NetSessionState::resetMemberSyncReply(s32 i) { unk_a8[i] = 6; }

void NetSessionState::resetAllMemberSyncReplies() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        unk_a8[i] = 6;
    }
}

// NetSessionState methods

u16 gNextSceneProfile = 0xd8;

void NetSessionState::updateSyncClient() {
    CommManager *g = gCommManager;
    s32 st = g->unk_64;
    s32 mode;
    s32 v;
    s32 st2;
    u8 m[4];
    if (getMemberSyncReply(st) == 0) {
        setReplyTimer(0);
        setMemberSyncReply(st, 1);
    }
    st = g->unk_64;
    if (getMemberSyncReply(st) == 1) {
        BOOL r7 = FALSE;
        s32 t = Scene_GetCurrent();
        if (t != 0x2e && t != 0xc && t != 0xd && t != 0xe && t != 0x2f) {
            if (SceneWarp_GetScene(Scene_GetWarpRequest()) == 0x3f && gSceneCreating == 0) {
                if (TalkRequest_BeginNetSyncHold()) {
                    r7 = TRUE;
                }
            }
        }
        mode = getSyncKind();
        if (r7) {
            setGoDelay(0x28);
            setReplyTimer(0);
            if (st != 0) {
                func_020a66f4(&m[0]);
                func_020a66d4(&m[0], 2, 4, getSyncRequester());
                CommManager *g2 = gCommManager;
                g2->beginRecord();
                g2->writeRecord(&m[0], 1);
                g2->endRecord(0xc, 0);
                func_020a66f0(&m[0]);
            }
            FieldInfoBalloon_ShowSyncKindMsg(mode);
            setMemberSyncReply(st, 2);
            g->setSessionMemberMask(Comm_GetMemberMask());
        } else {
            u32 n = getReplyTimer() + 1;
            if (n >= 0xa0) {
                if (st == 0) {
                    setMemberSyncReply(0, 3);
                } else {
                    func_020a66f4(&m[1]);
                    func_020a66d4(&m[1], 3, 4, getSyncRequester());
                    CommManager *g2 = gCommManager;
                    g2->beginRecord();
                    g2->writeRecord(&m[1], 1);
                    g2->endRecord(0xc, 0);
                    setMemberSyncReply(st, 6);
                    func_020a66f0(&m[1]);
                }
                MenuCtrl_ResetForceClose();
                setReplyTimer(0);
            } else {
                setReplyTimer(n);
            }
            FieldInfoBalloon_ShowSyncWaitMsg(mode);
        }
    }
    st2 = g->unk_64;
    v = getMemberSyncReply(st2);
    if (v == 2) {
        FieldInfoBalloon_ShowSyncKindMsg(getSyncKind());
    } else if (v == 4) {
        TalkRequest_EndNetSyncHold();
        MenuCtrl_ResetForceClose();
        FieldInfoBalloon_ShowCancelled();
        setGoDelay(0);
        if (st2 != 0) {
            func_020a66f4(&m[2]);
            func_020a66d4(&m[2], 6, 4, getSyncRequester());
            CommManager *g3 = gCommManager;
            g3->beginRecord();
            g3->writeRecord(&m[2], 1);
            g3->endRecord(0xc, 0);
            func_020a66f0(&m[2]);
        }
        setMemberSyncReply(st2, 6);
    } else if (v == 5) {
        BOOL r7;
        s32 md = getSyncKind();
        s32 sl;
        FieldInfoBalloon_ShowSyncKindMsg(md);
        u8 u = gNetSessionState.getGoDelay();
        if (u != 0) {
            gNetSessionState.setGoDelay(u - 1);
        }
        r7 = FALSE;
        if (getGoDelay() != 0) {
            r7 = TRUE;
        }
        if (!r7) {
            if (md == 0) {
                sl = getSyncRequester();
                if (func_02097444(sl + 3) == 0) {
                    r7 = TRUE;
                    if (st2 == 0) {
                        u32 irq = Net_GetConnectedMask();
                        u16 mask = 1 << sl;
                        if (mask != (mask & irq)) {
                            u32 f = g->getErrorFlags();
                            if ((f & 4) == 0) {
                                g->setErrorFlags(f | 4);
                            }
                        }
                    }
                }
            } else if (md == 1) {
                setLastSyncSlot(getSyncRequester());
            }
        }
        if (r7) {
            return;
        }
        setActiveSyncKind(getSyncKind());
        Net_SetJoiningAid(getSyncRequester());
        Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
        if (getSyncKind() == 0) {
            s32 x = PlayerData_Get(getSyncRequester() + 3);
            u16 *p;
            u8 *idb = (u8 *)&gSaveTownId;
            if (x != 0 && _ZN10PlayerData18getLostChildRecordEv(x)->isEscorting() && (p = _ZN10PlayerData18getLostChildRecordEv(x)->getTownId(), p[0] == *(u16 *)idb) &&
                memcmp(p + 1, idb + 2, 8) == 0) {
                SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2f, 2, 2);
            } else {
                static FxVec3 s;
                SceneWarp_RequestAt(Scene_GetWarpRequest(), 0xd, &s, 0x800000, 0, 2, 2);
            }
        } else {
            SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2e, 2, 3);
        }
        if (g->isMyAid(0)) {
            if (md == 0) {
                SaveManager_RequestAct15();
            } else if (md == 1) {
                SaveManager_RequestAct18();
            }
        } else {
            if (md == 0) {
                SaveManager_RequestAct16();
            } else if (md == 1) {
                SaveManager_RequestAct19();
            } else if (md == 2) {
                SaveManager_RequestAct1B();
                func_0209f230(0);
            } else {
                SaveManager_RequestAct1B();
                func_0209f230(1);
            }
        }
        if (st2 != 0) {
            func_020a66f4(&m[3]);
            func_020a66d4(&m[3], 6, 4, getSyncRequester());
            CommManager *g3 = gCommManager;
            g3->beginRecord();
            g3->writeRecord(&m[3], 1);
            g3->endRecord(0xc, 0);
            func_020a66f0(&m[3]);
        }
        setMemberSyncReply(st2, 6);
    }
}

void NetSessionState::setReplyTimer(s32 v) { unk_b8 = v; }

s32 NetSessionState::getReplyTimer() { return unk_b8; }

void NetSessionState::setGoDelay(u8 v) { unk_bc = v; }

u8 NetSessionState::getGoDelay() { return unk_bc; }

void NetSessionState::setActiveSyncKind(s32 v) { unk_c0 = v; }

s32 NetSessionState::getActiveSyncKind() { return unk_c0; }

void NetSessionState::setCtrl07Received(u8 v) { unk_c4 = v; }

// End of file: small accessors (defined last so they are not inlined into callers)

u8 NetSessionState::getCtrl07Received() { return unk_c4; }

extern "C" SceneBase *SceneBase_Create(void) {
    return new SceneBase();
}

extern "C" void SceneBase_SetupGraphics(void) {
    func_020535e0();
    G3X_Init();
    GX_SetBankForBG(0x20);
    GX_SetBankForOBJ(1);
    GX_SetBankForBGExtPltt(0x40);
    GX_SetBankForTex(6);
    GX_SetBankForTexPltt(0x10);
    *(volatile u32 *)0x40004c8 = 0x20000000;
    *(volatile u32 *)0x40004cc = 0x7fff;
    *(volatile u32 *)0x40004c0 = 0x7fff;
    *(volatile u32 *)0x40004c4 = 0;
    Gfx3d_InitEngine();
}

BOOL SceneBase::vfunc_04() {
    if (!ProcBase::vfunc_04()) {
        return FALSE;
    }
    if (gSceneCreating != 0) {
        return TRUE;
    }
    SceneBase_SetupGraphics();
    func_0208e968();
    gActorDefaultParent = this;
    sSceneFadeInDelay = 4;
    func_020a6470();
    NetArea_ApplyStateB();
    gSceneCreating++;
    if (gCommManager->isSlotActive(gCommManager->unk_64)) {
        switch (NetArea_GetMoveState()) {
        case 6:
            NetArea_SetMoveState(7);
            break;
        case 0xd:
            NetArea_SetMoveState(0xe);
            break;
        }
    }
    data_021eda50 = 0;
    data_021eda58 = 0;
    return TRUE;
}

void SceneBase::postCreate(s32 a) {
    if (a == 2) {
        gSceneCreating = 0;
        if (*(u16 *)&unk_04[8] != 6) {
            ScreenTransition_ShowCover();
        }
        Comm_ProcessReceived(0);
        NetSession_Update();
        Field_UpdateActions();
        func_0203d4c0();
    }
    GameProc::postCreate(a);
}

BOOL SceneBase::preDelete() {
    if (ProcBase::preDelete()) {
        return TRUE;
    }
    return FALSE;
}

// Group r275, class SceneBase overrides

BOOL SceneBase::vfunc_14(s32 a) {
    if (a == 2) {
        sSceneExists = 0;
        if (data_021d726c != 0) {
            func_0209caf4();
        }
        gActorDefaultParent = 0;
        Snd_DestroyScene();
    }
    return ProcBase::vfunc_14(a);
}

BOOL SceneBase::preExecute() {
    Comm_ProcessReceived(0);
    NetSession_Update();
    Field_UpdateActions();
    if (ProcBase::preExecute() == 0) {
        return FALSE;
    }
    if (data_021d726c != 0) {
        if (Unk_020a42c4_IsTwo(gScreenTransition) != 0) {
            sSceneFadeOutType = 2;
            sSceneFadeInType = 0;
            ScreenTransition_StartFadeOut(2, 0x10);
        }
        return FALSE;
    }
    if (gNextSceneProfile != 0xd8) {
        if (Unk_020a42c4_IsTwo(gScreenTransition) != 0 || data_021c3cb8 != 0) {
            ScreenTransition_StartFadeOut(sSceneFadeOutType, 0xf);
        }
        return FALSE;
    }
    if (unk_04[0xf] & 1) {
        if (ProcBase_HasCreatingChild(this) == 0) {
            unk_04[0xf] &= ~1;
            unk_04[0xf] &= ~4;
        } else {
            return FALSE;
        }
    }
    if (sSceneFadeInDelay != 0) {
        if (Unk_020a42c4_IsZero(gScreenTransition) != 0) {
            sSceneFadeInDelay = sSceneFadeInDelay - 1;
            if (sSceneFadeInDelay == 0) {
                if (ScreenTransition_StartFadeIn(sSceneFadeInType, 0xf, 0) == 0) {
                    sSceneFadeInDelay = 1;
                }
            }
        }
    }
    return TRUE;
}

BOOL SceneBase::vfunc_20() { return ProcBase::vfunc_20(); }

BOOL SceneBase::preDraw() {
    if (ProcBase::preDraw()) {
        return TRUE;
    }
    return FALSE;
}

BOOL SceneBase::postDraw() { return ProcBase::postDraw(); }

extern "C" void Scene_Request(u32 a, u32 b, u32 c, u32 d) {
    gNextSceneProfile = a;
    sSceneFadeOutType = b;
    sSceneFadeInType = c;
}

extern "C" void Scene_RequestBoot(void) {
    gNextSceneProfile = 1;
    sSceneFadeOutType = 3;
    sSceneFadeInType = 3;
    sSceneExists = 0;
}

extern "C" BOOL Scene_CreateRequested(void) {
    if (sSceneExists != 0 || gNextSceneProfile == 0xd8) {
        return FALSE;
    }
    if (gNextSceneProfile == 2) {
        OS_ResetSystem(1);
    }
    s32 r = GameProc_CreateChild(gNextSceneProfile, data_021d72e8, 0, 2);
    if (r != 0) {
        gNextSceneProfile = 0xd8;
        sSceneExists = 1;
        return r;
    }
    return FALSE;
}

extern "C" void Scene_CheckExit(void *p) {
    if (data_021d726c != 0) {
        u8 m = gScreenTransition;
        if (Unk_020a42c4_IsTwo(m) == 0) {
            if (Unk_020a42c4_IsZero(m) != 0) {
                Scene_Request(0xd4, 0, 0, 0);
                ProcBase_RequestDelete(p);
                TalkRequestQueue_Reset();
                func_0203eb38();
            }
        }
    } else if (gNextSceneProfile != 0xd8) {
        u8 m = gScreenTransition;
        if (Unk_020a42c4_IsTwo(m) == 0) {
            if (data_021c3cb8 == 0) {
                if (Unk_020a42c4_IsZero(m) != 0) {
                    if (gCommManager->isSlotActive(gCommManager->unk_64) != 0) {
                        switch (NetArea_GetMoveState()) {
                        case 5:
                            ProcBase_RequestDelete(p);
                            NetArea_SetMoveState(6);
                            break;
                        case 12:
                            ProcBase_RequestDelete(p);
                            NetArea_SetMoveState(0xd);
                            break;
                        }
                    } else {
                        ProcBase_RequestDelete(p);
                    }
                }
            }
        }
    }
}

// ======== FUNCTIONS ========

void *gActorDefaultParent;
u8 sSceneFadeOutType;
volatile u8 sSceneFadeInDelay;
u8 gSceneCreating;
u8 sSceneExists = 1;
u8 data_021eda50;


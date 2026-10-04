// mwcc-flags: -str reuse
#include "types.h"
#include "game/Unk_0201acf8.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/Unk_0201a13c.h"
#include "gfx/MatTexVramTask.h"
#include "actor/Actor.h"
#include "actor/Character.h"


struct Unk_0201bc1c;
class SpNpcBlanca;
class SpNpcBlancaTalk;


struct Unk_ov074_02271450_Ent {
    u8 pad_00[0x5c];
    u32 unk_5c;
};

struct Unk_ov074_02271564_A {
    u16 a;
    u8 b[8];
    u16 c;
    u8 d[8];
    s8 e;
    u8 f;
    u8 g[16];
    u8 h;
};

struct Unk_ov074_02271564_B {
    u16 a;
    u8 b[8];
    u16 c;
    u8 d[8];
    s8 e;
    u8 f;
};


struct Unk_ov074_02271be8_V {
    s32 v[3];
};

struct Unk_ov074_02271e54_V {
    s32 x, y, z, w;
};

struct Unk_ov074_02272020_V {
    s32 x, y, z;
};

class PlayerData {
public:
    void *getPlayerId();
};

// Other modules' methods are called through their mangled symbol names (self first).
#define Unk_02013474_disableFootsteps _ZN12Unk_0201347416disableFootstepsEv
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcLookAt_getObstacleBits _ZN9NpcLookAt15getObstacleBitsEv
#define NpcMoveCtrl_resetDestination _ZN11NpcMoveCtrl16resetDestinationEv
#define NpcMoveCtrl_hasNextLeg _ZN11NpcMoveCtrl10hasNextLegEv
#define NpcMoveCtrl_getDestination _ZN11NpcMoveCtrl14getDestinationEv
#define NpcMoveCtrl_setDestination _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3
#define NpcMoveCtrl_hasArrived _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define TalkWindowState_setSlotFromString _ZN15TalkWindowState17setSlotFromStringEiii
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define Pattern_getInfo _ZN7Pattern7getInfoEv
#define PatternInfo_getTitle _ZN11PatternInfo8getTitleEPv
#define PatternInfo_getAuthor _ZN11PatternInfo9getAuthorEv
#define func_02072064 _ZN11PatternInfoD1Ev
#define BlancaFaceRecord_getConcept _ZN16BlancaFaceRecord10getConceptEv
#define BlancaFaceRecord_setConcept _ZN16BlancaFaceRecord10setConceptEj
#define BlancaFaceRecord_setState _ZN16BlancaFaceRecord8setStateEj
#define BlancaFaceRecord_getPattern _ZN16BlancaFaceRecord10getPatternEv
#define PlayerId_equals _ZN8PlayerId6equalsEPS_
#define PlayerId_isValid _ZN8PlayerId7isValidEv
#define func_020942c8 _ZN8PlayerIdC1Ev
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define MatTexVramTask_request _ZN14MatTexVramTask7requestEPvjS0_jj

extern "C" {
extern u8 gSaveBlancaFace[];
extern u32 *data_ov074_022724e4;
extern u32 *gCurrentHeap;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gRandom[];
extern s32 gVec3Zero[];
extern u8 __ptmf_null[];
extern void *gCamera;
extern s32 gCameraLookAt[];
extern s16 data_02135f44[];

void *BlancaFaceRecord_getPattern(u8 *p);
s32 ClothTex_LoadPatternThunk(u32 h, void *x);
u32 ClothTex_GetTexThunk(u32 h);
u32 ClothTex_GetBufferSize();
u32 Heap_Alloc(u32 *a, u32 b);
void Heap_Free(u32 *a, u32 b);
BOOL NpcActor_IsFrontAngle(s16 a);
s32 MenuCtrl_IsResultOk();
PlayerData *PlayerData_GetCurrent();
s32 Impression_Evaluate(void *a, s32 b, s32 c);
void BlancaFaceRecord_setConcept(u8 *p, s32 v);
void BlancaFaceRecord_setState(u8 *p, s32 v);
s32 Random_GlobalBelow(s32 a);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 TalkWindowState_setNextMessage(void *self, u8 *b, char *c);
void TalkWindowState_setSlotFromString(void *self, s32 a, u8 *b, char *c);
void TalkWindowState_setSlot(void *self, s32 a, void *b);
u32 BlancaFaceRecord_getConcept(u8 *p);
s32 ChoiceList_getResult();
Unk_ov074_02271564_A *Pattern_getInfo();
Unk_ov074_02271564_B *PatternInfo_getAuthor(Unk_ov074_02271564_A *a);
void PatternInfo_getTitle(Unk_ov074_02271564_A *a, void *b);
void func_02072064(Unk_ov074_02271564_A *a);
BOOL PlayerId_isValid(Unk_ov074_02271564_B *b);
BOOL PlayerId_equals(Unk_ov074_02271564_B *a, void *b);
u32 PlayerId_GetTownId(Unk_ov074_02271564_B *a);
void func_020942c8(Unk_ov074_02271564_B *a);
s32 memcmp(void *a, void *b, s32 n);
void func_0206267c(void *p);
void func_0206260c(void *p);
u32 NpcActor_getAngleTo(void *p, u32 x);
void TalkRequest_SetTargetDone(void *p);
void func_020e7518(void *p);
s32 Random_Next(u8 *p);
s32 NpcActionCtrl_isActionDone(void *p);
s32 NpcActionCtrl_getAction(void *p);
s32 NpcActionCtrl_requestAction(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 Math_AngleXZ(void *a, s32 *b);
Unk_ov074_02271be8_V *NpcMoveCtrl_getDestination(void *p);
s32 MatTexVramTask_request(void *p, u32 a, u32 *b, u32 c, s32 d, s32 e);
void Unk_02013474_disableFootsteps(void *p);
void Unk_02013474_enableFootsteps(void *p);
BOOL NpcTalkCtrl_isBusy(void *p);
void NpcTalkCtrl_requestTurnAndTalk(void *p, u32 a, u32 b, u32 c);
s32 func_01ffcb0c(s32 a, s32 b);
s32 NpcLookAt_getObstacleBits(void *p);
s32 NpcMoveCtrl_hasArrived(void *a, void *b, s32 c);
void NpcMoveCtrl_setDestination(void *a, void *b);
BOOL NpcMoveCtrl_hasNextLeg(void *a);
void NpcMoveCtrl_resetDestination(void *a);
void Npc_RotateOffsetXZ(void *out, void *pos, s32 x, s32 y);
s32 Npc_IsPosBlocked(void *p);
void FieldPos_SnapToUnitCenter(void *a, void *b);
BOOL TownMap_IsPosWalkable(void *a, s32 b);
void NpcLookAt_setTarget(void *p, s32 a, s32 b, s32 c, s32 *d, s32 e, s32 f, s32 g);
}

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 v);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    s32 getChoiceList();
    void func_02015ab0(u32 a);
    u32 func_02015aac();
    void setPlayerNameSlot(u32 a, u32 b);
    void setTownNameSlot(u32 a, u32 b);
    u8 pad_04[0x1a];
    u8 msgIndex;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void onWindowClose();
    virtual void onTalkEnd();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    void setSubSceneKind(u32 a, u32 b);
    void openSubScene(s32 a);
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};


class SpNpcBlancaFaceTexture {
public:
    SpNpcBlancaFaceTexture();
    ~SpNpcBlancaFaceTexture();
    void release(u32 *p);
    void apply(void *e);
    u32 getTextureData();
    void init(u32 *a, void *b);
    u32 texBuffer;
    MatTexVramTask texTask;
};

class SpNpcBlancaTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcBlancaTalk::*Fn)();

    SpNpcBlancaTalk();
    virtual ~SpNpcBlancaTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone();

    void attachOwner(SpNpcBlanca *o);
    BOOL onConceptChosen();
    void onFaceDrawn();
    void setResultHandler(s32 idx);

    /* 0xac */ SpNpcBlanca *owner;
    /* 0xb0 */ Fn resultHandler;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
MEMBER(ThreeLayerAnimModel, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(CollisionState, 0x30);
MEMBER(NpcActionCtrl, 0x618 - 0x564);


struct Unk_020d77a4_Vec3;


class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();

    void setTalkRequest(Unk_0201bc1c *p);
    u32 getPlayerActor(u32 v);

    u16 unk_ea;
    ThreeLayerAnimModel model;
    Unk_0201ad3c moveAnimSet;
    NpcFaceAnim faceAnim;
    NpcAnimCtrl animCtrl;
    Unk_0201accc moveCtrl;
    Unk_0201a8bc obstacleProbe;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 lookAt;
    NpcSpeechState speechState;
    Unk_0201a13c emotionFx;
    CollisionState collisionState;
    Unk_02088d00 collider;
    Unk_020f4080 seEmitter;
    Unk_020135e4 footstepFx;
    NpcActionCtrl actionCtrl;
    Unk_02014254 talkCtrl;
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 getWalkAnimSpeedScale();

    SpNpcAnimHeapHandle animHeapHandle;
    s32 colliderRadius;
    s32 colliderHeight;
    u8 talkMelodyPlayed;
};

class SpNpcBlanca : public SpNpcActor {
public:
    SpNpcBlanca() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getWalkAnimSpeedScale();

    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcBlancaTalk talk;
    /* 0x710 */ SpNpcBlancaFaceTexture faceTexture;
};

struct Unk_ov074_02272130_Ent {
    BOOL (SpNpcBlanca::*enter)();
    BOOL (SpNpcBlanca::*exit)();
};

struct Unk_ov074_SceneEntry {
    SpNpcBlanca *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov074_Col {
    u8 r, g, b, a;
    Unk_ov074_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};


extern "C" {
SpNpcBlanca *SpNpcBlanca_Create();
void SpNpcBlanca_ChangeAct(SpNpcBlanca *self, s32 state);
s32 SpNpcBlanca_IsInCameraBox(void *self);
s32 SpNpcBlanca_TryAvoidObstacle(void *self);
s32 SpNpcBlanca_SteerAroundObstacle(void *self);
s32 SpNpcBlanca_FindSidestepPos(void *self, void *out, void *x);
s32 SpNpcBlanca_PickWanderTarget(void *self, s32 *a, s32 *b);
s32 SpNpcBlanca_IsInFocusBox(void *self, void *a, void *b);
extern u8 sSpNpcBlancaModelPath[];
extern Unk_ov074_02272130_Ent sSpNpcBlancaActTable[5];
extern FxVec3 sSpNpcBlancaSidestepOffsets[2];
extern Unk_ov074_SceneEntry sSpNpcBlancaProfile;
extern Unk_ov074_Col data_ov074_022726e4;
extern Unk_ov074_Col data_ov074_022726f4;
extern Unk_ov074_Col data_ov074_022726e0;
extern Unk_ov074_Col data_ov074_022726f8;
extern Unk_ov074_Col data_ov074_022726e8;
extern Unk_ov074_Col data_ov074_022726f0;
extern u32 sSpNpcBlancaFaceMaterialName;
}

typedef BOOL (SpNpcBlanca::*Unk_ov074_Fn)();
extern "C" {
void _ZN11SpNpcBlanca9mainAct04Ev();
extern void *data_ov074_022724e8[2];
void _ZN15SpNpcBlancaTalk15onConceptChosenEv();
extern void *data_ov074_022724f0[2];
void _ZN11SpNpcBlanca9mainAct00Ev();
extern void *data_ov074_022724f8[2];
void _ZN11SpNpcBlanca9mainAct01Ev();
extern void *data_ov074_02272500[2];
void _ZN11SpNpcBlanca10setupAct02Ev();
extern void *data_ov074_02272508[2];
void _ZN11SpNpcBlanca9mainAct02Ev();
extern void *data_ov074_02272510[2];
void _ZN11SpNpcBlanca10setupAct03Ev();
extern void *data_ov074_02272518[2];
void _ZN11SpNpcBlanca9mainAct03Ev();
extern void *data_ov074_02272520[2];
void _ZN11SpNpcBlanca10setupAct04Ev();
extern void *data_ov074_02272528[2];
void _ZN15SpNpcBlancaTalk11onFaceDrawnEv();
extern void *data_ov074_02272530[2];
void _ZN11SpNpcBlanca10setupAct00Ev();
extern void *data_ov074_02272538[2];
}
#define PM(a) (*(Unk_ov074_Fn *)data_ov074_##a)


#define F(T, o) (*(T *)((u8 *)this + (o)))
#define P(o) ((void *)((u8 *)this + (o)))
#define FS(T, o) (*(T *)((u8 *)self + (o)))
#define PS(o) ((void *)((u8 *)self + (o)))

extern "C" SpNpcBlanca *SpNpcBlanca_Create() {
    return new SpNpcBlanca();
}

s32 SpNpcBlanca::getWalkAnimSpeedScale() { return data_020c6cf0; }

BOOL SpNpcBlanca::vfunc_04() {
    if (SpNpcActor::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcBlanca::vfunc_00() {
    if (SpNpcActor::vfunc_00() == 0) {
        return FALSE;
    }
    faceTexture.init(gCurrentHeap, (u8 *)this + 0xec);
    SpNpcBlanca_ChangeAct(this, 3);
    return TRUE;
}

BOOL SpNpcBlanca::vfunc_0c() {
    if (SpNpcActor::vfunc_0c() == 0) {
        return FALSE;
    }
    faceTexture.release(gCurrentHeap);
    return TRUE;
}

u8 *SpNpcBlanca::getTexturePath() { return 0; }

u8 *SpNpcBlanca::getModelPath() { return sSpNpcBlancaModelPath; }

BOOL SpNpcBlanca::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcBlancaActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcBlancaActTable[unk_654].exit)();
    }
    return result;
}

extern "C" void SpNpcBlanca_ChangeAct(SpNpcBlanca *self, s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcBlancaActTable[state].enter != NULL) {
        ok = (self->*sSpNpcBlancaActTable[state].enter)();
    }
    if (ok) {
        self->unk_654 = state;
    }
}

BOOL SpNpcBlanca::setupAct02() {
    void *self = this;
    FS(u8, 0x651) = 0;
    NpcActionCtrl_requestAction(PS(0x564), 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    Unk_02013474_enableFootsteps(PS(0x558));
    Unk_02013474_enableFootsteps(PS(0x558));
    NpcLookAt_setTarget(PS(0x3b0), 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

extern "C" s32 SpNpcBlanca_IsInFocusBox(void *self, void *a, void *b) {
    s32 *pa = (s32 *)a;
    s32 *pb = (s32 *)b;
    BOOL r = FALSE;
    BOOL f6 = FALSE;
    BOOL f5 = FALSE;
    if (pb[0] > pa[0] - 0x10000) {
        if (pb[0] < pa[0] + 0x10000) {
            f5 = TRUE;
        }
    }
    if (f5) {
        if (pb[2] > pa[2] - 0x1a000) {
            f6 = TRUE;
        }
    }
    if (f6) {
        if (pb[2] < pa[2] + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" s32 SpNpcBlanca_IsInCameraBox(void *self) {
    void *pos = PS(0x5c);
    s32 r = 0;
    Unk_ov074_02272020_V v;
    if (gCamera != 0) {
        v.x = gCameraLookAt[0];
        v.y = gCameraLookAt[1];
        v.z = gCameraLookAt[2];
        r = SpNpcBlanca_IsInFocusBox(self, &v, pos);
    }
    return r;
}

extern "C" s32 SpNpcBlanca_PickWanderTarget(void *self, s32 *a, s32 *b) {
    s32 r6 = 0;
    s32 i;
    Unk_ov074_02272020_V v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s16 ang = Random_Next(gRandom);
        s32 idx = ((u16)ang >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + FS(s32, 0x5c);
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + FS(s32, 0x64);
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r6) != 0) {
            *a = v.x;
            *b = v.z;
            r6 = 1;
            break;
        }
    }
    return r6;
}

extern "C" s32 SpNpcBlanca_FindSidestepPos(void *self, void *out, void *x) {
    Unk_ov074_02271e54_V t;
    Unk_ov074_02271e54_V *o = (Unk_ov074_02271e54_V *)out;
    s32 r = 0;
    Npc_RotateOffsetXZ(&t, PS(0x5c), (s32)x, FS(s16, 0x94));
    if (Npc_IsPosBlocked(&t) != 1) {
        o->x = t.x;
        o->y = t.y;
        o->z = t.z;
        r = 1;
    }
    return r;
}

extern "C" s32 SpNpcBlanca_SteerAroundObstacle(void *self) {
    void *r1c = PS(0x564);
    void *r4 = PS(0x350);
    s32 r6 = NpcLookAt_getObstacleBits(PS(0x3a8));
    s32 r7 = 0;
    Unk_ov074_02272020_V v;

    if (NpcMoveCtrl_hasArrived(r4, self, 1) == 0) {
        switch (r6) {
        case 3:
            NpcActionCtrl_requestAction(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r7 = 1;
            break;
        case 1:
            if (SpNpcBlanca_FindSidestepPos(self, &v, &sSpNpcBlancaSidestepOffsets[1]) != 0) {
                NpcMoveCtrl_setDestination(r4, &v);
            } else {
                NpcActionCtrl_requestAction(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r7 = 1;
            break;
        case 2:
            if (SpNpcBlanca_FindSidestepPos(self, &v, sSpNpcBlancaSidestepOffsets) != 0) {
                NpcMoveCtrl_setDestination(r4, &v);
            } else {
                NpcActionCtrl_requestAction(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r7 = 1;
            break;
        }
    } else {
        if (NpcMoveCtrl_hasNextLeg(r4) != 0) {
            NpcMoveCtrl_resetDestination(r4);
        }
    }
    return r7;
}

// ---------------------------------------------------------------------------------------------------------------------
extern "C" BOOL SpNpcBlanca_TryAvoidObstacle(void *self) {
    if (FS(u32, 0x98) != 0 && SpNpcBlanca_SteerAroundObstacle(self) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcBlanca::mainAct02() {
    s32 r6;
    Unk_ov074_02271be8_V v;
    Unk_ov074_02271be8_V w;
    void *r4 = P(0x564);

    r6 = SpNpcBlanca_IsInCameraBox(this);
    func_020e7518(P(0x651));
    if (r6 != 0) {
        if (SpNpcBlanca_TryAvoidObstacle(this) == 0) {
            if (NpcActionCtrl_isActionDone(r4) != 0) {
                if (((Unk_0201acf8 *)P(0x3aa))->func_0201acfc() == 2) {
                    NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    v.v[0] = gVec3Zero[0];
                    v.v[1] = gVec3Zero[1];
                    v.v[2] = gVec3Zero[2];
                    if (SpNpcBlanca_PickWanderTarget(this, &v.v[0], &v.v[2]) != 0) {
                        r6 = Math_AngleXZ(P(0x5c), &v.v[0]);
                        if (NpcActor_IsFrontAngle(r6 - F(s16, 0x8e)) != 0) {
                            r6 = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != NpcActionCtrl_getAction(P(0x564))) {
                                NpcActionCtrl_requestAction(r4, r6, 1, v.v[0], v.v[2], 0, 0, 0, 0, data_020c6cc8, 0);
                                F(u8, 0x651) = 0x64;
                            }
                        } else {
                            if (NpcActionCtrl_getAction(P(0x564)) != 4) {
                                NpcActionCtrl_requestAction(r4, 4, 1, v.v[0], v.v[2], 0, r6, 0, 0, data_020c6cc8, 0);
                                F(u8, 0x651) = 0x50;
                            }
                        }
                    } else {
                        NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else {
                if (F(u32, 0x98) != 0) {
                    if (NpcActionCtrl_getAction(P(0x564)) == 1 || NpcActionCtrl_getAction(P(0x564)) == 2 || NpcActionCtrl_getAction(P(0x564)) == 4) {
                        if (F(u8, 0x651) == 0) {
                            NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        } else {
                            Unk_ov074_02271be8_V *src = NpcMoveCtrl_getDestination(P(0x350));
                            w.v[0] = src->v[0];
                            w.v[1] = src->v[1];
                            w.v[2] = src->v[2];
                            if (NpcActor_IsFrontAngle(Math_AngleXZ(P(0x5c), &w.v[0]) - F(s16, 0x8e)) == 0) {
                                NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (F(u32, 0x98) != 0) {
            SpNpcBlanca_ChangeAct(this, 3);
        }
    }
    return FALSE;
}

BOOL SpNpcBlanca::setupAct03() {
    NpcActionCtrl_requestAction(P(0x564), 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    F(u8, 0x651) = 0;
    Unk_02013474_disableFootsteps(P(0x558));
    return TRUE;
}

BOOL SpNpcBlanca::mainAct03() {
    if (SpNpcBlanca_IsInCameraBox(this) != 0) {
        SpNpcBlanca_ChangeAct(this, 2);
    }
    return TRUE;
}

BOOL SpNpcBlanca::setupAct00() { return TRUE; }

BOOL SpNpcBlanca::mainAct00() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        SpNpcBlanca_ChangeAct(this, 1);
    }
    return TRUE;
}

BOOL SpNpcBlanca::mainAct01() { return TRUE; }

BOOL SpNpcBlanca::setupAct04() {
    u32 a = talk.func_02015aac();
    s32 b = rotY;
    if (a != 0) {
        b = NpcActor_getAngleTo(this, a);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, b, 0);
    return TRUE;
}

BOOL SpNpcBlanca::mainAct04() { return TRUE; }

void SpNpcBlancaTalk::onTaskDone() {
    if (resultHandler != 0) {
        (this->*resultHandler)();
        resultHandler = *(Fn *)__ptmf_null;
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern u32 *data_ov074_022724e4;
extern u32 sSpNpcBlancaFaceMaterialName;
extern u8 sSpNpcBlancaModelPath[];
extern Unk_ov074_SceneEntry sSpNpcBlancaProfile;
extern void *data_ov074_022724e8[2];
extern void *data_ov074_022724f0[2];
extern void *data_ov074_022724f8[2];
extern void *data_ov074_02272500[2];
extern void *data_ov074_02272508[2];
extern void *data_ov074_02272510[2];
extern void *data_ov074_02272518[2];
extern void *data_ov074_02272520[2];
extern void *data_ov074_02272528[2];
extern void *data_ov074_02272530[2];
extern void *data_ov074_02272538[2];
extern Unk_ov074_02272130_Ent sSpNpcBlancaActTable[5];
extern FxVec3 sSpNpcBlancaSidestepOffsets[2];


















Unk_ov074_Col data_ov074_022726e4(31, 20, 20, 31);
void *data_ov074_022724f8[2] = {(void *)_ZN11SpNpcBlanca9mainAct00Ev, 0};
Unk_ov074_Col data_ov074_022726f4(20, 20, 31, 31);
Unk_ov074_Col data_ov074_022726e0(31, 31, 20, 31);
void *data_ov074_022724f0[2] = {(void *)_ZN15SpNpcBlancaTalk15onConceptChosenEv, 0};
Unk_ov074_Col data_ov074_022726f8(20, 31, 20, 31);
Unk_ov074_SceneEntry sSpNpcBlancaProfile = {SpNpcBlanca_Create, 0x67, 0x6d, 2, 0x5000, 0x5000, 0x3e800};
Unk_ov074_Col data_ov074_022726e8(20, 31, 31, 31);
Unk_ov074_Col data_ov074_022726f0(20, 24, 24, 31);
void *data_ov074_02272518[2] = {(void *)_ZN11SpNpcBlanca10setupAct03Ev, 0};
u32 sSpNpcBlancaFaceMaterialName = 0x66;
void *data_ov074_02272520[2] = {(void *)_ZN11SpNpcBlanca9mainAct03Ev, 0};
void *data_ov074_02272528[2] = {(void *)_ZN11SpNpcBlanca10setupAct04Ev, 0};
void *data_ov074_02272530[2] = {(void *)_ZN15SpNpcBlancaTalk11onFaceDrawnEv, 0};
void *data_ov074_02272508[2] = {(void *)_ZN11SpNpcBlanca10setupAct02Ev, 0};
void *data_ov074_02272500[2] = {(void *)_ZN11SpNpcBlanca9mainAct01Ev, 0};
u8 sSpNpcBlancaModelPath[] = "npc_sp/model/mka.nsbmd";
Unk_ov074_02272130_Ent sSpNpcBlancaActTable[5] = {
    {PM(02272538), PM(022724f8)},
    {NULL, PM(02272500)},
    {PM(02272508), PM(02272510)},
    {PM(02272518), PM(02272520)},
    {PM(02272528), PM(022724e8)},
};
FxVec3 sSpNpcBlancaSidestepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_ov074_02272538[2] = {(void *)_ZN11SpNpcBlanca10setupAct00Ev, 0};
void *data_ov074_022724e8[2] = {(void *)_ZN11SpNpcBlanca9mainAct04Ev, 0};
u32 *data_ov074_022724e4 = &sSpNpcBlancaFaceMaterialName;
void *data_ov074_02272510[2] = {(void *)_ZN11SpNpcBlanca9mainAct02Ev, 0};

void SpNpcBlancaTalk::setResultHandler(s32 idx) {
    static Fn tbl[2] = {*(Fn *)data_ov074_02272530, *(Fn *)data_ov074_022724f0};
    resultHandler = tbl[idx];
}

void SpNpcBlancaTalk::onFaceDrawn() {
    void *p = unk_3c;
    u8 buf[1];
    buf[0] = 0xf;
    if (MenuCtrl_IsResultOk() != 0) {
        buf[0] = 0x1c;
        owner->faceTexture.apply(&owner->model);
    }
    TalkWindowState_setNextMessage(p, buf, ((char *)"sp_npc_mysterycat"));
}

BOOL SpNpcBlancaTalk::onConceptChosen() {
    if (MenuCtrl_IsResultOk() != 0) {
        void *p = unk_3c;
        u8 *const g = gSaveBlancaFace;
        u8 buf[1];
        BlancaFaceRecord_setConcept(g, Impression_Evaluate(PlayerData_GetCurrent(), 0, 0));
        BlancaFaceRecord_setState(g, 3);
        buf[0] = Random_GlobalBelow(3) + 5;
        Talk_CheckAndSetPlayerFlag(0x2b, 1);
        TalkWindowState_setNextMessage(p, buf, ((char *)"sp_npc_mysterycat"));
    }
end:;
}

SpNpcBlancaTalk::SpNpcBlancaTalk() {}

SpNpcBlancaTalk::~SpNpcBlancaTalk() {}

void SpNpcBlancaTalk::attachOwner(SpNpcBlanca *o) {
    vfunc_08();
    owner = o;
}

void SpNpcBlancaTalk::start(TalkStartMsg *out) {
    u8 buf[1];
    Unk_ov074_02271564_A l;
    Unk_ov074_02271564_B m;
    u32 obj[9];

    out->msgKey = "sp_npc_mysterycat";
    u8 *const g = gSaveBlancaFace;
    BlancaFaceRecord_getPattern(g);
    l = *Pattern_getInfo();
    m = *PatternInfo_getAuthor(&l);
    if (Random_GlobalBelow(2) == 0 || Talk_CheckAndSetPlayerFlag(0x2b, 0) == 0) {
        out->msgIndex = 3;
    } else {
        if (PlayerId_isValid(&m) != 0) {
            PlayerData *p = PlayerData_GetCurrent();
            u16 *q = (u16 *)p->getPlayerId();
            if (m.a == q[0] && memcmp(m.b, q + 1, 8) == 0 && PlayerId_equals(&m, q) != 0) {
                out->msgIndex = Random_GlobalBelow(4) + 0x18;
                goto next;
            }
        }
        out->msgIndex = Random_GlobalBelow(4) + 0x11;
    }
next:
    func_0206267c(obj);
    if (PlayerId_isValid(&m) != 0) {
        setPlayerNameSlot((u32)&m, 1);
        setTownNameSlot(PlayerId_GetTownId(&m), 0);
        buf[0] = BlancaFaceRecord_getConcept(g);
        TalkWindowState_setSlotFromString(unk_3c, 2, buf, ((char *)"st_impress"));
        PatternInfo_getTitle(&l, obj);
        TalkWindowState_setSlot(unk_3c, 3, obj);
    }
    func_0206260c(obj);
    func_020942c8(&m);
    func_02072064(&l);
}

void SpNpcBlancaTalk::onMessageEnd() {
    u8 buf[1];
    char *name = ((char *)"sp_npc_mysterycat");
    s32 t = 0xff;

    switch (msgIndex) {
    case 9:
    case 10:
    case 11:
    case 12:
        t = 0xd;
        break;
    case 13:
        break;
    case 14:
        owner->faceTexture.apply(&owner->model);
        setSubSceneKind(3, 0);
        openSubScene(2);
        setResultHandler(0);
        break;
    case 0x1c:
        setSubSceneKind(0x14, 0);
        openSubScene(2);
        setResultHandler(1);
        break;
    }
    if (t != 0xff) {
        buf[0] = t;
        TalkWindowState_setNextMessage(unk_3c, buf, name);
    }
}

void SpNpcBlancaTalk::onChoice() {
    u8 buf[1];
    Unk_ov074_02271564_A l;
    Unk_ov074_02271564_B m;
    s32 t;
    s32 r5;

    getChoiceList();
    r5 = ChoiceList_getResult();
    BlancaFaceRecord_getPattern(gSaveBlancaFace);
    l = *Pattern_getInfo();
    m = *PatternInfo_getAuthor(&l);
    char *name = ((char *)"sp_npc_mysterycat");
    t = 0xff;
    switch (msgIndex) {
    case 3:
        if (r5 == 0) {
            if (PlayerId_isValid(&m) != 0) {
                PlayerData *p = PlayerData_GetCurrent();
                u16 *q = (u16 *)p->getPlayerId();
                if (m.a == q[0] && memcmp(m.b, q + 1, 8) == 0 && PlayerId_equals(&m, q) != 0) {
                    t = 0xa;
                    break;
                }
            }
            t = 9;
        } else {
            if (PlayerId_isValid(&m) != 0) {
                PlayerData *p = PlayerData_GetCurrent();
                u16 *q = (u16 *)p->getPlayerId();
                if (m.a == q[0] && memcmp(m.b, q + 1, 8) == 0 && PlayerId_equals(&m, q) != 0) {
                    t = 0xc;
                    break;
                }
            }
            t = 0xb;
        }
        break;
    case 0xd:
        if (r5 != 0) {
            t = 0xe;
        }
        break;
    }
    if (t != 0xff) {
        buf[0] = t;
        TalkWindowState_setNextMessage(unk_3c, buf, name);
    }
    func_020942c8(&m);
    func_02072064(&l);
}

BOOL SpNpcBlanca::vfunc_48(void *) {
    BOOL r = FALSE;
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcBlanca::vfunc_4c(u32 a, u8) {
    switch (a) {
    case 0:
        SpNpcBlanca_ChangeAct(this, 0);
        break;
    case 3:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        SpNpcBlanca_ChangeAct(this, 4);
        break;
    case 8:
        SpNpcBlanca_ChangeAct(this, 2);
        break;
    }
}

SpNpcBlancaFaceTexture::SpNpcBlancaFaceTexture() {}

// ---------------------------------------------------------------------------------------------------------------------
SpNpcBlancaFaceTexture::~SpNpcBlancaFaceTexture() {}

void SpNpcBlancaFaceTexture::init(u32 *a, void *b) {
    texBuffer = Heap_Alloc(a, ClothTex_GetBufferSize());
    apply(b);
}

u32 SpNpcBlancaFaceTexture::getTextureData() {
    u32 r = 0;
    if (texBuffer != 0) {
        r = ClothTex_GetTexThunk(texBuffer);
    }
    return r;
}

void SpNpcBlancaFaceTexture::apply(void *e) {
    Unk_ov074_02271450_Ent *ent = (Unk_ov074_02271450_Ent *)e;
    void *t;
    u32 h;
    t = BlancaFaceRecord_getPattern(gSaveBlancaFace);
    if (t != 0) {
        if (ClothTex_LoadPatternThunk(texBuffer, t) != 0) {
            h = getTextureData();
            if (h != 0) {
                MatTexVramTask_request(&texTask, ent->unk_5c, data_ov074_022724e4, h, 0, 0);
            }
        }
    }
}

void SpNpcBlancaFaceTexture::release(u32 *p) {
    texTask.cancel();
    if (texBuffer != 0) {
        Heap_Free(p, texBuffer);
    }
}


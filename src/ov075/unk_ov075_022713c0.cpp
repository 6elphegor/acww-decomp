// mwcc-flags: -str reuse
#include "types.h"

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
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

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define Unk_020d7710_requestCloseWindow _ZN12Unk_020d771018requestCloseWindowEj
#define Unk_020d7710_requestReopenWindow _ZN12Unk_020d771019requestReopenWindowEv
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define Unk_02015b8c_getAnimId _ZN12Unk_02015b8c9getAnimIdEj
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcLookAt_getObstacleBits _ZN9NpcLookAt15getObstacleBitsEv
#define func_0201acfc _ZN12Unk_0201acf813func_0201acfcEv
#define NpcMoveCtrl_hasArrived _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei
#define NpcMoveCtrl_hasNextLeg _ZN11NpcMoveCtrl10hasNextLegEv
#define NpcMoveCtrl_resetDestination _ZN11NpcMoveCtrl16resetDestinationEv
#define NpcMoveCtrl_setDestination _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3
#define NpcMoveCtrl_getDestination _ZN11NpcMoveCtrl14getDestinationEv
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define PeteFallState_hasFallPos _ZN13PeteFallState10hasFallPosEv
#define PeteFallState_getPos _ZN13PeteFallState6getPosEP17Unk_02086ec4_Vec3
#define PeteFallState_clear _ZN13PeteFallState5clearEv
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleToPlayer _ZN8NpcActor16getAngleToPlayerEj
#define Unk_ov075_0227188c_CallA() NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_

class SpNpcPete;
class SpNpcPeteTalk;
struct TalkStartMsg;

struct Unk_ov075_Vec3 {
    s32 x, y, z;
};

struct Unk_ov075_Vec4 {
    s32 v[4];
};

struct TalkStartMsg {
    const char *unk_00;
    u8 unk_04;
};

extern "C" {
void *PlayerData_GetCurrent();
s32 ChoiceList_getResult();
s32 Unk_02097ff4_testFlag(void *p, s32 a);
s32 Unk_02097ff4_setFlag(void *p, s32 a);
s32 func_02063b8c(s32 a);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void Unk_020d7710_requestCloseWindow(void *self, s32 a);
s32 Unk_020d7710_requestReopenWindow(void *self);
BOOL NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTalk(void *self, s32 a, s32 b);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
void TalkRequest_SetTargetDone(void *self);
void NpcActionCtrl_requestPlayAnim(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 NpcActionCtrl_requestAction(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void NpcMoveAnimSet_setStandAnim(void *p, s32 v);
s32 Unk_02015b8c_getAnimId(void *p, s32 a);
s32 NpcActionCtrl_isActionDone(void *p);
s32 NpcActionCtrl_getAction(void *p);
void NpcLookAt_setTarget(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0201acfc(void *p);
s32 NpcLookAt_getObstacleBits(void *p);
s32 NpcMoveCtrl_hasArrived(void *p, void *q, s32 a);
s32 NpcMoveCtrl_hasNextLeg(void *p);
void NpcMoveCtrl_resetDestination(void *p);
void NpcMoveCtrl_setDestination(void *p, void *q);
Unk_ov075_Vec3 *NpcMoveCtrl_getDestination(void *p);
void Npc_RotateOffsetXZ(void *out, void *a, void *b, s32 c);
s32 Npc_IsPosBlocked(void *p);
s32 Math_AngleXZ(void *a, void *b);
BOOL NpcActor_IsFrontAngle(s16 a);
u32 NpcActor_getPlayerActor(void *p, s32 n);
u32 NpcActor_getAngleToPlayer(void *p, s32 n);
s32 NpcActor_getAngleTo(void *self, void *a);
void func_020e7518(void *p);
s32 Random_Next(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *out, void *in);
s32 TownMap_IsPosWalkable(void *v, s32 a);
void Unk_02013474_enableFootsteps(void *p);
void *TownSessionState_Get();
void *TownSessionState_GetPeteFall(void *p);
s32 PeteFallState_hasFallPos(void *p);
void PeteFallState_getPos(void *p, void *q);
void PeteFallState_clear(void *p);
s32 EventAnnounce_IsBusy();
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gVec3Zero[];
extern u8 gRandom[];
extern void *gCamera;
extern Unk_ov075_Vec3 gCameraLookAt;
extern s16 data_02135f44[];

void SpNpcPete_ChangeAct(void *self, s32 state);
s32 SpNpcPete_IsInFocusBox(void *self, void *a, void *b);
}

struct TalkWindowState {
    u32 unk_00;
    s32 unk_04;
    void setNextMessage(u8 *a, void *b);
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
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
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    void getChoiceList();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcPeteTalk : public SpNpcTalkRequest {
public:
    SpNpcPeteTalk();
    virtual ~SpNpcPeteTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void attachOwner(void *owner);
    void scriptWakeUp();
    void setScript(s32 v);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ u8 *unk_b4;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[9];
    u8 unk_09;
    u8 pad_0a[2];
    Unk_020135e4();
    ~Unk_020135e4();
};
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    s32 unk_68, unk_6c, unk_70;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);

    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    CollisionState unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
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
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class SpNpcPete : public SpNpcActor {
public:
    SpNpcPete() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 vfunc_a8();

    BOOL mainAct03();
    BOOL mainAct01();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL setupAct01();
    BOOL mainAct05();
    BOOL tryAvoidObstacle();
    BOOL steerAroundObstacle();
    BOOL findSidestepPos(Unk_ov075_Vec3 *out, void *p);
    BOOL pickWanderTarget(s32 *px, s32 *pz);
    s32 isInCameraBox();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct00();
    BOOL setupAct00();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcPeteTalk unk_658;
    /* 0x710 */ u32 unk_710;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 unk_715;
};

struct Unk_ov075_02271e78_Ent {
    BOOL (SpNpcPete::*enter)();
    BOOL (SpNpcPete::*exit)();
};

struct Unk_ov075_022722f0_Ent {
    void (SpNpcPeteTalk::*fn)();
    u8 kind;
};

struct Unk_ov075_SceneEntry {
    SpNpcPete *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov075_Col {
    u8 r, g, b, a;
    Unk_ov075_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

extern "C" {
SpNpcPete *SpNpcPete_Create();
void _ZN13SpNpcPeteTalk12scriptWakeUpEv();
extern void *data_ov075_02272280[2];
void _ZN9SpNpcPete10setupAct00Ev();
extern void *data_ov075_02272298[2];
void _ZN9SpNpcPete9mainAct00Ev();
extern void *data_ov075_022722a0[2];
void _ZN9SpNpcPete10setupAct01Ev();
extern void *data_ov075_022722b0[2];
void _ZN9SpNpcPete9mainAct01Ev();
extern void *data_ov075_022722b8[2];
void _ZN9SpNpcPete10setupAct02Ev();
extern void *data_ov075_02272288[2];
void _ZN9SpNpcPete9mainAct02Ev();
extern void *data_ov075_02272260[2];
void _ZN9SpNpcPete9mainAct03Ev();
extern void *data_ov075_02272268[2];
void _ZN9SpNpcPete10setupAct04Ev();
extern void *data_ov075_02272270[2];
void _ZN9SpNpcPete9mainAct04Ev();
extern void *data_ov075_02272278[2];
void _ZN9SpNpcPete10setupAct05Ev();
extern void *data_ov075_02272290[2];
void _ZN9SpNpcPete9mainAct05Ev();
extern void *data_ov075_022722a8[2];
extern u8 sSpNpcPeteModelPath[];
extern u8 sSpNpcPeteTexturePath[];
extern Unk_ov075_Col data_ov075_0227248c;
extern Unk_ov075_Col data_ov075_02272494;
extern Unk_ov075_Col data_ov075_02272490;
extern Unk_ov075_Col data_ov075_02272484;
extern Unk_ov075_Col data_ov075_02272488;
extern Unk_ov075_Col data_ov075_02272480;
extern Unk_ov075_022722f0_Ent sSpNpcPeteTalkScripts[2];
extern u8 data_ov075_022722f8[];
extern Unk_ov075_02271e78_Ent sSpNpcPeteActTable[6];
extern FxVec3 sSpNpcPeteSidestepOffsets[2];
extern Unk_ov075_SceneEntry sSpNpcPeteProfile;
}

typedef BOOL (SpNpcPete::*Unk_ov075_Fn)();
typedef void (SpNpcPeteTalk::*Unk_ov075_InnerFn)();
#define PM(i) (*(Unk_ov075_Fn *)data_ov075_##i)

void *data_ov075_02272278[2] = {(void *)_ZN9SpNpcPete9mainAct04Ev, 0};
u8 sSpNpcPeteTexturePath[] = "npc_sp/model/plb_tex.nsbtx";
void *data_ov075_02272270[2] = {(void *)_ZN9SpNpcPete10setupAct04Ev, 0};
Unk_ov075_SceneEntry sSpNpcPeteProfile = {SpNpcPete_Create, 0x54, 0x5b, 2, 0x5000, 0x5000, 0x3e800};
void *data_ov075_02272260[2] = {(void *)_ZN9SpNpcPete9mainAct02Ev, 0};
Unk_ov075_Col data_ov075_0227248c(31, 20, 20, 31);
Unk_ov075_Col data_ov075_02272494(20, 20, 31, 31);
u8 sSpNpcPeteModelPath[] = "npc_sp/model/plb.nsbmd";
Unk_ov075_Col data_ov075_02272490(31, 31, 20, 31);
Unk_ov075_Col data_ov075_02272484(20, 31, 20, 31);
Unk_ov075_Col data_ov075_02272488(20, 31, 31, 31);
void *data_ov075_022722a8[2] = {(void *)_ZN9SpNpcPete9mainAct05Ev, 0};
void *data_ov075_022722b0[2] = {(void *)_ZN9SpNpcPete10setupAct01Ev, 0};
void *data_ov075_02272298[2] = {(void *)_ZN9SpNpcPete10setupAct00Ev, 0};
void *data_ov075_02272290[2] = {(void *)_ZN9SpNpcPete10setupAct05Ev, 0};
void *data_ov075_022722a0[2] = {(void *)_ZN9SpNpcPete9mainAct00Ev, 0};
Unk_ov075_Col data_ov075_02272480(20, 24, 24, 31);
Unk_ov075_022722f0_Ent sSpNpcPeteTalkScripts[2] = {
    {NULL, 0},
    {*(Unk_ov075_InnerFn *)data_ov075_02272280, 1},
};
Unk_ov075_02271e78_Ent sSpNpcPeteActTable[6] = {
    {PM(02272298), PM(022722a0)},
    {PM(022722b0), PM(022722b8)},
    {PM(02272288), PM(02272260)},
    {NULL, PM(02272268)},
    {PM(02272270), PM(02272278)},
    {PM(02272290), PM(022722a8)},
};
FxVec3 sSpNpcPeteSidestepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_ov075_02272288[2] = {(void *)_ZN9SpNpcPete10setupAct02Ev, 0};
void *data_ov075_02272280[2] = {(void *)_ZN13SpNpcPeteTalk12scriptWakeUpEv, 0};
void *data_ov075_022722b8[2] = {(void *)_ZN9SpNpcPete9mainAct01Ev, 0};
void *data_ov075_02272268[2] = {(void *)_ZN9SpNpcPete9mainAct03Ev, 0};

extern "C" SpNpcPete *SpNpcPete_Create() {
    return new SpNpcPete();
}

BOOL SpNpcPete::vfunc_04() {
    if (SpNpcActor::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    return TRUE;
}

BOOL SpNpcPete::vfunc_00() {
    if (SpNpcActor::vfunc_00() == 0) {
        return FALSE;
    }
    if (PeteFallState_hasFallPos(TownSessionState_GetPeteFall(TownSessionState_Get())) != 0) {
        SpNpcPete_ChangeAct(this, 0);
    } else {
        SpNpcPete_ChangeAct(this, 4);
    }
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

s32 SpNpcPete::vfunc_a8() { return data_020c6cf0; }

BOOL SpNpcPete::vfunc_0c() {
    if (SpNpcActor::vfunc_0c() == 0) {
        return FALSE;
    }
    if (EventAnnounce_IsBusy() == 0) {
        PeteFallState_clear(TownSessionState_GetPeteFall(TownSessionState_Get()));
    }
    return TRUE;
}

u8 *SpNpcPete::getTexturePath() { return sSpNpcPeteTexturePath; }

u8 *SpNpcPete::getModelPath() { return sSpNpcPeteModelPath; }

BOOL SpNpcPete::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcPeteActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcPeteActTable[unk_654].exit)();
    }
    return result;
}

extern "C" void SpNpcPete_ChangeAct(void *self, s32 state) {
    SpNpcPete *o = (SpNpcPete *)self;
    BOOL ok = TRUE;
    if (sSpNpcPeteActTable[state].enter != NULL) {
        ok = (o->*sSpNpcPeteActTable[state].enter)();
    }
    if (ok) {
        o->unk_654 = state;
    }
}

BOOL SpNpcPete::setupAct00() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0xef, 1, data_020c6cc8, 0);
    NpcMoveAnimSet_setStandAnim(&unk_2a0, 0xef);
    return TRUE;
}

BOOL SpNpcPete::mainAct00() {
    return TRUE;
}

BOOL SpNpcPete::setupAct04() {
    unk_558.unk_09 = 0;
    return TRUE;
}

BOOL SpNpcPete::mainAct04() {
    void *r5 = TownSessionState_GetPeteFall(TownSessionState_Get());
    if (PeteFallState_hasFallPos(r5) != 0) {
        PeteFallState_getPos(r5, &unk_5c);
        Unk_ov075_Vec3 *s = (Unk_ov075_Vec3 *)&unk_5c;
        Unk_ov075_Vec3 *d = (Unk_ov075_Vec3 *)&unk_68;
        d->x = unk_5c;
        d->y = s->y;
        d->z = s->z;
        unk_558.unk_09 = 1;
        SpNpcPete_ChangeAct(this, 0);
    }
    return TRUE;
}

BOOL SpNpcPete::setupAct05() {
    unk_715 = 0;
    NpcActionCtrl_requestAction(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    Unk_02013474_enableFootsteps(&unk_558);
    Unk_02013474_enableFootsteps(&unk_558);
    NpcLookAt_setTarget(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

extern "C" s32 SpNpcPete_IsInFocusBox(void *self, void *a, void *b) {
    Unk_ov075_Vec3 *pa = (Unk_ov075_Vec3 *)a;
    Unk_ov075_Vec3 *pb = (Unk_ov075_Vec3 *)b;
    s32 r = 0;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = pa->x;
    s32 bx = pb->x;
    if (bx > ax - 0x10000 && bx < ax + 0x10000) {
        f1 = TRUE;
    }
    if (f1) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz > az - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz < az + 0xa000) {
            r = 1;
        }
    }
    return r;
}

s32 SpNpcPete::isInCameraBox() {
    Unk_ov075_Vec3 *p = (Unk_ov075_Vec3 *)&unk_5c;
    s32 r = 0;
    if (gCamera != 0) {
        Unk_ov075_Vec3 v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = SpNpcPete_IsInFocusBox(this, &v, p);
    }
    return r;
}

BOOL SpNpcPete::pickWanderTarget(s32 *px, s32 *pz) {
    BOOL r = FALSE;
    Unk_ov075_Vec3 v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_64;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r) != 0) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcPete::findSidestepPos(Unk_ov075_Vec3 *out, void *p) {
    BOOL r = FALSE;
    Unk_ov075_Vec4 t;
    Npc_RotateOffsetXZ(&t, &unk_5c, p, unk_94);
    if (Npc_IsPosBlocked(&t) != 1) {
        out->x = t.v[0];
        out->y = t.v[1];
        out->z = t.v[2];
        r = TRUE;
    }
    return r;
}

BOOL SpNpcPete::steerAroundObstacle() {
    void *a = &unk_564;
    void *b = &unk_350;
    s32 r6 = NpcLookAt_getObstacleBits(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov075_Vec3 t;
    if (NpcMoveCtrl_hasArrived(b, this, 1) == 0) {
        switch (r6) {
        case 3:
            NpcActionCtrl_requestAction(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (findSidestepPos(&t, &sSpNpcPeteSidestepOffsets[1])) {
                NpcMoveCtrl_setDestination(b, &t);
            } else {
                NpcActionCtrl_requestAction(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (findSidestepPos(&t, &sSpNpcPeteSidestepOffsets[0])) {
                NpcMoveCtrl_setDestination(b, &t);
            } else {
                NpcActionCtrl_requestAction(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (NpcMoveCtrl_hasNextLeg(b)) {
            NpcMoveCtrl_resetDestination(b);
        }
    }
    return r;
}

BOOL SpNpcPete::tryAvoidObstacle() {
    if (unk_98 != 0) {
        if (steerAroundObstacle()) {
            return TRUE;
        }
    }
    return FALSE;
}


BOOL SpNpcPete::mainAct05() {
    void *r4 = &unk_564;
    s32 r6 = isInCameraBox();
    func_020e7518(&unk_715);
    if (r6 != 0) {
        if (tryAvoidObstacle() == 0) {
            if (NpcActionCtrl_isActionDone(r4) != 0) {
                if (func_0201acfc(&unk_3aa) == 2) {
                    Unk_ov075_0227188c_CallA();
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_ov075_Vec3 a;
                    a.x = ((Unk_ov075_Vec3 *)gVec3Zero)->x;
                    a.y = ((Unk_ov075_Vec3 *)gVec3Zero)->y;
                    a.z = ((Unk_ov075_Vec3 *)gVec3Zero)->z;
                    if (pickWanderTarget(&a.x, &a.z) != 0) {
                        r6 = Math_AngleXZ(&unk_5c, &a);
                        if (NpcActor_IsFrontAngle((s16)(r6 - unk_8e)) != 0) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            NpcActionCtrl_requestAction(r4, r6, 1, a.x, a.z, 0, 0, 0, 0, data_020c6cc8, 0);
                            unk_715 = 100;
                        } else {
                            NpcActionCtrl_requestAction(r4, 4, 1, a.x, a.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_715 = 80;
                        }
                    } else {
                        Unk_ov075_0227188c_CallA();
                    }
                } else {
                    Unk_ov075_0227188c_CallA();
                }
            } else {
                if (unk_98 != 0) {
                    if (NpcActionCtrl_getAction(&unk_564) == 1 || NpcActionCtrl_getAction(&unk_564) == 2 || NpcActionCtrl_getAction(&unk_564) == 4) {
                        if (unk_715 == 0) {
                            Unk_ov075_0227188c_CallA();
                        } else {
                            Unk_ov075_Vec3 b;
                            Unk_ov075_Vec3 *q = NpcMoveCtrl_getDestination(&unk_350);
                            b.x = q->x;
                            b.y = q->y;
                            b.z = q->z;
                            if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&unk_5c, &b) - unk_8e)) == 0) {
                                Unk_ov075_0227188c_CallA();
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL SpNpcPete::setupAct01() {
    void *r4 = unk_658.func_02015aac();
    s32 r6 = unk_8e;
    if (unk_714 != 0) {
        NpcLookAt_setTarget(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
        unk_4cc.unk_1c &= ~2;
    }
    if (r4 != 0) {
        r6 = NpcActor_getAngleTo(this, r4);
    }
    NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, r6, 0);
    return TRUE;
}

BOOL SpNpcPete::mainAct01() {
    return TRUE;
}

BOOL SpNpcPete::setupAct02() {
    if (unk_714 == 0) {
        NpcTalkCtrl_requestTalk(&unk_618, 0, 0);
    }
    return TRUE;
}

BOOL SpNpcPete::mainAct02() {
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        SpNpcPete_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcPete::mainAct03() {
    return TRUE;
}

void SpNpcPeteTalk::vfunc_80() {
    s32 i = unk_ac * 12;
    if (((u8 *)&sSpNpcPeteTalkScripts[0].kind)[i] != 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)sSpNpcPeteTalkScripts + i);
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void SpNpcPeteTalk::vfunc_84() {
    s32 i = unk_ac * 12;
    if (((u8 *)&sSpNpcPeteTalkScripts[0].kind)[i] == 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)sSpNpcPeteTalkScripts + i);
        if (e->fn != 0) {
            (this->*e->fn)();
            setScript(0);
        }
    }
}

void SpNpcPeteTalk::setScript(s32 v) {
    unk_ac = v;
    unk_b0 = 0;
}

void SpNpcPeteTalk::scriptWakeUp() {
    u8 *o;
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            NpcActionCtrl_requestPlayAnim(unk_b4 + 0x564, 2, 0xd5, 1, data_020c6cc8, 0);
            NpcMoveAnimSet_setStandAnim(unk_b4 + 0x2a0, 0);
            unk_b0 = unk_b0 + 1;
        }
        break;
    case 1:
        if (Unk_02015b8c_getAnimId(unk_b4 + 0x334, 0) == 0xd5) {
            if (NpcActionCtrl_isActionDone(unk_b4 + 0x564) != 0) {
                u32 r = NpcActor_getAngleToPlayer(unk_b4, 4);
                NpcActionCtrl_requestAction(unk_b4 + 0x564, 3, 2, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
                unk_b0 = unk_b0 + 1;
            }
        }
        break;
    case 2:
        if (NpcActionCtrl_getAction(unk_b4 + 0x564) == 3) {
            if (NpcActionCtrl_isActionDone(unk_b4 + 0x564) != 0) {
                void *p = PlayerData_GetCurrent();
                u8 buf[2];
                unk_b4[0x714] = 1;
                Unk_020d7710_requestReopenWindow(this);
                if (Unk_02097ff4_testFlag(p, 6) == 0) {
                    Unk_02097ff4_setFlag(p, 6);
                    Talk_CheckAndSetPlayerFlag(0x12, 1);
                    buf[0] = 0x10;
                    unk_3c->setNextMessage(buf, (void *)"sp_npc_mpelican");
                } else {
                    Talk_CheckAndSetPlayerFlag(0x12, 1);
                    buf[1] = func_02063b8c(12);
                    unk_3c->setNextMessage(&buf[1], (void *)"sp_npc_mpelican");
                }
                setScript(0);
            }
        }
        break;
    }
}

SpNpcPeteTalk::SpNpcPeteTalk() {}

SpNpcPeteTalk::~SpNpcPeteTalk() {}

void SpNpcPeteTalk::attachOwner(void *owner) {
    vfunc_08();
    unk_b4 = (u8 *)owner;
}

void SpNpcPeteTalk::vfunc_78(TalkStartMsg *out) {
    out->unk_04 = 0x1a;
    if (unk_b4[0x714] != 0) {
        if (Unk_02097ff4_testFlag(PlayerData_GetCurrent(), 6) != 0) {
            out->unk_04 = func_02063b8c(4) + 12;
        }
    }
    out->unk_00 = "sp_npc_mpelican";
}

void SpNpcPeteTalk::vfunc_14() {
    PlayerData_GetCurrent();
    if (unk_1e == 0x1a) {
        Unk_020d7710_requestCloseWindow(this, 0);
        setScript(1);
    }
}

void SpNpcPeteTalk::vfunc_18() {
    getChoiceList();
    s32 r = ChoiceList_getResult();
}

BOOL SpNpcPete::vfunc_48() {
    BOOL r = FALSE;
    if (unk_558.unk_09 != 0) {
        if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
            r = TRUE;
        }
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcPete::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        SpNpcPete_ChangeAct(this, 2);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(NpcActor_getPlayerActor(this, 4));
        if (unk_714 != 0) {
            SpNpcPete_ChangeAct(this, 1);
        }
        break;
    case 8:
        if (unk_714 == 0) {
            SpNpcPete_ChangeAct(this, 0);
        } else {
            SpNpcPete_ChangeAct(this, 5);
        }
        break;
    }
}


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

class SpNpcLyle;
class SpNpcLyleTalk;

struct Unk_0201bc1c;

struct Unk_ov071_02271f54_Vec {
    s32 x, y, z;
};

struct Unk_ov071_02271f54_Tmp {
    u32 v[4];
};

struct TalkStartMsg {
    const char *unk_00;
    u8 unk_04;
};

// Message sent to the scene (func_02067a84): id byte, then two halfwords.
struct Unk_ov071_0227160c_Msg {
    u8 id;
    u8 pad;
    u16 a;
    u16 b;
};

struct Unk_ov071_02271ca0_Vec {
    s32 x, y, z;
};

struct Unk_0209cf88_Obj {
    u32 pad[2];
};

struct Unk_ov071_0227297c_Ent {
    const char *unk_00;
    u32 unk_04;
};

struct Unk_ov071_022726c4_Ent;

struct ChoiceList {
    s32 getResult();
};

// 12-byte vector with a trivial destructor (main 0x02000c8c, renamed to its D1 name)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern s32 data_020c6cf0;
extern s32 data_020c6d1c;
extern u32 gVec3Zero[];
extern u32 gCamera;
extern Unk_ov071_02271f54_Vec gCameraLookAt;
extern u32 gRandom;
extern u8 gSaveData[];
extern s16 data_02135f44[];
extern u32 __ptmf_null[];

void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff48testFlagEj(void *h, s32 n);
void _ZN12Unk_02097ff47setFlagEj(void *h, s32 n);
void *_ZN10PlayerData14getSpNpcRecordEv(void *h);
s32 PlayerSpNpcRecord_GetInsuranceDate(void *h);
void _ZN20PlayerDailyTalkFlags10stampTodayEv(void *h);
void _ZN17PlayerSpNpcRecord17addInsuranceClaimEv(void *h);
void Clock_GetDate(void *p);
s32 Date_DaysBetween(void *p, s32 v);
void Hud_Hide();
void Hud_Show();
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 func_02063b8c(u32 n);
void MI_CpuFill8(void *dst, s32 v, s32 n);
void func_02040144(s32 a, s32 b);
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
u32 Pocket_GetItem();
BOOL Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
void Pocket_RemoveItem(s32 n);
s32 MenuCtrl_BuildPocketMask(void *cb);
s32 NpcActor_CanPlayerPay(void *owner, s32 n);
void NpcActor_ChargePlayer(void *owner, s32 n);
u32 func_020951ec(s32 n);
s32 Math_AngleXZ(void *a, void *b);
BOOL NpcActor_IsFrontAngle(s16 a);
u32 Random_Next(void *p);

void _ZN12Unk_0201442015requestKeepItemEv(void *self);
void _ZN12Unk_020d771015setPocketFilterEjjj(void *self, u32 cb, u32 b, u32 c);
void _ZN12Unk_020d771012openSubSceneEi(void *self, s32 a);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *self, u16 *p, u32 a, u32 b, u32 c);
void *_ZN11NpcMoveCtrl14getDestinationEv(void *self);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *self, s32 a, s32 b, u32 c, u32 d, u32 e);
void _ZN12Unk_0201347416disableFootstepsEv(void *self);
void _ZN12Unk_0201347415enableFootstepsEv(void *self);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *self);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *self, void *scene, s32 v);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *self);
void _ZN11NpcMoveCtrl16resetDestinationEv(void *self);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *self, Unk_ov071_02271f54_Vec *v);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *self, Unk_ov071_02271f54_Vec *v);
void _ZN11NpcMoveCtrl14setSpeedPresetEiiii(void *self, s32 a, s32 b, s32 c, s32 d);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, u32 *v, s32 d, s32 e, u8 f);
s32 _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
s32 _ZN8NpcActor13getDistanceToEPS_(void *self, void *p);
s32 _ZN8NpcActor18getRelativeAngleToEPS_(void *self, void *p);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN10VisitorPos13pickRandomPosEv();

void Npc_RotateOffsetXZ(Unk_ov071_02271f54_Tmp *t, void *pos, void *p, s32 ang);
BOOL Npc_IsPosBlocked(Unk_ov071_02271f54_Tmp *t);
void TalkRequest_SetTargetDone(void *self);
s32 func_020e96a4(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *a, void *b);
BOOL TownMap_IsPosWalkable(void *a, s32 b);
BOOL func_02040c88();
void *TownSessionState_Get();
void TownSessionState_GetVisitorPos(void *p);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *self, s32 a, s32 b);
BOOL SpNpcLyle_IsForgedPainting(u16 *p, s32 x);
}

struct TalkWindowState {
    u32 unk_00;
    u32 unk_04;
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
    virtual void vfunc_88();
    void setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e);
    void *func_02015aac();
    void func_02015ab0(u32 p);
    ChoiceList *getChoiceList();
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
    void requestCloseWindow(u32 a);
    s32 requestReopenWindow();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_88();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

typedef void (SpNpcLyleTalk::*Unk_ov071_02272ba8_Fn)();

// Menu-state sub-object at +0x658 of the scene (vtable 0x02272ba8)
class SpNpcLyleTalk : public SpNpcTalkRequest {
public:
    SpNpcLyleTalk();
    virtual ~SpNpcLyleTalk();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_88();

    void attachOwner(SpNpcLyle *o);
    void scriptCloseItemSelect();
    void onClaimItemChosen();
    void setNextScript(s32 idx);
    void setScript(s32 idx);
    void getScript(Unk_ov071_02272ba8_Fn *out, s32 idx);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ SpNpcLyle *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 pad_b5[3];
    /* 0xb8 */ Unk_ov071_02272ba8_Fn unk_b8;
    /* 0xc0 */ Unk_ov071_02272ba8_Fn unk_c0;
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
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
};
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
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    BOOL isActionDone();
    s32 getAction();
    void requestPlayAnim(s32 a, s32 b, u32 c, u16 d, u16 e);
    void requestEmotion(s32 a, u8 b, u16 c);
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
    Unk_ov071_02271f54_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
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
    virtual s32 getAct0BAnimA();
    virtual s32 getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);
    u32 getAngleToPlayer(u32 n);

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

// Scene class (vtable 0x02272c38)
class SpNpcLyle : public SpNpcActor {
public:
    SpNpcLyle() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getAct0BAnimA();
    virtual s32 getAct0BAnimB();
    virtual s32 vfunc_a8();

    s32 pickUnaskedQuestion(u8 *p, s32 n);
    s32 countUnaskedQuestions(u8 *p, s32 n);
    BOOL mainAct02();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL tryAvoidObstacle();
    BOOL steerAroundObstacle();
    BOOL findSidestepPos(Unk_ov071_02271f54_Vec *out, void *unused);
    BOOL pickWanderTarget(s32 *x, s32 *z);
    BOOL setupAct03();
    BOOL mainAct01();
    BOOL setupAct01();
    void act01Step2();
    void act01Step1();
    void act01Step0();
    BOOL isPlayerInFront(s32 mask);
    BOOL isNearChaseStart();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct00();
    BOOL setupAct00();
    s32 tickTimer(s32 *p);
    BOOL isNearCameraFocus(s32 a);
    BOOL isInFocusBox(Unk_ov071_02271f54_Vec *a, Unk_ov071_02271f54_Vec *b, s32 m);
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcLyleTalk unk_658;
    u8 unk_720[5];
    u8 unk_725;
    u8 pad_726[2];
    s32 unk_728;
    s32 unk_72c;
    Character *unk_730;
    Unk_ov071_02271f54_Vec unk_734;
};

typedef BOOL (SpNpcLyle::*Unk_ov071_02272c38_Fn)();
typedef void (SpNpcLyle::*Unk_ov071_02272198_Fn)();

struct Unk_ov071_022726c4_Ent {
    Unk_ov071_02272c38_Fn enter;
    Unk_ov071_02272c38_Fn exit;
};

struct Unk_ov071_SceneEntry {
    SpNpcLyle *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern const Unk_ov071_0227297c_Ent sSpNpcLyleTopicMsgs[3];
extern u8 sSpNpcLyleKey[17];
extern u8 sSpNpcLyleModelPath[23];
extern u8 sSpNpcLyleTexturePath[27];
extern Unk_ov071_SceneEntry sSpNpcLyleProfile;
extern Unk_ov071_022726c4_Ent sSpNpcLyleActTable[6];
extern s16 sSpNpcLyleFrontAngle;
extern FxVec3 sSpNpcLyleSidestepOffsets[2];
SpNpcLyle *SpNpcLyle_Create();
extern void *data_ov071_02272ac0[2];
extern void *data_ov071_02272ac8[2];
extern void *data_ov071_02272ad0[2];
extern void *data_ov071_02272ad8[2];
extern void *data_ov071_02272ae0[2];
extern void *data_ov071_02272ae8[2];
extern void *data_ov071_02272af0[2];
extern void *data_ov071_02272af8[2];
extern void *data_ov071_02272b00[2];
extern void *data_ov071_02272b08[2];
extern void *data_ov071_02272b10[2];
extern void *data_ov071_02272b18[2];
extern void *data_ov071_02272b20[2];
extern void *data_ov071_02272b28[2];
extern void *data_ov071_02272b30[2];
extern void *data_ov071_02272b38[2];
void _ZN9SpNpcLyle10setupAct01Ev();
void _ZN9SpNpcLyle9mainAct02Ev();
void _ZN9SpNpcLyle10setupAct03Ev();
void _ZN9SpNpcLyle9mainAct00Ev();
void _ZN9SpNpcLyle10setupAct00Ev();
void _ZN9SpNpcLyle9mainAct03Ev();
void _ZN13SpNpcLyleTalk21scriptCloseItemSelectEv();
void _ZN9SpNpcLyle9mainAct04Ev();
void _ZN9SpNpcLyle10setupAct05Ev();
void _ZN9SpNpcLyle9mainAct05Ev();
void _ZN9SpNpcLyle10act01Step0Ev();
void _ZN9SpNpcLyle10act01Step1Ev();
void _ZN9SpNpcLyle10setupAct04Ev();
void _ZN9SpNpcLyle10act01Step2Ev();
void _ZN13SpNpcLyleTalk17onClaimItemChosenEv();
void _ZN9SpNpcLyle9mainAct01Ev();
}

void *data_ov071_02272b20[2] = {(void *)_ZN9SpNpcLyle10setupAct04Ev, 0};

void *data_ov071_02272ac8[2] = {(void *)_ZN9SpNpcLyle9mainAct02Ev, 0};

void *data_ov071_02272b38[2] = {(void *)_ZN9SpNpcLyle9mainAct01Ev, 0};

void *data_ov071_02272af0[2] = {(void *)_ZN13SpNpcLyleTalk21scriptCloseItemSelectEv, 0};

void *data_ov071_02272b00[2] = {(void *)_ZN9SpNpcLyle10setupAct05Ev, 0};

void *data_ov071_02272b08[2] = {(void *)_ZN9SpNpcLyle9mainAct05Ev, 0};

extern "C" SpNpcLyle *SpNpcLyle_Create() {
    return new SpNpcLyle();
}

s32 SpNpcLyle::vfunc_a8() { return data_020c6cf0 - 0x1000; }

BOOL SpNpcLyle::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&unk_350, 2, 0x200, 0x100, 0x100);
    MI_CpuFill8(unk_720, 0, 5);
    return TRUE;
}

BOOL SpNpcLyle::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x141, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&unk_ec, 0xc, 0xe);
    changeAct(4);
    return TRUE;
}

BOOL SpNpcLyle::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (func_02040c88() == 0) {
        TownSessionState_GetVisitorPos(TownSessionState_Get());
        _ZN10VisitorPos13pickRandomPosEv();
    }
    return TRUE;
}

u8 *SpNpcLyle::getTexturePath() {
    return sSpNpcLyleTexturePath;
}

u8 *SpNpcLyle::getModelPath() {
    return sSpNpcLyleModelPath;
}

s32 SpNpcLyle::getAct0BAnimA() {
    return 0xdb;
}

s32 SpNpcLyle::getAct0BAnimB() {
    return 0x6b;
}

BOOL SpNpcLyle::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcLyleActTable[unk_654].exit != NULL) {
        r = (this->*sSpNpcLyleActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcLyle::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcLyleActTable[state].enter != NULL) {
        ok = (this->*sSpNpcLyleActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcLyle::isInFocusBox(Unk_ov071_02271f54_Vec *a, Unk_ov071_02271f54_Vec *b, s32 m) {
    if (m == 0) {
        BOOL r = FALSE;
        BOOL f2 = FALSE;
        BOOL f1 = FALSE;
        if (b->x > a->x - 0x8000 && b->x < a->x + 0x8000) {
            f1 = TRUE;
        }
        if (f1) {
            if (b->z > a->z - 0xc000) {
                f2 = TRUE;
            }
        }
        if (f2) {
            if (b->z < a->z + 0x6000) {
                r = TRUE;
            }
        }
        return r;
    } else {
        BOOL r = FALSE;
        BOOL f2 = FALSE;
        BOOL f1 = FALSE;
        if (b->x > a->x - 0x10000 && b->x < a->x + 0x10000) {
            f1 = TRUE;
        }
        if (f1) {
            if (b->z > a->z - 0x1a000) {
                f2 = TRUE;
            }
        }
        if (f2) {
            if (b->z < a->z + 0xa000) {
                r = TRUE;
            }
        }
        return r;
    }
}

BOOL SpNpcLyle::isNearCameraFocus(s32 a) {
    Unk_ov071_02271f54_Vec *pos = &unk_5c;
    BOOL r = FALSE;
    if (gCamera != 0) {
        Unk_ov071_02271f54_Vec v;
        v = gCameraLookAt;
        r = isInFocusBox(&v, pos, a);
    }
    return r;
}

s32 SpNpcLyle::tickTimer(s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL SpNpcLyle::setupAct00() {
    return TRUE;
}

BOOL SpNpcLyle::mainAct00() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcLyle::setupAct05() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL SpNpcLyle::mainAct05() {
    return TRUE;
}

BOOL SpNpcLyle::isNearChaseStart() {
    if (func_020e96a4(&unk_5c, &unk_734) <= 0xc000) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcLyle::isPlayerInFront(s32 mask) {
    BOOL r = FALSE;
    if (_ZN8NpcActor13getDistanceToEPS_(this, unk_730) <= mask) {
        s32 t = _ZN8NpcActor18getRelativeAngleToEPS_(this, unk_730);
        s32 lim = sSpNpcLyleFrontAngle;
        if (t >= -lim && t <= lim) {
            r = TRUE;
        }
    }
    return r;
}

void SpNpcLyle::act01Step0() {
    if (unk_730 != NULL) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564) != 0) {
            if (isPlayerInFront(0x3000) != 0) {
                s32 id = getAct0BAnimB();
                _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&unk_564, 1, id, 0, data_020c6cc8, 0);
                unk_725 = 2;
            } else {
                Character *p = unk_730;
                Unk_ov071_02271f54_Vec &v = p->unk_5c;
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 2, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_728 = 300;
                unk_725 = 1;
            }
        }
    } else {
        changeAct(3);
    }
}

void SpNpcLyle::act01Step1() {
    Unk_0201accc *q = &unk_350;
    if (tickTimer(&unk_728) != 0 && unk_730 != NULL) {
        if (isPlayerInFront(0x3000) != 0) {
            s32 id = getAct0BAnimB();
            _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&unk_564, 1, id, 0, data_020c6cc8, 0);
            unk_725 = 2;
            unk_728 = 240;
        } else if (isNearChaseStart() != 0) {
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(q, &unk_730->unk_5c);
        } else {
            unk_72c = 200;
            changeAct(3);
        }
    } else {
        unk_72c = 200;
        changeAct(3);
    }
}

void SpNpcLyle::act01Step2() {
    if (unk_730 == NULL) {
        changeAct(3);
    } else if (tickTimer(&unk_728) == 0) {
        s32 x = _ZN8NpcActor10getAngleToEPS_(this, unk_730);
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 1, 0, 0, 0, x, 0, 0, data_020c6cc8, 0);
        unk_72c = 200;
        changeAct(3);
    } else if (isPlayerInFront(0x5000) == 0) {
        Character *p = unk_730;
        Unk_ov071_02271f54_Vec &v = p->unk_5c;
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 2, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_728 = 300;
        unk_725 = 1;
    }
}

BOOL SpNpcLyle::setupAct01() {
    unk_730 = (Character *)func_020951ec(4);
    Unk_ov071_02271f54_Vec *pv = &unk_5c;
    unk_734 = *pv;
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&unk_564, 1, 0xdf, 1, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&unk_558);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    unk_725 = 0;
    return TRUE;
}

BOOL SpNpcLyle::mainAct01() {
    static Unk_ov071_02272198_Fn tbl[3] = {*(Unk_ov071_02272198_Fn *)data_ov071_02272b10,
                                           *(Unk_ov071_02272198_Fn *)data_ov071_02272b18,
                                           *(Unk_ov071_02272198_Fn *)data_ov071_02272b28};
    if (unk_725 < 3) {
        (this->*tbl[unk_725])();
    }
    return FALSE;
}

BOOL SpNpcLyle::setupAct03() {
    unk_728 = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&unk_558);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcLyle::pickWanderTarget(s32 *x, s32 *z) {
    BOOL r = FALSE;
    Unk_ov071_02271f54_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    s32 i = r;
    for (; i < 6; i++) {
        s16 a = Random_Next(&gRandom);
        u32 idx = ((u16)a >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c.x;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_5c.z;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r) != 0) {
            *x = v.x;
            *z = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcLyle::findSidestepPos(Unk_ov071_02271f54_Vec *out, void *unused) {
    BOOL r = FALSE;
    Unk_ov071_02271f54_Tmp t;
    Npc_RotateOffsetXZ(&t, &unk_5c, unused, unk_94);
    if (Npc_IsPosBlocked(&t) != 1) {
        out->x = t.v[0];
        out->y = t.v[1];
        out->z = t.v[2];
        r = TRUE;
    }
    return r;
}

BOOL SpNpcLyle::steerAroundObstacle() {
    NpcActionCtrl *p = &unk_564;
    Unk_0201accc *q = &unk_350;
    s32 k = _ZN9NpcLookAt15getObstacleBitsEv(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov071_02271f54_Vec v;
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(q, this, 1) == 0) {
        switch (k) {
        case 3:
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (findSidestepPos(&v, &sSpNpcLyleSidestepOffsets[1]) != 0) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (findSidestepPos(&v, sSpNpcLyleSidestepOffsets) != 0) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(q) != 0) {
            _ZN11NpcMoveCtrl16resetDestinationEv(q);
        }
    }
    return r;
}

BOOL SpNpcLyle::tryAvoidObstacle() {
    if (*(u32 *)((u8 *)this + 0x98) != 0 && steerAroundObstacle()) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcLyle::mainAct03() {
    NpcActionCtrl *p = &unk_564;
    Unk_ov071_02271ca0_Vec v;
    Unk_ov071_02271ca0_Vec v2;
    if (tickTimer(&unk_72c) == 0) {
        if (Talk_CheckAndSetPlayerFlag(0x28, 0) == 0) {
            if (isNearCameraFocus(0) != 0) {
                if (isPlayerInFront(0x8000) != 0) {
                    changeAct(1);
                    return TRUE;
                }
            }
        }
    }
    tickTimer(&unk_728);
    if (isNearCameraFocus(1) != 0) {
        if (tryAvoidObstacle() == 0) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(p) != 0) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(&gRandom) & 7) == 0) {
                    u32 *d = gVec3Zero;
                    v.x = d[0];
                    v.y = d[1];
                    v.z = d[2];
                    if (pickWanderTarget(&v.x, &v.z) != 0) {
                        s32 ang = Math_AngleXZ(&unk_5c, &v);
                        if (NpcActor_IsFrontAngle((s16)(ang - unk_8e)) != 0) {
                            s32 kind = 1;
                            if (func_02063b8c(4) == 0) {
                                kind = 2;
                            }
                            if (kind != _ZN13NpcActionCtrl9getActionEv(&unk_564)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, kind, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_728 = 0x64;
                            }
                        } else if (_ZN13NpcActionCtrl9getActionEv(&unk_564) != 4) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 4, 1, v.x, v.z, 0, ang, 0, 0, data_020c6cc8, 0);
                            unk_728 = 0x50;
                        }
                    } else {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 1 || _ZN13NpcActionCtrl9getActionEv(&unk_564) == 2 ||
                    _ZN13NpcActionCtrl9getActionEv(&unk_564) == 4) {
                    if (unk_728 == 0) {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        u32 *q = (u32 *)_ZN11NpcMoveCtrl14getDestinationEv(&unk_350);
                        v2.x = q[0];
                        v2.y = q[1];
                        v2.z = q[2];
                        s32 a = Math_AngleXZ(&unk_5c, &v2);
                        if (NpcActor_IsFrontAngle((s16)(a - unk_8e)) == 0) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        changeAct(4);
    }
    return FALSE;
}

BOOL SpNpcLyle::setupAct04() {
    _ZN12Unk_0201347416disableFootstepsEv(&unk_558);
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_728 = 0x28;
    return TRUE;
}

BOOL SpNpcLyle::mainAct04() {
    unk_730 = (Character *)func_020951ec(4);
    if (Talk_CheckAndSetPlayerFlag(0x28, 0) != 0) {
        if (isNearCameraFocus(1) != 0) {
            changeAct(3);
            return TRUE;
        }
    } else {
        if (isNearCameraFocus(0) != 0) {
            if (isPlayerInFront(0x3000) == 0) {
                if (isPlayerInFront(0x8000) != 0) {
                    changeAct(1);
                    return TRUE;
                }
            }
        }
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcLyle::mainAct02() {
    return TRUE;
}

void SpNpcLyleTalk::vfunc_88() {
    if (unk_b8) {
        (this->*unk_b8)();
        Unk_ov071_02272ba8_Fn t = *(Unk_ov071_02272ba8_Fn *)__ptmf_null;
        unk_b8 = t;
        if (unk_c0) {
            unk_b8 = unk_c0;
            unk_c0 = t;
        }
    }
}

s16 sSpNpcLyleFrontAngle = data_020c6cc0;

u8 sSpNpcLyleModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 't', 't', '.', 'n', 's', 'b', 'm', 'd', 0};

void *data_ov071_02272ad0[2] = {(void *)_ZN9SpNpcLyle10setupAct03Ev, 0};

void *data_ov071_02272ac0[2] = {(void *)_ZN9SpNpcLyle10setupAct01Ev, 0};

void *data_ov071_02272ae8[2] = {(void *)_ZN9SpNpcLyle9mainAct03Ev, 0};

void *data_ov071_02272b30[2] = {(void *)_ZN13SpNpcLyleTalk17onClaimItemChosenEv, 0};

void *data_ov071_02272b28[2] = {(void *)_ZN9SpNpcLyle10act01Step2Ev, 0};

void SpNpcLyleTalk::getScript(Unk_ov071_02272ba8_Fn *out, s32 idx) {
    static Unk_ov071_02272ba8_Fn tbl[2] = {*(Unk_ov071_02272ba8_Fn *)data_ov071_02272b30,
                                           *(Unk_ov071_02272ba8_Fn *)data_ov071_02272af0};
    *out = tbl[idx];
}

Unk_ov071_022726c4_Ent sSpNpcLyleActTable[6] = {
    {*(Unk_ov071_02272c38_Fn *)data_ov071_02272ae0, *(Unk_ov071_02272c38_Fn *)data_ov071_02272ad8},
    {*(Unk_ov071_02272c38_Fn *)data_ov071_02272ac0, *(Unk_ov071_02272c38_Fn *)data_ov071_02272b38},
    {NULL, *(Unk_ov071_02272c38_Fn *)data_ov071_02272ac8},
    {*(Unk_ov071_02272c38_Fn *)data_ov071_02272ad0, *(Unk_ov071_02272c38_Fn *)data_ov071_02272ae8},
    {*(Unk_ov071_02272c38_Fn *)data_ov071_02272b20, *(Unk_ov071_02272c38_Fn *)data_ov071_02272af8},
    {*(Unk_ov071_02272c38_Fn *)data_ov071_02272b00, *(Unk_ov071_02272c38_Fn *)data_ov071_02272b08},
};

FxVec3 sSpNpcLyleSidestepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};

u8 sSpNpcLyleKey[17] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'i', 'n', 's', 'u', 'r', 'a', 'n', 'c', 'e', 0};

u8 sSpNpcLyleTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 't', 't', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

const Unk_ov071_0227297c_Ent sSpNpcLyleTopicMsgs[3] = {
    {(const char *)sSpNpcLyleKey, 5},
    {(const char *)sSpNpcLyleKey, 7},
    {(const char *)sSpNpcLyleKey, 0x20},
};

void *data_ov071_02272b18[2] = {(void *)_ZN9SpNpcLyle10act01Step1Ev, 0};

Unk_ov071_SceneEntry sSpNpcLyleProfile = {SpNpcLyle_Create, 0x69, 0x6f, 2, 0x5000, 0x5000, 0x3e800};

void *data_ov071_02272af8[2] = {(void *)_ZN9SpNpcLyle9mainAct04Ev, 0};

void *data_ov071_02272ad8[2] = {(void *)_ZN9SpNpcLyle9mainAct00Ev, 0};

void *data_ov071_02272ae0[2] = {(void *)_ZN9SpNpcLyle10setupAct00Ev, 0};

void *data_ov071_02272b10[2] = {(void *)_ZN9SpNpcLyle10act01Step0Ev, 0};


void SpNpcLyleTalk::setScript(s32 idx) {
    getScript(&unk_b8, idx);
}

void SpNpcLyleTalk::setNextScript(s32 idx) {
    getScript(&unk_c0, idx);
}

extern "C" BOOL SpNpcLyle_IsForgedPainting(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x3934 && v <= 0x3983) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcLyleTalk::onClaimItemChosen() {
    TalkWindowState *scene = unk_3c;
    Unk_ov071_0227160c_Msg m;
    m.id = 0x24;
    if (MenuCtrl_IsResultOk() != 0) {
        s32 r4 = MenuCtrl_GetIndex();
        m.a = Pocket_GetItem();
        BOOL same;
        if (Item_IsFurniture(&m.a) != 0) {
            m.b = 0xfff1;
            if (Item_GetFurnitureIndex(&m.a) == Item_GetFurnitureIndex(&m.b)) {
                same = TRUE;
            } else {
                same = FALSE;
            }
        } else {
            if (m.a == 0xfff1) {
                same = TRUE;
            } else {
                same = FALSE;
            }
        }
        if (same == 0) {
            void *w = _ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent());
            m.id = 0x25;
            _ZN17PlayerSpNpcRecord17addInsuranceClaimEv(w);
            _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &m.a, 0, 4, 0);
            if (r4 >= 0) {
                Pocket_RemoveItem(r4);
            }
            setNextScript(1);
        } else {
            requestReopenWindow();
        }
    } else {
        requestReopenWindow();
    }
    scene->setNextMessage(&m.id, sSpNpcLyleKey);
}

void SpNpcLyleTalk::scriptCloseItemSelect() {
    requestReopenWindow();
}

s32 SpNpcLyle::countUnaskedQuestions(u8 *p, s32 n) {
    s32 c = 0;
    s32 i = c;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            c++;
        }
    }
    return c;
}

s32 SpNpcLyle::pickUnaskedQuestion(u8 *p, s32 n) {
    s32 c = countUnaskedQuestions(p, n);
    s32 r = 0;
    s32 k = func_02063b8c(c);
    s32 i = r;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

SpNpcLyleTalk::SpNpcLyleTalk() {}

SpNpcLyleTalk::~SpNpcLyleTalk() {}

void SpNpcLyleTalk::vfunc_08() {
    SpNpcTalkRequest::vfunc_08();
    Unk_ov071_02272ba8_Fn t = *(Unk_ov071_02272ba8_Fn *)__ptmf_null;
    unk_b8 = t;
    unk_c0 = t;
}

void SpNpcLyleTalk::attachOwner(SpNpcLyle *o) {
    vfunc_08();
    unk_b0 = o;
    unk_ac = 0;
    unk_b4 = 0;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcLyleTalk::vfunc_78(TalkStartMsg *out) {
    BOOL b = FALSE;
    void *h = PlayerData_GetCurrent();
    if (_ZN12Unk_02097ff48testFlagEj(h, 0x17) != 0) {
        s32 v = PlayerSpNpcRecord_GetInsuranceDate(_ZN10PlayerData14getSpNpcRecordEv(h));
        Unk_0209cf88_Obj obj;
        Clock_GetDate(&obj);
        if (Date_DaysBetween(&obj, v) < 1) {
            unk_ac = 1;
        } else if (_ZN12Unk_02097ff48testFlagEj(h, 0x18) != 0) {
            if (Talk_CheckAndSetPlayerFlag(0x28, b) != 0) {
                unk_ac = 2;
            } else {
                b = TRUE;
            }
        } else if (Talk_CheckAndSetPlayerFlag(0x28, b) != 0) {
            unk_ac = b;
        } else {
            b = TRUE;
        }
    } else if (Talk_CheckAndSetPlayerFlag(0x28, b) != 0) {
        unk_ac = b;
    } else {
        b = TRUE;
    }
    if (unk_ac >= 0 && unk_ac < 3) {
        out->unk_04 = *((u8 *)&sSpNpcLyleTopicMsgs[0].unk_04 + unk_ac * 8);
        if (b) {
            out->unk_04 = func_02063b8c(5) + 0x28;
        }
        out->unk_00 = (const char *)((u32 *)sSpNpcLyleTopicMsgs)[unk_ac * 2];
    }
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcLyleTalk::vfunc_14() {
    u8 *const name = sSpNpcLyleKey;
    Unk_ov071_0227160c_Msg m;
    s32 r5 = 0xff;
    void *h = PlayerData_GetCurrent();
    switch (unk_1e) {
    case 5:
    case 0x14:
    case 0x1c:
        Hud_Hide();
        r5 = 0x15;
        if (_ZN12Unk_02097ff48testFlagEj(h, 0x17) != 0) {
            r5 = 0x1d;
        }
        break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12: {
        SpNpcLyle *o = unk_b0;
        s32 idx = o->pickUnaskedQuestion(o->unk_720, 5);
        u8 *q = &unk_b0->unk_720[idx];
        if (*q == 0) {
            *q = 1;
        }
        r5 = (u8)(idx + 0xe);
        unk_b4 = unk_b4 + 1;
        if (unk_b4 >= 4) {
            if (_ZN12Unk_02097ff48testFlagEj(h, 0x18) == 0) {
                r5 = 0x13;
            } else {
                r5 = 0x1b;
                Talk_CheckAndSetPlayerFlag(0x28, 1);
            }
            unk_b4 = 0;
            MI_CpuFill8(unk_b0->unk_720, 0, 5);
        }
        break;
    }
    case 0x13:
        if (_ZN12Unk_02097ff48testFlagEj(h, 0x17) == 0) {
            r5 = 0x14;
        } else {
            r5 = 0x1c;
        }
        break;
    case 0x18:
        if (_ZN12Unk_02097ff48testFlagEj(h, 0x17) == 0) {
            r5 = 0x19;
        } else {
            r5 = 0x1e;
        }
        break;
    case 0x19:
        m.a = 0x149d;
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &m.a, 0, 5, 0);
        NpcActor_ChargePlayer(unk_b0, 0xbb8);
        r5 = 0x1a;
        _ZN12Unk_02097ff47setFlagEj(h, 0x17);
        _ZN20PlayerDailyTalkFlags10stampTodayEv(_ZN10PlayerData14getSpNpcRecordEv(h));
        break;
    case 0x16:
    case 0x1a:
    case 0x1f:
        Hud_Show();
        break;
    case 0x1e:
        m.b = 0x14a0;
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &m.b, 0, 5, 0);
        NpcActor_ChargePlayer(unk_b0, 0x1770);
        r5 = 0x1f;
        _ZN12Unk_02097ff47setFlagEj(h, 0x18);
        break;
    case 0x23:
        _ZN12Unk_020d771015setPocketFilterEjjj(this, (u32)SpNpcLyle_IsForgedPainting, 0xd, 1);
        _ZN12Unk_020d771012openSubSceneEi(this, 0);
        setScript(0);
        break;
    case 0x25:
        _ZN12Unk_0201442015requestKeepItemEv(this);
        if (MenuCtrl_BuildPocketMask((void *)SpNpcLyle_IsForgedPainting) != 0) {
            r5 = 0x21;
        } else {
            r5 = 0x26;
        }
        break;
    }
    if (r5 != 0xff) {
        m.id = r5;
        unk_3c->setNextMessage(&m.id, name);
    }
}

void SpNpcLyleTalk::vfunc_18() {
    u8 m;
    s32 t = getChoiceList()->getResult();
    u8 *const name = sSpNpcLyleKey;
    s32 r5 = 0xff;
    u8 *g = gSaveData;
    s32 x = unk_1e;
    if (x > 0x15) {
        goto hi;
    }
    if (x >= 0x15) {
        goto blkA;
    }
    if (x <= 0xc) {
        if (x >= 8) {
            switch (x) {
            case 8:
                goto blk8;
            case 0xc:
                goto blkC;
            }
        }
    }
    goto end;
hi:
    switch (x) {
    case 0x17:
        goto blkA;
    case 0x1d:
    case 0x27:
        goto blkB;
    case 0x20:
    case 0x21:
        goto blkC2;
    case 0x23:
        goto blkD;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
        goto blkE;
    default:
        goto end;
    }
blkE:
    switch (t) {
    case 0:
        r5 = 4;
        break;
    case 1:
        r5 = 2;
        break;
    }
    goto end;
blk8:
    r5 = (u8)(x + 1);
    g[0x15e28] = t + 1;
    goto end;
blkC:
    switch (t) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        r5 = 0xd;
        MI_CpuFill8((u8 *)unk_b0 + 0x720, 0, 5);
        unk_b4 = 0;
        if (t == 4) {
            func_02040144(0, 1);
        } else {
            func_02040144(0, 0);
        }
        break;
    }
    goto end;
blkA:
    if (t == 0) {
        Talk_CheckAndSetPlayerFlag(0x28, 1);
        if (NpcActor_CanPlayerPay(unk_b0, 0xbb8) != 0) {
            r5 = 0x18;
        } else {
            r5 = 0x16;
        }
    }
    goto end;
blkB:
    if (t == 0) {
        Talk_CheckAndSetPlayerFlag(0x28, 1);
        if (NpcActor_CanPlayerPay(unk_b0, 0x1770) != 0) {
            r5 = 0x18;
        } else {
            r5 = 0x16;
        }
    }
    goto end;
blkC2:
    if (t == 0) {
        r5 = 0x23;
    }
    goto end;
blkD:
    _ZN12Unk_020d771015setPocketFilterEjjj(this, (u32)SpNpcLyle_IsForgedPainting, 0xd, 1);
    _ZN12Unk_020d771012openSubSceneEi(this, 0);
    setScript(0);
end:
    if (r5 != 0xff) {
        m = r5;
        unk_3c->setNextMessage(&m, name);
    }
}

BOOL SpNpcLyle::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------

void SpNpcLyle::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        changeAct(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        changeAct(5);
        break;
    case 8:
        changeAct(3);
        break;
    }
}


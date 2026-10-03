#include "types.h"

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

struct ChoiceList {
    s32 getResult();
};

struct Unk_0201bc1c;
class SpNpcHarriet;
class SpNpcHarrietTalk;

struct Unk_ov053_Vec {
    s32 x, y, z;
};

struct Unk_ov053_02258e7c_Loc : Unk_ov053_Vec {
    Unk_ov053_02258e7c_Loc() {}
};

struct TalkStartMsg {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov053_02259428_Ent {
    const void *p;
    u8 v;
};

struct TalkWindowState {
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
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(NpcActionCtrl, 0x618 - 0x564);
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

struct ItemId {
    u16 unk_00;
    ItemId();
    ~ItemId();
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
    virtual void vfunc_4c(u32 cmd, u8 arg);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
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
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    BOOL netIsTalkLocked();
    s32 getPlayerActor(u32 v);
    s32 getAngleToPlayer(u32 v);
    s32 getAngleTo(NpcActor *other);
    void setCollisionRadius(s32 v);
    s32 getDistanceToPlayer(u32 v);

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

class SpNpcHarrietTalk : public SpNpcTalkRequest {
public:
    SpNpcHarrietTalk();
    virtual ~SpNpcHarrietTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(TalkStartMsg *out);

    s32 getQuestionsStartMsg();
    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(SpNpcHarriet *o);
    u8 getNewHairColor();
    u8 getNewHairStyle();

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ SpNpcHarriet *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 pad_ba[2];
};

class SpNpcHarriet : public SpNpcActor {
public:
    SpNpcHarriet() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u8 arg);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    s32 isSessionPaid();
    BOOL isWearingHeadItem();
    BOOL tryFarewellTalk();
    BOOL tryLeavePaidTalk();
    BOOL tryChairTalk();
    BOOL mainAct0A();
    BOOL setupAct0A();
    BOOL mainAct09();
    BOOL setupAct09();
    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcHarrietTalk unk_658;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 unk_715;
    /* 0x716 */ u8 unk_716;
    /* 0x717 */ u8 unk_717;
    /* 0x718 */ s16 unk_718;
};

struct Unk_ov053_02259ee4_Ent {
    BOOL (SpNpcHarriet::*enter)();
    BOOL (SpNpcHarriet::*exit)();
};

struct Unk_ov053_SceneEntry {
    SpNpcHarriet *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern const u8 sSpNpcHarrietCoolColors[];
extern const u8 sSpNpcHarrietWarmColors[];
extern const Unk_ov053_Vec sSpNpcHarrietExitLine;
extern const Unk_ov053_Vec sSpNpcHarrietReturnPos;
extern const Unk_ov053_Vec data_ov053_0225a1a0;
extern const u8 sSpNpcHarrietStyleTable[];
extern const Unk_ov053_Vec sSpNpcHarrietRouteToStation[2];
extern const Unk_ov053_Vec sSpNpcHarrietRouteToCustomer[2];
#define data_ov053_0225a1c4 ((const s32 *)((const u8 *)sSpNpcHarrietRouteToStation + 8))
#define data_ov053_0225a1dc ((const s32 *)((const u8 *)sSpNpcHarrietRouteToCustomer + 8))
extern const void *sSpNpcHarrietMsgKey;
extern char sSpNpcHarrietKey[];
extern u8 sSpNpcHarrietModelPath[];
extern u8 sSpNpcHarrietTexturePath[];
extern Unk_ov053_SceneEntry sSpNpcHarrietProfile;
extern Unk_ov053_02259ee4_Ent sSpNpcHarrietActTable[11];
#define data_ov053_0225a62c ((Unk_ov053_02259ee4_Ent *)((u8 *)sSpNpcHarrietActTable + 8))
SpNpcHarriet *SpNpcHarriet_Create();

extern volatile u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
extern void *gCommManager;
extern u8 gTalkMsgIndexEnd[];

s32 _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *, s32, s32, s32, u32, s32);
s32 _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
s32 _ZN13NpcActionCtrl9getActionEv(void *);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *self, Unk_ov053_Vec *v);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void _ZN11NpcMoveCtrl14setSpeedPresetEiiii(void *self, s32 a, s32 b, s32 c, s32 d);
s32 Math_AngleXZ(void *a, void *b);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *p, s32 a, s32 b, s32 c);
NpcActor *func_02015aac(void *self);
s32 func_020e7518(void *);
void Bgm_ReleasePriority(u32);
void Hud_Show();
BOOL PlayerActor_IsInAction(s32 a, s32 b);
BOOL PlayerActor_LocalRequestStandUp(s32 a);
BOOL Camera_SetMode16At(Unk_ov053_Vec *v);
void TalkRequest_SetTargetDone(void *self);
void TalkRequest_AddPlayerTalk6(void *self, s32 a);
void *Scene_GetWarpRequest();
s32 SceneWarp_RequestExit(void *, s32);
void Camera_SetModeDefault();
BOOL _ZN11CommManager8isOnlineEv(void *g);
void Ground_LockExit(s32 a);
s32 Scene_GetPrevious();
void *func_020947f0(s32 a);
s32 Ground_IsOnLockedExit(void *p);
BOOL TalkRequest_IsTalking(void);
s32 TalkRequest_AddPlayerTalk7(void *p, s32 a);
void FieldPos_ToUnit(s32 *bx, s32 *by, void *pos);
void *PlayerData_GetCurrent();
void *TownSessionState_Get();
s32 TownSessionState_TestFlag(void *p, s32 a);
u16 *_ZN10PlayerData11getFaceItemEv(void *p);
u16 *_ZN10PlayerData6getHatEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
u32 _ZN17PlayerSpNpcRecord15getHaircutCountEv(void *p);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN8PlayerId9getGenderEv(void *p);
s32 func_020aa514(void *p);
s32 Hud_Hide();
s32 NpcActor_CanPlayerPay(void *o, s32 a);
void NpcActor_ChargePlayer(void *o, s32 v);
void TownSessionState_SetFlag(void *p, s32 v);
void TownSessionState_ClearFlag(void *p, s32 v);
s32 _ZN10PlayerData12getHairStyleEv(void *p);
s32 _ZN10PlayerData12getHairColorEv(void *p);
void PlayerActor_LocalSetHeadwearHidden(s32 v);
void Snd_PlaySe(s32 v);
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 Bgm_RequestSilence(s32 a, s32 b, s32 c);
s32 _ZN12Unk_02097ff48testFlagEj(void *h, s32 v);
void _ZN12Unk_02097ff47setFlagEj(void *h, s32 v);
s32 func_02063b8c(s32 n);
void PlayerActor_LocalRequestSit();
void _ZN17PlayerSpNpcRecord15addHaircutCountEj(void *p, u32 v);
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
s32 PlayerActor_IsScriptedWalking(s32 a);
void PlayerActor_LocalRequestHaircutStart(u8 *a, u8 *b);
void BarberMachine_Start();
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
BOOL _ZN11NpcAnimCtrl13isPlayingAnimEiPv(void *self, s32 a, void *b);
}

// Constants and tables (definition order sets the data layout)
extern "C" void _ZN12SpNpcHarriet9mainAct00Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct09Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct01Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct0AEv();
extern "C" void _ZN12SpNpcHarriet10setupAct05Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct03Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct09Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct08Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct08Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct0AEv();
extern "C" void _ZN12SpNpcHarriet10setupAct06Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct06Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct07Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct07Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct05Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct04Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct04Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct00Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct03Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct02Ev();
extern "C" void _ZN12SpNpcHarriet10setupAct02Ev();
extern "C" void _ZN12SpNpcHarriet9mainAct01Ev();
typedef BOOL (SpNpcHarriet::*Unk_ov053_Fn)();
extern "C" void *data_ov053_0225a344[2];
extern "C" void *data_ov053_0225a34c[2];
extern "C" void *data_ov053_0225a354[2];
extern "C" void *data_ov053_0225a35c[2];
extern "C" void *data_ov053_0225a364[2];
extern "C" void *data_ov053_0225a36c[2];
extern "C" void *data_ov053_0225a374[2];
extern "C" void *data_ov053_0225a37c[2];
extern "C" void *data_ov053_0225a384[2];
extern "C" void *data_ov053_0225a38c[2];
extern "C" void *data_ov053_0225a394[2];
extern "C" void *data_ov053_0225a39c[2];
extern "C" void *data_ov053_0225a3a4[2];
extern "C" void *data_ov053_0225a3ac[2];
extern "C" void *data_ov053_0225a3b4[2];
extern "C" void *data_ov053_0225a3bc[2];
extern "C" void *data_ov053_0225a3c4[2];
extern "C" void *data_ov053_0225a3cc[2];
extern "C" void *data_ov053_0225a3d4[2];
extern "C" void *data_ov053_0225a3dc[2];
extern "C" void *data_ov053_0225a3e4[2];
extern "C" void *data_ov053_0225a3ec[2];

extern "C" void *data_ov053_0225a374[2] = {(void *)_ZN12SpNpcHarriet10setupAct09Ev, 0};
extern "C" Unk_ov053_SceneEntry sSpNpcHarrietProfile = {SpNpcHarriet_Create, 0x61, 0x68, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov053_0225a39c[2] = {(void *)_ZN12SpNpcHarriet9mainAct06Ev, 0};
extern "C" void *data_ov053_0225a38c[2] = {(void *)_ZN12SpNpcHarriet9mainAct0AEv, 0};
extern "C" const void *sSpNpcHarrietMsgKey = sSpNpcHarrietKey;
extern "C" const Unk_ov053_Vec data_ov053_0225a1a0 = {0x300, 0x199, 0x199};
extern "C" void *data_ov053_0225a3a4[2] = {(void *)_ZN12SpNpcHarriet10setupAct07Ev, 0};
extern "C" void *data_ov053_0225a344[2] = {(void *)_ZN12SpNpcHarriet9mainAct00Ev, 0};
extern "C" const Unk_ov053_Vec sSpNpcHarrietRouteToCustomer[2] = {{0xe800, 0, 0x15800}, {0xc000, 0, 0x15000}};
extern "C" const u8 sSpNpcHarrietWarmColors[] = {1, 4, 2, 6};
extern "C" const Unk_ov053_Vec sSpNpcHarrietExitLine = {0xb000, 0, 0x1d000};
extern "C" void *data_ov053_0225a34c[2] = {(void *)_ZN12SpNpcHarriet9mainAct09Ev, 0};
extern "C" void *data_ov053_0225a354[2] = {(void *)_ZN12SpNpcHarriet10setupAct01Ev, 0};
extern "C" u8 sSpNpcHarrietTexturePath[] = "npc_sp/model/poo_tex.nsbtx";
extern "C" void *data_ov053_0225a3e4[2] = {(void *)_ZN12SpNpcHarriet10setupAct02Ev, 0};
extern "C" void *data_ov053_0225a3dc[2] = {(void *)_ZN12SpNpcHarriet9mainAct02Ev, 0};
extern "C" char sSpNpcHarrietKey[] = "sp_npc_barber";
extern "C" const u8 sSpNpcHarrietCoolColors[] = {0, 3, 5, 7};
extern "C" void *data_ov053_0225a3c4[2] = {(void *)_ZN12SpNpcHarriet10setupAct04Ev, 0};
extern "C" void *data_ov053_0225a3bc[2] = {(void *)_ZN12SpNpcHarriet9mainAct04Ev, 0};
extern "C" void *data_ov053_0225a3b4[2] = {(void *)_ZN12SpNpcHarriet9mainAct05Ev, 0};
extern "C" void *data_ov053_0225a35c[2] = {(void *)_ZN12SpNpcHarriet10setupAct0AEv, 0};
extern "C" void *data_ov053_0225a394[2] = {(void *)_ZN12SpNpcHarriet10setupAct06Ev, 0};
extern "C" void *data_ov053_0225a364[2] = {(void *)_ZN12SpNpcHarriet10setupAct05Ev, 0};
extern "C" void *data_ov053_0225a3cc[2] = {(void *)_ZN12SpNpcHarriet10setupAct00Ev, 0};
extern "C" u8 sSpNpcHarrietModelPath[] = "npc_sp/model/poo.nsbmd";
extern "C" const Unk_ov053_Vec sSpNpcHarrietRouteToStation[2] = {{0xe000, 0, 0x15000}, {0xf000, 0, 0x17000}};
extern "C" void *data_ov053_0225a3ec[2] = {(void *)_ZN12SpNpcHarriet9mainAct01Ev, 0};
extern "C" Unk_ov053_02259ee4_Ent sSpNpcHarrietActTable[11] = {
    {*(Unk_ov053_Fn *)data_ov053_0225a3cc, *(Unk_ov053_Fn *)data_ov053_0225a344},
    {*(Unk_ov053_Fn *)data_ov053_0225a354, *(Unk_ov053_Fn *)data_ov053_0225a3ec},
    {*(Unk_ov053_Fn *)data_ov053_0225a3e4, *(Unk_ov053_Fn *)data_ov053_0225a3dc},
    {*(Unk_ov053_Fn *)data_ov053_0225a3d4, *(Unk_ov053_Fn *)data_ov053_0225a36c},
    {*(Unk_ov053_Fn *)data_ov053_0225a3c4, *(Unk_ov053_Fn *)data_ov053_0225a3bc},
    {*(Unk_ov053_Fn *)data_ov053_0225a364, *(Unk_ov053_Fn *)data_ov053_0225a3b4},
    {*(Unk_ov053_Fn *)data_ov053_0225a394, *(Unk_ov053_Fn *)data_ov053_0225a39c},
    {*(Unk_ov053_Fn *)data_ov053_0225a3a4, *(Unk_ov053_Fn *)data_ov053_0225a3ac},
    {*(Unk_ov053_Fn *)data_ov053_0225a384, *(Unk_ov053_Fn *)data_ov053_0225a37c},
    {*(Unk_ov053_Fn *)data_ov053_0225a374, *(Unk_ov053_Fn *)data_ov053_0225a34c},
    {*(Unk_ov053_Fn *)data_ov053_0225a35c, *(Unk_ov053_Fn *)data_ov053_0225a38c},
};
extern "C" void *data_ov053_0225a36c[2] = {(void *)_ZN12SpNpcHarriet9mainAct03Ev, 0};
extern "C" const u8 sSpNpcHarrietStyleTable[] = {3, 0xb, 2, 0xa, 6, 0xe, 4, 0xc, 7, 0xf, 0, 8, 1, 9, 5, 0xd};
extern "C" void *data_ov053_0225a3ac[2] = {(void *)_ZN12SpNpcHarriet9mainAct07Ev, 0};
extern "C" void *data_ov053_0225a3d4[2] = {(void *)_ZN12SpNpcHarriet10setupAct03Ev, 0};
extern "C" void *data_ov053_0225a384[2] = {(void *)_ZN12SpNpcHarriet10setupAct08Ev, 0};
extern "C" const Unk_ov053_Vec sSpNpcHarrietReturnPos = {0x10000, 0, 0x1b000};

SpNpcHarriet *SpNpcHarriet_Create() { return new SpNpcHarriet; }

BOOL SpNpcHarriet::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    setCollisionRadius(0x100);
    const Unk_ov053_Vec *d = &data_ov053_0225a1a0;
    _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&unk_350, 2, d->x, d->y, d->z);
    return TRUE;
}

BOOL SpNpcHarriet::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    void *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) == 0) {
        Ground_LockExit(0);
    }
    unk_718 = 0;
    unk_4cc.unk_1c |= 2;
    unk_715 = 0;
    if (_ZN11CommManager8isOnlineEv(g)) {
        changeAct(1);
        return TRUE;
    }
    if (Scene_GetPrevious() == 0x1d) {
        changeAct(0);
    } else {
        changeAct(1);
    }
    return TRUE;
}

u8 *SpNpcHarriet::getTexturePath() { return sSpNpcHarrietTexturePath; }

u8 *SpNpcHarriet::getModelPath() { return sSpNpcHarrietModelPath; }

BOOL SpNpcHarriet::updateAct() {
    BOOL r = FALSE;
    if (data_ov053_0225a62c[unk_654].enter) {
        r = (this->*sSpNpcHarrietActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcHarriet::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcHarrietActTable[state].enter) {
        ok = (this->*sSpNpcHarrietActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

u8 SpNpcHarrietTalk::getNewHairStyle() {
    return ((u8 *)this)[0xb6];
}

u8 SpNpcHarrietTalk::getNewHairColor() {
    return ((u8 *)this)[0xb7];
}

BOOL SpNpcHarriet::setupAct00() {
    unk_658.setTopic(0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL SpNpcHarriet::setupAct01() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct01() {
    if (tryChairTalk()) {
        return TRUE;
    }
    if (tryLeavePaidTalk()) {
        return TRUE;
    }
    tryFarewellTalk();
    return TRUE;
}

BOOL SpNpcHarriet::setupAct02() {
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    NpcActor *p = (NpcActor *)unk_658.func_02015aac();
    s32 r4 = 0;
    if (p) {
        r4 = getAngleTo(p);
    }
    if (unk_658.getTopic() == 5) {
        Unk_ov053_Vec v;
        Unk_ov053_Vec *pv = (Unk_ov053_Vec *)&unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        v.y += 0x2000;
        Camera_SetMode16At(&v);
        unk_717 = 0x1f;
    }
    if (unk_658.getTopic() == 5 || unk_658.getTopic() == 8 || unk_658.getTopic() == 10) {
        _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, r4, 1);
        return TRUE;
    } else {
        _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, r4, 0);
        return TRUE;
    }
}

BOOL SpNpcHarriet::mainAct02() {
    if (func_020e7518(&unk_717) == 1) {
        Bgm_ReleasePriority(0xe);
    }
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        s32 prev = unk_654;
        Hud_Show();
        if (unk_658.getTopic() == 4 || unk_658.getTopic() == 3) {
            changeAct(7);
        } else if (unk_658.getTopic() == 5 && isWearingHeadItem()) {
            unk_658.setTopic(9);
            changeAct(6);
            return TRUE;
        } else {
            if (PlayerActor_IsInAction(0x28, 4)) {
                if (PlayerActor_LocalRequestStandUp(0)) {
                    TalkRequest_SetTargetDone(this);
                    changeAct(3);
                }
            } else if (unk_658.getTopic() == 10) {
                if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
                    SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
                    changeAct(3);
                }
            } else {
                TalkRequest_SetTargetDone(this);
                changeAct(3);
            }
        }
        if (prev != unk_654) {
            if (unk_658.getTopic() == 5) {
                Camera_SetModeDefault();
            }
        }
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct03() { return TRUE; }

BOOL SpNpcHarriet::mainAct03() { return TRUE; }

BOOL SpNpcHarriet::setupAct04() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 1, 0, 0, 0, unk_718, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct04() {
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct05() {
    unk_715 = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct05() {
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 6) {
        const Unk_ov053_Vec *r = &sSpNpcHarrietRouteToStation[unk_715];
        Unk_ov053_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&unk_350, &v);
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            unk_715++;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)sSpNpcHarrietRouteToStation + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                changeAct(4);
            }
        }
    }
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            u32 off = unk_715;
            off = off * 0xc;
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)sSpNpcHarrietRouteToStation + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct06() {
    unk_715 = 0;
    Unk_ov053_Vec v;
    const Unk_ov053_Vec *p = sSpNpcHarrietRouteToCustomer;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    s32 r = Math_AngleXZ(&unk_5c, &v);
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 1, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct06() {
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 6) {
        const Unk_ov053_Vec *r = &sSpNpcHarrietRouteToCustomer[unk_715];
        Unk_ov053_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&unk_350, &v);
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            unk_715++;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)sSpNpcHarrietRouteToCustomer + off), *(s32 *)((u8 *)data_ov053_0225a1dc + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                changeAct(2);
            }
        }
    }
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            u32 off = unk_715;
            off = off * 0xc;
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)sSpNpcHarrietRouteToCustomer + off), *(s32 *)((u8 *)data_ov053_0225a1dc + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct07() {
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    unk_715 = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct07() {
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 6) {
        const Unk_ov053_Vec *r = &sSpNpcHarrietRouteToStation[unk_715];
        Unk_ov053_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&unk_350, &v);
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            unk_715++;
            u32 t = data_020c6cc8;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)sSpNpcHarrietRouteToStation + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 1, 0, 0, 0, -0x4000, 0, 0, t, 0);
            }
        }
    }
    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            u32 off = unk_715;
            if (off >= 2) {
                changeAct(8);
            } else {
                off = off * 0xc;
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)sSpNpcHarrietRouteToStation + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            }
        }
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct08() {
    unk_716 = 0x64;
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&unk_564, 1, 0xf1, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcHarriet::mainAct08() {
    if (func_020e7518(&unk_716) == 0) {
        unk_658.setTopic(5);
        changeAct(2);
    }
    if (unk_716 == 0x55) {
        u8 out[2];
        out[1] = unk_658.getNewHairColor();
        out[0] = unk_658.getNewHairStyle();
        PlayerActor_LocalRequestHaircutStart(&out[0], &out[1]);
        BarberMachine_Start();
        func_02003ddc(&unk_514, 0x41, 0x7f, 0);
    }
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(&unk_334, 0xf1, &unk_2a0)) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct09() {
    unk_714 = 0;
    return TRUE;
}

BOOL SpNpcHarriet::mainAct09() {
    PlayerData_GetCurrent();
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    s32 bx1 = 0, by1 = 0, bx2 = 0, by2 = 0;
    Unk_ov053_02258e7c_Loc w;
    *(Unk_ov053_Vec *)&w = sSpNpcHarrietReturnPos;
    s32 dx = w.x, dy = w.y, dz = w.z;
    FieldPos_ToUnit(&bx2, &by2, &w);
    FieldPos_ToUnit(&bx1, &by1, &v);
    switch (unk_714) {
    case 0:
        if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
            Camera_SetModeDefault();
            unk_714 = 1;
        }
        break;
    case 1: {
        Unk_ov053_02258e7c_Loc u;
        u.x = dx;
        u.y = dy;
        u.z = dz;
        PlayerActor_RequestWalkTo(&u, 0x266, 4);
        unk_714 = 2;
        break;
    }
    case 2:
        if (PlayerActor_IsScriptedWalking(4) == 0) {
            TalkRequest_SetTargetDone(this);
            changeAct(4);
        }
        break;
    }
    return TRUE;
}

BOOL SpNpcHarriet::setupAct0A() {
    return TRUE;
}

BOOL SpNpcHarriet::mainAct0A() {
    return TRUE;
}

SpNpcHarrietTalk::SpNpcHarrietTalk() {}

SpNpcHarrietTalk::~SpNpcHarrietTalk() {}

void SpNpcHarrietTalk::attachOwner(SpNpcHarriet *o) {
    vfunc_08();
    unk_b0 = o;
    unk_ac = 0xe;
}

void SpNpcHarrietTalk::setTopic(s32 v) {
    unk_ac = v;
}

// ---- member small functions (defined late so callers keep bl) ----

s32 SpNpcHarrietTalk::getTopic() {
    return unk_ac;
}

void SpNpcHarrietTalk::vfunc_78(TalkStartMsg *out) {
    void *p = PlayerData_GetCurrent();
    static Unk_ov053_02259428_Ent tbl[14] = {
        {sSpNpcHarrietMsgKey, 0x43}, {sSpNpcHarrietMsgKey, 0},    {sSpNpcHarrietMsgKey, 2},
        {sSpNpcHarrietMsgKey, 0x40}, {sSpNpcHarrietMsgKey, 0x3e}, {sSpNpcHarrietMsgKey, 0xd},
        {sSpNpcHarrietMsgKey, 0x3d}, {sSpNpcHarrietMsgKey, 0x45}, {sSpNpcHarrietMsgKey, 0x42},
        {sSpNpcHarrietMsgKey, 0x41}, {sSpNpcHarrietMsgKey, 0x46}, {sSpNpcHarrietMsgKey, 5},
        {sSpNpcHarrietMsgKey, 6},    {sSpNpcHarrietMsgKey, 7},
    };
    if (getTopic() == 4) {
        out->unk_00 = tbl[unk_ac].p;
        out->unk_04 = getQuestionsStartMsg();
    } else {
        if (getTopic() != 0 && getTopic() != 3 && getTopic() != 5 &&
            getTopic() != 7 && getTopic() != 8 && getTopic() != 9 &&
            getTopic() != 10) {
            if (unk_b0->isSessionPaid() == 0) {
                if (Talk_CheckAndSetPlayerFlag(0x13, 0) == 0) {
                    if (_ZN12Unk_02097ff48testFlagEj(p, 0xb) == 0) {
                        setTopic(1);
                        _ZN12Unk_02097ff47setFlagEj(p, 0xb);
                    } else {
                        setTopic(2);
                    }
                } else {
                    setTopic(func_02063b8c(3) + 0xb);
                }
            } else {
                setTopic(6);
            }
        }
        if (unk_ac >= 0 && unk_ac < 0xe) {
            out->unk_04 = tbl[unk_ac].v;
            out->unk_00 = tbl[unk_ac].p;
        }
    }
}

void SpNpcHarrietTalk::vfunc_74() {
    u32 t = unk_1e;
    if (t == 0xe || t == 0x37) {
        if ((t == 0xe && unk_b5 == 1) || (t == 0x37 && unk_b5 == 2)) {
            PlayerActor_LocalRequestSit();
            _ZN17PlayerSpNpcRecord15addHaircutCountEj(_ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent()), 1);
        }
        unk_b5 = unk_b5 + 1;
    }
}

void SpNpcHarrietTalk::vfunc_70() {
    if (unk_1e == 0xc) {
        Bgm_RequestSilence(0xe, 0x46, 0);
    }
}

void SpNpcHarrietTalk::vfunc_14() {
    void *p = PlayerData_GetCurrent();
    const void *tbl = sSpNpcHarrietMsgKey;
    u32 msg = 0xff;
    switch (unk_1e) {
    case 0xd:
        if (unk_b6 == unk_b8 && unk_b7 == unk_b9) {
            msg = 0x37;
        } else {
            msg = 0xe;
        }
        unk_b5 = 0;
        break;
    case 0x17:
        unk_b4 = 1;
        break;
    case 0x18:
        unk_b4 = 0;
        break;
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36: {
        s32 r = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(p));
        if (unk_b4 != 0) {
            if (r == 0) {
                r = 1;
            } else {
                r = 0;
            }
        }
        const u8 *q = &sSpNpcHarrietStyleTable[(unk_1e - 0x2f) * 2];
        unk_b6 = q[r];
        break;
    }
    case 0x40:
        PlayerActor_LocalSetHeadwearHidden(0);
        Snd_PlaySe(0x43);
        msg = getQuestionsStartMsg();
        break;
    case 0x42:
        unk_b0->changeAct(9);
        break;
    case 0xe:
    case 0x37:
        Talk_CheckAndSetPlayerFlag(0x13, 1);
        TownSessionState_ClearFlag(TownSessionState_Get(), 7);
        unk_3c->setNextMessage(gTalkMsgIndexEnd, 0);
        break;
    case 0x41:
        PlayerActor_LocalSetHeadwearHidden(1);
        Snd_PlaySe(0x44);
        break;
    case 0x45:
        break;
    }
    if (msg != 0xff) {
        u8 m = msg;
        unk_3c->setNextMessage(&m, (void *)tbl);
    }
}

void SpNpcHarrietTalk::vfunc_18() {
    void *p = PlayerData_GetCurrent();
    s32 arg = getChoiceList()->getResult();
    const void *tbl = sSpNpcHarrietMsgKey;
    u32 msg = 0xff;
    switch (unk_1e) {
    case 1:
    case 2:
    case 4:
        if (arg == 0) {
            Hud_Hide();
            msg = 8;
        }
        break;
    case 8:
        if (arg == 0) {
            if (NpcActor_CanPlayerPay(unk_b0, 0xbb8)) {
                NpcActor_ChargePlayer(unk_b0, 0xbb8);
                msg = 0x3c;
                TownSessionState_SetFlag(TownSessionState_Get(), 7);
                unk_b6 = 0;
                unk_b7 = 0;
                unk_b8 = _ZN10PlayerData12getHairStyleEv(p);
                unk_b9 = _ZN10PlayerData12getHairColorEv(p);
            } else {
                msg = 0x3f;
            }
        }
        break;
    case 9:
    case 10:
        if (arg != 4) {
            unk_b7 = sSpNpcHarrietWarmColors[arg];
            msg = 0xc;
        }
        break;
    case 11:
    case 0x38:
        if (arg != 4) {
            unk_b7 = sSpNpcHarrietCoolColors[arg];
            msg = 0xc;
        }
        break;
    }
    if (msg != 0xff) {
        u8 m = msg;
        unk_3c->setNextMessage(&m, (void *)tbl);
    }
}

s32 SpNpcHarrietTalk::getQuestionsStartMsg() {
    void *p = PlayerData_GetCurrent();
    if (_ZN17PlayerSpNpcRecord15getHaircutCountEv(_ZN10PlayerData14getSpNpcRecordEv(p)) >= 0x10) {
        if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(p)) == 0) {
            return 0x15;
        }
        return 0x16;
    }
    return 0x3e;
}

BOOL SpNpcHarriet::vfunc_48() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcHarriet::vfunc_58() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcHarriet::vfunc_4c(u32 cmd, u8 arg) {
    PlayerData_GetCurrent();
    unk_558.unk_08 = arg;
    switch (cmd) {
    case 3:
        changeAct(10);
        break;
    case 1:
        unk_558.unk_08 = arg;
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        if (unk_658.getTopic() == 4 || unk_658.getTopic() == 3) {
            changeAct(6);
        } else {
            changeAct(2);
        }
        break;
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        changeAct(2);
        break;
    case 8:
        if (unk_658.getTopic() == 9) {
            unk_658.setTopic(14);
            changeAct(5);
        } else if (unk_658.getTopic() != 10) {
            unk_658.setTopic(14);
            changeAct(4);
        }
        break;
    }
}

BOOL SpNpcHarriet::tryChairTalk() {
    if (TalkRequest_IsTalking()) {
        return FALSE;
    }
    if (isSessionPaid() == 0) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    s32 bx = 0, by = 0;
    FieldPos_ToUnit(&bx, &by, &v);
    if ((PlayerActor_IsInAction(0x25, 4) || PlayerActor_IsInAction(0x28, 4)) && TalkRequest_AddPlayerTalk7(this, 0)) {
        s32 f = 0;
        s32 x = bx;
        if (*(volatile s32 *)&bx == 4 && by == 0xb) {
            f = 1;
        }
        if (f != 0 || (x == 5 && by == 0xb)) {
            if (isWearingHeadItem()) {
                unk_658.setTopic(3);
            } else {
                unk_658.setTopic(4);
            }
        } else {
            unk_658.setTopic(7);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcHarriet::tryLeavePaidTalk() {
    if (isSessionPaid() == 0) {
        return FALSE;
    }
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    if (v.z > sSpNpcHarrietExitLine.z) {
        unk_658.setTopic(8);
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcHarriet::tryFarewellTalk() {
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    if (Ground_IsOnLockedExit(&v)) {
        unk_658.setTopic(10);
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcHarriet::isWearingHeadItem() {
    void *p = PlayerData_GetCurrent();
    if (*_ZN10PlayerData11getFaceItemEv(p) != 0xfff1 || *_ZN10PlayerData6getHatEv(p) != 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

s32 SpNpcHarriet::isSessionPaid() {
    return TownSessionState_TestFlag(TownSessionState_Get(), 7);
}


extern "C" void *data_ov053_0225a37c[2] = {(void *)_ZN12SpNpcHarriet9mainAct08Ev, 0};

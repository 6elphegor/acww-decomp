#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

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

struct Unk_0201bc1c;

struct ChoiceList {
    s32 getResult();
};

struct TalkWindowState {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
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
    virtual void vfunc_78(void *arg);
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
    Unk_020d7710();
    virtual ~Unk_020d7710();
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
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u8 pad_b0[8];
    u8 unk_b8[0x2a0 - 0xec - 0xb8];
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
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    void requestAction(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct SpNpcAnimHeapHandle { u8 unk_00[8]; SpNpcAnimHeapHandle(); };

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
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
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
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

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
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    SpNpcAnimHeapHandle unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov004_0221b954_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov004_0221cc88_Obj {
    u8 pad_00[0x14];
    u32 unk_14;
};

struct Unk_ov004_0224d0a0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class SpNpcBrewster;
class SpNpcBrewsterTalk;

typedef void (SpNpcBrewsterTalk::*Unk_ov004_0224d010_Fn)();
typedef BOOL (SpNpcBrewster::*Unk_ov004_0224d0a0_Fn)();

struct Unk_ov004_0224d010_Ent {
    Unk_ov004_0224d010_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0224d0a0_Ent {
    Unk_ov004_0224d0a0_Fn fn1;
    Unk_ov004_0224d0a0_Fn fn2;
};

#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define func_0201b08c _ZN8NpcActor8vfunc_4cEi
#define NpcActor_netSetSlotsIfOwner _ZN8NpcActor18netSetSlotsIfOwnerEjjjz
#define NpcActor_isNetOwner _ZN8NpcActor10isNetOwnerEv
#define func_0201b9e8 _ZN8NpcActor13func_0201b9e8Eii
#define NpcActor_netIsTalkLocked _ZN8NpcActor15netIsTalkLockedEv
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_setCollisionRadius _ZN8NpcActor18setCollisionRadiusEi
#define Character_setInteractionRange _ZN9Character19setInteractionRangeEi
#define Unk_02015b8c_getAnimId _ZN12Unk_02015b8c9getAnimIdEj
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcMoveCtrl_setTurnMode _ZN11NpcMoveCtrl11setTurnModeEh
#define NpcMoveAnimSet_setRunAnim _ZN14NpcMoveAnimSet10setRunAnimEi
#define NpcMoveAnimSet_setWalkAnim _ZN14NpcMoveAnimSet11setWalkAnimEi
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define SpNpcActor_setColliderSize _ZN10SpNpcActor15setColliderSizeEii
#define PlayerData_getSpNpcRecord _ZN10PlayerData14getSpNpcRecordEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define PlayerSpNpcRecord_getCafeVisits _ZN17PlayerSpNpcRecord13getCafeVisitsEv
#define PlayerSpNpcRecord_setCafeVisits _ZN17PlayerSpNpcRecord13setCafeVisitsEj
#define PlayerSpNpcRecord_setSableTalkCount _ZN17PlayerSpNpcRecord17setSableTalkCountEj
#define PlayerSpNpcRecord_getSableTalkCount _ZN17PlayerSpNpcRecord17getSableTalkCountEv
#define PlayerId_getGender _ZN8PlayerId9getGenderEv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define Actor_findByProfile _ZN5Actor13findByProfileEjPS_
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define SpNpcRoostGuest_getGuest _ZN15SpNpcRoostGuest8getGuestEv
#define ThreeLayerAnimModel_updateLayers3 _ZN19ThreeLayerAnimModel13updateLayers3Ev
#define JointBlend_start _ZN10JointBlend5startEi

extern "C" {
extern Unk_ov004_0221b954_Global *gCommManager;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Vec gVec3Zero;
extern u32 sSpNpcBrewsterMsgFiles[];
extern u8 data_ov004_0224cec8[];
extern u8 sSpNpcBrewsterModelPath[];
extern u8 sSpNpcBrewsterTexturePath[];
extern SpNpcBrewster *sSpNpcBrewster;
extern Unk_ov004_0224d010_Ent sSpNpcBrewsterTalkScripts[];
extern Unk_ov004_0224d0a0_Ent sSpNpcBrewsterActTable[];
// 0x02250aa8 is a label inside the 0x80-byte table (second ptmf of entry 0)
#define data_ov004_02250aa8 ((Unk_ov004_0224d0a0_Ent *)((u8 *)sSpNpcBrewsterActTable + 8))
extern const u32 data_ov004_02240120[];
extern const u32 sSpNpcBrewsterGuestSpawnPos[];

// main / other-module callees (self first)
void func_0201b08c(void *self, u32 a, u32 b);
s32 NpcActor_netSetSlotsIfOwner(void *self, s32 a, s32 b, s32 c);
BOOL NpcActor_isNetOwner(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);
BOOL NpcActor_netIsTalkLocked(void *self);
void NpcActor_setTalkRequest(void *self, void *p);
u32 NpcActor_getPlayerActor(void *self, u32 id);
s32 NpcActor_getAngleTo(void *self, void *p);
void NpcActor_setCollisionRadius(void *self, s32 v);
void Character_setInteractionRange(void *self, s32 v);
void func_02015ab0(void *self, u32 v);
void *func_02015aac(void *self);
void Unk_02015b8c_getAnimId(void *self, u32 v);
void NpcLookAt_setTarget(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b954_Vec *v, s32 d, s32 e, u8 f);
void NpcMoveCtrl_setSpeedPreset(void *self, s32 a, s32 b, s32 c, s32 d);
void NpcMoveCtrl_setTurnMode(void *self, u8 a);
void NpcMoveAnimSet_setRunAnim(void *self, s32 a);
void NpcMoveAnimSet_setWalkAnim(void *self, s32 a);
void NpcMoveAnimSet_setStandAnim(void *self, s32 a);
s32 NpcActor_CanPlayerPay(s32 p, s32 v);
void NpcActor_ChargePlayer(s32 p, s32 v);
s32 NpcActionCtrl_getAction(void *self);
s32 NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
s32 NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
void SpNpcActor_setColliderSize(void *self, s32 a, s32 b);
void TalkWindowState_setNextMessage(void *self, void *p, u32 d);
void *PlayerData_GetCurrent(void);
void *PlayerData_getSpNpcRecord(void *p);
void *PlayerData_getPlayerId(void *p);
s32 PlayerSpNpcRecord_getCafeVisits(void *p);
void PlayerSpNpcRecord_setCafeVisits(void *p, u32 v);
void PlayerSpNpcRecord_setSableTalkCount(void *self, u32 v);
u32 PlayerSpNpcRecord_getSableTalkCount(void *self);
s32 PlayerId_getGender(void *p);
void func_02003ddc(void *p, u32 a, u32 b, u32 c);
void Camera_UnmuteSe();
void Bgm_ReleasePriority(u32 a);
void Bgm_Release(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Bgm_Request(u32 a, u32 b, u32 c, u32 d);
s32 Random_GlobalBelow(s32 n);
s32 Talk_CheckAndSetPlayerFlag(...);
s32 GameStart_IsActive(void);
s32 NetArea_IsLocalOwner(void);
s32 CommManager_isOnline(void *p);
s32 CommManager_isSlotActive(void *p, u32 i);
s16 *DebugVar_GetPtr(s32 a, s32 b);
void *Actor_findByProfile(s32 a, s32 b);
void Actor_spawn(s32 a, s32 b, const void *c, const void *d, s32 e);
s32 SpNpcRoostGuest_getGuest(void *p);
s32 PlayerActor_IsInAction(s32 a, s32 b);
void Hud_Hide(void);
void Hud_Show(void);
void TalkRequest_SetTargetDone(void *p);
void TalkRequest_AddPlayerTalk7(void *p, s32 a);
void Model_GetJointWorldMtx(void *p, void *q, s32 n);
void ThreeLayerAnimModel_updateLayers3(void *p);
void JointBlend_start(void *p, s32 n);
s32 Bgm_GetCurrent(void);
s32 func_020e77cc(s32 a, s32 b, s32 c);
u8 *Snd_GetBeatState(void);
// other ov004 units
void PlayerActor_LocalPlayAnim98();
void CafeCoffeeSet_SetState09();
s32 CafeCoffeeSet_IsAnim0CDone();
void CafeCoffeeSet_SetState06();
void CafeCoffeeSet_SetState07();
void CafeCoffeeSet_SetState01();
void CafeCoffeeSet_SetState00();
s32 CafeCoffeeSet_GetState();
void CafeCoffeeSet_SetState08();
void PlayerActor_LocalRequestDrinkCoffee();
s32 CafeCoffeeSet_IsAnim0BAtFrame9();
void CafeCoffeeSet_SetState03();
void CafeCoffeeSet_SetState04();
void CafeCoffeeSet_SetState02();
void CafeCoffeeSet_SetState05();
void PlayerActor_LocalRequestStandUp(s32 a);
void CafeCoffeeSet_SyncToBrewster(void);
}

class SpNpcBrewsterTalk : public Unk_020d7710 {
public:
    SpNpcBrewsterTalk();
    virtual ~SpNpcBrewsterTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_88();

    void runScript03();
    void runDrinkScript();
    void runCoffeeScript();
    void setScript(s32 v);
    void attachOwner(s32 v);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ SpNpcBrewster *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 pad_b6[2];
};

class SpNpcBrewster : public SpNpcActor {
public:
    SpNpcBrewster() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

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
    void changeAct(s32 idx);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcBrewsterTalk unk_658;
    /* 0x710 */ s16 unk_710;
    /* 0x712 */ u8 pad_712[2];
    /* 0x714 */ u8 unk_714[0x30];
    /* 0x744 */ u8 unk_744[0x30];
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u16 unk_778;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
};

struct Unk_ov004_SceneEntry {
    SpNpcBrewster *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" SpNpcBrewster *SpNpcBrewster_Create() { return new SpNpcBrewster; }

BOOL SpNpcBrewster::vfunc_04() {
    if (SpNpcActor::vfunc_04() == 0) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &unk_658);
    unk_658.attachOwner((s32)this);
    NpcActor_setCollisionRadius(this, 0x100);
    Character_setInteractionRange(this, 0x5000);
    NpcMoveCtrl_setSpeedPreset(&unk_350, 2, 0x166, 0xcc, 0x133);
    NpcMoveAnimSet_setStandAnim(&unk_2a0, 0xf2);
    NpcMoveAnimSet_setWalkAnim(&unk_2a0, 0xf4);
    NpcMoveAnimSet_setRunAnim(&unk_2a0, 0xf4);
    return TRUE;
}

BOOL SpNpcBrewster::vfunc_00() {
    if (SpNpcActor::vfunc_00() == 0) {
        return FALSE;
    }
    sSpNpcBrewster = this;
    unk_710 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (NetArea_IsLocalOwner() != 0) {
            changeAct(0);
        } else {
            changeAct(5);
        }
    } else {
        changeAct(0);
    }
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) == 0) {
        Actor_spawn(0x66, 0xd01d, sSpNpcBrewsterGuestSpawnPos, data_ov004_02240120, 0);
    }
    return TRUE;
}

BOOL SpNpcBrewster::vfunc_0c() {
    if (SpNpcActor::vfunc_0c() == 0) {
        return FALSE;
    }
    sSpNpcBrewster = 0;
    return TRUE;
}

BOOL SpNpcBrewster::onDraw() {
    if (NpcActor::onDraw() == 0) {
        return FALSE;
    }
    Model_GetJointWorldMtx(&unk_ec, unk_714, 0xe);
    Model_GetJointWorldMtx(&unk_ec, unk_744, 0xb);
    CafeCoffeeSet_SyncToBrewster();
    return TRUE;
}

u8 *SpNpcBrewster::getTexturePath() {
    return sSpNpcBrewsterTexturePath;
}

u8 *SpNpcBrewster::getModelPath() {
    return sSpNpcBrewsterModelPath;
}

BOOL SpNpcBrewster::updateAct() {
    BOOL r = FALSE;
    s32 i = unk_654;
    if (data_ov004_02250aa8[i].fn1 != 0) {
        r = (this->*sSpNpcBrewsterActTable[i].fn2)();
    }
    if (func_020e77cc(Bgm_GetCurrent(), 0x63, 0xab) != 0) {
        if (unk_77a == 0) {
            if (((unk_ec.unk_a4 << 4) >> 16) != 0) {
                JointBlend_start(&unk_ec.unk_b8, 10);
            }
            unk_77a = 1;
        }
        u8 *q = Snd_GetBeatState();
        if (q != 0) {
            if ((s8)q[3] != 1) {
                unk_ec.unk_a4 = 0;
                unk_ec.unk_ac = *(u32 *)(q + 0x10);
                ThreeLayerAnimModel_updateLayers3(&unk_ec);
                unk_ec.unk_ac = 0;
            }
        }
    } else {
        unk_77a = 0;
    }
    return r;
}

void SpNpcBrewster::changeAct(s32 idx) {
    BOOL r = TRUE;
    if (sSpNpcBrewsterActTable[idx].fn1 != 0) {
        r = (this->*sSpNpcBrewsterActTable[idx].fn1)();
    }
    if (r != 0) {
        unk_654 = idx;
    }
}

BOOL SpNpcBrewster::setupAct00() {
    unk_774 = 0;
    NpcActionCtrl_requestAction(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcBrewster::mainAct00() {
    if (unk_774 > 0) {
        unk_774++;
        if (unk_774 > 0x14) {
            NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
            unk_774 = -1;
        }
    } else if (unk_774 == 0) {
        if (*(s16 *)((u8 *)this + 0x3d2) > 0x2000) {
            unk_774 = 1;
        }
    }
    if (CommManager_isOnline(gCommManager) == 0 && *DebugVar_GetPtr(0, 0x4a) == 0) {
        if (PlayerActor_IsInAction(0x27, 4) != 0) {
            TalkRequest_AddPlayerTalk7(this, 0);
        }
    }
    if (unk_710 != unk_8e) {
        changeAct(3);
        return TRUE;
    }
    return TRUE;
}

BOOL SpNpcBrewster::setupAct01() {
    void *p = func_02015aac(&unk_658);
    s32 r = 0;
    NpcLookAt_setTarget(&unk_3b0, 1, r, r, &gVec3Zero, 4, data_020c6d1c, 1);
    if (p != 0) {
        r = NpcActor_getAngleTo(this, p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL SpNpcBrewster::mainAct01() {
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        if (CommManager_isOnline(gCommManager) == 0 && *DebugVar_GetPtr(0, 0x4a) == 0) {
            if (PlayerActor_IsInAction(0x28, 4) != 0) {
                PlayerActor_LocalRequestStandUp(2);
            }
            Hud_Show();
        }
        NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcBrewster::setupAct02() {
    return TRUE;
}

BOOL SpNpcBrewster::mainAct02() {
    return TRUE;
}

BOOL SpNpcBrewster::setupAct03() {
    NpcActionCtrl_requestAction(&unk_564, 3, 2, 0, 0, 0, unk_710, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcBrewster::mainAct03() {
    if (NpcActionCtrl_getAction(&unk_564) == 3) {
        if (NpcActionCtrl_isActionDone(&unk_564) != 0) {
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcBrewster::setupAct04() {
    return TRUE;
}

BOOL SpNpcBrewster::mainAct04() {
    if (PlayerActor_IsInAction(0x28, 4) != 0) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcBrewster::setupAct05() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcBrewster::mainAct05() {
    if (NpcActor_isNetOwner(this) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) != 0 && a == (s32)gCommManager->unk_64 && a == b) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, gCommManager->unk_64);
            ((ActorTalkRequest *)&unk_658)->vfunc_08();
            s32 r = NpcActor_getPlayerActor(this, 4);
            func_02015ab0(&unk_658, r);
            changeAct(1);
        } else if (NetArea_IsLocalOwner() != 0 && b == 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcBrewster::setupAct06() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcBrewster::mainAct06() {
    if (NpcActor_isNetOwner(this) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) != 0) {
            if (a == 4) {
                if (NetArea_IsLocalOwner() != 0) {
                    NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                    changeAct(0);
                }
            }
        }
    }
    return TRUE;
}

BOOL SpNpcBrewster::setupAct07() {
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcBrewster (continued)

BOOL SpNpcBrewster::mainAct07() {
    return TRUE;
}

SpNpcBrewsterTalk::SpNpcBrewsterTalk() {}

SpNpcBrewsterTalk::~SpNpcBrewsterTalk() {}

void SpNpcBrewsterTalk::attachOwner(s32 v) {
    vfunc_08();
    unk_b0 = (SpNpcBrewster *)v;
}

void SpNpcBrewsterTalk::vfunc_78(void *arg) {
    Unk_ov004_0221b6d4_Out *out = (Unk_ov004_0221b6d4_Out *)arg;
    void *h = PlayerData_getSpNpcRecord(PlayerData_GetCurrent());
    if (GameStart_IsActive() != 0) {
        out->unk_00 = sSpNpcBrewsterMsgFiles[1];
        out->unk_04 = 0x1f;
    } else {
        out->unk_00 = sSpNpcBrewsterMsgFiles[0];
        void *o = Actor_findByProfile(0x66, 0);
        if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
            out->unk_04 = Random_GlobalBelow(3) + 0x55;
        } else if (Talk_CheckAndSetPlayerFlag(0x17) != 0) {
            if (o != 0 && SpNpcRoostGuest_getGuest(o) == 7) {
                out->unk_04 = 0x58;
            } else {
                s32 c = PlayerSpNpcRecord_getCafeVisits(h) >> 2;
                out->unk_04 = data_ov004_0224cec8[c] + Random_GlobalBelow(3);
            }
        } else if (PlayerActor_IsInAction(0x28, 4) == 0) {
            if (Talk_CheckAndSetPlayerFlag(0x16, 1) == 0) {
                out->unk_04 = PlayerSpNpcRecord_getCafeVisits(h) >> 1;
            } else if (o != 0 && SpNpcRoostGuest_getGuest(o) == 7) {
                out->unk_04 = 0x58;
            } else {
                out->unk_04 = (PlayerSpNpcRecord_getCafeVisits(h) >> 2) + 0x49;
            }
        } else {
            if (Talk_CheckAndSetPlayerFlag(0x17, 0) == 0) {
                Hud_Hide();
            }
            out->unk_04 = (PlayerSpNpcRecord_getCafeVisits(h) >> 2) + 0x14;
        }
    }
}

void SpNpcBrewsterTalk::vfunc_14() {
    void *h = PlayerData_getSpNpcRecord(PlayerData_GetCurrent());
    Unk_ov004_0221cc88_Obj *o = (Unk_ov004_0221cc88_Obj *)unk_3c;
    u32 d = sSpNpcBrewsterMsgFiles[0];
    u32 r = 0xff;
    if (GameStart_IsActive() == 0) {
        if ((s32)unk_1e >= 0x1c && (s32)unk_1e <= 0x23) {
            if ((u32)PlayerSpNpcRecord_getCafeVisits(h) >= 5) {
                if (Random_GlobalBelow(3) == 0) {
                    r = 0x2c;
                    goto next0;
                }
            }
            o->unk_14 = 0;
            setScript(1);
        }
    next0:
        if (unk_1e != 0x2d && unk_1e != 0x2e) {
            goto next1;
        }
        if (unk_1e == 0x2d) {
            unk_b5 = 1;
        }
        o->unk_14 = 0;
        setScript(1);
    next1:
        if ((s32)unk_1e >= 0x30 && (s32)unk_1e <= 0x3b) {
            o->unk_14 = 0;
            setScript(3);
        }
        if (r != 0xff) {
            u8 buf;
            buf = r;
            TalkWindowState_setNextMessage(unk_3c, &buf, d);
        }
    }
}

void SpNpcBrewsterTalk::vfunc_18() {
    void *h = PlayerData_getSpNpcRecord(PlayerData_GetCurrent());
    s32 t = getChoiceList()->getResult();
    u32 d = sSpNpcBrewsterMsgFiles[0];
    u32 r = 0xff;
    if ((s32)unk_1e >= 0x24 && (s32)unk_1e <= 0x2b) {
        if (t != 0) {
            r = (u8)((PlayerSpNpcRecord_getCafeVisits(h) >> 2) + 0x28);
        } else {
            ((Unk_ov004_0221cc88_Obj *)unk_3c)->unk_14 = 0;
            setScript(2);
        }
    }
    switch (unk_1e) {
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        if (t == 0) {
            if (NpcActor_CanPlayerPay((s32)unk_b0, 200) == 0) {
                r = 0x2f;
            } else {
                NpcActor_ChargePlayer((s32)unk_b0, 200);
                r = Random_GlobalBelow(2);
                r = (u8)(r + (((PlayerSpNpcRecord_getCafeVisits(h) >> 2) << 1) + 0x1c));
            }
        } else {
            r = (u8)((PlayerSpNpcRecord_getCafeVisits(h) >> 2) + 0x18);
        }
        break;
    }
    if (r != 0xff) {
        u8 buf;
        buf = r;
        TalkWindowState_setNextMessage(unk_3c, &buf, d);
    }
}

void SpNpcBrewsterTalk::vfunc_80() {
    s32 i = unk_ac;
    if (sSpNpcBrewsterTalkScripts[i].flag != 0) {
        if (sSpNpcBrewsterTalkScripts[i].fn != 0) {
            (this->*sSpNpcBrewsterTalkScripts[i].fn)();
        }
    }
}

void SpNpcBrewsterTalk::vfunc_88() {
    s32 i = unk_ac;
    if (sSpNpcBrewsterTalkScripts[i].flag == 0) {
        if (sSpNpcBrewsterTalkScripts[i].fn != 0) {
            (this->*sSpNpcBrewsterTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void SpNpcBrewsterTalk::setScript(s32 v) {
    unk_ac = v;
    unk_b4 = 0;
}

void SpNpcBrewsterTalk::runCoffeeScript() {
    TalkWindowState *r6 = unk_3c;
    u8 r7 = (u8)((PlayerSpNpcRecord_getCafeVisits(PlayerData_getSpNpcRecord(PlayerData_GetCurrent())) >> 2) + 0x24);
    void *r5 = &unk_b0->unk_564;
    u8 buf;
    switch (unk_b4) {
    case 0:
        if (r6->unk_04 == 5) {
            NpcLookAt_setTarget(&unk_b0->unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 1;
        }
        break;
    case 1:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcActionCtrl_requestPlayAnim(r5, 1, 0xf6, 1, data_020c6cc8, 0);
            CafeCoffeeSet_SetState03();
            NpcMoveAnimSet_setStandAnim(&unk_b0->unk_2a0, 0xf3);
            NpcMoveAnimSet_setWalkAnim(&unk_b0->unk_2a0, 0xf5);
            NpcMoveAnimSet_setRunAnim(&unk_b0->unk_2a0, 0xf5);
            unk_b4 = 2;
            unk_b0->unk_778 = 0;
        }
        break;
    case 2:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 5) {
            func_02003ddc(&unk_b0->unk_514, 0x4db, 0x7f, 0);
        }
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcMoveCtrl_setTurnMode(&unk_b0->unk_350, 2);
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, (s16)0x8000, 0, 0, data_020c6cc8, 0);
            CafeCoffeeSet_SetState01();
            unk_b4 = 3;
        }
        break;
    case 3:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcActionCtrl_requestAction(r5, 2, 1, 0x19700, 0x14000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 4;
        }
        break;
    case 4:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcMoveCtrl_setTurnMode(&unk_b0->unk_350, 0);
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 5;
        }
        break;
    case 5:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcActionCtrl_requestPlayAnim(r5, 1, 0xf7, 1, data_020c6cc8, 0);
            CafeCoffeeSet_SetState04();
            unk_b4 = 6;
            unk_b0->unk_778 = 0;
        }
        break;
    case 6:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xd) {
            func_02003ddc(&unk_b0->unk_514, 0x4dc, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x1e) {
            func_02003ddc(&unk_b0->unk_514, 0x4dd, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x46) {
            func_02003ddc(&unk_b0->unk_514, 0x4de, 0x7f, 0);
        }
        if (NpcActionCtrl_isActionDone(r5)) {
            CafeCoffeeSet_SetState02();
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 7;
        }
        break;
    case 7:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcActionCtrl_requestAction(r5, 2, 1, 0x19700, 0x15000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 8;
        }
        break;
    case 8:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 9;
        }
        break;
    case 9:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcLookAt_setTarget(&unk_b0->unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
            NpcActionCtrl_requestPlayAnim(r5, 1, 0xf8, 1, data_020c6cc8, 0);
            CafeCoffeeSet_SetState05();
            unk_b4 = 10;
            unk_b0->unk_778 = 0;
        }
        break;
    case 10:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xf) {
            func_02003ddc(&unk_b0->unk_514, 0x4df, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x1e) {
            func_02003ddc(&unk_b0->unk_514, 0x4e0, 0x7f, 0);
        }
        if (NpcActionCtrl_isActionDone(r5)) {
            buf = r7;
            TalkWindowState_setNextMessage(r6, &buf, sSpNpcBrewsterMsgFiles[0]);
            r6->unk_08 = 1;
            setScript(0);
        }
        break;
    }
}

void SpNpcBrewsterTalk::runDrinkScript() {
    TalkWindowState *r6 = unk_3c;
    if (r6->unk_04 == 5) {
        if (CafeCoffeeSet_GetState() == 5) {
            CafeCoffeeSet_SetState08();
            PlayerActor_LocalRequestDrinkCoffee();
            unk_b0->unk_778 = 0;
        }
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 7) {
            func_02003ddc(&unk_b0->unk_514, 0x4e1, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x14) {
            func_02003ddc(&unk_b0->unk_514, 0x4e2, 0x7f, 0);
            Bgm_RequestSilence(0x10, 0x14, 0);
        }
        if (unk_b0->unk_778 == 0x28) {
            func_02003ddc(&unk_b0->unk_514, 0x4e3, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x46) {
            if (PlayerId_getGender(PlayerData_getPlayerId(PlayerData_GetCurrent())) == 0) {
                func_02003ddc(&unk_b0->unk_514, 0x4e4, 0x7f, 0);
            } else {
                func_02003ddc(&unk_b0->unk_514, 0x4e5, 0x7f, 0);
            }
        }
        if (CafeCoffeeSet_IsAnim0BAtFrame9()) {
            u8 r4;
            u8 buf;
            if (unk_b5 != 0) {
                r4 = 0x30;
            } else {
                r4 = (u8)(Random_GlobalBelow(0xb) + 0x31);
            }
            Bgm_ReleasePriority(0x10);
            Bgm_RequestSilence(0xc, 0, 0xa);
            Bgm_Request(0xd, 0x3e, 0x7f, 1);
            buf = r4;
            TalkWindowState_setNextMessage(r6, &buf, sSpNpcBrewsterMsgFiles[0]);
            r6->unk_08 = 1;
            Talk_CheckAndSetPlayerFlag(0x17, 1);
            void *p = PlayerData_getSpNpcRecord(PlayerData_GetCurrent());
            if (Random_GlobalBelow(0xa) < 5) {
                PlayerSpNpcRecord_setCafeVisits(p, PlayerSpNpcRecord_getCafeVisits(p) + 1);
            }
            setScript(0);
        }
    }
}

void SpNpcBrewsterTalk::vfunc_70() {
    s32 t = unk_1e;
    if (t >= 0x30 && t <= 0x3b) {
        Bgm_Release(0x3e);
        Bgm_RequestSilence(0xc, 6, 0x1a);
    }
}

void SpNpcBrewsterTalk::runScript03() {
    TalkWindowState *r6 = unk_3c;
    u8 r7 = (u8)((PlayerSpNpcRecord_getCafeVisits(PlayerData_getSpNpcRecord(PlayerData_GetCurrent())) >> 2) + 0x51);
    void *r5 = &unk_b0->unk_564;
    u8 buf;
    switch (unk_b4) {
    case 0:
        if (r6->unk_04 == 5) {
            PlayerActor_LocalPlayAnim98();
            CafeCoffeeSet_SetState09();
            unk_b4 = 1;
            unk_b0->unk_778 = 0;
        }
        break;
    case 1:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xf) {
            func_02003ddc(&unk_b0->unk_514, 0x4e6, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x14) {
            func_02003ddc(&unk_b0->unk_514, 0x4e7, 0x7f, 0);
        }
        if (CafeCoffeeSet_IsAnim0CDone()) {
            Camera_UnmuteSe();
            NpcLookAt_setTarget(&unk_b0->unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
            NpcActionCtrl_requestPlayAnim(r5, 4, 0xf8, 3, data_020c6cc8, 0);
            CafeCoffeeSet_SetState06();
            unk_b4 = 2;
            unk_b0->unk_778 = 0;
        }
        break;
    case 2:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0x12) {
            func_02003ddc(&unk_b0->unk_514, 0x4e8, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x2d) {
            func_02003ddc(&unk_b0->unk_514, 0x4e9, 0x7f, 0);
        }
        if (NpcActionCtrl_isActionDone(r5)) {
            CafeCoffeeSet_SetState01();
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 3;
        }
        break;
    case 3:
        if (NpcActionCtrl_isActionDone(r5)) {
            NpcActionCtrl_requestPlayAnim(r5, 1, 0xf6, 3, data_020c6cc8, 0);
            CafeCoffeeSet_SetState07();
            NpcMoveAnimSet_setStandAnim(&unk_b0->unk_2a0, 0xf2);
            NpcMoveAnimSet_setWalkAnim(&unk_b0->unk_2a0, 0xf4);
            NpcMoveAnimSet_setRunAnim(&unk_b0->unk_2a0, 0xf4);
            unk_b4 = 4;
            unk_b0->unk_778 = 0;
        }
        break;
    case 4:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xa) {
            func_02003ddc(&unk_b0->unk_514, 0x4ea, 0x7f, 0);
        }
        if (NpcActionCtrl_isActionDone(r5)) {
            CafeCoffeeSet_SetState00();
            NpcLookAt_setTarget(&unk_b0->unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
            NpcActionCtrl_requestAction(r5, 3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 5;
        }
        break;
    case 5:
        if (NpcActionCtrl_isActionDone(r5)) {
            buf = r7;
            TalkWindowState_setNextMessage(r6, &buf, sSpNpcBrewsterMsgFiles[0]);
            r6->unk_08 = 1;
            setScript(0);
            unk_b5 = 0;
        }
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcBrewsterTalk

BOOL SpNpcBrewster::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&unk_618) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcBrewster::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, arg);
            changeAct(7);
        } else if (NpcActor_isNetOwner(this)) {
            s32 g = gCommManager->unk_64;
            NpcActor_netSetSlotsIfOwner(this, 1, g, g);
            changeAct(7);
        }
        break;
    case 1:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->unk_64) {
            NpcActor_netSetSlotsIfOwner(this, 1, arg, arg);
            changeAct(6);
        } else if (NpcActor_isNetOwner(this)) {
            Unk_ov004_0221b954_Global *gl = gCommManager;
            s32 g = gl->unk_64;
            NpcActor_netSetSlotsIfOwner(this, 1, g, g);
            ActorTalkRequest *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, NpcActor_getPlayerActor(this, 4));
            if (CommManager_isOnline(gl) || *DebugVar_GetPtr(0, 0x4a) != 0) {
                changeAct(1);
            } else {
                changeAct(4);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->unk_64) {
            NpcActor_netSetSlotsIfOwner(this, 1, arg, arg);
            changeAct(6);
        } else if (NpcActor_isNetOwner(this)) {
            s32 g = gCommManager->unk_64;
            NpcActor_netSetSlotsIfOwner(this, 1, g, g);
            ActorTalkRequest *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, NpcActor_getPlayerActor(this, 4));
            changeAct(1);
        }
        break;
    case 8:
        if (arg == 4) {
            if (NetArea_IsLocalOwner()) {
                NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                changeAct(3);
            } else {
                NpcActor_netSetSlotsIfOwner(this, 1, 4, gCommManager->unk_64);
                changeAct(5);
            }
        }
        break;
    case 4:
        if (NpcActor_netIsTalkLocked(this) && NpcActor_isNetOwner(this)) {
            a = 4;
            b = 4;
            if (func_0201b9e8(this, &a, &b)) {
                if (arg != 4) {
                    if (arg == b) {
                        goto body;
                    }
                }
                if (arg == 4) {
                body:
                    NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                    changeAct(0);
                }
            }
        }
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
    func_0201b08c(this, cmd, arg);
}

extern "C" void *SpNpcBrewster_GetJointMtxE() { return &sSpNpcBrewster->unk_714; }

extern "C" void *SpNpcBrewster_GetJointMtxB() { return &sSpNpcBrewster->unk_744; }

extern "C" u32 SpNpcBrewster_GetAnimFrame() { return ((u32)sSpNpcBrewster->unk_ec.unk_a4 << 4) >> 16; }

extern "C" void SpNpcBrewster_GetAnimState() { Unk_02015b8c_getAnimId(&sSpNpcBrewster->unk_334, 0); }

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcBrewster


extern "C" void _ZN13SpNpcBrewster9mainAct05Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct06Ev();
extern "C" void _ZN17SpNpcBrewsterTalk11runScript03Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct07Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct02Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct00Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct06Ev();
extern "C" void _ZN17SpNpcBrewsterTalk14runDrinkScriptEv();
extern "C" void _ZN13SpNpcBrewster10setupAct05Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct07Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct03Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct03Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct04Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct04Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct02Ev();
extern "C" void _ZN13SpNpcBrewster9mainAct01Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct01Ev();
extern "C" void _ZN13SpNpcBrewster10setupAct00Ev();
extern "C" void _ZN17SpNpcBrewsterTalk15runCoffeeScriptEv();
extern "C" const u32 data_ov004_02240120[2] = {0x40000000, 0};
extern "C" const u32 sSpNpcBrewsterGuestSpawnPos[3] = {0x15000, 0x1000, 0x13000};
extern "C" u8 data_ov004_0224cec8[4] = {0x08, 0x0b, 0x0e, 0x11};
extern "C" u8 data_ov004_0224cf6c[12] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'c', 'a', 'f', 'e', 0};
extern "C" u8 data_ov004_0224cf78[17] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};
extern "C" void *data_ov004_0224cf24[2] = {(void *)_ZN13SpNpcBrewster9mainAct03Ev, 0};
extern "C" u8 sSpNpcBrewsterModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'g', 'e', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcBrewsterTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'g', 'e', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov004_SceneEntry sSpNpcBrewsterProfile = {SpNpcBrewster_Create, 0x63, 0x6a, 0, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224cf0c[2] = {(void *)_ZN13SpNpcBrewster10setupAct05Ev, 0};
extern "C" void *data_ov004_0224cf5c[2] = {(void *)_ZN13SpNpcBrewster10setupAct00Ev, 0};
extern "C" u32 sSpNpcBrewsterMsgFiles[2] = {(u32)data_ov004_0224cf6c, (u32)data_ov004_0224cf78};
extern "C" void *data_ov004_0224cf4c[2] = {(void *)_ZN13SpNpcBrewster10setupAct01Ev, 0};
extern "C" void *data_ov004_0224cf44[2] = {(void *)_ZN13SpNpcBrewster9mainAct01Ev, 0};
extern "C" void *data_ov004_0224cf3c[2] = {(void *)_ZN13SpNpcBrewster10setupAct02Ev, 0};
extern "C" void *data_ov004_0224cf34[2] = {(void *)_ZN13SpNpcBrewster10setupAct04Ev, 0};
extern "C" void *data_ov004_0224cef4[2] = {(void *)_ZN13SpNpcBrewster9mainAct00Ev, 0};
extern "C" void *data_ov004_0224ced4[2] = {(void *)_ZN13SpNpcBrewster9mainAct06Ev, 0};
extern "C" void *data_ov004_0224cf14[2] = {(void *)_ZN13SpNpcBrewster9mainAct07Ev, 0};
extern "C" void *data_ov004_0224cedc[2] = {(void *)_ZN17SpNpcBrewsterTalk11runScript03Ev, 0};
extern "C" void *data_ov004_0224cf64[2] = {(void *)_ZN17SpNpcBrewsterTalk15runCoffeeScriptEv, 0};
extern "C" void *data_ov004_0224cecc[2] = {(void *)_ZN13SpNpcBrewster9mainAct05Ev, 0};
extern "C" void *data_ov004_0224cf04[2] = {(void *)_ZN17SpNpcBrewsterTalk14runDrinkScriptEv, 0};
extern "C" void *data_ov004_0224cefc[2] = {(void *)_ZN13SpNpcBrewster10setupAct06Ev, 0};
extern "C" void *data_ov004_0224ceec[2] = {(void *)_ZN13SpNpcBrewster9mainAct02Ev, 0};
extern "C" void *data_ov004_0224cf2c[2] = {(void *)_ZN13SpNpcBrewster9mainAct04Ev, 0};
extern "C" void *data_ov004_0224cf1c[2] = {(void *)_ZN13SpNpcBrewster10setupAct03Ev, 0};
extern "C" void *data_ov004_0224cee4[2] = {(void *)_ZN13SpNpcBrewster10setupAct07Ev, 0};
typedef BOOL (SpNpcBrewster::*Unk_ov004_O_Fn)();
typedef void (SpNpcBrewsterTalk::*Unk_ov004_D_Fn)();
extern "C" Unk_ov004_0224d010_Ent sSpNpcBrewsterTalkScripts[4] = {
    {0, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224cf64, 1},
    {*(Unk_ov004_D_Fn *)data_ov004_0224cf04, 1},
    {*(Unk_ov004_D_Fn *)data_ov004_0224cedc, 1},
};
extern "C" Unk_ov004_0224d0a0_Ent sSpNpcBrewsterActTable[8] = {
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf5c, *(Unk_ov004_O_Fn *)data_ov004_0224cef4},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf4c, *(Unk_ov004_O_Fn *)data_ov004_0224cf44},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf3c, *(Unk_ov004_O_Fn *)data_ov004_0224ceec},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf1c, *(Unk_ov004_O_Fn *)data_ov004_0224cf24},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf34, *(Unk_ov004_O_Fn *)data_ov004_0224cf2c},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf0c, *(Unk_ov004_O_Fn *)data_ov004_0224cecc},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cefc, *(Unk_ov004_O_Fn *)data_ov004_0224ced4},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cee4, *(Unk_ov004_O_Fn *)data_ov004_0224cf14},
};
extern "C" SpNpcBrewster *sSpNpcBrewster = 0;

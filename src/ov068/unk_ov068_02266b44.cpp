// mwcc-version: 1.2/base
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

class FieldVillager;
class SpNpcNookIntro;
class SpNpcNookIntroTalk;

#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_setNpcHandle _ZN8NpcActor12setNpcHandleEPt
#define HouseData_getDebt _ZN9HouseData7getDebtEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define Unk_02097ff4_clearFlag _ZN12Unk_02097ff49clearFlagEj

struct Unk_ov068_02266680_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02266bd0_Scene {
    u8 pad_00[4];
    s32 unk_04, unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov068_02266f30_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov068_02266bd0_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[0x1b0];
    Unk_ov068_02266680_Vec unk_714;
};

struct Unk_ov068_0226fd68_Vec {
    s32 x, y, z;
};

struct Unk_ov068_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

// Main's tiny class with an external destructor (one u16 element of the local static table of vfunc_04).
struct ItemId {
    u16 v;
    ItemId(u16 x) { v = x; }
    ~ItemId();
};

extern "C" {
void *PlayerData_GetCurrent();
BOOL TalkRequest_AddPlayerTalk6(void *p, s32 a);
void TalkRequest_SetTargetDone(void *p);
u32 NookShop_GetLevel(void *p);
u32 func_020e7518(void *p);
void ProcBase_RequestDelete(void *p);
void Bgm_ReleasePriority(u32 a);
void Bgm_Release(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void Camera_SetModeDefault();
void Camera_FocusOnPoint(Unk_ov068_02266680_Vec *v);
BOOL func_020951b8(s32 a);
void *func_020947f0(s32 a);
void PlayerActor_RequestWalkTo(void *v, u32 a, u32 b);
void func_02094f48(s32 a, s32 b);
void GameStart_Clear();
BOOL GameStart_IsNewResident();
BOOL GameStart_IsNewTown();
s32 func_020978a4(void *self);
void Unk_02097ff4_clearFlag(void *self, s32 a);
void *HouseData_getDebt(void *self);
void TalkWindowState_setNextMessage(void *self, void *buf, void *p);
void ActorTalkRequest_setNumberSlot(void *self, void *a, s32 b, s32 c, s32 d, s32 e);
void func_02015ab0(void *self, s32 a);
void *func_02015aac(void *self);
s32 NpcActor_getPlayerActor(void *self, s32 a);
u32 NpcActor_getAngleTo(void *self, void *q);
void NpcActor_setTalkRequest(void *self, void *q);
void NpcActor_setNpcHandle(void *self, u16 *q);
s32 NpcActionCtrl_isActionDone(void *self);
s32 NpcActionCtrl_getAction(void *self);
void NpcActionCtrl_requestAction(void *self, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
void NpcMoveCtrl_setSpeedPreset(void *self, s32 a, s32 b, s32 c, s32 d);
extern u16 data_020c6cc8;
extern u32 data_021ed104;
extern u8 data_021edb68;
extern u8 gTalkMsgIndexEnd[];
extern u8 gSaveHouse[];
extern u8 gSavePlayers[];
extern void *data_ov068_0226fcfc;
extern const char *sNookModelPaths[];
extern const char *sNookTexPaths[];
}

// Member object types of the scene object, named after their constructors.
struct ThreeLayerAnimModel { ThreeLayerAnimModel(); u32 pad[0x1b4 / 4]; };
struct Unk_0201ad3c { Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct NpcFaceAnim { NpcFaceAnim(); u32 pad[0x88 / 4]; };
struct NpcAnimCtrl { NpcAnimCtrl(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); u32 pad[0x68 / 4]; };
struct NpcSpeechState { NpcSpeechState(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct CollisionState { CollisionState(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x1c / 4]; u32 unk_1c; u32 pad_20[0x24 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct NpcActionCtrl { NpcActionCtrl(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); u32 pad[0x28 / 4]; };
struct Unk_020e06dc { Unk_020e06dc(); u32 pad[0x14 / 4]; };

// ---------------------------------------------------------------------------------------------------------------------
// Scene object (vtable 0x0226ff34). The class chain declares every slot after the class that names it in the vtable symbols.
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
    virtual void vfunc_4c(s32 a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
    u32 unk_d4, unk_d8, unk_dc;
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual const char *getTexturePath();
    virtual const char *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();

    u16 pad_e0[5];
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
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual BOOL vfunc_a8();
    Unk_020e06dc unk_640;
    u32 unk_654;
};

// Dialog sub-object at +0x658 (vtable 0x0226fea4): chain ActorTalkRequest <- TalkMsgRequest <- Unk_020d7710 <- SpNpcTalkRequest <- 0226fea4
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
    virtual void vfunc_78(Unk_ov068_02266f30_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov068_02266bd0_Scene *unk_3c;
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

struct Unk_ov068_0226fea4_Flag {
    u8 flag;
    u8 pad[11];
};

class SpNpcNookIntroTalk : public SpNpcTalkRequest {
public:
    SpNpcNookIntroTalk();
    virtual ~SpNpcNookIntroTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov068_02266f30_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void runWalkScript();
    void setScript(s32 a);
    void attachOwner(FieldVillager *o);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 pad_b1[3];
    /* 0xb4 */ FieldVillager *unk_b4;
};

typedef BOOL (SpNpcNookIntro::*Unk_ov068_02267238_Fn)();
struct Unk_ov068_02267238_Entry {
    Unk_ov068_02267238_Fn a;
    Unk_ov068_02267238_Fn b;
};
typedef void (SpNpcNookIntroTalk::*Unk_ov068_0226fea4_Fn)();
struct Unk_ov068_0226fea4_Ent {
    Unk_ov068_0226fea4_Fn fn;
    u8 flag;
    u8 pad[3];
};

class SpNpcNookIntro : public SpNpcActor {
public:
    SpNpcNookIntro() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual const char *getTexturePath();
    virtual const char *getModelPath();

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

    SpNpcNookIntroTalk unk_658;
    u16 unk_710;
    u8 pad_712[2];
    s32 unk_714;
    s32 unk_718;
    s32 unk_71c;
    u8 unk_720;
    u8 pad_721[3];
};

extern "C" SpNpcNookIntro *SpNpcNookIntro_Create();
#define data_ov068_0226fe1c ((Unk_ov068_0226fea4_Flag *)((u8 *)data_ov068_0226fe14 + 8))
#define PMA(x) (*(Unk_ov068_0226fea4_Fn *)(x))
#define PMB(x) (*(Unk_ov068_02267238_Fn *)(x))
extern "C" {
void _ZN14SpNpcNookIntro10setupAct03Ev();
void _ZN14SpNpcNookIntro9mainAct01Ev();
void _ZN14SpNpcNookIntro10setupAct00Ev();
void _ZN14SpNpcNookIntro9mainAct00Ev();
void _ZN14SpNpcNookIntro10setupAct04Ev();
void _ZN14SpNpcNookIntro9mainAct03Ev();
void _ZN18SpNpcNookIntroTalk13runWalkScriptEv();
void _ZN14SpNpcNookIntro9mainAct04Ev();
void _ZN14SpNpcNookIntro10setupAct05Ev();
void _ZN14SpNpcNookIntro9mainAct02Ev();
void _ZN14SpNpcNookIntro9mainAct05Ev();
void _ZN14SpNpcNookIntro10setupAct01Ev();
void _ZN14SpNpcNookIntro10setupAct02Ev();
extern void *data_ov068_0226fd00[2];
extern void *data_ov068_0226fd08[2];
extern void *data_ov068_0226fd10[2];
extern void *data_ov068_0226fd18[2];
extern void *data_ov068_0226fd20[2];
extern void *data_ov068_0226fd28[2];
extern void *data_ov068_0226fd30[2];
extern void *data_ov068_0226fd38[2];
extern void *data_ov068_0226fd40[2];
extern void *data_ov068_0226fd48[2];
extern void *data_ov068_0226fd50[2];
extern void *data_ov068_0226fd58[2];
extern void *data_ov068_0226fd60[2];
extern char sNookIntroMsgFile[0x14];
extern char data_ov068_0226fd9c[0x18];
extern char data_ov068_0226fdb4[0x18];
extern char data_ov068_0226fdcc[0x18];
extern char data_ov068_0226fde4[0x18];
extern char data_ov068_0226fe2c[0x1c];
extern char data_ov068_0226fe48[0x1c];
extern char data_ov068_0226fe64[0x1c];
extern char data_ov068_0226fe80[0x1c];
extern Unk_ov068_0226fea4_Ent data_ov068_0226fe14[2];
extern Unk_ov068_02267238_Entry sSpNpcNookIntroActTable[6];
}

// data definitions before the function with the local static table (creation order)
extern "C" char data_ov068_0226fe80[0x1c] = "npc_sp/model/rcd_tex.nsbtx";
extern "C" Unk_ov068_0226fea4_Ent data_ov068_0226fe14[2] = {{0, 0}, {PMA(data_ov068_0226fd30), 1}};
extern "C" void *data_ov068_0226fd30[2] = {(void *)_ZN18SpNpcNookIntroTalk13runWalkScriptEv, 0};

extern "C" SpNpcNookIntro *SpNpcNookIntro_Create() {
    return new SpNpcNookIntro();
}

BOOL SpNpcNookIntro::vfunc_04() {
    static ItemId tbl[4] = {
        ItemId(0xd019), ItemId(0xd01a),
        ItemId(0xd01b), ItemId(0xd01c)
    };
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setNpcHandle(this, &tbl[NookShop_GetLevel(&data_021ed104)].v);
    NpcActor_setTalkRequest(this, &unk_658);
    unk_658.attachOwner((FieldVillager *)this);
    NpcMoveCtrl_setSpeedPreset(&unk_350, 2, 0x399, 0x133, 0x199);
    return TRUE;
}

// data definitions after the function with the local static table
extern "C" const char *sNookModelPaths[4] = {data_ov068_0226fd9c, data_ov068_0226fdb4, data_ov068_0226fdcc,
                                                 data_ov068_0226fde4};
extern "C" char data_ov068_0226fd9c[0x18] = "npc_sp/model/rcn.nsbmd";
extern "C" void *data_ov068_0226fd40[2] = {(void *)_ZN14SpNpcNookIntro10setupAct05Ev, 0};
extern "C" void *data_ov068_0226fd00[2] = {(void *)_ZN14SpNpcNookIntro10setupAct03Ev, 0};
extern "C" Unk_ov068_02267238_Entry sSpNpcNookIntroActTable[6] = {
    {PMB(data_ov068_0226fd10), PMB(data_ov068_0226fd18)},
    {PMB(data_ov068_0226fd58), PMB(data_ov068_0226fd08)},
    {PMB(data_ov068_0226fd60), PMB(data_ov068_0226fd48)},
    {PMB(data_ov068_0226fd00), PMB(data_ov068_0226fd28)},
    {PMB(data_ov068_0226fd20), PMB(data_ov068_0226fd38)},
    {PMB(data_ov068_0226fd40), PMB(data_ov068_0226fd50)}};
extern "C" char data_ov068_0226fdb4[0x18] = "npc_sp/model/rcc.nsbmd";
extern "C" void *data_ov068_0226fd08[2] = {(void *)_ZN14SpNpcNookIntro9mainAct01Ev, 0};
extern "C" void *data_ov068_0226fd50[2] = {(void *)_ZN14SpNpcNookIntro9mainAct05Ev, 0};
extern "C" void *data_ov068_0226fd18[2] = {(void *)_ZN14SpNpcNookIntro9mainAct00Ev, 0};
extern "C" char data_ov068_0226fde4[0x18] = "npc_sp/model/rcd.nsbmd";
extern "C" void *data_ov068_0226fd58[2] = {(void *)_ZN14SpNpcNookIntro10setupAct01Ev, 0};
extern "C" void *data_ov068_0226fd48[2] = {(void *)_ZN14SpNpcNookIntro9mainAct02Ev, 0};
extern "C" char data_ov068_0226fe2c[0x1c] = "npc_sp/model/rcn_tex.nsbtx";
extern "C" char data_ov068_0226fe48[0x1c] = "npc_sp/model/rcc_tex.nsbtx";
extern "C" char sNookIntroMsgFile[0x14] = "sp_etc_sequence4";
extern "C" void *data_ov068_0226fd10[2] = {(void *)_ZN14SpNpcNookIntro10setupAct00Ev, 0};
extern "C" void *data_ov068_0226fd38[2] = {(void *)_ZN14SpNpcNookIntro9mainAct04Ev, 0};
extern "C" char data_ov068_0226fdcc[0x18] = "npc_sp/model/rcs.nsbmd";
extern "C" const char *sNookTexPaths[4] = {data_ov068_0226fe2c, data_ov068_0226fe48, data_ov068_0226fe64,
                                                 data_ov068_0226fe80};
extern "C" void *data_ov068_0226fd60[2] = {(void *)_ZN14SpNpcNookIntro10setupAct02Ev, 0};
extern "C" void *data_ov068_0226fd28[2] = {(void *)_ZN14SpNpcNookIntro9mainAct03Ev, 0};
extern "C" void *data_ov068_0226fcfc = sNookIntroMsgFile;
extern "C" char data_ov068_0226fe64[0x1c] = "npc_sp/model/rcs_tex.nsbtx";
extern "C" Unk_ov068_SceneEntry sSpNpcNookIntroProfile = {(void *(*)())SpNpcNookIntro_Create, 0x7d, 0x81, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov068_0226fd20[2] = {(void *)_ZN14SpNpcNookIntro10setupAct04Ev, 0};

BOOL SpNpcNookIntro::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    unk_710 = unk_8e;
    unk_4cc.unk_1c |= 2;
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        if (!GameStart_IsNewResident()) {
            if (!GameStart_IsNewTown()) {
                Unk_02097ff4_clearFlag(p, 1);
            }
        }
    }
    Bgm_RequestSilence(0x13, 0xf, 0);
    return TRUE;
}

const char *SpNpcNookIntro::getTexturePath() {
    return sNookTexPaths[NookShop_GetLevel(&data_021ed104)];
}

const char *SpNpcNookIntro::getModelPath() {
    return sNookModelPaths[NookShop_GetLevel(&data_021ed104)];
}

BOOL SpNpcNookIntro::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcNookIntroActTable[unk_654].b != NULL) {
        result = (this->*sSpNpcNookIntroActTable[unk_654].b)();
    }
    return result;
}

void SpNpcNookIntro::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcNookIntroActTable[state].a != NULL) {
        ok = (this->*sSpNpcNookIntroActTable[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcNookIntro::setupAct00() {
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct00() {
    if (TalkRequest_AddPlayerTalk6(this, 0)) {
        func_02094f48(1, 4);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct01() {
    u32 x;
    void *p = func_02015aac(&unk_658);
    x = 0;
    if (p != NULL) {
        x = NpcActor_getAngleTo(this, p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, x, 1);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct01() {
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        Camera_SetModeDefault();
        Bgm_RequestSilence(0x13, 0x3c, 0);
        Bgm_Release(0x47);
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct02() {
    Unk_ov068_0226fd68_Vec v;
    Unk_ov068_0226fd68_Vec *p = (Unk_ov068_0226fd68_Vec *)func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    v.z += 0x2000;
    PlayerActor_RequestWalkTo(&v, 0x400, 4);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct02() {
    if (func_020951b8(4) == 0) {
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, NpcActor_getPlayerActor(this, 4));
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct03() {
    NpcActionCtrl_requestAction(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct03() {
    if (NpcActionCtrl_getAction(&unk_564) == 3) {
        if (NpcActionCtrl_isActionDone(&unk_564)) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct04() {
    unk_714 = unk_5c;
    unk_718 = unk_60;
    unk_71c = unk_64;
    unk_714 -= 0x2000;
    unk_71c += 0xa000;
    NpcActionCtrl_requestAction(&unk_564, 2, 1, unk_714, unk_71c, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_720 = 0x3c;
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct04() {
    if (NpcActionCtrl_isActionDone(&unk_564) != 0 || func_020e7518(&unk_720) == 0) {
        TalkRequest_SetTargetDone(this);
        if (PlayerData_GetCurrent()) {
            GameStart_Clear();
        }
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct05() {
    unk_720 = 10;
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct05() {
    if (func_020e7518(&unk_720) == 0) {
        Bgm_ReleasePriority(0x13);
        Bgm_RequestSilence(0x12, 5, 5);
        ProcBase_RequestDelete(this);
    }
    return TRUE;
}

SpNpcNookIntroTalk::SpNpcNookIntroTalk() {}

SpNpcNookIntroTalk::~SpNpcNookIntroTalk() {
}

void SpNpcNookIntroTalk::attachOwner(FieldVillager *o) {
    vfunc_08();
    unk_b4 = o;
}

void SpNpcNookIntroTalk::vfunc_78(Unk_ov068_02266f30_Out *out) {
    void *p = PlayerData_GetCurrent();
    if (p != 0) {
        Unk_02097ff4_clearFlag(p, 0x23);
    }
    out->unk_00 = data_ov068_0226fcfc;
    out->unk_04 = 0x22;
}

void SpNpcNookIntroTalk::vfunc_14() {
    Unk_ov068_02266bd0_Scene *sc = unk_3c;
    volatile u8 buf = data_021edb68;
    buf = 0;
    switch (unk_1e) {
    case 0x22:
        TalkWindowState_setNextMessage(sc, gTalkMsgIndexEnd, 0);
        sc->unk_14 = 0;
        setScript(1);
        break;
    case 10:
    case 13: {
        void *p = HouseData_getDebt(gSaveHouse);
        if (p == 0) {
            buf = 0xf;
        } else {
            ActorTalkRequest_setNumberSlot(this, p, 1, 0xa, 1, 0);
            if (GameStart_IsNewTown() != 0) {
                buf = 0x1c;
            } else if (func_020978a4(gSavePlayers) <= 1) {
                buf = 0x27;
            } else {
                buf = 0xb;
            }
        }
        break;
    }
    case 11:
    case 0x1c:
    case 0x27:
        if (GameStart_IsNewResident() == 0 && GameStart_IsNewTown() == 0) {
            buf = 0xe;
        } else {
            buf = 0xc;
        }
        break;
    case 15:
        if (GameStart_IsNewResident() == 0 && GameStart_IsNewTown() == 0) {
            buf = 0x10;
        } else {
            buf = 0x11;
        }
        break;
    }
    if (buf != 0) {
        TalkWindowState_setNextMessage(sc, (u8 *)&buf, data_ov068_0226fcfc);
    }
}

void SpNpcNookIntroTalk::vfunc_18() {
}

void SpNpcNookIntroTalk::vfunc_80() {
    if (data_ov068_0226fe1c[unk_ac].flag != 0) {
        if (data_ov068_0226fe14[unk_ac].fn) {
            (this->*data_ov068_0226fe14[unk_ac].fn)();
        }
    }
}

void SpNpcNookIntroTalk::vfunc_84() {
    if (data_ov068_0226fe1c[unk_ac].flag == 0) {
        if (data_ov068_0226fe14[unk_ac].fn) {
            (this->*data_ov068_0226fe14[unk_ac].fn)();
            setScript(0);
        }
    }
}

void SpNpcNookIntroTalk::setScript(s32 a) {
    unk_ac = a;
    unk_b0 = 0;
}

void SpNpcNookIntroTalk::runWalkScript() {
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            Bgm_ReleasePriority(0x13);
            Bgm_Request(0x15, 0x47, 0x7f, 1);
            func_02094f48(0, 4);
            Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            Unk_ov068_02266680_Vec *pv = &o->unk_5c;
            Unk_ov068_02266680_Vec *pd = &o->unk_714;
            pd->x = pv->x;
            pd->y = pv->y;
            pd->z = pv->z;
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            o->unk_714.x += 0x6000;
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            NpcActionCtrl_requestAction(o->unk_564, 2, 2, o->unk_714.x, o->unk_714.z, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b0 = 1;
        }
        break;
    case 1: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
        if (NpcActionCtrl_isActionDone(o->unk_564) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            if (NpcActionCtrl_getAction(o->unk_564) == 2) {
                o = (Unk_ov068_02266bd0_Owner *)unk_b4;
                NpcActionCtrl_requestAction(o->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_b0 = 2;
            }
        }
        break;
    }
    case 2: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
        if (NpcActionCtrl_isActionDone(o->unk_564) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            if (NpcActionCtrl_getAction(o->unk_564) == 0) {
                Unk_ov068_02266bd0_Scene *sc = unk_3c;
                volatile u8 buf = data_021edb68;
                if (GameStart_IsNewTown() != 0) {
                    buf = 0xd;
                } else {
                    buf = 0xa;
                }
                TalkWindowState_setNextMessage(sc, (u8 *)&buf, data_ov068_0226fcfc);
                sc->unk_08 = 1;
                o = (Unk_ov068_02266bd0_Owner *)unk_b4;
                Unk_ov068_02266680_Vec t;
                Unk_ov068_02266680_Vec *pt = &o->unk_5c;
                t.x = pt->x;
                t.y = pt->y;
                t.z = pt->z;
                t.y += 0x2000;
                Camera_FocusOnPoint(&t);
                setScript(0);
            }
        }
        break;
    }
    }
}

BOOL SpNpcNookIntro::vfunc_48() {
    BOOL r = FALSE;
    if (unk_654 == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcNookIntro::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        changeAct(2);
        break;
    case 8:
        changeAct(5);
        break;
    }
}


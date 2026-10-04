// mwcc-version: 1.2/base
#include "types.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Unk_02088d00.h"
#include "game/Unk_ov068_Vec.h"
#include "actor/Unk_ov068_SceneEntry.h"
#include "item/ItemId.h"
#include "npc/NpcResHandleView.h"

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


struct Unk_ov068_02266bd0_Scene {
    u8 pad_00[4];
    s32 state, unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov068_02266f30_Out {
    void *msgKey;
    u8 msgIndex;
};

struct Unk_ov068_02266bd0_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec position;
    u8 pad_68[0x564 - 0x68];
    u8 actionCtrl[0x1b0];
    Unk_ov068_02266680_Vec walkTarget;
};

struct Unk_ov068_0226fd68_Vec {
    s32 x, y, z;
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
BOOL PlayerActor_IsScriptedWalking(s32 a);
void *PlayerActor_GetBodyPos(s32 a);
void PlayerActor_RequestWalkTo(void *v, u32 a, u32 b);
void PlayerActor_SetNoFaceTalkTarget(s32 a, s32 b);
void GameStart_Clear();
BOOL GameStart_IsNewResident();
BOOL GameStart_IsNewTown();
s32 PlayerDataArray_CountUsed(void *self);
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
extern u8 gU8None;
extern u8 gTalkMsgIndexEnd[];
extern u8 gSaveHouse[];
extern u8 gSavePlayers[];
extern void *sNookIntroMsgFilePtr;
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
struct CollisionState { CollisionState(); u32 pad[0x30 / 4]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct NpcActionCtrl { NpcActionCtrl(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); u32 pad[0x28 / 4]; };

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
    u32 position;
    u32 positionY;
    u32 positionZ;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0xd4 - 0x90];
    u32 charNode, unk_d8, unk_dc;
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual const char *getTexturePath();
    virtual const char *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
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
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual u16 getSpecies();
    virtual BOOL getWalkAnimSpeedScale();
    /* 0x640 */ SpNpcAnimHeapHandle animHeapHandle;
    /* 0x648 */ u8 pad_648[0xc];
    u32 unk_654;
};

// Dialog sub-object at +0x658 (vtable 0x0226fea4): chain ActorTalkRequest <- TalkMsgRequest <- Unk_020d7710 <- SpNpcTalkRequest <- 0226fea4
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
    virtual void start(Unk_ov068_02266f30_Out *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
    u8 pad_04[0x1a];
    u8 msgIndex;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov068_02266bd0_Scene *unk_3c;
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
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(Unk_ov068_02266f30_Out *out);
    virtual void update();
    virtual void onTaskDone();

    void runWalkScript();
    void setScript(s32 a);
    void attachOwner(FieldVillager *o);

    /* 0xac */ s32 script;
    /* 0xb0 */ u8 scriptStep;
    /* 0xb1 */ u8 pad_b1[3];
    /* 0xb4 */ FieldVillager *owner;
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

    SpNpcNookIntroTalk talk;
    u16 startAngle;
    u8 pad_712[2];
    s32 walkTargetX;
    s32 walkTargetY;
    s32 walkTargetZ;
    u8 actTimer;
    u8 pad_721[3];
};

extern "C" SpNpcNookIntro *SpNpcNookIntro_Create();
#define data_ov068_0226fe1c ((Unk_ov068_0226fea4_Flag *)((u8 *)sNookIntroTalkScripts + 8))
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
extern char sNookModelRcn[0x18];
extern char sNookModelRcc[0x18];
extern char sNookModelRcs[0x18];
extern char sNookModelRcd[0x18];
extern char sNookTexRcn[0x1c];
extern char sNookTexRcc[0x1c];
extern char sNookTexRcs[0x1c];
extern char sNookTexRcd[0x1c];
extern Unk_ov068_0226fea4_Ent sNookIntroTalkScripts[2];
extern Unk_ov068_02267238_Entry sSpNpcNookIntroActTable[6];
}

// data definitions before the function with the local static table (creation order)
extern "C" char sNookTexRcd[0x1c] = "npc_sp/model/rcd_tex.nsbtx";
extern "C" Unk_ov068_0226fea4_Ent sNookIntroTalkScripts[2] = {{0, 0}, {PMA(data_ov068_0226fd30), 1}};
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
    NpcActor_setNpcHandle(this, &tbl[NookShop_GetLevel(&data_021ed104)].id);
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner((FieldVillager *)this);
    NpcMoveCtrl_setSpeedPreset(&moveCtrl, 2, 0x399, 0x133, 0x199);
    return TRUE;
}

// data definitions after the function with the local static table
extern "C" const char *sNookModelPaths[4] = {sNookModelRcn, sNookModelRcc, sNookModelRcs,
                                                 sNookModelRcd};
extern "C" char sNookModelRcn[0x18] = "npc_sp/model/rcn.nsbmd";
extern "C" void *data_ov068_0226fd40[2] = {(void *)_ZN14SpNpcNookIntro10setupAct05Ev, 0};
extern "C" void *data_ov068_0226fd00[2] = {(void *)_ZN14SpNpcNookIntro10setupAct03Ev, 0};
extern "C" Unk_ov068_02267238_Entry sSpNpcNookIntroActTable[6] = {
    {PMB(data_ov068_0226fd10), PMB(data_ov068_0226fd18)},
    {PMB(data_ov068_0226fd58), PMB(data_ov068_0226fd08)},
    {PMB(data_ov068_0226fd60), PMB(data_ov068_0226fd48)},
    {PMB(data_ov068_0226fd00), PMB(data_ov068_0226fd28)},
    {PMB(data_ov068_0226fd20), PMB(data_ov068_0226fd38)},
    {PMB(data_ov068_0226fd40), PMB(data_ov068_0226fd50)}};
extern "C" char sNookModelRcc[0x18] = "npc_sp/model/rcc.nsbmd";
extern "C" void *data_ov068_0226fd08[2] = {(void *)_ZN14SpNpcNookIntro9mainAct01Ev, 0};
extern "C" void *data_ov068_0226fd50[2] = {(void *)_ZN14SpNpcNookIntro9mainAct05Ev, 0};
extern "C" void *data_ov068_0226fd18[2] = {(void *)_ZN14SpNpcNookIntro9mainAct00Ev, 0};
extern "C" char sNookModelRcd[0x18] = "npc_sp/model/rcd.nsbmd";
extern "C" void *data_ov068_0226fd58[2] = {(void *)_ZN14SpNpcNookIntro10setupAct01Ev, 0};
extern "C" void *data_ov068_0226fd48[2] = {(void *)_ZN14SpNpcNookIntro9mainAct02Ev, 0};
extern "C" char sNookTexRcn[0x1c] = "npc_sp/model/rcn_tex.nsbtx";
extern "C" char sNookTexRcc[0x1c] = "npc_sp/model/rcc_tex.nsbtx";
extern "C" char sNookIntroMsgFile[0x14] = "sp_etc_sequence4";
extern "C" void *data_ov068_0226fd10[2] = {(void *)_ZN14SpNpcNookIntro10setupAct00Ev, 0};
extern "C" void *data_ov068_0226fd38[2] = {(void *)_ZN14SpNpcNookIntro9mainAct04Ev, 0};
extern "C" char sNookModelRcs[0x18] = "npc_sp/model/rcs.nsbmd";
extern "C" const char *sNookTexPaths[4] = {sNookTexRcn, sNookTexRcc, sNookTexRcs,
                                                 sNookTexRcd};
extern "C" void *data_ov068_0226fd60[2] = {(void *)_ZN14SpNpcNookIntro10setupAct02Ev, 0};
extern "C" void *data_ov068_0226fd28[2] = {(void *)_ZN14SpNpcNookIntro9mainAct03Ev, 0};
extern "C" void *sNookIntroMsgFilePtr = sNookIntroMsgFile;
extern "C" char sNookTexRcs[0x1c] = "npc_sp/model/rcs_tex.nsbtx";
extern "C" Unk_ov068_SceneEntry sSpNpcNookIntroProfile = {(void *(*)())SpNpcNookIntro_Create, 0x7d, 0x81, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov068_0226fd20[2] = {(void *)_ZN14SpNpcNookIntro10setupAct04Ev, 0};

BOOL SpNpcNookIntro::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    startAngle = rotY;
    collider.groups |= 2;
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
        PlayerActor_SetNoFaceTalkTarget(1, 4);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct01() {
    u32 x;
    void *p = func_02015aac(&talk);
    x = 0;
    if (p != NULL) {
        x = NpcActor_getAngleTo(this, p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, x, 1);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct01() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        Camera_SetModeDefault();
        Bgm_RequestSilence(0x13, 0x3c, 0);
        Bgm_Release(0x47);
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct02() {
    Unk_ov068_0226fd68_Vec v;
    Unk_ov068_0226fd68_Vec *p = (Unk_ov068_0226fd68_Vec *)PlayerActor_GetBodyPos(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    v.z += 0x2000;
    PlayerActor_RequestWalkTo(&v, 0x400, 4);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct02() {
    if (PlayerActor_IsScriptedWalking(4) == 0) {
        talk.vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct03() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct03() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct04() {
    walkTargetX = position;
    walkTargetY = positionY;
    walkTargetZ = positionZ;
    walkTargetX -= 0x2000;
    walkTargetZ += 0xa000;
    NpcActionCtrl_requestAction(&actionCtrl, 2, 1, walkTargetX, walkTargetZ, 0, 0, 0, 0, data_020c6cc8, 0);
    actTimer = 0x3c;
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct04() {
    if (NpcActionCtrl_isActionDone(&actionCtrl) != 0 || func_020e7518(&actTimer) == 0) {
        TalkRequest_SetTargetDone(this);
        if (PlayerData_GetCurrent()) {
            GameStart_Clear();
        }
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct05() {
    actTimer = 10;
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct05() {
    if (func_020e7518(&actTimer) == 0) {
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
    owner = o;
}

void SpNpcNookIntroTalk::start(Unk_ov068_02266f30_Out *out) {
    void *p = PlayerData_GetCurrent();
    if (p != 0) {
        Unk_02097ff4_clearFlag(p, 0x23);
    }
    out->msgKey = sNookIntroMsgFilePtr;
    out->msgIndex = 0x22;
}

void SpNpcNookIntroTalk::onMessageEnd() {
    Unk_ov068_02266bd0_Scene *sc = unk_3c;
    volatile u8 buf = gU8None;
    buf = 0;
    switch (msgIndex) {
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
            } else if (PlayerDataArray_CountUsed(gSavePlayers) <= 1) {
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
        TalkWindowState_setNextMessage(sc, (u8 *)&buf, sNookIntroMsgFilePtr);
    }
}

void SpNpcNookIntroTalk::onChoice() {
}

void SpNpcNookIntroTalk::update() {
    if (data_ov068_0226fe1c[script].flag != 0) {
        if (sNookIntroTalkScripts[script].fn) {
            (this->*sNookIntroTalkScripts[script].fn)();
        }
    }
}

void SpNpcNookIntroTalk::onTaskDone() {
    if (data_ov068_0226fe1c[script].flag == 0) {
        if (sNookIntroTalkScripts[script].fn) {
            (this->*sNookIntroTalkScripts[script].fn)();
            setScript(0);
        }
    }
}

void SpNpcNookIntroTalk::setScript(s32 a) {
    script = a;
    scriptStep = 0;
}

void SpNpcNookIntroTalk::runWalkScript() {
    switch (scriptStep) {
    case 0:
        if (unk_3c->state == 5) {
            Bgm_ReleasePriority(0x13);
            Bgm_Request(0x15, 0x47, 0x7f, 1);
            PlayerActor_SetNoFaceTalkTarget(0, 4);
            Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)owner;
            Unk_ov068_02266680_Vec *pv = &o->position;
            Unk_ov068_02266680_Vec *pd = &o->walkTarget;
            pd->x = pv->x;
            pd->y = pv->y;
            pd->z = pv->z;
            o = (Unk_ov068_02266bd0_Owner *)owner;
            o->walkTarget.x += 0x6000;
            o = (Unk_ov068_02266bd0_Owner *)owner;
            NpcActionCtrl_requestAction(o->actionCtrl, 2, 2, o->walkTarget.x, o->walkTarget.z, 0, 0, 0, 0, data_020c6cc8, 0);
            scriptStep = 1;
        }
        break;
    case 1: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)owner;
        if (NpcActionCtrl_isActionDone(o->actionCtrl) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)owner;
            if (NpcActionCtrl_getAction(o->actionCtrl) == 2) {
                o = (Unk_ov068_02266bd0_Owner *)owner;
                NpcActionCtrl_requestAction(o->actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                scriptStep = 2;
            }
        }
        break;
    }
    case 2: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)owner;
        if (NpcActionCtrl_isActionDone(o->actionCtrl) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)owner;
            if (NpcActionCtrl_getAction(o->actionCtrl) == 0) {
                Unk_ov068_02266bd0_Scene *sc = unk_3c;
                volatile u8 buf = gU8None;
                if (GameStart_IsNewTown() != 0) {
                    buf = 0xd;
                } else {
                    buf = 0xa;
                }
                TalkWindowState_setNextMessage(sc, (u8 *)&buf, sNookIntroMsgFilePtr);
                sc->unk_08 = 1;
                o = (Unk_ov068_02266bd0_Owner *)owner;
                Unk_ov068_02266680_Vec t;
                Unk_ov068_02266680_Vec *pt = &o->position;
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


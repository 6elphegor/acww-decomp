// mwcc-version: 1.2/base
#include "types.h"
#include "actor/Unk_02088d00.h"
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define NpcAnimCtrl_playAnim _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcFaceAnim_resumeMouthMaterial _ZN11NpcFaceAnim19resumeMouthMaterialEv
#define NpcFaceAnim_setMouthTexture _ZN11NpcFaceAnim15setMouthTextureEj
#define NpcLookAt_setManualAngles _ZN9NpcLookAt15setManualAnglesEissss
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcLookAt_setPitchLimit _ZN9NpcLookAt13setPitchLimitEs
#define NpcMoveAnimSet_setRunAnim _ZN14NpcMoveAnimSet10setRunAnimEi
#define NpcMoveAnimSet_setWalkAnim _ZN14NpcMoveAnimSet11setWalkAnimEi
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_setNpcHandle _ZN8NpcActor12setNpcHandleEPt
#define ThreeLayerAnimModel_updateLayers3 _ZN19ThreeLayerAnimModel13updateLayers3Ev
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define RoostGuestRoll_hasLateGuest _ZN14RoostGuestRoll12hasLateGuestEv
#define RoostGuestRoll_getAfternoonGuest _ZN14RoostGuestRoll17getAfternoonGuestEv
#define RoostGuestRoll_getNoonGuest _ZN14RoostGuestRoll12getNoonGuestEv
#define RoostGuestRoll_hasMorningGuest _ZN14RoostGuestRoll15hasMorningGuestEv
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define SaveRecord4_isDateActive _ZN11SaveRecord412isDateActiveEv
#define MsgString_fromEncoded _ZN9MsgString11fromEncodedEP13EncodedStringii
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv

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

struct Unk_ov083_Vec {
    s32 x, y, z;
};

struct Unk_ov068_0226ce70_Out {
    const char *msgKey;
    u8 msgIndex;
};

struct ChoiceList {
    s32 ChoiceList_getResult();
};


struct TalkWindowState {
    u32 index;
    u32 state;
    s32 nextState;
    u32 stateStep;
    u32 unk_10;
    s32 openMode;
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart(s32 a);
    virtual void onMessageEnd(s32 a);
    virtual void onChoice(s32 a);
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
    virtual void start(Unk_ov068_0226ce70_Out *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    void setItemNameSlot(u32 a, u32 b, u32 c);
    ChoiceList *getChoiceList();
    u8 pad_04[0x1a];
    u8 msgIndex;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
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

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 curFrame;
    u8 pad_a8[4];
    s32 frameStep;
    u8 pad_b0[0x2a0 - 0xec - 0xb0];
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
    BOOL NpcTalkCtrl_isBusy();
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
    void setInteractionRange(s32 v);
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 position, positionY, positionZ;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[4];
    s16 moveAngleY;
    u8 pad_96[2];
    s32 speed;
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

    s32 getPlayerActor(u32 v);

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


// ---------------------------------------------------------------- TU08 classes
struct Unk_ov068_0226ccd4_Owner;

struct Unk_ov068_0226ce70_Date {
    u32 a;
    u32 b;
};

// message block at +0xb8 of the sub-object (constructed by the autoload_2 function 0x020f8134)
struct BgmBeatPhase {
    s8 seqVar4;
    s8 trackAnim;
    s8 seqVar0;
    s8 seqVar2;
    s8 seqVar3;
    u8 pad_05[3];
    s32 unk_08;
    u8 pad_0c[8];
    u8 unk_14;
    u8 pad_15[3];
};
extern "C" void func_020f8134(void *self);

class SpNpcRoostGuest;

// Scene object at +0x65c of SpNpcRoostGuest (vtable 0x02270780)
class SpNpcRoostGuestTalk : public SpNpcTalkRequest {
public:
    SpNpcRoostGuestTalk();
    virtual ~SpNpcRoostGuestTalk();
    virtual void onMessageStart(s32 a);
    virtual void onMessageEnd(s32 a);
    virtual void onChoice(s32 a);
    virtual void start(Unk_ov068_0226ce70_Out *out);
    virtual void update();
    virtual void onTaskDone();

    void scriptRestoreLook();
    void scriptEndPerformance();
    void scriptPerform();
    void scriptStartPerformance();
    void scriptReadSongRequest();
    void setScript(s32 state);
    void onKkChoiceRequest(s32 a);
    void onKkChoiceTradeGuitar(s32 a);
    void onKkChoiceListen(s32 a);
    void dispatchKkChoice(s32 a);
    void onKkStartShow();
    void onKkAskSongRequest();
    void dispatchKkMessageEnd(s32 a);
    void fillKkSongName(s32 a);
    s32 getTalkMode();
    void setTalkMode(s32 v);
    void attachOwner(Unk_ov068_0226ccd4_Owner *o);

    /* 0xac */ s32 talkMode;
    /* 0xb0 */ SpNpcRoostGuest *owner;
    /* 0xb4 */ s32 script;
    /* 0xb8 */ BgmBeatPhase lastBeatState;
};

class SpNpcRoostGuest : public SpNpcActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL checkPlayerSeated();
    u32 getGuest();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x652 */ u16 songItem;
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ s32 act;
    /* 0x65c */ SpNpcRoostGuestTalk talk;
    /* 0x72c */ s32 guestType;
    /* 0x730 */ u8 requestText[0x10];
    /* 0x740 */ u16 showTimer;
    /* 0x742 */ u8 showAccepted;
    /* 0x743 */ u8 isRandomSong;
    /* 0x744 */ u8 hasSongRequest;
};

typedef BOOL (SpNpcRoostGuest::*Unk_ov068_0226d39c_Fn)();
struct Unk_ov068_0226d39c_Entry {
    Unk_ov068_0226d39c_Fn a;
    Unk_ov068_0226d39c_Fn b;
};

typedef BgmBeatPhase Unk_ov068_0226c63c_Msg;

struct Unk_ov068_0226c3b4_Vec {
    s32 x, y, z;
};

struct ItemName {
    ItemName();
    ~ItemName();
    u32 pad[0x24 / 4];
};

struct EncodedString16Buf {
    EncodedString16Buf();
    ~EncodedString16Buf();
    u32 pad[0x20 / 4];
};

struct Unk_ov068_0226c870_Pad {
    s32 v[2];
    Unk_ov068_0226c870_Pad() {}
    ~Unk_ov068_0226c870_Pad() {}
};

typedef void (SpNpcRoostGuestTalk::*Unk_ov068_02270780_Fn)();
typedef void (SpNpcRoostGuestTalk::*Unk_ov068_02270780_Fn1)(s32);
typedef void (SpNpcRoostGuestTalk::*Unk_ov068_0226cd18_Fn)();

struct Unk_ov068_02270780_Ent {
    Unk_ov068_02270780_Fn fn;
    u32 flag;
};

struct Unk_ov068_02270780_Stat {
    u32 id;
    Unk_ov068_02270780_Fn1 fn;
};

struct Unk_ov068_0226cd18_Ent {
    u32 id;
    Unk_ov068_0226cd18_Fn fn;
};

struct Unk_ov068_Scene_Entry {
    void *(*factory)();
    u16 executePriority;
    u16 drawPriority;
    s32 unk_08[4];
};
extern "C" {
void _ZN19SpNpcRoostGuestTalk22scriptStartPerformanceEv();
void _ZN19SpNpcRoostGuestTalk17onKkChoiceRequestEi();
void _ZN15SpNpcRoostGuest9mainAct01Ev();
void _ZN15SpNpcRoostGuest10setupAct02Ev();
void _ZN19SpNpcRoostGuestTalk21onKkChoiceTradeGuitarEi();
void _ZN15SpNpcRoostGuest10setupAct01Ev();
void _ZN15SpNpcRoostGuest10setupAct04Ev();
void _ZN15SpNpcRoostGuest9mainAct03Ev();
void _ZN19SpNpcRoostGuestTalk18onKkAskSongRequestEv();
void _ZN19SpNpcRoostGuestTalk13onKkStartShowEv();
void _ZN15SpNpcRoostGuest10setupAct03Ev();
void _ZN15SpNpcRoostGuest9mainAct02Ev();
void _ZN19SpNpcRoostGuestTalk16onKkChoiceListenEi();
void _ZN15SpNpcRoostGuest9mainAct00Ev();
void _ZN19SpNpcRoostGuestTalk13scriptPerformEv();
void _ZN15SpNpcRoostGuest10setupAct00Ev();
void _ZN19SpNpcRoostGuestTalk21scriptReadSongRequestEv();
void _ZN15SpNpcRoostGuest9mainAct04Ev();
void _ZN19SpNpcRoostGuestTalk20scriptEndPerformanceEv();
void _ZN19SpNpcRoostGuestTalk17scriptRestoreLookEv();
extern void *data_ov068_0227037c[2];
extern void *data_ov068_02270384[2];
extern void *data_ov068_0227038c[2];
extern void *data_ov068_02270394[2];
extern void *data_ov068_0227039c[2];
extern void *data_ov068_022703a4[2];
extern void *data_ov068_022703ac[2];
extern void *data_ov068_022703b4[2];
extern void *data_ov068_022703bc[2];
extern void *data_ov068_022703c4[2];
extern void *data_ov068_022703cc[2];
extern void *data_ov068_022703d4[2];
extern void *data_ov068_022703dc[2];
extern void *data_ov068_022703e4[2];
extern void *data_ov068_022703ec[2];
extern void *data_ov068_022703f4[2];
extern void *data_ov068_022703fc[2];
extern void *data_ov068_02270404[2];
extern void *data_ov068_0227040c[2];
extern void *data_ov068_02270414[2];
extern void *data_ov068_0227041c[2];
extern void *data_ov068_02270424[2];
extern void *data_ov068_0227042c[2];
extern char sKkMouthM2[4];
extern char sKkMouthM0[4];
extern char sKkMouthM4[4];
extern char sKkMouthM1[4];
extern char sKkMouthM5[4];
extern char sKkMouthM3[4];
extern char sRoostMsgDog[11];
extern char sRoostMsgCf6[11];
extern char sRoostMsgCf1[11];
extern char sRoostMsgCf5[11];
extern char sRoostMsgCf7[11];
extern char sRoostMsgCf2[11];
extern char sRoostMsgCf3[11];
extern char sRoostMsgCf4[11];
extern char sRoostModelPga[23];
extern char sRoostTexPga[27];
extern char sRoostModelPgb[23];
extern char sRoostTexPgb[27];
extern char sRoostModelPoo[23];
extern char sRoostTexPoo[27];
extern char sRoostModelOtt[23];
extern char sRoostTexOtt[27];
extern char sRoostModelWip[23];
extern char sRoostTexWip[27];
extern char sRoostModelXct[23];
extern char sRoostTexXct[27];
extern char sRoostModelMof[23];
extern char sRoostTexMof[27];
extern char sRoostModelEnd[23];
extern char sRoostTexEnd[27];
extern Unk_ov068_Scene_Entry sSpNpcRoostGuestProfile;
SpNpcRoostGuest *SpNpcRoostGuest_Create();
extern char *sKkMouthTextures[6];
extern const char *sRoostGuestMsgFiles[9];
extern const char *sRoostGuestModelPaths[9];
extern const char *sRoostGuestTexPaths[9];
extern const u8 sKkTalkModeMessages[4];
extern const u16 sRoostGuestNpcHandles[10];
extern Unk_ov068_0226d39c_Entry sSpNpcRoostGuestActTable[5];
extern Unk_ov068_02270780_Ent sKkShowScripts[6];
}

namespace sA {
extern "C" {
extern u16 data_020c6cc8;

void PlayerData_GetCurrent();
Unk_ov068_0226c3b4_Vec *PlayerActor_GetBodyPos(s32 a);
void FieldPos_ToUnit(s32 *a, s32 *b, Unk_ov068_0226c3b4_Vec *v);
BOOL PlayerActor_IsInAction(s32 a, s32 b);
void TalkRequest_AddPlayerTalk7(void *p, s32 a);
BOOL func_020e7500(void *p);
void NpcLookAt_setManualAngles(void *self, s32 a, s16 b, s16 c, s16 d, s16 e);
void TalkWindowState_setNextMessage(TalkWindowState *self, u8 *cmd, const char *tbl);
BOOL Pocket_AddItem(u16 *p, s32 a);
void Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void Bgm_Release(u16 a);
void LightSwitch_SetOff(s32 a, s32 b);
void LightSwitch_SetOn(s32 a, s32 b, s32 c);
Unk_ov068_0226c63c_Msg *Snd_GetBeatState();
void NpcFaceAnim_setMouthTexture(void *self, u32 a);
void NpcFaceAnim_resumeMouthMaterial(void *self);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void NpcActionCtrl_requestStand(void *self, u32 a, u16 b);
void ThreeLayerAnimModel_updateLayers3(void *self);
void MI_CpuCopy8(void *src, void *dst, u32 n);
s32 *TalkWindow_Get(s32 a);
s32 Random_GlobalBelow(s32 a);
s16 *DebugVar_GetPtr(s32 a, s32 b);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void *MenuCtrl_GetText();
void EncodedString_SetRaw(void *a, void *b, u32 c);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
void TalkWindowState_setNamedSlot(TalkWindowState *self, s32 a, void *b, u32 c);
BOOL MenuCtrl_IsResultOk();
u32 MenuCtrl_GetIndex();
s32 Pocket_FindItem(u16 *p);
void Pocket_RemoveItem();
u32 TalkWindowState_getChoiceList(TalkWindowState *self);
u32 ChoiceList_getResult(u32 a);

void KkShowFx_Stop();
void KkShowFx_Update();
void RoomCamera_KkShowResetShot();
void KkShowFx_CallUnk1de4();
void RoomCamera_KkShowPickShot();
void KkShowFx_SetParam(s32 a);
void KkShowFx_CallUnk1f70();
BOOL KkShowFx_GetState();
void RoomCamera_KkShowWideShot();
void KkShowFx_Start();
}

}
namespace sB {
extern "C" {
void *PlayerData_GetCurrent();
void TalkRequest_SetTargetDone(void *p);
void NpcActor_setTalkRequest(void *p, void *q);
void NpcActor_setNpcHandle(void *p, u16 *q);
u32 NookShop_GetLevel(void *p);
void ProcBase_RequestDelete(void *p);
void Bgm_ReleasePriority(u32 a);
void Bgm_EnableHourChime();
void Bgm_DisableHourChime();
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Camera_SetModeDefault();
s32 PlayerActor_IsInAction(s32 a, s32 b);
void PlayerActor_LocalRequestStandUp(s32 a);
void Camera_SetMode18();
void KkShowFx_Stop();
void CafeCoffeeSet_StartEffectB(void *p);
void CafeCoffeeSet_SetFlagEF8();
void func_02105f90(s32 a, s32 b);
void NpcAnimCtrl_playAnim(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *a, s32 b, s32 c);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void NpcLookAt_setTarget(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void NpcLookAt_setManualAngles(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void NpcLookAt_setPitchLimit(void *self, s32 a);
void NpcTalkCtrl_requestTalk(void *self, u8 a, u8 b);
s32 NpcTalkCtrl_isBusy(void *self);
void NpcMoveAnimSet_setStandAnim(void *self, s32 a);
void NpcMoveAnimSet_setWalkAnim(void *self, s32 a);
void NpcMoveAnimSet_setRunAnim(void *self, s32 a);
void Clock_GetDateTime(void *p);
s32 CommManager_isSlotActive(void *g, s32 v);
s32 SaveRecord4_isDateActive(void *p);
s32 Clock_GetWeekday();
s32 RoostGuestRoll_hasLateGuest(void *p);
s32 RoostGuestRoll_getNoonGuest(void *p);
s32 RoostGuestRoll_getAfternoonGuest(void *p);
s32 RoostGuestRoll_hasMorningGuest(void *p);
s32 Actor_spawn(u32 a, u32 b, u32 c, u32 d, u32 e);
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 Random_GlobalBelow(s32 a);
s32 Pocket_FindItem(u16 *p);
s32 Unk_02097ff4_testFlag(void *p, s32 a);
void Unk_02097ff4_setFlag(void *p, s32 a);
void Unk_020d7710_setSubSceneKind(void *self, u32 a, u32 b);
void Unk_020d7710_openSubScene(void *self, u32 a);
void func_0201578c(void *self, u16 *p, s32 a, s32 b);
void TalkWindowState_setNamedSlot(void *self, s32 a, void *p, s32 b);
void EncodedString_SetRaw(void *dst, void *src, s32 n);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
extern u16 data_020c6cc8;
extern s16 data_020c6cc4;
extern s16 data_020c6cbc;
extern s32 data_020c6d1c;
extern u32 gVec3Zero[];
extern u32 data_021ed104;
extern u8 data_021ed315[];
extern u8 data_021e58a7[];
extern u8 gCommManager[];
}

}

namespace sC {
extern "C" {
s32 PlayerData_GetCurrent();
s32 ItemPick_FromRange(u16 *out, u32 lo, u32 n, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
}
static inline BOOL Unk_ov068_0226c340_R(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x1323 && a <= 0x1368) r = TRUE;
    return r;
}
}
extern "C" u16 RoostGuest_PickKKSong(void *self);

extern "C" void *data_ov068_022703d4[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct02Ev, 0};
extern "C" char sRoostTexMof[27] = "npc_sp/model/mof_tex.nsbtx";
extern "C" char sRoostTexEnd[27] = "npc_sp/model/end_tex.nsbtx";
extern "C" void *data_ov068_0227037c[2] = {(void *)_ZN19SpNpcRoostGuestTalk22scriptStartPerformanceEv, 0};
extern "C" char sRoostMsgCf3[11] = "sp_npc_cf3";
extern "C" char sRoostTexPga[27] = "npc_sp/model/pga_tex.nsbtx";
extern "C" void *data_ov068_0227039c[2] = {(void *)_ZN19SpNpcRoostGuestTalk21onKkChoiceTradeGuitarEi, 0};
extern "C" char sRoostModelPga[23] = "npc_sp/model/pga.nsbmd";
extern "C" char sKkMouthM5[4] = "m.5";
extern "C" void *data_ov068_02270414[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct04Ev, 0};
extern "C" void *data_ov068_02270424[2] = {(void *)_ZN19SpNpcRoostGuestTalk17scriptRestoreLookEv, 0};
extern "C" void *data_ov068_02270394[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct02Ev, 0};
extern "C" char sKkMouthM4[4] = "m.4";
extern "C" char sRoostTexPgb[27] = "npc_sp/model/pgb_tex.nsbtx";
extern "C" char sRoostModelPgb[23] = "npc_sp/model/pgb.nsbmd";


// ---------------------------------------------------------------------------------------------------------------------

extern "C" SpNpcRoostGuest *SpNpcRoostGuest_Create() {
    using namespace sB;
    return new SpNpcRoostGuest();
}

BOOL SpNpcRoostGuest::vfunc_04() {
    using namespace sB;
    Unk_ov068_0226ce70_Date d;
    u16 h;
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner((Unk_ov068_0226ccd4_Owner *)this);
    collider.shadowEnabled = 0;
    d.a = 0;
    d.b = 0;
    Clock_GetDateTime(&d);
    u8 mo = ((u8 *)&d)[2];
    u8 dy = ((u8 *)&d)[1];
    guestType = 8;
    if (CommManager_isSlotActive(*(void **)gCommManager, *(s32 *)(*(u8 **)gCommManager + 0x64))) {
        return TRUE;
    }
    if (SaveRecord4_isDateActive(data_021ed315)) {
        return TRUE;
    }
    u8 *g = data_021e58a7;
    switch (Clock_GetWeekday()) {
    case 6:
        if ((mo == 0x13 && dy >= 0x1e) || mo == 0x14 || mo == 0x15 || mo == 0x16 || (mo == 0x17 && dy <= 0x3b)) {
            guestType = 7;
            Actor_spawn(0x10, 0, 0, 0, 0);
        }
        break;
    case 0:
        if (mo == 0x15 && dy < 0x37) {
            guestType = 1;
        }
        break;
    default:
        if (mo == 0x15 && dy < 0x37) {
            guestType = 1;
        }
        if (mo == 0x17 && dy <= 0x3b) {
            if (RoostGuestRoll_hasLateGuest(g)) {
                if (NookShop_GetLevel(&data_021ed104) == 3) {
                    guestType = 2;
                }
            }
        }
        break;
    }
    if (mo == 0xc || (mo == 0xd && dy < 0x1e)) {
        switch (RoostGuestRoll_getNoonGuest(g)) {
        case 2:
            guestType = 5;
            break;
        case 1:
            guestType = 4;
            break;
        case 3:
            guestType = 6;
            break;
        case 4:
            guestType = 3;
            break;
        }
    }
    if ((mo == 0xe && dy >= 0x1e) || (mo == 0xf && dy <= 0x3b)) {
        switch (RoostGuestRoll_getAfternoonGuest(g)) {
        case 2:
            guestType = 5;
            break;
        case 1:
            guestType = 4;
            break;
        case 3:
            guestType = 6;
            break;
        case 4:
            guestType = 3;
            break;
        }
    }
    if (mo == 6 && dy < 0x37 && RoostGuestRoll_hasMorningGuest(g)) {
        guestType = 0;
    }
    h = sRoostGuestNpcHandles[guestType];
    NpcActor_setNpcHandle(this, &h);
    if (guestType == 7) {
        setInteractionRange(0x5000);
        position = 0xf000;
        positionZ = 0x13000;
        rotY = 0;
        moveAngleY = 0;
        NpcMoveAnimSet_setStandAnim(&moveAnimSet, 0x102);
        NpcMoveAnimSet_setWalkAnim(&moveAnimSet, 0x102);
        NpcMoveAnimSet_setRunAnim(&moveAnimSet, 0x102);
        NpcLookAt_setTarget(&lookAt, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    } else {
        NpcMoveAnimSet_setStandAnim(&moveAnimSet, 0x1e);
        NpcMoveAnimSet_setWalkAnim(&moveAnimSet, 0x1e);
        NpcMoveAnimSet_setRunAnim(&moveAnimSet, 0x1e);
        NpcLookAt_setPitchLimit(&lookAt, 0);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::vfunc_00() {
    using namespace sB;
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    if (guestType == 7) {
        func_02105f90(*(s32 *)((u8 *)this + 0x148), 3);
    }
    changeAct(0);
    collider.groups |= 2;
    if (guestType == 3) {
        NpcAnimCtrl_playAnim(&animCtrl, this, 0x142, 0, 0, 0x1000, 0, 1);
        ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::vfunc_0c() {
    using namespace sB;
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (guestType == 7) {
        KkShowFx_Stop();
    }
    return TRUE;
}

u8 *SpNpcRoostGuest::getTexturePath() {
    using namespace sB;
    return (u8 *)sRoostGuestTexPaths[guestType];
}

u8 *SpNpcRoostGuest::getModelPath() {
    using namespace sB;
    return (u8 *)sRoostGuestModelPaths[guestType];
}

BOOL SpNpcRoostGuest::updateAct() {
    using namespace sB;
    BOOL result = FALSE;
    if (sSpNpcRoostGuestActTable[act].b != NULL) {
        result = (this->*sSpNpcRoostGuestActTable[act].b)();
    }
    return result;
}

void SpNpcRoostGuest::changeAct(s32 state) {
    using namespace sB;
    BOOL ok = TRUE;
    if (sSpNpcRoostGuestActTable[state].a != NULL) {
        ok = (this->*sSpNpcRoostGuestActTable[state].a)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcRoostGuest::setupAct00() {
    using namespace sB;
    if (guestType == 7) {
        NpcLookAt_setTarget(&lookAt, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0x105, 0, data_020c6cc8, 0);
        NpcLookAt_setManualAngles(&lookAt, 0, -0xc18, 0, data_020c6cc4, data_020c6cbc);
    } else {
        NpcLookAt_setTarget(&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::mainAct00() {
    using namespace sB;
    if (guestType == 8) {
        ProcBase_RequestDelete(this);
        return TRUE;
    }
    if (guestType == 7) {
        checkPlayerSeated();
    } else {
        CafeCoffeeSet_StartEffectB(this);
    }
    if (guestType == 6) {
        CafeCoffeeSet_SetFlagEF8();
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::setupAct01() {
    using namespace sB;
    if (guestType == 7) {
        NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0x102, 0, data_020c6cc8, 0);
    }
    NpcLookAt_setTarget(&lookAt, 4, 0, 0, gVec3Zero, 4, data_020c6d1c, 0);
    NpcTalkCtrl_requestTalk(&talkCtrl, 0, 0);
    return TRUE;
}

BOOL SpNpcRoostGuest::mainAct01() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return TRUE;
    }
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(4);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::setupAct04() {
    using namespace sB; return TRUE; }

BOOL SpNpcRoostGuest::mainAct04() {
    using namespace sB; return TRUE; }

BOOL SpNpcRoostGuest::setupAct03() {
    using namespace sB; return TRUE; }

BOOL SpNpcRoostGuest::mainAct03() {
    using namespace sB;
    if (PlayerActor_IsInAction(0x28, 4)) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::setupAct02() {
    using namespace sB;
    NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0x102, 0, data_020c6cc8, 0);
    Camera_SetMode18();
    NpcLookAt_setManualAngles(&lookAt, 0, 0, 0x1000, data_020c6cc4, data_020c6cbc);
    NpcTalkCtrl_requestTalk(&talkCtrl, 0, 1);
    Bgm_RequestSilence(0x10, 0xf, 0);
    Bgm_DisableHourChime();
    return TRUE;
}

// ---- owner ----
BOOL SpNpcRoostGuest::mainAct02() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return TRUE;
    }
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        if (PlayerActor_IsInAction(0x28, 4)) {
            PlayerActor_LocalRequestStandUp(0);
        }
        Bgm_ReleasePriority(0x10);
        Bgm_EnableHourChime();
        Camera_SetModeDefault();
        changeAct(4);
    }
    return TRUE;
}

SpNpcRoostGuestTalk::SpNpcRoostGuestTalk() {
    func_020f8134(&lastBeatState);
}

// ---------------------------------------------------------------------------------------------------------------------
SpNpcRoostGuestTalk::~SpNpcRoostGuestTalk() {}

void SpNpcRoostGuestTalk::attachOwner(Unk_ov068_0226ccd4_Owner *o) {
    using namespace sB;
    vfunc_08();
    owner = (SpNpcRoostGuest *)o;
}

void SpNpcRoostGuestTalk::setTalkMode(s32 v) {
    using namespace sB; talkMode = v; }

s32 SpNpcRoostGuestTalk::getTalkMode() {
    using namespace sB; return talkMode; }

void SpNpcRoostGuestTalk::start(Unk_ov068_0226ce70_Out *out) {
    using namespace sB;
    u16 h0, h2, h4, h6;
    lastBeatState.seqVar4 = -1;
    lastBeatState.trackAnim = -1;
    lastBeatState.seqVar0 = -1;
    lastBeatState.seqVar2 = -1;
    lastBeatState.seqVar3 = -1;
    void *p = PlayerData_GetCurrent();
    out->msgKey = sRoostGuestMsgFiles[owner->guestType];
    if (owner->guestType == 7) {
        if (getTalkMode() == 0) {
            Unk_ov068_0226ce70_Date d;
            d.a = 0;
            d.b = 0;
            Clock_GetDateTime(&d);
            u8 m = ((u8 *)&d)[2];
            if (m < 0x14 && m >= 0x13) {
                h0 = 0x3530;
                s32 r = Pocket_FindItem(&h0);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->msgIndex = 0xe;
                } else {
                    out->msgIndex = 0x13;
                }
            } else if (owner->showAccepted != 0) {
                out->msgIndex = 0;
            } else if (Talk_CheckAndSetPlayerFlag(0xd, 0) != 0) {
                h2 = 0x3530;
                s32 r = Pocket_FindItem(&h2);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->msgIndex = 0xe;
                } else {
                    out->msgIndex = 0x12;
                }
            } else if (Unk_02097ff4_testFlag(p, 7) == 0) {
                out->msgIndex = 1;
                Unk_02097ff4_setFlag(p, 7);
            } else if (Talk_CheckAndSetPlayerFlag(0xc, 1) == 0) {
                out->msgIndex = 2;
            } else {
                out->msgIndex = 3;
            }
        } else {
            if (getTalkMode() == 1) {
                ItemName a;
                EncodedString16Buf b;
                EncodedString_SetRaw(&b, owner->requestText, 0x10);
                MsgString_fromEncoded(&a, &b, 0, 0);
                TalkWindowState_setNamedSlot(unk_3c, 0, &a, 7);
            } else if (getTalkMode() == 2) {
                h4 = owner->songItem;
                setItemNameSlot((u32)&h4, 1, 7);
                h6 = owner->songItem;
                setItemNameSlot((u32)&h6, 2, 7);
            }
            out->msgIndex = sKkTalkModeMessages[talkMode];
            out->msgKey = sRoostGuestMsgFiles[owner->guestType];
        }
    } else {
        if (Talk_CheckAndSetPlayerFlag(owner->guestType + 0x21, 1) == 0) {
            out->msgIndex = Random_GlobalBelow(3);
        } else {
            out->msgIndex = Random_GlobalBelow(5) + 3;
        }
    }
}

void SpNpcRoostGuestTalk::onMessageStart(s32 a) {
    using namespace sB;
    if (owner->guestType == 7) {
        fillKkSongName(a);
    }
}

void SpNpcRoostGuestTalk::fillKkSongName(s32 a) {
    using namespace sB;
    switch (msgIndex) {
    case 12:
    case 13: {
        u16 v = owner->songItem;
        setItemNameSlot((u32)&v, 1, 7);
        break;
    }
    case 11: {
        ItemName a;
        EncodedString16Buf b;
        EncodedString_SetRaw(&b, owner->requestText, 0x10);
        MsgString_fromEncoded(&a, &b, 0, 0);
        TalkWindowState_setNamedSlot(unk_3c, 0, &a, 7);
        break;
    }
    }
}

void SpNpcRoostGuestTalk::onMessageEnd(s32 a) {
    using namespace sB;
    if (owner->guestType == 7) {
        dispatchKkMessageEnd(a);
    }
}

void SpNpcRoostGuestTalk::dispatchKkMessageEnd(s32 a) {
    using namespace sB;
    static Unk_ov068_0226cd18_Ent tbl[3] = {
        {7, *(Unk_ov068_0226cd18_Fn *)data_ov068_022703bc},
        {6, *(Unk_ov068_0226cd18_Fn *)data_ov068_022703c4},
        {9, *(Unk_ov068_0226cd18_Fn *)data_ov068_0227042c},
    };
    s32 i = 0;
    u8 *pc = &msgIndex;
    for (; (u32)i < 3; i++) {
        u32 off = i * 12;
        u32 id = tbl[i].id;
        if (id == *pc) {
            Unk_ov068_0226cd18_Ent *e = (Unk_ov068_0226cd18_Ent *)((u32)tbl + off);
            (this->*e->fn)();
        }
    }
}

extern "C" const char *sRoostGuestTexPaths[9] = {sRoostTexPga, sRoostTexPgb, sRoostTexPoo, sRoostTexOtt, sRoostTexWip, sRoostTexXct, sRoostTexMof, sRoostTexEnd, sRoostTexEnd};
extern "C" void *data_ov068_022703bc[2] = {(void *)_ZN19SpNpcRoostGuestTalk18onKkAskSongRequestEv, 0};
extern "C" void *data_ov068_022703c4[2] = {(void *)_ZN19SpNpcRoostGuestTalk13onKkStartShowEv, 0};
extern const u16 sRoostGuestNpcHandles[10] = {0xd006, 0xd007, 0xd017, 0xd00d, 0xd014, 0xd024, 0xd011, 0xd01d, 0xd01d, 0x0000};
extern "C" char sRoostMsgCf4[11] = "sp_npc_cf4";
extern "C" void *data_ov068_02270384[2] = {(void *)_ZN19SpNpcRoostGuestTalk17onKkChoiceRequestEi, 0};
extern "C" void *data_ov068_022703a4[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct01Ev, 0};
extern "C" void *data_ov068_022703b4[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct03Ev, 0};
extern "C" char sRoostModelWip[23] = "npc_sp/model/wip.nsbmd";
extern "C" Unk_ov068_Scene_Entry sSpNpcRoostGuestProfile = {(void *(*)())SpNpcRoostGuest_Create, 0x66, 0x6c, {0, 0x5000, 0x5000, 0x3e800}};
extern const u8 sKkTalkModeMessages[4] = {0x00, 0x09, 0x06, 0x00};
extern "C" void *data_ov068_0227042c[2] = {(void *)_ZN19SpNpcRoostGuestTalk13onKkStartShowEv, 0};
extern "C" char sRoostMsgCf2[11] = "sp_npc_cf2";


void SpNpcRoostGuestTalk::onKkAskSongRequest() {
    using namespace sB;
    Unk_020d7710_setSubSceneKind(this, 0xd, 0);
    Unk_020d7710_openSubScene(this, 2);
    setScript(1);
}

void SpNpcRoostGuestTalk::onKkStartShow() {
    using namespace sB;
    unk_3c->openMode = 0;
    owner->showTimer = 0x2d;
    setScript(2);
}

void SpNpcRoostGuestTalk::onChoice(s32 a) {
    using namespace sA;
    if (owner->guestType == 7) {
        dispatchKkChoice(a);
    }
}

void SpNpcRoostGuestTalk::dispatchKkChoice(s32 a) {
    using namespace sA;
    static Unk_ov068_02270780_Stat tbl[5] = {
        {1, *(Unk_ov068_02270780_Fn1 *)data_ov068_022703dc},
        {2, *(Unk_ov068_02270780_Fn1 *)data_ov068_02270404},
        {3, *(Unk_ov068_02270780_Fn1 *)data_ov068_0227040c},
        {5, *(Unk_ov068_02270780_Fn1 *)data_ov068_02270384},
        {0xe, *(Unk_ov068_02270780_Fn1 *)data_ov068_0227039c},
    };
    u32 i = 0;
    u8 *pe = &msgIndex;
    goto test;
loop:
    u32 idv = tbl[i].id;
    u32 off = i * 12;
    if (idv == *pe) {
        u32 x = ChoiceList_getResult(TalkWindowState_getChoiceList(unk_3c));
        Unk_ov068_02270780_Fn1 *fp = (Unk_ov068_02270780_Fn1 *)((u8 *)tbl + off + 4);
        (this->*(*fp))(x);
    }
    i++;
test:
    if (i < 5) goto loop;
}

extern "C" void *data_ov068_022703dc[2] = {(void *)_ZN19SpNpcRoostGuestTalk16onKkChoiceListenEi, 0};
extern "C" char sRoostTexWip[27] = "npc_sp/model/wip_tex.nsbtx";
extern "C" void *data_ov068_022703f4[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct00Ev, 0};
extern "C" char sRoostModelEnd[23] = "npc_sp/model/end.nsbmd";
extern "C" char sKkMouthM2[4] = "m.2";
extern "C" const char *sRoostGuestMsgFiles[9] = {sRoostMsgCf1, sRoostMsgCf2, sRoostMsgCf3, sRoostMsgCf4, sRoostMsgCf5, sRoostMsgCf6, sRoostMsgCf7, sRoostMsgDog, sRoostMsgCf7};
extern "C" void *data_ov068_0227038c[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct01Ev, 0};
extern "C" const char *sRoostGuestModelPaths[9] = {sRoostModelPga, sRoostModelPgb, sRoostModelPoo, sRoostModelOtt, sRoostModelWip, sRoostModelXct, sRoostModelMof, sRoostModelEnd, sRoostModelEnd};
extern "C" char sKkMouthM1[4] = "m.1";
extern "C" char sRoostModelMof[23] = "npc_sp/model/mof.nsbmd";
extern "C" char sRoostMsgDog[11] = "sp_npc_dog";
extern "C" char sRoostModelOtt[23] = "npc_sp/model/ott.nsbmd";
extern "C" void *data_ov068_022703cc[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct03Ev, 0};
extern "C" char sRoostTexPoo[27] = "npc_sp/model/poo_tex.nsbtx";
extern "C" char sRoostTexOtt[27] = "npc_sp/model/ott_tex.nsbtx";
extern "C" Unk_ov068_02270780_Ent sKkShowScripts[6] = {{NULL, 0}, {*(Unk_ov068_02270780_Fn *)data_ov068_022703fc, 0}, {*(Unk_ov068_02270780_Fn *)data_ov068_0227037c, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_022703ec, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_0227041c, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_02270424, 1}};
extern "C" char sRoostMsgCf7[11] = "sp_npc_cf7";
extern "C" char sKkMouthM3[4] = "m.3";
extern "C" void *data_ov068_022703e4[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct00Ev, 0};
extern "C" char sRoostTexXct[27] = "npc_sp/model/xct_tex.nsbtx";
extern "C" char sRoostMsgCf1[11] = "sp_npc_cf1";
extern "C" void *data_ov068_0227041c[2] = {(void *)_ZN19SpNpcRoostGuestTalk20scriptEndPerformanceEv, 0};
extern "C" char *sKkMouthTextures[6] = {sKkMouthM0, sKkMouthM1, sKkMouthM2, sKkMouthM3, sKkMouthM4, sKkMouthM5};
extern "C" char sRoostMsgCf6[11] = "sp_npc_cf6";
extern "C" void *data_ov068_022703fc[2] = {(void *)_ZN19SpNpcRoostGuestTalk21scriptReadSongRequestEv, 0};
extern "C" char sRoostMsgCf5[11] = "sp_npc_cf5";
extern "C" char sRoostModelXct[23] = "npc_sp/model/xct.nsbmd";
extern "C" char sKkMouthM0[4] = "m.0";
extern "C" void *data_ov068_02270404[2] = {(void *)_ZN19SpNpcRoostGuestTalk16onKkChoiceListenEi, 0};
extern "C" void *data_ov068_0227040c[2] = {(void *)_ZN19SpNpcRoostGuestTalk16onKkChoiceListenEi, 0};
extern "C" void *data_ov068_022703ec[2] = {(void *)_ZN19SpNpcRoostGuestTalk13scriptPerformEv, 0};
extern "C" void *data_ov068_022703ac[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct04Ev, 0};
extern "C" Unk_ov068_0226d39c_Entry sSpNpcRoostGuestActTable[5] = {{*(Unk_ov068_0226d39c_Fn *)data_ov068_022703f4, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703e4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703a4, *(Unk_ov068_0226d39c_Fn *)data_ov068_0227038c}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_02270394, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703d4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703cc, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703b4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703ac, *(Unk_ov068_0226d39c_Fn *)data_ov068_02270414}};
extern "C" char sRoostModelPoo[23] = "npc_sp/model/poo.nsbmd";


void SpNpcRoostGuestTalk::onKkChoiceListen(s32 a) {
    using namespace sA;
    if (a == 0) {
        owner->showAccepted = 1;
    }
}

void SpNpcRoostGuestTalk::onKkChoiceTradeGuitar(s32 a) {
    using namespace sA;
    u16 h0;
    u16 h1;
    if (a == 0) {
        h0 = 0x3530;
        if (Pocket_FindItem(&h0) != -1) {
            Pocket_RemoveItem();
            h1 = 0x4a34;
            Pocket_AddItem(&h1, 0);
        }
    }
}

void SpNpcRoostGuestTalk::onKkChoiceRequest(s32 a) {
    using namespace sA;
    if (a == 0) {
        owner->hasSongRequest = 1;
    } else {
        owner->hasSongRequest = 0;
        owner->isRandomSong = 0;
        owner->songItem = RoostGuest_PickKKSong(owner);
    }
}

void SpNpcRoostGuestTalk::update() {
    using namespace sA;
    s32 i = script;
    if (((u8 *)&sKkShowScripts[0].flag)[i * 12] != 0) {
        Unk_ov068_02270780_Ent *e = &sKkShowScripts[i];
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void SpNpcRoostGuestTalk::onTaskDone() {
    using namespace sA;
    s32 i = script;
    if (((u8 *)&sKkShowScripts[0].flag)[i * 12] == 0) {
        Unk_ov068_02270780_Ent *e = &sKkShowScripts[i];
        if (e->fn != 0) {
            (this->*e->fn)();
            setScript(0);
        }
    }
}

void SpNpcRoostGuestTalk::setScript(s32 state) {
    using namespace sA;
    script = state;
}

void SpNpcRoostGuestTalk::scriptReadSongRequest() {
    using namespace sA;
    u8 cmd;
    u16 tmp;
    MI_CpuCopy8(MenuCtrl_GetText(), owner->requestText, 0x10);
    ItemName objA;
    EncodedString16Buf objB;
    EncodedString_SetRaw(&objB, owner->requestText, 0x10);
    MsgString_fromEncoded(&objA, &objB, 0, 0);
    TalkWindowState_setNamedSlot(unk_3c, 0, &objA, 7);
    if (MenuCtrl_IsResultOk()) {
        u32 v;
        u16 h;
        owner->isRandomSong = 0;
        v = MenuCtrl_GetIndex();
        if (v < 0x46) {
            h = v + 0x1323;
        } else {
            h = 0x1323;
        }
        owner->songItem = h;
        tmp = owner->songItem;
        setItemNameSlot((u32)&tmp, 1, 7);
    } else {
        owner->isRandomSong = 1;
        owner->songItem = RoostGuest_PickKKSong(owner);
    }
    cmd = 8;
    TalkWindowState_setNextMessage(unk_3c, &cmd, sRoostGuestMsgFiles[owner->guestType]);
}

void SpNpcRoostGuestTalk::scriptStartPerformance() {
    using namespace sA;
    Unk_ov068_0226c870_Pad pad;
    s32 *q = TalkWindow_Get(0);
    if (q[1] == 5) {
        if (owner->showTimer == 0x2d) {
            LightSwitch_SetOff(0, 0x1e);
            LightSwitch_SetOn(1, 1, 0);
            NpcLookAt_setManualAngles(&owner->lookAt, 0, -0xc18, 0, 0x276, 0x276);
        }
        if (func_020e7500(&owner->showTimer) == 0) {
            RoomCamera_KkShowWideShot();
            owner->unk_654 = 0;
            if (owner->isRandomSong != 0) {
                owner->unk_654 = Random_GlobalBelow(3) + 0xa9;
                s16 *r = DebugVar_GetPtr(0, 0x4e);
                if (*r != 0) {
                    r = DebugVar_GetPtr(0, 0x4e);
                    s32 t = *r - 1;
                    if (t < 0) {
                        t = 0;
                    } else if (t > 3) {
                        t = 3;
                    }
                    owner->unk_654 = t + 0xa9;
                }
            } else {
                u32 h = owner->songItem;
                s32 t;
                if (h >= 0x1323 && h <= 0x1368) {
                    t = h - 0x1323;
                } else {
                    t = -1;
                }
                owner->unk_654 = t + 0x63;
            }
            Bgm_Request(0xf, (u16)owner->unk_654, 0x7f, 0);
            lastBeatState.unk_14 = 0;
            KkShowFx_Start();
            setScript(3);
        }
    }
}

void SpNpcRoostGuestTalk::scriptPerform() {
    using namespace sA;
    Unk_ov068_0226c63c_Msg *p = Snd_GetBeatState();
    KkShowFx_Update();
    if (p != NULL) {
        if (p->seqVar2 == 1 && lastBeatState.seqVar2 == 1) {
            goto end;
        }
        s32 t4 = p->seqVar3;
        if (t4 != lastBeatState.seqVar3) {
            if (t4 == 2) {
                RoomCamera_KkShowResetShot();
                KkShowFx_CallUnk1de4();
            } else if ((u8)t4 <= 1) {
                RoomCamera_KkShowPickShot();
            }
        }
        s32 t1 = p->trackAnim;
        if (t1 != lastBeatState.trackAnim) {
            if (t1 == -1) {
                NpcFaceAnim_setMouthTexture(&owner->faceAnim, (u32)sKkMouthM0);
            } else {
                NpcFaceAnim_setMouthTexture(&owner->faceAnim, (u32)sKkMouthTextures[t1]);
            }
        }
        s32 t2 = p->seqVar0;
        if (t2 != lastBeatState.seqVar0 || p->seqVar4 != lastBeatState.seqVar4) {
            if (t2 == 1) {
                NpcLookAt_setManualAngles(&owner->lookAt, 0, 0, 0, 0x100, 0x200);
            } else {
                NpcLookAt_setManualAngles(&owner->lookAt, 0, -0xc18, 0, 0x100, 0x200);
            }
            u16 v = data_020c6cc8;
            if (lastBeatState.unk_14 == 0) {
                v = 0x28;
                lastBeatState.unk_14 = 1;
            }
            s32 t0 = p->seqVar4;
            if (t0 == 3) {
                NpcActionCtrl_requestPlayAnim(&owner->actionCtrl, 2, 0x103, 0, v, 0);
            } else if (t0 == 4) {
                NpcActionCtrl_requestPlayAnim(&owner->actionCtrl, 2, 0x104, 0, v, 0);
            }
        }
        if ((u8)(s8)(p->seqVar4 - 3) <= 1) {
            owner->model.curFrame = 0;
            owner->model.frameStep = p->unk_08;
            ThreeLayerAnimModel_updateLayers3(&owner->model);
            owner->model.frameStep = 0;
        }
        {
            s32 t3 = p->seqVar2;
            if (t3 != lastBeatState.seqVar2) {
                if (t3 == 0) {
                    KkShowFx_Update();
                    KkShowFx_SetParam(0);
                    KkShowFx_CallUnk1f70();
                }
                if (p->seqVar2 == 1) {
                    NpcFaceAnim_setMouthTexture(&owner->faceAnim, (u32)sKkMouthM0);
                    NpcFaceAnim_resumeMouthMaterial(&owner->faceAnim);
                    NpcActionCtrl_requestStand(&owner->actionCtrl, 2, 0x28);
                }
            }
        }
    }
end:
    KkShowFx_CallUnk1f70();
    MI_CpuCopy8(p, &lastBeatState, 0x14);
    if (KkShowFx_GetState()) {
        owner->showTimer = 0x14;
        setScript(4);
    }
}

void SpNpcRoostGuestTalk::scriptEndPerformance() {
    using namespace sA;
    u8 c0, c1, c2;
    u16 h;
    if (func_020e7500(&owner->showTimer) == 0) {
        owner->showAccepted = 0;
        if (owner->isRandomSong != 0) {
            c0 = 0xb;
            TalkWindowState_setNextMessage(unk_3c, &c0, sRoostGuestMsgFiles[owner->guestType]);
        } else {
            h = owner->songItem;
            if (Pocket_AddItem(&h, 0) == 0) {
                c1 = 0xd;
                TalkWindowState_setNextMessage(unk_3c, &c1, sRoostGuestMsgFiles[owner->guestType]);
            } else {
                Talk_CheckAndSetPlayerFlag(0xd, 1);
                c2 = 0xc;
                TalkWindowState_setNextMessage(unk_3c, &c2, sRoostGuestMsgFiles[owner->guestType]);
            }
        }
        KkShowFx_Stop();
        Bgm_Release(owner->unk_654);
        owner->showTimer = 0x1e;
        LightSwitch_SetOff(1, 1);
        LightSwitch_SetOn(0, 0x1e, 0);
        setScript(5);
    }
}

void SpNpcRoostGuestTalk::scriptRestoreLook() {
    using namespace sA;
    if (func_020e7500(&owner->showTimer) == 0) {
        NpcLookAt_setManualAngles(&owner->lookAt, 0, 0, 0x1000, 0x276, 0x276);
        unk_3c->nextState = 1;
        setScript(0);
    }
}

BOOL SpNpcRoostGuest::vfunc_48() {
    using namespace sA;
    BOOL r = FALSE;
    if (act == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcRoostGuest::vfunc_4c(s32 mode) {
    using namespace sA;
    switch (mode) {
    case 0:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        if (guestType == 7) {
            talk.setTalkMode(0);
        }
        changeAct(1);
        break;
    case 1:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        if (hasSongRequest != 0) {
            talk.setTalkMode(1);
        } else {
            talk.setTalkMode(2);
        }
        changeAct(3);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL SpNpcRoostGuest::checkPlayerSeated() {
    using namespace sA;
    if (showAccepted == 0) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    Unk_ov068_0226c3b4_Vec v;
    v = *PlayerActor_GetBodyPos(4);
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, &v);
    if (PlayerActor_IsInAction(0x25, 4) != 0 && a == 9 && b == 0xd) {
        TalkRequest_AddPlayerTalk7(this, 0);
    }
    return TRUE;
}

extern "C" u16 RoostGuest_PickKKSong(void *self) {
    using namespace sC;
    u16 arr[2];
    ItemPick_FromRange(&arr[0], 0x1323, 0x46, 0, 0, (u32)PlayerData_GetCurrent(), 0, 10, 0, 1);
    if (!Unk_ov068_0226c340_R(&arr[0])) {
        ItemPick_FromRange(&arr[1], 0x1323, 0x46, 0, 0, 0, 1, 10, 0, 1);
        arr[0] = arr[1];
    }
    return arr[0];
}

u32 SpNpcRoostGuest::getGuest() {
    return guestType;
}

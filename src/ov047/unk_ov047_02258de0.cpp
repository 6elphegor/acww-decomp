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

struct Unk_0201bc1c;
class NpcActor;
class SpNpcBlathers;
class SpNpcBlathersTalk;

struct Unk_ov047_02258e34_Global {
    u8 pad_00[0x64];
    s32 myAid;
};

struct TalkStartMsg {
    const void *msgKey;
    u8 msgIndex;
};

struct Unk_ov047_0225a074_Buf {
    u8 lo : 2;
    u8 b : 3;
    u8 c : 3;
    u8 pad_01;
    u16 npcHandle;
};

struct MsgString9B {
    u8 pad_00[0x20];
    MsgString9B();
    ~MsgString9B();
};

struct Unk_ov047_0225a3e4_Msg {
    u8 msgIndex;
    u8 pad_01;
    u16 item;
    u16 unk_04;
};

struct Unk_ov047_0225a5e8_Msg {
    u8 msgIndex;
    u8 pad_01;
    u16 unk_02;
};

struct Unk_ov046_0225a11c_Vec {
    s32 x, y, z;
};

typedef BOOL (*Unk_ov047_Cb)(u16 *p, s32 m);
typedef BOOL (SpNpcBlathers::*Unk_ov047_0225aeb4_Fn)();

extern "C" {
extern Unk_ov047_02258e34_Global *gCommManager;
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern Unk_ov046_0225a11c_Vec gVec3Zero;
extern u8 gSaveData[];
extern u8 data_021ed0a0[];
extern u8 __ptmf_null[];

// plain functions
BOOL Talk_IsInOwnTown();
void Talk_AdvanceDrama(void *self, void *out);
BOOL Talk_IsDramaPending(void *self, void *out, s32 x);
void TalkRequest_SetTargetDone(void *self);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_GetFossilGroup(u16 *p);
s32 Fossil_CountInGroup(s32 id);
s32 ItemPick_FromRange(u16 *a, u32 b, u32 c, void *d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 Random_GlobalBelow(s32 n);
BOOL MenuCtrl_BuildPocketMask(Unk_ov047_Cb cb);
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
s32 Museum_CountDonatedFossilsInGroup(void *g, s32 id);
void *TownSessionState_Get();
s32 TownSessionState_TestFlag(void *p, s32 a);
void TownSessionState_SetFlag(void *p, s32 a);
void Effect_End(s32 h);
s32 Effect_Create(s32 a, void *b, void *c, s32 d);
void Effect_SetPosition(s32 h, void *b, void *c);
void *PlayerData_GetCurrent();
u16 Pocket_GetItem(s32 a);
void Pocket_RemoveItem(s32 a);
void Pocket_SetItem(u16 *p, s32 a, s32 b);
BOOL ParcelErrand_IsFor(u32 a, u16 *p);
u32 ParcelErrand_GetRecord(u32 a);
s16 *DebugVar_GetPtr(s32 a, s32 b);
s32 Clock_GetTimeOfDay();
BOOL GameStart_IsActive();
BOOL NetArea_IsLocalOwner();
s32 func_020e7500(void *p);
s32 strncmp(const char *a, const char *b, u32 n);
u32 func_0212a438(const char *s);

// methods of other modules, called as free functions with the object first (mangled-name trick)
BOOL _ZN11CommManager8isOnlineEv(void *g);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442017requestReturnItemEv(void *self);
void _ZN12Unk_0201442015requestKeepItemEv(void *self);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *self, u16 *p, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771019requestReopenWindowEv(void *self);
void _ZN12Unk_020d771015setSubSceneKindEjj(void *self, u32 a, u32 b);
void _ZN12Unk_020d771015setPocketFilterEjjj(void *self, Unk_ov047_Cb cb, u32 a, u32 b);
void _ZN12Unk_020d771012openSubSceneEi(void *self, s32 a);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *self, u16 *p, s32 a, s32 b);
void _ZN16ActorTalkRequest13getChoiceListEv(void *self);
NpcActor *_ZN16ActorTalkRequest13func_02015aacEv(void *self);
void _ZN16ActorTalkRequest13func_02015ab0Ej(void *self, u32 v);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void _ZN13NpcActionCtrl12requestStandEjt(void *self, s32 a, u16 b);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, Unk_ov046_0225a11c_Vec *v, s32 d, s32 e, u8 f);
BOOL _ZN10MuseumData14isFishCompleteEv(void *g);
BOOL _ZN10MuseumData19isPaintingsCompleteEv(void *g);
BOOL _ZN10MuseumData17isFossilsCompleteEv(void *g);
BOOL _ZN10MuseumData17isInsectsCompleteEv(void *g);
BOOL _ZN10MuseumData10isCompleteEv(void *g);
s32 _ZN10MuseumData18getDonationPercentEv(void *g);
BOOL _ZN10MuseumData12getDonorNameEiPt(void *g, void *obj, u16 *p);
void _ZN10MuseumData6donateEPt(void *g, u16 *p);
s32 _ZN10MuseumData9isDonatedEPt(void *g, u16 *p);
s32 _ZN10MuseumData16getDonationStateEPt(void *g, u16 *p);
s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *self, void *buf, void *name);
void _ZN15TalkWindowState7setSlotEiPv(void *self, s32 a, void *obj);
u32 _ZN10ChoiceList9getResultEv();
void _ZN12Unk_02097ff47setFlagEj(void *p, u32 v);
BOOL _ZN12Unk_02097ff48testFlagEj(u32 a, u32 b);
u32 _ZN10PlayerData10getErrandsEv(...);
u32 _ZN18SickVillagerRecord15getParcelErrandEv(u32 a);
void _ZN12ErrandRecord7setStepEh(u32 a, s32 b);
void _ZN8SaveData7setFlagEj(void *g, u32 n);
BOOL _ZN8SaveData8testFlagEj(void *g, u32 n);
BOOL _ZN8NpcActor11netGetSlotsEii(void *self, s32 *a, s32 *b);
}
#define NpcActor_netGetSlots _ZN8NpcActor11netGetSlotsEii
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define Unk_02014420_requestReturnItem _ZN12Unk_0201442017requestReturnItemEv
#define Unk_02014420_requestKeepItem _ZN12Unk_0201442015requestKeepItemEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define Unk_020d7710_requestReopenWindow _ZN12Unk_020d771019requestReopenWindowEv
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_setPocketFilter _ZN12Unk_020d771015setPocketFilterEjjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define MuseumData_isFishComplete _ZN10MuseumData14isFishCompleteEv
#define MuseumData_isPaintingsComplete _ZN10MuseumData19isPaintingsCompleteEv
#define MuseumData_isFossilsComplete _ZN10MuseumData17isFossilsCompleteEv
#define MuseumData_isInsectsComplete _ZN10MuseumData17isInsectsCompleteEv
#define MuseumData_isComplete _ZN10MuseumData10isCompleteEv
#define MuseumData_getDonationPercent _ZN10MuseumData18getDonationPercentEv
#define MuseumData_getDonorName _ZN10MuseumData12getDonorNameEiPt
#define MuseumData_donate _ZN10MuseumData6donateEPt
#define MuseumData_isDonated _ZN10MuseumData9isDonatedEPt
#define MuseumData_getDonationState _ZN10MuseumData16getDonationStateEPt
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define PlayerData_getErrands _ZN10PlayerData10getErrandsEv
#define SickVillagerRecord_getParcelErrand _ZN18SickVillagerRecord15getParcelErrandEv
#define ErrandRecord_setStep _ZN12ErrandRecord7setStepEh
#define SaveData_setFlag _ZN8SaveData7setFlagEj
#define SaveData_testFlag _ZN8SaveData8testFlagEj

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice(u32 a);
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
    virtual void onTaskDone();
    char fileName[0x1a];
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
    void setSubSceneKindArg(u32 a, u32 b, u32 c);
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
    virtual void vfunc_4c(u32 a, u32 b);
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

    BOOL netIsTalkLocked();
    void setNetUserBytes(void *dst, s32 n);
    BOOL getNetUserBytes(u8 *src, u32 n);
    void netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...);
    BOOL isNetOwner();
    void setTalkRequest(Unk_0201bc1c *p);
    s32 getPlayerActor(u32 id);
    s32 getAngleTo(NpcActor *other);
    void setCollisionRadius(s32 v);

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

// Sub object (vtable 0x0225b5d4), a member of the scene at +0x658; size 0xd0.
class SpNpcBlathersTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcBlathersTalk::*Fn)();
    typedef void (SpNpcBlathersTalk::*Fn1)(u32);
    typedef void (SpNpcBlathersTalk::*Fni)(s32);

    SpNpcBlathersTalk();
    virtual ~SpNpcBlathersTalk();
    virtual void vfunc_08();
    virtual void onMessageEnd();
    virtual void onChoice(u32 a);
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone();

    void onDeliveryChoice(u32 a);
    void onDonateMoreChoice(u32 a);
    void onAnythingElseChoice(u32 a);
    void onAppraiseDonatedFossilChoice(u32 a);
    void onAppraiseAnotherChoice(u32 a);
    void onKeepFossilChoice(u32 a);
    void onDonateMoreChoice2(u32 a);
    void onDonationOfferChoice(u32 a);
    void onMainMenuChoice(s32 a);
    void dispatchChoice(u32 a);
    void onDramaChoice(s32 a);
    void openExhibitList();
    void returnItemAndAskMore();
    void onAlreadyDonated();
    void showFishComment();
    void showInsectComment();
    void onPaintingDonated();
    void onExhibitCompleted();
    void onFossilPartDonated();
    void returnAppraisedFossil();
    void offerFossilDonation();
    void afterFossilIdentified();
    void appraiseFossil();
    void returnHeldItem();
    void showMuseumMenu();
    void returnItemAndAskShowMore();
    void returnItemAndShowMenu();
    void openAppraisalPicker();
    void openDonationPicker();
    void commitDonation();
    void attachOwner(SpNpcBlathers *owner);
    void scriptDeliveryItemChosen();
    void scriptExhibitListClosed();
    void scriptAppraisalItemChosen();
    void scriptCloseItemSelect();
    void scriptDonationItemChosen();
    void setNextScript(s32 idx);
    void setScript(s32 idx);

    /* 0xac */ s32 dramaTalk;
    /* 0xb0 */ SpNpcBlathers *ownerNpc;
    /* 0xb4 */ Fn script;
    /* 0xbc */ Fn nextScript;
    /* 0xc4 */ s32 pocketSlot;
    /* 0xc8 */ u8 appraisalFlow;
    /* 0xc9 */ u8 pad_c9;
    /* 0xca */ u16 item;
    /* 0xcc */ s32 nextMsg;
};

class SpNpcBlathers : public SpNpcActor {
public:
    SpNpcBlathers() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcBlathersTalk talk;
    u8 dramaShown;
    u8 pad_729;
    u16 dramaTimer;
    u16 standBlend;
    u16 sleepTimer;
    s16 homeAngle;
    u8 isAsleep;
    u8 pad_733;
    u16 sleepBlend;
    s16 pad_736;
    s32 effectHandle;
};

extern "C" void _ZN17SpNpcBlathersTalk16onDeliveryChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk18onDonateMoreChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk20onAnythingElseChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk29onAppraiseDonatedFossilChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk23onAppraiseAnotherChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk18onKeepFossilChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk19onDonateMoreChoice2Ej();
extern "C" void _ZN17SpNpcBlathersTalk21onDonationOfferChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk16onMainMenuChoiceEi();
extern "C" void _ZN17SpNpcBlathersTalk14dispatchChoiceEj();
extern "C" void _ZN17SpNpcBlathersTalk13onDramaChoiceEi();
extern "C" void _ZN17SpNpcBlathersTalk15openExhibitListEv();
extern "C" void _ZN17SpNpcBlathersTalk20returnItemAndAskMoreEv();
extern "C" void _ZN17SpNpcBlathersTalk16onAlreadyDonatedEv();
extern "C" void _ZN17SpNpcBlathersTalk15showFishCommentEv();
extern "C" void _ZN17SpNpcBlathersTalk17showInsectCommentEv();
extern "C" void _ZN17SpNpcBlathersTalk17onPaintingDonatedEv();
extern "C" void _ZN17SpNpcBlathersTalk18onExhibitCompletedEv();
extern "C" void _ZN17SpNpcBlathersTalk19onFossilPartDonatedEv();
extern "C" void _ZN17SpNpcBlathersTalk21returnAppraisedFossilEv();
extern "C" void _ZN17SpNpcBlathersTalk19offerFossilDonationEv();
extern "C" void _ZN17SpNpcBlathersTalk21afterFossilIdentifiedEv();
extern "C" void _ZN17SpNpcBlathersTalk14appraiseFossilEv();
extern "C" void _ZN17SpNpcBlathersTalk14returnHeldItemEv();
extern "C" void _ZN17SpNpcBlathersTalk14showMuseumMenuEv();
extern "C" void _ZN17SpNpcBlathersTalk24returnItemAndAskShowMoreEv();
extern "C" void _ZN17SpNpcBlathersTalk21returnItemAndShowMenuEv();
extern "C" void _ZN17SpNpcBlathersTalk19openAppraisalPickerEv();
extern "C" void _ZN17SpNpcBlathersTalk18openDonationPickerEv();
extern "C" void _ZN17SpNpcBlathersTalk24scriptDeliveryItemChosenEv();
extern "C" void _ZN17SpNpcBlathersTalk23scriptExhibitListClosedEv();
extern "C" void _ZN17SpNpcBlathersTalk25scriptAppraisalItemChosenEv();
extern "C" void _ZN17SpNpcBlathersTalk21scriptCloseItemSelectEv();
extern "C" void _ZN17SpNpcBlathersTalk24scriptDonationItemChosenEv();
extern "C" void _ZN13SpNpcBlathers9mainAct05Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct05Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct08Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct08Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct07Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct07Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct06Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct06Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct04Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct03Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct03Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct02Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct02Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct01Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct01Ev();
extern "C" void _ZN13SpNpcBlathers9mainAct00Ev();
extern "C" void _ZN13SpNpcBlathers10setupAct00Ev();
extern "C" void *data_ov047_0225b320[2];
extern "C" void *data_ov047_0225b328[2];
extern "C" void *data_ov047_0225b330[2];
extern "C" void *data_ov047_0225b338[2];
extern "C" void *data_ov047_0225b340[2];
extern "C" void *data_ov047_0225b348[2];
extern "C" void *data_ov047_0225b350[2];
extern "C" void *data_ov047_0225b358[2];
extern "C" void *data_ov047_0225b360[2];
extern "C" void *data_ov047_0225b368[2];
extern "C" void *data_ov047_0225b370[2];
extern "C" void *data_ov047_0225b378[2];
extern "C" void *data_ov047_0225b380[2];
extern "C" void *data_ov047_0225b388[2];
extern "C" void *data_ov047_0225b390[2];
extern "C" void *data_ov047_0225b398[2];
extern "C" void *data_ov047_0225b3a0[2];
extern "C" void *data_ov047_0225b3a8[2];
extern "C" void *data_ov047_0225b3b0[2];
extern "C" void *data_ov047_0225b3b8[2];
extern "C" void *data_ov047_0225b3c0[2];
extern "C" void *data_ov047_0225b3c8[2];
extern "C" void *data_ov047_0225b3d0[2];
extern "C" void *data_ov047_0225b3d8[2];
extern "C" void *data_ov047_0225b3e0[2];
extern "C" void *data_ov047_0225b3e8[2];
extern "C" void *data_ov047_0225b3f0[2];
extern "C" void *data_ov047_0225b3f8[2];
extern "C" void *data_ov047_0225b400[2];
extern "C" void *data_ov047_0225b408[2];
extern "C" void *data_ov047_0225b410[2];
extern "C" void *data_ov047_0225b418[2];
extern "C" void *data_ov047_0225b420[2];
extern "C" void *data_ov047_0225b428[2];
extern "C" void *data_ov047_0225b430[2];
extern "C" void *data_ov047_0225b438[2];
extern "C" void *data_ov047_0225b440[2];
extern "C" void *data_ov047_0225b448[2];
extern "C" void *data_ov047_0225b450[2];
extern "C" void *data_ov047_0225b458[2];
extern "C" void *data_ov047_0225b460[2];
extern "C" void *data_ov047_0225b468[2];
extern "C" void *data_ov047_0225b470[2];
extern "C" void *data_ov047_0225b478[2];
extern "C" void *data_ov047_0225b480[2];
extern "C" void *data_ov047_0225b488[2];
extern "C" void *data_ov047_0225b490[2];
extern "C" void *data_ov047_0225b498[2];
extern "C" void *data_ov047_0225b4a0[2];
extern "C" void *data_ov047_0225b4a8[2];
extern "C" void *data_ov047_0225b4b0[2];
extern "C" void *data_ov047_0225b4b8[2];
extern "C" void *data_ov047_0225b4c0[2];
extern "C" void *data_ov047_0225b4c8[2];
extern "C" void *data_ov047_0225b4d0[2];
extern "C" void *data_ov047_0225b4d8[2];
extern "C" void *data_ov047_0225b4e0[2];
extern "C" void *data_ov047_0225b4e8[2];
extern "C" void *data_ov047_0225b4f0[2];
extern "C" void *data_ov047_0225b4f8[2];
extern "C" void *data_ov047_0225b500[2];
extern "C" void *data_ov047_0225b508[2];
extern "C" void *data_ov047_0225b510[2];
extern "C" void *data_ov047_0225b518[2];
extern "C" void *data_ov047_0225b520[2];
extern "C" void *data_ov047_0225b528[2];
extern "C" void *data_ov047_0225b530[2];
extern "C" void *data_ov047_0225b538[2];
extern "C" void *data_ov047_0225b540[2];
extern "C" void *data_ov047_0225b548[2];
extern "C" void *data_ov047_0225b550[2];
extern "C" void *data_ov047_0225b558[2];
extern "C" void *data_ov047_0225b560[2];
extern "C" void *data_ov047_0225b568[2];
extern "C" void *data_ov047_0225b570[2];
extern "C" void *data_ov047_0225b578[2];

struct Unk_ov047_0225aeb4_Ent {
    BOOL (SpNpcBlathers::*enter)();
    BOOL (SpNpcBlathers::*exit)();
};

struct Unk_ov047_SceneEntry {
    void *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" void *SpNpcBlathers_Create();
extern "C" BOOL SpNpcBlathers_IsDeliveryItem(u16 *p, s32 m);
extern "C" BOOL SpNpcBlathers_IsUnidentifiedFossil(u16 *p, s32 m);
extern "C" BOOL SpNpcBlathers_IsDonatableItem(u16 *p, s32 m);
extern "C" void SpNpcBlathersTalk_GetScript(SpNpcBlathersTalk *self, SpNpcBlathersTalk::Fn *out, s32 idx);
#define sSpNpcBlathersKey ((char *)"sp_npc_owl")
#define sSpNpcBlathersSequence4Key ((char *)"sp_etc_sequence4")
#define sSpNpcBlathersDramaKey ((char *)"sp_npc_drama1")
extern "C" u8 sSpNpcBlathersModelPath[];
extern "C" u8 sSpNpcBlathersTexturePath[];
extern "C" const u8 sSpNpcBlathersDramaMsgTable[32];
extern "C" Unk_ov047_SceneEntry sSpNpcBlathersProfile;
extern Unk_ov047_0225aeb4_Ent sSpNpcBlathersActTable[9];

struct Unk_ov047_022592b8_Byte {
    u8 v;
    Unk_ov047_022592b8_Byte() {}
};

struct Unk_ov047_022592b8_Ent {
    u32 id;
    void (SpNpcBlathersTalk::*fn)(u32);
};

// ---- unit 2
typedef void (SpNpcBlathersTalk::*Unk_ov047_02259a8c_Fn)();

struct Unk_ov047_02259a8c_Ent {
    u32 id;
    Unk_ov047_02259a8c_Fn fn;
};

static inline BOOL Unk_ov047_022596e8_IsNoneT(u16 *p, u16 &v) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        v = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

static inline BOOL Unk_ov047_022596e8_IsNone(u16 *p) {
    u16 v;
    return Unk_ov047_022596e8_IsNoneT(p, v);
}

// ---- unit 3
static inline BOOL Unk_ov047_0225a4a8_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov047_0225a3e4_Same(u16 *p, u16 *t) {
    if (Item_IsFurniture(p)) {
        *t = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov047_0225a864_R(u16 *p, u32 lo, u32 hi) {
    return (*p >= lo && *p <= hi) ? TRUE : FALSE;
}

static inline s32 Unk_ov047_0225a5e8_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return v - lo;
    }
    return -1;
}

extern "C" void *SpNpcBlathers_Create() {
    return new SpNpcBlathers();
}

BOOL SpNpcBlathers::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    standBlend = data_020c6cc8;
    effectHandle = -1;
    return TRUE;
}

BOOL SpNpcBlathers::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    u8 buf[8];
    dramaShown = 0;
    homeAngle = rotY;
    dramaTimer = 0xff;
    collider.unk_1c |= 2;
    sleepBlend = 0;
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        collider.unk_1c |= 2;
        if (NetArea_IsLocalOwner()) {
            position = 0xf000;
            positionZ = 0x15000;
            rotY = 0;
            moveAngleY = 0;
            changeAct(0);
        } else {
            changeAct(6);
        }
        return TRUE;
    }
    if (Clock_GetTimeOfDay() == 2 || Clock_GetTimeOfDay() == 3 || Talk_IsDramaPending(this, buf, 1)) {
        changeAct(0);
    } else {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcBlathers::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (effectHandle != -1) {
        Effect_End(effectHandle);
        effectHandle = -1;
    }
    return TRUE;
}

u8 *SpNpcBlathers::getTexturePath() { return sSpNpcBlathersTexturePath; }

// Getters at the end of the file so they are not inlined.
u8 *SpNpcBlathers::getModelPath() { return sSpNpcBlathersModelPath; }

BOOL SpNpcBlathers::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcBlathersActTable[unk_654].exit) {
        r = (this->*sSpNpcBlathersActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcBlathers::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcBlathersActTable[state].enter) {
        ok = (this->*sSpNpcBlathersActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcBlathers::setupAct00() {
    u8 buf[8];
    dramaTimer = 0xff;
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    if (dramaShown == 0) {
        if (Talk_IsDramaPending(this, buf, 1)) {
            dramaTimer = Random_GlobalBelow(5) * 0x14 + 0x64;
        }
    }
    isAsleep = 0;
    standBlend = data_020c6cc8;
    sleepTimer = 0x78;
    NpcLookAt_setTarget(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct00() {
    if (dramaTimer != 0xff) {
        if (func_020e7500(&dramaTimer) == 0) {
            changeAct(5);
        }
        return TRUE;
    }
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0 || Clock_GetTimeOfDay() == 2 ||
        Clock_GetTimeOfDay() == 3) {
        return TRUE;
    }
    if (func_020e7500(&sleepTimer) == 0) {
        sleepBlend = 0x18;
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcBlathers::setupAct01() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct01() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcBlathers::setupAct02() {
    NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0xf0, 0, sleepBlend, 0);
    isAsleep = 1;
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct02() {
    if (effectHandle == -1) {
        effectHandle = Effect_Create(0x3c, (u8 *)this + 0x478, &rotY, 0);
    } else {
        Effect_SetPosition(effectHandle, (u8 *)this + 0x478, &rotY);
    }
    return TRUE;
}

BOOL SpNpcBlathers::setupAct03() {
    NpcActor *p = func_02015aac(&talk);
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    if (effectHandle != -1) {
        Effect_End(effectHandle);
        effectHandle = -1;
    }
    NpcLookAt_setTarget(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct03() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        isAsleep = 0;
        TalkRequest_SetTargetDone(this);
        changeAct(4);
    }
    return TRUE;
}

BOOL SpNpcBlathers::mainAct04() { return TRUE; }

BOOL SpNpcBlathers::setupAct06() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct06() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (NpcActor_netGetSlots(this, &a, &b) && ((x = a), x == (t = gCommManager->myAid)) && x == b) {
            netSetSlotsIfOwner(1, t, t);
            talk.vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            changeAct(3);
        } else if (NetArea_IsLocalOwner() && b == 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcBlathers::setupAct07() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct07() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        if (NpcActor_netGetSlots(this, &a, &b) && a == 4 && NetArea_IsLocalOwner()) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcBlathers::setupAct08() { return TRUE; }

BOOL SpNpcBlathers::mainAct08() { return TRUE; }

// ---- unit 4
// ---------------------------------------------------------------------------------------------------------------------

void SpNpcBlathersTalk::onTaskDone() {
    if (script) {
        (this->*script)();
        Fn n = *(Fn *)__ptmf_null;
        script = n;
        if (nextScript) {
            script = nextScript;
            nextScript = n;
        }
    }
}

extern "C" void *data_ov047_0225b398[2] = {(void *)_ZN13SpNpcBlathers10setupAct00Ev, 0};

extern "C" void SpNpcBlathersTalk_GetScript(SpNpcBlathersTalk *self, SpNpcBlathersTalk::Fn *out, s32 idx) {
    static SpNpcBlathersTalk::Fn tbl[5] = {
        *(SpNpcBlathersTalk::Fn *)data_ov047_0225b518,
        *(SpNpcBlathersTalk::Fn *)data_ov047_0225b510,
        *(SpNpcBlathersTalk::Fn *)data_ov047_0225b508,
        *(SpNpcBlathersTalk::Fn *)data_ov047_0225b500,
        *(SpNpcBlathersTalk::Fn *)data_ov047_0225b4f8,
    };
    *out = tbl[idx];
}

void SpNpcBlathersTalk::setScript(s32 idx) {
    SpNpcBlathersTalk_GetScript(this, &script, idx);
}

void SpNpcBlathersTalk::setNextScript(s32 idx) {
    SpNpcBlathersTalk_GetScript(this, &nextScript, idx);
}

extern "C" BOOL SpNpcBlathers_IsDonatableItem(u16 *p, s32 m) {
    if (m == 0) {
        BOOL a = Unk_ov047_0225a4a8_R(p, 0x450c, 0x45db);
        BOOL b = Unk_ov047_0225a864_R(p, 0x3934, 0x3983);
        BOOL c = Unk_ov047_0225a864_R(p, 0x38e4, 0x3933);
        BOOL d = Unk_ov047_0225a864_R(p, 0x12e8, 0x131f);
        BOOL e = Unk_ov047_0225a864_R(p, 0x12b0, 0x12e7);
        BOOL f = Unk_ov047_0225a864_R(p, 0x3894, 0x38e3);
        BOOL g = Unk_ov047_0225a864_R(p, 0x1549, 0x1549);
        return b | (c | (d | (e | (f | (g | a)))));
    }
    return FALSE;
}

void SpNpcBlathersTalk::scriptDonationItemChosen() {
    void *o = unk_3c;
    Unk_ov047_0225a5e8_Msg m;
    m.msgIndex = 0x22;
    if (MenuCtrl_IsResultOk()) {
        MsgString9B ob;
        pocketSlot = -1;
        pocketSlot = MenuCtrl_GetIndex();
        item = Pocket_GetItem(pocketSlot);
        if (!Unk_ov047_0225a3e4_Same(&item, &m.unk_02)) {
            ActorTalkRequest_setItemNameSlot(this, &item, 0, 7);
            if (Unk_ov047_0225a4a8_R(&item, 0x1549, 0x1549)) {
                m.msgIndex = 0x21;
            } else {
                void *g = data_021ed0a0;
                if (MuseumData_isDonated(g, &item) == 0) {
                    if (Unk_ov047_0225a4a8_R(&item, 0x450c, 0x45db)) {
                        appraisalFlow = 0;
                        m.msgIndex = 0x25;
                    } else if (item >= 0x3894 && item <= 0x38e3) {
                        m.msgIndex = Random_GlobalBelow(3) + 0x2e;
                    } else if (item >= 0x12b0 && item <= 0x12e7) {
                        if (Unk_ov047_0225a5e8_Idx(item, 0x12b0, 0x12e7) != 0x34) {
                            m.msgIndex = 0x32;
                        } else {
                            m.msgIndex = 0x33;
                        }
                    } else if (item >= 0x12e8 && item <= 0x131f) {
                        m.msgIndex = 0x35;
                    } else if (item >= 0x38e4 && item <= 0x3933) {
                        s32 idx = item >= 0x38e4 && item <= 0x3933 ? (s32)(item - 0x38e4) >> 2 : -1;
                        item = (u32)idx < 0x14 ? idx * 4 + 0x3934 : 0x3934;
                        s32 t = pocketSlot;
                        if (t >= 0) {
                            Pocket_SetItem(&item, 0, t);
                        }
                        m.msgIndex = 0x42;
                    } else if (item >= 0x3934 && item <= 0x3983) {
                        m.msgIndex = 0x43;
                    }
                } else {
                    switch (MuseumData_getDonationState(g, &item)) {
                    case 0:
                        m.msgIndex = 0x39;
                        break;
                    case 1:
                        if (MuseumData_getDonorName(g, &ob, &item)) {
                            TalkWindowState_setSlot(o, 0, &ob);
                        }
                        m.msgIndex = 0x38;
                        break;
                    case 2:
                        m.msgIndex = 0x37;
                        break;
                    }
                }
            }
            Unk_02014420_requestTakeItem(this, &item, 0, 10, 0);
            setNextScript(4);
        }
    } else {
        item = 0xfff1;
        Unk_020d7710_requestReopenWindow(this);
    }
    TalkWindowState_setNextMessage(o, &m, sSpNpcBlathersKey);
}

void SpNpcBlathersTalk::scriptCloseItemSelect() {
    Unk_020d7710_requestReopenWindow(this);
}

extern "C" BOOL SpNpcBlathers_IsUnidentifiedFossil(u16 *p, s32 m) {
    if (m == 0) {
        return Unk_ov047_0225a4a8_R(p, 0x1549, 0x1549);
    }
    return FALSE;
}

void SpNpcBlathersTalk::scriptAppraisalItemChosen() {
    void *o = unk_3c;
    Unk_ov047_0225a5e8_Msg m;
    m.msgIndex = 0x22;
    if (MenuCtrl_IsResultOk()) {
        pocketSlot = MenuCtrl_GetIndex();
        item = Pocket_GetItem(pocketSlot);
        Unk_02014420_requestTakeItem(this, &item, 0, 10, 0);
        m.msgIndex = 0x19;
    } else {
        item = 0xfff1;
        Unk_020d7710_requestReopenWindow(this);
    }
    setNextScript(4);
    TalkWindowState_setNextMessage(o, &m, sSpNpcBlathersKey);
}

void SpNpcBlathersTalk::scriptExhibitListClosed() {
    void *o = unk_3c;
    if (MenuCtrl_IsResultOk()) {
        u8 cmd = 0x13;
        void *g = data_021ed0a0;
        s32 v = MuseumData_getDonationPercent(g);
        if (v == 0) {
            cmd = 0x10;
        } else if (v <= 0x1e000) {
            cmd = 0x11;
        } else if (v <= 0x46000) {
            cmd = 0x12;
        } else if (MuseumData_isComplete(g)) {
            cmd = 0x49;
        }
        TalkWindowState_setNextMessage(o, &cmd, sSpNpcBlathersKey);
    }
}

extern "C" BOOL SpNpcBlathers_IsDeliveryItem(u16 *p, s32 m) {
    if (m == 2) {
        return Unk_ov047_0225a4a8_R(p, 0x155f, 0x1560);
    }
    return FALSE;
}

void SpNpcBlathersTalk::scriptDeliveryItemChosen() {
    void *o = unk_3c;
    Unk_ov047_0225a3e4_Msg m;
    m.msgIndex = 0xe8;
    u32 r7 = (u32)PlayerData_GetCurrent();
    if (MenuCtrl_IsResultOk() && Talk_IsInOwnTown()) {
        s32 r5 = MenuCtrl_GetIndex();
        m.item = Pocket_GetItem(r5);
        if (r5 >= 0) {
            Pocket_RemoveItem(r5);
        }
        if (!Unk_ov047_0225a3e4_Same(&m.item, &m.unk_04)) {
            Unk_02014420_requestTakeItem(this, &m.item, 2, 5, 0);
        }
        ErrandRecord_setStep(ParcelErrand_GetRecord(SickVillagerRecord_getParcelErrand(PlayerData_getErrands(r7))), 1);
        m.msgIndex = 0xe7;
    }
    TalkWindowState_setNextMessage(o, &m, sSpNpcBlathersKey);
}

BOOL SpNpcBlathers::setupAct05() {
    NpcActionCtrl_requestAction(&actionCtrl, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcBlathers::mainAct05() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 10) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            standBlend = 0x18;
            changeAct(0);
        }
    }
    return TRUE;
}

SpNpcBlathersTalk::SpNpcBlathersTalk() {
    item = 0xfff1;
}

SpNpcBlathersTalk::~SpNpcBlathersTalk() {}

void SpNpcBlathersTalk::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    pocketSlot = -1;
    item = 0xfff1;
    Fn t = *(Fn *)__ptmf_null;
    script = t;
    nextScript = t;
}

void SpNpcBlathersTalk::attachOwner(SpNpcBlathers *owner) {
    vfunc_08();
    ownerNpc = owner;
    dramaTalk = 0;
    pocketSlot = -1;
    appraisalFlow = 0;
    item = 0xfff1;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcBlathersTalk::start(TalkStartMsg *out) {
    if (GameStart_IsActive()) {
        out->msgKey = sSpNpcBlathersSequence4Key;
        out->msgIndex = 8;
        return;
    }
    out->msgKey = sSpNpcBlathersKey;
    u32 r7 = SickVillagerRecord_getParcelErrand(PlayerData_getErrands(PlayerData_GetCurrent()));
    void *g = gCommManager;
    Unk_ov047_0225a074_Buf l;
    if (!CommManager_isOnline(g) && *DebugVar_GetPtr(0, 0x4a) == 0) {
        l.npcHandle = 0xd00c;
        if (ParcelErrand_IsFor(r7, &l.npcHandle)) {
            if (ownerNpc->isAsleep == 0) {
                out->msgIndex = 0xe6;
            } else {
                out->msgIndex = 0xe5;
            }
            return;
        }
    }
    if (ownerNpc->dramaShown == 0 && dramaTalk != 1 && !CommManager_isOnline(g) && *DebugVar_GetPtr(0, 0x4a) == 0) {
        if (Talk_IsDramaPending(ownerNpc, &l, 1)) {
            out->msgKey = sSpNpcBlathersDramaKey;
            out->msgIndex = (sSpNpcBlathersDramaMsgTable + l.b * 6)[l.c];
            dramaTalk = 1;
            ownerNpc->dramaShown = 1;
            return;
        }
    }
    dramaTalk = 0;
    if (Talk_IsInOwnTown() == 0) {
        if (TownSessionState_TestFlag(TownSessionState_Get(), 9) == 0) {
            if (ownerNpc->isAsleep != 0) {
                out->msgIndex = 4;
            } else {
                out->msgIndex = 5;
            }
        } else {
            if (ownerNpc->isAsleep != 0) {
                out->msgIndex = 6;
            } else {
                out->msgIndex = 7;
            }
        }
        TownSessionState_SetFlag(TownSessionState_Get(), 9);
    } else if (TownSessionState_TestFlag(TownSessionState_Get(), 9) == 0) {
        if (MuseumData_isComplete(data_021ed0a0)) {
            if (ownerNpc->isAsleep != 0) {
                out->msgIndex = 0;
            } else {
                out->msgIndex = 1;
            }
        } else {
            if (ownerNpc->isAsleep != 0) {
                out->msgIndex = 8;
            } else {
                out->msgIndex = 9;
            }
        }
        ownerNpc->isAsleep = 0;
        TownSessionState_SetFlag(TownSessionState_Get(), 9);
    } else if (MuseumData_isComplete(data_021ed0a0)) {
        if (ownerNpc->isAsleep != 0) {
            out->msgIndex = 3;
            ownerNpc->isAsleep = 0;
        } else {
            out->msgIndex = 2;
        }
    } else {
        if (ownerNpc->isAsleep != 0) {
            out->msgIndex = 10;
            ownerNpc->isAsleep = 0;
        } else {
            out->msgIndex = 11;
        }
    }
}

void SpNpcBlathersTalk::commitDonation() {
    if (!Unk_ov047_022596e8_IsNone(&item)) {
        void *p = PlayerData_GetCurrent();
        MuseumData_donate(data_021ed0a0, &item);
        SaveData_setFlag(gSaveData, 0xc);
        Unk_02097ff4_setFlag(p, 8);
        if (pocketSlot >= 0) {
            Pocket_RemoveItem(pocketSlot);
            pocketSlot = -1;
        }
        item = 0xfff1;
    }
}

extern "C" void *data_ov047_0225b450[2] = {(void *)_ZN17SpNpcBlathersTalk17showInsectCommentEv, 0};
extern "C" void *data_ov047_0225b340[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b4f0[2] = {(void *)_ZN13SpNpcBlathers9mainAct02Ev, 0};
extern "C" void *data_ov047_0225b328[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b440[2] = {(void *)_ZN17SpNpcBlathersTalk18onExhibitCompletedEv, 0};
extern "C" void *data_ov047_0225b570[2] = {(void *)_ZN13SpNpcBlathers9mainAct03Ev, 0};
extern "C" void *data_ov047_0225b330[2] = {(void *)_ZN13SpNpcBlathers9mainAct00Ev, 0};
extern "C" void *data_ov047_0225b578[2] = {(void *)_ZN13SpNpcBlathers10setupAct03Ev, 0};
Unk_ov047_0225aeb4_Ent sSpNpcBlathersActTable[9] = {
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b398, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b330},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b3a0, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b338},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b368, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b4f0},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b578, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b570},
    {NULL, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b568},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b560, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b558},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b550, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b548},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b540, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b538},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b530, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b528},
};
extern "C" void *data_ov047_0225b568[2] = {(void *)_ZN13SpNpcBlathers9mainAct04Ev, 0};
extern "C" void *data_ov047_0225b560[2] = {(void *)_ZN13SpNpcBlathers10setupAct05Ev, 0};
extern "C" void *data_ov047_0225b558[2] = {(void *)_ZN13SpNpcBlathers9mainAct05Ev, 0};
extern "C" void *data_ov047_0225b550[2] = {(void *)_ZN13SpNpcBlathers10setupAct06Ev, 0};
extern "C" void *data_ov047_0225b548[2] = {(void *)_ZN13SpNpcBlathers9mainAct06Ev, 0};
extern "C" void *data_ov047_0225b540[2] = {(void *)_ZN13SpNpcBlathers10setupAct07Ev, 0};
extern "C" void *data_ov047_0225b538[2] = {(void *)_ZN13SpNpcBlathers9mainAct07Ev, 0};
extern "C" void *data_ov047_0225b530[2] = {(void *)_ZN13SpNpcBlathers10setupAct08Ev, 0};
extern "C" void *data_ov047_0225b528[2] = {(void *)_ZN13SpNpcBlathers9mainAct08Ev, 0};
extern "C" void *data_ov047_0225b520[2] = {(void *)_ZN17SpNpcBlathersTalk20returnItemAndAskMoreEv, 0};
extern "C" void *data_ov047_0225b518[2] = {(void *)_ZN17SpNpcBlathersTalk24scriptDonationItemChosenEv, 0};
extern "C" void *data_ov047_0225b510[2] = {(void *)_ZN17SpNpcBlathersTalk25scriptAppraisalItemChosenEv, 0};
extern "C" void *data_ov047_0225b508[2] = {(void *)_ZN17SpNpcBlathersTalk24scriptDeliveryItemChosenEv, 0};
extern "C" Unk_ov047_SceneEntry sSpNpcBlathersProfile = {SpNpcBlathers_Create, 0x6e, 0x74, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov047_0225b4f8[2] = {(void *)_ZN17SpNpcBlathersTalk21scriptCloseItemSelectEv, 0};
extern "C" void *data_ov047_0225b400[2] = {(void *)_ZN17SpNpcBlathersTalk15openExhibitListEv, 0};

void SpNpcBlathersTalk::onMessageEnd() {
    void *p;
    volatile u8 hdr[4];
    volatile u16 tt[3];
    if (GameStart_IsActive()) {
        goto end;
    }
    if (strncmp((char *)&fileName, sSpNpcBlathersKey, func_0212a438(sSpNpcBlathersKey)) != 0) {
        goto end;
    }
    if ((s32)msgIndex < 0xc) {
        if (SaveData_testFlag(gSaveData, 0xc)) {
            nextMsg = 0x44;
        } else {
            nextMsg = 0xc;
        }
        hdr[0] = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[0], sSpNpcBlathersKey);
        goto end;
    }
    if (msgIndex == 0x33 || ((s32)msgIndex >= 0x6e && (s32)msgIndex <= 0xa5)) {
        commitDonation();
        if (MuseumData_isInsectsComplete(data_021ed0a0)) {
            nextMsg = 0x34;
        } else {
            nextMsg = 0x27;
        }
        Unk_02014420_requestKeepItem(this);
        hdr[1] = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[1], sSpNpcBlathersKey);
        goto end;
    }
    if ((s32)msgIndex >= 0xaa && (s32)msgIndex <= 0xe1) {
        commitDonation();
        if (MuseumData_isFishComplete(data_021ed0a0)) {
            nextMsg = 0x36;
        } else {
            nextMsg = 0x27;
        }
        Unk_02014420_requestKeepItem(this);
        hdr[2] = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[2], sSpNpcBlathersKey);
        goto end;
    }
    p = PlayerData_GetCurrent();
    nextMsg = 0xff;
    static Unk_ov047_02259a8c_Ent tbl[35] = {
        {0x14, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4d8}, {0x15, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4d0},
        {0x16, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4c8}, {0x17, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4c0},
        {0x18, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4b8}, {0x19, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4b0},
        {0x1a, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4a8}, {0x1b, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4a0},
        {0x1c, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b498}, {0x1d, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b490},
        {0x1f, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3b8}, {0x26, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b480},
        {0x29, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b478}, {0x2e, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b470},
        {0x2f, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3a8}, {0x30, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b460},
        {0x31, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4e8}, {0x32, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b450},
        {0x33, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b320}, {0x34, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b440},
        {0x35, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b438}, {0x36, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b430},
        {0x37, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b428}, {0x38, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b420},
        {0x39, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b418}, {0x3a, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b410},
        {0x3b, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b408}, {0x3c, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b520},
        {0x3d, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3f0}, {0x3f, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b400},
        {0x40, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b468}, {0x41, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4e0},
        {0x42, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3d8}, {0x43, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3d0},
        {0x6a, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3c8},
    };
    u32 i = 0;
    u8 *pid = &msgIndex;
    Unk_ov047_02259a8c_Ent *tp = tbl;
    goto test;
loop:
    u32 ida = *(u32 *)((u8 *)tp + i * 12);
    u32 idb = *pid;
    if (ida == idb) {
        (this->*tp[i].fn)();
    }
    i++;
test:
    if (i < 0x23) goto loop;
    s32 v50 = *(volatile u8 *)&msgIndex;
    if (v50 >= 0x50 && v50 <= 0x67) {
        if (MuseumData_isFossilsComplete(data_021ed0a0)) {
            nextMsg = 0x29;
        } else if (appraisalFlow == 0) {
            nextMsg = 0x27;
        } else {
            nextMsg = 0x20;
        }
        item = 0xfff1;
        Unk_02014420_requestKeepItem(this);
    }
    if (msgIndex == 0x25 || msgIndex == 0x2c || msgIndex == 0x2d || msgIndex == 0x69) {
        if (!Unk_ov047_022596e8_IsNoneT(&item, *(u16 *)&tt[0])) {
            void *g = data_021ed0a0;
            s32 a, b, r;
            MuseumData_donate(g, &item);
            SaveData_setFlag(gSaveData, 0xc);
            Unk_02097ff4_setFlag(p, 8);
            if (pocketSlot >= 0) {
                Pocket_RemoveItem(pocketSlot);
                pocketSlot = -1;
            }
            a = Item_GetFossilGroup(&item);
            b = Fossil_CountInGroup(a);
            r = Museum_CountDonatedFossilsInGroup(g, a);
            if (b == 1) {
                if (msgIndex == 0x2d) {
                    if (!Unk_ov047_022596e8_IsNoneT(&item, *(u16 *)&tt[1])) {
                        nextMsg = (u8)(a + 0x50);
                    }
                } else {
                    nextMsg = 0x2d;
                }
            } else if (b == r) {
                if (!Unk_ov047_022596e8_IsNoneT(&item, *(u16 *)&tt[2])) {
                    nextMsg = (u8)(a + 0x50);
                }
            } else {
                nextMsg = 0x26;
            }
        }
    }
    if (nextMsg != 0xff) {
        hdr[3] = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[3], sSpNpcBlathersKey);
    }
end:;
}

void SpNpcBlathersTalk::openDonationPicker() {
    Unk_020d7710_setPocketFilter(this, SpNpcBlathers_IsDonatableItem, 0xd, 1);
    Unk_020d7710_openSubScene(this, 0);
    setScript(0);
}

void SpNpcBlathersTalk::openAppraisalPicker() {
    Unk_020d7710_setPocketFilter(this, SpNpcBlathers_IsUnidentifiedFossil, 0xd, 1);
    Unk_020d7710_openSubScene(this, 0);
    setScript(1);
}

void SpNpcBlathersTalk::returnItemAndShowMenu() {
    Unk_02014420_requestReturnItem(this);
    showMuseumMenu();
}

void SpNpcBlathersTalk::returnItemAndAskShowMore() {
    Unk_02014420_requestReturnItem(this);
    nextMsg = 0x6b;
}

void SpNpcBlathersTalk::showMuseumMenu() {
    if (SaveData_testFlag(gSaveData, 0xc)) {
        nextMsg = 0x46;
    } else {
        nextMsg = 0x45;
    }
}

void SpNpcBlathersTalk::returnHeldItem() {
    if (item != 0xfff1) {
        Unk_02014420_requestReturnItem(this);
    }
}

void SpNpcBlathersTalk::appraiseFossil() {
    u16 bufa, bufb;
    if (!Unk_ov047_022596e8_IsNone(&item)) {
        void *p = PlayerData_GetCurrent();
        Unk_02097ff4_setFlag(p, 0x35);
        ItemPick_FromRange(&bufb, 0x450c, 0x34, 0, 0, 0, 1, 10, 0, 1);
        item = bufb;
        if (pocketSlot >= 0) {
            Pocket_SetItem(&item, 0, pocketSlot);
        }
        ActorTalkRequest_setItemNameSlot(this, &item, 0, 7);
        ItemPick_FromRange(&bufa, 0x450c, 0x34, &item, 1, 0, 1, 10, 0, 1);
        ActorTalkRequest_setItemNameSlot(this, &bufa, 1, 7);
    }
    nextMsg = (u8)(Random_GlobalBelow(3) + 0x1a);
}

void SpNpcBlathersTalk::afterFossilIdentified() {
    if (appraisalFlow == 0) {
        if (CommManager_isOnline(gCommManager) == 0 && *DebugVar_GetPtr(0, 0x4a) == 0 && Talk_IsInOwnTown() != 0 &&
            MuseumData_isDonated(data_021ed0a0, &item) == 0) {
            nextMsg = 0x69;
        } else {
            nextMsg = 0x6a;
        }
    } else {
        nextMsg = 0x1d;
    }
}

void SpNpcBlathersTalk::offerFossilDonation() {
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        Unk_02014420_requestReturnItem(this);
        nextMsg = 0x20;
    } else if (Talk_IsInOwnTown() != 0 && MuseumData_isDonated(data_021ed0a0, &item) == 0) {
        nextMsg = 0x1e;
    } else {
        Unk_02014420_requestReturnItem(this);
        nextMsg = 0x20;
    }
}

void SpNpcBlathersTalk::returnAppraisedFossil() {
    Unk_02014420_requestReturnItem(this);
    nextMsg = 0x20;
}

void SpNpcBlathersTalk::onFossilPartDonated() {
    Unk_02014420_requestKeepItem(this);
    commitDonation();
    if (appraisalFlow == 0) {
        nextMsg = 0x27;
    } else {
        nextMsg = 0x20;
    }
}

void SpNpcBlathersTalk::onExhibitCompleted() {
    if (MuseumData_isComplete(data_021ed0a0)) {
        nextMsg = 0x2a;
    } else {
        nextMsg = 0x2b;
    }
}

void SpNpcBlathersTalk::onPaintingDonated() {
    commitDonation();
    if (MuseumData_isPaintingsComplete(data_021ed0a0)) {
        nextMsg = 0x31;
    } else {
        nextMsg = 0x27;
    }
    Unk_02014420_requestKeepItem(this);
}

void SpNpcBlathersTalk::showInsectComment() {
    if (msgIndex == 0x32) {
        if (!Unk_ov047_022596e8_IsNone(&item)) {
            BOOL f = FALSE;
            u32 v = item;
            if (v >= 0x12b0 && v <= 0x12e7) {
                f = TRUE;
            }
            s32 x;
            if (f) {
                x = v - 0x12b0;
            } else {
                x = -1;
            }
            nextMsg = (u8)(x + 0x6e);
        }
    }
}

void SpNpcBlathersTalk::showFishComment() {
    BOOL eq;
    if (Item_IsFurniture(&item)) {
        u16 t = 0xfff1;
        s32 x = Item_GetFurnitureIndex(&item);
        if (x == Item_GetFurnitureIndex(&t)) {
            eq = TRUE;
        } else {
            eq = FALSE;
        }
    } else if (item == 0xfff1) {
        eq = TRUE;
    } else {
        eq = FALSE;
    }
    if (!eq) {
        BOOL f = FALSE;
        u32 v = item;
        if (v >= 0x12e8 && v <= 0x131f) {
            f = TRUE;
        }
        s32 t;
        if (f) {
            t = v - 0x12e8;
        } else {
            t = -1;
        }
        nextMsg = (u8)(t + 0xaa);
    }
}

void SpNpcBlathersTalk::onAlreadyDonated() {
    BOOL eq;
    if (Item_IsFurniture(&item)) {
        u16 t = 0xfff1;
        s32 x = Item_GetFurnitureIndex(&item);
        if (x == Item_GetFurnitureIndex(&t)) {
            eq = TRUE;
        } else {
            eq = FALSE;
        }
    } else if (item == 0xfff1) {
        eq = TRUE;
    } else {
        eq = FALSE;
    }
    if (!eq) {
        BOOL f = FALSE;
        u32 v = item;
        if (v >= 0x450c && v <= 0x45db) {
            f = TRUE;
        }
        if (f) {
            nextMsg = 0x3a;
        } else if (v >= 0x12b0 && v <= 0x12e7) {
            nextMsg = 0x3b;
        } else if (v >= 0x12e8 && v <= 0x131f) {
            nextMsg = 0x3c;
        } else {
            nextMsg = 0x3d;
        }
    }
}

void SpNpcBlathersTalk::returnItemAndAskMore() {
    Unk_02014420_requestReturnItem(this);
    item = 0xfff1;
    nextMsg = 0x23;
}

void SpNpcBlathersTalk::openExhibitList() {
    Unk_020d7710_setSubSceneKind(this, 0x41, 0);
    Unk_020d7710_openSubScene(this, 2);
    setScript(3);
}

extern "C" void *data_ov047_0225b4d8[2] = {(void *)_ZN17SpNpcBlathersTalk18openDonationPickerEv, 0};
extern "C" void *data_ov047_0225b4d0[2] = {(void *)_ZN17SpNpcBlathersTalk14returnHeldItemEv, 0};

void SpNpcBlathersTalk::onChoice(u32 a) {
    if (!GameStart_IsActive()) {
        static void (SpNpcBlathersTalk::*tbl[2])(u32) = {
            *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b3b0,
            *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b348,
        };
        u32 i = 0;
        PlayerData_GetCurrent();
        PlayerData_getErrands();
        if (dramaTalk == 1) {
            i = 1;
        }
        (this->*tbl[i])(a);
    }
}

void SpNpcBlathersTalk::onDramaChoice(s32 a) {
    u8 buf[4];
    a = msgIndex;
    if (a <= 0x15) {
        ActorTalkRequest_getChoiceList(this);
        u32 r = ChoiceList_getResult();
        nextMsg = 0xff;
        if (r != 0) {
            if (SaveData_testFlag(gSaveData, 0xc)) {
                nextMsg = 0x47;
            } else {
                nextMsg = 0x48;
            }
            dramaTalk = 0;
            buf[1] = nextMsg;
            TalkWindowState_setNextMessage(unk_3c, &buf[1], sSpNpcBlathersKey);
        } else {
            if (Talk_IsDramaPending(ownerNpc, buf, 1)) {
                Talk_AdvanceDrama(ownerNpc, buf);
            }
        }
    }
}

extern "C" void *data_ov047_0225b4b8[2] = {(void *)_ZN17SpNpcBlathersTalk14showMuseumMenuEv, 0};
extern "C" void *data_ov047_0225b3d0[2] = {(void *)_ZN17SpNpcBlathersTalk21returnItemAndShowMenuEv, 0};
extern "C" void *data_ov047_0225b4a8[2] = {(void *)_ZN17SpNpcBlathersTalk21afterFossilIdentifiedEv, 0};
extern "C" void *data_ov047_0225b4a0[2] = {(void *)_ZN17SpNpcBlathersTalk21afterFossilIdentifiedEv, 0};
extern "C" void *data_ov047_0225b498[2] = {(void *)_ZN17SpNpcBlathersTalk21afterFossilIdentifiedEv, 0};
extern "C" void *data_ov047_0225b490[2] = {(void *)_ZN17SpNpcBlathersTalk19offerFossilDonationEv, 0};
extern "C" void *data_ov047_0225b488[2] = {(void *)_ZN17SpNpcBlathersTalk20onAnythingElseChoiceEj, 0};
extern "C" void *data_ov047_0225b480[2] = {(void *)_ZN17SpNpcBlathersTalk19onFossilPartDonatedEv, 0};
extern "C" void *data_ov047_0225b478[2] = {(void *)_ZN17SpNpcBlathersTalk18onExhibitCompletedEv, 0};
extern "C" void *data_ov047_0225b470[2] = {(void *)_ZN17SpNpcBlathersTalk17onPaintingDonatedEv, 0};
extern "C" void *data_ov047_0225b468[2] = {(void *)_ZN17SpNpcBlathersTalk14showMuseumMenuEv, 0};
extern "C" void *data_ov047_0225b460[2] = {(void *)_ZN17SpNpcBlathersTalk17onPaintingDonatedEv, 0};
extern "C" void *data_ov047_0225b348[2] = {(void *)_ZN17SpNpcBlathersTalk13onDramaChoiceEi, 0};
extern "C" void *data_ov047_0225b3a0[2] = {(void *)_ZN13SpNpcBlathers10setupAct01Ev, 0};
extern "C" void *data_ov047_0225b448[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" u8 sSpNpcBlathersModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" void *data_ov047_0225b438[2] = {(void *)_ZN17SpNpcBlathersTalk15showFishCommentEv, 0};
extern "C" void *data_ov047_0225b430[2] = {(void *)_ZN17SpNpcBlathersTalk18onExhibitCompletedEv, 0};
extern "C" void *data_ov047_0225b428[2] = {(void *)_ZN17SpNpcBlathersTalk16onAlreadyDonatedEv, 0};
extern "C" void *data_ov047_0225b420[2] = {(void *)_ZN17SpNpcBlathersTalk16onAlreadyDonatedEv, 0};
extern "C" void *data_ov047_0225b418[2] = {(void *)_ZN17SpNpcBlathersTalk16onAlreadyDonatedEv, 0};
extern "C" void *data_ov047_0225b410[2] = {(void *)_ZN17SpNpcBlathersTalk20returnItemAndAskMoreEv, 0};
extern "C" void *data_ov047_0225b408[2] = {(void *)_ZN17SpNpcBlathersTalk20returnItemAndAskMoreEv, 0};
extern "C" void *data_ov047_0225b380[2] = {(void *)_ZN17SpNpcBlathersTalk19onDonateMoreChoice2Ej, 0};
extern "C" void *data_ov047_0225b500[2] = {(void *)_ZN17SpNpcBlathersTalk23scriptExhibitListClosedEv, 0};
extern "C" void *data_ov047_0225b4b0[2] = {(void *)_ZN17SpNpcBlathersTalk14appraiseFossilEv, 0};
extern "C" void *data_ov047_0225b4e8[2] = {(void *)_ZN17SpNpcBlathersTalk18onExhibitCompletedEv, 0};
extern "C" void *data_ov047_0225b3e0[2] = {(void *)_ZN17SpNpcBlathersTalk18onDonateMoreChoiceEj, 0};
extern "C" void *data_ov047_0225b4c8[2] = {(void *)_ZN17SpNpcBlathersTalk19openAppraisalPickerEv, 0};
extern "C" void *data_ov047_0225b360[2] = {(void *)_ZN17SpNpcBlathersTalk16onDeliveryChoiceEj, 0};
extern "C" void *data_ov047_0225b3c8[2] = {(void *)_ZN17SpNpcBlathersTalk24returnItemAndAskShowMoreEv, 0};
extern "C" void *data_ov047_0225b3c0[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b3b8[2] = {(void *)_ZN17SpNpcBlathersTalk21returnAppraisedFossilEv, 0};
extern "C" void *data_ov047_0225b3b0[2] = {(void *)_ZN17SpNpcBlathersTalk14dispatchChoiceEj, 0};
extern "C" void *data_ov047_0225b3a8[2] = {(void *)_ZN17SpNpcBlathersTalk17onPaintingDonatedEv, 0};

void SpNpcBlathersTalk::dispatchChoice(u32 a) {
    ActorTalkRequest_getChoiceList(this);
    u32 arg = ChoiceList_getResult();
    nextMsg = 0xff;
    static Unk_ov047_022592b8_Ent tbl[17] = {
        {0xc, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b390},
        {0xe, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b388},
        {0x1e, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b370},
        {0x20, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b378},
        {0x21, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b3e8},
        {0x23, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b488},
        {0x27, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b3e0},
        {0x44, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b358},
        {0x45, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b3c0},
        {0x46, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b328},
        {0x47, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b448},
        {0x48, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b340},
        {0x6b, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b380},
        {0xe5, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b3f8},
        {0xe6, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b360},
        {0xe9, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b350},
        {0xea, *(SpNpcBlathersTalk::Fn1 *)data_ov047_0225b458},
    };
    u32 i = 0;
    u8 *idp = &msgIndex;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov047_022592b8_Ent *)((u32)tbl + i * 12))->fn)(arg);
    }
    i++;
test0:
    if (i < 0x11) goto loop0;
    if (nextMsg != 0xff) {
        Unk_ov047_022592b8_Byte b;
        b.v = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, &b, sSpNpcBlathersKey);
    }
}

extern "C" void *data_ov047_0225b390[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b388[2] = {(void *)_ZN17SpNpcBlathersTalk21onDonationOfferChoiceEj, 0};
extern "C" void *data_ov047_0225b370[2] = {(void *)_ZN17SpNpcBlathersTalk18onKeepFossilChoiceEj, 0};
extern "C" void *data_ov047_0225b3f0[2] = {(void *)_ZN17SpNpcBlathersTalk20returnItemAndAskMoreEv, 0};
extern "C" void *data_ov047_0225b3f8[2] = {(void *)_ZN17SpNpcBlathersTalk16onDeliveryChoiceEj, 0};
extern "C" void *data_ov047_0225b3e8[2] = {(void *)_ZN17SpNpcBlathersTalk29onAppraiseDonatedFossilChoiceEj, 0};
extern "C" u8 sSpNpcBlathersTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov047_0225b358[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b350[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b458[2] = {(void *)_ZN17SpNpcBlathersTalk16onMainMenuChoiceEi, 0};
extern "C" void *data_ov047_0225b338[2] = {(void *)_ZN13SpNpcBlathers9mainAct01Ev, 0};
extern "C" void *data_ov047_0225b378[2] = {(void *)_ZN17SpNpcBlathersTalk23onAppraiseAnotherChoiceEj, 0};
extern "C" void *data_ov047_0225b4c0[2] = {(void *)_ZN17SpNpcBlathersTalk19openAppraisalPickerEv, 0};
extern "C" void *data_ov047_0225b368[2] = {(void *)_ZN13SpNpcBlathers10setupAct02Ev, 0};
extern "C" void *data_ov047_0225b320[2] = {(void *)_ZN17SpNpcBlathersTalk17showInsectCommentEv, 0};
extern "C" const u8 sSpNpcBlathersDramaMsgTable[32] = {0, 1, 2, 3, 0, 0, 4, 5, 6, 0, 0, 0, 7, 8, 9, 10, 0, 0, 11, 12, 13, 14, 15, 0, 16, 17, 18, 19, 20, 21, 0, 0};
extern "C" void *data_ov047_0225b4e0[2] = {(void *)_ZN17SpNpcBlathersTalk14showMuseumMenuEv, 0};
extern "C" void *data_ov047_0225b3d8[2] = {(void *)_ZN17SpNpcBlathersTalk21returnItemAndShowMenuEv, 0};

void SpNpcBlathersTalk::onMainMenuChoice(s32 a) {
    if (SaveData_testFlag(gSaveData, 0xc)) {
        if (a == 2) {
            a = 4;
        } else if (a > 2) {
            a--;
        }
    }
    switch (a) {
    case 0:
        appraisalFlow = 0;
        if (Talk_IsInOwnTown()) {
            if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
                nextMsg = 0x41;
            } else {
                nextMsg = 0x14;
            }
        } else {
            nextMsg = 0x40;
        }
        break;
    case 1: {
        appraisalFlow = 0;
        u32 r = (u32)PlayerData_GetCurrent();
        if (MenuCtrl_BuildPocketMask(SpNpcBlathers_IsUnidentifiedFossil) == 0) {
            nextMsg = 0x18;
        } else if (Unk_02097ff4_testFlag(r, 0x35) == 0) {
            appraisalFlow = 1;
            nextMsg = 0x17;
        } else {
            appraisalFlow = 1;
            nextMsg = 0x16;
        }
        break;
    }
    case 2:
        if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
            nextMsg = 0x4a;
        } else {
            nextMsg = 0xd;
        }
        break;
    case 3: {
        void *g = data_021ed0a0;
        s32 r = MuseumData_getDonationPercent(g);
        nextMsg = 0x13;
        if (r == 0) {
            nextMsg = 0x10;
        } else if (r <= 0x1e000) {
            nextMsg = 0x11;
        } else if (r <= 0x46000) {
            nextMsg = 0x12;
        } else if (MuseumData_isComplete(g)) {
            nextMsg = 0x49;
        }
        break;
    }
    case 4:
        nextMsg = 0x3f;
        break;
    }
}

void SpNpcBlathersTalk::onDonationOfferChoice(u32 a) {
    if (a == 0) {
        nextMsg = 0x14;
    }
}

void SpNpcBlathersTalk::onDonateMoreChoice2(u32 a) {
    if (a == 0) {
        nextMsg = 0x14;
    } else {
        nextMsg = 0x28;
    }
}

void SpNpcBlathersTalk::onKeepFossilChoice(u32 a) {
    if (a == 0) {
        nextMsg = 0x2c;
    } else {
        nextMsg = 0x1f;
    }
}

void SpNpcBlathersTalk::onAppraiseAnotherChoice(u32 a) {
    if (a == 0) {
        if (MenuCtrl_BuildPocketMask(SpNpcBlathers_IsUnidentifiedFossil) == 0) {
            nextMsg = 0x18;
        } else {
            nextMsg = 0x16;
        }
    } else {
        nextMsg = 0x3e;
    }
}

void SpNpcBlathersTalk::onAppraiseDonatedFossilChoice(u32 a) {
    if (a == 0) {
        if (Unk_02097ff4_testFlag((u32)PlayerData_GetCurrent(), 0x35) == 0) {
            nextMsg = 0x4b;
        } else {
            nextMsg = 0x19;
        }
    } else {
        nextMsg = 0x15;
    }
}

void SpNpcBlathersTalk::onAnythingElseChoice(u32 a) {
    if (a == 0) {
        if (Talk_IsInOwnTown()) {
            if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
                nextMsg = 0x41;
            } else {
                nextMsg = 0x14;
            }
        } else {
            nextMsg = 0x40;
        }
    } else {
        nextMsg = 0x24;
    }
}

void SpNpcBlathersTalk::onDonateMoreChoice(u32 a) {
    if (a == 0) {
        nextMsg = 0x14;
    } else {
        nextMsg = 0x28;
    }
}

void SpNpcBlathersTalk::onDeliveryChoice(u32 a) {
    if (a == 0) {
        Unk_020d7710_setPocketFilter(this, SpNpcBlathers_IsDeliveryItem, 0xd, 0);
        Unk_020d7710_openSubScene(this, 0);
        setScript(2);
    } else if (SaveData_testFlag(gSaveData, 0xc)) {
        nextMsg = 0xea;
    } else {
        nextMsg = 0xe9;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL SpNpcBlathers::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) || netIsTalkLocked()) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcBlathers::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        footstepFx.unk_08 = arg;
        if (arg != 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, arg);
            changeAct(8);
        } else if (isNetOwner()) {
            s32 g = gCommManager->myAid;
            netSetSlotsIfOwner(1, g, g);
            changeAct(8);
        }
        break;
    case 0:
        footstepFx.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            changeAct(7);
        } else if (isNetOwner()) {
            s32 g = gCommManager->myAid;
            netSetSlotsIfOwner(1, g, g);
            ActorTalkRequest *p = &talk;
            p->vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            changeAct(3);
        }
        break;
    case 8:
        if (arg == 4) {
            if (NetArea_IsLocalOwner()) {
                Unk_ov047_02258e34_Global *gl = gCommManager;
                netSetSlotsIfOwner(1, gl->myAid, 4);
                if (CommManager_isOnline(gl) || *DebugVar_GetPtr(0, 0x4a) != 0) {
                    changeAct(0);
                } else {
                    changeAct(1);
                }
            } else {
                netSetSlotsIfOwner(1, 4, gCommManager->myAid);
                changeAct(6);
            }
        }
        break;
    case 4:
        if (netIsTalkLocked()) {
            if (isNetOwner()) {
                a = 4;
                b = 4;
                if (NpcActor_netGetSlots(this, &a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        netSetSlotsIfOwner(1, gCommManager->myAid, 4);
                        changeAct(0);
                    }
                }
            }
        }
        break;
    case 1: case 2: case 5: case 6: case 7:
        break;
    }
}

// ---- data



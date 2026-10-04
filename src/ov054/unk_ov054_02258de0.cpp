#include "types.h"
#include "net/CommManager.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/Unk_0201a13c.h"


struct Unk_0201bc1c;
class Character;
class SpNpcPellyPhyllis;
class SpNpcPellyPhyllisTalk;

struct Unk_ov054_Vec {
    s32 x, y, z;
};
typedef Unk_ov054_Vec Unk_ov054_0225902c_Vec;
typedef Unk_ov054_Vec Unk_ov054_0225ba54_Vec;

struct Unk_ov054_0225ab00_Vec {
    s32 x, y, z;
    Unk_ov054_0225ab00_Vec() {}
    ~Unk_ov054_0225ab00_Vec() {}
};

struct Unk_ov054_0225b3ac_Row {
    s32 a, b, c;
};


struct Unk_ov054_0225b0ac_Local {
    u8 unk_00;
    u8 hour;
    u16 npcHandle;
    u16 unk_04;
    u16 spawnRot[3];
};

struct Unk_ov054_02258e58_Sub {
    s32 unk_00;
    s32 unk_04;
};


struct Unk_ov054_0225aa98_Rec {
    s32 unk_00;
    s32 state;
};

struct Unk_ov054_0225a3cc_Data {
    u32 w0;
    u32 w1;
};

struct Unk_ov054_0225a3cc_Msg {
    u8 id;
    u8 pad[3];
    Unk_ov054_0225a3cc_Data d;
};

struct Unk_ov054_0225a7c4_Bits {
    u8 lo : 2;
    u8 mid : 3;
    u8 hi : 3;
};

// Dialog base chain (main): ActorTalkRequest <- TalkMsgRequest <- Unk_020d7710 <- SpNpcTalkRequest, size 0xac.
class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
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
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();

    /* 0x04 */ u8 pad_04[0x1a];
    /* 0x1e */ u8 msgIndex;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov054_02258e58_Sub *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
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

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 curFrame;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
struct NpcFaceAnim {
    u8 unk_00[0x334 - 0x2ac];
    NpcFaceAnim();
    ~NpcFaceAnim();
    s32 getMouthAnim();
};
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(CollisionState, 0x30);
MEMBER(NpcActionCtrl, 0x618 - 0x564);


// Owner base chain (main): ProcBase <- Actor <- Character <- NpcActor <- SpNpcActor.
class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL vfunc_20(u32 status);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(Character *o);
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    void setInteractionRange(s32 v);
    u8 pad_50[0x5c - 0x50];
    s32 position, positionY, positionZ;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[4];
    s16 moveAngleY;
    u8 pad_96[0xea - 0x96];
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
    s32 getAngleToPlayer(u32 id);
    s32 getAngleTo(NpcActor *other);
    void setCollisionRadius(s32 v);
    void setNpcHandle(u16 *p);

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
    void setColliderSize(s32 a, s32 b);

    SpNpcAnimHeapHandle animHeapHandle;
    s32 colliderRadius;
    s32 colliderHeight;
    u8 talkMelodyPlayed;
};

typedef void (SpNpcPellyPhyllisTalk::*Unk_ov054_0225b9c4_Fn)();
typedef void (SpNpcPellyPhyllisTalk::*Unk_ov054_0225b9c4_FnI)(s32);

struct Unk_ov054_0225b9c4_Ent {
    Unk_ov054_0225b9c4_Fn fn;
    u8 flag;
};

// View of the flag column of sSpNpcPellyPhyllisTalkScripts (symbols.txt label data_ov054_0225bb08 = table + 8)
struct Unk_ov054_0225b9c4_Flag {
    u8 flag;
    u8 pad[11];
};

// Dialog member of the owner at +0x658 (vtable 0x0225b9c4)
class SpNpcPellyPhyllisTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcPellyPhyllisTalk::*Fn)();

    SpNpcPellyPhyllisTalk();
    virtual ~SpNpcPellyPhyllisTalk();
    virtual void onMessageStart();
    virtual void onMessageEnd(s32 a);
    virtual void onChoice(s32 a);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone();

    void updateDonationLevel(s32 a);
    void askSavings();
    void askLoanPayment();
    void openLetterStorage();
    void showGoodbye();
    void startMailLetters();
    void onPostOfficeMenuChoice(s32 a);
    void openPostOfficeMenu(s32 a);
    void onSequence4Choice(s32 a);
    void onDramaChoice(s32 a);
    void onPostOfficeChoice(s32 a);
    void onSequence4MsgEnd(s32 a);
    void onDramaMsgEnd(s32 a);
    void onPostOfficeMsgEnd(s32 a);
    void waitMoveSave();
    void startMoveSave();
    void waitMoveConnected();
    void scanForMoveTarget();
    void endHandItem();
    void waitMailboxSave();
    void startMailboxSave();
    void onDeliveryItemPicked();
    void onSavingsDone();
    void onLoanPaymentEntered();
    void onFutureLetterDateEntered();
    void onTownTuneDone();
    void onDonationEntered();
    void onLetterStorageDone();
    void onMailLettersDone();
    void setScript(s32 v);
    void giveBackLetters();
    u32 getMailAcceptedMsg();
    u8 getFullMailboxMsg();
    u32 getAddressErrorMsg();
    u32 getMailResultMsg();
    void endComm();
    void attachOwner(SpNpcPellyPhyllis *o);

    /* 0xac */ SpNpcPellyPhyllis *owner;
    /* 0xb0 */ s32 menuKind;
    /* 0xb4 */ s32 script;
    /* 0xb8 */ u8 lettersGivenBack;
    /* 0xb9 */ u8 pad_b9[3];
    /* 0xbc */ s32 savingsBefore;
    /* 0xc0 */ s32 donationBefore;
    /* 0xc4 */ u16 netTimer;
    /* 0xc6 */ u8 pad_c6[0x1a8 - 0xc6];
};

class SpNpcPellyPhyllis : public SpNpcActor {
public:
    SpNpcPellyPhyllis() : talk() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48(Character *o);
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    s32 isOnline();
    s32 isLocalSlotActive();
    BOOL canStartSave();
    BOOL mainAct0B();
    BOOL setupAct0B();
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
    BOOL updateWindow();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcPellyPhyllisTalk talk;
    /* 0x800 */ s16 homeAngle;
    /* 0x802 */ u8 pad_802[2];
    /* 0x804 */ s32 sister;
    /* 0x808 */ s32 window;
    /* 0x80c */ u16 dramaTimer;
    /* 0x80e */ u16 standBlend;
    /* 0x810 */ u8 dramaShown;
    /* 0x811 */ u8 pad_811[3];
};

typedef BOOL (SpNpcPellyPhyllis::*Unk_ov054_0225ba54_Fn)();

struct Unk_ov054_0225aef4_Ent {
    Unk_ov054_0225ba54_Fn enter;
    Unk_ov054_0225ba54_Fn exit;
};

struct Unk_ov054_SceneEntry {
    SpNpcPellyPhyllis *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define Unk_020d7710_requestGiveItem _ZN12Unk_020d771015requestGiveItemEPtjjj
#define Unk_020d7710_requestReopenWindow _ZN12Unk_020d771019requestReopenWindowEv
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_setPocketFilter _ZN12Unk_020d771015setPocketFilterEjjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define ActorTalkRequest_setPlayerNameSlot _ZN16ActorTalkRequest17setPlayerNameSlotEjj
#define ActorTalkRequest_setDaySlot _ZN16ActorTalkRequest10setDaySlotEjj
#define ActorTalkRequest_setMonthSlot _ZN16ActorTalkRequest12setMonthSlotEjj
#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcMoveCtrl_setTurnMode _ZN11NpcMoveCtrl11setTurnModeEh
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcActor_netGetSlots _ZN8NpcActor11netGetSlotsEii
#define HouseData_getDebt _ZN9HouseData7getDebtEv
#define func_02063818 _ZN15EncodedString8BD1Ev
#define func_02063830 _ZN15EncodedString8BC1Ev
#define func_02063870 _ZN11MsgString9CD1Ev
#define func_02063888 _ZN11MsgString9CC1Ev
#define TalkWindowState_hideBusyIcon _ZN15TalkWindowState12hideBusyIconEv
#define TalkWindowState_showBusyIcon _ZN15TalkWindowState12showBusyIconEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define TalkWindowState_unlockAdvance _ZN15TalkWindowState13unlockAdvanceEv
#define TalkWindowState_lockAdvance _ZN15TalkWindowState11lockAdvanceEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define FutureLetter_getDeliveryDate _ZN12FutureLetter15getDeliveryDateEv
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define Unk_02097ff4_getBankAccount _ZN12Unk_02097ff414getBankAccountEv
#define PlayerData_getErrands _ZN10PlayerData10getErrandsEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define SickVillagerRecord_getParcelErrand _ZN18SickVillagerRecord15getParcelErrandEv
#define ErrandRecord_setStep _ZN12ErrandRecord7setStepEh
#define SaveData_clearFlag _ZN8SaveData9clearFlagEj
#define MsgString_fromEncoded _ZN9MsgString11fromEncodedEP13EncodedStringii
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_02133150 _s32_div_f

// Functions of other modules. The func_XXXXXXXX names of class members are mapped to their symbols.txt names by
// the #defines above (the object is passed as the first argument).
u32 NetOverlay_AssertAny();
s32 NetOverlay_AssertWireless();

extern "C" {
extern CommManager *gCommManager;
extern u16 data_020c6cc8;
extern u8 gSaveHouse[];
extern u8 gSaveData[];
extern u8 gSavePlayers[];

s32 CommManager_isOnline(void *g);
s32 CommManager_isSlotActive(void *g, s32 v);
BOOL SpNpcTortimer2_IsIdle();
BOOL Talk_IsInOwnTown(...);
void FieldPos_ToUnit(s32 *bx, s32 *by, void *pos);
void *PlayerData_GetCurrent();
void *Unk_02097ff4_getBankAccount(void *g);
s32 Donation_GetTotal(void *h);
s32 PlayerBank_GetDonationLevel(void *h);
void PlayerBank_SetDonationLevel(void *h, u8 i);
void Unk_02097ff4_setFlag(void *g, s32 v);
s32 Unk_02097ff4_testFlag(void *g, s32 v);
s32 TalkWindowState_setNextMessage(void *m, void *buf, u32 cb);
s32 HouseData_getDebt(void *m);
void ActorTalkRequest_setNumberSlot(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void Unk_020d7710_setSubSceneKind(void *self, s32 a, s32 b);
void Unk_020d7710_openSubScene(void *self, s32 a);
void Unk_020d7710_setPocketFilter(void *self, void *cb, s32 a, s32 b);
void TalkChoiceList_SetIndices(void *self, void *tbl, s32 n, s32 m);
s32 ActorTalkRequest_getChoiceList(void *self);
s32 ChoiceList_getResult(s32 v);
void PlayerOptions_SetHiragana(s32 v);
s32 PlayerOptions_Commit();
s32 Talk_IsDramaPending(void *o, void *b, s32 c);
void Talk_AdvanceDrama(void *o, void *b);
void TalkWindowState_openChoices(void *o, s32 v);
void MenuCtrl_ReturnFutureLetter();
void MenuCtrl_StoreFutureLetter();
s32 NetArea_IsLocalOwner();
void func_02015ab0(void *self, s32 v);
s32 NpcTalkCtrl_isBusy(void *self);
s32 NpcActor_netGetSlots(void *self, s32 *a, s32 *b);

s32 func_0212a438(const char *s);
s32 strncmp(const void *a, const char *b, s32 n);
BOOL GameStart_IsActive();
BOOL GameStart_IsNewTown();
BOOL SaveManager_HasAct1FFailed();
BOOL SaveManager_IsIdleAfterAct1F();
void SaveManager_RequestAct1F();
u32 PlayerDataArray_CountUsed(void *g);
u32 PlayerData_GetFutureLetter(void *h);
u8 *FutureLetter_getDeliveryDate(u32 h);
u32 PlayerDataArray_IsUsed(void *g, u32 i);
u32 PlayerData_GetCurrentIndex();
u32 PlayerData_GetResident(void *g, u32 i);
u32 PlayerData_getPlayerId(u32 h);
s32 PlayerBank_GetBalance(void *p);
u32 Pocket_AddItem(u16 *p, s32 a);
BOOL TownState_IsPerfectStreak15();
s32 Town_GetEnvironmentRank();
u8 *TownEval_GetAdvice();
BOOL MenuCtrl_PostOfficeHadNoLetter();
void NetOverlay_LoadWireless();
void Comm_Start(s32 a, s32 b, s32 c);
void TalkWindowState_lockAdvance(void *ctx);
void TalkWindowState_hideBusyIcon(void *ctx);
void TalkWindowState_unlockAdvance(void *ctx);
void TalkWindowState_showBusyIcon(void *ctx, s32 a);
void TalkWindowState_setSlot(void *ctx, s32 a, void *p);
BOOL func_020e7500(void *p);
BOOL Net_PollConnected(s32 a);
u32 Comm_SendEmpty();
s32 func_020eae78(u32 a);
void *Net_GetScanResults(s32 a);
s32 func_020ea6c8(void *p);
void *func_020ea6f4(void *p);
BOOL Net_ConnectToParent(void *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
void func_02063888(void *p);
void func_02063830(void *p);
void func_02063818(void *p);
void func_02063870(void *p);
BOOL EncodedString_SetRaw(void *dst, const void *src, s32 n);
void MsgString_fromEncoded(void *dst, void *src, s32 a, s32 b);
void Unk_020d7710_requestGiveItem(void *self, u16 *p, s32 a, s32 b, s32 c);
void ActorTalkRequest_setDaySlot(void *self, u32 a, u32 b);
void ActorTalkRequest_setMonthSlot(void *self, u32 a, u32 b);
void ActorTalkRequest_setPlayerNameSlot(void *self, u32 a, s32 b);

void Unk_020d7710_requestReopenWindow(void *self);
void Unk_02014420_requestTakeItem(void *self, u16 *p, s32 a, s32 b, s32 c);
BOOL SaveManager_HasAct12Failed();
BOOL SaveManager_IsIdle();
void SaveManager_RequestAct12();
BOOL MenuCtrl_IsResultOk();
void *PlayerData_getErrands(void *p);
void *SickVillagerRecord_getParcelErrand(void *p);
s32 MenuCtrl_GetIndex();
u32 Pocket_GetItem(s32 a);
void Pocket_RemoveItem(s32 a);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
BOOL ParcelErrand_IsFor(void *a, void *b);
void *ParcelErrand_GetRecord(void *p);
void ErrandRecord_setStep(void *p, s32 a);
s32 func_02133150(s32 a, s32 b);
void *TownSessionState_Get();
void TownSessionState_SetFlag(void *p, s32 a);
void SaveData_clearFlag(void *p, s32 a);
void MenuCtrl_GetDateTime(void *p);
s32 MenuCtrl_GetAmount();
void Donation_SetTotal(s32 a);
s32 MenuCtrl_GetPostOfficeOutcome();
BOOL LetterDelivery_HasFutureLetter(s32 a);
BOOL MenuCtrl_PostOfficeLettersSent();
s32 MenuCtrl_GetPostOfficeFullMailboxes();
BOOL MenuCtrl_PostOfficeHadBadAddress();
BOOL MenuCtrl_PostOfficeWasRejected();
BOOL GameStart_IsNewResident();
BOOL Comm_End();
s32 NetOverlay_Restore();

s32 Random_GlobalBelow(s32 a);
s32 TalkRequest_AddPlayerTalk6(void *self, s32 a);
void TalkRequest_SetTargetDone(void *self);
s32 PlayerActor_IsScriptedWalking(s32 a);
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
Unk_ov054_Vec *PlayerActor_GetBodyPos(s32 a);
s32 NpcActionCtrl_getAction(void *self);
BOOL NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestStand(void *self, s32 a, u32 b);
void NpcActionCtrl_requestAction(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void NpcMoveCtrl_setTurnMode(void *self, s32 a);
void NpcMoveCtrl_setSpeedPreset(void *self, s32 a, s32 b, s32 c, s32 d);
void NpcTalkCtrl_requestTalk(void *self, s32 a, s32 b);
void Bgm_Release(s32 a);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void Clock_GetMinuteHour(void *p);
void Actor_spawn(s32 a, u32 b, void *v, void *p, void *owner);
void *TownBlockMap_Get();
void Taxi_SetLeaving();
BOOL Town_FindTownHall(void *r, s32 *a, s32 *b, s32 *c);
void *Scene_GetWarpRequest();
s32 SceneWarp_RequestAt(void *r, s32 a, void *v, s32 b, s32 c, s32 d, s32 e);
Unk_ov054_0225aa98_Rec *TalkWindow_Get(s32 a);

BOOL SpNpcPellyPhyllis_IsDeliveryItem(u16 *p, s32 k);
SpNpcPellyPhyllis *SpNpcPellyPhyllis_Create();
}

// The overlay's own data (defined below, before the functions).
extern "C" {
extern const u8 sSpNpcPellyPhyllisGreetingMsgs[2];
extern const u8 data_ov054_0225b344[2];
extern const u8 data_ov054_0225b348[2];
extern const u8 data_ov054_0225b34c[2];
extern const u8 data_ov054_0225b350[2];
extern const u8 data_ov054_0225b354[3];
extern const u8 data_ov054_0225b358[4];
extern const u16 sSpNpcPellyPhyllisHandles[2];
extern const u8 data_ov054_0225b360[4];
extern const u8 data_ov054_0225b364[5];
extern const s32 sSpNpcPellyPhyllisMenuSizes[5];
extern const Unk_ov054_Vec sSpNpcPellyPhyllisWindowSpots[2];
extern const Unk_ov054_0225b3ac_Row sSpNpcPellyPhyllisCounterPos[2];
extern const u8 sSpNpcPellyPhyllisDramaMsgTable[30];
extern const s32 sSpNpcPellyPhyllisDonationLevels[22];
extern u8 *sSpNpcPellyPhyllisTexturePaths[2];
extern u8 *sSpNpcPellyPhyllisModelPaths[2];
extern char sSpNpcPellyDramaKey[];
extern char sSpNpcPhyllisDramaKey[];
extern char sSpNpcPellyKey[];
extern char sSpNpcPhyllisKey[];
extern char sSpNpcPellyPhyllisSequence4Key[];
extern void *sSpNpcPellyPhyllisMenus[5];
extern u8 sSpNpcPellyModelPath[];
extern u8 sSpNpcPhyllisModelPath[];
extern Unk_ov054_SceneEntry sSpNpcPellyPhyllisProfile;
extern u32 sSpNpcPellyPhyllisMsgKeys[2][3];
extern u8 sSpNpcPellyTexturePath[];
extern u8 sSpNpcPhyllisTexturePath[];
extern Unk_ov054_0225b9c4_Ent sSpNpcPellyPhyllisTalkScripts[16];
extern Unk_ov054_0225aef4_Ent sSpNpcPellyPhyllisActTable[12];
}
// Member-function-pointer constants {function, this adjustment}: the tables are filled from them. They are
// named objects so that their order in .data can be set (see tools/pipeline/linking.md); the functions are
// referenced by their symbol names.
extern "C" void _ZN21SpNpcPellyPhyllisTalk10askSavingsEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk14askLoanPaymentEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17openLetterStorageEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk11showGoodbyeEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk16startMailLettersEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17onSequence4ChoiceEi();
extern "C" void _ZN21SpNpcPellyPhyllisTalk13onDramaChoiceEi();
extern "C" void _ZN21SpNpcPellyPhyllisTalk18onPostOfficeChoiceEi();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17onSequence4MsgEndEi();
extern "C" void _ZN21SpNpcPellyPhyllisTalk13onDramaMsgEndEi();
extern "C" void _ZN21SpNpcPellyPhyllisTalk18onPostOfficeMsgEndEi();
extern "C" void _ZN21SpNpcPellyPhyllisTalk12waitMoveSaveEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk13startMoveSaveEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17waitMoveConnectedEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17scanForMoveTargetEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk11endHandItemEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk15waitMailboxSaveEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk16startMailboxSaveEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk20onDeliveryItemPickedEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk13onSavingsDoneEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk20onLoanPaymentEnteredEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk25onFutureLetterDateEnteredEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk14onTownTuneDoneEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17onDonationEnteredEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk19onLetterStorageDoneEv();
extern "C" void _ZN21SpNpcPellyPhyllisTalk17onMailLettersDoneEv();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct0BEv();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct0BEv();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct0AEv();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct0AEv();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct09Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct09Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct08Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct08Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct07Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct07Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct06Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct06Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct05Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct05Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct04Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct04Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct03Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct03Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct02Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct02Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct01Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct01Ev();
extern "C" void _ZN17SpNpcPellyPhyllis9mainAct00Ev();
extern "C" void _ZN17SpNpcPellyPhyllis10setupAct00Ev();
extern "C" {
extern void *data_ov054_0225b6a0[2];
extern void *data_ov054_0225b6a8[2];
extern void *data_ov054_0225b6b0[2];
extern void *data_ov054_0225b6b8[2];
extern void *data_ov054_0225b6c0[2];
extern void *data_ov054_0225b6c8[2];
extern void *data_ov054_0225b6d0[2];
extern void *data_ov054_0225b6d8[2];
extern void *data_ov054_0225b6e0[2];
extern void *data_ov054_0225b6f0[2];
extern void *data_ov054_0225b6f8[2];
extern void *data_ov054_0225b700[2];
extern void *data_ov054_0225b708[2];
extern void *data_ov054_0225b710[2];
extern void *data_ov054_0225b718[2];
extern void *data_ov054_0225b720[2];
extern void *data_ov054_0225b728[2];
extern void *data_ov054_0225b730[2];
extern void *data_ov054_0225b738[2];
extern void *data_ov054_0225b740[2];
extern void *data_ov054_0225b748[2];
extern void *data_ov054_0225b750[2];
extern void *data_ov054_0225b758[2];
extern void *data_ov054_0225b760[2];
extern void *data_ov054_0225b768[2];
extern void *data_ov054_0225b770[2];
extern void *data_ov054_0225b778[2];
extern void *data_ov054_0225b780[2];
extern void *data_ov054_0225b788[2];
extern void *data_ov054_0225b790[2];
extern void *data_ov054_0225b798[2];
extern void *data_ov054_0225b7a0[2];
extern void *data_ov054_0225b7a8[2];
extern void *data_ov054_0225b7b0[2];
extern void *data_ov054_0225b7c0[2];
extern void *data_ov054_0225b7c8[2];
extern void *data_ov054_0225b7d0[2];
extern void *data_ov054_0225b7d8[2];
extern void *data_ov054_0225b7e0[2];
extern void *data_ov054_0225b7e8[2];
extern void *data_ov054_0225b7f0[2];
extern void *data_ov054_0225b7f8[2];
extern void *data_ov054_0225b800[2];
extern void *data_ov054_0225b808[2];
extern void *data_ov054_0225b810[2];
extern void *data_ov054_0225b818[2];
extern void *data_ov054_0225b820[2];
extern void *data_ov054_0225b828[2];
extern void *data_ov054_0225b830[2];
extern void *data_ov054_0225b838[2];
extern void *data_ov054_0225b840[2];
extern void *data_ov054_0225b848[2];
extern void *data_ov054_0225b850[2];
extern void *data_ov054_0225b858[2];
extern void *data_ov054_0225b860[2];
extern void *data_ov054_0225b868[2];
extern void *data_ov054_0225b870[2];
extern void *data_ov054_0225b878[2];
extern void *data_ov054_0225b880[2];
extern void *data_ov054_0225b888[2];
extern void *data_ov054_0225b890[2];
extern void *data_ov054_0225b898[2];
extern void *data_ov054_0225b8a0[2];
}
// symbols.txt labels inside the tables above
#define data_ov054_0225b3b4 ((const u8 *)sSpNpcPellyPhyllisCounterPos + 8)
#define data_ov054_0225b974 ((char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + 8))
#define data_ov054_0225bb08 ((Unk_ov054_0225b9c4_Flag *)((u8 *)sSpNpcPellyPhyllisTalkScripts + 8))
#define data_ov054_0225bca4 ((Unk_ov054_0225aef4_Ent *)((u8 *)sSpNpcPellyPhyllisActTable + 8))

// Data. mwcc sorts a file's data by size, and the order of equal-sized objects follows from the order in which
// the objects are created (see tools/pipeline/linking.md): the definitions are in the order that reproduces the
// original layout, part of them here and part after the functions.
extern "C" void *data_ov054_0225b718[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk14askLoanPaymentEv, 0};
extern "C" void *data_ov054_0225b748[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17openLetterStorageEv, 0};
extern "C" void *data_ov054_0225b838[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct07Ev, 0};
extern "C" void *data_ov054_0225b7e0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk11showGoodbyeEv, 0};
extern "C" void *data_ov054_0225b890[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk15waitMailboxSaveEv, 0};
extern "C" const u8 data_ov054_0225b350[2] = {0x34, 0};
extern "C" u32 sSpNpcPellyPhyllisMsgKeys[2][3] = {
    {(u32)sSpNpcPellyKey, (u32)sSpNpcPellyDramaKey, (u32)sSpNpcPellyPhyllisSequence4Key},
    {(u32)sSpNpcPhyllisKey, (u32)sSpNpcPhyllisDramaKey, 0},
};
extern "C" void *data_ov054_0225b6b8[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17scanForMoveTargetEv, 0};
extern "C" const u8 data_ov054_0225b344[2] = {0x34, 0};
extern "C" void *data_ov054_0225b820[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct08Ev, 0};
extern "C" char sSpNpcPellyDramaKey[] = "sp_npc_drama5";
extern "C" void *data_ov054_0225b848[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct06Ev, 0};
extern "C" void *data_ov054_0225b6c8[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk20onLoanPaymentEnteredEv, 0};
extern "C" void *data_ov054_0225b790[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17onSequence4MsgEndEi, 0};
extern "C" void *sSpNpcPellyPhyllisMenus[5] = {
    (void *)data_ov054_0225b358, (void *)data_ov054_0225b364, (void *)data_ov054_0225b34c,
    (void *)data_ov054_0225b354, (void *)data_ov054_0225b360,
};
extern "C" const s32 sSpNpcPellyPhyllisDonationLevels[22] = {
    0,        10000,   50000,   100000,  200000,  300000,  400000,  500000,  600000,  700000,  800000,
    900000,   1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000, 3200000, 6400000, 9999999,
};
extern "C" void *data_ov054_0225b6c0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk11showGoodbyeEv, 0};
extern "C" Unk_ov054_0225b9c4_Ent sSpNpcPellyPhyllisTalkScripts[16] = {
    {NULL, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6d8, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b7a0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b7a8, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b788, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b780, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6c8, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6d0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b808, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b890, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b7c0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b8a0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6b8, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6e0, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b760, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b700, 1},
};
extern "C" u8 sSpNpcPellyTexturePath[] = "npc_sp/model/pga_tex.nsbtx";
extern "C" void *data_ov054_0225b898[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct01Ev, 0};
extern "C" u8 *sSpNpcPellyPhyllisTexturePaths[2] = {sSpNpcPellyTexturePath, sSpNpcPhyllisTexturePath};
extern "C" void *data_ov054_0225b6a8[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk11showGoodbyeEv, 0};
extern "C" void *data_ov054_0225b6b0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk18onPostOfficeMsgEndEi, 0};
extern "C" void *data_ov054_0225b6d0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk13onSavingsDoneEv, 0};
extern "C" void *data_ov054_0225b768[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17onSequence4ChoiceEi, 0};
extern "C" void *data_ov054_0225b7e8[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct05Ev, 0};
extern "C" void *data_ov054_0225b760[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk13startMoveSaveEv, 0};
extern "C" Unk_ov054_0225aef4_Ent sSpNpcPellyPhyllisActTable[12] = {
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b708, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b750},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b898, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b730},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b738, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b740},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b878, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7c8},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b868, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7d0},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b858, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7e8},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b848, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7f0},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b838, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b810},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b820, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b828},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b830, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b840},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b860, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b870},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7f8, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b6f8},
};
extern "C" void *data_ov054_0225b710[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk16startMailLettersEv, 0};
extern "C" void *data_ov054_0225b8a0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk20onDeliveryItemPickedEv, 0};
extern "C" void *data_ov054_0225b738[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct02Ev, 0};
extern "C" u8 sSpNpcPhyllisTexturePath[] = "npc_sp/model/pgb_tex.nsbtx";
extern "C" void *data_ov054_0225b888[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk16startMailLettersEv, 0};
extern "C" void *data_ov054_0225b880[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk11showGoodbyeEv, 0};
extern "C" void *data_ov054_0225b7f0[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct06Ev, 0};
extern "C" void *data_ov054_0225b870[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct0AEv, 0};
extern "C" void *data_ov054_0225b868[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct04Ev, 0};
extern "C" void *data_ov054_0225b808[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk16startMailboxSaveEv, 0};
extern "C" const u8 sSpNpcPellyPhyllisGreetingMsgs[2] = {0x34, 0};

extern "C" SpNpcPellyPhyllis *SpNpcPellyPhyllis_Create() { return new SpNpcPellyPhyllis; }

BOOL SpNpcPellyPhyllis::vfunc_04() {
    Unk_ov054_0225b0ac_Local l;
    Unk_ov054_0225ba54_Vec vec;
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    if (isOnline()) {
        BOOL m;
        if (Item_IsFurniture(&unk_ea)) {
            l.unk_04 = sSpNpcPellyPhyllisHandles[0];
            if (Item_GetFurnitureIndex(&unk_ea) == Item_GetFurnitureIndex(&l.unk_04)) {
                m = TRUE;
            } else {
                m = FALSE;
            }
        } else {
            if (unk_ea == sSpNpcPellyPhyllisHandles[0]) {
                m = TRUE;
            } else {
                m = FALSE;
            }
        }
        if (m) {
            sister = 0;
            window = 1;
            position = sSpNpcPellyPhyllisCounterPos[1].a;
            positionY = sSpNpcPellyPhyllisCounterPos[1].b;
            positionZ = sSpNpcPellyPhyllisCounterPos[1].c;
            l.spawnRot[0] = 0;
            l.spawnRot[1] = 0;
            l.spawnRot[2] = 0;
            vec.x = sSpNpcPellyPhyllisCounterPos[0].a;
            vec.y = sSpNpcPellyPhyllisCounterPos[0].b;
            vec.z = sSpNpcPellyPhyllisCounterPos[0].c;
            Actor_spawn(0x7a, sSpNpcPellyPhyllisHandles[1], &vec, &l.spawnRot[0], this);
        } else {
            sister = 1;
            window = 0;
            position = sSpNpcPellyPhyllisCounterPos[0].a;
            positionY = sSpNpcPellyPhyllisCounterPos[0].b;
            positionZ = sSpNpcPellyPhyllisCounterPos[0].c;
        }
    } else {
        Clock_GetMinuteHour(&l);
        u8 b = l.hour;
        sister = 0;
        if (!GameStart_IsActive()) {
            if (b >= 0x16 || b < 7) {
                sister = 1;
            }
        }
        NpcMoveCtrl_setSpeedPreset(&moveCtrl, 2, 0x399, 0xcc, 0x133);
        l.npcHandle = sSpNpcPellyPhyllisHandles[sister];
        setNpcHandle(&l.npcHandle);
        unk_ea = sSpNpcPellyPhyllisHandles[sister];
    }
    setInteractionRange(0x5000);
    standBlend = data_020c6cc8;
    return TRUE;
}

BOOL SpNpcPellyPhyllis::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    void *r = PlayerData_GetCurrent();
    if (isOnline()) {
        if (NetArea_IsLocalOwner()) {
            changeAct(2);
        } else {
            changeAct(9);
        }
    } else {
        if (GameStart_IsActive() && Unk_02097ff4_testFlag(r, 9) == 0) {
            changeAct(0);
        } else {
            changeAct(2);
        }
    }
    homeAngle = rotY;
    collider.groups |= 2;
    if (sister == 0) {
        Bgm_Request(0x11, 0x55, 0x7f, 0);
    } else if (sister == 1) {
        if (!isOnline()) {
            Bgm_Request(0x11, 0x56, 0x7f, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (sister == 0) {
        Bgm_Release(0x55);
    } else if (sister == 1) {
        if (!isOnline()) {
            Bgm_Release(0x56);
        }
    }
    return TRUE;
}

u8 *SpNpcPellyPhyllis::getTexturePath() { return ((u8 **)sSpNpcPellyPhyllisTexturePaths)[sister]; }

u8 *SpNpcPellyPhyllis::getModelPath() { return ((u8 **)sSpNpcPellyPhyllisModelPaths)[sister]; }

BOOL SpNpcPellyPhyllis::updateAct() {
    BOOL r = FALSE;
    if (data_ov054_0225bca4[unk_654].enter) {
        r = (this->*sSpNpcPellyPhyllisActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcPellyPhyllis::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcPellyPhyllisActTable[state].enter) {
        ok = (this->*sSpNpcPellyPhyllisActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcPellyPhyllis::updateWindow() {
    s32 a, b;
    s32 c, d;
    Unk_ov054_0225ba54_Vec v;
    Unk_ov054_0225ba54_Vec w;
    Unk_ov054_0225ba54_Vec *p = PlayerActor_GetBodyPos(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    a = 0;
    b = 0;
    FieldPos_ToUnit(&a, &b, &v);
    s32 old = window;
    s32 i = 0;
    s32 z = i;
    for (; i < 2; i++) {
        c = z;
        d = z;
        const Unk_ov054_Vec *q = &sSpNpcPellyPhyllisWindowSpots[i];
        w.x = q->x;
        w.y = q->y;
        w.z = q->z;
        FieldPos_ToUnit(&c, &d, &w);
        if (a == c && b == d) {
            window = i;
            break;
        }
    }
    BOOL r;
    if (old == window) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

BOOL SpNpcPellyPhyllis::setupAct00() { return TRUE; }

BOOL SpNpcPellyPhyllis::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct01() {
    Unk_ov054_0225ba54_Vec v;
    const Unk_ov054_Vec *p = &sSpNpcPellyPhyllisWindowSpots[0];
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    PlayerActor_RequestWalkTo(&v, 0x400, 4);
    return TRUE;
}

BOOL SpNpcPellyPhyllis::mainAct01() {
    if (PlayerActor_IsScriptedWalking(4) == 0) {
        changeAct(4);
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct02() {
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    dramaTimer = 0xff;
    if (dramaShown == 0) {
        s32 v;
        if (Talk_IsDramaPending(this, &v, 0)) {
            dramaTimer = Random_GlobalBelow(5) * 20 + 100;
        }
    }
    standBlend = data_020c6cc8;
    return TRUE;
}

BOOL SpNpcPellyPhyllis::mainAct02() {
    if (!isOnline()) {
        if (updateWindow()) {
            changeAct(3);
            NpcMoveCtrl_setTurnMode(&moveCtrl, data_ov054_0225b348[window]);
        }
        if (dramaTimer != 0xff) {
            if (!func_020e7500(&dramaTimer)) {
                changeAct(7);
            }
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct03() {
    u32 i = window * 12;
    NpcActionCtrl_requestAction(&actionCtrl, 6, 1, *(s32 *)((u8 *)sSpNpcPellyPhyllisCounterPos + i), *(s32 *)(data_ov054_0225b3b4 + i), 0x800, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcPellyPhyllis::mainAct03() {
    isOnline();
    if (updateWindow()) {
        changeAct(3);
        NpcMoveCtrl_setTurnMode(&moveCtrl, data_ov054_0225b348[window]);
        return TRUE;
    }
    if (NpcActionCtrl_getAction(&actionCtrl) == 6) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(6);
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct04() {
    NpcTalkCtrl_requestTalk(&talkCtrl, 1, 0);
    return TRUE;
}

BOOL SpNpcPellyPhyllis::mainAct04() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(5);
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct05() { return TRUE; }

BOOL SpNpcPellyPhyllis::mainAct05() { return TRUE; }

BOOL SpNpcPellyPhyllis::setupAct06() {
    NpcMoveCtrl_setTurnMode(&moveCtrl, 0);
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcPellyPhyllis::mainAct06() {
    isOnline();
    if (updateWindow()) {
        changeAct(3);
        return TRUE;
    }
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(2);
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct07() {
    NpcActionCtrl_requestAction(&actionCtrl, 10, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcPellyPhyllis::mainAct07() {
    Unk_ov054_0225ab00_Vec v;
    isOnline();
    Unk_ov054_0225ba54_Vec *p = PlayerActor_GetBodyPos(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    if (NpcActionCtrl_getAction(&actionCtrl) == 10) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            standBlend = 0x18;
            changeAct(2);
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct08() { return TRUE; }

BOOL SpNpcPellyPhyllis::mainAct08() {
    s32 a, b;
    s32 v[3];
    if (TalkWindow_Get(0)->state == 5) {
        Taxi_SetLeaving();
        void *r = TownBlockMap_Get();
        if (r) {
            if (Town_FindTownHall(r, &v[0], &a, &b)) {
                v[2] += 0x1000;
                SceneWarp_RequestAt(Scene_GetWarpRequest(), 0, &v[0], 0xec00000, 0, 2, 2);
            }
        }
        changeAct(5);
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct09() { return TRUE; }

BOOL SpNpcPellyPhyllis::mainAct09() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        if (NpcActor_netGetSlots(this, &a, &b) && a == gCommManager->myAid && a == b) {
            netSetSlotsIfOwner(1, gCommManager->myAid, gCommManager->myAid);
            talk.vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            changeAct(4);
        } else if (NetArea_IsLocalOwner() && b == 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(2);
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct0A() { return TRUE; }

BOOL SpNpcPellyPhyllis::mainAct0A() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        if (NpcActor_netGetSlots(this, &a, &b)) {
            if (a == 4) {
                if (NetArea_IsLocalOwner()) {
                    netSetSlotsIfOwner(1, gCommManager->myAid, 4);
                    changeAct(2);
                }
            }
        }
    }
    return TRUE;
}

BOOL SpNpcPellyPhyllis::setupAct0B() { return TRUE; }

BOOL SpNpcPellyPhyllis::mainAct0B() { return TRUE; }

SpNpcPellyPhyllisTalk::SpNpcPellyPhyllisTalk() {}

SpNpcPellyPhyllisTalk::~SpNpcPellyPhyllisTalk() {}

void SpNpcPellyPhyllisTalk::attachOwner(SpNpcPellyPhyllis *o) {
    vfunc_08();
    owner = o;
}

void SpNpcPellyPhyllisTalk::endComm() {
    if (Comm_End()) {
        NetOverlay_Restore();
    }
}

void SpNpcPellyPhyllisTalk::start(TalkStartMsg *out) {
    void *g0 = PlayerData_GetCurrent();
    s32 r4 = 0;
    void *g1 = SickVillagerRecord_getParcelErrand(PlayerData_getErrands(g0));
    BOOL r7 = r4;
    u16 v[3];
    if (owner->isOnline()) {
        r7 = TRUE;
        goto end;
    }
    if (GameStart_IsActive()) {
        if (!Unk_02097ff4_testFlag(g0, 9)) {
            if (GameStart_IsNewTown() || GameStart_IsNewResident()) {
                out->msgIndex = 0x12;
            } else {
                out->msgIndex = 0x20;
            }
            Unk_02097ff4_setFlag(g0, 9);
        } else {
            out->msgIndex = 7;
        }
        r4 = 2;
        goto end;
    }
    v[1] = 0xd006;
    if (ParcelErrand_IsFor(g1, &v[1]) || (v[2] = 0xd007, ParcelErrand_IsFor(g1, &v[2]))) {
        out->msgIndex = 0x5f;
        r4 = 0;
        goto end;
    }
    if (owner->dramaShown == 0) {
        if (Talk_IsDramaPending(owner, v, r4)) {
            Unk_ov054_0225a7c4_Bits *b = (Unk_ov054_0225a7c4_Bits *)v;
            out->msgIndex = *(sSpNpcPellyPhyllisDramaMsgTable + b->mid * 6 + b->hi);
            r4 = 1;
            owner->dramaShown = r4;
            goto end;
        }
    }
    r7 = TRUE;
end:
    if (r7) {
        out->msgIndex = sSpNpcPellyPhyllisGreetingMsgs[owner->window];
        r4 = 0;
        if (owner->window == 0) {
            if (owner->isLocalSlotActive()) {
                out->msgIndex = 8;
            }
        }
    }
    out->msgKey = (const char *)sSpNpcPellyPhyllisMsgKeys[owner->sister][r4];
}

u32 SpNpcPellyPhyllisTalk::getMailResultMsg() {
    if (MenuCtrl_PostOfficeWasRejected()) {
        return 0x61;
    }
    return getAddressErrorMsg();
}

u32 SpNpcPellyPhyllisTalk::getAddressErrorMsg() {
    if (MenuCtrl_PostOfficeHadBadAddress()) {
        return 0x58;
    }
    return getFullMailboxMsg();
}

u8 SpNpcPellyPhyllisTalk::getFullMailboxMsg() {
    s32 r = MenuCtrl_GetPostOfficeFullMailboxes();
    if (r) {
        return r + 0x58;
    }
    return 9;
}

u32 SpNpcPellyPhyllisTalk::getMailAcceptedMsg() {
    if (MenuCtrl_PostOfficeLettersSent()) {
        return 5;
    }
    return 9;
}

void SpNpcPellyPhyllisTalk::giveBackLetters() {
    if (lettersGivenBack == 0) {
        u16 v = 0x1565;
        Unk_020d7710_requestGiveItem(this, &v, 0, 5, 1);
        lettersGivenBack = 1;
    }
}

void SpNpcPellyPhyllisTalk::update() {
    s32 i = script;
    if (data_ov054_0225bb08[i].flag != 0) {
        Unk_ov054_0225b9c4_Ent *e = &sSpNpcPellyPhyllisTalkScripts[i];
        if (e->fn) {
            (this->*e->fn)();
        }
    }
}

void SpNpcPellyPhyllisTalk::onTaskDone() {
    s32 i = script;
    if (data_ov054_0225bb08[i].flag == 0) {
        Unk_ov054_0225b9c4_Ent *e = &sSpNpcPellyPhyllisTalkScripts[i];
        if (e->fn) {
            (this->*e->fn)();
        }
    }
}

void SpNpcPellyPhyllisTalk::setScript(s32 v) {
    script = v;
}

void SpNpcPellyPhyllisTalk::onMailLettersDone() {
    void *m = unk_3c;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    s32 r4 = 0;
    u16 v[2];
    lettersGivenBack = r4;
    if (MenuCtrl_IsResultOk()) {
        switch (MenuCtrl_GetPostOfficeOutcome()) {
        case 0:
            r4 = getMailResultMsg();
            if (r4 == 9) {
                r4 = 7;
            }
            break;
        case 1:
            if (LetterDelivery_HasFutureLetter(r4)) {
                r4 = 0xf;
            } else {
                r4 = 0xb;
            }
            break;
        case 2:
            r4 = 0x5c;
            break;
        case 3:
            r4 = 0x62;
            break;
        }
        v[1] = 0x1565;
        Unk_02014420_requestTakeItem(this, &v[1], 0, 5, 1);
        setScript(10);
    } else {
        r4 = 3;
        Unk_020d7710_requestReopenWindow(this);
        setScript(0);
    }
    *(u8 *)v = r4;
    TalkWindowState_setNextMessage(m, v, cb);
}

void SpNpcPellyPhyllisTalk::onLetterStorageDone() {
    void *m = unk_3c;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    u8 buf[1];
    s32 r1;
    if (MenuCtrl_IsResultOk()) {
        r1 = 0x54;
    } else {
        r1 = 0x53;
    }
    buf[0] = r1;
    TalkWindowState_setNextMessage(m, buf, cb);
    setScript(0);
}

void SpNpcPellyPhyllisTalk::onDonationEntered() {
    void *m = unk_3c;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    s32 r4, r6;
    u16 v[3];
    if (MenuCtrl_IsResultOk()) {
        r4 = MenuCtrl_GetAmount();
        ActorTalkRequest_setNumberSlot(this, r4, 7, 10, 1, 0);
        if (r4 >= 0x1388) {
            r6 = 0x1d;
        } else {
            r6 = 0x1e;
        }
        v[1] = 0x149b;
        Unk_02014420_requestTakeItem(this, &v[1], 0, 5, 1);
        setScript(10);
        donationBefore = Donation_GetTotal(Unk_02097ff4_getBankAccount(PlayerData_GetCurrent()));
        Donation_SetTotal(donationBefore + r4);
    } else {
        r6 = 0x1c;
        Unk_020d7710_requestReopenWindow(this);
        setScript(0);
    }
    *(u8 *)v = r6;
    TalkWindowState_setNextMessage(m, v, cb);
}

void SpNpcPellyPhyllisTalk::onTownTuneDone() {
    void *m = unk_3c;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    u8 buf[1];
    s32 r4;
    if (owner->isLocalSlotActive()) {
        if (MenuCtrl_IsResultOk()) {
            r4 = 0x63;
        } else {
            r4 = 0x64;
        }
    } else {
        if (MenuCtrl_IsResultOk()) {
            r4 = 0x5d;
        } else {
            r4 = 0x5e;
        }
    }
    setScript(0);
    buf[0] = r4;
    TalkWindowState_setNextMessage(m, buf, cb);
}

void SpNpcPellyPhyllisTalk::onFutureLetterDateEntered() {
    void *m = unk_3c;
    u32 cb[1] = { sSpNpcPellyPhyllisMsgKeys[owner->sister][0]};
    s32 r4;
    Unk_ov054_0225a3cc_Msg l;
    if (MenuCtrl_IsResultOk()) {
        r4 = 0xc;
        l.d.w0 = 0;
        l.d.w1 = 0;
        MenuCtrl_GetDateTime(&l.d);
        u8 *q = (u8 *)&l;
        u32 b8 = q[8];
        u32 b7 = q[7];
        ActorTalkRequest_setNumberSlot(this, q[9] + 0x7d0, 1, 4, 0, 0);
        ActorTalkRequest_setMonthSlot(this, b8, 2);
        ActorTalkRequest_setDaySlot(this, b7, 3);
    } else {
        r4 = 0xe;
        MenuCtrl_ReturnFutureLetter();
    }
    setScript(0);
    l.id = r4;
    TalkWindowState_setNextMessage(m, &l, cb[0]);
}

void SpNpcPellyPhyllisTalk::onLoanPaymentEntered() {
    void *m = unk_3c;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    s32 r5;
    u16 v[2];
    if (MenuCtrl_IsResultOk()) {
        r5 = HouseData_getDebt(gSaveHouse);
        ActorTalkRequest_setNumberSlot(this, r5, 4, 10, 1, 0);
        if (r5 == 0) {
            r5 = 0x15;
            TownSessionState_SetFlag(TownSessionState_Get(), 0);
            SaveData_clearFlag(gSaveData, 0x10);
        } else {
            r5 = 0x14;
        }
        v[1] = 0x149b;
        Unk_02014420_requestTakeItem(this, &v[1], 0, 5, 1);
        setScript(10);
    } else {
        r5 = 0x13;
        Unk_020d7710_requestReopenWindow(this);
        setScript(0);
    }
    *(u8 *)v = r5;
    TalkWindowState_setNextMessage(m, v, cb);
}

void SpNpcPellyPhyllisTalk::onSavingsDone() {
    void *m = unk_3c;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    s32 r4;
    u16 v[3];
    if (MenuCtrl_IsResultOk()) {
        s32 r6 = PlayerBank_GetBalance(Unk_02097ff4_getBankAccount(PlayerData_GetCurrent()));
        ActorTalkRequest_setNumberSlot(this, r6, 5, 10, 1, 0);
        ActorTalkRequest_setNumberSlot(this, func_02133150(r6, 200), 6, 10, 1, 0);
        r4 = 0x17;
        if (r6 > savingsBefore) {
            v[1] = 0x149b;
            Unk_02014420_requestTakeItem(this, &v[1], 0, 5, 1);
        } else {
            v[2] = 0x149b;
            Unk_020d7710_requestGiveItem(this, &v[2], 0, 5, 1);
        }
        setScript(10);
    } else {
        r4 = 0x18;
        Unk_020d7710_requestReopenWindow(this);
        setScript(0);
    }
    *(u8 *)v = r4;
    TalkWindowState_setNextMessage(m, v, cb);
}

extern "C" BOOL SpNpcPellyPhyllis_IsDeliveryItem(u16 *p, s32 k) {
    if (k == 2) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x155f && v <= 0x1560) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcPellyPhyllisTalk::onDeliveryItemPicked() {
    void *m = unk_3c;
    void *p;
    u32 cb = sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    s32 r4 = 0x51;
    u16 v[3];
    if (MenuCtrl_IsResultOk()) {
        p = SickVillagerRecord_getParcelErrand(PlayerData_getErrands(PlayerData_GetCurrent()));
        if (Talk_IsInOwnTown(p)) {
            BOOL same;
            s32 r5 = MenuCtrl_GetIndex();
            v[1] = Pocket_GetItem(r5);
            if (r5 >= 0) {
                Pocket_RemoveItem(r5);
            }
            if (Item_IsFurniture(&v[1])) {
                v[2] = 0xfff1;
                s32 a = Item_GetFurnitureIndex(&v[1]);
                if (a == Item_GetFurnitureIndex(&v[2])) {
                    same = TRUE;
                } else {
                    same = FALSE;
                }
            } else {
                if (v[1] == 0xfff1) {
                    same = TRUE;
                } else {
                    same = FALSE;
                }
            }
            if (!same) {
                Unk_02014420_requestTakeItem(this, &v[1], 2, 5, 1);
                if (!ParcelErrand_IsFor(p, &owner->unk_ea)) {
                    r4 = 0x57;
                } else {
                    r4 = 0x50;
                }
                ErrandRecord_setStep(ParcelErrand_GetRecord(p), 1);
            }
        }
    }
    setScript(0);
    *(u8 *)v = r4;
    TalkWindowState_setNextMessage(m, v, cb);
}

void SpNpcPellyPhyllisTalk::startMailboxSave() {
    if (owner->canStartSave()) {
        SaveManager_RequestAct12();
        setScript(9);
    }
}

void SpNpcPellyPhyllisTalk::waitMailboxSave() {
    void *m = unk_3c;
    if (SaveManager_HasAct12Failed()) {
        u8 buf[1];
        TalkWindowState_hideBusyIcon(m);
        TalkWindowState_unlockAdvance(m);
        buf[0] = 2;
        TalkWindowState_setNextMessage(m, buf, sSpNpcPellyPhyllisMsgKeys[owner->sister][0]);
        setScript(0);
    } else if (SaveManager_IsIdle()) {
        TalkWindowState_hideBusyIcon(m);
        TalkWindowState_unlockAdvance(m);
        setScript(0);
    }
}

void SpNpcPellyPhyllisTalk::endHandItem() {
    Unk_020d7710_requestReopenWindow(this);
    setScript(0);
}

void SpNpcPellyPhyllisTalk::scanForMoveTarget() {
    void *v[4];
    u8 buf[16];
    u32 A[0x1c / 4];
    u32 B[0x18 / 4];
    void *ctx = unk_3c;
    u8 i;
    v[0] = 0;
    v[1] = 0;
    v[2] = *(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12);
    s32 n = func_020eae78(Comm_SendEmpty());
    if (func_020e7500(&netTimer) == 0) {
        endComm();
        buf[0] = 0x37;
        TalkWindowState_setNextMessage(ctx, buf, (u32)*(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12));
        TalkWindowState_hideBusyIcon(ctx);
        TalkWindowState_unlockAdvance(ctx);
        setScript(0);
    } else if (n > 0) {
        v[0] = Net_GetScanResults(NetOverlay_AssertWireless());
        func_02063888(A);
        func_02063830(B);
        for (i = 0; i < n; i++) {
            v[1] = ((void **)v[0])[i];
            if (v[1]) {
                NetOverlay_AssertWireless();
                v[3] = (void *)func_020ea6c8(v[1]);
                if ((s32)v[3] == 10) {
                    NetOverlay_AssertWireless();
                    MI_CpuCopy8(func_020ea6f4(v[1]), &buf[3], (s32)v[3]);
                    if (buf[12] == 1) {
                        u32 m = 0x38;
                        if (buf[11] == 0) {
                            EncodedString_SetRaw(B, &buf[3], 8);
                            MsgString_fromEncoded(A, B, 0, 0);
                            TalkWindowState_setSlot(ctx, 8, A);
                            m = 0x39;
                        }
                        buf[1] = m;
                        TalkWindowState_setNextMessage(ctx, &buf[1], (u32)(char *)v[2]);
                        NetOverlay_AssertWireless();
                        if (Net_ConnectToParent(v[1])) {
                            setScript(0xd);
                            break;
                        } else {
                            endComm();
                            buf[2] = 0x37;
                            TalkWindowState_setNextMessage(ctx, &buf[2], (u32)*(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12));
                            TalkWindowState_hideBusyIcon(ctx);
                            TalkWindowState_unlockAdvance(ctx);
                            setScript(0);
                            break;
                        }
                    }
                }
            }
        }
        func_02063818(B);
        func_02063870(A);
    }
}

void SpNpcPellyPhyllisTalk::waitMoveConnected() {
    void *ctx = unk_3c;
    if (func_020e7500(&netTimer) == 0) {
        u8 msg;
        endComm();
        msg = 0x37;
        TalkWindowState_setNextMessage(ctx, &msg, (u32)*(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12));
        TalkWindowState_hideBusyIcon(ctx);
        TalkWindowState_unlockAdvance(ctx);
        setScript(0);
    } else if (Net_PollConnected(NetOverlay_AssertAny())) {
        TalkWindowState_hideBusyIcon(ctx);
        TalkWindowState_unlockAdvance(ctx);
        setScript(0);
    }
}

void SpNpcPellyPhyllisTalk::startMoveSave() {
    if (owner->canStartSave()) {
        SaveManager_RequestAct1F();
        setScript(0xf);
    }
}

void SpNpcPellyPhyllisTalk::waitMoveSave() {
    void *ctx = unk_3c;
    if (SaveManager_HasAct1FFailed()) {
        setScript(0);
    } else if (SaveManager_IsIdleAfterAct1F()) {
        u8 msg;
        TalkWindowState_hideBusyIcon(ctx);
        TalkWindowState_unlockAdvance(ctx);
        msg = 0x3c;
        TalkWindowState_setNextMessage(ctx, &msg, (u32)*(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12));
        setScript(0);
    }
}

void SpNpcPellyPhyllisTalk::onMessageStart() {
    if (msgIndex == 0xf) {
        u8 *p = FutureLetter_getDeliveryDate(PlayerData_GetFutureLetter(PlayerData_GetCurrent()));
        u32 b1 = p[1];
        u32 b0 = p[0];
        ActorTalkRequest_setNumberSlot(this, (s32)(p[2] + 0x7d0), 1, 4, 0, 0);
        ActorTalkRequest_setMonthSlot(this, b1, 2);
        ActorTalkRequest_setDaySlot(this, b0, 3);
    }
    if (GameStart_IsActive()) {
        u32 id = msgIndex;
        if (id != 0x24 && id != 0x25 && id != 0x26) {
            return;
        }
        s32 cnt = 0;
        s32 i = cnt;
        u8 *g = gSavePlayers;
        do {
            if (PlayerDataArray_IsUsed(g, i)) {
                if (i != (s32)PlayerData_GetCurrentIndex()) {
                    ActorTalkRequest_setPlayerNameSlot(this, PlayerData_getPlayerId(PlayerData_GetResident(g, i)), cnt + 2);
                    cnt++;
                }
            }
            i++;
        } while (i < 4);
    }
}

void SpNpcPellyPhyllisTalk::onMessageEnd(s32 a) {
    static Unk_ov054_0225b9c4_FnI tbl[3] = {
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b6b0,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b798,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b790,
    };
    char *s = *(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12);
    s32 r = strncmp((u8 *)this + 4, s, func_0212a438(s));
    s32 i;
    if (GameStart_IsActive()) {
        i = 2;
    } else if (r == 0) {
        i = 0;
    } else {
        i = 1;
    }
    (this->*tbl[i])(a);
}

void SpNpcPellyPhyllisTalk::onPostOfficeMsgEnd(s32 a) {
    void *ctx = unk_3c;
    void *h = PlayerData_GetCurrent();
    void *hd = Unk_02097ff4_getBankAccount(h);
    char *tbl = *(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12);
    s32 r5 = 0;
    u8 msg;
    u16 half0;
    u16 half1;
    switch (msgIndex) {
    case 0x02:
        TalkWindowState_lockAdvance(ctx);
        break;
    case 0x00:
    case 0x52:
    case 0x53:
    case 0x56:
        openPostOfficeMenu(a);
        break;
    case 0x0e:
    case 0x5c:
    case 0x62:
        giveBackLetters();
        if (MenuCtrl_PostOfficeHadNoLetter()) {
            r5 = 9;
        } else {
            r5 = getMailResultMsg();
            if (r5 == 9) {
                r5 = 5;
            }
        }
        break;
    case 0x07:
        r5 = getMailResultMsg();
        break;
    case 0x61:
        giveBackLetters();
        break;
    case 0x58:
        giveBackLetters();
        r5 = getFullMailboxMsg();
        if (r5 == 9) {
            r5 = getMailAcceptedMsg();
        }
        break;
    case 0x59:
    case 0x5a:
    case 0x5b:
        giveBackLetters();
        r5 = getMailAcceptedMsg();
        break;
    case 0x0b:
    case 0x0d:
    case 0x11:
        Unk_020d7710_setSubSceneKind(this, 0x33, r5);
        Unk_020d7710_openSubScene(this, 2);
        setScript(5);
        break;
    case 0x12:
        Unk_020d7710_setSubSceneKind(this, 0x34, 1);
        Unk_020d7710_openSubScene(this, 2);
        setScript(6);
        break;
    case 0x16:
        savingsBefore = PlayerBank_GetBalance(hd);
        Unk_020d7710_setSubSceneKind(this, 0x3b, 1);
        Unk_020d7710_openSubScene(this, 2);
        setScript(7);
        break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
        r5 = 0x52;
        break;
    case 0x55:
        TalkWindowState_lockAdvance(ctx);
        TalkWindowState_showBusyIcon(ctx, r5);
        setScript(8);
        break;
    case 0x19:
    case 0x1b:
        Unk_020d7710_setSubSceneKind(this, 0x37, 1);
        Unk_020d7710_openSubScene(this, 2);
        setScript(3);
        break;
    case 0x49:
        Unk_020d7710_setSubSceneKind(this, 0x3f, r5);
        Unk_020d7710_openSubScene(this, 2);
        setScript(4);
        break;
    case 0x1d:
    case 0x1e:
        updateDonationLevel(a);
        break;
    case 0x36:
        TalkWindowState_lockAdvance(ctx);
        TalkWindowState_showBusyIcon(ctx, 1);
        NetOverlay_LoadWireless();
        Comm_Start(2, 2, r5);
        netTimer = 0x258;
        setScript(0xc);
        break;
    case 0x3d:
        switch (Town_GetEnvironmentRank()) {
        case 0:
            r5 = 0x42;
            break;
        case 1:
            r5 = 0x41;
            break;
        case 2:
            r5 = 0x40;
            break;
        case 3:
            r5 = 0x3f;
            break;
        case 4:
            r5 = 0x3e;
            break;
        default:
            r5 = 0x40;
            break;
        }
        break;
    case 0x3e:
        if (Unk_02097ff4_testFlag(h, 0x20)) {
            r5 = 0x4b;
            break;
        }
        if (TownState_IsPerfectStreak15()) {
            if (Talk_IsInOwnTown()) {
                half0 = 0x1379;
                if (Pocket_AddItem(&half0, r5)) {
                    r5 = 0x4d;
                    break;
                }
            }
        }
        r5 = 0x4c;
        break;
    case 0x40:
    case 0x41:
    case 0x42:
        switch (*(s32 *)(TownEval_GetAdvice() + 8)) {
        case 0:
            r5 = 0x43;
            break;
        case 1:
            r5 = 0x44;
            break;
        case 2:
            r5 = 0x45;
            break;
        case 3:
            r5 = 0x46;
            break;
        case 4:
            r5 = 0x47;
            break;
        case 5:
            r5 = 0x48;
            break;
        default:
            r5 = 0x43;
            break;
        }
        break;
    case 0x4e:
        half1 = 0x1379;
        Unk_020d7710_requestGiveItem(this, &half1, r5, 5, 1);
        Unk_02097ff4_setFlag(h, 0x20);
        break;
    case 0x3b:
        TalkWindowState_lockAdvance(ctx);
        TalkWindowState_showBusyIcon(ctx, r5);
        setScript(0xe);
        break;
    case 0x3c:
        *(u32 *)((u8 *)ctx + 0x14) = 0;
        owner->changeAct(8);
        break;
    }
    if (r5 != 0) {
        msg = r5;
        TalkWindowState_setNextMessage(ctx, &msg, (u32)tbl);
    }
}

void SpNpcPellyPhyllisTalk::onDramaMsgEnd(s32 a) {}

void SpNpcPellyPhyllisTalk::onSequence4MsgEnd(s32 a) {
    void *ctx = unk_3c;
    char *tbl = *(char **)((u8 *)data_ov054_0225b974 + owner->sister * 12);
    u32 r4 = 0;
    u8 msg;
    switch (msgIndex) {
    case 0x02:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
        Unk_020d7710_setSubSceneKind(this, 0x2f, 0);
        Unk_020d7710_openSubScene(this, 2);
        break;
    case 0x13:
        r4 = PlayerDataArray_CountUsed(gSavePlayers);
        if (GameStart_IsNewTown()) {
            r4 = 2;
        } else {
            r4 = (u8)(r4 + 0x22);
        }
        break;
    }
    if (r4 != 0) {
        msg = r4;
        TalkWindowState_setNextMessage(ctx, &msg, (u32)tbl);
    }
}

void SpNpcPellyPhyllisTalk::onChoice(s32 a) {
    static Unk_ov054_0225b9c4_FnI tbl[3] = {
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b778,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b770,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b768,
    };
    char *s = *(char **)((u8 *)sSpNpcPellyPhyllisMsgKeys + owner->sister * 12);
    s32 r = strncmp((u8 *)this + 4, s, func_0212a438(s));
    s32 i;
    if (GameStart_IsActive()) {
        i = 2;
    } else if (r == 0) {
        i = 0;
    } else {
        i = 1;
    }
    (this->*tbl[i])(a);
}

// NONMATCHING: the switch dispatch of this function cannot be reproduced from C with any available mwcc build
// (see docs/assembly.md). The assembly below is the original code; the C version under
// NONMATCHING is the closest known attempt (246 bytes differ: it gets a 17-entry jump table for cases 0..16 under a
// compare tree rooted at 0x52, the original has a 10-entry table for cases 0..9 under a tree rooted at 0x39).
#ifdef NONMATCHING
void SpNpcPellyPhyllisTalk::onPostOfficeChoice(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    s32 r = ChoiceList_getResult(ActorTalkRequest_getChoiceList(this));
    void *g = PlayerData_GetCurrent();
    u32 id = 0xff;
    u8 m;
    switch (msgIndex) {
    case 0x5f:
        if (r == 0) {
            Unk_020d7710_setPocketFilter(this, (void *)SpNpcPellyPhyllis_IsDeliveryItem, 0xd, 0);
            Unk_020d7710_openSubScene(this, 0);
            setScript(0xb);
        } else if (r == 1) {
            id = data_ov054_0225b344[owner->window];
        }
        break;
    case 0:
    case 0x52:
    case 0x53:
    case 0x56:
        onPostOfficeMenuChoice(a);
        break;
    case 3:
    case 9:
        if (r == 0) {
            Unk_020d7710_openSubScene(this, 1);
            setScript(1);
        }
        break;
    case 0x10:
        if (r == 0) {
            id = 0x11;
        } else if (r == 1) {
            id = 0xe;
            MenuCtrl_ReturnFutureLetter();
        }
        break;
    case 0xc:
        if (r == 0) {
            MenuCtrl_StoreFutureLetter();
            id = 7;
        }
        break;
    case 4:
    case 0x1c:
    case 0x34:
    case 0x5d:
    case 0x5e:
        if (r == 2) {
            if (Unk_02097ff4_testFlag(g, 4) == 0) {
                id = 0x1a;
                Unk_02097ff4_setFlag(g, 4);
            } else {
                id = 0x19;
            }
        } else if (r == 3) {
            if (Unk_02097ff4_testFlag(g, 1) != 0) {
                id = 0x60;
            } else {
                id = 0x35;
            }
        }
        break;
    case 0x38:
    case 0x39:
        if (r == 1) {
            endComm();
            id = 0x3a;
        }
        break;
    case 1:
        break;
    }
    if (id != 0xff) {
        m = id;
        TalkWindowState_setNextMessage(o, &m, (u32)sSpNpcPellyPhyllisMsgKeys[owner->sister][0]);
    }
}
#else
void SpNpcPellyPhyllisTalk::onPostOfficeChoice(s32 a) {
    // The function body is one asm block: mwcc defers such a function like any C++ function (an `asm void f()`
    // function is emitted at once, ahead of every other function of the file) and adds the prologue and epilogue
    // itself: push {r4-r7, lr}; sub sp, #12 ... add sp, #12; pop {r4-r7}; pop {r3}; bx r3, as in the original
    // (the block uses r4-r7; `frame` gives the 12-byte stack frame: sp+0 = a, sp+4 = unk_3c, sp+8 = message byte).
    // `this` arrives in r0, `a` in r1.
    // The jump-table entries are 16-bit offsets (case label - L_tbl + 1). mwcc's inline assembler has no 16-bit
    // data directive and no label arithmetic, and dcd must be 4-byte aligned (the table is at +0x4a), so each
    // entry is written as the Thumb instruction with the same encoding: lsl rd, rs, #n = n << 6 | rs << 3 | rd.
    u32 frame[3];
    asm {
        add r5, r0, #0
        str r1, [sp, #frame]
        ldr r1, [r5, #60]
        str r1, [sp, #4]
        bl ActorTalkRequest_getChoiceList
        bl ChoiceList_getResult
        add r4, r0, #0
        bl PlayerData_GetCurrent
        add r7, r0, #0
        mov r6, #255
        ldrb r0, [r5, #30]
        cmp r0, #57
        bgt L_gt39
        cmp r0, #57
        blt L_lt39
        b L_38_39
    L_lt39:
        cmp r0, #16
        bgt L_gt10
        cmp r0, #16
        bge L_10
        cmp r0, #9
        bgt L_gt9
        cmp r0, #0
        bge L_table
        b L_end
    L_table:
        add r1, r0, r0
        add r1, pc
        ldrh r1, [r1, #8]
        lsl r1, r1, #16
        asr r1, r1, #16
        add r1, pc
        bx r1
    L_tbl:
        lsl r7, r1, #2  // case 0: dcw 0x008f = L_0_52_53_56 - L_tbl + 1
        lsl r7, r2, #4  // case 1: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 2: dcw 0x0117 = L_end - L_tbl + 1
        lsl r1, r3, #2  // case 3: dcw 0x0099 = L_3_9 - L_tbl + 1
        lsl r1, r2, #3  // case 4: dcw 0x00d1 = L_4_1c_34_5d_5e - L_tbl + 1
        lsl r7, r2, #4  // case 5: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 6: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 7: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 8: dcw 0x0117 = L_end - L_tbl + 1
        lsl r1, r3, #2  // case 9: dcw 0x0099 = L_3_9 - L_tbl + 1
    L_gt9:
        cmp r0, #12
        beq L_c
        b L_end
    L_gt10:
        cmp r0, #52
        bgt L_gt34
        cmp r0, #52
        bge L_4_1c_34_5d_5e
        cmp r0, #28
        beq L_4_1c_34_5d_5e
        b L_end
    L_gt34:
        cmp r0, #56
        beq L_38_39
        b L_end
    L_gt39:
        cmp r0, #86
        bgt L_gt56
        cmp r0, #86
        bge L_0_52_53_56
        cmp r0, #82
        bgt L_gt52
        cmp r0, #82
        beq L_0_52_53_56
        b L_end
    L_gt52:
        cmp r0, #83
        beq L_0_52_53_56
        b L_end
    L_gt56:
        cmp r0, #94
        bgt L_gt5e
        cmp r0, #94
        bge L_4_1c_34_5d_5e
        cmp r0, #93
        beq L_4_1c_34_5d_5e
        b L_end
    L_gt5e:
        cmp r0, #95
        bne L_end
        cmp r4, #0
        bne L_5f_not0
        add r0, r5, #0
        ldr r1, =SpNpcPellyPhyllis_IsDeliveryItem
        mov r2, #13
        mov r3, #0
        bl Unk_020d7710_setPocketFilter
        add r0, r5, #0
        mov r1, #0
        bl Unk_020d7710_openSubScene
        add r0, r5, #0
        mov r1, #11
        bl setScript
        b L_end
    L_5f_not0:
        cmp r4, #1
        bne L_end
        add r0, r5, #0
        add r0, #172
        ldr r1, [r0, #0]
        ldr r0, =0x808
        ldr r1, [r1, r0]
        ldr r0, =data_ov054_0225b344
        ldrb r6, [r0, r1]
        b L_end
    L_0_52_53_56:
        add r0, r5, #0
        ldr r1, [sp, #0]
        bl onPostOfficeMenuChoice
        b L_end
    L_3_9:
        cmp r4, #0
        bne L_end
        add r0, r5, #0
        mov r1, #1
        bl Unk_020d7710_openSubScene
        add r0, r5, #0
        mov r1, #1
        bl setScript
        b L_end
    L_10:
        cmp r4, #0
        beq L_10_0
        cmp r4, #1
        beq L_10_1
        b L_end
    L_10_0:
        mov r6, #17
        b L_end
    L_10_1:
        mov r6, #14
        bl MenuCtrl_ReturnFutureLetter
        b L_end
    L_c:
        cmp r4, #0
        bne L_end
        bl MenuCtrl_StoreFutureLetter
        mov r6, #7
        b L_end
    L_4_1c_34_5d_5e:
        cmp r4, #2
        beq L_r2
        cmp r4, #3
        beq L_r3
        b L_end
    L_r2:
        add r0, r7, #0
        mov r1, #4
        bl Unk_02097ff4_testFlag
        cmp r0, #0
        bne L_r2_set
        mov r6, #26
        add r0, r7, #0
        mov r1, #4
        bl Unk_02097ff4_setFlag
        b L_end
    L_r2_set:
        mov r6, #25
        b L_end
    L_r3:
        add r0, r7, #0
        mov r1, #1
        bl Unk_02097ff4_testFlag
        cmp r0, #0
        beq L_r3_clear
        mov r6, #96
        b L_end
    L_r3_clear:
        mov r6, #53
        b L_end
    L_38_39:
        cmp r4, #1
        bne L_end
        add r0, r5, #0
        bl endComm
        mov r6, #58
    L_end:
        cmp r6, #255
        beq L_ret
        add r5, #172
        ldr r1, [r5, #0]
        ldr r0, =0x804
        ldr r1, [r1, r0]
        mov r0, #12
        mul r1, r0
        ldr r0, =sSpNpcPellyPhyllisMsgKeys
        ldr r2, [r0, r1]
        add r0, sp, #8
        strb r6, [r0, #0]
        ldr r0, [sp, #4]
        add r1, sp, #8
        bl TalkWindowState_setNextMessage
    L_ret:
    }
}
#endif

void SpNpcPellyPhyllisTalk::onDramaChoice(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    s32 r = ChoiceList_getResult(ActorTalkRequest_getChoiceList(this));
    u32 id = 0xff;
    u32 k = 1;
    u8 m[2];
    s32 t = msgIndex;
    if (t >= 0 && t <= 0x19) {
        if (r == 1) {
            id = data_ov054_0225b350[owner->window];
            k = 0;
        } else if (Talk_IsDramaPending(owner, m, 0)) {
            Talk_AdvanceDrama(owner, m);
        }
    }
    if (id != 0xff) {
        void *name = (void *)sSpNpcPellyPhyllisMsgKeys[owner->sister][k];
        m[1] = id;
        TalkWindowState_setNextMessage(o, &m[1], (u32)name);
    }
}

void SpNpcPellyPhyllisTalk::onSequence4Choice(s32 a) {
    s32 r = ChoiceList_getResult(ActorTalkRequest_getChoiceList(this));
    PlayerData_GetCurrent();
    if (msgIndex == 0x12) {
        switch (r) {
        case 0:
            PlayerOptions_SetHiragana(0);
            break;
        case 1:
            PlayerOptions_SetHiragana(1);
            break;
        }
        PlayerOptions_Commit();
    }
}

void SpNpcPellyPhyllisTalk::openPostOfficeMenu(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    void *g = PlayerData_GetCurrent();
    menuKind = 0;
    if (!Talk_IsInOwnTown()) {
        menuKind = 2;
    } else if (Unk_02097ff4_testFlag(g, 1) == 0 && HouseData_getDebt(gSaveHouse) != 0) {
        if (owner->isLocalSlotActive()) {
            menuKind = 4;
        } else {
            menuKind = 1;
        }
    } else {
        if (owner->isLocalSlotActive()) {
            menuKind = 3;
        }
    }
    s32 n = sSpNpcPellyPhyllisMenuSizes[menuKind];
    TalkChoiceList_SetIndices(this, sSpNpcPellyPhyllisMenus[menuKind], n, n - 1);
    TalkWindowState_openChoices(o, 1);
}

void SpNpcPellyPhyllisTalk::onPostOfficeMenuChoice(s32 a) {
    s32 idx = ChoiceList_getResult(ActorTalkRequest_getChoiceList(this));
    static Fn a1[2] = {*(Fn *)data_ov054_0225b850, *(Fn *)data_ov054_0225b880};
    static Fn a2[4] = {*(Fn *)data_ov054_0225b7d8, *(Fn *)data_ov054_0225b6a0, *(Fn *)data_ov054_0225b7b0,
                       *(Fn *)data_ov054_0225b6c0};
    static Fn a3[5] = {*(Fn *)data_ov054_0225b710, *(Fn *)data_ov054_0225b718, *(Fn *)data_ov054_0225b758,
                       *(Fn *)data_ov054_0225b748, *(Fn *)data_ov054_0225b7e0};
    static Fn a4[3] = {*(Fn *)data_ov054_0225b888, *(Fn *)data_ov054_0225b6f0, *(Fn *)data_ov054_0225b6a8};
    static Fn a5[4] = {*(Fn *)data_ov054_0225b720, *(Fn *)data_ov054_0225b728, *(Fn *)data_ov054_0225b800,
                       *(Fn *)data_ov054_0225b818};
    static Fn *tbls[5] = {a2, a3, a1, a4, a5};
    static const s32 cnt[5] = {4, 5, 2, 3, 4};
    if (idx < cnt[menuKind]) {
        (this->*tbls[menuKind][idx])();
    }
}

void SpNpcPellyPhyllisTalk::startMailLetters() {
    Unk_020d7710_openSubScene(this, 1);
    setScript(1);
}

void SpNpcPellyPhyllisTalk::showGoodbye() {
    u8 m = 1;
    TalkWindowState_setNextMessage(unk_3c, &m, (u32)sSpNpcPellyPhyllisMsgKeys[owner->sister][0]);
}

void SpNpcPellyPhyllisTalk::openLetterStorage() {
    Unk_020d7710_setSubSceneKind(this, 0x26, 0);
    Unk_020d7710_openSubScene(this, 2);
    setScript(2);
}

void SpNpcPellyPhyllisTalk::askLoanPayment() {
    ActorTalkRequest_setNumberSlot(this, HouseData_getDebt(gSaveHouse), 4, 10, 1, 0);
    u8 m = 0x12;
    TalkWindowState_setNextMessage(unk_3c, &m, (u32)sSpNpcPellyPhyllisMsgKeys[owner->sister][0]);
}

void SpNpcPellyPhyllisTalk::askSavings() {
    u8 m = 0x16;
    TalkWindowState_setNextMessage(unk_3c, &m, (u32)sSpNpcPellyPhyllisMsgKeys[owner->sister][0]);
}

void SpNpcPellyPhyllisTalk::updateDonationLevel(s32 a) {
    void *o = unk_3c;
    void *g;
    void *h;
    void *name;
    name = (void *)sSpNpcPellyPhyllisMsgKeys[owner->sister][0];
    g = PlayerData_GetCurrent();
    h = Unk_02097ff4_getBankAccount(g);
    s32 pos = Donation_GetTotal(h);
    u8 v = PlayerBank_GetDonationLevel(h) + 0x1f;
    s32 i;
    for (i = 1; i < 0x15; i++) {
        s32 t = sSpNpcPellyPhyllisDonationLevels[i];
        if (pos >= t && pos < sSpNpcPellyPhyllisDonationLevels[i + 1]) {
            PlayerBank_SetDonationLevel(h, i);
            if (donationBefore < t) {
                Unk_02097ff4_setFlag(g, 0x16);
                v = i + 0x1f;
            } else {
                v = i + 0x1f;
            }
        }
    }
    u8 m = v;
    TalkWindowState_setNextMessage(o, &m, (u32)name);
}

BOOL SpNpcPellyPhyllis::vfunc_48(Character *o) {
    BOOL r = FALSE;
    s32 bx, by, cx, cy;
    Unk_ov054_0225902c_Vec pos;
    Unk_ov054_0225902c_Vec *pv = (Unk_ov054_0225902c_Vec *)&o->position;
    pos.x = o->position;
    pos.y = pv->y;
    pos.z = pv->z;
    bx = 0;
    by = 0;
    cx = 0;
    cy = 0;
    FieldPos_ToUnit(&bx, &by, &pos);
    Unk_ov054_0225902c_Vec dst;
    const Unk_ov054_Vec *pd = &sSpNpcPellyPhyllisWindowSpots[window];
    dst.x = sSpNpcPellyPhyllisWindowSpots[window].x;
    dst.y = pd->y;
    dst.z = pd->z;
    FieldPos_ToUnit(&cx, &cy, &dst);
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || netIsTalkLocked()) {
        return FALSE;
    }
    if (unk_654 == 2 || unk_654 == 0 || unk_654 == 9) {
        if (bx == cx && by == cy) {
            r = TRUE;
        }
    }
    return r;
}

void SpNpcPellyPhyllis::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        footstepFx.unk_08 = arg;
        if (arg != 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, arg);
            changeAct(0xb);
        } else if (isNetOwner()) {
            u32 t = gCommManager->myAid;
            netSetSlotsIfOwner(1, t, t);
            changeAct(0xb);
        }
        break;
    case 1:
        talk.vfunc_08();
        func_02015ab0(&talk, getPlayerActor(4));
        changeAct(1);
        break;
    case 0:
        footstepFx.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            changeAct(0xa);
        } else if (isNetOwner()) {
            u32 t = gCommManager->myAid;
            netSetSlotsIfOwner(1, t, t);
            talk.vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            changeAct(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (NetArea_IsLocalOwner()) {
                netSetSlotsIfOwner(1, gCommManager->myAid, 4);
                changeAct(2);
            } else {
                netSetSlotsIfOwner(1, 4, gCommManager->myAid);
                changeAct(9);
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
                        changeAct(2);
                    }
                }
            }
        }
        break;
    }
}

BOOL SpNpcPellyPhyllis::canStartSave() {
    if (faceAnim.getMouthAnim() == 0xba && SpNpcTortimer2_IsIdle() && talk.unk_3c->unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}

s32 SpNpcPellyPhyllis::isLocalSlotActive() {
    return CommManager_isSlotActive(gCommManager, gCommManager->myAid);
}

s32 SpNpcPellyPhyllis::isOnline() {
    return CommManager_isOnline(gCommManager);
}

// Data, second part (see the note at the first part)
extern "C" Unk_ov054_SceneEntry sSpNpcPellyPhyllisProfile = {SpNpcPellyPhyllis_Create, 0x7a, 0x7e, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov054_0225b7c8[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct03Ev, 0};
extern "C" void *data_ov054_0225b7c0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk11endHandItemEv, 0};
extern "C" u8 *sSpNpcPellyPhyllisModelPaths[2] = {sSpNpcPellyModelPath, sSpNpcPhyllisModelPath};
extern "C" void *data_ov054_0225b788[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk14onTownTuneDoneEv, 0};
extern "C" void *data_ov054_0225b7a8[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17onDonationEnteredEv, 0};
extern "C" void *data_ov054_0225b840[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct09Ev, 0};
extern "C" void *data_ov054_0225b798[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk13onDramaMsgEndEi, 0};
extern "C" const u8 data_ov054_0225b358[4] = {0xeb, 0xec, 0xd5, 0x56};
extern "C" void *data_ov054_0225b6f0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk10askSavingsEv, 0};
extern "C" void *data_ov054_0225b730[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct01Ev, 0};
extern "C" void *data_ov054_0225b778[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk18onPostOfficeChoiceEi, 0};
extern "C" void *data_ov054_0225b770[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk13onDramaChoiceEi, 0};
extern "C" void *data_ov054_0225b720[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk16startMailLettersEv, 0};
extern "C" char sSpNpcPellyKey[] = "sp_npc_ypelican";
extern "C" const s32 sSpNpcPellyPhyllisMenuSizes[5] = {4, 5, 2, 3, 4};
extern "C" const u8 data_ov054_0225b360[4] = {0xeb, 0xed, 0xec, 0x56};
extern "C" u8 sSpNpcPellyModelPath[] = "npc_sp/model/pga.nsbmd";
extern "C" const u16 sSpNpcPellyPhyllisHandles[2] = {0xd006, 0xd007};
extern "C" void *data_ov054_0225b7f8[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct0BEv, 0};
extern "C" const u8 data_ov054_0225b34c[2] = {0xeb, 0x56};
extern "C" void *data_ov054_0225b810[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct07Ev, 0};
extern "C" void *data_ov054_0225b828[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct08Ev, 0};
extern "C" char sSpNpcPhyllisKey[] = "sp_npc_opelican";
extern "C" void *data_ov054_0225b850[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk16startMailLettersEv, 0};
extern "C" u8 sSpNpcPhyllisModelPath[] = "npc_sp/model/pgb.nsbmd";
extern "C" const Unk_ov054_Vec sSpNpcPellyPhyllisWindowSpots[2] = {{0xf000, 0, 0x17000}, {0x13000, 0, 0x17000}};
extern "C" void *data_ov054_0225b6f8[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct0BEv, 0};
extern "C" void *data_ov054_0225b7d8[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk16startMailLettersEv, 0};
extern "C" char sSpNpcPellyPhyllisSequence4Key[] = "sp_etc_sequence4";
extern "C" const u8 sSpNpcPellyPhyllisDramaMsgTable[30] = {
    0x00, 0x01, 0x02, 0x03, 0xfe, 0xfe, 0x04, 0x05, 0x06, 0x07, 0xfe, 0xfe, 0x08, 0x09, 0x0a,
    0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19,
};
extern "C" void *data_ov054_0225b7b0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17openLetterStorageEv, 0};
extern "C" void *data_ov054_0225b7a0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk19onLetterStorageDoneEv, 0};
extern "C" char sSpNpcPhyllisDramaKey[] = "sp_npc_drama6";
extern "C" void *data_ov054_0225b750[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct00Ev, 0};
extern "C" void *data_ov054_0225b728[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk14askLoanPaymentEv, 0};
extern "C" void *data_ov054_0225b708[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct00Ev, 0};
extern "C" const u8 data_ov054_0225b354[3] = {0xeb, 0xec, 0x56};
extern "C" void *data_ov054_0225b800[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk10askSavingsEv, 0};
extern "C" void *data_ov054_0225b818[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk11showGoodbyeEv, 0};
extern "C" void *data_ov054_0225b830[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct09Ev, 0};
extern "C" void *data_ov054_0225b860[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct0AEv, 0};
extern "C" void *data_ov054_0225b6a0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk10askSavingsEv, 0};
extern "C" void *data_ov054_0225b7d0[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct04Ev, 0};
extern "C" void *data_ov054_0225b6e0[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17waitMoveConnectedEv, 0};
extern "C" const u8 data_ov054_0225b364[5] = {0xeb, 0xed, 0xec, 0xd5, 0x56};
extern "C" void *data_ov054_0225b780[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk25onFutureLetterDateEnteredEv, 0};
extern "C" void *data_ov054_0225b758[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk10askSavingsEv, 0};
extern "C" const u8 data_ov054_0225b348[2] = {2, 1};
extern "C" void *data_ov054_0225b858[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct05Ev, 0};
extern "C" void *data_ov054_0225b700[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk12waitMoveSaveEv, 0};
extern "C" const Unk_ov054_0225b3ac_Row sSpNpcPellyPhyllisCounterPos[2] = {{0xf000, 0, 0x13000}, {0x13000, 0, 0x13000}};
extern "C" void *data_ov054_0225b740[2] = {(void *)_ZN17SpNpcPellyPhyllis9mainAct02Ev, 0};
extern "C" void *data_ov054_0225b878[2] = {(void *)_ZN17SpNpcPellyPhyllis10setupAct03Ev, 0};
extern "C" void *data_ov054_0225b6d8[2] = {(void *)_ZN21SpNpcPellyPhyllisTalk17onMailLettersDoneEv, 0};

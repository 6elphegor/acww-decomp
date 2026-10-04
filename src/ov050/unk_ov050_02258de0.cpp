// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
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
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"

#define Actor_findByProfile _ZN5Actor13findByProfileEjPS_
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define Unk_020d7710_requestGiveItem _ZN12Unk_020d771015requestGiveItemEPtjjj
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_setPocketFilter _ZN12Unk_020d771015setPocketFilterEjjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setDaySlot _ZN16ActorTalkRequest10setDaySlotEjj
#define ActorTalkRequest_setMonthSlot _ZN16ActorTalkRequest12setMonthSlotEjj
#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcMoveCtrl_setTargetAngle _ZN11NpcMoveCtrl14setTargetAngleEs
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define RoomBgm_forceClosingMusic _ZN7RoomBgm17forceClosingMusicEv
#define BlockMap_getWalkLinksAtPos _ZN8BlockMap17getWalkLinksAtPosEPv
#define HouseData_orderUpgrade _ZN9HouseData12orderUpgradeEj
#define HouseData_isUpgradePaidOff _ZN9HouseData16isUpgradePaidOffEv
#define HouseData_startLoan _ZN9HouseData9startLoanEv
#define HouseData_setDebt _ZN9HouseData7setDebtEi
#define HouseData_getDebt _ZN9HouseData7getDebtEv
#define HouseData_orderRoofPaint _ZN9HouseData14orderRoofPaintEj
#define HouseData_getLevel _ZN9HouseData8getLevelEv
#define HouseData_isUpgradePending _ZN9HouseData16isUpgradePendingEv
#define TalkWindowState_setSlotFromString _ZN15TalkWindowState17setSlotFromStringEiii
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define TurnipMarket_getPrice _ZN12TurnipMarket8getPriceEv
#define ResettiVisitFlag_isPastClosingTime _ZN16ResettiVisitFlag17isPastClosingTimeEv
#define ResettiVisitFlag_setClosingTimeToday _ZN16ResettiVisitFlag19setClosingTimeTodayEv
#define func_02086f80 _ZN12Unk_02086f8413func_02086f80Ev
#define Unk_02086f84_clearClosingTime _ZN12Unk_02086f8416clearClosingTimeEv
#define PlayerSpNpcRecord_stampArbeitDate _ZN17PlayerSpNpcRecord15stampArbeitDateEv
#define PlayerSpNpcRecord_getArbeitDate _ZN17PlayerSpNpcRecord13getArbeitDateEv
#define func_02094018 _ZN11MsgString9BD1Ev
#define func_02094030 _ZN11MsgString9BC1Ev
#define Unk_02097ff4_clearFlag _ZN12Unk_02097ff49clearFlagEj
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define Unk_02097ff4_getBirthday _ZN12Unk_02097ff411getBirthdayEv
#define PlayerData_getErrands _ZN10PlayerData10getErrandsEv
#define PlayerData_getSpNpcRecord _ZN10PlayerData14getSpNpcRecordEv
#define PlayerData_getShirt _ZN10PlayerData8getShirtEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define SickVillagerRecord_getParcelErrand _ZN18SickVillagerRecord15getParcelErrandEv
#define ErrandRecord_setStep _ZN12ErrandRecord7setStepEh
#define ErrandRecord_getStep _ZN12ErrandRecord7getStepEv
#define ErrandRecord_getKind _ZN12ErrandRecord7getKindEv
#define ErrandRecord_isActive _ZN12ErrandRecord8isActiveEv
#define SaveData_clearFlag _ZN8SaveData9clearFlagEj
#define SaveData_setFlag _ZN8SaveData7setFlagEj
#define SaveData_testFlag _ZN8SaveData8testFlagEj
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define FtrActorGrid_getActor _ZN12FtrActorGrid8getActorEiii
#define data_0213a740 __ptmf_null

struct Unk_0201bc1c;
class NpcActor;
class SpNpcNookShop;
class SpNpcNookShopTalk;

struct Unk_ov050_022590f8_Vec {
    s32 x, y, z;
};
typedef Unk_ov050_022590f8_Vec Unk_ov050_022590f8_Pos;
typedef Unk_ov050_022590f8_Vec Unk_ov050_0225c9dc_Vec;
typedef Unk_ov050_022590f8_Vec Unk_ov050_0225cd90_Vec;

struct Unk_ov050_02258f80_Loc : Unk_ov050_022590f8_Vec {
    Unk_ov050_02258f80_Loc() {}
};

struct Unk_020cbb18_Ov050 {
    u8 pad_00[0x64];
    s32 myAid;
};

struct Unk_ov050_022598e0_Buf {
    u8 a;
    u8 b;
    u8 pad[6];
};

struct Unk_ov050_0225a888_Out {
    const void *msgKey;
    u8 msgIndex;
};

struct Unk_ov050_0225b908_Out {
    u8 *msgKey;
    u8 msgIndex;
};

struct Unk_ov050_0225b7f4_Out {
    const void *msgKey;
    u8 msgIndex;
};

struct Unk_ov050_0225b908_Owner;

struct Unk_ov050_0225a888_Buf {
    u8 lo : 2;
    u8 b : 3;
    u8 c : 3;
    u8 roofColor;
};

struct Unk_ov050_0225a888_Bytes {
    u8 b[4];
};

struct Unk_ov050_0225bc18_Buf {
    u16 v;
    u8 b;
    u8 pad;
};

struct Unk_ov050_0225c0a0_Msg {
    u8 msgIndex;
    u8 pad_01;
    u16 item;
    u16 unk_04;
};


struct Unk_ov050_MsgRow {
    const char *name;
    u8 id;
    u8 pad[3];
};

struct Unk_ov050_SceneEntry {
    SpNpcNookShop *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};


struct Unk_0201bc1c;
class NpcActor;
class SpNpcMabel;
class SpNpcMabelTalk;
// Menu-state machine root (main's ActorTalkRequest / TalkMsgRequest / Unk_020d7710 / SpNpcTalkRequest chain).
class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
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
    virtual void start(Unk_ov050_0225a888_Out *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
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
    virtual BOOL canPlayTalkMelody();
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
    BOOL isNetOwner();
    void netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...);

    void setTalkRequest(Unk_0201bc1c *p);
    s32 getPlayerActor(u32 v);
    s32 getAngleToPlayer(u32 v);
    s32 getAngleTo(NpcActor *other);
    s32 getDistanceToPlayer(u32 v);
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
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 getWalkAnimSpeedScale();
    void setColliderSize(s32 a, s32 b);

    SpNpcAnimHeapHandle animHeapHandle;
    s32 colliderRadius;
    s32 colliderHeight;
    u8 talkMelodyPlayed;
};

class SpNpcNookShopTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcNookShopTalk::*Fn)();
    typedef void (SpNpcNookShopTalk::*ArgFn)(s32);
    typedef void (SpNpcNookShopTalk::*PtrFn)(void *);

    SpNpcNookShopTalk();
    virtual ~SpNpcNookShopTalk();
    virtual void vfunc_08();
    virtual void onMessageEnd();
    virtual void onChoice(s32 a);
    virtual void start(Unk_ov050_0225a888_Out *out);
    virtual void onTaskDone();
    virtual void pickArbeitStartMsg0B(Unk_ov050_0225b908_Out *out);
    virtual void pickArbeitStartMsg0C(Unk_ov050_0225b908_Out *out);
    virtual void pickArbeitStartMsg0D(Unk_ov050_0225b908_Out *out);
    virtual void pickArbeitStartMsg0E(Unk_ov050_0225b908_Out *out);
    virtual void pickArbeitStartMsg0F(Unk_ov050_0225b908_Out *out);
    virtual void pickArbeitStartMsg10(Unk_ov050_0225b7f4_Out *out);
    virtual void pickArbeitStartMsg11(Unk_ov050_0225b7f4_Out *out);
    virtual void pickArbeitStartMsg12(Unk_ov050_0225b7f4_Out *out);
    virtual void onArbeitMessageEnd();

    s32 buySelectedItem();
    void onArbeitStationeryChoice(s32 p);
    void onArbeitChoice();
    void onDrama2Choice();
    void onRoofColorChoice3(s32 p);
    void onRoofColorChoice2(s32 p);
    void onRoofColorChoice1(s32 p);
    void onRoofColorChoice0(s32 p);
    void onSellConfirmChoice(s32 p);
    void onSafeOfferChoice(s32 p);
    void onBuyPaintChoice(s32 p);
    void onBuyOrShowChoice(s32 p);
    void onBuyAfterPreviewChoice(s32 p);
    void onBuyChoice(s32 p);
    void onCatalogOrderChoice(s32 p);
    void onCannotBuyChoice(s32 p);
    void onDeliveryChoice(s32 p);
    void onMainMenuChoice(s32 p);
    void onShopChoice();
    void setRoofColor(s32 row, s32 col);
    void ackHouseUpgrade();
    void showFirstPurchaseHint();
    void onPurchaseDone();
    void openCatalogMenu();
    void giveMoneyBag();
    void openSellMenu();
    void onSafeOfferDeclined();
    void giveGlamourShot();
    void arbeitPushPlayerBack(void *h);
    void arbeitFinish(void *h);
    void arbeitReduceLoan(void *h);
    void onArbeitMsgEnd31(void *h);
    void arbeitPresentWateringCan(void *h);
    void arbeitStartWateringCanDelivery(void *h);
    void arbeitGiveCarpet(void *h);
    void arbeitStartCarpetDelivery(void *h);
    void arbeitRetryLetter(void *h);
    void arbeitGiveNewStationery(void *h);
    void arbeitOfferStationery(void *h);
    void arbeitGiveStationery(void *h);
    void arbeitStartLetterTask(void *h);
    void arbeitGiveDeliveryParcel(void *h);
    void arbeitStartFurnitureDelivery(void *h);
    void onArbeitMsgEnd12(void *h);
    void onArbeitMsgEnd0E(void *h);
    void arbeitGivePlants(void *h);
    void arbeitCheckPocketSpace(void *h);
    void arbeitPresentUniform(void *h);
    void arbeitGiveUniform(void *h);
    BOOL checkNotInUniform(Unk_ov050_0225b908_Out *out);
    void givePlantingItems();
    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(Unk_ov050_0225b908_Owner *owner);
    void handleDeliveryMenu();
    void handleCatalogMenu();
    void handleSellMenu();
    void setPendingMenuHandler(s32 idx);

    /* 0xac */ s32 topic;
    /* 0xb0 */ SpNpcNookShop *ownerNpc;
    /* 0xb4 */ Fn pendingMenuHandler;
    /* 0xbc */ s32 soldCount;
    /* 0xc0 */ s32 price;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 safeSlot;
    /* 0xcc */ s32 nextMsg;
};

class SpNpcNookShop : public SpNpcActor {
public:
    typedef BOOL (SpNpcNookShop::*Fn)();

    SpNpcNookShop() : talk(), selectedItem(0xfff1), selectedItemX(0), selectedItemZ(0) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 cmd, u8 arg);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    s32 getRunDistance();
    s32 getFollowDistance();
    BOOL isTwin();
    BOOL isTommy();
    BOOL isTimmy();
    BOOL isNook();
    BOOL tryClosingTimeTalk();
    BOOL tryFarewellTalk();
    BOOL tryStairsBlockTalk();
    BOOL tryItemTalk();
    BOOL pickItemTopic();
    s32 getOtherTwinProfile();
    BOOL isPlayerCloserThanOtherTwin();
    BOOL mainAct10();
    BOOL setupAct10();
    BOOL mainAct0F();
    BOOL setupAct0F();
    BOOL mainAct0E();
    BOOL setupAct0E();
    BOOL mainAct0D();
    BOOL setupAct0D();
    BOOL mainAct09();
    BOOL setupAct09();
    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct12();
    BOOL setupAct12();
    BOOL mainAct11();
    BOOL setupAct11();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct0B();
    BOOL setupAct0B();
    BOOL mainAct0C();
    BOOL setupAct0C();
    BOOL mainAct0A();
    BOOL setupAct0A();
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

    /* 0x651 */ u8 unk_651;
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcNookShopTalk talk;
    /* 0x728 */ u8 dramaPending;
    /* 0x72a */ u16 dramaTimer;
    /* 0x72c */ u16 standBlend;
    /* 0x72e */ u16 selectedItem;
    /* 0x730 */ s32 selectedItemX;
    /* 0x734 */ s32 selectedItemZ;
    /* 0x738 */ u8 purchasePending;
    /* 0x739 */ u8 approachTimer;
    /* 0x73a */ u8 arbeitPrompted;
    /* 0x73b */ u8 nookTalkMelodyPlayed;
};

struct Unk_ov050_0225d1d4_Ent {
    SpNpcNookShop::Fn enter;
    SpNpcNookShop::Fn exit;
};

typedef SpNpcNookShopTalk::ArgFn Unk_ov050_02259838_Fn;
typedef SpNpcNookShopTalk::ArgFn Unk_ov050_0225e4b4_ArgFn;
typedef SpNpcNookShopTalk::Fn Unk_ov050_0225e4b4_Fn;

struct Unk_ov050_02259838_Row {
    u32 id;
    SpNpcNookShopTalk::ArgFn fn;
};

struct Unk_ov050_0225a6e0_Row {
    u32 id;
    SpNpcNookShopTalk::Fn f;
};

struct Unk_ov050_0225b5a8_Row {
    u32 id;
    SpNpcNookShopTalk::PtrFn f;
};

extern "C" {
extern u16 data_020c6cc8;
extern Unk_020cbb18_Ov050 *gCommManager;
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern u32 data_0213a740[];
extern u8 *data_021c1b3c;
extern u8 gSaveData[];
extern u8 gSavePlayers;
extern u8 gSaveVillagers[];
extern u8 gSaveHouse[];
extern u8 data_021ed104[];
extern u8 data_021ed29c[];
extern u8 gTalkMsgIndexEnd[];
extern u8 gTouchPrevChanged[];
extern u8 gTouchPrevHeld[];
extern u16 gPad[];
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern void *gSceneBlockMap;
extern const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitStairsBound;
extern const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitPushBackPos;
extern const s32 data_ov050_0225da40[3];
extern const u8 sSpNpcNookShopRoofColorChoices[16];
extern const u8 sSpNpcNookShopDramaMsgTable[32];
extern const s32 sSpNpcNookShopItemTopicTable[6][2];
extern const Unk_ov050_MsgRow sSpNpcNookShopTopicTable[31];
extern char sSpNpcNookShopTwinsKey[];
extern char sSpNpcNookShopDramaKey[];
extern char sSpNpcNookShopKey[];
extern char sSpNpcNookShopSequence5_1Key[];
extern char *sSpNpcNookShopTexturePaths[5];
extern char *sSpNpcNookShopModelPaths[5];
extern Unk_ov050_0225d1d4_Ent sSpNpcNookShopActTable[19];

s32 VEC_Mag(void *v);
s32 func_01ffcb0c(s32 a, s32 b);
void *Actor_findByProfile(s32 a, s32 b);
void VillagerId_getName(void *p, void *buf);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
s32 NpcTalkCtrl_isBusy(void *p);
void Unk_02014420_requestTakeItem(void *self, u16 *a, u32 b, u32 c, u32 d);
void Unk_020d7710_requestGiveItem(void *self, u16 *p, s32 b, s32 c, s32 d);
void Unk_020d7710_setSubSceneKind(void *self, u32 a, u32 b);
void Unk_020d7710_setPocketFilter(void *self, void *fn, u32 b, u32 c);
s32 Unk_020d7710_openSubScene(void *self, s32 a);
void ActorTalkRequest_setDaySlot(void *self, u32 a, u32 b);
void ActorTalkRequest_setMonthSlot(void *self, u32 a, u32 b);
void ActorTalkRequest_setItemNameSlot(void *self, u16 *p, s32 a, s32 b);
void ActorTalkRequest_setNumberSlot(void *self, ...);
s32 ActorTalkRequest_getChoiceList(void *self);
NpcActor *func_02015aac(void *self);
void func_02015ab0(void *self, s32 v);
void NpcActionCtrl_requestStand(void *self, s32 a, u32 b);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u16 i, u16 j);
s32 NpcActionCtrl_isActionDone(void *self);
s32 NpcActionCtrl_getAction(void *self);
void NpcMoveCtrl_setSpeedPreset(void *self, s32 a, s32 b, s32 c, s32 d);
void NpcMoveCtrl_setTargetAngle(void *self, s32 v);
void NpcMoveCtrl_setWaypoint(void *self, Unk_ov050_0225cd90_Vec *v);
void NpcActor_PayPlayer(void *self, s32 v);
s32 NpcActor_CheckPayoutFits(void *self, s32 v, s32 w);
void NpcActor_ChargePlayer(void *self, s32 v);
s32 NpcActor_CanPlayerPay(void *self, s32 v);
void NpcActor_FindFreeUnitNear(Unk_ov050_0225cd90_Vec *out, void *self, Unk_ov050_0225cd90_Vec *v);
s32 Talk_IsInOwnTown(...);
void Talk_AdvanceDrama(void *a, void *b);
s32 Talk_IsDramaPending(void *a, void *b, s32 c);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 Ground_IsOnLockedExit(void *p);
void Ground_LockExit(s32 a);
void RoomWallFloor_RestoreCarpet(s32 a);
void RoomWallFloor_RestoreWallpaper(s32 a);
void RoomWallFloor_SetCarpet(void *a, s32 b, s32 c, s32 d);
void RoomWallFloor_SetWallpaper(void *a, s32 b, s32 c, s32 d);
void RoomBgm_forceClosingMusic(void *p);
void Camera_RestorePrevMode();
void Camera_SetModeDefault();
void TalkRequest_SetTargetDone(void *self);
void TalkRequest_AddPlayerTalk6(void *p, s32 v);
s32 TalkRequest_IsActive();
s32 Item_GetFurnitureIndex(void *p);
s32 Item_IsFurniture(void *p);
s32 Item_GetShopPrice(u16 *p);
void *Item_GetMemberPrice(u16 *p);
s32 Item_GetPrice(u16 *p);
void BlockMap_getWalkLinksAtPos(void *g, void *v);
void FieldPos_ToUnit(s32 *a, s32 *b, Unk_ov050_0225c9dc_Vec *v);
void HouseData_orderUpgrade(void *g, s32 a);
s32 HouseData_isUpgradePaidOff(void *m);
void HouseData_startLoan(void *g);
void HouseData_setDebt(void *g, s32 v);
s32 HouseData_getDebt(void *g);
void HouseData_orderRoofPaint(void *g, u32 a);
s32 HouseData_getLevel(void *m);
BOOL HouseData_isUpgradePending(void *p);
s32 Item_IsClass4Furniture(u16 *p);
s32 Random_GlobalBelow(s32 a);
void TalkWindowState_setSlotFromString(void *o, s32 a, void *b, void *c);
void TalkWindowState_setSlot(void *self, s32 id, void *buf);
void TalkWindowState_setNextMessage(void *o, void *p, void *q);
s32 MenuCtrl_GetCatalogItem();
void MenuCtrl_ReturnChosenItems(s32 v);
u16 *MenuCtrl_GetChosenItems();
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
void func_02071e74(void *self);
BOOL CommManager_isOnline(void *g);
void VillagerTrend_OnFurnitureBought();
BOOL SaveVillagers_AllKnowPlayer(void *a, u32 b);
void *TownSessionState_Get();
void *TownSessionState_GetClosingTime(void *p);
void TownSessionState_SetFlag(void *p, s32 v);
s32 TownSessionState_TestFlag(void *p, s32 a);
s32 TurnipMarket_getPrice(void *p);
s32 ResettiVisitFlag_isPastClosingTime(void *p);
s32 ResettiVisitFlag_setClosingTimeToday(void *p);
s32 func_02086f80(void *p);
s32 Unk_02086f84_clearClosingTime(void *p);
s32 PlayerSpNpcRecord_stampArbeitDate(void *p);
u8 *PlayerSpNpcRecord_getArbeitDate(void *p);
void func_02094018(void *p);
void func_02094030(void *p);
void *PlayerActor_GetBodyPos(s32 a);
void PlayerActor_RequestWalkTo(Unk_ov050_0225c9dc_Vec *v, s32 a, s32 b);
s32 PlayerActor_IsInAction(s32 a, s32 b);
BOOL PlayerActor_IsScriptedWalking(s32 a);
void *PlayerActor_GetActor(s32 a);
void *PlayerData_GetCurrent();
void PlayerDataArray_FindById(void *a, s32 b);
void Unk_02097ff4_clearFlag(void *p, s32 v);
void Unk_02097ff4_setFlag(void *h, u32 a);
s32 Unk_02097ff4_testFlag(void *h, s32 a);
u16 *Unk_02097ff4_getBirthday(void *a);
void *PlayerData_getErrands(void *a);
void *PlayerData_getSpNpcRecord(void *h);
u16 *PlayerData_getShirt(void *a);
u32 PlayerData_getPlayerId(...);
s32 Pocket_FindItem(u16 *p);
void Pocket_CountMatching(void *buf, void *fn);
s32 Pocket_FindEmpty(...);
s32 Pocket_AddItem(void *p, s32 v);
u16 Pocket_GetItem(s32 a);
void Pocket_RemoveItem(...);
void *SickVillagerRecord_getParcelErrand(void *a);
void Arbeit_Finish(void *h);
void Arbeit_StartBbsTask(void *h);
void Arbeit_StartWateringCanDelivery(void *h);
void Arbeit_StartCarpetDelivery(void *h);
void Arbeit_StartLetterTask(void *h);
void Arbeit_StartFurnitureDelivery(void *h);
s32 Arbeit_StartGreetings(void *h);
void Arbeit_StartPlanting(void *h);
BOOL Arbeit_IsOnDuty(void *a);
void Arbeit_ClearOnDuty(void *h);
void Arbeit_SetOnDuty(void *h);
void Arbeit_Start(void *h);
s32 PlayerErrands_GetDeliveryRecipientName(void *h, void *buf, void *v);
void *PlayerErrands_GetSlot(void *a, s32 b);
BOOL ParcelErrand_IsFor(void *a, u16 *p);
void *ParcelErrand_GetRecord(void *a);
BOOL PlayerErrandSlot_IsStepDone(void *a);
void *PlayerErrandSlot_GetVillager(void *p, s32 v);
void *PlayerErrandSlot_GetRecord(...);
void ErrandRecord_setStep(void *p, s32 v);
u32 ErrandRecord_getStep(void *p);
u32 ErrandRecord_getKind(void *p);
BOOL ErrandRecord_isActive(void *p);
s16 *DebugVar_GetPtr(s32 a, s32 b);
s32 Date_DaysBetween(void *o, void *p);
s32 Clock_GetWeekday();
void Clock_GetDate(void *o);
s32 DateTime_IsInvalid();
void SaveData_clearFlag(void *g, s32 a);
void SaveData_setFlag(void *g, s32 a);
BOOL SaveData_testFlag(void *g, s32 a);
s32 NetArea_IsLocalOwner();
s32 ChoiceList_getResult();
void NookShop_SendCatalogOrder(void *p);
s32 NookShop_CanTakeCatalogOrder();
s32 NookShop_IsPurchaseSynced();
void NookShop_BuyAt(void *a, void *b, void *c, void *d);
void NookShop_RecordBuyback(void *p);
s32 NookShop_GetLevel(void *g);
BOOL NookShop_IsClosedTomorrow(void *g);
u32 NookShop_GetClosedDate(void *g);
void *NookShop_GetRenovation(void *g);
BOOL func_020aeac8(void *g);
BOOL NookShop_IsPointSpecialToday(void *g);
BOOL NookShop_IsSaleTime(void *g);
s32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(s32 a, s32 b);
void *Scene_GetTouchPicker();
s32 Scene_GetPrevious();
void *Scene_GetCurrent();
void *TouchPick_GetTargetObject(void *a, s32 b, s32 c);
void TouchPick_GetGroundPos(void *a, void *b);
s32 func_020e7500(void *p);
s32 func_020e7518(void *p);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e96ec(Unk_ov050_0225cd90_Vec *a, void *b);
s32 func_020e972c(Unk_ov050_0225cd90_Vec *a, void *b);
void func_020e9960(void *out, void *a, void *b);
s32 strncmp(const char *a, const char *b, s32 n);
s32 func_0212a438(const char *s);
void *FtrActorGrid_getActor(void *self, s32 a, s32 b, s32 c);
void *FtrActorGrid_GetInstance();
u16 *ShopStock_GetItemAt(s32 a, s32 b);
void Camera_SetMode12();
void Camera_SetMode11();
BOOL SpNpcNookShop_IsEmptyItem(u16 *p);
s32 SpNpcNookShop_GetHouseUpgradeMsg(void *self);
BOOL SpNpcNookShop_IsDeliveryParcel(u16 *p, s32 m);
SpNpcNookShop *SpNpcNookShop_CreateTommy();
SpNpcNookShop *SpNpcNookShop_CreateTimmy();
SpNpcNookShop *SpNpcNookShop_Create();
s32 _ZN8NpcActor11netGetSlotsEii(void *self, s32 *a, s32 *b);
}

#define func_ov050_0225bd54_self _ZN17SpNpcNookShopTalk17checkNotInUniformEP22Unk_ov050_0225b908_Out
extern "C" BOOL func_ov050_0225bd54_self(void *self);

// ---- ptmf constants (named so their creation order can be set)
extern "C" void _ZN17SpNpcNookShopTalk18onRoofColorChoice0Ei();
extern "C" void _ZN13SpNpcNookShop10setupAct0BEv();
extern "C" void _ZN13SpNpcNookShop9mainAct0BEv();
extern "C" void _ZN13SpNpcNookShop9mainAct07Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct01Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct08Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct0CEv();
extern "C" void _ZN17SpNpcNookShopTalk17onSafeOfferChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk19onSellConfirmChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk16onMainMenuChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk30arbeitStartWateringCanDeliveryEPv();
extern "C" void _ZN13SpNpcNookShop9mainAct06Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct04Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct07Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct00Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct02Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct0AEv();
extern "C" void _ZN17SpNpcNookShopTalk18onRoofColorChoice1Ei();
extern "C" void _ZN17SpNpcNookShopTalk18onRoofColorChoice2Ei();
extern "C" void _ZN17SpNpcNookShopTalk16arbeitReduceLoanEPv();
extern "C" void _ZN17SpNpcNookShopTalk17onCannotBuyChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk16onDeliveryChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk16arbeitGivePlantsEPv();
extern "C" void _ZN17SpNpcNookShopTalk11onBuyChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk14onArbeitChoiceEv();
extern "C" void _ZN17SpNpcNookShopTalk16onBuyPaintChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk12onShopChoiceEv();
extern "C" void _ZN13SpNpcNookShop9mainAct05Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct04Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct01Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct06Ev();
extern "C" void _ZN17SpNpcNookShopTalk15ackHouseUpgradeEv();
extern "C" void _ZN17SpNpcNookShopTalk21showFirstPurchaseHintEv();
extern "C" void _ZN17SpNpcNookShopTalk14onPurchaseDoneEv();
extern "C" void _ZN13SpNpcNookShop10setupAct03Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct08Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct09Ev();
extern "C" void _ZN17SpNpcNookShopTalk18onRoofColorChoice3Ei();
extern "C" void _ZN13SpNpcNookShop9mainAct0AEv();
extern "C" void _ZN17SpNpcNookShopTalk24arbeitPresentWateringCanEPv();
extern "C" void _ZN13SpNpcNookShop9mainAct03Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct02Ev();
extern "C" void _ZN17SpNpcNookShopTalk20arbeitPushPlayerBackEPv();
extern "C" void _ZN17SpNpcNookShopTalk12arbeitFinishEPv();
extern "C" void _ZN17SpNpcNookShopTalk15giveGlamourShotEv();
extern "C" void _ZN17SpNpcNookShopTalk16onArbeitMsgEnd31EPv();
extern "C" void _ZN17SpNpcNookShopTalk24onArbeitStationeryChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk19onSafeOfferDeclinedEv();
extern "C" void _ZN17SpNpcNookShopTalk16arbeitGiveCarpetEPv();
extern "C" void _ZN17SpNpcNookShopTalk25arbeitStartCarpetDeliveryEPv();
extern "C" void _ZN17SpNpcNookShopTalk17arbeitRetryLetterEPv();
extern "C" void _ZN17SpNpcNookShopTalk23arbeitGiveNewStationeryEPv();
extern "C" void _ZN17SpNpcNookShopTalk21arbeitOfferStationeryEPv();
extern "C" void _ZN17SpNpcNookShopTalk20arbeitGiveStationeryEPv();
extern "C" void _ZN17SpNpcNookShopTalk21arbeitStartLetterTaskEPv();
extern "C" void _ZN17SpNpcNookShopTalk24arbeitGiveDeliveryParcelEPv();
extern "C" void _ZN17SpNpcNookShopTalk28arbeitStartFurnitureDeliveryEPv();
extern "C" void _ZN17SpNpcNookShopTalk16onArbeitMsgEnd12EPv();
extern "C" void _ZN17SpNpcNookShopTalk16onArbeitMsgEnd0EEPv();
extern "C" void _ZN17SpNpcNookShopTalk12openSellMenuEv();
extern "C" void _ZN17SpNpcNookShopTalk22arbeitCheckPocketSpaceEPv();
extern "C" void _ZN17SpNpcNookShopTalk20arbeitPresentUniformEPv();
extern "C" void _ZN17SpNpcNookShopTalk17arbeitGiveUniformEPv();
extern "C" void _ZN17SpNpcNookShopTalk20onCatalogOrderChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk14onDrama2ChoiceEv();
extern "C" void _ZN17SpNpcNookShopTalk18handleDeliveryMenuEv();
extern "C" void _ZN17SpNpcNookShopTalk17handleCatalogMenuEv();
extern "C" void _ZN17SpNpcNookShopTalk14handleSellMenuEv();
extern "C" void _ZN13SpNpcNookShop10setupAct05Ev();
extern "C" void _ZN17SpNpcNookShopTalk23onBuyAfterPreviewChoiceEi();
extern "C" void _ZN17SpNpcNookShopTalk12giveMoneyBagEv();
extern "C" void _ZN13SpNpcNookShop10setupAct0EEv();
extern "C" void _ZN17SpNpcNookShopTalk17onBuyOrShowChoiceEi();
extern "C" void _ZN13SpNpcNookShop9mainAct0EEv();
extern "C" void _ZN13SpNpcNookShop9mainAct00Ev();
extern "C" void _ZN17SpNpcNookShopTalk15openCatalogMenuEv();
extern "C" void _ZN13SpNpcNookShop9mainAct12Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct12Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct11Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct11Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct10Ev();
extern "C" void _ZN13SpNpcNookShop10setupAct10Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct0FEv();
extern "C" void _ZN13SpNpcNookShop10setupAct0FEv();
extern "C" void _ZN13SpNpcNookShop9mainAct09Ev();
extern "C" void _ZN13SpNpcNookShop9mainAct0DEv();
extern "C" void _ZN13SpNpcNookShop10setupAct0DEv();
extern "C" void _ZN13SpNpcNookShop9mainAct0CEv();
static inline BOOL Unk_ov050_02258ea0_Eq(u16 v, u16 k) {
    if (v == k) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_022590f8_Flags() {
    if (gTouchPrevHeld[0] && gTouchPrevChanged[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_022590f8_Eq(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_ov050_02259bb8_Match(u16 *p) {
    BOOL r;
    if (Item_IsFurniture(p) != 0) {
        u16 v = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(&v)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}
static inline BOOL Unk_ov050_0225a2d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov050_0225a2d0_Same(u16 *p) {
    u16 t;
    if (Item_IsFurniture(p)) {
        t = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
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

static inline BOOL Unk_ov050_0225a888_Same(u16 *p, u16 *t) {
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

static inline BOOL Unk_ov050_0225a888_Eq(u32 v, u32 k) {
    return v == k ? TRUE : FALSE;
}

static inline BOOL Unk_ov050_0225b7b4_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}
static inline BOOL Unk_ov050_0225bd54_Same(u16 *p, u16 *t, u32 k) {
    if (Item_IsFurniture(p)) {
        *t = k;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == k) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_0225bacc_Chk(u16 *p) {
    BOOL r = FALSE;
    if (Pocket_FindItem(p) >= 0) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov050_0225c294_Rng(volatile u16 *p, u32 lo, u32 hi, BOOL r) {
    u32 v = *p;
    if (*p >= lo && v <= hi) r = TRUE;
    return r;
}

extern "C" SpNpcNookShop *SpNpcNookShop_Create() { return new SpNpcNookShop; }

extern "C" SpNpcNookShop *SpNpcNookShop_CreateTimmy() { return new SpNpcNookShop; }

extern "C" SpNpcNookShop *SpNpcNookShop_CreateTommy() { return new SpNpcNookShop; }

BOOL SpNpcNookShop::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner((Unk_ov050_0225b908_Owner *)this);
    if (isTwin()) {
        setColliderSize(0xccd, 0x2000);
        setCollisionRadius(0xb00);
    }
    standBlend = data_020c6cc8;
    NpcMoveCtrl_setSpeedPreset(&moveCtrl, 2, 0x400, 0x133, 0x199);
    if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
        switch (param) {
        case 0xd00f:
            position.x = 0xf000;
            position.y = 0;
            position.z = 0x11000;
            break;
        case 0xd010:
            position.x = 0xf000;
            position.y = 0;
            position.z = 0x13000;
            break;
        case 0xd019:
            position.x = 0xf000;
            position.y = 0;
            position.z = 0x19000;
            break;
        case 0xd01a:
            position.x = 0x13000;
            position.y = 0;
            position.z = 0x17000;
            break;
        case 0xd01b:
            position.x = 0xf000;
            position.y = 0;
            position.z = 0x15000;
            break;
        case 0xd01c:
            position.x = 0x11000;
            position.y = 0;
            position.z = 0x13000;
            break;
        }
    }
    return TRUE;
}

BOOL SpNpcNookShop::vfunc_00() {
    s32 v;
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        collider.groups |= 2;
        if (NetArea_IsLocalOwner()) {
            func_02086f80(TownSessionState_GetClosingTime(TownSessionState_Get()));
            if (DateTime_IsInvalid()) {
                ResettiVisitFlag_setClosingTimeToday(TownSessionState_GetClosingTime(TownSessionState_Get()));
            }
            rotY = 0;
            moveAngleY = 0;
            changeAct(0xd);
        } else {
            changeAct(8);
        }
        return TRUE;
    }
    func_02086f80(TownSessionState_GetClosingTime(TownSessionState_Get()));
    if (DateTime_IsInvalid()) {
        ResettiVisitFlag_setClosingTimeToday(TownSessionState_GetClosingTime(TownSessionState_Get()));
    }
    void *h = TownSessionState_GetClosingTime(TownSessionState_Get());
    void *p = PlayerData_GetCurrent();
    void *q = PlayerData_getErrands(p);
    if (Unk_02097ff4_testFlag(p, 1)) {
        PlayerErrands_GetSlot(q, 0);
        void *m = PlayerErrandSlot_GetRecord();
        Ground_LockExit(1);
        talk.setTopic(5);
        ResettiVisitFlag_setClosingTimeToday(h);
        if (ResettiVisitFlag_isPastClosingTime(h)) {
            RoomBgm_forceClosingMusic(data_021c1b3c + 0x2a0);
        }
        if (ErrandRecord_isActive(m) && (ErrandRecord_getStep(m) >= 1 || ErrandRecord_getKind(m) >= 0xc)) {
            changeAct(1);
        } else {
            changeAct(0);
        }
        return TRUE;
    }
    if (isTommy() && Scene_GetPrevious() == 0x1d) {
        ResettiVisitFlag_setClosingTimeToday(h);
        changeAct(0);
    } else if (isTimmy() && Scene_GetPrevious() == 0x1d) {
        changeAct(0xa);
    } else if (isNook() && Scene_GetPrevious() == 0) {
        ResettiVisitFlag_setClosingTimeToday(h);
        changeAct(0);
    } else {
        if (Scene_GetPrevious() != 0x1e) {
            ResettiVisitFlag_setClosingTimeToday(h);
        }
        changeAct(1);
    }
    Ground_LockExit(0);
    if (isNook()) {
        if (ResettiVisitFlag_isPastClosingTime(h)) {
            RoomBgm_forceClosingMusic(data_021c1b3c + 0x2a0);
        }
        if (Talk_IsDramaPending(this, &v, 3)) {
            dramaPending = 1;
        }
    }
    return TRUE;
}

u8 *SpNpcNookShop::getTexturePath() {
    s32 r = 0;
    if (isTwin()) {
        r = 4;
    } else {
        switch (param) {
        case 0xd019:
            r = 0;
            break;
        case 0xd01a:
            r = 1;
            break;
        case 0xd01b:
            r = 2;
            break;
        case 0xd01c:
            r = 3;
            break;
        }
    }
    return (u8 *)sSpNpcNookShopTexturePaths[r];
}

u8 *SpNpcNookShop::getModelPath() {
    s32 r = 0;
    if (isTwin()) {
        r = 4;
    } else {
        switch (param) {
        case 0xd019:
            r = 0;
            break;
        case 0xd01a:
            r = 1;
            break;
        case 0xd01b:
            r = 2;
            break;
        case 0xd01c:
            r = 3;
            break;
        }
    }
    return (u8 *)sSpNpcNookShopModelPaths[r];
}

BOOL SpNpcNookShop::updateAct() {
    BOOL r = FALSE;
    if (((Unk_ov050_0225d1d4_Ent *)&sSpNpcNookShopActTable[0].exit)[unk_654].enter) {
        r = (this->*sSpNpcNookShopActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcNookShop::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcNookShopActTable[state].enter) {
        ok = (this->*sSpNpcNookShopActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcNookShop::setupAct00() {
    if (isNook()) {
        talk.setTopic(0);
    } else if (isTwin()) {
        talk.setTopic(0x11);
    }
    return TRUE;
}

BOOL SpNpcNookShop::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL SpNpcNookShop::setupAct01() {
    s32 v;
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    dramaTimer = Random_GlobalBelow(5) * 20 + 100;
    standBlend = data_020c6cc8;
    if (isNook() && Talk_IsDramaPending(this, &v, 3)) {
        dramaPending = 1;
    } else {
        dramaPending = 0;
    }
    return TRUE;
}

BOOL SpNpcNookShop::mainAct01() {
    Unk_ov050_0225cd90_Vec *pv = (Unk_ov050_0225cd90_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov050_0225cd90_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    s32 a = getAngleToPlayer(4);
    s32 k = func_020e780c(rotY, a);
    s32 s = getFollowDistance();
    Unk_ov050_0225cd90_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    if (PlayerActor_IsInAction(0x8b, 4) || PlayerActor_IsInAction(0x8c, 4)) {
        return TRUE;
    }
    if (t > s && func_020e96ec(&out, &position)) {
        changeAct(3);
    } else if (k > 0x2000) {
        changeAct(2);
    }
    if (tryStairsBlockTalk()) {
        return TRUE;
    }
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    if (dramaPending && func_020e7500(&dramaTimer) == 0) {
        changeAct(7);
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct02() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct02() {
    if (tryStairsBlockTalk()) {
        return TRUE;
    }
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    Unk_ov050_0225cd90_Vec *pv = (Unk_ov050_0225cd90_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov050_0225cd90_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    s32 b = getAngleToPlayer(4);
    func_020e780c(rotY, b);
    s32 s = getFollowDistance();
    Unk_ov050_0225cd90_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    if (PlayerActor_IsInAction(0x8b, 4) || PlayerActor_IsInAction(0x8c, 4)) {
        return TRUE;
    }
    if (t > s) {
        if (func_020e96ec(&out, &position)) {
            changeAct(3);
            return TRUE;
        }
    }
    NpcMoveCtrl_setTargetAngle(&moveCtrl, b);
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct03() {
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct03() {
    if (PlayerActor_IsInAction(0x8b, 4) || PlayerActor_IsInAction(0x8c, 4)) {
        changeAct(1);
        return TRUE;
    }
    if (tryStairsBlockTalk()) {
        return TRUE;
    }
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    Unk_ov050_0225cd90_Vec *pv = (Unk_ov050_0225cd90_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov050_0225cd90_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    Unk_ov050_0225cd90_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 s = getFollowDistance();
    if (t > getRunDistance()) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, &out);
    if (t <= s || func_020e972c(&out, &position) != 0) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct04() {
    s32 v;
    NpcActor *p = func_02015aac(&talk);
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 0);
    void *h = PlayerData_GetCurrent();
    PlayerData_getErrands(h);
    if (Unk_02097ff4_testFlag(h, 1)) {
        return TRUE;
    }
    if (isNook() && Talk_IsDramaPending(this, &v, 3)) {
        dramaPending = 1;
    }
    return TRUE;
}

BOOL SpNpcNookShop::mainAct04() {
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return TRUE;
    }
    if (purchasePending && NookShop_IsPurchaseSynced() == 0) {
        return TRUE;
    }
    if (TownSessionState_TestFlag(TownSessionState_Get(), 5)) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
    } else {
        TalkRequest_SetTargetDone(this);
    }
    changeAct(6);
    return TRUE;
}

BOOL SpNpcNookShop::setupAct05() {
    NpcActor *p = func_02015aac(&talk);
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 1);
    if (isNook()) {
        Unk_02086f84_clearClosingTime(TownSessionState_GetClosingTime(TownSessionState_Get()));
    }
    return TRUE;
}

BOOL SpNpcNookShop::mainAct05() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        void *h = TownSessionState_GetClosingTime(TownSessionState_Get());
        if (isTwin() && ResettiVisitFlag_isPastClosingTime(h)) {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 1);
        } else {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        }
        changeAct(6);
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct06() { return TRUE; }

BOOL SpNpcNookShop::mainAct06() { return TRUE; }

BOOL SpNpcNookShop::setupAct0A() { return TRUE; }

BOOL SpNpcNookShop::mainAct0A() {
    u8 *o = (u8 *)Actor_findByProfile(getOtherTwinProfile(), 0);
    if (*(s32 *)(o + 0x654) == 1) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct0C() {
    standBlend = data_020c6cc8;
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------

BOOL SpNpcNookShop::mainAct0C() { return TRUE; }

BOOL SpNpcNookShop::setupAct0B() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct0B() {
    NpcMoveCtrl_setTargetAngle(&moveCtrl, getAngleToPlayer(4));
    return TRUE;
}

BOOL SpNpcNookShop::setupAct07() {
    NpcActionCtrl_requestAction(&actionCtrl, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct07() {
    if (tryStairsBlockTalk()) {
        return TRUE;
    }
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    if (NpcActionCtrl_getAction(&actionCtrl) == 0xa) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            standBlend = 0x18;
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct11() {
    unk_651 = 0;
    return TRUE;
}

BOOL SpNpcNookShop::mainAct11() {
    PlayerData_GetCurrent();
    Unk_ov050_0225c9dc_Vec *pv = (Unk_ov050_0225c9dc_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov050_0225c9dc_Vec v0;
    v0.x = pv->x;
    v0.y = pv->y;
    v0.z = pv->z;
    s32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    Unk_ov050_0225c9dc_Vec v1;
    v1 = sSpNpcNookShopArbeitPushBackPos;
    s32 gx = v1.x;
    s32 gy = v1.y;
    s32 gz = v1.z;
    FieldPos_ToUnit(&a2, &a3, &v1);
    FieldPos_ToUnit(&a0, &a1, &v0);
    switch (unk_651) {
    case 0:
        if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
            Camera_SetModeDefault();
            unk_651 = 1;
        }
        break;
    case 1: {
        Unk_ov050_0225c9dc_Vec v2;
        v2.x = gx;
        v2.y = gy;
        v2.z = gz;
        PlayerActor_RequestWalkTo(&v2, 0x266, 4);
        unk_651 = 2;
        break;
    }
    case 2:
        if (PlayerActor_IsScriptedWalking(4) == 0) {
            TalkRequest_SetTargetDone(this);
            changeAct(2);
        }
        break;
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct12() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct12() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
        }
    }
    NpcMoveCtrl_setTargetAngle(&moveCtrl, getAngleToPlayer(4));
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL SpNpcNookShop::setupAct08() { return TRUE; }

BOOL SpNpcNookShop::mainAct08() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b) && ((x = a), x == (t = gCommManager->myAid)) && x == b) {
            netSetSlotsIfOwner(1, t, t);
            talk.vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            BOOL r;
            if (Item_IsFurniture(&selectedItem)) {
                u16 tmp = 0xfff1;
                s32 p = Item_GetFurnitureIndex(&selectedItem);
                if (p == Item_GetFurnitureIndex(&tmp)) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            } else {
                if (selectedItem == 0xfff1) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            }
            if (r) {
                if (isNook()) {
                    talk.setTopic(5);
                } else {
                    talk.setTopic(0x13);
                }
            }
            changeAct(4);
        } else if (NetArea_IsLocalOwner() && b == 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(0xd);
        }
    } else {
        tryItemTalk();
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct09() { return TRUE; }

BOOL SpNpcNookShop::mainAct09() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b) && a == 4 && NetArea_IsLocalOwner()) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(0xd);
        }
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct0D() {
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct0D() {
    s32 t = getAngleToPlayer(4);
    if (func_020e780c(rotY, t) >= data_020c6cc0) {
        changeAct(0xe);
    } else {
        tryItemTalk();
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct0E() {
    s32 f = getAngleToPlayer(4);
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, f, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookShop::mainAct0E() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(0xd);
        } else {
            tryItemTalk();
        }
    }
    return TRUE;
}

BOOL SpNpcNookShop::setupAct0F() { return TRUE; }

BOOL SpNpcNookShop::mainAct0F() { return TRUE; }

BOOL SpNpcNookShop::setupAct10() {
    approachTimer = 0x32;
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------

BOOL SpNpcNookShop::mainAct10() {
    Unk_ov050_0225c9dc_Vec *pv = (Unk_ov050_0225c9dc_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov050_0225c9dc_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov050_0225c9dc_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 t = getDistanceToPlayer(4);
    BlockMap_getWalkLinksAtPos(gSceneBlockMap, &position);
    if (t > 0x4000) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, &out);
    if (t <= 0x3000 || func_020e972c(&out, &position) != 0 || func_020e7518(&approachTimer) == 0) {
        talk.vfunc_08();
        func_02015ab0(&talk, getPlayerActor(4));
        changeAct(4);
    }
    return TRUE;
}

void SpNpcNookShopTalk::onTaskDone() {
    if (pendingMenuHandler) {
        (this->*pendingMenuHandler)();
        pendingMenuHandler = *(Fn *)data_0213a740;
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov050_0225df88[2];
extern "C" void *data_ov050_0225e0b8[2];
extern "C" void *data_ov050_0225deb0[2];
extern "C" void *data_ov050_0225df18[2];
extern "C" void *data_ov050_0225de40[2];
extern "C" void *data_ov050_0225e010[2];
extern "C" void *data_ov050_0225de58[2];
extern "C" void *data_ov050_0225de48[2];
extern "C" void *data_ov050_0225df90[2];
extern "C" void *data_ov050_0225df28[2];
extern "C" void *data_ov050_0225de60[2];
extern "C" void *data_ov050_0225de00[2];
extern "C" void *data_ov050_0225df30[2];
extern "C" void *data_ov050_0225dfd8[2];
extern "C" void *data_ov050_0225dea8[2];
extern "C" void *data_ov050_0225de50[2];
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitStairsBound;
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitPushBackPos;
extern "C" const s32 data_ov050_0225da40[3];
extern "C" const s32 sSpNpcNookShopItemTopicTable[6][2];
extern "C" void *data_ov050_0225de68[2];
extern "C" void *data_ov050_0225ddf8[2];
extern "C" void *data_ov050_0225dde8[2];
extern "C" void *data_ov050_0225ddf0[2];
extern "C" void *data_ov050_0225deb8[2];
extern "C" void *data_ov050_0225dfa0[2];
extern "C" void *data_ov050_0225dec0[2];
extern "C" void *data_ov050_0225e120[2];
extern "C" void *data_ov050_0225de38[2];
extern "C" void *data_ov050_0225dea0[2];
extern "C" void *data_ov050_0225e158[2];
extern "C" void *data_ov050_0225de28[2];
extern "C" void *data_ov050_0225e160[2];
extern "C" void *data_ov050_0225e190[2];
extern "C" char data_ov050_0225e210[];
extern "C" char data_ov050_0225e228[];
extern "C" char data_ov050_0225e240[];
extern "C" char data_ov050_0225e258[];
extern "C" char data_ov050_0225e270[];
extern "C" void *data_ov050_0225e150[2];
extern "C" void *data_ov050_0225e148[2];
extern "C" void *data_ov050_0225e140[2];
extern "C" void *data_ov050_0225e138[2];
extern "C" void *data_ov050_0225e130[2];
extern "C" void *data_ov050_0225e128[2];
extern "C" void *data_ov050_0225df60[2];
extern "C" void *data_ov050_0225e118[2];
extern "C" void *data_ov050_0225e110[2];
extern "C" void *data_ov050_0225e108[2];
extern "C" void *data_ov050_0225e100[2];
extern "C" void *data_ov050_0225e0f8[2];
extern "C" void *data_ov050_0225e0f0[2];
extern "C" void *data_ov050_0225e0e8[2];
extern "C" void *data_ov050_0225e0e0[2];
extern "C" void *data_ov050_0225e0d8[2];
extern "C" void *data_ov050_0225e0d0[2];
extern "C" void *data_ov050_0225e0c8[2];
extern "C" char sSpNpcNookShopSequence5_1Key[];
extern "C" char data_ov050_0225e2d0[];
extern "C" char data_ov050_0225e2ec[];
extern "C" char data_ov050_0225e308[];
extern "C" char data_ov050_0225e324[];
extern "C" char data_ov050_0225e340[];
extern "C" void *data_ov050_0225e080[2];
extern "C" void *data_ov050_0225e078[2];
extern "C" void *data_ov050_0225e070[2];
extern "C" void *data_ov050_0225e068[2];
extern "C" void *data_ov050_0225e060[2];
extern "C" void *data_ov050_0225e058[2];
extern "C" void *data_ov050_0225e050[2];
extern "C" void *data_ov050_0225e048[2];
extern "C" void *data_ov050_0225def0[2];
extern "C" void *data_ov050_0225e038[2];
extern "C" void *data_ov050_0225e030[2];
extern "C" void *data_ov050_0225e028[2];
extern "C" void *data_ov050_0225e020[2];
extern "C" void *data_ov050_0225e018[2];
extern "C" void *data_ov050_0225ded8[2];
extern "C" void *data_ov050_0225e008[2];
extern "C" void *data_ov050_0225e000[2];
extern "C" void *data_ov050_0225dff8[2];
extern "C" void *data_ov050_0225dff0[2];
extern "C" void *data_ov050_0225dfe8[2];
extern "C" char sSpNpcNookShopTwinsKey[];
extern "C" char sSpNpcNookShopDramaKey[];
extern "C" const Unk_ov050_MsgRow sSpNpcNookShopTopicTable[31];
extern "C" void *data_ov050_0225dfa8[2];
extern "C" void *data_ov050_0225dfb8[2];
extern "C" void *data_ov050_0225e040[2];
extern "C" void *data_ov050_0225df98[2];
extern "C" void *data_ov050_0225e180[2];
extern "C" void *data_ov050_0225e170[2];
extern "C" void *data_ov050_0225df80[2];
extern "C" void *data_ov050_0225df78[2];
extern "C" void *data_ov050_0225df70[2];
extern "C" void *data_ov050_0225df68[2];
extern "C" void *data_ov050_0225de80[2];
extern "C" void *data_ov050_0225df58[2];
extern "C" void *data_ov050_0225df50[2];
extern "C" void *data_ov050_0225df48[2];
extern "C" void *data_ov050_0225df40[2];
extern "C" void *data_ov050_0225df38[2];
extern "C" void *data_ov050_0225e0c0[2];
extern "C" void *data_ov050_0225e0b0[2];
extern "C" void *data_ov050_0225df20[2];
extern "C" void *data_ov050_0225e090[2];
extern "C" void *data_ov050_0225df10[2];
extern "C" void *data_ov050_0225df08[2];
extern "C" void *data_ov050_0225df00[2];
extern "C" void *data_ov050_0225def8[2];
extern "C" const u8 sSpNpcNookShopRoofColorChoices[16];
extern "C" const u8 sSpNpcNookShopDramaMsgTable[32];
extern "C" void *data_ov050_0225ded0[2];
extern "C" void *data_ov050_0225dec8[2];
extern "C" void *data_ov050_0225de18[2];
extern "C" void *data_ov050_0225de98[2];
extern "C" void *data_ov050_0225dfc8[2];
extern "C" void *data_ov050_0225dfb0[2];
extern "C" void *data_ov050_0225e088[2];
extern "C" void *data_ov050_0225e188[2];
extern "C" void *data_ov050_0225e168[2];
extern "C" void *data_ov050_0225de88[2];
extern "C" void *data_ov050_0225de10[2];
extern "C" void *data_ov050_0225de78[2];
extern "C" void *data_ov050_0225de70[2];
extern "C" char sSpNpcNookShopKey[];
extern "C" char *sSpNpcNookShopTexturePaths[5];
extern "C" char *sSpNpcNookShopModelPaths[5];
extern "C" void *data_ov050_0225dee0[2];
extern "C" void *data_ov050_0225de30[2];
extern "C" void *data_ov050_0225de20[2];
extern "C" void *data_ov050_0225dfc0[2];
extern "C" void *data_ov050_0225e0a0[2];
extern "C" void *data_ov050_0225de90[2];
extern "C" void *data_ov050_0225dde0[2];
extern "C" void *data_ov050_0225de08[2];
extern "C" void *data_ov050_0225e0a8[2];
extern "C" void *data_ov050_0225e098[2];
extern "C" void *data_ov050_0225dee8[2];
extern "C" void *data_ov050_0225dfe0[2];
extern "C" void *data_ov050_0225dfd0[2];
extern "C" void *data_ov050_0225e178[2];
extern "C" Unk_ov050_SceneEntry sSpNpcNookShopProfile;
extern "C" Unk_ov050_SceneEntry sSpNpcTimmyProfile;
extern "C" Unk_ov050_SceneEntry sSpNpcTommyProfile;
extern "C" Unk_ov050_0225d1d4_Ent sSpNpcNookShopActTable[19];// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov050_0225de48[2];
extern "C" void *data_ov050_0225de10[2];
extern "C" void *data_ov050_0225e178[2];
extern "C" void *data_ov050_0225dfd8[2];
extern "C" void *data_ov050_0225de40[2];
extern "C" void *data_ov050_0225def8[2];
extern "C" void *data_ov050_0225dfd0[2];
extern "C" void *data_ov050_0225df88[2];
extern "C" void *data_ov050_0225e000[2];
extern "C" void *data_ov050_0225df90[2];
extern "C" void *data_ov050_0225ddf0[2];
extern "C" void *data_ov050_0225df98[2];
extern "C" void *data_ov050_0225de98[2];
extern "C" char sSpNpcNookShopKey[];
extern "C" char *sSpNpcNookShopTexturePaths[5];
extern "C" char *sSpNpcNookShopModelPaths[5];
extern "C" Unk_ov050_SceneEntry sSpNpcNookShopProfile;
extern "C" Unk_ov050_SceneEntry sSpNpcTimmyProfile;
extern "C" Unk_ov050_SceneEntry sSpNpcTommyProfile;
extern "C" Unk_ov050_0225d1d4_Ent sSpNpcNookShopActTable[19];
extern "C" void *data_ov050_0225dec0[2];
extern "C" void *data_ov050_0225e090[2];
extern "C" void *data_ov050_0225dfc0[2];
extern "C" void *data_ov050_0225de38[2];
extern "C" void *data_ov050_0225dea0[2];
extern "C" void *data_ov050_0225ddf8[2];
extern "C" void *data_ov050_0225de28[2];
extern "C" void *data_ov050_0225e140[2];
extern "C" void *data_ov050_0225e160[2];
extern "C" void *data_ov050_0225de18[2];
extern "C" void *data_ov050_0225dde0[2];
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitStairsBound;
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitPushBackPos;
extern "C" const s32 data_ov050_0225da40[3];
extern "C" char data_ov050_0225e2d0[];
extern "C" char data_ov050_0225e2ec[];
extern "C" char data_ov050_0225e308[];
extern "C" char data_ov050_0225e324[];
extern "C" char data_ov050_0225e340[];
extern "C" const u8 sSpNpcNookShopDramaMsgTable[32];
extern "C" const Unk_ov050_MsgRow sSpNpcNookShopTopicTable[31];
extern "C" void *data_ov050_0225e138[2];
extern "C" void *data_ov050_0225e130[2];
extern "C" void *data_ov050_0225e128[2];
extern "C" void *data_ov050_0225e120[2];
extern "C" void *data_ov050_0225e118[2];
extern "C" void *data_ov050_0225e110[2];
extern "C" void *data_ov050_0225e108[2];
extern "C" void *data_ov050_0225e100[2];
extern "C" void *data_ov050_0225e0f8[2];
extern "C" void *data_ov050_0225e0f0[2];
extern "C" void *data_ov050_0225e0e8[2];
extern "C" void *data_ov050_0225e0e0[2];
extern "C" void *data_ov050_0225e0d8[2];
extern "C" void *data_ov050_0225e0d0[2];
extern "C" void *data_ov050_0225e0c8[2];
extern "C" void *data_ov050_0225e0c0[2];
extern "C" void *data_ov050_0225e0b8[2];
extern "C" void *data_ov050_0225e0b0[2];
extern "C" void *data_ov050_0225e0a8[2];
extern "C" void *data_ov050_0225e0a0[2];
extern "C" void *data_ov050_0225e098[2];
extern "C" char sSpNpcNookShopSequence5_1Key[];
extern "C" void *data_ov050_0225e078[2];
extern "C" void *data_ov050_0225e070[2];
extern "C" void *data_ov050_0225e068[2];
extern "C" void *data_ov050_0225df00[2];
extern "C" void *data_ov050_0225e058[2];
extern "C" void *data_ov050_0225e050[2];
extern "C" void *data_ov050_0225e048[2];
extern "C" void *data_ov050_0225e040[2];
extern "C" void *data_ov050_0225e038[2];
extern "C" void *data_ov050_0225e030[2];
extern "C" void *data_ov050_0225e028[2];
extern "C" void *data_ov050_0225e020[2];
extern "C" void *data_ov050_0225e018[2];
extern "C" void *data_ov050_0225e010[2];
extern "C" void *data_ov050_0225e008[2];
extern "C" void *data_ov050_0225ded0[2];
extern "C" void *data_ov050_0225dff8[2];
extern "C" void *data_ov050_0225dff0[2];
extern "C" void *data_ov050_0225deb8[2];
extern "C" void *data_ov050_0225dfe0[2];
extern "C" void *data_ov050_0225de20[2];
extern "C" const u8 sSpNpcNookShopRoofColorChoices[16];
extern "C" void *data_ov050_0225dfa0[2];
extern "C" void *data_ov050_0225dfa8[2];
extern "C" void *data_ov050_0225dfb8[2];
extern "C" void *data_ov050_0225e060[2];
extern "C" void *data_ov050_0225e190[2];
extern "C" void *data_ov050_0225e180[2];
extern "C" void *data_ov050_0225e170[2];
extern "C" void *data_ov050_0225df80[2];
extern "C" void *data_ov050_0225e150[2];
extern "C" void *data_ov050_0225e148[2];
extern "C" void *data_ov050_0225df68[2];
extern "C" void *data_ov050_0225df60[2];
extern "C" void *data_ov050_0225df58[2];
extern "C" void *data_ov050_0225df50[2];
extern "C" void *data_ov050_0225df48[2];
extern "C" void *data_ov050_0225df40[2];
extern "C" void *data_ov050_0225df38[2];
extern "C" void *data_ov050_0225df30[2];
extern "C" void *data_ov050_0225df28[2];
extern "C" void *data_ov050_0225df20[2];
extern "C" char sSpNpcNookShopTwinsKey[];
extern "C" char sSpNpcNookShopDramaKey[];
extern "C" char data_ov050_0225e210[];
extern "C" char data_ov050_0225e228[];
extern "C" char data_ov050_0225e240[];
extern "C" char data_ov050_0225e258[];
extern "C" char data_ov050_0225e270[];
extern "C" const s32 sSpNpcNookShopItemTopicTable[6][2];
extern "C" void *data_ov050_0225dec8[2];
extern "C" void *data_ov050_0225dfe8[2];
extern "C" void *data_ov050_0225de58[2];
extern "C" void *data_ov050_0225dfc8[2];
extern "C" void *data_ov050_0225dfb0[2];
extern "C" void *data_ov050_0225e080[2];
extern "C" void *data_ov050_0225e188[2];
extern "C" void *data_ov050_0225e168[2];
extern "C" void *data_ov050_0225df70[2];
extern "C" void *data_ov050_0225de80[2];
extern "C" void *data_ov050_0225de78[2];
extern "C" void *data_ov050_0225de70[2];
extern "C" void *data_ov050_0225de68[2];
extern "C" void *data_ov050_0225de60[2];
extern "C" void *data_ov050_0225df10[2];
extern "C" void *data_ov050_0225de50[2];
extern "C" void *data_ov050_0225def0[2];
extern "C" void *data_ov050_0225dee0[2];
extern "C" void *data_ov050_0225ded8[2];
extern "C" void *data_ov050_0225e088[2];
extern "C" void *data_ov050_0225de90[2];
extern "C" void *data_ov050_0225e158[2];
extern "C" void *data_ov050_0225de08[2];
extern "C" void *data_ov050_0225de00[2];
extern "C" void *data_ov050_0225df18[2];
extern "C" void *data_ov050_0225dee8[2];
extern "C" void *data_ov050_0225de30[2];
extern "C" void *data_ov050_0225deb0[2];
extern "C" void *data_ov050_0225df78[2];
extern "C" void *data_ov050_0225dde8[2];
extern "C" void *data_ov050_0225df08[2];
extern "C" void *data_ov050_0225dea8[2];
extern "C" void *data_ov050_0225de88[2];// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov050_0225e020[2];
extern "C" void *data_ov050_0225de88[2];
extern "C" void *data_ov050_0225df28[2];
extern "C" void *data_ov050_0225ddf8[2];
extern "C" void *data_ov050_0225de58[2];
extern "C" void *data_ov050_0225deb8[2];
extern "C" void *data_ov050_0225de50[2];
extern "C" void *data_ov050_0225dfd0[2];
extern "C" void *data_ov050_0225e120[2];
extern "C" void *data_ov050_0225dec8[2];
extern "C" void *data_ov050_0225dfe0[2];
extern "C" void *data_ov050_0225dea8[2];
extern "C" void *data_ov050_0225dfd8[2];
extern "C" void *data_ov050_0225ded8[2];
extern "C" void *data_ov050_0225de30[2];
extern "C" void *data_ov050_0225dec0[2];
extern "C" char sSpNpcNookShopDramaKey[];
extern "C" const u8 sSpNpcNookShopRoofColorChoices[16];
extern "C" char *sSpNpcNookShopTexturePaths[5];
extern "C" char *sSpNpcNookShopModelPaths[5];
extern "C" void *data_ov050_0225dde0[2];
extern "C" void *data_ov050_0225e130[2];
extern "C" void *data_ov050_0225dfc0[2];
extern "C" void *data_ov050_0225dea0[2];
extern "C" void *data_ov050_0225e140[2];
extern "C" void *data_ov050_0225de00[2];
extern "C" void *data_ov050_0225de20[2];
extern "C" void *data_ov050_0225de28[2];
extern "C" void *data_ov050_0225dfb8[2];
extern "C" void *data_ov050_0225dde8[2];
extern "C" void *data_ov050_0225e040[2];
extern "C" void *data_ov050_0225ddf0[2];
extern "C" void *data_ov050_0225e190[2];
extern "C" void *data_ov050_0225e188[2];
extern "C" void *data_ov050_0225e180[2];
extern "C" void *data_ov050_0225e178[2];
extern "C" void *data_ov050_0225e170[2];
extern "C" void *data_ov050_0225e168[2];
extern "C" void *data_ov050_0225e160[2];
extern "C" void *data_ov050_0225e158[2];
extern "C" void *data_ov050_0225e150[2];
extern "C" char sSpNpcNookShopKey[];
extern "C" const Unk_ov050_MsgRow sSpNpcNookShopTopicTable[31];
extern "C" void *data_ov050_0225e128[2];
extern "C" void *data_ov050_0225df60[2];
extern "C" void *data_ov050_0225e118[2];
extern "C" void *data_ov050_0225e110[2];
extern "C" void *data_ov050_0225e108[2];
extern "C" void *data_ov050_0225e100[2];
extern "C" void *data_ov050_0225e0f8[2];
extern "C" void *data_ov050_0225e0f0[2];
extern "C" void *data_ov050_0225e0e8[2];
extern "C" void *data_ov050_0225e0e0[2];
extern "C" void *data_ov050_0225e0d8[2];
extern "C" void *data_ov050_0225e0d0[2];
extern "C" void *data_ov050_0225e0c8[2];
extern "C" void *data_ov050_0225e0c0[2];
extern "C" void *data_ov050_0225e0b8[2];
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitStairsBound;
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitPushBackPos;
extern "C" const s32 data_ov050_0225da40[3];
extern "C" const u8 sSpNpcNookShopDramaMsgTable[32];
extern "C" void *data_ov050_0225e080[2];
extern "C" void *data_ov050_0225e078[2];
extern "C" void *data_ov050_0225e070[2];
extern "C" void *data_ov050_0225e068[2];
extern "C" void *data_ov050_0225e060[2];
extern "C" void *data_ov050_0225e058[2];
extern "C" void *data_ov050_0225e050[2];
extern "C" void *data_ov050_0225e048[2];
extern "C" void *data_ov050_0225def0[2];
extern "C" void *data_ov050_0225e038[2];
extern "C" void *data_ov050_0225e030[2];
extern "C" void *data_ov050_0225e028[2];
extern "C" void *data_ov050_0225dee0[2];
extern "C" void *data_ov050_0225e018[2];
extern "C" void *data_ov050_0225e010[2];
extern "C" void *data_ov050_0225e008[2];
extern "C" void *data_ov050_0225e000[2];
extern "C" void *data_ov050_0225dff8[2];
extern "C" void *data_ov050_0225dff0[2];
extern "C" char data_ov050_0225e2d0[];
extern "C" char data_ov050_0225e2ec[];
extern "C" char data_ov050_0225e308[];
extern "C" char data_ov050_0225e324[];
extern "C" char data_ov050_0225e340[];
extern "C" const s32 sSpNpcNookShopItemTopicTable[6][2];
extern "C" Unk_ov050_0225d1d4_Ent sSpNpcNookShopActTable[19];
extern "C" void *data_ov050_0225e088[2];
extern "C" void *data_ov050_0225df98[2];
extern "C" void *data_ov050_0225df90[2];
extern "C" void *data_ov050_0225df88[2];
extern "C" void *data_ov050_0225df80[2];
extern "C" void *data_ov050_0225df78[2];
extern "C" void *data_ov050_0225df70[2];
extern "C" void *data_ov050_0225e138[2];
extern "C" void *data_ov050_0225de80[2];
extern "C" void *data_ov050_0225df58[2];
extern "C" void *data_ov050_0225df50[2];
extern "C" void *data_ov050_0225df48[2];
extern "C" void *data_ov050_0225df40[2];
extern "C" void *data_ov050_0225df38[2];
extern "C" void *data_ov050_0225df30[2];
extern "C" void *data_ov050_0225e0b0[2];
extern "C" void *data_ov050_0225df20[2];
extern "C" void *data_ov050_0225e090[2];
extern "C" void *data_ov050_0225df10[2];
extern "C" void *data_ov050_0225df08[2];
extern "C" void *data_ov050_0225df00[2];
extern "C" void *data_ov050_0225def8[2];
extern "C" void *data_ov050_0225de48[2];
extern "C" void *data_ov050_0225dee8[2];
extern "C" char sSpNpcNookShopTwinsKey[];
extern "C" Unk_ov050_SceneEntry sSpNpcNookShopProfile;
extern "C" Unk_ov050_SceneEntry sSpNpcTimmyProfile;
extern "C" Unk_ov050_SceneEntry sSpNpcTommyProfile;
extern "C" void *data_ov050_0225deb0[2];
extern "C" void *data_ov050_0225dfa0[2];
extern "C" void *data_ov050_0225e0a0[2];
extern "C" void *data_ov050_0225de98[2];
extern "C" void *data_ov050_0225de90[2];
extern "C" void *data_ov050_0225e148[2];
extern "C" void *data_ov050_0225df68[2];
extern "C" void *data_ov050_0225de78[2];
extern "C" void *data_ov050_0225de70[2];
extern "C" void *data_ov050_0225de68[2];
extern "C" void *data_ov050_0225e0a8[2];
extern "C" void *data_ov050_0225e098[2];
extern "C" char sSpNpcNookShopSequence5_1Key[];
extern "C" void *data_ov050_0225ded0[2];
extern "C" void *data_ov050_0225de38[2];
extern "C" void *data_ov050_0225dfc8[2];
extern "C" void *data_ov050_0225dfa8[2];
extern "C" void *data_ov050_0225de18[2];
extern "C" void *data_ov050_0225de10[2];
extern "C" void *data_ov050_0225de08[2];
extern "C" void *data_ov050_0225de60[2];
extern "C" void *data_ov050_0225df18[2];
extern "C" void *data_ov050_0225de40[2];
extern "C" void *data_ov050_0225dfe8[2];
extern "C" void *data_ov050_0225dfb0[2];
extern "C" char data_ov050_0225e210[];
extern "C" char data_ov050_0225e240[];
extern "C" char data_ov050_0225e258[];
extern "C" char data_ov050_0225e270[];
extern "C" char data_ov050_0225e228[];

extern "C" void *data_ov050_0225e020[2] = {(void *)_ZN17SpNpcNookShopTalk17arbeitRetryLetterEPv, 0};

extern "C" void *data_ov050_0225de88[2] = {(void *)_ZN13SpNpcNookShop10setupAct0AEv, 0};

extern "C" void *data_ov050_0225df28[2] = {(void *)_ZN13SpNpcNookShop10setupAct04Ev, 0};

extern "C" void *data_ov050_0225ddf8[2] = {(void *)_ZN13SpNpcNookShop9mainAct07Ev, 0};

extern "C" void *data_ov050_0225de58[2] = {(void *)_ZN13SpNpcNookShop10setupAct00Ev, 0};

extern "C" void *data_ov050_0225deb8[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice0Ei, 0};

extern "C" void *data_ov050_0225de50[2] = {(void *)_ZN13SpNpcNookShop10setupAct07Ev, 0};

extern "C" void *data_ov050_0225dfd0[2] = {(void *)_ZN13SpNpcNookShop9mainAct02Ev, 0};

extern "C" void *data_ov050_0225e120[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225dec8[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225dfe0[2] = {(void *)_ZN17SpNpcNookShopTalk12arbeitFinishEPv, 0};

extern "C" void *data_ov050_0225dea8[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice2Ei, 0};

extern "C" void *data_ov050_0225dfd8[2] = {(void *)_ZN17SpNpcNookShopTalk20arbeitPushPlayerBackEPv, 0};

extern "C" void *data_ov050_0225ded8[2] = {(void *)_ZN17SpNpcNookShopTalk16onDeliveryChoiceEi, 0};

extern "C" void *data_ov050_0225de30[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225dec0[2] = {(void *)_ZN17SpNpcNookShopTalk17onCannotBuyChoiceEi, 0};

extern "C" char sSpNpcNookShopDramaKey[] = "sp_npc_drama2";

extern "C" const u8 sSpNpcNookShopRoofColorChoices[16] = {0x02, 0x0b, 0x05, 0x07, 0x03, 0x04, 0x0a, 0x0d, 0x06, 0x0e, 0x09, 0x0f, 0x00, 0x01, 0x08, 0x0c};

extern "C" char *sSpNpcNookShopTexturePaths[5] = {data_ov050_0225e2d0, data_ov050_0225e2ec, data_ov050_0225e308, data_ov050_0225e324, data_ov050_0225e340};

extern "C" char *sSpNpcNookShopModelPaths[5] = {data_ov050_0225e210, data_ov050_0225e228, data_ov050_0225e240, data_ov050_0225e258, data_ov050_0225e270};

// ---------------------------------------------------------------------------------------------------------------------
// Menu class

void SpNpcNookShopTalk::setPendingMenuHandler(s32 idx) {
    static Fn tbl[3] = {
        *(SpNpcNookShopTalk::Fn *)data_ov050_0225e0b8,
        *(SpNpcNookShopTalk::Fn *)data_ov050_0225e0b0,
        *(SpNpcNookShopTalk::Fn *)data_ov050_0225e0a8,
    };
    pendingMenuHandler = tbl[idx];
}

void SpNpcNookShopTalk::handleSellMenu() {
    void *owner = unk_3c;
    struct {
        u8 cmd;
        u16 item;
        u16 pick;
    } l;
    l.cmd = 8;
    price = 0;
    soldCount = 0;
    if (MenuCtrl_IsResultOk()) {
        u16 *list = MenuCtrl_GetChosenItems();
        BOOL b1 = FALSE;
        BOOL b2 = FALSE;
        BOOL b3 = FALSE;
        l.item = 0xfff1;
        s32 i = b1;
        s32 neg = ~i;
        BOOL za = i;
        BOOL zb = i;
        goto test0;
    loop0:
        {
            u32 cur = list[i];
            if (cur == 0xfff1) goto done0;
            l.item = cur;
            BOOL r = za;
            u32 v = *(volatile u16 *)&l.item;
            if (l.item >= 0x136a && v <= 0x136a) r = TRUE;
            if (r || (v >= 0x1373 && v <= 0x1373) || (v >= 0x1375 && v <= 0x1375) || (v >= 0x1377 && v <= 0x1377) ||
                (v >= 0x1379 && v <= 0x1379) || (v >= 0x137b && v <= 0x137b)) {
                b1 = TRUE;
            }
            if (v >= 0x38e4 && v <= 0x3933) {
                b3 = TRUE;
                s32 idx;
                if (v >= 0x38e4 && v <= 0x3933) {
                    idx = (s32)(v - 0x38e4) >> 2;
                } else {
                    idx = neg;
                }
                l.pick = ((u32)idx < 0x14) ? 0x3934 + idx * 4 : 0x3934;
                price += Item_GetPrice(&l.pick) / 4;
            } else if (PlayerData_GetCurrent()) {
                BOOL r2 = zb;
                u32 w = *(volatile u16 *)&l.item;
                if (l.item >= 0x1531 && w <= 0x153a) r2 = TRUE;
                if (r2) {
                    if (!Clock_GetWeekday()) {
                        b2 = TRUE;
                    } else {
                        s32 m = TurnipMarket_getPrice(data_021ed29c);
                        price += m * Item_GetPrice(&l.item);
                    }
                } else {
                    price += Item_GetPrice(&l.item) / 4;
                }
            }
        }
        i++;
    test0:
        if (i < 15) goto loop0;
    done0:;
        if (b2 == TRUE) {
            l.cmd = 0xd;
        } else if (b1 == TRUE) {
            ActorTalkRequest_setNumberSlot(this, price, 0, 0xa, 1, 0);
            l.cmd = 0x11;
        } else if (b3 == TRUE) {
            l.cmd = 0x40;
            ActorTalkRequest_setNumberSlot(this, price, 0, 0xa, 1, 0);
        } else if (price == 0) {
            l.cmd = 0xa;
        } else {
            l.cmd = 0xe;
            ActorTalkRequest_setNumberSlot(this, price, 0, 0xa, 1, 0);
        }
    } else {
        l.cmd = 8;
    }
    if (ownerNpc->isNook()) {
        TalkWindowState_setNextMessage(owner, &l.cmd, sSpNpcNookShopKey);
    } else {
        TalkWindowState_setNextMessage(owner, &l.cmd, sSpNpcNookShopTwinsKey);
    }
}

void SpNpcNookShopTalk::handleCatalogMenu() {
    void *o = unk_3c;
    Unk_ov050_0225c0a0_Msg m;
    m.msgIndex = 0x1b;
    if (MenuCtrl_IsResultOk() == 1) {
        ownerNpc->selectedItem = MenuCtrl_GetCatalogItem();
        u16 *p = &ownerNpc->selectedItem;
        if (!Unk_ov050_0225bd54_Same(p, &m.item, 0xfff1)) {
            price = (s32)Item_GetMemberPrice(&ownerNpc->selectedItem);
            if (price) {
                ActorTalkRequest_setNumberSlot(this, price, 0, 10, 1, 0);
                ActorTalkRequest_setItemNameSlot(this, &ownerNpc->selectedItem, 1, 7);
                m.msgIndex = 0x1a;
            }
        }
    }
    if (ownerNpc->isNook()) {
        TalkWindowState_setNextMessage(o, &m, sSpNpcNookShopKey);
    } else {
        TalkWindowState_setNextMessage(o, &m, sSpNpcNookShopTwinsKey);
    }
}

extern "C" BOOL SpNpcNookShop_IsDeliveryParcel(u16 *p, s32 m) {
    if (m == 2) {
        BOOL r = FALSE;
        if (*p >= 0x155f && *p <= 0x1560) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcNookShopTalk::handleDeliveryMenu() {
    void *o = unk_3c;
    Unk_ov050_0225c0a0_Msg m;
    m.msgIndex = 4;
    if (MenuCtrl_IsResultOk()) {
        void *r7 = PlayerData_GetCurrent();
        if (Talk_IsInOwnTown()) {
            s32 r6 = MenuCtrl_GetIndex();
            m.item = Pocket_GetItem(r6);
            if (r6 >= 0) {
                Pocket_RemoveItem(r6);
            }
            if (!Unk_ov050_0225bd54_Same(&m.item, &m.unk_04, 0xfff1)) {
                Unk_02014420_requestTakeItem(this, &m.item, 2, 5, 0);
            }
            m.msgIndex = 3;
            ErrandRecord_setStep(ParcelErrand_GetRecord(SickVillagerRecord_getParcelErrand(PlayerData_getErrands(r7))), 1);
        }
    }
    if (ownerNpc->isNook()) {
        TalkWindowState_setNextMessage(o, &m, sSpNpcNookShopKey);
    } else {
        TalkWindowState_setNextMessage(o, &m, sSpNpcNookShopTwinsKey);
    }
}

SpNpcNookShopTalk::SpNpcNookShopTalk() {}

SpNpcNookShopTalk::~SpNpcNookShopTalk() {}

void SpNpcNookShopTalk::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    pendingMenuHandler = *(Fn *)data_0213a740;
}

void SpNpcNookShopTalk::attachOwner(Unk_ov050_0225b908_Owner *owner) {
    vfunc_08();
    ownerNpc = (SpNpcNookShop *)owner;
    safeSlot = -1;
}

void SpNpcNookShopTalk::setTopic(s32 v) {
    topic = v;
}

s32 SpNpcNookShopTalk::getTopic() {
    return topic;
}

extern "C" s32 SpNpcNookShop_GetHouseUpgradeMsg(void *self) {
    u8 *g = gSaveData;
    u8 *const m = gSaveHouse;
    s32 r5 = HouseData_getDebt(m);
    s32 r4 = HouseData_getLevel(m);
    s32 r6 = HouseData_isUpgradePaidOff(m);
    if (SaveData_testFlag(g, 0xe)) {
        return 0;
    }
    if (r5 == 0 && r4 == 0 && !HouseData_isUpgradePending(g + 0xe558)) {
        return 0x41;
    }
    if (r4 == 1 && r6 != 0) {
        SaveData_clearFlag(gSaveData, 0xd);
        return 0x49;
    }
    if (r5 == 0 && r4 == 1 && !HouseData_isUpgradePending(g + 0xe558)) {
        return 0x4a;
    }
    if (r4 == 2 && r6 != 0) {
        SaveData_clearFlag(gSaveData, 0xd);
        return 0x4b;
    }
    if (r5 == 0 && r4 == 2 && !HouseData_isUpgradePending(g + 0xe558)) {
        return 0x4c;
    }
    if (r4 == 3 && r6 != 0) {
        SaveData_clearFlag(gSaveData, 0xd);
        return 0x4d;
    }
    if (r5 == 0 && r4 == 3 && !HouseData_isUpgradePending(g + 0xe558)) {
        return 0x4e;
    }
    if (r4 == 4 && r6 != 0) {
        SaveData_clearFlag(gSaveData, 0xd);
        return 0x4f;
    }
    if (r5 == 0 && r4 == 4 && !HouseData_isUpgradePending(g + 0xe558)) {
        return 0x50;
    }
    if (r4 == 5 && r6 != 0) {
        SaveData_clearFlag(gSaveData, 0xd);
        return 0x51;
    }
    if (r5 == 0 && r4 == 5 && !HouseData_isUpgradePending(g + 0xe558)) {
        return 0x52;
    }
    if (r4 == 6 && r6 != 0) {
        SaveData_clearFlag(gSaveData, 0xd);
        return 0x53;
    }
    if (r5 == 0 && r4 == 6 && !HouseData_isUpgradePending(g + 0xe558)) {
        SaveData_setFlag(gSaveData, 0xe);
        return 0x54;
    }
    return 0;
}

extern "C" BOOL SpNpcNookShop_IsEmptyItem(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcNookShopTalk::givePlantingItems() {
    u16 l[6];
    l[0] = 0x14fe + Random_GlobalBelow(3);
    Pocket_AddItem(&l[0], 0);
    l[1] = 0x1504 + Random_GlobalBelow(3);
    Pocket_AddItem(&l[1], 0);
    l[2] = 0x150a + Random_GlobalBelow(3);
    Pocket_AddItem(&l[2], 0);
    l[3] = 0x1510 + Random_GlobalBelow(3);
    Pocket_AddItem(&l[3], 0);
    s32 i;
    for (i = 0; i < 3; i++) {
        l[4] = 0x151d;
        Pocket_AddItem(&l[4], 0);
    }
    l[5] = 0x151d;
    Unk_020d7710_requestGiveItem(this, &l[5], 0, 5, 0);
}

BOOL SpNpcNookShopTalk::checkNotInUniform(Unk_ov050_0225b908_Out *out) {
    void *r4 = PlayerData_GetCurrent();
    if (Arbeit_IsOnDuty(PlayerData_getErrands(r4)) && r4) {
        u16 *p = PlayerData_getShirt(r4);
        u16 t;
        if (!Unk_ov050_0225bd54_Same(p, &t, 0x11a8)) {
            out->msgIndex = 0xe;
            return TRUE;
        }
    }
    return FALSE;
}

void SpNpcNookShopTalk::pickArbeitStartMsg0B(Unk_ov050_0225b908_Out *out) {
    void *g = PlayerData_GetCurrent();
    void *s0 = PlayerData_getErrands(g);
    u8 *a = (u8 *)PlayerErrands_GetSlot(s0, 0);
    void *r4 = PlayerErrandSlot_GetRecord(a);
    Pocket_FindEmpty(r4);
    u16 l[4];
    Unk_ov050_0225bc18_Buf r;
    if (ErrandRecord_getKind(r4) == 0xb && (u32)ErrandRecord_getStep(r4) >= 1 && PlayerErrandSlot_IsStepDone(a)) {
        if (!checkNotInUniform(out)) {
            Pocket_CountMatching(&r, (void *)SpNpcNookShop_IsEmptyItem);
            if (r.b >= 7) {
                out->msgIndex = 8;
            } else {
                out->msgIndex = 9;
            }
        }
    } else if (ErrandRecord_getKind(r4) == 0xb && (u32)ErrandRecord_getStep(r4) >= 1) {
        u16 *p = PlayerData_getShirt(g);
        if (Unk_ov050_0225bd54_Same(p, &l[3], 0x11a8)) {
            out->msgIndex = 7;
        } else {
            l[0] = 0x11a8;
            BOOL n = Pocket_FindItem(&l[0]) < 0 ? TRUE : FALSE;
            if (n) {
                l[1] = 0x11a8;
                if (Pocket_AddItem(&l[1], 0)) {
                    out->msgIndex = 4;
                } else {
                    out->msgIndex = 2;
                }
            } else {
                out->msgIndex = 5;
            }
        }
    } else {
        l[2] = 0x11a8;
        if (Pocket_AddItem(&l[2], 0)) {
            Arbeit_Start(s0);
            out->msgIndex = 3;
        } else {
            out->msgIndex = 1;
        }
    }
}

void SpNpcNookShopTalk::pickArbeitStartMsg0C(Unk_ov050_0225b908_Out *out) {
    void *g = PlayerData_GetCurrent();
    void *p = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(PlayerData_getErrands(g), 0));
    Pocket_FindEmpty(p);
    if (!checkNotInUniform(out)) {
        BOOL k0 = FALSE, k1 = FALSE, k2 = FALSE, k3 = FALSE, k4 = FALSE;
        u16 l[5];
        s32 i;
        for (i = 0; i < 3; i++) {
            l[0] = 0x151d;
            if (Pocket_FindItem(&l[0]) >= 0 ? TRUE : k0) goto found;
            l[1] = 0x14fe + i;
            if (Pocket_FindItem(&l[1]) >= 0 ? TRUE : k1) goto found;
            l[2] = 0x1504 + i;
            if (Pocket_FindItem(&l[2]) >= 0 ? TRUE : k2) goto found;
            l[3] = 0x150a + i;
            if (Pocket_FindItem(&l[3]) >= 0 ? TRUE : k3) goto found;
            l[4] = 0x1510 + i;
            if (Pocket_FindItem(&l[4]) >= 0 ? TRUE : k4) {
            found:
                out->msgIndex = ownerNpc->arbeitPrompted + 0xf;
                ownerNpc->arbeitPrompted = 1;
                return;
            }
        }
        ownerNpc->arbeitPrompted = 1;
        if (Unk_02097ff4_testFlag(g, 10) && SaveVillagers_AllKnowPlayer(gSaveVillagers, PlayerData_getPlayerId(g)) &&
            *Unk_02097ff4_getBirthday(PlayerData_GetCurrent()) != 0) {
            ErrandRecord_setStep(p, 1);
            out->msgIndex = 0x1a;
        } else {
            out->msgIndex = 0x11;
        }
    }
}

void SpNpcNookShopTalk::pickArbeitStartMsg0D(Unk_ov050_0225b908_Out *out) {
    void *g = PlayerData_GetCurrent();
    Pocket_FindEmpty(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(PlayerData_getErrands(g), 0)));
    if (!checkNotInUniform(out)) {
        if (!(Unk_02097ff4_testFlag(g, 10) && SaveVillagers_AllKnowPlayer(gSaveVillagers, PlayerData_getPlayerId(g)))) {
            if (ownerNpc->arbeitPrompted != 0) {
                out->msgIndex = 0x13;
            } else {
                out->msgIndex = 0x14;
            }
        } else {
            if (*Unk_02097ff4_getBirthday(PlayerData_GetCurrent()) == 0) {
                out->msgIndex = 0x15;
            } else {
                out->msgIndex = 0x16;
            }
        }
    }
}

void SpNpcNookShopTalk::pickArbeitStartMsg0E(Unk_ov050_0225b908_Out *out) {
    if (!checkNotInUniform(out)) {
        if (ErrandRecord_getStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(PlayerData_getErrands(PlayerData_GetCurrent()), 0))) == 1) {
            out->msgIndex = 0x1e;
        } else if (ownerNpc->arbeitPrompted == 0) {
            out->msgIndex = 0x1c;
            ownerNpc->arbeitPrompted = 1;
        } else {
            out->msgIndex = 0x10;
        }
    }
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcNookShopTalk::pickArbeitStartMsg0F(Unk_ov050_0225b908_Out *out) {
    if (!checkNotInUniform(out)) {
        void *g = PlayerData_GetCurrent();
        u8 *a = (u8 *)PlayerErrands_GetSlot(PlayerData_getErrands(g), 0);
        void *b = PlayerErrandSlot_GetRecord(a);
        u8 *c = (u8 *)PlayerErrandSlot_GetVillager(a, 1);
        MsgString9B o;
        if (ErrandRecord_getStep(b) == 2) {
            out->msgIndex = 0x28;
            return;
        }
        if (ErrandRecord_getStep(b) == 0) {
            u8 s = ownerNpc->arbeitPrompted;
            if (s == 0 || s == 2) {
                if (c) {
                    VillagerId_getName(c, &o);
                    TalkWindowState_setSlot(unk_3c, 0, &o);
                }
                out->msgIndex = 0x21;
                if (ownerNpc->arbeitPrompted == 2) {
                    ownerNpc->arbeitPrompted = 1;
                }
            } else {
                out->msgIndex = 0x10;
            }
            return;
        }
        if (ErrandRecord_getStep(b) == 1) {
            if (c) {
                VillagerId_getName(c, &o);
                TalkWindowState_setSlot(unk_3c, 0, &o);
            }
            out->msgIndex = 0x27;
            return;
        }
    }
}

void SpNpcNookShopTalk::pickArbeitStartMsg10(Unk_ov050_0225b7f4_Out *out) {
    if (func_ov050_0225bd54_self(this) == 0) {
        void *h = PlayerData_getErrands(PlayerData_GetCurrent());
        if (ErrandRecord_getStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0))) == 1) {
            out->msgIndex = 0x2c;
        } else if (ownerNpc->arbeitPrompted == 0) {
            out->msgIndex = 0x2b;
            ownerNpc->arbeitPrompted = 1;
        } else {
            out->msgIndex = 0x10;
        }
    }
}

void SpNpcNookShopTalk::pickArbeitStartMsg11(Unk_ov050_0225b7f4_Out *out) {
    if (func_ov050_0225bd54_self(this) == 0) {
        void *h = PlayerData_getErrands(PlayerData_GetCurrent());
        if (ErrandRecord_getStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0))) == 1) {
            out->msgIndex = 0x31;
        } else if (ownerNpc->arbeitPrompted == 0) {
            out->msgIndex = 0x2b;
            ownerNpc->arbeitPrompted = 1;
        } else {
            out->msgIndex = 0x10;
        }
    }
}

void SpNpcNookShopTalk::pickArbeitStartMsg12(Unk_ov050_0225b7f4_Out *out) {
    if (func_ov050_0225bd54_self(this) == 0) {
        void *h = PlayerData_getErrands(PlayerData_GetCurrent());
        if (ErrandRecord_getStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0))) == 1) {
            out->msgIndex = 0x33;
        } else if (ownerNpc->arbeitPrompted == 0) {
            out->msgIndex = 0x32;
            ownerNpc->arbeitPrompted = 1;
        } else {
            out->msgIndex = 0x10;
        }
    }
}

BOOL SpNpcNookShop::canPlayTalkMelody() {
    if (isTimmy()) {
        return FALSE;
    }
    if (Unk_ov050_0225b7b4_IsOne(gFieldSceneKind) == 0 || nookTalkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcNookShop::onTalkMelodyPlayed() {
    nookTalkMelodyPlayed = 1;
}
extern "C" void *data_ov050_0225dde0[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice0Ei, 0};

extern "C" void *data_ov050_0225e130[2] = {(void *)_ZN13SpNpcNookShop9mainAct12Ev, 0};

extern "C" void *data_ov050_0225dfc0[2] = {(void *)_ZN17SpNpcNookShopTalk19onSellConfirmChoiceEi, 0};

extern "C" void *data_ov050_0225dea0[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice1Ei, 0};

extern "C" void *data_ov050_0225e140[2] = {(void *)_ZN13SpNpcNookShop9mainAct11Ev, 0};

extern "C" void *data_ov050_0225de00[2] = {(void *)_ZN13SpNpcNookShop9mainAct01Ev, 0};

extern "C" void *data_ov050_0225de20[2] = {(void *)_ZN17SpNpcNookShopTalk19onSellConfirmChoiceEi, 0};

extern "C" void *data_ov050_0225de28[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225dfb8[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225dde8[2] = {(void *)_ZN13SpNpcNookShop10setupAct0BEv, 0};

extern "C" void *data_ov050_0225e040[2] = {(void *)_ZN17SpNpcNookShopTalk21arbeitStartLetterTaskEPv, 0};

extern "C" void *data_ov050_0225ddf0[2] = {(void *)_ZN13SpNpcNookShop9mainAct0BEv, 0};

extern "C" void *data_ov050_0225e190[2] = {(void *)_ZN13SpNpcNookShop9mainAct0CEv, 0};

extern "C" void *data_ov050_0225e188[2] = {(void *)_ZN13SpNpcNookShop10setupAct0DEv, 0};

extern "C" void *data_ov050_0225e180[2] = {(void *)_ZN13SpNpcNookShop9mainAct0DEv, 0};

extern "C" void *data_ov050_0225e178[2] = {(void *)_ZN13SpNpcNookShop9mainAct09Ev, 0};

extern "C" void *data_ov050_0225e170[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice0Ei, 0};

extern "C" void *data_ov050_0225e168[2] = {(void *)_ZN13SpNpcNookShop10setupAct0FEv, 0};

extern "C" void *data_ov050_0225e160[2] = {(void *)_ZN13SpNpcNookShop9mainAct0FEv, 0};

extern "C" void *data_ov050_0225e158[2] = {(void *)_ZN13SpNpcNookShop10setupAct10Ev, 0};

extern "C" void *data_ov050_0225e150[2] = {(void *)_ZN13SpNpcNookShop9mainAct10Ev, 0};

extern "C" char sSpNpcNookShopKey[] = "sp_npc_raccoon";

extern "C" const Unk_ov050_MsgRow sSpNpcNookShopTopicTable[31] = {
    {sSpNpcNookShopKey, 0x00}, {sSpNpcNookShopKey, 0x01}, {sSpNpcNookShopKey, 0x32}, {sSpNpcNookShopKey, 0x33},
    {sSpNpcNookShopKey, 0x34}, {sSpNpcNookShopKey, 0x06}, {sSpNpcNookShopKey, 0x57}, {sSpNpcNookShopKey, 0x02},
    {sSpNpcNookShopKey, 0x31}, {sSpNpcNookShopKey, 0x1e}, {sSpNpcNookShopKey, 0x2a}, {sSpNpcNookShopKey, 0x2b},
    {sSpNpcNookShopKey, 0x2d}, {sSpNpcNookShopKey, 0x2e}, {sSpNpcNookShopKey, 0x35}, {sSpNpcNookShopDramaKey, 0x00},
    {sSpNpcNookShopKey, 0x05}, {sSpNpcNookShopTwinsKey, 0x00}, {sSpNpcNookShopTwinsKey, 0x01}, {sSpNpcNookShopTwinsKey, 0x06},
    {sSpNpcNookShopTwinsKey, 0x31}, {sSpNpcNookShopTwinsKey, 0x1e}, {sSpNpcNookShopTwinsKey, 0x2a}, {sSpNpcNookShopTwinsKey, 0x2b},
    {sSpNpcNookShopTwinsKey, 0x2d}, {sSpNpcNookShopTwinsKey, 0x2e}, {sSpNpcNookShopTwinsKey, 0x32}, {sSpNpcNookShopTwinsKey, 0x33},
    {sSpNpcNookShopTwinsKey, 0x34}, {sSpNpcNookShopTwinsKey, 0x57}, {sSpNpcNookShopSequence5_1Key, 0x0c},
};

void SpNpcNookShopTalk::onArbeitMessageEnd() {
    void *h = PlayerData_getErrands(PlayerData_GetCurrent());
    PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0));
    nextMsg = 0xff;
    static Unk_ov050_0225b5a8_Row tbl[24] = {
        {0x00, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e090},
        {0x03, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e088},
        {0x04, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e080},
        {0x07, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e078},
        {0x08, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225def0},
        {0x0e, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e068},
        {0x12, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e060},
        {0x16, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e058},
        {0x1a, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e050},
        {0x18, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e048},
        {0x1e, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e040},
        {0x1f, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e038},
        {0x21, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e030},
        {0x25, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e028},
        {0x27, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e020},
        {0x28, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e018},
        {0x29, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225e010},
        {0x2c, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225de38},
        {0x2e, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225dfb0},
        {0x31, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225dff8},
        {0x33, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225deb0},
        {0x35, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225dfe8},
        {0x36, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225dfe0},
        {0x0c, *(SpNpcNookShopTalk::PtrFn *)data_ov050_0225dfd8},
    };
    s32 i = 0;
    u8 *p = &msgIndex;
    Unk_ov050_0225b5a8_Row *t = tbl;
    for (; (u32)i < 0x18; i++) {
        u32 a = tbl[i].id;
        u32 b = *p;
        if (a == b) {
            (this->*t[i].f)(h);
        }
    }
    if (nextMsg != 0xff) {
        u8 v = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, &v, sSpNpcNookShopSequence5_1Key);
    }
}

void SpNpcNookShopTalk::arbeitGiveUniform(void *h) {
    u16 v = 0x11a8;
    if (Pocket_AddItem(&v, 0)) {
        Arbeit_Start(h);
        nextMsg = 3;
    } else {
        nextMsg = 1;
    }
}

void SpNpcNookShopTalk::arbeitPresentUniform(void *h) {
    u16 v = 0x11a8;
    Unk_020d7710_requestGiveItem(this, &v, 0, 5, 0);
    nextMsg = 6;
    void *r = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0));
    if (ErrandRecord_isActive(r) && ErrandRecord_getKind(r) == 0xb) {
        ErrandRecord_setStep(r, 1);
    }
}

void SpNpcNookShopTalk::arbeitCheckPocketSpace(void *h) {
    u8 b[4];
    Pocket_CountMatching(b, (void *)SpNpcNookShop_IsEmptyItem);
    if (b[2] >= 7) {
        nextMsg = 8;
    } else {
        nextMsg = 9;
    }
    void *r = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0));
    Arbeit_SetOnDuty(h);
    ErrandRecord_setStep(r, 2);
}

void SpNpcNookShopTalk::arbeitGivePlants(void *h) {
    givePlantingItems();
    Arbeit_StartPlanting(h);
    ownerNpc->arbeitPrompted = 0;
    nextMsg = 10;
}

void SpNpcNookShopTalk::onArbeitMsgEnd0E(void *h) {
    Arbeit_ClearOnDuty(h);
}

void SpNpcNookShopTalk::onArbeitMsgEnd12(void *h) {
    PlayerData_GetCurrent();
    Arbeit_StartGreetings(h);
}

void SpNpcNookShopTalk::arbeitStartFurnitureDelivery(void *h) {
    u16 v;
    u32 buf[7];
    void *r = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0));
    if (ErrandRecord_isActive(r) && ErrandRecord_getKind(r) == 0xd) {
        ErrandRecord_setStep(r, 1);
    }
    if (Pocket_FindEmpty() >= 0) {
        func_02094030(buf);
        Arbeit_StartFurnitureDelivery(h);
        v = 0x1563;
        PlayerErrands_GetDeliveryRecipientName(h, buf, &v);
        TalkWindowState_setSlot(unk_3c, 1, buf);
        ownerNpc->arbeitPrompted = 0;
        nextMsg = 0x18;
        func_02094018(buf);
    } else {
        nextMsg = 0x17;
    }
}

void SpNpcNookShopTalk::arbeitGiveDeliveryParcel(void *h) {
    u16 v[2];
    v[0] = 0x1563;
    if (Pocket_AddItem(&v[0], 2)) {
        v[1] = 0x1563;
        Unk_020d7710_requestGiveItem(this, &v[1], 2, 5, 0);
    }
}

void SpNpcNookShopTalk::arbeitStartLetterTask(void *h) {
    u32 buf[8];
    void *r = PlayerErrands_GetSlot(h, 0);
    ErrandRecord_setStep(PlayerErrandSlot_GetRecord(r), 1);
    if (Pocket_FindEmpty() >= 0) {
        Arbeit_StartLetterTask(h);
        r = PlayerErrandSlot_GetVillager(r, 1);
        if (r) {
            func_02094030(buf);
            VillagerId_getName(r, buf);
            TalkWindowState_setSlot(unk_3c, 0, buf);
            func_02094018(buf);
        }
        ownerNpc->arbeitPrompted = 0;
        nextMsg = 0x1f;
    } else {
        nextMsg = 0x17;
    }
}

void SpNpcNookShopTalk::arbeitGiveStationery(void *h) {
    u16 v[2];
    v[0] = 0x1020;
    if (Pocket_AddItem(&v[0], 0)) {
        v[1] = 0x1020;
        Unk_020d7710_requestGiveItem(this, &v[1], 0, 5, 0);
    }
    if (msgIndex == 0x1f) {
        nextMsg = 0x20;
        ownerNpc->arbeitPrompted = 2;
    } else {
        nextMsg = 0x26;
    }
}

void SpNpcNookShopTalk::arbeitOfferStationery(void *h) {
    if (ownerNpc->arbeitPrompted == 0 && Pocket_FindEmpty() != -1) {
        nextMsg = 0x22;
    } else {
        ownerNpc->arbeitPrompted = 1;
        TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
    }
}

void SpNpcNookShopTalk::arbeitGiveNewStationery(void *h) {
    ErrandRecord_setStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0)), 0);
    ownerNpc->arbeitPrompted = 1;
    arbeitGiveStationery(h);
}

void SpNpcNookShopTalk::arbeitRetryLetter(void *h) {
    ErrandRecord_setStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0)), 0);
    if (Pocket_FindEmpty() >= 0) {
        nextMsg = 0x25;
    } else {
        TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
    }
}

void SpNpcNookShopTalk::arbeitStartCarpetDelivery(void *h) {
    u16 v;
    u32 buf[7];
    void *r = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0));
    func_02094030(buf);
    ErrandRecord_setStep(r, 2);
    ownerNpc->arbeitPrompted = 0;
    if (Pocket_FindEmpty() >= 0) {
        Arbeit_StartCarpetDelivery(h);
        v = 0x1561;
        PlayerErrands_GetDeliveryRecipientName(h, buf, &v);
        TalkWindowState_setSlot(unk_3c, 1, buf);
        nextMsg = 0x29;
    } else {
        nextMsg = 0x17;
    }
    func_02094018(buf);
}

void SpNpcNookShopTalk::arbeitGiveCarpet(void *h) {
    u16 v[2];
    v[0] = 0x1561;
    if (Pocket_AddItem(&v[0], 2)) {
        v[1] = 0x1561;
        Unk_020d7710_requestGiveItem(this, &v[1], 0, 5, 0);
    }
}

void SpNpcNookShopTalk::arbeitStartWateringCanDelivery(void *h) {
    u16 v[2];
    u32 buf[7];
    v[0] = 0x1564;
    if (Pocket_AddItem(&v[0], 2)) {
        func_02094030(buf);
        Arbeit_StartWateringCanDelivery(h);
        v[1] = 0x1564;
        PlayerErrands_GetDeliveryRecipientName(h, buf, &v[1]);
        TalkWindowState_setSlot(unk_3c, 1, buf);
        nextMsg = 0x2e;
        func_02094018(buf);
    } else {
        nextMsg = 0x17;
    }
}

void SpNpcNookShopTalk::arbeitPresentWateringCan(void *h) {
    u16 v = 0x1564;
    Unk_020d7710_requestGiveItem(this, &v, 2, 5, 0);
    ownerNpc->arbeitPrompted = 0;
}

void SpNpcNookShopTalk::onArbeitMsgEnd31(void *h) {
    ErrandRecord_setStep(PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(h, 0)), 2);
    Arbeit_StartBbsTask(h);
    ownerNpc->arbeitPrompted = 0;
}

void SpNpcNookShopTalk::arbeitReduceLoan(void *h) {
    u8 *const a = gSaveData;
    u8 *const g = gSaveHouse;
    if (HouseData_getDebt(g) < 0x579) {
        nextMsg = 0x36;
    } else {
        s32 t = HouseData_getDebt(g);
        HouseData_setDebt(g, t - 0x578);
        s32 s = HouseData_getDebt(a + 0xe558);
        ActorTalkRequest_setNumberSlot(this, s, 2, 10, 1, 0);
        nextMsg = 0x34;
    }
}

void SpNpcNookShopTalk::arbeitFinish(void *h) {
    Arbeit_Finish(h);
    void *o = PlayerData_GetCurrent();
    Unk_02097ff4_clearFlag(o, 1);
    o = PlayerData_getSpNpcRecord(o);
    TownSessionState_SetFlag(TownSessionState_Get(), 5);
    PlayerSpNpcRecord_stampArbeitDate(o);
}

// ---------------------------------------------------------------------------------------------------------------------

void SpNpcNookShopTalk::arbeitPushPlayerBack(void *h) {
    ownerNpc->changeAct(0x11);
}

void SpNpcNookShopTalk::start(Unk_ov050_0225a888_Out *out) {
    s32 flag;
    void *x;
    Unk_ov050_0225a888_Buf l;
    u16 w0, w4, w6, w8, wa, t0, t1, t2, t3;
    Unk_ov050_0225a888_Bytes s, v, o1, o2, c;
    void *h = PlayerData_GetCurrent();
    void *r7 = SickVillagerRecord_getParcelErrand(PlayerData_getErrands(h));
    x = PlayerData_getErrands(h);
    if (Unk_02097ff4_testFlag(h, 1)) {
        PlayerErrands_GetSlot(x, 0);
        void *ev = PlayerErrandSlot_GetRecord();
        u32 t = ownerNpc->profile;
        if (Unk_ov050_0225a888_Eq(t, 0x75) || Unk_ov050_0225a888_Eq(t, 0x74)) {
            out->msgKey = sSpNpcNookShopTwinsKey;
            out->msgIndex = 3;
            return;
        }
        out->msgKey = sSpNpcNookShopSequence5_1Key;
        u16 *p = &ownerNpc->selectedItem;
        if (!Unk_ov050_0225a888_Same(p, &t0)) {
            ownerNpc->selectedItem = 0xfff1;
            out->msgIndex = 0xb;
            return;
        }
        if (topic == 0x1e) {
            out->msgIndex = 0xc;
            topic = 5;
            return;
        }
        out->msgIndex = 0;
        if (!ErrandRecord_isActive(ev)) {
            return;
        }
        if (ErrandRecord_getKind(ev) == 0x12) {
            pickArbeitStartMsg12((Unk_ov050_0225b7f4_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0x11) {
            pickArbeitStartMsg11((Unk_ov050_0225b7f4_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0x10) {
            pickArbeitStartMsg10((Unk_ov050_0225b7f4_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0xf) {
            pickArbeitStartMsg0F((Unk_ov050_0225b908_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0xe) {
            pickArbeitStartMsg0E((Unk_ov050_0225b908_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0xd) {
            pickArbeitStartMsg0D((Unk_ov050_0225b908_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0xc) {
            pickArbeitStartMsg0C((Unk_ov050_0225b908_Out *)out);
        }
        if (ErrandRecord_getKind(ev) == 0xb) {
            pickArbeitStartMsg0B((Unk_ov050_0225b908_Out *)out);
        }
        return;
    }
    if (ownerNpc->isNook() && topic == 5 && !CommManager_isOnline(gCommManager) && *DebugVar_GetPtr(0, 0x4a) == 0) {
        if (safeSlot == -1) {
            w0 = 0x36fc;
            safeSlot = Pocket_FindItem(&w0);
        }
        if (safeSlot >= 0) {
            topic = 0xe;
        } else {
            w4 = 0xd019;
            if (ParcelErrand_IsFor(r7, &w4) || (w6 = 0xd01a, ParcelErrand_IsFor(r7, &w6)) || (w8 = 0xd01b, ParcelErrand_IsFor(r7, &w8)) ||
                (wa = 0xd01c, ParcelErrand_IsFor(r7, &wa))) {
                topic = 0x10;
            } else if (Talk_IsDramaPending(ownerNpc, &l, 3)) {
                out->msgKey = sSpNpcNookShopDramaKey;
                out->msgIndex = (sSpNpcNookShopDramaMsgTable + l.b * 6)[l.c];
                setTopic(0xf);
                return;
            }
        }
    }
    if (topic == 0 || topic == 0x11) {
        flag = 0;
        if (topic == 0) {
            out->msgKey = sSpNpcNookShopKey;
            if (Unk_02097ff4_testFlag(h, 0x26) == 0) {
                v = *(Unk_ov050_0225a888_Bytes *)NookShop_GetRenovation(data_021ed104);
                Clock_GetDate(&o1);
                out->msgIndex = 0;
                if (v.b[3] == 0) {
                    s32 r = Date_DaysBetween(&o1, &v);
                    if (ownerNpc->param == 0xd01a && Unk_02097ff4_testFlag(h, 0x24) == 0 && r == 0) {
                        out->msgIndex = NookShop_GetLevel(data_021ed104) + 0x59;
                    }
                    if (ownerNpc->param == 0xd01b && NookShop_GetLevel(data_021ed104) == 2 && Unk_02097ff4_testFlag(h, 0x25) == 0 && r == 0) {
                        out->msgIndex = NookShop_GetLevel(data_021ed104) + 0x59;
                    }
                    if (ownerNpc->param == 0xd01c && NookShop_GetLevel(data_021ed104) == 3 && Unk_02097ff4_testFlag(h, 0x26) == 0 && r == 0) {
                        out->msgIndex = NookShop_GetLevel(data_021ed104) + 0x59;
                    }
                    switch (NookShop_GetLevel(data_021ed104)) {
                    case 3:
                        Unk_02097ff4_setFlag(h, 0x26);
                    case 2:
                        Unk_02097ff4_setFlag(h, 0x25);
                    case 1:
                        Unk_02097ff4_setFlag(h, 0x24);
                    }
                    if (out->msgIndex != 0) {
                        return;
                    }
                }
            }
            if (Unk_02097ff4_testFlag(h, 3) == 0) {
                u8 *q = PlayerSpNpcRecord_getArbeitDate(PlayerData_getSpNpcRecord(h));
                if (q[2] != 0 || q[1] != 0) {
                    Clock_GetDate(&o2);
                    if (Date_DaysBetween(&o2, q)) {
                        out->msgIndex = 0x3b;
                        Unk_02097ff4_setFlag(h, 3);
                        return;
                    }
                }
            }
            if (SaveData_testFlag(gSaveData, 0x10) == 0) {
                out->msgIndex = SpNpcNookShop_GetHouseUpgradeMsg(this);
                if (out->msgIndex != 0) {
                    SaveData_setFlag(gSaveData, 0x10);
                    return;
                }
            }
            if (Talk_CheckAndSetPlayerFlag(0, 0) == 0) {
                if (NookShop_IsClosedTomorrow(data_021ed104)) {
                    u32 t = NookShop_GetClosedDate(data_021ed104);
                    s.b[0] = t;
                    t = (u32)(t >> 8);
                    s.b[1] = t;
                    t = (u32)(t >> 8);
                    s.b[2] = t;
                    t = (u32)(t >> 8);
                    s.b[3] = t;
                    c = s;
                    ActorTalkRequest_setMonthSlot(this, c.b[1], 7);
                    ActorTalkRequest_setDaySlot(this, c.b[0], 8);
                    setTopic(7);
                    flag = 1;
                    Talk_CheckAndSetPlayerFlag(0, flag);
                }
            }
        }
        if (flag == 0) {
            if (NookShop_IsPointSpecialToday(data_021ed104)) {
                if (topic == 0) {
                    setTopic(2);
                } else {
                    setTopic(0x1a);
                }
            } else if (NookShop_IsSaleTime(data_021ed104)) {
                if (topic == 0) {
                    setTopic(3);
                } else {
                    setTopic(0x1b);
                }
            } else if (func_020aeac8(data_021ed104)) {
                if (topic == 0) {
                    setTopic(4);
                } else {
                    setTopic(0x1c);
                }
            }
        }
    } else {
        u16 *p = &ownerNpc->selectedItem;
        if (!Unk_ov050_0225a888_Same(p, &t1)) {
            switch (topic) {
            case 0xc:
            case 0xd:
            case 0x18:
            case 0x19: {
                if (!Unk_ov050_0225a888_Same(&ownerNpc->selectedItem, &t2)) {
                    s32 idx;
                    BOOL r = FALSE;
                    if (ownerNpc->selectedItem >= 0x1521 && ownerNpc->selectedItem <= 0x1530) {
                        r = TRUE;
                    }
                    if (r) {
                        idx = ownerNpc->selectedItem - 0x1521;
                    } else {
                        idx = -1;
                    }
                    l.roofColor = idx;
                    TalkWindowState_setSlotFromString(unk_3c, 2, &l.roofColor, (void *)"st_roof_paint");
                }
            }
            case 8:
            case 9:
            case 0xa:
            case 0xb:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
                if (!Unk_ov050_0225a888_Same(&ownerNpc->selectedItem, &t3)) {
                    price = Item_GetShopPrice(&ownerNpc->selectedItem);
                    ActorTalkRequest_setNumberSlot(this, price, 4, 10, 1, 0);
                    ActorTalkRequest_setItemNameSlot(this, &ownerNpc->selectedItem, 1, 7);
                }
                break;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
                break;
            }
        }
    }
    if (topic >= 0 && topic < 0x1f) {
        out->msgIndex = (((u8 (*)[8])((u8 *)sSpNpcNookShopTopicTable + 4))[topic][0]);
        out->msgKey = (char *)sSpNpcNookShopTopicTable[topic].name;
        if (topic == 0x12) {
            void *r = Actor_findByProfile(ownerNpc->getOtherTwinProfile(), 0);
            if (r) {
                ((SpNpcNookShop *)r)->changeAct(0xc);
            }
        }
    }
}
extern "C" void *data_ov050_0225e128[2] = {(void *)_ZN17SpNpcNookShopTalk15ackHouseUpgradeEv, 0};

extern "C" void *data_ov050_0225df60[2] = {(void *)_ZN17SpNpcNookShopTalk21showFirstPurchaseHintEv, 0};

extern "C" void *data_ov050_0225e118[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice0Ei, 0};

extern "C" void *data_ov050_0225e110[2] = {(void *)_ZN17SpNpcNookShopTalk15openCatalogMenuEv, 0};

extern "C" void *data_ov050_0225e108[2] = {(void *)_ZN17SpNpcNookShopTalk11onBuyChoiceEi, 0};

extern "C" void *data_ov050_0225e100[2] = {(void *)_ZN17SpNpcNookShopTalk15ackHouseUpgradeEv, 0};

extern "C" void *data_ov050_0225e0f8[2] = {(void *)_ZN13SpNpcNookShop9mainAct00Ev, 0};

extern "C" void *data_ov050_0225e0f0[2] = {(void *)_ZN17SpNpcNookShopTalk15ackHouseUpgradeEv, 0};

extern "C" void *data_ov050_0225e0e8[2] = {(void *)_ZN13SpNpcNookShop9mainAct0EEv, 0};

extern "C" void *data_ov050_0225e0e0[2] = {(void *)_ZN17SpNpcNookShopTalk17onBuyOrShowChoiceEi, 0};

extern "C" void *data_ov050_0225e0d8[2] = {(void *)_ZN13SpNpcNookShop10setupAct0EEv, 0};

extern "C" void *data_ov050_0225e0d0[2] = {(void *)_ZN17SpNpcNookShopTalk12giveMoneyBagEv, 0};

extern "C" void *data_ov050_0225e0c8[2] = {(void *)_ZN17SpNpcNookShopTalk23onBuyAfterPreviewChoiceEi, 0};

extern "C" void *data_ov050_0225e0c0[2] = {(void *)_ZN13SpNpcNookShop10setupAct05Ev, 0};

extern "C" void *data_ov050_0225e0b8[2] = {(void *)_ZN17SpNpcNookShopTalk14handleSellMenuEv, 0};

// ---- rodata / data
extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitStairsBound = {0xd000, 0, 0x8000};

extern "C" const Unk_ov050_022590f8_Vec sSpNpcNookShopArbeitPushBackPos = {0x10000, 0, 0x9000};

extern "C" const s32 data_ov050_0225da40[3] = {0x10000, 0, 0x8000};

extern "C" const u8 sSpNpcNookShopDramaMsgTable[32] = {0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x00, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00};

void SpNpcNookShopTalk::onMessageEnd() {
    void *h = PlayerData_GetCurrent();
    PlayerData_getErrands(h);
    if (Unk_02097ff4_testFlag(h, 1)) {
        onArbeitMessageEnd();
        return;
    }
    if (ownerNpc->isNook()) {
        if (strncmp((char *)this + 4, sSpNpcNookShopKey, func_0212a438(sSpNpcNookShopKey)) != 0) {
            return;
        }
    }
    const char *name = ownerNpc->isNook() ? sSpNpcNookShopKey : sSpNpcNookShopTwinsKey;
    nextMsg = 0xff;
    static Unk_ov050_0225a6e0_Row tbl[13] = {
        {0x37, *(SpNpcNookShopTalk::Fn *)data_ov050_0225dff0},
        {0x36, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e008},
        {0x07, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e070},
        {0x13, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e0d0},
        {0x18, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e110},
        {0x22, *(SpNpcNookShopTalk::Fn *)data_ov050_0225df68},
        {0x23, *(SpNpcNookShopTalk::Fn *)data_ov050_0225df60},
        {0x49, *(SpNpcNookShopTalk::Fn *)data_ov050_0225df58},
        {0x4b, *(SpNpcNookShopTalk::Fn *)data_ov050_0225df50},
        {0x4d, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e128},
        {0x4f, *(SpNpcNookShopTalk::Fn *)data_ov050_0225df40},
        {0x51, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e100},
        {0x53, *(SpNpcNookShopTalk::Fn *)data_ov050_0225e0f0},
    };
    u32 i = 0;
    u8 *q = &msgIndex;
    goto test;
loop:
    {
        u32 off = i * 12;
        u32 a = *(u32 *)((u8 *)tbl + off);
        u32 b = *q;
        if (a == b) {
            Unk_ov050_0225a6e0_Row *r = (Unk_ov050_0225a6e0_Row *)((u32)tbl + off);
            (this->*r->f)();
        }
    }
    i++;
test:
    if (i < 13) goto loop;
    if (nextMsg != 0xff) {
        u8 c = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, &c, (void *)name);
    }
}

void SpNpcNookShopTalk::giveGlamourShot() {
    u16 a = 0x4a30;
    Unk_020d7710_requestGiveItem(this, &a, 0, 5, 0);
    u16 b = 0x4a30;
    Pocket_AddItem(&b, 0);
    safeSlot = -1;
    nextMsg = 0x38;
}

void SpNpcNookShopTalk::onSafeOfferDeclined() {
    safeSlot = -2;
}

void SpNpcNookShopTalk::openSellMenu() {
    Unk_020d7710_setSubSceneKind(this, 0x1d, 0);
    Unk_020d7710_openSubScene(this, 2);
    setPendingMenuHandler(0);
}

void SpNpcNookShopTalk::giveMoneyBag() {
    NpcActor_PayPlayer(ownerNpc, price);
}

void SpNpcNookShopTalk::openCatalogMenu() {
    Unk_020d7710_setSubSceneKind(this, 0x3e, 0);
    Unk_020d7710_openSubScene(this, 2);
    setPendingMenuHandler(1);
}

void SpNpcNookShopTalk::onPurchaseDone() {
    u16 *p = &ownerNpc->selectedItem;
    if (Unk_ov050_0225a2d0_Same(p)) {
        return;
    }
    if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x1521, 0x1530)) {
        nextMsg = 0x2f;
        BOOL r = FALSE;
        u32 v = ownerNpc->selectedItem;
        if (v >= 0x1521 && v <= 0x1530) {
            r = TRUE;
        }
        s32 idx;
        if (r) {
            idx = v - 0x1521;
        } else {
            idx = -1;
        }
        HouseData_orderRoofPaint(gSaveHouse, (u8)idx);
    } else {
        nextMsg = 0x23;
    }
}

void SpNpcNookShopTalk::showFirstPurchaseHint() {
    u16 *p = &ownerNpc->selectedItem;
    if (Unk_ov050_0225a2d0_Same(p)) {
        return;
    }
    void *h = PlayerData_GetCurrent();
    if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x1369, 0x1369) && Unk_02097ff4_testFlag(h, 0x29) == 0) {
        nextMsg = 0x24;
        Unk_02097ff4_setFlag(h, 0x29);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x1376, 0x1376) && Unk_02097ff4_testFlag(h, 0x2a) == 0) {
        nextMsg = 0x25;
        Unk_02097ff4_setFlag(h, 0x2a);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x1374, 0x1374) && Unk_02097ff4_testFlag(h, 0x2b) == 0) {
        nextMsg = 0x26;
        Unk_02097ff4_setFlag(h, 0x2b);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x136b, 0x1372) && Unk_02097ff4_testFlag(h, 0x2c) == 0) {
        nextMsg = 0x27;
        Unk_02097ff4_setFlag(h, 0x2c);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x1378, 0x1378) && Unk_02097ff4_testFlag(h, 0x2d) == 0) {
        nextMsg = 0x28;
        Unk_02097ff4_setFlag(h, 0x2d);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x137a, 0x137a) && Unk_02097ff4_testFlag(h, 0x2e) == 0) {
        nextMsg = 0x29;
        Unk_02097ff4_setFlag(h, 0x2e);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x151f, 0x151f) && Unk_02097ff4_testFlag(h, 0x2f) == 0) {
        nextMsg = 0x39;
        Unk_02097ff4_setFlag(h, 0x2f);
    } else if (Unk_ov050_0225a2d0_R(&ownerNpc->selectedItem, 0x156c, 0x156c) && Unk_02097ff4_testFlag(h, 0x37) == 0) {
        nextMsg = 0x10;
        Unk_02097ff4_setFlag(h, 0x37);
    }
    if (nextMsg == 0xff) {
        if (Talk_IsInOwnTown()) {
            if (ownerNpc->isNook()) {
                if (Unk_02097ff4_testFlag(h, 0x38) == 0) {
                    nextMsg = 0x30;
                    Unk_02097ff4_setFlag(h, 0x38);
                    return;
                }
            }
        }
    }
    TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
}

void SpNpcNookShopTalk::ackHouseUpgrade() {
    HouseData_startLoan(gSaveHouse);
}

void SpNpcNookShopTalk::setRoofColor(s32 row, s32 col) {
    const u8 *q = sSpNpcNookShopRoofColorChoices + row * 4;
    u8 v = q[col];
    u8 b = v;
    TalkWindowState_setSlotFromString(unk_3c, 2, &b, (void *)"st_roof_paint");
    HouseData_orderUpgrade(gSaveHouse, v);
}
extern "C" void *data_ov050_0225e080[2] = {(void *)_ZN17SpNpcNookShopTalk20arbeitPresentUniformEPv, 0};

extern "C" void *data_ov050_0225e078[2] = {(void *)_ZN17SpNpcNookShopTalk22arbeitCheckPocketSpaceEPv, 0};

extern "C" void *data_ov050_0225e070[2] = {(void *)_ZN17SpNpcNookShopTalk12openSellMenuEv, 0};

extern "C" void *data_ov050_0225e068[2] = {(void *)_ZN17SpNpcNookShopTalk16onArbeitMsgEnd0EEPv, 0};

extern "C" void *data_ov050_0225e060[2] = {(void *)_ZN17SpNpcNookShopTalk16onArbeitMsgEnd12EPv, 0};

extern "C" void *data_ov050_0225e058[2] = {(void *)_ZN17SpNpcNookShopTalk28arbeitStartFurnitureDeliveryEPv, 0};

extern "C" void *data_ov050_0225e050[2] = {(void *)_ZN17SpNpcNookShopTalk28arbeitStartFurnitureDeliveryEPv, 0};

extern "C" void *data_ov050_0225e048[2] = {(void *)_ZN17SpNpcNookShopTalk24arbeitGiveDeliveryParcelEPv, 0};

extern "C" void *data_ov050_0225def0[2] = {(void *)_ZN17SpNpcNookShopTalk16arbeitGivePlantsEPv, 0};

extern "C" void *data_ov050_0225e038[2] = {(void *)_ZN17SpNpcNookShopTalk20arbeitGiveStationeryEPv, 0};

extern "C" void *data_ov050_0225e030[2] = {(void *)_ZN17SpNpcNookShopTalk21arbeitOfferStationeryEPv, 0};

extern "C" void *data_ov050_0225e028[2] = {(void *)_ZN17SpNpcNookShopTalk23arbeitGiveNewStationeryEPv, 0};

extern "C" void *data_ov050_0225dee0[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225e018[2] = {(void *)_ZN17SpNpcNookShopTalk25arbeitStartCarpetDeliveryEPv, 0};

extern "C" void *data_ov050_0225e010[2] = {(void *)_ZN17SpNpcNookShopTalk16arbeitGiveCarpetEPv, 0};

extern "C" void *data_ov050_0225e008[2] = {(void *)_ZN17SpNpcNookShopTalk19onSafeOfferDeclinedEv, 0};

extern "C" void *data_ov050_0225e000[2] = {(void *)_ZN17SpNpcNookShopTalk24onArbeitStationeryChoiceEi, 0};

extern "C" void *data_ov050_0225dff8[2] = {(void *)_ZN17SpNpcNookShopTalk16onArbeitMsgEnd31EPv, 0};

extern "C" void *data_ov050_0225dff0[2] = {(void *)_ZN17SpNpcNookShopTalk15giveGlamourShotEv, 0};

extern "C" char data_ov050_0225e2d0[] = "npc_sp/model/rcn_tex.nsbtx";

extern "C" char data_ov050_0225e2ec[] = "npc_sp/model/rcc_tex.nsbtx";

extern "C" char data_ov050_0225e308[] = "npc_sp/model/rcs_tex.nsbtx";

extern "C" char data_ov050_0225e324[] = "npc_sp/model/rcd_tex.nsbtx";

extern "C" char data_ov050_0225e340[] = "npc_sp/model/lrc_tex.nsbtx";

extern "C" const s32 sSpNpcNookShopItemTopicTable[6][2] = {
    {0x0b, 0x17}, {0x0a, 0x16}, {0x0d, 0x19}, {0x0c, 0x18}, {0x08, 0x14}, {0x09, 0x15},
};

extern "C" Unk_ov050_0225d1d4_Ent sSpNpcNookShopActTable[19] = {
    {*(SpNpcNookShop::Fn *)data_ov050_0225de58, *(SpNpcNookShop::Fn *)data_ov050_0225e0f8},
    {*(SpNpcNookShop::Fn *)data_ov050_0225df30, *(SpNpcNookShop::Fn *)data_ov050_0225de00},
    {*(SpNpcNookShop::Fn *)data_ov050_0225de80, *(SpNpcNookShop::Fn *)data_ov050_0225dfd0},
    {*(SpNpcNookShop::Fn *)data_ov050_0225df70, *(SpNpcNookShop::Fn *)data_ov050_0225dfc8},
    {*(SpNpcNookShop::Fn *)data_ov050_0225df28, *(SpNpcNookShop::Fn *)data_ov050_0225de48},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e0c0, *(SpNpcNookShop::Fn *)data_ov050_0225df18},
    {*(SpNpcNookShop::Fn *)data_ov050_0225df38, *(SpNpcNookShop::Fn *)data_ov050_0225de40},
    {*(SpNpcNookShop::Fn *)data_ov050_0225de50, *(SpNpcNookShop::Fn *)data_ov050_0225ddf8},
    {*(SpNpcNookShop::Fn *)data_ov050_0225df78, *(SpNpcNookShop::Fn *)data_ov050_0225de08},
    {*(SpNpcNookShop::Fn *)data_ov050_0225df80, *(SpNpcNookShop::Fn *)data_ov050_0225e178},
    {*(SpNpcNookShop::Fn *)data_ov050_0225de88, *(SpNpcNookShop::Fn *)data_ov050_0225dfa8},
    {*(SpNpcNookShop::Fn *)data_ov050_0225dde8, *(SpNpcNookShop::Fn *)data_ov050_0225ddf0},
    {*(SpNpcNookShop::Fn *)data_ov050_0225de10, *(SpNpcNookShop::Fn *)data_ov050_0225e190},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e188, *(SpNpcNookShop::Fn *)data_ov050_0225e180},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e0d8, *(SpNpcNookShop::Fn *)data_ov050_0225e0e8},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e168, *(SpNpcNookShop::Fn *)data_ov050_0225e160},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e158, *(SpNpcNookShop::Fn *)data_ov050_0225e150},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e148, *(SpNpcNookShop::Fn *)data_ov050_0225e140},
    {*(SpNpcNookShop::Fn *)data_ov050_0225e138, *(SpNpcNookShop::Fn *)data_ov050_0225e130},
};

// ---------------------------------------------------------------------------------------------------------------------

void SpNpcNookShopTalk::onChoice(s32 a) {
    static Unk_ov050_0225e4b4_ArgFn tbl[3] = {
        *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df10,
        *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e0a0,
        *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df00,
    };
    s32 i = 0;
    void *h = PlayerData_GetCurrent();
    PlayerData_getErrands(h);
    if (Unk_02097ff4_testFlag(h, 1)) {
        i = 2;
    } else if (topic == 0xf) {
        i = 1;
    }
    (this->*tbl[i])(a);
}
extern "C" void *data_ov050_0225e088[2] = {(void *)_ZN17SpNpcNookShopTalk20arbeitPresentUniformEPv, 0};

extern "C" void *data_ov050_0225df98[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225df90[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225df88[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice3Ei, 0};

extern "C" void *data_ov050_0225df80[2] = {(void *)_ZN13SpNpcNookShop10setupAct09Ev, 0};

extern "C" void *data_ov050_0225df78[2] = {(void *)_ZN13SpNpcNookShop10setupAct08Ev, 0};

extern "C" void *data_ov050_0225df70[2] = {(void *)_ZN13SpNpcNookShop10setupAct03Ev, 0};

extern "C" void *data_ov050_0225e138[2] = {(void *)_ZN13SpNpcNookShop10setupAct12Ev, 0};

extern "C" void *data_ov050_0225de80[2] = {(void *)_ZN13SpNpcNookShop10setupAct02Ev, 0};

extern "C" void *data_ov050_0225df58[2] = {(void *)_ZN17SpNpcNookShopTalk15ackHouseUpgradeEv, 0};

extern "C" void *data_ov050_0225df50[2] = {(void *)_ZN17SpNpcNookShopTalk15ackHouseUpgradeEv, 0};

extern "C" void *data_ov050_0225df48[2] = {(void *)_ZN17SpNpcNookShopTalk11onBuyChoiceEi, 0};

extern "C" void *data_ov050_0225df40[2] = {(void *)_ZN17SpNpcNookShopTalk15ackHouseUpgradeEv, 0};

extern "C" void *data_ov050_0225df38[2] = {(void *)_ZN13SpNpcNookShop10setupAct06Ev, 0};

extern "C" void *data_ov050_0225df30[2] = {(void *)_ZN13SpNpcNookShop10setupAct01Ev, 0};

extern "C" void *data_ov050_0225e0b0[2] = {(void *)_ZN17SpNpcNookShopTalk17handleCatalogMenuEv, 0};

extern "C" void *data_ov050_0225df20[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225e090[2] = {(void *)_ZN17SpNpcNookShopTalk17arbeitGiveUniformEPv, 0};

extern "C" void *data_ov050_0225df10[2] = {(void *)_ZN17SpNpcNookShopTalk12onShopChoiceEv, 0};

extern "C" void *data_ov050_0225df08[2] = {(void *)_ZN17SpNpcNookShopTalk16onBuyPaintChoiceEi, 0};

extern "C" void *data_ov050_0225df00[2] = {(void *)_ZN17SpNpcNookShopTalk14onArbeitChoiceEv, 0};

extern "C" void *data_ov050_0225def8[2] = {(void *)_ZN17SpNpcNookShopTalk11onBuyChoiceEi, 0};

extern "C" void *data_ov050_0225de48[2] = {(void *)_ZN13SpNpcNookShop9mainAct04Ev, 0};

extern "C" void *data_ov050_0225dee8[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" char sSpNpcNookShopTwinsKey[] = "sp_npc_twins";

extern "C" Unk_ov050_SceneEntry sSpNpcNookShopProfile = {SpNpcNookShop_Create, 0x76, 0x7b, 2, 0x5000, 0x5000, 0x3e800};

extern "C" Unk_ov050_SceneEntry sSpNpcTimmyProfile = {SpNpcNookShop_CreateTimmy, 0x75, 0x7a, 2, 0x5000, 0x5000, 0x3e800};

extern "C" Unk_ov050_SceneEntry sSpNpcTommyProfile = {SpNpcNookShop_CreateTommy, 0x74, 0x79, 2, 0x5000, 0x5000, 0x3e800};

void SpNpcNookShopTalk::onShopChoice() {
    ActorTalkRequest_getChoiceList(this);
    s32 t = ChoiceList_getResult();
    nextMsg = 0xff;
    static Unk_ov050_02259838_Row tbl[37] = {
        {0x00, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dee8},
        {0x02, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dee0},
        {0x05, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225ded8},
        {0x06, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225ded0},
        {0x08, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dec8},
        {0x0a, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dec0},
        {0x0b, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df98},
        {0x0c, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de78},
        {0x0e, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de90},
        {0x0f, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de98},
        {0x11, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dfc0},
        {0x12, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dfb8},
        {0x17, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df90},
        {0x19, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dfa0},
        {0x1a, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e098},
        {0x1b, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e120},
        {0x1c, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de68},
        {0x1d, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de60},
        {0x1e, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df48},
        {0x2a, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e108},
        {0x2b, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e0e0},
        {0x2c, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e0c8},
        {0x2e, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df08},
        {0x31, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225def8},
        {0x35, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de18},
        {0x40, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de20},
        {0x42, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de70},
        {0x43, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225deb8},
        {0x44, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dea0},
        {0x45, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dea8},
        {0x46, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df88},
        {0x47, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e170},
        {0x55, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225dde0},
        {0x56, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e118},
        {0x58, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225df20},
        {0x59, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de30},
        {0x5d, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225de28},
    };
    u32 i = 0;
    u8 *pe = &msgIndex;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 37) {
        goto loop;
    }
    if (nextMsg != 0xff) {
        char *str = ownerNpc->isNook() != 0 ? sSpNpcNookShopKey : sSpNpcNookShopTwinsKey;
        u8 b = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, &b, str);
    }
}

void SpNpcNookShopTalk::onMainMenuChoice(s32 p) {
    PlayerData_GetCurrent();
    switch (p) {
    case 0:
        nextMsg = 7;
        break;
    case 1:
        if (Talk_IsInOwnTown() == 0) {
            nextMsg = 0x59;
        } else if (NookShop_CanTakeCatalogOrder() != 0) {
            nextMsg = 0x18;
        } else {
            nextMsg = 0x17;
        }
        break;
    case 2:
        if (Clock_GetWeekday() != 0) {
            s32 r = TurnipMarket_getPrice(data_021ed29c);
            ActorTalkRequest_setNumberSlot(this, r, 1, 3, 1, 0);
            nextMsg = 0x16;
        } else {
            nextMsg = 0xd;
        }
        break;
    case 3:
        nextMsg = 0x15;
        break;
    }
}

void SpNpcNookShopTalk::onDeliveryChoice(s32 p) {
    if (p == 0) {
        Unk_020d7710_setPocketFilter(this, (void *)SpNpcNookShop_IsDeliveryParcel, 0xd, 0);
        Unk_020d7710_openSubScene(this, 0);
        setPendingMenuHandler(2);
    } else {
        nextMsg = 0xf;
    }
}

void SpNpcNookShopTalk::onCannotBuyChoice(s32 p) {
    if (p != 0) {
        MenuCtrl_ReturnChosenItems(0);
    }
}

void SpNpcNookShopTalk::onCatalogOrderChoice(s32 p) {
    if (p == 0) {
        if (NpcActor_CanPlayerPay(ownerNpc, (s32)price) != 0) {
            NpcActor_ChargePlayer(ownerNpc, (s32)price);
            nextMsg = 0x1c;
            u16 *q = &ownerNpc->selectedItem;
            if (!Unk_ov050_02259bb8_Match(q)) {
                NookShop_SendCatalogOrder(&ownerNpc->selectedItem);
            }
        } else {
            nextMsg = 0x1d;
        }
    } else {
        nextMsg = 0x1b;
    }
}

void SpNpcNookShopTalk::onBuyChoice(s32 p) {
    if (p == 0) {
        if (Pocket_FindEmpty() < 0) {
            nextMsg = 0x20;
        } else if (NpcActor_CanPlayerPay(ownerNpc, (s32)price) == 0) {
            nextMsg = 0x21;
        } else {
            nextMsg = 0x22;
            buySelectedItem();
        }
    }
}

void SpNpcNookShopTalk::onBuyAfterPreviewChoice(s32 p) {
    u16 *q = &ownerNpc->selectedItem;
    if (!Unk_ov050_02259bb8_Match(q)) {
        BOOL r = FALSE;
        u32 v = ownerNpc->selectedItem;
        if (v < 0x1100 || v > 0x1143) {
        } else {
            r = TRUE;
        }
        if (r) {
            RoomWallFloor_RestoreWallpaper(1);
        } else {
            RoomWallFloor_RestoreCarpet(1);
        }
        Camera_RestorePrevMode();
    }
    onBuyChoice(p);
}

void SpNpcNookShopTalk::onBuyOrShowChoice(s32 p) {
    if (p == 0) {
        if (Pocket_FindEmpty() < 0) {
            nextMsg = 0x20;
        } else if (NpcActor_CanPlayerPay(ownerNpc, (s32)price) == 0) {
            nextMsg = 0x21;
        } else {
            nextMsg = 0x22;
            buySelectedItem();
        }
    } else if (p == 1) {
        u16 *q = &ownerNpc->selectedItem;
        if (!Unk_ov050_02259bb8_Match(q)) {
            BOOL r = FALSE;
            u32 v = ownerNpc->selectedItem;
            if (v < 0x1100 || v > 0x1143) {
            } else {
                r = TRUE;
            }
            if (r) {
                Camera_SetMode11();
                RoomWallFloor_SetWallpaper(&ownerNpc->selectedItem, 0, 1, 1);
            } else {
                Camera_SetMode12();
                RoomWallFloor_SetCarpet(&ownerNpc->selectedItem, 0, 1, 1);
            }
        }
    }
}

void SpNpcNookShopTalk::onBuyPaintChoice(s32 p) {
    if (p == 0) {
        if (NpcActor_CanPlayerPay(ownerNpc, (s32)price) == 0) {
            nextMsg = 0x21;
        } else {
            SpNpcNookShop *o;
            nextMsg = 0x22;
            ownerNpc->purchasePending = 1;
            NpcActor_ChargePlayer(ownerNpc, (s32)price);
            PlayerData_GetCurrent();
            PlayerDataArray_FindById(&gSavePlayers, PlayerData_getPlayerId());
            o = ownerNpc;
            NookShop_BuyAt((void *)o->selectedItemX, (void *)o->selectedItemZ, (void *)price, Scene_GetCurrent());
        }
    }
}

void SpNpcNookShopTalk::onSafeOfferChoice(s32 p) {
    if (p == 0) {
        if (safeSlot >= 0) {
            u16 v;
            Pocket_RemoveItem();
            v = 0x36fc;
            Unk_02014420_requestTakeItem(this, &v, 0, 5, 0);
        }
        nextMsg = 0x37;
    }
}

void SpNpcNookShopTalk::onSellConfirmChoice(s32 p) {
    if (p == 0) {
        switch (NpcActor_CheckPayoutFits(ownerNpc, (s32)price, soldCount)) {
        case 0:
            NpcActor_PayPlayer(ownerNpc, (s32)price);
            NookShop_RecordBuyback((void *)price);
            nextMsg = 0x12;
            break;
        case 1:
            NookShop_RecordBuyback((void *)price);
            nextMsg = 0x13;
            break;
        case 2:
            nextMsg = 0x5d;
            MenuCtrl_ReturnChosenItems(0);
            break;
        }
    } else {
        if (msgIndex != 0x40) {
            MenuCtrl_ReturnChosenItems(0);
        } else {
            MenuCtrl_ReturnChosenItems(1);
        }
    }
}

void SpNpcNookShopTalk::onRoofColorChoice0(s32 p) {
    if (p != 4) {
        setRoofColor(0, p);
        nextMsg = 0x48;
    }
}

void SpNpcNookShopTalk::onRoofColorChoice1(s32 p) {
    if (p != 4) {
        setRoofColor(1, p);
        nextMsg = 0x48;
    }
}

void SpNpcNookShopTalk::onRoofColorChoice2(s32 p) {
    if (p != 4) {
        setRoofColor(2, p);
        nextMsg = 0x48;
    }
}

void SpNpcNookShopTalk::onRoofColorChoice3(s32 p) {
    if (p != 4) {
        setRoofColor(3, p);
        nextMsg = 0x48;
    }
}

void SpNpcNookShopTalk::onDrama2Choice() {
    ActorTalkRequest_getChoiceList(this);
    s32 t = ChoiceList_getResult();
    PlayerData_GetCurrent();
    u8 *g = data_021ed29c;
    s32 lv = msgIndex;
    if (lv <= 0x14) {
        Unk_ov050_022598e0_Buf buf;
        nextMsg = 0xff;
        if (t != 3) {
            setTopic(5);
        }
        switch (t) {
        case 0:
            nextMsg = 7;
            break;
        case 1:
            if (Talk_IsInOwnTown() == 0) {
                nextMsg = 0x59;
            } else if (NookShop_CanTakeCatalogOrder() != 0) {
                nextMsg = 0x18;
            } else {
                nextMsg = 0x17;
            }
            break;
        case 2:
            if (Clock_GetWeekday() != 0) {
                s32 r = TurnipMarket_getPrice(g);
                ActorTalkRequest_setNumberSlot(this, r, 1, 3, 1, 0);
                nextMsg = 0x16;
            } else {
                nextMsg = 0xd;
            }
            break;
        case 3:
            if (ownerNpc->isNook() != 0) {
                if (Talk_IsDramaPending(ownerNpc, &buf, 3) != 0) {
                    Talk_AdvanceDrama(ownerNpc, &buf);
                }
            }
            break;
        case 4:
            nextMsg = 0x15;
            break;
        }
        s32 c = nextMsg;
        if (c != 0xff) {
            buf.b = c;
            TalkWindowState_setNextMessage(unk_3c, &buf.b, sSpNpcNookShopKey);
        }
    }
}
extern "C" void *data_ov050_0225deb0[2] = {(void *)_ZN17SpNpcNookShopTalk16arbeitReduceLoanEPv, 0};

extern "C" void *data_ov050_0225dfa0[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225e0a0[2] = {(void *)_ZN17SpNpcNookShopTalk14onDrama2ChoiceEv, 0};

extern "C" void *data_ov050_0225de98[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225de90[2] = {(void *)_ZN17SpNpcNookShopTalk19onSellConfirmChoiceEi, 0};

extern "C" void *data_ov050_0225e148[2] = {(void *)_ZN13SpNpcNookShop10setupAct11Ev, 0};

extern "C" void *data_ov050_0225df68[2] = {(void *)_ZN17SpNpcNookShopTalk14onPurchaseDoneEv, 0};

extern "C" void *data_ov050_0225de78[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225de70[2] = {(void *)_ZN17SpNpcNookShopTalk18onRoofColorChoice0Ei, 0};

extern "C" void *data_ov050_0225de68[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225e0a8[2] = {(void *)_ZN17SpNpcNookShopTalk18handleDeliveryMenuEv, 0};

extern "C" void *data_ov050_0225e098[2] = {(void *)_ZN17SpNpcNookShopTalk20onCatalogOrderChoiceEi, 0};

extern "C" char sSpNpcNookShopSequence5_1Key[] = "sp_etc_sequence5_1";

void SpNpcNookShopTalk::onArbeitChoice() {
    ActorTalkRequest_getChoiceList(this);
    s32 t = ChoiceList_getResult();
    nextMsg = 0xff;
    static Unk_ov050_02259838_Row tbl[1] = {
        {0x22, *(SpNpcNookShopTalk::ArgFn *)data_ov050_0225e000},
    };
    u32 i = 0;
    u8 *pe = &msgIndex;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 1) {
        goto loop;
    }
    if (nextMsg != 0xff) {
        u8 b = nextMsg;
        TalkWindowState_setNextMessage(unk_3c, &b, sSpNpcNookShopSequence5_1Key);
    }
}

void SpNpcNookShopTalk::onArbeitStationeryChoice(s32 p) {
    PlayerData_GetCurrent();
    if (p == 0) {
        if (Pocket_FindEmpty() >= 0) {
            nextMsg = 0x25;
        } else {
            nextMsg = 0x17;
        }
    }
}

s32 SpNpcNookShopTalk::buySelectedItem() {
    SpNpcNookShop *o;
    ownerNpc->purchasePending = 1;
    NpcActor_ChargePlayer(ownerNpc, (s32)price);
    Pocket_AddItem(&ownerNpc->selectedItem, 0);
    PlayerData_GetCurrent();
    PlayerDataArray_FindById(&gSavePlayers, PlayerData_getPlayerId());
    o = ownerNpc;
    NookShop_BuyAt((void *)o->selectedItemX, (void *)o->selectedItemZ, (void *)price, Scene_GetCurrent());
    VillagerTrend_OnFurnitureBought();
}

BOOL SpNpcNookShop::vfunc_48(void *) {
    if (position.z < data_ov050_0225da40[2]) {
        return FALSE;
    }
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || netIsTalkLocked() != 0 || tryItemTalk() != 0) {
        return FALSE;
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcNookShop

BOOL SpNpcNookShop::vfunc_58(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || netIsTalkLocked() != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcNookShop::vfunc_4c(u32 cmd, u8 arg) {
    Unk_020cbb18_Ov050 *g;
    s32 a, b;
    switch (cmd) {
    case 3:
        footstepFx.unk_08 = arg;
        if (arg != 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, arg);
            changeAct(0xf);
        } else if (isNetOwner()) {
            u32 t = gCommManager->myAid;
            netSetSlotsIfOwner(1, t, t);
            changeAct(0xf);
        }
        break;
    case 1:
        footstepFx.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            changeAct(9);
        } else if (isNetOwner()) {
            g = gCommManager;
            netSetSlotsIfOwner(1, g->myAid, g->myAid);
            talk.vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            if (talk.getTopic() == 0 || talk.getTopic() == 0x11) {
                changeAct(4);
            } else if (talk.getTopic() == 1 || talk.getTopic() == 0x12 ||
                       talk.getTopic() == 6 || talk.getTopic() == 0x1d) {
                changeAct(5);
            } else if (CommManager_isOnline(g) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
                talk.vfunc_08();
                func_02015ab0(&talk, getPlayerActor(4));
                changeAct(4);
            } else {
                changeAct(0x10);
            }
        }
        break;
    case 0:
        footstepFx.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            changeAct(9);
        } else if (isNetOwner()) {
            netSetSlotsIfOwner(1, gCommManager->myAid, gCommManager->myAid);
            talk.vfunc_08();
            func_02015ab0(&talk, getPlayerActor(4));
            if (isNook()) {
                talk.setTopic(5);
            } else {
                talk.setTopic(0x13);
            }
            changeAct(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (NetArea_IsLocalOwner()) {
                g = gCommManager;
                netSetSlotsIfOwner(1, g->myAid, 4);
                if (talk.getTopic() == 1 || talk.getTopic() == 0x12 ||
                    talk.getTopic() == 6 || talk.getTopic() == 0x1d) {
                } else if (CommManager_isOnline(g) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
                    changeAct(0xd);
                } else {
                    changeAct(1);
                }
            } else {
                netSetSlotsIfOwner(1, 4, gCommManager->myAid);
                changeAct(8);
            }
        }
        break;
    case 4:
        if (netIsTalkLocked()) {
            if (isNetOwner()) {
                a = 4;
                b = 4;
                if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        netSetSlotsIfOwner(1, gCommManager->myAid, 4);
                        changeAct(0xd);
                    }
                }
            }
        }
        break;
    }
}

BOOL SpNpcNookShop::isPlayerCloserThanOtherTwin() {
    if (isTwin()) {
        Unk_ov050_022590f8_Vec a;
        Unk_ov050_022590f8_Vec *src = (Unk_ov050_022590f8_Vec *)PlayerActor_GetBodyPos(4);
        *(Unk_ov050_022590f8_Vec *)&a = *src;
        u8 *o = (u8 *)Actor_findByProfile(getOtherTwinProfile(), 0);
        if (o != 0) {
            Unk_ov050_022590f8_Vec b;
            Unk_ov050_022590f8_Pos *pv = (Unk_ov050_022590f8_Pos *)(o + 0x5c);
            b.x = *(s32 *)(o + 0x5c);
            b.y = pv->y;
            b.z = pv->z;
            Unk_ov050_022590f8_Vec d1, d2;
            func_020e9960(&d1, &a, &b);
            s32 l1 = VEC_Mag(&d1);
            func_020e9960(&d2, &a, &position);
            if (VEC_Mag(&d2) < l1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 SpNpcNookShop::getOtherTwinProfile() {
    if (isTommy()) {
        return 0x75;
    }
    return 0x74;
}

BOOL SpNpcNookShop::pickItemTopic() {
    u16 t[2];
    s32 bx, by;
    Unk_ov050_022590f8_Vec v;
    Character *p = (Character *)PlayerActor_GetActor(4);
    BOOL f = Unk_ov050_022590f8_Flags() ? TRUE : FALSE;
    if (p == 0 || TalkRequest_IsActive() != 0 || NpcTalkCtrl_isBusy(&talkCtrl) != 0 || ((gPad[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (isTommy()) {
            return FALSE;
        }
    } else if (isTwin()) {
        if (isPlayerCloserThanOtherTwin() == 0) {
            return FALSE;
        }
    }
    selectedItem = 0xfff1;
    Unk_ov050_022590f8_Pos *pv = (Unk_ov050_022590f8_Pos *)&p->position;
    v.x = p->position.x;
    v.y = pv->y;
    v.z = pv->z;
    u32 ang = p->rotY;
    bx = 0;
    by = 0;
    s32 idx = ((u16)ang >> 4) * 2;
    v.x += func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.z += func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    FieldPos_ToUnit(&bx, &by, &v);
    if (f) {
        void *o = FtrActorGrid_getActor(FtrActorGrid_GetInstance(), bx, by, 0);
        if (o != 0) {
            if (o != TouchPick_GetTargetObject(Scene_GetTouchPicker(), 0, 0)) {
                return FALSE;
            }
        } else {
            s32 bx2 = 0, by2 = 0;
            Unk_ov050_022590f8_Vec v2;
            TouchPick_GetGroundPos(Scene_GetTouchPicker(), &v2);
            FieldPos_ToUnit(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *ShopStock_GetItemAt(bx, by);
    if (Unk_ov050_022590f8_Eq(&t[0], &t[1])) {
        return FALSE;
    }
    s32 f2 = 0;
    s32 kind = 5;
    if (isTwin()) {
        f2 = 1;
    }
    {
        BOOL r = FALSE;
        volatile u16 *pt = &t[0];
        u32 x = *pt;
        u32 y = *pt;
        if (y < 0x1100 || x > 0x1143) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x1144 && x <= 0x1187)) {
            kind = 0;
        } else if (x >= 0x1000 && x <= 0x10ff) {
            kind = 1;
        } else if (x >= 0x1521 && x <= 0x1530) {
            if (Talk_IsInOwnTown(PlayerData_GetCurrent())) {
                kind = 2;
            } else {
                kind = 3;
            }
        } else if (Item_IsClass4Furniture(&t[0])) {
            kind = 4;
        }
    }
    talk.setTopic(sSpNpcNookShopItemTopicTable[kind][f2]);
    selectedItem = t[0];
    selectedItemX = bx;
    selectedItemZ = by;
    purchasePending = 0;
    return TRUE;
}

BOOL SpNpcNookShop::tryItemTalk() {
    if (pickItemTopic()) {
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcNookShop::tryStairsBlockTalk() {
    void *p = PlayerData_GetCurrent();
    PlayerData_getErrands(p);
    if (Unk_02097ff4_testFlag(p, 1)) {
        Unk_ov050_02258f80_Loc v;
        Unk_ov050_022590f8_Vec *src = (Unk_ov050_022590f8_Vec *)PlayerActor_GetBodyPos(4);
        *(Unk_ov050_022590f8_Vec *)&v = *src;
        if (v.z < sSpNpcNookShopArbeitStairsBound.z && v.x > sSpNpcNookShopArbeitStairsBound.x) {
            talk.setTopic(0x1e);
            TalkRequest_AddPlayerTalk6(this, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcNookShop::tryFarewellTalk() {
    Unk_ov050_02258f80_Loc v;
    Unk_ov050_022590f8_Vec *src = (Unk_ov050_022590f8_Vec *)PlayerActor_GetBodyPos(4);
    *(Unk_ov050_022590f8_Vec *)&v = *src;
    if (talk.getTopic() != 1 && talk.getTopic() != 0x12) {
        if (isTwin() && isPlayerCloserThanOtherTwin() == 0) {
            if (Ground_IsOnLockedExit(&v)) {
                NpcMoveCtrl_setTargetAngle(&moveCtrl, getAngleToPlayer(4));
            }
            return FALSE;
        }
        if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
            return FALSE;
        }
        void *p = PlayerData_GetCurrent();
        PlayerData_getErrands(p);
        if (Unk_02097ff4_testFlag(p, 1)) {
            return FALSE;
        }
    }
    if (Ground_IsOnLockedExit(&v)) {
        if (isTwin()) {
            talk.setTopic(0x12);
        } else {
            talk.setTopic(1);
        }
        TalkRequest_AddPlayerTalk6(this, 0);
        changeAct(0x12);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcNookShop::tryClosingTimeTalk() {
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        return FALSE;
    }
    if (Unk_02097ff4_testFlag(PlayerData_GetCurrent(), 1)) {
        return FALSE;
    }
    if (ResettiVisitFlag_isPastClosingTime(TownSessionState_GetClosingTime(TownSessionState_Get()))) {
        if (isNook()) {
            talk.setTopic(6);
        } else if (isTommy()) {
            talk.setTopic(0x1d);
        }
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcNookShop::isNook() {
    if (Unk_ov050_02258ea0_Eq(profile, 0x76)) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcNookShop::isTimmy() {
    if (Unk_ov050_02258ea0_Eq(profile, 0x75)) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcNookShop::isTommy() {
    if (Unk_ov050_02258ea0_Eq(profile, 0x74)) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcNookShop::isTwin() {
    if (isTommy() || isTimmy()) {
        return TRUE;
    }
    return FALSE;
}

s32 SpNpcNookShop::getFollowDistance() {
    if (isTwin()) {
        isPlayerCloserThanOtherTwin();
        return 0x3000;
    }
    return 0x3000;
}

// ---------------------------------------------------------------------------------------------------------------------

s32 SpNpcNookShop::getRunDistance() {
    if (isTwin()) {
        isPlayerCloserThanOtherTwin();
        return 0x4000;
    }
    return 0x4000;
}

extern "C" void *data_ov050_0225ded0[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225de38[2] = {(void *)_ZN17SpNpcNookShopTalk30arbeitStartWateringCanDeliveryEPv, 0};

extern "C" void *data_ov050_0225dfc8[2] = {(void *)_ZN13SpNpcNookShop9mainAct03Ev, 0};

extern "C" void *data_ov050_0225dfa8[2] = {(void *)_ZN13SpNpcNookShop9mainAct0AEv, 0};

extern "C" void *data_ov050_0225de18[2] = {(void *)_ZN17SpNpcNookShopTalk17onSafeOfferChoiceEi, 0};

extern "C" void *data_ov050_0225de10[2] = {(void *)_ZN13SpNpcNookShop10setupAct0CEv, 0};

extern "C" void *data_ov050_0225de08[2] = {(void *)_ZN13SpNpcNookShop9mainAct08Ev, 0};

extern "C" void *data_ov050_0225de60[2] = {(void *)_ZN17SpNpcNookShopTalk16onMainMenuChoiceEi, 0};

extern "C" void *data_ov050_0225df18[2] = {(void *)_ZN13SpNpcNookShop9mainAct05Ev, 0};

extern "C" void *data_ov050_0225de40[2] = {(void *)_ZN13SpNpcNookShop9mainAct06Ev, 0};

extern "C" void *data_ov050_0225dfe8[2] = {(void *)_ZN17SpNpcNookShopTalk12arbeitFinishEPv, 0};

extern "C" void *data_ov050_0225dfb0[2] = {(void *)_ZN17SpNpcNookShopTalk24arbeitPresentWateringCanEPv, 0};

extern "C" char data_ov050_0225e210[] = "npc_sp/model/rcn.nsbmd";

extern "C" char data_ov050_0225e240[] = "npc_sp/model/rcs.nsbmd";

extern "C" char data_ov050_0225e258[] = "npc_sp/model/rcd.nsbmd";

extern "C" char data_ov050_0225e270[] = "npc_sp/model/lrc.nsbmd";

extern "C" char data_ov050_0225e228[] = "npc_sp/model/rcc.nsbmd";

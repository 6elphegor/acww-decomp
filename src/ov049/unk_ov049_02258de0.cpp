#include "types.h"
#include "gfx/VecFx32.h"
#include "talk/TalkStartMsg.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "save/Pattern.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/SpNpcTalkRequest.h"
#include "actor/ActorProfile.h"
#include "net/CommManager.h"

#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define ActorTalkRequest_requestTakeItem _ZN16ActorTalkRequest15requestTakeItemEPtjjj
#define ActorTalkRequest_setSubSceneKind _ZN16ActorTalkRequest15setSubSceneKindEjj
#define ActorTalkRequest_setPocketFilter _ZN16ActorTalkRequest15setPocketFilterEjjj
#define ActorTalkRequest_openSubScene _ZN16ActorTalkRequest12openSubSceneEi
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setPlayerNameSlot _ZN16ActorTalkRequest17setPlayerNameSlotEjj
#define ActorTalkRequest_setTownNameSlot _ZN16ActorTalkRequest15setTownNameSlotEjj
#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define ActorTalkRequest_setPartnerActor _ZN16ActorTalkRequest15setPartnerActorEP8NpcActor
#define ActorTalkRequest_getTalkPlayer _ZN16ActorTalkRequest13getTalkPlayerEv
#define ActorTalkRequest_setTalkPlayer _ZN16ActorTalkRequest13setTalkPlayerEj
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcMoveCtrl_setTargetAngle _ZN11NpcMoveCtrl14setTargetAngleEs
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP7VecFx32
#define BlockMap_getWalkLinksAtPos _ZN8BlockMap17getWalkLinksAtPosEPv
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define TalkWindowState_unlockAdvance _ZN15TalkWindowState13unlockAdvanceEv
#define TalkWindowState_lockAdvance _ZN15TalkWindowState11lockAdvanceEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define AbleSistersPatterns_getPattern _ZN19AbleSistersPatterns10getPatternEh
#define PatternOrder_getSlot _ZN12PatternOrder7getSlotEj
#define PlayerPatterns_getPatternOrder _ZN14PlayerPatterns15getPatternOrderEv
#define PlayerPatterns_getPatternByOrder _ZN14PlayerPatterns17getPatternByOrderEj
#define Pattern_getInfo _ZN7Pattern7getInfoEv
#define PatternInfo_setTaste _ZN11PatternInfo8setTasteEj
#define PatternInfo_getTitle _ZN11PatternInfo8getTitleEPv
#define PatternInfo_getAuthor _ZN11PatternInfo9getAuthorEv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define PlayerId_equals _ZN8PlayerId6equalsEPS_
#define func_020942c8 _ZN8PlayerIdC1Ev
#define PlayerData_getErrands _ZN10PlayerData10getErrandsEv
#define PlayerData_getPatterns _ZN10PlayerData11getPatternsEv
#define PlayerData_getFaceItem _ZN10PlayerData11getFaceItemEv
#define PlayerData_getHat _ZN10PlayerData6getHatEv
#define PlayerData_getShirt _ZN10PlayerData8getShirtEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define SickVillagerRecord_getParcelErrand _ZN18SickVillagerRecord15getParcelErrandEv
#define ErrandRecord_setStep _ZN12ErrandRecord7setStepEh
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii
#define FtrActorGrid_getActor _ZN12FtrActorGrid8getActorEiii


class ActorTalkRequest;
class NpcActor;
class SpNpcMabel;
class SpNpcMabelTalk;


struct PlayerIdInlineCopy;
struct ItemNameStorage;
struct TownIdInlineCopy;

struct SpNpcMabelChoiceMenu {
    const u8 *choices;
    u8 count;
};


extern "C" {
void _ZN8NpcActor18onInteractionEventEi(void *self, u32 cmd, s32 arg);
s32 _ZN8NpcActor11netGetSlotsEii(void *self, s32 *a, s32 *b);
extern CommManager *gCommManager;
extern u8 gTouchPrevHeld[];
extern u8 gTouchPrevChanged[];
extern u16 gPad[];
extern s16 data_02135f44[];
extern u8 gU8None[];
extern u8 gSaveData[];
extern VecFx32 gVec3Zero;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern void *gSceneBlockMap;

BOOL CommManager_isOnline(void *g);
s16 *DebugVar_GetPtr(s32 a, s32 b);
VecFx32 *PlayerActor_GetBodyPos(s32 a);
s32 Ground_IsOnLockedExit(void *p);
void TalkRequest_AddPlayerTalk6(void *self, s32 a);
void *PlayerActor_GetActor(s32 a);
s32 TalkRequest_IsActive();
BOOL NpcTalkCtrl_isBusy(void *self);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_ToUnit(s32 *bx, s32 *by, void *pos);
void *FtrActorGrid_GetInstance();
void *FtrActorGrid_getActor(void *self, s32 a, s32 b, s32 c);
void *Scene_GetTouchPicker();
void *TouchPick_GetTargetObject(void *a, s32 b, s32 c);
void TouchPick_GetGroundPos(void *a, void *b);
u16 *ShopStock_GetItemAtTile(s32 a, s32 b);
BOOL Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
void Item_FromPlacedForm(u16 *a, u16 *b);
void NpcActor_ChargePlayer(void *owner, s32 v);
void Pocket_AddItem(void *p, s32 v);
void AbleShop_BuyAt(s32 a, s32 b, s32 c);
s32 VillagerTrend_OnClothesBought();
void ActorTalkRequest_setTalkPlayer(void *self, s32 v);
void *PlayerData_GetCurrent();
s32 MenuCtrl_GetIndex();
void *PlayerData_getPatterns(void *h);
void PlayerPatterns_getPatternByOrder(void *a, s32 b);
void *Pattern_getInfo(...);
void PatternInfo_setTaste(void *a, u32 b);
void *TalkWindowState_getChoiceList(void *p);
void TalkWindowState_openChoices(void *ctx, s32 a);
void ChoiceList_reset(void *h, s32 a, s32 b);
void ChoiceList_setEntry(void *h, s32 a, u8 *b, s32 c, u8 *d, char *e, s32 f);
void ChoiceList_loadTexts(void *h);
s32 TalkWindowState_setNextMessage(void *self, void *buf, void *cb);
BOOL MenuCtrl_IsResultOk();
void *PlayerData_getErrands(...);
void *SickVillagerRecord_getParcelErrand(void *p);
s32 Talk_IsInOwnTown();
s32 Pocket_GetItem();
void Pocket_RemoveItem(s32 a);
void ActorTalkRequest_requestTakeItem(void *self, u16 *p, u32 a, u32 b, u32 c);
void *ParcelErrand_GetRecord(void *p);
void ErrandRecord_setStep(void *p, s32 a);
s32 PlayerActor_TestLocalFlag0F();
void FtrMgr_RestoreDisplayedWearableAt(s32 a, s32 b);
void FtrMgr_TakeDisplayedWearableAt(s32 a, s32 b);
s32 PlayerActor_IsInAction(s32 a, s32 b);
void TalkWindowState_unlockAdvance(void *ctx);
u16 *MenuCtrl_GetChosenItems();
s32 Item_GetPrice(void *p);
s32 func_02133150(s32 a, s32 b);
BOOL NetArea_IsLocalOwner();
void ActorTalkRequest_setNumberSlot(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void *PlayerPatterns_getPatternOrder();
s32 PatternOrder_getSlot(void *, s32);
BOOL PatternSrc_Swap(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL PatternSrc_Copy(u32 a, u32 b, u32 c, u32 d, u32 e);
u16 *PlayerData_getShirt(void *);
u16 *PlayerData_getHat(void *);
u16 *PlayerData_getFaceItem(void *);
void PlayerActor_RequestWearShirtAlt(u16 *);
void PlayerActor_RequestWearHatAlt(u16 *);
void PlayerActor_RequestWearFaceItemAlt(u16 *);
void TalkWindowState_lockAdvance(void *);
u32 ChoiceList_getResult(void *p);
BOOL Talk_IsDramaPending(void *owner, void *buf, s32 n);
void Talk_AdvanceDrama(void *, void *);
s32 NpcRegistry_FindSpNpc(s32 n);
void ActorTalkRequest_setPartnerActor(void *self, s32 v);
void ActorTalkRequest_setPocketFilter(void *, void *, u32, u32);
void ActorTalkRequest_openSubScene(void *self, s32 a);
void PlayerActor_SetNoFaceTalkTarget(s32, s32);
void Camera_RestorePrevMode();
void Camera_SetMode4();
s32 Pocket_FindEmpty();
s32 NpcActor_CanPlayerPay(void *owner, s32 v);
s32 NpcActor_CheckPayoutFits(void *, s32, s32);
void NpcActor_PayPlayer(void *owner, s32 v);
BOOL func_0204bab8(u16 *);
void MenuCtrl_ReturnChosenItems(s32);
s32 Random_GlobalBelow(s32 n);
void ActorTalkRequest_setSubSceneKind(void *self, u32 a, u32 b);
BOOL GameStart_IsActive();
u32 strlen(const char *s);
s32 strncmp(void *a, const char *b, u32 n);
BOOL ParcelErrand_IsFor(void *a, void *b);
void ActorTalkRequest_setItemNameSlot(void *self, void *a, s32 b, s32 c);
void *AbleSistersPatterns_getPattern(void *a, u32 b);
void PatternInfo_getTitle(void *a, void *b);
void TalkWindowState_setNamedSlot(void *a, s32 b, void *c, s32 d);
const PlayerIdInlineCopy *PatternInfo_getAuthor(void *a);
const PlayerIdInlineCopy *PlayerData_getPlayerId(...);
const TownIdInlineCopy *PlayerId_GetTownId(PlayerIdInlineCopy *a);
s32 memcmp(const void *a, const void *b, u32 n);
BOOL PlayerId_equals(PlayerIdInlineCopy *a, PlayerIdInlineCopy *b);
void ActorTalkRequest_setPlayerNameSlot(void *self, void *a, s32 n);
void ActorTalkRequest_setTownNameSlot(void *self, void *a, s32 n);
void TownId_Destruct(TownIdInlineCopy *p);
void func_020942c8(PlayerIdInlineCopy *p);
void func_0206267c(ItemNameStorage *p);
void func_0206260c(ItemNameStorage *p);
void NpcLookAt_setTarget(void *self, u8 a, s32 b, s32 c, VecFx32 *v, s32 d, s32 e, u8 f);
s32 NpcActionCtrl_getAction(void *self);
BOOL NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u16 i, u16 j);
void NpcActionCtrl_requestStand(void *self, s32 a, u32 b);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
NpcActor *ActorTalkRequest_getTalkPlayer(void *self);
void TalkRequest_SetTargetDone(void *self);
void NpcActor_FindFreeUnitNear(VecFx32 *out, void *self, VecFx32 *v);
void NpcMoveCtrl_setTargetAngle(void *self, s32 v);
void NpcMoveCtrl_setWaypoint(void *self, VecFx32 *v);
void BlockMap_getWalkLinksAtPos(void *g, void *v);
s32 Vec_Equal(VecFx32 *a, void *b);
s32 Vec_NotEqual(VecFx32 *a, void *b);
s32 Math_CountDownU8(void *p);
s32 Math_CountDownU16(void *p);
s32 Math_AngleDiffAbs(s32 a, s32 b);
s32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(s32 a, s32 b);
BOOL AbleShop_IsPurchaseSynced();
BOOL Scene_GetPrevious();
void Ground_LockExit(s32 a);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void NpcMoveCtrl_setSpeedPreset(void *self, s32 a, s32 b, s32 c, s32 d);
void func_02071e74(void *self);
}

struct ItemNameStorage {
    u8 unk_00[0x24];
    ItemNameStorage() { func_0206267c(this); }
};

struct TownIdInlineCopy {
    u16 id;
    EncodedName8 name;
    TownIdInlineCopy(const TownIdInlineCopy &o) {
        id = o.id;
        name = o.name;
    }
};

struct PlayerIdInlineCopy {
    u16 id0;
    EncodedName8 name0;
    u16 id1;
    EncodedName8 name1;
    s8 gender;
    u8 pad_15;
    PlayerIdInlineCopy(const PlayerIdInlineCopy &o) {
        id0 = o.id0;
        name0 = o.name0;
        id1 = o.id1;
        name1 = o.name1;
        gender = o.gender;
        pad_15 = o.pad_15;
    }
};





class SpNpcMabelTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcMabelTalk::*Fn)(u32);
    typedef void (SpNpcMabelTalk::*Fn0)();

    SpNpcMabelTalk();
    virtual ~SpNpcMabelTalk();
    virtual void onMessageEnd(u32 a);
    virtual void onChoice(u32 a);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone(u32 id);

    void sellItemToPlayer();
    void openChoiceMenu(void *rec, s32 x);
    void onDeliveryItemChosen();
    void restoreTryOnDisplay();
    void waitTryOnDone();
    void onSellItemsChosen();
    void onTradePatternChosen();
    void onTakePatternChosen();
    void onDisplayPatternChosen();
    void onDesignNamed();
    void onDesignEditorDone();
    void setScript(s32 v);
    void onDramaMenuChoice();
    void onDeliveryChoice(s32 v);
    void onTryOnChoice(s32 v);
    void onItemPriceChoice(s32 v);
    void onDisposeChoice(s32 v);
    void onSellPriceChoice(s32 v);
    void onDesignConceptChoice(u32 a);
    void onDesignFeeChoice(u32 a);
    void onMenuChoice(u32 a);
    void dispatchShopChoice();
    void onOtherMessageEnd();
    void startTradePatternSelect();
    void startTakePatternSelect();
    void startDisplayPatternSelect();
    void openItemChoices();
    void payForSoldItems();
    void startSellItemSelect();
    void chargeDesignFee();
    void startDesignNameEntry();
    void startDesignEditor();
    void dispatchShopMessageEnd();
    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(s32 v);

    /* 0xac */ SpNpcMabel *owner;
    /* 0xb0 */ s32 topic;
    /* 0xb4 */ s32 script;
    /* 0xb8 */ s32 price;
    /* 0xbc */ s32 soldCount;
    /* 0xc0 */ u8 pad_c0[0xcc - 0xc0];
};









class SpNpcMabel : public SpNpcActor {
public:
    typedef BOOL (SpNpcMabel::*Fn)();

    SpNpcMabel() : selectedItemX(0), selectedItemZ(0), selectedItem(0xfff1) {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 cmd, u8 arg);
    virtual BOOL acceptsSelfRequestedInteraction(void *a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();

    BOOL tryStartFarewellTalk();
    BOOL tryStartShopItemTalk();
    BOOL pickShopItemAtPlayer();
    void setDesignConcept(u32 y);
    BOOL mainAct0F();
    BOOL setupAct0F();
    BOOL mainAct0E();
    BOOL setupAct0E();
    BOOL mainAct0D();
    BOOL setupAct0D();
    BOOL mainAct0C();
    BOOL setupAct0C();
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
    void changeAct(s32 state);

    /* 0x654 */ s32 act;
    /* 0x658 */ SpNpcMabelTalk talk;
    /* 0x724 */ s32 selectedItemX;
    /* 0x728 */ s32 selectedItemZ;
    /* 0x72c */ u8 pad_72c[0x730 - 0x72c];
    /* 0x730 */ u16 tryOnPrevItem;
    /* 0x732 */ u16 tryOnRemovedItem;
    /* 0x734 */ u16 selectedItem;
    /* 0x736 */ u8 pad_736[2];
    /* 0x738 */ Pattern pattern;
    /* 0x960 */ u16 dramaTimer;
    /* 0x962 */ u16 standBlend;
    /* 0x964 */ u8 purchasePending;
    /* 0x965 */ u8 dramaPending;
    /* 0x966 */ u8 patternSlot;
    /* 0x967 */ u8 approachTimer;
};

struct SpNpcMabelActEntry {
    BOOL (SpNpcMabel::*enter)();
    BOOL (SpNpcMabel::*exit)();
};

struct SpNpcMabelTalkScript {
    SpNpcMabelTalk::Fn0 fn;
    u8 flag;
    u8 pad[3];
};

struct SpNpcMabelChoiceHandler {
    u32 id;
    SpNpcMabelTalk::Fn fn;
};

struct SpNpcMabelMessageEndHandler {
    u32 id;
    SpNpcMabelTalk::Fn0 fn;
};


extern "C" {
extern char *sSpNpcMabelMsgKeys[3];
extern const u8 sSpNpcMabelDramaMenuMsgs[8];
extern const u8 sSpNpcMabelTopicMsgs[8];
extern const u8 sSpNpcMabelDramaMsgTable[28];
extern const u32 sSpNpcMabelDesignConcepts[10];
extern char sSpNpcMabelModelPath[];
extern char sSpNpcMabelTexturePath[];
extern SpNpcMabelChoiceMenu sSpNpcMabelItemChoiceMenus[4];
extern SpNpcMabelTalkScript sSpNpcMabelTalkScripts[10];
extern SpNpcMabelActEntry sSpNpcMabelActTable[16];
BOOL SpNpcMabel_IsDeliveryItem(u16 *p, s32 v);
SpNpcMabel *SpNpcMabel_Create();
}

extern "C" void _ZN14SpNpcMabelTalk12onMenuChoiceEj();
extern "C" void _ZN14SpNpcMabelTalk17onDesignFeeChoiceEj();
extern "C" void _ZN14SpNpcMabelTalk12onMenuChoiceEj();
extern "C" void _ZN14SpNpcMabelTalk21onDesignConceptChoiceEj();
extern "C" void _ZN10SpNpcMabel10setupAct0FEv();
extern "C" void _ZN14SpNpcMabelTalk17onSellPriceChoiceEi();
extern "C" void _ZN14SpNpcMabelTalk22onDisplayPatternChosenEv();
extern "C" void _ZN14SpNpcMabelTalk13onDesignNamedEv();
extern "C" void _ZN10SpNpcMabel9mainAct0EEv();
extern "C" void _ZN10SpNpcMabel10setupAct0EEv();
extern "C" void _ZN10SpNpcMabel10setupAct0DEv();
extern "C" void _ZN10SpNpcMabel10setupAct0CEv();
extern "C" void _ZN10SpNpcMabel10setupAct0BEv();
extern "C" void _ZN14SpNpcMabelTalk23startTradePatternSelectEv();
extern "C" void _ZN14SpNpcMabelTalk22startTakePatternSelectEv();
extern "C" void _ZN14SpNpcMabelTalk25startDisplayPatternSelectEv();
extern "C" void _ZN14SpNpcMabelTalk19onTakePatternChosenEv();
extern "C" void _ZN14SpNpcMabelTalk17onSellItemsChosenEv();
extern "C" void _ZN14SpNpcMabelTalk17onItemPriceChoiceEi();
extern "C" void _ZN14SpNpcMabelTalk17onOtherMessageEndEv();
extern "C" void _ZN14SpNpcMabelTalk17onDramaMenuChoiceEv();
extern "C" void _ZN14SpNpcMabelTalk13waitTryOnDoneEv();
extern "C" void _ZN10SpNpcMabel10setupAct00Ev();
extern "C" void _ZN10SpNpcMabel9mainAct00Ev();
extern "C" void _ZN14SpNpcMabelTalk20onDeliveryItemChosenEv();
extern "C" void _ZN14SpNpcMabelTalk22dispatchShopMessageEndEv();
extern "C" void _ZN14SpNpcMabelTalk20onTradePatternChosenEv();
extern "C" void _ZN14SpNpcMabelTalk18dispatchShopChoiceEv();
extern "C" void _ZN10SpNpcMabel10setupAct01Ev();
extern "C" void _ZN14SpNpcMabelTalk17startDesignEditorEv();
extern "C" void _ZN14SpNpcMabelTalk15onDisposeChoiceEi();
extern "C" void _ZN10SpNpcMabel9mainAct0FEv();
extern "C" void _ZN10SpNpcMabel9mainAct02Ev();
extern "C" void _ZN10SpNpcMabel10setupAct03Ev();
extern "C" void _ZN14SpNpcMabelTalk20startDesignNameEntryEv();
extern "C" void _ZN10SpNpcMabel9mainAct0DEv();
extern "C" void _ZN14SpNpcMabelTalk15chargeDesignFeeEv();
extern "C" void _ZN10SpNpcMabel9mainAct0CEv();
extern "C" void _ZN14SpNpcMabelTalk19startSellItemSelectEv();
extern "C" void _ZN10SpNpcMabel9mainAct0BEv();
extern "C" void _ZN14SpNpcMabelTalk12onMenuChoiceEj();
extern "C" void _ZN10SpNpcMabel9mainAct0AEv();
extern "C" void _ZN10SpNpcMabel10setupAct0AEv();
extern "C" void _ZN10SpNpcMabel9mainAct09Ev();
extern "C" void _ZN10SpNpcMabel10setupAct09Ev();
extern "C" void _ZN10SpNpcMabel9mainAct08Ev();
extern "C" void _ZN10SpNpcMabel10setupAct08Ev();
extern "C" void _ZN10SpNpcMabel9mainAct07Ev();
extern "C" void _ZN10SpNpcMabel9mainAct05Ev();
extern "C" void _ZN10SpNpcMabel10setupAct06Ev();
extern "C" void _ZN14SpNpcMabelTalk15payForSoldItemsEv();
extern "C" void _ZN10SpNpcMabel9mainAct06Ev();
extern "C" void _ZN10SpNpcMabel10setupAct05Ev();
extern "C" void _ZN10SpNpcMabel9mainAct04Ev();
extern "C" void _ZN10SpNpcMabel10setupAct04Ev();
extern "C" void _ZN10SpNpcMabel9mainAct03Ev();
extern "C" void _ZN10SpNpcMabel10setupAct07Ev();
extern "C" void _ZN14SpNpcMabelTalk15openItemChoicesEv();
extern "C" void _ZN10SpNpcMabel10setupAct02Ev();
extern "C" void _ZN10SpNpcMabel9mainAct01Ev();
extern "C" void _ZN14SpNpcMabelTalk12onMenuChoiceEj();
extern "C" void _ZN14SpNpcMabelTalk16onDeliveryChoiceEi();
extern "C" void _ZN14SpNpcMabelTalk18onDesignEditorDoneEv();
extern "C" void _ZN14SpNpcMabelTalk13onTryOnChoiceEi();
extern "C" void _ZN14SpNpcMabelTalk19restoreTryOnDisplayEv();

// Data declarations; the definitions below are placed so that the compiler emits the objects in the
// original order (definition order sets the creation order).
extern "C" void *data_ov049_0225ba58[2];
extern "C" void *data_ov049_0225bba8[2];
extern "C" void *data_ov049_0225bc40[2];
extern "C" void *data_ov049_0225ba90[2];
extern "C" void *data_ov049_0225bae0[2];
extern "C" u8 data_ov049_0225ba48[4];
extern "C" void *data_ov049_0225ba98[2];
extern "C" void *data_ov049_0225bb00[2];
extern "C" const u8 sSpNpcMabelTopicMsgs[8];
extern "C" void *data_ov049_0225bb08[2];
extern "C" void *data_ov049_0225baa0[2];
extern "C" void *data_ov049_0225ba60[2];
extern "C" char sSpNpcMabelSequence4Key[];
extern "C" void *data_ov049_0225bb30[2];
extern "C" void *data_ov049_0225ba50[2];
extern "C" char sSpNpcMabelDramaKey[];
extern "C" void *data_ov049_0225ba80[2];
extern "C" void *data_ov049_0225bc50[2];
extern "C" void *data_ov049_0225bc38[2];
extern "C" void *data_ov049_0225baf8[2];
extern "C" u8 data_ov049_0225ba44[4];
extern "C" void *data_ov049_0225bc20[2];
extern "C" void *data_ov049_0225bc18[2];
extern "C" void *data_ov049_0225bc10[2];
extern "C" void *data_ov049_0225bbd0[2];
extern "C" void *data_ov049_0225bbf0[2];
extern "C" void *data_ov049_0225bc00[2];
extern "C" void *data_ov049_0225bc08[2];
extern "C" void *data_ov049_0225bbe8[2];
extern "C" void *data_ov049_0225bbe0[2];
extern "C" void *data_ov049_0225bbd8[2];
extern "C" void *data_ov049_0225bae8[2];
extern "C" void *data_ov049_0225bbc8[2];
extern "C" void *data_ov049_0225bbc0[2];
extern "C" void *data_ov049_0225bbb8[2];
extern "C" char *sSpNpcMabelMsgKeys[3];
extern "C" u8 data_ov049_0225ba4c[4];
extern "C" void *data_ov049_0225bb90[2];
extern "C" char sSpNpcMabelModelPath[];
extern "C" void *data_ov049_0225bb80[2];
extern "C" void *data_ov049_0225bb78[2];
extern "C" void *data_ov049_0225bb70[2];
extern "C" void *data_ov049_0225bb68[2];
extern "C" void *data_ov049_0225bb60[2];
extern "C" void *data_ov049_0225bb58[2];
extern "C" void *data_ov049_0225bb50[2];
extern "C" void *data_ov049_0225bb48[2];
extern "C" void *data_ov049_0225bb40[2];
extern "C" SpNpcMabelChoiceMenu sSpNpcMabelItemChoiceMenus[4];
extern "C" void *data_ov049_0225ba70[2];
extern "C" void *data_ov049_0225bc48[2];
extern "C" void *data_ov049_0225bb20[2];
extern "C" char sSpNpcMabelTexturePath[];
extern "C" void *data_ov049_0225bb98[2];
extern "C" void *data_ov049_0225bbf8[2];
extern "C" void *data_ov049_0225bc28[2];
extern "C" void *data_ov049_0225baf0[2];
extern "C" u8 data_ov049_0225ba40[4];
extern "C" const u8 sSpNpcMabelDramaMenuMsgs[8];
extern "C" void *data_ov049_0225bbb0[2];
extern "C" void *data_ov049_0225bba0[2];
extern "C" void *data_ov049_0225bad0[2];
extern "C" void *data_ov049_0225bb88[2];
extern "C" void *data_ov049_0225bac0[2];
extern "C" void *data_ov049_0225bab8[2];
extern "C" void *data_ov049_0225bab0[2];
extern "C" const u32 sSpNpcMabelDesignConcepts[10];
extern "C" void *data_ov049_0225bb38[2];
extern "C" void *data_ov049_0225bb10[2];
extern "C" SpNpcMabelTalkScript sSpNpcMabelTalkScripts[10];
extern "C" void *data_ov049_0225ba78[2];
extern "C" char sSpNpcMabelKey[];
extern "C" void *data_ov049_0225bad8[2];
extern "C" void *data_ov049_0225bac8[2];
extern "C" void *data_ov049_0225ba88[2];
extern "C" void *data_ov049_0225baa8[2];
extern "C" void *data_ov049_0225bb28[2];
extern "C" void *data_ov049_0225bc30[2];
extern "C" SpNpcMabelActEntry sSpNpcMabelActTable[16];
extern "C" void *data_ov049_0225ba68[2];
extern "C" const u8 sSpNpcMabelDramaMsgTable[28];
extern "C" void *data_ov049_0225bb18[2];
extern "C" ActorProfile sSpNpcMabelProfile;

extern "C" void *data_ov049_0225bba8[2] = {(void *)_ZN10SpNpcMabel9mainAct09Ev, 0};

extern "C" void *data_ov049_0225ba58[2] = {(void *)_ZN14SpNpcMabelTalk17onDesignFeeChoiceEj, 0};

extern "C" void *data_ov049_0225bc40[2] = {(void *)_ZN14SpNpcMabelTalk18onDesignEditorDoneEv, 0};

extern "C" void *data_ov049_0225ba90[2] = {(void *)_ZN10SpNpcMabel9mainAct0EEv, 0};

extern "C" void *data_ov049_0225bae0[2] = {(void *)_ZN14SpNpcMabelTalk17onItemPriceChoiceEi, 0};

extern "C" u8 data_ov049_0225ba48[4] = {0xd3, 0xe3, 0xd0, 0x00};

extern "C" void *data_ov049_0225ba98[2] = {(void *)_ZN10SpNpcMabel10setupAct0EEv, 0};

extern "C" void *data_ov049_0225bb00[2] = {(void *)_ZN10SpNpcMabel10setupAct00Ev, 0};

extern "C" const u8 sSpNpcMabelTopicMsgs[8] = {0x00, 0x01, 0x04, 0x02, 0x28, 0x31, 0x00, 0x00};

extern "C" void *data_ov049_0225bb08[2] = {(void *)_ZN10SpNpcMabel9mainAct00Ev, 0};

extern "C" void *data_ov049_0225baa0[2] = {(void *)_ZN10SpNpcMabel10setupAct0DEv, 0};

extern "C" void *data_ov049_0225ba60[2] = {(void *)_ZN14SpNpcMabelTalk12onMenuChoiceEj, 0};

extern "C" char sSpNpcMabelSequence4Key[] = "sp_etc_sequence4";

extern "C" void *data_ov049_0225bb30[2] = {(void *)_ZN10SpNpcMabel10setupAct01Ev, 0};

extern "C" void *data_ov049_0225ba50[2] = {(void *)_ZN14SpNpcMabelTalk12onMenuChoiceEj, 0};

extern "C" char sSpNpcMabelDramaKey[] = "sp_npc_drama4";

extern "C" void *data_ov049_0225ba80[2] = {(void *)_ZN14SpNpcMabelTalk22onDisplayPatternChosenEv, 0};

extern "C" void *data_ov049_0225bc50[2] = {(void *)_ZN14SpNpcMabelTalk19restoreTryOnDisplayEv, 0};





static inline BOOL Unk_ov049_02258ee0_Flags() {
    if (gTouchPrevHeld[0] && gTouchPrevChanged[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov049_02258ee0_Eq(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

// ---- dialog (unit 02259774)

static inline BOOL Unk_ov049_02259774_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov049_02259dd8_VR(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov049_0225a434_R2(SpNpcMabel *o, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (o->selectedItem >= lo && o->selectedItem <= hi) {
        r = TRUE;
    }
    return r;
}

struct Unk_ov049_0225a714_Bits {
    u8 lo : 2;
    u8 mid : 3;
    u8 hi : 3;
};

extern "C" SpNpcMabel *SpNpcMabel_Create() { return new SpNpcMabel; }

BOOL SpNpcMabel::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner((s32)this);
    setColliderSize(0x119a, 0x2000);
    setCollisionRadius(0xf00);
    standBlend = data_020c6cc8;
    NpcMoveCtrl_setSpeedPreset(&moveCtrl, 2, 0x333, 0xcc, 0x133);
    return TRUE;
}

BOOL SpNpcMabel::onCreate() {
    s32 v;
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (NetArea_IsLocalOwner()) {
            collider.groups |= 2;
            position.x = 0xd000;
            position.z = 0x19000;
            rotY = 0;
            moveAngleY = 0;
            changeAct(10);
        } else {
            collider.groups |= 2;
            changeAct(8);
        }
    } else {
        if (Scene_GetPrevious() == 0) {
            changeAct(0);
        } else {
            changeAct(1);
        }
        Ground_LockExit(0);
        if (Talk_IsDramaPending(this, &v, 2)) {
            dramaPending = 1;
        }
    }
    return TRUE;
}

u8 *SpNpcMabel::getTexturePath() { return (u8 *)sSpNpcMabelTexturePath; }

u8 *SpNpcMabel::getModelPath() { return (u8 *)sSpNpcMabelModelPath; }

BOOL SpNpcMabel::updateAct() {
    BOOL r = FALSE;
    if (((SpNpcMabelActEntry *)&sSpNpcMabelActTable[0].exit)[act].enter) {
        r = (this->*sSpNpcMabelActTable[act].exit)();
    }
    return r;
}

void SpNpcMabel::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcMabelActTable[state].enter) {
        ok = (this->*sSpNpcMabelActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcMabel::setupAct00() {
    if (Talk_CheckAndSetPlayerFlag(0xf, 1)) {
        talk.setTopic(1);
    } else {
        talk.setTopic(0);
    }
    return TRUE;
}

BOOL SpNpcMabel::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

// ---- owner (unit 0225b3a8)

BOOL SpNpcMabel::setupAct01() {
    s32 v;
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    standBlend = data_020c6cc8;
    dramaTimer = Random_GlobalBelow(5) * 20 + 100;
    if (Talk_IsDramaPending(this, &v, 2)) {
        dramaPending = 1;
    } else {
        dramaPending = 0;
    }
    return TRUE;
}

BOOL SpNpcMabel::mainAct01() {
    VecFx32 *pv = PlayerActor_GetBodyPos(4);
    VecFx32 v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    VecFx32 out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 r6 = getDistanceToPlayer(4);
    s32 t = getAngleToPlayer(4);
    s32 r4 = Math_AngleDiffAbs(rotY, t);
    BlockMap_getWalkLinksAtPos(gSceneBlockMap, &position);
    if (r6 > 0x5000 && Vec_NotEqual(&out, &position)) {
        changeAct(3);
    } else if (r4 > 0x2000) {
        changeAct(2);
    }
    if (tryStartFarewellTalk()) {
        return TRUE;
    }
    if (tryStartShopItemTalk()) {
        return TRUE;
    }
    if (dramaPending != 0) {
        if (Math_CountDownU16(&dramaTimer) == 0) {
            changeAct(7);
        }
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct02() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMabel::mainAct02() {
    if (tryStartFarewellTalk()) {
        return TRUE;
    }
    if (tryStartShopItemTalk()) {
        return TRUE;
    }
    VecFx32 *pv = PlayerActor_GetBodyPos(4);
    VecFx32 v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    VecFx32 out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 r6 = getDistanceToPlayer(4);
    s32 r4 = getAngleToPlayer(4);
    Math_AngleDiffAbs(rotY, r4);
    BlockMap_getWalkLinksAtPos(gSceneBlockMap, &position);
    if (r6 > 0x5000) {
        if (Vec_NotEqual(&out, &position)) {
            changeAct(3);
        }
    }
    NpcMoveCtrl_setTargetAngle(&moveCtrl, r4);
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct03() {
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMabel::mainAct03() {
    if (tryStartFarewellTalk()) {
        return TRUE;
    }
    if (tryStartShopItemTalk()) {
        return TRUE;
    }
    VecFx32 *pv = PlayerActor_GetBodyPos(4);
    VecFx32 v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    VecFx32 out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 t = getDistanceToPlayer(4);
    BlockMap_getWalkLinksAtPos(gSceneBlockMap, &position);
    if (t > 0x6000) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, &out);
    if (t <= 0x5000 || Vec_Equal(&out, &position) != 0) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct04() {
    NpcActor *p = ActorTalkRequest_getTalkPlayer(&talk);
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL SpNpcMabel::mainAct04() {
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return TRUE;
    }
    if (purchasePending != 0 && AbleShop_IsPurchaseSynced() == 0) {
        return TRUE;
    }
    TalkRequest_SetTargetDone(this);
    changeAct(6);
    return TRUE;
}

BOOL SpNpcMabel::setupAct05() {
    NpcActor *p = ActorTalkRequest_getTalkPlayer(&talk);
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 1);
    return TRUE;
}

BOOL SpNpcMabel::mainAct05() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        changeAct(6);
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct06() { return TRUE; }

BOOL SpNpcMabel::mainAct06() { return TRUE; }

BOOL SpNpcMabel::setupAct07() {
    NpcActionCtrl_requestAction(&actionCtrl, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMabel::mainAct07() {
    if (tryStartFarewellTalk()) {
        return TRUE;
    }
    if (tryStartShopItemTalk()) {
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

BOOL SpNpcMabel::setupAct08() { return TRUE; }

BOOL SpNpcMabel::mainAct08() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b) && ((x = a), x == (t = gCommManager->myAid)) && x == b) {
            netSetSlotsIfOwner(1, t, t);
            talk.resetMsg();
            ActorTalkRequest_setTalkPlayer(&talk, getPlayerActor(4));
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
                talk.setTopic(2);
            }
            changeAct(4);
        } else if (NetArea_IsLocalOwner() && b == 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(0xa);
        }
    } else {
        tryStartShopItemTalk();
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct09() { return TRUE; }

BOOL SpNpcMabel::mainAct09() {
    if (isNetOwner()) {
        s32 a = 4;
        s32 b = 4;
        if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b) && a == 4 && NetArea_IsLocalOwner()) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
            changeAct(0xa);
        }
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct0A() {
    NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
    return TRUE;
}

BOOL SpNpcMabel::mainAct0A() {
    s32 t = getAngleToPlayer(4);
    if (Math_AngleDiffAbs(rotY, t) >= data_020c6cc0) {
        changeAct(0xb);
    } else {
        tryStartShopItemTalk();
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct0B() {
    s32 f = getAngleToPlayer(4);
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, f, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMabel::mainAct0B() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(0xa);
        }
    }
    return TRUE;
}

BOOL SpNpcMabel::setupAct0C() { return TRUE; }

BOOL SpNpcMabel::mainAct0C() { return TRUE; }

BOOL SpNpcMabel::setupAct0D() {
    approachTimer = 0x32;
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMabel::mainAct0D() {
    VecFx32 *pv = PlayerActor_GetBodyPos(4);
    VecFx32 v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    VecFx32 out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 t = getDistanceToPlayer(4);
    BlockMap_getWalkLinksAtPos(gSceneBlockMap, &position);
    if (t > 0x6000) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, &out);
    if (t <= 0x5000 || Vec_Equal(&out, &position) != 0 || Math_CountDownU8(&approachTimer) == 0) {
        talk.resetMsg();
        ActorTalkRequest_setTalkPlayer(&talk, getPlayerActor(4));
        changeAct(4);
    }
    return TRUE;
}

void SpNpcMabel::onJoinTalk() { changeAct(0xe); }

void SpNpcMabel::onLeaveTalk() {
    NpcLookAt_setTarget(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    changeAct(1);
}

BOOL SpNpcMabel::setupAct0E() { return setupAct01(); }

BOOL SpNpcMabel::mainAct0E() { return TRUE; }

BOOL SpNpcMabel::setupAct0F() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

// ---- owner states and dialog base (unit 0225aa48)

BOOL SpNpcMabel::mainAct0F() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            NpcActionCtrl_requestStand(&actionCtrl, 1, standBlend);
        }
    }
    NpcMoveCtrl_setTargetAngle(&moveCtrl, getAngleToPlayer(4));
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

SpNpcMabelTalk::SpNpcMabelTalk() {}

SpNpcMabelTalk::~SpNpcMabelTalk() {}

void SpNpcMabelTalk::attachOwner(s32 v) {
    resetMsg();
    owner = (SpNpcMabel *)v;
}

void SpNpcMabelTalk::setTopic(s32 v) { topic = v; }

// ---------------------------------------------------------------------------------------------------------------------
// Menu class

s32 SpNpcMabelTalk::getTopic() { return topic; }

void SpNpcMabelTalk::start(TalkStartMsg *out) {
    void *r7 = PlayerData_GetCurrent();
    void *r6 = SickVillagerRecord_getParcelErrand(PlayerData_getErrands());
    u8 buf[4];
    if (GameStart_IsActive() != 0 && getTopic() == 2) {
        out->msgKey = (const char *)sSpNpcMabelMsgKeys[2];
        out->msgIndex = 6;
        return;
    }
    if (getTopic() == 2 && ParcelErrand_IsFor(r6, &owner->npcHandle) != 0) {
        out->msgIndex = 0x2e;
        out->msgKey = (const char *)sSpNpcMabelMsgKeys[0];
        return;
    }
    if (getTopic() == 2 && Talk_IsDramaPending(owner, buf, 2) != 0) {
        owner->dramaPending = 1;
        Unk_ov049_0225a714_Bits *b = (Unk_ov049_0225a714_Bits *)buf;
        out->msgIndex = *(sSpNpcMabelDramaMsgTable + b->mid * 7 + b->hi);
        out->msgKey = (const char *)sSpNpcMabelMsgKeys[1];
        return;
    }
    out->msgIndex = sSpNpcMabelTopicMsgs[topic];
    out->msgKey = (const char *)sSpNpcMabelMsgKeys[0];
    if (getTopic() == 4) {
        price = (s32)Item_GetPrice(&owner->selectedItem);
        ActorTalkRequest_setNumberSlot(this, price, 0, 0xa, 1, 0);
        ActorTalkRequest_setItemNameSlot(this, &owner->selectedItem, 0, 7);
        if (GameStart_IsActive() != 0) {
            out->msgKey = (const char *)sSpNpcMabelMsgKeys[2];
            out->msgIndex = 0x1e;
        }
    } else if (getTopic() == 5) {
        u8 *g = gSaveData;
        SpNpcMabel *o = owner;
        BOOL f = FALSE;
        if (o->selectedItem >= 0x3e04 && o->selectedItem <= 0x3e23) {
            f = TRUE;
        }
        u32 v = o->selectedItem;
        s32 t;
        if (f) {
            t = (s32)(v - 0x3e04) >> 2;
        } else {
            t = -1;
        }
        owner->patternSlot = t;
        void *q6 = AbleSistersPatterns_getPattern(g + 0xfafc, owner->patternSlot);
        ItemNameStorage q;
        PatternInfo_getTitle(Pattern_getInfo(q6), &q);
        TalkWindowState_setNamedSlot(window, 2, &q, 7);
        PlayerIdInlineCopy a(*PatternInfo_getAuthor(Pattern_getInfo(q6)));
        PlayerIdInlineCopy b(*PlayerData_getPlayerId(r7));
        TownIdInlineCopy c(*PlayerId_GetTownId(&a));
        TownIdInlineCopy d(*PlayerId_GetTownId(&b));
        if (GameStart_IsActive() != 0) {
            out->msgKey = (const char *)sSpNpcMabelMsgKeys[2];
            out->msgIndex = 0x1d;
        } else if (c.id != d.id || memcmp(&c.name, &d.name, 8) != 0) {
            ActorTalkRequest_setPlayerNameSlot(this, &a, 2);
            ActorTalkRequest_setTownNameSlot(this, &c, 3);
            out->msgIndex = 0x33;
        } else if (a.id0 == b.id0 && memcmp(&a.name0, &b.name0, 8) == 0 && PlayerId_equals(&a, &b) != 0) {
        } else {
            ActorTalkRequest_setPlayerNameSlot(this, &a, 2);
            out->msgIndex = 0x32;
        }
        TownId_Destruct(&d);
        TownId_Destruct(&c);
        func_020942c8(&b);
        func_020942c8(&a);
        func_0206260c(&q);
    }
}

void SpNpcMabelTalk::onMessageEnd(u32 a) {
    if (getTopic() != 2 || !GameStart_IsActive()) {
        static SpNpcMabelTalk::Fn tbl[3] = {
            *(SpNpcMabelTalk::Fn *)data_ov049_0225bb18,
            *(SpNpcMabelTalk::Fn *)data_ov049_0225bae8,
        };
        char *s = sSpNpcMabelMsgKeys[0];
        u32 n = strlen(s);
        BOOL r;
        if (strncmp((u8 *)this + 4, s, n) != 0) {
            r = TRUE;
        } else {
            r = FALSE;
        }
        (this->*tbl[r])(a);
    }
}

extern "C" void *data_ov049_0225bc38[2] = {(void *)_ZN14SpNpcMabelTalk16onDeliveryChoiceEi, 0};

extern "C" void *data_ov049_0225baf8[2] = {(void *)_ZN14SpNpcMabelTalk13waitTryOnDoneEv, 0};

extern "C" u8 data_ov049_0225ba44[4] = {0xd3, 0xe2, 0xd0, 0x00};

extern "C" void *data_ov049_0225bc20[2] = {(void *)_ZN10SpNpcMabel10setupAct02Ev, 0};

extern "C" void *data_ov049_0225bc18[2] = {(void *)_ZN14SpNpcMabelTalk15openItemChoicesEv, 0};

extern "C" void *data_ov049_0225bc10[2] = {(void *)_ZN10SpNpcMabel10setupAct07Ev, 0};

extern "C" void *data_ov049_0225bbd0[2] = {(void *)_ZN10SpNpcMabel9mainAct05Ev, 0};

extern "C" void *data_ov049_0225bbf0[2] = {(void *)_ZN10SpNpcMabel10setupAct05Ev, 0};

extern "C" void *data_ov049_0225bc00[2] = {(void *)_ZN10SpNpcMabel10setupAct04Ev, 0};

extern "C" void *data_ov049_0225bc08[2] = {(void *)_ZN10SpNpcMabel9mainAct03Ev, 0};

extern "C" void *data_ov049_0225bbe8[2] = {(void *)_ZN10SpNpcMabel9mainAct06Ev, 0};

extern "C" void *data_ov049_0225bbe0[2] = {(void *)_ZN14SpNpcMabelTalk15payForSoldItemsEv, 0};

extern "C" void *data_ov049_0225bbd8[2] = {(void *)_ZN10SpNpcMabel10setupAct06Ev, 0};

extern "C" void *data_ov049_0225bae8[2] = {(void *)_ZN14SpNpcMabelTalk17onOtherMessageEndEv, 0};

extern "C" void *data_ov049_0225bbc8[2] = {(void *)_ZN10SpNpcMabel9mainAct07Ev, 0};

extern "C" void *data_ov049_0225bbc0[2] = {(void *)_ZN10SpNpcMabel10setupAct08Ev, 0};

extern "C" void *data_ov049_0225bbb8[2] = {(void *)_ZN10SpNpcMabel9mainAct08Ev, 0};

extern "C" char *sSpNpcMabelMsgKeys[3] = {sSpNpcMabelKey, sSpNpcMabelDramaKey, sSpNpcMabelSequence4Key};

extern "C" u8 data_ov049_0225ba4c[4] = {0xd3, 0xe1, 0xd0, 0x00};

void SpNpcMabelTalk::dispatchShopMessageEnd() {
    static SpNpcMabelMessageEndHandler tbl[9] = {
        {0xe, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bb38},
        {0x11, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bb60},
        {0x12, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bb70},
        {0x14, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bb80},
        {0x1e, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bbe0},
        {0x28, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bc18},
        {0x36, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bac8},
        {0x26, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bac0},
        {0x23, *(SpNpcMabelTalk::Fn0 *)data_ov049_0225bab8},
    };
    u32 i = 0;
    u8 *idp = &msgIndex;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((SpNpcMabelMessageEndHandler *)((u32)tbl + i * 12))->fn)();
    }
    i++;
test0:
    if (i < 9) goto loop0;
}

void SpNpcMabelTalk::startDesignEditor() {
    ActorTalkRequest_setSubSceneKind(this, 4, 0);
    ActorTalkRequest_openSubScene(this, 2);
    setScript(1);
}

void SpNpcMabelTalk::startDesignNameEntry() {
    ActorTalkRequest_setSubSceneKind(this, 0xb, 0);
    ActorTalkRequest_openSubScene(this, 2);
    setScript(2);
}

void SpNpcMabelTalk::chargeDesignFee() {
    NpcActor_ChargePlayer(owner, 0x15e);
}

void SpNpcMabelTalk::startSellItemSelect() {
    ActorTalkRequest_setSubSceneKind(this, 0x1e, 0);
    ActorTalkRequest_openSubScene(this, 2);
    setScript(6);
}

void SpNpcMabelTalk::payForSoldItems() {
    NpcActor_PayPlayer(owner, price);
}

void SpNpcMabelTalk::openItemChoices() {
    BOOL f = Unk_ov049_0225a434_R2(owner, 0x11a8, 0x12a7);
    u32 v = owner->selectedItem;
    if (f) {
        openChoiceMenu(sSpNpcMabelItemChoiceMenus, sSpNpcMabelItemChoiceMenus[0].count - 1);
    } else if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x13a8 && v <= 0x13c7)) {
        openChoiceMenu(&sSpNpcMabelItemChoiceMenus[1], sSpNpcMabelItemChoiceMenus[1].count - 1);
    } else if (v >= 0x1431 && v <= 0x1470) {
        openChoiceMenu(&sSpNpcMabelItemChoiceMenus[2], sSpNpcMabelItemChoiceMenus[2].count - 1);
    } else if (v >= 0x1380 && v <= 0x139f) {
        openChoiceMenu(&sSpNpcMabelItemChoiceMenus[3], sSpNpcMabelItemChoiceMenus[3].count - 1);
    }
}

void SpNpcMabelTalk::startDisplayPatternSelect() {
    ActorTalkRequest_setSubSceneKind(this, 5, 0);
    ActorTalkRequest_openSubScene(this, 2);
    setScript(3);
}

void SpNpcMabelTalk::startTakePatternSelect() {
    ActorTalkRequest_setSubSceneKind(this, 7, 0);
    ActorTalkRequest_openSubScene(this, 2);
    setScript(4);
}

void SpNpcMabelTalk::startTradePatternSelect() {
    ActorTalkRequest_setSubSceneKind(this, 8, 0);
    ActorTalkRequest_openSubScene(this, 2);
    setScript(5);
}

void SpNpcMabelTalk::onOtherMessageEnd() {}

extern "C" void *data_ov049_0225bb90[2] = {(void *)_ZN14SpNpcMabelTalk12onMenuChoiceEj, 0};

extern "C" char sSpNpcMabelModelPath[] = "npc_sp/model/hgh.nsbmd";

extern "C" void *data_ov049_0225bb80[2] = {(void *)_ZN14SpNpcMabelTalk19startSellItemSelectEv, 0};

extern "C" void *data_ov049_0225bb78[2] = {(void *)_ZN10SpNpcMabel9mainAct0CEv, 0};

extern "C" void *data_ov049_0225bb70[2] = {(void *)_ZN14SpNpcMabelTalk15chargeDesignFeeEv, 0};

extern "C" void *data_ov049_0225bb68[2] = {(void *)_ZN10SpNpcMabel9mainAct0DEv, 0};

extern "C" void *data_ov049_0225bb60[2] = {(void *)_ZN14SpNpcMabelTalk20startDesignNameEntryEv, 0};

extern "C" void *data_ov049_0225bb58[2] = {(void *)_ZN10SpNpcMabel10setupAct03Ev, 0};

extern "C" void *data_ov049_0225bb50[2] = {(void *)_ZN10SpNpcMabel9mainAct02Ev, 0};

extern "C" void *data_ov049_0225bb48[2] = {(void *)_ZN10SpNpcMabel9mainAct0FEv, 0};

extern "C" void *data_ov049_0225bb40[2] = {(void *)_ZN14SpNpcMabelTalk15onDisposeChoiceEi, 0};

extern "C" SpNpcMabelChoiceMenu sSpNpcMabelItemChoiceMenus[4] = {
    {data_ov049_0225ba4c, 3},
    {data_ov049_0225ba44, 3},
    {data_ov049_0225ba48, 3},
    {data_ov049_0225ba40, 2},
};

extern "C" void *data_ov049_0225ba70[2] = {(void *)_ZN10SpNpcMabel10setupAct0FEv, 0};

extern "C" void *data_ov049_0225bc48[2] = {(void *)_ZN14SpNpcMabelTalk13onTryOnChoiceEi, 0};

extern "C" void *data_ov049_0225bb20[2] = {(void *)_ZN14SpNpcMabelTalk20onTradePatternChosenEv, 0};

void SpNpcMabelTalk::onChoice(u32 a) {
    if (getTopic() != 2 || !GameStart_IsActive()) {
        static SpNpcMabelTalk::Fn tbl[3] = {
            *(SpNpcMabelTalk::Fn *)data_ov049_0225bb28,
            *(SpNpcMabelTalk::Fn *)data_ov049_0225baf0,
        };
        char *s = sSpNpcMabelMsgKeys[0];
        u32 n = strlen(s);
        BOOL r;
        if (strncmp((u8 *)this + 4, s, n) != 0) {
            r = TRUE;
        } else {
            r = FALSE;
        }
        (this->*tbl[r])(a);
    }
}

extern "C" char sSpNpcMabelTexturePath[] = "npc_sp/model/hgh_tex.nsbtx";

extern "C" void *data_ov049_0225bb98[2] = {(void *)_ZN10SpNpcMabel9mainAct0AEv, 0};

extern "C" void *data_ov049_0225bbf8[2] = {(void *)_ZN10SpNpcMabel9mainAct04Ev, 0};

extern "C" void *data_ov049_0225bc28[2] = {(void *)_ZN10SpNpcMabel9mainAct01Ev, 0};

extern "C" void *data_ov049_0225baf0[2] = {(void *)_ZN14SpNpcMabelTalk17onDramaMenuChoiceEv, 0};

extern "C" u8 data_ov049_0225ba40[4] = {0xd3, 0xd0, 0x00, 0x00};

extern "C" const u8 sSpNpcMabelDramaMenuMsgs[8] = {0x0b, 0x14, 0x00, 0x05, 0x06, 0x00, 0x00, 0x00};

extern "C" void *data_ov049_0225bbb0[2] = {(void *)_ZN10SpNpcMabel10setupAct09Ev, 0};

extern "C" void *data_ov049_0225bba0[2] = {(void *)_ZN10SpNpcMabel10setupAct0AEv, 0};

extern "C" void *data_ov049_0225bad0[2] = {(void *)_ZN14SpNpcMabelTalk19onTakePatternChosenEv, 0};

extern "C" void *data_ov049_0225bb88[2] = {(void *)_ZN10SpNpcMabel9mainAct0BEv, 0};

extern "C" void *data_ov049_0225bac0[2] = {(void *)_ZN14SpNpcMabelTalk22startTakePatternSelectEv, 0};

extern "C" void *data_ov049_0225bab8[2] = {(void *)_ZN14SpNpcMabelTalk23startTradePatternSelectEv, 0};

extern "C" void *data_ov049_0225bab0[2] = {(void *)_ZN10SpNpcMabel10setupAct0BEv, 0};

extern "C" const u32 sSpNpcMabelDesignConcepts[10] = {8, 2, 6, 3, 4, 9, 1, 0, 5, 7};

extern "C" void *data_ov049_0225bb38[2] = {(void *)_ZN14SpNpcMabelTalk17startDesignEditorEv, 0};

void SpNpcMabelTalk::dispatchShopChoice() {
    static SpNpcMabelChoiceHandler tbl[11] = {
        {4, *(SpNpcMabelTalk::Fn *)data_ov049_0225bb90},
        {0x15, *(SpNpcMabelTalk::Fn *)data_ov049_0225bc30},
        {0x1a, *(SpNpcMabelTalk::Fn *)data_ov049_0225ba50},
        {0xb, *(SpNpcMabelTalk::Fn *)data_ov049_0225ba58},
        {0x10, *(SpNpcMabelTalk::Fn *)data_ov049_0225ba68},
        {0x1b, *(SpNpcMabelTalk::Fn *)data_ov049_0225ba78},
        {0x17, *(SpNpcMabelTalk::Fn *)data_ov049_0225bb40},
        {0x28, *(SpNpcMabelTalk::Fn *)data_ov049_0225bae0},
        {0x2d, *(SpNpcMabelTalk::Fn *)data_ov049_0225bc48},
        {0x2e, *(SpNpcMabelTalk::Fn *)data_ov049_0225bc38},
        {0x38, *(SpNpcMabelTalk::Fn *)data_ov049_0225ba60},
    };
    u32 i = 0;
    u8 *idp = &msgIndex;
    goto test0;
loop0:
    u32 off = i * 12;
    u32 id = tbl[i].id;
    if (id == *idp) {
        u32 arg = ChoiceList_getResult(TalkWindowState_getChoiceList(window));
        (this->*((SpNpcMabelChoiceHandler *)((u32)tbl + off))->fn)(arg);
    }
    i++;
test0:
    if (i < 0xb) goto loop0;
}

void SpNpcMabelTalk::onMenuChoice(u32 a) {
    u8 buf[2];
    void *g = gCommManager;
    if (CommManager_isOnline(g) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (a == 2) {
            buf[0] = 0x1c;
            TalkWindowState_setNextMessage(window, &buf[0], sSpNpcMabelMsgKeys[0]);
        } else if (a == 0) {
            buf[1] = 0x37;
            TalkWindowState_setNextMessage(window, &buf[1], sSpNpcMabelMsgKeys[0]);
        }
    }
    if (CommManager_isOnline(g) == 0 && *DebugVar_GetPtr(0, 0x4a) == 0) {
        s32 r = NpcRegistry_FindSpNpc(5);
        if (r != 0) {
            ActorTalkRequest_setPartnerActor(this, r);
        }
    }
}

void SpNpcMabelTalk::onDesignFeeChoice(u32 a) {
    u8 buf[2];
    if (a == 0) {
        if (NpcActor_CanPlayerPay(owner, 0x15e) == 0) {
            buf[0] = 0xd;
            TalkWindowState_setNextMessage(window, &buf[0], sSpNpcMabelMsgKeys[0]);
        } else {
            buf[1] = 0xe;
            TalkWindowState_setNextMessage(window, &buf[1], sSpNpcMabelMsgKeys[0]);
        }
    }
}

// ---- dialog (unit 0225a0e4)

void SpNpcMabelTalk::onDesignConceptChoice(u32 a) {
    s32 idx = 0;
    switch (a) {
    case 0:
        idx = Random_GlobalBelow(3);
        break;
    case 1:
        idx = Random_GlobalBelow(3) + 3;
        break;
    case 2:
        idx = Random_GlobalBelow(4) + 6;
        break;
    }
    owner->setDesignConcept(sSpNpcMabelDesignConcepts[idx]);
}

void SpNpcMabelTalk::onSellPriceChoice(s32 v) {
    u8 m[3];
    switch (v) {
    case 0:
        switch (NpcActor_CheckPayoutFits(owner, price, soldCount)) {
        case 0:
            NpcActor_PayPlayer(owner, price);
            m[0] = 0x1a;
            TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
            break;
        case 1:
            m[1] = 0x1e;
            TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
            break;
        case 2:
            m[2] = 0x38;
            TalkWindowState_setNextMessage(window, &m[2], sSpNpcMabelMsgKeys[0]);
            MenuCtrl_ReturnChosenItems(0);
            break;
        }
        break;
    case 1:
        MenuCtrl_ReturnChosenItems(0);
        break;
    }
}

void SpNpcMabelTalk::onDisposeChoice(s32 v) {
    if (v == 1) {
        MenuCtrl_ReturnChosenItems(0);
    }
}

void SpNpcMabelTalk::onItemPriceChoice(s32 v) {
    u8 m[3];
    u16 A[2];
    u16 B[2];
    u16 C[2];
    void *h = PlayerData_GetCurrent();
    if (v == 0) {
        s32 r = Pocket_FindEmpty();
        if (r == -1) {
            m[0] = 0x2c;
            TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
        } else if (!NpcActor_CanPlayerPay(owner, price)) {
            m[1] = 0x2b;
            TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
        } else {
            m[2] = 0x29;
            TalkWindowState_setNextMessage(window, &m[2], sSpNpcMabelMsgKeys[0]);
            sellItemToPlayer();
        }
    } else if (v == 1) {
        owner->tryOnRemovedItem = 0xfff1;
        if (Unk_ov049_02259774_R(&owner->selectedItem, 0x11a8, 0x12a7)) {
        } else if (owner->selectedItem >= 0x13c8 && owner->selectedItem <= 0x1407) {
        } else if (owner->selectedItem >= 0x13a8 && owner->selectedItem <= 0x13c7) {
        } else if (owner->selectedItem >= 0x1431 && owner->selectedItem <= 0x1470) {
        } else {
            return;
        }
        if (owner->selectedItem >= 0x11a8 && owner->selectedItem <= 0x12a7) {
            owner->tryOnPrevItem = *PlayerData_getShirt(h);
            A[1] = owner->selectedItem;
            PlayerActor_RequestWearShirtAlt(&A[1]);
        } else if ((owner->selectedItem >= 0x13c8 && owner->selectedItem <= 0x1407) || (owner->selectedItem >= 0x13a8 && owner->selectedItem <= 0x13c7)) {
            if (owner->selectedItem >= 0x13a8 && owner->selectedItem <= 0x13c7) {
                if (!func_0204bab8(&owner->selectedItem)) {
                    owner->tryOnRemovedItem = *PlayerData_getFaceItem(h);
                    B[0] = 0xfff1;
                    PlayerActor_RequestWearFaceItemAlt(&B[0]);
                }
            }
            owner->tryOnPrevItem = *PlayerData_getHat(h);
            B[1] = owner->selectedItem;
            PlayerActor_RequestWearHatAlt(&B[1]);
        } else if (owner->selectedItem >= 0x1431 && owner->selectedItem <= 0x1470) {
            owner->tryOnPrevItem = *PlayerData_getFaceItem(h);
            C[0] = owner->selectedItem;
            PlayerActor_RequestWearFaceItemAlt(&C[0]);
            A[0] = 0xfff1;
            A[0] = *PlayerData_getHat(h);
            if (Unk_ov049_02259dd8_VR(&A[0], 0x13a8, 0x13c7)) {
                if (!func_0204bab8(&A[0])) {
                    owner->tryOnRemovedItem = *PlayerData_getHat(h);
                    C[1] = 0xfff1;
                    PlayerActor_RequestWearHatAlt(&C[1]);
                }
            }
        }
        PlayerActor_SetNoFaceTalkTarget(1, 4);
        Camera_SetMode4();
        TalkWindowState_lockAdvance(window);
        setScript(7);
    }
}

void SpNpcMabelTalk::onTryOnChoice(s32 v) {
    u8 m[3];
    volatile u16 A[2];
    u16 B[2];
    u16 C[2];
    if (Unk_ov049_02259774_R(&owner->selectedItem, 0x11a8, 0x12a7)) {
        A[1] = owner->tryOnPrevItem;
        PlayerActor_RequestWearShirtAlt((u16 *)&A[1]);
    }
    if (Unk_ov049_02259774_R(&owner->selectedItem, 0x13c8, 0x1407) || (owner->selectedItem >= 0x13a8 && owner->selectedItem <= 0x13c7)) {
        B[0] = owner->tryOnPrevItem;
        PlayerActor_RequestWearHatAlt(&B[0]);
    }
    if (Unk_ov049_02259774_R(&owner->selectedItem, 0x1431, 0x1470)) {
        B[1] = owner->tryOnPrevItem;
        PlayerActor_RequestWearFaceItemAlt(&B[1]);
    }
    if (owner->tryOnRemovedItem != 0xfff1) {
        A[0] = owner->tryOnRemovedItem;
        BOOL r = FALSE;
        u32 h = A[0];
        u32 l = A[0];
        if (l >= 0x13a8 && h <= 0x13c7) {
            r = TRUE;
        }
        if (r || (h >= 0x13c8 && h <= 0x1407)) {
            C[0] = owner->tryOnRemovedItem;
            PlayerActor_RequestWearHatAlt((u16 *)&C[0]);
        } else if (h >= 0x1431 && h <= 0x1470) {
            C[1] = owner->tryOnRemovedItem;
            PlayerActor_RequestWearFaceItemAlt((u16 *)&C[1]);
        }
    }
    PlayerActor_SetNoFaceTalkTarget(0, 4);
    setScript(8);
    Camera_RestorePrevMode();
    if (v == 0) {
        s32 r = Pocket_FindEmpty();
        if (r == -1) {
            m[0] = 0x2c;
            TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
        } else if (!NpcActor_CanPlayerPay(owner, price)) {
            m[1] = 0x2b;
            TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
        } else {
            m[2] = 0x29;
            TalkWindowState_setNextMessage(window, &m[2], sSpNpcMabelMsgKeys[0]);
            sellItemToPlayer();
        }
    }
}

extern "C" BOOL SpNpcMabel_IsDeliveryItem(u16 *p, s32 v) {
    if (v == 2) {
        return Unk_ov049_02259774_R(p, 0x155f, 0x1560);
    }
    return FALSE;
}

void SpNpcMabelTalk::onDeliveryChoice(s32 v) {
    if (v == 0) {
        ActorTalkRequest_setPocketFilter(this, (void *)SpNpcMabel_IsDeliveryItem, 0xd, 0);
        ActorTalkRequest_openSubScene(this, 0);
        setScript(9);
    }
}

void SpNpcMabelTalk::onDramaMenuChoice() {
    u8 m[2];
    if ((s32)msgIndex >= 0 && (s32)msgIndex <= 0x11) {
        s32 t = ChoiceList_getResult(TalkWindowState_getChoiceList(window));
        if (t != 2) {
            m[1] = sSpNpcMabelDramaMenuMsgs[t];
            TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
        } else {
            if (Talk_IsDramaPending(owner, m, 2)) {
                Talk_AdvanceDrama(owner, m);
            }
        }
    }
    if (!CommManager_isOnline(gCommManager)) {
        if (*DebugVar_GetPtr(0, 0x4a) == 0) {
            s32 r = NpcRegistry_FindSpNpc(5);
            if (r) {
                ActorTalkRequest_setPartnerActor(this, r);
            }
        }
    }
}

void SpNpcMabelTalk::update() {
    s32 i = script;
    if (sSpNpcMabelTalkScripts[i].flag != 0) {
        if (sSpNpcMabelTalkScripts[i].fn != 0) {
            (this->*sSpNpcMabelTalkScripts[i].fn)();
        }
    }
}

void SpNpcMabelTalk::onTaskDone(u32) {
    s32 i = script;
    if (sSpNpcMabelTalkScripts[i].flag == 0) {
        if (sSpNpcMabelTalkScripts[i].fn != 0) {
            (this->*sSpNpcMabelTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void SpNpcMabelTalk::setScript(s32 v) {
    script = v;
}

void SpNpcMabelTalk::onDesignEditorDone() {
    u8 m[2];
    if (MenuCtrl_IsResultOk()) {
        m[0] = 0x10;
        TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
    } else {
        m[1] = 0xf;
        TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
    }
}

void SpNpcMabelTalk::onDesignNamed() {
    u8 m[1];
    m[0] = 0x12;
    TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
}

void SpNpcMabelTalk::onDisplayPatternChosen() {
    u8 m[2];
    if (MenuCtrl_IsResultOk()) {
        void *h = PlayerData_GetCurrent();
        s32 a = MenuCtrl_GetIndex();
        PlayerData_getPatterns(h);
        u32 t = PatternOrder_getSlot(PlayerPatterns_getPatternOrder(), a);
        PatternSrc_Copy(9, t, 4, owner->patternSlot, 1);
        m[0] = 0x24;
        TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
    } else {
        m[1] = 0x22;
        TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
    }
}

void SpNpcMabelTalk::onTakePatternChosen() {
    u8 m[2];
    u16 v[2];
    if (MenuCtrl_IsResultOk()) {
        void *h = PlayerData_GetCurrent();
        s32 a = MenuCtrl_GetIndex();
        PlayerData_getPatterns(h);
        u32 t = PatternOrder_getSlot(PlayerPatterns_getPatternOrder(), a);
        u16 lo, hi;
        PatternSrc_Copy(4, owner->patternSlot, 9, t, 1);
        if (t < 8) {
            lo = t + 0x12a8;
        } else {
            lo = 0x12a8;
        }
        if (t < 8) {
            hi = t + 0x1429;
        } else {
            hi = 0x1429;
        }
        u32 x = *PlayerData_getShirt(h);
        u32 y = *PlayerData_getHat(h);
        if (lo == x) {
            if (Unk_ov049_02259774_R(PlayerData_getShirt(h), 0x12a8, 0x12af)) {
                v[0] = lo;
                PlayerActor_RequestWearShirtAlt(&v[0]);
            }
        }
        if (hi == y) {
            if (Unk_ov049_02259774_R(PlayerData_getHat(h), 0x1429, 0x1430)) {
                v[1] = hi;
                PlayerActor_RequestWearHatAlt(&v[1]);
            }
        }
        m[0] = 0x27;
        TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
    } else {
        m[1] = 0x22;
        TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
    }
}

void SpNpcMabelTalk::onTradePatternChosen() {
    u8 m[2];
    u16 v[2];
    if (MenuCtrl_IsResultOk()) {
        void *h = PlayerData_GetCurrent();
        s32 a = MenuCtrl_GetIndex();
        PlayerData_getPatterns(h);
        u32 t = PatternOrder_getSlot(PlayerPatterns_getPatternOrder(), a);
        u16 lo, hi;
        PatternSrc_Swap(9, t, 4, owner->patternSlot, 1);
        if (t < 8) {
            lo = t + 0x12a8;
        } else {
            lo = 0x12a8;
        }
        if (t < 8) {
            hi = t + 0x1429;
        } else {
            hi = 0x1429;
        }
        u32 x = *PlayerData_getShirt(h);
        u32 y = *PlayerData_getHat(h);
        if (lo == x) {
            if (Unk_ov049_02259774_R(PlayerData_getShirt(h), 0x12a8, 0x12af)) {
                v[0] = lo;
                PlayerActor_RequestWearShirtAlt(&v[0]);
            }
        }
        if (hi == y) {
            if (Unk_ov049_02259774_R(PlayerData_getHat(h), 0x1429, 0x1430)) {
                v[1] = hi;
                PlayerActor_RequestWearHatAlt(&v[1]);
            }
        }
        m[0] = 0x21;
        TalkWindowState_setNextMessage(window, m, sSpNpcMabelMsgKeys[0]);
    } else {
        m[1] = 0x22;
        TalkWindowState_setNextMessage(window, &m[1], sSpNpcMabelMsgKeys[0]);
    }
}

void SpNpcMabelTalk::onSellItemsChosen() {
    u8 msg;
    u16 v[1];
    void *ctx;
    s32 i;
    price = 0;
    soldCount = 0;
    ctx = window;
    msg = gU8None[0];
    if (MenuCtrl_IsResultOk()) {
        u16 *tbl = MenuCtrl_GetChosenItems();
        v[0] = 0xfff1;
        for (i = 0; i < 15; i++) {
            u16 t = tbl[i];
            if (t == 0xfff1) break;
            v[0] = t;
            price += Item_GetPrice(v) / 4;
        }
        soldCount = i;
        if (price == 0) {
            msg = 0x17;
        } else {
            ActorTalkRequest_setNumberSlot(this, price, 1, 10, 1, 0);
            msg = 0x1b;
        }
    } else {
        msg = 0x15;
    }
    TalkWindowState_setNextMessage(ctx, &msg, sSpNpcMabelMsgKeys[0]);
}

void SpNpcMabelTalk::waitTryOnDone() {
    if (PlayerActor_TestLocalFlag0F()) {
        FtrMgr_TakeDisplayedWearableAt(owner->selectedItemX, owner->selectedItemZ);
    }
    if (PlayerActor_IsInAction(0x10, 4)) {
        void *ctx = window;
        u8 msg;
        TalkWindowState_unlockAdvance(ctx);
        msg = 0x2d;
        TalkWindowState_setNextMessage(ctx, &msg, sSpNpcMabelMsgKeys[0]);
        setScript(0);
    }
}

void SpNpcMabelTalk::restoreTryOnDisplay() {
    if (PlayerActor_TestLocalFlag0F()) {
        FtrMgr_RestoreDisplayedWearableAt(owner->selectedItemX, owner->selectedItemZ);
        setScript(0);
    }
}

void SpNpcMabelTalk::onDeliveryItemChosen() {
    void *ctx = window;
    char *tbl = sSpNpcMabelMsgKeys[0];
    u32 msg = 0x30;
    u16 v[3];
    void *hh;
    if (MenuCtrl_IsResultOk()) {
        hh = SickVillagerRecord_getParcelErrand(PlayerData_getErrands(PlayerData_GetCurrent()));
        if (Talk_IsInOwnTown()) {
            s32 n = (s32)MenuCtrl_GetIndex();
            v[1] = Pocket_GetItem();
            if (n >= 0) {
                Pocket_RemoveItem(n);
            }
            if (!Unk_ov049_02258ee0_Eq(&v[1], &v[2])) {
                ActorTalkRequest_requestTakeItem(this, &v[1], 2, 5, 0);
                msg = 0x2f;
                ErrandRecord_setStep(ParcelErrand_GetRecord(hh), 1);
            }
        }
    }
    *(u8 *)v = msg;
    TalkWindowState_setNextMessage(ctx, v, tbl);
}

void SpNpcMabelTalk::openChoiceMenu(void *rec, s32 x) {
    void *ctx = window;
    void *h = TalkWindowState_getChoiceList(window);
    SpNpcMabelChoiceMenu *r = (SpNpcMabelChoiceMenu *)rec;
    u8 *p = (u8 *)r->choices;
    s32 n = r->count;
    s32 z = 0;
    s32 i;
    if (x != -1) {
        ChoiceList_reset(h, n, x);
    } else {
        ChoiceList_reset(h, n, -1);
    }
    i = z;
    for (; i < n; i++) {
        u8 buf[2];
        buf[0] = p[i];
        buf[1] = 6;
        ChoiceList_setEntry(h, i, buf, z, &buf[1], sSpNpcMabelMsgKeys[0], z);
    }
    ChoiceList_loadTexts(h);
    TalkWindowState_openChoices(ctx, 1);
}

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

void SpNpcMabelTalk::sellItemToPlayer() {
    owner->purchasePending = 1;
    NpcActor_ChargePlayer(owner, price);
    Pocket_AddItem(&owner->selectedItem, 0);
    AbleShop_BuyAt(owner->selectedItemX, owner->selectedItemZ, 10);
    VillagerTrend_OnClothesBought();
}

BOOL SpNpcMabel::acceptsInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || netIsTalkLocked() != 0 || tryStartShopItemTalk() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcMabel::acceptsSelfRequestedInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || netIsTalkLocked() != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcMabel::onInteractionEvent(u32 cmd, u8 arg) {
    CommManager *g;
    s32 a, b;
    switch (cmd) {
    case 3:
        *(u8 *)&partnerPlayer = arg;
        if (arg != 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, arg);
            changeAct(0xc);
        } else if (isNetOwner()) {
            u32 t = gCommManager->myAid;
            netSetSlotsIfOwner(1, t, t);
            changeAct(0xc);
        }
        break;
    case 1:
        partnerPlayer = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            changeAct(9);
        } else if (isNetOwner()) {
            g = gCommManager;
            netSetSlotsIfOwner(1, g->myAid, g->myAid);
            if (talk.getTopic() == 1 || talk.getTopic() == 0) {
                talk.resetMsg();
                ActorTalkRequest_setTalkPlayer(&talk, getPlayerActor(4));
                changeAct(4);
            } else if (talk.getTopic() == 3) {
                talk.resetMsg();
                ActorTalkRequest_setTalkPlayer(&talk, getPlayerActor(4));
                changeAct(5);
            } else if (CommManager_isOnline(g) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
                talk.resetMsg();
                ActorTalkRequest_setTalkPlayer(&talk, getPlayerActor(4));
                changeAct(4);
            } else {
                changeAct(0xd);
            }
        }
        break;
    case 0:
        partnerPlayer = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            changeAct(9);
        } else if (isNetOwner()) {
            netSetSlotsIfOwner(1, gCommManager->myAid, gCommManager->myAid);
            talk.resetMsg();
            ActorTalkRequest_setTalkPlayer(&talk, getPlayerActor(4));
            talk.setTopic(2);
            changeAct(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (NetArea_IsLocalOwner()) {
                g = gCommManager;
                netSetSlotsIfOwner(1, g->myAid, 4);
                if (CommManager_isOnline(g) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
                    changeAct(0xa);
                } else if (talk.getTopic() != 3) {
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
                    if (arg == 4) goto x4;
                    if (arg == b) goto y4;
                x4:
                    if (arg != 4) break;
                y4:
                    netSetSlotsIfOwner(1, gCommManager->myAid, 4);
                    changeAct(0xa);
                }
            }
        }
        break;
    }
    _ZN8NpcActor18onInteractionEventEi(this, cmd, arg);
}

void SpNpcMabel::setDesignConcept(u32 y) {
    void *h = PlayerData_GetCurrent();
    s32 n = MenuCtrl_GetIndex();
    PlayerPatterns_getPatternByOrder(PlayerData_getPatterns(h), (s32)n);
    PatternInfo_setTaste(Pattern_getInfo(), y);
}

BOOL SpNpcMabel::pickShopItemAtPlayer() {
    u16 t[3];
    s32 bx, by;
    VecFx32 v;
    Character *p = (Character *)PlayerActor_GetActor(4);
    BOOL f = Unk_ov049_02258ee0_Flags() ? TRUE : FALSE;
    if (p == 0 || TalkRequest_IsActive() != 0 || NpcTalkCtrl_isBusy(&talkCtrl) != 0 || ((gPad[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    selectedItem = 0xfff1;
    VecFx32 *pv = (VecFx32 *)&p->position;
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
            VecFx32 v2;
            TouchPick_GetGroundPos(Scene_GetTouchPicker(), &v2);
            FieldPos_ToUnit(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *ShopStock_GetItemAtTile(bx, by);
    if (Unk_ov049_02258ee0_Eq(&t[0], &t[2])) {
        return FALSE;
    }
    {
        BOOL r = FALSE;
        volatile u16 *pv = &t[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x3984 || x > 0x3d83) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x3fa4 && x <= 0x40a3) || (x >= 0x40a4 && x <= 0x4123) || (x >= 0x4124 && x <= 0x4223) ||
            (x >= 0x3e24 && x <= 0x3ea3)) {
            Item_FromPlacedForm(&t[1], &t[0]);
            t[0] = t[1];
            talk.setTopic(4);
        } else if (x >= 0x3e04 && x <= 0x3e23) {
            talk.setTopic(5);
        } else {
            return FALSE;
        }
    }
    selectedItem = t[0];
    selectedItemX = bx;
    selectedItemZ = by;
    purchasePending = 0;
    return TRUE;
}

BOOL SpNpcMabel::tryStartShopItemTalk() {
    if (pickShopItemAtPlayer()) {
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

// ---- owner / dialog (unit 02258de0)

BOOL SpNpcMabel::tryStartFarewellTalk() {
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0) {
        return FALSE;
    }
    VecFx32 *src = (VecFx32 *)PlayerActor_GetBodyPos(4);
    VecFx32 v;
    v.x = src->x;
    v.y = src->y;
    v.z = src->z;
    if (Ground_IsOnLockedExit(&v)) {
        talk.setTopic(3);
        TalkRequest_AddPlayerTalk6(this, 0);
        changeAct(0xf);
        return TRUE;
    }
    return FALSE;
}

extern "C" void *data_ov049_0225bb10[2] = {(void *)_ZN14SpNpcMabelTalk20onDeliveryItemChosenEv, 0};

extern "C" SpNpcMabelTalkScript sSpNpcMabelTalkScripts[10] = {
    {0, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225bc40, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225ba88, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225ba80, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225bad0, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225bb20, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225bad8, 0},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225baf8, 1},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225bc50, 1},
    {*(SpNpcMabelTalk::Fn0 *)data_ov049_0225bb10, 0},
};

extern "C" void *data_ov049_0225ba78[2] = {(void *)_ZN14SpNpcMabelTalk17onSellPriceChoiceEi, 0};

extern "C" char sSpNpcMabelKey[] = "sp_npc_ysister";

extern "C" void *data_ov049_0225bad8[2] = {(void *)_ZN14SpNpcMabelTalk17onSellItemsChosenEv, 0};

extern "C" void *data_ov049_0225bac8[2] = {(void *)_ZN14SpNpcMabelTalk25startDisplayPatternSelectEv, 0};

extern "C" void *data_ov049_0225ba88[2] = {(void *)_ZN14SpNpcMabelTalk13onDesignNamedEv, 0};

extern "C" void *data_ov049_0225baa8[2] = {(void *)_ZN10SpNpcMabel10setupAct0CEv, 0};

extern "C" void *data_ov049_0225bb28[2] = {(void *)_ZN14SpNpcMabelTalk18dispatchShopChoiceEv, 0};

extern "C" void *data_ov049_0225bc30[2] = {(void *)_ZN14SpNpcMabelTalk12onMenuChoiceEj, 0};

extern "C" SpNpcMabelActEntry sSpNpcMabelActTable[16] = {
    {*(SpNpcMabel::Fn *)data_ov049_0225bb00, *(SpNpcMabel::Fn *)data_ov049_0225bb08},
    {*(SpNpcMabel::Fn *)data_ov049_0225bb30, *(SpNpcMabel::Fn *)data_ov049_0225bc28},
    {*(SpNpcMabel::Fn *)data_ov049_0225bc20, *(SpNpcMabel::Fn *)data_ov049_0225bb50},
    {*(SpNpcMabel::Fn *)data_ov049_0225bb58, *(SpNpcMabel::Fn *)data_ov049_0225bc08},
    {*(SpNpcMabel::Fn *)data_ov049_0225bc00, *(SpNpcMabel::Fn *)data_ov049_0225bbf8},
    {*(SpNpcMabel::Fn *)data_ov049_0225bbf0, *(SpNpcMabel::Fn *)data_ov049_0225bbd0},
    {*(SpNpcMabel::Fn *)data_ov049_0225bbd8, *(SpNpcMabel::Fn *)data_ov049_0225bbe8},
    {*(SpNpcMabel::Fn *)data_ov049_0225bc10, *(SpNpcMabel::Fn *)data_ov049_0225bbc8},
    {*(SpNpcMabel::Fn *)data_ov049_0225bbc0, *(SpNpcMabel::Fn *)data_ov049_0225bbb8},
    {*(SpNpcMabel::Fn *)data_ov049_0225bbb0, *(SpNpcMabel::Fn *)data_ov049_0225bba8},
    {*(SpNpcMabel::Fn *)data_ov049_0225bba0, *(SpNpcMabel::Fn *)data_ov049_0225bb98},
    {*(SpNpcMabel::Fn *)data_ov049_0225bab0, *(SpNpcMabel::Fn *)data_ov049_0225bb88},
    {*(SpNpcMabel::Fn *)data_ov049_0225baa8, *(SpNpcMabel::Fn *)data_ov049_0225bb78},
    {*(SpNpcMabel::Fn *)data_ov049_0225baa0, *(SpNpcMabel::Fn *)data_ov049_0225bb68},
    {*(SpNpcMabel::Fn *)data_ov049_0225ba98, *(SpNpcMabel::Fn *)data_ov049_0225ba90},
    {*(SpNpcMabel::Fn *)data_ov049_0225ba70, *(SpNpcMabel::Fn *)data_ov049_0225bb48},
};

extern "C" void *data_ov049_0225ba68[2] = {(void *)_ZN14SpNpcMabelTalk21onDesignConceptChoiceEj, 0};

extern "C" const u8 sSpNpcMabelDramaMsgTable[28] = {0x00, 0x01, 0x02, 0x03, 0xfe, 0xfe, 0xfe, 0x04, 0x05, 0x06, 0xfe, 0xfe, 0xfe, 0xfe, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0xfe, 0xfe, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11};

extern "C" void *data_ov049_0225bb18[2] = {(void *)_ZN14SpNpcMabelTalk22dispatchShopMessageEndEv, 0};

extern "C" ActorProfile sSpNpcMabelProfile = {(void *(*)())SpNpcMabel_Create, 0x79, 0x7d, 2, 0x5000, 0x5000, 0x3e800};

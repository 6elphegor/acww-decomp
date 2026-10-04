// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "npc/Unk_0201a13c.h"
#include "npc/Unk_0202d7f4.h"
#include "npc/Unk_020323b0.h"
#include "npc/Unk_02053d3c.h"
#include "npc/Unk_02082088.h"
#include "npc/Unk_0202d5e8.h"
#include "actor/Unk_02088d00.h"
#include "npc/VillagerMood.h"
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

class FleaMarketBuyerVillagerTalk;
class FleaMarketBuyerVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_020d7710_requestGiveItem _ZN12Unk_020d771015requestGiveItemEPtjjj
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_disable _ZN9NpcLookAt7disableEv
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_isFleaMarketVisited _ZN14VillagerMemory19isFleaMarketVisitedEv
#define VillagerMemory_setReceivedItem _ZN14VillagerMemory15setReceivedItemEPt
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define PlayerId_isValid _ZN8PlayerId7isValidEv
#define PlayerData_getInventory _ZN10PlayerData12getInventoryEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_021319d0 _fadd
#define func_021329d0 _ffix
#define func_02132a4c _fflt
#define func_02132c80 _fsub
#define FtrActorGrid_getIndex _ZN12FtrActorGrid8getIndexEiii
#define FtrActorTable_get _ZN13FtrActorTable3getEj
#define FtrActorTable_countUsed _ZN13FtrActorTable9countUsedEv
typedef void (FleaMarketBuyerVillagerTalk::*Unk_ov004_0224c740_Fn)();
typedef BOOL (FleaMarketBuyerVillager::*Unk_ov004_0224c7d0_Fn)();

struct Unk_ov004_0224c740_Ent {
    Unk_ov004_0224c740_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0224c7d0_Ent {
    Unk_ov004_0224c7d0_Fn a;
    Unk_ov004_0224c7d0_Fn b;
};

struct Unk_ov004_022191f8_Out {
    u32 fileName;
    u8 msgIndex;
};

struct Unk_ov004_02218cdc_Rec {
    s32 a, b, c;
};

struct Unk_ov004_0221946c_Vec {
    s32 x, y, z;
    Unk_ov004_0221946c_Vec() {}
    ~Unk_ov004_0221946c_Vec() {}
};

struct Unk_ov004_02219e0c_V {
    s32 x, y, z;
};
struct Unk_ov004_02219e0c_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02219e0c_V position;
};


extern "C" {
extern u16 data_020c6cc8;
extern s16 data_02135f44[];
extern u8 gTalkMsgIndexEnd[];
extern u8 gFieldSceneKind[];
extern Unk_ov004_0224c740_Ent sFleaMarketBuyerTalkScripts[2];
extern Unk_ov004_0224c7d0_Ent sFleaMarketBuyerActTable[9];
extern u8 data_ov004_022507b0[0x28];
extern u8 data_ov004_022507d8[0x28];
extern u8 data_ov004_02250800[0x28];
extern u8 data_ov004_02250828[0x28];

void *FtrActorTable_GetInstance();
void *FtrActorTable_get(void *, s32);
s32 FtrMgr_IsPickableByIndex(s32);
void *FtrActor_GetFtrIndex(...);
void FtrActor_GetCenter(void *, void *);
void *FtrActorTable_countUsed(...);
void FtrMgr_SetSaleMode();
void FtrMgr_RemoveActorByIndex(s32);
void *FtrActorGrid_GetInstance();
s32 FtrActorGrid_getIndex(void *, s32, s32, s32);

u32 Item_MakeFurniture(void *, u32);
s32 Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
u32 Item_FindMoneyBagForAmount(void *, u32, u32);
s32 Random_GlobalBelow(s32);
void *PlayerActor_GetBodyPos(s32);
s32 Ground_IsOnLockedExit(void *);
void Ground_UnlockExit();
void Ground_LockExit(s32);
void TalkRequest_AddPlayerTalk6(void *, s32);
s32 TalkRequest_IsActive();
void Clock_GetDateTime(void *);
s32 DateTime_DiffMinutes(void *, void *);
void HouseVisitor_SetPresent();
void func_02015ab0(void *, s32);
s32 NpcActor_getPlayerActor(void *, s32);
void *ActorTalkRequest_getChoiceList(void *);
s32 ChoiceList_getResult();
void *VillagerData_getVillagerId(void *);
void VillagerId_makeFileName(void *, const void *, u32, const void *);
void Unk_020d7710_setSubSceneKind(void *, s32, s32);
void Unk_020d7710_openSubScene(void *, s32);
void Unk_020d7710_requestGiveItem(void *, void *, s32, s32, s32);
void *PlayerData_GetCurrent();
void *PlayerData_getInventory(void *);
void *PlayerData_getPlayerId(void *);
s32 NpcActor_CheckPayoutFits(void *, void *, s32);
void NpcActor_PayPlayer(void *, void *);
s32 PlayerInventory_CanAddBells(void *, void *, s32, s32);
void TalkWindowState_setNextMessage(void *, void *, const void *);
void Hud_Show();
void Villager_SetFleaMarketVisited(void *, void *);
void *Villager_FindOrCreateMemory(void *, void *);
s32 VillagerMemory_RecordTalk(void *, s32, s32, s32);
void ActorTalkRequest_setItemNameSlot(void *, void *, s32, s32);
s32 NpcTalkCtrl_isBusy(void *);
void *Villager_GetMemorySlotForNew(void *);
void VillagerMemory_setReceivedItem(void *, void *);
void Villager_AddReceivedItem(void *, void *);
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
s32 Item_GetPrice(void *);
s32 Villager_FindMemory(void *, void *);
s32 VillagerMemory_getFriendship(s32);
s32 func_02132a4c(s32);
s32 func_021319d0(s32, s32);
s32 func_02132c80(s32, s32);
s32 func_021329d0(s32);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 MenuCtrl_GetAmount();
void ActorTalkRequest_setNumberSlot(void *, s32, u32, s32, s32, s32);
s32 Hud_Hide();
void TalkRequest_SetTargetDone(void *);
void SceneWarp_RequestExit(s32, s32);
s32 Scene_GetWarpRequest();
void Scene_SavePlayerPos(s32, s32);
s32 func_020e9650(void *, void *);
void NpcActor_FindFreeUnitNear(void *, void *, void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 func_020e972c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e780c(s32, s32);
void FieldPos_ToUnit(s32 *, s32 *, s32 *);
s32 Math_AngleXZ(void *, void *);
s32 func_02015aac(void *);
s32 NpcActor_getAngleTo(void *, s32);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
u32 *TalkWindow_Get(s32);
u32 func_020e7518(void *);
void func_02003e70(void *, u32, u32, u32);
s32 Building_PlayDoorChime();
void HouseVisitor_ClearPresent();
void VillagerStates_SetFleaMarketBuyer(s32);
void *PlayerActor_GetActor(s32);
s32 VillagerState_ResetRole(void *);
void *Villager_GetState(void *);
void VillagerState_SetRole(void *, u32);
void Unk_02013474_enableFootsteps(void *);
void NpcLookAt_disable(void *);
s32 PlayerId_isValid(void *);
s32 VillagerMemory_isFleaMarketVisited(s32);
void NpcActor_setTalkRequest(void *, void *);
void VillagerTalk_begin(void *, void *, u32);
s32 FtrInfo_GetUnk05();
void Scene_GetPrevious();
s32 SceneId_IsTownUnk31();
}

struct Unk_0201ad3c { Unk_0201ad3c(); ~Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct NpcFaceAnim { NpcFaceAnim(); ~NpcFaceAnim(); u32 pad[0x88 / 4]; };
struct NpcAnimCtrl { NpcAnimCtrl(); ~NpcAnimCtrl(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); ~Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); ~Unk_0201a794(); u32 pad[0x68 / 4]; };
struct NpcSpeechState { NpcSpeechState(); ~NpcSpeechState(); u32 pad[8 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[8]; u8 unk_08; u8 pad_09[2]; u8 unk_0b; };
struct NpcActionCtrl { NpcActionCtrl(); ~NpcActionCtrl(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class SndSeEmitter {
public:
    SndSeEmitter();
    virtual ~SndSeEmitter();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public SndSeEmitter {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
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
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
    u32 pad_04[0x58 / 4];
    u32 position;
    u32 positionY;
    u32 positionZ;
    u32 prevPosition;
    u32 pad_6c;
    u32 prevPositionZ;
    u32 pad_74[(0x8c - 0x74) / 4];
    s16 rotX, rotY, rotZ, moveAngleX, moveAngleY, moveAngleZ;
    u32 pad_98[(0xd4 - 0x98) / 4];
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
    virtual void *vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();

    u16 pad_e0[5];
    u16 unk_ea;
    Unk_02053d3c model;
    Unk_0201ad3c moveAnimSet;
    NpcFaceAnim faceAnim;
    NpcAnimCtrl animCtrl;
    Unk_0201accc moveCtrl;
    Unk_0201a8bc obstacleProbe;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 lookAt;
    NpcSpeechState speechState;
    Unk_0201a13c emotionFx;
    Unk_020323b0 collisionState;
    Unk_02088d00 collider;
    Unk_020f4080 seEmitter;
    Unk_020135e4 footstepFx;
    NpcActionCtrl actionCtrl;
    Unk_02014254 talkCtrl;
};

class VillagerActor : public NpcActor {
public:
    VillagerActor();
    virtual ~VillagerActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void *vfunc_64();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void addMood(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();

    /* 0x640 */ u32 eventKind;
    /* 0x644 */ u32 talkPartnerId;
    /* 0x648 */ u32 invitedByPartner;
    /* 0x64c */ Unk_0202d7f4 clothModel;
    /* 0x680 */ Unk_0202d5e8 villagerTalk;
    /* 0x824 */ Unk_02082088 animHeapHandle;
    /* 0x82c */ void *villagerData;
    /* 0x830 */ void *villagerState;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ VillagerMood mood;
};

// Dialog sub-object at +0x914 of FleaMarketBuyerVillager. Its vtable (0x0224c740) names every slot after the class that last overrides it;
// declared here slot by slot so that each slot mangles to that symbol.
class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart(u32 v);
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1(u32 v);
    virtual void onActionTag2(u32 v);
    virtual void onActionTag3(u32 v);
    virtual void onActionTag4(u32 v);
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
    virtual void start(void *arg);
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
    virtual void onSignalTag();
    virtual void onScannedTag();
    virtual void onTalkEnd();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
};

class VillagerTalk : public Unk_020d7710 {
public:
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void onMessageStart(u32 v);
    virtual void onActionTag0();
    virtual void onActionTag1(u32 v);
    virtual void onActionTag2(u32 v);
    virtual void onActionTag3(u32 v);
    virtual void onActionTag4(u32 v);
    virtual void onTag09_9();
    virtual void getSpeakerData();
    virtual void onWindowClose();
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
    u8 pad_ac[0x1a0 - 0xac];
};

class FleaMarketBuyerVillagerTalk : public VillagerTalk {
public:
    FleaMarketBuyerVillagerTalk();
    virtual ~FleaMarketBuyerVillagerTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(void *arg);
    virtual void update();
    virtual void onTaskDone();

    void clearOffer();
    void completePurchase();
    void offerPrice();
    void setScript(s32 v);
    void attachOwner(VillagerActor *owner);

    /* 0x1a0 */ FleaMarketBuyerVillager *villager;
    /* 0x1a4 */ s32 offerAmount;
    /* 0x1a8 */ s32 scriptIndex;
};

class FleaMarketBuyerVillager : public VillagerActor {
public:
    FleaMarketBuyerVillager() : targetItem(0xfff1) {
        startTime[0] = 0;
        startTime[1] = 0;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    void setViewDistance(void *arg);
    void pushViewedFurniture(u32 v);
    BOOL isFurnitureForSale(s32 idx);
    BOOL pickFurnitureToView();
    BOOL checkLeave();
    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct07();
    BOOL setupAct07();
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
    void func_ov004_02219ef4();
    void changeAct(s32 idx);

    /* 0x894 */ u16 targetItem;
    /* 0x896 */ u8 pad_896[2];
    /* 0x898 */ u32 targetPos[3];
    /* 0x8a4 */ s32 targetFtrIndex;
    /* 0x8a8 */ u8 viewedFurniture[100];
    /* 0x90c */ s32 act;
    /* 0x910 */ s32 prevAct;
    /* 0x914 */ FleaMarketBuyerVillagerTalk talk;
    /* 0xac0 */ u8 visitStage;
    /* 0xac1 */ u8 pad_ac1[3];
    /* 0xac4 */ s32 leaveTimer;
    /* 0xac8 */ u32 startTime[2];
    /* 0xad0 */ s32 viewDistance;
    /* 0xad4 */ u8 entryTimer;
    /* 0xad5 */ u8 callTimer;
    /* 0xad6 */ u8 talkMelodyPlayed;
    /* 0xad7 */ u8 callCheckTimer;
    /* 0xad8 */ u8 purchaseCount;
    /* 0xad9 */ u8 pad_ad9[3];
    /* 0xadc */ s32 furnitureCount;
    /* 0xae0 */ s32 doorWaitFrames;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" FleaMarketBuyerVillager *FleaMarketBuyerVillager_Create();
extern "C" Unk_ov004_SceneEntry sFleaMarketBuyerVillagerProfile = {(void *(*)())FleaMarketBuyerVillager_Create, 0x87, 0x8b, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
u8 data_ov004_02250828[0x28];
u8 data_ov004_022507b0[0x28];
u8 data_ov004_022507d8[0x28];
u8 data_ov004_02250800[0x28];
void _ZN23FleaMarketBuyerVillager9mainAct01Ev();
void _ZN23FleaMarketBuyerVillager10setupAct00Ev();
void _ZN23FleaMarketBuyerVillager10setupAct01Ev();
void _ZN27FleaMarketBuyerVillagerTalk10offerPriceEv();
void _ZN23FleaMarketBuyerVillager10setupAct06Ev();
void _ZN23FleaMarketBuyerVillager9mainAct08Ev();
void _ZN23FleaMarketBuyerVillager10setupAct08Ev();
void _ZN23FleaMarketBuyerVillager9mainAct07Ev();
void _ZN23FleaMarketBuyerVillager10setupAct07Ev();
void _ZN23FleaMarketBuyerVillager9mainAct06Ev();
void _ZN23FleaMarketBuyerVillager9mainAct00Ev();
void _ZN23FleaMarketBuyerVillager10setupAct05Ev();
void _ZN23FleaMarketBuyerVillager9mainAct05Ev();
void _ZN23FleaMarketBuyerVillager9mainAct04Ev();
void _ZN23FleaMarketBuyerVillager10setupAct04Ev();
void _ZN23FleaMarketBuyerVillager9mainAct03Ev();
void _ZN23FleaMarketBuyerVillager10setupAct03Ev();
void _ZN23FleaMarketBuyerVillager9mainAct02Ev();
void _ZN23FleaMarketBuyerVillager10setupAct02Ev();
// ptmf constants (named: their order cannot be reproduced natively), defined in the order that gives the original layout
void *data_ov004_0224c6b0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct08Ev, 0};
void *data_ov004_0224c688[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct01Ev, 0};
void *data_ov004_0224c690[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct00Ev, 0};
void *data_ov004_0224c718[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct02Ev, 0};
void *data_ov004_0224c710[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct02Ev, 0};
void *data_ov004_0224c708[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct03Ev, 0};
void *data_ov004_0224c700[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct03Ev, 0};
void *data_ov004_0224c6f8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct04Ev, 0};
void *data_ov004_0224c6f0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct04Ev, 0};
void *data_ov004_0224c698[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct01Ev, 0};
void *data_ov004_0224c6d8[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct00Ev, 0};
void *data_ov004_0224c6a8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct06Ev, 0};
void *data_ov004_0224c6d0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct06Ev, 0};
void *data_ov004_0224c6c8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct07Ev, 0};
void *data_ov004_0224c6c0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct07Ev, 0};
void *data_ov004_0224c6b8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct08Ev, 0};
void *data_ov004_0224c6e8[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct05Ev, 0};
void *data_ov004_0224c6e0[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct05Ev, 0};
void *data_ov004_0224c6a0[2] = {(void *)_ZN27FleaMarketBuyerVillagerTalk10offerPriceEv, 0};
}
#define PMA(x) (*(Unk_ov004_0224c740_Fn *)(x))
#define PMB(x) (*(Unk_ov004_0224c7d0_Fn *)(x))
extern "C" Unk_ov004_0224c740_Ent sFleaMarketBuyerTalkScripts[2] = {
    {0, 0, {0, 0, 0}},
    {PMA(data_ov004_0224c6a0), 0, {0, 0, 0}}};
extern "C" Unk_ov004_0224c7d0_Ent sFleaMarketBuyerActTable[9] = {
    {PMB(data_ov004_0224c690), PMB(data_ov004_0224c6d8)},
    {PMB(data_ov004_0224c698), PMB(data_ov004_0224c688)},
    {PMB(data_ov004_0224c718), PMB(data_ov004_0224c710)},
    {PMB(data_ov004_0224c708), PMB(data_ov004_0224c700)},
    {PMB(data_ov004_0224c6f8), PMB(data_ov004_0224c6f0)},
    {PMB(data_ov004_0224c6e0), PMB(data_ov004_0224c6e8)},
    {PMB(data_ov004_0224c6a8), PMB(data_ov004_0224c6d0)},
    {PMB(data_ov004_0224c6c8), PMB(data_ov004_0224c6c0)},
    {PMB(data_ov004_0224c6b8), PMB(data_ov004_0224c6b0)}};
#define data_ov004_02250858 ((Unk_ov004_0224c7d0_Ent *)((u8 *)sFleaMarketBuyerActTable + 8))

static inline BOOL Unk_ov004_02218a48_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov004_02218a48_Eq(u16 *p, u32 k) {
    u16 t;
    if (Item_IsFurniture(p)) {
        t = k;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == k) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_022191cc_Is1(u8 *p) {
    if (*p == 1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02219378_Chk(u16 *p) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 v = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
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

static inline BOOL Unk_ov004_0221946c_Chk(u16 *p, u16 *vp) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        *vp = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(vp)) {
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

extern "C" FleaMarketBuyerVillager *FleaMarketBuyerVillager_Create() {
    return new FleaMarketBuyerVillager;
}

BOOL FleaMarketBuyerVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    targetItem = 0xfff1;
    Unk_02013474_enableFootsteps(&footstepFx);
    targetPos[0] = position;
    targetPos[1] = positionY;
    targetPos[2] = positionZ;
    viewDistance = 0x3000;
    s32 i;
    for (i = 0; i < 100; i++) {
        viewedFurniture[i] = 0xff;
    }
    NpcLookAt_disable(&lookAt);
    void *o;
    if (PlayerData_GetCurrent()) {
        o = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        o = 0;
    }
    Scene_GetPrevious();
    if (SceneId_IsTownUnk31() != 0 ||
        (vfunc_64() && o && PlayerId_isValid(o) && Villager_FindMemory(vfunc_64(), o) &&
         VillagerMemory_isFleaMarketVisited(Villager_FindMemory(vfunc_64(), o)))) {
        furnitureCount = (s32)FtrActorTable_countUsed(FtrActorTable_GetInstance());
        HouseVisitor_SetPresent();
        Ground_LockExit(0);
        FtrMgr_SetSaleMode();
        Clock_GetDateTime(startTime);
        visitStage = 2;
        changeAct(3);
    } else {
        position = 0x10000;
        prevPosition = 0x10000;
        positionZ = 0x23000;
        prevPositionZ = 0x23000;
        callCheckTimer = 100;
        doorWaitFrames = 1;
        changeAct(0);
    }
    if (vfunc_64()) {
        VillagerState_SetRole(Villager_GetState(vfunc_64()), 2);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::vfunc_0c() {
    if (!VillagerActor::vfunc_0c()) {
        return FALSE;
    }
    if (visitStage == 6 || visitStage == 4) {
        HouseVisitor_ClearPresent();
        VillagerStates_SetFleaMarketBuyer(-1);
    }
    if (vfunc_64()) {
        VillagerState_ResetRole(Villager_GetState(vfunc_64()));
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::onDraw() {
    if (visitStage != 0) {
        NpcActor::onDraw();
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250858[act].a) {
        r = (this->*sFleaMarketBuyerActTable[act].b)();
    }
    return r;
}

void FleaMarketBuyerVillager::changeAct(s32 idx) {
    BOOL ok = TRUE;
    if (sFleaMarketBuyerActTable[idx].a) {
        ok = (this->*sFleaMarketBuyerActTable[idx].a)();
    }
    if (ok) {
        prevAct = act;
        act = idx;
    }
}

void FleaMarketBuyerVillager::func_ov004_02219ef4() {
    func_02003e70(&seEmitter, 0x4cb, 0x7f, 0);
    Building_PlayDoorChime();
}

BOOL FleaMarketBuyerVillager::setupAct00() {
    visitStage = 0;
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct00() {
    if (callTimer == 0) {
        if (func_020e7518(&callCheckTimer)) {
            return TRUE;
        }
        if (Random_GlobalBelow(0x65) > 0x19) {
            callCheckTimer = 100;
            return TRUE;
        }
        Unk_ov004_02219e0c_Obj *p = (Unk_ov004_02219e0c_Obj *)PlayerActor_GetActor(4);
        if (p) {
            Unk_ov004_02219e0c_V v;
            Unk_ov004_02219e0c_V *pv = &p->position;
            v.x = p->position.x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e9650(&v, &position) > 0x8000) {
                func_02003e70(&seEmitter, 0x4ca, 0x7f, 0);
                callTimer = 0x1e;
            }
        }
    }
    if (callTimer != 0) {
        TalkRequest_AddPlayerTalk6(this, 0);
        if (callTimer > 1) {
            func_020e7518(&callTimer);
        }
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct01() {
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct01() {
    u32 *p = TalkWindow_Get(0);
    if (p) {
        if (p[1] != 0) {
            return TRUE;
        }
    }
    if (entryTimer == 0x28) {
        func_ov004_02219ef4();
    }
    rotX = 0;
    rotY = -0x8000;
    rotZ = 0;
    moveAngleX = 0;
    moveAngleY = -0x8000;
    moveAngleZ = 0;
    if (func_020e7518(&entryTimer)) {
        if (entryTimer == 8) {
            position = 0x10000;
            prevPosition = 0x10000;
            positionZ = 0x1f000;
            prevPositionZ = 0x1f000;
        }
        return TRUE;
    }
    changeAct(2);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct02() {
    entryTimer = 0;
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct02() {
    rotX = 0;
    rotY = -0x8000;
    rotZ = 0;
    moveAngleX = 0;
    moveAngleY = -0x8000;
    moveAngleZ = 0;
    u8 c = entryTimer;
    if (c == 1) {
        NpcActionCtrl_requestAction(&actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        TalkRequest_SetTargetDone(this);
        changeAct(8);
        return TRUE;
    } else if (c == 0) {
        Unk_ov004_0221946c_Vec v;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        s32 g = func_01ffcb0c(0x4000, data_02135f44[(*(u16 *)&rotY >> 4) * 2]);
        v.x = g + position;
        g = func_01ffcb0c(0x4000, data_02135f44[(*(u16 *)&rotY >> 4) * 2 + 1]);
        v.z = g + positionZ;
        NpcActionCtrl_requestAction(&actionCtrl, 1, 2, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
        entryTimer = 30;
        return TRUE;
    } else {
        entryTimer = c - 1;
        return TRUE;
    }
}

BOOL FleaMarketBuyerVillager::setupAct03() {
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct03() {
    if (checkLeave()) {
        return TRUE;
    }
    if (visitStage != 2) {
        return TRUE;
    }
    if (pickFurnitureToView()) {
        s32 r6 = func_020e9650(&position, targetPos);
        u32 loc0[3];
        NpcActor_FindFreeUnitNear(loc0, this, targetPos);
        s32 r1 = Math_AngleXZ(&position, targetPos);
        s32 r4 = func_020e780c(rotY, r1);
        if (r6 > viewDistance && func_020e96ec(loc0, &position)) {
            changeAct(5);
        } else if (r4 > 0x2000) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct04() {
    func_020e9650(&position, targetPos);
    u32 loc1c[3];
    NpcActor_FindFreeUnitNear(loc1c, this, targetPos);
    s32 r = Math_AngleXZ(&position, targetPos);
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct04() {
    if (checkLeave()) {
        return TRUE;
    }
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(3);
        }
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct05() {
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct05() {
    s32 xy[2];
    u32 loc24[3];
    Unk_ov004_0221946c_Vec v;
    if (checkLeave()) {
        return TRUE;
    }
    s32 r4 = func_020e9650(&position, targetPos);
    NpcActor_FindFreeUnitNear(loc24, this, targetPos);
    if (r4 > viewDistance + 0x1000) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, loc24);
    if (r4 <= viewDistance || func_020e972c(loc24, &position)) {
        changeAct(3);
    }
    v.x = position;
    v.y = positionY;
    v.z = positionZ;
    s32 h = *(u16 *)&rotY;
    xy[0] = 0;
    xy[1] = 0;
    s32 idx = (h >> 4) * 2;
    s32 g = func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.x = v.x + g;
    g = func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    v.z = v.z + g;
    FieldPos_ToUnit(&xy[0], &xy[1], &v.x);
    s32 r4b = FtrActorGrid_getIndex(FtrActorGrid_GetInstance(), xy[0], xy[1], 0);
    s32 r6 = FtrActorGrid_getIndex(FtrActorGrid_GetInstance(), xy[0], xy[1], 1);
    if (isFurnitureForSale(r6)) {
        void *o = FtrActorTable_get(FtrActorTable_GetInstance(), r6);
        targetItem = Item_MakeFurniture(FtrActor_GetFtrIndex(), 0);
        FtrActor_GetCenter(o, targetPos);
        setViewDistance(o);
        pushViewedFurniture(r6);
        targetFtrIndex = r6;
    } else if (isFurnitureForSale(r4b)) {
        void *o = FtrActorTable_get(FtrActorTable_GetInstance(), r4b);
        targetItem = Item_MakeFurniture(FtrActor_GetFtrIndex(), 0);
        FtrActor_GetCenter(o, targetPos);
        setViewDistance(o);
        pushViewedFurniture(r4b);
        targetFtrIndex = r4b;
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct07() {
    s32 a = func_02015aac(&talk);
    s32 b = 0;
    if (a) {
        b = NpcActor_getAngleTo(this, a);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, b, 1);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct07() {
    Unk_ov004_0221946c_Vec v;
    s32 *q = (s32 *)PlayerActor_GetBodyPos(4);
    v.x = q[0];
    v.y = q[1];
    v.z = q[2];
    if (!NpcTalkCtrl_isBusy(&talkCtrl)) {
        if (visitStage == 5) {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        } else {
            Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 6);
        }
        changeAct(8);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct06() {
    s32 a = func_02015aac(&talk);
    s32 b = 0;
    if (a) {
        b = NpcActor_getAngleTo(this, a);
    }
    s32 z = 0;
    leaveTimer = z;
    if (visitStage) {
        NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, z, b, z);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct06() {
    u8 s = callTimer;
    if (s != 0) {
        if (s == 1) {
            s32 a = func_02015aac(&talk);
            s32 b = 0;
            if (a) {
                b = NpcActor_getAngleTo(this, a);
            }
            NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, b, 1);
        }
        func_020e7518(&callTimer);
        return TRUE;
    }
    Clock_GetDateTime(startTime);
    if (!NpcTalkCtrl_isBusy(&talkCtrl)) {
        TalkRequest_SetTargetDone(this);
        if (visitStage == 1) {
            visitStage = 2;
            doorWaitFrames = 0;
        }
        changeAct(8);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct08() { return TRUE; }

BOOL FleaMarketBuyerVillager::mainAct08() { return TRUE; }

FleaMarketBuyerVillagerTalk::FleaMarketBuyerVillagerTalk() {}

FleaMarketBuyerVillagerTalk::~FleaMarketBuyerVillagerTalk() {}

void FleaMarketBuyerVillagerTalk::attachOwner(VillagerActor *owner) {
    vfunc_08();
    VillagerTalk_begin(this, owner, 0x11);
    villager = (FleaMarketBuyerVillager *)owner;
}

void FleaMarketBuyerVillagerTalk::update() {
    s32 i = scriptIndex;
    if (sFleaMarketBuyerTalkScripts[i].flag != 0) {
        if (sFleaMarketBuyerTalkScripts[i].fn) {
            (this->*sFleaMarketBuyerTalkScripts[i].fn)();
        }
    }
}

void FleaMarketBuyerVillagerTalk::onTaskDone() {
    s32 i = scriptIndex;
    if (sFleaMarketBuyerTalkScripts[i].flag == 0) {
        if (sFleaMarketBuyerTalkScripts[i].fn) {
            (this->*sFleaMarketBuyerTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void FleaMarketBuyerVillagerTalk::setScript(s32 v) { scriptIndex = v; }

void FleaMarketBuyerVillagerTalk::offerPrice() {
    u32 sp8 = (u32)unk_3c;
    u16 buf[2];
    ((u8 *)buf)[0] = Random_GlobalBelow(2) + 8;
    offerAmount = 0;
    if (MenuCtrl_IsFinished()) {
        if (MenuCtrl_IsResultOk()) {
            s32 r6 = 0;
            s32 r4 = r6;
            u16 *p = &villager->targetItem;
            if (!Unk_ov004_0221946c_Chk(p, &buf[1])) {
                offerAmount = Item_GetPrice(&villager->targetItem);
                if (PlayerData_GetCurrent()) {
                    r6 = Villager_FindMemory(villager->villagerData, (void *)PlayerData_getPlayerId(PlayerData_GetCurrent()));
                }
                if (r6) {
                    r4 = VillagerMemory_getFriendship(r6);
                }
                r4 += 0xff;
                if (r4 > 0) {
                    r4 = func_021319d0(0x3f000000, func_02132a4c(r4 << 12));
                } else {
                    r4 = func_02132c80(func_02132a4c(r4 << 12), 0x3f000000);
                }
                r4 = FX_Div(func_021329d0(r4), 0x200000);
                ActorTalkRequest_setNumberSlot(this, MenuCtrl_GetAmount(), 0, 10, 1, 0);
                r4 = func_01ffcb0c(offerAmount, r4);
                if (r4 <= 10) {
                    r4 = 10;
                }
                if (MenuCtrl_GetAmount() > r4) {
                    ((u8 *)buf)[0] = Random_GlobalBelow(2) + 10;
                } else {
                    offerAmount = MenuCtrl_GetAmount();
                    ((u8 *)buf)[0] = Random_GlobalBelow(2) + 12;
                    Hud_Hide();
                }
            }
        }
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022507b0, 0x28, "ev_fmarket3");
        TalkWindowState_setNextMessage((void *)sp8, buf, data_ov004_022507b0);
        setScript(0);
    }
}

void FleaMarketBuyerVillagerTalk::completePurchase() {
    u16 *p = &villager->targetItem;
    if (!Unk_ov004_02219378_Chk(p)) {
        if (villager->targetFtrIndex != -1) {
            if (VillagerData_getVillagerId(villager->villagerData)) {
                void *t = Villager_GetMemorySlotForNew(villager->villagerData);
                if (t) {
                    VillagerMemory_setReceivedItem(t, &villager->targetItem);
                }
                Villager_AddReceivedItem(villager->villagerData, &villager->targetItem);
            }
            FtrMgr_RemoveActorByIndex(villager->targetFtrIndex);
            s32 i = 0;
            s32 m1 = ~i;
            villager->targetFtrIndex = m1;
            villager->targetItem = 0xfff1;
            villager->purchaseCount++;
            for (; i < 100; i++) {
                villager->viewedFurniture[i] = 0xff;
            }
        }
    }
}

void FleaMarketBuyerVillagerTalk::start(void *arg) {
    Unk_ov004_022191f8_Out *out = (Unk_ov004_022191f8_Out *)arg;
    u16 tmp;
    void *q = PlayerData_getPlayerId(PlayerData_GetCurrent());
    void *o = Villager_FindOrCreateMemory(villager->villagerData, q);
    if (o != 0) {
        VillagerMemory_RecordTalk(o, 0, 0, 0);
    }
    FleaMarketBuyerVillager *b = villager;
    u32 st = b->visitStage;
    if (st == 5) {
        VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_02250800, 0x28, "q10_wait");
        out->fileName = (u32)data_ov004_02250800;
        out->msgIndex = Random_GlobalBelow(3);
    } else if (st == 3) {
        VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_02250800, 0x28, "ev_fmarket3");
        out->fileName = (u32)data_ov004_02250800;
        out->msgIndex = Random_GlobalBelow(2) + 2;
    } else {
        switch (st) {
        case 0:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_02250800, 0x28, "q10_call");
            out->msgIndex = Random_GlobalBelow(3);
            break;
        case 1:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_02250800, 0x28, "ev_fmarket3");
            out->msgIndex = Random_GlobalBelow(2);
            break;
        case 2: {
            VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_02250800, 0x28, "ev_fmarket3");
            u16 *p = &villager->targetItem;
            BOOL eq;
            if (Item_IsFurniture(p)) {
                tmp = 0xfff1;
                if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&tmp)) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (*p == 0xfff1) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq || villager->prevAct == 5) {
                out->msgIndex = Random_GlobalBelow(2) + 4;
            } else {
                ActorTalkRequest_setItemNameSlot(this, &villager->targetItem, 0, 7);
                out->msgIndex = Random_GlobalBelow(2) + 6;
            }
            break;
        }
        }
        out->fileName = (u32)data_ov004_02250800;
    }
}

BOOL FleaMarketBuyerVillager::canPlayTalkMelody() {
    if (Unk_ov004_022191cc_Is1(gFieldSceneKind) == 0 || talkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketBuyerVillager::onTalkMelodyPlayed() {
    talkMelodyPlayed = 1;
}

void FleaMarketBuyerVillagerTalk::onMessageEnd() {
    u8 buf;
    FleaMarketBuyerVillager *b = villager;
    u32 st = b->visitStage;
    if (st == 5 || st == 3) {
        if (st == 5) {
            b->visitStage = 6;
        } else {
            b->visitStage = 4;
        }
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_02250828, 0x28, "q_bye");
        buf = Random_GlobalBelow(3);
        TalkWindowState_setNextMessage(unk_3c, &buf, data_ov004_02250828);
    } else {
        switch (msgIndex) {
        case 0:
        case 1:
        case 2:
            if (st == 6 || st == 1) {
                TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
            } else if (st == 0) {
                void *q;
                if (PlayerData_GetCurrent() != 0) {
                    q = PlayerData_getPlayerId(PlayerData_GetCurrent());
                } else {
                    q = 0;
                }
                void *o = villager->villagerData;
                if (o != 0 && q != 0) {
                    Villager_SetFleaMarketVisited(o, q);
                }
                FleaMarketBuyerVillager **pp = &villager;
                (*pp)->visitStage = 1;
                (*pp)->entryTimer = 0x28;
                TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
                villager->changeAct(1);
            }
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
            break;
        case 8:
        case 9:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            Hud_Show();
            break;
        }
    }
}

void FleaMarketBuyerVillagerTalk::clearOffer() {
    villager->targetItem = 0xfff1;
}

void FleaMarketBuyerVillagerTalk::onChoice() {
    u8 buf;
    u16 tmp;
    u32 sel;
    s32 st;
    ActorTalkRequest_getChoiceList(this);
    st = ChoiceList_getResult();
    sel = 0xff;
    FleaMarketBuyerVillager *b = villager;
    if (b->visitStage == 2) {
        switch (msgIndex) {
        case 6:
        case 7:
        case 10:
        case 11:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_022507d8, 0x28, "ev_fmarket3");
            if (st == 0) {
                Unk_020d7710_setSubSceneKind(this, 0x38, 0);
                Unk_020d7710_openSubScene(this, 2);
                setScript(1);
            } else {
                sel = (u8)(Random_GlobalBelow(2) + 8);
                clearOffer();
            }
            break;
        case 8:
        case 9:
            break;
        case 12:
        case 13:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->villagerData), data_ov004_022507d8, 0x28, "ev_fmarket3");
            if (st == 0) {
                void *r7 = PlayerData_getInventory(PlayerData_GetCurrent());
                st = NpcActor_CheckPayoutFits(villager, (void *)offerAmount, 0);
                tmp = Item_FindMoneyBagForAmount((void *)offerAmount, 0, 0);
                if (tmp == 0xfff1) {
                    tmp = 0x1492;
                }
                if (PlayerInventory_CanAddBells(r7, (void *)offerAmount, 1, 0) == 0) {
                    sel = (u8)(Random_GlobalBelow(2) + 0x12);
                } else {
                    switch (st) {
                    case 0:
                        Unk_020d7710_requestGiveItem(this, &tmp, 0, 5, 0);
                        NpcActor_PayPlayer(villager, (void *)offerAmount);
                        sel = (u8)(Random_GlobalBelow(2) + 0xe);
                        completePurchase();
                        break;
                    case 1:
                        Unk_020d7710_requestGiveItem(this, &tmp, 0, 5, 0);
                        sel = (u8)(Random_GlobalBelow(2) + 0xe);
                        NpcActor_PayPlayer(villager, (void *)offerAmount);
                        completePurchase();
                        break;
                    case 2:
                        break;
                    }
                }
            } else {
                sel = (u8)(Random_GlobalBelow(2) + 0x10);
                clearOffer();
            }
            break;
        }
        if (sel != 0xff) {
            buf = sel;
            TalkWindowState_setNextMessage(unk_3c, &buf, data_ov004_022507d8);
        }
    }
}

BOOL FleaMarketBuyerVillager::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL FleaMarketBuyerVillager::vfunc_58() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketBuyerVillager::vfunc_4c(s32 cmd, u32 b) {
    switch (cmd) {
    case 1:
        talk.vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        if (visitStage == 5 || visitStage == 3) {
            changeAct(7);
        } else {
            changeAct(6);
        }
        if (visitStage == 0) {
            FtrActorTable_GetInstance();
            furnitureCount = (s32)FtrActorTable_countUsed();
            HouseVisitor_SetPresent();
            Ground_LockExit(0);
            FtrMgr_SetSaleMode();
            Clock_GetDateTime(startTime);
        }
        break;
    case 0:
        talk.vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(6);
        break;
    case 8:
        if (visitStage == 6) {
            Unk_ov004_02218cdc_Rec rec;
            Unk_ov004_02218cdc_Rec *src = (Unk_ov004_02218cdc_Rec *)PlayerActor_GetBodyPos(4);
            rec.a = src->a;
            rec.b = src->b;
            rec.c = src->c;
            if (Ground_IsOnLockedExit(&rec)) {
                Ground_UnlockExit();
                break;
            }
        }
        changeAct(3);
        break;
    }
}

BOOL FleaMarketBuyerVillager::checkLeave() {
    Unk_ov004_02218cdc_Rec rec;
    u32 z[2];
    Unk_ov004_02218cdc_Rec *src = (Unk_ov004_02218cdc_Rec *)PlayerActor_GetBodyPos(4);
    rec.a = src->a;
    rec.b = src->b;
    rec.c = src->c;
    if (Ground_IsOnLockedExit(&rec)) {
        visitStage = 5;
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    {
        if (leaveTimer != 0) {
            leaveTimer = leaveTimer - 1;
            if (leaveTimer == 1) {
                visitStage = 3;
                TalkRequest_AddPlayerTalk6(this, 0);
                return TRUE;
            }
        }
    }
    z[0] = 0;
    z[1] = 0;
    Clock_GetDateTime(z);
    s32 n = DateTime_DiffMinutes(startTime, z);
    {
        if (doorWaitFrames != 0) {
            doorWaitFrames = doorWaitFrames + 1;
        }
    }
    if (n >= 0x3c || doorWaitFrames > 0x258) {
        visitStage = 3;
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL FleaMarketBuyerVillager::pickFurnitureToView() {
    if (!Unk_ov004_02218a48_Eq(&targetItem, 0xfff1)) {
        return TRUE;
    }
    if (furnitureCount == 0 || purchaseCount >= 3) {
        if (leaveTimer == 0) {
            leaveTimer = 0x258;
        }
        return FALSE;
    }
    s32 start = Random_GlobalBelow(furnitureCount);
    s32 i = start;
    do {
        if (isFurnitureForSale(i)) {
            void *e = FtrActorTable_get(FtrActorTable_GetInstance(), i);
            targetItem = Item_MakeFurniture(FtrActor_GetFtrIndex(e), 0);
            FtrActor_GetCenter(e, targetPos);
            setViewDistance(e);
            pushViewedFurniture(i);
            targetFtrIndex = i;
            goto ok;
        }
        i++;
        if (i >= furnitureCount) {
            i = 0;
        }
    } while (i != start);
    if (leaveTimer == 0) {
        leaveTimer = 0x258;
    }
    return FALSE;
ok:
    return TRUE;
}

BOOL FleaMarketBuyerVillager::isFurnitureForSale(s32 idx) {
    u16 v;
    void *p = FtrActorTable_get(FtrActorTable_GetInstance(), idx);
    if (p == 0) {
        return FALSE;
    }
    if (FtrMgr_IsPickableByIndex(idx) == 0) {
        return FALSE;
    }
    v = Item_MakeFurniture(FtrActor_GetFtrIndex(p), 0);
    BOOL r0 = FALSE;
    volatile u16 *pv = &v;
    u32 w = *pv;
    u32 w2 = *pv;
    if (w2 >= 0x3d84 && w <= 0x3e03) {
        r0 = TRUE;
    }
    if (r0 || (w >= 0x3ea4 && w <= 0x3f23) || (w >= 0x4224 && w <= 0x42a3) ||
        (w >= 0x3f24 && w <= 0x3fa3) || Unk_ov004_02218a48_Eq(&v, 0x409c) || Unk_ov004_02218a48_Eq(&v, 0x40a0) ||
        Unk_ov004_02218a48_Eq(&v, 0x3820)) {
        return FALSE;
    }
    {
        s32 i;
        for (i = 0; i < 100; i++) {
            if (idx == viewedFurniture[i]) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

void FleaMarketBuyerVillager::pushViewedFurniture(u32 v) {
    s32 i;
    for (i = 0; i < 99; i++) {
        viewedFurniture[i] = viewedFurniture[i + 1];
    }
    viewedFurniture[99] = v;
}

void FleaMarketBuyerVillager::setViewDistance(void *arg) {
    FtrActor_GetFtrIndex(arg);
    switch (FtrInfo_GetUnk05()) {
    case 0:
        viewDistance = 0x3000;
        break;
    case 1:
        viewDistance = 0x4000;
        break;
    case 2:
        viewDistance = 0x4000;
        break;
    }
}


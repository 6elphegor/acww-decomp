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
#include "snd/SndSeEmitter.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ac88.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
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

class FleaMarketSellerVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcMoveCtrl_setTargetAngle _ZN11NpcMoveCtrl14setTargetAngleEs
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleToPlayer _ZN8NpcActor16getAngleToPlayerEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_getDistanceToPlayer _ZN8NpcActor19getDistanceToPlayerEj
#define NpcActor_getNpcIndex _ZN8NpcActor11getNpcIndexEv
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define BlockMap_getWalkLinksAtPos _ZN8BlockMap17getWalkLinksAtPosEPv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define VillagerDataProfileView_getShirt _ZN23VillagerDataProfileView8getShirtEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define FtrActor_findOwnTile _ZN8FtrActor11findOwnTileEPiS0_ii
#define FtrActorGrid_getActor _ZN12FtrActorGrid8getActorEiii
#define FtrActorGrid_getIndex _ZN12FtrActorGrid8getIndexEiii
typedef BOOL (FleaMarketSellerVillager::*Unk_ov004_022187b8_Fn)();

struct Unk_ov004_022187b8_Ent {
    Unk_ov004_022187b8_Fn a;
    Unk_ov004_022187b8_Fn b;
};

struct Unk_ov004_022187fc_Ent {
    Unk_ov004_022187b8_Fn a;
    u8 pad[8];
};

struct Unk_ov004_0221823c_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221841c_Vec {
    s32 x, y, z;
    Unk_ov004_0221841c_Vec() {}
    ~Unk_ov004_0221841c_Vec() {}
};


struct Unk_ov004_0224c4e4_Out {
    void *fileName;
    u8 msgIndex;
};

extern "C" {
extern u16 data_020c6cc8;
extern void *gSceneBlockMap;
extern s32 gCurrentHeap;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern u8 gFieldSceneKind;
extern u16 gPad[];
extern s16 data_02135f44[];
extern void *gCommManager;
extern Unk_ov004_022187b8_Ent sFleaMarketSellerActTable[8];
extern u8 data_ov004_022506c8[0x28];
extern u8 data_ov004_022506f0[0x28];

Unk_ov004_0221823c_Vec *PlayerActor_GetBodyPos(u32);
void NpcActor_FindFreeUnitNear(void *, void *, void *);
s32 NpcActor_getDistanceToPlayer(void *, u32);
s32 NpcActor_getAngleToPlayer(void *, u32);
s32 NpcActor_getPlayerActor(void *, u32);
void NpcMoveCtrl_setTargetAngle(void *, s32);
void NpcMoveCtrl_setWaypoint(void *, void *);
void BlockMap_getWalkLinksAtPos(void *, void *);
s32 func_020e972c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e7518(void *);
s32 func_020e780c(s32, s32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 NpcTalkCtrl_isBusy(void *);
s32 Scene_GetWarpRequest(void);
void SceneWarp_RequestExit(s32, s32);
void *func_02015aac(void *);
void func_02015ab0(void *, s32);
s32 TalkRequest_SetTargetDone(void *);
void TalkRequest_AddPlayerTalk6(void *, u32);
void NpcTalkCtrl_requestTurnAndTalk(void *, u32, s32, u32);
s32 NpcActor_getAngleTo(void *, void *);
void NpcActor_ChargePlayer(void *, s32);
void Pocket_AddItem(void *, s32);
void FtrMgr_RemoveActorByIndex(void);
void Villager_RemoveFurnitureAt(void *, void *, s32, s32);
s32 Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
void FtrMgr_SetSaleMode(void);
void Unk_02013474_enableFootsteps(void *);
void Scene_GetPrevious(void);
s32 SceneId_IsTownUnk31(void);
void Ground_LockExit(u32);
s32 NpcActor_getNpcIndex(void *);
s32 FgData_GetVillagerLayout(void *, s32, s32);
void NpcActor_setTalkRequest(void *, void *);
void VillagerTalk_begin(void *, void *, u32);
void Mem_Free(s32);
s32 FtrInfo_GetUnk05(void);
void *VillagerDataProfileView_getShirt(void *o);
void *Villager_GetState(void *o);
void *VillagerData_getVillagerId(void *o);
void *PlayerActor_GetActor(u32 a);
s32 Ground_IsOnLockedExit(void *p);
s32 TalkRequest_IsActive();
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void FieldPos_ToUnit(s32 *x, s32 *y, void *v);
void *FtrActorGrid_GetInstance();
s32 FtrActorGrid_getIndex(void *g, s32 x, s32 y, u32 z);
void *FtrActorGrid_getActor(void *g, s32 x, s32 y, u32 z);
u16 Item_MakeFurniture(void *p, u32 a);
void FtrActor_findOwnTile(void *o, s32 *x, s32 *y, u32 a, u32 b);
void *Scene_GetTouchPicker();
void TouchPick_GetGroundPos(void *a, void *b);
void *TouchPick_GetTargetObject(void *a, u32 b, u32 c);
s32 Villager_HasShownFurnitureAt(void *o, s32 *xy, u32 a, u32 b);
void *ChoiceList_getResult(void *o);
u32 VillagerId_makeFileName(void *a, void *b, u32 c, const void *d);
void *FtrActor_GetFtrIndex();
s32 Pocket_FindEmpty();
void TalkWindowState_setNextMessage(void *a, u8 *b, void *c);
void Hud_Hide();
u32 Random_GlobalBelow(u32 a);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *o);
void *Villager_FindOrCreateMemory(void *o, void *a);
void *Villager_FindMemory(void *o, void *a);
void VillagerMemory_RecordTalk(void *o, u32 a, u32 b, u32 c);
s32 VillagerMemory_getFriendship(void *o);
void func_ov004_022180e0(void *o);
s32 Item_GetPrice(void *o);
void ActorTalkRequest_setNumberSlot(void *o, s32 a, u32 b, u32 c, u32 d, u32 e);
s32 Villager_CountFurnitureLike(void *o, u16 *p);
s32 NpcActor_CanPlayerPay(void *o, s32 a);
void ActorTalkRequest_setItemNameSlot(void *o, void *a, u32 b, u32 c);
void *ActorTalkRequest_getChoiceList(void *o);
}

struct NpcFaceAnim { NpcFaceAnim(); ~NpcFaceAnim(); u32 pad[0x88 / 4]; };
struct NpcActionCtrl { NpcActionCtrl(); ~NpcActionCtrl(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

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
    virtual void vfunc_4c(s32 a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
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

// Dialog sub-object at +0x8a4 of FleaMarketSellerVillager. Its vtable (0x0224c4e4) names every slot after the class that last overrides it;
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
    virtual void start(Unk_ov004_0224c4e4_Out *out);
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

class FleaMarketSellerVillagerTalk : public VillagerTalk {
public:
    FleaMarketSellerVillagerTalk();
    virtual ~FleaMarketSellerVillagerTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(Unk_ov004_0224c4e4_Out *out);

    void sellFurniture();
    void attachOwner(FleaMarketSellerVillager *owner);

    /* 0x1a0 */ FleaMarketSellerVillager *villager;
    /* 0x1a4 */ s32 salePrice;
};

class FleaMarketSellerVillager : public VillagerActor {
public:
    FleaMarketSellerVillager()
        : saleItem(0xfff1), saleUnitX(0), saleUnitY(0) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    BOOL checkPlayerLeaving();
    BOOL requestTradeTalk();
    BOOL checkFurnitureTap();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 idx);

    /* 0x894 */ u16 saleItem;
    /* 0x896 */ u16 pad_896;
    /* 0x898 */ s32 saleUnitX;
    /* 0x89c */ s32 saleUnitY;
    /* 0x8a0 */ s32 act;
    /* 0x8a4 */ FleaMarketSellerVillagerTalk talk;
    /* 0xa4c */ u8 talkStage;
    /* 0xa4d */ u8 approachTimer;
    /* 0xa4e */ u8 talkMelodyPlayed;
    /* 0xa4f */ u8 pad_a4f;
    /* 0xa50 */ s32 layoutData;
    /* 0xa54 */ s32 layoutSize;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" FleaMarketSellerVillager *FleaMarketSellerVillager_Create();
extern "C" Unk_ov004_SceneEntry sFleaMarketSellerVillagerProfile = {(void *(*)())FleaMarketSellerVillager_Create, 0x86, 0x8a, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
u8 data_ov004_022506c8[0x28];
u8 data_ov004_022506f0[0x28];
void _ZN24FleaMarketSellerVillager10setupAct00Ev();
void _ZN24FleaMarketSellerVillager9mainAct00Ev();
void _ZN24FleaMarketSellerVillager10setupAct01Ev();
void _ZN24FleaMarketSellerVillager9mainAct01Ev();
void _ZN24FleaMarketSellerVillager9mainAct02Ev();
void _ZN24FleaMarketSellerVillager10setupAct03Ev();
void _ZN24FleaMarketSellerVillager9mainAct03Ev();
void _ZN24FleaMarketSellerVillager10setupAct04Ev();
void _ZN24FleaMarketSellerVillager9mainAct04Ev();
void _ZN24FleaMarketSellerVillager10setupAct05Ev();
void _ZN24FleaMarketSellerVillager9mainAct05Ev();
void _ZN24FleaMarketSellerVillager10setupAct06Ev();
void _ZN24FleaMarketSellerVillager9mainAct06Ev();
void _ZN24FleaMarketSellerVillager10setupAct07Ev();
void _ZN24FleaMarketSellerVillager9mainAct07Ev();
// ptmf constants (named: their order cannot be reproduced natively), defined in the order that gives the original layout
void *data_ov004_0224c464[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct04Ev, 0};
void *data_ov004_0224c44c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct00Ev, 0};
void *data_ov004_0224c4bc[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct00Ev, 0};
void *data_ov004_0224c4b4[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct01Ev, 0};
void *data_ov004_0224c4ac[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct06Ev, 0};
void *data_ov004_0224c4a4[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct02Ev, 0};
void *data_ov004_0224c49c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct03Ev, 0};
void *data_ov004_0224c494[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct03Ev, 0};
void *data_ov004_0224c454[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct07Ev, 0};
void *data_ov004_0224c48c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct04Ev, 0};
void *data_ov004_0224c47c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct05Ev, 0};
void *data_ov004_0224c474[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct05Ev, 0};
void *data_ov004_0224c46c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct06Ev, 0};
void *data_ov004_0224c45c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct07Ev, 0};
void *data_ov004_0224c484[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct01Ev, 0};
}
#define PM(x) (*(Unk_ov004_022187b8_Fn *)(x))
extern "C" Unk_ov004_022187b8_Ent sFleaMarketSellerActTable[8] = {
    {PM(data_ov004_0224c44c), PM(data_ov004_0224c4bc)},
    {PM(data_ov004_0224c4b4), PM(data_ov004_0224c484)},
    {0, PM(data_ov004_0224c4a4)},
    {PM(data_ov004_0224c49c), PM(data_ov004_0224c494)},
    {PM(data_ov004_0224c48c), PM(data_ov004_0224c464)},
    {PM(data_ov004_0224c47c), PM(data_ov004_0224c474)},
    {PM(data_ov004_0224c46c), PM(data_ov004_0224c4ac)},
    {PM(data_ov004_0224c45c), PM(data_ov004_0224c454)}};
#define data_ov004_02250720 ((Unk_ov004_022187fc_Ent *)((u8 *)sFleaMarketSellerActTable + 8))

// ---------------------------------------------------------------------------------------------------------------------
static inline BOOL Unk_ov004_02217954_Both() {
    if (gTouchPrevHeld != 0 && gTouchPrevChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" FleaMarketSellerVillager *FleaMarketSellerVillager_Create() {
    return new FleaMarketSellerVillager;
}

BOOL FleaMarketSellerVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL FleaMarketSellerVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    FtrMgr_SetSaleMode();
    saleItem = 0xfff1;
    Unk_02013474_enableFootsteps(&footstepFx);
    Scene_GetPrevious();
    if (SceneId_IsTownUnk31()) {
        changeAct(4);
    } else {
        changeAct(0);
    }
    Ground_LockExit(0);
    layoutSize = 0;
    layoutData = FgData_GetVillagerLayout(&layoutSize, NpcActor_getNpcIndex(this), gCurrentHeap);
    return TRUE;
}

BOOL FleaMarketSellerVillager::vfunc_0c() {
    if (!VillagerActor::vfunc_0c()) {
        return FALSE;
    }
    if (layoutData != 0) {
        Mem_Free(layoutData);
        layoutData = 0;
        layoutSize = 0;
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250720[act].a) {
        r = (this->*sFleaMarketSellerActTable[act].b)();
    }
    return r;
}

void FleaMarketSellerVillager::changeAct(s32 idx) {
    BOOL r = TRUE;
    if (sFleaMarketSellerActTable[idx].a) {
        r = (this->*sFleaMarketSellerActTable[idx].a)();
    }
    if (r) {
        act = idx;
    }
}

BOOL FleaMarketSellerVillager::setupAct00() {
    talkStage = 0;
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct04() {
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct04() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4, r6;
    Unk_ov004_0221823c_Vec *p = PlayerActor_GetBodyPos(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r6 = NpcActor_getDistanceToPlayer(this, 4);
    r4 = func_020e780c(rotY, NpcActor_getAngleToPlayer(this, 4));
    NpcActor_FindFreeUnitNear(&b, this, &a);
    if (r6 > 0x3000 && func_020e96ec(&b, &position) != 0) {
        changeAct(6);
    } else {
        if (r4 > 0x2000) {
            changeAct(5);
        }
    }
    if (checkPlayerLeaving()) {
        return TRUE;
    }
    requestTradeTalk();
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct05() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct05() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4, r6;
    if (checkPlayerLeaving()) {
        return TRUE;
    }
    if (requestTradeTalk()) {
        return TRUE;
    }
    Unk_ov004_0221823c_Vec *p = PlayerActor_GetBodyPos(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r4 = NpcActor_getDistanceToPlayer(this, 4);
    r6 = NpcActor_getAngleToPlayer(this, 4);
    NpcActor_FindFreeUnitNear(&b, this, &a);
    if (r4 > 0x3000 && func_020e96ec(&b, &position) != 0) {
        changeAct(6);
        return TRUE;
    }
    NpcMoveCtrl_setTargetAngle(&moveCtrl, r6);
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl) != 0) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct06() {
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct06() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4;
    if (checkPlayerLeaving()) {
        return TRUE;
    }
    if (requestTradeTalk()) {
        return TRUE;
    }
    Unk_ov004_0221823c_Vec *p = PlayerActor_GetBodyPos(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r4 = NpcActor_getDistanceToPlayer(this, 4);
    NpcActor_FindFreeUnitNear(&b, this, &a);
    if (r4 > 0x4000) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, &b);
    if (r4 <= 0x3000 || func_020e972c(&b, &position) != 0) {
        changeAct(4);
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct03() {
    void *t = func_02015aac(&talk);
    s32 r = 0;
    if (t != 0) {
        r = NpcActor_getAngleTo(this, t);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 1);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct03() {
    Unk_ov004_0221841c_Vec a;
    Unk_ov004_0221823c_Vec *p = PlayerActor_GetBodyPos(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        changeAct(2);
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct01() {
    void *t = func_02015aac(&talk);
    s32 r = 0;
    if (t != 0) {
        r = NpcActor_getAngleTo(this, t);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct01() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        if (talkStage == 0) {
            talkStage = 1;
        }
        saleItem = 0xfff1;
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct02() {
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct07() {
    approachTimer = 0x32;
    NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

// ---- FleaMarketSellerVillager ----

BOOL FleaMarketSellerVillager::mainAct07() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4;
    Unk_ov004_0221823c_Vec *p = PlayerActor_GetBodyPos(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    NpcActor_FindFreeUnitNear(&b, this, &a);
    r4 = NpcActor_getDistanceToPlayer(this, 4);
    BlockMap_getWalkLinksAtPos(gSceneBlockMap, &position);
    if (r4 > 0x4000) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            NpcActionCtrl_requestAction(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 2) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(&moveCtrl, &b);
    if (r4 <= 0x3000 || func_020e972c(&b, &position) != 0 || func_020e7518(&approachTimer) == 0) {
        VillagerTalk *pb = &talk;
        pb->vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(1);
    }
    return TRUE;
}

FleaMarketSellerVillagerTalk::FleaMarketSellerVillagerTalk() {
}

FleaMarketSellerVillagerTalk::~FleaMarketSellerVillagerTalk() {
}

void FleaMarketSellerVillagerTalk::attachOwner(FleaMarketSellerVillager *owner) {
    vfunc_08();
    VillagerTalk_begin(this, owner, 0x11);
    villager = owner;
}

// ---- FleaMarketSellerVillagerTalk ----

void FleaMarketSellerVillagerTalk::sellFurniture() {
    u16 *p = &villager->saleItem;
    BOOL same;
    if (Item_IsFurniture(p)) {
        u16 t = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same) {
        NpcActor_ChargePlayer(villager, salePrice);
        Pocket_AddItem(&villager->saleItem, 0);
        FleaMarketSellerVillager *o = villager;
        if (FtrActorGrid_getIndex(FtrActorGrid_GetInstance(), o->saleUnitX, o->saleUnitY, 0) != -1) {
            FtrMgr_RemoveActorByIndex();
            if (villager->vfunc_64()) {
                FleaMarketSellerVillager *q = villager;
                Villager_RemoveFurnitureAt(q->vfunc_64(), &q->saleUnitX, q->layoutData, q->layoutSize);
            }
        }
        villager->saleItem = 0xfff1;
    }
}

void FleaMarketSellerVillagerTalk::start(Unk_ov004_0224c4e4_Out *out) {
    void *r7 = Villager_FindOrCreateMemory(villager->villagerData, PlayerData_getPlayerId(PlayerData_GetCurrent()));
    if (r7) {
        VillagerMemory_RecordTalk(r7, 0, 0, 0);
    }
    if (villager->talkStage == 3) {
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506f0, 0x28, "ev_fmarket2");
        out->fileName = data_ov004_022506f0;
        out->msgIndex = Random_GlobalBelow(3) + 3;
        return;
    }
    u16 *q = &villager->saleItem;
    u16 w;
    u16 t;
    BOOL eq;
    if (Item_IsFurniture(q)) {
        t = 0xfff1;
        eq = Item_GetFurnitureIndex(q) == Item_GetFurnitureIndex(&t) ? TRUE : FALSE;
    } else {
        eq = *q == 0xfff1 ? TRUE : FALSE;
    }
    if (!eq) {
        s32 r6 = 0;
        ActorTalkRequest_setItemNameSlot(this, &villager->saleItem, r6, 7);
        salePrice = Item_GetPrice(&villager->saleItem);
        if (salePrice < 10) {
            salePrice = 10;
        }
        if (PlayerData_GetCurrent()) {
            r7 = Villager_FindMemory(villager->villagerData, PlayerData_getPlayerId(PlayerData_GetCurrent()));
        }
        if (r7) {
            r6 = VillagerMemory_getFriendship(r7);
        }
        s32 d = 0xff - r6;
        float f;
        if (d > 0) {
            f = 0.5f + (float)(d << 12);
        } else {
            f = (float)(d << 12) - 0.5f;
        }
        s32 v = (s32)f;
        salePrice = FX_Div(func_01ffcb0c(salePrice, v), 0x200000);
        r6 = salePrice;
        s32 k = r6 / 10 * 10;
        if (r6 - k >= 5) {
            k += 10;
        }
        salePrice = k;
        ActorTalkRequest_setNumberSlot(this, salePrice, 3, 10, 1, 0);
        r6 = 0;
        if (villager->villagerData) {
            w = 0xfff1;
            r6 = 10 - Villager_CountFurnitureLike(villager->villagerData, &w);
        }
        if (!(villager->saleUnitX != -1 && Pocket_FindEmpty() != -1 && r6 > 3 && NpcActor_CanPlayerPay(villager, salePrice))) {
            VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506f0, 0x28, "q11_trade4");
        } else {
            VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506f0, 0x28, "q11_trade3");
        }
        out->fileName = data_ov004_022506f0;
        out->msgIndex = Random_GlobalBelow(3);
    } else {
        switch (villager->talkStage) {
        case 0:
            VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506f0, 0x28, "ev_fmarket2");
            out->msgIndex = Random_GlobalBelow(3);
            break;
        case 1:
            VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506f0, 0x28, "q11_trade1");
            out->msgIndex = Random_GlobalBelow(3);
            break;
        case 2:
            VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506f0, 0x28, "ev_fmarket2");
            out->msgIndex = Random_GlobalBelow(3) + 6;
            break;
        }
        out->fileName = data_ov004_022506f0;
    }
}

BOOL FleaMarketSellerVillager::canPlayTalkMelody() {
    BOOL f = gFieldSceneKind == 1 ? TRUE : FALSE;
    if (!f || talkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketSellerVillager::onTalkMelodyPlayed() { talkMelodyPlayed = 1; }

// ---------------------------------------------------------------------------------------------------------------------
void FleaMarketSellerVillagerTalk::onMessageEnd() {}

void FleaMarketSellerVillagerTalk::onChoice() {
    void *r6 = ChoiceList_getResult(ActorTalkRequest_getChoiceList(this));
    u32 r4 = 0xff;
    u8 *s;
    if (villager->talkStage == 1) {
        switch (msgIndex) {
        case 0:
        case 1:
        case 2:
            s = data_ov004_022506c8;
            r4 = (u8)Random_GlobalBelow(3);
            if (r6 == 0) {
                VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506c8, 0x28, "q11_trade2");
                Hud_Hide();
                villager->talkStage = 2;
            } else {
                VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506c8, 0x28, "q_no");
            }
            break;
        }
    } else if (villager->talkStage == 2) {
        switch (msgIndex) {
        case 0:
        case 1:
        case 2:
            if (r6 == 0) {
                VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506c8, 0x28, "q11_yes");
                sellFurniture();
            } else {
                VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022506c8, 0x28, "q11_no");
            }
            s = data_ov004_022506c8;
            r4 = (u8)Random_GlobalBelow(3);
            break;
        }
    }
    if (r4 != 0xff) {
        u8 b = r4;
        TalkWindowState_setNextMessage(unk_3c, &b, s);
    }
}

BOOL FleaMarketSellerVillager::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || requestTradeTalk()) {
        return FALSE;
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::vfunc_58() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketSellerVillager::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        talk.vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        if (talkStage == 0) {
            changeAct(1);
        } else if (talkStage == 3) {
            changeAct(3);
        } else {
            changeAct(7);
        }
        break;
    case 0:
        talk.vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(1);
        break;
    case 8:
        changeAct(4);
        break;
    }
}

BOOL FleaMarketSellerVillager::checkFurnitureTap() {
    struct Unk_ov004_02217954_V { s32 x, y, z; };
    u16 r[4];
    s32 hx, hy;
    s32 ax, ay;
    s32 x2, y2;
    Unk_ov004_02217954_V v0;
    Unk_ov004_02217954_V v1;
    u8 *p = (u8 *)PlayerActor_GetActor(4);
    BOOL flag = Unk_ov004_02217954_Both() ? TRUE : FALSE;
    if (talkStage != 2) {
        return FALSE;
    }
    if (p != NULL && TalkRequest_IsActive() == 0 && NpcTalkCtrl_isBusy(&talkCtrl) == 0 && ((gPad[1] & 1) != 0 || flag)) {
    } else {
        return FALSE;
    }
    Unk_ov004_02217954_V *pv = (Unk_ov004_02217954_V *)(p + 0x5c);
    v0.x = *(s32 *)(p + 0x5c);
    v0.y = pv->y;
    v0.z = pv->z;
    s32 idx = ((*(u16 *)(p + 0x8e)) >> 4) * 2;
    v0.x = v0.x + func_01ffcb0c(0x2000, data_02135f44[idx * 1]);
    v0.z = v0.z + func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    hx = 0;
    hy = 0;
    FieldPos_ToUnit(&hx, &hy, &v0);
    if (flag) {
        s32 t = FtrActorGrid_getIndex(FtrActorGrid_GetInstance(), hx, hy, 0);
        BOOL z = FALSE;
        if (t == -1) {
            return z;
        }
        void *c = FtrActorGrid_getActor(FtrActorGrid_GetInstance(), hx, hy, 0);
        if (c != NULL) {
            if (c != TouchPick_GetTargetObject(Scene_GetTouchPicker(), 0, 0)) {
                return FALSE;
            }
        } else {
            ax = 0;
            ay = 0;
            TouchPick_GetGroundPos(Scene_GetTouchPicker(), &v1);
            FieldPos_ToUnit(&ax, &ay, &v1);
            if (ax != hx || ay != hy) {
                return FALSE;
            }
        }
    }
    void *c2 = FtrActorGrid_getActor(FtrActorGrid_GetInstance(), hx, hy, 0);
    if (c2 == NULL) {
        return FALSE;
    }
    r[0] = Item_MakeFurniture(FtrActor_GetFtrIndex(), 0);
    x2 = hx;
    y2 = hy;
    FtrActor_findOwnTile(c2, &x2, &y2, 0, 0);
    hx = x2;
    hy = y2;
    saleItem = r[0];
    if (vfunc_64()) {
        if (Villager_HasShownFurnitureAt(vfunc_64(), &hx, layoutData, layoutSize)) {
            BOOL e1;
            if (Item_IsFurniture(&saleItem)) {
                r[1] = 0x409c;
                e1 = Item_GetFurnitureIndex(&saleItem) == Item_GetFurnitureIndex(&r[1]) ? TRUE : FALSE;
            } else {
                e1 = saleItem == 0x409c ? TRUE : FALSE;
            }
            if (e1) {
                goto fail;
            }
            BOOL e2;
            if (Item_IsFurniture(&saleItem)) {
                r[2] = 0x40a0;
                e2 = Item_GetFurnitureIndex(&saleItem) == Item_GetFurnitureIndex(&r[2]) ? TRUE : FALSE;
            } else {
                e2 = saleItem == 0x40a0 ? TRUE : FALSE;
            }
            if (e2) {
                goto fail;
            }
            BOOL e3;
            if (Item_IsFurniture(&saleItem)) {
                r[3] = 0x3820;
                e3 = Item_GetFurnitureIndex(&saleItem) == Item_GetFurnitureIndex(&r[3]) ? TRUE : FALSE;
            } else {
                e3 = saleItem == 0x3820 ? TRUE : FALSE;
            }
            if (e3) {
                goto fail;
            }
            saleUnitX = hx;
            saleUnitY = hy;
            goto done;
        }
    }
fail:
    saleUnitX = -1;
    saleUnitY = -1;
done:
    return TRUE;
}

BOOL FleaMarketSellerVillager::requestTradeTalk() {
    if (checkFurnitureTap()) {
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL FleaMarketSellerVillager::checkPlayerLeaving() {
    struct V { s32 x, y, z; } v;
    s32 *s = (s32 *)PlayerActor_GetBodyPos(4);
    v.x = s[0];
    v.y = s[1];
    v.z = s[2];
    if (Ground_IsOnLockedExit(&v)) {
        talkStage = 3;
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}


// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "item/ItemId.h"
#include "talk/TalkStartMsg.h"

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
class SpNpcRedd;
class SpNpcReddTalk;

struct Unk_ov052_Vec {
    s32 x, y, z;
};

struct Unk_ov052_02259d6c_Vec {
    s32 x, y, z;
    Unk_ov052_02259d6c_Vec() {}
    ~Unk_ov052_02259d6c_Vec() {}
};

struct Unk_ov052_02258eac_Loc : Unk_ov052_Vec {
    Unk_ov052_02258eac_Loc() {}
};


struct ChoiceList {
    s32 getResult();
};

extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 Pocket_FindEmpty();
s32 Pocket_FindItem(u16 *p);
void Pocket_AddItem(u16 *p, s32 v);
void Pocket_RemoveItem(s32 v);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN16ActorTalkRequest17setPlayerNameSlotEjj(void *p, void *q, u32 a);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 Random_GlobalBelow(u32 n);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
void TalkRequest_SetTargetDone(void *p);
void TalkRequest_AddPlayerTalk6(void *p, s32 v);
void Clock_GetDateTime(void *p);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, s32 a, s32 b);
extern u16 data_020c6cc8;
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN13NpcActionCtrl12requestStandEjt(void *self, u32 a, u32 b);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
void _ZN11NpcMoveCtrl14setSpeedPresetEiiii(void *self, s32 a, s32 b, s32 c, s32 d);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *self, s32 v);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *self, void *v);
void _ZN8BlockMap17getWalkLinksAtPosEPv(void *g, void *v);
void *PlayerActor_GetBodyPos(s32 a);
s32 Ground_IsOnLockedExit(void *p);
void Ground_UnlockExit();
void Ground_LockExit(s32 a);
void *PlayerActor_GetActor(s32 a);
s32 TalkRequest_IsActive();
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_ToUnit(s32 *bx, s32 *by, void *pos);
void *FtrActorGrid_GetInstance();
void *_ZN12FtrActorGrid8getActorEiii(void *self, s32 a, s32 b, s32 c);
void *Scene_GetTouchPicker();
void *TouchPick_GetTargetObject(void *a, s32 b, s32 c);
void TouchPick_GetGroundPos(void *a, void *b);
u16 *ShopStock_GetItemAt(s32 a, s32 b);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_GetPrice(u16 *p);
s32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(s32 a, s32 b);
BOOL Scene_GetPrevious();
s32 _ZN11CommManager8isOnlineEv(void *g);
void NpcActor_ChargePlayer(void *o, s32 v);
s32 NpcActor_CanPlayerPay(void *o, s32 v);
void ReddShop_BuyAt(s32 a, s32 b, s32 c);
BOOL ReddShop_IsPurchaseSynced();
u16 *ReddShop_GetItem(void *tbl, s32 a, s32 b);
void _ZN12ReddLastSale8setBuyerEPKS_(void *a, void *b);
void _ZN12ReddLastSale7setItemEPKS_(void *a, void *b);
void _ZN12ReddLastSale12copyItemFromEPKS_(void *dst, void *src);
void *ReddLastSale_GetBuyer(void *p);
s32 _ZN8PlayerId7isValidEv(void *p);
s32 _ZN8PlayerId6equalsEPS_(void *a, void *b);
void NpcActor_FindFreeUnitNear(void *out, void *self, void *v);
s32 func_020e7518(void *p);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e96ec(void *a, void *b);
s32 func_020e972c(void *a, void *b);
void MI_CpuFill8(void *p, s32 v, s32 n);
s32 memcmp(void *a, void *b, s32 n);
s32 _ZN12Unk_02097ff48testFlagEj(void *h, u32 v);
void _ZN12Unk_02097ff47setFlagEj(void *h, u32 v);
void *__cxa_vec_ctor(void *, u32, u32, void (*)(void *), void (*)(void *));
extern u8 data_021ed284[];
extern u8 data_021ed2c0[];
extern u8 gTouchPrevHeld[];
extern u8 gTouchPrevChanged[];
extern u16 gPad[];
extern s16 data_02135f44[];
extern void *gSceneBlockMap;
extern void *gCommManager;
}

struct TalkWindowState {
    void setNextMessage(u8 *a, void *b);
};

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
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
    void *func_02015aac();
    void func_02015ab0(u32 p);
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
    virtual void onTaskDone();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcReddTalk : public SpNpcTalkRequest {
public:
    SpNpcReddTalk();
    virtual ~SpNpcReddTalk();
    virtual void vfunc_08();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(s32 v);
    void completePurchase();

    s32 topic;
    SpNpcRedd *owner;
    s32 price;
    s32 redVaseSlot;
    u8 feeQuoted;
    u8 pad_bd[3];
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
MEMBER(NpcActionCtrl, 0x618 - 0x564);
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
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
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

    void setTalkRequest(Unk_0201bc1c *p);
    BOOL netIsTalkLocked();
    s32 getPlayerActor(u32 v);
    s32 getAngleToPlayer(u32 v);
    s32 getDistanceToPlayer(u32 v);

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

class SpNpcRedd : public SpNpcActor {
public:
    SpNpcRedd() : selectedItem(0xfff1), selectedItemX(0), selectedItemZ(0) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL tryClosingTimeTalk();
    BOOL tryFarewellTalk();
    BOOL tryItemTalk();
    BOOL pickDisplayItem();
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

    s32 unk_654;
    SpNpcReddTalk talk;
    u16 standBlend;
    u16 selectedItem;
    ItemId pitchedItems[3];
    s32 selectedItemX;
    s32 selectedItemZ;
    u8 unk_72c;
    u8 approachTimer;
    u8 boughtSomething;
    u8 usedPitchMsgs[5];
    u8 usedThanksMsgs[5];
};

struct Unk_ov052_0225a2cc_Ent {
    BOOL (SpNpcRedd::*enter)();
    BOOL (SpNpcRedd::*exit)();
};

struct Unk_ov052_SceneEntry {
    SpNpcRedd *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov052_MsgRow {
    const char *name;
    u8 id;
    u8 pad[3];
};

extern "C" {
extern char sSpNpcReddKey[];
extern const Unk_ov052_MsgRow sSpNpcReddTopicMsgs[13];
extern Unk_ov052_0225a2cc_Ent sSpNpcReddActTable[11];
#define MSG_ID(i) (((u8 (*)[8])((u8 *)sSpNpcReddTopicMsgs + 4))[i][0])
extern u8 sSpNpcReddModelPath[];
extern u8 sSpNpcReddTexturePath[];
extern Unk_ov052_SceneEntry sSpNpcReddProfile;
SpNpcRedd *SpNpcRedd_Create();
BOOL SpNpcRedd_IsSoldOut(void *self);
s32 SpNpcRedd_PickUnusedFlag(void *self, u8 *buf, s32 n);
s32 SpNpcRedd_CountUnusedFlags(void *self, u8 *buf, s32 n);
}

static inline BOOL Unk_ov052_022595dc_Eq(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov052_022595dc_Eq2(u16 *p, u16 *q) {
    if (Item_IsFurniture(p)) {
        s32 a = Item_GetFurnitureIndex(p);
        return a == Item_GetFurnitureIndex(q) ? TRUE : FALSE;
    }
    return *p == *q ? TRUE : FALSE;
}

static inline BOOL Unk_ov052_022595dc_EqK(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        return a == Item_GetFurnitureIndex(k) ? TRUE : FALSE;
    }
    return *p == 0xfff1 ? TRUE : FALSE;
}

static inline BOOL Unk_ov052_02258f34_Flags() {
    if (gTouchPrevHeld[0] && gTouchPrevChanged[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov052_02258f34_Eq(u16 *p, u16 *k) {
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

SpNpcRedd *SpNpcRedd_Create() {
    return new SpNpcRedd();
}

BOOL SpNpcRedd::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner((s32)this);
    standBlend = data_020c6cc8;
    MI_CpuFill8(usedPitchMsgs, 0, 5);
    MI_CpuFill8(usedThanksMsgs, 0, 5);
    _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&moveCtrl, 2, 0x400, 0x133, 0x199);
    return TRUE;
}

BOOL SpNpcRedd::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    if (Scene_GetPrevious()) {
        changeAct(1);
    } else {
        changeAct(0);
    }
    Ground_LockExit(0);
    selectedItem = 0xfff1;
    for (s32 i = 0; i < 3; i++) {
        pitchedItems[i].id = 0xfff1;
    }
    return TRUE;
}

u8 *SpNpcRedd::getTexturePath() { return sSpNpcReddTexturePath; }

u8 *SpNpcRedd::getModelPath() { return sSpNpcReddModelPath; }

BOOL SpNpcRedd::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcReddActTable[unk_654].exit != NULL) {
        r = (this->*sSpNpcReddActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcRedd::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcReddActTable[state].enter) {
        ok = (this->*sSpNpcReddActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcRedd::setupAct00() {
    talk.setTopic(0);
    return TRUE;
}

BOOL SpNpcRedd::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL SpNpcRedd::setupAct01() {
    _ZN13NpcActionCtrl12requestStandEjt(&actionCtrl, 1, standBlend);
    standBlend = data_020c6cc8;
    return TRUE;
}

BOOL SpNpcRedd::mainAct01() {
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 r6 = getDistanceToPlayer(4);
    s32 t = getAngleToPlayer(4);
    s32 r4 = func_020e780c(rotY, t);
    Unk_ov052_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    if (r6 > 0x3000 && func_020e96ec(&out, &position)) {
        changeAct(3);
    } else if (r4 > 0x2000) {
        changeAct(2);
    }
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    tryItemTalk();
    return TRUE;
}

BOOL SpNpcRedd::setupAct02() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcRedd::mainAct02() {
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 r6 = getDistanceToPlayer(4);
    s32 r4 = getAngleToPlayer(4);
    func_020e780c(rotY, r4);
    Unk_ov052_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    if (r6 > 0x3000) {
        if (func_020e96ec(&out, &position)) {
            changeAct(3);
            return TRUE;
        }
    }
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, r4);
    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcRedd::setupAct03() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcRedd::mainAct03() {
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    Unk_ov052_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    if (t > 0x4000) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&moveCtrl, &out);
    if (t <= 0x3000 || func_020e972c(&out, &position) != 0) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcRedd::setupAct04() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcRedd::mainAct04() {
    if (tryFarewellTalk()) {
        return TRUE;
    }
    if (tryClosingTimeTalk()) {
        return TRUE;
    }
    if (tryItemTalk()) {
        return TRUE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    Unk_ov052_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    if (t > 0x4000) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&moveCtrl, &out);
    if (t <= 0x3000 || func_020e972c(&out, &position) != 0) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcRedd::setupAct05() {
    void *p = talk.func_02015aac();
    s32 r = 0;
    if (p) {
        r = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL SpNpcRedd::mainAct05() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl)) {
        return TRUE;
    }
    if (unk_72c != 0 && ReddShop_IsPurchaseSynced() == 0) {
        return TRUE;
    }
    TalkRequest_SetTargetDone(this);
    changeAct(7);
    return TRUE;
}

BOOL SpNpcRedd::setupAct06() {
    void *p = talk.func_02015aac();
    s32 r = 0;
    if (p) {
        r = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, r, 1);
    return TRUE;
}

BOOL SpNpcRedd::mainAct06() {
    Unk_ov052_02259d6c_Vec *pv = (Unk_ov052_02259d6c_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov052_02259d6c_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        changeAct(7);
    }
    return TRUE;
}

BOOL SpNpcRedd::setupAct07() { return TRUE; }

BOOL SpNpcRedd::mainAct07() { return TRUE; }

BOOL SpNpcRedd::setupAct08() { return TRUE; }

BOOL SpNpcRedd::mainAct08() { return TRUE; }

BOOL SpNpcRedd::setupAct09() {
    approachTimer = 0x32;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcRedd::mainAct09() {
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov052_Vec out;
    NpcActor_FindFreeUnitNear(&out, this, &v);
    s32 t = getDistanceToPlayer(4);
    _ZN8BlockMap17getWalkLinksAtPosEPv(gSceneBlockMap, &position);
    if (t > 0x4000) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&moveCtrl, &out);
    if (t <= 0x3000 || func_020e972c(&out, &position) != 0 || func_020e7518(&approachTimer) == 0) {
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        changeAct(5);
    }
    return TRUE;
}

BOOL SpNpcRedd::setupAct0A() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, getAngleToPlayer(4));
    return TRUE;
}

BOOL SpNpcRedd::mainAct0A() {
    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl12requestStandEjt(&actionCtrl, 1, standBlend);
        }
    }
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

extern "C" s32 SpNpcRedd_CountUnusedFlags(void *self, u8 *buf, s32 n) {
    s32 c = 0;
    s32 i;
    for (i = 0; i < n; buf++, i++) {
        if (*buf == 0) {
            c++;
        }
    }
    return c;
}

extern "C" s32 SpNpcRedd_PickUnusedFlag(void *self, u8 *buf, s32 n) {
    s32 k, i;
    s32 cnt = SpNpcRedd_CountUnusedFlags(self, buf, n);
    s32 r = 0;
    k = Random_GlobalBelow(cnt);
    for (i = r; i < n; buf++, i++) {
        if (*buf == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

SpNpcReddTalk::SpNpcReddTalk() {}

SpNpcReddTalk::~SpNpcReddTalk() {}

void SpNpcReddTalk::vfunc_08() { ActorTalkRequest::vfunc_08(); }

void SpNpcReddTalk::attachOwner(s32 v) {
    vfunc_08();
    owner = (SpNpcRedd *)v;
    redVaseSlot = -1;
    feeQuoted = 0;
}

void SpNpcReddTalk::setTopic(s32 v) { topic = v; }

s32 SpNpcReddTalk::getTopic() { return topic; }

extern "C" BOOL SpNpcRedd_IsSoldOut(void *self) {
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        u16 *p = ReddShop_GetItem(data_021ed2c0, i, 0);
        BOOL r;
        if (Item_IsFurniture(p)) {
            u16 t = 0x1547;
            r = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) ? TRUE : FALSE;
        } else {
            r = (*p == 0x1547) ? TRUE : FALSE;
        }
        if (!r) {
            return FALSE;
        }
    }
    return TRUE;
}

void SpNpcReddTalk::start(TalkStartMsg *out) {
    u16 x, b, c, k1, k4, k2, k3;
    void *h = PlayerData_GetCurrent();
    if (topic == 0xc) {
        out->msgIndex = MSG_ID(topic);
        out->msgKey = (const char *)sSpNpcReddTopicMsgs[topic].name;
        return;
    }
    if (topic != 0 && topic != 1 && topic != 2) {
        u16 *pp = &owner->selectedItem;
        if (Unk_ov052_022595dc_Eq(pp, &k1)) {
            if (_ZN12Unk_02097ff48testFlagEj(h, 0xc) != 0) {
                if (_ZN11CommManager8isOnlineEv(gCommManager) == 0 && redVaseSlot == -1) {
                    x = 0x34a8;
                    redVaseSlot = Pocket_FindItem(&x);
                }
                if (redVaseSlot >= 0) {
                    topic = 5;
                } else if (SpNpcRedd_IsSoldOut(this)) {
                    topic = 6;
                } else if (Talk_CheckAndSetPlayerFlag(1, 1) == 0) {
                    topic = 7;
                } else {
                    if (_ZN8PlayerId7isValidEv(ReddLastSale_GetBuyer(data_021ed284)) != 0 &&
                        (_ZN12ReddLastSale12copyItemFromEPKS_(&b, data_021ed284), !Unk_ov052_022595dc_Eq(&b, &k2))) {
                        _ZN12ReddLastSale12copyItemFromEPKS_(&c, data_021ed284);
                        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &c, 0, 7);
                        u16 *r6 = (u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
                        u16 *r7 = (u16 *)ReddLastSale_GetBuyer(data_021ed284);
                        if (!(r7[0] == r6[0] && memcmp(r7 + 1, r6 + 1, 8) == 0 && _ZN8PlayerId6equalsEPS_(r7, r6) != 0)) {
                            _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, ReddLastSale_GetBuyer(data_021ed284), 1);
                            topic = 8;
                        } else {
                            _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, _ZN10PlayerData11getPlayerIdEv(h), 1);
                            topic = 9;
                        }
                    } else {
                        topic = 0xa;
                    }
                }
            }
        }
    }
    if (topic < 0 || topic >= 0xd) {
        return;
    }
    out->msgIndex = MSG_ID(topic);
    if (_ZN12Unk_02097ff48testFlagEj(h, 0xc) != 0) {
        if (topic == 0xa) {
            out->msgIndex = Random_GlobalBelow(4) + 0x17;
            if (out->msgIndex == 0x1a) {
                out->msgIndex = 0x30;
            }
        }
        s32 hit = 0;
        if (!Unk_ov052_022595dc_Eq(&owner->selectedItem, &k3)) {
            price = Item_GetPrice(&owner->selectedItem) * 2;
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &owner->selectedItem, 1, 7);
            _ZN16ActorTalkRequest13setNumberSlotEijiii(this, price, 2, 10, 1, 0);
            s32 i;
            for (i = 0; i < 3; i++) {
                u16 *p, *q1;
                q1 = &owner->pitchedItems[i].id;
                p = &owner->selectedItem;
                if (Unk_ov052_022595dc_Eq2(p, q1)) {
                    out->msgIndex = 0x1d;
                    break;
                }
                u16 *q = &owner->pitchedItems[i].id;
                if (Unk_ov052_022595dc_EqK(q, &k4)) {
                    hit = i;
                }
            }
            if (out->msgIndex != 0x1d) {
                s32 idx = SpNpcRedd_PickUnusedFlag(owner, owner->usedPitchMsgs, 5);
                if (owner->usedPitchMsgs[idx] == 0) {
                    owner->usedPitchMsgs[idx] = 1;
                    *(u16 *)((u8 *)owner + 0x71c + hit * 2) = owner->selectedItem;
                }
                if (SpNpcRedd_CountUnusedFlags(owner, owner->usedPitchMsgs, 5) == 0) {
                    MI_CpuFill8(owner->usedPitchMsgs, 0, 5);
                    owner->usedPitchMsgs[idx] = 1;
                    *(u16 *)((u8 *)owner + 0x71c + hit * 2) = owner->selectedItem;
                }
                out->msgIndex = idx + 0x1e;
            }
        }
    }
    out->msgKey = (const char *)sSpNpcReddTopicMsgs[topic].name;
}

void SpNpcReddTalk::onMessageEnd() {
    char *tbl = sSpNpcReddKey;
    u32 msg = 0xff;
    u16 v[4];
    void *h = PlayerData_GetCurrent();
    switch (msgIndex) {
    case 0x2e:
        v[1] = 0x36fc;
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &v[1], 0, 5, 0);
        v[2] = 0x36fc;
        Pocket_AddItem(&v[2], 0);
        msg = 0x2f;
    case 0x2d:
        redVaseSlot = -2;
        break;
    case 6:
        if (_ZN12Unk_02097ff48testFlagEj(h, 0xc) == 0) {
            setTopic(3);
        } else {
            setTopic(10);
        }
        break;
    case 7:
        setTopic(4);
        break;
    case 0x10:
        v[3] = 0x149d;
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &v[3], 0, 5, 0);
        owner->selectedItem = 0xfff1;
        msg = 0x11;
        NpcActor_ChargePlayer(owner, 0xbb8);
        setTopic(7);
        _ZN12Unk_02097ff47setFlagEj(h, 0xc);
        Talk_CheckAndSetPlayerFlag(1, 1);
        break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
        completePurchase();
        break;
    }
    if (msg != 0xff) {
        *(u8 *)v = msg;
        unk_3c->setNextMessage((u8 *)v, tbl);
    }
}

void SpNpcReddTalk::onChoice() {
    s32 t = getChoiceList()->getResult();
    char *tbl = sSpNpcReddKey;
    u32 msg = 0xff;
    u16 v[2];
    switch (msgIndex) {
    case 0x2c:
        if (t == 0) {
            if (redVaseSlot >= 0) {
                Pocket_RemoveItem(redVaseSlot);
                v[1] = 0x34a8;
                _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &v[1], 0, 5, 0);
            }
            msg = 0x2e;
        }
        break;
    case 7:
    case 0x12:
        if (t != 0) {
            if (NpcActor_CanPlayerPay(owner, 0xbb8) == 0) {
                msg = 0xa;
            } else if (feeQuoted == 0) {
                msg = 8;
            } else {
                msg = 0xc;
            }
        }
        break;
    case 9:
        feeQuoted = 1;
        if (t == 0) {
            msg = 0xc;
        }
        break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
        if (t == 0) {
            if (NpcActor_CanPlayerPay(owner, price) != 0) {
                if (Pocket_FindEmpty() >= 0) {
                    s32 idx = SpNpcRedd_PickUnusedFlag(owner, owner->usedThanksMsgs, 5);
                    owner->usedThanksMsgs[idx] = 1;
                    if (SpNpcRedd_CountUnusedFlags(owner, owner->usedThanksMsgs, 5) == 0) {
                        MI_CpuFill8(owner->usedThanksMsgs, 0, 5);
                        owner->usedThanksMsgs[idx] = 1;
                    }
                    msg = (u8)(idx + 0x24);
                    break;
                }
                msg = 0x2a;
            } else {
                msg = 0x29;
            }
        }
        owner->selectedItem = 0xfff1;
        break;
    }
    if (msg != 0xff) {
        *(u8 *)v = msg;
        unk_3c->setNextMessage((u8 *)v, tbl);
    }
}

void SpNpcReddTalk::completePurchase() {
    NpcActor_ChargePlayer(owner, price);
    Pocket_AddItem(&owner->selectedItem, 0);
    ReddShop_BuyAt(owner->selectedItemX, owner->selectedItemZ, 0xf);
    u8 *const g = data_021ed284;
    _ZN12ReddLastSale8setBuyerEPKS_(g, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    _ZN12ReddLastSale7setItemEPKS_(g, &owner->selectedItem);
    _ZN16ActorTalkRequest13setNumberSlotEijiii(this, price, 2, 10, 1, 0);
    owner->selectedItem = 0xfff1;
    owner->boughtSomething = 1;
}

BOOL SpNpcRedd::vfunc_48() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) != 0 || netIsTalkLocked() != 0 || tryItemTalk() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcRedd::vfunc_58() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) != 0 || netIsTalkLocked() != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcRedd::vfunc_4c(u32 cmd, u32 arg) {
    footstepFx.unk_08 = arg;
    switch (cmd) {
    case 3:
        changeAct(8);
        break;
    case 1:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        if (talk.getTopic() == 0) {
            changeAct(5);
        } else if (talk.getTopic() == 1 || talk.getTopic() == 2 ||
                   talk.getTopic() == 0xc) {
            changeAct(6);
        } else {
            changeAct(9);
        }
        break;
    case 0:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        changeAct(5);
        break;
    case 8:
        if (talk.getTopic() == 1 || talk.getTopic() == 2) {
            Unk_ov052_Vec v;
            Unk_ov052_Vec *src = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
            v = *src;
            if (Ground_IsOnLockedExit(&v)) {
                Ground_UnlockExit();
            } else {
                changeAct(1);
            }
        } else if (talk.getTopic() == 0xc) {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        } else {
            changeAct(1);
        }
        break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    }
}

BOOL SpNpcRedd::pickDisplayItem() {
    u16 t[2];
    s32 bx, by;
    Unk_ov052_Vec v;
    Character *p = (Character *)PlayerActor_GetActor(4);
    BOOL f = Unk_ov052_02258f34_Flags() ? TRUE : FALSE;
    if (p == 0 || TalkRequest_IsActive() != 0 || _ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) != 0 || ((gPad[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)&p->position;
    v.x = p->position;
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
        void *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), bx, by, 0);
        if (o != 0) {
            if (o != TouchPick_GetTargetObject(Scene_GetTouchPicker(), 0, 0)) {
                return FALSE;
            }
        } else {
            s32 bx2 = 0, by2 = 0;
            Unk_ov052_Vec v2;
            TouchPick_GetGroundPos(Scene_GetTouchPicker(), &v2);
            FieldPos_ToUnit(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *ShopStock_GetItemAt(bx, by);
    if (Unk_ov052_02258f34_Eq(&t[0], &t[1])) {
        return FALSE;
    }
    selectedItem = t[0];
    selectedItemX = bx;
    selectedItemZ = by;
    unk_72c = 0;
    return TRUE;
}

BOOL SpNpcRedd::tryItemTalk() {
    if (pickDisplayItem()) {
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcRedd::tryFarewellTalk() {
    Unk_ov052_02258eac_Loc v;
    Unk_ov052_Vec *src = (Unk_ov052_Vec *)PlayerActor_GetBodyPos(4);
    *(Unk_ov052_Vec *)&v = *src;
    if (Ground_IsOnLockedExit(&v)) {
        if (boughtSomething == 0) {
            talk.setTopic(1);
        } else {
            talk.setTopic(2);
        }
        TalkRequest_AddPlayerTalk6(this, 0);
        changeAct(0xa);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcRedd::tryClosingTimeTalk() {
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    Clock_GetDateTime(buf);
    if (((u8 *)buf)[2] < 6) {
        talk.setTopic(0xc);
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

// Data
extern "C" char sSpNpcReddKey[] = "sp_npc_fox";
extern "C" u8 sSpNpcReddModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'f', 'o', 'x', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcReddTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'f', 'o', 'x', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov052_SceneEntry sSpNpcReddProfile = {SpNpcRedd_Create, 0x55, 0x5c, 2, 0x5000, 0x5000, 0x3e800};

extern "C" const Unk_ov052_MsgRow sSpNpcReddTopicMsgs[13] = {
    {sSpNpcReddKey, 0x06, {0, 0, 0}}, {sSpNpcReddKey, 0x1c, {0, 0, 0}}, {sSpNpcReddKey, 0x1b, {0, 0, 0}},
    {sSpNpcReddKey, 0x07, {0, 0, 0}}, {sSpNpcReddKey, 0x12, {0, 0, 0}}, {sSpNpcReddKey, 0x2c, {0, 0, 0}},
    {sSpNpcReddKey, 0x1a, {0, 0, 0}}, {sSpNpcReddKey, 0x14, {0, 0, 0}}, {sSpNpcReddKey, 0x16, {0, 0, 0}},
    {sSpNpcReddKey, 0x15, {0, 0, 0}}, {sSpNpcReddKey, 0x17, {0, 0, 0}}, {sSpNpcReddKey, 0x1e, {0, 0, 0}},
    {sSpNpcReddKey, 0x33, {0, 0, 0}},
};

extern "C" void _ZN9SpNpcRedd9mainAct0AEv();
extern "C" void _ZN9SpNpcRedd10setupAct0AEv();
extern "C" void _ZN9SpNpcRedd9mainAct09Ev();
extern "C" void _ZN9SpNpcRedd10setupAct09Ev();
extern "C" void _ZN9SpNpcRedd9mainAct08Ev();
extern "C" void _ZN9SpNpcRedd10setupAct08Ev();
extern "C" void _ZN9SpNpcRedd9mainAct07Ev();
extern "C" void _ZN9SpNpcRedd10setupAct07Ev();
extern "C" void _ZN9SpNpcRedd9mainAct06Ev();
extern "C" void _ZN9SpNpcRedd10setupAct06Ev();
extern "C" void _ZN9SpNpcRedd9mainAct05Ev();
extern "C" void _ZN9SpNpcRedd10setupAct05Ev();
extern "C" void _ZN9SpNpcRedd9mainAct04Ev();
extern "C" void _ZN9SpNpcRedd10setupAct04Ev();
extern "C" void _ZN9SpNpcRedd9mainAct03Ev();
extern "C" void _ZN9SpNpcRedd10setupAct03Ev();
extern "C" void _ZN9SpNpcRedd9mainAct02Ev();
extern "C" void _ZN9SpNpcRedd10setupAct02Ev();
extern "C" void _ZN9SpNpcRedd9mainAct01Ev();
extern "C" void _ZN9SpNpcRedd10setupAct01Ev();
extern "C" void _ZN9SpNpcRedd9mainAct00Ev();
extern "C" void _ZN9SpNpcRedd10setupAct00Ev();
extern "C" void *data_ov052_0225a788[2] = {(void *)_ZN9SpNpcRedd10setupAct06Ev, 0};
extern "C" void *data_ov052_0225a768[2] = {(void *)_ZN9SpNpcRedd9mainAct00Ev, 0};
extern "C" void *data_ov052_0225a808[2] = {(void *)_ZN9SpNpcRedd10setupAct02Ev, 0};
extern "C" void *data_ov052_0225a800[2] = {(void *)_ZN9SpNpcRedd9mainAct01Ev, 0};
extern "C" void *data_ov052_0225a7f8[2] = {(void *)_ZN9SpNpcRedd10setupAct03Ev, 0};
extern "C" void *data_ov052_0225a7f0[2] = {(void *)_ZN9SpNpcRedd9mainAct03Ev, 0};
extern "C" void *data_ov052_0225a7e8[2] = {(void *)_ZN9SpNpcRedd10setupAct04Ev, 0};
extern "C" void *data_ov052_0225a7e0[2] = {(void *)_ZN9SpNpcRedd9mainAct04Ev, 0};
extern "C" void *data_ov052_0225a7d8[2] = {(void *)_ZN9SpNpcRedd10setupAct05Ev, 0};
extern "C" void *data_ov052_0225a7d0[2] = {(void *)_ZN9SpNpcRedd9mainAct05Ev, 0};
extern "C" void *data_ov052_0225a7b8[2] = {(void *)_ZN9SpNpcRedd10setupAct07Ev, 0};
extern "C" void *data_ov052_0225a7c0[2] = {(void *)_ZN9SpNpcRedd9mainAct0AEv, 0};
extern "C" void *data_ov052_0225a7c8[2] = {(void *)_ZN9SpNpcRedd10setupAct01Ev, 0};
extern "C" void *data_ov052_0225a7b0[2] = {(void *)_ZN9SpNpcRedd9mainAct07Ev, 0};
extern "C" void *data_ov052_0225a7a8[2] = {(void *)_ZN9SpNpcRedd10setupAct08Ev, 0};
extern "C" void *data_ov052_0225a7a0[2] = {(void *)_ZN9SpNpcRedd9mainAct02Ev, 0};
extern "C" void *data_ov052_0225a798[2] = {(void *)_ZN9SpNpcRedd10setupAct09Ev, 0};
extern "C" void *data_ov052_0225a790[2] = {(void *)_ZN9SpNpcRedd9mainAct09Ev, 0};
extern "C" void *data_ov052_0225a760[2] = {(void *)_ZN9SpNpcRedd10setupAct00Ev, 0};
extern "C" void *data_ov052_0225a780[2] = {(void *)_ZN9SpNpcRedd10setupAct0AEv, 0};
extern "C" void *data_ov052_0225a778[2] = {(void *)_ZN9SpNpcRedd9mainAct06Ev, 0};
extern "C" void *data_ov052_0225a770[2] = {(void *)_ZN9SpNpcRedd9mainAct08Ev, 0};
typedef BOOL (SpNpcRedd::*Unk_ov052_Fn)();
extern "C" Unk_ov052_0225a2cc_Ent sSpNpcReddActTable[11] = {
    {*(Unk_ov052_Fn *)data_ov052_0225a760, *(Unk_ov052_Fn *)data_ov052_0225a768},
    {*(Unk_ov052_Fn *)data_ov052_0225a7c8, *(Unk_ov052_Fn *)data_ov052_0225a800},
    {*(Unk_ov052_Fn *)data_ov052_0225a808, *(Unk_ov052_Fn *)data_ov052_0225a7a0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7f8, *(Unk_ov052_Fn *)data_ov052_0225a7f0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7e8, *(Unk_ov052_Fn *)data_ov052_0225a7e0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7d8, *(Unk_ov052_Fn *)data_ov052_0225a7d0},
    {*(Unk_ov052_Fn *)data_ov052_0225a788, *(Unk_ov052_Fn *)data_ov052_0225a778},
    {*(Unk_ov052_Fn *)data_ov052_0225a7b8, *(Unk_ov052_Fn *)data_ov052_0225a7b0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7a8, *(Unk_ov052_Fn *)data_ov052_0225a770},
    {*(Unk_ov052_Fn *)data_ov052_0225a798, *(Unk_ov052_Fn *)data_ov052_0225a790},
    {*(Unk_ov052_Fn *)data_ov052_0225a780, *(Unk_ov052_Fn *)data_ov052_0225a7c0},
};

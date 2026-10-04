// mwcc-flags: -str reuse
#include "types.h"
#include "game/Unk_0202368c_Obj.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
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

struct Unk_0201bc1c;
class SpNpcTortimerBugOff;
class SpNpcTortimerBugOffTalk;

struct ChoiceList {
    s32 getResult();
};


struct MsgString9B {
    u32 v[8];
    MsgString9B();
    ~MsgString9B();
};

struct Unk_ov082_022718b0_Rec {
    u32 a, b;
};

extern "C" {
void _ZN12Unk_0201442015requestKeepItemEv(void *p);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN12Unk_020d771015setPocketFilterEjjj(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void _ZN12Unk_020d771012openSubSceneEi(void *p, s32 v);
void _ZN12Unk_020d771019requestReopenWindowEv(void *p);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
void _ZN16ActorTalkRequest17setPlayerNameSlotEjj(void *p, void *q, u32 a);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
s32 _ZN8PlayerId7isValidEv(void *p);
s32 _ZN8PlayerId6equalsEPS_(void *p, void *q);
s32 _ZN10VillagerId7isValidEv(void *p);
void _ZN10VillagerId7getNameEj(void *p, void *q);
void *_ZN13ContestRecord13func_020858acEv(void *p);
void *_ZN13ContestRecord17getHolderVillagerEv(void *p);
s32 _ZN13ContestRecord7getSizeEv(void *p);
void ContestRecord_GetItem(u16 *out, void *p);
void ContestRecord_SetItem(void *p, u16 *q);
void _ZN13ContestRecord7setSizeEi(void *p, s32 v);
void _ZN13ContestRecord15setHolderPlayerEP17Unk_02085810_Base(void *p, void *q);
void _ZN13ContestRecord7setKindEj(void *p, s32 v);
void _ZN17PlayerSpNpcRecord16setEnteredBugOffEi(void *p, s32 v);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void _ZN12ItemPickSpec3setEii(Unk_0202368c_Obj *o, s32 a, s32 b);
void ItemPick_One(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void ItemPickSpec_Destruct(Unk_0202368c_Obj *o);
void TalkRequest_SetTargetDone(void *p);
void PlayerActor_GetSlotHeldItem(u16 *out, void *p);
void *PlayerActor_GetLocalSessionSlot();
void Clock_GetDateTime(void *p);
s32 Pocket_FindItem(u16 *p);
s32 Pocket_FindEmpty();
void Pocket_RemoveItem(s32 v);
void Pocket_AddItem(u16 *p, s32 v);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
s32 Pocket_GetItem();
s32 Contest_GetCatchSize(u16 *p);
s32 memcmp(void *a, void *b, u32 n);
u32 Random_GlobalBelow(u32 n);
void ContestRecord_BeginContestDay(void *g, u32 a);
u32 Insect_GetSpawnTable(u32 v);
s32 InsectPick_PickAnyHour(u16 *a, s32 *b, s32 *c, s32 d, void *tbl, s32 *arr, s32 cnt);
s32 SaveVillagers_PickRandomExcept(void *p, u32 a, u32 b);
void *_ZN12VillagerData13getVillagerIdEv();
void _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(void *g, void *p);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, s32 a, s32 b);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u16 data_020c6cc8;
extern u8 gContestRecord[];
extern u8 gSaveData[];
extern u8 gSaveVillagers[];
extern u32 __ptmf_null[];
}


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
    virtual void start(Unk_ov082_022718b0_Rec *out);
    virtual void runDeferred();
    virtual void update();
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
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcTortimerBugOffTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcTortimerBugOffTalk::*Fn)();

    SpNpcTortimerBugOffTalk();
    virtual ~SpNpcTortimerBugOffTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(Unk_ov082_022718b0_Rec *out);
    virtual void onTaskDone();

    s32 getRecordHolder();
    void attachOwner(SpNpcTortimerBugOff *owner);
    void scriptCloseItemSelect();
    void scriptCatchChosen();
    void setNextScript(s32 i);
    void setScript(s32 i);
    void pickScript(Fn *slot, s32 i);

    SpNpcTortimerBugOff *ownerNpc;
    Fn script;
    Fn nextScript;
    u16 entryItem;
    u8 beatOwnRecord;
    s32 massageChairSlot;
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
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};

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

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

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

class SpNpcTortimerBugOff : public SpNpcActor {
public:
    SpNpcTortimerBugOff() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    SpNpcTortimerBugOffTalk talk;
    s32 entrySize;
};

struct Unk_ov082_02271ce4_Ent {
    BOOL (SpNpcTortimerBugOff::*enter)();
    BOOL (SpNpcTortimerBugOff::*exit)();
};

static inline BOOL Unk_ov082_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov082_Neg(s32 v) {
    if (v < 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
extern Unk_ov082_02271ce4_Ent sSpNpcTortimerBugOffActTable[3];
extern u8 sSpNpcTortimerBugOffTexturePath[];
extern u8 sSpNpcTortimerBugOffModelPath[];
BOOL SpNpcTortimerBugOff_IsInsect(u16 *p, s32 x);
}

struct Unk_ov082_SceneEntry {
    SpNpcTortimerBugOff *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcTortimerBugOff *SpNpcTortimerBugOff_Create();

// ---------------------------------------------------------------------------------------------------------------------
SpNpcTortimerBugOff *SpNpcTortimerBugOff_Create() {
    return new SpNpcTortimerBugOff();
}

BOOL SpNpcTortimerBugOff::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerBugOff::vfunc_00() {
    struct {
        u16 w0;
        u16 s2;
        u16 s4;
        u16 s6;
        s32 t[4];
    } l;
    void *g;
    s32 rnd;
    u32 idx;
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    g = gContestRecord;
    ContestRecord_BeginContestDay(g, 2);
    ContestRecord_GetItem(&l.s2, g);
    if (!Unk_ov082_InRange(&l.s2, 0x12b0, 0x12e7)) {
        _ZN13ContestRecord13func_020858acEv(g);
        rnd = Random_GlobalBelow(2);
        l.t[0] = 0;
        l.t[1] = 0;
        l.t[2] = 0;
        l.t[3] = 0;
        l.w0 = 0xfff1;
        Clock_GetDateTime(&l.t[2]);
        idx = Insect_GetSpawnTable(((u8 *)&l)[0x14] - 1);
        if (idx != 0) {
            if (InsectPick_PickAnyHour(&l.w0, &l.t[0], &l.t[1], rnd, (void *)idx, 0, 0) == 0) {
                InsectPick_PickAnyHour(&l.w0, &l.t[0], &l.t[1], rnd, (void *)idx, 0, 0);
            }
        }
        ContestRecord_SetItem(g, &l.w0);
        ContestRecord_GetItem(&l.s4, g);
        if (Unk_ov082_InRange(&l.s4, 0x12b0, 0x12e7)) {
            if (SaveVillagers_PickRandomExcept(gSaveVillagers, 0, 0) != 0) {
                _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv());
                _ZN13ContestRecord7setKindEj(g, 2);
                _ZN8SaveData7setFlagEj(gSaveData, 0xf);
            }
        }
        entrySize = Contest_GetCatchSize(&l.w0);
        _ZN13ContestRecord7setSizeEi(g, entrySize);
    }
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    return TRUE;
}

u8 *SpNpcTortimerBugOff::getTexturePath() { return sSpNpcTortimerBugOffTexturePath; }

u8 *SpNpcTortimerBugOff::getModelPath() { return sSpNpcTortimerBugOffModelPath; }

BOOL SpNpcTortimerBugOff::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerBugOffActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerBugOffActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimerBugOff::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerBugOffActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerBugOffActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimerBugOff::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerBugOff::mainAct00() { return TRUE; }

BOOL SpNpcTortimerBugOff::setupAct01() {
    void *p = talk.func_02015aac();
    u32 r = 0;
    if (p != NULL) {
        r = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL SpNpcTortimerBugOff::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerBugOff::mainAct02() { return TRUE; }

void SpNpcTortimerBugOffTalk::onTaskDone() {
    if (script) {
        (this->*script)();
        Fn t = *(Fn *)__ptmf_null;
        script = t;
        if (nextScript) {
            script = nextScript;
            nextScript = t;
        }
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov082_02271ce4_Ent sSpNpcTortimerBugOffActTable[3];
extern "C" u8 sSpNpcTortimerBugOffTexturePath[];
extern "C" Unk_ov082_SceneEntry sSpNpcTortimerBugOffProfile;
extern "C" u8 sSpNpcTortimerBugOffModelPath[];

extern "C" Unk_ov082_SceneEntry sSpNpcTortimerBugOffProfile = {SpNpcTortimerBugOff_Create, 0x58, 0x5f, 2, 0x5000, 0x5000, 0x3e800};

extern "C" u8 sSpNpcTortimerBugOffTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

// Data order: this unit is placed object by object (see object_order.txt).

extern "C" u8 sSpNpcTortimerBugOffModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

Unk_ov082_02271ce4_Ent sSpNpcTortimerBugOffActTable[3] = {
    {&SpNpcTortimerBugOff::setupAct00, &SpNpcTortimerBugOff::mainAct00},
    {&SpNpcTortimerBugOff::setupAct01, &SpNpcTortimerBugOff::mainAct01},
    {NULL, &SpNpcTortimerBugOff::mainAct02},
};

void SpNpcTortimerBugOffTalk::pickScript(Fn *slot, s32 i) {
    static Fn tbl[2] = {&SpNpcTortimerBugOffTalk::scriptCatchChosen, &SpNpcTortimerBugOffTalk::scriptCloseItemSelect};
    *slot = tbl[i];
}

void SpNpcTortimerBugOffTalk::setScript(s32 i) {
    pickScript(&script, i);
}

void SpNpcTortimerBugOffTalk::setNextScript(s32 i) {
    pickScript(&nextScript, i);
}

extern "C" BOOL SpNpcTortimerBugOff_IsInsect(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x12b0 && v <= 0x12e7) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcTortimerBugOffTalk::scriptCatchChosen() {
    TalkWindowState *r6 = unk_3c;
    u8 b;
    entryItem = 0xfff1;
    ownerNpc->entrySize = 0;
    b = 0xc;
    if (MenuCtrl_IsResultOk()) {
        s32 r4 = MenuCtrl_GetIndex();
        entryItem = Pocket_GetItem();
        ownerNpc->entrySize = Contest_GetCatchSize(&entryItem);
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &entryItem, 0, 4, 0);
        setNextScript(1);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &entryItem, 2, 7);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, ownerNpc->entrySize >> 12, 4, 3, 0, 0);
        if (r4 >= 0) {
            Pocket_RemoveItem(r4);
        }
        b = 0xd;
    } else {
        _ZN12Unk_020d771019requestReopenWindowEv(this);
    }
    r6->setNextMessage(&b, (void *)"sp_npc_turtle2");
}

void SpNpcTortimerBugOffTalk::scriptCloseItemSelect() {
    _ZN12Unk_020d771019requestReopenWindowEv(this);
}

SpNpcTortimerBugOffTalk::SpNpcTortimerBugOffTalk() {
    entryItem = 0xfff1;
}

SpNpcTortimerBugOffTalk::~SpNpcTortimerBugOffTalk() {}

void SpNpcTortimerBugOffTalk::attachOwner(SpNpcTortimerBugOff *owner) {
    vfunc_08();
    ownerNpc = owner;
    beatOwnRecord = 0;
    massageChairSlot = -1;
}

void SpNpcTortimerBugOffTalk::start(Unk_ov082_022718b0_Rec *out) {
    u16 x[4];
    Unk_ov082_022718b0_Rec rec;
    _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    out->a = (u32)"sp_npc_turtle2";
    rec.a = 0;
    rec.b = 0;
    Clock_GetDateTime(&rec);
    if (massageChairSlot == -1) {
        x[1] = 0x37e0;
        massageChairSlot = Pocket_FindItem(&x[1]);
        if (massageChairSlot >= 0) {
            out->a = (u32)"sp_npc_turtle";
            *((u8 *)out + 4) = 0;
            return;
        }
    }
    u8 t = *((u8 *)&rec + 2);
    if (!(t >= 0xc && t < 0x12)) {
        *((u8 *)out + 4) = 2;
    } else {
        *((u8 *)out + 4) = 3;
        PlayerActor_GetSlotHeldItem(&x[0], PlayerActor_GetLocalSessionSlot());
        if (!Talk_CheckAndSetPlayerFlag(0x1c, 0)) {
            x[2] = 0x1376;
            if (Unk_ov082_Neg(Pocket_FindItem(&x[2]))) {
                if (!Unk_ov082_InRange(&x[0], 0x1376, 0x1376)) {
                    x[3] = 0x1377;
                    if (Unk_ov082_Neg(Pocket_FindItem(&x[3]))) {
                        if (!Unk_ov082_InRange(&x[0], 0x1377, 0x1377)) {
                            if (Pocket_FindEmpty() >= 0) {
                                *((u8 *)out + 4) = 1;
                            } else {
                                *((u8 *)out + 4) = 0;
                            }
                            return;
                        }
                    }
                }
            }
        }
        if (Talk_CheckAndSetPlayerFlag(0x1c, 1)) {
            *((u8 *)out + 4) = 8;
        }
    }
}

s32 SpNpcTortimerBugOffTalk::getRecordHolder() {
    u16 v, w;
    u8 *r7 = gContestRecord;
    ContestRecord_GetItem(&v, r7);
    if (Unk_ov082_InRange(&v, 0x12b0, 0x12e7)) {
        void *r6 = _ZN13ContestRecord13func_020858acEv(r7);
        void *r4 = _ZN13ContestRecord17getHolderVillagerEv(r7);
        ContestRecord_GetItem(&w, r7);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &w, 1, 7);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, _ZN13ContestRecord7getSizeEv(r7) >> 12, 0, 3, 0, 0);
        if (_ZN8PlayerId7isValidEv(r6)) {
            _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, _ZN13ContestRecord13func_020858acEv(r7), 1);
            u16 *q = (u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
            u16 *p = (u16 *)_ZN13ContestRecord13func_020858acEv(r7);
            if (p[0] != q[0] || memcmp(p + 1, q + 1, 8) != 0 || _ZN8PlayerId6equalsEPS_(p, q) == 0) {
                return 1;
            }
            return 0;
        }
        if (_ZN10VillagerId7isValidEv(r4)) {
            MsgString9B o;
            _ZN10VillagerId7getNameEj(r4, &o);
            unk_3c->setSlot(1, &o);
            return 2;
        }
    }
    return -1;
}

void SpNpcTortimerBugOffTalk::onMessageEnd() {
    u8 b1, b2;
    u16 h0, ha, hb, x14, h16, hc, hd;
    Unk_0202368c_Obj o;
    u8 *r6;
    u8 *r7 = (u8 *)"sp_npc_turtle2";
    u32 msg = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            ha = 0x1559;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &ha, 0, 5, 0);
            hb = 0x1559;
            Pocket_AddItem(&hb, 0);
            b1 = 4;
            unk_3c->setNextMessage(&b1, (void *)"sp_npc_turtle");
        }
        return;
    }
    if (msgIndex == 0xd || msgIndex == 0x10 || msgIndex == 0x13 || msgIndex == 0x16) {
        h0 = 0xfff1;
        r6 = gContestRecord;
        switch (msgIndex) {
        case 0xd:
            _ZN12Unk_0201442015requestKeepItemEv(this);
            ContestRecord_GetItem(&x14, r6);
            if (!Unk_ov082_InRange(&x14, 0x12b0, 0x12e7)) {
                msg = 0x16;
                break;
            }
            _ZN17PlayerSpNpcRecord16setEnteredBugOffEi(_ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent()), 1);
            {
                s32 v = _ZN13ContestRecord7getSizeEv(r6);
                if ((ownerNpc->entrySize >> 12) > (v >> 12)) {
                    msg = 0x10;
                    break;
                }
            }
            if (getRecordHolder() == 0) {
                msg = 0x1d;
            } else if (getRecordHolder() > 0) {
                msg = 0xe;
            }
            break;
        case 0xe:
        case 0xf:
            break;
        case 0x10:
            if (getRecordHolder() == 0) {
                msg = 0x11;
                beatOwnRecord = 1;
            } else if (getRecordHolder() > 0) {
                msg = 0x12;
                beatOwnRecord = 0;
            }
            break;
        case 0x11:
        case 0x12:
        case 0x14:
        case 0x15:
            break;
        case 0x13:
        case 0x16:
            if (beatOwnRecord != 0) {
                msg = 0x14;
            } else {
                msg = 0x15;
            }
            ContestRecord_SetItem(r6, &entryItem);
            _ZN13ContestRecord7setSizeEi(r6, ownerNpc->entrySize);
            _ZN13ContestRecord15setHolderPlayerEP17Unk_02085810_Base(r6, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
            _ZN13ContestRecord7setKindEj(r6, 2);
            _ZN8SaveData7setFlagEj(gSaveData, 0xf);
            _ZN12ItemPickSpec3setEii(&o, 0, 0);
            ItemPick_One(&h16, &o, 0, 0, 1, 1, 0);
            h0 = h16;
            ItemPickSpec_Destruct(&o);
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h0, 0, 5, 0);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h0, 0, 7);
            Pocket_AddItem(&h0, 0);
            break;
        }
    }
    switch (msgIndex) {
    case 1:
        hc = 0x1376;
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &hc, 0, 5, 0);
        hd = 0x1376;
        Pocket_AddItem(&hd, 0);
        msg = 4;
        Talk_CheckAndSetPlayerFlag(0x1c, 1);
        break;
    case 0xb:
        _ZN12Unk_020d771015setPocketFilterEjjj(this, SpNpcTortimerBugOff_IsInsect, 0xd, 1);
        _ZN12Unk_020d771012openSubSceneEi(this, 0);
        setScript(0);
        break;
    }
    if (msg != 0xff) {
        b2 = msg;
        unk_3c->setNextMessage(&b2, r7);
    }
}

void SpNpcTortimerBugOffTalk::onChoice() {
    u8 b1, b2;
    u16 h;
    s32 t = getChoiceList()->getResult();
    u8 *s = (u8 *)"sp_npc_turtle2";
    u8 msg = 0xff;
    if (massageChairSlot >= 0) {
        s = (u8 *)"sp_npc_turtle";
        if (msgIndex == 0 && t == 0) {
            if (massageChairSlot >= 0) {
                Pocket_RemoveItem(massageChairSlot);
                h = 0x37e0;
                _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->setNextMessage(&b1, s);
        }
    } else {
        if (msgIndex == 8) {
            if (t != 0) {
                s32 r = getRecordHolder();
                if (r == 0) {
                    msg = 9;
                } else if (r > 0) {
                    msg = 0xa;
                } else {
                    msg = 0x1e;
                }
            } else {
                msg = 0xb;
            }
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->setNextMessage(&b2, s);
        }
    }
}

BOOL SpNpcTortimerBugOff::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimerBugOff::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        talk.vfunc_08();
        talk.func_02015ab0((u32)getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}


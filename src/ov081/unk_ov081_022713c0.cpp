// mwcc-flags: -str reuse
#include "types.h"
#include "game/Unk_0202368c_Obj.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ac88.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/Unk_0201a13c.h"
#include "talk/MsgString9B.h"


struct Unk_0201bc1c;
class SpNpcTortimerFishingTourney;
class SpNpcTortimerFishingTourneyTalk;

struct ChoiceList {
    s32 getResult();
};




struct Unk_0209d498_Obj {
    u32 w[2];
};

struct Unk_ov081_02271d40_Loc {
    u16 a;
    u16 b;
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    Unk_ov081_02271d40_Loc() {}
};

extern "C" {
void _ZN16ActorTalkRequest17setFixedPointSlotEiji(void *p, s32 a, s32 b, s32 c, s32 d);
void _ZN17PlayerSpNpcRecord24setEnteredFishingTourneyEi(void *p, s32 a);
s32 FishPick_PickAnyHour(void *a, void *b, void *c, u32 d, u32 e);
u32 FishTable_IsLateMonth(u32 a);
u32 FishTable_GetForDate(u32 a, u32 b);
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
void PlayerActor_GetSlotHeldItem(u16 *out, s32 v);
s32 PlayerActor_GetLocalSessionSlot(u16 *p);
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
    virtual void start(TalkStartMsg *out);
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

class SpNpcTortimerFishingTourneyTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcTortimerFishingTourneyTalk::*Fn)();

    SpNpcTortimerFishingTourneyTalk();
    virtual ~SpNpcTortimerFishingTourneyTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone();

    s32 getRecordHolder();
    void attachOwner(SpNpcTortimerFishingTourney *owner);
    void scriptCloseItemSelect();
    void scriptCatchChosen();
    void setNextScript(s32 i);
    void setScript(s32 i);
    void pickScript(Fn *slot, s32 i);

    SpNpcTortimerFishingTourney *ownerNpc;
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
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(CollisionState, 0x30);


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
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_50[0x5c - 0x50];
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

class SpNpcTortimerFishingTourney : public SpNpcActor {
public:
    SpNpcTortimerFishingTourney() {}
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
    SpNpcTortimerFishingTourneyTalk talk;
    s32 entrySize;
};

struct Unk_ov081_02271ca0_Ent {
    BOOL (SpNpcTortimerFishingTourney::*enter)();
    BOOL (SpNpcTortimerFishingTourney::*exit)();
};

static inline BOOL Unk_ov081_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov081_Neg(s32 v) {
    if (v < 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
extern Unk_ov081_02271ca0_Ent sSpNpcTortimerFishingTourneyActTable[3];
extern u8 sSpNpcTortimerFishingTourneyTexturePath[];
extern u8 sSpNpcTortimerFishingTourneyModelPath[];
BOOL SpNpcTortimerFishingTourney_IsFish(u16 *p, s32 x);
}

struct Unk_ov081_SceneEntry {
    SpNpcTortimerFishingTourney *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcTortimerFishingTourney *SpNpcTortimerFishingTourney_Create();

extern "C" {
void _ZN27SpNpcTortimerFishingTourney10setupAct00Ev();
void _ZN27SpNpcTortimerFishingTourney9mainAct00Ev();
void _ZN27SpNpcTortimerFishingTourney10setupAct01Ev();
void _ZN27SpNpcTortimerFishingTourney9mainAct01Ev();
void _ZN27SpNpcTortimerFishingTourney9mainAct02Ev();
void _ZN31SpNpcTortimerFishingTourneyTalk17scriptCatchChosenEv();
void _ZN31SpNpcTortimerFishingTourneyTalk21scriptCloseItemSelectEv();
}
typedef BOOL (SpNpcTortimerFishingTourney::*Unk_ov081_StateFn)();

extern "C" void *data_ov081_02272060[2];
extern "C" void *data_ov081_02272068[2];
extern "C" void *data_ov081_02272070[2];
extern "C" void *data_ov081_02272078[2];
extern "C" void *data_ov081_02272080[2];
extern "C" void *data_ov081_02272088[2];
extern "C" void *data_ov081_02272090[2];
extern "C" Unk_ov081_SceneEntry sSpNpcTortimerFishingTourneyProfile;

// ---------------------------------------------------------------------------------------------------------------------
SpNpcTortimerFishingTourney *SpNpcTortimerFishingTourney_Create() {
    return new SpNpcTortimerFishingTourney();
}

BOOL SpNpcTortimerFishingTourney::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerFishingTourney::vfunc_00() {
    Unk_ov081_02271d40_Loc l;
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    void *g = gContestRecord;
    ContestRecord_BeginContestDay(g, 1);
    ContestRecord_GetItem(&l.b, g);
    if (!Unk_ov081_InRange(&l.b, 0x12e8, 0x131f)) {
        _ZN13ContestRecord13func_020858acEv(g);
        s32 r6 = Random_GlobalBelow(2);
        l.x = 0;
        l.y = 0;
        l.z = 0;
        l.w = 0;
        l.a = 0xfff1;
        Clock_GetDateTime(&l.z);
        u32 b4 = ((u8 *)&l.w)[0];
        u32 b3 = ((u8 *)&l.z)[3];
        u32 t = FishTable_GetForDate(b4, FishTable_IsLateMonth(b3));
        if (t != 0) {
            if (FishPick_PickAnyHour(&l, &l.x, &l.y, r6, t) == 0) {
                FishPick_PickAnyHour(&l, &l.x, &l.y, (r6 + 1) & 1, t);
            }
        }
        ContestRecord_SetItem(g, &l.a);
        entrySize = Contest_GetCatchSize(&l.a);
        _ZN13ContestRecord7setSizeEi(g, *(volatile s32 *)&entrySize);
        if (SaveVillagers_PickRandomExcept(gSaveVillagers, 0, 0) != 0) {
            _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv());
            _ZN13ContestRecord7setKindEj(g, 1);
            _ZN8SaveData7setFlagEj(gSaveData, 0xf);
        }
    }
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    return TRUE;
}

u8 *SpNpcTortimerFishingTourney::getTexturePath() { return sSpNpcTortimerFishingTourneyTexturePath; }

u8 *SpNpcTortimerFishingTourney::getModelPath() { return sSpNpcTortimerFishingTourneyModelPath; }

BOOL SpNpcTortimerFishingTourney::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerFishingTourneyActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerFishingTourneyActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimerFishingTourney::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerFishingTourneyActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerFishingTourneyActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimerFishingTourney::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerFishingTourney::mainAct00() { return TRUE; }

BOOL SpNpcTortimerFishingTourney::setupAct01() {
    void *p = talk.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerFishingTourney::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerFishingTourney::mainAct02() { return TRUE; }

void SpNpcTortimerFishingTourneyTalk::onTaskDone() {
    if (script) {
        (this->*script)();
        Fn t = *(Fn *)__ptmf_null;
        script = t;
        if (nextScript) {
            script = nextScript;
            nextScript = t;
        }
    }
}

extern "C" Unk_ov081_SceneEntry sSpNpcTortimerFishingTourneyProfile;



extern "C" void *data_ov081_02272088[2] = {(void *)_ZN27SpNpcTortimerFishingTourney9mainAct01Ev, 0};

extern "C" void *data_ov081_02272078[2] = {(void *)_ZN27SpNpcTortimerFishingTourney9mainAct00Ev, 0};

extern "C" void *data_ov081_02272070[2] = {(void *)_ZN31SpNpcTortimerFishingTourneyTalk17scriptCatchChosenEv, 0};

extern "C" Unk_ov081_SceneEntry sSpNpcTortimerFishingTourneyProfile = {SpNpcTortimerFishingTourney_Create, 0x57, 0x5e, 2, 0x5000, 0x5000, 0x3e800};

void SpNpcTortimerFishingTourneyTalk::pickScript(Fn *slot, s32 i) {
    static Fn tbl[2] = {*(Fn *)data_ov081_02272070, *(Fn *)data_ov081_02272068};
    *slot = tbl[i];
}

extern "C" void *data_ov081_02272090[2] = {(void *)_ZN27SpNpcTortimerFishingTourney10setupAct01Ev, 0};

extern "C" u8 sSpNpcTortimerFishingTourneyTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

Unk_ov081_02271ca0_Ent sSpNpcTortimerFishingTourneyActTable[3] = {
    {*(Unk_ov081_StateFn *)data_ov081_02272060, *(Unk_ov081_StateFn *)data_ov081_02272078},
    {*(Unk_ov081_StateFn *)data_ov081_02272090, *(Unk_ov081_StateFn *)data_ov081_02272088},
    {NULL, *(Unk_ov081_StateFn *)data_ov081_02272080},
};

extern "C" u8 sSpNpcTortimerFishingTourneyModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" void *data_ov081_02272060[2] = {(void *)_ZN27SpNpcTortimerFishingTourney10setupAct00Ev, 0};

extern "C" void *data_ov081_02272068[2] = {(void *)_ZN31SpNpcTortimerFishingTourneyTalk21scriptCloseItemSelectEv, 0};

extern "C" void *data_ov081_02272080[2] = {(void *)_ZN27SpNpcTortimerFishingTourney9mainAct02Ev, 0};


void SpNpcTortimerFishingTourneyTalk::setScript(s32 i) {
    pickScript(&script, i);
}

void SpNpcTortimerFishingTourneyTalk::setNextScript(s32 i) {
    pickScript(&nextScript, i);
}

extern "C" BOOL SpNpcTortimerFishingTourney_IsFish(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x12e8 && v <= 0x131f) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcTortimerFishingTourneyTalk::scriptCatchChosen() {
    TalkWindowState *p = unk_3c;
    u8 m;
    entryItem = 0xfff1;
    ownerNpc->entrySize = 0;
    m = 0xc;
    if (MenuCtrl_IsResultOk() != 0) {
        s32 r4 = MenuCtrl_GetIndex();
        entryItem = Pocket_GetItem();
        ownerNpc->entrySize = Contest_GetCatchSize(&entryItem);
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &entryItem, 0, 4, 0);
        setNextScript(1);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &entryItem, 2, 7);
        _ZN16ActorTalkRequest17setFixedPointSlotEiji(this, ownerNpc->entrySize, 4, 1, 3);
        if (r4 >= 0) {
            Pocket_RemoveItem(r4);
        }
        m = 0xd;
    } else {
        _ZN12Unk_020d771019requestReopenWindowEv(this);
    }
    p->setNextMessage(&m, (void *)"sp_npc_turtle1");
}

void SpNpcTortimerFishingTourneyTalk::scriptCloseItemSelect() {
    _ZN12Unk_020d771019requestReopenWindowEv(this);
}

SpNpcTortimerFishingTourneyTalk::SpNpcTortimerFishingTourneyTalk() {
    entryItem = 0xfff1;
}

SpNpcTortimerFishingTourneyTalk::~SpNpcTortimerFishingTourneyTalk() {}

void SpNpcTortimerFishingTourneyTalk::attachOwner(SpNpcTortimerFishingTourney *owner) {
    vfunc_08();
    ownerNpc = owner;
    beatOwnRecord = 0;
    massageChairSlot = -1;
}

void SpNpcTortimerFishingTourneyTalk::start(TalkStartMsg *out) {
    struct {
        u16 h[5];
        Unk_0209d498_Obj o;
    } l;
    _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    out->msgKey = "sp_npc_turtle1";
    l.o.w[0] = 0;
    l.o.w[1] = 0;
    Clock_GetDateTime(&l.o);
    if (massageChairSlot == -1) {
        l.h[2] = 0x37e0;
        massageChairSlot = Pocket_FindItem(&l.h[2]);
        if (massageChairSlot >= 0) {
            out->msgKey = "sp_npc_turtle";
            out->msgIndex = 0;
            return;
        }
    }
    u32 a = (u32)&l;
    {
        u32 v = *(u8 *)(a + 14);
        if (v < 0xc || v >= 0x12) {
            out->msgIndex = 2;
            return;
        }
    }
    *(u16 *)a = 0x1374;
    PlayerActor_GetSlotHeldItem(&l.h[1], PlayerActor_GetLocalSessionSlot((u16 *)a));
    out->msgIndex = 3;
    if (Talk_CheckAndSetPlayerFlag(0x1b, 0) == 0) {
        l.h[3] = 0x1374;
        BOOL n1 = Pocket_FindItem(&l.h[3]) < 0 ? TRUE : FALSE;
        if (n1 != 0) {
            BOOL f1 = FALSE;
            volatile u16 *pv = l.h;
            u32 a = pv[1];
            u32 b = pv[1];
            if (b >= 0x1374 && a <= 0x1374) {
                f1 = TRUE;
            }
            if (f1 == 0) {
                l.h[4] = 0x1375;
                BOOL n2 = Pocket_FindItem(&l.h[4]) < 0 ? TRUE : FALSE;
                if (n2 != 0) {
                    BOOL f2 = FALSE;
                    volatile u16 *pw = l.h;
                    u32 c = pw[1];
                    u32 d = pw[1];
                    if (d >= 0x1375 && c <= 0x1375) {
                        f2 = TRUE;
                    }
                    if (f2 == 0) {
                        if (Pocket_FindEmpty() >= 0) {
                            out->msgIndex = 1;
                        } else {
                            out->msgIndex = 0;
                        }
                        return;
                    }
                }
            }
        }
    }
    if (Talk_CheckAndSetPlayerFlag(0x1b, 1) != 0) {
        out->msgIndex = 8;
    }
}

s32 SpNpcTortimerFishingTourneyTalk::getRecordHolder() {
    u16 h[2];
    void *g = gContestRecord;
    void *r4;
    void *r6;
    u16 *p5;
    u16 *p4;
    ContestRecord_GetItem(&h[0], g);
    {
        BOOL r = FALSE;
        volatile u16 *pv = &h[0];
        u32 a = *pv;
        u32 b = *pv;
        if (b >= 0x12e8 && a <= 0x131f) {
            r = TRUE;
        }
        if (r != 0) {
            r6 = _ZN13ContestRecord13func_020858acEv(g);
            r4 = _ZN13ContestRecord17getHolderVillagerEv(g);
            ContestRecord_GetItem(&h[1], g);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[1], 1, 7);
            _ZN16ActorTalkRequest17setFixedPointSlotEiji(this, _ZN13ContestRecord7getSizeEv(g), 0, 1, 3);
            if (_ZN8PlayerId7isValidEv(r6) != 0) {
                _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, _ZN13ContestRecord13func_020858acEv(g), 1);
                p4 = (u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
                p5 = (u16 *)_ZN13ContestRecord13func_020858acEv(g);
                if (p5[0] == p4[0] && memcmp(p5 + 1, p4 + 1, 8) == 0 && _ZN8PlayerId6equalsEPS_(p5, p4) != 0) {
                    goto ret0;
                }
                return 1;
            ret0:
                return 0;
            } else if (_ZN10VillagerId7isValidEv(r4) != 0) {
                MsgString9B o;
                _ZN10VillagerId7getNameEj(r4, &o);
                unk_3c->setSlot(1, &o);
                return 2;
            }
        }
    }
    return -1;
}

void SpNpcTortimerFishingTourneyTalk::onMessageEnd() {
    u8 m1;
    u8 m2;
    u16 h0, h1, h2, h3, h4, h5;
    Unk_0202368c_Obj o;
    void *g;
    u8 *s;
    u8 msg;
    s = (u8 *)"sp_npc_turtle1";
    msg = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            h1 = 0x1559;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h1, 0, 5, 0);
            h2 = 0x1559;
            Pocket_AddItem(&h2, 0);
            m1 = 4;
            unk_3c->setNextMessage(&m1, (void *)"sp_npc_turtle");
        }
    } else {
        switch (msgIndex) {
        case 0xd:
        case 0x10:
        case 0x13:
            h0 = 0xfff1;
            g = gContestRecord;
            switch (msgIndex) {
            case 0xd:
                _ZN12Unk_0201442015requestKeepItemEv(this);
                _ZN17PlayerSpNpcRecord24setEnteredFishingTourneyEi(_ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent()), 1);
                if (((ownerNpc->entrySize * 10) >> 12) > ((_ZN13ContestRecord7getSizeEv(g) * 10) >> 12)) {
                    msg = 0x10;
                } else if (getRecordHolder() == 0) {
                    msg = 0x16;
                } else if (getRecordHolder() > 0) {
                    msg = 0xe;
                }
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
            case 0x13:
                if (beatOwnRecord != 0) {
                    msg = 0x14;
                } else {
                    msg = 0x15;
                }
                ContestRecord_SetItem(g, &entryItem);
                _ZN13ContestRecord7setSizeEi(g, ownerNpc->entrySize);
                _ZN13ContestRecord15setHolderPlayerEP17Unk_02085810_Base(g, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
                _ZN13ContestRecord7setKindEj(g, 1);
                _ZN8SaveData7setFlagEj(gSaveData, 0xf);
                _ZN12ItemPickSpec3setEii(&o, 0, 0);
                ItemPick_One(&h3, &o, 0, 0, 1, 1, 0);
                h0 = h3;
                ItemPickSpec_Destruct(&o);
                _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h0, 0, 5, 0);
                _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h0, 0, 7);
                Pocket_AddItem(&h0, 0);
                break;
            }
            break;
        }
        switch (msgIndex) {
        case 1:
            h4 = 0x1374;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h4, 0, 5, 0);
            h5 = 0x1374;
            Pocket_AddItem(&h5, 0);
            msg = 4;
            Talk_CheckAndSetPlayerFlag(0x1b, 1);
            break;
        case 0xb:
            _ZN12Unk_020d771015setPocketFilterEjjj(this, SpNpcTortimerFishingTourney_IsFish, 0xd, 1);
            _ZN12Unk_020d771012openSubSceneEi(this, 0);
            setScript(0);
            break;
        }
        if (msg != 0xff) {
            m2 = msg;
            unk_3c->setNextMessage(&m2, s);
        }
    }
}

void SpNpcTortimerFishingTourneyTalk::onChoice() {
    u8 b1;
    u8 b2;
    u16 h;
    s32 t = getChoiceList()->getResult();
    u8 msg;
    u8 *s;
    s = (u8 *)"sp_npc_turtle1";
    msg = 0xff;
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
                if (getRecordHolder() == 0) {
                    msg = 9;
                } else if (getRecordHolder() > 0) {
                    msg = 0xa;
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

BOOL SpNpcTortimerFishingTourney::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimerFishingTourney::vfunc_4c(s32 v) {
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


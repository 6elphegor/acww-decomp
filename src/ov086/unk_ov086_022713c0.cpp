// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"

#pragma opt_loop_invariants off

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
class SpNpcTortimerCountdown;
class SpNpcTortimerCountdownTalk;
struct TalkStartMsg;

struct Unk_ov086_Vec {
    s32 x, y, z;
};

struct ChoiceList {
    s32 getResult();
};

extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
void _ZN17PlayerSpNpcRecord15setFestivalGiftEv(void *p);
s32 Pocket_FindEmpty();
s32 Pocket_FindItem(u16 *p);
void Pocket_AddItem(u16 *p, s32 v);
void Pocket_RemoveItem(s32 v);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 Random_GlobalBelow(u32 n);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
void TalkRequest_SetTargetDone(void *p);
void NookShop_PickFlowerBag(u16 *p);
void Clock_GetDateTime(void *p);
void *TownSessionState_Get();
BOOL TownSessionState_TestFlag(void *p, s32 v);
void TownSessionState_SetFlag(void *p, s32 v);
void ContestRecord_JudgeGardens(void *p);
void _ZN13ContestRecord7setKindEj(void *p, s32 v);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void ContestRecord_BeginFestival(void *p, s32 v);
u32 Event_GetDaysSinceStart(s32 v);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, s32 a, s32 b);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
extern u16 data_020c6cc8;
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u8 gContestRecord[];
extern u8 gSaveData[];
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

class SpNpcTortimerCountdownTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerCountdownTalk();
    virtual ~SpNpcTortimerCountdownTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcTortimerCountdown *owner);

    SpNpcTortimerCountdown *ownerNpc;
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

class SpNpcTortimerCountdown : public SpNpcActor {
public:
    SpNpcTortimerCountdown() {}
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
    s32 unk_654;
    SpNpcTortimerCountdownTalk talk;
};

struct Unk_ov086_02271940_Ent {
    BOOL (SpNpcTortimerCountdown::*enter)();
    BOOL (SpNpcTortimerCountdown::*exit)();
};

struct Unk_ov086_022714e4_Ent {
    const char *a;
    s32 b;
};

struct MsgString33 {
    u32 unk_00[0xd];
    MsgString33();
    ~MsgString33();
};

extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
void String_Load(void *o, u8 *c, s32 a);
void MailText_SetSlot(void *p, void *o);
void Letter_ComposeFromMail(void *obj, u8 *c, void *str, void *d44, void *d40, void *x);
u32 Item_MakePaper(u32 a, u32 b);
void *_ZN10PlayerData10getCatalogEv(void *p);
void Catalog_AddItem(void *p, u16 *q, s32 a);
void Clock_GetDate(void *p);
s32 Clock_GetTimeOfDay();
void *Inventory_GetEmptyLetter();
s32 Inventory_FindEmptyLetter();
extern u32 data_ov086_02271c20;
extern u32 data_ov086_02271c24;
extern const Unk_ov086_022714e4_Ent sSpNpcTortimerCountdownFortuneLines[4];
extern Unk_ov086_02271940_Ent sSpNpcTortimerCountdownActTable[3];
}

extern "C" char sSpNpcTortimerCountdownFortuneStrKey[];
extern "C" char sSpNpcTortimerCountdownFortuneStr2Key[];
struct Unk_ov086_SceneEntry {
    SpNpcTortimerCountdown *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcTortimerCountdown *SpNpcTortimerCountdown_Create();
extern "C" u32 data_ov086_02271c24 = 0x1d;
extern "C" u32 data_ov086_02271c20 = 0xe;
extern "C" char sSpNpcTortimerCountdownFortuneStrKey[] = "st_fortune";
extern "C" const Unk_ov086_022714e4_Ent sSpNpcTortimerCountdownFortuneLines[4] = {
    {sSpNpcTortimerCountdownFortuneStrKey, 0}, {sSpNpcTortimerCountdownFortuneStr2Key, 1}, {sSpNpcTortimerCountdownFortuneStr2Key, 2}, {sSpNpcTortimerCountdownFortuneStr2Key, 3},
};
extern "C" void _ZN22SpNpcTortimerCountdown10setupAct00Ev();
extern "C" void _ZN22SpNpcTortimerCountdown9mainAct02Ev();
extern "C" void _ZN22SpNpcTortimerCountdown9mainAct01Ev();
extern "C" void _ZN22SpNpcTortimerCountdown9mainAct00Ev();
extern "C" void _ZN22SpNpcTortimerCountdown10setupAct01Ev();
extern "C" void *data_ov086_02271c38[2] = {(void *)_ZN22SpNpcTortimerCountdown9mainAct01Ev, 0};
extern "C" void *data_ov086_02271c48[2] = {(void *)_ZN22SpNpcTortimerCountdown10setupAct01Ev, 0};
extern "C" void *data_ov086_02271c30[2] = {(void *)_ZN22SpNpcTortimerCountdown9mainAct02Ev, 0};
extern "C" void *data_ov086_02271c28[2] = {(void *)_ZN22SpNpcTortimerCountdown10setupAct00Ev, 0};
extern "C" void *data_ov086_02271c40[2] = {(void *)_ZN22SpNpcTortimerCountdown9mainAct00Ev, 0};
typedef BOOL (SpNpcTortimerCountdown::*Unk_ov086_Fn)();
Unk_ov086_02271940_Ent sSpNpcTortimerCountdownActTable[3] = {
    {*(Unk_ov086_Fn *)data_ov086_02271c28, *(Unk_ov086_Fn *)data_ov086_02271c40},
    {*(Unk_ov086_Fn *)data_ov086_02271c48, *(Unk_ov086_Fn *)data_ov086_02271c38},
    {NULL, *(Unk_ov086_Fn *)data_ov086_02271c30},
};
extern "C" char sSpNpcTortimerCountdownFortuneStr2Key[] = "st_fortune2";
extern "C" u8 sSpNpcTortimerCountdownModelPath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" Unk_ov086_SceneEntry sSpNpcTortimerCountdownProfile = {SpNpcTortimerCountdown_Create, 0x5c, 0x63, 2, 0x5000, 0x5000, 0x3e800};
extern "C" u8 sSpNpcTortimerCountdownTexturePath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};

struct Unk_ov086_022716b0_A {
    u8 b0, b1;
    u8 pad[4];
};
struct Unk_ov086_022716b0_B {
    u8 b0, b1, b2, b3;
    u32 w;
};

extern "C" SpNpcTortimerCountdown *SpNpcTortimerCountdown_Create() {
    return new SpNpcTortimerCountdown();
}

BOOL SpNpcTortimerCountdown::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerCountdown::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    return TRUE;
}

u8 *SpNpcTortimerCountdown::getTexturePath() { return sSpNpcTortimerCountdownTexturePath; }

u8 *SpNpcTortimerCountdown::getModelPath() { return sSpNpcTortimerCountdownModelPath; }

BOOL SpNpcTortimerCountdown::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerCountdownActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerCountdownActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimerCountdown::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerCountdownActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerCountdownActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimerCountdown::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerCountdown::mainAct00() { return TRUE; }

BOOL SpNpcTortimerCountdown::setupAct01() {
    void *p = talk.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerCountdown::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerCountdown::mainAct02() { return TRUE; }

SpNpcTortimerCountdownTalk::SpNpcTortimerCountdownTalk() {}

SpNpcTortimerCountdownTalk::~SpNpcTortimerCountdownTalk() {}

void SpNpcTortimerCountdownTalk::attachOwner(SpNpcTortimerCountdown *owner) {
    vfunc_08();
    ownerNpc = owner;
    massageChairSlot = -1;
}

void SpNpcTortimerCountdownTalk::start(TalkStartMsg *out) {
    u16 h;
    Unk_ov086_022716b0_A a;
    Unk_ov086_022716b0_B t;
    BOOL f;
    _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    out->msgKey = "sp_npc_turtle6";
    if (massageChairSlot == -1) {
        h = 0x37e0;
        massageChairSlot = Pocket_FindItem(&h);
        if (massageChairSlot >= 0) {
            out->msgKey = "sp_npc_turtle";
            out->msgIndex = 0;
            return;
        }
    }
    Clock_GetDate(&a);
    *(u32 *)&t = 0;
    t.w = 0;
    Clock_GetDateTime(&t);
    f = FALSE;
    if (a.b1 == 0xc) {
        if (Clock_GetTimeOfDay() == 0) {
            out->msgIndex = Random_GlobalBelow(3);
        } else if (Clock_GetTimeOfDay() == 1) {
            out->msgIndex = Random_GlobalBelow(3);
            if (out->msgIndex != 0) {
                out->msgIndex += 2;
            }
        } else if (t.b2 < 0x17) {
            out->msgIndex = Random_GlobalBelow(3);
            if (out->msgIndex != 0) {
                out->msgIndex += 4;
            }
        } else if (t.b2 == 0x17 && t.b1 < 0x1e) {
            out->msgIndex = Random_GlobalBelow(3);
            if (out->msgIndex != 0) {
                out->msgIndex += 6;
            }
        } else if (t.b2 == 0x17 && t.b1 < 0x37) {
            out->msgIndex = Random_GlobalBelow(3) + 9;
        } else if (t.b2 == 0x17 && t.b1 < 0x3b) {
            out->msgIndex = Random_GlobalBelow(2) + 0xc;
            f = TRUE;
        } else {
            out->msgIndex = Random_GlobalBelow(2) + 0xe;
            f = TRUE;
        }
    } else if (t.b2 < 6) {
        out->msgIndex = Random_GlobalBelow(3) + 0x10;
        f = TRUE;
    } else if (TownSessionState_TestFlag(TownSessionState_Get(), 4) != 0) {
        out->msgIndex = Random_GlobalBelow(3) + 0x16;
        f = TRUE;
    } else {
        out->msgIndex = 0x13;
        f = TRUE;
    }
    if (!f) {
        if (Pocket_FindEmpty() != -1) {
            if (Random_GlobalBelow(2) == 0) {
                out->msgIndex = Random_GlobalBelow(3) + 0x19;
            }
        }
    }
}

void SpNpcTortimerCountdownTalk::onMessageEnd() {
    struct {
        u8 bb[6];
        u16 h1, h2, h3, h4, h5, h6;
    } l;
    const Unk_ov086_022714e4_Ent *e;
    u8 *s6 = (u8 *)"sp_npc_turtle6";
    u8 msg = 0xff;
    void *p;
    void *g;
    u32 v, base;
    s32 i;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            l.h1 = 0x1559;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &l.h1, 0, 5, 0);
            l.h2 = 0x1559;
            Pocket_AddItem(&l.h2, 0);
            l.bb[1] = 4;
            unk_3c->setNextMessage(&l.bb[1], (u8 *)"sp_npc_turtle");
        }
    } else {
        s32 r = Inventory_FindEmptyLetter();
        switch (msgIndex) {
        case 0x13:
            msg = 0x14;
            if (r != -1) {
                p = Inventory_GetEmptyLetter();
                if (p != NULL) {
                    g = PlayerData_GetCurrent();
                    l.bb[0] = 2;
                    MsgString33 obj;
                    v = Random_GlobalBelow(4);
                    i = 0;
                    base = v << 2;
                    do {
                        l.bb[0] = v;
                        e = &sSpNpcTortimerCountdownFortuneLines[i];
                        String_Load(&obj, &l.bb[0], (s32)sSpNpcTortimerCountdownFortuneLines[i].a);
                        MailText_SetSlot((void *)e->b, &obj);
                        v = base + Random_GlobalBelow(4);
                        v = v + (i << 4);
                        i++;
                    } while (i < 4);
                    l.bb[0] = 0;
                    Letter_ComposeFromMail(p, &l.bb[0], (u8 *)"ev_fortune", &data_ov086_02271c20, &data_ov086_02271c24, _ZN10PlayerData11getPlayerIdEv(g));
                    if (g != NULL) {
                        l.h3 = Item_MakePaper(0x1d, 4);
                        Catalog_AddItem(_ZN10PlayerData10getCatalogEv(g), &l.h3, 0);
                    }
                    TownSessionState_SetFlag(TownSessionState_Get(), 4);
                    l.h4 = 0x1565;
                    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &l.h4, 0, 5, 0);
                    msg = 0x15;
                }
            }
            break;
        case 0x19:
        case 0x1a:
        case 0x1b:
            l.h5 = 0x137d;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &l.h5, 0, 5, 0);
            l.h6 = 0x137d;
            Pocket_AddItem(&l.h6, 0);
            msg = 0x1c + Random_GlobalBelow(3);
            break;
        }
        if (msg != 0xff) {
            l.bb[4] = msg;
            unk_3c->setNextMessage(&l.bb[4], s6);
        }
    }
}

void SpNpcTortimerCountdownTalk::onChoice() {
    u8 b;
    u16 h;
    u8 *s;
    s32 t = getChoiceList()->getResult();
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
            b = msg;
            unk_3c->setNextMessage(&b, s);
        }
    }
}

BOOL SpNpcTortimerCountdown::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimerCountdown::vfunc_4c(s32 v) {
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


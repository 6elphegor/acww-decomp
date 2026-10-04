// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "game/Unk_ov083_Vec.h"
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
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"


struct Unk_0201bc1c;
class SpNpcTortimerFlowerFest;
class SpNpcTortimerFlowerFestTalk;




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




class Unk_020d7710 : public ActorTalkRequest {
public:
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onTaskDone(u32 id);
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

struct Unk_ov083_02271bbc_Fill {
    u16 a;
    u8 b;
    u8 c;
    u32 d;
};

class SpNpcTortimerFlowerFestTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerFlowerFestTalk();
    virtual ~SpNpcTortimerFlowerFestTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcTortimerFlowerFest *owner);

    SpNpcTortimerFlowerFest *ownerNpc;
    s32 massageChairSlot;
    u16 giftItem;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(CollisionState, 0x30);



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

class SpNpcTortimerFlowerFest : public SpNpcActor {
public:
    SpNpcTortimerFlowerFest() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 v, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    s32 tickTimer(s32 *p);
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    s32 act;
    SpNpcTortimerFlowerFestTalk talk;
    u8 festDay;
};

struct Unk_ov083_02271858_Ent {
    BOOL (SpNpcTortimerFlowerFest::*enter)();
    BOOL (SpNpcTortimerFlowerFest::*exit)();
};

extern "C" {
extern Unk_ov083_02271858_Ent sSpNpcTortimerFlowerFestActTable[3];
}

Unk_ov083_02271858_Ent sSpNpcTortimerFlowerFestActTable[3] = {
    {&SpNpcTortimerFlowerFest::setupAct00, &SpNpcTortimerFlowerFest::mainAct00},
    {&SpNpcTortimerFlowerFest::setupAct01, &SpNpcTortimerFlowerFest::mainAct01},
    {NULL, &SpNpcTortimerFlowerFest::mainAct02},
};

extern "C" u8 sSpNpcTortimerFlowerFestTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" u8 sSpNpcTortimerFlowerFestModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

struct Unk_ov083_SceneEntry {
    SpNpcTortimerFlowerFest *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcTortimerFlowerFest *SpNpcTortimerFlowerFest_Create();
extern "C" Unk_ov083_SceneEntry sSpNpcTortimerFlowerFestProfile = {SpNpcTortimerFlowerFest_Create, 0x59, 0x60, 2, 0x5000, 0x5000, 0x3e800};


extern "C" SpNpcTortimerFlowerFest *SpNpcTortimerFlowerFest_Create() {
    return new SpNpcTortimerFlowerFest();
}

BOOL SpNpcTortimerFlowerFest::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerFlowerFest::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    festDay = Event_GetDaysSinceStart(0xe);
    ContestRecord_BeginFestival(gContestRecord, 0);
    return TRUE;
}

u8 *SpNpcTortimerFlowerFest::getTexturePath() { return sSpNpcTortimerFlowerFestTexturePath; }

u8 *SpNpcTortimerFlowerFest::getModelPath() { return sSpNpcTortimerFlowerFestModelPath; }

BOOL SpNpcTortimerFlowerFest::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerFlowerFestActTable[act].exit != NULL) {
        result = (this->*sSpNpcTortimerFlowerFestActTable[act].exit)();
    }
    return result;
}

void SpNpcTortimerFlowerFest::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerFlowerFestActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerFlowerFestActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcTortimerFlowerFest::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerFlowerFest::mainAct00() {
    if (tickTimer(&unk_654)) {
        return TRUE;
    }
    unk_654 = 0x258;
    u8 *const g = gContestRecord;
    ContestRecord_JudgeGardens(g);
    _ZN13ContestRecord7setKindEj(g, 3);
    _ZN8SaveData7setFlagEj(gSaveData, 0xf);
    return TRUE;
}

s32 SpNpcTortimerFlowerFest::tickTimer(s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL SpNpcTortimerFlowerFest::setupAct01() {
    void *p = talk.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerFlowerFest::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerFlowerFest::mainAct02() { return TRUE; }

SpNpcTortimerFlowerFestTalk::SpNpcTortimerFlowerFestTalk() : giftItem(0xfff1) {}

SpNpcTortimerFlowerFestTalk::~SpNpcTortimerFlowerFestTalk() {}

void SpNpcTortimerFlowerFestTalk::attachOwner(SpNpcTortimerFlowerFest *owner) {
    vfunc_08();
    ownerNpc = owner;
    massageChairSlot = -1;
}

void SpNpcTortimerFlowerFestTalk::start(TalkStartMsg *out) {
    u16 h;
    u32 w[2];
    _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    out->msgKey = "sp_npc_turtle3";
    if (massageChairSlot == -1) {
        h = 0x37e0;
        massageChairSlot = Pocket_FindItem(&h);
        if (massageChairSlot >= 0) {
            out->msgKey = "sp_npc_turtle";
            out->msgIndex = 0;
            return;
        }
    }
    w[0] = 0;
    w[1] = 0;
    Clock_GetDateTime(w);
    {
        u32 v = ((u8 *)w)[2];
        if (v < 6 || v >= 0x12) {
            out->msgIndex = 0;
            return;
        }
    }
    if (!TownSessionState_TestFlag(TownSessionState_Get(), 1)) {
        u32 c;
        TownSessionState_SetFlag(TownSessionState_Get(), 1);
        c = *((u8 *)ownerNpc + 0x714);
        if (c == 0) {
            out->msgIndex = 1;
        } else if (c >= 1 && c <= 5) {
            out->msgIndex = 2;
        } else {
            out->msgIndex = 3;
        }
    } else {
        out->msgIndex = 0xa;
    }
}

void SpNpcTortimerFlowerFestTalk::onMessageEnd(u32) {
    u8 b1;
    u8 b2;
    u16 h1, h2, h3;
    u8 *s = (u8 *)"sp_npc_turtle3";
    u8 msg = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            h1 = 0x1559;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h1, 0, 5, 0);
            h2 = 0x1559;
            Pocket_AddItem(&h2, 0);
            b1 = 4;
            unk_3c->setNextMessage(&b1, (void *)"sp_npc_turtle");
        }
    } else {
        if (msgIndex == 5 || msgIndex == 6 || msgIndex == 9) {
            if (!Talk_CheckAndSetPlayerFlag(0x1d, 1)) {
                _ZN17PlayerSpNpcRecord15setFestivalGiftEv(_ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent()));
                if (Pocket_FindEmpty() >= 0) {
                    msg = 7;
                    NookShop_PickFlowerBag(&h3);
                    giftItem = h3;
                }
            }
        }
        if (msgIndex == 7) {
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &giftItem, 0, 5, 0);
            Pocket_AddItem(&giftItem, 0);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &giftItem, 0, 7);
            msg = 8;
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->setNextMessage(&b2, s);
        }
    }
}

void SpNpcTortimerFlowerFestTalk::onChoice(u32) {
    u8 b1;
    u8 b2;
    u16 h;
    s32 t = getChoiceList()->getResult();
    u8 *s = (u8 *)"sp_npc_turtle3";
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
        if (msgIndex == 0xa && t == 0) {
            if (Random_GlobalBelow(3) == 0) {
                msg = 0xc;
            } else {
                msg = Random_GlobalBelow(0xb) + 0x1c;
            }
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->setNextMessage(&b2, s);
        }
    }
}

BOOL SpNpcTortimerFlowerFest::vfunc_48(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimerFlowerFest::vfunc_4c(u32 v, u8) {
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

// ---------------------------------------------------------------------------------------------------------------------

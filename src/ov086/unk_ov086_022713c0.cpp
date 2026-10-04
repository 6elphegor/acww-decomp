// mwcc-flags: -str reuse
#include "types.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "talk/MsgString33.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/SpNpcTalkRequest.h"
#include "actor/ActorProfile.h"

#pragma opt_loop_invariants off


class ActorTalkRequest;
class SpNpcTortimerCountdown;
class SpNpcTortimerCountdownTalk;
struct TalkStartMsg;

struct Unk_ov086_Vec {
    s32 x, y, z;
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
void _ZN16ActorTalkRequest15requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
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
void _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
extern u16 data_020c6cc8;
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u8 gContestRecord[];
extern u8 gSaveData[];
}






class SpNpcTortimerCountdownTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerCountdownTalk();
    virtual ~SpNpcTortimerCountdownTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcTortimerCountdown *owner);

    SpNpcTortimerCountdown *ownerNpc;
    s32 massageChairSlot;
};




struct Unk_020d77a4_Vec3;




class SpNpcTortimerCountdown : public SpNpcActor {
public:
    SpNpcTortimerCountdown() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 v, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

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
extern "C" ActorProfile sSpNpcTortimerCountdownProfile = {(void *(*)())SpNpcTortimerCountdown_Create, 0x5c, 0x63, 2, 0x5000, 0x5000, 0x3e800};
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

BOOL SpNpcTortimerCountdown::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerCountdown::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
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
    void *p = talk.getTalkPlayer();
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
    resetMsg();
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

void SpNpcTortimerCountdownTalk::onMessageEnd(u32) {
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
            _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &l.h1, 0, 5, 0);
            l.h2 = 0x1559;
            Pocket_AddItem(&l.h2, 0);
            l.bb[1] = 4;
            window->setNextMessage(&l.bb[1], (u8 *)"sp_npc_turtle");
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
                    _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &l.h4, 0, 5, 0);
                    msg = 0x15;
                }
            }
            break;
        case 0x19:
        case 0x1a:
        case 0x1b:
            l.h5 = 0x137d;
            _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &l.h5, 0, 5, 0);
            l.h6 = 0x137d;
            Pocket_AddItem(&l.h6, 0);
            msg = 0x1c + Random_GlobalBelow(3);
            break;
        }
        if (msg != 0xff) {
            l.bb[4] = msg;
            window->setNextMessage(&l.bb[4], s6);
        }
    }
}

void SpNpcTortimerCountdownTalk::onChoice(u32) {
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
                _ZN16ActorTalkRequest15requestTakeItemEPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b = msg;
            window->setNextMessage(&b, s);
        }
    }
}

BOOL SpNpcTortimerCountdown::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimerCountdown::onInteractionEvent(u32 v, u8) {
    switch (v) {
    case 0:
        talk.resetMsg();
        talk.setTalkPlayer((u32)getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}


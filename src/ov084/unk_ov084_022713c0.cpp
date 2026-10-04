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
class SpNpcTortimerFireworks;
class SpNpcTortimerFireworksTalk;
struct TalkStartMsg;

struct Unk_ov084_Vec {
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






class SpNpcTortimerFireworksTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerFireworksTalk();
    virtual ~SpNpcTortimerFireworksTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcTortimerFireworks *owner);

    SpNpcTortimerFireworks *ownerNpc;
    s32 massageChairSlot;
    u16 unk_b4;
    u8 pad_b6[2];
};




struct Unk_020d77a4_Vec3;




class SpNpcTortimerFireworks : public SpNpcActor {
public:
    SpNpcTortimerFireworks() {}
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

    u8 pad_652[2];
    s32 unk_654;
    SpNpcTortimerFireworksTalk talk;
    u8 showWeek;
};

struct Unk_ov084_02271a40_Ent {
    BOOL (SpNpcTortimerFireworks::*enter)();
    BOOL (SpNpcTortimerFireworks::*exit)();
};

struct Unk_ov084_02271478_Ent {
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
u32 _ZN17PlayerSpNpcRecord17getFireworksGivenEv(void *p);
void _ZN17PlayerSpNpcRecord17addFireworksGivenEv(void *p);
s32 _ZN8PlayerId9getGenderEv(void *p);
u32 Net_GetJoiningAid();
void PlayerActor_GetSlotHeldItem(u16 *out, u32 v);
s32 Date_GetNthWeekdayDay(u32 a, u32 b, s32 c, s32 d);
BOOL func_0202e3a4(void *p);
BOOL func_0202e514(void *p);
void ContestRecord_BeginContestDay(void *p, s32 a);
void Clock_GetDate(u8 *p);
void *Inventory_GetEmptyLetter();
s32 Inventory_FindEmptyLetter();
void Letter_ComposeFromMail(void *obj, u8 *c, void *str, void *d44, void *d40, void *x);
extern u8 sSpNpcTortimerFireworksModelPath[];
extern u8 sSpNpcTortimerFireworksTexturePath[];
extern u32 data_ov084_02271d40;
extern u32 data_ov084_02271d44;
extern const Unk_ov084_02271478_Ent sSpNpcTortimerFireworksFortuneLines[4];
extern Unk_ov084_02271a40_Ent sSpNpcTortimerFireworksActTable[3];
}

extern "C" SpNpcTortimerFireworks *SpNpcTortimerFireworks_Create();
extern "C" char sSpNpcTortimerFireworksFortuneStrKey[];
extern "C" char sSpNpcTortimerFireworksFortuneStr2Key[];
extern "C" u32 data_ov084_02271d44 = 0xe;
extern "C" u8 sSpNpcTortimerFireworksTexturePath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};
extern "C" ActorProfile sSpNpcTortimerFireworksProfile = {(void *(*)())SpNpcTortimerFireworks_Create, 0x5a, 0x61, 2, 0x5000, 0x5000, 0x3e800};
extern "C" char sSpNpcTortimerFireworksFortuneStrKey[] = "st_fortune";
extern "C" const Unk_ov084_02271478_Ent sSpNpcTortimerFireworksFortuneLines[4] = {
    {sSpNpcTortimerFireworksFortuneStrKey, 0}, {sSpNpcTortimerFireworksFortuneStr2Key, 1}, {sSpNpcTortimerFireworksFortuneStr2Key, 2}, {sSpNpcTortimerFireworksFortuneStr2Key, 3},
};
Unk_ov084_02271a40_Ent sSpNpcTortimerFireworksActTable[3] = {
    {&SpNpcTortimerFireworks::setupAct00, &SpNpcTortimerFireworks::mainAct00},
    {&SpNpcTortimerFireworks::setupAct01, &SpNpcTortimerFireworks::mainAct01},
    {NULL, &SpNpcTortimerFireworks::mainAct02},
};
extern "C" u8 sSpNpcTortimerFireworksModelPath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" char sSpNpcTortimerFireworksFortuneStr2Key[] = "st_fortune2";
extern "C" u32 data_ov084_02271d40 = 0x1d;

static inline BOOL Unk_ov084_022717ac_Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" SpNpcTortimerFireworks *SpNpcTortimerFireworks_Create() {
    return new SpNpcTortimerFireworks();
}

BOOL SpNpcTortimerFireworks::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerFireworks::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    ContestRecord_BeginContestDay(gContestRecord, 0);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    u8 buf[8];
    Clock_GetDate(buf);
    s32 n = buf[0] - 1;
    u8 *q = &showWeek;
    *q = n / 7;
    *q = *q + 1;
    return TRUE;
}

u8 *SpNpcTortimerFireworks::getTexturePath() { return sSpNpcTortimerFireworksTexturePath; }

u8 *SpNpcTortimerFireworks::getModelPath() { return sSpNpcTortimerFireworksModelPath; }

BOOL SpNpcTortimerFireworks::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerFireworksActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerFireworksActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimerFireworks::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerFireworksActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerFireworksActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimerFireworks::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerFireworks::mainAct00() { return TRUE; }

BOOL SpNpcTortimerFireworks::setupAct01() {
    void *p = talk.getTalkPlayer();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerFireworks::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerFireworks::mainAct02() { return TRUE; }

SpNpcTortimerFireworksTalk::SpNpcTortimerFireworksTalk() {
    unk_b4 = 0xfff1;
}

SpNpcTortimerFireworksTalk::~SpNpcTortimerFireworksTalk() {}

void SpNpcTortimerFireworksTalk::attachOwner(SpNpcTortimerFireworks *owner) {
    resetMsg();
    ownerNpc = owner;
    massageChairSlot = -1;
}

void SpNpcTortimerFireworksTalk::start(TalkStartMsg *out) {
    u16 h[4];
    u32 loc[2];
    _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    out->msgKey = "sp_npc_turtle4";
    if (massageChairSlot == -1) {
        h[1] = 0x37e0;
        massageChairSlot = Pocket_FindItem(&h[1]);
        if (massageChairSlot >= 0) {
            out->msgKey = "sp_npc_turtle";
            out->msgIndex = 0;
            return;
        }
    }
    if (Talk_CheckAndSetPlayerFlag(0x1e, 1)) {
        PlayerActor_GetSlotHeldItem(&h[0], Net_GetJoiningAid());
        h[2] = 0x137e;
        s32 t1 = Pocket_FindItem(&h[2]);
        BOOL f1 = FALSE;
        if (t1 == -1) f1 = TRUE;
        if (!f1) {
            h[3] = 0x137f;
            s32 t2 = Pocket_FindItem(&h[3]);
            BOOL f2 = FALSE;
            if (t2 == -1) f2 = TRUE;
            if (!f2) goto skip;
        }
        if (!Unk_ov084_022717ac_Rng(&h[0], 0x137e, 0x137f)) {
            out->msgIndex = 6;
            return;
        }
    skip:
        if (TownSessionState_TestFlag(TownSessionState_Get(), 3) == 0) {
            out->msgIndex = 7;
        } else {
            out->msgIndex = Random_GlobalBelow(4) + 0xd;
        }
    } else {
        if (TownSessionState_TestFlag(TownSessionState_Get(), 2) == 0) {
            TownSessionState_SetFlag(TownSessionState_Get(), 2);
            if (ownerNpc->showWeek == 1) {
                out->msgIndex = 0;
            } else {
                loc[0] = 0;
                loc[1] = 0;
                Clock_GetDateTime(&loc[0]);
                s32 r = Date_GetNthWeekdayDay(((u8 *)loc)[5], ((u8 *)loc)[4], 6, 5);
                if (r == -1) {
                    if (ownerNpc->showWeek <= 3) {
                        out->msgIndex = 1;
                    } else {
                        out->msgIndex = 2;
                    }
                } else {
                    if (ownerNpc->showWeek <= 4) {
                        out->msgIndex = 1;
                    } else {
                        out->msgIndex = 2;
                    }
                }
            }
        }
    }
}

void SpNpcTortimerFireworksTalk::onMessageEnd(u32) {
    u8 b;
    u8 b2;
    u16 h[7];
    u8 *s = (u8 *)"sp_npc_turtle4";
    u8 msg = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            h[1] = 0x1559;
            _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &h[1], 0, 5, 0);
            h[2] = 0x1559;
            Pocket_AddItem(&h[2], 0);
            b = 4;
            window->setNextMessage(&b, (u8 *)"sp_npc_turtle");
        }
    } else {
        switch (msgIndex) {
        case 0:
        case 1:
        case 2:
        case 6: {
            s32 r5 = Pocket_FindEmpty();
            h[0] = 0xfff1;
            h[3] = 0x137e;
            s32 t1 = Pocket_FindItem(&h[3]);
            BOOL f1 = FALSE;
            if (t1 == -1) f1 = TRUE;
            if (f1) {
                h[4] = 0x137f;
                s32 t2 = Pocket_FindItem(&h[4]);
                BOOL f2 = FALSE;
                if (t2 == -1) f2 = TRUE;
                if (f2) {
                    h[0] = 0x137e;
                    if (Random_GlobalBelow(2) == 0) {
                        h[0] = 0x137f;
                    }
                    goto after;
                }
            }
            h[5] = 0x137e;
            {
                s32 t3 = Pocket_FindItem(&h[5]);
                BOOL f3 = FALSE;
                if (t3 == -1) f3 = TRUE;
                if (f3) {
                    h[0] = 0x137e;
                } else {
                    h[0] = 0x137f;
                }
            }
        after:
            if (r5 >= 0) {
                void *g2 = _ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent());
                if (_ZN17PlayerSpNpcRecord17getFireworksGivenEv(g2) < 10) {
                    _ZN17PlayerSpNpcRecord17addFireworksGivenEv(g2);
                    s32 r = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
                    _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &h[0], 0, 5, 0);
                    Pocket_AddItem(&h[0], 0);
                    _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
                    if (r == 0) {
                        msg = 3;
                    } else {
                        msg = 4;
                    }
                } else {
                    msg = 0xb;
                }
            } else {
                _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
                msg = 5;
            }
            break;
        }
        case 9:
            h[6] = 0x1565;
            _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &h[6], 0, 5, 0);
            msg = 0xa;
            break;
        }
        if (msg != 0xff) {
            b2 = msg;
            window->setNextMessage(&b2, s);
        }
    }
}

void SpNpcTortimerFireworksTalk::onChoice(u32) {
    u8 *t4 = (u8 *)"sp_npc_turtle4";
    s32 t = getChoiceList()->getResult();
    u8 buf[6];
    u16 h[2];
    u8 msg = 0xff;
    if (massageChairSlot >= 0) {
        u8 *s = (u8 *)"sp_npc_turtle";
        switch (msgIndex) {
        case 0:
            if (t == 0) {
                if (massageChairSlot >= 0) {
                    Pocket_RemoveItem(massageChairSlot);
                    h[0] = 0x37e0;
                    _ZN16ActorTalkRequest15requestTakeItemEPtjjj(this, &h[0], 0, 5, 0);
                }
                msg = 2;
            }
            break;
        }
        if (msg != 0xff) {
            buf[1] = msg;
            window->setNextMessage(&buf[1], s);
        }
    } else {
        if (msgIndex == 7 && t == 0) {
            msg = 0xc;
            if (Inventory_FindEmptyLetter() != -1) {
                void *obj = Inventory_GetEmptyLetter();
                if (obj != NULL) {
                    msg = 9;
                    void *g = PlayerData_GetCurrent();
                    buf[0] = 2;
                    MsgString33 o;
                    u32 base = Random_GlobalBelow(4) + 8;
                    s32 i = 0;
                    u32 v = base;
                loop0:
                    buf[0] = v;
                    v = (u32)&((Unk_ov084_02271478_Ent *)sSpNpcTortimerFireworksFortuneLines)[i];
                    String_Load(&o, &buf[0], (s32)((Unk_ov084_02271478_Ent *)sSpNpcTortimerFireworksFortuneLines)[i].a);
                    MailText_SetSlot((void *)((Unk_ov084_02271478_Ent *)v)->b, &o);
                    v = (base - 8) * 4;
                    v = v + Random_GlobalBelow(4);
                    v = v + i * 16;
                    i++;
                    if (i < 4) goto loop0;
                    buf[0] = 1;
                    Letter_ComposeFromMail(obj, &buf[0], (u8 *)"ev_fortune", &data_ov084_02271d44, &data_ov084_02271d40,
                                  _ZN10PlayerData11getPlayerIdEv(g));
                    if (g != NULL) {
                        h[1] = Item_MakePaper(0x1d, 4);
                        Catalog_AddItem(_ZN10PlayerData10getCatalogEv(g), &h[1], 0);
                    }
                    TownSessionState_SetFlag(TownSessionState_Get(), 3);
                }
            }
        }
        if (msg != 0xff) {
            buf[4] = msg;
            window->setNextMessage(&buf[4], t4);
        }
    }
}

BOOL SpNpcTortimerFireworks::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcTortimerFireworks::onInteractionEvent(u32 v, u8) {
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


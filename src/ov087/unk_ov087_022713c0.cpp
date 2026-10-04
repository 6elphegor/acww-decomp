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
class SpNpcCornimer;
class SpNpcCornimerTalk;
struct TalkStartMsg;

struct Unk_ov087_Vec {
    s32 x, y, z;
};


extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
void _ZN17PlayerSpNpcRecord15setFestivalGiftEv(void *p);
s32 Pocket_FindEmpty();
s32 Pocket_FindItem(u16 *p);
BOOL Pocket_AddItem(u16 *p, s32 v);
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






class SpNpcCornimerTalk : public SpNpcTalkRequest {
public:
    SpNpcCornimerTalk();
    virtual ~SpNpcCornimerTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcCornimer *owner);

    SpNpcCornimer *ownerNpc;
};




struct Unk_020d77a4_Vec3;




class SpNpcCornimer : public SpNpcActor {
public:
    SpNpcCornimer() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct00();
    BOOL setupAct00();
    BOOL setupAct01();
    BOOL mainAct01();
    BOOL mainAct02();
    void changeAct(s32 state);

    s32 act;
    SpNpcCornimerTalk talk;
};

struct SpNpcCornimerActEntry {
    BOOL (SpNpcCornimer::*enter)();
    BOOL (SpNpcCornimer::*exit)();
};

struct Unk_ov087_02271cc4_Ent {
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
u32 Pocket_GetItem(s32 i);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
BOOL MenuCtrl_BuildPocketMask(u32 cb);
BOOL _ZN12Unk_02097ff48testFlagEj(void *p, u32 n);
void _ZN12Unk_02097ff47setFlagEj(void *p, u32 n);
u32 _ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(void *p);
u32 _ZN17PlayerSpNpcRecord18getAcornsDeliveredEv(void *p);
void _ZN17PlayerSpNpcRecord18addAcornsDeliveredEi(void *p, s32 n);
void _ZN17PlayerSpNpcRecord21advanceAcornPrizeStepEv(void *p);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
BOOL SpNpcCornimer_IsAcorn(u16 *p, u32 m);
s32 Inventory_FindEmptyLetter();
void *Inventory_GetEmptyLetter();
extern const u8 sSpNpcCornimerPrizeTable[];
extern u8 sSpNpcCornimerModelPath[];
extern u8 sSpNpcCornimerTexturePath[];
extern u32 data_ov087_02271d80;
extern u32 data_ov087_02271d84;
extern const Unk_ov087_02271cc4_Ent sSpNpcCornimerFortuneLines[4];
extern SpNpcCornimerActEntry sSpNpcCornimerActTable[3];
}

extern "C" SpNpcCornimer *SpNpcCornimer_Create();
extern "C" char sSpNpcCornimerFortuneStrKey[];
extern "C" char sSpNpcCornimerFortuneStr2Key[];
extern "C" u32 data_ov087_02271d84 = 0xe;
extern "C" u8 sSpNpcCornimerTexturePath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','d','n','k','_','t','e','x','.','n','s','b','t','x',0};
extern "C" ActorProfile sSpNpcCornimerProfile = {(void *(*)())SpNpcCornimer_Create, 0x5f, 0x66, 2, 0x5000, 0x5000, 0x3e800};
extern "C" char sSpNpcCornimerFortuneStrKey[] = "st_fortune";
extern "C" const Unk_ov087_02271cc4_Ent sSpNpcCornimerFortuneLines[4] = {
    {sSpNpcCornimerFortuneStrKey, 0}, {sSpNpcCornimerFortuneStr2Key, 1}, {sSpNpcCornimerFortuneStr2Key, 2}, {sSpNpcCornimerFortuneStr2Key, 3},
};
extern "C" const u8 sSpNpcCornimerPrizeTable[0x30] = {24,50,5,0,32,50,10,0,36,50,25,0,20,50,40,0,12,50,60,0,16,50,80,0,40,50,100,0,28,50,120,0,44,50,140,0,8,50,170,0,13,17,200,0,81,17,230,0};
extern "C" void _ZN13SpNpcCornimer10setupAct00Ev();
extern "C" void _ZN13SpNpcCornimer9mainAct00Ev();
extern "C" void _ZN13SpNpcCornimer10setupAct01Ev();
extern "C" void _ZN13SpNpcCornimer9mainAct01Ev();
extern "C" void _ZN13SpNpcCornimer9mainAct02Ev();
extern "C" void *data_ov087_02271da8[2] = {(void *)_ZN13SpNpcCornimer10setupAct01Ev, 0};
extern "C" void *data_ov087_02271d90[2] = {(void *)_ZN13SpNpcCornimer9mainAct02Ev, 0};
extern "C" void *data_ov087_02271d88[2] = {(void *)_ZN13SpNpcCornimer10setupAct00Ev, 0};
extern "C" void *data_ov087_02271da0[2] = {(void *)_ZN13SpNpcCornimer9mainAct00Ev, 0};
extern "C" void *data_ov087_02271d98[2] = {(void *)_ZN13SpNpcCornimer9mainAct01Ev, 0};
typedef BOOL (SpNpcCornimer::*Unk_ov087_Fn)();
SpNpcCornimerActEntry sSpNpcCornimerActTable[3] = {
    {*(Unk_ov087_Fn *)data_ov087_02271d88, *(Unk_ov087_Fn *)data_ov087_02271da0},
    {*(Unk_ov087_Fn *)data_ov087_02271da8, *(Unk_ov087_Fn *)data_ov087_02271d98},
    {NULL, *(Unk_ov087_Fn *)data_ov087_02271d90},
};
extern "C" u8 sSpNpcCornimerModelPath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','d','n','k','.','n','s','b','m','d',0};
extern "C" char sSpNpcCornimerFortuneStr2Key[] = "st_fortune2";
extern "C" u32 data_ov087_02271d80 = 0x1d;

static inline BOOL Unk_ov087_02271478_Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov087_02271478_Chk(u16 *c, u16 *slot, u16 val) {
    BOOL r;
    if (Item_IsFurniture(c)) {
        *slot = val;
        r = (Item_GetFurnitureIndex(c) == Item_GetFurnitureIndex(slot)) ? TRUE : FALSE;
    } else {
        if (*c == val) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

struct CornimerChoiceLocals {
    u8 a;
    u8 pad_01[2];
    u8 v;
    u16 s[4];
};

// 001
#pragma opt_loop_invariants off

static inline BOOL Unk_ov087_02271670_Z(BOOL x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

struct CornimerMsgEndLocals {
    u8 t;
    u8 pad_01;
    u16 v[6];
};

extern "C" SpNpcCornimer *SpNpcCornimer_Create() {
    return new SpNpcCornimer();
}

BOOL SpNpcCornimer::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcCornimer::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    ContestRecord_BeginFestival(gContestRecord, 2);
    return TRUE;
}

u8 *SpNpcCornimer::getTexturePath() { return sSpNpcCornimerTexturePath; }

u8 *SpNpcCornimer::getModelPath() { return sSpNpcCornimerModelPath; }

BOOL SpNpcCornimer::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcCornimerActTable[act].exit != NULL) {
        result = (this->*sSpNpcCornimerActTable[act].exit)();
    }
    return result;
}

void SpNpcCornimer::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcCornimerActTable[state].enter != NULL) {
        ok = (this->*sSpNpcCornimerActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcCornimer::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcCornimer::mainAct00() { return TRUE; }

BOOL SpNpcCornimer::setupAct01() {
    void *p = talk.getTalkPlayer();
    u32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcCornimer::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcCornimer::mainAct02() { return TRUE; }

SpNpcCornimerTalk::SpNpcCornimerTalk() {}

SpNpcCornimerTalk::~SpNpcCornimerTalk() {}

void SpNpcCornimerTalk::attachOwner(SpNpcCornimer *owner) {
    resetMsg();
    ownerNpc = owner;
}

void SpNpcCornimerTalk::start(TalkStartMsg *out) {
    void *g = PlayerData_GetCurrent();
    _ZN10PlayerData10getErrandsEv(g);
    out->msgKey = "sp_npc_acorn";
    if (_ZN12Unk_02097ff48testFlagEj(g, 0xf) == 0) {
        out->msgIndex = 0;
        _ZN12Unk_02097ff47setFlagEj(g, 0xf);
        Talk_CheckAndSetPlayerFlag(0x19, 1);
    } else if (Talk_CheckAndSetPlayerFlag(0x19, 1) == 0) {
        out->msgIndex = 2;
    } else if (Random_GlobalBelow(2) == 0 || Talk_CheckAndSetPlayerFlag(0x1a, 0) != 0) {
        out->msgIndex = 3;
    } else {
        out->msgIndex = 0x10;
    }
}

extern "C" BOOL SpNpcCornimer_IsAcorn(u16 *p, u32 m) {
    BOOL r;
    if (m == 0) {
        r = FALSE;
        if (*p >= 0x1542 && *p <= 0x1546) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcCornimerTalk::onMessageEnd(u32) {
    CornimerMsgEndLocals buf;
    void *g = _ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent());
    u32 k;
    buf.v[0] = 0xfff1;
    k = 0xff;
    switch (msgIndex) {
    case 2:
    case 3:
        if (MenuCtrl_BuildPocketMask((u32)SpNpcCornimer_IsAcorn)) {
            s32 i = 0;
            u32 cnt = 0;
            while (i < 15) {
                buf.v[0] = Pocket_GetItem(i);
                if (Unk_ov087_02271478_Rng(&buf.v[0], 0x1542, 0x1546)) {
                    cnt++;
                }
                i++;
            }
            _ZN16ActorTalkRequest13setNumberSlotEijiii(this, cnt, 2, 3, 0, 0);
            k = 5;
        } else if (_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) >= 12) {
            k = 0x17;
        } else {
            u32 a = _ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g);
            u32 b = _ZN17PlayerSpNpcRecord18getAcornsDeliveredEv(g);
            s32 d = (sSpNpcCornimerPrizeTable + 2)[a * 4] - b;
            if (d > 0) {
                _ZN16ActorTalkRequest13setNumberSlotEijiii(this, d, 1, 3, 0, 0);
                k = 4;
            } else {
                k = 0x16;
            }
        }
        break;
    case 7:
    case 8:
    case 9:
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, _ZN17PlayerSpNpcRecord18getAcornsDeliveredEv(g), 0, 3, 0, 0);
        if (_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) >= 12) {
            k = 0x16;
        } else {
            k = 0xa;
        }
        break;
    case 10: {
        u32 t = _ZN17PlayerSpNpcRecord18getAcornsDeliveredEv(g);
        if (t >= (sSpNpcCornimerPrizeTable + 2)[_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) * 4]) {
            buf.v[1] = *(u16 *)&sSpNpcCornimerPrizeTable[_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) * 4];
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &buf.v[1], 0, 7);
            k = 0xb;
        } else {
            u32 a = _ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g);
            u32 b = _ZN17PlayerSpNpcRecord18getAcornsDeliveredEv(g);
            s32 d = (sSpNpcCornimerPrizeTable + 2)[a * 4];
            d -= b;
            _ZN16ActorTalkRequest13setNumberSlotEijiii(this, d, 1, 3, 0, 0);
            k = 0xf;
        }
        break;
    }
    case 11:
    case 13:
        buf.v[2] = *(u16 *)&sSpNpcCornimerPrizeTable[_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) * 4];
        if (Unk_ov087_02271670_Z(Pocket_AddItem(&buf.v[2], 0))) {
            k = 0xc;
        } else {
            _ZN17PlayerSpNpcRecord21advanceAcornPrizeStepEv(g);
            buf.v[3] = *(u16 *)&sSpNpcCornimerPrizeTable[_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) * 4];
            _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &buf.v[3], 0, 5, 0);
            if (_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) < 12) {
                u32 b = _ZN17PlayerSpNpcRecord18getAcornsDeliveredEv(g);
                if (b >= (sSpNpcCornimerPrizeTable + 2)[_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) * 4]) {
                    buf.v[4] = *(u16 *)&sSpNpcCornimerPrizeTable[_ZN17PlayerSpNpcRecord17getAcornPrizeStepEv(g) * 4];
                    _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &buf.v[4], 0, 7);
                    k = 0xd;
                    break;
                }
            }
            k = 0xe;
        }
        break;
    case 20:
        buf.v[5] = 0x1565;
        _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &buf.v[5], 0, 5, 0);
        k = 0x15;
        break;
    }
    if (k != 0xff) {
        buf.t = k;
        window->setNextMessage(&buf.t, (u8 *)"sp_npc_acorn");
    }
}

void SpNpcCornimerTalk::onChoice(u32) {
    CornimerChoiceLocals buf;
    u8 *sa = (u8 *)"sp_npc_acorn";
    s32 t5 = getChoiceList()->getResult();
    void *g8 = PlayerData_GetCurrent();
    s32 k = 0xff;
    switch (msgIndex) {
    case 5:
        if (t5 == 0) {
            void *g = _ZN10PlayerData14getSpNpcRecordEv(g8);
            s32 cntB;
            s32 cntA;
            buf.s[0] = 0xfff1;
            k = 0;
            cntB = 0;
            cntA = 0;
            for (; k < 15; k++) {
                buf.s[0] = Pocket_GetItem(k);
                if (Unk_ov087_02271478_Rng(&buf.s[0], 0x1542, 0x1546)) {
                    if (Unk_ov087_02271478_Chk(&buf.s[0], &buf.s[2], 0x1546)) {
                        cntA++;
                    } else {
                        cntB++;
                    }
                    Pocket_RemoveItem(k);
                }
            }
            buf.s[0] = 0x1542;
            if (cntA == 0) {
                k = (u8)(Random_GlobalBelow(3) + 7);
                cntA = 1;
                while (cntB > 0) {
                    _ZN17PlayerSpNpcRecord18addAcornsDeliveredEi(g, cntA);
                    cntB--;
                }
            } else if (cntB != 0) {
                buf.s[0] = 0x1546;
                k = 0x18;
            } else {
                k = 0x19;
            }
            _ZN16ActorTalkRequest15requestTakeItemEPtjjj(this, &buf.s[0], 0, 5, 0);
        }
        break;
    case 16:
        if (t5 == 0) {
            k = 0x12;
            if (Inventory_FindEmptyLetter() != -1) {
                void *obj = Inventory_GetEmptyLetter();
                if (obj != NULL) {
                    k = 0x13;
                    buf.a = 2;
                    MsgString33 o;
                    u32 n = Random_GlobalBelow(4) + 4;
                    s32 i = 0;
                    u32 r6 = n;
                    const Unk_ov087_02271cc4_Ent *ent;
                loop16:
                    buf.a = (u8)r6;
                    ent = &sSpNpcCornimerFortuneLines[i];
                    String_Load(&o, &buf.a, (s32)sSpNpcCornimerFortuneLines[i].a);
                    MailText_SetSlot((void *)ent->b, &o);
                    r6 = (n - 4) * 4;
                    r6 += Random_GlobalBelow(4);
                    r6 += i * 16;
                    i++;
                    if (i < 4) goto loop16;
                    buf.a = 2;
                    Letter_ComposeFromMail(obj, &buf.a, (u8 *)"ev_fortune", &data_ov087_02271d84, &data_ov087_02271d80,
                                  _ZN10PlayerData11getPlayerIdEv(g8));
                    if (g8 != NULL) {
                        buf.s[1] = Item_MakePaper(0x1d, 4);
                        Catalog_AddItem(_ZN10PlayerData10getCatalogEv(g8), &buf.s[1], 0);
                    }
                    Talk_CheckAndSetPlayerFlag(0x1a, 1);
                }
            }
        }
        break;
    }
    if (k != 0xff) {
        buf.v = k;
        window->setNextMessage(&buf.v, sa);
    }
}

BOOL SpNpcCornimer::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcCornimer::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
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



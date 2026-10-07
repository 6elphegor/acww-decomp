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
#include "talk/MsgString9B.h"
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
#include "npc/VillagerId.h"
#include "player/PlayerData.h"
#include "save/ContestRecord.h"
#include "save/SaveData.h"
#include "talk/MsgString.h"

#pragma opt_loop_invariants off


class ActorTalkRequest;
class SpNpcTortimerBrightNights;
class SpNpcTortimerBrightNightsTalk;
struct TalkStartMsg;


extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
void _ZN17PlayerSpNpcRecord15setFestivalGiftEv(void *p);
s32 Pocket_FindEmpty();
s32 Pocket_FindItem(u16 *p);
void Pocket_AddItem(u16 *p, s32 v);
void Pocket_RemoveItem(s32 v);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 Random_GlobalBelow(u32 n);
void TalkRequest_SetTargetDone(void *p);
void NookShop_PickFlowerBag(u16 *p);
void Clock_GetDateTime(void *p);
void *TownSessionState_Get();
BOOL TownSessionState_TestFlag(void *p, s32 v);
void TownSessionState_SetFlag(void *p, s32 v);
void ContestRecord_JudgeGardens(void *p);
void _ZN13ContestRecord7setKindEj(void *p, s32 v);
void ContestRecord_BeginFestival(void *p, s32 v);
u32 Event_GetDaysSinceStart(s32 v);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, s32 a, s32 b);
extern u16 data_020c6cc8;
extern u8 gContestRecord[];
extern u8 gSaveData[];
}







class SpNpcTortimerBrightNightsTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerBrightNightsTalk();
    virtual ~SpNpcTortimerBrightNightsTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void openVillagerPage();

    void attachOwner(SpNpcTortimerBrightNights *owner);

    SpNpcTortimerBrightNights *ownerNpc;
    s32 massageChairSlot;
    u8 villagerPageStart;
    u8 pad_b5[3];
    s32 choiceVillagers[5];
};








class SpNpcTortimerBrightNights : public SpNpcActor {
public:
    SpNpcTortimerBrightNights() {}
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
    s32 act;
    SpNpcTortimerBrightNightsTalk talk;
    u8 festDay;
};

struct SpNpcTortimerBrightNightsActEntry {
    BOOL (SpNpcTortimerBrightNights::*enter)();
    BOOL (SpNpcTortimerBrightNights::*exit)();
};


extern "C" {
void *PlayerData_GetCurrent();
void TalkRequest_SetTargetDone(void *p);
u32 Random_GlobalBelow(u32 n);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 Pocket_FindItem(u16 *p);
void Pocket_AddItem(u16 *p, s32 v);
void Pocket_RemoveItem(s32 v);
void ContestRecord_BeginFestival(void *p, s32 v);
void *SaveVillagers_Get(void *tbl, s32 idx);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
void *Item_GetSaveData();
s32 _ZN10PlayerData11getPlayerIdEv(void *self);
void *SaveVillagers_FindBestFriendOf(void *p, s32 v);
void MailText_SetSlot(s32 a, MsgString9B *o);
void Bbs_PostMsgToday(u32 a, u8 *b);
void SaveVillagers_ClearTalkedToday(void *p);
void *Choice_GetBmgName(s32 v);
s32 SaveVillagers_Count(void *p);
extern u8 gSaveVillagers[];
extern u8 sSpNpcTortimerBrightNightsModelPath[];
extern u8 sSpNpcTortimerBrightNightsTexturePath[];
extern SpNpcTortimerBrightNightsActEntry sSpNpcTortimerBrightNightsActTable[3];
}

extern "C" SpNpcTortimerBrightNights *SpNpcTortimerBrightNights_Create();
SpNpcTortimerBrightNightsActEntry sSpNpcTortimerBrightNightsActTable[3] = {
    {&SpNpcTortimerBrightNights::setupAct00, &SpNpcTortimerBrightNights::mainAct00},
    {&SpNpcTortimerBrightNights::setupAct01, &SpNpcTortimerBrightNights::mainAct01},
    {NULL, &SpNpcTortimerBrightNights::mainAct02},
};
extern "C" u8 sSpNpcTortimerBrightNightsTexturePath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};
extern "C" u8 sSpNpcTortimerBrightNightsModelPath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" ActorProfile sSpNpcTortimerBrightNightsProfile = {(void *(*)())SpNpcTortimerBrightNights_Create, 0x5b, 0x62, 2, 0x5000, 0x5000, 0x3e800};

extern "C" SpNpcTortimerBrightNights *SpNpcTortimerBrightNights_Create() {
    return new SpNpcTortimerBrightNights();
}

BOOL SpNpcTortimerBrightNights::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    ((NpcAnimCtrl *)(&animCtrl))->playAnim((NpcActor *)(this), 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    festDay = Event_GetDaysSinceStart(0x11);
    u8 *const g = gContestRecord;
    ContestRecord_BeginFestival(g, 1);
    if (!Talk_CheckAndSetPlayerFlag(0x1f, 0)) {
        ((ContestRecord *)(g))->clearVotedVillager();
    }
    return TRUE;
}

u8 *SpNpcTortimerBrightNights::getTexturePath() { return sSpNpcTortimerBrightNightsTexturePath; }

u8 *SpNpcTortimerBrightNights::getModelPath() { return sSpNpcTortimerBrightNightsModelPath; }

BOOL SpNpcTortimerBrightNights::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerBrightNightsActTable[act].exit != NULL) {
        result = (this->*sSpNpcTortimerBrightNightsActTable[act].exit)();
    }
    return result;
}

void SpNpcTortimerBrightNights::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerBrightNightsActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerBrightNightsActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcTortimerBrightNights::setupAct00() {
    ((NpcActionCtrl *)(&actionCtrl))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::mainAct00() { return TRUE; }

BOOL SpNpcTortimerBrightNights::setupAct01() {
    void *p = talk.getTalkPlayer();
    s32 x = 0;
    if (p != NULL) {
        x = ((NpcActor *)(this))->getAngleTo((NpcActor *)(p));
    }
    ((NpcTalkCtrl *)(&talkCtrl))->requestTurnAndTalk(0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::mainAct01() {
    if (((NpcTalkCtrl *)(&talkCtrl))->isBusy() == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::mainAct02() { return TRUE; }

void SpNpcTortimerBrightNightsTalk::openVillagerPage() {
    u8 b;
    void *r7 = window->getChoiceList();
    s32 i, n, r6;
    b = 0x3d;
    MsgString9B o;
    ((ChoiceList *)(r7))->clear();
    for (i = 0; i < 5; i++) {
        choiceVillagers[i] = -1;
    }
    if (!((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, villagerPageStart))))->isValid()) {
        villagerPageStart = 0;
    }
    r6 = villagerPageStart;
    n = 0;
    for (; r6 < 8 && n < 4; r6++) {
        void *g = SaveVillagers_Get(gSaveVillagers, r6);
        if (((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(g)))->isValid()) {
            ((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(g)))->getName((u32)(&o));
            ((MsgString *)(((ChoiceEntry *)(((ChoiceList *)(r7))->getEntry(n)))->getText()))->copy((MsgString *)(void *)(&o));
            choiceVillagers[n] = r6;
            n++;
        }
    }
    villagerPageStart = r6;
    if (villagerPageStart >= 8) {
        villagerPageStart = 0;
    }
    if (SaveVillagers_Count(gSaveVillagers) > 4) {
        void *p = ((ChoiceList *)(r7))->getEntry(n);
        ((ChoiceEntry *)(p))->setMsgIndex((const u8 *)(&b));
        ((ChoiceEntry *)(p))->setBmgName((const void *)(Choice_GetBmgName(0)));
        ((ChoiceEntry *)(p))->loadText();
        n++;
    }
    ((ChoiceList *)(r7))->setCount(n);
    if (SaveVillagers_Count(gSaveVillagers) > 4) {
        ((ChoiceList *)(r7))->setCancelToLast();
    }
    window->openChoices(1);
}

SpNpcTortimerBrightNightsTalk::SpNpcTortimerBrightNightsTalk() {}

SpNpcTortimerBrightNightsTalk::~SpNpcTortimerBrightNightsTalk() {}

void SpNpcTortimerBrightNightsTalk::attachOwner(SpNpcTortimerBrightNights *owner) {
    resetMsg();
    ownerNpc = owner;
    massageChairSlot = -1;
}

void SpNpcTortimerBrightNightsTalk::start(TalkStartMsg *out) {
    u16 h;
    ((PlayerData *)(PlayerData_GetCurrent()))->getErrands();
    out->msgKey = "sp_npc_turtle5";
    if (massageChairSlot == -1) {
        h = 0x37e0;
        massageChairSlot = Pocket_FindItem(&h);
        if (massageChairSlot >= 0) {
            out->msgKey = "sp_npc_turtle";
            out->msgIndex = 0;
            return;
        }
    }
    if (ownerNpc->festDay == 6) {
        if (((SaveData *)(gSaveData))->testFlag(0x11)) {
            void *g = ((ContestRecord *)(gContestRecord))->getHolderVillager();
            if (((VillagerId *)(g))->isValid()) {
                MsgString9B o;
                ((VillagerId *)(g))->getName((u32)(&o));
                window->setSlot(1, &o);
            }
            out->msgIndex = Random_GlobalBelow(3) + 0x11;
        } else {
            out->msgIndex = 0xf;
            ((SaveData *)(gSaveData))->setFlag(0x11);
        }
    } else {
        void *g = ((ContestRecord *)(gContestRecord))->getVotedVillager();
        if (((VillagerId *)(g))->isValid()) {
            MsgString9B o;
            ((VillagerId *)(g))->getName((u32)(&o));
            window->setSlot(0, &o);
            out->msgIndex = Random_GlobalBelow(4) + 0xb;
        } else {
            out->msgIndex = 4;
            if (!Talk_CheckAndSetPlayerFlag(0x1f, 1)) {
                switch (ownerNpc->festDay) {
                case 0:
                    out->msgIndex = 0;
                    break;
                case 1:
                case 2:
                    out->msgIndex = 1;
                    break;
                case 3:
                case 4:
                    out->msgIndex = 2;
                    break;
                case 5:
                    out->msgIndex = 3;
                    break;
                }
            }
        }
    }
}

void SpNpcTortimerBrightNightsTalk::onMessageEnd(u32) {
    u8 b0, b1;
    u16 h0, h1;
    u8 *s = (u8 *)"sp_npc_turtle5";
    u32 msg = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        switch (msgIndex) {
        case 2:
            h0 = 0x1559;
            ((ActorTalkRequest *)(this))->requestGiveItem(&h0, 0, 5, 0);
            h1 = 0x1559;
            Pocket_AddItem(&h1, 0);
            b0 = 4;
            window->setNextMessage(&b0, (u8 *)"sp_npc_turtle");
            break;
        }
    } else {
        if (msgIndex == 0xf) {
            void *r = ((ContestRecord *)(gContestRecord))->getHolderVillager();
            MsgString9B o;
            if (((VillagerId *)(r))->isValid() == 0) {
                void *b = Item_GetSaveData();
                void *q = SaveVillagers_FindBestFriendOf((u8 *)b + 0x8a3c, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
                if (((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(q)))->isValid()) {
                    ((ContestRecord *)(gContestRecord))->setHolderVillager((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(q)));
                    r = ((ContestRecord *)(gContestRecord))->getHolderVillager();
                }
            }
            ((VillagerId *)(r))->getName((u32)(&o));
            MailText_SetSlot(0, &o);
            window->setSlot(1, &o);
            Bbs_PostMsgToday(Random_GlobalBelow(2), (u8 *)"bbs_snowfes");
            SaveVillagers_ClearTalkedToday(gSaveVillagers);
            msg = 0x10;
        }
        switch (msgIndex) {
        case 7:
        case 8:
        case 0x14:
        case 0x15:
            openVillagerPage();
            break;
        }
        if (msg != 0xff) {
            b1 = msg;
            window->setNextMessage(&b1, s);
        }
    }
}

void SpNpcTortimerBrightNightsTalk::onChoice(u32) {
    u8 b0, b1;
    u16 h;
    s32 t = getChoiceList()->getResult();
    u8 *s = (u8 *)"sp_npc_turtle5";
    u32 msg = 0xff;
    s32 c = massageChairSlot;
    if (c >= 0) {
        s = (u8 *)"sp_npc_turtle";
        if (msgIndex == 0 && t == 0) {
            if (c >= 0) {
                Pocket_RemoveItem(c);
                h = 0x37e0;
                ((ActorTalkRequest *)(this))->requestTakeItem(&h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b0 = msg;
            window->setNextMessage(&b0, s);
        }
    } else {
        s32 k = msgIndex;
        switch (k) {
        case 4:
            if (t == 0) {
                msg = (u8)(Random_GlobalBelow(2) + 7);
            } else {
                msg = (u8)(Random_GlobalBelow(2) + 5);
            }
            break;
        case 7:
        case 8:
        case 0x14:
        case 0x15: {
            s32 *p = &choiceVillagers[t];
            if (*p >= 0) {
                u8 *g = gContestRecord;
                MsgString9B o;
                void *e = SaveVillagers_Get(gSaveVillagers, *p);
                if (((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(e)))->isValid()) {
                    ((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(e)))->getName((u32)(&o));
                    window->setSlot(0, &o);
                }
                if (Random_GlobalBelow(2) == 0) {
                    ((ContestRecord *)(g))->setHolderVillager((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(e)));
                }
                ((ContestRecord *)(g))->setVotedVillager((VillagerId *)(_ZN12VillagerData13getVillagerIdEv(e)));
                msg = (u8)(Random_GlobalBelow(2) + 9);
            } else if (k != 0x14) {
                msg = 0x14;
            } else {
                msg = 0x15;
            }
            break;
        }
        }
        if (msg != 0xff) {
            b1 = msg;
            window->setNextMessage(&b1, s);
        }
    }
}

BOOL SpNpcTortimerBrightNights::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (((NpcTalkCtrl *)(&talkCtrl))->isBusy() == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcTortimerBrightNights::onInteractionEvent(u32 v, u8) {
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


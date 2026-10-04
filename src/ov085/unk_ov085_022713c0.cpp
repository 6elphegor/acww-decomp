// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
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
#include "npc/Unk_0201a13c.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/SpNpcTalkRequest.h"
#include "actor/Unk_ov004_SceneEntry.h"

#pragma opt_loop_invariants off


struct Unk_0201bc1c;
class SpNpcTortimerBrightNights;
class SpNpcTortimerBrightNightsTalk;
struct TalkStartMsg;

struct Unk_ov085_Vec {
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




struct Unk_020d77a4_Vec3;




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
    s32 unk_654;
    SpNpcTortimerBrightNightsTalk talk;
    u8 festDay;
};

struct Unk_ov085_02271aac_Ent {
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
void _ZN13ContestRecord18clearVotedVillagerEv(void *p);
void *SaveVillagers_Get(void *tbl, s32 idx);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
BOOL _ZN10VillagerId7isValidEv(void *p);
void _ZN10VillagerId7getNameEj(void *p, MsgString9B *o);
void _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(void *a, void *b);
void _ZN13ContestRecord16setVotedVillagerEP16Unk_02085810_Rec(void *a, void *b);
void *_ZN13ContestRecord17getHolderVillagerEv(void *a);
void *_ZN13ContestRecord16getVotedVillagerEv(void *a);
void *Item_GetSaveData();
s32 _ZN10PlayerData11getPlayerIdEv(...);
void *SaveVillagers_FindBestFriendOf(void *p, s32 v);
void MailText_SetSlot(s32 a, MsgString9B *o);
void Bbs_PostMsgToday(u32 a, u8 *b);
void SaveVillagers_ClearTalkedToday(void *p);
BOOL _ZN8SaveData8testFlagEj(void *p, s32 v);
void *_ZN10ChoiceList5clearEv(void *p);
void *_ZN10ChoiceList8getEntryEi(void *p, s32 i);
void *_ZN11ChoiceEntry7getTextEv(void *p);
void _ZN9MsgString4copyEPS_(void *p, MsgString9B *o);
void _ZN11ChoiceEntry11setMsgIndexEPKh(void *p, u8 *b);
void *Choice_GetBmgName(s32 v);
void _ZN11ChoiceEntry10setBmgNameEPKv(void *p, void *q);
void _ZN11ChoiceEntry8loadTextEv(void *p);
void _ZN10ChoiceList8setCountEi(void *p, s32 i);
void _ZN10ChoiceList15setCancelToLastEv(void *p);
s32 SaveVillagers_Count(void *p);
extern u8 gSaveVillagers[];
extern u8 sSpNpcTortimerBrightNightsModelPath[];
extern u8 sSpNpcTortimerBrightNightsTexturePath[];
extern Unk_ov085_02271aac_Ent sSpNpcTortimerBrightNightsActTable[3];
}

extern "C" SpNpcTortimerBrightNights *SpNpcTortimerBrightNights_Create();
Unk_ov085_02271aac_Ent sSpNpcTortimerBrightNightsActTable[3] = {
    {&SpNpcTortimerBrightNights::setupAct00, &SpNpcTortimerBrightNights::mainAct00},
    {&SpNpcTortimerBrightNights::setupAct01, &SpNpcTortimerBrightNights::mainAct01},
    {NULL, &SpNpcTortimerBrightNights::mainAct02},
};
extern "C" u8 sSpNpcTortimerBrightNightsTexturePath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};
extern "C" u8 sSpNpcTortimerBrightNightsModelPath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" Unk_ov004_SceneEntry sSpNpcTortimerBrightNightsProfile = {(void *(*)())SpNpcTortimerBrightNights_Create, 0x5b, 0x62, 2, 0x5000, 0x5000, 0x3e800};

extern "C" SpNpcTortimerBrightNights *SpNpcTortimerBrightNights_Create() {
    return new SpNpcTortimerBrightNights();
}

BOOL SpNpcTortimerBrightNights::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    festDay = Event_GetDaysSinceStart(0x11);
    u8 *const g = gContestRecord;
    ContestRecord_BeginFestival(g, 1);
    if (!Talk_CheckAndSetPlayerFlag(0x1f, 0)) {
        _ZN13ContestRecord18clearVotedVillagerEv(g);
    }
    return TRUE;
}

u8 *SpNpcTortimerBrightNights::getTexturePath() { return sSpNpcTortimerBrightNightsTexturePath; }

u8 *SpNpcTortimerBrightNights::getModelPath() { return sSpNpcTortimerBrightNightsModelPath; }

BOOL SpNpcTortimerBrightNights::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerBrightNightsActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerBrightNightsActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimerBrightNights::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerBrightNightsActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerBrightNightsActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimerBrightNights::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::mainAct00() { return TRUE; }

BOOL SpNpcTortimerBrightNights::setupAct01() {
    void *p = talk.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::mainAct02() { return TRUE; }

void SpNpcTortimerBrightNightsTalk::openVillagerPage() {
    u8 b;
    void *r7 = unk_3c->getChoiceList();
    s32 i, n, r6;
    b = 0x3d;
    MsgString9B o;
    _ZN10ChoiceList5clearEv(r7);
    for (i = 0; i < 5; i++) {
        choiceVillagers[i] = -1;
    }
    if (!_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, villagerPageStart)))) {
        villagerPageStart = 0;
    }
    r6 = villagerPageStart;
    n = 0;
    for (; r6 < 8 && n < 4; r6++) {
        void *g = SaveVillagers_Get(gSaveVillagers, r6);
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(g))) {
            _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(g), &o);
            _ZN9MsgString4copyEPS_(_ZN11ChoiceEntry7getTextEv(_ZN10ChoiceList8getEntryEi(r7, n)), &o);
            choiceVillagers[n] = r6;
            n++;
        }
    }
    villagerPageStart = r6;
    if (villagerPageStart >= 8) {
        villagerPageStart = 0;
    }
    if (SaveVillagers_Count(gSaveVillagers) > 4) {
        void *p = _ZN10ChoiceList8getEntryEi(r7, n);
        _ZN11ChoiceEntry11setMsgIndexEPKh(p, &b);
        _ZN11ChoiceEntry10setBmgNameEPKv(p, Choice_GetBmgName(0));
        _ZN11ChoiceEntry8loadTextEv(p);
        n++;
    }
    _ZN10ChoiceList8setCountEi(r7, n);
    if (SaveVillagers_Count(gSaveVillagers) > 4) {
        _ZN10ChoiceList15setCancelToLastEv(r7);
    }
    unk_3c->openChoices(1);
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
    _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
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
        if (_ZN8SaveData8testFlagEj(gSaveData, 0x11)) {
            void *g = _ZN13ContestRecord17getHolderVillagerEv(gContestRecord);
            if (_ZN10VillagerId7isValidEv(g)) {
                MsgString9B o;
                _ZN10VillagerId7getNameEj(g, &o);
                unk_3c->setSlot(1, &o);
            }
            out->msgIndex = Random_GlobalBelow(3) + 0x11;
        } else {
            out->msgIndex = 0xf;
            _ZN8SaveData7setFlagEj(gSaveData, 0x11);
        }
    } else {
        void *g = _ZN13ContestRecord16getVotedVillagerEv(gContestRecord);
        if (_ZN10VillagerId7isValidEv(g)) {
            MsgString9B o;
            _ZN10VillagerId7getNameEj(g, &o);
            unk_3c->setSlot(0, &o);
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
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h0, 0, 5, 0);
            h1 = 0x1559;
            Pocket_AddItem(&h1, 0);
            b0 = 4;
            unk_3c->setNextMessage(&b0, (u8 *)"sp_npc_turtle");
            break;
        }
    } else {
        if (msgIndex == 0xf) {
            void *r = _ZN13ContestRecord17getHolderVillagerEv(gContestRecord);
            MsgString9B o;
            if (_ZN10VillagerId7isValidEv(r) == 0) {
                void *b = Item_GetSaveData();
                PlayerData_GetCurrent();
                void *q = SaveVillagers_FindBestFriendOf((u8 *)b + 0x8a3c, _ZN10PlayerData11getPlayerIdEv());
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(q))) {
                    _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(gContestRecord, _ZN12VillagerData13getVillagerIdEv(q));
                    r = _ZN13ContestRecord17getHolderVillagerEv(gContestRecord);
                }
            }
            _ZN10VillagerId7getNameEj(r, &o);
            MailText_SetSlot(0, &o);
            unk_3c->setSlot(1, &o);
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
            unk_3c->setNextMessage(&b1, s);
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
                _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b0 = msg;
            unk_3c->setNextMessage(&b0, s);
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
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(e))) {
                    _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(e), &o);
                    unk_3c->setSlot(0, &o);
                }
                if (Random_GlobalBelow(2) == 0) {
                    _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv(e));
                }
                _ZN13ContestRecord16setVotedVillagerEP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv(e));
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
            unk_3c->setNextMessage(&b1, s);
        }
    }
}

BOOL SpNpcTortimerBrightNights::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcTortimerBrightNights::onInteractionEvent(u32 v, u8) {
    switch (v) {
    case 0:
        talk.resetMsg();
        talk.func_02015ab0((u32)getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}


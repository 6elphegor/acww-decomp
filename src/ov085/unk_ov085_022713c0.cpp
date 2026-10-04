// mwcc-flags: -str reuse
#include "types.h"
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
class SpNpcTortimerBrightNights;
class SpNpcTortimerBrightNightsTalk;
struct TalkStartMsg;

struct Unk_ov085_Vec {
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


struct MsgString9B {
    u32 v[7];
    MsgString9B();
    ~MsgString9B();
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

class SpNpcTortimerBrightNightsTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerBrightNightsTalk();
    virtual ~SpNpcTortimerBrightNightsTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void openVillagerPage();

    void attachOwner(SpNpcTortimerBrightNights *owner);

    SpNpcTortimerBrightNights *ownerNpc;
    s32 massageChairSlot;
    u8 villagerPageStart;
    u8 pad_b5[3];
    s32 choiceVillagers[5];
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
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
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

class SpNpcTortimerBrightNights : public SpNpcActor {
public:
    SpNpcTortimerBrightNights() {}
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
    SpNpcTortimerBrightNightsTalk talk;
    u8 festDay;
};

struct Unk_ov085_02271aac_Ent {
    BOOL (SpNpcTortimerBrightNights::*enter)();
    BOOL (SpNpcTortimerBrightNights::*exit)();
};

struct Unk_ov085_SceneEntry {
    SpNpcTortimerBrightNights *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
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
extern "C" Unk_ov085_SceneEntry sSpNpcTortimerBrightNightsProfile = {SpNpcTortimerBrightNights_Create, 0x5b, 0x62, 2, 0x5000, 0x5000, 0x3e800};

extern "C" SpNpcTortimerBrightNights *SpNpcTortimerBrightNights_Create() {
    return new SpNpcTortimerBrightNights();
}

BOOL SpNpcTortimerBrightNights::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerBrightNights::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
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
    vfunc_08();
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

void SpNpcTortimerBrightNightsTalk::onMessageEnd() {
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

void SpNpcTortimerBrightNightsTalk::onChoice() {
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

BOOL SpNpcTortimerBrightNights::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcTortimerBrightNights::vfunc_4c(s32 v) {
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


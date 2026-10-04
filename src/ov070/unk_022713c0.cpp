#include "types.h"
#include "player/PlayerSpNpcRecord.h"
#include "item/PocketMatches.h"
#include "item/ItemId.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "player/PlayerId.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "talk/MsgString25.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "player/PlayerData.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/SpNpcTalkRequest.h"
#include "item/ItemPickSpec.h"
#include "actor/ActorProfile.h"
#include "gfx/DebugColor.h"


class ActorTalkRequest;
class SpNpcGracie;
class SpNpcGracieTalk;


struct SpNpcGracieLetterVars {
    u8 letterLevel;
    u8 msgIndex;
    u16 giftItem;
    u16 paperItem;
};


struct SpNpcGracieOutfitTier {
    u16 items[3];
    u8 wornAsFaceItem[3];
    u8 bonusChance;
    u8 pad_0a[2];
    s32 maxFee;
};







struct Unk_020d77a4_Vec3;




typedef void (SpNpcGracieTalk::*SpNpcGracieTalkResultFn)();

class SpNpcGracieTalk : public SpNpcTalkRequest {
public:
    SpNpcGracieTalk();
    virtual ~SpNpcGracieTalk();
    virtual void resetMsg();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void onScannedTag(u32 a);
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone(u32 id);

    void attachOwner(SpNpcGracie *owner);
    void onFeeEntered();
    void setResultHandler(s32 idx);
    BOOL dressUpPlayer();
    BOOL hasPocketRoomForOutfit();
    void scoreOutfit();

    s32 topic;
    SpNpcGracie *ownerNpc;
    SpNpcGracieTalkResultFn resultHandler;
    s32 fee;
    ItemId wornItems[3];
    u8 pad_c6[2];
    u8 askedQuestions[0x14];
    u8 questionCount;
    u8 pad_dd[3];
};

class SpNpcGracie : public SpNpcActor {
public:
    SpNpcGracie() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 act;
    SpNpcGracieTalk talk;
};

struct SpNpcGracieActEntry {
    BOOL (SpNpcGracie::*enter)();
    BOOL (SpNpcGracie::*exit)();
};

extern "C" {
extern u8 sSpNpcGracieKey[];
extern u8 sSpNpcGracieModelPath[];
extern u8 sSpNpcGracieTexturePath[];
extern const TalkStartMsg sSpNpcGracieTopicMsgs[];
extern const SpNpcGracieOutfitTier sSpNpcGracieOutfitTiers[];
extern u16 data_020c6cc8;

PlayerData *PlayerData_GetCurrent();
void *MI_CpuFill8(void *, s32, u32);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 Inventory_FindEmptyLetter();
void *Inventory_GetEmptyLetter();
void func_020b4154(void *p);
s32 _s32_div_f(s32, s32);
s32 String_FormatNumber(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void MailText_SetSlot(s32 i, void *x);
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, void *f);
u16 Item_MakePaper(u32 a, s32 b);
void Catalog_AddItem(void *a, u16 *p, s32 c);
void _ZN10LetterView10setPresentEtj(void *a, u32 b, s32 c);
s32 ItemList_GetTownClassRank(u16 *p, s32 mode);
u32 Random_GlobalBelow(u32 a);
void Hud_Hide();
void Hud_Show();
void EventWeekSlots_MarkPlayer(u32 id);
void PlayerActor_RequestWearHatAlt(u16 *p);
void PlayerActor_RequestWearFaceItemAlt(u16 *p);
void PlayerActor_RequestWearShirtAlt(u16 *p);
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void Pocket_AddItem(u16 *, s32);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 Item_GetPrice(u16 *);
s32 Pocket_CountMatching(PocketMatches *out, s32 (*fn)(u16 *));
void *TownSessionState_Get();
BOOL TownSessionState_TestFlag(void *p, s32 v);
void TownSessionState_SetFlag(void *p, s32 v);
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetAmount();
BOOL TalkRequest_SetTargetDone(void *p);
void NpcActor_ChargePlayer(void *p, s32 v);
void _ZN16ActorTalkRequest15requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setSubSceneKindEjj(void *self, u32 a, u32 b);
void _ZN16ActorTalkRequest12openSubSceneEi(void *self, s32 a);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" DebugColor data_ov070_022728c8;
extern "C" u8 sSpNpcGracieTexturePath[];
extern "C" ActorProfile sSpNpcGracieProfile;
extern "C" u8 sSpNpcGracieModelPath[];
extern "C" u32 data_ov070_022726e4[1];
extern "C" u32 data_ov070_022726e0[1];
extern "C" DebugColor data_ov070_022728d4;
extern "C" const SpNpcGracieOutfitTier sSpNpcGracieOutfitTiers[7];
extern "C" SpNpcGracieActEntry sSpNpcGracieActTable[3];
extern "C" DebugColor data_ov070_022728c4;
extern "C" DebugColor data_ov070_022728c0;
extern "C" DebugColor data_ov070_022728d8;
extern "C" u8 sSpNpcGracieKey[];
extern "C" const TalkStartMsg sSpNpcGracieTopicMsgs[7];
extern "C" DebugColor data_ov070_022728cc;
extern "C" SpNpcGracie *SpNpcGracie_Create();

static inline BOOL Unk_ov070_IsNone(u16 *p) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 v = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

static inline u32 Unk_ov070_02271bf8_Sh(u32 x) {
    return (x << 25) >> 24;
}

static inline BOOL Unk_ov070_IsNone2(u16 *p) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 v = 0xfff1;
        ok = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) ? TRUE : FALSE;
    } else {
        ok = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return ok;
}

extern "C" s32 SpNpcGracie_CountUnaskedQuestions(void *unused, u8 *p, s32 n);

extern "C" SpNpcGracie *SpNpcGracie_Create() {
    return new SpNpcGracie();
}

BOOL SpNpcGracie::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    MI_CpuFill8(talk.askedQuestions, 0, 0x14);
    return TRUE;
}

BOOL SpNpcGracie::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    collider.groups |= 2;
    talk.questionCount = 0;
    return TRUE;
}

u8 *SpNpcGracie::getTexturePath() { return sSpNpcGracieTexturePath; }

u8 *SpNpcGracie::getModelPath() { return sSpNpcGracieModelPath; }

BOOL SpNpcGracie::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcGracieActTable[act].exit != NULL) {
        result = (this->*sSpNpcGracieActTable[act].exit)();
    }
    return result;
}

void SpNpcGracie::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcGracieActTable[state].enter != NULL) {
        ok = (this->*sSpNpcGracieActTable[state].enter)();
    }
    if (ok == 1) {
        act = state;
    }
}

BOOL SpNpcGracie::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcGracie::mainAct00() { return TRUE; }

BOOL SpNpcGracie::setupAct01() {
    void *p = talk.getTalkPlayer();
    u32 x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcGracie::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcGracie::mainAct02() { return TRUE; }

void SpNpcGracieTalk::resetMsg() {
    ActorTalkRequest::resetMsg();
    resultHandler = NULL;
}

void SpNpcGracieTalk::onTaskDone(u32) {
    if (resultHandler != NULL) {
        (this->*resultHandler)();
        resultHandler = NULL;
    }
}





void SpNpcGracieTalk::setResultHandler(s32 idx) {
    static SpNpcGracieTalkResultFn tbl[1] = {&SpNpcGracieTalk::onFeeEntered};
    resultHandler = tbl[idx];
}

extern "C" DebugColor data_ov070_022728c0 = DebugColor(0x1f, 0x14, 0x14, 0x1f);

extern "C" DebugColor data_ov070_022728c8 = DebugColor(0x14, 0x14, 0x1f, 0x1f);

extern "C" DebugColor data_ov070_022728d8 = DebugColor(0x1f, 0x1f, 0x14, 0x1f);

extern "C" const TalkStartMsg sSpNpcGracieTopicMsgs[7] = {
    {(const char *)sSpNpcGracieKey, 0x00}, {(const char *)sSpNpcGracieKey, 0x09}, {(const char *)sSpNpcGracieKey, 0x4c}, {(const char *)sSpNpcGracieKey, 0x29},
    {(const char *)sSpNpcGracieKey, 0x28}, {(const char *)sSpNpcGracieKey, 0x31}, {(const char *)sSpNpcGracieKey, 0x27},
};

extern "C" u32 data_ov070_022726e4[1] = {0x10};

extern "C" DebugColor data_ov070_022728d4 = DebugColor(0x14, 0x1f, 0x14, 0x1f);

extern "C" const SpNpcGracieOutfitTier sSpNpcGracieOutfitTiers[7] = {
    {{0x144c, 0x13b7, 0x1452}, {1, 0, 1}, 0x05, {0, 0}, 200},
    {{0x1456, 0x13b0, 0x1450}, {1, 0, 1}, 0x0a, {0, 0}, 1000},
    {{0x144e, 0x13b8, 0x13f2}, {1, 0, 0}, 0x23, {0, 0}, 2000},
    {{0x13d2, 0x13d0, 0x143c}, {0, 0, 1}, 0x3c, {0, 0}, 3000},
    {{0x1441, 0x1431, 0x13e0}, {1, 1, 0}, 0x46, {0, 0}, 4000},
    {{0x1440, 0x13b4, 0x13d9}, {1, 0, 0}, 0x4b, {0, 0}, 5000},
    {{0x13fd, 0x13d8, 0x13b7}, {0, 0, 0}, 0x50, {0, 0}, 10000},
};

extern "C" u8 sSpNpcGracieTexturePath[] = "npc_sp/model/grf_tex.nsbtx";

extern "C" u32 data_ov070_022726e0[1] = {5};

extern "C" DebugColor data_ov070_022728cc = DebugColor(0x14, 0x1f, 0x1f, 0x1f);

extern "C" DebugColor data_ov070_022728c4 = DebugColor(0x14, 0x18, 0x18, 0x1f);

extern "C" u8 sSpNpcGracieModelPath[] = "npc_sp/model/grf.nsbmd";

extern "C" ActorProfile sSpNpcGracieProfile = {(void *(*)())SpNpcGracie_Create, 0x6c, 0x72, 2, 0x5000, 0x5000, 0x3e800};

extern "C" SpNpcGracieActEntry sSpNpcGracieActTable[3] = {
    {&SpNpcGracie::setupAct00, &SpNpcGracie::mainAct00},
    {&SpNpcGracie::setupAct01, &SpNpcGracie::mainAct01},
    {NULL, &SpNpcGracie::mainAct02},
};

extern "C" u8 sSpNpcGracieKey[] = "sp_npc_giraffe";



void SpNpcGracieTalk::onFeeEntered() {
    TalkWindowState *m = window;
    u8 v = 0x4b;
    fee = 0;
    if (MenuCtrl_IsResultOk()) {
        fee = MenuCtrl_GetAmount();
        v = 0x2d;
        if (fee > 1000 && fee <= 2000) {
            v = 0x2e;
        } else if (fee > 2000 && fee <= 4000) {
            v = 0x2f;
        } else if (fee > 4000) {
            v = 0x30;
        }
        NpcActor_ChargePlayer(ownerNpc, fee);
    } else {
        Hud_Show();
        TownSessionState_SetFlag(TownSessionState_Get(), 10);
    }
    m->setNextMessage(&v, sSpNpcGracieKey);
}

extern "C" s32 SpNpcGracie_CountUnaskedQuestions(void *unused, u8 *p, s32 n) {
    s32 cnt = 0;
    s32 i = 0;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            cnt++;
        }
    }
    return cnt;
}

extern "C" s32 SpNpcGracie_PickUnaskedQuestion(void *unused, u8 *p, s32 n) {
    s32 z = SpNpcGracie_CountUnaskedQuestions(unused, p, n);
    s32 pos = 0;
    s32 r = Random_GlobalBelow(z);
    s32 i = pos;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            if (r == 0) {
                pos = i;
                break;
            }
            r--;
        }
    }
    return pos;
}

SpNpcGracieTalk::SpNpcGracieTalk() {}

SpNpcGracieTalk::~SpNpcGracieTalk() {}

void SpNpcGracieTalk::attachOwner(SpNpcGracie *owner) {
    resetMsg();
    ownerNpc = owner;
    for (s32 i = 0; i < 3; i++) {
        wornItems[i].id = 0xfff1;
    }
    topic = 0;
}

void SpNpcGracieTalk::start(TalkStartMsg *out) {
    void *g = PlayerData_GetCurrent()->getSpNpcRecord();
    if (!Talk_CheckAndSetPlayerFlag(7, 1)) {
        topic = 0;
    } else if (Talk_CheckAndSetPlayerFlag(8, 0)) {
        if (Talk_CheckAndSetPlayerFlag(9, 0)) {
            topic = 6;
        } else if (ownerNpc->talk.questionCount < 3) {
            topic = 2;
        } else if (((PlayerSpNpcRecord *)g)->getStyleScore() >= 0x3d) {
            topic = 3;
        } else {
            topic = 4;
        }
    } else {
        topic = 1;
    }
    if (TownSessionState_TestFlag(TownSessionState_Get(), 10)) {
        if ((u32)(topic - 2) <= 2) {
            topic = 5;
        }
    }
    if (topic >= 0 && topic < 7) {
        out->msgIndex = (&sSpNpcGracieTopicMsgs[0].msgIndex)[topic * 8];
        if (topic == 2) {
            out->msgIndex = ownerNpc->talk.questionCount + 0x4c;
            ownerNpc->talk.questionCount++;
        }
        out->msgKey = (const char *)*(u32 *)((u8 *)sSpNpcGracieTopicMsgs + topic * 8);
    }
}

void SpNpcGracieTalk::onScannedTag(u32 a) {
    ((PlayerSpNpcRecord *)PlayerData_GetCurrent()->getSpNpcRecord())->addStyleScore(a);
}

// ---- unit 2 ----
extern "C" u8 SpNpcGracie_ScoreByPrice(void *unused, s32 a, s32 kind) {
    u8 r = 0;
    switch (kind) {
    case 0:
        if (a == 0) {
            r = Random_GlobalBelow(3) + 1;
        } else if (a < 200) {
            r = Random_GlobalBelow(3) + 3;
        } else if (a < 1000) {
            r = Random_GlobalBelow(3) + 5;
        } else {
            r = Random_GlobalBelow(4) + 7;
        }
        break;
    case 1:
        if (a == 0) {
            r = Random_GlobalBelow(3) + 1;
        } else if (a < 160) {
            r = Random_GlobalBelow(3) + 3;
        } else if (a < 600) {
            r = Random_GlobalBelow(3) + 5;
        } else {
            r = Random_GlobalBelow(4) + 7;
        }
        break;
    case 2:
        if (a < 350) {
            r = Random_GlobalBelow(3) + 1;
        } else if (a < 400) {
            r = Random_GlobalBelow(3) + 4;
        } else {
            r = Random_GlobalBelow(4) + 7;
        }
        break;
    }
    return r;
}

void SpNpcGracieTalk::scoreOutfit() {
    s32 t;
    PlayerData *r6 = PlayerData_GetCurrent();
    PlayerSpNpcRecord *r4 = (PlayerSpNpcRecord *)r6->getSpNpcRecord();
    wornItems[0].id = *r6->getHat();
    if (!Unk_ov070_IsNone(&wornItems[0].id)) {
        BOOL r = FALSE;
        if (wornItems[0].id >= 0x1429 && wornItems[0].id <= 0x1430) {
            r = TRUE;
        }
        if (!r) {
            r4->addStyleScore(Unk_ov070_02271bf8_Sh(SpNpcGracie_ScoreByPrice(this, Item_GetPrice(&wornItems[0].id), 0)));
        } else {
            t = Random_GlobalBelow(10);
            r4->addStyleScore(Unk_ov070_02271bf8_Sh(t + 1));
        }
    } else {
        t = Random_GlobalBelow(3);
        r4->addStyleScore(Unk_ov070_02271bf8_Sh((u8)(t + 1)));
    }
    wornItems[1].id = *r6->getFaceItem();
    if (!Unk_ov070_IsNone(&wornItems[1].id)) {
        r4->addStyleScore(Unk_ov070_02271bf8_Sh(SpNpcGracie_ScoreByPrice(this, Item_GetPrice(&wornItems[1].id), 1)));
    } else {
        t = Random_GlobalBelow(3);
        r4->addStyleScore(Unk_ov070_02271bf8_Sh((u8)(t + 1)));
    }
    wornItems[2].id = *r6->getShirt();
    if (!Unk_ov070_IsNone(&wornItems[2].id)) {
        BOOL r = FALSE;
        if (wornItems[0].id >= 0x12a8 && wornItems[0].id <= 0x12af) {
            r = TRUE;
        }
        if (!r) {
            r4->addStyleScore(Unk_ov070_02271bf8_Sh(SpNpcGracie_ScoreByPrice(this, Item_GetPrice(&wornItems[2].id), 2)));
        } else {
            t = Random_GlobalBelow(10);
            r4->addStyleScore(Unk_ov070_02271bf8_Sh(t + 1));
        }
    }
}

extern "C" BOOL SpNpcGracie_IsEmptyItem(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcGracieTalk::hasPocketRoomForOutfit() {
    PocketMatches o;
    u8 n;
    Pocket_CountMatching(&o, SpNpcGracie_IsEmptyItem);
    n = 0;
    scoreOutfit();
    if (!Unk_ov070_IsNone(&wornItems[0].id)) {
        BOOL r = FALSE;
        if (wornItems[0].id >= 0x1429 && wornItems[0].id <= 0x1430) {
            r = TRUE;
        }
        if (!r) {
            n++;
        }
    }
    if (!Unk_ov070_IsNone(&wornItems[1].id)) {
        n++;
    }
    if (!Unk_ov070_IsNone(&wornItems[2].id)) {
        BOOL r = FALSE;
        if (wornItems[2].id >= 0x12a8 && wornItems[2].id <= 0x12af) {
            r = TRUE;
        }
        if (!r) {
            n++;
        }
    }
    if (o.count >= n) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcGracieTalk::dressUpPlayer() {
    u8 t4 = Random_GlobalBelow(4);
    u8 idx = 6;
    u16 a = 0xfff1;
    BOOL res;
    scoreOutfit();
    s32 i;
    for (i = 0; i < 7; i++) {
        if (sSpNpcGracieOutfitTiers[i].maxFee >= fee) {
            idx = i;
            break;
        }
    }
    PlayerData *r7 = PlayerData_GetCurrent();
    if (t4 < 3) {
        u16 b = 0xfff1;
        r7->setFaceItem(&b);
        const u8 *p6 = &sSpNpcGracieOutfitTiers[0].wornAsFaceItem[0] + idx * 16;
        if (p6[t4] == 0) {
            u16 val = ((const u16 *)((const u8 *)sSpNpcGracieOutfitTiers + idx * 16))[t4];
            u16 g = val;
            PlayerActor_RequestWearHatAlt(&g);
            u16 h = val;
            r7->setHat(&h);
            u16 ii = 0xfff1;
            PlayerActor_RequestWearFaceItemAlt(&ii);
            u16 j = 0xfff1;
            r7->setFaceItem(&j);
        } else {
            u16 val = ((const u16 *)((const u8 *)sSpNpcGracieOutfitTiers + idx * 16))[t4];
            u16 k = val;
            PlayerActor_RequestWearFaceItemAlt(&k);
            u16 l = val;
            r7->setFaceItem(&l);
            u16 m = 0xfff1;
            PlayerActor_RequestWearHatAlt(&m);
            u16 n = 0xfff1;
            r7->setHat(&n);
        }
    } else {
        u16 c = 0xfff1;
        r7->setFaceItem(&c);
        u16 d = 0xfff1;
        r7->setHat(&d);
        u16 e = 0xfff1;
        PlayerActor_RequestWearFaceItemAlt(&e);
        u16 f = 0xfff1;
        PlayerActor_RequestWearHatAlt(&f);
    }
    u16 o;
    u16 pp;
    if ((&sSpNpcGracieOutfitTiers[0].bonusChance)[idx * 16] >= (u8)Random_GlobalBelow(0x65)) {
        {
            ItemPickSpec o1;
            o1.set(2, 0x22);
            ItemPick_One(&o, &o1, 0, 0, 1, 1, 0);
            a = o;
        }
        res = TRUE;
    } else {
        {
            ItemPickSpec o2;
            o2.set(2, 0);
            ItemPick_One(&pp, &o2, 0, 0, 1, 1, 0);
            a = pp;
        }
        res = FALSE;
    }
    if (!Unk_ov070_IsNone(&a)) {
        u16 q = a;
        PlayerActor_RequestWearShirtAlt(&q);
        r7->setShirt(&a);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &a, 0, 7);
    }
    for (i = 0; i < 3; i++) {
        if (!Unk_ov070_IsNone2(&wornItems[i].id)) {
            BOOL k = FALSE;
            u16 v = wornItems[i].id;
            if (v >= 0x1429 && v <= 0x1430) {
                k = TRUE;
            }
            if (!k) {
                if (v >= 0x12a8 && v <= 0x12af) {
                } else {
                    Pocket_AddItem(&wornItems[i].id, 0);
                }
            }
        }
    }
    return res;
}

void SpNpcGracieTalk::onMessageEnd(u32) {
    SpNpcGracieLetterVars s;
    u8 code = 0xff;
    PlayerData *r7 = PlayerData_GetCurrent();
    s32 c = msgIndex;
    if (c >= 0xf && c <= 0x22) {
        u8 n = ownerNpc->talk.questionCount;
        if (n < 5) {
            code = n + 0x46;
        }
    }
    if (c == 0xe || (c >= 0x47 && c <= 0x4a)) {
        s32 i = SpNpcGracie_PickUnaskedQuestion(ownerNpc, ownerNpc->talk.askedQuestions, 0x14);
        u8 *arr = ownerNpc->talk.askedQuestions;
        if (arr[i] == 0) {
            arr[i] = 1;
        }
        code = i + 0xf;
        ownerNpc->talk.questionCount++;
    }
    if (msgIndex == 0x24) {
        if (Inventory_FindEmptyLetter() != -1) {
            void *obj = Inventory_GetEmptyLetter();
            if (obj != NULL) {
                PlayerSpNpcRecord *p = (PlayerSpNpcRecord *)r7->getSpNpcRecord();
                MsgString25 str;
                u32 lvl = 0;
                s.letterLevel = 0;
                scoreOutfit();
                if (p->getStyleScore() > 0x15) {
                    lvl = (u8)_s32_div_f((u8)(p->getStyleScore() - 0x15), 10);
                }
                if (lvl > 7) {
                    lvl = 7;
                }
                s.letterLevel = lvl;
                s.giftItem = 0x1565;
                _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &s.giftItem, 0, 5, 0);
                String_FormatNumber(&str, p->getStyleScore(), 10, 0, 0, 0);
                MailText_SetSlot(0, &str);
                Letter_ComposeFromMail(obj, &s, sSpNpcGracieKey, data_ov070_022726e0, data_ov070_022726e4, r7->getPlayerId());
                if (r7 != NULL) {
                    s.paperItem = Item_MakePaper(0x10, 4);
                    Catalog_AddItem(r7->getCatalog(), &s.paperItem, 0);
                }
                if (lvl <= 2) {
                    _ZN10LetterView10setPresentEtj(obj, 0x12a7, 1);
                } else if (lvl <= 4) {
                    _ZN10LetterView10setPresentEtj(obj, 0x1248, 1);
                }
            }
        }
    }
    c = msgIndex;
    switch (c) {
    case 0:
        if (ItemList_GetTownClassRank(r7->getShirt(), 0) == 0x22) {
            if (((PlayerId *)r7->getPlayerId())->getGender() == 0) {
                code = Random_GlobalBelow(2) + 1;
            } else {
                code = Random_GlobalBelow(2) + 3;
            }
        } else {
            if (((PlayerId *)r7->getPlayerId())->getGender() == 0) {
                code = Random_GlobalBelow(2) + 5;
            } else {
                code = Random_GlobalBelow(2) + 7;
            }
        }
        break;
    case 0x25:
        code = Random_GlobalBelow(10) + 0x3a;
        ownerNpc->talk.questionCount = 0;
        break;
    case 0x28:
    case 0x2b:
        if (hasPocketRoomForOutfit()) {
            code = 0x2c;
            Hud_Hide();
        } else {
            code = 0x39;
        }
        break;
    case 0x2c:
    case 0x31:
        if (hasPocketRoomForOutfit()) {
            _ZN16ActorTalkRequest15setSubSceneKindEjj(this, 0x39, 0);
            _ZN16ActorTalkRequest12openSubSceneEi(this, 2);
            setResultHandler(0);
        } else {
            code = 0x39;
        }
        break;
    case 0x36:
        Hud_Show();
        if (dressUpPlayer() == 0) {
            code = 0x37;
        } else {
            code = 0x34;
        }
        Talk_CheckAndSetPlayerFlag(9, 1);
        break;
    case 0x38:
        EventWeekSlots_MarkPlayer(0x40);
        break;
    }
    if (code != 0xff) {
        s.msgIndex = code;
        window->setNextMessage(&s.msgIndex, sSpNpcGracieKey);
    }
}

void SpNpcGracieTalk::onChoice(u32) {
    s32 r4 = getChoiceList()->getResult();
    u8 *r6 = sSpNpcGracieKey;
    u8 code = 0xff;
    s32 c = msgIndex;
    if (c >= 0xf && c < 0x23) {
        if (ownerNpc->talk.questionCount < 5) {
            s32 i = SpNpcGracie_PickUnaskedQuestion(ownerNpc, ownerNpc->talk.askedQuestions, 0x14);
            u8 *arr = ownerNpc->talk.askedQuestions;
            if (arr[i] == 0) {
                arr[i] = 1;
            }
            code = i + 0xf;
        } else {
            MI_CpuFill8(ownerNpc->talk.askedQuestions, 0, 0x14);
            Talk_CheckAndSetPlayerFlag(8, 1);
            code = 0x23;
        }
    }
    if (msgIndex == 9 && r4 == 0) {
        if (Inventory_FindEmptyLetter() != -1) {
            code = 0xb;
        } else {
            code = 0xc;
        }
    }
    if (code != 0xff) {
        u8 buf = code;
        window->setNextMessage(&buf, r6);
    }
}

BOOL SpNpcGracie::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcGracie::onInteractionEvent(u32 a, u8) {
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

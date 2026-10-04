#include "types.h"
#include "Unk_020d8c7c.h"
#include "actor/Unk_02088d00.h"
#include "talk/MsgStringBase.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "talk/EncodedString.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/MsgString.h"

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define PlayerData_setFortune _ZN10PlayerData10setFortuneEh
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerId_isValid _ZN10VillagerId7isValidEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define VillagerMemory_addFriendship _ZN14VillagerMemory13addFriendshipEi
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define unk_618_func_02014198 _ZN11NpcTalkCtrl11requestTalkEhh
#define unk_618_func_02014220 _ZN11NpcTalkCtrl6isBusyEv
#define unk_564_func_020196b4 _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_getEmotionId _ZN13NpcActionCtrl12getEmotionIdEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define base_vfunc_38 _ZN16ActorTalkRequest10onEventTagEj

class SpNpcKatrina;
class SpNpcKatrinaTalk;

extern "C" {
void *PlayerData_GetCurrent();
u32 Random_GlobalBelow(u32 n);
void TalkRequest_SetTargetDone(void *p);
void TalkRequest_AddPlayerTalk6(void *p, s32 a);
void *PlayerActor_GetBodyPos(s32);
s32 Clock_GetDateTime(void *);
void FieldPos_ToUnit(s32 *, s32 *, void *);
s32 MenuCtrl_IsResultOk();
s32 MenuCtrl_GetText();
void EncodedString_SetRaw(void *, s32, s32);
s32 ChoiceList_getResult();
s32 NpcActor_CanPlayerPay(void *, s32);
void NpcActor_ChargePlayer(void *, s32);
s32 Talk_CheckAndSetPlayerFlag(...);
void Bgm_RequestSilence(u32, s32, s32);
void Bgm_ReleasePriority(u32);
void *PlayerData_getPlayerId(void *self);
void PlayerData_setFortune(void *self, s32 kind);
void SaveVillagers_ApplyGoodFortune(void *, void *);
void SaveVillagers_ApplyBadFortune(void *);
void *SaveVillagers_FindByName(void *, s32, s32, void *);
void *Villager_FindMemoryIndex(void *, void *);
void *Villager_GetMemory(void *, void *);
void *VillagerData_getVillagerId(void *self);
s32 VillagerId_isValid(void *self);
void *Villager_GetState(void *);
s32 CommManager_isSlotActive(void *self, s32 v);
s32 VillagerState_GetMood(void *);
void VillagerState_AddMoodTimer(void *, s32);
void VillagerState_SetMoodTimer(void *, s32);
void VillagerState_SetMood(void *, s32);
void VillagerMemory_addFriendship(void *self, s32 v);
void *VillagerMemory_getFriendship(void *self);
void VillagerSync_Friendship(void *, void *, void *);
s32 NpcActionCtrl_getEmotionId(void *self);
s32 NpcActionCtrl_getAction(void *self);
BOOL NpcActionCtrl_isActionDone(void *self);
void TarotProps_StartAct01();
void TarotProps_StartAct02();
void TarotProps_StartAct03();
s32 TarotProps_Draw();
void unk_618_func_02014198(void *self, u8 a, u8 b);
BOOL unk_618_func_02014220(void *self);
void unk_564_func_020196b4(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void base_vfunc_38(void *self, u32 a);
void *Scene_GetWarpRequest();
s32 SceneWarp_RequestExit(void *, s32);
s32 Model_GetJointWorldMtx(void *p, void *q, s32 v);
s32 func_020e7518(void *p);
s32 Effect_Create(u32 kind, void *a, s32 b, s32 c);
void Effect_End(s32 id);
void Effect_SetPosition(s32 id, void *pos, s32 a, s32 b);
extern u16 data_020c6cc8;
extern u8 gSaveData[];
extern u8 *gCommManager;
}


// ---------------------------------------------------------------------------------------------------------------------



struct Unk_ov045_022590e4_Msg {
    u32 msgKey;
    u8 msgIndex;
};

// ---------------------------------------------------------------------------------------------------------------------
// Message buffer classes (see src/main/unk_02062fd4.cpp)




// vtable 0x02259dd4, data at +0x12, 0x24 bytes
class KatrinaMsgString17 : public MsgString {
public:
    KatrinaMsgString17();
    virtual ~KatrinaMsgString17();
    virtual u32 capacity();
    virtual u8 *data();

    u8 unk_12[0x24 - 0x12];
};

// vtable 0x02259dec, data at +0xe, 0x24 bytes
class KatrinaEncodedString16 : public EncodedString {
public:
    KatrinaEncodedString16();
    virtual ~KatrinaEncodedString16();
    virtual u32 capacity();
    virtual u8 *data();

    u8 unk_0e[0x24 - 0xe];
};

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

class SpNpcKatrinaTalk : public Unk_020d7710 {
public:
    SpNpcKatrinaTalk();
    virtual ~SpNpcKatrinaTalk();
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void onEventTag(u32 id);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone(u32 id);

    void scriptReadPartnerName();
    void setScript(s32 v);
    void attachOwner(SpNpcKatrina *o);

    s32 script;
    SpNpcKatrina *owner;
};

// ---------------------------------------------------------------------------------------------------------------------
// Owner object



struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;





struct Unk_ov045_02259070_Rec {
    s32 a, b, c;
};

struct Unk_ov045_02258ee4_Ent {
    u8 a;
    s32 b;
};

struct Unk_ov045_02258fd8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class SpNpcKatrina : public SpNpcActor {
public:
    SpNpcKatrina() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    s32 getFortuneKind();
    void drawFortuneCard();
    BOOL isClosingTime();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    s32 act;
    u8 jointMtx[0x30];
    SpNpcKatrinaTalk talk;
    u8 fortuneMsg;
    u8 traitMsg;
    u8 pad_742[2];
    s32 readingMode;
    u8 card;
    u8 pad_749[3];
    s32 inverted;
    s32 partnerName;
    u8 effectTimer;
    u8 pad_755[3];
};

typedef void (SpNpcKatrinaTalk::*Unk_ov045_02259e20_Fn)();

struct Unk_ov045_02259e20_Ent {
    Unk_ov045_02259e20_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov045_02259810_Ent {
    BOOL (SpNpcKatrina::*enter)();
    BOOL (SpNpcKatrina::*exit)();
};

struct Unk_ov045_SceneEntry {
    SpNpcKatrina *(*factory)();
    u16 a;
    u16 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
};

extern "C" {
extern const Unk_ov045_02258ee4_Ent sSpNpcKatrinaGoodFortuneCards[17];
extern const Unk_ov045_02258ee4_Ent sSpNpcKatrinaBadFortuneCards[21];
extern void *sSpNpcKatrinaMsgKey;
extern u8 sSpNpcKatrinaKey[];
extern u8 sSpNpcKatrinaModelPath[];
extern u8 sSpNpcKatrinaTexturePath[];
extern SpNpcKatrina *sSpNpcKatrinaInstance;
extern Unk_ov045_02259e20_Ent sSpNpcKatrinaTalkScripts[2];
extern Unk_ov045_02259810_Ent sSpNpcKatrinaActTable[4];
extern SpNpcKatrina *SpNpcKatrina_Create();
u32 SpNpcKatrina_GetAnimFrame();
u8 *SpNpcKatrina_GetJointMtx();
}







extern "C" SpNpcKatrina *SpNpcKatrina_Create() { return new SpNpcKatrina; }

u8 sSpNpcKatrinaModelPath[23] = "npc_sp/model/bpt.nsbmd";
u8 sSpNpcKatrinaTexturePath[27] = "npc_sp/model/bpt_tex.nsbtx";
// Data order: this unit is placed object by object (see object_order.txt).
const Unk_ov045_02258ee4_Ent sSpNpcKatrinaGoodFortuneCards[17] = {
    {0x00, 0}, {0x01, 0}, {0x02, 0}, {0x03, 0}, {0x04, 0}, {0x05, 0}, {0x06, 0}, {0x07, 0}, {0x08, 0},
    {0x0a, 0}, {0x0b, 0}, {0x0e, 0}, {0x11, 0}, {0x12, 1}, {0x13, 0}, {0x14, 0}, {0x15, 0},
};
void *sSpNpcKatrinaMsgKey = sSpNpcKatrinaKey;
u8 sSpNpcKatrinaKey[15] = "sp_npc_panther";
Unk_ov045_02259e20_Ent sSpNpcKatrinaTalkScripts[2] = {
    {NULL, 0},
    {&SpNpcKatrinaTalk::scriptReadPartnerName, 0},
};
Unk_ov045_02259810_Ent sSpNpcKatrinaActTable[4] = {
    {&SpNpcKatrina::setupAct00, &SpNpcKatrina::mainAct00},
    {&SpNpcKatrina::setupAct01, &SpNpcKatrina::mainAct01},
    {&SpNpcKatrina::setupAct02, &SpNpcKatrina::mainAct02},
    {&SpNpcKatrina::setupAct03, &SpNpcKatrina::mainAct03},
};
const Unk_ov045_02258ee4_Ent sSpNpcKatrinaBadFortuneCards[21] = {
    {0x00, 1}, {0x01, 1}, {0x02, 1}, {0x03, 1}, {0x04, 1}, {0x05, 1}, {0x06, 1}, {0x08, 1}, {0x09, 1}, {0x0a, 1},
    {0x0c, 0}, {0x0c, 1}, {0x0d, 0}, {0x0e, 1}, {0x0f, 0}, {0x10, 0}, {0x10, 1}, {0x12, 0}, {0x13, 1}, {0x14, 1},
    {0x15, 1},
};
SpNpcKatrina *sSpNpcKatrinaInstance;
extern "C" Unk_ov045_SceneEntry sSpNpcKatrinaProfile = {SpNpcKatrina_Create, 0x70, 0x76, 2, 0x5000, 0x5000, 0x3e800};
BOOL SpNpcKatrina::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    setCollisionRadius(0x100);
    setInteractionRange(0x5000);
    unk_654 = -1;
    effectTimer = 0;
    return TRUE;
}

BOOL SpNpcKatrina::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    sSpNpcKatrinaInstance = this;
    changeAct(0);
    collider.groups |= 2;
    fortuneMsg = 0xff;
    traitMsg = 0xff;
    return TRUE;
}

BOOL SpNpcKatrina::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    sSpNpcKatrinaInstance = 0;
    return TRUE;
}

BOOL SpNpcKatrina::onDraw() {
    if (!NpcActor::onDraw()) {
        return FALSE;
    }
    Model_GetJointWorldMtx(&model, &jointMtx, 0xe);
    TarotProps_Draw();
    return TRUE;
}

u8 *SpNpcKatrina::getTexturePath() { return sSpNpcKatrinaTexturePath; }

u8 *SpNpcKatrina::getModelPath() { return sSpNpcKatrinaModelPath; }

BOOL SpNpcKatrina::updateAct() {
    s32 t = NpcActionCtrl_getEmotionId(&actionCtrl);
    if (t != 0x1e && t != 0x20) {
    } else if (NpcActionCtrl_isActionDone(&actionCtrl)) {
        talk.onEventTag(0);
    }
    if (unk_654 == -1) {
        if (t == 0x21 && ((((u32)model.curFrame << 4) >> 16)) >= 0x12) {
            unk_654 = Effect_Create(0x3d, (u8 *)this + 0x478, 0, 0);
            effectTimer = 0x16;
        }
    } else if (func_020e7518(&effectTimer) == 0) {
        Effect_End(unk_654);
        unk_654 = -1;
    } else {
        Effect_SetPosition(unk_654, (u8 *)this + 0x478, 0, 0);
    }
    BOOL r = FALSE;
    if (sSpNpcKatrinaActTable[act].exit) {
        r = (this->*sSpNpcKatrinaActTable[act].exit)();
    }
    return r;
}

void SpNpcKatrina::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcKatrinaActTable[state].enter) {
        ok = (this->*sSpNpcKatrinaActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcKatrina::setupAct00() {
    unk_564_func_020196b4(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKatrina::mainAct00() {
    if (isClosingTime()) {
        TalkRequest_AddPlayerTalk6(this, 0);
    }
    return TRUE;
}

BOOL SpNpcKatrina::setupAct01() {
    NpcActor *p = (NpcActor *)talk.func_02015aac();
    if (p) {
        getAngleTo(p);
    }
    unk_618_func_02014198(&talkCtrl, 1, 0);
    return TRUE;
}

BOOL SpNpcKatrina::mainAct01() {
    if (!unk_618_func_02014220(&talkCtrl)) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcKatrina::setupAct03() { return TRUE; }

BOOL SpNpcKatrina::mainAct03() {
    if (!unk_618_func_02014220(&talkCtrl)) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcKatrina::setupAct02() { return TRUE; }

BOOL SpNpcKatrina::mainAct02() { return TRUE; }

SpNpcKatrinaTalk::SpNpcKatrinaTalk() {}

SpNpcKatrinaTalk::~SpNpcKatrinaTalk() {}

void SpNpcKatrinaTalk::onEventTag(u32 a_) {
    s32 a = (s32)a_;
    if (a != NpcActionCtrl_getEmotionId(&owner->actionCtrl) || NpcActionCtrl_getAction(&owner->actionCtrl) != 8) {
        switch (a) {
        case 0x1e:
            TarotProps_StartAct01();
            break;
        case 0x1f:
            Bgm_ReleasePriority(0x10);
            TarotProps_StartAct02();
            break;
        case 0x20:
            TarotProps_StartAct03();
            break;
        }
    }
    base_vfunc_38(this, a);
}

void SpNpcKatrinaTalk::attachOwner(SpNpcKatrina *o) {
    vfunc_08();
    owner = o;
}

void SpNpcKatrinaTalk::start(TalkStartMsg *arg) {
    Unk_ov045_022590e4_Msg *out = (Unk_ov045_022590e4_Msg *)arg;
    out->msgKey = (u32)sSpNpcKatrinaMsgKey;
    s32 a = Talk_CheckAndSetPlayerFlag(4, 0);
    s32 b = Talk_CheckAndSetPlayerFlag(5, 0);
    s32 c = Talk_CheckAndSetPlayerFlag(6, 0);
    if (b == 0 || a == 0) {
        if (b == 0) {
            out->msgIndex = 1;
        } else {
            out->msgIndex = 5;
        }
    } else {
        if (c == 0) {
            out->msgIndex = 0x11;
        } else {
            out->msgIndex = 0x19;
        }
    }
    if (owner->isClosingTime()) {
        out->msgIndex = 0x13;
    }
}

void SpNpcKatrinaTalk::onMessageEnd(u32) {
    void *h = PlayerData_GetCurrent();
    u8 *gp = gSaveData;
    u32 sel = 0xff;
    switch (msgIndex) {
    case 9:
    case 11:
        setSubSceneKind(0x13, 0);
        openSubScene(2);
        setScript(1);
        break;
    case 14:
        owner->drawFortuneCard();
        sel = owner->fortuneMsg;
        break;
    case 16:
        if (NpcActor_CanPlayerPay(owner, 0x64)) {
            NpcActor_ChargePlayer(owner, 0x64);
        }
        sel = 0x16;
        break;
    case 19:
        owner->changeAct(3);
        break;
    case 24:
        if (NpcActor_CanPlayerPay(owner, 10000)) {
            NpcActor_ChargePlayer(owner, 10000);
        }
        PlayerData_setFortune(h, 0);
        Talk_CheckAndSetPlayerFlag(6, 1);
        sel = 0x16;
        break;
    case 10:
    case 12:
    case 13:
    case 15:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
        break;
    }
    u32 cur = owner->traitMsg;
    if (cur != 0xff) {
        if (cur == msgIndex) {
            s32 kind;
            void *arg;
            void *p;
            void *q;
            void *w;
            void *r5;
            sel = 0x10;
            kind = owner->getFortuneKind();
            arg = PlayerData_getPlayerId(PlayerData_GetCurrent());
            switch (owner->readingMode) {
            case 0:
                PlayerData_setFortune(h, kind);
                if (kind == 1) {
                    SaveVillagers_ApplyGoodFortune((gp + 0x8a3c), arg);
                } else if (kind == 2) {
                    SaveVillagers_ApplyBadFortune((gp + 0x8a3c));
                }
                break;
            case 1:
                p = SaveVillagers_FindByName((gp + 0x8a3c), owner->partnerName, 10, PlayerData_getPlayerId(h));
                if (p != 0) {
                    q = Villager_FindMemoryIndex(p, arg);
                    w = Villager_GetMemory(p, q);
                    if (VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
                        r5 = Villager_GetState(p);
                    } else {
                        r5 = 0;
                    }
                    if (w != 0) {
                        switch (kind) {
                        case 1: {
                            u8 *g = gCommManager;
                            if (CommManager_isSlotActive(g, *(s32 *)(g + 0x64)) == 0 && r5 != 0) {
                                if (VillagerState_GetMood(r5) == 1) {
                                    VillagerState_AddMoodTimer(r5, 0xe10);
                                } else {
                                    VillagerState_SetMoodTimer(r5, 0xe10);
                                }
                                VillagerState_SetMood(r5, 1);
                            }
                            VillagerMemory_addFriendship(w, 10);
                            VillagerSync_Friendship(p, q, VillagerMemory_getFriendship(w));
                            break;
                        }
                        case 2: {
                            u8 *g = gCommManager;
                            if (CommManager_isSlotActive(g, *(s32 *)(g + 0x64)) == 0 && r5 != 0) {
                                if (VillagerState_GetMood(r5) == 4) {
                                    VillagerState_AddMoodTimer(r5, 0x4b0);
                                } else {
                                    VillagerState_SetMoodTimer(r5, 0x4b0);
                                }
                                VillagerState_SetMood(r5, 4);
                            }
                            VillagerMemory_addFriendship(w, -3);
                            VillagerSync_Friendship(p, q, VillagerMemory_getFriendship(w));
                            break;
                        }
                        }
                    }
                }
                break;
            }
            owner->traitMsg = 0xff;
            owner->fortuneMsg = 0xff;
        }
        if (owner->fortuneMsg == msgIndex) {
            sel = owner->traitMsg;
        }
    }
    if (sel != 0xff) {
        u8 buf = sel;
        unk_3c->setNextMessage(&buf, sSpNpcKatrinaMsgKey);
    }
}

void SpNpcKatrinaTalk::onMessageStart(u32) {
    if (msgIndex == 0xe || msgIndex == 0x17) {
        Bgm_RequestSilence(0x10, 0, 0);
    }
}

void SpNpcKatrinaTalk::onChoice(u32) {
    u8 buf;
    u32 sel;
    s32 st;
    getChoiceList();
    st = ChoiceList_getResult();
    sel = 0xff;
    switch (msgIndex) {
    case 1:
    case 3:
    case 5:
        if (st == 0) {
            if (NpcActor_CanPlayerPay(owner, 0x64) == 0) {
                sel = 6;
            } else {
                sel = 7;
            }
        } else if (msgIndex == 5 && st == 1) {
            sel = 0x14;
        }
        break;
    case 7:
    case 8:
        if (st == 0) {
            if (Talk_CheckAndSetPlayerFlag(5, 0)) {
                sel = 8;
            } else {
                sel = 0xd;
                owner->readingMode = 0;
                Talk_CheckAndSetPlayerFlag(5, 1);
            }
        } else if (st == 1) {
            if (Talk_CheckAndSetPlayerFlag(4, 0)) {
                sel = 8;
            } else {
                sel = 9;
            }
        }
        break;
    case 10:
        if (st == 0) {
            sel = 0xc;
            owner->readingMode = 1;
            Talk_CheckAndSetPlayerFlag(4, 1);
        } else {
            sel = 0xb;
        }
        break;
    case 0x14:
        if (st == 0) {
            if (NpcActor_CanPlayerPay(owner, 10000) == 0) {
                sel = 0x15;
            } else {
                sel = 0x17;
            }
        }
        break;
    }
    if (sel != 0xff) {
        buf = sel;
        unk_3c->setNextMessage(&buf, sSpNpcKatrinaMsgKey);
    }
}

void SpNpcKatrinaTalk::update() {
    s32 i = script;
    if (sSpNpcKatrinaTalkScripts[i].flag != 0) {
        if (sSpNpcKatrinaTalkScripts[i].fn != 0) {
            (this->*sSpNpcKatrinaTalkScripts[i].fn)();
        }
    }
}

void SpNpcKatrinaTalk::onTaskDone(u32) {
    s32 i = script;
    if (sSpNpcKatrinaTalkScripts[i].flag == 0) {
        if (sSpNpcKatrinaTalkScripts[i].fn != 0) {
            (this->*sSpNpcKatrinaTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void SpNpcKatrinaTalk::setScript(s32 v) {
    script = v;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

void SpNpcKatrinaTalk::scriptReadPartnerName() {
    u8 msg;
    void *o = unk_3c;
    msg = 0xb;
    if (MenuCtrl_IsResultOk()) {
        owner->partnerName = MenuCtrl_GetText();
        KatrinaMsgString17 src;
        KatrinaEncodedString16 dst;
        EncodedString_SetRaw(&dst, owner->partnerName, 0x10);
        src.fromEncoded(&dst, 0, 0);
        unk_3c->setSlot(0, &src);
        msg = 0xa;
    }
    ((TalkWindowState *)o)->setNextMessage(&msg, sSpNpcKatrinaMsgKey);
}

BOOL SpNpcKatrina::vfunc_48(void *) {
    BOOL r = FALSE;
    Unk_ov045_02259070_Rec *src = (Unk_ov045_02259070_Rec *)PlayerActor_GetBodyPos(4);
    Unk_ov045_02259070_Rec rec;
    s32 bx, by;
    rec.a = src->a;
    rec.b = src->b;
    rec.c = src->c;
    bx = r;
    by = r;
    FieldPos_ToUnit(&bx, &by, &rec);
    if (act == 0) {
        s32 x = position.x;
        if (rec.a > x - 0x1000 && rec.a < x + 0x1000) {
            s32 z = position.z;
            if (rec.c > z + 0x2000 && rec.c < z + 0x4000) {
                r = TRUE;
            }
        }
    }
    return r;
}

void SpNpcKatrina::vfunc_4c(u32 cmd, u8 b) {
    switch (cmd) {
    case 0:
    case 1:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL SpNpcKatrina::isClosingTime() {
    u32 z[2];
    z[0] = 0;
    z[1] = 0;
    Clock_GetDateTime(z);
    if (((u8 *)z)[2] < 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 *SpNpcKatrina_GetJointMtx() {
    return (u8 *)sSpNpcKatrinaInstance + 0x65c;
}

extern "C" u32 SpNpcKatrina_GetAnimFrame() {
    return ((Unk_ov045_02258fd8_Bits *)((u8 *)sSpNpcKatrinaInstance + 0x190))->mid;
}

void SpNpcKatrina::drawFortuneCard() {
    card = Random_GlobalBelow(0x16);
    if (Random_GlobalBelow(2) == 0) {
        inverted = 0;
    } else {
        inverted = 1;
    }
    s32 t = Random_GlobalBelow(2);
    s32 k = card * 2 + 0x1a;
    k += t;
    fortuneMsg = k + inverted * 0x2c;
    traitMsg = card + 0x72 + inverted * 0x16;
}

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

s32 SpNpcKatrina::getFortuneKind() {
    u8 i;
    for (i = 0; i < 0x11; i++) {
        if (card == sSpNpcKatrinaGoodFortuneCards[i].a && inverted == sSpNpcKatrinaGoodFortuneCards[i].b) {
            return 1;
        }
    }
    for (i = 0; i < 0x15; i++) {
        if (card == sSpNpcKatrinaBadFortuneCards[i].a && inverted == sSpNpcKatrinaBadFortuneCards[i].b) {
            return 2;
        }
    }
    return 0;
}

KatrinaMsgString17::KatrinaMsgString17() {}

KatrinaMsgString17::~KatrinaMsgString17() {}

u32 KatrinaMsgString17::capacity() { return 0x11; }

u8 *KatrinaMsgString17::data() { return (u8 *)this + 0x12; }

KatrinaEncodedString16::KatrinaEncodedString16() {}

// ---------------------------------------------------------------------------------------------------------------------
// Message buffer classes

KatrinaEncodedString16::~KatrinaEncodedString16() {}

u32 KatrinaEncodedString16::capacity() { return 0x10; }

u8 *KatrinaEncodedString16::data() { return (u8 *)this + 0xe; }


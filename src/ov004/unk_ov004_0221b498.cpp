#include "types.h"



#include "types.h"
#include "actor/ActorProfile.h"
#include "talk/TalkTopicMsg.h"
#include "net/CommManager.h"
#include "game/Unk_ov004_0221b954_Vec.h"
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


class ActorTalkRequest;










struct Unk_020d77a4_Vec3;





struct Unk_ov004_0221b6d4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

// Real symbol names of the callees outside this unit (all are called as free functions taking the object first).
#define NpcActor_netSetSlotsIfOwner _ZN8NpcActor18netSetSlotsIfOwnerEjjjz
#define NpcActor_isNetOwner _ZN8NpcActor10isNetOwnerEv
#define NpcActor_netGetSlots _ZN8NpcActor11netGetSlotsEii
#define NpcActor_netIsTalkLocked _ZN8NpcActor15netIsTalkLockedEv
#define NpcActor_setNetUserBytes _ZN8NpcActor15setNetUserBytesEPvi
#define NpcActor_getNetUserBytes _ZN8NpcActor15getNetUserBytesEPhj
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP16ActorTalkRequest
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_setCollisionRadius _ZN8NpcActor18setCollisionRadiusEi
#define func_0201b08c _ZN8NpcActor18onInteractionEventEi
#define Character_setInteractionRange _ZN9Character19setInteractionRangeEi
#define SpNpcActor_setColliderSize _ZN10SpNpcActor15setColliderSizeEii
#define ActorTalkRequest_setTalkPlayer _ZN16ActorTalkRequest13setTalkPlayerEj
#define ActorTalkRequest_getTalkPlayer _ZN16ActorTalkRequest13getTalkPlayerEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcAnimCtrl_isPlayingAnim _ZN11NpcAnimCtrl13isPlayingAnimEiPv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define PlayerData_getSpNpcRecord _ZN10PlayerData14getSpNpcRecordEv
#define ActorTalkRequest_setPartnerActor _ZN16ActorTalkRequest15setPartnerActorEP8NpcActor
#define PlayerSpNpcRecord_setSableTalkCount _ZN17PlayerSpNpcRecord17setSableTalkCountEj
#define PlayerSpNpcRecord_getSableTalkCount _ZN17PlayerSpNpcRecord17getSableTalkCountEv

extern "C" {
extern CommManager *gCommManager;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Vec gVec3Zero;
extern const u8 sSpNpcSableDramaMsgs[];
extern const u8 sSpNpcSableWeekdayMsgs[];
extern const u8 sSpNpcSableTalkMsgs[];
extern u32 sSpNpcSableMsgFiles[];

s32 NpcActor_netSetSlotsIfOwner(void *self, s32 a, s32 b, s32 c);
BOOL NpcActor_isNetOwner(void *self);
s32 NpcActor_netGetSlots(void *self, s32 *a, s32 *b);
BOOL NpcActor_netIsTalkLocked(void *self);
void NpcActor_setNetUserBytes(void *self, void *p, s32 n);
BOOL NpcActor_getNetUserBytes(void *self, u8 *p, u32 n);
void NpcActor_setTalkRequest(void *self, void *p);
u32 NpcActor_getPlayerActor(void *self, u32 id);
s32 NpcActor_getAngleTo(void *self, void *p);
void NpcActor_setCollisionRadius(void *self, s32 v);
void func_0201b08c(void *self, u32 a, u32 b);
void Character_setInteractionRange(void *self, s32 v);
void SpNpcActor_setColliderSize(void *self, s32 a, s32 b);
void ActorTalkRequest_setTalkPlayer(void *self, u32 v);
NpcActor *ActorTalkRequest_getTalkPlayer(void *self);
void NpcLookAt_setTarget(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b954_Vec *v, s32 d, s32 e, u8 f);
s32 NpcActionCtrl_getAction(void *self);
BOOL NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
BOOL NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTalk(void *self, u8 a, u8 b);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
BOOL NpcAnimCtrl_isPlayingAnim(void *self, s32 a, void *b);
BOOL CommManager_isOnline(void *g);
void *PlayerData_getSpNpcRecord(void *p);
void ActorTalkRequest_setPartnerActor(void *self, void *p);
void PlayerSpNpcRecord_setSableTalkCount(void *self, u32 v);
u32 PlayerSpNpcRecord_getSableTalkCount(void *self);
void *PlayerData_GetCurrent();
s32 Random_GlobalBelow(s32);
BOOL NetArea_IsLocalOwner();
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
BOOL Talk_IsDramaPending(void *self, void *out, s32 x);
void Talk_AdvanceDrama(void *self, void *p);
s16 *DebugVar_GetPtr(s32 a, s32 b);
s32 GameStart_IsActive();
s32 Clock_GetWeekday();
void *NpcRegistry_FindSpNpc(s32 n);
void TalkRequest_SetTargetDone(void *self);
void SewingMachine_Stop();
s32 SewingMachine_IsStopped();
void SewingMachine_Start();
void SewingMachine_SetFrame(u32 v);
s32 SewingMachine_GetFrame();
u32 SpNpcSable_GetTalkCount(void *self);
void SpNpcSable_SetTalkCount(void *self, u32 v);
}

class SpNpcSable;

class SpNpcSableTalk : public SpNpcTalkRequest {
public:
    SpNpcSableTalk();
    virtual ~SpNpcSableTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcSable *o);

    /* 0xac */ SpNpcSable *owner;
};

class SpNpcSable : public SpNpcActor {
public:
    SpNpcSable() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 idx, u8 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void onLeaveTalk();

    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 act;
    SpNpcSableTalk talk;
    s16 homeAngle;
    u8 isDramaTalk;
    u8 pad_70b;
    u16 resumeFrame;
    u8 sewCycle;
};

struct SpNpcSableActEntry {
    BOOL (SpNpcSable::*enter)();
    BOOL (SpNpcSable::*exit)();
};

extern "C" {
extern SpNpcSableActEntry sSpNpcSableActTable[7];
extern u8 sSpNpcSableModelPath[];
extern u8 sSpNpcSableTexturePath[];
}


extern "C" SpNpcSable *SpNpcSable_Create() { return new SpNpcSable; }

BOOL SpNpcSable::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    SpNpcActor_setColliderSize(this, 0x119a, 0x2000);
    NpcActor_setCollisionRadius(this, 0);
    Character_setInteractionRange(this, 0x3000);
    return TRUE;
}

BOOL SpNpcSable::onCreate() {
    s32 v;
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    homeAngle = rotY;
    collider.groups |= 2;
    if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (NetArea_IsLocalOwner()) {
            changeAct(0);
        } else {
            NpcActor_getNetUserBytes(this, &sewCycle, 1);
            changeAct(4);
        }
    } else {
        changeAct(0);
        if (Talk_IsDramaPending(this, &v, 2)) {
            isDramaTalk = 1;
        }
    }
    return TRUE;
}

u8 *SpNpcSable::getTexturePath() { return sSpNpcSableTexturePath; }

u8 *SpNpcSable::getModelPath() { return sSpNpcSableModelPath; }

BOOL SpNpcSable::updateAct() {
    sewCycle = SewingMachine_GetFrame() / 0x38;
    NpcActor_setNetUserBytes(this, &sewCycle, 1);
    BOOL r = FALSE;
    if (sSpNpcSableActTable[act].exit) {
        r = (this->*sSpNpcSableActTable[act].exit)();
    }
    return r;
}

void SpNpcSable::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcSableActTable[state].enter) {
        ok = (this->*sSpNpcSableActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcSable::setupAct00() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0xe4, 0, data_020c6cc8, resumeFrame);
    return TRUE;
}

BOOL SpNpcSable::mainAct00() {
    if (homeAngle != rotY) {
        changeAct(3);
        return TRUE;
    }
    if (NpcAnimCtrl_isPlayingAnim(&animCtrl, 0xe4, &moveAnimSet)) {
        if (SewingMachine_IsStopped()) {
            SewingMachine_Start();
            u32 t = sewCycle * 0x38;
            SewingMachine_SetFrame((u16)(t + (((u32)model.curFrame << 4) >> 16)));
        }
    }
    return TRUE;
}

BOOL SpNpcSable::setupAct01() {
    if (SpNpcSable_GetTalkCount(this) >= 6) {
        NpcLookAt_setTarget(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    }
    SewingMachine_Stop();
    if (SpNpcSable_GetTalkCount(this) < 6) {
        NpcTalkCtrl_requestTalk(&talkCtrl, 1, 0);
    } else {
        NpcActor *p = ActorTalkRequest_getTalkPlayer(&talk);
        s32 r = 0;
        if (p) {
            r = NpcActor_getAngleTo(this, p);
        }
        NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 0);
    }
    return TRUE;
}

BOOL SpNpcSable::mainAct01() {
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return TRUE;
    }
    if (!CommManager_isOnline(gCommManager) && !Talk_CheckAndSetPlayerFlag(0x11, 1)) {
        u32 t = (u8)(SpNpcSable_GetTalkCount(this) + 1);
        if (t > 0xf) {
            t = 0xf;
        }
        SpNpcSable_SetTalkCount(this, t);
    }
    TalkRequest_SetTargetDone(this);
    changeAct(2);
    return TRUE;
}

BOOL SpNpcSable::setupAct02() { return TRUE; }

BOOL SpNpcSable::mainAct02() { return TRUE; }

BOOL SpNpcSable::setupAct03() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcSable::mainAct03() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcSable::setupAct04() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcSable::mainAct04() {
    s32 a, b;
    if (NpcActor_isNetOwner(this)) {
        a = 4;
        b = 4;
        if (NpcActor_netGetSlots(this, &a, &b)) {
            s32 av = a;
            s32 g = gCommManager->myAid;
            if (av == g && av == b) {
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                ActorTalkRequest *p = &talk;
                p->resetMsg();
                ActorTalkRequest_setTalkPlayer(&talk, NpcActor_getPlayerActor(this, 4));
                changeAct(1);
                goto end;
            }
        }
        if (NetArea_IsLocalOwner() && b == 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, 4);
            changeAct(0);
        }
    } else if (!NetArea_IsLocalOwner()) {
        if (NpcAnimCtrl_isPlayingAnim(&animCtrl, 0xe4, &moveAnimSet)) {
            if (SewingMachine_IsStopped()) {
                SewingMachine_Start();
                u32 t = sewCycle * 0x38;
                SewingMachine_SetFrame((u16)(t + (((u32)model.curFrame << 4) >> 16)));
            }
        } else if (!SewingMachine_IsStopped()) {
            SewingMachine_Stop();
        }
    }
end:
    return TRUE;
}

BOOL SpNpcSable::setupAct05() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcSable::mainAct05() {
    if (NpcActor_isNetOwner(this)) {
        s32 a = 4;
        s32 b = 4;
        if (NpcActor_netGetSlots(this, &a, &b) && a == 4 && NetArea_IsLocalOwner()) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, 4);
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcSable::setupAct06() {
    SewingMachine_Stop();
    resumeFrame = model.curFrame >> 12;
    return TRUE;
}

BOOL SpNpcSable::mainAct06() { return TRUE; }

void SpNpcSable::onLeaveTalk() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
}

SpNpcSableTalk::SpNpcSableTalk() {}

SpNpcSableTalk::~SpNpcSableTalk() {}

void SpNpcSableTalk::attachOwner(SpNpcSable *o) {
    resetMsg();
    owner = o;
}

void SpNpcSableTalk::start(TalkStartMsg *out_) {
    TalkTopicMsg *out = (TalkTopicMsg *)out_;
    u32 idx = SpNpcSable_GetTalkCount(owner);
    void *g = gCommManager;
    if (CommManager_isOnline(g) != 0 || *(s16 *)DebugVar_GetPtr(0, 0x4a) != 0) {
        idx = 0;
        out->msgIndex = 0x57;
    } else if (GameStart_IsActive() != 0) {
        idx = 2;
        out->msgIndex = 5;
    } else {
        Unk_ov004_0221b6d4_Bits bits;
        if (Talk_IsDramaPending(owner, &bits, 2) != 0) {
            idx = 1;
            owner->isDramaTalk = idx;
            out->msgIndex = (sSpNpcSableDramaMsgs + bits.b * 7)[bits.c];
            Talk_AdvanceDrama(owner, &bits);
        } else if (Talk_CheckAndSetPlayerFlag(0x10, 1) == 0) {
            if (idx >= 0xc) {
                out->msgIndex = sSpNpcSableWeekdayMsgs[Clock_GetWeekday()];
            } else {
                out->msgIndex = sSpNpcSableTalkMsgs[idx * 8];
            }
            idx = 0;
        } else {
            if (idx > 0xc) {
                out->msgIndex = Random_GlobalBelow(5) + 0x28;
            } else {
                s32 t = idx - 1;
                if (t < 0) {
                    t = 0;
                } else if (t > 0xb) {
                    t = 0xb;
                }
                u32 o = t << 3;
                s32 r = Random_GlobalBelow(*(s32 *)(sSpNpcSableTalkMsgs + 4 + o)) + 1;
                out->msgIndex = r + sSpNpcSableTalkMsgs[o];
            }
            idx = 0;
        }
    }
    out->fileName = sSpNpcSableMsgFiles[idx];
    if (CommManager_isOnline(g) == 0 && *(s16 *)DebugVar_GetPtr(0, 0x4a) == 0 && idx == 0) {
        switch (out->msgIndex) {
        case 2:
        case 5:
        case 8:
        case 9:
        case 12:
        case 15:
        case 17:
        case 18:
        case 19:
        case 21:
        case 23:
        case 24:
        case 27:
        case 28:
        case 30:
        case 40:
        case 43: {
            void *r = NpcRegistry_FindSpNpc(4);
            if (r) {
                ActorTalkRequest_setPartnerActor(this, r);
            }
            break;
        }
        }
    }
}

void SpNpcSableTalk::onMessageEnd(u32) {}

void SpNpcSableTalk::onChoice(u32) {}

BOOL SpNpcSable::acceptsInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcSable::onInteractionEvent(u32 idx, u8 v) {
    switch (idx) {
    case 3:
        partnerPlayer = v;
        if (v != 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, v);
            changeAct(6);
        } else {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 g = gCommManager->myAid;
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                changeAct(6);
            }
        }
        break;
    case 0:
        partnerPlayer = v;
        if (v != 4 && v != gCommManager->myAid) {
            NpcActor_netSetSlotsIfOwner(this, 1, v, v);
            changeAct(5);
        } else {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 g = gCommManager->myAid;
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                talk.resetMsg();
                ActorTalkRequest_setTalkPlayer(&talk, NpcActor_getPlayerActor(this, 4));
                changeAct(1);
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (NetArea_IsLocalOwner() != 0) {
                NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, 4);
                changeAct(3);
            } else {
                NpcActor_netSetSlotsIfOwner(this, 1, 4, gCommManager->myAid);
                changeAct(4);
            }
        }
        break;
    case 4:
        if (NpcActor_netIsTalkLocked(this) != 0) {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 a = 4;
                s32 b = 4;
                if (NpcActor_netGetSlots(this, &a, &b) != 0) {
                    if (v == 4) {
                        goto chk;
                    }
                    if (v == b) {
                        goto body;
                    }
                chk:
                    if (v != 4) {
                        break;
                    }
                body:
                    NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, 4);
                    changeAct(0);
                }
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}

extern "C" u32 SpNpcSable_GetTalkCount(void *unused) {
    return PlayerSpNpcRecord_getSableTalkCount(PlayerData_getSpNpcRecord(PlayerData_GetCurrent()));
}

extern "C" void SpNpcSable_SetTalkCount(void *unused, u32 a) {
    PlayerSpNpcRecord_setSableTalkCount(PlayerData_getSpNpcRecord(PlayerData_GetCurrent()), a);
}

// ---------------------------------------------------------------------------------------------------------------------

extern "C" const u8 sSpNpcSableWeekdayMsgs[8] = {0x27, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x00};
extern "C" const u8 sSpNpcSableDramaMsgs[0x1c] = {0, 1, 2, 3, 0xfe, 0xfe, 0xfe, 4, 5, 6, 0xfe, 0xfe, 0xfe, 0xfe, 7, 8, 9, 10, 11, 0xfe, 0xfe, 11, 12, 13, 14, 15, 16, 17};
extern "C" const u8 sSpNpcSableTalkMsgs[0x60] = {0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 2, 0, 0, 0, 9, 0, 0, 0, 2, 0, 0, 0, 12, 0, 0, 0, 2, 0, 0, 0, 15, 0, 0, 0, 2, 0, 0, 0, 18, 0, 0, 0, 2, 0, 0, 0, 21, 0, 0, 0, 2, 0, 0, 0, 24, 0, 0, 0, 2, 0, 0, 0, 27, 0, 0, 0, 2, 0, 0, 0, 30, 0, 0, 0, 2, 0, 0, 0};
extern "C" u8 data_ov004_0224cd04[14] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'd', 'r', 'a', 'm', 'a', '3', 0};
extern "C" u8 data_ov004_0224cd14[15] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'o', 's', 'i', 's', 't', 'e', 'r', 0};
extern "C" u8 data_ov004_0224cd24[17] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};
extern "C" u32 sSpNpcSableMsgFiles[3] = {(u32)data_ov004_0224cd14, (u32)data_ov004_0224cd04, (u32)data_ov004_0224cd24};
extern "C" u8 sSpNpcSableModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'h', 'g', 's', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcSableTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'h', 'g', 's', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" ActorProfile sSpNpcSableProfile = {(void *(*)())SpNpcSable_Create, 0x77, 0x7c, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void _ZN10SpNpcSable10setupAct05Ev();
extern "C" void _ZN10SpNpcSable9mainAct05Ev();
extern "C" void _ZN10SpNpcSable9mainAct00Ev();
extern "C" void _ZN10SpNpcSable10setupAct06Ev();
extern "C" void _ZN10SpNpcSable9mainAct06Ev();
extern "C" void _ZN10SpNpcSable10setupAct01Ev();
extern "C" void _ZN10SpNpcSable10setupAct00Ev();
extern "C" void _ZN10SpNpcSable10setupAct03Ev();
extern "C" void _ZN10SpNpcSable10setupAct04Ev();
extern "C" void _ZN10SpNpcSable9mainAct04Ev();
extern "C" void _ZN10SpNpcSable9mainAct03Ev();
extern "C" void _ZN10SpNpcSable9mainAct01Ev();
extern "C" void _ZN10SpNpcSable9mainAct02Ev();
extern "C" void _ZN10SpNpcSable10setupAct02Ev();
extern "C" void *data_ov004_0224cc88[2] = {(void *)_ZN10SpNpcSable10setupAct05Ev, 0};
extern "C" void *data_ov004_0224ccf0[2] = {(void *)_ZN10SpNpcSable10setupAct02Ev, 0};
extern "C" void *data_ov004_0224cce8[2] = {(void *)_ZN10SpNpcSable9mainAct02Ev, 0};
extern "C" void *data_ov004_0224cce0[2] = {(void *)_ZN10SpNpcSable9mainAct01Ev, 0};
extern "C" void *data_ov004_0224ccd8[2] = {(void *)_ZN10SpNpcSable9mainAct03Ev, 0};
extern "C" void *data_ov004_0224ccd0[2] = {(void *)_ZN10SpNpcSable9mainAct04Ev, 0};
extern "C" void *data_ov004_0224ccc8[2] = {(void *)_ZN10SpNpcSable10setupAct04Ev, 0};
extern "C" void *data_ov004_0224cc98[2] = {(void *)_ZN10SpNpcSable9mainAct00Ev, 0};
extern "C" void *data_ov004_0224cca0[2] = {(void *)_ZN10SpNpcSable10setupAct06Ev, 0};
extern "C" void *data_ov004_0224ccb8[2] = {(void *)_ZN10SpNpcSable10setupAct00Ev, 0};
extern "C" void *data_ov004_0224ccb0[2] = {(void *)_ZN10SpNpcSable10setupAct01Ev, 0};
extern "C" void *data_ov004_0224cca8[2] = {(void *)_ZN10SpNpcSable9mainAct06Ev, 0};
extern "C" void *data_ov004_0224ccc0[2] = {(void *)_ZN10SpNpcSable10setupAct03Ev, 0};
extern "C" void *data_ov004_0224cc90[2] = {(void *)_ZN10SpNpcSable9mainAct05Ev, 0};
typedef BOOL (SpNpcSable::*Unk_ov004_Fn)();
extern "C" SpNpcSableActEntry sSpNpcSableActTable[7] = {
    {*(Unk_ov004_Fn *)data_ov004_0224ccb8, *(Unk_ov004_Fn *)data_ov004_0224cc98},
    {*(Unk_ov004_Fn *)data_ov004_0224ccb0, *(Unk_ov004_Fn *)data_ov004_0224cce0},
    {*(Unk_ov004_Fn *)data_ov004_0224ccf0, *(Unk_ov004_Fn *)data_ov004_0224cce8},
    {*(Unk_ov004_Fn *)data_ov004_0224ccc0, *(Unk_ov004_Fn *)data_ov004_0224ccd8},
    {*(Unk_ov004_Fn *)data_ov004_0224ccc8, *(Unk_ov004_Fn *)data_ov004_0224ccd0},
    {*(Unk_ov004_Fn *)data_ov004_0224cc88, *(Unk_ov004_Fn *)data_ov004_0224cc90},
    {*(Unk_ov004_Fn *)data_ov004_0224cca0, *(Unk_ov004_Fn *)data_ov004_0224cca8},
};

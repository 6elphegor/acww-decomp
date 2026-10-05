// mwcc-version: 1.2/sp2
// mwcc-flags: -O4,s -str reuse
#include "types.h"
#include "gfx/VecFx32.h"
#include "field/Unk_ov003_02214494_Views.h"
#include "actor/ActorProfile.h"
#include "talk/TalkWindowState.h"
#include "game/ReddPassword.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"
#include "town/ReddTent.h"
#include "gfx/DebugColor.h"

extern "C" void ReddTent_Create();
extern "C" DebugColor data_ov003_02235144(0x1f, 0x14, 0x14, 0x1f);
extern "C" DebugColor data_ov003_02235160(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov003_0223514c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov003_02235158(0x14, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov003_0223515c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" DebugColor data_ov003_02235148(0x14, 0x18, 0x18, 0x1f);
extern "C" ActorProfile sReddTentProfile = {(void *(*)())ReddTent_Create, 0x1b, 0x21, 0, 0xc8000, 0x12c000, 0x258000};














extern "C" {
BOOL MenuCtrl_IsFinished();
BOOL TalkRequest_SetTargetDone(void *p);
BOOL TalkRequest_AddPlayerTalk6(void *p, u32 a);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
BOOL PlayerActor_IsStowFinished();
BOOL PlayerActor_IsEnteringDoor();
void PlayerActor_RequestStowThenAct10(u32 a);
void *Scene_GetWarpRequest();
BOOL SceneWarp_RequestExit(void *o, s32 a);
s32 Scene_GetCurrent();
void Scene_SetTownReturnPos(void *o, s32 a, VecFx32 *v, u32 b, s32 c, u32 d, u32 e);
s32 Ground_GetDefaultY(u32 a);
BOOL PlayerActor_LocalRequestDoorEnter(u32 a, s32 *b, s32 *c, s32 d);
BOOL MenuCtrl_IsResultOk();
s32 ReddPassword_LearnCurrentPlayer();
s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *o, u8 *p, char *s);
void BuildingOccupancy_Leave(u32 a, u32 b);
extern u8 data_021ed2c0[];
ReddPassword *_ZN8ReddShop11getPasswordEv(void *p);
s32 _ZN12ReddPassword14getAnswerIndexEv();
void MenuCtrl_OpenLauncherWithIndex(u32 a, s32 b);
s32 ReddPassword_CurrentPlayerKnows();
u32 BuildingOccupancy_GetAnswer(u32 a);
void BuildingOccupancy_RequestEnter(u32 a);
}

extern "C" {
extern u8 data_021ed2c0[];
void _ZN18ReddPasswordStringC1Ev(void *);
void _ZN18ReddPasswordStringD1Ev(void *);
ReddPassword *_ZN8ReddShop11getPasswordEv(void *);
void _ZN15TalkWindowState7setSlotEiPv(void *, s32, void *);
void Clock_GetDateTime(void *);
s32 Scene_GetCurrent();
}


extern "C" void ReddTent_Create() {
    new ReddTent;
}


ReddTent::ReddTent() {
}


ReddTent::~ReddTent() {
}


BOOL ReddTent::initBuilding() {
    Unk_ov003_02214890_Buf l;
    l.w0 = 0;
    l.w1 = 0;
    Clock_GetDateTime(&l);
    createHour = ((u8 *)&l)[2];
    return TRUE;
}


BOOL ReddTent::onExecute() {
    updateTentState();
    return TRUE;
}


BOOL ReddTent::isOpen() {
    Unk_ov003_02214890_Buf l;
    l.w0 = 0;
    l.w1 = 0;
    Clock_GetDateTime(&l);
    if (((u8 *)&l)[2] < 6) {
        goto no;
    }
    if (createHour >= 6) {
        goto yes;
    }
    return FALSE;
yes:
    return TRUE;
no:
    return FALSE;
}


void ReddTent::onMessageStart(u32) {
    if (msgIndex == 2) {
        u32 obj[0x38 / 4];
        _ZN18ReddPasswordStringC1Ev(obj);
        if (_ZN8ReddShop11getPasswordEv(data_021ed2c0)->getPromptText(obj)) {
            _ZN15TalkWindowState7setSlotEiPv(window, 0, obj);
        }
        _ZN18ReddPasswordStringD1Ev(obj);
    }
}


void ReddTent::onMessageEnd(u32) {
    switch (msgIndex) {
    case 2:
        window->openMode = 1;
        setTentState(4);
        break;
    case 3:
    case 0x32:
        setTentState(6);
        break;
    }
}


void ReddTent::onChoice(u32) {
}


BOOL ReddTent::getVoiceType() {
    return FALSE;
}


BOOL ReddTent::setTentState(s32 i) {
    static BOOL (ReddTent::*tbl[10])() = {
        &ReddTent::enterTentIdle, &ReddTent::enterTentCheck,
        &ReddTent::enterTentTalkOpen, &ReddTent::enterTentTalk,
        &ReddTent::enterTentMenuWait, &ReddTent::enterTentMenu,
        &ReddTent::enterTentGoIn, &ReddTent::enterTentEntry07,
        &ReddTent::enterTentWalkIn, &ReddTent::enterTentWarp,
    };
    if (i < 10) {
        if ((this->*tbl[i])()) {
            tentState = i;
            return TRUE;
        }
    }
    return FALSE;
}


void ReddTent::updateTentState() {
    static void (ReddTent::*tbl[10])() = {
        &ReddTent::execTentIdle, &ReddTent::execTentCheck,
        &ReddTent::execTentTalkOpen, &ReddTent::execTentTalk,
        &ReddTent::execTentMenuWait, &ReddTent::execTentMenu,
        &ReddTent::execTentGoIn, &ReddTent::execTentEntry07,
        &ReddTent::execTentWalkIn, &ReddTent::execTentWarp,
    };
    s32 i = tentState;
    if (i < 10) {
        (this->*tbl[i])();
    }
}


BOOL ReddTent::enterTentIdle() {
    return TRUE;
}


void ReddTent::execTentIdle() {
    if (colliderFlags & 4) {
        TalkRequest_AddPlayerTalk6(this, 0);
    }
}


BOOL ReddTent::enterTentCheck() {
    BuildingOccupancy_RequestEnter(itemId);
    entryFlags.f1 = 0;
    return TRUE;
}


void ReddTent::execTentCheck() {
    u32 r = BuildingOccupancy_GetAnswer(itemId);
    if (r != 0) {
        u8 s;
        if (r == 2) {
            s = 1;
        } else {
            s = 0;
        }
        entryFlags.f1 = s;
        setTentState(2);
    }
}


BOOL ReddTent::enterTentTalkOpen() {
    StackPad8 pad;
    _ZN9Character17attachTalkRequestEi(this, this);
    setFileName("sp_npc_fox");
    if (isOpen() == 0) {
        msgIndex = 0x34;
        if (entryFlags.f1 == 0) {
            BuildingOccupancy_Leave(itemId, 0);
        }
    } else {
        if (entryFlags.f1) {
            msgIndex = 0x31;
        } else if (ReddPassword_CurrentPlayerKnows()) {
            msgIndex = 0x32;
        } else {
            msgIndex = 0;
        }
    }
    window->nextState = 1;
    setNoSpeakerName(0);
    return TRUE;
}


void ReddTent::execTentTalkOpen() {
    TalkWindowState *t = window;
    if (t) {
        if (t->state != 0) {
            setTentState(3);
        }
    }
}


BOOL ReddTent::enterTentTalk() {
    return TRUE;
}


void ReddTent::execTentTalk() {
    TalkWindowState *t = window;
    if (t) {
        if (t->state == 0) {
            _ZN9Character17detachTalkRequestEi(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}


BOOL ReddTent::enterTentMenuWait() {
    return TRUE;
}


void ReddTent::execTentMenuWait() {
    if (window->state == 5) {
        _ZN8ReddShop11getPasswordEv(data_021ed2c0);
        MenuCtrl_OpenLauncherWithIndex(0xe, _ZN12ReddPassword14getAnswerIndexEv());
        setTentState(5);
    }
}


BOOL ReddTent::enterTentMenu() {
    return TRUE;
}


void ReddTent::execTentMenu() {
    if (MenuCtrl_IsFinished()) {
        u8 r[2];
        if (MenuCtrl_IsResultOk()) {
            ReddPassword_LearnCurrentPlayer();
            r[0] = 3;
            _ZN15TalkWindowState14setNextMessageEPhPv(window, &r[0], "sp_npc_fox");
            window->nextState = 1;
            setTentState(3);
        } else {
            r[1] = 4;
            _ZN15TalkWindowState14setNextMessageEPhPv(window, &r[1], "sp_npc_fox");
            window->nextState = 1;
            setTentState(3);
            BuildingOccupancy_Leave(itemId, 0);
        }
    }
}


BOOL ReddTent::enterTentGoIn() {
    return TRUE;
}


void ReddTent::execTentGoIn() {
    TalkWindowState *t = window;
    if (t) {
        if (t->state == 0) {
            setTentState(7);
        }
    }
}


BOOL ReddTent::enterTentEntry07() {
    PlayerActor_RequestStowThenAct10(0);
    return TRUE;
}


void ReddTent::execTentEntry07() {
    if (PlayerActor_IsStowFinished()) {
        if (setTentState(8)) {
            _ZN9Character17detachTalkRequestEi(this, this);
        }
    }
}


BOOL ReddTent::enterTentWalkIn() {
    doorEnterRequested = 0;
    return TRUE;
}


void ReddTent::execTentWalkIn() {
    if (PlayerActor_IsEnteringDoor()) {
        setTentState(9);
    } else if (doorEnterRequested == 0) {
        s16 ang;
        VecFx32 v;
        if (getDoorPos(&v, &ang)) {
            if (PlayerActor_LocalRequestDoorEnter(2, &v.x, &v.z, ang)) {
                doorEnterRequested = 1;
            }
        }
    }
}


BOOL ReddTent::enterTentWarp() {
    warpFrames = 0;
    return TRUE;
}


// ================================================================
// class ReddTent (state functions)
void ReddTent::execTentWarp() {
    if (PlayerActor_IsStowFinished()) {
        warpFrames++;
    }
    u32 lim;
    if (getEntranceType() == 2) {
        lim = 0x14;
    } else {
        lim = 0xf;
    }
    if (getEntranceType() == 1) {
        lim += 0xc;
    }
    if (warpFrames >= lim) {
        s32 t = getInteriorScene();
        s16 ang;
        VecFx32 v;
        if (getDoorPos(&v, &ang)) {
            if (SceneWarp_RequestExit(Scene_GetWarpRequest(), t)) {
                v.y = Ground_GetDefaultY(0);
                v.z = v.z + 0x1000;
                void *o = Scene_GetWarpRequest();
                s32 r = Scene_GetCurrent();
                Scene_SetTownReturnPos(o, r, &v, 0xf000000, (s16)(ang + 0x8000), gridX, gridZ);
                entryFlags.f0 = 1;
            }
        }
    }
}
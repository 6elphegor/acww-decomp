// mwcc-version: 1.2/sp2
// ov003 TU09 (actor 0223177c): .text 0x02215ad8-0x02215c74
#include "types.h"
#include "sys/Unk_0209d498_Time.h"
#include "talk/MsgString9B.h"
#include "actor/ActorProfile.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"
#include "town/KatrinaTent.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 BuildingActor).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include GameProc.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of TalkMsgRequest
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Character::preCreate   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::postDelete   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 BuildingActor::updateDoorState   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: BuildingActor::getSoundPos /
//     BuildingActor::calcCustomBaseMatrix, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor11postExecuteEj           -> _ZN13BuildingActor11postExecuteEj        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  BuildingActor::getSoundPos                           -> _ZN13BuildingActor11getSoundPosEv        (0x0225b884)
//   ov009  BuildingActor::calcCustomBaseMatrix                           -> _ZN13BuildingActor20calcCustomBaseMatrixEv        (0x0225b880)
//   main   TalkMsgRequest slots: the unit uses the TalkMsgRequest slot names (onMessageStart ... onTalkEnd); no
//          primary-chain class of the family declares a method of these names.
//   ov003  0x0221445c is _ZThn236_N13BuildingActor12onMessageEndEv, the thunk of ov009::onMessageEnd in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot onMessageEnd, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
// Notes:
//  * The ctor of a derived class calls BuildingActor::BuildingActor() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.















extern "C" {
void Clock_GetDateTime(void *p);
void Npc_GetName(void *p, void *q);
void _ZN11MsgString9BC1Ev(void *p);
void _ZN11MsgString9BD1Ev(void *p);
void KatrinaTent_Create();
}
#define func_02094030 _ZN11MsgString9BC1Ev
#define func_02094018 _ZN11MsgString9BD1Ev



extern "C" ActorProfile sKatrinaTentProfile = { (void *(*)())KatrinaTent_Create, 0x28, 0x2e, 0, 0xc8000, 0x12c000, 0x258000 };

extern "C" void KatrinaTent_Create() {
    new KatrinaTent;
}

KatrinaTent::KatrinaTent() {
}

KatrinaTent::~KatrinaTent() {
}

BOOL KatrinaTent::initBuilding() {
    struct {
        s32 a, b;
    } d;
    d.a = 0;
    d.b = 0;
    Clock_GetDateTime(&d);
    createHour = *((u8 *)&d + 2);
    return TRUE;
}

BOOL KatrinaTent::onExecute() {
    return TRUE;
}

BOOL KatrinaTent::isOpen() {
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    Clock_GetDateTime(&t);
    BOOL r;
    if (t.b2 >= 6) {
        if (createHour < 6) r = FALSE;
        else r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void KatrinaTent::setupTalkMsg() {
    setFileName("sp_npc_panther");
    if (isOpen() == 0) {
        msgIndex = 0xf;
    } else {
        msgIndex = 0x12;
    }
    u32 buf[7];
    u16 v[2];
    func_02094030(buf);
    v[1] = 0xd00a;
    Npc_GetName(buf, &v[1]);
    setSpeakerName(((MsgString9B *)buf)->data(), 1);
    func_02094018(buf);
}


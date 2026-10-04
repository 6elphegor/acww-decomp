// mwcc-version: 1.2/sp2
// ov003 TU11 (actor 02231aa8): .text 0x02216430-0x022165d0
#include "types.h"
#include "game/Unk_020b1ddc.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/Model.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"

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
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: BuildingActor::getSoundPos /
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











class Unk_020b1ddc;




extern "C" {
s32 _ZN12G3dResAccess13func_02056fccEi(void *self, s32 i);
}
#define func_02056fcc _ZN12G3dResAccess13func_02056fccEi

struct Unk_ov003_0221655c_Owner {
    u8 pad_00[0x2c];
    BuildingActor *ptrUser;
};

struct Unk_ov003_0221655c_Src {
    u8 *c;
    Unk_ov003_0221655c_Owner *pRenderObj;
};

extern "C" void TownHall_NodeCallback(Unk_ov003_0221655c_Src *a);
extern "C" void TownHall_Create();

class TownHall : public BuildingActor {
public:
    TownHall();
    virtual ~TownHall();

    virtual void onJointCalcPost(u32 a, void *p);
    virtual BOOL initBuilding();
    virtual BOOL playsDoorMelody();

    /* 0x2b0 */ s8 hourHandNode;
    /* 0x2b1 */ s8 minuteHandNode;
    /* 0x2b2 */ u8 pad_2b2[2];
};


extern "C" Unk_ov003_SceneEntry sTownHallProfile = { (void *(*)())TownHall_Create, 0x1e, 0x24, 0, 0xc8000, 0x12c000, 0x258000 };

extern "C" void TownHall_Create() {
    new TownHall();
}

extern "C" void TownHall_NodeCallback(Unk_ov003_0221655c_Src *a) {
    BuildingActor *o = a->pRenderObj->ptrUser;
    if (o) {
        o->onJointCalcPost(a->c[1], a);
    }
}

TownHall::TownHall() {
    minuteHandNode = -1;
    hourHandNode = minuteHandNode;
}

TownHall::~TownHall() {
}

BOOL TownHall::initBuilding() {
    hourHandNode = func_02056fcc(modelRes, (s32) "kh_j");
    minuteHandNode = func_02056fcc(modelRes, (s32) "km_j");
    if (hourHandNode != -1 && minuteHandNode != -1) {
        ((Model *)unk_138)->setCallback((s32)TownHall_NodeCallback, 6, 2, (s32)this, 0);
    }
    return TRUE;
}

void TownHall::onJointCalcPost(u32 a, void *p) {
    if ((s32)a == hourHandNode) {
        ((Unk_020b1ddc *)p)->rotateHourHand();
    } else if ((s32)a == minuteHandNode) {
        ((Unk_020b1ddc *)p)->rotateMinuteHand();
    }
}

BOOL TownHall::playsDoorMelody() {
    return TRUE;
}


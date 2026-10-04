// mwcc-version: 1.2/sp2
// ov003 TU06 (actor 02231168): .text 0x02214ce0-0x02214dfc
#include "types.h"
#include "field/Unk_ov003_02214494_Views.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
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
//     00 ov009::vfunc_00      04 Character::vfunc_04   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::vfunc_14   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: func_ov009_0225b884 /
//     func_ov009_0225b880, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor7preDrawEj           -> _ZN13BuildingActor8vfunc_20Ej        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  func_ov009_0225b884                           -> _ZN13BuildingActor8vfunc_b4Ev        (0x0225b884)
//   ov009  func_ov009_0225b880                           -> _ZN13BuildingActor8vfunc_b8Ev        (0x0225b880)
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
void Clock_GetDateTime(void *);
void MI_CpuCopy8(void *, void *, s32);
s32 Event_GetState(u32, void *, u32);
s32 Scene_GetCurrent();
void Visitor_ScheduleLow(void *, s32, void *);
}

class GracieCar : public BuildingActor {
public:
    GracieCar();
    virtual ~GracieCar();
    virtual BOOL vfunc_70();
};


extern "C" void GracieCar_Create();
extern "C" u32 sGracieCarVisitorProfile = 0x6c;
extern "C" Unk_ov003_SceneEntry sGracieCarProfile = { (void *(*)())GracieCar_Create, 0x29, 0x2f, 0, 0xc8000, 0x12c000, 0x258000 };

static inline BOOL Unk_ov003_02214ce0_Chk(void *m) {
    if (Event_GetState(0x40, m, 0)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void GracieCar_Create() {
    new GracieCar;
}

GracieCar::GracieCar() {
}

GracieCar::~GracieCar() {
}

BOOL GracieCar::vfunc_70() {
    Unk_ov003_02214890_Buf l;
    Unk_ov003_02214890_Buf m;
    l.w0 = 0;
    l.w1 = 0;
    Clock_GetDateTime(&l);
    MI_CpuCopy8(&l, &m, 8);
    if (Unk_ov003_02214ce0_Chk(&m)) {
        Visitor_ScheduleLow(&sGracieCarVisitorProfile, Scene_GetCurrent(), &position);
    }
    return TRUE;
}


// mwcc-version: 1.2/base
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "gfx/CachedModel.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "room/RoomObjActor.h"

// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor8vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::changeSyncState(u32)   64 M::getSoundPos(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN12RoomObjActorC2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (RoomObjRes: real C1/D1 methods), unk_248 (RoomObjTex) and unk_250
//    (RoomObjSe) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (RoomObj_DestructSe / RoomObjTex_Destruct), so RoomObjTex and RoomObjSe have no destructor here.
//  * ProcBase .. Character are an own copy of the library chain (the header GameProc.h names slot 08
//    vfunc_08, the real symbol is Character::postCreate(s32); slot 20 takes a u32).  Do not also include GameProc.h.
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (AnimModel), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; TalkMsgRequest (secondary base of the derived classes) starts at 0x290.







// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)




extern "C" {
s32 RoomObjRes_GetBca(void *self, u32 i);
void RoomObjRes_Free(void *self);
void RoomObjRes_Load(void *self, const char *s);
void *RoomObjRes_GetModel(void *self);
void RoomObjTex_Construct(void *self);
void RoomObjTex_Destruct(void *self);
void RoomObjTex_Reset(void *self);
void RoomObjTex_Load(void *self, const char *s);
u32 RoomObjTex_Get(void *self);
void RoomObj_ConstructSe(void *self);
void RoomObj_DestructSe(void *self);
void RoomObj_PlaySe(void *self, s32 v);
void RoomObj_DeactivateSe(void *self);
void RoomObj_SetSePos(void *self, void *v);
void RoomObj_ActivateSe(void *self);
}

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)






class BarberPole : public RoomObjActor {
public:
    BarberPole();
    virtual ~BarberPole();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
};

extern "C" {
extern u32 gBgHeap;
s32 RoomObjRes_GetBca(void *, u32);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, u32);
s32 _ZN14BlendAnimModel8initAnimEiiitt(void *, u32, u32, u32, u32, u32);
s32 _ZN9AnimModel10attachAnimEv(void *);
s32 _ZN9AnimModel12drawAnimatedEPv(void *, u32);
s32 _ZN9AnimModel8stepAnimEv(void *);
}

extern "C" BarberPole *BarberPole_Create();
extern "C" Unk_ov004_Scene_Entry sBarberPoleProfile = {(void *(*)())BarberPole_Create, 0x16, 0x1a, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" BarberPole *BarberPole_Create() {
    return new BarberPole();
}

BarberPole::BarberPole() {}

BarberPole::~BarberPole() {}

BOOL BarberPole::vfunc_00() {
    loadResourcesByName("obj_b_pole");
    if (RoomObjRes_GetBca((u8 *)this + 0x1a4, 0) != 0) {
        if (_ZN9AnimModel11allocAnmObjEPv((u8 *)this + 0xec, gBgHeap) != 0) {
            _ZN14BlendAnimModel8initAnimEiiitt((u8 *)this + 0xec, RoomObjRes_GetBca((u8 *)this + 0x1a4, 0), 0, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv((u8 *)this + 0xec);
        }
    }
    return TRUE;
}

BOOL BarberPole::onExecute() {
    _ZN9AnimModel8stepAnimEv((u8 *)this + 0xec);
    return TRUE;
}

BOOL BarberPole::onDraw() {
    _ZN9AnimModel12drawAnimatedEPv((u8 *)this + 0xec, 0);
    return TRUE;
}

BOOL BarberPole::vfunc_0c() {
    releaseResources();
    return TRUE;
}

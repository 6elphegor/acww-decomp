// mwcc-version: 1.2/base
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "gfx/Unk_02055704.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"

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

// Library base class chain (header GameProc.h rebuilt so that the vtable names the real symbols:
// slot 08 is Character::postCreate(s32), slot 20 takes a u32).
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
    virtual void vfunc_20(u32 a);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};



class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)

class CachedModel : public Unk_02055704 {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 unk_98;
};


class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *anmObj;

    s32 attachAnim();
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
    // declared in BlendAnimModel in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

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
class RoomObjRes {
public:
    RoomObjRes();
    ~RoomObjRes();
    void clear();
    inline s32 RoomObjRes_GetBca(u32 i) { return ::RoomObjRes_GetBca(this, i); }
    inline void RoomObjRes_Free() { ::RoomObjRes_Free(this); }
    inline void RoomObjRes_Load(const char *s) { ::RoomObjRes_Load(this, s); }
    inline void *RoomObjRes_GetModel() { return ::RoomObjRes_GetModel(this); }

    u32 archive;
    u32 model;
    u32 bcas[13];
    u32 bmas[13];
    u32 btas[13];
};

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    u32 texture;
    u8 syncState;
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    u32 emitter[0x10];
};

class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xec */ AnimModel model;
    /* 0x1a4 */ RoomObjRes res;
    /* 0x248 */ RoomObjTex tex;
    /* 0x250 */ RoomObjSe se;
};



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

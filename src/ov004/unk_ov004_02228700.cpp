// mwcc-version: 1.2/base
#include "types.h"

// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor8vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::vfunc_60(u32)   64 M::vfunc_64(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN12RoomObjActorC2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (RoomObjRes: real C1/D1 methods), unk_248 (RoomObjTex) and unk_250
//    (RoomObjSe) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (RoomObj_DestructSe / RoomObjTex_Destruct), so LightLevel and Cf4 have no destructor here.
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

struct Unk_ov004_02224ee4_Vec {
    s32 x, y, z;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
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
    /* 0x5c */ s32 unk_5c[3];
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

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)
class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u8 pad_04[0x94];
};

class CachedModel : public Unk_02055704 {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 unk_98;
};

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;

    s32 isFinished();
    s32 hasPassedFrame(s32 a);
};

class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *unk_b4;

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

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    u32 unk_00;
    u8 unk_04;
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    u32 unk_00[0x10];
};

class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xec */ AnimModel unk_ec;
    /* 0x1a4 */ RoomObjRes unk_1a4;
    /* 0x248 */ RoomObjTex unk_248;
    /* 0x250 */ RoomObjSe unk_250;
};


struct Unk_ov004_022288c0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// 3x4 matrix (48 bytes)
struct Unk_ov004_02228a40_Mtx {
    u32 v[12];
};

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

// the global object at 0x02250f6c: constructed / registered by the unit's __sinit (ctor and dtor are two 2-byte stubs in main)
struct Unk_ov004_02250f6c_Obj {
    Unk_ov004_02250f6c_Obj();
    ~Unk_ov004_02250f6c_Obj();
    u8 pad_00[0x2c4];
};

class SewingMachine : public RoomObjActor {
public:
    SewingMachine();
    virtual ~SewingMachine();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_60(u32 idx);

    void updateState03();
    BOOL enterState03();
    void updateState02();
    BOOL enterState02();
    void updateState01();
    BOOL enterState01();
    void updateState00();
    BOOL enterState00();
    void updateState();

    /* 0x290 */ u32 unk_290[0x2e];  // a AnimModel (ctor C1 / dtor D1 by hand)
    /* 0x348 */ u32 unk_348[0x29];  // a RoomObjRes (C1 / D1 by hand)
    /* 0x3ec */ u32 unk_3ec;        // helper with plain ctor/dtor functions 02224d60 / 02224d5c
    /* 0x3f0 */ u8 unk_3f0[0x28];   // a MatTexVramTask (C1 by hand)
    /* 0x418 */ u32 unk_418[0xa];   // a ModelAnim (C1 / D1 by hand)
};

#define F(T, off) (*(T *)((u8 *)this + off))
#define G(T, off) (*(T *)((u8 *)g + off))

extern "C" {
extern void *gBgHeap;
extern Unk_ov004_02228a40_Mtx data_021f47e0;
extern SewingMachine *sSewingMachine;
void RoomObjTex_Construct(void *);
void RoomObjTex_Destruct(void *);
void RoomObjRes_Free(void *);
void RoomObjTex_Reset(void *);
s32 RoomObjRes_GetBca(void *, u32);
s32 RoomObjRes_GetBta(void *, u32);
void RoomObj_PlaySeHeld(void *, u32);
s32 _ZN9AnimModel12drawAnimatedEPv(void *, u32);
s32 _ZN9AnimModel8stepAnimEv(void *);
s32 _ZN13AnimFrameCtrl4stepEv(void *);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *, void *, u32);
s32 NNS_G3dBindMdlTex(void *, u32);
s32 NNS_G3dBindMdlPltt(void *, u32);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, void *);
s32 _ZN14BlendAnimModel8initAnimEiiitt(void *, u32, u32, u32, u32, u32);
s32 _ZN9AnimModel10attachAnimEv(void *);
s32 _ZN9ModelAnim11allocMatAnmEjPv(void *, u32, void *);
s32 _ZN9ModelAnim4initEiiit(void *, u32, u32, u32, u32);
void *_ZN5Model12getRenderObjEv(void *);
s32 _ZN9ModelAnim14addToRenderObjEj(void *, void *);
void _ZN22DateSeededRandomSourceC2Ev(void *);
void _ZN22DateSeededRandomSourceD2Ev(void *);
void _ZN12ItemPickSpec3setEii(void *, s32, s32);
void func_02063388(void *);
void ItemPick_One(u16 *out, void *p, u32 a, void *q, u32 b, u32 c, u32 d);
s32 ClothTex_LoadItem(void *p, void *q, u32 a);
void *ClothTex_GetTex(void *p);
s32 _ZN14MatTexVramTask7requestEPvjS0_jj(void *p, u32 a, const char *b, void *c, u32 d, u32 e);
s32 func_02063a9c(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020e77cc(s32 a, s32 b, s32 c);
BOOL MenuCtrl_IsMenuOpen();
void _ZN9AnimModelC1Ev(void *);
void _ZN9AnimModelD1Ev(void *);
void _ZN10RoomObjResC1Ev(void *);
void _ZN10RoomObjResD1Ev(void *);
void _ZN14MatTexVramTaskC1Ev(void *);
void _ZN9ModelAnimC1Ev(void *);
void _ZN9ModelAnimD1Ev(void *);
SewingMachine *SewingMachine_Create();
}

typedef void (SewingMachine::*Unk_ov004_022288c0_Fn)();
typedef BOOL (SewingMachine::*Unk_ov004_0222894c_Fn)();

// ---------------------------------------------------------------- data
extern "C" Unk_ov004_Scene_Entry sSewingMachineProfile = {(void *(*)())SewingMachine_Create, 0x78, 0x15, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" SewingMachine *sSewingMachine = 0;
Unk_ov004_02250f6c_Obj sSewingMachineCloth;

extern "C" SewingMachine *SewingMachine_Create() {
    return new SewingMachine();
}

SewingMachine::SewingMachine() {
    _ZN9AnimModelC1Ev(unk_290);
    _ZN10RoomObjResC1Ev(unk_348);
    RoomObjTex_Construct(&unk_3ec);
    _ZN14MatTexVramTaskC1Ev(unk_3f0);
    _ZN9ModelAnimC1Ev(unk_418);
}

SewingMachine::~SewingMachine() {
    _ZN9ModelAnimD1Ev(unk_418);
    RoomObjTex_Destruct(&unk_3ec);
    _ZN10RoomObjResD1Ev(unk_348);
    _ZN9AnimModelD1Ev(unk_290);
}

BOOL SewingMachine::vfunc_00() {
    sSewingMachine = this;
    loadResources("/roomObj/obj_tailor1.arc", "/roomObj/obj_tailor1.nsbtx");
    RoomObjRes_Load(unk_348, "/roomObj/obj_tailor2.arc");
    RoomObjTex_Load(&unk_3ec, "/roomObj/obj_tailor2.nsbtx");
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(unk_290, RoomObjRes_GetModel(unk_348), 0);
    {
        void *a = RoomObjRes_GetModel(unk_348);
        NNS_G3dBindMdlTex(a, RoomObjTex_Get(&unk_3ec));
    }
    {
        void *a = RoomObjRes_GetModel(unk_348);
        NNS_G3dBindMdlPltt(a, RoomObjTex_Get(&unk_3ec));
    }
    if (RoomObjRes_GetBca(&unk_1a4, 0) && _ZN9AnimModel11allocAnmObjEPv(&unk_ec, gBgHeap)) {
        _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, RoomObjRes_GetBca(&unk_1a4, 0), 0, 0x1000, 0, 0);
        _ZN9AnimModel10attachAnimEv(&unk_ec);
        F(u32, 0x198) = 0;
    }
    if (_ZN9ModelAnim11allocMatAnmEjPv(unk_418, F(u32, 0x148), gBgHeap)) {
        _ZN9ModelAnim4initEiiit(unk_418, RoomObjRes_GetBta(&unk_1a4, 0), 0, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(unk_418, _ZN5Model12getRenderObjEv(&unk_ec));
        F(u32, 0x428) = 0;
    }
    if (RoomObjRes_GetBca(unk_348, 0) && _ZN9AnimModel11allocAnmObjEPv(unk_290, gBgHeap)) {
        _ZN14BlendAnimModel8initAnimEiiitt(unk_290, RoomObjRes_GetBca(unk_348, 0), 0, 0x1000, 0, 0);
        _ZN9AnimModel10attachAnimEv(unk_290);
        F(u32, 0x33c) = 0;
    }
    {
        u32 x[3];
        u32 y[2];
        u16 z;
        _ZN22DateSeededRandomSourceC2Ev(x);
        _ZN12ItemPickSpec3setEii(y, 2, 0);
        ItemPick_One(&z, y, 0, x, 1, 1, 0);
        func_02063388(y);
        ClothTex_LoadItem(&sSewingMachineCloth, &z, 0);
        u32 r5 = F(u32, 0x2ec);
        void *t = ClothTex_GetTex(&sSewingMachineCloth);
        _ZN14MatTexVramTask7requestEPvjS0_jj(unk_3f0, r5, "w", t, 0, 0);
        enterState00();
        _ZN22DateSeededRandomSourceD2Ev(x);
    }
    return TRUE;
}

BOOL SewingMachine::onExecute() {
    _ZN9AnimModel8stepAnimEv(&unk_ec);
    _ZN9AnimModel8stepAnimEv(unk_290);
    _ZN13AnimFrameCtrl4stepEv(unk_418);
    *F(u32 *, 0x430) = F(u32, 0x420);
    func_020e8388(&data_021f47e0, unk_5c[0], unk_5c[1], unk_5c[2]);
    F(Unk_ov004_02228a40_Mtx, 0xec + 0x64) = data_021f47e0;
    F(Unk_ov004_02228a40_Mtx, 0x290 + 0x64) = data_021f47e0;
    updateState();
    return TRUE;
}

BOOL SewingMachine::onDraw() {
    _ZN9AnimModel12drawAnimatedEPv(&unk_ec, 0);
    _ZN9AnimModel12drawAnimatedEPv(unk_290, 0);
    return TRUE;
}

BOOL SewingMachine::vfunc_0c() {
    releaseResources();
    RoomObjRes_Free(unk_348);
    RoomObjTex_Reset(&unk_3ec);
    sSewingMachine = 0;
    return TRUE;
}

BOOL SewingMachine::vfunc_60(u32 idx) {
    static Unk_ov004_0222894c_Fn tbl[4] = {
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState00,
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState01,
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState02,
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_248.unk_04 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void SewingMachine::updateState() {
    static Unk_ov004_022288c0_Fn tbl[4] = {
        &SewingMachine::updateState00,
        &SewingMachine::updateState01,
        &SewingMachine::updateState02,
        &SewingMachine::updateState03,
    };
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL SewingMachine::enterState00() {
    return TRUE;
}

void SewingMachine::updateState00() {}

BOOL SewingMachine::enterState01() {
    F(s32, 0x33c) = 0x1000;
    F(s32, 0x43c) = 0;
    return TRUE;
}

void SewingMachine::updateState01() {
    F(s32, 0x198) = 0x1000;
    F(s32, 0x428) = 0x1000;
    vfunc_60(2);
}

BOOL SewingMachine::enterState02() {
    return TRUE;
}

void SewingMachine::updateState02() {
    s32 t = ((Unk_ov004_022288c0_Bits *)((u8 *)this + 0x334))->mid;
    u32 q = (u16)(t / 0x38);
    if (func_020e77cc((u16)(t - q * 0x38), 0x11, 0x34)) {
        if (!MenuCtrl_IsMenuOpen()) {
            RoomObj_PlaySeHeld(&unk_250, 0x85e);
        }
    }
}

BOOL SewingMachine::enterState03() {
    F(s32, 0x33c) = 0;
    F(s32, 0x43c) = 0;
    return TRUE;
}

void SewingMachine::updateState03() {
    s32 r = 0x1000 - func_02063a9c(F(s32, 0x43c), 0, 0x28000, 0xa000, 0xa000);
    F(s32, 0x198) = r;
    F(s32, 0x428) = r;
    F(s32, 0x43c) += 0x1000;
    if (r == 0) {
        vfunc_60(0);
    }
}

extern "C" BOOL SewingMachine_Start() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        return g->vfunc_60(1);
    }
    return 0;
}

extern "C" BOOL SewingMachine_Stop() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        return g->vfunc_60(3);
    }
    return 0;
}

extern "C" BOOL SewingMachine_IsStopped() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        u32 t = g->unk_248.unk_04;
        if (t == 3 || t == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void SewingMachine_SetFrame(u32 x) {
    SewingMachine *g = sSewingMachine;
    if (g) {
        G(u32, 0x334) = x << 12;
    }
}

extern "C" u32 SewingMachine_GetFrame() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        return ((Unk_ov004_022288c0_Bits *)((u8 *)g + 0x334))->mid;
    }
    return 0;
}

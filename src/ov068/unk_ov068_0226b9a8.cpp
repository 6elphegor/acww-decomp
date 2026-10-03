// mwcc-version: 1.2/base
#include "types.h"
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_replace _ZN9ModelAnim7replaceEiiiit
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define G3dResAccess_findMatIdx _ZN12G3dResAccess10findMatIdxEi
#define BlendAnimModel_getAnmRes _ZN14BlendAnimModel9getAnmResEv
#define func_ov045_02258e34 _ZN22KatrinaEncodedString168vfunc_0cEv

// shared_0224d4e8.h.txt -- final declaration of class Unk_ov004_0224d4e8 (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN18Unk_ov004_0224d4e88vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::vfunc_60(u32)   64 M::vfunc_64(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN18Unk_ov004_0224d4e8C2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (Unk_ov004_02224ee4: real C1/D1 methods), unk_248 (Unk_ov004_02224d60) and unk_250
//    (Unk_ov004_02224cf4) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (func_ov004_02224ce4 / func_ov004_02224d5c), so LightLevel and Cf4 have no destructor here.
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
    s32 AnimFrameCtrl_hasPassedFrame(s32 a);
};

class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *unk_b4;

    s32 AnimModel_attachAnim();
    s32 AnimModel_drawAnimated(void *q);
    void AnimModel_stepAnim();
    BOOL AnimModel_allocAnmObj(void *x);
    // declared in BlendAnimModel in src/main, but it is called on this object
    void BlendAnimModel_initAnim(s32 a, s32 b, s32 c, u16 d, u16 e);
};

extern "C" {
s32 func_ov004_02224d8c(void *self, u32 i);
void func_ov004_02224d9c(void *self);
void func_ov004_02224dbc(void *self, const char *s);
void *func_ov004_02224d68(void *self);
void func_ov004_02224d60(void *self);
void func_ov004_02224d5c(void *self);
void func_ov004_02224d08(void *self);
void func_ov004_02224d10(void *self, const char *s);
u32 func_ov004_02224d04(void *self);
void func_ov004_02224cf4(void *self);
void func_ov004_02224ce4(void *self);
void func_ov004_02224ca4(void *self, s32 v);
void func_ov004_02224cb8(void *self);
void func_ov004_02224cc0(void *self, void *v);
void func_ov004_02224cdc(void *self);
}

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class Unk_ov004_02224ee4 {
public:
    Unk_ov004_02224ee4();
    ~Unk_ov004_02224ee4();
    void func_ov004_02224ee4();
    inline s32 func_ov004_02224d8c(u32 i) { return ::func_ov004_02224d8c(this, i); }
    inline void func_ov004_02224d9c() { ::func_ov004_02224d9c(this); }
    inline void func_ov004_02224dbc(const char *s) { ::func_ov004_02224dbc(this, s); }
    inline void *func_ov004_02224d68() { return ::func_ov004_02224d68(this); }

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class Unk_ov004_02224d60_B {
public:
    inline Unk_ov004_02224d60_B() { func_ov004_02224d60(this); }
    inline void func_ov004_02224d08() { ::func_ov004_02224d08(this); }
    inline void func_ov004_02224d10(const char *s) { ::func_ov004_02224d10(this, s); }
    inline u32 func_ov004_02224d04() { return ::func_ov004_02224d04(this); }

    u32 unk_00;
    u8 unk_04;
};

class Unk_ov004_02224cf4 {
public:
    inline Unk_ov004_02224cf4() { func_ov004_02224cf4(this); }
    inline void func_ov004_02224ca4(s32 v) { ::func_ov004_02224ca4(this, v); }
    inline void func_ov004_02224cb8() { ::func_ov004_02224cb8(this); }
    inline void func_ov004_02224cc0(Unk_ov004_02224ee4_Vec *v) { ::func_ov004_02224cc0(this, v); }
    inline void func_ov004_02224cdc() { ::func_ov004_02224cdc(this); }

    u32 unk_00[0x10];
};

class Unk_ov004_0224d4e8 : public Character {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_02224f58(u32 v);
    s32 func_ov004_02224f20();
    s32 func_ov004_02224f3c();
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *name);
    void func_ov004_02224fc8(char *a, char *b);

    /* 0xec */ AnimModel unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60_B unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};

struct Unk_ov068_022702b4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

union Unk_ov068_022702b4_Word {
    u32 v;
    Unk_ov068_022702b4_Bits b;
};

// Member object types, named after their constructors.
struct ModelAnim {
    ModelAnim();
    ~ModelAnim();
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ Unk_ov068_022702b4_Word unk_08;
    /* 0x0c */ u8 pad_0c[0xc];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};
struct Unk_ov004_02224d60 {
    inline Unk_ov004_02224d60() { func_ov004_02224d60(this); }
    inline ~Unk_ov004_02224d60() { func_ov004_02224d5c(this); }
    u32 unk_00;
};

class TaxiInterior;

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

extern "C" TaxiInterior *sTaxiInterior;
extern "C" Unk_ov068_Scene_Entry sTaxiInteriorProfile;

struct Unk_ov068_0226c298_Arg;
typedef void (*Unk_ov068_0226c298_Fn)(Unk_ov068_0226c298_Arg *);
struct Unk_ov068_0226c298_Arg {
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ Unk_ov068_0226c298_Fn unk_1c;
    /* 0x20 */ u8 pad_20[0x70];
    /* 0x90 */ u8 unk_90;
};

struct Unk_ov068_0226c2a8_Inner {
    u8 pad_00;
    u8 unk_01;
};
struct Unk_ov068_0226c2a8_Owner {
    u8 pad_00[0x2c];
    void *unk_2c;
};
struct Unk_ov068_0226c2a8_Arg {
    Unk_ov068_0226c2a8_Inner *unk_00;
    Unk_ov068_0226c2a8_Owner *unk_04;
};

extern "C" {
extern void *gBgHeap;
BOOL AnimFrameCtrl_hasPassedFrame(void *p, u32 i);
void Snd_PlaySe(u32 a);
void func_02004008(u32 a);
void Snd_StopSe(u32 a, u32 b);
void *func_ov004_02224d7c(void *p, u32 i);
void *func_ov004_02224d6c(void *p, u32 i);
void func_ov004_02224ff4(char *s, void *a, void *b, void *c);
void func_ov004_02224f7c(void *a, void *b);
void BlendAnimModel_initAnim(void *p, void *q, s32 a, s32 b, s32 c, s32 d);
void AnimModel_attachAnim(void *p);
BOOL AnimModel_allocAnmObj(void *p, void *q);
void *Model_getRenderObj(void *p);
void ModelAnim_replace(void *p, void *a, void *b, s32 c, s32 d, s32 e);
BOOL ModelAnim_allocMatAnm(void *p, u32 a, void *q);
void ModelAnim_init(void *p, void *q, s32 a, s32 b, s32 c);
void ModelAnim_addToRenderObj(void *p, void *q);
void AnimModel_drawAnimated(void *p, u32 a);
void AnimModel_stepAnim(void *p);
void AnimFrameCtrl_step(void *p);
s32 func_ov045_02258e34();
s32 func_ov051_02258e50();
void TaxiInterior_SetPartAnim(void *self, u8 k, void *a, void *b, u8 s0, u32 s1, u16 s2, u16 s3);
void func_ov068_0226b9ec(void *p, u32 b, void *c);
void NNS_G3dMdlSetMdlAlpha(u32 p, s32 a, u8 b);
void Model_setInitCallback(void *m, void (*fn)(Unk_ov068_0226c298_Arg *), void *self);
s32 G3dResAccess_findMatIdx(u32 a, const char *s);
}

class TaxiInterior : public Unk_ov004_0224d4e8 {
public:
    TaxiInterior();
    virtual ~TaxiInterior();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void execDry();
    BOOL enterDry();
    void execRainFading();
    BOOL enterRainFading();
    void execRaining();
    BOOL enterRaining();
    void updateRainState();
    BOOL setRainState(s32 s);
    void playBodyAnim(s32 a);
    void loadModels();

    /* 0x290 */ ModelAnim unk_290;
    /* 0x2b0 */ ModelAnim unk_2b0;
    /* 0x2d0 */ AnimModel unk_2d0;
    /* 0x388 */ Unk_ov004_02224ee4 unk_388;
    /* 0x42c */ Unk_ov004_02224d60 unk_42c;
    /* 0x430 */ u8 unk_430;
    /* 0x431 */ u8 pad_431[3];
    /* 0x434 */ AnimModel unk_434;
    /* 0x4ec */ Unk_ov004_02224ee4 unk_4ec;
    /* 0x590 */ Unk_ov004_02224d60 unk_590;
    /* 0x594 */ s32 unk_594;
    /* 0x598 */ u16 unk_598;
    /* 0x59a */ s16 unk_59a;
    /* 0x59c */ s16 unk_59c;
    /* 0x59e */ s16 unk_59e;
    /* 0x5a0 */ s16 unk_5a0;
    /* 0x5a2 */ u16 pad_5a2;
};

extern "C" TaxiInterior *TaxiInterior_Create();
extern "C" Unk_ov068_Scene_Entry sTaxiInteriorProfile = {(void *(*)())TaxiInterior_Create, 0x13, 0x17, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" {
TaxiInterior *sTaxiInterior;
}

extern "C" void TaxiInterior_InitModelCallback(Unk_ov068_0226c298_Arg *p);
extern "C" void TaxiInterior_ModelCallback(Unk_ov068_0226c2a8_Arg *p);

extern "C" {
s32 BlendAnimModel_getAnmRes(void *p);
BOOL TaxiInterior_StartDriverAnim();
}

extern "C" TaxiInterior *TaxiInterior_Create() {
    return new TaxiInterior;
}

extern "C" void TaxiInterior_ModelCallback(Unk_ov068_0226c2a8_Arg *p) {
    void *o = p->unk_04->unk_2c;
    if (o) {
        func_ov068_0226b9ec(o, p->unk_00->unk_01, p);
    }
}

extern "C" void TaxiInterior_InitModelCallback(Unk_ov068_0226c298_Arg *p) {
    p->unk_1c = (Unk_ov068_0226c298_Fn)TaxiInterior_ModelCallback;
    p->unk_90 = 2;
}

TaxiInterior::TaxiInterior() {}

TaxiInterior::~TaxiInterior() {}

BOOL TaxiInterior::vfunc_00() {
    sTaxiInterior = this;
    loadModels();
    Model_setInitCallback(&unk_ec, TaxiInterior_InitModelCallback, this);
    unk_59c = G3dResAccess_findMatIdx((*(u32 *)((u8 *)&unk_ec + 0x5c)), "m_rainA");
    unk_59e = G3dResAccess_findMatIdx((*(u32 *)((u8 *)&unk_ec + 0x5c)), "m_rainB");
    unk_5a0 = G3dResAccess_findMatIdx((*(u32 *)((u8 *)&unk_ec + 0x5c)), "m_splash");
    setRainState(0);
    func_02004008(0x884);
    func_02004008(0x885);
    return TRUE;
}

BOOL TaxiInterior::onExecute() {
    updateRainState();
    AnimFrameCtrl_step(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08.v;
    AnimModel_stepAnim(&unk_ec);
    AnimFrameCtrl_step(&unk_290);
    *unk_290.unk_18 = unk_290.unk_08.v;
    if (unk_430) {
        AnimModel_stepAnim(&unk_2d0);
    }
    s32 t = func_ov045_02258e34();
    func_ov051_02258e50();
    s32 k = 0;
    switch (t) {
    case 0xfb:
        k = 0;
        break;
    case 0x8d:
        k = 1;
        break;
    case 0x8e:
        k = 2;
        break;
    case 0x8f:
        k = 3;
        break;
    case 0x90:
        k = 4;
        break;
    case 0x91:
        k = 5;
        break;
    }
    TaxiInterior_SetPartAnim(this, k, &unk_434, &unk_4ec, 0, 0x1000, 0, 0);
    AnimModel_stepAnim(&unk_434);
    NNS_G3dMdlSetMdlAlpha((*(u32 *)((u8 *)&unk_ec + 0x5c)), unk_59c, unk_59a);
    NNS_G3dMdlSetMdlAlpha((*(u32 *)((u8 *)&unk_ec + 0x5c)), unk_59e, unk_59a);
    NNS_G3dMdlSetMdlAlpha((*(u32 *)((u8 *)&unk_ec + 0x5c)), unk_5a0, unk_59a);
    return TRUE;
}

BOOL TaxiInterior::onDraw() {
    AnimModel_drawAnimated(&unk_ec, 0);
    AnimModel_drawAnimated(&unk_2d0, 0);
    AnimModel_drawAnimated(&unk_434, 0);
    return TRUE;
}

BOOL TaxiInterior::vfunc_0c() {
    sTaxiInterior = 0;
    func_ov004_02224f60();
    func_ov004_02224f7c(&unk_388, &unk_42c);
    func_ov004_02224f7c(&unk_4ec, &unk_590);
    Snd_StopSe(0x884, 1);
    Snd_StopSe(0x885, 1);
    return TRUE;
}

void TaxiInterior::loadModels() {
    func_ov004_02224f90("obj_taxi");
    if ((void *)func_ov004_02224d8c(&unk_1a4, 0)) {
        if (AnimModel_allocAnmObj(&unk_ec, gBgHeap)) {
            BlendAnimModel_initAnim(&unk_ec, (void *)func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
            AnimModel_attachAnim(&unk_ec);
        }
    }
    if (func_ov004_02224d6c(&unk_1a4, 0)) {
        if (ModelAnim_allocMatAnm(&unk_2b0, (*(u32 *)((u8 *)&unk_ec + 0x5c)), gBgHeap)) {
            ModelAnim_init(&unk_2b0, func_ov004_02224d6c(&unk_1a4, 0), 0, 0x1000, 0);
            ModelAnim_addToRenderObj(&unk_2b0, Model_getRenderObj(&unk_ec));
        }
    }
    if (func_ov004_02224d7c(&unk_1a4, 0)) {
        if (ModelAnim_allocMatAnm(&unk_290, (*(u32 *)((u8 *)&unk_ec + 0x5c)), gBgHeap)) {
            ModelAnim_init(&unk_290, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
            ModelAnim_addToRenderObj(&unk_290, Model_getRenderObj(&unk_ec));
        }
    }
    func_ov004_02224ff4("obj_taxi_fig", &unk_2d0, &unk_388, &unk_42c);
    if ((void *)func_ov004_02224d8c(&unk_388, 0)) {
        if (AnimModel_allocAnmObj(&unk_2d0, gBgHeap)) {
            BlendAnimModel_initAnim(&unk_2d0, (void *)func_ov004_02224d8c(&unk_388, 0), 1, 0x1000, 0, 0);
            AnimModel_attachAnim(&unk_2d0);
        }
    }
    func_ov004_02224ff4("obj_taxi_hdl", &unk_434, &unk_4ec, &unk_590);
    if ((void *)func_ov004_02224d8c(&unk_4ec, 0)) {
        if (AnimModel_allocAnmObj(&unk_434, gBgHeap)) {
            BlendAnimModel_initAnim(&unk_434, (void *)func_ov004_02224d8c(&unk_4ec, 0), 0, 0x1000, 0, 0);
            AnimModel_attachAnim(&unk_434);
        }
    }
}

void TaxiInterior::playBodyAnim(s32 a) {
    void *p = (void *)func_ov004_02224d8c(&unk_1a4, 0);
    BlendAnimModel_initAnim(&unk_ec, p, a, 0x1000, ((Unk_ov068_022702b4_Bits *)&unk_ec.unk_a4)->mid, 0);
    void *r6 = Model_getRenderObj(&unk_ec);
    void *q = func_ov004_02224d7c(&unk_1a4, 0);
    ModelAnim_replace(&unk_290, r6, q, a, 0x1000, unk_290.unk_08.b.mid);
}

BOOL TaxiInterior::setRainState(s32 s) {
    static BOOL (TaxiInterior::*tbl[3])() = {
        &TaxiInterior::enterRaining,
        &TaxiInterior::enterRainFading,
        &TaxiInterior::enterDry,
    };
    if (s < 3) {
        if ((this->*tbl[s])()) {
            unk_594 = s;
            return TRUE;
        }
    }
    return FALSE;
}

void TaxiInterior::updateRainState() {
    static void (TaxiInterior::*tbl[3])() = {
        &TaxiInterior::execRaining,
        &TaxiInterior::execRainFading,
        &TaxiInterior::execDry,
    };
    s32 s = unk_594;
    if (s < 3) {
        (this->*tbl[s])();
    }
}

BOOL TaxiInterior::enterRaining() {
    unk_59a = 0x1f;
    playBodyAnim(0);
    return TRUE;
}

void TaxiInterior::execRaining() {
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&unk_ec, 0)) {
        Snd_PlaySe(0x886);
    } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&unk_ec, 0x1c)) {
        Snd_PlaySe(0x887);
    }
}

BOOL TaxiInterior::enterRainFading() {
    playBodyAnim(0);
    return TRUE;
}

void TaxiInterior::execRainFading() {
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&unk_ec, 0)) {
        Snd_PlaySe(0x886);
    } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&unk_ec, 0x1c)) {
        Snd_PlaySe(0x887);
    }
    if (unk_598 % 3 == 0) {
        if (unk_59a >= 0) {
            unk_59a = unk_59a - 1;
            if (unk_59a == 0) {
                setRainState(2);
            }
        }
    }
    unk_598++;
}

BOOL TaxiInterior::enterDry() {
    unk_59a = 0;
    playBodyAnim(1);
    return TRUE;
}

void TaxiInterior::execDry() {}

extern "C" BOOL TaxiInterior_StopRain() {
    TaxiInterior *g = sTaxiInterior;
    if (g) {
        return g->setRainState(1);
    }
    return TRUE;
}

extern "C" BOOL TaxiInterior_StartDriverAnim() {
    TaxiInterior *g = sTaxiInterior;
    if (g) {
        g->unk_430 = 1;
        BlendAnimModel_initAnim(&sTaxiInterior->unk_2d0, (void *)func_ov004_02224d8c(&sTaxiInterior->unk_388, 0), 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov068_0226b9ec(void *p, u32 b, void *c) {
}

extern "C" void TaxiInterior_SetPartAnim(void *self, u8 k, void *sub, void *obj, u8 s0, u32 s1, u16 s2, u16 s3) {
    s32 cur = BlendAnimModel_getAnmRes(sub);
    if (cur != (s32)(void *)func_ov004_02224d8c(obj, k)) {
        BlendAnimModel_initAnim(sub, (void *)func_ov004_02224d8c(obj, k), s0, s1, s2, s3);
    }
}

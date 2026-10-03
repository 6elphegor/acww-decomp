// mwcc-version: 1.2/base
#include "types.h"

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

class Unk_ov004_02224d60 {
public:
    inline Unk_ov004_02224d60() { func_ov004_02224d60(this); }
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
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};


struct Unk_ov004_02228a40_Mtx {
    u32 v[12];
};

// model element (0xb8 bytes), only the members touched from this unit
struct Unk_ov004_0224e034_M {
    u8 pad_00[0x5c];
    u32 unk_5c;
    u8 pad_60[4];
    Unk_ov004_02228a40_Mtx unk_64;
    u8 pad_94[0x9c - 0x94];
    u32 unk_9c;
    s32 unk_a0;
    s32 unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[8];
};

// helper table object (0xa4 bytes)
struct Unk_ov004_0224e034_T1 {
    u8 pad_00[0xa4];
};

struct Unk_ov004_0224e034_T2 {
    u32 unk_00;
};

struct Unk_ov004_0224e034_E {
    u32 pad_00[2];
    u32 unk_08;
    u32 pad_0c;
    u32 unk_10;
    u32 pad_14;
    u32 *unk_18;
    u8 pad_1c[0x20 - 0x1c];
};

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

class Unk_ov004_0224e034 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224e034();
    virtual ~Unk_ov004_0224e034();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void func_02228dcc(s32 i);
    void func_02228e00(s32 i, void *a, void *b);
    void func_02228f00();
    BOOL func_02228f68();
    void func_02228fe8();
    BOOL func_02229004();
    void func_02229070();
    BOOL func_02229098();
    void func_02229118();
    BOOL func_0222911c();
    void func_02229148();
    BOOL func_022291d4(s32 i);
    void func_022292a4();

    /* 0x290 */ Unk_ov004_0224e034_M unk_290[3];
    /* 0x4b8 */ Unk_ov004_0224e034_T1 unk_4b8[3];
    /* 0x6a4 */ Unk_ov004_0224e034_T2 unk_6a4[3];
    /* 0x6b0 */ u8 unk_6b0[3];
    /* 0x6b3 */ u8 pad_6b3;
    /* 0x6b4 */ Unk_ov004_0224e034_E unk_6b4;
    /* 0x6d4 */ u8 unk_6d4;
    /* 0x6d5 */ u8 pad_6d5[3];
    /* 0x6d8 */ s32 unk_6d8;
};

typedef void (Unk_ov004_0224e034::*Unk_ov004_02229148_Fn)();
typedef BOOL (Unk_ov004_0224e034::*Unk_ov004_022291d4_Fn)();

extern "C" {
extern void *gBgHeap;
extern Unk_ov004_02228a40_Mtx data_021f47e0;
extern Unk_ov004_0224e034 *data_ov004_02251230;
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void func_ov004_02224d9c(void *);
void func_ov004_02224d08(void *);
void func_ov004_02224dbc(void *, const char *);
void func_ov004_02224d10(void *, const char *);
void *func_ov004_02224d68(void *);
u32 func_ov004_02224d04(void *);
s32 func_ov004_02224d8c(void *, u32);
s32 func_ov004_02224d6c(void *, u32);
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
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 func_ov045_02258fd8(void);
Unk_ov004_02228a40_Mtx *func_ov045_02258ff0(void);
void *_ZN9AnimModelC1Ev(void *, s32);
void *_ZN9AnimModelD1Ev(void *, s32);
void *_ZN18Unk_ov004_02224ee4C1Ev(void *, s32);
void *_ZN18Unk_ov004_02224ee4D1Ev(void *, s32);
void _ZN9ModelAnimC1Ev(void *);
void _ZN9ModelAnimD1Ev(void *);
Unk_ov004_0224e034 *func_ov004_02229644();
}

#define F(T, off) (*(T *)((u8 *)this + off))

// ---------------------------------------------------------------- data
extern "C" Unk_ov004_Scene_Entry data_ov004_0224e014 = {(void *(*)())func_ov004_02229644, 0x71, 0x1b, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" Unk_ov004_0224e034 *data_ov004_02251230 = 0;

extern "C" Unk_ov004_0224e034 *func_ov004_02229644() {
    return new Unk_ov004_0224e034();
}

Unk_ov004_0224e034::Unk_ov004_0224e034() {
    __cxa_vec_ctor(unk_290, 3, 0xb8, (void *(*)(void *))_ZN9AnimModelC1Ev, _ZN9AnimModelD1Ev);
    __cxa_vec_ctor(unk_4b8, 3, 0xa4, (void *(*)(void *))_ZN18Unk_ov004_02224ee4C1Ev, _ZN18Unk_ov004_02224ee4D1Ev);
    __cxa_vec_ctor(unk_6a4, 3, 4, (void *(*)(void *))func_ov004_02224d60, (void *(*)(void *, s32))func_ov004_02224d5c);
    _ZN9ModelAnimC1Ev(&unk_6b4);
}

Unk_ov004_0224e034::~Unk_ov004_0224e034() {
    _ZN9ModelAnimD1Ev(&unk_6b4);
    __cxa_vec_cleanup(unk_6a4, 3, 4, (void *(*)(void *, s32))func_ov004_02224d5c);
    __cxa_vec_cleanup(unk_4b8, 3, 0xa4, _ZN18Unk_ov004_02224ee4D1Ev);
    __cxa_vec_cleanup(unk_290, 3, 0xb8, _ZN9AnimModelD1Ev);
}

BOOL Unk_ov004_0224e034::vfunc_00() {
    data_ov004_02251230 = this;
    func_ov004_02224fc8("/roomObj/obj_tarot1.arc", "/roomObj/obj_tarot1.nsbtx");
    func_02228e00(0, (void *)"/roomObj/obj_tarot2.arc", (void *)"/roomObj/obj_tarot2.nsbtx");
    func_02228e00(1, (void *)"/roomObj/obj_tarot3.arc", (void *)"/roomObj/obj_tarot3.nsbtx");
    func_02228e00(2, (void *)"/roomObj/obj_tarot4.arc", (void *)"/roomObj/obj_tarot4.nsbtx");
    if (func_ov004_02224d8c(&unk_4b8[2], 0)) {
        if (_ZN9AnimModel11allocAnmObjEPv(&unk_290[2], gBgHeap)) {
            _ZN14BlendAnimModel8initAnimEiiitt(&unk_290[2], func_ov004_02224d8c(&unk_4b8[2], 0), 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv(&unk_290[2]);
            unk_290[2].unk_ac = 0;
        }
    }
    if (_ZN9ModelAnim11allocMatAnmEjPv(&unk_6b4, unk_290[1].unk_5c, gBgHeap)) {
        _ZN9ModelAnim4initEiiit(&unk_6b4, func_ov004_02224d6c(&unk_4b8[1], 0), 1, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&unk_6b4, _ZN5Model12getRenderObjEv(&unk_290[1]));
        unk_6b4.unk_10 = 0;
    }
    func_022291d4(0);
    return TRUE;
}

BOOL Unk_ov004_0224e034::onExecute() {
    _ZN9AnimModel8stepAnimEv(&unk_290[2]);
    _ZN13AnimFrameCtrl4stepEv(&unk_6b4);
    *unk_6b4.unk_18 = unk_6b4.unk_08;
    func_020e8388(&data_021f47e0, unk_5c[0], unk_5c[1], unk_5c[2]);
    unk_290[1].unk_64 = data_021f47e0;
    unk_290[2].unk_64 = data_021f47e0;
    func_02229148();
    return TRUE;
}

BOOL Unk_ov004_0224e034::onDraw() {
    return TRUE;
}

void Unk_ov004_0224e034::func_022292a4() {
    Unk_ov004_02228a40_Mtx *m = func_ov045_02258ff0();
    u8 i;
    data_021f47e0 = *m;
    F(Unk_ov004_02228a40_Mtx, 0xec + 0x64) = data_021f47e0;
    unk_290[0].unk_64 = data_021f47e0;
    if (unk_6d4) {
        _ZN9AnimModel12drawAnimatedEPv(&unk_ec, 0);
    }
    for (i = 0; i < 3; i++) {
        if (unk_6b0[i]) {
            _ZN9AnimModel12drawAnimatedEPv(&unk_290[i], 0);
        }
    }
}

BOOL Unk_ov004_0224e034::vfunc_0c() {
    func_ov004_02224f60();
    func_02228dcc(0);
    func_02228dcc(1);
    func_02228dcc(2);
    data_ov004_02251230 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224e034::func_022291d4(s32 i) {
    static Unk_ov004_022291d4_Fn tbl[4] = {&Unk_ov004_0224e034::func_0222911c, &Unk_ov004_0224e034::func_02229098,
                                           &Unk_ov004_0224e034::func_02229004, &Unk_ov004_0224e034::func_02228f68};
    if (i < 4) {
        if ((this->*tbl[i])()) {
            unk_6d8 = i;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224e034::func_02229148() {
    static Unk_ov004_02229148_Fn tbl[4] = {&Unk_ov004_0224e034::func_02229118, &Unk_ov004_0224e034::func_02229070,
                                           &Unk_ov004_0224e034::func_02228fe8, &Unk_ov004_0224e034::func_02228f00};
    if (unk_6d8 < 4) {
        (this->*tbl[unk_6d8])();
    }
}

BOOL Unk_ov004_0224e034::func_0222911c() {
    u8 i;
    unk_6d4 = 0;
    for (i = 0; i < 3; i++) {
        unk_6b0[i] = 0;
    }
    return TRUE;
}

void Unk_ov004_0224e034::func_02229118() {}

BOOL Unk_ov004_0224e034::func_02229098() {
    unk_6d4 = 1;
    unk_6b0[0] = 0;
    unk_6b0[1] = 1;
    unk_6b0[2] = 0;
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_290[2], func_ov004_02224d8c(&unk_4b8[2], 0), 1, 0x1000, 0, 0);
    _ZN9ModelAnim4initEiiit(&unk_6b4, func_ov004_02224d6c(&unk_4b8[1], 0), 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224e034::func_02229070() {
    if (func_ov045_02258fd8() == 0xb) {
        unk_6d4 = 0;
        unk_6b0[2] = 1;
    }
}

BOOL Unk_ov004_0224e034::func_02229004() {
    unk_6d4 = 0;
    unk_6b0[0] = 0;
    unk_6b0[1] = 1;
    unk_6b0[2] = 1;
    unk_290[2].unk_a4 = (u32)(unk_290[2].unk_a0 >> 12) << 16 >> 4;
    unk_290[2].unk_ac = 0;
    unk_6b4.unk_08 = (u32)(*(s32 *)&F(u32, 0x6b8) >> 12) << 16 >> 4;
    unk_6b4.unk_10 = 0;
    return TRUE;
}

void Unk_ov004_0224e034::func_02228fe8() {
    if (func_ov045_02258fd8() == 9) {
        unk_6b0[0] = 1;
    }
}

BOOL Unk_ov004_0224e034::func_02228f68() {
    unk_6d4 = 0;
    unk_6b0[0] = 1;
    unk_6b0[1] = 1;
    unk_6b0[2] = 1;
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_290[2], func_ov004_02224d8c(&unk_4b8[2], 1), 1, 0x1000, 0, 0);
    _ZN9ModelAnim4initEiiit(&unk_6b4, func_ov004_02224d6c(&unk_4b8[1], 1), 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224e034::func_02228f00() {
    if (func_ov045_02258fd8() == 7) {
        unk_6b0[0] = 0;
    }
    if (func_ov045_02258fd8() == 0x12) {
        unk_6b0[2] = 0;
    }
    if (func_ov045_02258fd8() == 0x13) {
        unk_6d4 = 1;
    }
    if (func_ov045_02258fd8() == 0x25) {
        unk_6d4 = 0;
    }
    if (_ZN13AnimFrameCtrl10isFinishedEv(&unk_290[2].unk_9c)) {
        func_022291d4(0);
    }
}

extern "C" BOOL func_ov004_02228ee0() {
    if (data_ov004_02251230) {
        return data_ov004_02251230->func_022291d4(1);
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02228ec0() {
    if (data_ov004_02251230) {
        return data_ov004_02251230->func_022291d4(2);
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02228ea0() {
    if (data_ov004_02251230) {
        return data_ov004_02251230->func_022291d4(3);
    }
    return FALSE;
}

extern "C" void func_ov004_02228e84() {
    if (data_ov004_02251230) {
        data_ov004_02251230->func_022292a4();
    }
}

void Unk_ov004_0224e034::func_02228e00(s32 i, void *a, void *b) {
    Unk_ov004_0224e034_T1 *t1 = &unk_4b8[i];
    func_ov004_02224dbc(t1, (const char *)a);
    Unk_ov004_0224e034_T2 *t2 = &unk_6a4[i];
    func_ov004_02224d10(t2, (const char *)b);
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(&unk_290[i], func_ov004_02224d68(t1), 0);
    {
        void *x = func_ov004_02224d68(t1);
        NNS_G3dBindMdlTex(x, func_ov004_02224d04(t2));
    }
    {
        void *x = func_ov004_02224d68(t1);
        NNS_G3dBindMdlPltt(x, func_ov004_02224d04(t2));
    }
}

void Unk_ov004_0224e034::func_02228dcc(s32 i) {
    func_ov004_02224d9c(&unk_4b8[i]);
    func_ov004_02224d08(&unk_6a4[i]);
}

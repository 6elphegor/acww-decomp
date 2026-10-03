// mwcc-version: 1.2/base
#include "types.h"

// Library base class (as include/GameProc.h, but vfunc_20 takes the u32 that ov004's override uses)
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

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
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

class Unk_020dbd54 : public Unk_020dbd34, public AnimFrameCtrl {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    void *unk_b4;

    s32 func_02054710();
    s32 func_020547cc(void *q);
    void func_020547e4();
    BOOL func_02054800(void *x);
    // declared in Unk_0205454c in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class Unk_ov004_02224ee4 {
public:
    Unk_ov004_02224ee4();
    ~Unk_ov004_02224ee4();
    void func_ov004_02224ee4();
    s32 func_ov004_02224d8c(u32 i);
    void func_ov004_02224d9c();
    void func_ov004_02224dbc(const char *s);
    void *func_ov004_02224d68();

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class Unk_ov004_02224d60 {
public:
    Unk_ov004_02224d60();
    ~Unk_ov004_02224d60();
    void func_ov004_02224d08();
    void func_ov004_02224d10(const char *s);
    u32 func_ov004_02224d04();

    u32 unk_00;
    u8 unk_04;
};

class Unk_ov004_02224cf4 {
public:
    Unk_ov004_02224cf4();
    ~Unk_ov004_02224cf4();
    void func_ov004_02224ca4(s32 v);
    void func_ov004_02224cb8();
    void func_ov004_02224cc0(Unk_ov004_02224ee4_Vec *v);
    void func_ov004_02224cdc();

    u32 unk_00[0x10];
};

class Unk_ov004_0224d4e8 : public Character {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_02224f58(u32 v);
    s32 func_ov004_02224f20();
    s32 func_ov004_02224f3c();
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *name);
    void func_ov004_02224fc8(char *a, char *b);
    virtual void vfunc_20(u32 a);

    /* 0xec */ Unk_020dbd54 unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};

struct Unk_ov004_02225cf4_Q {
    u32 pad_00;
    u32 unk_04;
    u32 pad_08;
    u32 unk_0c;
};

struct Unk_ov004_02225cf4_P {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[0xb0 - 0xc];
    Unk_ov004_02225cf4_Q *unk_b0;
};

struct Unk_ov004_02225c6c_V3 {
    s32 x, y, z;
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

struct Unk_ov004_02226458_Obj {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x14];
    void (*unk_1c)(void *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
};

struct Unk_ov004_02226468_Sub {
    u8 pad_00[0x2c];
    u32 unk_2c;
};
struct Unk_ov004_02226468_Ctx {
    u8 unk_00[2];
    u8 pad_02[2];
};
struct Unk_ov004_02226468_Obj {
    Unk_ov004_02226468_Ctx *unk_00;
    Unk_ov004_02226468_Sub *unk_04;
};

// a 4-byte colour record whose constructor is inline (the __sinit of this unit initialises six of them)
struct Unk_ov004_Rgba {
    u8 unk_00, unk_01, unk_02, unk_03;
    Unk_ov004_Rgba(u8 a, u8 b, u8 c, u8 d) {
        unk_00 = a;
        unk_01 = b;
        unk_02 = c;
        unk_03 = d;
    }
};

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

class ModelAnim {
public:
    ModelAnim();
    ~ModelAnim();
    u8 unk_00[0x2c];
};

class Unk_ov004_0224d80c : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224d80c();
    virtual ~Unk_ov004_0224d80c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_60(u32 a);

    void func_ov004_022257e4();
    BOOL func_ov004_02225870();
    void func_ov004_022258e0();
    BOOL func_ov004_02225924();
    void func_ov004_02225984();
    BOOL func_ov004_02225a14();
    void func_ov004_02225a84();
    BOOL func_ov004_02225abc();
    void func_ov004_02225b1c();
    void func_ov004_02225c48();
    void func_ov004_02225c6c();
    void func_ov004_02225cd4(s32 a);
    void func_ov004_02225ce8();
    void func_ov004_02225cf4(u32 a, Unk_ov004_02225cf4_P *p);
    BOOL func_ov004_02225f10();
    BOOL func_ov004_02225f88();
    void func_ov004_02225fec();
    BOOL func_ov004_02226064();

    /* 0x290 */ ModelAnim unk_290; // fields at 0x298 (u32), 0x2a8 (u32 *), 0x2b0/0x2b4/0x2b8 (u32) are read through F()
    /* 0x2bc */ u32 unk_2bc[0x27];    // a Unk_020d8cf4 (ctor/dtor by hand: the original destroys it with D2)
    /* 0x358 */ u32 unk_358[0x27];
    /* 0x3f4 */ u32 unk_3f4[0x27];
    /* 0x490 */ u8 pad_490[8];
};

typedef Unk_ov004_0224d80c Cls;
typedef void (Cls::*Fn1)();
typedef BOOL (Cls::*Fn2)();
#define F(T, off) (*(T *)((u8 *)this + off))

extern "C" {
extern u32 data_021c620c;
extern void *data_020cbb18;

s32 func_ov004_02224d8c(void *, u32);
s32 func_ov004_02224d7c(void *, u32);
u8 *func_ov004_02224d68(void *);
u32 func_ov004_02224d04(void *);
void func_ov004_02224d08(void *);
void func_ov004_02224d9c(void *);
s32 func_ov004_02224dbc(void *, const char *);
void func_ov004_02225f04(Cls *c);
s32 func_ov004_02224d10(void *, const char *);

void _ZN12Unk_0205454c13func_02054720Eiiitt(void *, s32, s32, s32, u16, u16);
void *_ZN5Model12getRenderObjEv(void *);
void _ZN9ModelAnim13func_02055b00Eiiiit(void *, s32, s32, s32, s32, u16);
void _ZN9ModelAnim13func_02055b38Eiiit(void *, s32, s32, s32, s32);
void _ZN9ModelAnim14addToRenderObjEj(void *, void *);
BOOL _ZN9ModelAnim13func_02055bccEjPv(void *, u32, u32);
void Snd_PlaySe(u32);
void _ZN12Unk_020dbd5413func_020547e4Ev(void *);
void _ZN13AnimFrameCtrl4stepEv(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
void func_020e7820(s32 *, s32, s32, s32);
s32 _ZN12Unk_020dbd5413func_02054800EPv(void *, u32);
void _ZN12Unk_020dbd5413func_02054710Ev(void *);
void _ZN12Unk_020dbd5413func_020547ccEPv(void *, s32);
s32 _ZN12Unk_02056fd813func_02057110Ei(void *, u32);
s32 func_020318cc(void *);
s32 func_02031908(void *, s32, s32, s32, void *, s32, s32);
void func_0209cf18(u8 *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_020b50e8(void);
void NNS_G3dBindMdlTex(void *, void *);
void NNS_G3dBindMdlPltt(void *, void *);
void *func_02036c58(void);
void *_ZN12Unk_02036cec13func_02036ce0Ev(void *);
s32 func_020850e0(void);
s32 func_02085180(s32);
s32 _ZN12Unk_02086ef013func_02086efcEv(s32);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *, u32);
void _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *, void *, s32);
void _ZN5Model13func_02055488Eii(void *, void *, void *);
void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
}

extern "C" const u8 data_ov004_0224014c[];
extern "C" const u8 data_ov004_0224016c[];
#define data_ov004_0224014d (data_ov004_0224014c + 1)
#define data_ov004_0224014e (data_ov004_0224014c + 2)
#define data_ov004_02240150 (data_ov004_0224014c + 4)
#define data_ov004_02240154 (data_ov004_0224014c + 8)

extern "C" Unk_ov004_0224d80c *func_ov004_02226484();
extern "C" Unk_ov004_0224d80c *func_ov004_02226484();// declarations (definition order below sets the data layout)
extern "C" { extern Unk_ov004_Rgba data_ov004_02250c48; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250c4c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250c40; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250c44; }
extern "C" { extern char data_ov004_0224d7ac[]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250c50; }
extern "C" { extern char *data_ov004_0224d7e8[7]; }
extern "C" { extern Cls *data_ov004_02250c3c; }
extern "C" { extern char data_ov004_0224d7b8[]; }
extern "C" { extern char data_ov004_0224d77c[]; }
extern "C" { extern char data_ov004_0224d7c4[]; }
extern "C" { extern char data_ov004_0224d788[]; }
extern "C" { extern char data_ov004_0224d794[]; }
extern "C" { extern char data_ov004_0224d7a0[]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250c38; }
extern "C" { extern Unk_ov004_Scene_Entry data_ov004_0224d7d0; }
extern "C" { extern const u8 data_ov004_0224014c[0x20]; }
extern "C" { extern const u8 data_ov004_0224016c[0x104]; }

// @2226484
extern "C" Unk_ov004_0224d80c *func_ov004_02226484() {
    return new Unk_ov004_0224d80c();
}

extern "C" void func_ov004_02226468(Unk_ov004_02226458_Obj *o);
extern "C" void func_ov004_02226468(Unk_ov004_02226458_Obj *o) {
    Unk_ov004_02226468_Obj *t = (Unk_ov004_02226468_Obj *)o;
    Unk_ov004_02226468_Sub *s = t->unk_04;
    if (s->unk_2c != 0) {
        ((Cls *)s->unk_2c)->func_ov004_02225cf4(t->unk_00->unk_00[1], (Unk_ov004_02225cf4_P *)o);
    }
}

extern "C" void func_ov004_02226458(Unk_ov004_02226458_Obj *o) {
    o->unk_1c = (void (*)(void *))func_ov004_02226468;
    o->unk_90 = 2;
}

// @2226410
Unk_ov004_0224d80c::Unk_ov004_0224d80c() {
    _ZN12Unk_020d8cf4C1Ev(unk_2bc);
    _ZN12Unk_020d8cf4C1Ev(unk_358);
    _ZN12Unk_020d8cf4C1Ev(unk_3f4);
}

// @2226374
Unk_ov004_0224d80c::~Unk_ov004_0224d80c() {
    _ZN12Unk_020d8cf4D2Ev(unk_3f4);
    _ZN12Unk_020d8cf4D2Ev(unk_358);
    _ZN12Unk_020d8cf4D2Ev(unk_2bc);
}

// @2226158
BOOL Unk_ov004_0224d80c::vfunc_00() {
    s32 v;
    s32 s = func_02085180(func_020850e0());
    func_ov004_02224dbc(&unk_1a4, "/roomObj/obj_check_in.arc");
    func_ov004_02224d10(&unk_248, "/roomObj/obj_check_in.nsbtx");
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(&unk_ec, func_ov004_02224d68(&unk_1a4), 0);
    F(u32, 0x2b0) = _ZN12Unk_02056fd813func_02057110Ei(func_ov004_02224d68(&unk_1a4), (u32)"m_lt");
    F(u32, 0x2b4) = _ZN12Unk_02056fd813func_02057110Ei(func_ov004_02224d68(&unk_1a4), (u32)"m_ltdoor");
    F(u32, 0x2b8) = _ZN12Unk_02056fd813func_02057110Ei(func_ov004_02224d68(&unk_1a4), (u32)"m_open");
    _ZN5Model13func_02055488Eii(&unk_ec, (void *)func_ov004_02226458, this);
    func_ov004_02226064();
    func_ov004_02225fec();
    func_ov004_02225f88();
    func_ov004_02225f10();
    v = func_020b50e8();
    switch (v) {
    case 0xb:
        if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, *(u32 *)((u8 *)data_020cbb18 + 0x64))) {
            vfunc_60(2);
        } else {
            vfunc_60(0);
        }
        break;
    case 0xc:
        if (_ZN12Unk_02086ef013func_02086efcEv(s) == 1) {
            vfunc_60(0);
        } else {
            vfunc_60(2);
        }
        break;
    case 0xd:
    case 0xe:
    case 0x2f:
        vfunc_60(2);
        break;
    }
    func_ov004_02225f04(this);
    F(s32, 0x494) = -1;
    static FxVec3 sa(0xb000, 0, 0x10800);
    static FxVec3 sb(0x15000, 0, 0x10800);
    func_02031908(unk_358, 0x2000, 0x1c00, 0x2000, &sa, 0, 0);
    func_02031908(unk_3f4, 0x2000, 0x1c00, 0x2000, &sb, 0, 0);
    return TRUE;
}

// @222613c
BOOL Unk_ov004_0224d80c::onExecute() {
    func_ov004_02225ce8();
    func_ov004_02225b1c();
    func_ov004_02225c6c();
    return TRUE;
}

// @2226128
BOOL Unk_ov004_0224d80c::onDraw() {
    _ZN12Unk_020dbd5413func_020547ccEPv(&unk_ec, 0);
    return TRUE;
}

// @22260e4
BOOL Unk_ov004_0224d80c::vfunc_0c() {
    func_ov004_02224d9c(&unk_1a4);
    func_ov004_02224d08(&unk_248);
    func_ov004_02225c48();
    func_020318cc(unk_358);
    func_020318cc(unk_3f4);
    return TRUE;
}

// @2226064
BOOL Unk_ov004_0224d80c::func_ov004_02226064() {
    void *o;
    o = func_ov004_02224d68(&unk_1a4);
    NNS_G3dBindMdlTex(o, _ZN12Unk_02036cec13func_02036ce0Ev(func_02036c58()));
    o = func_ov004_02224d68(&unk_1a4);
    NNS_G3dBindMdlPltt(o, _ZN12Unk_02036cec13func_02036ce0Ev(func_02036c58()));
    o = func_ov004_02224d68(&unk_1a4);
    NNS_G3dBindMdlTex(o, (void *)func_ov004_02224d04(&unk_248));
    o = func_ov004_02224d68(&unk_1a4);
    NNS_G3dBindMdlPltt(o, (void *)func_ov004_02224d04(&unk_248));
    return TRUE;
}

// @2225fec
void Unk_ov004_0224d80c::func_ov004_02225fec() {
    u32 i;
    u8 *base;
    u32 col;
    { u8 *h = func_ov004_02224d68(&unk_1a4); base = h + *(s32 *)(h + 8); }
    i = 0;
    col = ((const u32 *)data_ov004_0224016c)[0x40];
    for (; i < 7; i++) {
        s32 x = _ZN12Unk_02056fd813func_02057110Ei(func_ov004_02224d68(&unk_1a4), (u32)data_ov004_0224d7e8[i]);
        u8 *t = base + 4 + *(u16 *)(base + 0xa);
        u8 *q = t + *(u16 *)t * x;
        u32 *rec = (u32 *)(base + *(s32 *)(q + 4));
        if (rec != 0) {
            rec[4] &= ~0xf;
            rec[4] |= col;
            rec[3] &= ~0xf;
            rec[3] |= col;
        }
    }
}

// @2225f88
BOOL Unk_ov004_0224d80c::func_ov004_02225f88() {
    if (func_ov004_02224d8c(&unk_1a4, 0) != 0 && _ZN12Unk_020dbd5413func_02054800EPv(&unk_ec, data_021c620c) != 0) {
        _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
        _ZN12Unk_020dbd5413func_02054710Ev(&unk_ec);
        return TRUE;
    }
    return FALSE;
}

// @2225f10
BOOL Unk_ov004_0224d80c::func_ov004_02225f10() {
    if (func_ov004_02224d7c(&unk_1a4, 0) != 0 && _ZN9ModelAnim13func_02055bccEjPv(&unk_290, F(u32, 0x148), data_021c620c)) {
        _ZN9ModelAnim13func_02055b38Eiiit(&unk_290, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&unk_290, _ZN5Model12getRenderObjEv(&unk_ec));
        return TRUE;
    }
    return FALSE;
}

// @2225f04
extern "C" void func_ov004_02225f04(Cls *c) {
    data_ov004_02250c3c = c;
}

// @2225ee0
extern "C" BOOL func_ov004_02225ee0() {
    if (data_ov004_02250c3c != 0) {
        return data_ov004_02250c3c->vfunc_60(1);
    }
    return FALSE;
}

// @2225ebc
extern "C" BOOL func_ov004_02225ebc() {
    if (data_ov004_02250c3c != 0) {
        return data_ov004_02250c3c->vfunc_60(3);
    }
    return FALSE;
}

// @2225e9c
extern "C" BOOL func_ov004_02225e9c() {
    if (data_ov004_02250c3c != 0 && data_ov004_02250c3c->unk_248.unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}

// @2225cf4
void Unk_ov004_0224d80c::func_ov004_02225cf4(u32 a, Unk_ov004_02225cf4_P *p) {
    u8 tm[2];
    func_0209cf18(tm);
    s32 hr = tm[1];
    s32 f = FX_Div(tm[0] << 12, 0x3c000);
    u32 i0 = (u8)((hr + 1) % 24) * 12;
    u32 i1 = (u8)(hr % 24) * 12;
    u32 packed;
    s32 w1, w2;
    packed = (u8)(((0x1000 - f) * data_ov004_0224014e[i1] + f * data_ov004_0224014e[i0]) >> 12) << 10;
    {
        u32 c = (u8)(((0x1000 - f) * data_ov004_0224014c[i1] + f * data_ov004_0224014c[i0]) >> 12);
        u32 d = (u8)(((0x1000 - f) * data_ov004_0224014d[i1] + f * data_ov004_0224014d[i0]) >> 12) << 5;
        packed |= c | d;
    }
    u16 pk = (u16)packed;
    w1 = ((0x1000 - f) * *(s32 *)(data_ov004_02240154 + i1) + f * *(s32 *)(data_ov004_02240154 + i0)) >> 12;
    w2 = ((0x1000 - f) * *(s32 *)(data_ov004_02240150 + i1) + f * *(s32 *)(data_ov004_02240150 + i0)) >> 12;
    u32 e0 = F(u32, 0x2b0);
    if (a == e0 || a == F(u32, 0x2b4) || a == F(u32, 0x2b8)) {
        u8 b = (p->unk_b0->unk_0c >> 16) & 0x1f;
        u8 r;
        if (a == e0) {
            r = (func_01ffcb0c(b << 12, w2) >> 12) & 0x1f;
        } else {
            r = (func_01ffcb0c(b << 12, w1) >> 12) & 0x1f;
        }
        p->unk_b0->unk_0c &= 0xffe0ffff;
        p->unk_b0->unk_0c |= r << 16;
        p->unk_08 &= ~0x100;
        p->unk_b0->unk_04 &= 0xffff8000;
        p->unk_b0->unk_04 |= pk;
    }
}

// @2225ce8
void Unk_ov004_0224d80c::func_ov004_02225ce8() {
    F(u8, 0x490) = 0;
}

// @2225cd4
void Unk_ov004_0224d80c::func_ov004_02225cd4(s32 a) {
    F(u8, 0x490) = 1;
    F(s32, 0x494) = a;
}

// @2225c6c
void Unk_ov004_0224d80c::func_ov004_02225c6c() {
    if (F(u8, 0x354)) {
        func_020318cc(unk_2bc);
    }
    if (F(u8, 0x490)) {
        Unk_ov004_02225c6c_V3 v;
        s32 z = F(s32, 0x494) + 0x10000;
        v.x = 0x10000;
        v.y = 0;
        v.z = z;
        func_02031908(unk_2bc, 0x8000, 0, 0x2000, &v, 0, 0);
    }
}

// @2225c48
void Unk_ov004_0224d80c::func_ov004_02225c48() {
    if (F(u8, 0x354)) {
        func_020318cc(unk_2bc);
    }
}

extern "C" char data_ov004_0224d7ac[] = "m_grd_soi";

extern "C" Cls *data_ov004_02250c3c = 0;

extern "C" char data_ov004_0224d788[] = "m_grd_g_s";

extern "C" Unk_ov004_Rgba data_ov004_02250c48(31, 20, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250c4c(20, 20, 31, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250c40(31, 31, 20, 31);

extern "C" const u8 data_ov004_0224016c[0x104] = {
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1c, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x66, 0x06, 0x00, 0x00, 0x1f, 0x1e, 0x16, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x9a, 0x09, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x9a, 0x09, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1e, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x1c, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x15, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x18, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00
};

extern "C" char data_ov004_0224d7b8[] = "m_grd_clf2";

extern "C" const u8 data_ov004_0224014c[0x20] = {
    0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x04, 0x00, 0x00,
    0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x04, 0x00, 0x00,
    0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00
};

extern "C" Unk_ov004_Rgba data_ov004_02250c44(20, 31, 20, 31);

extern "C" char data_ov004_0224d794[] = "m_grd_grs";

extern "C" Unk_ov004_Rgba data_ov004_02250c50(20, 31, 31, 31);

extern "C" char data_ov004_0224d7a0[] = "m_grd_s_s";

extern "C" char data_ov004_0224d7c4[] = "m_grd_clf3";

extern "C" char *data_ov004_0224d7e8[7] = {data_ov004_0224d77c, data_ov004_0224d7b8, data_ov004_0224d7c4, data_ov004_0224d788,
                                           data_ov004_0224d794, data_ov004_0224d7a0, data_ov004_0224d7ac};

extern "C" Unk_ov004_Rgba data_ov004_02250c38(20, 24, 24, 31);

extern "C" char data_ov004_0224d77c[] = "m_grd_clf";

extern "C" Unk_ov004_Scene_Entry data_ov004_0224d7d0 = {(void *(*)())func_ov004_02226484, 0x11, 0x14, {0, 0xc8000, 0x12c000, 0x258000}};

// @2225ba8
BOOL Unk_ov004_0224d80c::vfunc_60(u32 a) {
    static Fn2 tbl[4] = {&Cls::func_ov004_02225abc, &Cls::func_ov004_02225a14, &Cls::func_ov004_02225924,
                         &Cls::func_ov004_02225870};
    if (a < 4) {
        if ((this->*tbl[a])()) {
            unk_248.unk_04 = a;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

// @2225b1c
void Unk_ov004_0224d80c::func_ov004_02225b1c() {
    static Fn1 tbl[4] = {&Cls::func_ov004_02225a84, &Cls::func_ov004_02225984, &Cls::func_ov004_022258e0,
                         &Cls::func_ov004_022257e4};
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

// @2225abc
BOOL Unk_ov004_0224d80c::func_ov004_02225abc() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 0);
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, r, 0, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&unk_ec);
    _ZN9ModelAnim13func_02055b00Eiiiit(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
    return TRUE;
}

// @2225a84
void Unk_ov004_0224d80c::func_ov004_02225a84() {
    _ZN12Unk_020dbd5413func_020547e4Ev(&unk_ec);
    _ZN13AnimFrameCtrl4stepEv(&unk_290);
    *F(u32 *, 0x2a8) = F(u32, 0x298);
    func_ov004_02225cd4(0);
}

// @2225a14
BOOL Unk_ov004_0224d80c::func_ov004_02225a14() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 1);
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&unk_ec);
    _ZN9ModelAnim13func_02055b00Eiiiit(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 1), 1, 0x1000, 0);
    Snd_PlaySe(0x4eb);
    return TRUE;
}

// @2225984
void Unk_ov004_0224d80c::func_ov004_02225984() {
    s32 v;
    _ZN12Unk_020dbd5413func_020547e4Ev(&unk_ec);
    _ZN13AnimFrameCtrl4stepEv(&unk_290);
    *F(u32 *, 0x2a8) = F(u32, 0x298);
    v = F(s32, 0x494);
    func_020e7820(&v, -0x2000, 0x100, 0x1000);
    func_ov004_02225cd4(v);
    if (_ZN13AnimFrameCtrl10isFinishedEv(((u8 *)this + 0x188))) {
        vfunc_60(2);
    } else if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((u8 *)this + 0x188), 0x3a)) {
        Snd_PlaySe(0x4ed);
    }
}

// @2225924
BOOL Unk_ov004_0224d80c::func_ov004_02225924() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 2);
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, r, 0, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&unk_ec);
    _ZN9ModelAnim13func_02055b00Eiiiit(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 2), 0, 0x1000, 0);
    return TRUE;
}

// @22258e0
void Unk_ov004_0224d80c::func_ov004_022258e0() {
    _ZN12Unk_020dbd5413func_020547e4Ev(&unk_ec);
    _ZN13AnimFrameCtrl4stepEv(&unk_290);
    *F(u32 *, 0x2a8) = F(u32, 0x298);
    if (func_020b50e8() == 0xb) {
        func_ov004_02225cd4(-0x2000);
    }
}

// @2225870
BOOL Unk_ov004_0224d80c::func_ov004_02225870() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 3);
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&unk_ec);
    _ZN9ModelAnim13func_02055b00Eiiiit(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 3), 1, 0x1000, 0);
    Snd_PlaySe(0x4ec);
    return TRUE;
}

// @22257e4
void Unk_ov004_0224d80c::func_ov004_022257e4() {
    unk_ec.func_020547e4();
    _ZN13AnimFrameCtrl4stepEv((u8 *)this + 0x290);
    *(u32 *)*(u32 *)((u8 *)this + 0x2a8) = *(u32 *)((u8 *)this + 0x298);
    u32 t = F(s32, 0x494);
    func_020e7820((s32 *)&t, 0, 0x100, 0x1000);
    func_ov004_02225cd4(t);
    if (unk_ec.isFinished() != 0) {
        vfunc_60(0);
    } else {
        if (unk_ec.hasPassedFrame(0x3a) != 0) {
            Snd_PlaySe(0x4ee);
        }
    }
}


// mwcc-version: 1.2/sp2
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
    virtual BOOL func_ov004_02225608();
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

// ---- second base at +0x290 (see src/main/unk_02065f14.cpp)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020d8cf4 {
    virtual void vfunc_00();
    u8 pad_04[0x94];
    u8 unk_98;

    Unk_020d8cf4();
    ~Unk_020d8cf4();
};

class Unk_ov004_0224d618;

extern "C" {
extern void *gBgHeap;

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_0209c3e0(u32 v);
s32 func_0209c3f4(u32 v);
s32 func_0209c41c(void *o, u32 v);
void func_02002dd0(void *o, u32 v);
void func_020555ec(void *m, void *r, u32 z);
void NNS_G3dBindMdlTex(void *a, u32 b);
void NNS_G3dBindMdlPltt(void *a, u32 b);
s32 func_020318cc(void *p);
void func_02031908(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
void func_020566bc(void *p);
void func_020e7820(void *a, s32 b, s32 c, s32 d);
void Snd_PlaySe(s32 a);
void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
s32 func_ov004_02224d8c(void *o, u32 i);
void func_ov004_02224ca4(void *o, s32 v);
void _ZN14BlendAnimModel8initAnimEiiitt(void *self, s32 a, s32 b, s32 c, u16 d, u16 e);
}

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

    /* 0xec */ AnimModel unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};

class Unk_ov004_0224d618 : public Unk_ov004_0224d4e8, public TalkMsgRequest {
public:
    Unk_ov004_0224d618();
    virtual ~Unk_ov004_0224d618();
    virtual BOOL vfunc_00();
    virtual BOOL func_ov004_02225608();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_022252bc();
    void func_ov004_022252cc();
    void func_ov004_022252fc();
    void func_ov004_02225380();
    void func_ov004_022253fc();
    void func_ov004_02225488();
    void func_ov004_022254c4();
    BOOL func_ov004_0222532c();
    BOOL func_ov004_022253c4();
    BOOL func_ov004_02225440();
    BOOL func_ov004_0222548c();

    /* 0x2d4 */ u32 unk_2d4[0x27]; // a Unk_020d8cf4 (ctor/dtor called by hand: the original destroys it with D2)
    /* 0x370 */ u8 unk_370;
};

typedef Unk_ov004_0224d4e8 M;
typedef Unk_ov004_0224d618 WindowLight;
typedef Unk_ov004_02224ee4 LampLights;
typedef Unk_ov004_02224d60 LightLevel;
typedef Unk_ov004_02224ee4_Vec Vec;

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

extern "C" WindowLight *func_ov004_02225790();
// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov004_Scene_Entry data_ov004_0224d5f8;
extern "C" Unk_ov004_0224d618 *volatile data_ov004_02250be4;

struct Unk_ov004_022255ec_Pad {
    s32 v[4];
    Unk_ov004_022255ec_Pad() {}
    ~Unk_ov004_022255ec_Pad() {}
};

// @2225790
extern "C" WindowLight *func_ov004_02225790() {
    return new WindowLight;
}

// @2225754
Unk_ov004_0224d618::Unk_ov004_0224d618() {
    _ZN12Unk_020d8cf4C1Ev(unk_2d4);
}

// @22256d4
Unk_ov004_0224d618::~Unk_ov004_0224d618() {
    _ZN12Unk_020d8cf4D2Ev(unk_2d4);
}

// @222564c
BOOL WindowLight::vfunc_00() {
    data_ov004_02250be4 = this;
    unk_370 = 0;
    func_ov004_02224fc8("/roomObj/obj_b_machine.arc", "/roomObj/obj_b_machine.nsbtx");
    func_ov004_022252cc();
    if (func_ov004_02224d8c(&unk_1a4, 0) != 0) {
        if (unk_ec.allocAnmObj(gBgHeap) != 0) {
            s32 r = func_ov004_02224d8c(&unk_1a4, 0);
            _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
            unk_ec.attachAnim();
        }
    }
    return TRUE;
}

// @222563c
BOOL WindowLight::onExecute() {
    func_ov004_022254c4();
    return TRUE;
}

// @2225628
BOOL WindowLight::onDraw() {
    unk_ec.drawAnimated(0);
    return TRUE;
}

// @2225608
BOOL WindowLight::func_ov004_02225608() {
    func_ov004_022252bc();
    func_ov004_02224f60();
    data_ov004_02250be4 = 0;
    return TRUE;
}

// @22255ec
void WindowLight::vfunc_64(Vec *out) {
    Unk_ov004_022255ec_Pad pad;
    out->x = 0xc000;
    out->y = 0;
    out->z = 0x17000;
}

extern "C" Unk_ov004_Scene_Entry data_ov004_0224d5f8 = {(void *(*)())func_ov004_02225790, 0x15, 0x19, {0, 0xc8000, 0x12c000, 0x258000}};

extern "C" Unk_ov004_0224d618 *volatile data_ov004_02250be4 = 0;

// @2225550
BOOL WindowLight::vfunc_60(u32 idx) {
    typedef BOOL (WindowLight::*Fn)();
    static Fn tbl[4] = {&WindowLight::func_ov004_0222548c, &WindowLight::func_ov004_02225440, &WindowLight::func_ov004_022253c4,
                        &WindowLight::func_ov004_0222532c};
    if (idx < 4) {
        if ((this->*tbl[idx])() != 0) {
            unk_248.unk_04 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// @22254c4
void WindowLight::func_ov004_022254c4() {
    typedef void (WindowLight::*Fn)();
    static Fn tbl[4] = {&WindowLight::func_ov004_02225488, &WindowLight::func_ov004_022253fc, &WindowLight::func_ov004_02225380,
                        &WindowLight::func_ov004_022252fc};
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

// @222548c
BOOL WindowLight::func_ov004_0222548c() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    return TRUE;
}

// @2225488
void WindowLight::func_ov004_02225488() {
}

// @2225440
BOOL WindowLight::func_ov004_02225440() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    func_ov004_02224ca4(&unk_250, 0x4d8);
    return TRUE;
}

// @22253fc
void WindowLight::func_ov004_022253fc() {
    if (unk_ec.isFinished() != 0) {
        if (unk_370 == 0) {
            vfunc_60(2);
        } else {
            func_0209c41c(this, 2);
        }
    } else {
        unk_ec.stepAnim();
    }
}

// @22253c4
BOOL WindowLight::func_ov004_022253c4() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 1);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    return TRUE;
}

// @2225380
void WindowLight::func_ov004_02225380() {
    if (unk_ec.isFinished() != 0) {
        if (unk_370 == 0) {
            vfunc_60(3);
        } else {
            func_0209c41c(this, 3);
        }
    } else {
        unk_ec.stepAnim();
    }
}

// @222532c
BOOL WindowLight::func_ov004_0222532c() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 2);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    func_ov004_02224ca4(&unk_250, 0x4d9);
    unk_370 = 0;
    return TRUE;
}

// @22252fc
void WindowLight::func_ov004_022252fc() {
    if (unk_ec.isFinished() != 0) {
        vfunc_60(0);
    } else {
        unk_ec.stepAnim();
    }
}

// @22252cc
void WindowLight::func_ov004_022252cc() {
    func_02031908(&unk_2d4, 0x2000, 0x4000, 0x2000, unk_5c, 0, 0);
}

// @22252bc
void WindowLight::func_ov004_022252bc() {
    func_020318cc(&unk_2d4);
}

// @2225290
extern "C" void func_ov004_02225290() {
    if (func_0209c41c(data_ov004_02250be4, 1) != 0) {
        data_ov004_02250be4->unk_370 = 1;
    }
}


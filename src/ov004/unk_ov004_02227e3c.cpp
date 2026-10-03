// mwcc-version: 1.2/sp2
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
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (Unk_020dbd54), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; Unk_020ddcf0 (secondary base of the derived classes) starts at 0x290.

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
    virtual BOOL func_ov004_02228478();
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

    /* 0xec */ Unk_020dbd54 unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};


// ---------------------------------------------------------------- secondary base at +0x290 (see tu01 / tu18)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_ov004_0224dd98_Rec {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

// Slots 0x10 / 0x14 / 0x18 are overridden by the derived class's three new virtuals (named after their addresses), which
// is what makes the five _ZThn656 thunks.
class Unk_020ddcf0 : public MsgRequest {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void func_ov004_02227ec0();
    virtual void func_ov004_02227eac();
    virtual void func_ov004_02227ea8(u32 a, u8 b);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
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
    /* 0x3c */ Unk_ov004_0224dd98_Rec *unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_ov004_02227fb8_Pad {
    s32 v[2];
    Unk_ov004_02227fb8_Pad() {}
    ~Unk_ov004_02227fb8_Pad() {}
};

struct Vec3 {
    s32 x, y, z;
};

struct Unk_020b6e10 {
    u8 pad[0x2a8];
};

struct Unk_020b6960 {
    BOOL func_020b68ec(Unk_020b6e10 *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
    BOOL func_020b6928(Unk_020b6e10 *box);
};

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
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

class Unk_ov004_0224dd98 : public Unk_ov004_0224d4e8, public Unk_020ddcf0 {
public:
    Unk_ov004_0224dd98();
    virtual ~Unk_ov004_0224dd98();
    virtual BOOL vfunc_00();
    virtual BOOL func_ov004_02228478();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_60(u32 idx);
    virtual void func_ov004_02227ec0();
    virtual void func_ov004_02227eac();
    virtual void func_ov004_02227ea8(u32 a, u8 b);

    void func_ov004_02227e3c();
    void func_ov004_02227e4c();
    void func_ov004_02227ec4();
    void func_ov004_02227ee0();
    void func_ov004_02227eec();
    BOOL func_ov004_02227f14();
    void func_ov004_02227f30();
    void func_ov004_02227f4c();
    void func_ov004_02227f58();
    BOOL func_ov004_02227f90();
    void func_ov004_02227f94();
    BOOL func_ov004_02227fb8();
    void func_ov004_02228000();
    BOOL func_ov004_02228004();
    void func_ov004_02228008();
    BOOL func_ov004_022280b0(s32 m);
    void func_ov004_02228168();
    BOOL func_ov004_02228198();
    void func_ov004_022281e0();
    BOOL func_ov004_022281e4();
    void func_ov004_0222821c();
    BOOL func_ov004_0222824c();
    void func_ov004_02228294();
    BOOL func_ov004_02228298();
    void func_ov004_022282d0();

    /* 0x2d4 */ u32 unk_2d4[0x27]; // a Unk_020d8cf4 (ctor/dtor by hand: the original destroys it with D2)
    /* 0x370 */ u32 unk_370[0xaa]; // a Unk_020b6e10 (ctor C2 / dtor D2 by hand)
    /* 0x618 */ s32 unk_618;
};

typedef void (Unk_ov004_0224dd98::*Unk_ov004_02228008_Fn)();
typedef void (Unk_ov004_0224dd98::*Unk_ov004_02228168_Fn)();
typedef BOOL (Unk_ov004_0224dd98::*Unk_ov004_022280b0_Fn)();
#define F(T, off) (*(T *)((u8 *)this + off))

extern "C" {
extern void *data_021c1b3c;
extern s32 data_021c5384;
extern u32 data_021c620c;
s32 func_020318cc(void *);
s32 func_02031908(void *, s32, s32, s32, void *, s32, s32);
Unk_020b6960 *func_020b50b4(void);
s32 func_0203d67c(void *);
s32 func_0209c41c(void *, u32);
s32 func_0206ec6c(void);
s32 func_0206eca4(u32);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 _ZN12Unk_020dbd5413func_020547e4Ev(void *);
s32 _ZN12Unk_020dbd5413func_020547ccEPv(void *, u32);
s32 _ZN12Unk_020dbd5413func_02054710Ev(void *);
s32 _ZN12Unk_020dbd5413func_02054800EPv(void *, u32);
s32 _ZN12Unk_0205454c13func_02054720Eiiitt(void *, u32, u32, u32, u32, u32);
s32 func_ov004_02224d8c(void *, u32);
void func_ov004_02224ca4(void *, s32);
void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
void _ZN12Unk_020b6e10C2Ev(void *self);
void _ZN12Unk_020b6e10D2Ev(void *self);
void _ZN9Character13func_0203e47cEi(void *self, Unk_020ddcf0 *sec);
void _ZN9Character13func_0203e488Ei(void *self, Unk_020ddcf0 *sec);
s32 _ZN18Unk_ov004_0224d4e819func_ov004_02224f20Ev(void *self, s32 a);
Unk_ov004_0224dd98 *func_ov004_02228658();
Unk_ov004_0224dd98 *func_ov004_0222864c();
}// declarations (definition order below sets the data layout)
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e70; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e64; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e60; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e6c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e5c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e4c; }
extern "C" { extern Unk_ov004_Scene_Entry data_ov004_0224dd78; }
extern "C" { extern char data_ov004_0224dd68[0x10]; }
extern "C" { extern char *data_ov004_0224dcc4; }
extern "C" { extern Unk_ov004_0224dd98 *data_ov004_02250e50; }

extern "C" Unk_ov004_Rgba data_ov004_02250e70(31, 20, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e64(20, 20, 31, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e60(31, 31, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e6c(20, 31, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e5c(20, 31, 31, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e4c(20, 24, 24, 31);

extern "C" Unk_ov004_Scene_Entry data_ov004_0224dd78 = {(void *(*)())func_ov004_02228658, 0x12, 0x16, {0, 0xc8000, 0x12c000, 0x258000}};

// ---------------------------------------------------------------- data
extern "C" char data_ov004_0224dd68[0x10] = "sp_npc_trash";

extern "C" char *data_ov004_0224dcc4 = data_ov004_0224dd68;

extern "C" Unk_ov004_0224dd98 *data_ov004_02250e50 = 0;

// @0x2228658
extern "C" Unk_ov004_0224dd98 *func_ov004_02228658() {
    return new Unk_ov004_0224dd98;
}

extern "C" Unk_ov004_0224dd98 *func_ov004_0222864c() {
    return data_ov004_02250e50;
}

Unk_ov004_0224dd98::Unk_ov004_0224dd98() {
    _ZN12Unk_020d8cf4C1Ev(unk_2d4);
    _ZN12Unk_020b6e10C2Ev(unk_370);
}

Unk_ov004_0224dd98::~Unk_ov004_0224dd98() {
    _ZN12Unk_020b6e10D2Ev(unk_370);
    _ZN12Unk_020d8cf4D2Ev(unk_2d4);
}

BOOL Unk_ov004_0224dd98::vfunc_00() {
    data_ov004_02250e50 = this;
    func_ov004_02224f58(0);
    func_ov004_02224f90("obj_r_box");
    func_ov004_02227e4c();
    if (func_ov004_02224d8c(&unk_1a4, 0)) {
        if (_ZN12Unk_020dbd5413func_02054800EPv(&unk_ec, data_021c620c)) {
            _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 1, 0x1000, 0, 0);
            _ZN12Unk_020dbd5413func_02054710Ev(&unk_ec);
        }
    }
    func_ov004_022280b0(0);
    vfunc_60(func_ov004_02224f3c());
    return TRUE;
}

BOOL Unk_ov004_0224dd98::onExecute() {
    func_ov004_022282d0();
    func_ov004_02228008();
    func_020b50b4()->func_020b6928((Unk_020b6e10 *)unk_370);
    return TRUE;
}

BOOL Unk_ov004_0224dd98::onDraw() {
    _ZN12Unk_020dbd5413func_020547ccEPv(&unk_ec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224dd98::func_ov004_02228478() {
    func_ov004_02227e3c();
    func_ov004_02224f60();
    data_ov004_02250e50 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224dd98::vfunc_48(void *a) {
    Character *o = (Character *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < 0x299a) {
            if (func_020e780c((s16)(F(s16, 0x8e) + 0x8000), *(s16 *)((u8 *)o + 0x8e)) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov004_0224dd98::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov004_022280b0(1);
        break;
    case 8:
        func_ov004_022280b0(0);
        break;
    }
}

BOOL Unk_ov004_0224dd98::vfunc_60(u32 idx) {
    static Unk_ov004_022280b0_Fn tbl[4] = {
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02228298,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_0222824c,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_022281e4,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02228198,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            if (_ZN18Unk_ov004_0224d4e819func_ov004_02224f20Ev(this, idx)) {
                unk_248.unk_04 = idx;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov004_0224dd98::func_ov004_022282d0() {
    static Unk_ov004_02228168_Fn tbl[4] = {
        &Unk_ov004_0224dd98::func_ov004_02228294,
        &Unk_ov004_0224dd98::func_ov004_0222821c,
        &Unk_ov004_0224dd98::func_ov004_022281e0,
        &Unk_ov004_0224dd98::func_ov004_02228168,
    };
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02228298() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02228294() {}

BOOL Unk_ov004_0224dd98::func_ov004_0222824c() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 1, 0x1000, 0, 0);
    func_ov004_02224ca4(&unk_250, 0x4d6);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_0222821c() {
    if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)this + 0x188)) {
        vfunc_60(2);
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(&unk_ec);
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_022281e4() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 1), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_022281e0() {}

BOOL Unk_ov004_0224dd98::func_ov004_02228198() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 1), 1, 0x1000, 0, 0);
    func_ov004_02224ca4(&unk_250, 0x4d7);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02228168() {
    if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)this + 0x188)) {
        vfunc_60(0);
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(&unk_ec);
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_022280b0(s32 m) {
    static Unk_ov004_022280b0_Fn tbl[6] = {
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02228004,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227fb8,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227f90,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227f4c,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227f14,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227ee0,
    };
    if (m < 6) {
        if ((this->*tbl[m])()) {
            unk_618 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224dd98::func_ov004_02228008() {
    static Unk_ov004_02228008_Fn tbl[6] = {
        &Unk_ov004_0224dd98::func_ov004_02228000,
        &Unk_ov004_0224dd98::func_ov004_02227f94,
        &Unk_ov004_0224dd98::func_ov004_02227f58,
        &Unk_ov004_0224dd98::func_ov004_02227f30,
        &Unk_ov004_0224dd98::func_ov004_02227eec,
        &Unk_ov004_0224dd98::func_ov004_02227ec4,
    };
    if (unk_618 < 6) {
        (this->*tbl[unk_618])();
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02228004() {
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02228000() {}

BOOL Unk_ov004_0224dd98::func_ov004_02227fb8() {
    Unk_ov004_02227fb8_Pad pad;
    _ZN9Character13func_0203e488Ei(this, (Unk_020ddcf0 *)this);
    MsgRequest::setFileName(data_ov004_0224dcc4);
    MsgRequest::unk_1e = 0;
    Unk_020ddcf0::unk_3c->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02227f94() {
    if (Unk_020ddcf0::unk_3c != 0) {
        if (Unk_020ddcf0::unk_3c->unk_04 != 0) {
            func_ov004_022280b0(2);
        }
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02227f90() {
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02227f58() {
    if (Unk_020ddcf0::unk_3c != 0) {
        if (Unk_020ddcf0::unk_3c->unk_04 == 0) {
            _ZN9Character13func_0203e47cEi(this, (Unk_020ddcf0 *)this);
            func_ov004_022280b0(3);
        }
    }
}

void Unk_ov004_0224dd98::func_ov004_02227f4c() {
    func_0209c41c(this, 1);
}

void Unk_ov004_0224dd98::func_ov004_02227f30() {
    if (unk_248.unk_04 == 2) {
        func_ov004_022280b0(4);
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02227f14() {
    if (func_0206eca4(0x20) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224dd98::func_ov004_02227eec() {
    if (data_021c5384 == 0) {
        if (func_0206ec6c() != 0) {
            func_ov004_022280b0(5);
        }
    }
}

void Unk_ov004_0224dd98::func_ov004_02227ee0() {
    func_0209c41c(this, 3);
}

void Unk_ov004_0224dd98::func_ov004_02227ec4() {
    if (unk_248.unk_04 == 0) {
        func_0203d67c(this);
    }
}

void Unk_ov004_0224dd98::func_ov004_02227ec0() {}

void Unk_ov004_0224dd98::func_ov004_02227eac() {
    ((u32 *)data_021c1b3c)[0x248 / 4] = 0x1a;
}

void Unk_ov004_0224dd98::func_ov004_02227ea8(u32 a, u8 b) {}

void Unk_ov004_0224dd98::func_ov004_02227e4c() {
    func_02031908(unk_2d4, 0x2000, 0x4000, 0x2000, (u8 *)this + 0x5c, 0, 0);
    func_020b50b4()->func_020b68ec((Unk_020b6e10 *)unk_370, (Vec3 *)((u8 *)this + 0x5c), 0x2000, 0x4000, 0x2000, 0, 0xc, 0xff);
}

void Unk_ov004_0224dd98::func_ov004_02227e3c() {
    func_020318cc(unk_2d4);
}

// mwcc-version: 1.2/base
#include "types.h"

// shared_0224d4e8.h.txt -- final declaration of class Unk_ov004_0224d4e8 (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 Unk_020d8c7c_Base::vfunc_00        04 M::vfunc_04               08 Unk_020d9670::func_0203e678(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Unk_020d5d84::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN18Unk_ov004_0224d4e88vfunc_20Ej)
//   24 Base::vfunc_24   28 Unk_020d5d84::vfunc_28   2c Unk_020d5d84::vfunc_2c   30..3c Base   40 D1  44 D0
//   48..5c Unk_020d9670 (vfunc_48/4c/50/54/58/5c)   60 M::vfunc_60(u32)   64 M::vfunc_64(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN18Unk_ov004_0224d4e8C2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (Unk_ov004_02224ee4: real C1/D1 methods), unk_248 (Unk_ov004_02224d60) and unk_250
//    (Unk_ov004_02224cf4) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (func_ov004_02224ce4 / func_ov004_02224d5c), so B and Cf4 have no destructor here.
//  * Unk_020d8c7c_Base .. Unk_020d9670 are an own copy of the library chain (the header Unk_020d8c7c.h names slot 08
//    vfunc_08, the real symbol is Unk_020d9670::func_0203e678(s32); slot 20 takes a u32).  Do not also include Unk_020d8c7c.h.
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (Unk_020dbd54), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; Unk_020ddcf0 (secondary base of the derived classes) starts at 0x290.

// Library base class chain (header Unk_020d8c7c.h rebuilt so that the vtable names the real symbols:
// slot 08 is Unk_020d9670::func_0203e678(s32), slot 20 takes a u32).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual ~Unk_020d8c7c() {}

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

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

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

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;

    s32 func_02056654();
    s32 func_020565e8(s32 a);
};

class Unk_020dbd54 : public Unk_020dbd34, public Unk_020dbe7c {
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

class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
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

class Unk_ov004_0224def8 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224def8();
    virtual ~Unk_ov004_0224def8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60(u32 idx);

    void func_ov004_022287a4();
    BOOL func_ov004_02228800();
    void func_ov004_02228818();
    BOOL func_ov004_02228870();
    void func_ov004_02228874();
    BOOL func_ov004_0222889c();
    void func_ov004_022288b8();
    BOOL func_ov004_022288bc();
    void func_ov004_022288c0();

    /* 0x290 */ u32 unk_290[0x2e];  // a Unk_020dbd54 (ctor C1 / dtor D1 by hand)
    /* 0x348 */ u32 unk_348[0x29];  // a Unk_ov004_02224ee4 (C1 / D1 by hand)
    /* 0x3ec */ u32 unk_3ec;        // helper with plain ctor/dtor functions 02224d60 / 02224d5c
    /* 0x3f0 */ u8 unk_3f0[0x28];   // a Unk_020e45e0 (C1 by hand)
    /* 0x418 */ u32 unk_418[0xa];   // a Unk_020dbe4c (C1 / D1 by hand)
};

#define F(T, off) (*(T *)((u8 *)this + off))
#define G(T, off) (*(T *)((u8 *)g + off))

extern "C" {
extern void *data_021c620c;
extern Unk_ov004_02228a40_Mtx data_021f47e0;
extern Unk_ov004_0224def8 *data_ov004_02250f18;
void func_ov004_02224d60(void *);
void func_ov004_02224d5c(void *);
void func_ov004_02224d9c(void *);
void func_ov004_02224d08(void *);
s32 func_ov004_02224d8c(void *, u32);
s32 func_ov004_02224d6c(void *, u32);
void func_ov004_02224c90(void *, u32);
s32 _ZN12Unk_020dbd5413func_020547ccEPv(void *, u32);
s32 _ZN12Unk_020dbd5413func_020547e4Ev(void *);
s32 _ZN12Unk_020dbe7c13func_020566bcEv(void *);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(void *, void *, u32);
s32 func_021039ec(void *, u32);
s32 func_02103830(void *, u32);
s32 _ZN12Unk_020dbd5413func_02054800EPv(void *, void *);
s32 _ZN12Unk_0205454c13func_02054720Eiiitt(void *, u32, u32, u32, u32, u32);
s32 _ZN12Unk_020dbd5413func_02054710Ev(void *);
s32 _ZN12Unk_020dbe4c13func_02055bccEjPv(void *, u32, void *);
s32 _ZN12Unk_020dbe4c13func_02055b38Eiiit(void *, u32, u32, u32, u32);
void *_ZN12Unk_020dbe3413func_020554c0Ev(void *);
s32 _ZN12Unk_020dbe4c13func_02055a9cEj(void *, void *);
void _ZN12Unk_020dd344C2Ev(void *);
void _ZN12Unk_020dd344D2Ev(void *);
void _ZN12Unk_0206338013func_0206338cEii(void *, s32, s32);
void func_02063388(void *);
void func_02062f94(u16 *out, void *p, u32 a, void *q, u32 b, u32 c, u32 d);
s32 func_0203c764(void *p, void *q, u32 a);
void *func_0203c6c8(void *p);
s32 _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *p, u32 a, const char *b, void *c, u32 d, u32 e);
s32 func_02063a9c(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020e77cc(s32 a, s32 b, s32 c);
BOOL func_0206f11c();
void _ZN12Unk_020dbd54C1Ev(void *);
void _ZN12Unk_020dbd54D1Ev(void *);
void _ZN18Unk_ov004_02224ee4C1Ev(void *);
void _ZN18Unk_ov004_02224ee4D1Ev(void *);
void _ZN12Unk_020e45e0C1Ev(void *);
void _ZN12Unk_020dbe4cC1Ev(void *);
void _ZN12Unk_020dbe4cD1Ev(void *);
Unk_ov004_0224def8 *func_ov004_02228db0();
}

typedef void (Unk_ov004_0224def8::*Unk_ov004_022288c0_Fn)();
typedef BOOL (Unk_ov004_0224def8::*Unk_ov004_0222894c_Fn)();

// ---------------------------------------------------------------- data
extern "C" Unk_ov004_Scene_Entry data_ov004_0224ded8 = {(void *(*)())func_ov004_02228db0, 0x78, 0x15, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" Unk_ov004_0224def8 *data_ov004_02250f18 = 0;
Unk_ov004_02250f6c_Obj data_ov004_02250f6c;

extern "C" Unk_ov004_0224def8 *func_ov004_02228db0() {
    return new Unk_ov004_0224def8();
}

Unk_ov004_0224def8::Unk_ov004_0224def8() {
    _ZN12Unk_020dbd54C1Ev(unk_290);
    _ZN18Unk_ov004_02224ee4C1Ev(unk_348);
    func_ov004_02224d60(&unk_3ec);
    _ZN12Unk_020e45e0C1Ev(unk_3f0);
    _ZN12Unk_020dbe4cC1Ev(unk_418);
}

Unk_ov004_0224def8::~Unk_ov004_0224def8() {
    _ZN12Unk_020dbe4cD1Ev(unk_418);
    func_ov004_02224d5c(&unk_3ec);
    _ZN18Unk_ov004_02224ee4D1Ev(unk_348);
    _ZN12Unk_020dbd54D1Ev(unk_290);
}

BOOL Unk_ov004_0224def8::vfunc_00() {
    data_ov004_02250f18 = this;
    func_ov004_02224fc8("/roomObj/obj_tailor1.arc", "/roomObj/obj_tailor1.nsbtx");
    func_ov004_02224dbc(unk_348, "/roomObj/obj_tailor2.arc");
    func_ov004_02224d10(&unk_3ec, "/roomObj/obj_tailor2.nsbtx");
    _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(unk_290, func_ov004_02224d68(unk_348), 0);
    {
        void *a = func_ov004_02224d68(unk_348);
        func_021039ec(a, func_ov004_02224d04(&unk_3ec));
    }
    {
        void *a = func_ov004_02224d68(unk_348);
        func_02103830(a, func_ov004_02224d04(&unk_3ec));
    }
    if (func_ov004_02224d8c(&unk_1a4, 0) && _ZN12Unk_020dbd5413func_02054800EPv(&unk_ec, data_021c620c)) {
        _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
        _ZN12Unk_020dbd5413func_02054710Ev(&unk_ec);
        F(u32, 0x198) = 0;
    }
    if (_ZN12Unk_020dbe4c13func_02055bccEjPv(unk_418, F(u32, 0x148), data_021c620c)) {
        _ZN12Unk_020dbe4c13func_02055b38Eiiit(unk_418, func_ov004_02224d6c(&unk_1a4, 0), 0, 0x1000, 0);
        _ZN12Unk_020dbe4c13func_02055a9cEj(unk_418, _ZN12Unk_020dbe3413func_020554c0Ev(&unk_ec));
        F(u32, 0x428) = 0;
    }
    if (func_ov004_02224d8c(unk_348, 0) && _ZN12Unk_020dbd5413func_02054800EPv(unk_290, data_021c620c)) {
        _ZN12Unk_0205454c13func_02054720Eiiitt(unk_290, func_ov004_02224d8c(unk_348, 0), 0, 0x1000, 0, 0);
        _ZN12Unk_020dbd5413func_02054710Ev(unk_290);
        F(u32, 0x33c) = 0;
    }
    {
        u32 x[3];
        u32 y[2];
        u16 z;
        _ZN12Unk_020dd344C2Ev(x);
        _ZN12Unk_0206338013func_0206338cEii(y, 2, 0);
        func_02062f94(&z, y, 0, x, 1, 1, 0);
        func_02063388(y);
        func_0203c764(&data_ov004_02250f6c, &z, 0);
        u32 r5 = F(u32, 0x2ec);
        void *t = func_0203c6c8(&data_ov004_02250f6c);
        _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(unk_3f0, r5, "w", t, 0, 0);
        func_ov004_022288bc();
        _ZN12Unk_020dd344D2Ev(x);
    }
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_18() {
    _ZN12Unk_020dbd5413func_020547e4Ev(&unk_ec);
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_290);
    _ZN12Unk_020dbe7c13func_020566bcEv(unk_418);
    *F(u32 *, 0x430) = F(u32, 0x420);
    func_020e8388(&data_021f47e0, unk_5c[0], unk_5c[1], unk_5c[2]);
    F(Unk_ov004_02228a40_Mtx, 0xec + 0x64) = data_021f47e0;
    F(Unk_ov004_02228a40_Mtx, 0x290 + 0x64) = data_021f47e0;
    func_ov004_022288c0();
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_24() {
    _ZN12Unk_020dbd5413func_020547ccEPv(&unk_ec, 0);
    _ZN12Unk_020dbd5413func_020547ccEPv(unk_290, 0);
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_0c() {
    func_ov004_02224f60();
    func_ov004_02224d9c(unk_348);
    func_ov004_02224d08(&unk_3ec);
    data_ov004_02250f18 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_60(u32 idx) {
    static Unk_ov004_0222894c_Fn tbl[4] = {
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_022288bc,
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_0222889c,
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_02228870,
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_02228800,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_248.unk_04 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224def8::func_ov004_022288c0() {
    static Unk_ov004_022288c0_Fn tbl[4] = {
        &Unk_ov004_0224def8::func_ov004_022288b8,
        &Unk_ov004_0224def8::func_ov004_02228874,
        &Unk_ov004_0224def8::func_ov004_02228818,
        &Unk_ov004_0224def8::func_ov004_022287a4,
    };
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224def8::func_ov004_022288bc() {
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_022288b8() {}

BOOL Unk_ov004_0224def8::func_ov004_0222889c() {
    F(s32, 0x33c) = 0x1000;
    F(s32, 0x43c) = 0;
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_02228874() {
    F(s32, 0x198) = 0x1000;
    F(s32, 0x428) = 0x1000;
    vfunc_60(2);
}

BOOL Unk_ov004_0224def8::func_ov004_02228870() {
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_02228818() {
    s32 t = ((Unk_ov004_022288c0_Bits *)((u8 *)this + 0x334))->mid;
    u32 q = (u16)(t / 0x38);
    if (func_020e77cc((u16)(t - q * 0x38), 0x11, 0x34)) {
        if (!func_0206f11c()) {
            func_ov004_02224c90(&unk_250, 0x85e);
        }
    }
}

BOOL Unk_ov004_0224def8::func_ov004_02228800() {
    F(s32, 0x33c) = 0;
    F(s32, 0x43c) = 0;
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_022287a4() {
    s32 r = 0x1000 - func_02063a9c(F(s32, 0x43c), 0, 0x28000, 0xa000, 0xa000);
    F(s32, 0x198) = r;
    F(s32, 0x428) = r;
    F(s32, 0x43c) += 0x1000;
    if (r == 0) {
        vfunc_60(0);
    }
}

extern "C" BOOL func_ov004_02228780() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        return g->vfunc_60(1);
    }
    return 0;
}

extern "C" BOOL func_ov004_0222875c() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        return g->vfunc_60(3);
    }
    return 0;
}

extern "C" BOOL func_ov004_02228738() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        u32 t = g->unk_248.unk_04;
        if (t == 3 || t == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov004_02228720(u32 x) {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        G(u32, 0x334) = x << 12;
    }
}

extern "C" u32 func_ov004_02228700() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        return ((Unk_ov004_022288c0_Bits *)((u8 *)g + 0x334))->mid;
    }
    return 0;
}

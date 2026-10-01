// mwcc-version: 1.2/base
#include "types.h"
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei
#define func_020566bc _ZN12Unk_020dbe7c13func_020566bcEv
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02055488 _ZN12Unk_020dbe3413func_02055488Eii
#define func_020554c0 _ZN12Unk_020dbe3413func_020554c0Ev
#define func_02055a9c _ZN12Unk_020dbe4c13func_02055a9cEj
#define func_02055b00 _ZN12Unk_020dbe4c13func_02055b00Eiiiit
#define func_02055b38 _ZN12Unk_020dbe4c13func_02055b38Eiiit
#define func_02055bcc _ZN12Unk_020dbe4c13func_02055bccEjPv
#define func_02057110 _ZN12Unk_02056fd813func_02057110Ei
#define func_0205458c _ZN12Unk_0205454c13func_0205458cEv
#define func_ov045_02258e34 _ZN18Unk_ov045_02259dec8vfunc_0cEv

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
struct Unk_020dbe4c {
    Unk_020dbe4c();
    ~Unk_020dbe4c();
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

class Unk_ov068_022702b4;

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

extern "C" Unk_ov068_022702b4 *data_ov068_022711bc;
extern "C" Unk_ov068_Scene_Entry data_ov068_02270294;

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
extern void *data_021c620c;
BOOL func_020565e8(void *p, u32 i);
void func_0200402c(u32 a);
void func_02004008(u32 a);
void func_02003ff4(u32 a, u32 b);
void *func_ov004_02224d7c(void *p, u32 i);
void *func_ov004_02224d6c(void *p, u32 i);
void func_ov004_02224ff4(char *s, void *a, void *b, void *c);
void func_ov004_02224f7c(void *a, void *b);
void func_02054720(void *p, void *q, s32 a, s32 b, s32 c, s32 d);
void func_02054710(void *p);
BOOL func_02054800(void *p, void *q);
void *func_020554c0(void *p);
void func_02055b00(void *p, void *a, void *b, s32 c, s32 d, s32 e);
BOOL func_02055bcc(void *p, u32 a, void *q);
void func_02055b38(void *p, void *q, s32 a, s32 b, s32 c);
void func_02055a9c(void *p, void *q);
void func_020547cc(void *p, u32 a);
void func_020547e4(void *p);
void func_020566bc(void *p);
s32 func_ov045_02258e34();
s32 func_ov051_02258e50();
void func_ov068_0226b9a8(void *self, u8 k, void *a, void *b, u8 s0, u32 s1, u16 s2, u16 s3);
void func_ov068_0226b9ec(void *p, u32 b, void *c);
void func_02106054(u32 p, s32 a, u8 b);
void func_02055488(void *m, void (*fn)(Unk_ov068_0226c298_Arg *), void *self);
s32 func_02057110(u32 a, const char *s);
}

class Unk_ov068_022702b4 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov068_022702b4();
    virtual ~Unk_ov068_022702b4();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    void func_ov068_0226ba68();
    BOOL func_ov068_0226ba6c();
    void func_ov068_0226ba88();
    BOOL func_ov068_0226bb04();
    void func_ov068_0226bb18();
    BOOL func_ov068_0226bb58();
    void func_ov068_0226bb74();
    BOOL func_ov068_0226bbf0(s32 s);
    void func_ov068_0226bc7c(s32 a);
    void func_ov068_0226bcf8();

    /* 0x290 */ Unk_020dbe4c unk_290;
    /* 0x2b0 */ Unk_020dbe4c unk_2b0;
    /* 0x2d0 */ Unk_020dbd54 unk_2d0;
    /* 0x388 */ Unk_ov004_02224ee4 unk_388;
    /* 0x42c */ Unk_ov004_02224d60 unk_42c;
    /* 0x430 */ u8 unk_430;
    /* 0x431 */ u8 pad_431[3];
    /* 0x434 */ Unk_020dbd54 unk_434;
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

extern "C" Unk_ov068_022702b4 *func_ov068_0226c2c4();
extern "C" Unk_ov068_Scene_Entry data_ov068_02270294 = {(void *(*)())func_ov068_0226c2c4, 0x13, 0x17, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" {
Unk_ov068_022702b4 *data_ov068_022711bc;
}

extern "C" void func_ov068_0226c298(Unk_ov068_0226c298_Arg *p);
extern "C" void func_ov068_0226c2a8(Unk_ov068_0226c2a8_Arg *p);

extern "C" {
s32 func_0205458c(void *p);
BOOL func_ov068_0226b9f0();
}

extern "C" Unk_ov068_022702b4 *func_ov068_0226c2c4() {
    return new Unk_ov068_022702b4;
}

extern "C" void func_ov068_0226c2a8(Unk_ov068_0226c2a8_Arg *p) {
    void *o = p->unk_04->unk_2c;
    if (o) {
        func_ov068_0226b9ec(o, p->unk_00->unk_01, p);
    }
}

extern "C" void func_ov068_0226c298(Unk_ov068_0226c298_Arg *p) {
    p->unk_1c = (Unk_ov068_0226c298_Fn)func_ov068_0226c2a8;
    p->unk_90 = 2;
}

Unk_ov068_022702b4::Unk_ov068_022702b4() {}

Unk_ov068_022702b4::~Unk_ov068_022702b4() {}

BOOL Unk_ov068_022702b4::vfunc_00() {
    data_ov068_022711bc = this;
    func_ov068_0226bcf8();
    func_02055488(&unk_ec, func_ov068_0226c298, this);
    unk_59c = func_02057110((*(u32 *)((u8 *)&unk_ec + 0x5c)), "m_rainA");
    unk_59e = func_02057110((*(u32 *)((u8 *)&unk_ec + 0x5c)), "m_rainB");
    unk_5a0 = func_02057110((*(u32 *)((u8 *)&unk_ec + 0x5c)), "m_splash");
    func_ov068_0226bbf0(0);
    func_02004008(0x884);
    func_02004008(0x885);
    return TRUE;
}

BOOL Unk_ov068_022702b4::vfunc_18() {
    func_ov068_0226bb74();
    func_020566bc(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08.v;
    func_020547e4(&unk_ec);
    func_020566bc(&unk_290);
    *unk_290.unk_18 = unk_290.unk_08.v;
    if (unk_430) {
        func_020547e4(&unk_2d0);
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
    func_ov068_0226b9a8(this, k, &unk_434, &unk_4ec, 0, 0x1000, 0, 0);
    func_020547e4(&unk_434);
    func_02106054((*(u32 *)((u8 *)&unk_ec + 0x5c)), unk_59c, unk_59a);
    func_02106054((*(u32 *)((u8 *)&unk_ec + 0x5c)), unk_59e, unk_59a);
    func_02106054((*(u32 *)((u8 *)&unk_ec + 0x5c)), unk_5a0, unk_59a);
    return TRUE;
}

BOOL Unk_ov068_022702b4::vfunc_24() {
    func_020547cc(&unk_ec, 0);
    func_020547cc(&unk_2d0, 0);
    func_020547cc(&unk_434, 0);
    return TRUE;
}

BOOL Unk_ov068_022702b4::vfunc_0c() {
    data_ov068_022711bc = 0;
    func_ov004_02224f60();
    func_ov004_02224f7c(&unk_388, &unk_42c);
    func_ov004_02224f7c(&unk_4ec, &unk_590);
    func_02003ff4(0x884, 1);
    func_02003ff4(0x885, 1);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226bcf8() {
    func_ov004_02224f90("obj_taxi");
    if ((void *)func_ov004_02224d8c(&unk_1a4, 0)) {
        if (func_02054800(&unk_ec, data_021c620c)) {
            func_02054720(&unk_ec, (void *)func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
            func_02054710(&unk_ec);
        }
    }
    if (func_ov004_02224d6c(&unk_1a4, 0)) {
        if (func_02055bcc(&unk_2b0, (*(u32 *)((u8 *)&unk_ec + 0x5c)), data_021c620c)) {
            func_02055b38(&unk_2b0, func_ov004_02224d6c(&unk_1a4, 0), 0, 0x1000, 0);
            func_02055a9c(&unk_2b0, func_020554c0(&unk_ec));
        }
    }
    if (func_ov004_02224d7c(&unk_1a4, 0)) {
        if (func_02055bcc(&unk_290, (*(u32 *)((u8 *)&unk_ec + 0x5c)), data_021c620c)) {
            func_02055b38(&unk_290, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
            func_02055a9c(&unk_290, func_020554c0(&unk_ec));
        }
    }
    func_ov004_02224ff4("obj_taxi_fig", &unk_2d0, &unk_388, &unk_42c);
    if ((void *)func_ov004_02224d8c(&unk_388, 0)) {
        if (func_02054800(&unk_2d0, data_021c620c)) {
            func_02054720(&unk_2d0, (void *)func_ov004_02224d8c(&unk_388, 0), 1, 0x1000, 0, 0);
            func_02054710(&unk_2d0);
        }
    }
    func_ov004_02224ff4("obj_taxi_hdl", &unk_434, &unk_4ec, &unk_590);
    if ((void *)func_ov004_02224d8c(&unk_4ec, 0)) {
        if (func_02054800(&unk_434, data_021c620c)) {
            func_02054720(&unk_434, (void *)func_ov004_02224d8c(&unk_4ec, 0), 0, 0x1000, 0, 0);
            func_02054710(&unk_434);
        }
    }
}

void Unk_ov068_022702b4::func_ov068_0226bc7c(s32 a) {
    void *p = (void *)func_ov004_02224d8c(&unk_1a4, 0);
    func_02054720(&unk_ec, p, a, 0x1000, ((Unk_ov068_022702b4_Bits *)&unk_ec.unk_a4)->mid, 0);
    void *r6 = func_020554c0(&unk_ec);
    void *q = func_ov004_02224d7c(&unk_1a4, 0);
    func_02055b00(&unk_290, r6, q, a, 0x1000, unk_290.unk_08.b.mid);
}

BOOL Unk_ov068_022702b4::func_ov068_0226bbf0(s32 s) {
    static BOOL (Unk_ov068_022702b4::*tbl[3])() = {
        &Unk_ov068_022702b4::func_ov068_0226bb58,
        &Unk_ov068_022702b4::func_ov068_0226bb04,
        &Unk_ov068_022702b4::func_ov068_0226ba6c,
    };
    if (s < 3) {
        if ((this->*tbl[s])()) {
            unk_594 = s;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov068_022702b4::func_ov068_0226bb74() {
    static void (Unk_ov068_022702b4::*tbl[3])() = {
        &Unk_ov068_022702b4::func_ov068_0226bb18,
        &Unk_ov068_022702b4::func_ov068_0226ba88,
        &Unk_ov068_022702b4::func_ov068_0226ba68,
    };
    s32 s = unk_594;
    if (s < 3) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov068_022702b4::func_ov068_0226bb58() {
    unk_59a = 0x1f;
    func_ov068_0226bc7c(0);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226bb18() {
    if (func_020565e8((Unk_020dbe7c *)&unk_ec, 0)) {
        func_0200402c(0x886);
    } else if (func_020565e8((Unk_020dbe7c *)&unk_ec, 0x1c)) {
        func_0200402c(0x887);
    }
}

BOOL Unk_ov068_022702b4::func_ov068_0226bb04() {
    func_ov068_0226bc7c(0);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226ba88() {
    if (func_020565e8((Unk_020dbe7c *)&unk_ec, 0)) {
        func_0200402c(0x886);
    } else if (func_020565e8((Unk_020dbe7c *)&unk_ec, 0x1c)) {
        func_0200402c(0x887);
    }
    if (unk_598 % 3 == 0) {
        if (unk_59a >= 0) {
            unk_59a = unk_59a - 1;
            if (unk_59a == 0) {
                func_ov068_0226bbf0(2);
            }
        }
    }
    unk_598++;
}

BOOL Unk_ov068_022702b4::func_ov068_0226ba6c() {
    unk_59a = 0;
    func_ov068_0226bc7c(1);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226ba68() {}

extern "C" BOOL func_ov068_0226ba48() {
    Unk_ov068_022702b4 *g = data_ov068_022711bc;
    if (g) {
        return g->func_ov068_0226bbf0(1);
    }
    return TRUE;
}

extern "C" BOOL func_ov068_0226b9f0() {
    Unk_ov068_022702b4 *g = data_ov068_022711bc;
    if (g) {
        g->unk_430 = 1;
        func_02054720(&data_ov068_022711bc->unk_2d0, (void *)func_ov004_02224d8c(&data_ov068_022711bc->unk_388, 0), 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov068_0226b9ec(void *p, u32 b, void *c) {
}

extern "C" void func_ov068_0226b9a8(void *self, u8 k, void *sub, void *obj, u8 s0, u32 s1, u16 s2, u16 s3) {
    s32 cur = func_0205458c(sub);
    if (cur != (s32)(void *)func_ov004_02224d8c(obj, k)) {
        func_02054720(sub, (void *)func_ov004_02224d8c(obj, k), s0, s1, s2, s3);
    }
}

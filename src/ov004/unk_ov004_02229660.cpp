// mwcc-version: 1.2/sp2
// ov004 TU26: .text 0x02229660-0x0222a374 (class Unk_ov004_0224e2b8). The switch function at 0x02229c20
// (Unk_ov004_0224e2b8::vfunc_70) needs mwcc 1.2/base and is in the _switch file (object order).
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


// ---------------------------------------------------------------- secondary base at +0x290 (vtable main 0x020ddcf0)
// Unk_ov004_0224e2b8 overrides its slots 0x10, 0x14 and 0x18 with the functions its own vtable has at 0x68, 0x6c and
// 0x70, so those three slots carry the names vfunc_68/6c/70 here (thunks _ZThn656_N18Unk_ov004_0224e2b88vfunc_68Ev ...).
// Every other slot is named vfunc_sXX: main has a label _ZN12Unk_020ddcf09vfunc_sXXEv for each of them.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ u8 pad_0c[8];
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ u8 pad_18[0x16dc - 0x18];
    /* 0x16dc */ u8 unk_16dc[4];
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70(u32 a, u8 b);
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void vfunc_s30();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_ov004_02229ae0_Pad {
    s32 v[2];
    Unk_ov004_02229ae0_Pad() {}
    ~Unk_ov004_02229ae0_Pad() {}
};

struct Unk_ov004_02229970_Xyz {
    s32 x, y, z;
};

struct Unk_ov004_02229970_Glob {
    u8 pad_00[0x68];
    s32 unk_68;
};

struct Unk_ov004_02229660_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0224e2b8_Str {
    const u8 *unk_00;
    u8 unk_04;
};

struct Unk_ov004_0222a0bc_V3 {
    s32 v[3];
};

class Unk_020b6960;
class Unk_020aa3b8;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_02056654 _ZN12Unk_020dbe7c13func_02056654Ev
#define func_0203e47c _ZN12Unk_020d967013func_0203e47cEi
#define func_0203e488 _ZN12Unk_020d967013func_0203e488Ei
#define func_02067958 _ZN12Unk_020660f813func_02067958Ev
#define func_02067978 _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0
#define func_020679b4 _ZN12Unk_020660f813func_020679b4Ev
#define func_020679c0 _ZN12Unk_020660f813func_020679c0Ei
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02068290 _ZN12Unk_020ddc2413func_02068290Ev
#define func_02068298 _ZN12Unk_020ddc2413func_02068298Ei
#define func_0206829c _ZN12Unk_020ddc2413func_0206829cEv
#define func_020682a4 _ZN12Unk_020ddc2413func_020682a4Ei
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_0209e120 _ZN12Unk_0209da4413func_0209e120Ej
#define func_0209e148 _ZN12Unk_0209da4413func_0209e148Ej
#define func_0209e170 _ZN12Unk_0209da4413func_0209e170Ej
#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev
#define func_020aa608 _ZN12Unk_020aa3b813func_020aa608Ev
#define func_020aa638 _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci
#define func_020aa680 _ZN12Unk_020aa3b813func_020aa680Eii
#define func_020b68ec _ZN12Unk_020b696013func_020b68ecEP12Unk_020b6e10P4Vec3iiisih
#define func_020b6928 _ZN12Unk_020b696013func_020b6928EP12Unk_020b6e10

extern "C" {
extern u8 data_021c3cc0;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern Unk_ov004_02229970_Glob *data_020cbb18;
extern u8 data_021d7350[];
extern u8 data_021edb60[];
extern s32 data_021c620c;

void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
void _ZN12Unk_020b6e10C2Ev(void *self);
void _ZN12Unk_020b6e10D2Ev(void *self);
void _ZN12Unk_020b6a94C2Ev(void *self);
void _ZN12Unk_020b6a94D1Ev(void *self);
s32 func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02054710(void *p);
void func_020547cc(void *p, s32 a);
void func_020547e4(void *p);
BOOL func_02054800(void *p, s32 v);
BOOL func_02056654(void *p);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
void func_02067958(Unk_020660f8 *p);
void func_02067978(Unk_020660f8 *p, Unk_020ddcf0 *sec);
Unk_020aa3b8 *func_020679b4(Unk_020660f8 *p);
void func_020679c0(Unk_020660f8 *p, u32 v);
void func_02067a84(Unk_020660f8 *p, u8 *src, const void *s);
void func_02068290(void *p);
void func_02068298(void *p, s32 a);
void func_0206829c(void *p);
void func_020682a4(void *p, s32 a);
BOOL func_02072e44(void *g);
void func_0209e120(void *p, u32 n);
void func_0209e148(void *p, u32 n);
BOOL func_0209e170(void *p, u32 n);
s32 func_020aa514(Unk_020aa3b8 *p);
void func_020aa608(Unk_020aa3b8 *p);
void func_020aa638(Unk_020aa3b8 *p, u32 i, u8 *b, u32 n, void *d, s32 z, s32 c);
void func_020aa680(Unk_020aa3b8 *p, u32 n, s32 v);
BOOL func_020b68ec(Unk_020b6960 *o, void *box, s32 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
void func_020b6928(Unk_020b6960 *o, void *p);
s32 func_02067918(s32 a);
BOOL func_0206ec6c();
s32 func_0206ed18();
BOOL func_0206eca4(u32 a);
u32 func_020b50e8();
Unk_020b6960 *func_020b50b4();
BOOL func_020b6080(Unk_020b6960 *obj, Unk_ov004_02229970_Xyz *out, s32 *a, u8 *b);
s32 func_020b6014(Unk_020b6960 *o, u32 a, u32 b);
void *func_02095204(u32 x);
void *func_020951ec(s32 v);
void func_0203d704(void *p, s32 a);
void func_0203d67c(void *p);
BOOL func_0208f010();
void func_0203cb80(u32 a);
void func_0203cb48(u32 a);
void func_0203cb1c(u32 a);
u32 func_0203cb38();
void func_02003fe4(u32 a);
void func_0203ca94();
s32 func_020e9650(s32 *a, s32 *b);
void func_ov004_022248a0(void *p);
void func_ov004_022248c4(void *p);
}

class Unk_ov004_0224e2b8 : public Unk_ov004_0224d4e8, public Unk_020ddcf0 {
public:
    Unk_ov004_0224e2b8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224e2b8();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70(u32 a, u8 b);

    void func_ov004_02229780(const char *name, u32 flag);
    void func_ov004_022297d0();
    void func_ov004_02229830();
    void func_ov004_02229834();
    void func_ov004_02229858();
    void func_ov004_0222985c();
    void func_ov004_02229888();
    void func_ov004_0222988c();
    void func_ov004_022298b8();
    void func_ov004_022298bc();
    void func_ov004_022298e0();
    void func_ov004_02229900();
    void func_ov004_0222992c(const char *name, u32 flag);
    void func_ov004_0222993c();
    void func_ov004_02229964();
    void func_ov004_02229970();
    void func_ov004_02229a04();
    void func_ov004_02229a08();
    void func_ov004_02229a0c();
    void func_ov004_02229a10();
    void func_ov004_02229a4c();
    void func_ov004_02229a6c();
    void func_ov004_02229a90();
    void func_ov004_02229a94();
    void func_ov004_02229ab8();
    void func_ov004_02229abc();
    void func_ov004_02229ae0();
    void func_ov004_02229b40();
    void func_ov004_02229b64();
    void func_ov004_02229b84();
    void func_ov004_02229be0();
    void func_ov004_02229be4(s32 state);
    void func_ov004_02229e1c(Unk_ov004_0224e2b8_Str *p, s32 v);

    /* 0x2d4 */ u32 unk_2d4[0x27]; // a Unk_020d8cf4 (ctor C1 / dtor D2 by hand, as the original calls them)
    /* 0x370 */ u32 unk_370[0xaa]; // a Unk_020b6e10 (ctor C2 / dtor D2 by hand)
    /* 0x618 */ u32 unk_618[7];    // a Unk_020b6a94 (ctor C2 / dtor D1 by hand)
    /* 0x634 */ s32 unk_634;
    /* 0x638 */ u8 unk_638;
    /* 0x639 */ u8 pad_639[3];
    /* 0x63c */ u32 unk_63c;
};

#define F(T, off) (*(T *)((u8 *)this + off))

typedef void (Unk_ov004_0224e2b8::*Unk_ov004_0224e2b8_Fn)();

struct Unk_ov004_0224e2b8_Ent {
    Unk_ov004_0224e2b8_Fn enter;
    Unk_ov004_0224e2b8_Fn exit;
};

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224e2b8 *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern const u8 data_ov004_02240290[3];
extern const u8 data_ov004_02240294[4];
extern const s32 data_ov004_02240298[3];
extern const char data_ov004_022402a4[];
extern u8 data_ov004_0224e16c[2];
extern u8 data_ov004_0224e170[3];
extern u8 data_ov004_0224e174[4];
extern const char *data_ov004_0224e178;
extern char data_ov004_0224e26c[];
extern Unk_ov004_0224e2b8_Str data_ov004_0224e298;
extern Unk_ov004_0224e2b8_Str data_ov004_0224e2a0;
extern Unk_ov004_0224e2b8_Str data_ov004_0224e2a8;
extern char data_ov004_0224e3ac[];
extern char data_ov004_0224e3c8[];
extern Unk_ov004_0224e2b8 *volatile data_ov004_02251288;
extern Unk_ov004_0224e2b8_Ent data_ov004_02251298[15];
Unk_ov004_0224e2b8 *func_ov004_0222a2cc();
}

// ---- definitions ----

// ---------------------------------------------------------------- data
// The six 4-byte objects and the state table are initialised by __sinit_ov004_022475a0 in this order.
extern "C" Unk_ov004_Quad data_ov004_02251294(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02251284(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225128c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02251280(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225127c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02251290(0x14, 0x18, 0x18, 0x1f);

// State table: {function run on entering the state, function run every frame}.
#define FN(x) (Unk_ov004_0224e2b8_Fn)&Unk_ov004_0224e2b8::func_ov004_##x
extern "C" Unk_ov004_0224e2b8_Ent data_ov004_02251298[15] = {
    { FN(02229be0), FN(02229b84) },
    { FN(02229b64), FN(02229b40) },
    { FN(02229ae0), FN(02229abc) },
    { FN(02229ab8), FN(02229a94) },
    { FN(02229a90), FN(02229a6c) },
    { FN(02229a4c), FN(02229a10) },
    { FN(02229a0c), FN(02229a08) },
    { FN(02229a04), FN(02229970) },
    { FN(02229964), FN(0222993c) },
    { FN(0222992c), FN(02229900) },
    { FN(022298e0), FN(022298bc) },
    { FN(022298b8), FN(0222988c) },
    { FN(02229888), FN(0222985c) },
    { FN(02229858), FN(02229834) },
    { FN(02229830), FN(022297d0) },
};
#undef FN

extern "C" {
extern const u8 data_ov004_02240290[3] = { 0x1b, 0x17, 0x20 };
extern const u8 data_ov004_02240294[4] = { 0x0f, 0x1b, 0x17, 0x20 };
extern const s32 data_ov004_02240298[3] = { 0x11000, 0, 0x11000 };
extern const char data_ov004_022402a4[] = "sp_etc_sequence1";
u8 data_ov004_0224e16c[2] = { 0x14, 0x15 };
u8 data_ov004_0224e170[3] = { 0x08, 0x11, 0x17 };
u8 data_ov004_0224e174[4] = { 0x07, 0x08, 0x11, 0x17 };
char data_ov004_0224e26c[] = "sp_etc_sequence1";
const char *data_ov004_0224e178 = data_ov004_0224e26c;
Unk_ov004_0224e2b8_Str data_ov004_0224e298 = { data_ov004_0224e174, 4 };
Unk_ov004_0224e2b8_Str data_ov004_0224e2a0 = { data_ov004_0224e170, 3 };
Unk_ov004_0224e2b8_Str data_ov004_0224e2a8 = { data_ov004_0224e16c, 2 };
char data_ov004_0224e3ac[] = "/roomObj/obj_telephone.arc";
char data_ov004_0224e3c8[] = "/roomObj/obj_telephone.nsbtx";
Unk_ov004_0224e2b8 *volatile data_ov004_02251288;
}
extern "C" Unk_ov004_SceneEntry data_ov004_0224e280 = { func_ov004_0222a2cc, 0x2d, 0x33, 0, 0xc8000, 0x12c000, 0x258000 };

// ---------------------------------------------------------------- 0x02229660
extern "C" void func_ov004_02229660() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        func_02054720(&data_ov004_02251288->unk_ec, func_ov004_02224d8c(&g->unk_1a4, 0), 1, 0x1000, ((Unk_ov004_02229660_Bits *)((u8 *)g + 0x18c))->mid, 0);
    }
}

extern "C" void func_ov004_022296ac() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        func_02054720(&data_ov004_02251288->unk_ec, func_ov004_02224d8c(&g->unk_1a4, 0), 3, 0x1000, ((Unk_ov004_02229660_Bits *)((u8 *)g + 0x18c))->mid, 0);
    }
}

extern "C" void func_ov004_022296f8() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        func_02054720(&data_ov004_02251288->unk_ec, func_ov004_02224d8c(&g->unk_1a4, 0), 1, 0x1000, 0, 0);
    }
}

extern "C" BOOL func_ov004_02229738() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        g->func_ov004_02229be4(10);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov004_0222975c() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        if (g->unk_638) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov004_0224e2b8::func_ov004_02229780(const char *name, u32 flag) {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    vfunc_s08();
    func_020a710c(name);
    unk_1e = flag;
    func_02067978(p, this);
    p->unk_08 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_022297d0() {
    if (func_0206ec6c()) {
        Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
        u8 c = 0x10;
        if (!func_0206ed18()) {
            c = 0x18;
        }
        func_02067a84(p, &c, data_ov004_0224e26c);
        p->unk_08 = 1;
        if (func_020b50e8() == 6) {
            func_ov004_02229be4(0xc);
        } else {
            func_ov004_02229be4(4);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229830() {}

void Unk_ov004_0224e2b8::func_ov004_02229834() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 5) {
        func_0206eca4(0x30);
        func_ov004_02229be4(0xe);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229858() {}

void Unk_ov004_0224e2b8::func_ov004_0222985c() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 0) {
        func_02067958(p);
        unk_638 = 0;
        func_ov004_02229be4(7);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229888() {}

void Unk_ov004_0224e2b8::func_ov004_0222988c() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 0) {
        func_02067958(p);
        unk_638 = 0;
        func_ov004_02229be4(7);
    }
}

void Unk_ov004_0224e2b8::func_ov004_022298b8() {}

void Unk_ov004_0224e2b8::func_ov004_022298bc() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02229be4(0xb);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_022298e0() {
    func_ov004_02229780(data_ov004_0224e26c, 0xe);
    unk_638 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_02229900() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 0) {
        func_02067958(p);
        unk_638 = 0;
        func_ov004_02229be4(7);
    }
}

void Unk_ov004_0224e2b8::func_ov004_0222992c(const char *name, u32 flag) {
    func_ov004_02229780(data_ov004_0224e26c, 0x22);
}

void Unk_ov004_0224e2b8::func_ov004_0222993c() {
    BOOL f;
    if (data_021c3cc0 == 2) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f) {
        func_ov004_02229be4(9);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229964() {
    unk_638 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_02229970() {
    Unk_ov004_02229970_Xyz out;
    s32 a;
    u8 b;
    BOOL f;
    if (data_021c3cc0 == 2) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f) {
        func_020b6928(func_020b50b4(), unk_370);
        if (func_020b50e8() == 6) {
            if (data_020cbb18->unk_68 != 4) {
                return;
            }
        }
        if (func_0208f010()) {
            if (data_021ef5d0 && data_021ef5cc) {
                f = TRUE;
            } else {
                f = FALSE;
            }
            if (f) {
                if (func_020b6080(func_020b50b4(), &out, &a, &b)) {
                    if (a == 0xd) {
                        func_ov004_02229be4(0xa);
                    }
                }
            }
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229a04() {}
void Unk_ov004_0224e2b8::func_ov004_02229a08() {}
void Unk_ov004_0224e2b8::func_ov004_02229a0c() {}

void Unk_ov004_0224e2b8::func_ov004_02229a10() {
    if (func_02056654((u8 *)this + 0x188)) {
        func_0203e47c(this, this);
        func_0203d67c(this);
        func_ov004_02229be4(6);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229a4c() {
    func_ov004_022248a0(this);
    func_ov004_02224ca4(&unk_250, 0x4d5);
}

void Unk_ov004_0224e2b8::func_ov004_02229a6c() {
    if (unk_3c) {
        if (!unk_3c->unk_04) {
            func_ov004_02229be4(5);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229a90() {}

void Unk_ov004_0224e2b8::func_ov004_02229a94() {
    if (unk_3c) {
        if (!unk_3c->unk_04) {
            func_ov004_02229be4(5);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229ab8() {}

void Unk_ov004_0224e2b8::func_ov004_02229abc() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02229be4(3);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229ae0() {
    Unk_ov004_02229ae0_Pad pad;
    func_0203e488(this, this);
    func_020a710c(data_ov004_0224e178);
    if (func_02072e44(data_020cbb18)) {
        unk_1e = 0x1d;
    } else {
        unk_1e = 0xe;
    }
    unk_3c->unk_08 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_02229b40() {
    if (func_02056654((u8 *)this + 0x188)) {
        func_ov004_02229be4(2);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229b64() {
    func_ov004_022248c4(this);
    func_ov004_02224ca4(&unk_250, 0x4d4);
}

void Unk_ov004_0224e2b8::func_ov004_02229b84() {
    s32 r5 = func_020b6014(func_020b50b4(), 0, 0);
    void *r0 = func_02095204(4);
    if (r5 && r0 && (void *)r5 == r0) {
        if (vfunc_48(func_020951ec(4))) {
            func_0203d704(this, 0);
            return;
        }
    }
    func_020b6928(func_020b50b4(), unk_370);
}

void Unk_ov004_0224e2b8::func_ov004_02229be0() {}

void Unk_ov004_0224e2b8::func_ov004_02229be4(s32 state) {
    if (data_ov004_02251298[state].enter) {
        (this->*data_ov004_02251298[state].enter)();
    }
    unk_634 = state;
}

// ---------------------------------------------------------------- 0x02229e1c
void Unk_ov004_0224e2b8::func_ov004_02229e1c(Unk_ov004_0224e2b8_Str *p, s32 v) {
    Unk_020660f8 *m = unk_3c;
    Unk_020aa3b8 *o = func_020679b4(m);
    const u8 *s = p->unk_00;
    u8 n = p->unk_04;
    s32 z = 0;
    s32 i;
    s32 m1 = -1;
    if (v != m1) {
        func_020aa680(o, n, v);
    } else {
        func_020aa680(o, n, m1);
    }
    s32 c0 = 0;
    for (i = 0; i < n; i++) {
        s32 c = c0;
        u32 b = s[i];
        if ((u8)(b + 0xec) <= 1) {
            c = 3;
        }
        u8 bb = b;
        func_020aa638(o, i, &bb, 1, data_021edb60, z, c);
    }
    func_020aa608(o);
    func_020679c0(m, 1);
}

void Unk_ov004_0224e2b8::vfunc_6c() {
    Unk_020660f8 *m = unk_3c;
    switch (unk_1e) {
    case 0x1b:
        func_ov004_02229e1c(&data_ov004_0224e2a8, -1);
        break;
    case 0xe:
    case 0x1f:
        if (func_020b50e8() == 6) {
            func_ov004_02229e1c(&data_ov004_0224e298, 3);
        } else {
            func_ov004_02229e1c(&data_ov004_0224e2a0, 2);
        }
        break;
    case 0xf:
        m->unk_14 = 1;
        func_ov004_02229be4(0xd);
        break;
    case 0x20:
        func_0206829c(m->unk_16dc);
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        func_02068290(m->unk_16dc);
        break;
    }
}

void Unk_ov004_0224e2b8::vfunc_68() {
    Unk_020660f8 *m = unk_3c;
    switch (unk_1e) {
    case 0xe:
        func_020682a4(m->unk_16dc, 0);
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        func_02068298(m->unk_16dc, 0);
        break;
    }
}

void *Unk_ov004_0224e2b8::vfunc_50() {
    return (void *)data_ov004_02240298;
}

void Unk_ov004_0224e2b8::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        func_ov004_02229be4(1);
        break;
    case 8:
        func_ov004_02229be4(0);
        break;
    }
}

BOOL Unk_ov004_0224e2b8::vfunc_48(void *a) {
    Unk_020d9670 *o = (Unk_020d9670 *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, (s32 *)data_ov004_02240298) < 0x2333) {
            u32 d = (u16)(*(s16 *)((u8 *)o + 0x8e) - (F(s16, 0x8e) + 0x8000));
            if (d < 0x1000 || d >= 0xf000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224e2b8::vfunc_0c() {
    func_ov004_02224f60();
    data_ov004_02251288 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224e2b8::vfunc_24() {
    func_020547cc(&unk_ec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224e2b8::vfunc_18() {
    if (data_ov004_02251298[unk_634].exit) {
        (this->*data_ov004_02251298[unk_634].exit)();
    }
    func_020547e4(&unk_ec);
    return TRUE;
}

BOOL Unk_ov004_0224e2b8::vfunc_00() {
    data_ov004_02251288 = this;
    unk_5c[0] = data_ov004_02240298[0]; unk_5c[1] = data_ov004_02240298[1]; unk_5c[2] = data_ov004_02240298[2];
    func_0203e624(0);
    func_ov004_02224fc8(data_ov004_0224e3ac, data_ov004_0224e3c8);
    if (func_ov004_02224d8c(&unk_1a4, 0)) {
        if (func_02054800(&unk_ec, data_021c620c)) {
            s32 r = func_ov004_02224d8c(&unk_1a4, 0);
            func_02054720(&unk_ec, r, 3, 0x1000, 0, 0);
            func_02054710(&unk_ec);
        }
    }
    Unk_ov004_0222a0bc_V3 v;
    v.v[0] = data_ov004_02240298[0];
    v.v[1] = data_ov004_02240298[1];
    v.v[2] = data_ov004_02240298[2];
    func_020b68ec(func_020b50b4(), unk_370, v.v, 0x2000, 0x2000, 0x2000, 0, 0xd, 0xff);
    u8 *const g = data_021d7350;
    if (func_020b50e8() == 6) {
        if (func_0209e170(g, 0) == 0) {
            func_ov004_02229be4(8);
            func_0209e148(g, 0);
        } else {
            func_ov004_02229be4(7);
        }
    } else {
        func_ov004_02229be4(0);
    }
    return TRUE;
}

Unk_ov004_0224e2b8::~Unk_ov004_0224e2b8() {
    _ZN12Unk_020b6a94D1Ev(unk_618);
    _ZN12Unk_020b6e10D2Ev(unk_370);
    _ZN12Unk_020d8cf4D2Ev(unk_2d4);
}

Unk_ov004_0224e2b8::Unk_ov004_0224e2b8() {
    _ZN12Unk_020d8cf4C1Ev(unk_2d4);
    _ZN12Unk_020b6e10C2Ev(unk_370);
    _ZN12Unk_020b6a94C2Ev(unk_618);
}

extern "C" Unk_ov004_0224e2b8 *func_ov004_0222a2c0() {
    return data_ov004_02251288;
}

extern "C" Unk_ov004_0224e2b8 *func_ov004_0222a2cc() {
    return new Unk_ov004_0224e2b8;
}

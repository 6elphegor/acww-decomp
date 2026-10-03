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


struct Unk_ov068_022708fc_Obj {
    u8 pad[0x18];
    u8 unk_18;
};

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

struct Unk_ov068_022708fc_Color {
    u8 a, b, c, d;
    Unk_ov068_022708fc_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct Unk_ov004_02224d60 {
    inline Unk_ov004_02224d60() { func_ov004_02224d60(this); }
    inline ~Unk_ov004_02224d60() { func_ov004_02224d5c(this); }
    u32 unk_00;
};

extern "C" {
void func_ov004_02224ff4(char *s, void *a, void *b, void *c);
void func_ov004_02224f7c(void *a, void *b);
s32 _ZN18Unk_ov004_0224d4e819func_ov004_02224f20Ev(void *self, u32 v);
void func_020e761c(void *dst, s32 v, s32 n);
void NNS_G3dMdlSetMdlAlpha(void *o, u32 i, u32 v);
}

class Unk_ov068_022708fc : public Unk_ov004_0224d4e8 {
public:
    Unk_ov068_022708fc();
    virtual ~Unk_ov068_022708fc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60(u32 v);

    void func_ov068_0226d8a0();
    BOOL func_ov068_0226d8ac();
    void func_ov068_0226d8bc();
    BOOL func_ov068_0226d8c8();
    void func_ov068_0226d8d8();

    /* 0x290 */ s32 unk_290;
    /* 0x294 */ s32 unk_294;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 pad_299[3];
    /* 0x29c */ Unk_020dbd54 unk_29c;
    /* 0x354 */ Unk_ov004_02224ee4 unk_354;
    /* 0x3f8 */ Unk_ov004_02224d60 unk_3f8;
};

// colour constants (sinit store order = definition order), the registration entry, the instance pointer
extern "C" Unk_ov068_022708fc_Color data_ov068_02271268(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_02271264(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_02271254(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_0227126c(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_02271258(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_0227125c(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov068_022708fc *func_ov068_0226dbcc();
extern "C" Unk_ov068_Scene_Entry data_ov068_022708dc = {(void *(*)())func_ov068_0226dbcc, 0x10, 0x12, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" {
Unk_ov068_022708fc *data_ov068_02271270;
}

extern "C" Unk_ov068_022708fc *func_ov068_0226dbcc() {
    return new Unk_ov068_022708fc();
}

Unk_ov068_022708fc::Unk_ov068_022708fc() {
    data_ov068_02271270 = NULL;
}

Unk_ov068_022708fc::~Unk_ov068_022708fc() {}

BOOL Unk_ov068_022708fc::vfunc_00() {
    data_ov068_02271270 = this;
    func_ov004_02224f58(1);
    func_ov004_02224f90("obj_ms_cafe");
    unk_290 = unk_294 = 1;
    func_ov004_02224ff4("obj_cf_chr", &unk_29c, &unk_354, &unk_3f8);
    vfunc_60(1);
    unk_298 = 1;
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_18() {
    func_ov068_0226d8d8();
    if (unk_290 != unk_294) {
        func_020e761c(&unk_290, unk_294, 2);
    }
    u32 n = (*(Unk_ov068_022708fc_Obj **)((u8 *)this + 0x148))->unk_18;
    for (u32 i = 0; i < n; i++) {
        NNS_G3dMdlSetMdlAlpha(*(Unk_ov068_022708fc_Obj **)((u8 *)this + 0x148), i, (u8)unk_290);
    }
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_24() {
    unk_ec.func_020547cc(0);
    if (unk_298 != 0) {
        unk_29c.func_020547cc(0);
    }
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_0c() {
    func_ov004_02224f60();
    if (unk_298 != 0) {
        func_ov004_02224f7c(&unk_354, &unk_3f8);
    }
    data_ov068_02271270 = NULL;
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_60(u32 v) {
    static BOOL (Unk_ov068_022708fc::*tbl[2])() = {
        &Unk_ov068_022708fc::func_ov068_0226d8c8,
        &Unk_ov068_022708fc::func_ov068_0226d8ac,
    };
    if (v < 2) {
        if ((this->*tbl[v])()) {
            if (_ZN18Unk_ov004_0224d4e819func_ov004_02224f20Ev(this, v)) {
                unk_248.unk_04 = v;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov068_022708fc::func_ov068_0226d8d8() {
    static void (Unk_ov068_022708fc::*tbl[2])() = {
        &Unk_ov068_022708fc::func_ov068_0226d8bc,
        &Unk_ov068_022708fc::func_ov068_0226d8a0,
    };
    if (unk_248.unk_04 < 2) {
        (this->*tbl[unk_248.unk_04])();
    }
}

BOOL Unk_ov068_022708fc::func_ov068_0226d8c8() {
    unk_294 = 1;
    return TRUE;
}

void Unk_ov068_022708fc::func_ov068_0226d8bc() {
    unk_294 = 1;
}

BOOL Unk_ov068_022708fc::func_ov068_0226d8ac() {
    unk_294 = 0x1f;
    return TRUE;
}

void Unk_ov068_022708fc::func_ov068_0226d8a0() {
    unk_294 = 0x1f;
}

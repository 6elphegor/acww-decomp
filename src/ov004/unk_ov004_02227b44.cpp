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

struct Unk_ov004_02227728_Rec {
    u16 (*unk_00)(u32);
    u32 unk_04;
    const char *unk_08;
    const char *unk_0c;
};

class Unk_ov004_0224dbc0 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224dbc0();
    virtual ~Unk_ov004_0224dbc0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    BOOL func_02227b44(s32 c);
    void func_02227b7c();
    void func_02227bfc(s32 c, void *o);

    s8 *unk_290;
};

struct Unk_ov004_02227bfc_Out {
    u8 pad_00[0xb8];
    s32 *unk_b8;
};

struct Unk_ov004_02227cbc_Obj {
    u8 pad_00[0x14];
    void (*unk_14)(void *);
    u8 pad_18[0x8e - 0x14 - 4];
    u8 unk_8e;
};

struct Unk_ov004_02227ccc_Sub {
    u8 pad_00[0x2c];
    Unk_ov004_0224dbc0 *unk_2c;
};
struct Unk_ov004_02227ccc_Ctx {
    u8 unk_00;
    u8 unk_01;
};
struct Unk_ov004_02227ccc_Obj {
    Unk_ov004_02227ccc_Ctx *unk_00;
    Unk_ov004_02227ccc_Sub *unk_04;
};

extern "C" {
extern void *data_021c620c;
extern u8 data_021ed0a0[];
s32 func_ov004_02224d8c(void *, u32);
void *func_020e8608(void *heap, u32 size);
s32 _ZN12Unk_0206fe8013func_02070358EPt(void *p, u16 *v);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 _ZN12Unk_02056fd813func_02056fccEi(void *p, char *name);
s32 _ZN12Unk_020dbd5413func_020547ccEPv(void *p, u32 a);
s32 _ZN12Unk_020dbe3413func_02055488Eii(void *p, void *fn, void *self);
void func_ov004_02227cbc(void *p);
void func_ov004_02227ccc(Unk_ov004_02227ccc_Obj *o);
const Unk_ov004_02227728_Rec *func_ov004_02227ce8(u32 i);
u16 func_ov004_02227cfc(u32 i);
Unk_ov004_0224dbc0 *func_ov004_02227d14();
void func_0204a9ac();
}

#define F(T, off) (*(T *)((u8 *)this + off))
// declarations (definition order below sets the data layout)
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e08; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e18; }
extern "C" { extern char data_ov004_0224db78[0x20]; }
extern "C" { extern char data_ov004_02250e20[0x28]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e14; }
extern "C" { extern char data_ov004_0224db98[0x20]; }
extern "C" { extern char data_ov004_0224db5c[0x1c]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e1c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e10; }
extern "C" { extern const Unk_ov004_02227728_Rec data_ov004_02240270[2]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e0c; }
extern "C" { extern char data_ov004_0224db40[0x1c]; }
extern "C" { extern Unk_ov004_Scene_Entry data_ov004_0224db28; }

extern "C" Unk_ov004_Rgba data_ov004_02250e08(31, 20, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e18(20, 20, 31, 31);

extern "C" char data_ov004_0224db78[0x20] = "/roomObj/obj_ms_picture.nsbtx";

extern "C" char data_ov004_02250e20[0x28] = {0};

extern "C" Unk_ov004_Rgba data_ov004_02250e14(31, 31, 20, 31);

extern "C" char data_ov004_0224db98[0x20] = "/roomObj/obj_ms_insectA.nsbtx";

extern "C" char data_ov004_0224db5c[0x1c] = "/roomObj/obj_ms_insectA.arc";

extern "C" Unk_ov004_Rgba data_ov004_02250e1c(20, 31, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e10(20, 31, 31, 31);

extern "C" const Unk_ov004_02227728_Rec data_ov004_02240270[2] = {
    {func_ov004_02227cfc, 0x14, data_ov004_0224db40, data_ov004_0224db78},
    {(u16 (*)(u32))func_0204a9ac, 0x38, data_ov004_0224db5c, data_ov004_0224db98},
};

extern "C" Unk_ov004_Rgba data_ov004_02250e0c(20, 24, 24, 31);

// ---------------------------------------------------------------- data
extern "C" char data_ov004_0224db40[0x1c] = "/roomObj/obj_ms_picture.arc";

extern "C" Unk_ov004_Scene_Entry data_ov004_0224db28 = {(void *(*)())func_ov004_02227d14, 0x14, 0x18, {0, 0xc8000, 0x12c000, 0x258000}};

extern "C" Unk_ov004_0224dbc0 *func_ov004_02227d14() {
    return new Unk_ov004_0224dbc0();
}

extern "C" u16 func_ov004_02227cfc(u32 i) {
    return i < 0x14 ? i * 4 + 0x3894 : 0x3894;
}

extern "C" const Unk_ov004_02227728_Rec *func_ov004_02227ce8(u32 i) {
    if (i < 2) {
        return &data_ov004_02240270[i];
    }
    return &data_ov004_02240270[0];
}

extern "C" void func_ov004_02227ccc(Unk_ov004_02227ccc_Obj *o) {
    Unk_ov004_0224dbc0 *b = o->unk_04->unk_2c;
    if (b != 0) {
        b->func_02227bfc(o->unk_00->unk_01, o);
    }
}

extern "C" void func_ov004_02227cbc(void *p) {
    Unk_ov004_02227cbc_Obj *o = (Unk_ov004_02227cbc_Obj *)p;
    o->unk_14 = (void (*)(void *))func_ov004_02227ccc;
    o->unk_8e = 2;
}

Unk_ov004_0224dbc0::Unk_ov004_0224dbc0() {}

Unk_ov004_0224dbc0::~Unk_ov004_0224dbc0() {}

BOOL Unk_ov004_0224dbc0::vfunc_00() {
    const Unk_ov004_02227728_Rec *r = func_ov004_02227ce8(F(s32, 0x08));
    func_ov004_02224fc8((char *)r->unk_08, (char *)r->unk_0c);
    _ZN12Unk_020dbe3413func_02055488Eii((u8 *)this + 0xec, (void *)func_ov004_02227cbc, this);
    func_02227b7c();
    return TRUE;
}

BOOL Unk_ov004_0224dbc0::vfunc_18() {
    return TRUE;
}

BOOL Unk_ov004_0224dbc0::vfunc_24() {
    _ZN12Unk_020dbd5413func_020547ccEPv((u8 *)this + 0xec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224dbc0::vfunc_0c() {
    func_ov004_02224f60();
    return TRUE;
}

void Unk_ov004_0224dbc0::func_02227bfc(s32 c, void *o) {
    *((Unk_ov004_02227bfc_Out *)o)->unk_b8 = func_02227b44(c);
}

void Unk_ov004_0224dbc0::func_02227b7c() {
    const Unk_ov004_02227728_Rec *r = func_ov004_02227ce8(F(s32, 0x08));
    unk_290 = (s8 *)func_020e8608(data_021c620c, r->unk_04);
    u32 z = 0;
    u32 i;
    for (i = 0; i < r->unk_04; i++) {
        u16 v = r->unk_00(i);
        u32 f = z;
        if (_ZN12Unk_0206fe8013func_02070358EPt(data_021ed0a0, &v) != 0) {
            f = 1;
        }
        func_020639e8(data_ov004_02250e20, "p%d_%d", i, f);
        unk_290[i] = _ZN12Unk_02056fd813func_02056fccEi(F(void *, 0x148), data_ov004_02250e20);
    }
}

BOOL Unk_ov004_0224dbc0::func_02227b44(s32 c) {
    const Unk_ov004_02227728_Rec *r = func_ov004_02227ce8(F(s32, 0x08));
    u32 i = 0;
    u32 n = r->unk_04;
    for (; i < n; i++) {
        if (c == unk_290[i]) {
            return TRUE;
        }
    }
    return FALSE;
}

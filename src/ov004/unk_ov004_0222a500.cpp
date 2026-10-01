#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- real symbol names of main-module methods
// (called as free functions with the object as first argument; the mangled name is the symbols.txt name)
#define func_02003c30 _ZN12Unk_02003c3013func_02003c30Ev
#define func_02003c50 _ZN12Unk_02003c4013func_02003c50EPv
#define func_02003c70 _ZN12Unk_02003c4013func_02003c70EP16Unk_02003a6c_Vec
#define func_02003cbc _ZN12Unk_02003c3013func_02003cbcEv
#define func_02033914 _ZN12Unk_0203389c13func_02033914Ei
#define func_0203398c _ZN12Unk_0203398c13func_0203398cEiiii
#define func_02054584 _ZN12Unk_0205454c13func_02054584Ev
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_02055488 _ZN12Unk_020dbe3413func_02055488Eii
#define func_020554c0 _ZN12Unk_020dbe3413func_020554c0Ev
#define func_020555dc _ZN12Unk_020dbe3413func_020555dcEv
#define func_02055600 _ZN12Unk_020dbe3413func_02055600EP16Unk_020553f8_Resj
#define func_02055a9c _ZN12Unk_020dbe4c13func_02055a9cEj
#define func_02055b38 _ZN12Unk_020dbe4c13func_02055b38Eiiit
#define func_02055bcc _ZN12Unk_020dbe4c13func_02055bccEjPv
#define func_020566bc _ZN12Unk_020dbe7c13func_020566bcEv
#define func_020567e4 _ZN12Unk_02056b7413func_020567e4Ev
#define func_02056a78 _ZN12Unk_02056b7413func_02056a78EPhii
#define func_02056ab0 _ZN12Unk_02056b7413func_02056ab0EPhPKcS2_
#define func_02056b28 _ZN12Unk_02056b7413func_02056b28EPhPKc
#define func_02056fcc _ZN12Unk_02056fd813func_02056fccEi
#define func_02057110 _ZN12Unk_02056fd813func_02057110Ei
#define func_0206052c _ZN12Unk_0206022c13func_0206052cEi
#define func_020607e0 _ZN12Unk_02060a9013func_020607e0EPtj
#define func_02060808 _ZN12Unk_02060a9013func_02060808EPtj
#define func_02060834 _ZN12Unk_02060a9013func_02060834EPi
#define func_02060850 _ZN12Unk_02060a9013func_02060850EPi
#define func_020716e8 _ZN12Unk_020718a413func_020716e8Eii
#define func_020b1ddc _ZN12Unk_020b1ddc13func_020b1ddcEv
#define func_020b1e74 _ZN12Unk_020b1ddc13func_020b1e74Ev
#define func_020b6860 _ZN12Unk_020b696013func_020b6860EP12Unk_020b6a0cP4Vec3S3_S3_ih
#define func_020b6890 _ZN12Unk_020b696013func_020b6890EP12Unk_020b6a0c
#define func_020b8840 _ZN12Unk_020e45e013func_020b8840EPvjS0_jj
#define func_020b8930 _ZN12Unk_020e45e013func_020b8930Ev

// ---------------------------------------------------------------- library-side classes (real symbols)
struct Unk_02000c8c {
    s32 x, y, z;
    Unk_02000c8c() {
        x = 0;
        y = 0;
        z = 0;
    }
    Unk_02000c8c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_02000c8c();
};

struct Unk_0203442c {
    u16 v;
    Unk_0203442c(u16 a) {
        v = a;
    }
    ~Unk_0203442c();
};

extern "C" {
void func_0203c2cc(void *o);
void func_020b8d98(void *o);
}

struct Unk_0203c2cc {
    u8 pad[0x20f0 - 0x2c];
    Unk_0203c2cc() {
        func_0203c2cc(this);
    }
};

struct Unk_020b8d98 {
    u8 pad[0x10f0 - 0x2c];
    Unk_020b8d98() {
        func_020b8d98(this);
    }
};

class Unk_020e45e0 {
public:
    Unk_020e45e0();
    virtual BOOL vfunc_00();
    u8 pad_04[0x24];
};

struct Unk_02056b74 {
    u8 *unk_00;
    s8 unk_04;

    Unk_02056b74();
    ~Unk_02056b74();
};

struct Unk_020dbd54 {
    Unk_020dbd54();
    ~Unk_020dbd54();
    u8 pad[0x5c];
};

extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *ctor, void *dtor);
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *dtor);
void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
void _ZN18Unk_ov004_0222ac38C1Ev(void *self);
void _ZN18Unk_ov004_0222ac38D1Ev(void *self);
}

class Unk_020dbe4c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    u8 pad_04[4];
    u32 unk_08;
    u8 pad_0c[0xc];
};

struct Unk_020b6a0c {
    Unk_020b6a0c();
    ~Unk_020b6a0c();
    u8 pad[0x20];
};

struct Unk_02056fd8 {
    u8 pad[4];
};

// ---------------------------------------------------------------- shared helper types
struct Unk_ov004_0222a994_Ctx {
    u8 pad[0xb4];
    s32 *unk_b4;
};

struct Unk_ov004_0222a994_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0222a994_Pad {
    s32 v[2];
    Unk_ov004_0222a994_Pad() {}
    ~Unk_ov004_0222a994_Pad() {}
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 a;
    u16 b;
};

struct Unk_ov004_0222a6c0_Fx {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 pad_04[0x0c];
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 pad_14[4];
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ u8 pad_20[0x0c];
    /* 0x2c */ u16 unk_2c;
    /* 0x2e */ u16 unk_2e;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
};

struct Unk_ov004_0222a6c0_Obj {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0xb0 - 0x0c];
    /* 0xb0 */ Unk_ov004_0222a6c0_Fx *unk_b0;
    /* 0xb4 */ u8 pad_b4[0xd8 - 0xb4];
    /* 0xd8 */ u8 *unk_d8;
};

struct Unk_ov004_0222a6c0_Rec {
    u8 pad_00[0x20];
    u16 unk_20;
    u16 unk_22;
    s32 unk_24;
    s32 unk_28;
};

struct Unk_ov004_0222b510_Grid {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
};

struct Unk_ov004_0222b45c_Cell {
    u8 pad_00[0x20];
    u8 *unk_20;
};

struct Unk_ov004_0222b45c_Res {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[8];
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_ov004_0222b3e8_Ent {
    u8 pad[0xc];
    u32 flags;
};

struct Unk_ov004_0222b430_Mtx {
    s32 v[12];
};

struct Unk_ov004_0222b954_Pair {
    volatile u16 a;
    volatile u16 b;
};

struct Unk_ov004_0222b9a4_Vec {
    s32 x, y, z;
};

// ---------------------------------------------------------------- classes of this unit
class Unk_ov004_0224e478 : public Unk_020dbe4c {
public:
    Unk_ov004_0224e478();
    virtual ~Unk_ov004_0224e478();

    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};

// object at manager+0x1228: dummy floor
class Unk_ov004_0222aed0 {
public:
    Unk_ov004_0222aed0();
    ~Unk_ov004_0222aed0();
    void func_ov004_0222aed0();
    BOOL func_ov004_0222aedc(u16 *q, Unk_02056fd8 *a, s32 key);
    void func_ov004_0222b070(u16 *q, u32 key);
    BOOL func_ov004_0222b0a4(u16 v, Unk_02056fd8 *a, s32 key);
    BOOL func_ov004_0222b0bc(u8 *buf, u8 *p);
    u32 func_ov004_0222b0f0();
    u16 *func_ov004_0222b0fc();
    u16 *func_ov004_0222b100();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ Unk_020e45e0 unk_04;
    /* 0x002c */ Unk_0203c2cc unk_2c;
    /* 0x20f0 */ s32 unk_20f0;
    /* 0x20f4 */ Unk_02056b74 unk_20f4;
    /* 0x20fc */ u8 *unk_20fc;
};

// object at manager+0x128: dummy wall
class Unk_ov004_0222b3a8 {
public:
    Unk_ov004_0222b3a8();
    ~Unk_ov004_0222b3a8();

    void func_ov004_0222b330(u16 v, void *a, s32 b);
    BOOL func_ov004_0222b348(u8 *a, u32 b);
    u32 func_ov004_0222b37c();
    u16 *func_ov004_0222b388();
    u16 *func_ov004_0222b38c();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ Unk_020e45e0 unk_04;
    /* 0x002c */ Unk_020b8d98 unk_2c;
    /* 0x10f0 */ s32 unk_10f0;
    /* 0x10f4 */ Unk_02056b74 unk_10f4;
    /* 0x10fc */ u8 *unk_10fc;
};

// the symbols file names two methods of the wall object after a second class
class Unk_ov004_0222b15c : public Unk_ov004_0222b3a8 {
public:
    void func_ov004_0222b15c();
    BOOL func_ov004_0222b168(u16 *q, Unk_02056fd8 *a, s32 key);
};

// class Y (billboard/effect handle, base Unk_020b6a0c)
class Unk_ov004_0222ac38 : public Unk_020b6a0c {
public:
    Unk_ov004_0222ac38();
    ~Unk_ov004_0222ac38();
    void func_ov004_0222ac34();
    void func_ov004_0222ac38();
    void func_ov004_0222ac54();

    /* 0x20 */ u8 unk_20;
};

// class Z (two 0x9c-byte elements)
class Unk_ov004_0222ae38 {
public:
    Unk_ov004_0222ae38();
    ~Unk_ov004_0222ae38();
    void func_ov004_0222acdc();
    void func_ov004_0222acf4();
    BOOL func_ov004_0222ad78();
    BOOL func_ov004_0222ad9c();

    u8 unk_00[2][0x9c];
};

class Unk_ov004_0224e488 : public Unk_020d8c7c {
public:
    Unk_ov004_0224e488();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224e488();
    virtual void vfunc_48(s32 a, Unk_ov004_0222a994_Ctx *b);
    virtual void vfunc_4c(s32 idx, Unk_ov004_0222a6c0_Obj *o);

    void func_ov004_0222b3e8(u8 *p);
    void func_ov004_0222b430();
    void func_ov004_0222b45c();
    void func_ov004_0222b510();
    void func_ov004_0222b8a4();

    /* 0x0050 */ Unk_020dbd54 unk_50;
    /* 0x00ac */ u8 *unk_ac;
    /* 0x00b0 */ u32 unk_b0;
    /* 0x00b4 */ Unk_ov004_0222b430_Mtx unk_b4;
    /* 0x00e4 */ u32 pad_e4[(0x108 - 0xe4) / 4];
    /* 0x0108 */ Unk_ov004_0224e478 unk_108[1];
    /* 0x0128 */ Unk_ov004_0222b3a8 unk_128;
    /* 0x1228 */ Unk_ov004_0222aed0 unk_1228;
    /* 0x3328 */ Unk_ov004_0222ae38 unk_3328;
    /* 0x3460 */ u8 unk_3460[0x9c];  // Unk_020d8cf4 (C1 / D2 called by hand, as the original does)
    /* 0x34fc */ u8 unk_34fc[0x24];  // Unk_ov004_0222ac38
    /* 0x3520 */ s8 unk_3520;
    /* 0x3521 */ s8 unk_3521;
    /* 0x3522 */ s8 unk_3522;
    /* 0x3523 */ s8 unk_3523;
    /* 0x3524 */ u32 pad_3524;
    /* 0x3528 */ Unk_ov004_0222b9a4_Vec unk_3528;
    /* 0x3534 */ void *unk_3534;
    /* 0x3538 */ u8 pad_3538[8];
    /* 0x3540 */ s8 unk_3540;
};


// ---------------------------------------------------------------- externs
extern "C" {
u32 func_020b50e8(void);
s32 func_020b52f8(void);
s32 func_020b52d0(void);
s32 func_020b5254(void);
u32 func_020b5328(void);
void func_0200402c(s32 a);
void func_020b1e74(void *p);
void func_020b1ddc(void *p);
u32 func_020b50b4(void);
u32 func_020b6860(u32 o, void *obj, void *v, s32 a, s32 b, s32 c, s32 d);
u32 func_020b6890(u32 o, void *obj);
BOOL func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
u32 func_0204b6f8(u16 *p);
u32 func_0204b688(u16 *p);
u32 func_020716cc(void);
u8 *func_020716e8(u32 a, u32 b, u32 c);
void func_0203411c(u32 a, u16 *p);
void func_0203414c(u32 a, u16 *p);
BOOL func_0203c23c(void *o, u16 *p);
void *func_0203c234(void *o);
BOOL func_020b8cf8(void *o, u16 *p);
void *func_020b8cf0(void *o);
void *func_0206052c(void *self, u32 idx);
void func_020607e0(void *o, u16 *p, u32 k);
s32 func_02060808(void *self, u16 *a, u32 b);
BOOL func_020318cc(void *self);
BOOL func_02031908(void *self, s32 a, s32 b, s32 c, void *p, s32 s, void *q);
void func_020b8930(void *self);
BOOL func_020b8840(void *self, void *a, u32 b, void *c, u32 d, u32 e);
void func_02056a78(void *self, u8 *a, s32 b, s32 c);
void func_02056ab0(void *self, u8 *a, const char *b, const char *c);
void func_02056b28(void *self, u8 *a, const char *b);
s32 func_020567e4(void *self);
s32 func_02056fcc(void *self, const char *s);
s32 func_02057110(void *self, const char *s);
s32 func_01ffc5a4(s32 a, s32 b);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
u32 func_02064f60();
s32 func_02055600(void *self, u32 a, u32 b);
s32 func_02054800(void *self, u32 a);
s32 func_02054720(void *self, u32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02054710(void *self);
s32 func_02055bcc(void *self, void *a, u32 b);
s32 func_02055b38(void *self, u32 a, s32 b, s32 c, s32 d);
u32 func_020554c0(void *self);
s32 func_02055a9c(void *self, u32 a);
u16 *func_02060850(void *self, s32 *i);
u16 *func_02060834(void *self, s32 *i);
void *func_0207bf60(void *self, s32 i);
u32 func_0207e3ac(void *self);
u32 func_0207e3a0(void *self);
u16 *func_02034134(s32 r);
u16 *func_02034104(s32 r);
void *func_0203398c(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_02033914(void *self, s32 a);
void func_02033988(void *self);
s32 func_020b530c(s32 r);
s32 func_020b533c(s32 r);
s32 func_020b51b8(s32 r);
s32 func_020b51e8(s32 r);
s32 func_020b5268(s32 r);
s32 func_020b5298(s32 r);
void func_020555dc(void *self);
void func_02003c30(void *self);
void func_020547cc(void *self, s32 a);
void func_020ac40c();
void func_020abe28();
void func_02106174(void *a, s32 b, u32 c);
s32 func_02054584(void *self);
void func_020547e4(void *self);
void func_020566bc(void *self);
s32 func_ov004_02234ba8(s32 a);
void func_ov004_022136d0(void *v, s32 a, s32 b, u32 c);
void func_02003c50(void *self, u32 a);
void func_02003c70(void *self, Unk_ov004_0222b9a4_Vec *v);
void func_02055488(void *self, void *fn, void *obj);
void func_02003cbc(void *self);
u16 *func_020b8fa4();
u16 func_020baa04(u32 v);

extern u8 data_021e58a8[];
extern u8 data_021dfd8c[];
extern u8 data_021f47e0[];
extern u8 data_0213b91c[];
extern u32 data_020c8cc0;
extern Unk_ov004_0222b510_Grid *data_021c47c4;
extern u32 data_021c620c;
extern u32 data_021ce63c;

// own functions (plain symbols), declared before their first use
void func_ov004_0222a500(void *self);
void func_ov004_0222a520(void *self);
void func_ov004_0222a540(void *self);
s16 func_ov004_0222a560(void *self);
void func_ov004_0222a644(void *self);
BOOL func_ov004_0222ae18();
void func_ov004_0222b2fc(void *self, u16 *a, u32 b);
void func_ov004_0222b610(void *self, u16 *a, s32 *b, u16 *c, s32 *d);
}

struct Unk_ov004_0222ae7c_Obj {
    u8 pad[0x18];
    u32 unk_18;
};

extern "C" u32 func_ov004_0222ae7c(Unk_ov004_0222ae7c_Obj *o);

// ---------------------------------------------------------------- data
extern "C" Unk_ov004_0224e488 *data_ov004_022513bc;
extern "C" char data_ov004_0224e450[];
extern "C" char data_ov004_0224e460[];
extern "C" Unk_ov004_0224e488 *func_ov004_0222bce0();

extern "C" const char *data_ov004_0224e440;
extern "C" const char *data_ov004_0224e444;
extern "C" Unk_02000c8c data_ov004_022513f0;
extern "C" Unk_0203442c data_ov004_022513ac;
extern "C" Unk_ov004_SceneEntry data_ov004_0224e448 = { (void *(*)())func_ov004_0222bce0, 0xe, 0xa };
extern "C" {
Unk_02000c8c data_ov004_022513f0;
Unk_ov004_0224e488 *data_ov004_022513bc;
}


// ---------------------------------------------------------------- functions (descending address order)
extern "C" Unk_ov004_0224e488 *func_ov004_0222bce0() {
    return new Unk_ov004_0224e488;
}

Unk_ov004_0224e488::Unk_ov004_0224e488() {
    _ZN12Unk_020d8cf4C1Ev(unk_3460);
    _ZN18Unk_ov004_0222ac38C1Ev(unk_34fc);
    unk_3534 = data_0213b91c;
    unk_3520 = unk_3521 = unk_3540 = -1;
}

Unk_ov004_0224e488::~Unk_ov004_0224e488() {
    _ZN18Unk_ov004_0222ac38D1Ev(unk_34fc);
    _ZN12Unk_020d8cf4D2Ev(unk_3460);
}

BOOL Unk_ov004_0224e488::vfunc_00() {
    data_ov004_022513bc = this;
    unk_3328.func_ov004_0222ad9c();
    ((Unk_ov004_0222ae38 *)&unk_3460)->func_ov004_0222acf4();
    ((Unk_ov004_0222ac38 *)unk_34fc)->func_ov004_0222ac54();
    func_ov004_0222b8a4();
    func_ov004_0222b45c();
    func_ov004_0222b3e8(unk_ac);
    func_ov004_0222b430();
    func_ov004_0222b510();
    unk_3520 = func_02056fcc(unk_ac, "kh_j");
    unk_3521 = func_02056fcc(unk_ac, "km_j");
    unk_3523 = func_02056fcc(unk_ac, "hasu1");
    unk_3540 = func_02057110(unk_ac, "wd");
    func_02055488(&unk_50, (void *)func_ov004_0222a500, this);
    func_ov004_0222a644(this);
    func_02003cbc(&unk_3534);
    return TRUE;
}

BOOL Unk_ov004_0224e488::vfunc_18() {
    if (func_02054584(&unk_50)) {
        func_020547e4(&unk_50);
    }
    Unk_ov004_0224e478 *e = unk_108;
    if (func_ov004_0222ae7c((Unk_ov004_0222ae7c_Obj *)e)) {
        func_020566bc(e);
        *unk_108[0].unk_18 = unk_108[0].unk_08;
    }
    if (unk_3528.x != 0) {
        s32 id = func_ov004_02234ba8(unk_3528.x);
        if (id == 9 || id == 0x1d) {
            func_02003c50(&unk_3534, 0x4d1);
        }
    }
    Unk_ov004_0222b9a4_Vec v = unk_3528;
    func_02003c70(&unk_3534, &v);
    ((Unk_ov004_0222ac38 *)unk_34fc)->func_ov004_0222ac38();
    data_021ce63c = 0;
    return TRUE;
}

BOOL Unk_ov004_0224e488::vfunc_24() {
    func_020ac40c();
    func_020abe28();
    if (unk_3540 != -1) {
        Unk_ov004_0222b954_Pair t;
        t.a = func_ov004_0222a560(this);
        t.b = t.a;
        func_02106174(unk_ac, unk_3540, t.b);
    }
    func_020547cc(&unk_50, 0);
    return TRUE;
}

BOOL Unk_ov004_0224e488::vfunc_0c() {
    ((Unk_ov004_0222b15c *)&unk_128)->func_ov004_0222b15c();
    ((Unk_ov004_0222ac38 *)unk_34fc)->func_ov004_0222ac34();
    ((Unk_ov004_0222ae38 *)&unk_3460)->func_ov004_0222acdc();
    unk_1228.func_ov004_0222aed0();
    unk_3328.func_ov004_0222ad78();
    func_020555dc(&unk_50);
    data_ov004_022513bc = 0;
    func_02003c30(&unk_3534);
    return TRUE;
}

void Unk_ov004_0224e488::func_ov004_0222b8a4() {
    u32 buf[0x44 / 4];
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 16; i++) {
        func_0203398c(buf, i, 10, 0, 0);
        if (func_02033914(buf, 0) == 0) {
            cnt++;
        }
        func_02033988(buf);
    }
    unk_3522 = cnt;
}

struct Unk_ov004_0222b610_Ent {
    u16 v;
};

static inline BOOL Unk_ov004_0222b610_InA(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1100 && *p <= 0x1143) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov004_0222b610_InB(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1144 && *p <= 0x1187) {
        r = TRUE;
    }
    return r;
}

extern "C" void func_ov004_0222b610(void *self, u16 *a, s32 *b, u16 *c, s32 *d) {
    s32 r = func_020b50e8();
    *d = 0;
    *b = *d;
    if (func_020b530c(r)) {
        void *o = func_0206052c(data_021e58a8, func_020b533c(r));
        if (o != NULL) {
            *a = *func_02060850(o, b);
            *c = *func_02060834(o, d);
        }
    } else if (func_020b51b8(r)) {
        void *o = func_0207bf60(data_021dfd8c, func_020b51e8(r));
        if (o != NULL) {
            u32 t = func_0207e3ac(o);
            *a = t < 0x44 ? (u16)(t + 0x1100) : 0x1100;
            t = func_0207e3a0(o);
            *c = t < 0x44 ? (u16)(t + 0x1144) : 0x1144;
        }
    } else if (func_020b5268(r)) {
        s32 i = func_020b5298(r);
        u16 *p = func_02034134(r);
        if (Unk_ov004_0222b610_InA(p)) {
            *a = *p;
        } else {
            static Unk_0203442c t[6] = {
                Unk_0203442c(0x1140), Unk_0203442c(0x1141), Unk_0203442c(0x1142),
                Unk_0203442c(0x1143), Unk_0203442c(0x1143), Unk_0203442c(0x1143)
            };
            *a = t[i].v;
        }
        p = func_02034104(r);
        if (Unk_ov004_0222b610_InB(p)) {
            *c = *p;
        } else {
            static Unk_0203442c t[6] = {
                Unk_0203442c(0x1184), Unk_0203442c(0x1185), Unk_0203442c(0x1186),
                Unk_0203442c(0x1187), Unk_0203442c(0x1187), Unk_0203442c(0x1187)
            };
            *c = t[i].v;
        }
    }
}

static inline BOOL Unk_ov004_0222b510_Range(volatile u16 *p) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= 0x1188 && a <= 0x11a7) {
        r = TRUE;
    }
    return r;
}

void Unk_ov004_0224e488::func_ov004_0222b510() {
    Unk_ov004_0222b510_Grid *g = data_021c47c4;
    Unk_ov004_0222b45c_Cell *c;
    if (g->unk_04 > (u8 *)0 && g->unk_08 > (u8 *)0 && g->unk_00 != NULL) {
        c = (Unk_ov004_0222b45c_Cell *)g->unk_00;
    } else {
        c = NULL;
    }
    Unk_ov004_0222b45c_Res *r = (Unk_ov004_0222b45c_Res *)c->unk_20;
    unk_128.func_ov004_0222b348(unk_ac, r->unk_20);
    unk_1228.func_ov004_0222b0bc(unk_ac, (u8 *)r->unk_20);
    volatile u16 h[2];
    s32 w8;
    s32 w12;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    func_ov004_0222b610(this, (u16 *)&h[0], &w8, (u16 *)&h[1], &w12);
    if (Unk_ov004_0222b510_Range(&h[0])) {
        unk_128.func_ov004_0222b330(0x1124, unk_ac, w8);
    }
    if (Unk_ov004_0222b510_Range(&h[1])) {
        unk_1228.func_ov004_0222b0a4(0x1182, (Unk_02056fd8 *)unk_ac, w12);
    }
    ((Unk_ov004_0222b15c *)&unk_128)->func_ov004_0222b168((u16 *)&h[0], (Unk_02056fd8 *)unk_ac, w8);
    unk_1228.func_ov004_0222aedc((u16 *)&h[1], (Unk_02056fd8 *)unk_ac, w12);
}

void Unk_ov004_0224e488::func_ov004_0222b45c() {
    Unk_ov004_0222b510_Grid *g = data_021c47c4;
    Unk_ov004_0222b45c_Cell *c;
    if (g->unk_04 > (u8 *)0 && g->unk_08 > (u8 *)0 && g->unk_00 != NULL) {
        c = (Unk_ov004_0222b45c_Cell *)g->unk_00;
    } else {
        c = NULL;
    }
    Unk_ov004_0222b45c_Res *r = (Unk_ov004_0222b45c_Res *)c->unk_20;
    func_02055600(&unk_50, r->unk_08, r->unk_20);
    if (r->unk_14 != 0) {
        if (func_02054800(&unk_50, data_021c620c)) {
            func_02054720(&unk_50, r->unk_14, 0, 0x1000, 0, 0);
            func_02054710(&unk_50);
        }
    }
    if (r->unk_1c != 0) {
        if (func_02055bcc(unk_108, unk_ac, data_021c620c)) {
            func_02055b38(unk_108, r->unk_1c, 0, 0x1000, 0);
            func_02055a9c(unk_108, func_020554c0(&unk_50));
        }
    }
}

void Unk_ov004_0224e488::func_ov004_0222b430() {
    func_020e8388(data_021f47e0, 0, 0, 0);
    unk_b4 = *(Unk_ov004_0222b430_Mtx *)data_021f47e0;
}

void Unk_ov004_0224e488::func_ov004_0222b3e8(u8 *p) {
    u32 n = p[0x18];
    u8 *q = p + *(u32 *)(p + 8);
    u32 i;
    for (i = 0; i < n; i++) {
        u8 *a = q + 4;
        u32 off = *(u16 *)(q + 0xa);
        u8 *t = a + off;
        u32 stride = *(u16 *)t;
        u8 *e = q + *(u32 *)(t + stride * i + 4);
        Unk_ov004_0222b3e8_Ent *en = (Unk_ov004_0222b3e8_Ent *)e;
        if ((en->flags & 0xf) != 0) {
            en->flags &= ~0xf;
            en->flags |= func_02064f60();
        }
    }
}

// ---- dummy wall object (manager + 0x128)
Unk_ov004_0222b3a8::Unk_ov004_0222b3a8() : unk_00(0xfff1), unk_02(0xfff1) {
    unk_00 = 0xfff1;
    unk_02 = 0xfff1;
    unk_10f0 = 0;
}

Unk_ov004_0222b3a8::~Unk_ov004_0222b3a8() {
}

u16 *Unk_ov004_0222b3a8::func_ov004_0222b38c() {
    return &unk_02;
}

u16 *Unk_ov004_0222b3a8::func_ov004_0222b388() {
    return &unk_00;
}

u32 Unk_ov004_0222b3a8::func_ov004_0222b37c() {
    return unk_10f0;
}

BOOL Unk_ov004_0222b3a8::func_ov004_0222b348(u8 *a, u32 b) {
    if (b != 0) {
        func_02056b28(&unk_10f4, a, data_ov004_0224e450);
        unk_10fc = (u8 *)b;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0222b3a8::func_ov004_0222b330(u16 v, void *a, s32 b) {
    u16 t = v;
    ((Unk_ov004_0222b15c *)this)->func_ov004_0222b168(&t, (Unk_02056fd8 *)a, b);
}

extern "C" void func_ov004_0222b2fc(void *self, u16 *a, u32 b) {
    if (func_020b52f8()) {
        void *r = func_0206052c(data_021e58a8, func_020b5328());
        if (r != NULL) {
            func_02060808(r, a, b);
        }
    }
}

BOOL Unk_ov004_0222b15c::func_ov004_0222b168(u16 *q, Unk_02056fd8 *a, s32 key) {
    BOOL same;
    if (func_02057110(a, data_ov004_0224e444) == -1) return FALSE;
    if (func_0204b2d4(&unk_02) != 0) {
        u32 x = func_0204b25c(&unk_02);
        u32 y = func_0204b25c(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (unk_02 == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && unk_10f0 == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1100 && v <= 0x1143) in = TRUE;
        if (in != FALSE) {
            if (func_020b8cf8(&unk_2c, q) == 0) goto fail;
            if (func_020b5254() == 0) {
                func_02056ab0(&unk_10f4, unk_10fc, "dummy_wall", "dummy_wall_pl");
            }
            void *r = func_020b8cf0(&unk_2c);
            if (func_020b8840(&unk_04, a, (u32)data_ov004_0224e444, r, 0, 0) == 0) goto fail;
            unk_00 = unk_02;
            unk_02 = *q;
            func_ov004_0222b2fc(this, &unk_02, key);
            func_0203414c(func_020b50e8(), &unk_02);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = func_0204b6f8(q);
            u32 t8 = func_0204b688(q);
            u32 h = func_020716cc();
            u8 *idx = func_020716e8(h, (u8)t7, (u8)t8);
            func_02056a78(&unk_10f4, idx, 0, 0);
            unk_00 = unk_02;
            unk_02 = *q;
            unk_10f0 = key;
            func_ov004_0222b2fc(this, &unk_02, key);
            func_0203414c(func_020b50e8(), &unk_02);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    unk_00 = unk_02;
    unk_02 = *q;
    unk_10f0 = key;
    func_ov004_0222b2fc(this, &unk_02, key);
    func_0203414c(func_020b50e8(), &unk_02);
    return TRUE;
}

void Unk_ov004_0222b15c::func_ov004_0222b15c() {
    func_020b8930(&unk_04);
}

// ---- dummy floor object (manager + 0x1228)
Unk_ov004_0222aed0::Unk_ov004_0222aed0() : unk_00(0xfff1), unk_02(0xfff1) {
    unk_00 = 0xfff1;
    unk_02 = 0xfff1;
    unk_20f0 = 0;
}

Unk_ov004_0222aed0::~Unk_ov004_0222aed0() {
}

u16 *Unk_ov004_0222aed0::func_ov004_0222b100() {
    return &unk_02;
}

u16 *Unk_ov004_0222aed0::func_ov004_0222b0fc() {
    return &unk_00;
}

u32 Unk_ov004_0222aed0::func_ov004_0222b0f0() {
    return unk_20f0;
}

BOOL Unk_ov004_0222aed0::func_ov004_0222b0bc(u8 *buf, u8 *p) {
    if (p != 0) {
        func_02056b28(&unk_20f4, buf, data_ov004_0224e460);
        unk_20fc = p;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0222aed0::func_ov004_0222b0a4(u16 v, Unk_02056fd8 *a, s32 key) {
    u16 t = v;
    return func_ov004_0222aedc(&t, a, key);
}

void Unk_ov004_0222aed0::func_ov004_0222b070(u16 *q, u32 key) {
    if (func_020b52f8() != 0) {
        u32 t = func_020b5328();
        void *o = func_0206052c(data_021e58a8, t);
        if (o != 0) {
            func_020607e0(o, q, key);
        }
    }
}

BOOL Unk_ov004_0222aed0::func_ov004_0222aedc(u16 *q, Unk_02056fd8 *a, s32 key) {
    BOOL same;
    if (func_02057110(a, data_ov004_0224e440) == -1) return FALSE;
    if (func_0204b2d4(&unk_02) != 0) {
        u32 x = func_0204b25c(&unk_02);
        u32 y = func_0204b25c(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (unk_02 == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && unk_20f0 == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1144 && v <= 0x1187) in = TRUE;
        if (in != FALSE) {
            if (func_0203c23c(&unk_2c, q) == 0) goto fail;
            if (func_020b5254() == 0) {
                func_02056ab0(&unk_20f4, unk_20fc, "dummy_floor", "dummy_floor_pl");
            }
            void *r = func_0203c234(&unk_2c);
            if (func_020b8840(&unk_04, a, (u32)data_ov004_0224e440, r, 0, 0) == 0) goto fail;
            unk_00 = unk_02;
            unk_02 = *q;
            func_ov004_0222b070(&unk_02, key);
            func_0203411c(func_020b50e8(), &unk_02);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = func_0204b6f8(q);
            u32 t8 = func_0204b688(q);
            u32 h = func_020716cc();
            u8 *idx = func_020716e8(h, (u8)t7, (u8)t8);
            func_02056a78(&unk_20f4, idx, 0, 0);
            unk_00 = unk_02;
            unk_02 = *q;
            unk_20f0 = key;
            func_ov004_0222b070(&unk_02, key);
            func_0203411c(func_020b50e8(), &unk_02);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    unk_00 = unk_02;
    unk_02 = *q;
    unk_20f0 = key;
    func_ov004_0222b070(&unk_02, key);
    func_0203411c(func_020b50e8(), &unk_02);
    return TRUE;
}

void Unk_ov004_0222aed0::func_ov004_0222aed0() {
    func_020b8930(&unk_04);
}

// ---- element of the manager's 0x20-byte array
Unk_ov004_0224e478::Unk_ov004_0224e478() {
}

Unk_ov004_0224e478::~Unk_ov004_0224e478() {
}

extern "C" u32 func_ov004_0222ae7c(Unk_ov004_0222ae7c_Obj *o) {
    return o->unk_18;
}

// ---- class Z
Unk_ov004_0222ae38::Unk_ov004_0222ae38() {
    __cxa_vec_ctor(unk_00, 2, 0x9c, (void *)_ZN12Unk_020d8cf4C1Ev, (void *)_ZN12Unk_020d8cf4D2Ev);
}

Unk_ov004_0222ae38::~Unk_ov004_0222ae38() {
    __cxa_vec_cleanup(unk_00, 2, 0x9c, (void *)_ZN12Unk_020d8cf4D2Ev);
}

extern "C" BOOL func_ov004_0222ae18() {
    if (func_020b52f8() != 0 || func_020b52d0() != 0) return TRUE;
    return FALSE;
}

struct Unk_ov004_0222ad9c_V {
    s32 x, y, z;
};

BOOL Unk_ov004_0222ae38::func_ov004_0222ad9c() {
    if (func_ov004_0222ae18() != 0) {
        Unk_ov004_0222ad9c_V a;
        Unk_ov004_0222ad9c_V b;
        a.x = 0xd000;
        a.y = 0;
        a.z = 0x1c000;
        b.x = 0x13000;
        b.y = 0;
        b.z = 0x1c000;
        BOOL r0 = func_02031908(&unk_00[0], 0x2000, 0, 0x4000, &a, 0, 0);
        BOOL r1 = func_02031908(&unk_00[1], 0x2000, 0, 0x4000, &b, 0, 0);
        if (r0 != 0 && r1 != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_ov004_0222ae38::func_ov004_0222ad78() {
    if (func_ov004_0222ae18() != 0) {
        func_020318cc(&unk_00[0]);
        func_020318cc(&unk_00[1]);
    }
    return TRUE;
}

extern "C" char data_ov004_0224e460[] = "m_dummy_floor";
extern "C" const char *data_ov004_0224e440 = data_ov004_0224e460;
extern "C" {
Unk_0203442c data_ov004_022513ac(0xfff1);
}

void Unk_ov004_0222ae38::func_ov004_0222acf4() {
    if (func_020b50e8() == 0xa) {
        static Unk_02000c8c s(0xe000, 0, data_020c8cc0 + 0x1000);
        func_02031908(&unk_00[0], 0x8000, 0x2000, 0x1000, &s, 0, 0);
    }
}

extern "C" char data_ov004_0224e450[] = "m_dummy_wall";
extern "C" const char *data_ov004_0224e444 = data_ov004_0224e450;

void Unk_ov004_0222ae38::func_ov004_0222acdc() {
    if (func_020b50e8() == 0xa) {
        func_020318cc(&unk_00[0]);
    }
}

// ---- class Y
Unk_ov004_0222ac38::Unk_ov004_0222ac38() {
    unk_20 = 0;
}

Unk_ov004_0222ac38::~Unk_ov004_0222ac38() {
}

struct Unk_ov004_0222ac54_V {
    s32 x, y, z;
};

void Unk_ov004_0222ac38::func_ov004_0222ac54() {
    Unk_ov004_0222ac54_V v;
    if (func_020b50e8() == 0x22) {
        unk_20 = 1;
    }
    if (unk_20 != 0) {
        v.x = 0x108f6;
        v.y = 0;
        v.z = 0x1351e;
        func_020b6860(func_020b50b4(), this, &v, 0xf33, 0x6000, 0x16, 0xff);
    }
}

void Unk_ov004_0222ac38::func_ov004_0222ac38() {
    if (unk_20 != 0) {
        func_020b6890(func_020b50b4(), this);
    }
}

void Unk_ov004_0222ac38::func_ov004_0222ac34() {
}

static inline BOOL Unk_ov004_0222aacc_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" u16 *func_ov004_0222ab80(u16 *p, s32 key, u32 flag) {
    BOOL r = Unk_ov004_0222aacc_R1(p, 0x1100, 0x1143);
    if (r != FALSE || (*p >= 0x1188 && *p <= 0x11a7)) {
        Unk_ov004_0224e488 *g = data_ov004_022513bc;
        if (g != 0) {
            if (((Unk_ov004_0222b15c *)&g->unk_128)->func_ov004_0222b168(p, (Unk_02056fd8 *)g->unk_ac, key) != 0) {
                if (flag != 0) {
                    if (func_020b5254() != 0) func_0200402c(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(data_ov004_022513bc->unk_128.func_ov004_0222b388(), 0x1100, 0x1143);
                if (r2 != FALSE) return data_ov004_022513bc->unk_128.func_ov004_0222b388();
                return (u16 *)&data_ov004_022513ac;
            }
        }
    }
    return (u16 *)&data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aacc(u16 *p, s32 key, u32 flag) {
    BOOL r = Unk_ov004_0222aacc_R1(p, 0x1144, 0x1187);
    if (r != FALSE || (*p >= 0x1188 && *p <= 0x11a7)) {
        Unk_ov004_0224e488 *g = data_ov004_022513bc;
        if (g != 0) {
            if (g->unk_1228.func_ov004_0222aedc(p, (Unk_02056fd8 *)g->unk_ac, key) != 0) {
                if (flag != 0) {
                    if (func_020b5254() != 0) func_0200402c(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(data_ov004_022513bc->unk_1228.func_ov004_0222b0fc(), 0x1144, 0x1187);
                if (r2 != FALSE) return data_ov004_022513bc->unk_1228.func_ov004_0222b0fc();
                return (u16 *)&data_ov004_022513ac;
            }
        }
    }
    return (u16 *)&data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aaa0() {
    Unk_ov004_0224e488 *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_1228.func_ov004_0222b100();
    }
    return (u16 *)&data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aa74() {
    Unk_ov004_0224e488 *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_1228.func_ov004_0222b0fc();
    }
    return (u16 *)&data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aa48() {
    Unk_ov004_0224e488 *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_128.func_ov004_0222b38c();
    }
    return (u16 *)&data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aa1c() {
    Unk_ov004_0224e488 *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_128.func_ov004_0222b388();
    }
    return (u16 *)&data_ov004_022513ac;
}

void Unk_ov004_0224e488::vfunc_48(s32 a, Unk_ov004_0222a994_Ctx *b) {
    Unk_ov004_0222a994_Pad pad;
    if (unk_3520 == a) {
        func_020b1e74(b);
        Unk_ov004_0222a994_Vec *pv = (Unk_ov004_0222a994_Vec *)(b->unk_b4 + 0x13);
        Unk_ov004_0222a994_Vec v;
        v.y = pv->y;
        v.z = pv->z;
        v.x = pv->x;
        unk_3528.x = v.x;
        unk_3528.y = v.y;
        unk_3528.z = v.z;
    } else if (unk_3521 == a) {
        func_020b1ddc(b);
    } else if (unk_3523 == a) {
        if (b != 0) {
            s32 *p = b->unk_b4;
            s32 z = p[0x15];
            s32 x = p[0x13];
            data_ov004_022513f0.x = x;
            data_ov004_022513f0.y = 0x3700;
            data_ov004_022513f0.z = z;
        }
    }
}

// ---------------------------------------------------------------- 0x0222a6c0 (vtable slot 0x4c; symbol renamed, see renames.txt)
static inline BOOL Unk_ov004_0222a6c0_Rng(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1188 && *p <= 0x11a7) {
        r = TRUE;
    }
    return r;
}

void Unk_ov004_0224e488::vfunc_4c(s32 idx, Unk_ov004_0222a6c0_Obj *o) {
    u8 *h = o->unk_d8;
    u8 *t = h + 4;
    u32 off = *(u16 *)(h + 0xa);
    u32 stride = *(u16 *)(t + off);
    Unk_ov004_0222a6c0_Rec *rec = (Unk_ov004_0222a6c0_Rec *)(h + *(u32 *)(t + off + stride * idx + 4));
    BOOL a;
    BOOL b;
    s32 v8, vc, v10;
    if (idx == func_020567e4(&unk_128.unk_10f4)) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    if (idx == func_020567e4(&unk_1228.unk_20f4)) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (a && Unk_ov004_0222a6c0_Rng(unk_128.func_ov004_0222b38c())) {
    } else if (b && Unk_ov004_0222a6c0_Rng(unk_1228.func_ov004_0222b100())) {
    } else {
        return;
    }
    o->unk_b0->unk_10 &= 0x3fffffff;
    o->unk_b0->unk_10 &= 0xfffbffff;
    o->unk_b0->unk_10 &= 0xfff7ffff;
    o->unk_b0->unk_10 &= 0xfffeffff;
    o->unk_b0->unk_10 &= 0xfffdffff;
    o->unk_b0->unk_10 |= 0x40000000;
    s32 k;
    if (a) {
        k = unk_128.func_ov004_0222b37c();
    } else {
        k = unk_1228.func_ov004_0222b0f0();
    }
    o->unk_b0->unk_10 |= 0x10000;
    o->unk_b0->unk_10 |= 0x20000;
    if (k == 1) {
        o->unk_b0->unk_10 |= 0x40000;
        o->unk_b0->unk_10 |= 0x80000;
    }
    o->unk_b0->unk_00 |= 8;
    o->unk_b0->unk_2c = rec->unk_20;
    o->unk_b0->unk_2e = rec->unk_22;
    o->unk_b0->unk_30 = rec->unk_24;
    o->unk_b0->unk_34 = rec->unk_28;
    o->unk_b0->unk_00 &= ~1;
    o->unk_b0->unk_00 |= 6;
    if (a) {
        switch (unk_3522) {
        case 4:
            v8 = func_01ffc5a4(0, 0x64000) + 0x2000;
            vc = func_01ffc5a4(0, 0x64000) + 0x4000;
            break;
        case 6:
            v8 = func_01ffc5a4(0, 0x64000) + 0x2000;
            vc = func_01ffc5a4(0, 0x64000) + 0x4000;
            break;
        case 8:
            v8 = func_01ffc5a4(0, 0x64000) + 0x2000;
            vc = func_01ffc5a4(0, 0x64000) + 0x4000;
            break;
        }
        o->unk_b0->unk_18 = v8;
        o->unk_b0->unk_1c = vc;
    } else {
        switch (unk_3522) {
        case 4:
            v10 = func_01ffc5a4(0, 0x64000) + 0x2000;
            break;
        case 6:
            v10 = func_01ffc5a4(0, 0x64000) + 0x3000;
            break;
        case 8:
            v10 = func_01ffc5a4(0, 0x64000) + 0x4000;
            break;
        }
        o->unk_b0->unk_18 = v10;
        o->unk_b0->unk_1c = v10;
    }
    o->unk_08 &= 0xfffffeff;
}

struct Unk_ov004_0222a644_Rec {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov004_0222a644_Owner {
    u8 pad_00[0x28];
    Unk_ov004_0222a644_Rec *unk_28;
    u32 unk_2c;
};

struct Unk_ov004_0222a644_Cell {
    u8 pad_00[0x20];
    Unk_ov004_0222a644_Owner *unk_20;
};

struct Unk_ov004_0222a644_Grid {
    Unk_ov004_0222a644_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov004_0222a644_V3 {
    s32 x, y, z;
    Unk_ov004_0222a644_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

extern "C" void func_ov004_0222a644(void *self) {
    Unk_ov004_0222a644_Grid *g = (Unk_ov004_0222a644_Grid *)data_021c47c4;
    Unk_ov004_0222a644_Cell *c;
    if ((u8 *)g->unk_04 > (u8 *)0 && (u8 *)g->unk_08 > (u8 *)0 && g->unk_00 != 0) {
        c = g->unk_00;
    } else {
        c = 0;
    }
    Unk_ov004_0222a644_Owner *o = c->unk_20;
    if (o != 0) {
        Unk_ov004_0222a644_Rec *e = o->unk_28;
        if (e != 0) {
            if (o->unk_2c != 0) {
                u32 i;
                for (i = 0; i < o->unk_2c; e++, i++) {
                    Unk_ov004_0222a644_V3 v((e->unk_00 << 12) >> 4, (e->unk_02 << 12) >> 4, (e->unk_04 << 12) >> 4);
                    func_ov004_022136d0(&v, (e->unk_06 << 12) >> 4, ((s32)(e->unk_08 << 30)) >> 16, e->unk_09);
                }
            }
        }
    }
}

struct Unk_ov004_0222a560_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

extern "C" s16 func_ov004_0222a560(void *self) {
    Unk_ov004_0222a560_Col a;
    Unk_ov004_0222a560_Col c;
    Unk_ov004_0222a560_Col b;
    u16 *p = func_020b8fa4();
    *(u16 *)&c = 0xffff;
    if (p != 0) {
        *(u16 *)&a = func_020baa04(0);
        b = a;
        *(u16 *)&c = p[5];
        s32 r = c.r + b.r / 3;
        s32 g = c.g + b.g / 3;
        s32 l = c.b + b.b / 3;
        if (r > 0x1f) {
            r = 0x1f;
        } else if (r < 0) {
            r = 0;
        }
        if (g > 0x1f) {
            g = 0x1f;
        } else if (g < 0) {
            g = 0;
        }
        if (l > 0x1f) {
            l = 0x1f;
        } else if (l < 0) {
            l = 0;
        }
        c.r = r;
        c.g = g;
        c.b = l;
    }
    return *(s16 *)&c;
}

// ---------------------------------------------------------------- callbacks
struct Unk_ov004_0222a500_Hdr {
    u8 unk_00;
    u8 unk_01;
};

class Unk_ov004_0222a500_Tgt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48(u32 a, void *b);
    virtual void vfunc_4c(u32 a, void *b);
};

struct Unk_ov004_0222a500_Own {
    u8 pad_00[0x2c];
    /* 0x2c */ Unk_ov004_0222a500_Tgt *unk_2c;
};

struct Unk_ov004_0222a500 {
    /* 0x00 */ Unk_ov004_0222a500_Hdr *unk_00;
    /* 0x04 */ Unk_ov004_0222a500_Own *unk_04;
    /* 0x08 */ u8 pad_08[0x1c - 0x08];
    /* 0x1c */ void (*unk_1c)(Unk_ov004_0222a500 *);
    /* 0x20 */ u8 pad_20[4];
    /* 0x24 */ void (*unk_24)(Unk_ov004_0222a500 *);
    /* 0x28 */ u8 pad_28[0x90 - 0x28];
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91;
    /* 0x92 */ u8 unk_92;
};

extern "C" void func_ov004_0222a540(void *p) {
    Unk_ov004_0222a500 *self = (Unk_ov004_0222a500 *)p;
    Unk_ov004_0222a500_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_4c(self->unk_00->unk_01, self);
    }
}

extern "C" void func_ov004_0222a520(void *p) {
    Unk_ov004_0222a500 *self = (Unk_ov004_0222a500 *)p;
    Unk_ov004_0222a500_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_48(self->unk_00->unk_01, self);
    }
}

extern "C" void func_ov004_0222a500(void *p) {
    Unk_ov004_0222a500 *self = (Unk_ov004_0222a500 *)p;
    self->unk_1c = (void (*)(Unk_ov004_0222a500 *))func_ov004_0222a540;
    self->unk_90 = 2;
    self->unk_24 = (void (*)(Unk_ov004_0222a500 *))func_ov004_0222a520;
    self->unk_92 = 2;
}

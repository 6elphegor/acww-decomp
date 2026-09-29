#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_02227728_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02227728_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// Model element (0xb8 bytes), see src/main/unk_02054ae0.cpp
class Unk_020dbd54 {
public:
    Unk_020dbd54();
    ~Unk_020dbd54();
    u8 pad_00[0xa0];
    Unk_ov004_02227728_Bits unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;
    u32 unk_b4;
};

class Unk_ov004_02224f10 {
public:
    Unk_ov004_02224f10();
    ~Unk_ov004_02224f10();
    u8 pad_00[0xa4];
};

class Unk_ov004_02224d60 {
public:
    Unk_ov004_02224d60();
    ~Unk_ov004_02224d60();
    u32 unk_00;
};

// Name string base, see src/ov009/unk_0225b880.cpp
class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_ov004_0224d4e8 : public Unk_020d8c7c_Base {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0c[0x148 - 0xc];
    void *unk_148;
    u8 pad_14c[0x198 - 0x14c];
    u32 unk_198;
    u8 pad_19c[0x24c - 0x19c];
    u8 unk_24c;
    u8 pad_24d[0x290 - 0x24d];
};

struct Unk_ov004_02227728_Rec {
    u16 (*unk_00)(u32);
    u32 unk_04;
    const char *unk_08;
    const char *unk_0c;
};

extern "C" {
extern char data_ov004_0224d9f0[];
extern char data_ov004_0224da08[];
extern char data_ov004_0224da24[];
extern char data_ov004_0224da3c[];
extern char data_ov004_0224da58[];
extern char data_ov004_0224da70[];
extern char data_ov004_0224da8c[];
extern char data_ov004_0224daa4[];
extern char data_ov004_0224dac0[];
extern char data_ov004_0224dad8[];
extern char data_ov004_0224daf4[];
extern char data_ov004_0224db0c[];
extern char data_ov004_0224dc28[];
extern char data_ov004_02250e20[];
extern char data_ov004_0224dcb8[];
extern const char *data_ov004_0224dcc4;
extern Unk_ov004_02227728_V3 data_ov004_02250cd8;
extern Unk_ov004_02227728_V3 data_ov004_02250cf0;
extern Unk_ov004_02227728_Rec data_ov004_02240270[];
extern void *data_021c620c;
extern u8 data_021ed0a0[];
extern s32 data_021c5384;
extern void *data_021c1b3c;

void func_ov004_02224fc8(void *self, const char *a, const char *b);
void func_ov004_02224f90(void *self, const char *a);
s32 func_ov004_02224f60(void *self);
u32 func_ov004_02224d8c(void *p, u32 i);
s32 func_ov004_022267dc(void *self, u32 i, const char *a, const char *b);
s32 func_ov004_02226724(void *self, u32 i);
s32 func_ov004_02227104(void *self, u32 i);
Unk_ov004_02227728_Rec *func_ov004_02227ce8(u32 i);
void func_ov004_02227cbc(void *o);
s32 func_ov004_022264dc(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u16 a7, u16 a8);

s32 func_02054800(void *p, void *q);
s32 func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_02054710(void *p);
s32 func_020547cc(void *p, u32 a);
s32 func_020547e4(void *p);
s32 func_02055488(void *p, void *fn, void *self);
s32 func_020e8608(void *heap, u32 size);
s32 func_02070358(void *p, u16 *v);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_02056fcc(void *p, char *name);
s32 func_020318cc(void *p);
s32 func_02031908(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
void *func_020b50b4(void);
s32 func_020b68ec(void *self, void *a, void *b, s32 c, s32 d, s32 e, s16 f, s32 g, u8 h);
s32 func_0203d67c(void *p);
s32 func_0209c41c(void *p, u32 a);
s32 func_0206ec6c(void);
s32 func_0206eca4(u32 a);
s32 func_0203e47c(void *self, Unk_020e2a30 *a);
s32 func_0203e488(void *self, Unk_020e2a30 *a);
}

class Unk_ov004_0224d988;
extern "C" Unk_ov004_0224d988 *data_ov004_02250cd0;

// ---------------------------------------------------------------------------------------------------------------
class Unk_ov004_0224d988 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224d988();
    virtual BOOL vfunc_00();
    virtual ~Unk_ov004_0224d988();

    Unk_020dbd54 unk_290[9];
    Unk_ov004_02224f10 unk_908[9];
    Unk_ov004_02224d60 unk_ecc[9];
    u8 pad_ef0[3];
    u8 unk_ef3;
    u8 pad_ef4[0xf1c - 0xef4];
    Unk_ov004_02227728_V3 unk_f1c;
    Unk_ov004_02227728_V3 unk_f28;
    u16 unk_f34;
    u16 unk_f36;
    s32 unk_f38;
    s32 unk_f3c;
    s32 unk_f40;
};

BOOL Unk_ov004_0224d988::vfunc_00() {
    data_ov004_02250cd0 = this;
    func_ov004_02224fc8(this, data_ov004_0224d9f0, data_ov004_0224da08);
    func_ov004_022267dc(this, 0, data_ov004_0224da24, data_ov004_0224da3c);
    func_ov004_022267dc(this, 1, data_ov004_0224da58, data_ov004_0224da70);
    func_ov004_022267dc(this, 2, data_ov004_0224da8c, data_ov004_0224daa4);
    func_ov004_022267dc(this, 3, data_ov004_0224dac0, data_ov004_0224dad8);
    func_ov004_022267dc(this, 4, data_ov004_0224da58, data_ov004_0224da70);
    func_ov004_022267dc(this, 5, data_ov004_0224da8c, data_ov004_0224daa4);
    func_ov004_022267dc(this, 6, data_ov004_0224da58, data_ov004_0224da70);
    func_ov004_022267dc(this, 7, data_ov004_0224da8c, data_ov004_0224daa4);
    func_ov004_022267dc(this, 8, data_ov004_0224daf4, data_ov004_0224db0c);
    if (func_ov004_02224d8c((u8 *)this + 0x1a4, 0) != 0) {
        if (func_02054800((u8 *)this + 0xec, data_021c620c) != 0) {
            func_02054720((u8 *)this + 0xec, func_ov004_02224d8c((u8 *)this + 0x1a4, 0), 1, 0x1000, 0, 0);
            func_02054710((u8 *)this + 0xec);
            unk_198 = 0;
        }
    }
    u8 i = 0;
    do {
        func_ov004_02226724(this, i);
        i++;
    } while (i < 9);
    func_ov004_02227104(this, 0);
    unk_ef3 = 1;
    func_ov004_022264dc(this, 8, &unk_290[4], &unk_908[4], 0, 0x1000, 0, 0);
    func_ov004_022264dc(this, 6, &unk_290[5], &unk_908[5], 0, 0x1000, 0, 0);
    func_ov004_022264dc(this, 8, &unk_290[6], &unk_908[6], 0, 0x1000, 0, 0);
    func_ov004_022264dc(this, 6, &unk_290[7], &unk_908[7], 0, 0x1000, 0, 0);
    unk_f1c = data_ov004_02250cd8;
    unk_f28 = data_ov004_02250cf0;
    unk_f34 = 0;
    unk_f36 = 0;
    unk_290[4].unk_ac = 0;
    unk_290[4].unk_a4 = (u16)(unk_290[4].unk_a0.mid - 1) << 12;
    unk_290[5].unk_ac = 0;
    unk_290[5].unk_a4 = (u16)(unk_290[5].unk_a0.mid - 1) << 12;
    unk_290[6].unk_ac = 0;
    unk_290[6].unk_a4 = (u16)(unk_290[6].unk_a0.mid - 1) << 12;
    unk_290[7].unk_ac = 0;
    unk_290[7].unk_a4 = (u16)(unk_290[7].unk_a0.mid - 1) << 12;
    unk_f38 = -1;
    unk_f3c = -1;
    unk_f40 = -1;
    return TRUE;
}

Unk_ov004_0224d988::~Unk_ov004_0224d988() {}

Unk_ov004_0224d988::Unk_ov004_0224d988() {}

extern "C" Unk_ov004_0224d988 *func_ov004_02227b28() {
    return new Unk_ov004_0224d988();
}

// ---------------------------------------------------------------------------------------------------------------
class Unk_ov004_0224dbc0 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224dbc0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224dbc0();

    BOOL func_02227b44(s32 c);
    void func_02227b7c();
    void func_02227bfc(s32 c, void *o);

    s8 *unk_290;
};

struct Unk_ov004_02227bfc_Out {
    u8 pad_00[0xb8];
    s32 *unk_b8;
};

BOOL Unk_ov004_0224dbc0::func_02227b44(s32 c) {
    Unk_ov004_02227728_Rec *r = func_ov004_02227ce8(unk_08);
    u32 i = 0;
    u32 n = r->unk_04;
    for (; i < n; i++) {
        if (c == unk_290[i]) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224dbc0::func_02227b7c() {
    Unk_ov004_02227728_Rec *r = func_ov004_02227ce8(unk_08);
    unk_290 = (s8 *)func_020e8608(data_021c620c, r->unk_04);
    u32 z = 0;
    u32 i;
    for (i = 0; i < r->unk_04; i++) {
        u16 v = r->unk_00(i);
        u32 f = z;
        if (func_02070358(data_021ed0a0, &v) != 0) {
            f = 1;
        }
        func_020639e8(data_ov004_02250e20, data_ov004_0224dc28, i, f);
        unk_290[i] = func_02056fcc(unk_148, data_ov004_02250e20);
    }
}

void Unk_ov004_0224dbc0::func_02227bfc(s32 c, void *o) {
    *((Unk_ov004_02227bfc_Out *)o)->unk_b8 = func_02227b44(c);
}

BOOL Unk_ov004_0224dbc0::vfunc_0c() {
    func_ov004_02224f60(this);
    return TRUE;
}

BOOL Unk_ov004_0224dbc0::vfunc_24() {
    func_020547cc((u8 *)this + 0xec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224dbc0::vfunc_18() {
    return TRUE;
}

BOOL Unk_ov004_0224dbc0::vfunc_00() {
    Unk_ov004_02227728_Rec *r = func_ov004_02227ce8(unk_08);
    func_ov004_02224fc8(this, r->unk_08, r->unk_0c);
    func_02055488((u8 *)this + 0xec, (void *)func_ov004_02227cbc, this);
    func_02227b7c();
    return TRUE;
}

Unk_ov004_0224dbc0::~Unk_ov004_0224dbc0() {}

Unk_ov004_0224dbc0::Unk_ov004_0224dbc0() {}

extern "C" Unk_ov004_0224dbc0 *func_ov004_02227d14() {
    return new Unk_ov004_0224dbc0();
}

// ---------------------------------------------------------------------------------------------------------------
class Unk_ov004_0224dc50 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224dc50();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224dc50();
};

BOOL Unk_ov004_0224dc50::vfunc_0c() {
    func_ov004_02224f60(this);
    return TRUE;
}

BOOL Unk_ov004_0224dc50::vfunc_24() {
    func_020547cc((u8 *)this + 0xec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224dc50::vfunc_18() {
    func_020547e4((u8 *)this + 0xec);
    return TRUE;
}

BOOL Unk_ov004_0224dc50::vfunc_00() {
    func_ov004_02224f90(this, data_ov004_0224dcb8);
    if (func_ov004_02224d8c((u8 *)this + 0x1a4, 0) != 0) {
        if (func_02054800((u8 *)this + 0xec, data_021c620c) != 0) {
            func_02054720((u8 *)this + 0xec, func_ov004_02224d8c((u8 *)this + 0x1a4, 0), 0, 0x1000, 0, 0);
            func_02054710((u8 *)this + 0xec);
        }
    }
    return TRUE;
}

Unk_ov004_0224dc50::~Unk_ov004_0224dc50() {}

Unk_ov004_0224dc50::Unk_ov004_0224dc50() {}

extern "C" Unk_ov004_0224dc50 *func_ov004_02227e20() {
    return new Unk_ov004_0224dc50();
}

// ---------------------------------------------------------------------------------------------------------------
struct Unk_ov004_02227fb8_Pad {
    s32 v[2];
    Unk_ov004_02227fb8_Pad() {}
    ~Unk_ov004_02227fb8_Pad() {}
};

struct Unk_ov004_0224dd98_Rec {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

class Unk_ov004_0224dd98 : public Unk_ov004_0224d4e8, public Unk_020e2a30 {
public:
    Unk_ov004_0224dd98();
    virtual ~Unk_ov004_0224dd98();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70(u32 a, u8 b);

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
    s32 func_ov004_022280b0(s32 state);

    u8 pad_2b0[0x2cc - 0x2b0];
    Unk_ov004_0224dd98_Rec *unk_2cc;
    u8 pad_2d0[4];
    u8 unk_2d4[0x370 - 0x2d4];
    u8 unk_370[0x618 - 0x370];
    s32 unk_618;
};

void Unk_ov004_0224dd98::vfunc_68() {}
void Unk_ov004_0224dd98::vfunc_6c() {
    ((u32 *)data_021c1b3c)[0x248 / 4] = 0x1a;
}
void Unk_ov004_0224dd98::vfunc_70(u32 a, u8 b) {}

void Unk_ov004_0224dd98::func_ov004_02227e3c() {
    func_020318cc(&unk_2d4);
}

void Unk_ov004_0224dd98::func_ov004_02227e4c() {
    func_02031908(&unk_2d4, 0x2000, 0x4000, 0x2000, (u8 *)this + 0x5c, 0, 0);
    func_020b68ec(func_020b50b4(), &unk_370, (u8 *)this + 0x5c, 0x2000, 0x4000, 0x2000, 0, 0xc, 0xff);
}

void Unk_ov004_0224dd98::func_ov004_02227ec4() {
    if (unk_24c == 0) {
        func_0203d67c(this);
    }
}

void Unk_ov004_0224dd98::func_ov004_02227ee0() {
    func_0209c41c(this, 3);
}

void Unk_ov004_0224dd98::func_ov004_02227eec() {
    if (data_021c5384 == 0) {
        if (func_0206ec6c() != 0) {
            func_ov004_022280b0(5);
        }
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02227f14() {
    if (func_0206eca4(0x20) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224dd98::func_ov004_02227f30() {
    if (unk_24c == 2) {
        func_ov004_022280b0(4);
    }
}

void Unk_ov004_0224dd98::func_ov004_02227f4c() {
    func_0209c41c(this, 1);
}

void Unk_ov004_0224dd98::func_ov004_02227f58() {
    if (unk_2cc != 0) {
        if (unk_2cc->unk_04 == 0) {
            func_0203e47c(this, (Unk_020e2a30 *)this);
            func_ov004_022280b0(3);
        }
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02227f90() {
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02227f94() {
    if (unk_2cc != 0) {
        if (unk_2cc->unk_04 != 0) {
            func_ov004_022280b0(2);
        }
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02227fb8() {
    Unk_ov004_02227fb8_Pad pad;
    func_0203e488(this, (Unk_020e2a30 *)this);
    Unk_020e2a30::func_020a710c(data_ov004_0224dcc4);
    Unk_020e2a30::unk_1e = 0;
    unk_2cc->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02228000() {}

BOOL Unk_ov004_0224dd98::func_ov004_02228004() {
    return TRUE;
}

typedef void (Unk_ov004_0224dd98::*Unk_ov004_02228008_Fn)();

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

struct Unk_ov004_02227cbc_Obj {
    u8 pad_00[0x14];
    void (*unk_14)(void *);
    u8 pad_18[0x8e - 0x18];
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
void func_ov004_02227ccc(Unk_ov004_02227ccc_Obj *o);

void func_ov004_02227cbc(void *p) {
    Unk_ov004_02227cbc_Obj *o = (Unk_ov004_02227cbc_Obj *)p;
    o->unk_14 = (void (*)(void *))func_ov004_02227ccc;
    o->unk_8e = 2;
}

void func_ov004_02227ccc(Unk_ov004_02227ccc_Obj *o) {
    Unk_ov004_0224dbc0 *b = o->unk_04->unk_2c;
    if (b != 0) {
        b->func_02227bfc(o->unk_00->unk_01, o);
    }
}

Unk_ov004_02227728_Rec *func_ov004_02227ce8(u32 i) {
    if (i < 2) {
        return &data_ov004_02240270[i];
    }
    return &data_ov004_02240270[0];
}

u16 func_ov004_02227cfc(u32 i) {
    return i < 0x14 ? i * 4 + 0x3894 : 0x3894;
}
}

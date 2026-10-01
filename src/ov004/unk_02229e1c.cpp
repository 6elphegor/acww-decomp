// mwcc-version: 1.2/sp2
#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- shared library-side classes
struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
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
    /* 0xea */ u16 pad_ea;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020aa3b8 {
public:
    void func_020aa680(u32 n);
    void func_020aa680(u32 n, s32 v);
    void func_020aa638(u32 i, u8 *b, u32 n, void *d, s32 z, s32 c);
    void func_020aa608();
};

class Unk_020660f8 {
public:
    Unk_020aa3b8 *func_020679b4();
    void func_020679c0(u32 v);

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
    // slots 0x10..0x18 are overridden by the derived class's own virtuals (same functions as its vtable slots 0x68..0x70)
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70(u32 a, u8 b);

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020d8cf4 {
    Unk_020d8cf4();
    ~Unk_020d8cf4();
    virtual void vfunc_00();
    u8 pad_04[0x94];
    u8 unk_98;
};

struct Unk_020b6e10 {
    Unk_020b6e10();
    ~Unk_020b6e10();
    u8 pad[0x2a8];
};

struct Unk_020b6960 {
    BOOL func_020b68ec(Unk_020b6e10 *box, s32 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
};

struct Unk_020b6a94 {
    Unk_020b6a94();
    ~Unk_020b6a94();
    u8 pad[0x1c];
};

struct Unk_ov004_0224e2b8_Sec {
    BOOL func_02054800(s32 v);
    void func_02054720(void *p, s32 a, s32 b, s32 c, s32 d);
    void func_02054710();
    void func_020547cc(s32 a);
    void func_020547e4();
    u8 pad[0xb8];
};

struct Unk_ov004_0224e2b8_Sub {
    void *func_ov004_02224d8c(u32 i);
    u8 pad[0xa4];
};

struct Unk_ov004_0224e2b8_Str {
    const u8 *unk_00;
    u8 unk_04;
};

struct Unk_ov004_0224e2b8_Ent;

class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();

    void func_ov004_02224f60();
    void func_ov004_02224fc8(const char *a, const char *b);

    /* 0x0ec */ Unk_ov004_0224e2b8_Sec unk_ec;
    /* 0x1a4 */ Unk_ov004_0224e2b8_Sub unk_1a4;
    /* 0x248 */ u8 pad_248[0x290 - 0x248];
};

struct Unk_020d8cf4_Dummy;

class Unk_ov004_0224e2b8;

typedef BOOL (Unk_ov004_0224e2b8::*Unk_ov004_0224e2b8_Fn)();

struct Unk_ov004_0224e2b8_Ent {
    Unk_ov004_0224e2b8_Fn enter;
    Unk_ov004_0224e2b8_Fn exit;
};


extern "C" {
extern const s32 data_ov004_02240298[3];
extern char data_ov004_0224e3ac[];
extern char data_ov004_0224e3c8[];
extern Unk_ov004_0224e2b8_Str data_ov004_0224e298;
extern Unk_ov004_0224e2b8_Str data_ov004_0224e2a0;
extern Unk_ov004_0224e2b8_Str data_ov004_0224e2a8;
extern u8 data_021edb60[];
extern s32 data_021c620c;
extern u8 data_021d7350[];
BOOL func_0209e170(void *p, u32 v);
void func_0209e148(void *p, u32 v);
extern Unk_ov004_0224e2b8_Ent data_ov004_02251298[];
extern Unk_ov004_0224e2b8_Ent data_ov004_022512a0[];
u32 func_020b50e8();
Unk_020b6960 *func_020b50b4();
void func_0206829c(void *p);
void func_02068290(void *p);
void func_020682a4(void *p, s32 a);
void func_02068298(void *p, s32 a);
s32 func_020e9650(s32 *a, s32 *b);
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

    void func_ov004_02229be4(s32 a);
    void func_ov004_02229e1c(Unk_ov004_0224e2b8_Str *p, s32 v);

    /* 0x2d4 */ Unk_020d8cf4 unk_2d4;
    /* 0x370 */ Unk_020b6e10 unk_370;
    /* 0x618 */ Unk_020b6a94 unk_618;
    /* 0x634 */ s32 unk_634;
    /* 0x638 */ u8 pad_638[8];
};

extern "C" Unk_ov004_0224e2b8 *data_ov004_02251288;

class Unk_ov004_0224e3f8 : public Unk_020d8c7c {
public:
    Unk_ov004_0224e3f8();
    virtual BOOL vfunc_00();
    virtual ~Unk_ov004_0224e3f8();
};

extern "C" void func_ov004_0222a374();


// ---------------------------------------------------------------- Unk_ov004_0224e2b8
void Unk_ov004_0224e2b8::func_ov004_02229e1c(Unk_ov004_0224e2b8_Str *p, s32 v) {
    Unk_020660f8 *m = unk_3c;
    Unk_020aa3b8 *o = m->func_020679b4();
    const u8 *s = p->unk_00;
    u8 n = p->unk_04;
    s32 z = 0;
    s32 i;
    s32 m1 = -1;
    if (v != m1) {
        o->func_020aa680(n, v);
    } else {
        o->func_020aa680(n, m1);
    }
    s32 c0 = 0;
    for (i = 0; i < n; i++) {
        s32 c = c0;
        u32 b = s[i];
        if ((u8)(b + 0xec) <= 1) {
            c = 3;
        }
        u8 bb = b;
        o->func_020aa638(i, &bb, 1, data_021edb60, z, c);
    }
    o->func_020aa608();
    m->func_020679c0(1);
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
            u32 d = (u16)(o->unk_8e - (unk_8e + 0x8000));
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
    unk_ec.func_020547cc(0);
    return TRUE;
}

BOOL Unk_ov004_0224e2b8::vfunc_18() {
    if (data_ov004_022512a0[unk_634].enter) {
        (this->*data_ov004_02251298[unk_634].exit)();
    }
    unk_ec.func_020547e4();
    return TRUE;
}

struct Unk_ov004_0222a0bc_V3 {
    s32 v[3];
};

BOOL Unk_ov004_0224e2b8::vfunc_00() {
    data_ov004_02251288 = this;
    unk_5c[0] = data_ov004_02240298[0]; unk_5c[1] = data_ov004_02240298[1]; unk_5c[2] = data_ov004_02240298[2];
    func_0203e624(0);
    func_ov004_02224fc8(data_ov004_0224e3ac, data_ov004_0224e3c8);
    if (unk_1a4.func_ov004_02224d8c(0)) {
        if (unk_ec.func_02054800(data_021c620c)) {
            void *r = unk_1a4.func_ov004_02224d8c(0);
            unk_ec.func_02054720(r, 3, 0x1000, 0, 0);
            unk_ec.func_02054710();
        }
    }
    Unk_ov004_0222a0bc_V3 v;
    v.v[0] = data_ov004_02240298[0];
    v.v[1] = data_ov004_02240298[1];
    v.v[2] = data_ov004_02240298[2];
    func_020b50b4()->func_020b68ec(&unk_370, v.v, 0x2000, 0x2000, 0x2000, 0, 0xd, 0xff);
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

Unk_ov004_0224e2b8::~Unk_ov004_0224e2b8() {}

Unk_ov004_0224e2b8::Unk_ov004_0224e2b8() {}

extern "C" Unk_ov004_0224e2b8 *func_ov004_0222a2c0() {
    return data_ov004_02251288;
}

extern "C" Unk_ov004_0224e2b8 *func_ov004_0222a2cc() {
    return new Unk_ov004_0224e2b8;
}

// ---------------------------------------------------------------- Unk_ov004_0224e3f8
struct Unk_0204e858_Grid;

struct Unk_ov004_0222a374_Loc {
    u16 a;
    u16 b;
};

struct Unk_ov004_0222a374_Pair {
    s32 a, b;
    Unk_ov004_0222a374_Pair(s32 x, s32 y) {
        a = x;
        b = y;
    }
};

extern "C" {
extern Unk_0204e858_Grid *data_021c47c4;
void *func_020974a0(u32 i);
u16 *func_020986e4(void *p);
s32 func_0204b2d4(Unk_ov004_0222a374_Loc *l);
s32 func_0204b25c(u16 *p);
void func_0204b220(Unk_ov004_0222a374_Loc *l, s32 v);
s32 func_02053228(Unk_ov004_0222a374_Loc *l);
void func_0204eb30(Unk_0204e858_Grid *g, Unk_ov004_0222a374_Loc *l, s32 x, s32 y, s32 z);

void func_ov004_0222a374() {
    static Unk_ov004_0222a374_Pair tbl[4] = { Unk_ov004_0222a374_Pair(6, 9), Unk_ov004_0222a374_Pair(9, 9), Unk_ov004_0222a374_Pair(6, 12), Unk_ov004_0222a374_Pair(9, 12) };
    Unk_0204e858_Grid *g = data_021c47c4;
    if (g != 0) {
        s32 i;
        BOOL z1 = FALSE, z0 = FALSE, z2 = FALSE;
        for (i = 0; i < 4; i++) {
            void *p = func_020974a0(i);
            if (p != 0) {
                Unk_ov004_0222a374_Pair &e = tbl[i & 3];
                s32 x = e.a;
                s32 y = e.b;
                Unk_ov004_0222a374_Loc l;
                l.a = *func_020986e4(p);
                BOOL r;
                if (func_0204b2d4(&l) != 0) {
                    l.b = 0xfff1;
                    s32 t = func_0204b25c(&l.a);
                    r = (t == func_0204b25c(&l.b)) ? 1 : z1;
                } else {
                    if (l.a == 0xfff1) {
                        r = TRUE;
                    } else {
                        r = z0;
                    }
                }
                if (r == 0) {
                    func_0204b220(&l, 3);
                    if (x < 8) {
                        if (func_02053228(&l) == 2) {
                            x--;
                        }
                    }
                    func_0204eb30(g, &l, x, y, z2);
                }
            }
        }
    }
}
}

BOOL Unk_ov004_0224e3f8::vfunc_00() {
    func_ov004_0222a374();
    return TRUE;
}

Unk_ov004_0224e3f8::Unk_ov004_0224e3f8() {}

Unk_ov004_0224e3f8::~Unk_ov004_0224e3f8() {}

extern "C" Unk_ov004_0224e3f8 *func_ov004_0222a4e8() {
    return new Unk_ov004_0224e3f8;
}

// ---------------------------------------------------------------- callbacks (see unk_02209e64.cpp for the other three)
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

extern "C" void func_ov004_0222a520(Unk_ov004_0222a500 *self);
extern "C" void func_ov004_0222a540(Unk_ov004_0222a500 *self);

extern "C" void func_ov004_0222a500(Unk_ov004_0222a500 *self) {
    self->unk_1c = func_ov004_0222a540;
    self->unk_90 = 2;
    self->unk_24 = func_ov004_0222a520;
    self->unk_92 = 2;
}

extern "C" void func_ov004_0222a520(Unk_ov004_0222a500 *self) {
    Unk_ov004_0222a500_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_48(self->unk_00->unk_01, self);
    }
}

extern "C" void func_ov004_0222a540(Unk_ov004_0222a500 *self) {
    Unk_ov004_0222a500_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_4c(self->unk_00->unk_01, self);
    }
}

// ---------------------------------------------------------------- color blend
struct Unk_ov004_0222a560_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

extern "C" {
u16 *func_020b8fa4();
u16 func_020baa04(u32 v);

s16 func_ov004_0222a560() {
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
}

// ---------------------------------------------------------------- record list
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

extern "C" {
void func_ov004_022136d0(Unk_ov004_0222a644_V3 *v, s32 a, s32 b, u32 c);

void func_ov004_0222a644() {
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
}

// ---------------------------------------------------------------- 0x0222a6c0
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

struct Unk_ov004_0222a6c0_Self {
    /* 0x0000 */ u8 pad_0000[0x128];
    /* 0x0128 */ u8 unk_128[4];
    /* 0x012c */ u8 pad_012c[0x121c - 0x12c];
    /* 0x121c */ u8 unk_121c[4];
    /* 0x1220 */ u8 pad_1220[0x1228 - 0x1220];
    /* 0x1228 */ u8 unk_1228[4];
    /* 0x122c */ u8 pad_122c[0x331c - 0x122c];
    /* 0x331c */ u8 unk_331c[4];
    /* 0x3320 */ u8 pad_3320[0x3522 - 0x3320];
    /* 0x3522 */ s8 unk_3522;
};

static inline BOOL Unk_ov004_0222a6c0_Rng(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1188 && *p <= 0x11a7) {
        r = TRUE;
    }
    return r;
}

extern "C" {
s32 func_020567e4(void *p);
u16 *func_ov004_0222b38c(void *p);
u16 *func_ov004_0222b100(void *p);
s32 func_ov004_0222b37c(void *p);
s32 func_ov004_0222b0f0(void *p);
s32 func_01ffc5a4(s32 a, s32 b);

void func_ov004_0222a6c0(Unk_ov004_0222a6c0_Self *self, s32 idx, Unk_ov004_0222a6c0_Obj *o) {
    u8 *h = o->unk_d8;
    u8 *t = h + 4;
    u32 off = *(u16 *)(h + 0xa);
    u32 stride = *(u16 *)(t + off);
    Unk_ov004_0222a6c0_Rec *rec = (Unk_ov004_0222a6c0_Rec *)(h + *(u32 *)(t + off + stride * idx + 4));
    BOOL a;
    BOOL b;
    s32 v8, vc, v10;
    if (idx == func_020567e4(self->unk_121c)) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    if (idx == func_020567e4(self->unk_331c)) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (a && Unk_ov004_0222a6c0_Rng(func_ov004_0222b38c(self->unk_128))) {
    } else if (b && Unk_ov004_0222a6c0_Rng(func_ov004_0222b100(self->unk_1228))) {
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
        k = func_ov004_0222b37c(self->unk_128);
    } else {
        k = func_ov004_0222b0f0(self->unk_1228);
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
        switch (self->unk_3522) {
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
        switch (self->unk_3522) {
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
}

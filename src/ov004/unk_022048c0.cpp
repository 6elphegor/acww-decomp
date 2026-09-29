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
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020aa3b8 {
public:
    s32 func_020aa514();
};

class Unk_020660f8 {
public:
    Unk_020aa3b8 *func_020679b4();
    void func_02067a1c(s32 idx, u8 *a, char *b);
    s32 func_02067a3c(s32 idx, void *p);
    void func_02067a84(u8 *src, char *s);

    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    // slots 0x10..0x18 are overridden by the derived class's own virtuals (same functions as its vtable slots 0x60..0x68)
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020d8cf4 {
    Unk_020d8cf4();
    ~Unk_020d8cf4();
    virtual void vfunc_00();
    BOOL func_020318cc();
    void func_02031908(s32 a, s32 b, s32 c, s32 *p, s16 s, s32 *q);
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
    BOOL func_020b6928(Unk_020b6e10 *box);
};

class Unk_020e3efc {
public:
    Unk_020e3efc();
    ~Unk_020e3efc();
    u32 pad[0xc];
};

extern "C" {
void *func_0209750c();
void *func_020986bc(void *p);
u16 *func_020acf54(void *p);
s32 func_020acde8(u32 x);
s32 func_020acdac(u16 *p);
s32 func_020b3270(Unk_020e3efc *p, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_020b6960 *func_020b50b4();
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
BOOL func_0203d67c(void *p);
s32 func_020e9650(s32 *a, s32 *b);
extern char *data_ov004_022485a0;
extern char *data_ov004_022485a4;
}

// ---------------------------------------------------------------- Unk_ov004_0224860c
class Unk_ov004_0224860c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224860c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224860c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();

    void func_ov004_022049e0();
    BOOL func_ov004_02204a10();
    void func_ov004_02204a14();
    BOOL func_ov004_02204a38();
    void func_ov004_02204a80();
    BOOL func_ov004_02204a84();
    void func_ov004_02204a88();
    BOOL func_ov004_02204b04(s32 m);
    void func_ov004_02204c10();
    BOOL func_ov004_02204ccc();
    void func_ov004_02204cdc();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ Unk_020d8cf4 unk_134;
    /* 0x1d0 */ Unk_020b6e10 unk_1d0;
};

typedef void (Unk_ov004_0224860c::*Unk_02204a88_Fn)();
typedef BOOL (Unk_ov004_0224860c::*Unk_02204b04_Fn)();

extern "C" Unk_ov004_0224860c *data_ov004_0224f5c0;


// ---------------------------------------------------------------- Unk_ov004_0224882c (second class in the file, state methods only)
class Unk_ov004_0224882c;
extern "C" {
void func_ov004_022087a4(Unk_ov004_0224882c *self);
s32 func_02052cf4();
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_020e761c(s32 *p, s32 target, s32 step);
void func_ov004_022056bc(Unk_ov004_0224882c *self, s32 a);
void func_ov004_022088c0(Unk_ov004_0224882c *self, void *out);
void func_ov004_02206fe0(Unk_ov004_0224882c *self, void *arg);
void func_020ed188(Unk_ov004_0224882c *self);
void func_ov004_02234490(void *p);
void func_020943dc(u32 a);
void func_020e9960(void *out, s32 *a, s32 *b);
void func_ov004_02205f58(void *obj, Unk_ov004_0224882c *self);
void func_ov004_02207854(Unk_ov004_0224882c *self, void *v, s32 a);
void *func_ov004_02233bf4();
BOOL func_ov004_02233a20(void *o, void *a, s32 *b, s32 c);
BOOL func_ov004_02233a48(void *o, void *a, s32 *b, s32 c);
BOOL func_ov004_022339cc(void *o, void *a, s32 *out);
void func_ov004_02205eb0(void *obj, Unk_ov004_0224882c *self);
void func_ov004_02207038(Unk_ov004_0224882c *self, s32 a);
}

struct Unk_ov004_0224882c_Buf {
    s32 v[4];
};

class Unk_ov004_0224882c : public Unk_020d9670 {
public:
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94(u32 a);

    void func_ov004_02204f24();
    BOOL func_ov004_02204f8c();
    void func_ov004_02204f90();
    BOOL func_ov004_02205004();
    void func_ov004_0220500c();
    BOOL func_ov004_0220507c();
    void func_ov004_022050b8();
    BOOL func_ov004_022050c0();
    void func_ov004_02205138();
    BOOL func_ov004_022051a4();

    /* 0x0ec */ u8 pad_ec[0x14c - 0xec];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ u8 pad_158[0x168 - 0x158];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c[3];
    /* 0x178 */ u8 pad_178[0x188 - 0x178];
    /* 0x188 */ u8 unk_188[0x24c - 0x188];
    /* 0x24c */ u8 unk_24c[0x76c - 0x24c];
    /* 0x76c */ u16 unk_76c;
    /* 0x76e */ u8 pad_76e[0x77c - 0x76e];
    /* 0x77c */ s32 unk_77c;
};

// ================================================================ Unk_ov004_0224860c
void Unk_ov004_0224860c::vfunc_68() {
    u8 buf[4];
    u32 st = unk_1e;
    s32 v = unk_3c->func_020679b4()->func_020aa514();
    if (st == 0 || st == 7) {
        switch (v) {
        case 0:
            if (func_020acde8(*func_020acf54(func_020986bc(func_0209750c()))) == 0) {
                buf[0] = 1;
                unk_3c->func_02067a84(&buf[0], data_ov004_022485a0);
            } else {
                buf[1] = 2;
                unk_3c->func_02067a84(&buf[1], data_ov004_022485a0);
            }
            break;
        case 1:
            buf[2] = 6;
            unk_3c->func_02067a84(&buf[2], data_ov004_022485a0);
            break;
        case 2:
            buf[3] = 4;
            unk_3c->func_02067a84(&buf[3], data_ov004_022485a0);
            break;
        }
    }
}

void Unk_ov004_0224860c::vfunc_64() {
    u8 buf[2];
    switch (unk_1e) {
    case 1:
    case 2:
        if (func_020acde8(*func_020acf54(func_020986bc(func_0209750c()))) == 4) {
            buf[0] = 5;
            unk_3c->func_02067a84(&buf[0], data_ov004_022485a0);
        } else {
            buf[1] = 3;
            unk_3c->func_02067a84(&buf[1], data_ov004_022485a0);
        }
        break;
    }
}

void Unk_ov004_0224860c::vfunc_60() {}

void Unk_ov004_0224860c::func_ov004_022049e0() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224860c::func_ov004_02204a10() {
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_02204a14() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02204b04(2);
        }
    }
}

struct Unk_02204a38_Pad {
    s32 v[2];
    Unk_02204a38_Pad() {}
    ~Unk_02204a38_Pad() {}
};

BOOL Unk_ov004_0224860c::func_ov004_02204a38() {
    Unk_02204a38_Pad pad;
    func_0203e488(this, this);
    func_020a710c(data_ov004_022485a0);
    unk_1e = 0;
    func_ov004_02204c10();
    unk_3c->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_02204a80() {}

BOOL Unk_ov004_0224860c::func_ov004_02204a84() {
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_02204a88() {
    static Unk_02204a88_Fn tbl[3] = { &Unk_ov004_0224860c::func_ov004_02204a80, &Unk_ov004_0224860c::func_ov004_02204a14, &Unk_ov004_0224860c::func_ov004_022049e0 };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov004_0224860c::func_ov004_02204b04(s32 m) {
    static Unk_02204b04_Fn tbl[3] = { (Unk_02204b04_Fn)&Unk_ov004_0224860c::func_ov004_02204a84, (Unk_02204b04_Fn)&Unk_ov004_0224860c::func_ov004_02204a38, (Unk_02204b04_Fn)&Unk_ov004_0224860c::func_ov004_02204a10 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224860c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov004_02204b04(1);
        break;
    case 8:
        func_ov004_02204b04(0);
        break;
    }
}

BOOL Unk_ov004_0224860c::vfunc_48(void *a) {
    Unk_020d9670 *o = (Unk_020d9670 *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < 0x2333) {
            u32 d = (u16)(o->unk_8e - (unk_8e + 0x8000));
            if (d < 0x1000 || d >= 0xf000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224860c::func_ov004_02204c10() {
    if (unk_3c) {
        u16 *p = func_020acf54(func_020986bc(func_0209750c()));
        u8 buf[2];
        Unk_020e3efc obj;
        func_020b3270(&obj, *p, 10, 1, 0, 0);
        unk_3c->func_02067a3c(0, &obj);
        func_020b3270(&obj, func_020acdac(p), 10, 1, 0, 0);
        unk_3c->func_02067a3c(1, &obj);
        if (func_020acde8(*p) != 0) {
            buf[0] = func_020acde8(*p) - 1;
            unk_3c->func_02067a1c(2, &buf[0], data_ov004_022485a4);
        }
        buf[1] = func_020acde8(*p);
        unk_3c->func_02067a1c(3, &buf[1], data_ov004_022485a4);
    }
}

BOOL Unk_ov004_0224860c::func_ov004_02204ccc() {
    return unk_134.func_020318cc();
}

void Unk_ov004_0224860c::func_ov004_02204cdc() {
    unk_134.func_02031908(0x2000, 0x2000, 0x2000, unk_5c, 0, 0);
    func_020b50b4()->func_020b68ec(&unk_1d0, unk_5c, 0x2000, 0x2000, 0x2000, 0, 0xb, 0xff);
}

BOOL Unk_ov004_0224860c::vfunc_0c() {
    func_ov004_02204ccc();
    return TRUE;
}

BOOL Unk_ov004_0224860c::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224860c::vfunc_18() {
    func_ov004_02204a88();
    func_020b50b4()->func_020b6928(&unk_1d0);
    return TRUE;
}

BOOL Unk_ov004_0224860c::vfunc_00() {
    data_ov004_0224f5c0 = this;
    func_0203e624(0);
    func_ov004_02204b04(0);
    func_ov004_02204cdc();
    return TRUE;
}

Unk_ov004_0224860c::~Unk_ov004_0224860c() {}

Unk_ov004_0224860c::Unk_ov004_0224860c() {
    data_ov004_0224f5c0 = 0;
}

extern "C" Unk_ov004_0224860c *func_ov004_02204e7c() {
    return new Unk_ov004_0224860c;
}

// ================================================================ Unk_ov004_0224882c
void Unk_ov004_0224882c::func_ov004_02204f24() {
    if (unk_77c != 0x23 && unk_77c != 0x24 && unk_77c != 0x25) {
        unk_8e += 0x400;
    }
    func_ov004_022087a4(this);
    s32 v = func_01ffc5a4(func_02052cf4(), 0x64000) >> 2;
    unk_14c = unk_150 = unk_154 = v;
}

BOOL Unk_ov004_0224882c::func_ov004_02204f8c() {
    return TRUE;
}

void Unk_ov004_0224882c::func_ov004_02204f90() {
    Unk_ov004_0224882c_Buf buf;
    func_020e761c(&unk_14c, 0, 0x400);
    unk_150 = unk_154 = unk_14c;
    if (unk_14c == 0) {
        func_ov004_022056bc(this, 7);
    } else if (unk_76c == 1) {
        func_ov004_022088c0(this, &buf);
        func_ov004_02206fe0(this, &buf);
    }
    unk_76c++;
}

BOOL Unk_ov004_0224882c::func_ov004_02205004() {
    return func_ov004_0220507c();
}

void Unk_ov004_0224882c::func_ov004_0220500c() {
    Unk_ov004_0224882c_Buf buf;
    func_020e761c(&unk_14c, 0, 0x400);
    unk_150 = unk_154 = unk_14c;
    if (unk_14c == 0) {
        func_020ed188(this);
    }
    if (unk_76c == 1) {
        func_ov004_022088c0(this, &buf);
        func_ov004_02206fe0(this, &buf);
    }
    unk_76c++;
}

BOOL Unk_ov004_0224882c::func_ov004_0220507c() {
    Unk_ov004_0224882c_Buf buf;
    vfunc_90();
    unk_76c = 0;
    func_ov004_022088c0(this, &buf);
    func_ov004_02234490(&buf);
    func_020943dc(0x4c8);
    return TRUE;
}

void Unk_ov004_0224882c::func_ov004_022050b8() {
    func_ov004_02205138();
}

BOOL Unk_ov004_0224882c::func_ov004_022050c0() {
    Unk_ov004_0224882c_Buf buf;
    func_020e9960(&buf, unk_16c, unk_5c);
    func_ov004_02205f58(unk_188, this);
    func_ov004_02207854(this, &buf, 0);
    void *g = func_ov004_02233bf4();
    if (g) {
        if (func_ov004_02233a20(g, unk_24c, unk_5c, unk_168)) {
            vfunc_94(0);
            func_ov004_02207038(this, 1);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224882c::func_ov004_02205138() {
    Unk_ov004_0224882c_Buf buf;
    void *g = func_ov004_02233bf4();
    if (g) {
        if (func_ov004_022339cc(g, unk_24c, buf.v)) {
            unk_5c[0] = unk_16c[0];
            unk_5c[1] = unk_16c[1];
            unk_5c[2] = unk_16c[2];
            func_ov004_022056bc(this, 1);
            func_ov004_02205eb0(unk_188, this);
        } else {
            unk_5c[0] = buf.v[0];
            unk_5c[1] = buf.v[1];
            unk_5c[2] = buf.v[2];
        }
    }
}

BOOL Unk_ov004_0224882c::func_ov004_022051a4() {
    Unk_ov004_0224882c_Buf buf;
    func_020e9960(&buf, unk_16c, unk_5c);
    func_ov004_02205f58(unk_188, this);
    func_ov004_02207854(this, &buf, 0);
    void *g = func_ov004_02233bf4();
    if (g) {
        if (func_ov004_02233a48(g, unk_24c, unk_5c, unk_168)) {
            vfunc_94(1);
            func_ov004_02207038(this, 0);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" Unk_ov004_0224860c *func_ov004_02204e70() {
    return data_ov004_0224f5c0;
}

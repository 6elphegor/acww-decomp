// mwcc-version: 1.2/sp2
// ov004 TU05: .text 0x02213b90-0x02214948 (class Unk_ov004_0224bda0). The switch function
// Unk_ov004_0224bda0::func_ov004_02214494 needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

// Secondary base at +0xec (vtable main 0x020ddcf0). Unk_ov004_0224bda0 overrides its slots 0x10, 0x14 and 0x18 with
// the functions its own vtable has at 0x60, 0x64 and 0x68, so those three slots carry the names vfunc_60/64/68 here
// (the thunks are _ZThn236_N18Unk_ov004_0224bda08vfunc_60Ev ...). Every other slot is named vfunc_sXX: main has a
// label _ZN12Unk_020ddcf09vfunc_sXXEv for each, and the names cannot be overridden by the primary chain by accident.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
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
    u8 pad_41[3];
};

// Member at +0x134: the original constructs it with the complete-object constructor (C1), which a member declaration
// cannot do, so it is raw storage plus explicit calls through the real symbol names (as in TU04).
struct Unk_020b6a94 {
    u8 pad[0x1c];
};

class Unk_020dd324 {
public:
    Unk_020dd324(u16 *p);
    ~Unk_020dd324();
    u32 pad[9];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[7];
};

struct Unk_ov004_022142fc_Actor {
    u8 pad_00[0x5c];
    u8 unk_5c[0xc];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov004_022146ec_Bits {
    u16 a : 2;
    u16 b : 6;
    u16 c : 8;
};

struct Unk_ov004_022146ec_Actor {
    u8 pad_00[0x5c];
    s32 pos[3];
    u8 pad_68[0x8e - 0x68];
    u16 ang;
};

struct Unk_ov004_022146ec_Sing {
    u8 pad_00[0x64];
    u32 unk_64;
};

class Unk_ov004_0224bda0;
class Unk_020b6960;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_0203e47c _ZN12Unk_020d967013func_0203e47cEi
#define func_0203e488 _ZN12Unk_020d967013func_0203e488Ei
#define func_0203e624 _ZN12Unk_020d967013func_0203e624Ej
#define func_020b68a8 _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih
#define func_02070358 _ZN12Unk_0206fe8013func_02070358EPt
#define func_02070370 _ZN12Unk_0206fe8013func_02070370EPt
#define func_020700a4 _ZN12Unk_0206fe8013func_020700a4EiPt
#define func_020679b4 _ZN12Unk_020660f813func_020679b4Ev
#define func_020679c0 _ZN12Unk_020660f813func_020679c0Ei
#define func_020679ec _ZN12Unk_020660f813func_020679ecEiPvj
#define func_02067a3c _ZN12Unk_020660f813func_02067a3cEiPv
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev
#define func_020aa608 _ZN12Unk_020aa3b813func_020aa608Ev
#define func_020aa638 _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci
#define func_020aa680 _ZN12Unk_020aa3b813func_020aa680Eii

extern "C" {
extern u8 data_021edb5c;
extern char data_021edb60[];
extern u8 data_021f4880[];
extern s16 data_02135f44[];
extern Unk_ov004_022146ec_Sing *data_020cbb18;
extern Unk_020660f8 data_021ed0a0;

void _ZN12Unk_020b6a94C1Ev(Unk_020b6a94 *self);
void _ZN12Unk_020b6a94D1Ev(Unk_020b6a94 *self);
s32 func_02002cf8(s32 a, s32 b, void *c, void *d, void *e);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
void func_0203e624(void *self, u32 a);
s32 func_020b68a8(Unk_020b6960 *self, Unk_020b6a94 *o, void *a, u32 b, u32 c, u32 d);
s32 func_02070358(void *self, u16 *p);
s32 func_02070370(void *self, u16 *p);
s32 func_020700a4(void *self, Unk_020e1c64 *a, u16 *p);
void *func_020679b4(void *self);
void func_020679c0(void *self, s32 a);
void func_020679ec(void *self, s32 a, Unk_020dd324 *b, u32 c);
void func_02067a3c(void *self, s32 a, Unk_020e1c64 *b);
void func_02067a84(void *self, u8 *a, void *b);
BOOL func_020aa514(void *self);
void func_020aa608(void *self);
void func_020aa638(void *self, s32 a, const u8 *b, s32 c, const char *d, s32 e, s32 f);
void func_020aa680(void *self, s32 a, s32 b);
s32 func_0203d67c(void *self);
s32 func_0203d704(void *self, s32 a);
void func_020ed188(void *self);
void *func_020e8574(u32 size);
void func_020e8558(void *p);
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
Unk_020b6960 *func_020b50b4(void);
s32 func_020b50e8(void);
Unk_ov004_022146ec_Actor *func_020951ec(u32);
void func_01ffd070(void *, void *, void *);
}

class Unk_ov004_0224bda0 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224bda0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224bda0();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();

    void func_ov004_02213c58();
    BOOL func_ov004_02213c7c();
    void func_ov004_02213d18();
    BOOL func_ov004_02213d48();
    void func_ov004_02213d4c();
    BOOL func_ov004_02213d70();
    void func_ov004_02213e74();
    BOOL func_ov004_02213ea4();
    void func_ov004_02213ea8();
    BOOL func_ov004_02213f34(s32 idx);
    BOOL func_ov004_02214350();
    void func_ov004_02214364();
    u32 func_ov004_022143b8();
    BOOL func_ov004_02214404();
    BOOL func_ov004_0221444c();
    BOOL func_ov004_02214494();
    BOOL func_ov004_022145bc();
    BOOL func_ov004_02214608();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ Unk_020b6a94 unk_134;
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 unk_151;
    /* 0x152 */ u8 pad_152[2];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ u32 unk_158;
    /* 0x15c */ s16 unk_15c;
    /* 0x15e */ u8 pad_15e[2];
    /* 0x160 */ u16 *unk_160;
    /* 0x164 */ u32 unk_164;
    /* 0x168 */ u8 unk_168;
};

typedef void (Unk_ov004_0224bda0::*Unk_ov004_02213ea8_Fn)();
typedef BOOL (Unk_ov004_0224bda0::*Unk_ov004_02213f34_Fn)();

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224bda0 *(*factory)();
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
extern s16 data_ov004_0224bd3c;
extern char data_ov004_0224be8c[];
extern u8 data_ov004_022502c4;
extern u8 data_ov004_022502c8;
extern u32 data_ov004_022502d4;
extern u8 *data_ov004_022502d8;
extern u32 data_ov004_022502e8;
extern u32 data_ov004_022502f8;
extern Unk_ov004_0224bda0 *data_ov004_0225033c[0x20];
Unk_ov004_0224bda0 *func_ov004_022148a0(void);
void func_ov004_0221465c(void);
}

// ---- definitions ----

// ---------------------------------------------------------------- data
// The six 4-byte objects are initialised by __sinit_ov004_02246b8c in this order.
extern "C" Unk_ov004_Quad data_ov004_022502f4(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502e4(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502ec(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502dc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502d0(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502e0(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry data_ov004_0224bd80 = { func_ov004_022148a0, 0x19, 0x1e, 0, 0xc8000, 0x12c000, 0x258000 };
extern "C" {
s16 data_ov004_0224bd3c = -1;
char data_ov004_0224be8c[] = "obj_etc_museum";
u8 data_ov004_022502c4;
u8 data_ov004_022502c8;
u32 data_ov004_022502d4;
u8 *data_ov004_022502d8;
u32 data_ov004_022502e8;
u32 data_ov004_022502f8;
Unk_ov004_0224bda0 *data_ov004_0225033c[0x20];
}

// ---------------------------------------------------------------- 0x02213b90
extern "C" s32 func_ov004_02213b90() {
    if (data_ov004_022502c4 == 0) {
        data_ov004_022502d4 = 4;
        data_ov004_0224bd3c = 0;
        data_ov004_022502d8 = 0;
        data_ov004_022502e8 = 0;
        data_ov004_022502f8 = 0;
        return func_02002cf8(0x19, 0, data_021f4880, 0, 0);
    }
    return 0;
}

extern "C" void func_ov004_02213be8(s32 a, void *b, s32 c, s32 d, s16 e, u8 *f, s32 g) {
    u16 loc[3];
    data_ov004_022502d4 = a;
    data_ov004_0224bd3c = e;
    data_ov004_022502d8 = f;
    data_ov004_022502e8 = g;
    data_ov004_022502f8 = d;
    loc[0] = 0;
    loc[1] = c;
    loc[2] = 0;
    func_02002cf8(0x19, 0, b, loc, 0);
}

extern "C" void *func_ov004_02213c40(s32 i) {
    if (i >= 0 && (u32)i < 0x20) {
        return data_ov004_0225033c[i];
    }
    return 0;
}

void Unk_ov004_0224bda0::func_ov004_02213c58() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02213f34(2);
        }
    }
}

BOOL Unk_ov004_0224bda0::func_ov004_02213c7c() {
    u16 id[2];
    func_0203e488(this, this);
    func_020a710c(data_ov004_0224be8c);
    id[1] = 0x12e4;
    Unk_020660f8 *const g = &data_021ed0a0;
    if ((u32)func_02070370(g, &id[1]) <= 1) {
        Unk_020e1c64 obj;
        if (func_020700a4(g, &obj, &id[1])) {
            unk_1e = 3;
            func_02067a3c(unk_3c, 0, &obj);
        }
    } else {
        unk_1e = 4;
    }
    unk_3c->unk_08 = 1;
    unk_168++;
    return TRUE;
}

void Unk_ov004_0224bda0::func_ov004_02213d18() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

void Unk_ov004_0224bda0::func_ov004_02213d4c() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02213f34(2);
        }
    }
}

BOOL Unk_ov004_0224bda0::func_ov004_02213d70() {
    struct { u16 pad[3]; u16 w; u16 sel; } l;
    u32 i = 0;
    unk_151 = i;
    for (; i < unk_164; i++) {
        l.w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &l.w)) {
            unk_151 = i;
            break;
        }
    }
    l.sel = unk_160[unk_151];
    func_0203e488(this, this);
    Unk_020ddcf0 &s = *this;
    s.func_020a710c(data_ov004_0224be8c);
    if (func_ov004_0221444c() == 0) {
        unk_1e = 0;
    } else if (unk_158 == 3) {
        if (unk_164 == 1) {
            unk_1e = 5;
        } else {
            unk_1e = unk_15c;
        }
    } else if (unk_158 <= 1) {
        u32 n = func_ov004_022143b8();
        if (n > 3) n = 3;
        unk_1e = (n - 1) % 3 + 5;
    } else {
        if (func_02070370(&data_021ed0a0, &l.sel) != 2) {
            unk_1e = 1;
        } else {
            unk_1e = 2;
        }
    }
    unk_3c->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224bda0::func_ov004_02213e74() {
    if (func_ov004_02214350()) {
        if (unk_168 == 0) {
            func_0203d704(this, 0);
        } else {
            func_020ed188(this);
        }
    }
}

void Unk_ov004_0224bda0::func_ov004_02213ea8() {
    static Unk_ov004_02213ea8_Fn tbl[4] = {
        &Unk_ov004_0224bda0::func_ov004_02213e74,
        &Unk_ov004_0224bda0::func_ov004_02213d4c,
        &Unk_ov004_0224bda0::func_ov004_02213d18,
        &Unk_ov004_0224bda0::func_ov004_02213c58,
    };
    if (unk_130 < 4) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov004_0224bda0::func_ov004_02213f34(s32 idx) {
    static Unk_ov004_02213f34_Fn tbl[4] = {
        &Unk_ov004_0224bda0::func_ov004_02213ea4,
        &Unk_ov004_0224bda0::func_ov004_02213d70,
        &Unk_ov004_0224bda0::func_ov004_02213d48,
        &Unk_ov004_0224bda0::func_ov004_02213c7c,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_130 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::vfunc_68() {
    if (func_ov004_02214350() == 0) {
        u8 a0, a1, a2, a3;
        u16 sel;
        if (func_020aa514(func_020679b4(unk_3c)) == 0) {
            sel = unk_160[unk_151];
            if (unk_158 <= 1) {
                u32 n = func_ov004_022143b8();
                if (n > 3) n = 3;
                a0 = (n - 1) % 3 + 5;
                func_02067a84(unk_3c, &a0, 0);
            } else if (func_02070370(&data_021ed0a0, &sel) != 2) {
                a1 = 1;
                func_02067a84(unk_3c, &a1, 0);
            } else {
                a2 = 2;
                func_02067a84(unk_3c, &a2, 0);
            }
        } else {
            a3 = data_021edb5c;
            func_02067a84(unk_3c, &a3, 0);
        }
    }
}

BOOL Unk_ov004_0224bda0::vfunc_64() {
    u8 b[7];
    if (func_ov004_02214350() == 0) {
        if (unk_158 == 3) {
            if (unk_1e != 5) {
                if (func_ov004_02214404()) {
                    u32 e = unk_1e;
                    if (unk_15c == e) {
                        b[0] = e + 1;
                        func_02067a84(unk_3c, &b[0], 0);
                    } else {
                        b[1] = data_021edb5c;
                        func_02067a84(unk_3c, &b[1], 0);
                    }
                } else {
                    b[2] = data_021edb5c;
                    func_02067a84(unk_3c, &b[2], 0);
                }
            } else {
                b[3] = data_021edb5c;
                func_02067a84(unk_3c, &b[3], 0);
            }
        } else if (func_ov004_022143b8() != 0) {
            void *o = func_020679b4(unk_3c);
            if (o) {
                func_020aa680(o, 2, 1);
                b[4] = 0xe5;
                func_020aa638(o, 0, &b[4], 0, data_021edb60, 0, 0);
                b[5] = 0xe6;
                func_020aa638(o, 1, &b[5], 0, data_021edb60, 0, 0);
                func_020aa608(o);
                func_020679c0(unk_3c, 1);
            }
        } else {
            b[6] = data_021edb5c;
            func_02067a84(unk_3c, &b[6], 0);
        }
    }
}

void Unk_ov004_0224bda0::vfunc_60() {
    if (func_ov004_02214350() == 0) {
        u16 w1, w2;
        if (unk_158 <= 1) {
            u32 n = 0;
            switch (unk_1e) {
            case 5: n = 1; break;
            case 6: n = 2; break;
            case 7: n = 3; break;
            }
            u32 i;
            for (i = 0; i < n; i++) {
                w1 = unk_160[unk_151];
                Unk_020dd324 o(&w1);
                func_020679ec(unk_3c, i, &o, 7);
                func_ov004_02214364();
            }
        } else {
            u32 idx = unk_151;
            if (idx < unk_164) {
                w2 = unk_160[idx];
                Unk_020e1c64 e;
                func_020700a4(&data_021ed0a0, &e, &w2);
                func_02067a3c(unk_3c, 0, &e);
                Unk_020dd324 o2(&w2);
                func_020679ec(unk_3c, 0, &o2, 7);
                if (unk_158 != 3) {
                    func_ov004_02214364();
                }
            }
        }
    }
}

void Unk_ov004_0224bda0::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        func_ov004_02213f34(3);
        break;
    case 0:
        func_ov004_02213f34(1);
        break;
    case 8:
        func_ov004_02213f34(0);
        break;
    }
}

BOOL Unk_ov004_0224bda0::vfunc_48(void *a0) {
    Unk_ov004_022142fc_Actor *a = (Unk_ov004_022142fc_Actor *)a0;
    if (a) {
        if (func_020e9650(a->unk_5c, (u8 *)this + 0x5c) < 0x2333) {
            if (func_020e780c((s16)(*(s16 *)((u8 *)this + 0x8e) + 0x8000), a->unk_8e) < unk_154) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_022145bc() {
    if (func_ov004_02214350() == 0) {
        u32 idx = unk_150;
        if (idx < 0x20) {
            data_ov004_0225033c[idx] = 0;
            data_ov004_022502c8--;
            unk_150 = 0xff;
            return TRUE;
        }
    } else {
        data_ov004_022502c4 = 0;
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214608() {
    if (func_ov004_02214350()) {
        unk_150 = 0xff;
        data_ov004_022502c4 = 1;
        return TRUE;
    }
    unk_150 = data_ov004_022502c8;
    if (unk_150 < 0x20) {
        data_ov004_0225033c[unk_150] = this;
        data_ov004_022502c8++;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02213d48() {
    return TRUE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02213ea4() {
    return TRUE;
}

void Unk_ov004_0224bda0::func_ov004_02214364() {
    u32 i = unk_151 + 1;
    for (; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w)) {
            unk_151 = i;
            return;
        }
    }
    unk_151 = unk_164;
}

u32 Unk_ov004_0224bda0::func_ov004_022143b8() {
    u32 cnt = 0;
    u32 i = unk_151;
    for (; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w)) {
            cnt++;
        }
    }
    return cnt;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214404() {
    u32 i;
    for (i = 0; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::func_ov004_0221444c() {
    u32 i;
    for (i = 0; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214350() {
    if (unk_158 == 4) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------- 0x0221465c
extern "C" void func_ov004_0221465c(void) {
    if (data_ov004_022502c8 == 0) {
        u32 i;
        for (i = 0; i < 0x20; i++) {
            data_ov004_0225033c[i] = 0;
        }
    }
}

BOOL Unk_ov004_0224bda0::vfunc_0c() {
    func_ov004_022145bc();
    if (unk_160 != 0) {
        func_020e8558(unk_160);
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224bda0::vfunc_18() {
    func_ov004_02213ea8();
    if (func_ov004_02214350() == 0) {
        func_020b68a8(func_020b50b4(), &unk_134, unk_5c, 0xc00, 0xe, unk_150);
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::vfunc_00() {
    Unk_ov004_022146ec_Bits l;
    s32 v[3];
    s32 out[3];
    BOOL r;
    func_ov004_0221465c();
    unk_158 = data_ov004_022502d4;
    unk_15c = data_ov004_0224bd3c;
    unk_164 = data_ov004_022502e8;
    unk_154 = data_ov004_022502f8;
    if (func_ov004_02214608() != 0) {
        if (func_ov004_02214350() != 0) {
            Unk_ov004_022146ec_Actor *o = func_020951ec(4);
            if (o != 0) {
                s32 idx = (o->ang >> 4) * 2;
                v[0] = data_02135f44[idx];
                v[1] = 0;
                v[2] = data_02135f44[idx + 1];
                func_01ffd070(out, o->pos, v);
                unk_5c[0] = out[0];
                unk_5c[1] = out[1];
                unk_5c[2] = out[2];
            }
        }
        l.a = (u16)data_020cbb18->unk_64;
        *(u16 *)&l = (*(u16 *)&l & ~0xfc) | ((func_020b50e8() & 0x3f) << 2);
        l.c = unk_150;
        func_0203e624(this, *(u16 *)&l);
        func_ov004_02213f34(0);
        r = func_ov004_02214494();
    } else {
        r = FALSE;
    }
    return r;
}

Unk_ov004_0224bda0::~Unk_ov004_0224bda0() {
    _ZN12Unk_020b6a94D1Ev(&unk_134);
}

Unk_ov004_0224bda0::Unk_ov004_0224bda0() {
    _ZN12Unk_020b6a94C1Ev(&unk_134);
}

extern "C" Unk_ov004_0224bda0 *func_ov004_022148a0(void) {
    return new Unk_ov004_0224bda0;
}

#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_02225cf4_Ent {
    u8 pad;
};

struct Unk_ov004_02225c6c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02226158_V3 {
    s32 x, y, z;
    Unk_ov004_02226158_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_ov004_02226158_V3() {}
};

struct Unk_ov004_02225cf4_Q {
    u32 pad_00;
    u32 unk_04;
    u32 pad_08;
    u32 unk_0c;
};

struct Unk_ov004_02225cf4_P {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[0xb0 - 0xc];
    Unk_ov004_02225cf4_Q *unk_b0;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
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

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_0224d80c : public Unk_020d9670 {
public:
    Unk_ov004_0224d80c();
    virtual ~Unk_ov004_0224d80c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60(u32 a);
    virtual BOOL vfunc_64();

    void func_ov004_022257e4();
    BOOL func_ov004_02225870();
    void func_ov004_022258e0();
    BOOL func_ov004_02225924();
    void func_ov004_02225984();
    BOOL func_ov004_02225a14();
    void func_ov004_02225a84();
    BOOL func_ov004_02225abc();
    void func_ov004_02225b1c();
    void func_ov004_02225c48();
    void func_ov004_02225c6c();
    void func_ov004_02225cd4(s32 a);
    void func_ov004_02225ce8();
    void func_ov004_02225cf4(u32 a, Unk_ov004_02225cf4_P *p);
    BOOL func_ov004_02225f10();
    BOOL func_ov004_02225f88();
    void func_ov004_02225fec();
    BOOL func_ov004_02226064();

    /* 0x0ec */ u8 unk_ec[0x148 - 0xec];
    /* 0x148 */ u32 unk_148;
    /* 0x14c */ u8 pad_14c[0x188 - 0x14c];
    /* 0x188 */ u8 unk_188[0x1a4 - 0x188];
    /* 0x1a4 */ u8 unk_1a4[0x248 - 0x1a4];
    /* 0x248 */ u32 unk_248;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ u8 pad_24d[3];
    /* 0x250 */ u8 pad_250[0x290 - 0x250];
    /* 0x290 */ u8 unk_290[0x298 - 0x290];
    /* 0x298 */ u32 unk_298;
    /* 0x29c */ u8 pad_29c[0x2a8 - 0x29c];
    /* 0x2a8 */ u32 *unk_2a8;
    /* 0x2ac */ u32 pad_2ac;
    /* 0x2b0 */ u32 unk_2b0;
    /* 0x2b4 */ u32 unk_2b4;
    /* 0x2b8 */ u32 unk_2b8;
    /* 0x2bc */ u8 unk_2bc[0x354 - 0x2bc];
    /* 0x354 */ u8 unk_354;
    /* 0x355 */ u8 pad_355[3];
    /* 0x358 */ u8 unk_358[0x3f4 - 0x358];
    /* 0x3f4 */ u8 unk_3f4[0x490 - 0x3f4];
    /* 0x490 */ u8 unk_490;
    /* 0x491 */ u8 pad_491[3];
    /* 0x494 */ s32 unk_494;
};

typedef Unk_ov004_0224d80c Cls;
typedef void (Cls::*Fn1)();
typedef BOOL (Cls::*Fn2)();

extern "C" {
extern u8 data_ov004_0224014c[];
extern u8 data_ov004_0224014d[];
extern u8 data_ov004_0224014e[];
extern u8 data_ov004_02240150[];
extern u8 data_ov004_02240154[];
extern u32 data_ov004_0224026c;
extern u32 data_ov004_0224d7e8[];
extern u8 data_ov004_0224d874[];
extern u8 data_ov004_0224d890[];
extern u8 data_ov004_0224d8ac[];
extern u8 data_ov004_0224d8b4[];
extern u8 data_ov004_0224d8c0[];
extern u32 data_021c620c;
extern void *data_020cbb18;
extern Cls *data_ov004_02250c3c;

s32 func_ov004_02224d8c(void *, u32);
s32 func_ov004_02224d7c(void *, u32);
u8 *func_ov004_02224d68(void *);
u32 func_ov004_02224d04(void *);
void func_ov004_02224d08(void *);
void func_ov004_02224d9c(void *);
s32 func_ov004_02224dbc(void *, void *);
s32 func_ov004_02224d10(void *, void *);
s32 func_ov004_02226458(void *);

void func_02054720(void *, s32, s32, s32, u16, u16);
void *func_020554c0(void *);
void func_02055b00(void *, s32, s32, s32, s32, u16);
void func_02055b38(void *, s32, s32, s32, s32);
void func_02055a9c(void *, void *);
BOOL func_02055bcc(void *, u32, u32);
void func_0200402c(u32);
void func_020547e4(void *);
void func_020566bc(void *);
BOOL func_02056654(void *);
BOOL func_020565e8(void *, u32);
void func_020e7820(s32 *, s32, s32, s32);
s32 func_02054800(void *, u32);
void func_02054710(void *);
void func_020547cc(void *, s32);
s32 func_02057110(void *, u32);
s32 func_020318cc(void *);
s32 func_02031908(void *, s32, s32, s32, void *, s32, s32);
void func_0209cf18(u8 *);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_02133150(s32, s32);
s32 func_020b50e8(void);
void func_021039ec(void *, void *);
void func_02103830(void *, void *);
void *func_02036c58(void);
void *func_02036ce0(void *);
s32 func_020850e0(void);
s32 func_02085180(s32);
s32 func_02086efc(s32);
s32 func_02072e88(void *, u32);
void func_020555ec(void *, void *, s32);
void func_02055488(void *, void *, void *);
s32 func_02135558(void *, void *, void *);
}

BOOL Unk_ov004_0224d80c::func_ov004_02225870() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 3);
    func_02054720(&unk_ec, r, 1, 0x1000, 0, 0);
    void *o = func_020554c0(&unk_ec);
    func_02055b00(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 3), 1, 0x1000, 0);
    func_0200402c(0x4ec);
    return TRUE;
}

void Unk_ov004_0224d80c::func_ov004_022258e0() {
    func_020547e4(&unk_ec);
    func_020566bc(&unk_290);
    *unk_2a8 = unk_298;
    if (func_020b50e8() == 0xb) {
        func_ov004_02225cd4(-0x2000);
    }
}

BOOL Unk_ov004_0224d80c::func_ov004_02225924() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 2);
    func_02054720(&unk_ec, r, 0, 0x1000, 0, 0);
    void *o = func_020554c0(&unk_ec);
    func_02055b00(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 2), 0, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224d80c::func_ov004_02225984() {
    s32 v;
    func_020547e4(&unk_ec);
    func_020566bc(&unk_290);
    *unk_2a8 = unk_298;
    v = unk_494;
    func_020e7820(&v, -0x2000, 0x100, 0x1000);
    func_ov004_02225cd4(v);
    if (func_02056654(unk_188)) {
        vfunc_60(2);
    } else if (func_020565e8(unk_188, 0x3a)) {
        func_0200402c(0x4ed);
    }
}

BOOL Unk_ov004_0224d80c::func_ov004_02225a14() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 1);
    func_02054720(&unk_ec, r, 1, 0x1000, 0, 0);
    void *o = func_020554c0(&unk_ec);
    func_02055b00(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 1), 1, 0x1000, 0);
    func_0200402c(0x4eb);
    return TRUE;
}

void Unk_ov004_0224d80c::func_ov004_02225a84() {
    func_020547e4(&unk_ec);
    func_020566bc(&unk_290);
    *unk_2a8 = unk_298;
    func_ov004_02225cd4(0);
}

BOOL Unk_ov004_0224d80c::func_ov004_02225abc() {
    s32 r = func_ov004_02224d8c(&unk_1a4, 0);
    func_02054720(&unk_ec, r, 0, 0x1000, 0, 0);
    void *o = func_020554c0(&unk_ec);
    func_02055b00(&unk_290, (s32)o, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224d80c::func_ov004_02225b1c() {
    static Fn1 tbl[4] = {&Cls::func_ov004_02225a84, &Cls::func_ov004_02225984, &Cls::func_ov004_022258e0,
                         &Cls::func_ov004_022257e4};
    u32 i = unk_24c;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224d80c::vfunc_60(u32 a) {
    static Fn2 tbl[4] = {&Cls::func_ov004_02225abc, &Cls::func_ov004_02225a14, &Cls::func_ov004_02225924,
                         &Cls::func_ov004_02225870};
    if (a < 4) {
        if ((this->*tbl[a])()) {
            unk_24c = a;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov004_0224d80c::func_ov004_02225c48() {
    if (unk_354) {
        func_020318cc(unk_2bc);
    }
}

void Unk_ov004_0224d80c::func_ov004_02225c6c() {
    if (unk_354) {
        func_020318cc(unk_2bc);
    }
    if (unk_490) {
        Unk_ov004_02225c6c_V3 v;
        s32 z = unk_494 + 0x10000;
        v.x = 0x10000;
        v.y = 0;
        v.z = z;
        func_02031908(unk_2bc, 0x8000, 0, 0x2000, &v, 0, 0);
    }
}

void Unk_ov004_0224d80c::func_ov004_02225cd4(s32 a) {
    unk_490 = 1;
    unk_494 = a;
}

void Unk_ov004_0224d80c::func_ov004_02225ce8() {
    unk_490 = 0;
}

void Unk_ov004_0224d80c::func_ov004_02225cf4(u32 a, Unk_ov004_02225cf4_P *p) {
    u8 tm[2];
    func_0209cf18(tm);
    s32 hr = tm[1];
    s32 f = func_01ffc5a4(tm[0] << 12, 0x3c000);
    u32 i0 = (u8)((hr + 1) % 24) * 12;
    u32 i1 = (u8)(hr % 24) * 12;
    u32 packed;
    s32 w1, w2;
    packed = (u8)(((0x1000 - f) * data_ov004_0224014e[i1] + f * data_ov004_0224014e[i0]) >> 12) << 10;
    {
        u32 c = (u8)(((0x1000 - f) * data_ov004_0224014c[i1] + f * data_ov004_0224014c[i0]) >> 12);
        u32 d = (u8)(((0x1000 - f) * data_ov004_0224014d[i1] + f * data_ov004_0224014d[i0]) >> 12) << 5;
        packed |= c | d;
    }
    u16 pk = (u16)packed;
    w1 = ((0x1000 - f) * *(s32 *)(data_ov004_02240154 + i1) + f * *(s32 *)(data_ov004_02240154 + i0)) >> 12;
    w2 = ((0x1000 - f) * *(s32 *)(data_ov004_02240150 + i1) + f * *(s32 *)(data_ov004_02240150 + i0)) >> 12;
    u32 e0 = unk_2b0;
    if (a == e0 || a == unk_2b4 || a == unk_2b8) {
        u8 b = (p->unk_b0->unk_0c >> 16) & 0x1f;
        u8 r;
        if (a == e0) {
            r = (func_01ffcb0c(b << 12, w2) >> 12) & 0x1f;
        } else {
            r = (func_01ffcb0c(b << 12, w1) >> 12) & 0x1f;
        }
        p->unk_b0->unk_0c &= 0xffe0ffff;
        p->unk_b0->unk_0c |= r << 16;
        p->unk_08 &= ~0x100;
        p->unk_b0->unk_04 &= 0xffff8000;
        p->unk_b0->unk_04 |= pk;
    }
}

BOOL Unk_ov004_0224d80c::func_ov004_02225f10() {
    if (func_ov004_02224d7c(&unk_1a4, 0) != 0 && func_02055bcc(&unk_290, unk_148, data_021c620c)) {
        func_02055b38(&unk_290, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
        func_02055a9c(&unk_290, func_020554c0(&unk_ec));
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224d80c::func_ov004_02225f88() {
    if (func_ov004_02224d8c(&unk_1a4, 0) != 0 && func_02054800(&unk_ec, data_021c620c) != 0) {
        func_02054720(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
        func_02054710(&unk_ec);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224d80c::func_ov004_02225fec() {
    u32 i;
    u8 *base;
    u32 col;
    { u8 *h = func_ov004_02224d68(&unk_1a4); base = h + *(s32 *)(h + 8); }
    i = 0;
    col = data_ov004_0224026c;
    for (; i < 7; i++) {
        s32 x = func_02057110(func_ov004_02224d68(&unk_1a4), data_ov004_0224d7e8[i]);
        u8 *t = base + 4 + *(u16 *)(base + 0xa);
        u8 *q = t + *(u16 *)t * x;
        u32 *rec = (u32 *)(base + *(s32 *)(q + 4));
        if (rec != 0) {
            rec[4] &= ~0xf;
            rec[4] |= col;
            rec[3] &= ~0xf;
            rec[3] |= col;
        }
    }
}

BOOL Unk_ov004_0224d80c::func_ov004_02226064() {
    void *o;
    o = func_ov004_02224d68(&unk_1a4);
    func_021039ec(o, func_02036ce0(func_02036c58()));
    o = func_ov004_02224d68(&unk_1a4);
    func_02103830(o, func_02036ce0(func_02036c58()));
    o = func_ov004_02224d68(&unk_1a4);
    func_021039ec(o, (void *)func_ov004_02224d04(&unk_248));
    o = func_ov004_02224d68(&unk_1a4);
    func_02103830(o, (void *)func_ov004_02224d04(&unk_248));
    return TRUE;
}

BOOL Unk_ov004_0224d80c::vfunc_0c() {
    func_ov004_02224d9c(&unk_1a4);
    func_ov004_02224d08(&unk_248);
    func_ov004_02225c48();
    func_020318cc(unk_358);
    func_020318cc(unk_3f4);
    return TRUE;
}

BOOL Unk_ov004_0224d80c::vfunc_24() {
    func_020547cc(&unk_ec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d80c::vfunc_18() {
    func_ov004_02225ce8();
    func_ov004_02225b1c();
    func_ov004_02225c6c();
    return TRUE;
}

extern "C" BOOL func_ov004_02225e9c() {
    if (data_ov004_02250c3c != 0 && data_ov004_02250c3c->unk_24c == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02225ebc() {
    if (data_ov004_02250c3c != 0) {
        return data_ov004_02250c3c->vfunc_60(3);
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02225ee0() {
    if (data_ov004_02250c3c != 0) {
        return data_ov004_02250c3c->vfunc_60(1);
    }
    return FALSE;
}

extern "C" void func_ov004_02225f04(Cls *c) {
    data_ov004_02250c3c = c;
}

BOOL Unk_ov004_0224d80c::vfunc_00() {
    s32 v;
    s32 s = func_02085180(func_020850e0());
    func_ov004_02224dbc(&unk_1a4, data_ov004_0224d874);
    func_ov004_02224d10(&unk_248, data_ov004_0224d890);
    func_020555ec(&unk_ec, func_ov004_02224d68(&unk_1a4), 0);
    unk_2b0 = func_02057110(func_ov004_02224d68(&unk_1a4), (u32)data_ov004_0224d8ac);
    unk_2b4 = func_02057110(func_ov004_02224d68(&unk_1a4), (u32)data_ov004_0224d8b4);
    unk_2b8 = func_02057110(func_ov004_02224d68(&unk_1a4), (u32)data_ov004_0224d8c0);
    func_02055488(&unk_ec, (void *)func_ov004_02226458, this);
    func_ov004_02226064();
    func_ov004_02225fec();
    func_ov004_02225f88();
    func_ov004_02225f10();
    v = func_020b50e8();
    switch (v) {
    case 0xb:
        if (func_02072e88(data_020cbb18, *(u32 *)((u8 *)data_020cbb18 + 0x64))) {
            vfunc_60(2);
        } else {
            vfunc_60(0);
        }
        break;
    case 0xc:
        if (func_02086efc(s) == 1) {
            vfunc_60(0);
        } else {
            vfunc_60(2);
        }
        break;
    case 0xd:
    case 0xe:
    case 0x2f:
        vfunc_60(2);
        break;
    }
    func_ov004_02225f04(this);
    unk_494 = -1;
    static Unk_ov004_02226158_V3 sa(0xb000, 0, 0x10800);
    static Unk_ov004_02226158_V3 sb(0x15000, 0, 0x10800);
    func_02031908(unk_358, 0x2000, 0x1c00, 0x2000, &sa, 0, 0);
    func_02031908(unk_3f4, 0x2000, 0x1c00, 0x2000, &sb, 0, 0);
    return TRUE;
}

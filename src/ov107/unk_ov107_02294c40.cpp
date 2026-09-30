#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov107_Comm {
    u32 unk_00[0x64 / 4];
    u32 unk_64;
    u32 unk_68;
};

extern "C" {
extern Unk_ov107_Comm *data_020cbb18;
extern s16 data_ov107_02296d40[];
s32 func_0206ed50();
void func_0206ea6c();
s32 func_02045400();
BOOL func_02072e44(void *p);
BOOL func_02072e88(void *p, s32 v);
void func_020728d4(void *p);
void func_020728a4(void *p, void *buf, s32 n);
void func_02072824(void *p, s32 a, s32 b);
void func_02116048(void *a, void *b, u32 n);
void func_0204ed8c(void *out, s32 a, s32 b);
s32 func_02042d10(s32 v);
s32 func_02042830(s32 v);
void func_02042820(s32 v);
s32 func_02042c08(s32 a, s32 b);
s32 func_02042bd0(s32 a, s32 b);
s32 func_0204339c(s32 a, s32 b, s32 c, s32 d);
u16 *func_020451c4(s32 a);
void func_02076a6c(void *dst, s32 a, s32 b);
u8 *func_02095204(s32 a);
s32 func_02030d78(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
u32 func_02063b8c(s32 a);
BOOL func_ov003_0221255c(void *a, void *b);
void func_ov003_02227074(s32 a, s32 b);
s32 func_0206e868();
void func_ov003_02223498(s32 a);
BOOL func_ov003_022201bc(s32 a, s32 b, void *c);
BOOL func_ov003_02220290(void *a, s32 b);
BOOL func_ov003_02227434(s32 a);
void func_ov003_02227248(s32 a, s32 b);
void func_ov003_0222746c(s32 a, s32 b);
void func_ov003_02212504(s32 a);
BOOL func_ov094_022923a4(s32 a);
void func_ov002_022006e4(void *p, u32 v);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

class Unk_ov107_sub_02203968 {
public:
    ~Unk_ov107_sub_02203968();
    u32 unk_00[0x164 / 4];
};

class Unk_ov107_sub_022043e8 {
public:
    ~Unk_ov107_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov107_sub_02202454 {
public:
    ~Unk_ov107_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov107_sub_02202640 {
public:
    virtual ~Unk_ov107_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov107_sub_022027c4 {
public:
    ~Unk_ov107_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov107_sub_022007e8 {
public:
    ~Unk_ov107_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov107_sub_02292d50 {
public:
    ~Unk_ov107_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov107_sub_0229469c {
public:
    ~Unk_ov107_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov107_sub_02293a60 {
public:
    ~Unk_ov107_sub_02293a60();
    u32 unk_00[0xa60 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

static inline BOOL Unk_ov107_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

// Vtable 0x02296e78
class Unk_ov107_02296e78 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov107_02296e78();

    void func_ov107_02294d54(u32 mask);
    void func_ov107_02294d64(u32 mask);
    BOOL func_ov107_02294d74(u32 mask);
    void func_ov107_02294d88(BOOL flag);
    u8 func_ov107_02294e14();
    void func_ov107_02294e38();
    void func_ov107_02294e84();
    void func_ov107_02294ed4();
    void func_ov107_02294f48(u8 v);
    void func_ov107_02294fb0();
    void func_ov107_02295048();
    BOOL func_ov107_02295070();
    void func_ov107_022950e8(u8 a, u8 b);
    void func_ov107_02295130();
    void func_ov107_022951e0();
    void func_ov107_02295200();
    void func_ov107_02295270();
    BOOL func_ov107_022952e4(void *pad);
    void func_ov107_02295354(void *pad);
    void func_ov107_02295450(u32 idx, u32 flag);
    void func_ov107_022954a4();

    // out-of-range callees (declarations only)
    void func_ov107_02295568();
    void func_ov107_02295664(u32 flag);
    void func_ov107_02295950();
    s32 func_ov107_02295bb0(u32 idx);
    BOOL func_ov107_02295e48(u32 idx);
    void func_ov107_02295e60(u32 a, u32 b);
    void func_ov107_02295f40();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x14];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u8 unk_b4[4];
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba;
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ u32 unk_c4;
    /* 0xc8 */ u32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ u8 unk_d4[0x10c - 0xd4];
    /* 0x10c */ Unk_ov107_sub_02293a60 unk_10c;
    /* 0xb6c */ Unk_ov107_sub_0229469c unk_b6c;
    /* 0xb94 */ Unk_ov107_sub_02292d50 unk_b94;
    /* 0xcf4 */ u32 unk_cf4[0x1480 / 4];
    /* 0x2174 */ Unk_ov107_sub_022007e8 unk_2174;
    /* 0x2234 */ Unk_ov107_sub_022027c4 unk_2234;
    /* 0x224c */ Unk_ov107_sub_02202640 unk_224c;
    /* 0x22b0 */ Unk_ov107_sub_02202454 unk_22b0;
    /* 0x25b0 */ Unk_ov107_sub_022043e8 unk_25b0;
    /* 0x26b8 */ Unk_ov107_sub_02203968 unk_26b8;
};

// ---------------------------------------------------------------------------------------------

Unk_ov107_02296e78::~Unk_ov107_02296e78() {}

void Unk_ov107_02296e78::func_ov107_02294d54(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov107_02296e78::func_ov107_02294d64(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov107_02296e78::func_ov107_02294d74(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov107_02296e78::func_ov107_02294d88(BOOL flag) {
    u8 buf[2];
    s32 t = func_0206ed50();
    u8 k = func_ov107_02294e14();
    switch (t) {
    case 0x29:
    case 0x2a:
        if (flag == 0) {
            break;
        }
        func_02045400();
        if (func_02072e44(data_020cbb18)) {
            buf[0] = 0x17;
            buf[1] = k;
            void *g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, buf, 2);
            func_02072824(g, 0x16, 4);
        }
        break;
    case 0x2b:
        func_ov003_02227074(k, 1);
        break;
    case 0x2c:
        func_ov003_02223498(func_0206e868());
        break;
    }
}

u8 Unk_ov107_02296e78::func_ov107_02294e14() {
    Unk_ov107_Comm *g = data_020cbb18;
    u32 v = g->unk_64;
    if (func_02072e88(g, v)) {
        return (u8)v;
    }
    return 0;
}

void Unk_ov107_02296e78::func_ov107_02294e38() {
    u16 v;
    u32 buf[3];
    func_0204ed8c(buf, unk_cc, unk_d0);
    v = func_ov107_02295bb0(unk_b9);
    if (func_ov003_0221255c(buf, &v)) {
        func_ov107_02295568();
        func_ov002_02200a58(0x14);
    }
}

void Unk_ov107_02296e78::func_ov107_02294e84() {
    switch (func_02042d10(unk_ac)) {
    case 1:
        func_ov002_02200a58(0x17);
        func_ov107_02294e38();
        break;
    case 2:
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
        break;
    default:
        return;
    }
    func_02042820(unk_ac);
    unk_ac = -1;
}

void Unk_ov107_02296e78::func_ov107_02294ed4() {
    s32 t = func_ov107_02295bb0(unk_b9);
    Unk_ov107_Comm *g = data_020cbb18;
    unk_ac = func_0204339c(g->unk_64, 2, 0, t);
    if (unk_ac == -1) {
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
    } else {
        u16 *p = func_020451c4(g->unk_68);
        u32 w = *p;
        unk_cc = (s32)w >> 8;
        unk_d0 = w & 0xff;
        func_ov002_02200a58(0x16);
    }
}

void Unk_ov107_02296e78::func_ov107_02294f48(u8 v) {
    u8 buf[7];
    u8 tmp[5];
    if (func_02072e44(data_020cbb18)) {
        buf[0] = 2;
        buf[1] = v;
        func_02076a6c(tmp, unk_c0, unk_c8);
        func_02116048(tmp, &buf[2], 5);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 7);
        func_02072824(g, 0x16, 4);
    }
}

void Unk_ov107_02296e78::func_ov107_02294fb0() {
    if (*(volatile u8 *)&unk_be != 0) {
        unk_be = unk_be - 1;
    } else {
        u8 k = func_ov107_02294e14();
        s32 t = func_ov107_02295bb0(unk_b9);
        if (func_ov003_022201bc(k, t, &unk_c0)) {
            volatile u16 v = t;
            BOOL ok = FALSE;
            u32 a = v;
            u32 b = v;
            s32 idx;
            if (b < 0x12e8 || a > 0x131f) {
            } else {
                ok = TRUE;
            }
            if (ok) {
                idx = a - 0x12e8;
            } else {
                idx = -1;
            }
            func_ov107_02294f48((u8)idx);
            unk_be = 0x14;
            func_ov002_02200a58(0x13);
            func_ov107_02295568();
        }
    }
}

void Unk_ov107_02296e78::func_ov107_02295048() {
    func_ov107_02294d88(1);
    unk_be = 5;
    func_ov002_02200a58(0x11);
    func_ov107_02294fb0();
}

BOOL Unk_ov107_02296e78::func_ov107_02295070() {
    s32 t = func_0206ed50();
    u8 k = func_ov107_02294e14();
    if (t == 0x2c) {
        return func_ov003_02220290(&unk_c0, k);
    }
    u8 *p = func_02095204(4);
    void *q = p + 0x5c;
    s32 i = 0;
    s32 base = *(s16 *)(p + 0x8e);
    for (; i < 8; i++) {
        if (func_02030d78(&unk_c0, q, (s16)(base + data_ov107_02296d40[i]), 0x7800, 0xa00, 0xc)) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov107_02296e78::func_ov107_022950e8(u8 a, u8 b) {
    u8 buf[3];
    if (func_02072e44(data_020cbb18)) {
        buf[0] = 1;
        buf[1] = a;
        buf[2] = b;
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 3);
        func_02072824(g, 0x16, 4);
    }
}

void Unk_ov107_02296e78::func_ov107_02295130() {
    u8 k;
    s32 idx;
    s32 x;
    u8 r;
    BOOL ok;
    u32 a;
    u32 b;
    volatile u16 v;
    k = func_ov107_02294e14();
    if (func_ov003_02227434(k) == 0) {
        v = func_ov107_02295bb0(unk_b9);
        ok = FALSE;
        a = v;
        b = v;
        if (b < 0x12b0 || a > 0x12e7) {
        } else {
            ok = TRUE;
        }
        if (ok) {
            idx = a - 0x12b0;
        } else {
            idx = -1;
        }
        r = func_02063b8c(0x3c);
        x = (s16)(((s32)r - 0x1e) * 0xb6);
        x = (s16)(x + *(s16 *)(func_02095204(4) + 0x8e));
        func_ov003_02227248((u8)idx, k);
        func_ov003_0222746c(k, x);
        func_ov003_02212504(0);
        func_ov107_022950e8((u8)idx, r);
        func_ov002_02200a58(0x12);
        func_ov107_02295568();
    }
}

void Unk_ov107_02296e78::func_ov107_022951e0() {
    func_ov107_02294d88(1);
    func_ov002_02200a58(0x10);
    func_ov107_02295130();
}

void Unk_ov107_02296e78::func_ov107_02295200() {
    switch (func_02042830(unk_ac)) {
    case 1:
        func_ov107_02294d88(0);
        func_ov107_02295568();
        func_02042820(unk_ac);
        unk_be = 10;
        func_ov002_02200a58(0x13);
        unk_ac = -1;
        break;
    case 2:
        func_02042820(unk_ac);
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
        unk_ac = -1;
        break;
    }
}

void Unk_ov107_02296e78::func_ov107_02295270() {
    s32 t = func_ov107_02295bb0(unk_b9);
    if (func_0206ed50() == 0x29) {
        unk_ac = func_02042c08(data_020cbb18->unk_64, t);
    } else {
        unk_ac = func_02042bd0(data_020cbb18->unk_64, t);
    }
    if (unk_ac == -1) {
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
    } else {
        func_ov002_02200a58(0x15);
    }
}

BOOL Unk_ov107_02296e78::func_ov107_022952e4(void *pad) {
    u8 old = unk_b8;
    func_ov107_02294d54(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov107_02295e48(unk_b8)) {
        func_ov107_02295354(pad);
    } else if (unk_b8 == 0xf) {
        if (func_ov002_0220128c(pad)) {
            unk_b8 = 0xe;
            func_ov002_02202c40(&unk_224c);
        }
    }
    if (old == unk_b8) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov107_02296e78::func_ov107_02295354(void *pad) {
    s32 n = unk_b8;
    s32 q = 0;
    while (n >= 5) {
        n -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (func_ov002_0220128c(pad) == 0 || q == 0) {
            if (n == 0) {
                unk_b8 = unk_b8 + 4;
                func_ov107_02294d64(8);
            } else {
                unk_b8 = unk_b8 - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (func_ov002_0220127c(pad) == 0) {
            if (n == 4) {
                unk_b8 = unk_b8 - 4;
                func_ov107_02294d64(0x10);
            } else {
                unk_b8 = unk_b8 + 1;
            }
        }
    }
    if (func_ov107_02294d74(0x18) == 0) {
        if (func_ov002_0220128c(pad)) {
            if (q > 0) {
                unk_b8 = unk_b8 - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (q < 2) {
                unk_b8 = unk_b8 + 5;
            } else {
                unk_b8 = 0xf;
                func_ov002_02202ca0(&unk_224c);
            }
        }
    }
}

void Unk_ov107_02296e78::func_ov107_02295450(u32 idx, u32 flag) {
    unk_b9 = idx;
    func_ov002_022016e4(&unk_22b0.unk_2f4, 4);
    if (func_ov107_02295e48(idx)) {
        func_ov107_022954a4();
        func_ov107_02295950();
        if (flag == 0) {
            func_ov002_022006e4(&unk_2174, 1);
        }
        func_ov107_02295664(flag);
    }
}

void Unk_ov107_02296e78::func_ov107_022954a4() {
    func_0206ea6c();
    s32 r6 = func_ov107_02295bb0(unk_b9);
    volatile u16 v = r6;
    s32 t = func_0206ed50();
    BOOL ok = FALSE;
    u32 a = v;
    u32 b = v;
    if (b < 0x12b0 || a > 0x12e7) {
    } else {
        ok = TRUE;
    }
    if (ok) {
        func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 0);
    } else if (a >= 0x12e8 && a <= 0x131f) {
        func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 2);
    } else if (t == 0x2a) {
        func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 3);
    }
    if (func_ov094_022923a4(r6)) {
        if (t == 0x2a) {
            func_ov002_02201700(&unk_22b0.unk_2f4, 1, 1);
        } else {
            func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 1);
        }
    }
    func_ov002_02201700(&unk_22b0.unk_2f4, 2, 4);
}

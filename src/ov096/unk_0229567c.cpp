#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_02072e88(void *obj, u32 v);
s32 func_02065578(void *obj);
s32 func_020655d0(void *obj);
BOOL func_0206ef00();
void func_0200402c(s32 a);
s32 func_0208a578();
s32 func_0208c1a4(s32 a);
s32 func_020b52f8();
extern u8 *data_020cbb18;
extern u8 data_020e416c;

void func_ov002_022020cc(void *self, u32 a, s32 x);
void func_ov002_022016e4(void *p, u32 v);
s32 func_ov002_02201700(void *p, u32 a, u32 b);
s32 func_ov002_022016cc(void *p);
void func_ov002_0220160c(void *self, void *r, u32 f);
void func_ov002_02202278(void *self, s32 a, s32 b);
void func_ov002_02202200(void *self, void *p, s32 c);
void func_ov002_0220229c(void *self, s32 a, s32 c);
void func_ov002_02202098(void *self, s32 x);
void func_ov002_02202064(void *self, s32 x);
void func_ov002_022006e4(void *self, s32 a);
void func_ov098_0229bb18(void *scene);
void func_ov098_0229bb5c(void *scene, s32 a);
void func_ov097_0229b3a4(void *scene, s32 a);
s32 func_ov094_02292450(s32 a);
}

static inline BOOL Unk_ov096_0229590c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline BOOL Unk_ov096_02295a44_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}


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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
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

class Unk_ov096_0229aea8;
typedef void (Unk_ov096_0229aea8::*Unk_ov096_0229aea8_Fn)();

class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    void func_ov096_02295d28();
    void func_ov096_02295c94(s32 a);
    void func_ov096_02295c60();
    void func_ov096_02295c2c();
    s32 func_ov096_02295ba4();
    void func_ov096_02295a44(s32 a);
    void func_ov096_0229590c(s32 a);
    void func_ov096_022958ac();
    void func_ov096_0229584c();
    void func_ov096_02295734(u32 a, s32 b);
    void func_ov096_022956e4();
    void func_ov096_022956d0();
    void func_ov096_022956a0(s32 x);

    // out of range
    void func_ov096_02294d9c(u32 a);
    void func_ov096_02294dac(u32 a);
    s32 func_ov096_02294dbc(u32 a);
    s32 func_ov096_02294ed4();
    s32 func_ov096_02296898();
    void func_ov096_02296708();
    s32 func_ov096_0229865c();
    s32 func_ov096_022965ac(s32 a);
    s32 func_ov096_022982e0(u32 a);
    s32 func_ov096_022982f0(u32 a);
    void *func_ov096_02297b14();
    s32 func_ov096_02297b48(s32 a);
    s32 func_ov096_02297b9c(s32 a);
    s32 func_ov096_02297cc0(u32 a);
    s32 func_ov096_02297d50(u32 a);
    u32 func_ov096_02296c18();
    u32 func_ov096_02296f64(u32 a);

    void func_ov096_02296680();
    void func_ov096_022964b0();
    void func_ov096_02294ff8();
    void func_ov096_0229648c();
    void func_ov096_02296460();
    void func_ov096_022963fc();
    void func_ov096_0229637c();
    void func_ov096_02296338();
    void func_ov096_022960b4();
    void func_ov096_022960ac();
    void func_ov096_02296290();
    void func_ov096_0229619c();
    void func_ov096_0229b414();
    void func_ov096_0229b4a4();
    void func_ov096_02296124();
    void func_ov096_0229b954();
    void func_ov096_0229b624();
    void func_ov096_0229b4c4();
    void func_ov096_0229ba60();
    void func_ov096_0229b488();
    void func_ov096_02296094();
    void func_ov096_02296030();
    void func_ov096_02295fb0();
    void func_ov096_02295f94();
    void func_ov096_0229b390();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u8 unk_98[0xb6 - 0x98];
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7[4];
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[1];
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf[0x23c0 - 0xbf];
    /* 0x23c0 */ u8 unk_23c0[0x24fc - 0x23c0];
    /* 0x24fc */ u8 unk_24fc[0x27f0 - 0x24fc];
    /* 0x27f0 */ u8 unk_27f0[0x100];
};

// ---------------------------------------------------------------------------------------------

extern "C" u32 func_ov096_0229567c() {
    u8 *g = data_020cbb18;
    u32 v = *(u32 *)(g + 0x64);
    if (func_02072e88(g, v)) {
        return (u8)v;
    }
    return 0;
}

void Unk_ov096_0229aea8::func_ov096_022956d0() {
    unk_bd = 0;
    func_ov096_022956a0(1);
}

void Unk_ov096_0229aea8::func_ov096_022956a0(s32 x) {
    func_ov096_02296898();
    func_ov002_022020cc(unk_24fc, unk_bd, x);
    func_ov002_02200a58(0x22);
}

void Unk_ov096_0229aea8::func_ov096_022956e4() {
    func_ov096_02294dac(0x40000);
    func_ov002_022016e4(unk_27f0, 0x22);
    func_ov002_02201700(unk_27f0, 0x1a, 0x22);
    func_ov002_02201700(unk_27f0, 0x15, 9);
    func_ov002_02201700(unk_27f0, 0x19, 0x22);
    func_ov096_02295c94(0);
}

void Unk_ov096_0229aea8::func_ov096_02295734(u32 a, s32 b) {
    func_ov096_02294d9c(0x40000);
    unk_b6 = a;
    func_ov002_022016e4(unk_27f0, 0x22);
    if (func_ov096_022982f0(a)) {
        func_ov096_02295a44(a);
    } else if (func_ov096_022982e0(a)) {
        func_ov096_0229590c(a);
    } else if (a == 0x25) {
        func_ov096_022958ac();
    } else if (a == 0x24) {
        func_ov096_0229584c();
    } else if (a != 0x27) {
        return;
    }
    if (func_ov002_022016cc(unk_27f0) == 0) {
        if (func_ov096_022982f0(a) || func_ov096_022982e0(a)) {
            func_ov002_02201700(unk_27f0, 0x7c, 0x22);
        } else if (a == 0x25 || a == 0x27) {
            func_ov002_02201700(unk_27f0, 0x7b, 0x22);
            unk_b6 = 0x25;
        } else if (a == 0x24) {
            func_ov002_02201700(unk_27f0, 0x7a, 0x22);
        }
    } else {
        func_ov002_02201700(unk_27f0, 2, 0x22);
    }
    func_ov096_02296898();
    if (b == 0) {
        func_ov002_022006e4(unk_23c0, 1);
    }
    func_ov096_02295c94(b);
    if (func_ov096_022982f0(a) == 0 && a != 0x24) {
        func_ov096_02294ed4();
    }
}

void Unk_ov096_0229aea8::func_ov096_0229584c() {
    if (func_ov096_02296f64(5) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x75, 0x11);
    }
    if (func_ov096_02296f64(4) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x76, 0x10);
    }
    if (func_ov096_02296f64(3) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x77, 0xf);
    }
}

void Unk_ov096_0229aea8::func_ov096_022958ac() {
    s32 r = func_ov096_02296c18();
    if (r >= 0x64) {
        func_ov002_02201700(unk_27f0, 0x6e, 0xb);
        func_ov002_02201700(unk_27f0, 0x6f, 0xc);
    }
    if (r >= 0x3e8) {
        func_ov002_02201700(unk_27f0, 0x70, 0xd);
    }
    if (r >= 0x2710) {
        func_ov002_02201700(unk_27f0, 0x71, 0xe);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229590c(s32 a) {
    void *o = func_ov096_02297b14();
    if (func_0206ef00()) {
        func_ov002_02201700(unk_27f0, 0, 1);
    }
    s32 t = func_02065578(o);
    func_ov096_02294d9c(8);
    switch (t) {
    case 1:
        func_ov002_02201700(unk_27f0, 0x16, 5);
        func_ov002_02201700(unk_27f0, 0x20, 4);
        break;
    case 4:
        if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
            func_ov098_0229bb18(this);
        }
        func_ov002_02201700(unk_27f0, 0x16, 5);
        if (func_ov096_02294dbc(8) == 0) {
            if (func_020655d0(o) == 0xfff1) {
                if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
                    func_ov002_02201700(unk_27f0, 0x15, 0xa);
                }
            }
        }
        break;
    case 7:
        func_ov002_02201700(unk_27f0, 0x17, 3);
        break;
    case 0:
        break;
    default:
        func_ov002_02201700(unk_27f0, 0x14, 3);
        break;
    }
    if (func_020655d0(o) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x18, 6);
    } else if (t == 1 || t == 3 || t == 6) {
        if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
            func_ov002_02201700(unk_27f0, 0x15, 0xa);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02295a44(s32 a) {
    volatile u16 v;
    if (func_0206ef00()) {
        func_ov002_02201700(unk_27f0, 0, 0);
    }
    s32 r4 = func_ov096_02297b48(a);
    a = func_ov096_02297b9c(a);
    v = a;
    if (r4 == 0) {
        if (Unk_ov096_02295a44_Range(&v, 0x156c, 0x156c)) {
            if (func_0208c1a4(func_0208a578())) {
                func_ov002_02201700(unk_27f0, 0xdc, 0x1b);
            } else {
                func_ov002_02201700(unk_27f0, 0xe1, 0x1c);
            }
        }
    }
    switch (r4) {
    case 0:
        if (func_ov096_022965ac(a)) {
            func_ov002_02201700(unk_27f0, Unk_ov096_0229590c_IsZero(data_020e416c) ? 1 : 0xa, 2);
        }
        if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
            func_ov098_0229bb5c(this, a);
        } else if (func_020b52f8()) {
            func_ov097_0229b3a4(this, a);
        }
        {
            BOOL r = FALSE;
            u32 a = v;
            u32 b = v;
            if (b >= 0x1000 && a <= 0x10ff) r = TRUE;
            if (r) {
                func_ov002_02201700(unk_27f0, 0x1c, 7);
            } else if (a >= 0x151f && a <= 0x151f) {
                func_ov002_02201700(unk_27f0, 0x1c, 8);
            }
        }
        break;
    case 1:
        func_ov002_02201700(unk_27f0, 9, 0x14);
        break;
    case 2:
        if (func_ov094_02292450(a) == 0) {
            func_ov002_02201700(unk_27f0, 0x17, 0x14);
        }
        break;
    }
}

s32 Unk_ov096_0229aea8::func_ov096_02295ba4() {
    switch (unk_bb) {
    case 0x12:
    case 0x13:
        func_0200402c(0x50);
        break;
    case 0x14:
        func_0200402c(0x71);
        break;
    case 9:
        func_0200402c(0x24);
        return 0;
    case 2:
    case 0x16:
    case 0x17:
        func_0200402c(0x25);
        return 0;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
        return 0;
    default:
        break;
    }
    return 1;
}

void Unk_ov096_0229aea8::func_ov096_02295c2c() {
    func_0200402c(0x28);
    unk_be = 0xf;
    func_ov002_02202064(unk_24fc, 1);
    func_ov002_02200a58(0x24);
    func_ov096_02296898();
}

void Unk_ov096_0229aea8::func_ov096_02295c60() {
    func_0200402c(0x2a);
    unk_bb = 0x22;
    func_ov096_02296708();
    func_ov002_02202064(unk_24fc, 0);
    func_ov002_02200a58(0x1f);
}

void Unk_ov096_0229aea8::func_ov096_02295c94(s32 a) {
    u32 r6;
    s32 r2;
    func_ov002_0220160c(unk_24fc, unk_27f0, func_ov096_02294dbc(0x40000));
    r6 = func_ov096_02297d50(unk_b6);
    r2 = func_ov096_02297cc0(unk_b6);
    if (unk_b6 == 0x25) {
        func_ov002_02202278(unk_24fc, 0x68, 0x68);
    } else if (a != 0) {
        func_ov002_02202200(unk_24fc, unk_23c0, r2);
    } else {
        func_ov002_0220229c(unk_24fc, r6, r2);
    }
    func_ov002_02202098(unk_24fc, 0);
    func_ov002_02200a58(0x1d);
}

void Unk_ov096_0229aea8::func_ov096_02295d28() {
    u32 c = unk_bb;
    if (c != 0x22 && c != 0 && c != 0xf && c != 0x10 && c != 0x11 && c != 0x1a) {
        func_ov096_02294ed4();
    }
    if (unk_bb == 0x22) {
        func_ov096_0229865c();
        return;
    }
    static Unk_ov096_0229aea8_Fn tbl[34] = {
        &Unk_ov096_0229aea8::func_ov096_02296680, &Unk_ov096_0229aea8::func_ov096_02296680,
        &Unk_ov096_0229aea8::func_ov096_022964b0, &Unk_ov096_0229aea8::func_ov096_02294ff8,
        &Unk_ov096_0229aea8::func_ov096_0229648c, &Unk_ov096_0229aea8::func_ov096_02296460,
        &Unk_ov096_0229aea8::func_ov096_022963fc, &Unk_ov096_0229aea8::func_ov096_0229637c,
        &Unk_ov096_0229aea8::func_ov096_02296338, &Unk_ov096_0229aea8::func_ov096_022960b4,
        &Unk_ov096_0229aea8::func_ov096_022960ac, &Unk_ov096_0229aea8::func_ov096_02296290,
        &Unk_ov096_0229aea8::func_ov096_02296290, &Unk_ov096_0229aea8::func_ov096_02296290,
        &Unk_ov096_0229aea8::func_ov096_02296290, &Unk_ov096_0229aea8::func_ov096_0229619c,
        &Unk_ov096_0229aea8::func_ov096_0229619c, &Unk_ov096_0229aea8::func_ov096_0229619c,
        &Unk_ov096_0229aea8::func_ov096_0229b414, &Unk_ov096_0229aea8::func_ov096_0229b4a4,
        &Unk_ov096_0229aea8::func_ov096_02296124, &Unk_ov096_0229aea8::func_ov096_0229b954,
        &Unk_ov096_0229aea8::func_ov096_0229b624, &Unk_ov096_0229aea8::func_ov096_0229b4c4,
        &Unk_ov096_0229aea8::func_ov096_0229ba60, &Unk_ov096_0229aea8::func_ov096_0229b488,
        &Unk_ov096_0229aea8::func_ov096_02296094, &Unk_ov096_0229aea8::func_ov096_02296030,
        &Unk_ov096_0229aea8::func_ov096_02295fb0, &Unk_ov096_0229aea8::func_ov096_02295f94,
        &Unk_ov096_0229aea8::func_ov096_02295f94, &Unk_ov096_0229aea8::func_ov096_02295f94,
        &Unk_ov096_0229aea8::func_ov096_02295f94, &Unk_ov096_0229aea8::func_ov096_0229b390};
    (this->*tbl[unk_bb])();
}

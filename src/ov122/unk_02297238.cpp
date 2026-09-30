#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021edb68;
extern u16 data_021f47d8[];
s32 func_02051348(void *p, s32 v);
s32 func_0206cefc(void *p, s32 v);
s32 *func_0206cf40(void *p);
s32 func_0206cf34(void *p);
s32 func_0206d2d4(void *p);
BOOL func_0206ef0c();
u32 func_ov095_02293fb4(void *st, u8 *a, u32 b, u32 c, s32 d);
s32 func_ov095_02293f2c(void *st, void *a, s32 b, s32 c, u32 d, u8 *out);
void func_ov095_022951e4(void *st);
BOOL func_ov095_02295440(void *st, s32 v);
void func_ov095_02294d40(void *st, s32 v);
BOOL func_ov095_02295270(void *st, s32 v);
s32 func_ov002_02201494(void *p);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, s32 v);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202d00(void *p, u32 v);
s32 func_ov002_022030f4(void *p, s32 v);
s32 func_ov002_022030b8(void *p, s32 v);
void func_ov002_02204340(void *p, void *q, s32 a, s32 b);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();
    void func_ov002_02200980();

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

class Unk_ov122_0229a1b8 : public Unk_ov002_022044e4 {
public:
    // callees in other groups
    BOOL func_ov122_02296988(u32 mask);
    s32 func_ov122_02296968(u32 mask);
    s32 func_ov122_02296978(u32 mask);
    s32 func_ov122_02296f30(u8 v);
    s32 func_ov122_02296f68();
    u8 *func_ov122_02296f98();
    u8 *func_ov122_02296fd4();
    s32 func_ov122_02296d34();
    s32 func_ov122_02296b54();
    s32 func_ov122_02296bf0();
    s32 func_ov122_02296c70();
    s32 func_ov122_02296c94();
    s32 func_ov122_02298820();
    s32 func_ov122_02298ec4();
    s32 func_ov122_022985d8(u32 v);

    // in range
    void func_ov122_02297238();
    void func_ov122_022972dc();
    BOOL func_ov122_022972f4();
    u8 func_ov122_0229731c();
    void func_ov122_02297340();
    void func_ov122_02297380();
    void func_ov122_022973cc();
    void func_ov122_02297424();
    void func_ov122_0229747c(s32 a, s32 b, s32 c);
    BOOL func_ov122_022974e8();
    void func_ov122_022975c0();
    BOOL func_ov122_022975c4();
    u8 func_ov122_02297630(u32 *p);
    void func_ov122_02297690();
    u8 func_ov122_022976c8(s32 idx, u32 *p);
    void func_ov122_0229771c(s32 flag);
    u8 func_ov122_022977bc(s32 a, u8 *p);
    void func_ov122_02297838();
    void func_ov122_02297870();
    void func_ov122_022978c0();
    void func_ov122_02297928();
    void func_ov122_02297940();
    void func_ov122_02297994();
    void func_ov122_022979ac(u8 a, s32 b);
    void func_ov122_022979e8();
    void func_ov122_02297a08();
    void func_ov122_02297a24();
    BOOL func_ov122_02297a3c();
    BOOL func_ov122_02297a68();
    BOOL func_ov122_02297ac8();
    BOOL func_ov122_02297b30();

    /* 0x0091 */ u8 unk_91[0xb];
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ u8 unk_a4[4];
    /* 0x00a8 */ u16 unk_a8;
    /* 0x00aa */ u8 unk_aa;
    /* 0x00ab */ u8 unk_ab;
    /* 0x00ac */ u8 unk_ac;
    /* 0x00ad */ u8 unk_ad;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 unk_af[3];
    /* 0x00b2 */ u8 unk_b2;
    /* 0x00b3 */ u8 unk_b3;
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 unk_b5;
    /* 0x00b6 */ u8 unk_b6;
    /* 0x00b7 */ u8 unk_b7[5];
    /* 0x00bc */ u8 *unk_bc;
    /* 0x00c0 */ u32 unk_c0[(0x3c7c - 0xc0) / 4];
    /* 0x3c7c */ u32 unk_3c7c[0x258 / 4];
    /* 0x3ed4 */ u32 unk_3ed4[0x188 / 4];
    /* 0x405c */ u32 unk_405c[0xa8 / 4];
    /* 0x4104 */ u32 unk_4104[0x2f4 / 4];
    /* 0x43f8 */ u32 unk_43f8[0x164 / 4];
    /* 0x455c */ u32 unk_455c[0x40 / 4];
};

#define C Unk_ov122_0229a1b8

void C::func_ov122_02297238() {
    u32 a = unk_ae;
    u32 b = unk_ad;
    u32 lo, hi;
    if (b > a) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    u8 *p = func_ov122_02296f98();
    s32 q = func_ov122_02296f68();
    switch (unk_aa) {
    case 0:
        unk_bc[0xec] = unk_bc[0xec] - (hi - lo);
        break;
    case 1: {
        u32 o = unk_bc[0xec];
        lo += o;
        hi += o;
        break;
    }
    }
    u8 r = (u8)func_ov095_02293fb4(unk_c0, p, lo, hi, q);
    if (unk_aa == 1) {
        r = (u8)(r - unk_bc[0xec]);
    }
    func_ov122_02296f30(r);
    func_ov122_022972dc();
}

void C::func_ov122_022972dc() {
    unk_ad = 0;
    unk_ae = 0;
    func_ov122_02296968(8);
}

BOOL C::func_ov122_022972f4() {
    if (!func_ov122_02296988(8) || unk_ad == unk_ae) return FALSE;
    return TRUE;
}

u8 C::func_ov122_0229731c() {
    if (unk_ac == 0) return 0;
    return func_ov122_02296fd4()[unk_ac - 1];
}

void C::func_ov122_02297340() {
    switch (unk_aa) {
    case 0:
    case 1:
        func_ov122_02297424();
        break;
    case 2:
        func_ov122_022973cc();
        break;
    case 3:
        func_ov122_02297380();
        break;
    }
    func_ov122_02296d34();
}

void C::func_ov122_02297380() {
    u8 t = (u8)(func_02051348(unk_bc + 0xcc, unk_ac) + 0x30);
    unk_9c = t;
    unk_9c = unk_9c + (0xa0 - func_02051348(unk_bc + 0xcc, 0x20));
    unk_a0 = 0x88;
}

void C::func_ov122_022973cc() {
    s32 t = func_0206cefc(unk_3c7c, unk_ac);
    unk_a0 = t * 16 + 0x40;
    s32 o = func_0206cf40(unk_3c7c)[t];
    unk_9c = (u8)(func_02051348(unk_bc + 0x4c + o, unk_ac - o) + 0x30);
}

void C::func_ov122_02297424() {
    u32 v = unk_ac;
    if (unk_aa == 1) {
        s32 t = func_0206d2d4(unk_3c7c);
        v += unk_bc[0xec] + t;
    }
    unk_9c = (u8)(func_02051348(unk_405c, v) + 0x30);
    unk_a0 = 0x28;
}

void C::func_ov122_0229747c(s32 a, s32 b, s32 c) {
    if (!func_ov122_02296988(0x10) && b < 0x3c) {
        unk_9c = a;
        func_ov122_02297838();
    } else if (b < 0x84) {
        if (b < 0x40) b = 0x40;
        else if (b >= 0x80) b = 0x7f;
        unk_9c = a;
        unk_a0 = b;
        func_ov122_0229771c(c);
    } else {
        unk_9c = a;
        func_ov122_02297690();
    }
    func_ov122_02296d34();
}

BOOL C::func_ov122_022974e8() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    u8 old = unk_ac;
    if (a < 0x30) a = 0x30;
    b += unk_b3;
    u8 m = unk_aa;
    switch (m) {
    case 0:
    case 1:
        unk_9c = a;
        func_ov122_02297838();
        if (unk_aa != m) {
            unk_aa = m;
            func_ov122_02296978(0x1000);
            if (m == 0) {
                func_ov122_02296f30(unk_bc[0xec]);
            } else {
                func_ov122_02296f30(0);
            }
            func_ov122_02297424();
        }
        break;
    case 2:
        unk_9c = a;
        unk_a0 = b;
        func_ov122_0229771c(0);
        break;
    case 3:
        unk_9c = a;
        func_ov122_02297690();
        break;
    }
    unk_ae = unk_ac;
    if (unk_ac != old) return TRUE;
    return FALSE;
}

void C::func_ov122_022975c0() {
}

BOOL C::func_ov122_022975c4() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    if (y < 0) return FALSE;
    if (y > 0x4f) y = 0x4f;
    y += unk_b3;
    if (x < 0x20 || x >= 0xe0) return FALSE;
    if (x < 0x30) x = 0x30;
    func_ov122_0229747c(x, y, 1);
    func_ov122_02296978(8);
    unk_ad = unk_ac;
    unk_ae = unk_ac;
    return TRUE;
}

u8 C::func_ov122_02297630(u32 *p) {
    u8 v = (u8)(*p - 0x30);
    s32 r4 = 0xa0 - func_02051348(unk_bc + 0xcc, 0x20);
    u8 out;
    if (r4 > v) {
        out = 0;
        *p = r4 + 0x30;
    } else {
        s32 t = func_ov095_02293f2c(unk_c0, unk_bc + 0xcc, 0x20, 0xa0, (u8)(v - r4), &out);
        *p = r4 + (t + 0x30);
    }
    return out;
}

void C::func_ov122_02297690() {
    unk_aa = 3;
    func_ov122_02296978(0x1000);
    unk_a0 = 0x88;
    u8 r = func_ov122_02297630((u32 *)&unk_9c);
    func_ov122_02296f30(r);
}

u8 C::func_ov122_022976c8(s32 idx, u32 *p) {
    s32 o = func_0206cf40(unk_3c7c)[idx];
    u8 out;
    s32 t = func_ov095_02293f2c(unk_c0, unk_bc + 0x4c + o, 0x28, 0x96, (u8)(*p - 0x30), &out);
    *p = t + 0x30;
    return (u8)(out + o);
}

void C::func_ov122_0229771c(s32 flag) {
    unk_aa = 2;
    func_ov122_02296978(0x1000);
    if (unk_a0 < 0x40) unk_a0 = 0x40;
    if (unk_a0 >= 0x80) unk_a0 = 0x7f;
    s32 i = (unk_a0 - 0x40) >> 4;
    s32 m = func_0206cf34(unk_3c7c);
    if (i > m) i = m;
    else flag = 0;
    unk_a0 = i * 16 + 0x40;
    if (flag != 0 && unk_a0 - unk_b2 < 8) {
        func_ov122_02297690();
    } else {
        u8 r = func_ov122_022976c8(i, (u32 *)&unk_9c);
        func_ov122_02296f30(r);
    }
}

u8 C::func_ov122_022977bc(s32 a, u8 *p) {
    u8 out;
    func_ov095_02293f2c(unk_c0, unk_405c, 0x28, 0xa0, (u8)(a - 0x30), &out);
    s32 e = unk_bc[0xec];
    s32 s = e + func_0206d2d4(unk_3c7c);
    s32 h = (e + s) >> 1;
    if (out < h) {
        *p = 0;
        if (out > e) out = e;
    } else {
        *p = 1;
        if (out < s) out = 0;
        else out = out - s;
    }
    return out;
}

void C::func_ov122_02297838() {
    u8 r = func_ov122_022977bc(unk_9c, &unk_aa);
    func_ov122_02296978(0x1000);
    func_ov122_02296f30(r);
    func_ov122_02297424();
}

void C::func_ov122_02297870() {
    func_ov122_02296978(4);
    unk_9c = 0x30;
    unk_a0 = 0x40;
    unk_aa = 2;
    func_ov122_02296978(0x1000);
    func_ov122_02296f30(0);
    func_ov122_022972dc();
    func_ov095_022951e4(unk_c0);
    func_ov122_02298ec4();
}

void C::func_ov122_022978c0() {
    func_ov002_02200980();
    func_ov122_02296c94();
    unk_b6 = func_ov002_02201494(unk_4104) - 1;
    s32 a = func_ov002_022014a4(unk_4104);
    s32 b = func_ov002_02201498(unk_4104, unk_b6);
    func_ov002_02202a40(unk_3ed4, a, b);
    func_ov002_02202d00(unk_3ed4, 7);
    func_ov002_02200a58(0x14);
}

void C::func_ov122_02297928() {
    func_ov122_02296c70();
    func_ov002_02200a58(5);
}

void C::func_ov122_02297940() {
    func_ov002_02200980();
    func_ov122_02296c94();
    s32 a = func_ov002_022030f4(unk_43f8, 4);
    s32 b = func_ov002_022030b8(unk_43f8, 4);
    func_ov002_02202a40(unk_3ed4, a, b);
    unk_b6 = 1;
    func_ov002_02200a58(0x13);
}

void C::func_ov122_02297994() {
    func_ov122_02296c70();
    func_ov002_02200a58(4);
}

void C::func_ov122_022979ac(u8 a, s32 b) {
    volatile u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = a;
    func_ov002_02204340(unk_455c, (void *)buf, b, 0);
    func_ov002_02200a58(0x1a);
    func_ov122_02296c70();
}

void C::func_ov122_022979e8() {
    if (func_0206ef0c()) {
        func_ov122_02297a24();
    } else {
        func_ov122_02297a08();
    }
}

void C::func_ov122_02297a08() {
    func_ov002_02200980();
    func_ov122_02296c94();
    func_ov002_02200a58(6);
}

void C::func_ov122_02297a24() {
    func_ov122_02296c70();
    func_ov002_02200a58(0);
}

BOOL C::func_ov122_02297a3c() {
    if ((data_021f47d8[1] & 8) == 0) return FALSE;
    func_ov122_02296c70();
    func_ov122_02298820();
    return TRUE;
}

BOOL C::func_ov122_02297a68() {
    if ((data_021f47d8[1] & 0x200) == 0) return FALSE;
    if (func_ov095_02295440(unk_c0, 0xb)) return FALSE;
    func_ov122_022985d8(0x118);
    func_ov095_02294d40(unk_c0, 0xdb);
    unk_b4 = unk_8d;
    func_ov002_02200a58(0xe);
    return TRUE;
}

BOOL C::func_ov122_02297ac8() {
    if ((data_021f47d8[1] & 0x100) == 0) return FALSE;
    if (func_ov095_02295440(unk_c0, 0xc)) return FALSE;
    func_ov122_022985d8(0x119);
    func_ov095_02294d40(unk_c0, 0xdc);
    func_ov122_02296b54();
    unk_b4 = unk_8d;
    func_ov002_02200a58(0xf);
    return TRUE;
}

BOOL C::func_ov122_02297b30() {
    if ((data_021f47d8[1] & 0x800) == 0) return FALSE;
    if (func_ov122_02296988(0x100)) {
        func_ov122_02296968(0x100);
    } else {
        func_ov122_02296978(0x100);
        func_ov122_02296d34();
    }
    if (func_ov095_02295270(unk_c0, -1)) {
        if (func_ov122_02296988(0x100)) {
            func_ov002_02202c40(unk_3ed4);
            func_ov002_02200a58(0xc);
        } else {
            func_ov002_02202ca0(unk_3ed4);
            func_ov002_02200a58(6);
        }
        func_ov122_02296bf0();
    } else {
        func_ov122_02296bf0();
    }
    return TRUE;
}

#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void *func_0209750c();
void *func_02098680(void *p);
void *func_02098674(void *p);
u64 func_02076c94(void *p);
void *func_02076db4(void *p);
void *func_02076cf0(void *p);
BOOL func_02076f04(void *p);
BOOL func_02076f28(u32 a, void *p);
u32 func_02076e1c(void *p);
s32 func_0206ed38();
BOOL func_0206ef0c();
void func_0200402c(s32 a);
BOOL func_020e9c78(u32 a, u32 b);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220128c(u32 v);
BOOL func_ov002_0220127c(u32 v);
extern u8 data_ov133_02295154[];
extern s32 data_ov133_02295160[];
extern s32 data_ov133_022951c0[];
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021edb68;
extern u16 data_021f47d8[];
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
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);

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

class Unk_ov133_02202658 {
public:
    Unk_ov133_02202658();
    virtual ~Unk_ov133_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    s32 func_ov002_0220288c();
    BOOL func_ov002_022028f0();
    u32 unk_04[0x60 / 4];
};

class Unk_ov133_0206fc44 {
public:
    void func_0206fc44();
    u32 unk_00[0x40 / 4];
};

class Unk_ov133_02202fac {
public:
    Unk_ov133_02202fac();
    s32 func_ov002_02202fac(s32 idx);
    s32 func_ov002_0220306c();
    s32 func_ov002_0220308c();
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);
    u32 unk_00[0x11ac / 4];
};

class Unk_ov133_022040ec {
public:
    Unk_ov133_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);
    u32 unk_00[0x104 / 4];
};

class Unk_ov133_022952bc;

// Vtable 0x022952bc
class Unk_ov133_022952bc : public Unk_ov002_022044e4 {
public:
    Unk_ov133_022952bc();
    virtual ~Unk_ov133_022952bc();

    // callees in other groups
    BOOL func_ov133_02293854();
    void func_ov133_02293884();
    BOOL func_ov133_0229388c();
    BOOL func_ov133_02293be0(s32 a);
    void func_ov133_02293cdc(u8 v);
    void func_ov133_02293d18(u8 v);
    s32 func_ov133_02293d3c();
    BOOL func_ov133_02293d64(u32 keys);
    void func_ov133_02293dec(s32 a);
    s32 func_ov133_02293e48();
    void func_ov133_02293eac();
    void func_ov133_02293efc();
    void func_ov133_02294dd4();

    // in range
    BOOL func_ov133_0229405c();
    BOOL func_ov133_022940b4(u32 a);
    void *func_ov133_02294110();
    u32 func_ov133_02294138(s32 x, s32 y);
    BOOL func_ov133_0229418c(u32 keys);
    void func_ov133_02294330();
    void func_ov133_0229434c();
    void func_ov133_02294364();
    void func_ov133_02294390();
    void func_ov133_022943f4();
    s32 func_ov133_02294410();
    s32 func_ov133_02294460();
    void func_ov133_022944b8();
    void *func_ov133_0229450c();
    void func_ov133_02294538();
    void func_ov133_0229454c(u8 v, s32 b);
    void func_ov133_02294588();
    void func_ov133_022945a8();
    void func_ov133_022945c4();
    void func_ov133_022945dc();
    void func_ov133_02294614();
    void func_ov133_02294638();
    void func_ov133_022946a4();
    void func_ov133_022946e8();
    void func_ov133_0229474c();
    void func_ov133_0229478c();
    void func_ov133_022947b0();
    void func_ov133_022947e0();
    void func_ov133_02294808();
    void func_ov133_022948dc();
    void func_ov133_0229490c();
    void func_ov133_02294940();

    /* 0x0091 */ u8 unk_91[9];
    /* 0x009a */ u8 unk_9a;
    /* 0x009b */ u8 unk_9b;
    /* 0x009c */ u8 unk_9c;
    /* 0x009d */ u8 unk_9d;
    /* 0x009e */ u8 unk_9e;
    /* 0x009f */ u8 unk_9f;
    /* 0x00a0 */ u8 unk_a0[4];
    /* 0x00a4 */ u8 unk_a4[12];
    /* 0x00b0 */ Unk_ov133_0206fc44 unk_b0;
    /* 0x00f0 */ Unk_ov133_02202658 unk_f0;
    /* 0x0154 */ Unk_ov133_02202fac unk_154;
    /* 0x1300 */ Unk_ov133_022040ec unk_1300;
};

BOOL Unk_ov133_022952bc::func_ov133_0229405c() {
    void *h = func_0209750c();
    u64 sum = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        sum = sum * 10 + (u64)(u32)unk_a4[i];
    }
    return func_02076c94(func_02098680(h)) == sum;
}

BOOL Unk_ov133_022952bc::func_ov133_022940b4(u32 a) {
    void *h = func_0209750c();
    s32 idx = func_0206ed38();
    u8 *p = (u8 *)func_02076db4(func_02098674(h));
    s32 i;
    for (i = 0; i < 0x20; p += 0x1c, i++) {
        if (func_02076f04(func_02076cf0(p)) && i != idx) {
            if (func_02076f28(a, func_02076cf0(p))) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void *Unk_ov133_022952bc::func_ov133_02294110() {
    void *h = func_02098674(func_0209750c());
    s32 idx = func_0206ed38();
    return (u8 *)func_02076db4(h) + idx * 0x1c;
}

u32 Unk_ov133_022952bc::func_ov133_02294138(s32 x0, s32 y) {
    s32 x = x0 - 0x50;
    s32 t = y - 0x60;
    if (x >= 0 && x < 0x60 && t >= 0 && t < 0x40) {
        unk_9c = data_ov133_02295154[(x >> 5) + (t >> 4) * 3];
        return unk_9c;
    }
    if (y >= 0x40 && y <= 0x50) {
        unk_9c = 0xc;
        return unk_9c;
    }
    return 0xf;
}

#define VF (*(volatile u8 *)&unk_9c)
BOOL Unk_ov133_022952bc::func_ov133_0229418c(u32 keys) {
    u32 old = unk_9c;
    if (keys == 0) {
        return FALSE;
    }
    if (old <= 0xb) {
        if (func_ov002_0220126c(keys)) {
            if ((s32)VF % 3 > 0) {
                VF = VF - 1;
            }
        } else if (func_ov002_0220125c(keys)) {
            if ((s32)VF % 3 < 2) {
                VF = VF + 1;
            } else {
                VF = 0xd;
            }
        }
        if (VF <= 0xb) {
            if (func_ov002_0220128c(keys)) {
                if (VF <= 2) {
                    VF = 0xc;
                } else {
                    VF = VF - 3;
                }
            } else if (func_ov002_0220127c(keys)) {
                u32 v = VF;
                if (v < 9 || v > 0xb) {
                    VF = VF + 3;
                } else {
                    VF = 0xe;
                }
            }
        }
    } else if (old == 0xc) {
        if (func_ov002_0220127c(keys)) {
            s32 r = unk_f0.func_ov002_0220288c();
            if (r <= 0x70) {
                VF = 0;
            } else if (r <= 0x90) {
                VF = 1;
            } else {
                VF = 2;
            }
        } else if (func_ov133_02293d64(keys)) {
            func_0200402c(0xb);
            func_ov133_02293d18(unk_9f);
        }
    } else if (old == 0xd) {
        if (func_ov002_0220126c(keys)) {
            VF = 0xe;
        } else if (func_ov002_0220128c(keys)) {
            VF = 0xb;
        }
    } else if (old == 0xe) {
        if (func_ov002_0220125c(keys)) {
            VF = 0xd;
        } else if (func_ov002_0220128c(keys)) {
            VF = 0xa;
        }
    }
    if (old == VF) {
        return FALSE;
    }
    return TRUE;
}

#undef VF

void Unk_ov133_022952bc::func_ov133_02294330() {
    unk_f0.func_ov002_02202a78();
    unk_f0.vfunc_0c();
}

void Unk_ov133_022952bc::func_ov133_0229434c() {
    unk_f0.func_ov002_02202af0();
    func_ov002_02200a58(6);
}

void Unk_ov133_022952bc::func_ov133_02294364() {
    if (unk_9c == 0xc) {
        func_ov002_02200a58(9);
    } else {
        unk_f0.func_ov002_02202b68();
        func_ov002_02200a58(5);
    }
}

void Unk_ov133_022952bc::func_ov133_02294390() {
    if ((u8)(unk_9c + 0xf3) <= 1) {
        unk_f0.func_ov002_02202ca0();
    } else {
        unk_f0.func_ov002_02202c40();
    }
    s32 x = func_ov133_02294460();
    s32 y = func_ov133_02294410();
    unk_f0.func_ov002_022029e8(x, y, 3, 1);
    unk_9b = unk_8d;
    func_ov002_02200a58(4);
}

void Unk_ov133_022952bc::func_ov133_022943f4() {
    unk_f0.func_ov002_02202d00(0);
    unk_f0.vfunc_0c();
}

s32 Unk_ov133_022952bc::func_ov133_02294410() {
    u32 v = unk_9c;
    if (v <= 0xb) {
        return data_ov133_02295160[v];
    }
    switch (v) {
    case 0xc:
        return 0x40;
    case 0xd:
        return unk_154.func_ov002_022030b8(6);
    case 0xe:
        return unk_154.func_ov002_022030b8(7);
    default:
        return 0x60;
    }
}

s32 Unk_ov133_022952bc::func_ov133_02294460() {
    u32 v = unk_9c;
    if (v <= 0xb) {
        return data_ov133_022951c0[v];
    }
    switch (v) {
    case 0xc:
        return (unk_9f << 4) + 0x20;
    case 0xd:
        return unk_154.func_ov002_022030f4(6);
    case 0xe:
        return unk_154.func_ov002_022030f4(7);
    default:
        return 0x80;
    }
}

void Unk_ov133_022952bc::func_ov133_022944b8() {
    s32 x = func_ov133_02294460();
    s32 y = func_ov133_02294410();
    unk_f0.func_ov002_02202a40(x, y);
    if ((u8)(unk_9c + 0xf3) <= 1) {
        unk_f0.func_ov002_02202d00(7);
    } else {
        unk_f0.func_ov002_02202d00(1);
    }
    func_ov133_02294330();
}

void *Unk_ov133_022952bc::func_ov133_0229450c() {
    if ((*(volatile u8 *)&unk_9a) >= 1) {
        return &unk_b0;
    }
    (*(volatile u8 *)&unk_9a) = (*(volatile u8 *)&unk_9a) + 1;
    return (u8 *)&unk_b0 + ((*(volatile u8 *)&unk_9a) - 1) * 0x40;
}

void Unk_ov133_022952bc::func_ov133_02294538() {
    unk_9a = 0;
    unk_b0.func_0206fc44();
}

void Unk_ov133_022952bc::func_ov133_0229454c(u8 v, s32 b) {
    u8 l;
    u8 *p = &l;
    *p = data_021edb68;
    *p = v;
    unk_1300.func_ov002_02204394(p, b, 0);
    func_ov002_02200a58(0xb);
    func_ov133_022943f4();
}

void Unk_ov133_022952bc::func_ov133_02294588() {
    if (func_0206ef0c()) {
        func_ov133_022945c4();
    } else {
        func_ov133_022945a8();
    }
}

void Unk_ov133_022952bc::func_ov133_022945a8() {
    func_ov133_022944b8();
    func_ov002_02200980();
    func_ov002_02200a58(3);
}

void Unk_ov133_022952bc::func_ov133_022945c4() {
    func_ov133_022943f4();
    func_ov002_02200a58(0);
}

void Unk_ov133_022952bc::func_ov133_022945dc() {
    void *r = func_ov133_02294110();
    s32 idx = func_0206ed38();
    u32 t = func_02076e1c(func_02076cf0(r));
    if (func_020e9c78((u8)idx, t)) {
        func_ov002_02200a58(10);
    }
}

void Unk_ov133_022952bc::func_ov133_02294614() {
    if (unk_1300.func_ov002_02204234(1)) {
        func_ov133_02294588();
    }
}

void Unk_ov133_022952bc::func_ov133_02294638() {
    if (unk_154.func_ov002_0220308c()) {
        if (func_0208d534(&unk_f0)) {
            s32 a = unk_154.func_ov002_0220306c();
            s32 b = unk_154.func_ov002_022030f4(-1);
            s32 c = unk_154.func_ov002_022030b8(-1);
            unk_f0.func_ov002_02202a40(a + (b - 6), a + c);
        }
    } else {
        func_ov133_022943f4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov133_022952bc::func_ov133_022946a4() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(3);
        func_ov133_0229434c();
    } else {
        u32 k = func_ov002_022009c8();
        if (func_ov133_02293d64(k)) {
            func_ov133_02293cdc(unk_9f);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022946e8() {
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov133_02293884();
        func_ov002_02200a58(3);
    } else {
        if (func_ov133_02293854()) {
            if (func_ov133_02293be0(1)) {
                if (unk_9c == 0xc) {
                    s32 x = func_ov133_02294460();
                    s32 y = func_ov133_02294410();
                    unk_f0.func_ov002_02202a40(x, y);
                }
            }
        }
    }
}

void Unk_ov133_022952bc::func_ov133_0229474c() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov133_02293884();
        func_ov002_02200a58(3);
        func_ov133_0229434c();
    } else {
        if (func_ov133_02293854()) {
            func_ov133_02293dec(0);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_0229478c() {
    if (func_0208d4fc(&unk_f0)) {
        func_ov133_02294330();
        func_ov002_02200a58(3);
    }
}

void Unk_ov133_022952bc::func_ov133_022947b0() {
    if (func_0208d4fc(&unk_f0)) {
        s32 r = func_ov133_02293e48();
        switch (r) {
        case 1:
            break;
        case 2:
            func_ov133_0229434c();
            break;
        default:
            func_ov133_0229434c();
            break;
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022947e0() {
    if (!unk_f0.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_9b);
        func_ov133_02294dd4();
    }
}

void Unk_ov133_022952bc::func_ov133_02294808() {
    if (func_ov002_022009d4()) {
        func_ov133_022945c4();
    } else {
        u32 k = func_ov002_022009c8();
        if (func_ov133_0229418c(k)) {
            func_ov133_02294390();
        } else {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                func_ov133_02294364();
            } else if (t & 2) {
                if (func_ov133_02293be0(0)) {
                    unk_9d = 0xd;
                    func_ov002_02200a58(8);
                    if (unk_9c == 0xc) {
                        s32 x = func_ov133_02294460();
                        s32 y = func_ov133_02294410();
                        unk_f0.func_ov002_02202a40(x, y);
                    }
                } else {
                    func_ov133_02293eac();
                    func_ov133_022943f4();
                }
            } else if (t & 8) {
                if (!unk_154.func_ov002_02202fac(6)) {
                    func_ov133_02293efc();
                    func_ov133_022943f4();
                }
            }
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022948dc() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
    } else {
        u32 r = func_ov133_02293d3c();
        func_ov133_02293cdc((u8)r);
    }
}

void Unk_ov133_022952bc::func_ov133_0229490c() {
    if (data_021f4770 == 0) {
        func_ov133_02293884();
        func_ov002_02200a58(0);
    } else {
        if (func_ov133_02293854()) {
            func_ov133_02293dec(0);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_02294940() {
    if (func_ov002_02200a14(1)) {
        func_ov133_022945a8();
    } else {
        BOOL ok;
        if (data_021f4770 != 0 && data_021f4774 != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
        if (ok) {
            if (unk_154.func_ov002_02202fac(6) == 0 && unk_154.func_ov002_02203110(6) != 0) {
                func_ov133_02293efc();
            } else if (unk_154.func_ov002_02203110(7)) {
                func_ov133_02293eac();
            } else {
                u32 r = func_ov133_02294138(data_021ef5f0, data_021ef5ec);
                if (r == 0xc) {
                    u32 t = func_ov133_02293d3c();
                    func_ov133_02293d18((u8)t);
                    func_ov002_02200a58(2);
                } else if (r != 0xf) {
                    if (func_ov133_0229388c()) {
                        func_ov002_02200a58(1);
                    }
                }
            }
        }
    }
}

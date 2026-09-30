#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
void func_0208d9d4(void *p, s32 v);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202d00(void *p, u32 v);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
BOOL func_ov002_02202f18(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

// 0x40-byte element with out-of-line dtor func_0206fca8 (defined elsewhere)
class Unk_ov120_sub_0206fca8 {
public:
    ~Unk_ov120_sub_0206fca8();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x438 (dtor func_ov002_02202f70), 0x48 bytes
class Unk_ov120_sub_02202f70 {
public:
    ~Unk_ov120_sub_02202f70();
    u32 unk_00[0x48 / 4];
};

// sub-object at +0x480 (virtual dtor func_ov002_02202640), 0x64 bytes
class Unk_ov120_sub_02202640 {
public:
    virtual ~Unk_ov120_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// 3-byte record, ctor func_ov120_02292de4, dtor func_ov120_02292de0
class Unk_ov120_02292de0 {
public:
    Unk_ov120_02292de0();
    ~Unk_ov120_02292de0();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

// Vtable 0x022044e4 (declaration copied from ov099_000; sub-objects opaque)
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

// Vtable 0x02295010
class Unk_ov120_02295010 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov120_02295010();

    void func_ov120_02292de8(u32 mask);
    void func_ov120_02292df8(u32 mask);
    BOOL func_ov120_02292e08(u32 mask);
    void func_ov120_02292e1c();
    s32 func_ov120_02292e7c();
    BOOL func_ov120_02292f44(void *pad);
    void func_ov120_02293090();
    void func_ov120_022930b0();
    void func_ov120_022930d0();
    void func_ov120_022930f0();
    void func_ov120_02293168();
    s32 func_ov120_0229318c();
    s32 func_ov120_022931dc();
    void func_ov120_02293230();
    void func_ov120_022932a8();
    void func_ov120_022932c4();
    void func_ov120_022932e8();
    BOOL func_ov120_02293374();
    void func_ov120_022933f0();
    void func_ov120_02293440();
    BOOL func_ov120_0229348c();
    void func_ov120_022934e0();
    BOOL func_ov120_02293590();
    void func_ov120_0229359c(u32 v);
    void func_ov120_022935ac(u32 v);
    void func_ov120_022935c8();

    // out-of-range callees (declarations only)
    u32 func_ov120_0229364c(u8 v);
    void func_ov120_0229371c(u8 v);
    void func_ov120_02293784(u8 v);
    s32 func_ov120_02293b0c();
    s32 func_ov120_02293b28();
    void func_ov120_02293bd4();
    void func_ov120_02293bec();

    /* 0x91 */ u8 unk_91[7];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u16 unk_9a;
    /* 0x9c */ u16 unk_9c;
    /* 0x9e */ u8 unk_9e[5];
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af[0x49];
    /* 0xf8 */ Unk_ov120_sub_0206fca8 unk_f8[13];
    /* 0x438 */ Unk_ov120_sub_02202f70 unk_438;
    /* 0x480 */ Unk_ov120_sub_02202640 unk_480;
    /* 0x4e4 */ u8 unk_4e4[0x201a];
    /* 0x24fe */ Unk_ov120_02292de0 unk_24fe[3];
    /* 0x2507 */ Unk_ov120_02292de0 unk_2507[14];
};

// ---------------------------------------------------------------------------------------------

Unk_ov120_02295010::~Unk_ov120_02295010() {}

Unk_ov120_02292de0::Unk_ov120_02292de0() {}

Unk_ov120_02292de0::~Unk_ov120_02292de0() {}

void Unk_ov120_02295010::func_ov120_02292e1c() {
    u32 idx = func_ov120_0229364c(unk_a3 + unk_ab + 0xd);
    u8 *e = (u8 *)this + idx * 3;
    if (e[0x2509] == 0xc) {
        unk_ad = 0x58;
        unk_ae = 0x70;
    } else {
        unk_ad = e[0x2507];
        unk_ae = e[0x2508];
    }
}

s32 Unk_ov120_02295010::func_ov120_02292e7c() {
    if (func_ov120_02292e08(0x800)) {
        func_ov120_02293784(unk_ac + 1);
        return 0;
    }
    u32 t = unk_ab;
    if (t == 8) {
        func_ov002_02200a58(6);
        func_0208d9d4(&unk_438, 2);
        func_ov120_02292df8(0x1000);
        return 1;
    } else if (t == 0) {
        if (func_ov120_02292e08(1)) {
            func_ov120_02293784(0);
            func_ov120_02293bec();
            return 2;
        }
        return 0;
    } else if (t == 1) {
        if (!func_ov120_02292e08(1)) {
            func_ov120_02293784(0);
            func_ov120_02293bd4();
            return 2;
        }
        return 0;
    } else if (t >= 2 && t <= 7) {
        func_ov120_02293784(unk_a3 + t + 0xd);
        return 0;
    }
    return 0;
}

BOOL Unk_ov120_02295010::func_ov120_02292f44(void *pad) {
    u32 old = unk_ab;
    if (old >= 2 && old <= 7) {
        if (func_ov120_02292e08(8) && func_ov002_0220125c(pad)) {
            unk_ab = 8;
        } else if (func_ov002_0220128c(pad)) {
            if (*(volatile u8 *)&unk_ab > 2) {
                unk_ab = *(volatile u8 *)&unk_ab - 1;
            } else {
                unk_ab = 1;
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 n = func_ov120_02293b28() - 1;
            if (unk_ab < 7 && unk_ab < n + 2) {
                unk_ab = *(volatile u8 *)&unk_ab + 1;
            }
        }
    } else if (old == 8) {
        if (func_ov002_0220128c(pad)) {
            unk_ab = 0;
        } else if (func_ov002_0220126c(pad)) {
            s32 v = func_ov002_02202e60(&unk_438);
            if (v < 0x50) {
                v = 0x50;
            }
            if (v >= 0xb0) {
                v = 0xaf;
            }
            unk_ab = ((v - 0x50) >> 4) + 2;
        }
    } else if (old <= 1) {
        if (func_ov002_0220127c(pad)) {
            unk_ab = 2;
        } else if (func_ov002_0220126c(pad)) {
            unk_ab = 1;
        } else if (func_ov002_0220125c(pad)) {
            if (unk_ab == 0 && func_ov120_02292e08(8)) {
                unk_ab = 8;
            } else {
                unk_ab = 0;
            }
        }
    }
    if (old != unk_ab) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov120_02295010::func_ov120_02293090() {
    func_ov002_02202a78(&unk_480);
    unk_480.vfunc_0c();
}

void Unk_ov120_02295010::func_ov120_022930b0() {
    func_ov002_02202af0(&unk_480);
    func_ov002_02200a58(5);
}

void Unk_ov120_02295010::func_ov120_022930d0() {
    func_ov002_02202b68(&unk_480);
    func_ov002_02200a58(4);
}

void Unk_ov120_02295010::func_ov120_022930f0() {
    if (func_ov120_02292e08(0x4000)) {
        s32 a = func_ov120_022931dc();
        s32 b = func_ov120_0229318c();
        func_ov002_02202a40(&unk_480, a, b);
        func_ov120_02292de8(0x4000);
    } else {
        s32 a = func_ov120_022931dc();
        s32 b = func_ov120_0229318c();
        func_ov002_022029e8(&unk_480, a, b, 3, 1);
        unk_aa = unk_8d;
        func_ov002_02200a58(3);
    }
}

void Unk_ov120_02295010::func_ov120_02293168() {
    func_ov002_02202d00(&unk_480, 0);
    unk_480.vfunc_0c();
}

s32 Unk_ov120_02295010::func_ov120_0229318c() {
    if (func_ov120_02292e08(0x800)) {
        return unk_ae;
    }
    u32 t = unk_ab;
    if (t >= 2 && t <= 7) {
        return (t - 2) * 16 + 0x58;
    }
    if (t <= 1) {
        return 0x40;
    }
    if (t == 8) {
        return func_ov002_02202e60(&unk_438);
    }
    return 0x60;
}

s32 Unk_ov120_02295010::func_ov120_022931dc() {
    if (func_ov120_02292e08(0x800)) {
        return unk_ad;
    }
    u32 t = unk_ab;
    if (t >= 2 && t <= 7) {
        return 0xa0;
    }
    if (t == 0) {
        return 0xd8;
    }
    if (t == 1) {
        return 0xbc;
    }
    if (t == 8) {
        return func_ov002_02202e84(&unk_438);
    }
    return 0x80;
}

void Unk_ov120_02295010::func_ov120_02293230() {
    if (!func_ov120_02292e08(8) && unk_ab == 8) {
        unk_ab = 0;
    }
    s32 a = func_ov120_022931dc();
    s32 b = func_ov120_0229318c();
    func_ov002_02202a40(&unk_480, a, b);
    if (unk_ab >= 2 && unk_ab <= 7) {
        func_ov120_0229359c(unk_98 & ~0xf);
    }
    func_ov002_02202d00(&unk_480, 1);
    func_ov120_02293090();
}

void Unk_ov120_02295010::func_ov120_022932a8() {
    func_ov120_02292de8(0x40);
    func_ov120_02292de8(0x100);
}

void Unk_ov120_02295010::func_ov120_022932c4() {
    func_ov120_02292df8(0x40);
    func_ov120_02292de8(0x100);
    unk_a7 = 0xf;
}

void Unk_ov120_02295010::func_ov120_022932e8() {
    if (func_ov120_02292e08(0x40)) {
        if (unk_a7 != 0) {
            unk_a7 = *(volatile u8 *)&unk_a7 - 1;
        }
        if (unk_a7 == 0) {
            if (func_ov120_02292e08(0x200)) {
                func_ov120_02292de8(0x100);
            } else {
                func_ov120_0229371c(unk_a9);
            }
            unk_a7 = 0xf;
        } else if (unk_a7 == 5) {
            if (func_ov120_02292e08(0x200)) {
                func_ov120_02292df8(0x100);
            } else {
                func_ov120_0229371c(0xe);
            }
        }
    }
}

BOOL Unk_ov120_02295010::func_ov120_02293374() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    if (y < 0x38 || y > 0x4c) {
        return FALSE;
    }
    if (func_ov120_02292e08(1)) {
        if (x < 0xcc || x > 0xe4) {
            return FALSE;
        }
        func_ov120_02293784(0);
        func_ov120_02293bec();
    } else {
        if (x < 0xb0 || x > 0xc8) {
            return FALSE;
        }
        func_ov120_02293784(0);
        func_ov120_02293bd4();
    }
    func_ov120_022935ac(0);
    unk_a3 = 0xff;
    return TRUE;
}

void Unk_ov120_02295010::func_ov120_022933f0() {
    s32 t = unk_9a;
    u32 keys = data_021f47d8[0];
    if (keys & 0x40) {
        t = t - 4;
    } else if (keys & 0x80) {
        t = t + 4;
    }
    s32 m = func_ov120_02293b0c();
    if (t < 0) {
        t = 0;
    } else if (t > m) {
        t = m;
    }
    func_ov120_022935ac(t);
}

void Unk_ov120_02295010::func_ov120_02293440() {
    s32 t = unk_a6 + (data_021ef5ec - unk_a5);
    if (t < 0) {
        t = 0;
    } else if (t > 0x58) {
        t = 0x58;
    }
    func_ov120_022935ac(t * func_ov120_02293b0c() / 0x58);
}

BOOL Unk_ov120_02295010::func_ov120_0229348c() {
    if (!func_ov120_02292e08(8)) {
        return FALSE;
    }
    if (func_ov002_02202f18(&unk_438, data_021ef5f0, data_021ef5ec)) {
        unk_a5 = data_021ef5ec;
        unk_a6 = unk_a4;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov120_02295010::func_ov120_022934e0() {
    s32 n = func_ov120_02293b0c();
    if (n == 0) {
        func_ov120_02292de8(0x10);
        unk_a4 = 0;
    } else {
        u32 tg = unk_9a;
        u32 cur = unk_98;
        if (cur == tg) {
            func_ov120_02292de8(0x10);
        } else if (cur < tg) {
            unk_98 = *(volatile u16 *)&unk_98 + 8;
            if (unk_98 > unk_9a) {
                unk_98 = unk_9a;
            }
        } else if (cur < 8) {
            unk_98 = tg;
        } else {
            unk_98 = *(volatile u16 *)&unk_98 - 8;
            if (unk_98 < unk_9a) {
                unk_98 = unk_9a;
            }
        }
        unk_a4 = unk_98 * 0x58 / n;
    }
}

BOOL Unk_ov120_02295010::func_ov120_02293590() { return func_ov120_02292e08(0x10); }

void Unk_ov120_02295010::func_ov120_0229359c(u32 v) {
    unk_9a = v;
    func_ov120_02292df8(0x10);
}

void Unk_ov120_02295010::func_ov120_022935ac(u32 v) {
    unk_98 = v;
    unk_9a = unk_98;
    func_ov120_02292df8(0x10);
}

void Unk_ov120_02295010::func_ov120_022935c8() {
    u32 a = unk_a9;
    if (a != 0xe) {
        if (a == 0xd) {
            func_ov120_0229359c(0);
        } else {
            if ((s32)a < (unk_98 + 0xf) >> 4) {
                func_ov120_0229359c(a << 4);
            }
            s32 h = unk_98 >> 4;
            s32 lo;
            if (unk_a9 <= 5) {
                lo = 0;
            } else {
                lo = unk_a9 - 5;
            }
            if (h < lo) {
                func_ov120_0229359c(lo << 4);
            }
        }
    }
}

void Unk_ov120_02295010::func_ov120_02292de8(u32 mask) { unk_9c = unk_9c & ~mask; }

void Unk_ov120_02295010::func_ov120_02292df8(u32 mask) { unk_9c = unk_9c | mask; }

BOOL Unk_ov120_02295010::func_ov120_02292e08(u32 mask) {
    if (unk_9c & mask) {
        return TRUE;
    }
    return FALSE;
}

#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_0206ef0c();
u8 *func_020b053c();
void func_02087e70(s32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
extern u16 data_021f47d8[];
extern u32 data_ov128_022951c8[];
extern u8 data_ov128_022951e0[];
extern u8 data_ov128_022951e4[];
extern u32 data_ov128_02295320[];
extern u8 data_ov128_02295540[];
extern u8 data_ov128_022955c0[];

// ov127 plain-C helpers on the sub-object at +0x478
u8 *func_ov127_02292268(void *p);
BOOL func_ov127_02292410(void *p, s32 a, u8 *b, s32 *c, s32 *d);
s32 func_ov127_022921c4(s32 a, s32 b);
u32 func_ov127_02292040(u32 a);
s32 func_ov127_0229225c(void *p);
s32 func_ov127_02292250(void *p);
BOOL func_ov127_02292538(void *p);
void func_ov127_0229257c(void *p, s32 a);
void func_ov127_022925c8(void *p, s32 a, s32 b);
void func_ov127_02292518(void *p, s32 a);
void func_ov127_0229247c(void *p, s32 a, s32 b);
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
    BOOL func_ov002_022009d4();
    void func_ov002_02200980();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

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

// Text buffer (0x40 bytes, vptr + text renderer), dtor func_0206fca8
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206f994(u8 *s, s32 n);
    s32 func_0206fa1c();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);

    u32 unk_04[0x3c / 4];
};

// Sprite/text pair element (0x50 bytes), vtable 0x022046dc, dtor func_ov002_02203d30
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();
    BOOL func_ov002_02203af4();

    u32 unk_04[0x4c / 4];
};

// 0x64-byte sub-object at +0xe4 (derived from Unk_020e100c; D1 func_ov002_02202640)
class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 a);

    u32 unk_04[0x60 / 4];
};

// 0x330-byte sub-object at +0x148, dtor func_020b08b4
class Unk_ov128_020b08b4 {
public:
    Unk_ov128_020b08b4();
    ~Unk_ov128_020b08b4();
    u32 unk_00[0x330 / 4];
};

// ov127 sub-object at +0x478 (first member is the func_020b8800 class); dtor func_ov127_02292aa8
class Unk_ov127_02292aa8 {
public:
    Unk_ov127_02292aa8();
    ~Unk_ov127_02292aa8();
    u32 unk_00[0x2838 / 4];
};

// Vtable 0x022954e0
class Unk_ov128_022954e0 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov128_022954e0();

    void func_ov128_02294184(u32 m);
    void func_ov128_02294194(u32 m);
    BOOL func_ov128_022941a4(u32 m);
    void func_ov128_022941bc();
    void func_ov128_02294244();
    void func_ov128_02294274();
    void func_ov128_0229428c();
    void func_ov128_022942c4();
    void func_ov128_02294368();
    void func_ov128_022943cc();
    void func_ov128_02294420();
    u32 func_ov128_02294458();
    void func_ov128_02294498();
    void func_ov128_022944d8(s32 y);
    void func_ov128_0229455c();
    void func_ov128_02294584();
    void func_ov128_0229459c();
    void func_ov128_022945b8(s32 x, s32 y);
    void func_ov128_022945ec();
    void func_ov128_02294644();
    s32 func_ov128_02294660();
    s32 func_ov128_02294690();
    void func_ov128_022946c0();
    void func_ov128_02294728();
    void func_ov128_02294754();
    void func_ov128_02294774();
    void func_ov128_02294798();
    void func_ov128_022947b0();
    void func_ov128_022947cc();
    void func_ov128_022947f4();
    void func_ov128_02294824();
    void func_ov128_0229484c();
    void func_ov128_02294874();
    void func_ov128_022948c0();
    void func_ov128_02294930();

    // callees in other groups
    void func_ov128_02294f54();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov002_022046dc unk_94;
    /* 0x00e4 */ Unk_ov002_02204614 unk_e4;
    /* 0x0148 */ Unk_ov128_020b08b4 unk_148;
    /* 0x0478 */ Unk_ov127_02292aa8 unk_478;
    /* 0x2cb0 */ Unk_020e0488 unk_2cb0;
    /* 0x2cf0 */ s32 unk_2cf0;
    /* 0x2cf4 */ s32 unk_2cf4;
    /* 0x2cf8 */ s32 unk_2cf8;
    /* 0x2cfc */ s32 unk_2cfc;
    /* 0x2d00 */ s32 unk_2d00;
    /* 0x2d04 */ s32 unk_2d04;
    /* 0x2d08 */ s32 unk_2d08;
    /* 0x2d0c */ s32 unk_2d0c;
    /* 0x2d10 */ u16 unk_2d10;
    /* 0x2d12 */ u8 unk_2d12;
    /* 0x2d13 */ u8 unk_2d13;
    /* 0x2d14 */ u8 unk_2d14;
    /* 0x2d15 */ u8 unk_2d15;
    /* 0x2d16 */ u8 unk_2d16;
    /* 0x2d17 */ u8 unk_2d17;
    /* 0x2d18 */ u8 unk_2d18;
};

Unk_ov128_022954e0::~Unk_ov128_022954e0() {}

void Unk_ov128_022954e0::func_ov128_02294184(u32 m) { unk_2d10 = unk_2d10 & ~m; }

void Unk_ov128_022954e0::func_ov128_02294194(u32 m) { unk_2d10 = unk_2d10 | m; }

BOOL Unk_ov128_022954e0::func_ov128_022941a4(u32 m) {
    if (unk_2d10 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov128_022954e0::func_ov128_022941bc() {
    switch (unk_2d16) {
    case 1:
        if (unk_2d15 < 3) {
            unk_2d15 = unk_2d15 + 1;
        } else {
            unk_2d16 = 2;
            unk_2d17 = 0x14;
        }
        break;
    case 2:
        if (unk_2d04 == -1) {
            if (unk_2d17 != 0) {
                unk_2d17 = unk_2d17 - 1;
            } else {
                func_ov128_02294274();
            }
        } else {
            unk_2d17 = 0x14;
        }
        break;
    case 3:
        if (unk_2d15 != 0) {
            unk_2d15 = unk_2d15 - 1;
        } else {
            func_ov128_022942c4();
        }
        break;
    }
}

void Unk_ov128_022954e0::func_ov128_02294244() {
    s32 t = unk_2d04;
    if (t != -1) {
        if (unk_2d08 != t) {
            unk_2d08 = t;
            func_ov128_0229428c();
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294274() {
    unk_2d08 = -1;
    unk_2d16 = 3;
}

void Unk_ov128_022954e0::func_ov128_0229428c() {
    s32 t = unk_2d08;
    if (t != -1 && t == unk_2d0c) {
        func_ov128_022942c4();
    } else {
        unk_2d16 = 3;
    }
}

void Unk_ov128_022954e0::func_ov128_022942c4() {
    s32 t = unk_2d08;
    if (t == -1) {
        unk_2d16 = 0;
    } else {
        unk_2d16 = 1;
        s32 u = unk_2d08;
        if (u != unk_2d0c) {
            u8 *s = ((u8 *(*)(s32))func_020b053c)(u);
            unk_2cb0.func_0206f994(s + 0x16, 0x10);
            unk_2d18 = (unk_2cb0.func_0206fa1c() + 7) >> 3;
            if (unk_2d18 < 2) {
                unk_2d18 = 2;
            }
            unk_2cb0.func_0206fb9c(8, 0xc6, unk_2d18, 0xf, 0, 0);
            unk_2cb0.func_0206fab4(1, 0);
            unk_2d0c = unk_2d08;
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294368() {
    if (unk_2d16 != 0) {
        func_02087e70(1, (void *)data_ov128_02295320[unk_2d18 - 2], 0x80, data_ov128_022951c8[unk_2d15] + 0x60, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_ov128_022954e0::func_ov128_022943cc() {
    s32 a, b;
    u8 *p = func_ov127_02292268(&unk_478) + 0x60;
    if (func_ov127_02292410(&unk_478, 0x80, p, &a, &b)) {
        s32 r = func_ov127_022921c4(a, b);
        if (r != -1) {
            unk_2d04 = func_ov127_02292040((u16)r);
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294420() {
    unk_2d04 = -1;
    unk_2d08 = -1;
    unk_2d0c = -1;
    unk_2d16 = 0;
    unk_2d15 = 0;
    unk_2d18 = 2;
}

void Unk_ov128_022954e0::func_ov128_02294498() {
    s32 a = func_ov127_0229225c(&unk_478);
    s32 b = func_ov127_02292250(&unk_478);
    unk_2cfc = a & 0xf;
    unk_2d00 = b & 0xf;
    func_ov128_022943cc();
}

void Unk_ov128_022954e0::func_ov128_022944d8(s32 y) {
    s32 t = y + 0x60;
    func_02087e70(1, data_ov128_022955c0, 0x80, t - unk_2d00, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    s32 x = t + (s32)func_ov127_02292268(&unk_478);
    func_02087e70(1, data_ov128_02295540, 0x80 - unk_2cfc, x, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov128_022954e0::func_ov128_0229455c() {
    unk_e4.func_ov002_02202af0();
    unk_2d12 = unk_8d;
    func_ov002_02200a58(9);
}

void Unk_ov128_022954e0::func_ov128_02294584() {
    unk_e4.func_ov002_02202b68();
    func_ov002_02200a58(8);
}

void Unk_ov128_022954e0::func_ov128_0229459c() {
    unk_e4.func_ov002_02202a78();
    unk_e4.vfunc_0c();
}

void Unk_ov128_022954e0::func_ov128_022945b8(s32 x, s32 y) {
    unk_e4.func_ov002_022029e8(x, y, 3, 1);
    unk_2d12 = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov128_022954e0::func_ov128_022945ec() {
    if (func_ov128_022941a4(2)) {
        unk_e4.func_ov002_02202c40();
    } else if (unk_2d14 == 3) {
        unk_e4.func_ov002_02202be0();
    } else {
        unk_e4.func_ov002_02202c40();
    }
    s32 a = func_ov128_02294690();
    s32 b = func_ov128_02294660();
    func_ov128_022945b8(a, b);
}

void Unk_ov128_022954e0::func_ov128_02294644() {
    unk_e4.func_ov002_02202d00(0);
    unk_e4.vfunc_0c();
}

s32 Unk_ov128_022954e0::func_ov128_02294660() {
    if (func_ov128_022941a4(2)) {
        return unk_2cf4;
    }
    return data_ov128_022951e0[unk_2d14];
}

s32 Unk_ov128_022954e0::func_ov128_02294690() {
    if (func_ov128_022941a4(2)) {
        return unk_2cf0;
    }
    return data_ov128_022951e4[unk_2d14];
}

void Unk_ov128_022954e0::func_ov128_022946c0() {
    s32 a = func_ov128_02294690();
    s32 b = func_ov128_02294660();
    unk_e4.func_ov002_02202a40(a, b);
    if (func_ov128_022941a4(2)) {
        unk_e4.func_ov002_02202d00(1);
    } else if (unk_2d14 == 3) {
        unk_e4.func_ov002_02202d00(0xd);
    } else {
        unk_e4.func_ov002_02202d00(1);
    }
    func_ov128_0229459c();
}

void Unk_ov128_022954e0::func_ov128_02294728() {
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xa);
    func_ov128_02294184(4);
    func_ov128_02294274();
    func_ov128_02294644();
}

void Unk_ov128_022954e0::func_ov128_02294754() {
    if (func_0206ef0c()) {
        func_ov128_02294798();
    } else {
        func_ov128_02294774();
    }
}

void Unk_ov128_022954e0::func_ov128_02294774() {
    func_ov128_02294184(2);
    func_ov002_02200a58(4);
    func_ov128_022946c0();
    func_ov002_02200980();
}

void Unk_ov128_022954e0::func_ov128_02294798() {
    func_ov128_02294644();
    func_ov002_02200a58(0);
}

void Unk_ov128_022954e0::func_ov128_022947b0() {
    if (!unk_94.func_ov002_02203af4()) {
        func_ov002_02200a60(1);
    }
}

void Unk_ov128_022954e0::func_ov128_022947cc() {
    if (unk_e4.func_0208d4fc()) {
        func_ov128_0229459c();
        func_ov002_02200a58(unk_2d12);
    }
}

void Unk_ov128_022954e0::func_ov128_022947f4() {
    if (unk_e4.func_0208d4fc() && func_ov128_022941a4(2)) {
        func_ov002_02200a58(3);
        func_ov128_0229455c();
    }
}

void Unk_ov128_022954e0::func_ov128_02294824() {
    if (!unk_e4.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2d12);
        func_ov128_02294f54();
    }
}

void Unk_ov128_022954e0::func_ov128_0229484c() {
    if (func_ov127_02292538(&unk_478)) {
        func_ov002_02200a58(4);
    }
    func_ov128_02294498();
}

void Unk_ov128_022954e0::func_ov128_02294874() {
    u32 k = func_ov128_02294458();
    if (k != unk_2d13) {
        func_ov002_02200a58(6);
        func_ov127_0229257c(&unk_478, unk_2d13);
        func_ov128_02294498();
    } else {
        func_ov127_022925c8(&unk_478, unk_2d13, 1);
        func_ov128_02294498();
    }
}

void Unk_ov128_022954e0::func_ov128_022948c0() {
    if (func_ov002_022009d4()) {
        func_ov128_02294798();
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 2) || (k & 8)) {
            func_ov128_02294728();
        } else {
            u8 *q = &unk_2d13;
            *q = func_ov128_02294458();
            if (*q != 4) {
                func_ov127_022925c8(&unk_478, *q, 1);
                func_ov128_02294498();
                func_ov002_02200a58(5);
            }
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294930() {
    if (func_ov002_022009d4()) {
        func_ov128_02294798();
    } else {
        u32 k1 = data_021f47d8[1];
        if (k1 & 1) {
            func_ov128_02294584();
        } else if (k1 & 0x800) {
            func_ov128_02294184(2);
            func_ov002_02200a58(4);
            func_ov128_022945ec();
        } else {
            s32 ox = unk_2cf0;
            s32 oy = unk_2cf4;
            u32 k0 = data_021f47d8[0];
            if (k0 & 0x20) {
                unk_2cf0 = ox - 4;
            } else if (k0 & 0x10) {
                unk_2cf0 = ox + 4;
            }
            u32 k2 = *(volatile u16 *)&data_021f47d8[0];
            if (k2 & 0x40) {
                s32 *py = &unk_2cf4;
                *py = *py - 4;
            } else if (k2 & 0x80) {
                s32 *py = &unk_2cf4;
                *py = *py + 4;
            }
            s32 nx = unk_2cf0;
            if (ox != nx || oy != unk_2cf4) {
                if (nx < 0x30) {
                    unk_2cf0 = 0x30;
                    func_ov127_02292518(&unk_478, -4);
                    func_ov128_02294498();
                } else if (nx > 0xd0) {
                    unk_2cf0 = 0xd0;
                    func_ov127_02292518(&unk_478, 4);
                    func_ov128_02294498();
                }
                s32 ny = unk_2cf4;
                if (ny < 0x20) {
                    unk_2cf4 = 0x20;
                    func_ov127_0229247c(&unk_478, -4, 0);
                    func_ov128_02294498();
                } else if (ny > 0xa0) {
                    unk_2cf4 = 0xa0;
                    func_ov127_0229247c(&unk_478, 4, 0);
                    func_ov128_02294498();
                }
                unk_e4.func_ov002_02202a40(unk_2cf0, unk_2cf4);
            }
        }
    }
}

u32 Unk_ov128_022954e0::func_ov128_02294458() {
    u32 r = 4;
    u32 k = data_021f47d8[0];
    if (k & 0x20) {
        return 0;
    }
    if (k & 0x10) {
        return 1;
    }
    if (k & 0x40) {
        return 3;
    }
    if (k & 0x80) {
        r = 2;
    }
    return r;
}

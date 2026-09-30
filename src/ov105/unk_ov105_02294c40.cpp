#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov105_02294ef0_Ent {
    u32 a;
    u32 b;
};

extern "C" {
s32 func_0200402c(s32 a);
void func_020013cc(s32 a);
void func_0200140c();
void func_0200142c();
BOOL func_02087dac(void *r, s32 x, s32 y, s32 w, s32 h);
void func_0200261c(u32 a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_020020b8(s32 a);
void func_02088730(s32 a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
BOOL func_0206ef00();
void func_0208e13c(void *p, s32 v);
void func_0208d538(void *p, s32 v);
void func_ov002_022006e4(void *p, u32 v);
void func_ov002_022008c4(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_022008e0(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02200850(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
void func_ov002_0220301c(void *p);
void func_ov002_02203044(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202d00(void *p, u32 v);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov094_02293d04(void *p, void *q);
void func_ov094_02293c58(void *p);
extern u16 data_021f47d8[];
extern u32 data_021f482c;
extern u16 data_ov105_02298314[];
extern Unk_ov105_02294ef0_Ent data_ov105_02298544[];
extern u32 data_ov105_022984d8[];
}

class Unk_ov105_sub_02065cc8 {
public:
    ~Unk_ov105_sub_02065cc8();
    u32 unk_00[0xf4 / 4];
};
class Unk_ov105_sub_02203968 {
public:
    ~Unk_ov105_sub_02203968();
    u32 unk_00[0x10 / 4];
};
class Unk_ov105_sub_02203df0 {
public:
    ~Unk_ov105_sub_02203df0();
    u32 unk_00[0x70 / 4];
};
class Unk_ov105_sub_0206d40c {
public:
    ~Unk_ov105_sub_0206d40c();
    u32 unk_00[0x210 / 4];
};
class Unk_ov105_sub_022043e8 {
public:
    ~Unk_ov105_sub_022043e8();
    u32 unk_00[0x108 / 4];
};
class Unk_ov105_sub_02202454 {
public:
    ~Unk_ov105_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};
class Unk_ov105_sub_02202640 {
public:
    virtual ~Unk_ov105_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};
class Unk_ov105_sub_022027c4 {
public:
    ~Unk_ov105_sub_022027c4();
    u32 unk_00[0x18 / 4];
};
class Unk_ov105_sub_022007e8 {
public:
    ~Unk_ov105_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};
class Unk_ov105_sub_02292d50 {
public:
    ~Unk_ov105_sub_02292d50();
    u32 unk_00[0x15e0 / 4];
};
class Unk_ov105_sub_0229469c {
public:
    ~Unk_ov105_sub_0229469c();
    u32 unk_00[0x28 / 4];
};
class Unk_ov105_sub_02293a60 {
public:
    ~Unk_ov105_sub_02293a60();
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

// Vtable 0x02298594
class Unk_ov105_02298594 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov105_02298594();

    void func_ov105_02294dd8(u32 mask);
    void func_ov105_02294de8(u32 mask);
    BOOL func_ov105_02294df8(u32 mask);
    BOOL func_ov105_02294e0c();
    void func_ov105_02294e64();
    void func_ov105_02294e80();
    void func_ov105_02294ea4();
    BOOL func_ov105_02294ef0(s32 x, s32 y);
    void func_ov105_02294f48();
    void func_ov105_02294f84();
    void func_ov105_02295014();
    void func_ov105_022950b4();
    void func_ov105_022950e4();
    void func_ov105_02295120();
    void func_ov105_0229514c();
    void func_ov105_02295150();
    void func_ov105_02295158();
    void func_ov105_022951c8();
    void func_ov105_022951ec();
    BOOL func_ov105_02295210(void *pad, u32 x);
    void func_ov105_022952e4(void *pad);
    void func_ov105_02295340(void *pad);
    void func_ov105_0229536c(void *pad, u32 x);
    void func_ov105_02295464(void *pad, u32 x);
    void func_ov105_02295544();

    // out-of-range callees (declarations only)
    void func_ov105_02295698(u32 a);
    void func_ov105_02295a78();
    void func_ov105_02295bb0(u32 a);
    s32 func_ov105_02295f7c(u32 a);
    s32 func_ov105_02295fe8(u32 a);
    BOOL func_ov105_022961f4(u32 a);
    BOOL func_ov105_02296208(u32 a);
    BOOL func_ov105_02296214(u32 a);
    BOOL func_ov105_02296224(u32 a);
    s32 func_ov105_02297834();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[8];
    /* 0xa0 */ u32 unk_a0;
    /* 0xa4 */ u8 unk_a4[8];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ Unk_ov105_sub_02065cc8 unk_b4;
    /* 0x1a8 */ Unk_ov105_sub_02065cc8 unk_1a8;
    /* 0x29c */ u8 unk_29c[6];
    /* 0x2a2 */ u8 unk_2a2;
    /* 0x2a3 */ u8 unk_2a3;
    /* 0x2a4 */ u8 unk_2a4[4];
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9[0x3b];
    /* 0x2e4 */ Unk_ov105_sub_02293a60 unk_2e4;
    /* 0xd44 */ Unk_ov105_sub_0229469c unk_d44;
    /* 0xd6c */ Unk_ov105_sub_02292d50 unk_d6c;
    /* 0x234c */ Unk_ov105_sub_022007e8 unk_234c;
    /* 0x240c */ Unk_ov105_sub_022027c4 unk_240c;
    /* 0x2424 */ Unk_ov105_sub_02202640 unk_2424;
    /* 0x2488 */ Unk_ov105_sub_02202454 unk_2488;
    /* 0x2788 */ Unk_ov105_sub_022043e8 unk_2788;
    /* 0x2890 */ Unk_ov105_sub_0206d40c unk_2890;
    /* 0x2aa0 */ Unk_ov105_sub_02203df0 unk_2aa0;
    /* 0x2b10 */ Unk_ov105_sub_02065cc8 unk_2b10[0x4b];
    /* 0x728c */ Unk_ov105_sub_02203968 unk_728c;
};

// ---------------------------------------------------------------------------------------------

Unk_ov105_02298594::~Unk_ov105_02298594() {}

void Unk_ov105_02298594::func_ov105_02294dd8(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov105_02298594::func_ov105_02294de8(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov105_02298594::func_ov105_02294df8(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02294e0c() {
    s32 d = 0;
    u32 k = data_021f47d8[1];
    if (k & 0x200) {
        d = -1;
    } else if (k & 0x100) {
        d = 1;
    }
    if (d != 0) {
        d += unk_2a8;
        if (d < 0) {
            d = 2;
        } else if (d > 2) {
            d = 0;
        }
        unk_2a8 = d;
        func_ov105_02294ea4();
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02294e64() {
    func_0200140c();
    func_ov002_0220301c(&unk_728c);
}

void Unk_ov105_02298594::func_ov105_02294e80() {
    func_0200142c();
    func_020013cc(-6);
    func_ov002_02203044(&unk_728c);
}

void Unk_ov105_02298594::func_ov105_02294ea4() {
    func_0200402c(data_ov105_02298314[unk_2a8]);
    func_ov002_022006e4(&unk_234c, 1);
    func_ov105_02295a78();
    unk_8c = 0xb;
    func_ov002_02200a60(1);
    func_ov105_02294de8(0x40);
}

BOOL Unk_ov105_02298594::func_ov105_02294ef0(s32 x, s32 y) {
    s32 i, j;
    s32 xs = x - 0x80;
    volatile s32 yv = y;
    yv = y - 0x60;
    for (i = 0, j = i; i < 3; i++, j += 3) {
        if (i != unk_2a8) {
            if (func_02087dac(&data_ov105_02298544[j], xs, yv, 2, 2)) {
                unk_2a8 = i;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02294f48() {
    func_ov002_022006e4(&unk_234c, 1);
    func_ov105_02295a78();
    func_ov002_022008c4(this, 2, 0, 2, 0x30);
    func_ov002_02200850(this, 0xc0);
}

void Unk_ov105_02298594::func_ov105_02294f84() {
    func_ov094_02293d04(&unk_d44, &unk_2b10[unk_2a8 * 0x19]);
    func_0200261c(data_ov105_022984d8[unk_2a8], data_021f482c, 4, 0x1e2, 0x1e2, 0x1ed);
    func_ov002_022008e0(this, 2, 0, 2, 0x30);
    func_ov002_02200850(this, 0xc0);
    func_020020b8(4);
    func_ov105_02294de8(0x200);
    func_ov105_02297834();
}

void Unk_ov105_02298594::func_ov105_02295014() {
    s32 i, j;
    s32 a, b;
    s32 z0 = 0, z1 = 0, z2 = 0;
    void *p = (void *)(unk_a0 + 0x80);
    for (i = 0, j = i; i < 3; i++, j += 3) {
        if (i == unk_2a8) {
            a = 0x52;
            b = 4;
        } else {
            a = 0x50;
            b = 5;
        }
        func_02088730(1, &data_ov105_02298544[j], p, a, -1, 1, z0);
        func_02088730(1, &data_ov105_02298544[j + 1], p, a, b, 1, z1);
        func_02088730(1, &data_ov105_02298544[j + 2], p, 0x50, -1, 1, z2);
    }
}

void Unk_ov105_02298594::func_ov105_022950b4() {
    func_0200402c(0x2a);
    func_ov002_022030ac(&unk_728c, 4);
    unk_8c = 0x12;
    func_ov002_02200a58(0x1b);
}

void Unk_ov105_02298594::func_ov105_022950e4() {
    func_0200402c(0x27);
    func_ov002_022030ac(&unk_728c, 3);
    unk_8c = 4;
    func_ov105_02294dd8(0x100);
    func_ov002_02200a58(0x1b);
}

void Unk_ov105_02298594::func_ov105_02295120() {
    func_0200402c(0x29);
    func_ov002_022030ac(&unk_728c, 9);
    func_ov002_02200a58(0x1b);
    unk_8c = 0xe;
}

void Unk_ov105_02298594::func_ov105_0229514c() {}

void Unk_ov105_02298594::func_ov105_02295150() { func_ov105_02295544(); }

void Unk_ov105_02298594::func_ov105_02295158() {
    u8 r4 = unk_2a3;
    func_ov105_02295bb0(r4);
    unk_ac = func_ov105_02295fe8(r4);
    unk_b0 = func_ov105_02295f7c(r4);
    if (func_0206ef00()) {
        unk_ac -= 2;
        unk_b0 -= 2;
    }
    func_ov002_02200a58(0x1c);
    func_ov094_02293c58(&unk_d44);
}

void Unk_ov105_02298594::func_ov105_022951c8() {
    func_ov002_02200a58(0x1a);
    func_0208e13c(&unk_2aa0, 2);
    func_0200402c(0x29);
}

void Unk_ov105_02298594::func_ov105_022951ec() {
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov105_02294de8(0x100);
}

BOOL Unk_ov105_02298594::func_ov105_02295210(void *pad, u32 x) {
    u8 old = unk_2a2;
    func_ov105_02294dd8(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov105_02296224(unk_2a2)) {
        func_ov105_02295464(pad, x);
    } else if (func_ov105_02296214(unk_2a2)) {
        func_ov105_0229536c(pad, x);
        if (func_ov105_022961f4(unk_2a2)) {
            if (x == 1) {
                func_ov002_02202d00(&unk_2424, 1);
            }
        }
    } else if (func_ov105_02296208(unk_2a2)) {
        func_ov105_02295340(pad);
    } else if (func_ov105_022961f4(unk_2a2)) {
        func_ov105_022952e4(pad);
        if (!func_ov105_022961f4(unk_2a2)) {
            if (x == 1) {
                func_0208d538(&unk_2424, 4);
            }
        }
    }
    if (old != unk_2a2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_022952e4(void *pad) {
    if (func_ov002_0220126c(pad)) {
        if (unk_2a2 > 0x3e) {
            unk_2a2 = unk_2a2 - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (unk_2a2 < 0x40) {
            unk_2a2 = unk_2a2 + 1;
        }
    }
    if (func_ov002_0220127c(pad)) {
        unk_2a2 = unk_2a2 - 0x1a;
    }
}

void Unk_ov105_02298594::func_ov105_02295340(void *pad) {
    if (func_ov002_0220128c(pad)) {
        func_ov002_02202c40(&unk_2424);
        unk_2a2 = 0x22;
    }
}

void Unk_ov105_02298594::func_ov105_0229536c(void *pad, u32 x) {
    s32 r4 = unk_2a2 - 0x24;
    s32 r6 = 0;
    while (r4 >= 5) {
        r6++;
        r4 -= 5;
    }
    if (func_ov002_0220126c(pad)) {
        if (r4 > 0) {
            unk_2a2 = unk_2a2 - 1;
            r4 = r4 - 1;
        } else {
            unk_2a2 = r6 * 2 + 0x1b;
            func_ov105_02294de8(0x10);
            return;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (r4 < 4) {
            unk_2a2 = unk_2a2 + 1;
            r4 = r4 + 1;
        } else {
            unk_2a2 = r6 * 2 + 0x1a;
            return;
        }
    }
    if (func_ov105_02296214(unk_2a2)) {
        if (!func_ov105_02294df8(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r6 > 0) {
                    unk_2a2 = unk_2a2 - 5;
                } else if (r4 < 3) {
                    unk_2a2 = r4 + 0x3e;
                } else {
                    unk_2a2 = 0x40;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r6 < 4) {
                    unk_2a2 = unk_2a2 + 5;
                } else if (x == 0) {
                    unk_2a2 = 0x3d;
                    func_ov002_02202ca0(&unk_2424);
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02295464(void *pad, u32 x) {
    s32 r6 = unk_2a2 - 0x1a;
    s32 r4 = r6 >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((r6 & 1) > 0) {
            unk_2a2 = unk_2a2 - 1;
        } else {
            unk_2a2 = r4 * 5 + 0x28;
            return;
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((r6 & 1) < 1) {
            unk_2a2 = unk_2a2 + 1;
        } else {
            unk_2a2 = r4 * 5 + 0x24;
            func_ov105_02294de8(0x20);
            return;
        }
    }
    if (func_ov105_02296224(unk_2a2)) {
        if (!func_ov105_02294df8(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r4 > 0) {
                    unk_2a2 = unk_2a2 - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r4 < 4) {
                    unk_2a2 = unk_2a2 + 2;
                } else if (x == 0) {
                    unk_2a2 = 0x3d;
                    func_ov002_02202ca0(&unk_2424);
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02295544() {
    func_ov105_02294de8(0x800);
    func_ov002_022016e4(&unk_2488.unk_2f4, 4);
    func_ov002_02201700(&unk_2488.unk_2f4, 0x1a, 4);
    func_ov002_02201700(&unk_2488.unk_2f4, 0x15, 2);
    func_ov002_02201700(&unk_2488.unk_2f4, 0x19, 4);
    func_ov105_02295698(0);
}

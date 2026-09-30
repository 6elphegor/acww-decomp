#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02115e30(u16 v, void *dst, u32 n);
void func_02115e48(void *dst, void *src, u32 n);
void func_0200402c(s32 a);
void func_020021fc(u32 a, s32 b, s32 c);
BOOL func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
s32 func_ov002_02202878(void *p);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02202f00(void *p);
void func_ov002_02202e48(void *p);
}

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
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

    void func_ov002_02200a58(u8 v);

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

// Sub-object at +0xc4 (D1 func_ov002_02202640, size 0x64)
class Unk_ov144_02202640 {
public:
    virtual ~Unk_ov144_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// Sub-object at +0x128 (D1 func_ov002_02202f70, size 0x48)
class Unk_ov144_02202f70 {
public:
    ~Unk_ov144_02202f70();
    u32 unk_00[0x48 / 4];
};

// Sub-object at +0x170 (D1 func_ov002_02203968, size 0x164)
class Unk_ov144_02203968 {
public:
    ~Unk_ov144_02203968();
    u32 unk_00[0x164 / 4];
};

// 0x40-byte element (D1 func_0206fca8)
class Unk_ov144_0206fca8 {
public:
    Unk_ov144_0206fca8();
    ~Unk_ov144_0206fca8();
    u32 unk_00[0x40 / 4];
};

// Sub-object at +0x55c (D2 func_ov002_022043e8, size 0x108)
class Unk_ov144_022043e8 {
public:
    ~Unk_ov144_022043e8();
    u32 unk_00[0x108 / 4];
};

// Vtable 0x02293db8
class Unk_ov144_02293db8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov144_02293db8();

    void func_ov144_02292020(u32 m);
    void func_ov144_02292030(u32 m);
    BOOL func_ov144_02292040(u32 m);
    void func_ov144_02292054(s32 x);
    BOOL func_ov144_02292094(u32 pad);
    void func_ov144_022922e4();
    void func_ov144_022922fc();
    BOOL func_ov144_02292328();
    void func_ov144_022923c0();
    u32 func_ov144_022923f0(s32 x, s32 y);
    BOOL func_ov144_02292484(u32 a);
    BOOL func_ov144_02292508(s32 v);
    void func_ov144_0229253c();
    void func_ov144_022925bc(u32 a);
    void func_ov144_022925ec(u32 a);
    void func_ov144_0229261c(u32 a);
    void func_ov144_0229264c(u16 v);
    void func_ov144_02292684();
    void func_ov144_022926fc();
    void func_ov144_02292774(s32 idx, u32 col);
    void func_ov144_022927b4();
    void func_ov144_0229282c(s32 v);
    void func_ov144_02292868();

    // callees in other groups
    void func_ov144_02292d38();
    BOOL func_ov144_02293144();
    BOOL func_ov144_022930c8();
    BOOL func_ov144_02292fb4();
    BOOL func_ov144_02292f7c();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u32 unk_ac[2];
    /* 0x0b4 */ u16 unk_b4;
    /* 0x0b6 */ s16 unk_b6;
    /* 0x0b8 */ s16 unk_b8;
    /* 0x0ba */ s16 unk_ba;
    /* 0x0bc */ s16 unk_bc;
    /* 0x0be */ u8 unk_be[3];
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2[2];
    /* 0x0c4 */ Unk_ov144_02202640 unk_c4;
    /* 0x128 */ Unk_ov144_02202f70 unk_128;
    /* 0x170 */ Unk_ov144_02203968 unk_170;
    /* 0x2d4 */ Unk_ov144_0206fca8 unk_2d4[9];
    /* 0x514 */ u8 unk_514[0x48];
    /* 0x55c */ Unk_ov144_022043e8 unk_55c;
    /* 0x664 */ u8 unk_664[0x702 - 0x664];
    /* 0x702 */ u8 unk_702[0x800];
    /* 0xf02 */ u8 unk_f02[0x800];
    /* 0x1702 */ u8 unk_1702[0x800];
};

// ---------------------------------------------------------------------------------------------

Unk_ov144_02293db8::~Unk_ov144_02293db8() {}

void Unk_ov144_02293db8::func_ov144_02292020(u32 m) { unk_b4 = unk_b4 & ~m; }

void Unk_ov144_02293db8::func_ov144_02292030(u32 m) { unk_b4 = unk_b4 | m; }

BOOL Unk_ov144_02293db8::func_ov144_02292040(u32 m) {
    if (unk_b4 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov144_02293db8::func_ov144_02292054(s32 x) {
    x = x - 3;
    s32 m = unk_b8 - 8;
    if (m < 0) {
        m = 0;
    }
    if (x < 0) {
        x = 0;
    } else if (x > m) {
        x = m;
    }
    func_ov144_0229282c(x << 4);
    unk_a0 = unk_9c;
    func_ov144_02292d38();
}

BOOL Unk_ov144_02293db8::func_ov144_02292094(u32 pad) {
    u32 st = unk_c1;
    if (pad == 0) {
        return FALSE;
    }
    if (st <= 8) {
        if (func_ov002_0220126c(pad)) {
            func_ov144_022923c0();
        } else if (func_ov002_0220125c(pad)) {
            if (unk_a4 > 0) {
                unk_c1 = 10;
            } else {
                unk_c1 = 9;
            }
        } else if (func_ov002_0220128c(pad)) {
            if (unk_c1 != 0) {
                unk_c1 = *(volatile u8 *)&unk_c1 - 1;
                if (unk_c1 == 0) {
                    s32 r = unk_a0 & 0xf;
                    if (r != 0) {
                        unk_a0 = unk_a0 - r;
                    }
                }
            } else {
                if (unk_a0 >= 0x10) {
                    unk_a0 = unk_a0 - 0x10;
                    return TRUE;
                }
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 t = unk_a4;
            if (t == 0) {
                if (unk_c1 < unk_b8 - 1) {
                    unk_c1 = *(volatile u8 *)&unk_c1 + 1;
                }
            } else if (unk_c1 < 7) {
                unk_c1 = *(volatile u8 *)&unk_c1 + 1;
            } else {
                s32 a0 = unk_a0;
                s32 r = a0 & 0xf;
                if (r != 0) {
                    unk_a0 = unk_a0 + (0x10 - r);
                    return TRUE;
                } else if (a0 <= t - 0x10) {
                    unk_a0 = unk_a0 + 0x10;
                    return TRUE;
                }
            }
        }
    }
    switch (unk_c1) {
    case 9:
        if (func_ov002_0220126c(pad)) {
            func_ov144_022922e4();
        } else if (func_ov002_0220128c(pad)) {
            if (unk_a4 > 0) {
                unk_c1 = 10;
            }
        }
        break;
    case 10:
        if (func_ov002_0220127c(pad)) {
            unk_c1 = 9;
        } else if (func_ov002_0220126c(pad)) {
            func_ov144_022922e4();
        }
        break;
    case 11:
        if (func_ov002_0220127c(pad)) {
            unk_c1 = 13;
        } else if (func_ov002_0220125c(pad)) {
            func_ov144_022922fc();
        }
        break;
    case 12:
        if (func_ov002_0220128c(pad)) {
            unk_c1 = 13;
        } else if (func_ov002_0220125c(pad)) {
            func_ov144_022922fc();
        }
        break;
    case 13:
        if (func_ov002_0220128c(pad)) {
            unk_c1 = 11;
        } else if (func_ov002_0220127c(pad)) {
            unk_c1 = 12;
        } else if (func_ov002_0220125c(pad)) {
            func_ov144_022922fc();
        }
        break;
    }
    if (st != unk_c1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov144_02293db8::func_ov144_022922e4() {
    if (!func_ov144_02292328()) {
        func_ov144_022923c0();
    }
}

void Unk_ov144_02293db8::func_ov144_022922fc() {
    if (!func_ov144_02292328()) {
        if (unk_a4 > 0) {
            unk_c1 = 10;
        } else {
            unk_c1 = 9;
        }
    }
}

BOOL Unk_ov144_02293db8::func_ov144_02292328() {
    s32 n = unk_b8;
    s32 x, r, t;
    if (n == 0) {
        return FALSE;
    }
    if (n > 9) {
        n = 9;
    }
    x = func_ov002_02202878(&unk_c4);
    if (x < 0x20) {
        x = 0x20;
    }
    if (x >= 0xa0) {
        x = 0x9f;
    }
    r = unk_a0 & 0xf;
    t = (x - (0x20 - r)) >> 4;
    if (t >= n) {
        t = n - 1;
    }
    unk_c1 = t;
    if (r != 0) {
        if (t == 0) {
            unk_a0 = unk_a0 - r;
        } else if (t == n - 1) {
            unk_c1 = unk_c1 - 1;
            unk_a0 = unk_a0 + (0x10 - (unk_a0 & 0xf));
        }
    }
    return TRUE;
}

void Unk_ov144_02293db8::func_ov144_022923c0() {
    s32 x = func_ov002_02202878(&unk_c4);
    if (x < 0x4c) {
        unk_c1 = 0xb;
    } else if (x < 0x74) {
        unk_c1 = 0xd;
    } else {
        unk_c1 = 0xc;
    }
}

u32 Unk_ov144_02293db8::func_ov144_022923f0(s32 x, s32 y) {
    if (func_ov002_02203110(&unk_170, 6)) {
        return 9;
    }
    if (x >= 0x10 && x <= 0x30 && y >= 0x20 && y <= 0x40) {
        return 0xb;
    }
    if (x >= 0x10 && x <= 0x30 && y >= 0x78 && y <= 0x88) {
        return 0xc;
    }
    if (x >= 0x10 && x <= 0x30 && y >= 0x60 && y <= 0x70) {
        return 0xd;
    }
    if (x >= 0x40 && x <= 0xc0 && y >= 0x18 && y < 0x98) {
        s32 t = (y - (0x18 - (unk_a0 & 0xf))) >> 4;
        if (t < unk_b8) {
            return (u8)t;
        }
    }
    return 0xe;
}

BOOL Unk_ov144_02293db8::func_ov144_02292484(u32 a) {
    if (a <= 8) {
        if (func_ov144_02292508(a + unk_b6)) {
            func_0200402c(0x29);
        }
        return FALSE;
    }
    switch (a - 9) {
    case 0:
        func_ov144_02293144();
        return TRUE;
    case 2:
        return func_ov144_022930c8();
    case 3:
        return func_ov144_02292fb4();
    case 4:
        func_ov144_02292f7c();
        return TRUE;
    case 1:
        func_ov002_02202f00(&unk_128);
        func_ov002_02202e48(&unk_128);
        func_ov002_02200a58(4);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov144_02293db8::func_ov144_02292508(s32 v) {
    BOOL r;
    if (unk_ba == v) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    unk_ba = v;
    func_ov144_02292030(8);
    func_ov144_0229253c();
    return r;
}

void Unk_ov144_02293db8::func_ov144_0229253c() {
    if (unk_ba == -1) {
        func_ov144_022925ec(7);
        if (unk_bc == -1) {
            func_ov144_0229264c(0x59);
            func_ov144_0229261c(7);
        } else {
            func_ov144_0229264c(0x69);
            func_ov144_0229261c(8);
        }
    } else {
        func_ov144_022925ec(6);
        if (unk_bc == -1) {
            func_ov144_0229264c(0x59);
            func_ov144_0229261c(6);
        } else {
            func_ov144_0229264c(0x69);
            func_ov144_0229261c(8);
        }
    }
}

void Unk_ov144_02293db8::func_ov144_022925bc(u32 a) {
    func_ov144_02292030(2);
    func_0206ee80(unk_1702, 2, 0xc, 5, 0xd, a);
}

void Unk_ov144_02293db8::func_ov144_022925ec(u32 a) {
    func_ov144_02292030(2);
    func_0206ee80(unk_1702, 2, 0xf, 5, 0x10, a);
}

void Unk_ov144_02293db8::func_ov144_0229261c(u32 a) {
    func_ov144_02292030(2);
    func_0206ee80(unk_1702, 2, 4, 5, 7, a);
}

void Unk_ov144_02293db8::func_ov144_0229264c(u16 v) {
    s32 k, idx, j, i;
    for (k = 0x82, i = 4; i <= 7; k += 0x20, i++) {
        idx = k;
        for (j = 2; j <= 5; j++) {
            *(u16 *)((u8 *)this + idx * 2 + 0x1702) = v;
            idx++;
            v = v + 1;
        }
    }
}

void Unk_ov144_02293db8::func_ov144_02292684() {
    s32 t = unk_a0;
    s32 c = unk_9c;
    if (c != t) {
        if (c > t) {
            unk_9c = unk_9c - 6;
            t = unk_a0;
            if (unk_9c < t) {
                unk_9c = t;
            }
        } else {
            unk_9c = unk_9c + 6;
            t = unk_a0;
            if (unk_9c > t) {
                unk_9c = t;
            }
        }
        func_ov144_0229282c(unk_9c);
        func_ov144_02292d38();
    }
}

void Unk_ov144_02293db8::func_ov144_022926fc() {
    func_0206ee80(unk_f02, 0, 0, 0x1f, 0x1f, 4);
    if (unk_bc == unk_ba) {
        func_ov144_02292774(unk_bc, 0xa);
    } else {
        func_ov144_02292774(unk_bc, 9);
        func_ov144_02292774(unk_ba, 5);
    }
    if (func_020b86c0(unk_514, unk_f02, 4, 0x800, 0)) {
        func_ov144_02292020(8);
    }
}

void Unk_ov144_02293db8::func_ov144_02292774(s32 idx, u32 col) {
    s32 z = 0;
    if (idx != -1) {
        s32 d = idx - unk_b6;
        if (d >= 0 && d < 9) {
            s32 y = (idx & 0xf) << 1;
            func_0206ee80(unk_f02, z, y, 0x1f, y + 1, col);
        }
    }
}

void Unk_ov144_02293db8::func_ov144_022927b4() {
    s32 n = unk_b6;
    s32 i = (n + 9) % 9;
    s32 j = n & 0xf;
    s32 k;
    volatile u16 fill = 0x10;
    func_02115e30(fill, unk_f02, 0x800);
    s32 z = 0;
    k = z;
    do {
        func_02115e48(unk_702 + i * 0x80, unk_f02 + j * 0x80, 0x80);
        i++;
        if (i >= 9) {
            i = z;
        }
        j = (j + 1) & 0xf;
        k++;
    } while (k < 9);
    func_ov144_02292030(8);
}

void Unk_ov144_02293db8::func_ov144_0229282c(s32 v) {
    unk_9c = v;
    func_020021fc(4, 0, unk_9c - 0x18);
    unk_b6 = v >> 4;
    func_ov144_022927b4();
    func_ov144_02292030(4);
}

void Unk_ov144_02293db8::func_ov144_02292868() {
    unk_a4 = (unk_b8 - 8) << 4;
    if (unk_a4 < 0) {
        unk_a4 = 0;
    }
    func_ov144_02292054(unk_bc);
}

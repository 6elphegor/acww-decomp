#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8;
void func_02115e48(void *dst, void *src, u32 n);
s32 func_02133150(s32 a, s32 b);
void func_020b8670(void *a, void *b, u32 c, u32 d);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_0208d9a8(void *p);
void func_0208dae8(void *p, s32 a, s32 b);
void func_020e761c(void *p, s32 a, s32 b);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
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

// Sub-object at +0xe8 (D1 func_ov002_02202640, size 0x64)
class Unk_ov142_02202640 {
public:
    virtual ~Unk_ov142_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// Sub-object at +0x14c (D1 func_ov002_02202f70, size 0x48)
class Unk_ov142_02202f70 {
public:
    ~Unk_ov142_02202f70();
    void func_ov002_02202e54();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
    u32 unk_00[0x48 / 4];
};

// Sub-object at +0x194 (D1 func_ov002_02203968, size 0x108)
class Unk_ov142_02203968 {
public:
    ~Unk_ov142_02203968();
    u32 unk_00[0x108 / 4];
};

// 0x40-byte element (D1 func_0206fca8)
class Unk_ov142_0206fca8 {
public:
    Unk_ov142_0206fca8();
    ~Unk_ov142_0206fca8();
    u32 unk_00[0x40 / 4];
};

// Vtable 0x02294da8
class Unk_ov142_02294da8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov142_02294da8();

    void func_ov142_02292008(u32 m);
    void func_ov142_02292018(u32 m);
    BOOL func_ov142_02292028(u32 m);
    void func_ov142_0229203c();
    void func_ov142_022920b0(u32 t);
    u16 func_ov142_02292154(s32 x, s32 y, s32 t);
    void func_ov142_022921f0();
    void func_ov142_022922c8();
    void func_ov142_022922d8();
    void func_ov142_022922e8();
    void func_ov142_022922f8();
    void func_ov142_02292364();
    void func_ov142_022923ac();
    void func_ov142_022923c8();
    void func_ov142_022923e4(s32 a);
    void func_ov142_02292414();
    void func_ov142_02292440();
    void func_ov142_02292478();
    BOOL func_ov142_022924a0();
    void func_ov142_022924c8();
    void func_ov142_02292554();
    void func_ov142_02292564(s32 v, BOOL c);
    BOOL func_ov142_022925dc(s32 x, s32 y);
    BOOL func_ov142_02292624(u32 pad);

    // callees in other groups
    void func_ov142_02292e94(s32 v);
    s32 func_ov142_02293098();
    void func_ov142_02293540(u32 v);
    void func_ov142_02292964();
    void func_ov142_0229291c();
    void func_ov142_02292a3c();
    void func_ov142_02292a1c();
    void func_ov142_0229294c();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ s32 unk_b0;
    /* 0x0b4 */ s16 unk_b4;
    /* 0x0b6 */ u16 unk_b6;
    /* 0x0b8 */ s16 unk_b8;
    /* 0x0ba */ u8 unk_ba[3];
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3[0xe8 - 0xc3];
    /* 0x0e8 */ Unk_ov142_02202640 unk_e8;
    /* 0x14c */ Unk_ov142_02202f70 unk_14c;
    /* 0x194 */ Unk_ov142_02203968 unk_194;
    /* 0x29c */ u8 unk_29c[0x2f8 - 0x29c];
    /* 0x2f8 */ Unk_ov142_0206fca8 unk_2f8[14];
    /* 0x678 */ u8 unk_678[0x6c0 - 0x678];
    /* 0x6c0 */ u8 unk_6c0[0x24];
    /* 0x6e4 */ u8 unk_6e4[0x2590 - 0x6e4];
    /* 0x2590 */ u8 unk_2590[0x2d90 - 0x2590];
    /* 0x2d90 */ u16 unk_2d90[16];
    /* 0x2db0 */ u16 unk_2db0[16];
    /* 0x2dd0 */ u16 unk_2dd0[16];
    /* 0x2df0 */ u16 unk_2df0[16];
};

// ---------------------------------------------------------------------------------------------

Unk_ov142_02294da8::~Unk_ov142_02294da8() {}

void Unk_ov142_02294da8::func_ov142_02292008(u32 m) { unk_b6 = unk_b6 & ~m; }

void Unk_ov142_02294da8::func_ov142_02292018(u32 m) { unk_b6 = unk_b6 | m; }

BOOL Unk_ov142_02294da8::func_ov142_02292028(u32 m) {
    if (unk_b6 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_0229203c() {
    switch (unk_c2) {
    case 0:
        return;
    case 1:
        if (unk_c1 != 0) {
            unk_c1 = *(volatile u8 *)&unk_c1 - 1;
        } else {
            unk_c2 = 2;
            func_ov142_02293540(unk_bd);
        }
        break;
    case 2:
        if (unk_c1 < 3) {
            unk_c1 = *(volatile u8 *)&unk_c1 + 1;
        } else {
            unk_c2 = 0;
            return;
        }
        break;
    }
    func_ov142_022920b0(unk_c1);
}

void Unk_ov142_02294da8::func_ov142_022920b0(u32 t) {
    func_02115e48(unk_2d90, unk_2db0, 0x20);
    func_02115e48(unk_2dd0, unk_2df0, 0x20);
    unk_2db0[15] = func_ov142_02292154(unk_2d90[15], unk_2d90[8], t);
    unk_2df0[15] = func_ov142_02292154(unk_2dd0[15], unk_2dd0[8], t);
    func_020b8670(unk_6c0, unk_2db0, 4, 3);
    func_020b8670(unk_6c0 + 0x24, unk_2df0, 4, 4);
}

u16 Unk_ov142_02294da8::func_ov142_02292154(s32 x, s32 y, s32 t) {
    u8 yr = (u8)(y & 0x1f);
    u8 yg = (u8)((y & 0x3e0) >> 5);
    u8 yb = (u8)((y & 0x7c00) >> 10);
    s32 n = 3 - t;
    u32 res;
    res = (u8)(((u8)(x & 0x1f) * t + yr * n) / 3);
    res |= (u8)(((u8)((x & 0x3e0) >> 5) * t + yg * n) / 3) << 5;
    res |= (u8)(((u8)((x & 0x7c00) >> 10) * t + yb * n) / 3) << 10;
    return (u16)res;
}

void Unk_ov142_02294da8::func_ov142_022921f0() {
    s32 old = unk_9c;
    if (func_ov142_02292028(0x1000)) {
        s32 r = unk_9c & 0xf;
        if (r != 0) {
            unk_9c = unk_9c - r;
        } else {
            unk_9c = unk_9c - 0x10;
        }
        if (unk_9c < 0) {
            unk_9c = 0;
        }
    } else {
        s32 r = unk_9c & 0xf;
        if (r != 0) {
            unk_9c = unk_9c + (0x10 - r);
        } else {
            unk_9c = unk_9c + 0x10;
        }
        s32 lim = unk_a4;
        if (unk_9c > lim) {
            unk_9c = lim;
        }
    }
    if (old != unk_9c) {
        func_ov142_02292e94(unk_9c);
        unk_a0 = unk_9c;
        func_ov142_02292414();
        unk_14c.func_ov002_02202e54();
    }
}

void Unk_ov142_02294da8::func_ov142_022922c8() { func_ov142_02292008(0x3000); }

void Unk_ov142_02294da8::func_ov142_022922d8() { func_ov142_02292018(0x2000); }

void Unk_ov142_02294da8::func_ov142_022922e8() { func_ov142_02292018(0x1000); }

void Unk_ov142_02294da8::func_ov142_022922f8() {
    s32 a = unk_b4;
    s32 b = func_ov142_02293098() - 8;
    if (b < 0) {
        b = 0;
    }
    if (a < 0) {
        a = 0;
    } else if (a > b) {
        a = b;
    }
    func_ov142_02292e94(a << 4);
    unk_a0 = unk_9c;
    func_ov142_02292414();
    if (unk_a4 == 0) {
        func_ov142_022923ac();
    } else {
        func_ov142_022923c8();
    }
    func_ov142_02292008(0x200);
}

void Unk_ov142_02294da8::func_ov142_02292364() {
    func_ov142_02293540(unk_be);
    func_ov142_02292e94((unk_b8 - 3) << 4);
    unk_a0 = unk_9c;
    func_ov142_02292414();
    func_ov142_022923ac();
    func_ov142_02292018(0x200);
}

void Unk_ov142_02294da8::func_ov142_022923ac() {
    func_ov142_02292018(0x100);
    func_ov142_022923e4(3);
}

void Unk_ov142_02294da8::func_ov142_022923c8() {
    func_ov142_02292008(0x100);
    func_ov142_022923e4(2);
}

void Unk_ov142_02294da8::func_ov142_022923e4(s32 a) {
    func_0206ee80(unk_2590, 0x17, 4, 0x18, 0x13, a);
    func_ov142_02292018(0x10);
}

void Unk_ov142_02294da8::func_ov142_02292414() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x5a, unk_a4);
        func_ov142_02292478();
    }
}

void Unk_ov142_02294da8::func_ov142_02292440() {
    s32 v;
    s32 n = unk_a4;
    v = func_02133150(unk_a8 * n, 0x5a);
    if (v < 0) {
        v = 0;
    }
    if (v > n) {
        v = n;
    }
    func_ov142_02292e94(v);
    unk_a0 = v;
}

void Unk_ov142_02294da8::func_ov142_02292478() {
    func_0208dae8(&unk_14c, 0x38, unk_94 + (unk_a8 - 0x34));
}

BOOL Unk_ov142_02294da8::func_ov142_022924a0() {
    if (func_0208d9a8(&unk_14c)) {
        unk_14c.func_ov002_02202f0c();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_022924c8() {
    s32 old = unk_a8;
    u32 k = data_021f47d8;
    if (k & 0x40) {
        unk_a8 = unk_a8 - 4;
        if (unk_a8 < 0) {
            unk_a8 = 0;
        }
    } else if (k & 0x80) {
        unk_a8 = unk_a8 + 4;
        if (unk_a8 > 0x5a) {
            unk_a8 = 0x5a;
        }
    }
    if (old != unk_a8) {
        func_ov142_02292440();
        func_ov142_02292478();
        unk_14c.func_ov002_02202e54();
    }
}

void Unk_ov142_02294da8::func_ov142_02292554() { unk_14c.func_ov002_02202ef4(); }

void Unk_ov142_02294da8::func_ov142_02292564(s32 v, BOOL c) {
    if (c) {
        v = v - 0x34;
    } else {
        v = v + unk_ac;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 0x5a) {
        v = 0x5a;
    }
    if (c) {
        func_020e761c(&unk_a8, v, 8);
    } else {
        unk_a8 = v;
    }
    func_ov142_02292440();
    func_ov142_02292478();
    s32 d = unk_b0 - unk_a8;
    if (d >= 4 || d <= -4) {
        unk_14c.func_ov002_02202e54();
        unk_b0 = unk_a8;
    }
}

BOOL Unk_ov142_02294da8::func_ov142_022925dc(s32 x, s32 y) {
    if (unk_14c.func_ov002_02202f18(x, y)) {
        unk_ac = unk_a8 - y;
        unk_14c.func_ov002_02202f00();
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov142_02294da8::func_ov142_02292624(u32 pad) {
    u32 old = unk_c0;
    if (pad == 0) {
        return FALSE;
    }
    if (old <= 8) {
        if (func_ov002_0220125c(pad)) {
            func_ov142_02292964();
        } else if (func_ov002_0220128c(pad)) {
            if (unk_c0 != 0) {
                unk_c0 = *(volatile u8 *)&unk_c0 - 1;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (unk_c0 < 8) {
                unk_c0 = *(volatile u8 *)&unk_c0 + 1;
            }
        }
    } else if (old >= 9 && old <= 0x11) {
        if (func_ov002_0220126c(pad)) {
            func_ov142_0229291c();
        } else if (func_ov002_0220125c(pad)) {
            func_ov142_02292a3c();
        } else if (func_ov002_0220128c(pad)) {
            if (unk_c0 > 9) {
                unk_c0 = *(volatile u8 *)&unk_c0 - 1;
                if (unk_c0 == 9) {
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
            if (unk_a4 == 0) {
                if (unk_c0 < func_ov142_02293098() + 8) {
                    unk_c0 = *(volatile u8 *)&unk_c0 + 1;
                }
            } else if (unk_c0 < 0x10) {
                unk_c0 = *(volatile u8 *)&unk_c0 + 1;
            } else {
                s32 t = unk_a0;
                s32 r = t & 0xf;
                if (r != 0) {
                    unk_a0 = unk_a0 + (0x10 - r);
                    return TRUE;
                } else if (t <= unk_a4 - 0x10) {
                    unk_a0 = unk_a0 + 0x10;
                    return TRUE;
                }
            }
        }
    } else {
        switch (old - 0x12) {
        case 1:
            if (func_ov002_0220126c(pad)) {
                func_ov142_02292a1c();
            } else if (func_ov002_0220128c(pad)) {
                unk_c0 = 0x12;
            }
            break;
        case 0:
            if (func_ov002_0220126c(pad)) {
                func_ov142_02292a1c();
            } else if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x13;
            }
            break;
        case 2:
            if (func_ov002_0220128c(pad)) {
                unk_c0 = 0x15;
            } else if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x16;
            } else if (func_ov002_0220125c(pad)) {
                unk_c0 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                func_ov142_0229294c();
            }
            break;
        case 3:
            if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x14;
            } else if (func_ov002_0220125c(pad)) {
                unk_c0 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                func_ov142_0229294c();
            }
            break;
        case 4:
            if (func_ov002_0220128c(pad)) {
                unk_c0 = 0x14;
            } else if (func_ov002_0220125c(pad)) {
                unk_c0 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                func_ov142_0229294c();
            } else if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x13;
            }
            break;
        }
    }
    if (old != unk_c0) {
        return TRUE;
    }
    return FALSE;
}

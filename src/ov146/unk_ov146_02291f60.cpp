#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8;
void func_02115e48(void *dst, void *src, u32 n);
void func_02115e30(u32 v, void *dst, u32 n);
void func_020b87d0(void *p);
BOOL func_020b86c0(void *a, void *b, u32 c, u32 d, u32 e);
BOOL func_020b8670(void *a, void *b, u32 c, u32 d);
void func_020021fc(s32 a, s32 b, s32 c);
void func_0200402c(u32 a);
u8 *func_ov146_02292b1c();
s32 func_02133150(s32 a, s32 b);
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
    void func_ov002_02200a58(u32 v);

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


class Unk_ov146_02202640 {
public:
    virtual ~Unk_ov146_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 func_ov002_02202878();
    u32 unk_04[0x60 / 4];
};

class Unk_ov146_02202f70 {
public:
    ~Unk_ov146_02202f70();
    void func_ov002_02202e48();
    void func_ov002_02202e54();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
    u32 unk_00[0x48 / 4];
};

class Unk_ov146_02203a80 {
public:
    ~Unk_ov146_02203a80();
    u32 unk_00[0xbc / 4];
};

class Unk_ov146_0206fca8 {
public:
    Unk_ov146_0206fca8();
    ~Unk_ov146_0206fca8();
    u32 unk_00[0x40 / 4];
};

// Vtable 0x02294080
class Unk_ov146_02294080 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov146_02294080();

    void func_ov146_02292010(u32 m);
    void func_ov146_02292020(u32 m);
    BOOL func_ov146_02292030(u32 m);
    void func_ov146_02292044();
    void func_ov146_022920b4(s32 a, s32 t, s32 b);
    void func_ov146_02292188();
    void func_ov146_022921ac();
    void func_ov146_022921f8();
    BOOL func_ov146_0229221c(u32 pad);
    BOOL func_ov146_0229240c(u32 k);
    void func_ov146_022924b4();
    void func_ov146_022924dc();
    void func_ov146_02292518();
    BOOL func_ov146_02292540();
    void func_ov146_02292568();
    void func_ov146_022925f4();
    void func_ov146_02292604(s32 v, BOOL c);
    BOOL func_ov146_0229267c(s32 x, s32 y);
    BOOL func_ov146_022926c4();
    void func_ov146_02292744();
    void func_ov146_022927ac(s32 v);
    void func_ov146_022927e8();
    BOOL func_ov146_0229285c(s32 idx);

    // callees in other groups
    void func_ov146_022930a8();
    void func_ov146_022930e0();
    BOOL func_ov146_022928a8(void *p);

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ s16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3[3];
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7[4];
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[7];
    /* 0x0c3 */ u8 unk_c3[7];
    /* 0x0ca */ u8 unk_ca[0xea - 0xca];
    /* 0x0ea */ u8 unk_ea[0x20];
    /* 0x10a */ u8 unk_10a[0x20];
    /* 0x12a */ u8 unk_12a[0x13c - 0x12a];
    /* 0x13c */ u8 unk_13c[0x38a - 0x13c];
    /* 0x38a */ u8 unk_38a[0xb8a - 0x38a];
    /* 0xb8a */ u8 unk_b8a[0x800];
    /* 0x138a */ u16 unk_138a[16];
    /* 0x13aa */ u16 unk_13aa[16];
    /* 0x13ca */ u8 unk_13ca[2];
    /* 0x13cc */ Unk_ov146_02202640 unk_13cc;
    /* 0x1430 */ Unk_ov146_0206fca8 unk_1430[0x14];
    /* 0x1930 */ u8 unk_1930[0x48];
    /* 0x1978 */ Unk_ov146_02203a80 unk_1978;
    /* 0x1a34 */ Unk_ov146_02202f70 unk_1a34;
};

// ---------------------------------------------------------------------------------------------

Unk_ov146_02294080::~Unk_ov146_02294080() {}

void Unk_ov146_02294080::func_ov146_02292010(u32 m) { unk_ac = unk_ac & ~m; }

void Unk_ov146_02294080::func_ov146_02292020(u32 m) { unk_ac = unk_ac | m; }

BOOL Unk_ov146_02294080::func_ov146_02292030(u32 m) {
    if (unk_ac & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_02292044() {
    s32 i;
    for (i = 0; i < 7; i++) {
        s32 idx = unk_bc[i];
        if (idx < 0x20) {
            u32 v;
            u32 base;
            u32 sel;
            if (*((u8 *)this + idx * 0x13 + 0x13c) >= 4) {
                base = *((u8 *)this + idx + 0x10a);
                v = (u8)(base | 0x40);
                sel = 7;
            } else {
                base = *((u8 *)this + idx + 0x10a);
                v = base;
                sel = 0xe;
            }
            if (v != unk_c3[i]) {
                func_ov146_022920b4(i, base, sel);
                unk_c3[i] = v;
            }
        }
    }
}

void Unk_ov146_02294080::func_ov146_022920b4(s32 a, s32 t, s32 b) {
    u16 y = unk_138a[15];
    u8 rr = y & 0x1f;
    u8 rg = (y & 0x3e0) >> 5;
    u8 rb = (y & 0x7c00) >> 10;
    s32 n = 20 - t;
    u16 x = unk_138a[b];
    rr = ((u8)(x & 0x1f) * t + rr * n) / 20;
    rg = ((u8)((x & 0x3e0) >> 5) * t + rg * n) / 20;
    rb = ((u8)((x & 0x7c00) >> 10) * t + rb * n) / 20;
    unk_13aa[(u8)(14 - a)] = rr | (rg << 5) | (rb << 10);
    func_ov146_02292020(8);
}

void Unk_ov146_02294080::func_ov146_02292188() {
    s32 i = 0;
    u8 *p = (u8 *)this + 0x1930;
    for (; i < 2; i++) {
        func_020b87d0(p + i * 0x24);
    }
}

void Unk_ov146_02294080::func_ov146_022921ac() {
    if (unk_b6 == 0) {
        unk_b2 = 1;
    } else {
        s32 v = unk_13cc.func_ov002_02202878();
        if (v < 0x38) {
            v = 0x38;
        }
        if (v > 0xa7) {
            v = 0xa7;
        }
        unk_b2 = ((v - (0x38 - (unk_a8 & 0xf))) >> 4) + 3;
    }
}

void Unk_ov146_02294080::func_ov146_022921f8() {
    unk_b2 = 8;
    s32 r = unk_a8 & 0xf;
    if (r != 0) {
        unk_a8 = unk_a8 - r;
    }
}

BOOL Unk_ov146_02294080::func_ov146_0229221c(u32 pad) {
    u32 old = unk_b2;
    if (old >= 3 && old <= 9) {
        if (func_ov002_0220125c(pad)) {
            unk_b2 = 2;
        } else if (func_ov002_0220128c(pad)) {
            if (unk_b2 > 3) {
                unk_b2 = *(volatile u8 *)&unk_b2 - 1;
                if (unk_b2 == 3) {
                    s32 r = unk_a8 & 0xf;
                    if (r != 0) {
                        unk_a8 = unk_a8 - r;
                    }
                }
                return TRUE;
            } else if (unk_a8 >= 0x10) {
                unk_a8 = unk_a8 - 0x10;
                return TRUE;
            } else if (unk_a8 > 0) {
                unk_a8 = 0;
                return TRUE;
            }
        } else if (func_ov002_0220127c(pad)) {
            u32 cur = unk_b2;
            if ((s32)(cur - 3) + unk_ae >= (s32)unk_b6 - 1) {
                unk_b2 = 0;
            } else if (cur < 8) {
                unk_b2 = *(volatile u8 *)&unk_b2 + 1;
            } else {
                s32 t = unk_a8;
                s32 r = t & 0xf;
                if (r != 0) {
                    unk_a8 = unk_a8 + (0x10 - r);
                    return TRUE;
                } else if (t <= 0x190) {
                    unk_a8 = unk_a8 + 0x10;
                    return TRUE;
                } else {
                    unk_b2 = 0;
                }
            }
        }
    } else {
        switch (old) {
        case 0:
            if (func_ov002_0220128c(pad)) {
                if (unk_b6 != 0) {
                    func_ov146_022921f8();
                }
            } else if (func_ov002_0220125c(pad)) {
                unk_b2 = 1;
            }
            break;
        case 1:
            if (func_ov002_0220128c(pad)) {
                if (unk_b6 != 0) {
                    func_ov146_022921f8();
                } else {
                    unk_b2 = 2;
                }
            } else if (func_ov002_0220126c(pad)) {
                unk_b2 = 0;
            } else if (func_ov002_0220125c(pad)) {
                unk_b2 = 2;
            }
            break;
        case 2:
            if (func_ov002_0220127c(pad)) {
                unk_b2 = 1;
            } else if (func_ov002_0220126c(pad)) {
                func_ov146_022921ac();
            }
            break;
        }
    }
    if (old != unk_b2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov146_02294080::func_ov146_0229240c(u32 k) {
    if (k >= 3 && k <= 9) {
        s32 idx = unk_ae + k - 3;
        if (idx >= 0x20) {
            return FALSE;
        }
        u8 c = *((u8 *)this + idx + 0xea);
        if (func_ov146_0229285c(c)) {
            unk_bb = c;
            func_0200402c(0x29);
            func_ov146_02292020(0x10);
            func_ov146_02292020(0x20);
        }
        return FALSE;
    }
    switch (k) {
    case 2:
        unk_1a34.func_ov002_02202f00();
        unk_1a34.func_ov002_02202e48();
        func_ov002_02200a58(4);
        return TRUE;
    case 1:
        if (unk_b0 == 8) {
            func_ov146_022930e0();
            return TRUE;
        }
        return FALSE;
    case 0:
        func_ov146_022930a8();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_022924b4() {
    unk_98 = func_02133150(unk_a4 * 0x50, 0x1a0);
    func_ov146_02292518();
}

void Unk_ov146_02294080::func_ov146_022924dc() {
    s32 v = func_02133150(unk_98 * 0x1a0, 0x50);
    if (v < 0) {
        v = 0;
    }
    if (v > 0x1a0) {
        v = 0x1a0;
    }
    func_ov146_022927ac(v);
    unk_a8 = v;
}

void Unk_ov146_02294080::func_ov146_02292518() {
    func_0208dae8(&unk_1a34, 0x62, unk_94 + (unk_98 - 0x28));
}

BOOL Unk_ov146_02294080::func_ov146_02292540() {
    if (func_0208d9a8(&unk_1a34)) {
        unk_1a34.func_ov002_02202f0c();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_02292568() {
    s32 old = unk_98;
    u32 k = data_021f47d8;
    if (k & 0x40) {
        unk_98 = unk_98 - 4;
        if (unk_98 < 0) {
            unk_98 = 0;
        }
    } else if (k & 0x80) {
        unk_98 = unk_98 + 4;
        if (unk_98 > 0x50) {
            unk_98 = 0x50;
        }
    }
    if (old != unk_98) {
        func_ov146_022924dc();
        func_ov146_02292518();
        unk_1a34.func_ov002_02202e54();
    }
}

void Unk_ov146_02294080::func_ov146_022925f4() { unk_1a34.func_ov002_02202ef4(); }

void Unk_ov146_02294080::func_ov146_02292604(s32 v, BOOL c) {
    if (c) {
        v = v - 0x40;
    } else {
        v = v + unk_9c;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 0x50) {
        v = 0x50;
    }
    if (c) {
        func_020e761c(&unk_98, v, 8);
    } else {
        unk_98 = v;
    }
    func_ov146_022924dc();
    func_ov146_02292518();
    s32 d = unk_a0 - unk_98;
    if (d >= 4 || d <= -4) {
        unk_1a34.func_ov002_02202e54();
        unk_a0 = unk_98;
    }
}

BOOL Unk_ov146_02294080::func_ov146_0229267c(s32 x, s32 y) {
    if (unk_1a34.func_ov002_02202f18(x, y)) {
        unk_9c = unk_98 - y;
        unk_1a34.func_ov002_02202f00();
        unk_a0 = unk_98;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov146_02294080::func_ov146_022926c4() {
    if (unk_a4 != unk_a8) {
        if (unk_a4 > unk_a8) {
            unk_a4 = unk_a4 - 6;
            if (unk_a4 < unk_a8) {
                unk_a4 = unk_a8;
            }
        } else {
            unk_a4 = unk_a4 + 6;
            if (unk_a4 > unk_a8) {
                unk_a4 = unk_a8;
            }
        }
        func_ov146_022927ac(unk_a4);
        func_ov146_022924b4();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_02292744() {
    volatile u16 z = 0x10;
    func_02115e30(z, (u8 *)this + 0xb8a, 0x800);
    for (s32 i = 0; i < 7; i++) {
        s32 v = unk_ae + i;
        s32 m = v % 7;
        func_02115e48((u8 *)this + 0x38a + ((m * 2 + 7) << 6), (u8 *)this + 0xb8a + ((v & 0xf) << 7), 0x80);
    }
    func_ov146_02292020(2);
}

void Unk_ov146_02294080::func_ov146_022927ac(s32 v) {
    unk_a4 = v;
    func_020021fc(4, 0, unk_a4 - 0x38);
    unk_ae = v >> 4;
    func_ov146_02292744();
    func_ov146_02292020(4);
}

void Unk_ov146_02294080::func_ov146_022927e8() {
    if (func_ov146_02292030(2)) {
        if (func_020b86c0((u8 *)this + 0x1930, (u8 *)this + 0xb8a, 4, 0x800, 0)) {
            func_ov146_02292010(2);
        }
    }
    if (func_ov146_02292030(8)) {
        if (func_020b8670((u8 *)this + 0x1954, (u8 *)this + 0x13aa, 4, 7)) {
            func_ov146_02292010(8);
        }
    }
}

BOOL Unk_ov146_02294080::func_ov146_0229285c(s32 idx) {
    if (idx >= 0x20) {
        return FALSE;
    }
    u8 *g = func_ov146_02292b1c();
    if (func_ov146_022928a8(g + 0x180 + idx * 0x13)) {
        u8 *e = g + idx * 0x13;
        if (e[0x192] < 4) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

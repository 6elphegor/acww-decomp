#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
s32 func_0200402c(s32 a);
u32 func_02076f78();
void *func_020ed174(void *p);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206fb48(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206f9fc(void *p, s32 a);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

class Unk_ov113_02293640;

class Unk_0206fca8 {
public:
    ~Unk_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x2968 sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    s32 func_ov002_022028c8();
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);

    u8 unk_4b[0x64 - 0x4b];
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

// Vtable 0x02293640
class Unk_ov113_02293640 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov113_02293640();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    BOOL func_ov113_02292004(void *pad);
    void func_ov113_0229226c();
    void func_ov113_0229228c();
    void func_ov113_022922ac();
    void func_ov113_022922cc();
    void func_ov113_02292340();
    s32 func_ov113_02292364();
    s32 func_ov113_02292384();
    s32 func_ov113_022923c8();
    void func_ov113_02292404();
    void func_ov113_02292440();
    BOOL func_ov113_02292464();
    void func_ov113_02292604(s32 flag);
    BOOL func_ov113_02292690();
    void func_ov113_02292744(u32 mask);
    void func_ov113_02292754(u32 mask);
    BOOL func_ov113_02292764(u32 mask);
    void func_ov113_02292778(s32 idx, s32 a, s32 b, s32 c, s32 d);
    void func_ov113_022927b0();
    void func_ov113_02292854(void *pad);

    // out-of-range callees (declarations only)
    void func_ov113_02292880(void *pad);
    void func_ov113_022928f8(void *pad);
    void func_ov113_0229297c(void *pad);
    void func_ov113_02292a5c(void *pad);

    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ volatile u8 unk_9a;
    /* 0x9b */ volatile u8 unk_9b;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0[0x2648];
    /* 0x26e8 */ Unk_0206fca8 unk_26e8[4];
    /* 0x27e8 */ Unk_0206fca8 unk_27e8[6];
    /* 0x2968 */ Unk_ov002_02204630 unk_2968;
};

// ---------------------------------------------------------------------------------------------

Unk_ov113_02293640::~Unk_ov113_02293640() {}

BOOL Unk_ov113_02293640::func_ov113_02292004(void *pad) {
    u32 st = unk_9b;
    if (st <= 3) {
        if (func_ov002_0220126c(pad)) {
            if (unk_9b != 0) {
                unk_9b = unk_9b - 1;
            } else {
                unk_9b = 3;
                func_ov113_02292754(0x10);
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_9b < 3) {
                unk_9b = unk_9b + 1;
            } else {
                unk_9b = 0;
                func_ov113_02292754(0x20);
            }
        } else if (func_ov002_0220128c(pad)) {
            s32 t = unk_9e + 0x44;
            s32 v = unk_2968.func_ov002_022028c8() - t;
            if (v < 0) {
                v = 0;
            }
            s32 i = v >> 3;
            s32 n = unk_9d;
            if (i >= n) {
                i = n - 1;
            }
            unk_9b = i + 6;
        }
    } else if (st == 5) {
        if (func_ov002_0220127c(pad)) {
            unk_9b = 6;
        } else if (func_ov002_0220126c(pad)) {
            unk_9b = 4;
            func_ov113_02292754(0x10);
        } else if (func_ov002_0220125c(pad)) {
            unk_9b = 4;
        }
    } else if (st == 4) {
        if (func_ov002_0220127c(pad)) {
            unk_9b = unk_9d + 5;
        } else if (func_ov002_0220126c(pad)) {
            unk_9b = 5;
        } else if (func_ov002_0220125c(pad)) {
            unk_9b = 5;
            func_ov113_02292754(0x20);
        }
    } else if (st <= 0x14) {
        if (func_ov002_0220128c(pad)) {
            if (func_ov002_0220125c(pad) != 0 || (unk_2968.func_ov002_022028c8() > 0x80 && func_ov002_0220126c(pad) == 0)) {
                unk_9b = 4;
            } else {
                unk_9b = 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (func_ov002_0220125c(pad) != 0 || (unk_2968.func_ov002_022028c8() > 0x80 && func_ov002_0220126c(pad) == 0)) {
                unk_9b = 2;
            } else {
                unk_9b = 1;
            }
        } else if (func_ov002_0220126c(pad)) {
            if (unk_9b > 6) {
                unk_9b = unk_9b - 1;
                func_ov113_02292754(0x80);
                func_0200402c(0xb);
            } else {
                unk_9b = 5;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_9b + 1 < unk_9d + 6) {
                unk_9b = unk_9b + 1;
                func_ov113_02292754(0x80);
                func_0200402c(0xb);
            } else {
                unk_9b = 4;
            }
        }
    }
    if (unk_9b != st) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_0229226c() {
    unk_2968.func_ov002_02202a78();
    unk_2968.vfunc_0c();
}

void Unk_ov113_02293640::func_ov113_0229228c() {
    unk_2968.func_ov002_02202af0();
    func_ov002_02200a58(4);
}

void Unk_ov113_02293640::func_ov113_022922ac() {
    unk_2968.func_ov002_02202b68();
    func_ov002_02200a58(3);
}

void Unk_ov113_02293640::func_ov113_022922cc() {
    if (func_ov113_02292764(0x80)) {
        s32 a = func_ov113_02292384();
        s32 b = func_ov113_02292364();
        unk_2968.func_ov002_02202a40(a, b);
        func_ov113_02292744(0x80);
    } else {
        s32 a = func_ov113_02292384();
        s32 b = func_ov113_02292364();
        unk_2968.func_ov002_022029e8(a, b, 4, 1);
        unk_9c = unk_8d;
        func_ov002_02200a58(2);
    }
}

void Unk_ov113_02293640::func_ov113_02292340() {
    unk_2968.func_ov002_02202d00(0);
    unk_2968.vfunc_0c();
}

s32 Unk_ov113_02293640::func_ov113_02292364() {
    u32 st = unk_9b;
    if (st <= 3) {
        return 0xaa;
    }
    if (st <= 5) {
        return 0x56;
    }
    if (st <= 0x14) {
        return 0x98;
    }
    return 0x60;
}

s32 Unk_ov113_02293640::func_ov113_02292384() {
    s32 r = func_ov113_022923c8();
    if (func_ov113_02292764(0x10)) {
        r -= 0x100;
    } else if (func_ov113_02292764(0x20)) {
        r += 0x100;
    }
    func_ov113_02292744(0x30);
    return r;
}

s32 Unk_ov113_02293640::func_ov113_022923c8() {
    u32 st = unk_9b;
    if (st <= 3) {
        return st * 0x30 + 0x47;
    }
    if (st == 5) {
        return 0x10;
    }
    if (st == 4) {
        return 0xf0;
    }
    if (st <= 0x14) {
        return unk_9e + 0x48 + (st - 6) * 8;
    }
    return 0x80;
}

void Unk_ov113_02293640::func_ov113_02292404() {
    s32 a = func_ov113_02292384();
    s32 b = func_ov113_02292364();
    unk_2968.func_ov002_02202a40(a, b);
    unk_2968.func_ov002_02202d00(1);
    func_ov113_0229226c();
}

void Unk_ov113_02293640::func_ov113_02292440() {
    unk_9d = func_02076f78();
    unk_9e = (0xf - unk_9d) * 4;
}

BOOL Unk_ov113_02293640::func_ov113_02292464() {
    func_ov113_02292440();
    u32 st = unk_9b;
    switch (st) {
    case 2:
        func_0200402c(0x29);
    case 3: {
        func_ov113_02292604(1);
        unk_8c = 3;
        func_ov002_02200a60(1);
        void *r = func_020ed174(this);
        if (unk_9b == 3) {
            func_ov092_02291ce4(r, 0x43, 0);
            func_0200402c(0x12);
        } else {
            func_ov092_02291ce4(r, 1, 1);
        }
        return TRUE;
    }
    case 4:
        if (unk_9d > unk_9a + 1) {
            unk_9a = unk_9a + 1;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    case 5:
        if (unk_9a != 0) {
            unk_9a = unk_9a - 1;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    case 1: {
        s32 t = unk_9d - 1;
        if (unk_9a != t) {
            unk_9a = t;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    }
    case 0:
        if (unk_9a != 0) {
            unk_9a = 0;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    }
    if (st >= 6 && st <= 0x14) {
        u8 idx = (u8)(st - 6);
        u32 cur = unk_9a;
        if (idx == cur) {
            return FALSE;
        }
        if (cur < idx) {
            func_ov113_02292754(0x40);
        } else {
            func_ov113_02292744(0x40);
        }
        unk_9a = idx;
        unk_8c = 5;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_02292604(s32 flag) {
    u32 st = unk_9b;
    switch (st) {
    case 0:
    case 1:
    case 2:
    case 3: {
        s32 e = flag ? 0xe : 0xd;
        s32 x = st * 6 + 4;
        func_0206ee80(&unk_a0, x, 0x14, x + 5, 0x16, e);
        func_ov113_02292754(1);
        break;
    }
    default:
        if (st == 4) {
            if (flag) {
                func_ov113_02292754(2);
            } else {
                func_ov113_02292744(2);
            }
        } else {
            if (flag) {
                func_ov113_02292754(4);
            } else {
                func_ov113_02292744(4);
            }
        }
        break;
    }
}

BOOL Unk_ov113_02293640::func_ov113_02292690() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    if (y >= 0x54 && y <= 0x70) {
        if (x <= 0x18) {
            unk_9b = 5;
            return TRUE;
        }
        if (x < 0xe8) {
            goto fail;
        }
        unk_9b = 4;
        return TRUE;
    }
    if (y >= 0xa4 && y <= 0xb4) {
        if (x < 0x20) {
            return FALSE;
        }
        if (x < 0x50) {
            unk_9b = 0;
            return TRUE;
        }
        if (x < 0x80) {
            unk_9b = 1;
            return TRUE;
        }
        if (x < 0xb0) {
            unk_9b = 2;
            return TRUE;
        }
        if (x >= 0xe0) {
            goto fail;
        }
        unk_9b = 3;
        return TRUE;
    }
    if (y >= 0x92 && y <= 0x9e) {
        s32 t = unk_9e + 0x44;
        if (x < t) {
            goto fail;
        }
        u32 idx = (u32)((x - t) << 21) >> 24;
        if (idx >= unk_9d) {
            return FALSE;
        }
        unk_9b = idx + 6;
        return TRUE;
    }
fail:
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_02292778(s32 idx, s32 a, s32 b, s32 c, s32 d) {
    Unk_0206fca8 *o = &unk_26e8[idx];
    func_0206fb48(o, 2, a, b, 0xf, 0xa, d);
    func_0206fab4(o, c, 0);
}

void Unk_ov113_02293640::func_ov113_022927b0() {
    func_0206f9fc(&unk_26e8[0], 0x83);
    func_ov113_02292778(0, 0x101, 4, 1, 0);
    func_0206f9fc(&unk_26e8[1], 0x82);
    func_ov113_02292778(1, 0x105, 4, 1, 0);
    func_0206f9fc(&unk_26e8[2], 0x84);
    func_ov113_02292778(2, 0x109, 4, 1, 0);
    func_0206f9fc(&unk_26e8[3], 0x88);
    func_ov113_02292778(3, 0x10d, 4, 1, 0);
}

void Unk_ov113_02293640::func_ov113_02292854(void *pad) {
    func_ov113_0229297c(pad);
    func_ov113_022928f8(pad);
    func_ov113_02292a5c(pad);
    func_ov113_02292880(pad);
}

void Unk_ov113_02293640::func_ov113_02292744(u32 mask) { unk_98 = unk_98 & ~mask; }

void Unk_ov113_02293640::func_ov113_02292754(u32 mask) { unk_98 = unk_98 | mask; }

BOOL Unk_ov113_02293640::func_ov113_02292764(u32 mask) {
    if (unk_98 & mask) {
        return TRUE;
    }
    return FALSE;
}

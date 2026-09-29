// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Secondary base at +0xec (vtable 0x020ddcf0); the derived class overrides three extra slots, so they are declared here.
class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();

    u8 pad_20[0x1c];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

// Member at +0x134 (ctor func_020b6a94, dtor func_020b6a84).
class Unk_ov004_0224bda0_Mem {
public:
    Unk_ov004_0224bda0_Mem();
    ~Unk_ov004_0224bda0_Mem();
    u8 pad[0x1c];
};

struct Unk_ov004_022146ec_Bits {
    u16 a : 2;
    u16 b : 6;
    u16 c : 8;
};

struct Unk_ov004_022146ec_Actor {
    u8 pad_00[0x5c];
    s32 pos[3];
    u8 pad_68[0x8e - 0x68];
    u16 ang;
};

struct Unk_ov004_022146ec_Vec {
    s32 x, y, z;
    Unk_ov004_022146ec_Vec(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

class Unk_ov004_0224bda0 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224bda0();
    virtual ~Unk_ov004_0224bda0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();

    BOOL func_ov004_02214350();
    BOOL func_ov004_02214608();
    BOOL func_ov004_02214494();
    void func_ov004_02213f34(s32 a);
    void func_ov004_02213ea8();
    void func_ov004_022145bc();

    /* 0x130 */ u32 pad_130;
    /* 0x134 */ Unk_ov004_0224bda0_Mem unk_134;
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 pad_151[3];
    /* 0x154 */ u32 unk_154;
    /* 0x158 */ u32 unk_158;
    /* 0x15c */ s16 unk_15c;
    /* 0x15e */ u16 pad_15e;
    /* 0x160 */ u32 unk_160;
    /* 0x164 */ u32 unk_164;
    /* 0x168 */ u32 pad_168;
};

extern "C" {
extern u8 data_ov004_022502c8;
extern u32 data_ov004_0225033c[];
extern u32 data_ov004_022502d4;
extern s16 data_ov004_0224bd3c;
extern u32 data_ov004_022502e8;
extern u32 data_ov004_022502f8;
extern s16 data_02135f44[];
struct Unk_ov004_022146ec_Sing {
    u8 pad_00[0x64];
    u32 unk_64;
};
extern Unk_ov004_022146ec_Sing *data_020cbb18;
extern u16 data_020c6cc8;
extern u8 data_021f4880[];
extern u32 data_020c6d1c;

void func_020e8558(u32);
u32 func_020b50b4(void);
s32 func_020b50e8(void);
s32 func_020b68a8(u32, void *, void *, u32, u32, u32);
Unk_ov004_022146ec_Actor *func_020951ec(u32);
void func_01ffd070(void *, void *, void *);
void func_0203e624(void *, u32);
}

// ---- Unk_ov004_0224bda0 ----

extern "C" void func_ov004_0221465c(void) {
    if (data_ov004_022502c8 == 0) {
        u32 i;
        for (i = 0; i < 0x20; i++) {
            data_ov004_0225033c[i] = 0;
        }
    }
}

BOOL Unk_ov004_0224bda0::vfunc_0c() {
    func_ov004_022145bc();
    if (unk_160 != 0) {
        func_020e8558(unk_160);
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224bda0::vfunc_18() {
    func_ov004_02213ea8();
    if (func_ov004_02214350() == 0) {
        func_020b68a8(func_020b50b4(), &unk_134, unk_5c, 0xc00, 0xe, unk_150);
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::vfunc_00() {
    Unk_ov004_022146ec_Bits l;
    s32 v[3];
    s32 out[3];
    BOOL r;
    func_ov004_0221465c();
    unk_158 = data_ov004_022502d4;
    unk_15c = data_ov004_0224bd3c;
    unk_164 = data_ov004_022502e8;
    unk_154 = data_ov004_022502f8;
    if (func_ov004_02214608() != 0) {
        if (func_ov004_02214350() != 0) {
            Unk_ov004_022146ec_Actor *o = func_020951ec(4);
            if (o != 0) {
                s32 idx = (o->ang >> 4) * 2;
                v[0] = data_02135f44[idx];
                v[1] = 0;
                v[2] = data_02135f44[idx + 1];
                func_01ffd070(out, o->pos, v);
                unk_5c[0] = out[0];
                unk_5c[1] = out[1];
                unk_5c[2] = out[2];
            }
        }
        l.a = (u16)data_020cbb18->unk_64;
        *(u16 *)&l = (*(u16 *)&l & ~0xfc) | ((func_020b50e8() & 0x3f) << 2);
        l.c = unk_150;
        func_0203e624(this, *(u16 *)&l);
        func_ov004_02213f34(0);
        r = func_ov004_02214494();
    } else {
        r = FALSE;
    }
    return r;
}

Unk_ov004_0224bda0::~Unk_ov004_0224bda0() {
}

Unk_ov004_0224bda0::Unk_ov004_0224bda0() {
}

extern "C" Unk_ov004_0224bda0 *func_ov004_022148a0(void) {
    return new Unk_ov004_0224bda0;
}

// ---- Unk_ov004_0224c034 (menu with secondary base Unk_ov004_0224bfa4 at +0x89c) ----

class Unk_020d8938 {
public:
    virtual ~Unk_020d8938();
};

class Unk_ov004_0224bfa4 : public Unk_020d8938 {
public:
    virtual ~Unk_ov004_0224bfa4();
    u8 pad_04[0x3c - 4];
};

struct Unk_ov004_02214a4c_Obj {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 pad_08[0xc];
    /* 0x14 */ s32 unk_14;
};

class Unk_ov004_0202dd2c : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_ov004_0202dd2c();

    /* 0x004 */ u8 pad_004[0x5c - 4];
    /* 0x05c */ s32 unk_5c[3];
    /* 0x068 */ u8 pad_068[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[0x350 - 0x90];
    /* 0x350 */ u8 f_350[0x3b0 - 0x350];
    /* 0x3b0 */ u8 f_3b0[0x508 - 0x3b0];
    /* 0x508 */ u8 unk_508;
    /* 0x509 */ u8 pad_509[0x564 - 0x509];
    /* 0x564 */ u8 f_564[0x618 - 0x564];
    /* 0x618 */ u8 f_618[0x894 - 0x618];
    /* 0x894 */ s32 unk_894;
    /* 0x898 */ u8 unk_898;
    /* 0x899 */ u8 pad_899[3];
};

class Unk_ov004_0224c034 : public Unk_ov004_0202dd2c, public Unk_ov004_0224bfa4 {
public:
    virtual ~Unk_ov004_0224c034();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void func_ov004_02214a04();
    BOOL func_ov004_02214a38();
    void func_ov004_02214a3c();
    BOOL func_ov004_02214a40();
    void func_ov004_02214a44();
    BOOL func_ov004_02214a48();
    void func_ov004_02214a4c();
    BOOL func_ov004_02214a80();
    void func_ov004_02214a90();
    BOOL func_ov004_02214ab0();
    void func_ov004_02214ab4();
    BOOL func_ov004_02214be8();
    void func_ov004_02214c28();
    BOOL func_ov004_02214c34();
    void func_ov004_02214c38();
    BOOL func_ov004_02214c58();
    void func_ov004_02214c5c();
    BOOL func_ov004_02214c68();
    void func_ov004_02214c9c();
    BOOL func_ov004_02214ca0();
    void func_ov004_02214cd4();
    BOOL func_ov004_02214d50();
    void func_ov004_02214d60();
    BOOL func_ov004_02214dc0();
    void func_ov004_02214dd0();
    BOOL func_ov004_02214dd4();
    void func_ov004_02214e58();

    void func_ov004_02215208(s32 a);

    /* 0x8d8 */ Unk_ov004_02214a4c_Obj *unk_8d8;
    /* 0x8dc */ u8 pad_8dc[0xa4a - 0x8dc];
    /* 0xa4a */ u8 unk_a4a;
    /* 0xa4b */ u8 unk_a4b;
    /* 0xa4c */ s16 unk_a4c;
    /* 0xa4e */ u16 unk_a4e;
    /* 0xa50 */ s32 unk_a50[3];
    /* 0xa5c */ s32 unk_a5c[3];
};

struct Unk_ov004_02214ab4_Vec {
    s32 x, y, z;
};

extern "C" {
Unk_ov004_02214ab4_Vec *func_020947f0(u32);
s32 func_0201bd20(void *, u32);
s32 func_020197a8(void *);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201a9ec(void *, void *);
s32 func_02002bdc(void *, void *);
s32 func_020e780c(s32, s32);
void func_020141b4(void *, u32, s32, u32);
void *func_02095204(u32);
s32 func_0201bcbc(void *, void *);
void func_02019638(void *, u32, u32, u32);
void func_02019614(void *, u32, u32);
Unk_ov004_022146ec_Actor *func_ov004_02216c84(void);
s32 func_020e7b98(s32, s32);
s32 func_0201a6c0(void *, u32, u32, void *, void *, u32, u32, u32);
s32 func_02063b8c(u32);
u16 func_ov004_02216ba4(void *, void *, s32);
s32 func_02019790(void *);
s32 func_0201bb3c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e9650(void *, void *);
void func_02067a84(void *, void *, u32);
s32 func_0206ea84(void *);
s32 func_0206ead4(s32, u32);
void func_ov004_02215e2c(void);
s32 func_0203d67c(void *);
s32 func_0203d704(void *, u32);
}

Unk_ov004_0224c034::~Unk_ov004_0224c034() {
}

BOOL Unk_ov004_0224c034::vfunc_7c() {
    if (unk_898 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c034::vfunc_80() {
    unk_898 = 1;
}

void Unk_ov004_0224c034::func_ov004_02214a04() {
    u8 buf[1];
    buf[0] = func_02063b8c(2) + 0x11;
    func_02067a84(unk_8d8, buf, 0);
    func_ov004_02215208(6);
}

BOOL Unk_ov004_0224c034::func_ov004_02214a38() { return TRUE; }
void Unk_ov004_0224c034::func_ov004_02214a3c() {}
BOOL Unk_ov004_0224c034::func_ov004_02214a40() { return TRUE; }
void Unk_ov004_0224c034::func_ov004_02214a44() {}
BOOL Unk_ov004_0224c034::func_ov004_02214a48() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214a4c() {
    if (unk_8d8->unk_04 == 5) {
        if (func_0206ead4(func_0206ea84((void *)func_ov004_02215e2c), 0xd) != 0) {
            func_ov004_02215208(0xb);
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214a80() {
    unk_8d8->unk_14 = 1;
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214a90() {
    Unk_ov004_02214a4c_Obj *o = unk_8d8;
    if (o != 0) {
        if (o->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214ab0() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214ab4() {
    Unk_ov004_02214ab4_Vec a, b;
    s32 v, r4, r0;
    Unk_ov004_02214ab4_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    b.x = a.x;
    b.y = a.y;
    b.z = a.z;
    v = func_0201bd20(this, 4);
    if (v > 0x4000) {
        if (func_020197a8(f_564) == 1) {
            func_020196b4(f_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(f_564) == 2) {
            func_020196b4(f_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(f_350, &b);
    if (unk_a4a != 0) {
        unk_a4a--;
    }
    r4 = func_02002bdc(unk_5c, &a);
    r0 = func_020e780c(unk_8e, r4);
    if (v <= 0x3000 || unk_a4a == 0) {
        func_020141b4(f_618, 0, r4, 0);
        func_ov004_02215208(9);
    } else if (r0 > 0x2000) {
        func_020196b4(f_564, 4, 2, b.x, b.z, 0, r4, 0, 0, data_020c6cc8, 0);
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214be8() {
    unk_a4a = 0x32;
    func_020196b4(f_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214c28() {
    func_0203d704(this, 0);
}

BOOL Unk_ov004_0224c034::func_ov004_02214c34() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214c38() {
    Unk_ov004_02214a4c_Obj *o = unk_8d8;
    if (o != 0) {
        if (o->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214c58() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214c5c() {
    func_ov004_02215208(6);
}

BOOL Unk_ov004_0224c034::func_ov004_02214c68() {
    BOOL r;
    void *o = func_02095204(4);
    if (o != 0) {
        func_020141b4(f_618, 0, func_0201bcbc(this, o), 0);
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}
void Unk_ov004_0224c034::func_ov004_02214c9c() {}
BOOL Unk_ov004_0224c034::func_ov004_02214ca0() {
    if ((u32)(unk_894 - 1) <= 2) {
        func_02019638(f_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}
void Unk_ov004_0224c034::func_ov004_02214cd4() {
    if (unk_a4b != 0) {
        unk_a4b--;
    }
    switch (unk_a4b) {
    case 0x28:
        if (func_02063b8c(2) == 0) {
            func_02019638(f_564, 1, 0xa, data_020c6cc8);
        } else {
            func_02019638(f_564, 1, 0x17, data_020c6cc8);
        }
        break;
    case 1:
        func_02019638(f_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        func_ov004_02215208(0);
        break;
    }
}
BOOL Unk_ov004_0224c034::func_ov004_02214d50() {
    unk_a4b = 0x32;
    return TRUE;
}
void Unk_ov004_0224c034::func_ov004_02214d60() {
    if (unk_a4b != 0) {
        unk_a4b--;
    }
    switch (unk_a4b) {
    case 0x14:
        func_02019638(f_564, 1, 3, data_020c6cc8);
        break;
    case 1:
        func_02019638(f_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        func_ov004_02215208(0);
        break;
    }
}
BOOL Unk_ov004_0224c034::func_ov004_02214dc0() {
    unk_a4b = 0x1e;
    return TRUE;
}
void Unk_ov004_0224c034::func_ov004_02214dd0() {}
BOOL Unk_ov004_0224c034::func_ov004_02214dd4() {
    u8 *m = f_564;
    Unk_ov004_022146ec_Actor *o = func_ov004_02216c84();
    if (o != 0) {
        s32 dx = o->pos[0] - unk_5c[0];
        s32 dz = o->pos[2] - unk_5c[2];
        s32 ang = func_020e7b98(dx, dz);
        func_020196b4(m, 3, 1, 0, 0, 0, ang, 0, 0, data_020c6cc8, 0);
        func_0201a6c0(f_3b0, 2, 0, o, data_021f4880, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}
void Unk_ov004_0224c034::func_ov004_02214e58() {
    s32 c[3];
    u8 *m = f_564;
    if (unk_508 != 0 && func_020197a8(m) == 1) {
        func_020196b4(m, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        return;
    }
    if (func_020197a8(f_564) == 0) {
        if (unk_a4e != 0) {
            unk_a4e--;
        }
        if (unk_a4e == 0) {
            unk_a4c = func_ov004_02216ba4(unk_a5c, unk_5c, unk_8e);
            unk_a50[0] = unk_a5c[0];
            unk_a50[1] = unk_a5c[1];
            unk_a50[2] = unk_a5c[2];
            if (unk_a4c != unk_8e) {
                if (func_020196b4(f_564, 3, 1, 0, 0, 0, unk_a4c, 0, 0, data_020c6cc8, 0) != 0) {
                    unk_a4e = func_02063b8c(0x46) + 0x14;
                }
            } else {
                if (func_020196b4(f_564, 1, 1, unk_a5c[0], unk_a5c[2], 0, 0, 0, 0, data_020c6cc8, 0) != 0) {
                    unk_a4e = func_02063b8c(0x50) + 0x14;
                }
            }
        } else {
            if (func_02019790(f_564) != 0) {
                func_02019614(f_564, 1, data_020c6cc8);
            }
        }
    } else if (func_020197a8(f_564) == 3) {
        if (func_02019790(f_564) != 0) {
            func_020196b4(f_564, 1, 1, unk_a5c[0], unk_a5c[2], 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (func_020197a8(f_564) == 1) {
        switch (func_0201bb3c(this, c)) {
        case 1:
            func_02019614(f_564, 1, data_020c6cc8);
            break;
        case 2:
            unk_a50[0] = c[0];
            unk_a50[1] = c[1];
            unk_a50[2] = c[2];
            func_0201a9ec(f_350, unk_a50);
            break;
        default:
            if (func_020e96ec(unk_a50, unk_a5c) != 0) {
                unk_a50[0] = unk_a5c[0];
                unk_a50[1] = unk_a5c[1];
                unk_a50[2] = unk_a5c[2];
                func_0201a9ec(f_350, unk_a5c);
            } else if (func_020e9650(unk_a5c, unk_5c) < 0x200) {
                func_02019614(f_564, 1, data_020c6cc8);
            }
            break;
        }
    }
}

Unk_ov004_0224bfa4::~Unk_ov004_0224bfa4() {
}

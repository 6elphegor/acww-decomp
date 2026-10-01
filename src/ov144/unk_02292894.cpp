#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8;
extern u8 data_020e416c;

void func_0200402c(s32 a);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_0206267c(void *p);
void func_02062564(void *p, u16 *v);
void func_0206260c(void *p);
void func_020a7c3c(void *p);
void func_020a7bd8(void *p, void *q);
void func_0206fb9c(void *obj, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *obj, s32 a, s32 b);
void func_0206fc44(void *obj);
u16 *func_020601cc();
s32 func_020600f4(u32 id);
void func_0208dae8(void *p, s32 a, s32 b);
s32 func_0208d9a8(void *p);
void func_0208d63c(void *p);
void func_020e761c(void *p, s32 v, s32 n);
s32 func_02098ffc();
void func_0209909c(u16 *p, s32 a, s32 b);
void func_02060044(u32 v);
void func_0206ecf8(s32 v);
void func_0206e720(u32 v);
s32 func_0206ef0c();
s32 func_02133150(s32 a, s32 b);

s32 func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202ca0(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202d00(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030ac(void *p, s32 a);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202f0c(void *p);
void func_ov002_02202e54(void *p);
s32 func_ov002_02202ef4(void *p);
s32 func_ov002_02202f18(void *p);
void func_ov002_02202f00(void *p);
void func_ov002_02204394(void *p, void *q, s32 a, s32 b);
void func_ov002_02200980(void *p);
void func_ov004_02234cd8();
}

// polymorphic sub-object at +0xc4 (vtable slots: D1, D0, vfunc_08, vfunc_0c)
class Unk_ov144_sub_02202640 {
public:
    virtual ~Unk_ov144_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// Vtable 0x022044e4 (declaration copied from ov143_000; sub-objects opaque)
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
    void func_ov002_0220085c(u32 a, u32 b);

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

static inline BOOL IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

// Vtable 0x02293db8 (music / stereo menu)
class Unk_ov144_02293db8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov144_02293db8();

    // group ov144_000 (declarations only)
    void func_ov144_02292020(u32 mask);
    void func_ov144_02292030(u32 mask);
    BOOL func_ov144_02292040(u32 mask);
    void func_ov144_02292054(s32 idx);
    void func_ov144_022925bc(u32 v);
    void func_ov144_022925ec(u32 v);
    void func_ov144_0229261c(u32 v);
    void func_ov144_0229253c();
    void func_ov144_022926fc();
    void func_ov144_0229282c(s32 v);

    // group ov144_001
    void func_ov144_02292894();
    void func_ov144_02292904();
    void func_ov144_02292a00();
    void *func_ov144_02292a2c();
    void func_ov144_02292a64();
    void func_ov144_02292a88();
    void func_ov144_02292aa0();
    void func_ov144_02292abc(s32 a, s32 b);
    void func_ov144_02292aec();
    void func_ov144_02292b3c();
    s32 func_ov144_02292b58();
    s32 func_ov144_02292bc8();
    void func_ov144_02292c24();
    void func_ov144_02292c5c();
    void func_ov144_02292ce8();
    void func_ov144_02292d38();
    void func_ov144_02292d64();
    void func_ov144_02292d9c();
    BOOL func_ov144_02292dc4();
    void func_ov144_02292dec();
    s32 func_ov144_02292e78();
    void func_ov144_02292e88(s32 x, s32 flag);
    BOOL func_ov144_02292f00(s32 a, s32 b);
    void func_ov144_02292f48(u8 v);
    void func_ov144_02292f7c();
    BOOL func_ov144_02292fb4();
    void func_ov144_02293074();
    BOOL func_ov144_022930c8();
    void func_ov144_02293144();
    void func_ov144_02293174();
    void func_ov144_02293194();
    void func_ov144_022931d0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u8 unk_98[4];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u16 unk_b4;
    /* 0xb6 */ s16 unk_b6;
    /* 0xb8 */ s16 unk_b8;
    /* 0xba */ s16 unk_ba;
    /* 0xbc */ s16 unk_bc;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ volatile u8 unk_bf;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2[2];
    /* 0xc4 */ Unk_ov144_sub_02202640 unk_c4;
    /* 0x128 */ u8 unk_128[0x48];
    /* 0x170 */ u8 unk_170[0x164];
    /* 0x2d4 */ u8 unk_2d4[9][0x40];
    /* 0x514 */ u8 unk_514[0x24];
    /* 0x538 */ u8 unk_538[0x24];
    /* 0x55c */ u8 unk_55c[0x108];
    /* 0x664 */ u16 unk_664[0x46];
    /* 0x6f0 */ u16 unk_6f0[9];
    /* 0x702 */ u8 unk_702[0x1000];
    /* 0x1702 */ u8 unk_1702[0x800];
};

void Unk_ov144_02293db8::func_ov144_02292894() {
    if (func_ov144_02292040(8)) {
        func_ov144_022926fc();
    }
    if (func_ov144_02292040(2)) {
        if (func_020b86c0(&unk_538, &unk_1702, 6, 0x800, 0)) {
            func_ov144_02292020(2);
        }
    }
    if (func_ov144_02292040(4)) {
        func_ov144_02292020(4);
        func_ov144_02292904();
    }
}

void Unk_ov144_02293db8::func_ov144_02292904() {
    u32 buf[10];
    u16 t;
    s32 i;
    void *obj;
    s32 cnt;
    s32 idx;
    u16 *p;
    s32 slot;
    func_0206267c(buf);
    idx = unk_b6;
    if (idx < 0) {
        p = unk_664;
    } else {
        p = &unk_664[idx];
    }
    slot = (idx + 9) % 9;
    cnt = unk_b8;
    for (i = 0; i < 9; i++) {
        obj = NULL;
        if (idx < 0 || idx >= cnt) {
            unk_6f0[slot] = 0xfff1;
            obj = func_ov144_02292a2c();
            func_020a7c3c(obj);
        } else {
            if (*p != unk_6f0[slot]) {
                unk_6f0[slot] = *p;
                obj = func_ov144_02292a2c();
                t = *p;
                func_02062564(buf, &t);
                func_020a7bd8(obj, buf);
            }
            p++;
        }
        if (obj) {
            func_0206fb9c(obj, 4, slot * 0x1a + 0x184, 0xd, 0xf, 7, 0);
            func_0206fab4(obj, 0, 0);
        }
        idx++;
        slot++;
        if (slot >= 9) {
            slot = 0;
        }
    }
    func_0206260c(buf);
}

void Unk_ov144_02293db8::func_ov144_02292a00() {
    s32 i = 0;
    unk_bf = 0;
    for (; i < 9; i++) {
        func_0206fc44(unk_2d4[i]);
    }
}

void *Unk_ov144_02293db8::func_ov144_02292a2c() {
    if (unk_bf >= 9) {
        return unk_2d4[8];
    }
    unk_bf = unk_bf + 1;
    return unk_2d4[unk_bf - 1];
}

void Unk_ov144_02293db8::func_ov144_02292a64() {
    func_ov002_02202af0(&unk_c4);
    unk_be = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov144_02293db8::func_ov144_02292a88() {
    func_ov002_02202b68(&unk_c4);
    func_ov002_02200a58(7);
}

void Unk_ov144_02293db8::func_ov144_02292aa0() {
    func_ov002_02202a78(&unk_c4);
    unk_c4.vfunc_0c();
}

void Unk_ov144_02293db8::func_ov144_02292abc(s32 a, s32 b) {
    func_ov002_022029e8(&unk_c4, a, b, 3, 1);
    unk_be = unk_8d;
    func_ov002_02200a58(6);
}

void Unk_ov144_02293db8::func_ov144_02292aec() {
    if (unk_c1 == 9) {
        func_ov002_02202ca0(&unk_c4);
    } else if (unk_c1 <= 8) {
        func_ov002_02202ca0(&unk_c4);
    } else {
        func_ov002_02202c40(&unk_c4);
    }
    s32 a = func_ov144_02292bc8();
    s32 b = func_ov144_02292b58();
    func_ov144_02292abc(a, b);
}

void Unk_ov144_02293db8::func_ov144_02292b3c() {
    func_ov002_02202d00(&unk_c4, 0);
    unk_c4.vfunc_0c();
}

s32 Unk_ov144_02293db8::func_ov144_02292b58() {
    u32 c = unk_c1;
    if (c <= 8) {
        return c * 16 + 0x20 - (unk_a0 & 0xf);
    }
    switch (c) {
    case 9:
        return func_ov002_022030b8(&unk_170, 6);
    case 11:
        return 0x2a;
    case 12:
        return 0x7d;
    case 13:
        return 0x65;
    case 10:
        return func_ov002_02202e60(&unk_128);
    default:
        return 0x60;
    }
}

s32 Unk_ov144_02293db8::func_ov144_02292bc8() {
    u32 c = unk_c1;
    if (c <= 8) {
        return 0x48;
    }
    switch (c) {
    case 9:
        return func_ov002_022030f4(&unk_170, 6);
    case 11:
    case 12:
    case 13:
        return 0x26;
    case 10:
        return func_ov002_02202e84(&unk_128);
    default:
        return 0x80;
    }
}

void Unk_ov144_02293db8::func_ov144_02292c24() {
    s32 a = func_ov144_02292bc8();
    s32 b = func_ov144_02292b58();
    func_ov002_02202a40(&unk_c4, a, b);
    func_ov002_02202d00(&unk_c4, 1);
    func_ov144_02292aa0();
}

static inline BOOL Unk_ov144_02292c5c_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_ov144_02293db8::func_ov144_02292c5c() {
    s32 i;
    s32 target;
    s32 n;
    u16 id;
    id = 0x1323;
    n = 0;
    unk_bc = -1;
    if (*func_020601cc() != 0xfff1) {
        u16 *pv = func_020601cc();
        if (Unk_ov144_02292c5c_Rng(pv, id, 0x1368)) {
            target = *pv - 0x1323;
        } else {
            target = -1;
        }
        for (i = 0; i < 0x46; i++) {
            if (func_020600f4(id)) {
                if (i == target) {
                    unk_bc = n;
                    i = 0x46;
                }
                n++;
            }
            id++;
        }
    }
    unk_ba = unk_bc;
}

void Unk_ov144_02293db8::func_ov144_02292ce8() {
    s32 i;
    u16 id;
    id = 0x1323;
    i = 0;
    unk_b8 = 0;
    s16 *pc = &unk_b8;
    for (; i < 0x46; i++) {
        if (func_020600f4(id)) {
            unk_664[unk_b8] = id;
            *pc = *pc + 1;
        }
        id++;
    }
}

void Unk_ov144_02293db8::func_ov144_02292d38() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x78, unk_a4);
        func_ov144_02292d9c();
    }
}

void Unk_ov144_02293db8::func_ov144_02292d64() {
    s32 v;
    s32 n = unk_a4;
    v = func_02133150(unk_a8 * n, 0x78);
    if (v < 0) {
        v = 0;
    }
    if (v > n) {
        v = n;
    }
    func_ov144_0229282c(v);
    unk_a0 = v;
}

void Unk_ov144_02293db8::func_ov144_02292d9c() {
    func_0208dae8(&unk_128, 0x4f, unk_94 + (unk_a8 - 0x4b));
}

BOOL Unk_ov144_02293db8::func_ov144_02292dc4() {
    if (func_0208d9a8(&unk_128)) {
        func_ov002_02202f0c(&unk_128);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov144_02293db8::func_ov144_02292dec() {
#define A8 (*(volatile s32 *)&unk_a8)
    s32 old = A8;
    u32 keys = data_021f47d8;
    if (keys & 0x40) {
        A8 = A8 - 4;
        if (A8 < 0) {
            A8 = 0;
        }
    } else if (keys & 0x80) {
        A8 = A8 + 4;
        if (A8 > 0x78) {
            A8 = 0x78;
        }
    }
    if (old != A8) {
        func_ov144_02292d64();
        func_ov144_02292d9c();
        func_ov002_02202e54(&unk_128);
    }
#undef A8
}

s32 Unk_ov144_02293db8::func_ov144_02292e78() {
    return func_ov002_02202ef4(&unk_128);
}

void Unk_ov144_02293db8::func_ov144_02292e88(s32 x, s32 flag) {
    if (flag) {
        x -= 0x1d;
    } else {
        x += unk_ac;
    }
    if (x < 0) {
        x = 0;
    }
    if (x > 0x78) {
        x = 0x78;
    }
    if (flag) {
        func_020e761c(&unk_a8, x, 8);
    } else {
        unk_a8 = x;
    }
    func_ov144_02292d64();
    func_ov144_02292d9c();
    s32 d = unk_b0 - unk_a8;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(&unk_128);
        unk_b0 = unk_a8;
    }
}

BOOL Unk_ov144_02293db8::func_ov144_02292f00(s32 a, s32 b) {
    if (func_ov002_02202f18(&unk_128)) {
        unk_ac = unk_a8 - b;
        func_ov002_02202f00(&unk_128);
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov144_02293db8::func_ov144_02292f48(u8 v) {
    u8 l = v;
    func_ov002_02204394(&unk_55c, &l, 1, 0);
    func_ov002_02200a58(0xc);
    func_0208d63c(&unk_c4);
}

void Unk_ov144_02293db8::func_ov144_02292f7c() {
    func_ov144_02292030(0x20);
    func_ov144_022925bc(8);
    unk_c0 = 5;
    func_ov002_02200a58(0xb);
    func_ov002_02200a50(2);
    func_0200402c(0x57);
}

BOOL Unk_ov144_02293db8::func_ov144_02292fb4() {
    if (unk_ba == -1) {
        return FALSE;
    }
    s32 t = func_02098ffc();
    s32 m = -1;
    if (t == m) {
        func_ov144_02292f48(0x10);
        return TRUE;
    }
    u16 v = unk_664[unk_ba];
    func_0209909c(&v, 0, t);
    if (unk_ba == unk_bc) {
        if (IsZero(data_020e416c) == 0) {
            func_ov004_02234cd8();
        }
        unk_bc = -1;
    }
    func_02060044(unk_664[unk_ba]);
    func_ov144_02292054(unk_ba);
    unk_c0 = 10;
    func_ov144_022925ec(8);
    func_ov002_02200a58(10);
    func_ov144_02292030(0x10);
    func_0200402c(0x58);
    return TRUE;
}

void Unk_ov144_02293db8::func_ov144_02293074() {
    if (IsZero(data_020e416c) == 0) {
        func_ov004_02234cd8();
    }
    func_ov144_02292054(unk_bc);
    unk_bc = -1;
    func_ov144_02292030(8);
    func_ov144_0229253c();
    func_ov144_02293174();
    func_0200402c(0x56);
}

BOOL Unk_ov144_02293db8::func_ov144_022930c8() {
    if (unk_ba == -1) {
        return FALSE;
    }
    if (unk_bc != -1) {
        func_ov144_02293074();
        return FALSE;
    }
    func_ov144_02292020(0x20);
    unk_c0 = 5;
    func_ov144_0229261c(8);
    func_ov002_02200a58(0xb);
    func_ov144_02292054(unk_ba);
    func_0206ecf8(1);
    func_0206e720(unk_664[unk_ba]);
    func_ov002_02200a50(2);
    func_0200402c(0x55);
    return TRUE;
}

void Unk_ov144_02293db8::func_ov144_02293144() {
    func_0206ecf8(0);
    func_ov002_022030ac(&unk_170, 6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
}

void Unk_ov144_02293db8::func_ov144_02293174() {
    if (func_0206ef0c()) {
        func_ov144_022931d0();
    } else {
        func_ov144_02293194();
    }
}

void Unk_ov144_02293db8::func_ov144_02293194() {
    if (func_ov144_02292040(0x10)) {
        func_ov144_02292020(0x10);
    } else {
        unk_c1 = 0xb;
    }
    func_ov144_02292c24();
    func_ov002_02200980(this);
    func_ov002_02200a58(3);
}

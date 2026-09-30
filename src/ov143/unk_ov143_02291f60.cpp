#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov143_02293b38_E {
    u32 w0;
    struct {
        u32 lo : 10;
        u32 hi : 22;
    } w1;
    u32 w2;
    u32 w3;
    u32 w4;
    struct {
        u32 lo : 12;
        u32 n : 4;
        u32 hi : 16;
    } w5;
};

struct Unk_ov143_02293980_T {
    u32 w0;
    struct {
        u32 lo : 10;
        u32 hi : 22;
    } w1;
};

extern "C" {
extern Unk_ov143_02293b38_E *data_ov143_02293b38[16];
extern Unk_ov143_02293980_T data_ov143_02293980;
extern u8 data_ov143_02293950[];
extern u8 data_ov143_022938c8[];
extern u8 data_ov143_022939f8[];
extern u8 data_ov143_02293a10[];
extern u8 data_021ef5ec;

void func_0200140c();
void func_0200142c();
s32 func_020013cc(s32 a);
void func_0200402c(s32 a);
void func_0206dac0(u32 a);
void func_0206da5c(u32 a);
BOOL func_0206ef0c();
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 flag);
void func_02088378(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4);
void func_ov002_0220301c(void *p);
void func_ov002_02203044(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

// 0x40-byte element (Unk_020e0488) with out-of-line dtor func_0206fca8 (defined elsewhere)
class Unk_ov143_sub_020e0488 {
public:
    ~Unk_ov143_sub_020e0488();
    void func_0206fc44();
    void func_0206f9fc(u32 id);
    void func_0206fb9c(u32 id, u32 a, u32 b, u32 x, u32 y, u32 flag);
    void func_0206fab4(s32 a, s32 b);
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x110 (dtor func_ov002_02203968), 0x164 bytes
class Unk_ov143_sub_02203968 {
public:
    ~Unk_ov143_sub_02203968();
    u32 unk_00[0x164 / 4];
};

// sub-object at +0xac (virtual dtor func_ov002_02202640), 0x64 bytes
class Unk_ov143_sub_02202640 {
public:
    virtual ~Unk_ov143_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// Vtable 0x022044e4 (declaration copied from ov120_000; sub-objects opaque)
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

// Vtable 0x02293b80 (melody / tune editor menu)
class Unk_ov143_02293b80 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov143_02293b80();

    void func_ov143_02291ff0(u32 mask);
    void func_ov143_02292000(u32 mask);
    BOOL func_ov143_02292010(u32 mask);
    void func_ov143_02292024();
    void func_ov143_02292040();
    void func_ov143_02292064(s32 *out, s32 idx);
    void func_ov143_022920ac();
    void func_ov143_02292128(u32 id, u32 idx);
    u32 func_ov143_02292170(u32 idx);
    u32 func_ov143_02292198(u32 idx);
    void func_ov143_022921c0(s32 x, s32 y);
    void func_ov143_02292240(u32 idx, s32 x, s32 y);
    void func_ov143_0229229c(u32 idx, s32 x, s32 y);
    void func_ov143_022922e4(u32 idx, s32 x, s32 y);
    void func_ov143_02292364(u32 idx, s32 x, s32 y);
    void func_ov143_022923f8();
    Unk_ov143_sub_020e0488 *func_ov143_02292424();
    void func_ov143_0229245c();
    void func_ov143_02292494();
    void func_ov143_022924c4();
    void func_ov143_022924ec();
    void func_ov143_02292530(u32 v);
    void func_ov143_02292560(u32 v);
    void func_ov143_02292590();
    BOOL func_ov143_022925d4(void *pad);
    BOOL func_ov143_022927d8(u32 idx);

    // out-of-range callees (declarations only)
    void func_ov143_02292ca0();
    void func_ov143_02292bc0();
    void func_ov143_02292bf0();
    void func_ov143_02292da0();
    void func_ov143_02292dc4();
    void func_ov143_022929d4();

    /* 0x91 */ u8 unk_91[7];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ s16 unk_9a;
    /* 0x9c */ u8 unk_9c[3];
    /* 0x9f */ volatile u8 unk_9f;
    /* 0xa0 */ u8 *unk_a0;
    /* 0xa4 */ volatile u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6[2];
    /* 0xa8 */ u32 unk_a8;
    /* 0xac */ Unk_ov143_sub_02202640 unk_ac;
    /* 0x110 */ Unk_ov143_sub_02203968 unk_110;
    /* 0x274 */ Unk_ov143_sub_020e0488 unk_274[16];
    /* 0x674 */ u8 unk_674[0x800];
    /* 0xe74 */ u8 unk_e74[0x40];
};

// ---------------------------------------------------------------------------------------------

Unk_ov143_02293b80::~Unk_ov143_02293b80() {}

void Unk_ov143_02293b80::func_ov143_02291ff0(u32 mask) {
    unk_98 = unk_98 & ~mask;
}

void Unk_ov143_02293b80::func_ov143_02292000(u32 mask) {
    unk_98 = unk_98 | mask;
}

BOOL Unk_ov143_02293b80::func_ov143_02292010(u32 mask) {
    if (unk_98 & mask) return TRUE;
    return FALSE;
}

void Unk_ov143_02293b80::func_ov143_02292024() {
    func_0200140c();
    func_ov002_0220301c(&unk_110);
}

void Unk_ov143_02293b80::func_ov143_02292040() {
    func_0200142c();
    func_020013cc(-6);
    func_ov002_02203044(&unk_110);
}

void Unk_ov143_02293b80::func_ov143_02292064(s32 *out, s32 idx) {
    s32 x = 0x1a;
    s32 y = 0x3f;
    u32 t = func_ov143_02292198(unk_a0[idx]);
    if (idx < 8) {
        x += idx * 0x18;
        y -= t * 2;
    } else {
        x += (idx - 8) * 0x18 + 0x10;
        y += 0x38 - t * 2;
    }
    out[0] = x;
    out[1] = y;
}

void Unk_ov143_02293b80::func_ov143_022920ac() {
    s32 j;
    u32 i;
    i = 0xc7;
    j = 0;
    do {
        func_ov143_02292128(i, j);
        i = (u8)(i + 1);
        if (i > 0xc9) i = 0xc3;
        j++;
    } while (j < 0xd);
    func_ov143_02292128(0xca, 0xd);
    func_ov143_02292128(0xcb, 0xe);
    Unk_ov143_sub_020e0488 *e = func_ov143_02292424();
    e->func_0206f9fc(0x8d);
    e->func_0206fb9c(8, data_ov143_02293980.w1.lo, 8, 0xf, 0, 0);
    e->func_0206fab4(1, 0);
}

void Unk_ov143_02293b80::func_ov143_02292128(u32 id, u32 idx) {
    Unk_ov143_02293b38_E *p = data_ov143_02293b38[idx];
    Unk_ov143_sub_020e0488 *e = func_ov143_02292424();
    e->func_0206f9fc(id);
    e->func_0206fb9c(8, p->w1.lo, 3, 0xf, 0, 0);
    e->func_0206fab4(1, 0);
}

void Unk_ov143_02293b80::func_ov143_022921c0(s32 x, s32 y) {
    s32 i;
    s32 cx = x;
    for (i = 0; i < 8; i++) {
        if (i == unk_9a) {
            func_ov143_02292240(i, cx, y);
        } else {
            func_ov143_0229229c(unk_a0[i], cx, y);
        }
        cx += 0x18;
    }
    x += 0x10;
    for (; i < 16; i++) {
        if (i == unk_9a) {
            func_ov143_02292240(i, x, y + 0x38);
        } else {
            func_ov143_0229229c(unk_a0[i], x, y + 0x38);
        }
        x += 0x18;
    }
}

void Unk_ov143_02293b80::func_ov143_02292240(u32 idx, s32 x, s32 y) {
    if (func_ov143_02292010(2)) {
        func_ov143_02292364(unk_a0[idx], x, y);
    } else {
        func_ov143_022922e4(unk_a0[idx], x, y);
    }
    func_02088730(1, data_ov143_02293950, x, y, -1, -1, 0);
}

void Unk_ov143_02293b80::func_ov143_0229229c(u32 idx, s32 x, s32 y) {
    u32 t = func_ov143_02292198(idx);
    y -= t * 2;
    func_02087e70(1, data_ov143_02293b38[idx], x, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov143_02293b80::func_ov143_022922e4(u32 idx, s32 x, s32 y) {
    u8 *e = (u8 *)data_ov143_02293b38[idx];
    s32 ty;
    u32 t = func_ov143_02292198(idx);
    ty = y - t * 2;
    func_02088730(1, e, x, ty, 0xd, 2, 0);
    func_02088730(1, e + 8, x, ty, 0xd, 2, 0);
    func_02087e70(1, e + 0x10, x, ty, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov143_02293b80::func_ov143_02292364(u32 idx, s32 x, s32 y) {
    Unk_ov143_02293b38_E *e = data_ov143_02293b38[idx];
    u32 t = func_ov143_02292198(idx);
    s32 ym = y - t * 2;
    if (idx == 0xf) {
        func_02088378(1, data_ov143_022938c8, x - 0x5c, ym - 0x18, -1, 2, 0x1000, 0xeaab, 0);
    } else {
        u32 n = e->w5.n;
        void *p;
        if (idx < 6 || idx == 0xe) {
            p = data_ov143_022939f8;
        } else {
            p = data_ov143_02293a10;
        }
        func_02087e70(1, p, x, ym, n, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_ov143_02293b80::func_ov143_022923f8() {
    s32 i;
    unk_9f = 0;
    for (i = 0; i < 16; i++) {
        unk_274[i].func_0206fc44();
    }
}

Unk_ov143_sub_020e0488 *Unk_ov143_02293b80::func_ov143_02292424() {
    if (unk_9f >= 0x10) {
        return &unk_274[15];
    }
    unk_9f = unk_9f + 1;
    return &unk_274[unk_9f - 1];
}

void Unk_ov143_02293b80::func_ov143_0229245c() {
    unk_a4 = 0x10;
    func_ov002_02200a58(9);
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(6);
    func_ov143_02292530(5);
    func_ov143_02292024();
}

void Unk_ov143_02293b80::func_ov143_02292494() {
    func_ov143_02292530(6);
    func_ov143_022929d4();
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov002_0220085c(0, 0);
}

void Unk_ov143_02293b80::func_ov143_022924c4() {
    func_ov143_02291ff0(2);
    unk_9a = -1;
    func_ov143_02292ca0();
    func_ov143_02292560(3);
}

void Unk_ov143_02293b80::func_ov143_022924ec() {
    func_0206dac0(0x190);
    unk_9a = -1;
    func_ov002_02200a58(0xa);
    func_ov143_02292000(2);
    func_ov143_02292000(8);
    func_ov143_02292560(4);
    func_ov143_022929d4();
}

void Unk_ov143_02293b80::func_ov143_02292530(u32 v) {
    func_ov143_02292000(4);
    func_0206ee80(&unk_674, 0, 0x11, 9, 0x17, v);
}

void Unk_ov143_02293b80::func_ov143_02292560(u32 v) {
    func_ov143_02292000(4);
    func_0206ee80(&unk_674, 0xc, 0x12, 0x15, 0x16, v);
}

void Unk_ov143_02293b80::func_ov143_02292590() {
    if (func_ov143_02292010(4)) {
        if (func_020b86c0(&unk_e74, &unk_674, 4, 0x800, 0)) {
            func_ov143_02291ff0(4);
        }
    }
}

BOOL Unk_ov143_02293b80::func_ov143_022925d4(void *pad) {
    if (pad == NULL) return FALSE;
    u32 cur = unk_a4;
    if (cur < 8) {
        if (func_ov002_0220127c(pad)) {
            unk_a4 = unk_a4 + 8;
        } else if (func_ov002_0220126c(pad)) {
            if (unk_a4 != 0) unk_a4 = unk_a4 - 1;
        } else if (func_ov002_0220125c(pad)) {
            unk_a4 = unk_a4 + 1;
        }
    } else if (cur >= 8 && cur <= 0xf) {
        if (func_ov002_0220127c(pad)) {
            s32 t = unk_a4 - 8;
            if (t < 2) {
                unk_a4 = 0x10;
            } else if (t < 6) {
                unk_a4 = 0x11;
            } else {
                unk_a4 = 0x12;
            }
        } else if (func_ov002_0220128c(pad)) {
            unk_a4 = unk_a4 - 8;
        } else if (func_ov002_0220126c(pad)) {
            unk_a4 = unk_a4 - 1;
        } else if (func_ov002_0220125c(pad)) {
            if (unk_a4 < 0xf) unk_a4 = unk_a4 + 1;
        }
    } else {
        switch (cur) {
        case 0x10:
            if (func_ov002_0220128c(pad)) {
                unk_a4 = 8;
            } else if (func_ov002_0220125c(pad)) {
                unk_a4 = 0x11;
            }
            break;
        case 0x11:
            if (func_ov002_0220128c(pad)) {
                unk_a4 = 0xb;
            } else if (func_ov002_0220125c(pad)) {
                unk_a4 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                unk_a4 = 0x10;
            }
            break;
        case 0x12:
            if (func_ov002_0220128c(pad)) {
                unk_a4 = 0xe;
            } else if (func_ov002_0220127c(pad)) {
                unk_a4 = 0x13;
            } else if (func_ov002_0220126c(pad)) {
                unk_a4 = 0x11;
            }
            break;
        case 0x13:
            if (func_ov002_0220128c(pad)) {
                unk_a4 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                unk_a4 = 0x11;
            }
            break;
        }
    }
    if (cur != unk_a4) return TRUE;
    return FALSE;
}

BOOL Unk_ov143_02293b80::func_ov143_022927d8(u32 idx) {
    if (idx <= 0xf) {
        unk_9a = idx;
        unk_a4 = idx;
        if (func_0206ef0c()) {
            unk_a8 = data_021ef5ec;
            unk_a5 = func_ov143_02292198(unk_a0[idx]);
            func_ov002_02200a58(1);
        } else {
            func_ov002_02200a58(3);
        }
        func_0206da5c(unk_a0[idx]);
        return TRUE;
    }
    switch (idx) {
    case 0x10:
        func_ov143_02292494();
        func_0200402c(0x2a);
        return TRUE;
    case 0x11:
        func_ov143_022924ec();
        return TRUE;
    case 0x12:
        func_ov143_02292bf0();
        return TRUE;
    case 0x13:
        func_ov143_02292bc0();
        return TRUE;
    case 0x14:
        func_ov143_02292dc4();
        return TRUE;
    case 0x15:
        func_ov143_02292da0();
        return TRUE;
    }
    return FALSE;
}

// Small table lookups (defined last so they are not inlined)
u32 Unk_ov143_02293b80::func_ov143_02292170(u32 idx) {
    u8 t[16] = {0xf, 0xe, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd};
    return t[idx];
}

u32 Unk_ov143_02293b80::func_ov143_02292198(u32 idx) {
    u8 t[16] = {2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 1, 0};
    return t[idx];
}

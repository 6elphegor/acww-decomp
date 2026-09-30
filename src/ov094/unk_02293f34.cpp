#include "types.h"

extern "C" {
s32 func_02088730(s32 a, const void *b, s32 c, s32 d, ...);
void func_020026c4(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0209750c();
s32 func_02098750(s32 a);
void *func_02097e68(s32 a, s32 idx);
s32 func_02065578(void *o);
void func_02065c94(void *o);
void func_02065e70(void *o, s32 x);
s32 func_020655fc(void *o);
void func_020655f0(void *o, void *buf);
s32 func_020655d8(void *o);
void func_020655e4(void *o, void *buf);
void func_0206fcc8(void *buf);
void func_0206fca8(void *buf);
void func_0206f9fc(void *buf, s32 id);
void func_02094030(void *buf);
void func_02094018(void *buf);
void func_02089f44(void *buf);
void func_02089f30(void *buf);
void func_020510d8(void *dst, void *src);
void func_02089ac0(void *dst, void *src);
void func_020b3544(s32 a, void *buf);

extern u8 data_ov094_02294bb4[];
extern u16 data_ov094_02294bf4[];
extern u8 data_ov094_02294bbc[];
extern u8 data_ov094_02294bdc[];
extern u8 data_ov094_02294be4[];
extern u8 data_ov094_02294bec[];
extern u8 data_ov094_02294858[];
extern u32 data_ov094_0229484c[];
extern u8 data_ov094_02294c14[];
extern s32 *data_021f482c;

s32 func_ov094_02292f8c(s32 a);
}

struct Unk_ov094_02294bb4_Bits {
    u32 pad;
    u16 v;
};

// 8-byte bitset
class Unk_ov094_02293b90 {
public:
    BOOL func_ov094_02293b90(s32 i);
    void func_ov094_02293bb4(s32 i);
    void func_ov094_02293bd4(s32 i);
    void func_ov094_02293bf4();

    u32 unk_00[2];
};

// Vtable 0x02294bd4
class Unk_ov094_02294bd4 {
public:
    Unk_ov094_02294bd4();
    virtual ~Unk_ov094_02294bd4();

    s32 func_ov094_02293c68(void *o);
    void func_ov094_02293e64(void *rec, s32 idx, s32 a, s32 b);
    s32 func_ov094_02293df8(s32 idx);
    s32 func_ov094_02293d9c(s32 idx);

    void func_ov094_02293f34(s32 a, s32 b, s32 c);
    void func_ov094_02293f64(s32 a, s32 b, s32 c, void *d);
    void func_ov094_02293f94(s32 a, s32 b);
    void func_ov094_02293fc4(s32 a, s32 b, u32 c, void *e, void *f);
    s32 func_ov094_0229403c(void *o);
    void func_ov094_0229405c(s32 a, s32 b, void *o);
    void func_ov094_02294104(s32 a, s32 b);
    void func_ov094_02294138(s32 a, s32 b);
    void func_ov094_0229416c(s32 a, s32 b);
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_022941e0(s32 i);
    BOOL func_ov094_022941ec(s32 i);
    void func_ov094_022941f8(u32 flags);
    void func_ov094_022942f4(s32 i);
    void func_ov094_02294318(s32 i, s32 x);
    void *func_ov094_0229433c(s32 i);
    void func_ov094_022943a4(s32 i);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32 v);
    void func_ov094_022943f8();
    u32 func_ov094_02294400();
    BOOL func_ov094_02294410(s32 v);
    void func_ov094_02294420(void *out, s32 idx);
    void func_ov094_02294440(void *out, void *o);
    u32 func_ov094_02294570(s32 a, s32 b, s32 start, u8 end);
    u32 func_ov094_022945c8(s32 a, s32 b);
    u32 func_ov094_022945dc(s32 a, s32 b);
    u32 func_ov094_022945f0(s32 a, s32 b);
    u32 func_ov094_02294610(s32 a, s32 b);
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 x);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ Unk_ov094_02293b90 unk_08;
    /* 0x10 */ Unk_ov094_02293b90 unk_10;
    /* 0x18 */ Unk_ov094_02293b90 unk_18;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 unk_24;
    /* 0x25 */ u8 unk_25;
    /* 0x26 */ u8 unk_26;
    /* 0x27 */ u8 unk_27;
};

void Unk_ov094_02294bd4::func_ov094_02293f34(s32 a, s32 b, s32 c) {
    func_02088730(1, data_ov094_02294be4, a - 8, b - 8, -1, unk_20, c);
}

void Unk_ov094_02294bd4::func_ov094_02293f64(s32 a, s32 b, s32 c, void *d) {
    func_02088730(1, data_ov094_02294bdc, a - 8, b - 8, c, unk_20, d);
}

void Unk_ov094_02294bd4::func_ov094_02293f94(s32 a, s32 b) {
    func_02088730(1, data_ov094_02294bec, a - 8, b - 8, -1, unk_20, 0);
}

void Unk_ov094_02294bd4::func_ov094_02293fc4(s32 a, s32 b, u32 c, void *e, void *f) {
    s32 idx = func_ov094_02293c68(e);
    s32 m1 = -1;
    if (idx != m1) {
        Unk_ov094_02294bb4_Bits *g = (Unk_ov094_02294bb4_Bits *)data_ov094_02294bb4;
        u32 t = g->v & 0xffff0fff;
        t = t | (((u8)c & 0xf) << 12);
        g->v = t;
        t = g->v & 0xfffffc00;
        t = t | (data_ov094_02294bf4[idx] & 0x3ff);
        g->v = t;
        func_02088730(1, data_ov094_02294bb4, a, b, m1, unk_20, f);
    }
}

s32 Unk_ov094_02294bd4::func_ov094_0229403c(void *o) {
    s32 t = func_ov094_02293c68(o);
    s32 r = -1;
    if (t != r) {
        r = data_ov094_02294bbc[t];
    }
    return r;
}

void Unk_ov094_02294bd4::func_ov094_0229405c(s32 a, s32 b, void *o) {
    if (unk_27 != 0) {
        s32 t = func_ov094_02292f8c(unk_27);
        if (t == 0x1000) {
            func_ov094_02293fc4(a, b, func_ov094_0229403c(o), o, 0);
            func_ov094_02293f64(a, b, func_ov094_0229403c(o), 0);
            func_ov094_02293f34(a, b, 0);
        } else {
            s32 v[4];
            v[0] = t;
            v[1] = 0;
            v[2] = 0;
            v[3] = t;
            func_ov094_02293fc4(a, b, func_ov094_0229403c(o), o, v);
            func_ov094_02293f64(a, b, func_ov094_0229403c(o), v);
        }
    }
}

void Unk_ov094_02294bd4::func_ov094_02294104(s32 a, s32 b) {
    u8 *rec = unk_04;
    s32 idx = 0x2d;
    s32 i = 0;
    for (; i < 10; i++) {
        func_ov094_02293e64(rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_02294138(s32 a, s32 b) {
    u8 *rec = unk_04;
    s32 idx = 0x23;
    s32 i = 0;
    for (; i < 10; i++) {
        func_ov094_02293e64(rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_0229416c(s32 a, s32 b) {
    u8 *rec = unk_04;
    s32 idx = 10;
    s32 i = 0;
    for (; i < 0x19; i++) {
        func_ov094_02293e64(rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_022941a0(s32 a, s32 b) {
    u8 *rec = (u8 *)func_02097e68(func_02098750(func_0209750c()), 0);
    s32 idx = 0;
    s32 i = idx;
    for (; i < 10; i++) {
        func_ov094_02293e64(rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_022941e0(s32 i) {
    unk_18.func_ov094_02293bd4(i);
}

BOOL Unk_ov094_02294bd4::func_ov094_022941ec(s32 i) {
    return unk_18.func_ov094_02293b90(i);
}

void Unk_ov094_02294bd4::func_ov094_022941f8(u32 flags) {
    u8 i;
    u32 f1, f8, f2, f4;
    unk_18.func_ov094_02293bf4();
    i = 0;
    f1 = flags & 1;
    f8 = flags & 8;
    f2 = flags & 2;
    f4 = flags & 4;
    do {
        s32 t = func_02065578(func_ov094_0229433c(i));
        switch (t) {
        case 1:
            if (f1 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        case 4:
            if (f8 != 0 || f1 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        case 2:
        case 3:
        case 5:
        case 6:
            if (f2 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        case 7:
        case 8:
            if (f4 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        }
        i++;
    } while (i <= 9);
    s32 *g = data_021f482c;
    if (f1 != 0) {
        func_020026c4(data_ov094_02294c14, (s32)g, 8, 4, 4, 4);
    }
    if (f2 != 0) {
        func_020026c4(data_ov094_02294c14, (s32)g, 8, 4, 5, 5);
    }
    if (f4 != 0) {
        func_020026c4(data_ov094_02294c14, (s32)g, 8, 4, 6, 6);
    }
}

void Unk_ov094_02294bd4::func_ov094_022942f4(s32 i) {
    func_02065c94(func_ov094_0229433c(i));
    unk_08.func_ov094_02293bb4(i);
}

void Unk_ov094_02294bd4::func_ov094_02294318(s32 i, s32 x) {
    func_02065e70(func_ov094_0229433c(i), x);
    unk_08.func_ov094_02293bd4(i);
}

void *Unk_ov094_02294bd4::func_ov094_0229433c(s32 i) {
    void *r = (void *)func_02098750(func_0209750c());
    if (i >= 0 && i <= 9) {
        return func_02097e68((s32)r, i);
    }
    if (i >= 10 && i <= 0x22) {
        return unk_04 + (i - 10) * 0xf4;
    }
    if (i >= 0x23 && i <= 0x2c) {
        return unk_04 + (i - 0x23) * 0xf4;
    }
    if (i >= 0x2d && i <= 0x36) {
        return unk_04 + (i - 0x2d) * 0xf4;
    }
    return 0;
}

void Unk_ov094_02294bd4::func_ov094_022943a4(s32 i) {
    unk_10.func_ov094_02293bd4(i);
}

void Unk_ov094_02294bd4::func_ov094_022943b0() {
    unk_10.func_ov094_02293bf4();
}

void Unk_ov094_02294bd4::func_ov094_022943bc(u32 v) {
    if (func_ov094_022941ec((u8)v)) {
        func_ov094_022943f8();
    } else if (unk_24 != v) {
        unk_24 = v;
        unk_25 = 2;
    }
}

void Unk_ov094_02294bd4::func_ov094_022943f8() {
    unk_24 = 0x37;
}

u32 Unk_ov094_02294bd4::func_ov094_02294400() {
    return data_ov094_0229484c[unk_25];
}

BOOL Unk_ov094_02294bd4::func_ov094_02294410(s32 v) {
    if (v == unk_24) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov094_02294bd4::func_ov094_02294420(void *out, s32 idx) {
    func_ov094_02294440(out, func_ov094_0229433c(idx));
}

void Unk_ov094_02294bd4::func_ov094_02294440(void *out, void *o) {
    u32 b0[0x40 / 4];
    u32 b1[0x1c / 4];
    u32 b2[0x28 / 4];
    u32 b3[0x28 / 4];
    s32 t = func_02065578(o);
    func_0206fcc8(b0);
    func_02094030(b1);
    func_02089f44(b2);
    func_02089f44(b3);
    s32 k = func_020655fc(o);
    if (k == 0x11) {
        func_020655f0(o, b1);
        func_020b3544(1, b1);
        func_0206f9fc(b0, 0x4b);
    } else if (k == 0) {
        func_020655f0(o, b1);
        func_020b3544(1, b1);
        if (t == 4) {
            func_0206f9fc(b0, 0x4b);
        } else {
            func_0206f9fc(b0, 0x3d);
        }
    } else {
        func_0206f9fc(b0, data_ov094_02294858[k]);
    }
    func_020510d8(b3, b0);
    if (func_020655d8(o) != 0) {
        u32 b4[0x40 / 4];
        func_0206fcc8(b4);
        func_0206f9fc(b4, 0x43);
        func_020b3544(0, b4);
        func_0206fca8(b4);
    } else {
        func_020655e4(o, b1);
        func_020b3544(0, b1);
    }
    func_0206f9fc(b0, 0x3c);
    func_020510d8(b2, b0);
    switch (t) {
    case 1:
    case 4:
    case 7:
    case 8:
        func_02089ac0(out, b2);
        break;
    default:
        func_02089ac0(out, b3);
        break;
    }
    func_02089f30(b3);
    func_02089f30(b2);
    func_02094018(b1);
    func_0206fca8(b0);
}

u32 Unk_ov094_02294bd4::func_ov094_02294570(s32 a, s32 b, s32 start, u8 end) {
    s32 i;
    s32 x0 = a - 0x14;
    s32 x1 = a + 4;
    s32 y0 = b - 0x14;
    s32 y1 = b + 4;
    for (i = start; i <= end; i++) {
        s32 x = func_ov094_02293df8(i);
        if (x0 < x && x < x1) {
            s32 y = func_ov094_02293d9c(i);
            if (y0 < y && y < y1) {
                return (u8)i;
            }
        }
    }
    return 0x37;
}

u32 Unk_ov094_02294bd4::func_ov094_022945c8(s32 a, s32 b) {
    return func_ov094_02294570(a, b, 0x23, 0x2c);
}

u32 Unk_ov094_02294bd4::func_ov094_022945dc(s32 a, s32 b) {
    return func_ov094_02294570(a, b, 0xa, 0x22);
}

u32 Unk_ov094_02294bd4::func_ov094_022945f0(s32 a, s32 b) {
    if (a > 0xa0 || a < 0x60) {
        return 0x37;
    }
    return func_ov094_02294570(a, b, 0x2d, 0x36);
}

u32 Unk_ov094_02294bd4::func_ov094_02294610(s32 a, s32 b) {
    if (a < 0xc0) {
        return 0x37;
    }
    return func_ov094_02294570(a, b, 0, 9);
}

void Unk_ov094_02294bd4::func_ov094_0229462c() {
    if (*(volatile u8 *)&unk_25 != 0) {
        unk_25 = *(volatile u8 *)&unk_25 - 1;
    }
}

void Unk_ov094_02294bd4::func_ov094_02294644(s32 x) {
    unk_08.func_ov094_02293bf4();
    unk_10.func_ov094_02293bf4();
    unk_18.func_ov094_02293bf4();
    unk_24 = 0x37;
    unk_25 = 0;
    unk_20 = x;
    unk_04 = 0;
    unk_27 = 10;
}

Unk_ov094_02294bd4::~Unk_ov094_02294bd4() {
}

Unk_ov094_02294bd4::Unk_ov094_02294bd4() {
}

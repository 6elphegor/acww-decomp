#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
void func_0208d9d4(void *p, s32 v);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202d00(void *p, u32 v);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
BOOL func_ov002_02202f18(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
struct Unk_ov120_02293a2c_Oam {
    u16 unk_0;
    u16 a : 9;
    u16 pal : 5;
    u16 b : 2;
    u16 tile : 10;
    u16 c : 6;
};
extern Unk_ov120_02293a2c_Oam data_ov120_02294f18;
extern u8 data_ov120_02294ec0[];
extern u8 data_ov120_02294ec8[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
s16 *func_ov117_02292c40(void *p, s32 i);
u32 func_ov117_02292c2c(void *p, s32 i);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206f9fc(void *p, u32 v);
void func_020a7c3c(void *p);
void func_0206fc44(void *p);
void *func_0209750c();
s32 func_0209888c(...);
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
BOOL func_0207bf84(void *a, s32 b);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void func_02115e48(void *src, void *dst, u32 n);
void func_02115e30(u32 v, void *dst, u32 n);
void func_ov002_022019a4(void *p, s32 a);
void func_ov002_02201984(void *p, s32 a);
void func_ov002_02201938(void *p, s32 a);
}

// 0x40-byte element with out-of-line dtor func_0206fca8 (defined elsewhere)
class Unk_ov120_sub_0206fca8 {
public:
    ~Unk_ov120_sub_0206fca8();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x438 (dtor func_ov002_02202f70), 0x48 bytes
class Unk_ov120_sub_02202f70 {
public:
    ~Unk_ov120_sub_02202f70();
    u32 unk_00[0x48 / 4];
};

// sub-object at +0x480 (virtual dtor func_ov002_02202640), 0x64 bytes
class Unk_ov120_sub_02202640 {
public:
    virtual ~Unk_ov120_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// 3-byte record, ctor func_ov120_02292de4, dtor func_ov120_02292de0
class Unk_ov120_02292de0 {
public:
    Unk_ov120_02292de0();
    ~Unk_ov120_02292de0();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

// Vtable 0x022044e4 (declaration copied from ov099_000; sub-objects opaque)
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

// Vtable 0x02295010
class Unk_ov120_02295010 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov120_02295010();

    void func_ov120_02292de8(u32 mask);
    void func_ov120_02292df8(u32 mask);
    BOOL func_ov120_02292e08(u32 mask);
    void func_ov120_02292e1c();
    s32 func_ov120_02292e7c();
    BOOL func_ov120_02292f44(void *pad);
    void func_ov120_02293090();
    void func_ov120_022930b0();
    void func_ov120_022930d0();
    void func_ov120_022930f0();
    void func_ov120_02293168();
    s32 func_ov120_0229318c();
    s32 func_ov120_022931dc();
    void func_ov120_02293230();
    void func_ov120_022932a8();
    void func_ov120_022932c4();
    void func_ov120_022932e8();
    BOOL func_ov120_02293374();
    void func_ov120_022933f0();
    void func_ov120_02293440();
    BOOL func_ov120_0229348c();
    void func_ov120_022934e0();
    BOOL func_ov120_02293590();
    void func_ov120_0229359c(u32 v);
    void func_ov120_022935ac(u32 v);
    void func_ov120_022935c8();

    u32 func_ov120_0229364c(u8 v);
    u32 func_ov120_022936b4(u8 v);
    void func_ov120_0229371c(u8 v);
    void func_ov120_02293784(u8 v);
    void func_ov120_02293620();
    u32 func_ov120_02293838(s32 x, s32 y);
    BOOL func_ov120_02293898();
    void func_ov120_022938d0(void *src);
    void func_ov120_02293a2c(s32 x, s32 y, s32 n, s32 flag, s32 pal);
    BOOL func_ov120_02293ac0();
    s32 func_ov120_02293b0c();
    s32 func_ov120_02293b28();
    u8 *func_ov120_02293b48();
    s32 func_ov120_02293b70();
    void func_ov120_02293bd4();
    void func_ov120_02293bec();
    void func_ov120_02293c04(void *p, u32 idx);
    s32 func_ov120_02293c70(u8 *tbl);
    void func_ov120_02293cc8();
    void func_ov120_02293cfc();
    void *func_ov120_02293dc0();
    void func_ov120_02293df4();
    u32 func_ov120_02293e1c(u32 a, s32 b);
    void func_ov120_02293e70();
    void func_ov120_02293f08();

    /* 0x91 */ u8 unk_91[7];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u16 unk_9a;
    /* 0x9c */ u16 unk_9c;
    /* 0x9e */ u8 unk_9e[2];
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af[0x49];
    /* 0xf8 */ Unk_ov120_sub_0206fca8 unk_f8[13];
    /* 0x438 */ Unk_ov120_sub_02202f70 unk_438;
    /* 0x480 */ Unk_ov120_sub_02202640 unk_480;
    /* 0x4e4 */ u16 unk_4e4[0x400];
    /* 0xce4 */ u16 unk_ce4[0x400];
    /* 0x14e4 */ u16 unk_14e4[0x400];
    /* 0x1ce4 */ u16 unk_1ce4[0x400];
    /* 0x24e4 */ u8 unk_24e4[13];
    /* 0x24f1 */ u8 unk_24f1[13];
    /* 0x24fe */ Unk_ov120_02292de0 unk_24fe[3];
    /* 0x2507 */ Unk_ov120_02292de0 unk_2507[14];
};

// ---------------------------------------------------------------------------------------------

void Unk_ov120_02295010::func_ov120_02293620() {
    u32 a = unk_a9;
    u32 v;
    if (a <= 5 || a == 0xd) {
        v = 0;
    } else {
        v = (a - 5) << 4;
    }
    func_ov120_022935ac(v);
    unk_a3 = 0xff;
}

u32 Unk_ov120_02295010::func_ov120_0229364c(u8 v) {
    if (v >= 1 && v < 0xf) {
        return (u8)(v - 1);
    }
    if (v >= 0xf && v < 0x1c) {
        u32 b = func_ov120_02293b48()[v - 0xf];
        if (b == 0) {
            return 0xe;
        }
        if (b == 1 || (b >= 2 && b < 6)) {
            return 8;
        }
        if (b >= 6 && b < 0xe) {
            return (u8)(b - 6);
        }
        if (b >= 0xe && b < 0x13) {
            return data_ov120_02294ec8[b - 0xe];
        }
    }
    return 0xe;
}

u32 Unk_ov120_02295010::func_ov120_022936b4(u8 v) {
    if (v == 9) {
        return 0xd;
    }
    if (v >= 1 && v < 9) {
        s32 t = v + 5;
        s32 i = 0;
        s32 n = unk_a1;
        for (; i < n; i++) {
            if (t == unk_24e4[i]) {
                return (u8)i;
            }
        }
        return 0xe;
    }
    if (v < 0xf && v >= 0xa) {
        return (u8)(v - 0xa);
    }
    if (v < 0x1c && v >= 0xf) {
        return (u8)(v - 0xf);
    }
    return 0xe;
}

void Unk_ov120_02295010::func_ov120_0229371c(u8 v) {
    func_ov120_02292df8(0x80);
    if (v == 0xe) {
        func_0206ee80(unk_14e4, 0x13, 0, 0x1c, 0x19, 4);
    } else if (v == 0xd) {
        func_0206ee80(unk_14e4, 0x13, 0, 0x1c, 7, 3);
    } else {
        func_0206ee80(unk_14e4, 0x13, v * 2, 0x1c, v * 2 + 1, 3);
    }
}

void Unk_ov120_02295010::func_ov120_02293784(u8 v) {
    if (v == 0) {
        unk_a8 = 0xe;
        unk_a9 = 0xe;
        func_ov120_022932a8();
        return;
    }
    func_ov120_022932c4();
    unk_a9 = func_ov120_022936b4(v);
    unk_a8 = func_ov120_0229364c(v);
    if (v >= 1 && v < 0xf) {
        func_ov120_02292de8(0x200);
        if (func_ov120_02292e08(1)) {
            if (v >= 1 && v <= 9) {
                func_ov120_02293bec();
                func_ov120_02293620();
                return;
            }
        } else {
            if (v < 1 || v > 9) {
                func_ov120_02293bd4();
                func_ov120_02293620();
                return;
            }
        }
    } else {
        func_ov120_02292df8(0x200);
    }
    func_ov120_022935c8();
    func_ov120_0229371c(0xe);
    func_ov120_0229371c(unk_a9);
}

u32 Unk_ov120_02295010::func_ov120_02293838(s32 x, s32 y) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        u8 *e = (u8 *)this + i * 3;
        if (e[0x2509] != 0xc) {
            s32 px = e[0x2507];
            if (px - 8 < x && px + 8 > x) {
                s32 py = e[0x2508];
                if (py - 8 < y && py + 8 > y) {
                    return (u8)i;
                }
            }
        }
    }
    return 0xe;
}

BOOL Unk_ov120_02295010::func_ov120_02293898() {
    u32 r = func_ov120_02293838(data_021ef5f0, data_021ef5ec);
    if (r == 0xe) {
        return FALSE;
    }
    func_ov120_02293784(r + 1);
    return TRUE;
}

void Unk_ov120_02295010::func_ov120_022938d0(void *src) {
    s32 k, i;
    u32 j;
    s16 *rec;
    i = 0;
    k = i;
    for (; k < 3; i++, k++) {
        rec = func_ov117_02292c40(src, i);
        if (rec != 0) {
            switch (func_ov117_02292c2c(src, i)) {
            case 0:
                *((u8 *)this + k * 3 + 0x2500) = 8;
                break;
            case 1:
                *((u8 *)this + k * 3 + 0x2500) = 7;
                break;
            case 2:
                *((u8 *)this + k * 3 + 0x2500) = 9;
                break;
            case 3:
                *((u8 *)this + k * 3 + 0x2500) = 0x89;
                break;
            default:
                *((u8 *)this + k * 3 + 0x2500) = 0xc;
                break;
            }
            *((u8 *)this + k * 3 + 0x24fe) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x24ff) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x2500) = 0xc;
        }
    }
    j = 3;
    k = 0;
    for (; k < 0xe; j++, k++) {
        rec = func_ov117_02292c40(src, j);
        if (rec != 0) {
            if (j >= 3 && j <= 0xa) {
                *((u8 *)this + k * 3 + 0x2509) = 0;
            } else if (j == 0xb) {
                *((u8 *)this + k * 3 + 0x2509) = 1;
            } else {
                *((u8 *)this + k * 3 + 0x2509) = *(data_ov120_02294ec0 + j - 0xc);
            }
            *((u8 *)this + k * 3 + 0x2507) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x2508) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x2509) = 0xc;
        }
    }
}

void Unk_ov120_02295010::func_ov120_02293a2c(s32 x, s32 y, s32 n, s32 flag, s32 pal) {
    u16 t;
    data_ov120_02294f18.tile = n * 2 + 0xc0;
    if (flag != 0) {
        t = data_ov120_02294f18.pal | 8;
        data_ov120_02294f18.pal = t;
    }
    func_02088730(1, &data_ov120_02294f18, x, y, pal, 1, 0);
    if (flag != 0) {
        data_ov120_02294f18.pal = t & 0x17;
    }
}

BOOL Unk_ov120_02295010::func_ov120_02293ac0() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    if (x < 0x98 || x > 0xe8) {
        return FALSE;
    }
    if (y < 0x50 || y >= 0xb0) {
        return FALSE;
    }
    func_ov120_02293784(((y + (unk_98 - 0x50)) >> 4) + 0xf);
    return TRUE;
}

s32 Unk_ov120_02295010::func_ov120_02293b0c() {
    u32 r = func_ov120_02293b28();
    if (r <= 6) {
        return 0;
    }
    return (r - 6) << 4;
}

s32 Unk_ov120_02295010::func_ov120_02293b28() {
    if (func_ov120_02292e08(1)) {
        return unk_a2;
    }
    return unk_a1;
}

u8 *Unk_ov120_02295010::func_ov120_02293b48() {
    if (func_ov120_02292e08(1)) {
        return unk_24f1;
    }
    return unk_24e4;
}

s32 Unk_ov120_02295010::func_ov120_02293b70() {
    s32 k;
    func_ov120_02293e70();
    func_ov120_02293cc8();
    if (func_ov120_02293b0c() == 0) {
        func_ov120_02292de8(8);
        k = 4;
    } else {
        func_ov120_02292df8(8);
        k = 3;
    }
    func_0206ee80(unk_4e4, 0x1d, 0xa, 0x1d, 0x15, k);
    func_ov120_02292df8(0x20);
    func_ov120_0229371c(unk_a9);
}

void Unk_ov120_02295010::func_ov120_02293bd4() {
    func_ov120_02292df8(1);
    func_ov120_02293b70();
}

void Unk_ov120_02295010::func_ov120_02293bec() {
    func_ov120_02292de8(1);
    func_ov120_02293b70();
}

void Unk_ov120_02295010::func_ov120_02293c04(void *p, u32 idx) {
    if (idx == 0) {
        func_020a7c3c(p);
    } else if (idx == 1) {
        func_ov002_022019a4(p, func_0209888c(func_0209750c()));
    } else if (idx >= 2 && idx < 6) {
        func_ov002_02201984(p, idx - 2);
    } else if (idx >= 6 && idx < 0xe) {
        func_ov002_02201938(p, idx - 6);
    } else if (idx >= 0xe && idx < 0x13) {
        func_0206f9fc(p, idx + 0x88);
    } else {
        func_020a7c3c(p);
    }
}

s32 Unk_ov120_02295010::func_ov120_02293c70(u8 *tbl) {
    s32 i;
    for (i = 0; i < 0xd; i++) {
        void *w = func_ov120_02293dc0();
        func_0206fb9c(w, 6, (i << 4) + 0x160, 8, 1, 0xf, 0);
        func_ov120_02293c04(w, tbl[i]);
        func_0206fab4(w, 0, 0);
    }
}

void Unk_ov120_02295010::func_ov120_02293cc8() {
    if (func_ov120_02292e08(1)) {
        func_ov120_02293c70(unk_24f1);
    } else {
        func_ov120_02293c70(unk_24e4);
    }
}

void Unk_ov120_02295010::func_ov120_02293cfc() {
    s32 n = 0;
    s32 m, i;
    m = func_02097740(data_021d735c, func_0209888c(func_0209750c()));
    if (m != -1) {
        unk_24e4[0] = 1;
        n++;
    }
    for (i = 0; i < 4; i++) {
        if (i == m) {
            continue;
        }
        if (!func_020978c8(data_021d735c, i)) {
            continue;
        }
        unk_24e4[n] = i + 2;
        n++;
    }
    for (i = 0; i < 8; i++) {
        if (func_0207bf84(data_021dfd8c, i)) {
            unk_24e4[n] = i + 6;
            n++;
        }
    }
    unk_a1 = n;
    for (; n < 0xd; n++) {
        unk_24f1[n] = 0;
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        unk_24f1[n] = i + 0xe;
        n++;
    }
    unk_a2 = n;
    for (; n < 0xd; n++) {
        unk_24f1[n] = 0;
    }
}

void *Unk_ov120_02295010::func_ov120_02293dc0() {
    if (unk_a0 >= 13) {
        return &unk_f8[12];
    }
    unk_a0 = *(volatile u8 *)&unk_a0 + 1;
    return &unk_f8[unk_a0 - 1];
}

void Unk_ov120_02295010::func_ov120_02293df4() {
    s32 i = 0;
    unk_a0 = 0;
    do {
        func_0206fc44(&unk_f8[i]);
        i++;
    } while (i < 13);
}

u32 Unk_ov120_02295010::func_ov120_02293e1c(u32 x, s32 idx) {
    if (x == 0) return 7;
    if (x < 6) return 0;
    if (x >= 6 && x < 14) return 1;
    switch (x - 14) {
    case 2: return 2;
    case 0: return 3;
    case 3: return 4;
    case 1: return 5;
    case 4: return 6;
    }
    return 7;
}

void Unk_ov120_02295010::func_ov120_02293e70() {
    s32 i;
    u8 *tbl;
    func_02115e48(unk_1ce4, unk_14e4, 0x800);
    tbl = func_ov120_02293b48();
    for (i = 0; i < 13; i++) {
        s32 a = func_ov120_02293e1c(tbl[i], i) * 0x40 + 0x13;
        s32 b = i * 0x40 + 0x13;
        unk_14e4[b] = unk_1ce4[a];
        unk_14e4[b + 1] = unk_1ce4[a + 1];
        unk_14e4[b + 0x20] = unk_1ce4[a + 0x20];
        unk_14e4[b + 0x21] = unk_1ce4[a + 0x21];
    }
    func_ov120_02292df8(2);
}

void Unk_ov120_02295010::func_ov120_02293f08() {
    volatile u16 v0, v1, v2, v3;
    s32 off, j, i, n;
    func_02115e48(unk_14e4, unk_ce4, 0x800);
    n = unk_98 >> 4;
    unk_a3 = n;
    off = 0x13;
    for (i = 0; i < n; i++) {
        v0 = 0x10;
        func_02115e30(v0, unk_ce4 + off, 0x14);
        v1 = 0x10;
        func_02115e30(v1, unk_ce4 + (off + 0x20), 0x14);
        off += 0x40;
    }
    j = n + 7;
    off = j * 0x40 + 0x13;
    for (; j < 13; j++) {
        v2 = 0x10;
        func_02115e30(v2, unk_ce4 + off, 0x14);
        v3 = 0x10;
        func_02115e30(v3, unk_ce4 + (off + 0x20), 0x14);
        off += 0x40;
    }
    func_ov120_02292df8(2);
}

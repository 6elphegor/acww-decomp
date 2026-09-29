#include "types.h"

extern "C" {
void *func_021355f0(void *arr, u32 n, u32 sz, void (*dtor)(void *));
void *func_02135714(void *arr, u32 n, u32 sz, void (*ctor)(void *), void (*dtor)(void *));
void func_02004b60(void *p);
void func_0203442c(void *p);
void *func_0209cbe0();
s32 func_020e7fcc(void *a, void *b);
extern u8 data_021c7c88[];
extern void *data_020dcbd0[];
extern u8 data_020e416c[];
extern u8 data_021d7350[];
extern u8 data_021ec780[];

void *func_0204da0c();
void *func_0204d528(s32 i);
void *func_020974a0(s32 i);
void *func_02098750(void *p);
s32 func_02097eb0(void *p, s32 i);
u16 *func_02097f6c(void *p, s32 i);
void func_02097f30(void *p, u16 *v, s32 i, s32 z);
void *func_020986c8(void *p);
void func_0203c41c(void *p, u16 *v, s32 z);
u16 func_02039dd4(s32 i);
void func_02039d94(s32 i, u16 v);
u16 *func_02039d74(void *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void *func_0204ebd8(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
void func_0204eb30(void *self, u16 *p, s32 x, s32 y, u32 flag);
void func_02061060(void *g);
void func_02061110(u16 *out, u16 *in);
}

struct Unk_02061060_Grid {
    u8 unk_00[0xc];
    s32 w;
    s32 h;
};

static inline BOOL Unk_02060e3c_Eq(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        s32 x = func_0204b25c(a);
        return x == func_0204b25c(b) ? TRUE : FALSE;
    }
    u16 p = *a;
    return p == *b ? TRUE : FALSE;
}

extern "C" {

void *func_02060b30(void *p) {
    func_021355f0(p, 0x100, 2, func_02004b60);
    return p;
}

void *func_02060b50(void *p) {
    func_02135714(p, 0x100, 2, func_0203442c, func_02004b60);
    return p;
}

s32 func_02060b7c() {
    void *r = func_0209cbe0();
    return func_020e7fcc(data_021c7c88, r);
}

void func_02060b98() {}

s32 func_02060b9c(u32 x) {
    switch (x) {
    case 9:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 31:
    case 33:
    case 34:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 52:
        return 0xe;
    case 53:
        return 0xc;
    case 36:
    case 45:
    case 46:
    case 47:
        return 0xd;
    case 35:
        return 0x10;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        return 0x1;
    case 12:
    case 13:
    case 27:
    case 28:
    case 29:
        return 0x4;
    case 10:
    case 14:
    case 15:
    case 26:
    case 32:
        return 0x2;
    case 21:
    case 22:
    case 23:
    case 50:
        return 0x0;
    case 25:
        return 0x6;
    case 37:
        return 0x5;
    case 30:
    case 54:
    case 55:
        return 0x9;
    case 49:
        return 0xa;
    case 8:
        return 0xb;
    case 11:
        return 0xc;
    case 51:
        return 0x8;
    case 59:
        return 0x7;
    case 48:
        return 0x11;
    case 24:
    case 56:
    case 57:
    case 58:
    default:
        return 0x4;
    }
    return 4;
}

s32 func_02060c70(u32 x) {
    switch (x) {
    case 0:
        return 0x32;
    case 1:
        return 0x32;
    case 2:
        return 0x5a;
    case 3:
        return 0x69;
    case 4:
        return 0x55;
    case 5:
        return 0x73;
    case 6:
        return 0x2a;
    case 7:
        return 0x104;
    case 8:
        return 0x3c;
    case 9:
        return 0x118;
    case 10:
        return 0xd;
    case 11:
        return 0x26;
    case 12:
        return 0x49;
    case 13:
        return 0x3a;
    case 14:
        return 0x52;
    case 15:
        return 0x23;
    case 16:
        return 0x3a;
    case 17:
        return 0x3c;
    case 18:
        return 0x2c;
    case 19:
        return 0x2d;
    case 20:
        return 0x46;
    case 21:
        return 0x26;
    case 22:
        return 0x4c;
    case 23:
        return 0x5a;
    case 24:
        return 0x5;
    case 25:
        return 0xe;
    case 26:
        return 0x2d;
    case 27:
        return 0x1c;
    case 28:
        return 0x12;
    case 29:
        return 0x2b;
    case 30:
        return 0x23;
    case 31:
        return 0x55;
    case 32:
        return 0x8;
    case 33:
        return 0x17;
    case 34:
        return 0x19;
    case 35:
        return 0x23;
    case 36:
        return 0x5a;
    case 37:
    case 57:
        return 0xf;
    case 38:
        return 0x23;
    case 39:
        return 0x1e;
    case 40:
        return 0x41;
    case 41:
        return 0x3c;
    case 42:
        return 0x44;
    case 43:
        return 0x3b;
    case 44:
        return 0x50;
    case 45:
        return 0x78;
    case 46:
        return 0x73;
    case 47:
        return 0xa0;
    case 48:
        return 0x2;
    case 49:
        return 0xa;
    case 50:
        return 0x6;
    case 51:
        return 0x9;
    case 52:
        return 0x1c;
    case 53:
        return 0x19;
    case 54:
        return 0x41;
    case 55:
        return 0xa0;
    case 56:
    default:
        return 0x0;
    }
    return 0;
}

s32 func_02060de4(u32 x) {
    if (x >= 4 && x <= 7) return 1;
    if (x >= 8 && x <= 0xf) return 2;
    if (x == 0x10) return 3;
    if ((u8)(x + 0xef) <= 1) return 4;
    if (x >= 0x13 && x <= 0x16) return 5;
    return 0;
}

void *func_02060e24(s32 i) {
    if (i < 0 || i > 11) i = 0;
    return data_020dcbd0[i];
}

void func_02060e3c() {
    void *m;
    u16 *q;
    u32 n, k, j;
    u16 t[8];
    func_02061060(func_0204da0c());
    for (j = 0; j < 5; j++) {
        func_02061060(func_0204d528(j));
    }
    for (k = 0; k < 7; k++) {
        m = func_020974a0(k);
        if (m) {
            for (j = 0; j < 15; j++) {
                s32 s = func_02097eb0(func_02098750(m), j);
                t[0] = *func_02097f6c(func_02098750(m), j);
                func_02061110(&t[1], &t[0]);
                if (!Unk_02060e3c_Eq(&t[1], &t[0]) && s == 0) {
                    func_02097f30(func_02098750(m), &t[1], j, 0);
                    func_0203c41c(func_020986c8(m), &t[1], 0);
                }
            }
        }
    }
    for (k = 0; k < 15; k++) {
        t[2] = func_02039dd4(k);
        func_02061110(&t[3], &t[2]);
        if (!Unk_02060e3c_Eq(&t[2], &t[3])) {
            func_02039d94(k, t[3]);
        }
    }
    for (k = 0; k < 15; k++) {
        q = (u16 *)(data_021d7350 + k * 2 + 0x15ec0);
        t[4] = *q;
        func_02061110(&t[5], &t[4]);
        if (!Unk_02060e3c_Eq(&t[4], &t[5])) {
            *q = t[5];
        }
    }
    for (k = 0; k < 4; k++) {
        q = func_02039d74(data_021ec780 + k * 0xb4);
        for (n = 0; n < 90; q++, n++) {
            t[6] = *q;
            func_02061110(&t[7], &t[6]);
            if (!Unk_02060e3c_Eq(&t[6], &t[7])) {
                *q = t[7];
            }
        }
    }
}

void func_02061060(void *g) {
    Unk_02061060_Grid *gr = (Unk_02061060_Grid *)g;
    s32 y;
    s32 x;
    s32 hx;
    s32 hy;
    u16 t;
    u16 *p;
    if (gr) {
        for (y = 0; y < gr->h; y++) {
            x = 0;
            if (x < gr->w) {
                goto test;
            loop:
                hx = x >> 4;
                hy = y >> 4;
                p = (u16 *)func_0204ebd8(gr, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (p) {
                    func_02061110(&t, p);
                    if (!Unk_02060e3c_Eq(p, &t)) {
                        func_0204eb30(gr, &t, x, y, 0);
                    }
                }
                x++;
            test:
                if (x < gr->w) goto loop;
            }
        }
    }
}

static inline BOOL Unk_02061110_In(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_02061110_Idx(u32 v) {
    s32 r;
    if (v >= 0x38e4 && v <= 0x3933) r = (s32)(v - 0x38e4) >> 2;
    else r = -1;
    return r;
}

void func_02061110(u16 *out, u16 *in) {
    if (Unk_02061110_In(in, 0x38e4, 0x3933)) {
        s32 idx = Unk_02061110_Idx(*in);
        s32 m1 = -1;
        if (idx != m1) {
            *out = (u32)idx < 0x14 ? 0x3934 + idx * 4 : 0x3934;
            return;
        }
    }
    *out = *in;
}


static inline BOOL Unk_02061168_In(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02061168_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

void func_02061168(u16 *out, u16 *in, s32 n) {
    if (Unk_02061168_IsOne(data_020e416c[0]) || n != 0) {
    u16 *pv = in;
    if (Unk_02061168_In(pv, 0x11a8, 0x12a7)) {
        s32 idx;
        u32 v = *pv;
        if (v >= 0x11a8 && v <= 0x12a7) idx = v - 0x11a8;
        else idx = -1;
        *out = (u32)idx < 0x100 ? 0x3984 + idx * 4 : 0x3984;
        return;
    }
    if (*in >= 0x12b0 && *in <= 0x12e7) {
        s32 idx;
        if (*in >= 0x12b0 && *in <= 0x12e7) idx = *in - 0x12b0;
        else idx = -1;
        *out = (u32)idx < 0x38 ? 0x42a4 + idx * 4 : 0x42a4;
        return;
    }
    if (*in >= 0x12e8 && *in <= 0x131f) {
        s32 idx;
        if (*in >= 0x12e8 && *in <= 0x131f) idx = *in - 0x12e8;
        else idx = -1;
        *out = (u32)idx < 0x38 ? 0x4384 + idx * 4 : 0x4384;
        return;
    }
    if (*in >= 0x1380 && *in <= 0x139f) {
        s32 idx;
        if (*in >= 0x1380 && *in <= 0x139f) idx = *in - 0x1380;
        else idx = -1;
        *out = (u32)idx < 0x20 ? 0x3e24 + idx * 4 : 0x3e24;
        return;
    }
    if (*in >= 0x13c8 && *in <= 0x1407) {
        s32 idx;
        if (*in >= 0x13c8 && *in <= 0x1407) idx = *in - 0x13c8;
        else idx = -1;
        *out = (u32)idx < 0x40 ? 0x3fa4 + idx * 4 : 0x3fa4;
        return;
    }
    if (*in >= 0x13a8 && *in <= 0x13c7) {
        s32 idx;
        if (*in >= 0x13a8 && *in <= 0x13c7) idx = *in - 0x13a8;
        else idx = -1;
        *out = (u32)idx < 0x20 ? 0x40a4 + idx * 4 : 0x40a4;
        return;
    }
    if (*in >= 0x1431 && *in <= 0x1470) {
        s32 idx;
        if (*in >= 0x1431 && *in <= 0x1470) idx = *in - 0x1431;
        else idx = -1;
        *out = (u32)idx < 0x40 ? 0x4124 + idx * 4 : 0x4124;
        return;
    }
    if (*in >= 0x137c && *in <= 0x137c) {
        *out = 0x44dc;
        return;
    }
    if (*in >= 0x1408 && *in <= 0x1428) {
        s32 idx;
        if (*in >= 0x1408 && *in <= 0x1428) idx = *in - 0x1408;
        else idx = -1;
        *out = (u32)idx < 0x21 ? 0x4464 + idx * 4 : 0x4464;
        return;
    }
    if (*in >= 0x1471 && *in <= 0x1491) {
        s32 idx;
        if (*in >= 0x1471 && *in <= 0x1491) idx = *in - 0x1471;
        else idx = -1;
        *out = (u32)idx < 0x21 ? 0x4464 + idx * 4 : 0x4464;
        return;
    }
    if (*in >= 0x1554 && *in <= 0x155c) {
        s32 idx;
        if (*in >= 0x1554 && *in <= 0x155c) idx = *in - 0x1554;
        else idx = -1;
        *out = (u32)idx < 0x9 ? 0x44e8 + idx * 4 : 0x44e8;
        return;
    }
    } else {
        if (Unk_02061168_In(in, 0x137c, 0x137c)) {
            *out = 0x1e;
            return;
        }
        if (*in >= 0x1408 && *in <= 0x1428) {
            s32 idx;
            if (*in >= 0x1408 && *in <= 0x1428) idx = *in - 0x1408;
            else idx = -1;
            *out = idx;
            return;
        }
        if (*in >= 0x1471 && *in <= 0x1491) {
            s32 idx;
            if (*in >= 0x1471 && *in <= 0x1491) idx = *in - 0x1471;
            else idx = -1;
            *out = idx;
            return;
        }
        if (*in >= 0x153b && *in <= 0x1541) {
            s32 idx;
            if (*in >= 0x153b && *in <= 0x1541) idx = *in - 0x153b;
            else idx = -1;
            *out = idx + 0xd4;
            return;
        }
    }
    *out = *in;
}

}

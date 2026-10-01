#include "types.h"

struct Unk_ov119_02295840 {
    /* 0x0000 */ u8 pad_00[0x98];
    /* 0x0098 */ u16 unk_98;
    /* 0x009a */ s16 unk_9a;
    /* 0x009c */ u8 unk_9c;
    /* 0x009d */ u8 unk_9d;
    /* 0x009e */ u8 pad_9e[2];
    /* 0x00a0 */ u8 unk_a0;
    /* 0x00a1 */ u8 pad_a1[0xad - 0xa1];
    /* 0x00ad */ u8 unk_ad;
    /* 0x00ae */ u8 pad_ae;
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 pad_b2[2];
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 pad_b5[7];
    /* 0x00bc */ u8 unk_bc[0x20];
    /* 0x00dc */ u8 unk_dc[0x3d0 - 0xdc];
    /* 0x03d0 */ u8 unk_3d0[0x9d4 - 0x3d0];
    /* 0x09d4 */ u8 unk_9d4[0x19d4 - 0x9d4];
    /* 0x19d4 */ u32 unk_19d4;
    /* 0x19d8 */ u16 unk_19d8[16];
    /* 0x19f8 */ u16 unk_19f8[16];
    /* 0x1a18 */ u16 unk_1a18[16];
    /* 0x1a38 */ u16 unk_1a38[16];
    /* 0x1a58 */ u8 unk_1a58[0x24];
    /* 0x1a7c */ u8 unk_1a7c[0x24];
    /* 0x1aa0 */ u8 unk_1aa0[0x24];
};

typedef Unk_ov119_02295840 S;

struct Unk_ov119_02293ed0_Sess {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern u32 data_ov119_02295648[];
extern Unk_ov119_02293ed0_Sess *data_020cbb18;

extern "C" {
void *func_02076cf0(void *p);
BOOL func_02076f04(void *p);
void *func_02076db4(void *p);
void *func_02098674(void *p);
void *func_0209750c();
void *func_020ea574();
void func_02116048(void *src, void *dst, s32 n);
BOOL func_020e9d7c(void *p);
void *func_02076e1c(void *p);
BOOL func_020e9d88(void *p, void *q);
s32 func_020e9d70(void *p);
s32 func_020eaf18();
void func_02115e48(void *src, void *dst, s32 n);
s32 func_02133150(s32 a, s32 b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_020b86c0(void *p, u32 a, s32 b, s32 c, s32 d);
void func_020b8670(void *p, void *q, s32 a, s32 b);
s32 func_02087e14(void *p);
s32 func_02087e0c(void *p);
void func_0200402c(u32 a);
void func_02076d68(void *p);
void func_02076cf4(void *p);
void func_0206ed2c(u32 v);
BOOL func_02076e20(void *p);
BOOL func_02072e44(void *p);
void func_02094030(void *p);
void func_02094018(void *p);
void *func_02097520(u32 a);
void *func_02098680(void *a);
void *func_0209888c(...);
void func_02076f58(void *a, void *b);
void *func_02076c7c(void *a);
void *func_02094104(void *a);
void func_02051268(void *a, void *b, s32 c);
void *func_0209409c(void *a);
void *func_02063964(void *a);
void *func_02076cec(void *a);
void *func_02076ce8(void *a);
void func_020ed174(void *a);
BOOL func_020e9c78(u32 a, void *b);
void func_020940d0(void *a, void *b);
void func_ov090_02291964();

void func_ov002_02200a58(void *self, s32 s);
void func_ov002_022016e4(void *p, s32 a);
void func_ov002_02201700(void *p, s32 a, s32 b);
void func_ov002_02201680(void *p, void *q, void *r, u32 s);

void func_ov119_02292dc0(S *s, u32 m);
void func_ov119_02292dd0(S *s, u32 m);
BOOL func_ov119_02292de0(S *s, u32 m);
void func_ov119_02292df4(S *s);
void func_ov119_02292ecc(S *s, s32 a);
u32 func_ov119_02293010(S *s, s32 a);
void func_ov119_0229305c(S *s, u32 m);
void func_ov119_022930d4(S *s);
BOOL func_ov119_022935fc(S *s, void *p);
void func_ov119_02294568(S *s, s32 a);
s32 func_ov119_022945a4(S *s);
s32 func_ov119_02294fa8(S *s);
BOOL func_ov119_02294fbc(S *s, s32 a);

s32 func_ov119_02293640(S *s);
s32 func_ov119_02293674(S *s);
void func_ov119_0229371c(S *s);
BOOL func_ov119_02293744(S *s);
void func_ov119_02293784(S *s);
u32 func_ov119_022937d0(S *s);
void *func_ov119_022937e8(S *s);
void *func_ov119_02293810(S *s);
BOOL func_ov119_02293828(S *s);
void func_ov119_02293844(S *s, s32 x);
u16 func_ov119_02293924(S *s, s32 c1, s32 c2, s32 t, s32 n);
void func_ov119_022939cc(S *s);
u8 func_ov119_02293ab8(S *s, s32 x, s32 y);
BOOL func_ov119_02293b48(S *s);
void func_ov119_02293c08(S *s, s32 x);
void func_ov119_02293c44(S *s);
void func_ov119_02293d4c(S *s);
void func_ov119_02293d9c(S *s, s32 x);
void func_ov119_02293dc8(S *s);
void func_ov119_02293e10(S *s);
void func_ov119_02293e5c(S *s);
void func_ov119_02293ed0(S *s);
}

extern "C" {

s32 func_ov119_02293640(S *s)
{
    s32 i;
    u8 *p = (u8 *)func_ov119_02293810(s);
    for (i = 0; i < 0x20; p += 0x1c, i++) {
        if (func_02076f04(func_02076cf0(p)) == 0) {
            return i;
        }
    }
    return -1;
}

s32 func_ov119_02293674(S *s)
{
    u8 *a = (u8 *)func_020ea574();
    u8 *b = (u8 *)func_ov119_02293810(s);
    s32 i;
    s32 result = 0;
    u32 tmp[3];
    for (i = 0; i < 0x20; i++) {
        func_02116048(a + i * 12, tmp, 12);
        if (func_020e9d7c(tmp) == 0) {
            if (func_02076f04(func_02076cf0(b + i * 0x1c)) == 0) {
                continue;
            }
        }
        u8 *rec = b + i * 0x1c;
        if (func_020e9d88(tmp, func_02076e1c(func_02076cf0(rec))) != 0) {
            s32 t = func_020e9d70(tmp);
            if (t == func_020e9d70(func_02076e1c(func_02076cf0(rec)))) {
                continue;
            }
        }
        func_02116048(tmp, func_02076e1c(func_02076cf0(rec)), 12);
        result = 1;
    }
    return result;
}

void func_ov119_0229371c(S *s)
{
    if (func_ov119_02293828(s)) {
        func_ov119_02293784(s);
    } else {
        func_02076d68(func_02098674(func_0209750c()));
    }
}

BOOL func_ov119_02293744(S *s)
{
    u8 *b = (u8 *)func_ov119_02293810(s);
    s32 flag = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(b + i * 0x1c)) != 0) {
            if (flag != 0) {
                return TRUE;
            }
        } else {
            flag = 1;
        }
    }
    return FALSE;
}

void func_ov119_02293784(S *s)
{
    u8 *b = (u8 *)func_ov119_02293810(s);
    s32 i;
    s32 n = 0;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(b + i * 0x1c))) {
            s->unk_bc[n] = i;
            n++;
        }
    }
    for (; n < 0x20; n++) {
        s->unk_bc[n] = 0x20;
    }
}

u32 func_ov119_022937d0(S *s)
{
    return s->unk_bc[s->unk_a0 + (s->unk_9c << 3)];
}

void *func_ov119_022937e8(S *s)
{
    u8 *b = (u8 *)func_ov119_02293810(s);
    s32 v = func_ov119_022937d0(s);
    if (v >= 0x20) {
        return 0;
    }
    return b + v * 0x1c;
}

void *func_ov119_02293810(S *s)
{
    return func_02076db4(func_02098674(func_0209750c()));
}

BOOL func_ov119_02293828(S *s)
{
    s32 t = func_020eaf18();
    switch (t) {
    case 3:
    case 4:
        return TRUE;
    }
    return FALSE;
}

void func_ov119_02293844(S *s, s32 x)
{
    s32 v = x;
    s32 i;
    if (v < 0) {
        v = 0;
    } else if (v > 5) {
        v = 5;
    }
    func_ov119_02292dd0(s, 0x20);
    func_02115e48(s->unk_19d8, s->unk_1a18, 0x20);
    func_02115e48(s->unk_19f8, s->unk_1a38, 0x20);
    for (i = 2; i <= 5; i++) {
        s->unk_1a38[i] = func_ov119_02293924(s, s->unk_19f8[i], s->unk_19f8[14], v, 5);
    }
    s->unk_1a38[15] = func_ov119_02293924(s, s->unk_19f8[15], s->unk_19f8[14], v, 5);
    for (i = 1; i <= 3; i++) {
        s->unk_1a18[i] = func_ov119_02293924(s, s->unk_19d8[i], s->unk_19d8[14], v, 5);
    }
    s->unk_1a18[15] = func_ov119_02293924(s, s->unk_1a18[15], s->unk_19d8[14], v, 5);
}

u16 func_ov119_02293924(S *s, s32 c1, s32 c2, s32 t, s32 n)
{
    u8 r = c2 & 0x1f;
    u8 g = (c2 & 0x3e0) >> 5;
    u8 b = (c2 & 0x7c00) >> 10;
    s32 k = n - t;
    r = ((u8)(c1 & 0x1f) * t + r * k) / n;
    g = ((u8)((c1 & 0x3e0) >> 5) * t + g * k) / n;
    b = ((u8)((c1 & 0x7c00) >> 10) * t + b * k) / n;
    return r | (g << 5) | (b << 10);
}

void func_ov119_022939cc(S *s)
{
    func_ov119_02292df4(s);
    if (func_ov119_02292de0(s, 4)) {
        if (s->unk_9c <= 3) {
            func_0206ee80(s->unk_9d4, 5, 6, 0x17, 0x15, 3);
            s32 v = s->unk_9a;
            if (v != -1) {
                s32 y = v * 2 + 6;
                func_0206ee80(s->unk_9d4, 5, y, 0x17, y + 1, 4);
            }
        }
        func_ov119_02292dc0(s, 4);
        func_ov119_02292dd0(s, 2);
    }
    if (func_ov119_02292de0(s, 2)) {
        if (func_020b86c0(s->unk_1a58, s->unk_19d4, 4, 0x800, 0)) {
            func_ov119_02292dc0(s, 2);
        }
    }
    if (func_ov119_02292de0(s, 0x20)) {
        func_020b8670(s->unk_1a7c, s->unk_1a38, 6, 3);
        func_020b8670(s->unk_1aa0, s->unk_1a18, 8, 10);
    }
}

u8 func_ov119_02293ab8(S *s, s32 x, s32 y)
{
    s32 i;
    s32 t = func_02087e14((u8 *)data_ov119_02295648[0] + 8) + 0x83;
    if (t <= x && t + 0x22 >= x) {
        for (i = 0; i < 6; i++) {
            s32 u = func_02087e0c((u8 *)data_ov119_02295648[i] + 8) + 0x61;
            if (u <= y && u + 0x12 >= y) {
                return (u8)(i + 8);
            }
        }
    }
    if (x >= 0x18 && x <= 0xc0 && y >= 0x30 && y < 0xb0) {
        s32 r = (y - 0x30) >> 4;
        if (r < s->unk_af) {
            return (u8)r;
        }
    }
    if (x >= 0xc3 && x <= 0xf3 && y >= 0x9f && y <= 0xb5) {
        return 0x16;
    }
    return 0x17;
}

BOOL func_ov119_02293b48(S *s)
{
    u32 m = s->unk_a0;
    if (m >= 0xe && m <= 0x15) {
        if (func_ov119_02294fbc(s, m - 0xe)) {
            return TRUE;
        }
        return FALSE;
    }
    if (m >= 8 && m <= 0xd) {
        u8 k = m - 8;
        if (k != s->unk_9d) {
            s->unk_9d = k;
            func_ov002_02200a58(s, 0xe);
            if (k == 4) {
                func_0200402c(0xf);
            } else {
                func_0200402c(0xb);
            }
            return TRUE;
        }
        return FALSE;
    }
    if (m == 0x16) {
        s->unk_b0 = 8;
        s->unk_b1 = 3;
        func_ov002_02200a58(s, 8);
        func_0200402c(0x2b);
        return TRUE;
    }
    if (m <= 7) {
        s->unk_9a = m;
        func_ov119_02292dd0(s, 4);
        s->unk_b1 = 3;
        func_ov002_02200a58(s, 8);
        func_0200402c(0x2b);
        return TRUE;
    }
    return FALSE;
}

void func_ov119_02293c08(S *s, s32 x)
{
    func_ov119_02293784(s);
    u32 t = func_ov119_02293010(s, x);
    if (t != s->unk_9d) {
        func_ov119_0229305c(s, t);
    } else {
        func_ov119_022930d4(s);
    }
    func_ov119_022945a4(s);
}

void func_ov119_02293c44(S *s)
{
    s32 i = func_ov119_02293640(s);
    if (i == -1) {
        func_ov119_02294568(s, 0x13);
        return;
    }
    void *a = func_02097520(s->unk_ad - 6);
    if (func_ov119_022935fc(s, func_02076c7c(func_02098680(a)))) {
        func_ov119_02294568(s, 0x14);
        return;
    }
    u8 *b = (u8 *)func_ov119_02293810(s);
    void *c = func_0209888c(a);
    u8 *rec = b + i * 0x1c;
    void *d = func_02076cf0(rec);
    func_02076f58(d, func_02076c7c(func_02098680(a)));
    void *e = func_02094104(c);
    func_02051268(e, func_02076cec(rec), 8);
    void *f = func_02063964(func_0209409c(c));
    func_02051268(f, func_02076ce8(rec), 8);
    func_020ed174(s);
    func_ov090_02291964();
    s->unk_b4 = i;
    if (func_ov119_02293828(s)) {
        if (func_020e9c78(s->unk_b4, func_02076e1c(func_02076cf0(b + s->unk_b4 * 0x1c))) == 0) {
            func_ov002_02200a58(s, 0x10);
            return;
        }
    }
    func_ov119_02293c08(s, i);
}

void func_ov119_02293d4c(S *s)
{
    s32 i = func_ov119_02293640(s);
    if (i == -1) {
        func_ov119_02294568(s, 0x13);
    } else {
        func_02076cf4((u8 *)func_ov119_02293810(s) + i * 0x1c);
        func_0206ed2c((u8)i);
        func_ov119_02294fbc(s, 0xe);
        func_ov119_02294fa8(s);
    }
}

void func_ov119_02293d9c(S *s, s32 x)
{
    func_0206ed2c((u8)func_ov119_022937d0(s));
    func_ov119_02294fbc(s, x);
    func_ov119_02294fa8(s);
}

void func_ov119_02293dc8(S *s)
{
    void *rec = func_ov119_022937e8(s);
    if (rec) {
        func_02076cf4(rec);
        s->unk_9a = -1;
        func_ov119_02292dd0(s, 2);
        func_ov119_022930d4(s);
        s->unk_b1 = 1;
        func_ov002_02200a58(s, 9);
        s->unk_b4 = func_ov119_022937d0(s);
    }
}

void func_ov119_02293e10(S *s)
{
    func_ov002_022016e4(s->unk_3d0, 0xa);
    func_ov002_02201700(s->unk_3d0, 0xd3, 0xa);
    func_ov002_02201700(s->unk_3d0, 4, 1);
    func_ov002_02201700(s->unk_3d0, 0x13, 0xa);
    func_ov119_02292ecc(s, 1);
    func_ov119_02292dd0(s, 0x10);
}

void func_ov119_02293e5c(S *s)
{
    func_ov002_022016e4(s->unk_3d0, 0xa);
    func_ov002_02201700(s->unk_3d0, 0xcf, 3);
    func_ov002_02201700(s->unk_3d0, 0xd0, 2);
    void *rec = func_ov119_022937e8(s);
    if (rec) {
        if (func_02076e20(func_02076cf0(rec)) == 0) {
            func_ov002_02201700(s->unk_3d0, 0xd1, 4);
        }
    }
    func_ov002_02201700(s->unk_3d0, 0xd2, 0);
    func_ov002_02201700(s->unk_3d0, 2, 0xa);
    func_ov119_02292ecc(s, 0);
}

void func_ov119_02293ed0(S *s)
{
    s->unk_b0 = 7;
    func_ov002_022016e4(s->unk_3d0, 0xa);
    Unk_ov119_02293ed0_Sess *g = data_020cbb18;
    if (func_02072e44(g)) {
        s32 skip = g->unk_64;
        s32 i = 0;
        u32 tmp[7];
        func_02094030(tmp);
        for (; i < 4; i++) {
            if (skip != i) {
                void *p = func_02097520(i);
                if (p) {
                    func_020940d0(func_0209888c(p), tmp);
                    func_ov002_02201680(s->unk_dc, s->unk_3d0, tmp, (u8)(i + 6));
                }
            }
        }
        func_02094018(tmp);
    }
    func_ov002_02201700(s->unk_3d0, 0xce, 5);
    func_ov002_02201700(s->unk_3d0, 2, 0xa);
    func_ov119_02292ecc(s, 0);
}

}

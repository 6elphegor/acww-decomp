#include "types.h"

struct Unk_ov095_02292360 {
    u16 flags;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05[0xb];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[5];
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u8 *unk_30;
    u8 unk_34[0x233c - 0x34];
    u8 unk_233c[0x40];
    u8 unk_237c[0x2bbc - 0x237c];
    u8 unk_2bbc[0x1000];
};

struct Unk_ov095_02295e48 {
    s32 v[2];
};

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u32 data_021f482c;
extern u32 data_ov095_0229605c[];
extern u8 data_ov095_02295da4[];
extern u8 data_ov095_02295dd4[];
extern u8 data_ov095_02295894[];
extern u8 data_ov095_022958bc[];
extern u8 data_ov095_02295590[];
extern u8 data_ov095_02295e68[];
extern u8 data_ov095_02295588[];
extern u8 data_ov095_02295580[];
extern Unk_ov095_02295e48 data_ov095_02295e48[];
extern void *data_ov095_02295598[];
extern u8 data_ov095_0229679c[];
extern u8 data_ov095_022967b0[];
extern u8 data_ov095_022967cc[];
extern u8 data_ov095_022967e8[];

s32 func_02087e14(void *p);
s32 func_02087e70(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
s32 func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_02087d6c(void *p, s32 n, s32 c, s32 d, s32 e, s32 f);
BOOL func_02087dac(void *p, s32 a, s32 b, s32 c, s32 d);
void func_0200402c(s32 a);
s32 func_0203f0c0(void);
s32 func_0203f07c(s32 i);
s32 func_020641b4(void *name, void *buf, s32 size);
s32 func_02002438(void *, u32, u32, u32, u32);
s32 func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0200261c(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0206f9fc(void *a, s32 b);
s32 func_0206fb48(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0206fab4(void *a, s32 b, s32 c);
s32 func_02051270(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
u32 func_02051370(u32 c);
s32 func_02051268(void *src, void *dst, s32 n);
void *func_020e8618(u32 heap, s32 size);
s32 func_020e85fc(u32 heap, void *p);
s32 func_0206cf4c(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);

void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m);
BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292380(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229423c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294520(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294550(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294594(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022945e0(Unk_ov095_02292360 *s, s32 a, s32 b);
s32 func_ov095_02294648(Unk_ov095_02292360 *s, s32 a, s32 b, s32 c);
s32 func_ov095_022940f0(Unk_ov095_02292360 *s, void *a, s32 b, u8 *c, s32 d, s32 e, s32 f, s32 g);

void func_ov095_02293da8(Unk_ov095_02292360 *s);
void func_ov095_02293dc0(Unk_ov095_02292360 *s);
void *func_ov095_02293b0c(Unk_ov095_02292360 *s);
s32 func_ov095_022937e4(void *s, s32 x, s32 y, s32 idx);
s32 func_ov095_02293b24(Unk_ov095_02292360 *s, s32 x, s32 y);

s32 func_ov095_022937a8(Unk_ov095_02292360 *s, s32 a)
{
    s32 r;
    switch (a) {
    case 0xca:
    case 0xcb:
    case 0xcc:
        r = func_02087e14(s->unk_30 + ((a - 0xca) << 3)) + 0x88;
        break;
    default:
        r = 0x80;
    }
    return r;
}

s32 func_ov095_022937d0(void *s, s32 x, s32 y, s32 idx)
{
    return func_ov095_022937e4(s, x - 0x20, y + 0x32, idx);
}

s32 func_ov095_022937e4(void *s, s32 x, s32 y, s32 idx)
{
    return func_02087e70(1, (void *)data_ov095_0229605c[idx], x, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
}

void func_ov095_02293824(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    func_02087e70(1, data_ov095_02295da4, x, y, s->unk_05[0], 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov095_02295dd4, x, y, s->unk_05[1], 1, 0x1000, 0x1000, 0, -1, 0, 0);
}

void func_ov095_0229388c(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    func_02087e70(1, data_ov095_02295894, x, y, s->unk_05[0], 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov095_022958bc, x, y, s->unk_05[1], 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void func_ov095_022938f8(void *s, s32 x, s32 y, s32 z)
{
    func_02088730(1, data_ov095_02295590, x, y, -1, z, 0);
}

s32 func_ov095_02293924(Unk_ov095_02292360 *s)
{
    u32 i = s->unk_03;
    if (i >= 4) {
        return 0xff;
    }
    return s->unk_28[i];
}

void func_ov095_02293938(Unk_ov095_02292360 *s, s32 v)
{
    s->unk_03 = v - 0x11b;
}

void func_ov095_02293944(Unk_ov095_02292360 *s)
{
    s->unk_03 = 0xff;
}

BOOL func_ov095_0229394c(Unk_ov095_02292360 *s)
{
    s32 r = func_02087d6c(data_ov095_02295e68, s->unk_04, data_021ef5f0 - 0x80, data_021ef5ec - 0x60, 0, 0);
    if (r == -1) {
        return FALSE;
    }
    s->unk_03 = r;
    return TRUE;
}

BOOL func_ov095_02293990(Unk_ov095_02292360 *s)
{
    s32 r = func_02087d6c(s->unk_30, 3, data_021ef5f0 - 0x80, data_021ef5ec - 0x60, 2, 2);
    if (r == -1) {
        return FALSE;
    }
    switch (r) {
    case 0:
        r = 1;
        break;
    case 2:
        r = 2;
        break;
    case 1:
        r = 3;
        break;
    }
    if (r == s->unk_02) {
        return FALSE;
    }
    s->unk_02 = r;
    func_0200402c(0x18);
    return TRUE;
}

BOOL func_ov095_022939f8()
{
    if (func_02087dac(data_ov095_02295588, data_021ef5f0 - 0x80, data_021ef5ec - 0x60, 0, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov095_02293a30(void *s, s32 x, s32 y, s32 z, s32 w)
{
    func_02088730(1, data_ov095_02295588, x, y + w, z, 2, 0);
    func_02088730(1, data_ov095_02295580, x, y, -1, 2, 0);
}

void func_ov095_02293a78(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    s32 i;
    s32 t10, t14;
    s32 z[3];
    z[0] = 0; z[1] = 0; z[2] = 0;
    for (i = 0; i < s->unk_04; i++) {
        t10 = -1;
        t14 = y;
        if (s->unk_03 == i) {
            t10 = 0xb;
            t14 = y + 2;
        }
        func_02088730(1, &data_ov095_02295e48[i], x, t14, -1, 2, z[0]);
        func_02088730(1, &data_ov095_02295e48[i + 4], x, t14, t10, 2, z[1]);
        func_02088730(1, &data_ov095_02295e48[i + 8], x, y, -1, 2, z[2]);
    }
}

s32 func_ov095_02293b24(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    return func_02087e70(1, func_ov095_02293b0c(s), x, y, -1, 3, 0x1000, 0x1000, 0, -1, 0, 0);
}

s32 func_ov095_02293b60(Unk_ov095_02292360 *s, s32 x, s32 y, s32 z)
{
    s32 sel = 0;
    volatile s32 A, B;
    s32 i;
    switch (s->unk_02) {
    case 1:
        break;
    case 2:
        sel = 2;
        break;
    case 3:
        sel = 1;
        break;
    }
    i = 0;
    B = i;
    A = i;
    for (; i < 3; i++) {
        if (sel == i) {
            func_02088730(1, s->unk_30 + (i << 3), x, y + 2, 0xb, z, A);
        } else {
            func_02088730(1, s->unk_30 + (i << 3), x, y, 0xa, z, B);
        }
    }
    func_02087e70(1, s->unk_30 + 0x18, x, y, -1, z, 0x1000, 0x1000, 0, -1, 0, 0);
    if (func_ov095_02292370(s, 4) == 0) {
        y -= 8;
    }
    return func_ov095_02293b24(s, x, y);
}

void func_ov095_02293c1c(Unk_ov095_02292360 *s)
{
    s32 i;
    s32 v;
    s32 off;
    u32 p;
    s->unk_04 = func_0203f0c0();
    for (i = 0; i < s->unk_04; i++) {
        s->unk_28[i] = func_0203f07c(i);
    }
    func_020641b4(data_ov095_0229679c, s->unk_2bbc, 0x1000);
    for (i = 0; i < s->unk_04; i++) {
        v = s->unk_28[i] - 1;
        off = ((v & 0xf) << 6) + ((v >> 4) << 11);
        p = i * 2 + 0x109;
        func_02002438(s->unk_2bbc + off, 8, p, p, p + 1);
        func_02002438(s->unk_2bbc + (off + 0x400), 8, p + 0x20, p + 0x20, p + 0x21);
    }
}

void func_ov095_02293cc0(Unk_ov095_02292360 *s)
{
    u32 h = data_021f482c;
    func_020026c4(data_ov095_022967b0, h, 8, 4, 4, 0xe);
    func_0200261c(data_ov095_022967cc, h, 8, 0xc0, 0xc0, 0x13f);
    func_0200261c(data_ov095_022967e8, h, 8, 0x180, 0x180, 0x1ff);
    func_0206f9fc(s->unk_233c, 0x9c);
    func_0206fb48(s->unk_233c, 8, 0xd8, 4, 0xa, 0, 0);
    func_0206fab4(s->unk_233c, 1, 0);
    func_0206f9fc(s->unk_237c, 0x9d);
    func_0206fb48(s->unk_237c, 8, 0xf8, 4, 0xa, 0, 0);
    func_0206fab4(s->unk_237c, 1, 0);
}

void func_ov095_02293d88(Unk_ov095_02292360 *s)
{
    func_ov095_02292360(s, 2);
}

void func_ov095_02293d94(Unk_ov095_02292360 *s)
{
    func_ov095_02292368(s, 2);
}

u8 func_ov095_02293da0(Unk_ov095_02292360 *s)
{
    return s->unk_2d;
}

s32 func_ov095_02293dc8(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    if (a == 0x86) {
        func_ov095_02293dc0(s);
    }
    if (func_ov095_0229423c(s, a) == 0) {
        func_ov095_02294520(s, b);
        return 0;
    }
    switch (a) {
    case 0x101:
        func_ov095_02294648(s, 0, b, 1);
        func_0200402c(0x18);
        return 2;
    case 0x102:
        func_ov095_02294648(s, 1, b, 1);
        func_0200402c(0x18);
        return 2;
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
        break;
    case 0x11f:
        func_ov095_02294550(s, b);
        func_0200402c(0x18);
        return 2;
    case 0x120:
        func_ov095_02294594(s, b);
        func_0200402c(0x18);
        return 2;
    case 0x107:
    case 0x108:
    case 0x109:
        func_ov095_022945e0(s, a, b);
        func_0200402c(0x18);
        return 2;
    case 0x121:
        func_ov095_02294648(s, 4, b, 1);
        func_0200402c(0x18);
        return 2;
    case 0x122:
        func_ov095_02294648(s, 5, b, 1);
        func_0200402c(0x18);
        return 2;
    case 0x123:
        func_ov095_02294648(s, 2, b, 1);
        func_0200402c(0x18);
        return 2;
    }
    func_ov095_02294520(s, b);
    if (a == 0x100) {
        func_ov095_02293da8(s);
    }
    return 0;
}

u8 func_ov095_02293f2c(void *s, u8 *str, s32 a, s32 b, u8 limit0, u8 *out)
{
    s32 count;
    func_02051270(str, a, b, &count, 0);
    s32 i, w;
    w = 0;
    i = w;
    s32 limit = limit0;
    for (; i < count; i++) {
        s32 c = func_02051370(str[i]);
        if (w + (c >> 1) > limit) {
            if (out) {
                *out = i;
            }
            return w;
        }
        w += c;
    }
    if (out) {
        *out = count;
    }
    return w;
}

s32 func_ov095_02293f88()
{
    return 0;
}

s32 func_ov095_02293f8c()
{
    return 0;
}

s32 func_ov095_02293f90()
{
    return 0;
}

BOOL func_ov095_02293f94(Unk_ov095_02292360 *s, u8 *buf, s32 c, s32 n)
{
    if (n == 0) {
        return FALSE;
    }
    n--;
    buf[n] = c;
    func_ov095_02292380(s, c);
    return TRUE;
}

s32 func_ov095_02293fb4(void *s, u8 *buf, s32 a, s32 b, s32 n)
{
    s32 lo, hi, j, t;
    if (a > b) {
        lo = b;
        hi = a;
    } else {
        lo = a;
        hi = b;
    }
    for (j = 0; j + hi < n; j++) {
        t = buf[j + hi];
        buf[j + lo] = t;
    }
    hi -= lo;
    t = 0;
    for (j = 1; j <= hi; j++) {
        buf[n - j] = t;
    }
    return lo;
}

BOOL func_ov095_02293ff0(Unk_ov095_02292360 *s, void *p1, s32 p2, u8 *p3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9)
{
    u8 loc;
    s32 o24;
    s32 o28;
    struct Pad { s32 v[6]; Pad() {} ~Pad() {} } pad;
    u8 saved = s->unk_2d;
    u32 heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xc0);
    if (buf == NULL) {
        return FALSE;
    }
    func_02051268(p1, buf, a4);
    loc = *p3;
    if (func_ov095_022940f0(s, buf, p2, &loc, a4, 0x2710, a8, 0) == 0) {
        func_020e85fc(heap, buf);
        return FALSE;
    }
    if (func_0206cf4c((u8 *)buf, &o28, &o24, a4, a5, a7, a6) == 0) {
        if (s->unk_2d != saved) {
            s->unk_2d = saved;
        }
        func_020e85fc(heap, buf);
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x80);
        }
        return FALSE;
    }
    if (a8 == 0) {
        func_02051268(buf, p1, a4);
        *p3 = loc;
        if (a9 == 1 && loc != 0) {
            func_ov095_02292380(s, ((u8 *)p1)[loc - 1]);
        }
    }
    func_020e85fc(heap, buf);
    return TRUE;
}

void func_ov095_02293da8(Unk_ov095_02292360 *s)
{
    if (((volatile Unk_ov095_02292360 *)s)->unk_2d != 0) {
        s->unk_2d = ((volatile Unk_ov095_02292360 *)s)->unk_2d - 1;
    }
}

void func_ov095_02293dc0(Unk_ov095_02292360 *s)
{
    s->unk_2d = 0;
}

void *func_ov095_02293b0c(Unk_ov095_02292360 *s)
{
    u32 i = s->unk_02;
    if (i >= 4) {
        return NULL;
    }
    return data_ov095_02295598[i];
}
}

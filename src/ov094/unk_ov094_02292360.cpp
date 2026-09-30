#include "types.h"

extern "C" {
void func_0200402c(s32 a);
void func_02003ff4(s32 a, s32 b);
void func_02004008(s32 a);
void func_02088730(s32 a, const void *b, s32 c, void *d, s32 e, s32 f, s32 g);
s32 func_0209750c();
s32 func_02098750(s32 a);
s32 func_02097d1c(s32 a, s32 b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020b8670(void *a, void *b, s32 c, s32 d);
s32 func_020b8714(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_020b87d0(void *p);
void func_0206fc44(void *p);
s32 func_020639e8(char *buf, const void *fmt, ...);
void func_020641b4(const void *src, void *dst, s32 n);
s32 func_0209888c(...);
s32 func_0209411c();
u16 *func_02098744(s32 a);
extern u8 data_ov094_02294880[];
extern u8 data_ov094_02294888[];
extern u8 data_ov094_022948a4[];
extern u8 data_ov094_022948c0[];
extern u8 data_ov094_022948e0[];
extern u8 data_ov094_022948f8[];
extern u8 data_ov094_02294910[];
extern u8 data_ov094_02294928[];
extern u8 data_ov094_02294944[];
extern u8 data_ov094_02294960[];
extern u8 data_ov094_0229497c[];
extern s32 data_021f482c;
void func_020026c4(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063888(void *p);
void func_02063870(void *p);
void func_020638d0(s32 a, void *p);
s32 func_0209409c(s32 a);
void func_020b3544(s32 a, void *p);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206f9fc(void *p, s32 a);
void func_0206fab4(void *p, s32 a, s32 b);
void func_02094030(void *p);
void func_02094018(void *p);
void func_020940d0(s32 a, void *p);
void func_020a7bd8(void *a, void *b);

void func_ov094_02292360(void *o, u32 m);
void func_ov094_02292368(void *o, u32 m);
s32 func_ov094_02292370(void *o, u32 m);
void func_ov094_02292484(void *o);
void func_ov094_0229248c(void *o, u32 v);
void func_ov094_022929d0(void *o);
void func_ov094_022929ac(void *o);
void func_ov094_02292988(void *o);
s32 func_ov094_02292628();
void func_ov094_02292640(void *o, u32 v);
void func_ov094_02292814(void *o, s32 a, s32 b);
void func_ov094_0229272c(void *o);
BOOL func_ov094_02292738(void *o);
void func_ov094_02292774(void *o, u32 v);
void func_ov094_022927a4(void *o);
void func_ov094_022927d4(void *o);
void func_ov094_02292a00(void *o);
void func_ov094_02292a40(void *o);
void func_ov094_02292a60(void *o);
void func_ov094_02292b58(void *o);
void func_ov094_0229260c(void *o);
void func_ov094_02292864(void *o);
void func_ov094_02292534(void *o);
void func_ov094_02292490(void *o);
}

struct Unk_ov094_02292360_Obj {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16[0x1c];
    u16 unk_32;
};

struct Unk_ov094_022923a4_Pad {
    s32 v[2];
    Unk_ov094_022923a4_Pad() {}
    ~Unk_ov094_022923a4_Pad() {}
};

#define IN(x, lo, hi) ((x) >= (lo) && (x) <= (hi))

extern "C" {

void func_ov094_02292360(void *o, u32 m)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_08 = p->unk_08 & ~m;
}

void func_ov094_02292368(void *o, u32 m)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_08 = p->unk_08 | m;
}

s32 func_ov094_02292370(void *o, u32 m)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (p->unk_08 & m) {
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02292380()
{
    func_0200402c(13);
}

void func_ov094_0229238c()
{
    func_0200402c(12);
}

void func_ov094_02292398()
{
    func_0200402c(14);
}

BOOL func_ov094_022923a4(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x12e8, 0x131f) || IN(v, 0x12b0, 0x12e7)) {
        return FALSE;
    }
    if (IN(v, 0x137c, 0x137c) || IN(v, 0x1408, 0x1428) || IN(v, 0x1471, 0x1491)) {
        return FALSE;
    }
    return TRUE;
}

BOOL func_ov094_02292414(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x155d, 0x155d)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov094_02292430(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x155f, 0x1560)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov094_02292450(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x155f, 0x1560) || IN(v, 0x1561, 0x1564)) {
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02292484(void *o)
{
    ((Unk_ov094_02292360_Obj *)o)->unk_10 = 2;
}

void func_ov094_0229248c(void *o, u32 v)
{
    ((Unk_ov094_02292360_Obj *)o)->unk_10 = v;
}

void func_ov094_02292490(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    u32 a = p->unk_10;
    if (a != p->unk_0f) {
        p->unk_0f = a;
        func_ov094_022929d0(p);
        u32 b = p->unk_0f;
        switch (b) {
        case 0:
            func_ov094_022929ac(p);
            break;
        case 1:
            func_ov094_02292988(p);
            break;
        }
    }
}

BOOL func_ov094_022924c4(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x1531, 0x153a) || IN(v, 0x153b, 0x1541) || IN(v, 0x154a, 0x1553) ||
        IN(v, 0x12e8, 0x131f) || IN(v, 0x12b0, 0x12e7)) {
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02292534(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    s32 t = func_ov094_02292628();
    if (p->unk_13 != 0) {
        p->unk_13 = p->unk_13 - 1;
        if (p->unk_13 == 0) {
            p->unk_00 = t;
            func_ov094_02292640(p, 0);
            func_02003ff4(0x2d, 1);
            func_0200402c(0x3e);
        } else {
            s32 c = p->unk_00;
            if (c < t) {
                p->unk_00 = c + p->unk_04;
            } else {
                p->unk_00 = c - p->unk_04;
            }
        }
        func_ov094_02292368(p, 2);
    }
    if (func_ov094_02292370(p, 2)) {
        s32 v = p->unk_00;
        func_ov094_02292368(p, 1);
        u16 *q = (u16 *)((u8 *)p + 0x3f6);
        s32 i;
        for (i = 0; i < 5; i++) {
            s32 base;
            if (i < 3) {
                base = 0x2ec;
            } else {
                base = 0x2d8;
            }
            s32 d = v % 10 * 2;
            d += base;
            *q = (*q & 0xfc00) | d;
            q[0x20] = (q[0x20] & 0xfc00) | (d + 1);
            q--;
            v = v / 10;
        }
        func_ov094_02292360(p, 2);
    }
}

void func_ov094_0229260c(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_00 = func_ov094_02292628();
    p->unk_13 = 0;
    func_ov094_02292368(p, 2);
}

s32 func_ov094_02292628()
{
    return func_02097d1c(func_02098750(func_0209750c()), 0);
}

void func_ov094_02292640(void *o, u32 n)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    s32 x = 7;
    s32 y = 9;
    s32 z = 9;
    switch (n) {
    case 0:
        break;
    case 1:
        z = 8;
        x = y;
        break;
    case 2:
        z = 8;
        x = z;
        break;
    case 3:
        z = 8;
        break;
    }
    func_0206ee80((u8 *)p + 0x160, x, 10, 11, 11, z);
    func_ov094_02292368(p, 8);
    switch (n) {
    case 0:
    case 1:
        p->unk_32 = p->unk_0a;
        break;
    case 2:
    case 3:
        p->unk_32 = p->unk_0c;
        break;
    }
    func_ov094_02292368(p, 1);
}


void func_ov094_022926c8(void *o, u32 v)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    s32 t = func_ov094_02292628();
    s32 c = p->unk_00;
    if (t != c) {
        s32 d;
        if (t > c) {
            d = t - c;
        } else {
            d = c - t;
        }
        if (d < 30) {
            p->unk_13 = 1;
        } else {
            p->unk_13 = 14;
            p->unk_04 = d / 13;
            if (p->unk_04 % 5 == 0) {
                p->unk_04 = p->unk_04 - 1;
            }
            if (p->unk_04 <= 1) {
                p->unk_13 = 1;
            }
            func_ov094_02292640(p, v);
            func_02004008(0x2d);
        }
    }
}

void func_ov094_0229272c(void *o)
{
    ((Unk_ov094_02292360_Obj *)o)->unk_12 = 0;
    func_ov094_02292484(o);
}

BOOL func_ov094_02292738(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (p->unk_12 != 0) {
        p->unk_12 = p->unk_12 - 1;
        switch (p->unk_12 % 5) {
        case 3:
            func_ov094_0229248c(p, p->unk_11);
            break;
        case 0:
            func_ov094_02292484(p);
            break;
        }
        goto zero;
    }
    return TRUE;
zero:
    return FALSE;
}

void func_ov094_02292774(void *o, u32 v)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_11 = v;
    p->unk_12 = 14;
}

void func_ov094_0229277c(s32 a, void *o)
{
    func_02088730(1, data_ov094_02294880, 0x80, (u8 *)o + 0x60, -1, 2, 0);
}

void func_ov094_022927a4(void *o)
{
    if (func_ov094_02292370(o, 8)) {
        if (func_020b8670((u8 *)o + 0xa8, (u8 *)o + 0x16, 8, 6)) {
            func_ov094_02292360(o, 8);
        }
    }
}

void func_ov094_022927d4(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (func_ov094_02292370(p, 4)) {
        if (func_020b8714((u8 *)p + 0x70, (u8 *)p + 0x960, p->unk_0e, 0x35, 0x35, 0x98)) {
            func_ov094_02292360(p, 4);
        }
    }
}

void func_ov094_02292814(void *o, s32 a, s32 b)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    char buf[0x2c];
    if (b == 0) {
        func_020639e8(buf, data_ov094_02294888, a);
    } else {
        func_020639e8(buf, data_ov094_022948a4, a);
    }
    func_020641b4(buf, (u8 *)p + 0x960, 0xc80);
    p->unk_14 = a;
    func_ov094_02292368(p, 4);
}

void func_ov094_02292864(void *o)
{
    s32 a = func_0209750c();
    func_0209888c();
    s32 b = func_0209411c();
    u16 *pv = func_02098744(a);
    s32 idx = 0;
    BOOL fl = FALSE;
    u32 v = *pv;
    if (IN(v, 0x1369, 0x1369)) {
        fl = TRUE;
    }
    if (fl || IN(v, 0x136a, 0x136a)) {
        idx = 1;
    } else if (IN(v, 0x136b, 0x1372) || IN(v, 0x1373, 0x1373)) {
        idx = 2;
    } else if (IN(v, 0x1374, 0x1374) || IN(v, 0x1375, 0x1375)) {
        idx = 3;
    } else if (IN(v, 0x1380, 0x139f) || IN(v, 0x13a0, 0x13a7)) {
        idx = 4;
    } else if (IN(v, 0x1377, 0x1377) || IN(v, 0x1376, 0x1376)) {
        idx = 5;
    } else if (IN(v, 0x1379, 0x1379) || IN(v, 0x1378, 0x1378)) {
        idx = 6;
    } else if (IN(v, 0x137a, 0x137a) || IN(v, 0x137b, 0x137b)) {
        idx = 7;
    }
    func_ov094_02292814(o, idx, b);
}

void func_ov094_02292988(void *o)
{
    func_0206ee80((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 6);
}

void func_ov094_022929ac(void *o)
{
    func_0206ee80((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 7);
}

void func_ov094_022929d0(void *o)
{
    func_0206ee80((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 2);
    func_ov094_02292368(o, 1);
}

void func_ov094_02292a00(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (func_ov094_02292370(p, 1)) {
        if (func_020b86c0((u8 *)p + 0x38, (u8 *)p + 0x160, p->unk_0e, 0x800, 0)) {
            func_ov094_02292360(p, 1);
        }
    }
}

void func_ov094_02292a40(void *o)
{
    s32 i = 0;
    u8 *b = (u8 *)o + 0xe0;
    for (; i < 2; i++) {
        func_0206fc44(b + (i << 6));
    }
}

void func_ov094_02292a60(void *o)
{
    s32 i = 0;
    u8 *b = (u8 *)o + 0x38;
    for (; i < 3; i++) {
        func_020b87d0(b + i * 0x38);
    }
}

void func_ov094_02292a80(void *o)
{
    func_ov094_02292a60(o);
    func_ov094_02292a40(o);
    if (((Unk_ov094_02292360_Obj *)o)->unk_13 != 0) {
        func_02003ff4(0x2d, 1);
    }
}

void func_ov094_02292aa4(void *o)
{
    func_ov094_02292534(o);
    func_ov094_02292490(o);
    func_ov094_02292a00(o);
    func_ov094_022927d4(o);
    func_ov094_022927a4(o);
}

void func_ov094_02292acc(void *o)
{
    func_ov094_02292a60(o);
    func_ov094_02292a40(o);
}

void func_ov094_02292ae0()
{
    s32 g = data_021f482c;
    func_020026c4(data_ov094_022948c0, g, 8, 4, 4, 6);
    func_020026c4(data_ov094_022948e0, g, 8, 7, 7, 0xe);
    func_0200261c(data_ov094_022948f8, g, 8, 0xc0, 0xc0, 0x15f);
    func_0200261c(data_ov094_02294910, g, 8, 0x160, 0x160, 0x1ff);
}

void func_ov094_02292b58(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    u8 buf[0x1c];
    u8 buf2[0x1c];
    func_0209750c();
    s32 r = func_0209888c();
    func_02063888(buf);
    func_020638d0(func_0209409c(r), buf);
    func_020b3544(0, buf);
    func_0206fb9c((u8 *)p + 0xe0, p->unk_0e, 0x11, 0xa, 0xf, 0xc, 0);
    func_0206f9fc((u8 *)p + 0xe0, 0x66);
    func_0206fab4((u8 *)p + 0xe0, 1, 0);
    func_02094030(buf2);
    func_020940d0(r, buf2);
    func_0206fb9c((u8 *)p + 0x120, p->unk_0e, 0x25, 8, 0xf, 0xc, 0);
    func_020a7bd8((u8 *)p + 0x120, buf2);
    func_0206fab4((u8 *)p + 0x120, 1, 0);
    func_02094018(buf2);
    func_02063870(buf);
}

void func_ov094_02292c08(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    func_0200261c(data_ov094_02294928, data_021f482c, p->unk_0e, 0x200, 0x200, 0x2ff);
    func_ov094_02292b58(p);
    func_ov094_0229260c(p);
    func_ov094_02292864(p);
    func_020641b4(data_ov094_02294944, p->unk_16, 0x20);
    p->unk_0a = p->unk_32;
    func_020641b4(data_ov094_02294960, p->unk_16, 0x20);
    p->unk_0c = p->unk_32;
    func_020641b4(data_ov094_0229497c, p->unk_16, 0x20);
}

}

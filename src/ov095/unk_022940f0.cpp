#include "types.h"

struct Unk_ov095_02294478_Reg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
};

struct Unk_ov095_02292360 {
    u16 flags;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09[3];
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[4];
    u8 unk_2c;
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    Unk_ov095_02294478_Reg *unk_30;
};

extern "C" {
extern s32 data_021f482c;
extern s32 data_ov095_02296804[];
extern s32 data_ov095_0229681c[];
extern s32 data_ov095_022957cc[];
extern s32 data_ov095_022957ec[];
extern s32 data_ov095_0229584c[];
extern Unk_ov095_02294478_Reg data_ov095_02295d44[];
extern Unk_ov095_02294478_Reg data_ov095_02295d74[];
extern s16 data_ov095_02295fec[];
extern s16 data_ov095_02295e04[];
extern s16 data_ov095_02295f80[];
extern s16 data_ov095_02295f14[];
extern s16 data_ov095_02295ea8[];

s32 func_020512e0(u8 *s, s32 n);
s32 func_02051348(u8 *s, s32 n);
s32 func_02051370(void *p);
void func_02003f3c(s32 a);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_020641b4(void *a, void *b, s32 c);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020b87d0(void *a);
void func_0206fc44(void *a);
void func_0206e6ac(s32 a);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_0209750c(void);
void func_0209888c(void);
s32 func_0209411c(void);
s32 func_0206e694(s32 a);
void func_0206e688(s32 a, s32 b);
s32 func_0206e6b8(void);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020641ec(s32 a, s32 b, s32 c, s32 d);
void func_02116048(void *a, void *b, s32 c);
void func_020e85fc(s32 a, s32 b);
void func_020b8714(void *a, void *b, s32 c, s32 d, s32 e, s32 f);

void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m);
BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292380(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02293f90(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02293f8c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02293f88(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02293dc0(Unk_ov095_02292360 *s);
void func_ov095_02295340(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022953c0(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022951e4(Unk_ov095_02292360 *s);
s32 func_ov095_02295194(Unk_ov095_02292360 *s);
s32 func_ov095_02294a2c(Unk_ov095_02292360 *s, s32 a);

BOOL func_ov095_022940f0(Unk_ov095_02292360 *s, u8 *a, s32 b, u8 *p, s32 c, s32 d, s32 e, s32 f);
BOOL func_ov095_02294164(Unk_ov095_02292360 *s, u8 *a, s32 b, s32 c, s32 d, s32 e);
BOOL func_ov095_022941a0(Unk_ov095_02292360 *s, u8 *a, void *b, s32 c, s32 d, s32 e);
BOOL func_ov095_0229423c(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294250(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022942c0(Unk_ov095_02292360 *s);
BOOL func_ov095_022942e8(Unk_ov095_02292360 *s);
void func_ov095_02294318(Unk_ov095_02292360 *s);
s32 func_ov095_02294324(Unk_ov095_02292360 *s);
void func_ov095_0229434c(Unk_ov095_02292360 *s);
void func_ov095_02294358(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022943b4(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022943dc(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022943f8(Unk_ov095_02292360 *s, s32 a);
void func_ov095_0229442c(Unk_ov095_02292360 *s);
void func_ov095_02294438(Unk_ov095_02292360 *s);
void func_ov095_02294478(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294520(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294550(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294594(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022945e0(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294624(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294648(Unk_ov095_02292360 *s, s32 mode, s32 a, s32 c);
void func_ov095_0229483c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294864(Unk_ov095_02292360 *s, s32 a, u32 b);
s32 func_ov095_022948f0(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229490c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294928(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294944(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294960(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229497c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022949a8(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022949d4(Unk_ov095_02292360 *s, s32 a);

BOOL func_ov095_022940f0(Unk_ov095_02292360 *s, u8 *a, s32 b, u8 *p, s32 c, s32 d, s32 e, s32 f)
{
    if (e != 0) {
        func_ov095_02292368(s, 0x100);
    } else {
        func_ov095_02292360(s, 0x40);
        func_ov095_02292360(s, 0x80);
        func_ov095_02292360(s, 0x100);
    }
    if (func_ov095_02294164(s, a, b, *p, c, d) != 0) {
        if (f != 0 && e == 0) {
            func_ov095_02292380(s, b);
        }
        *p = *p + 1;
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_02294164(Unk_ov095_02292360 *s, u8 *a, s32 b, s32 c, s32 d, s32 e)
{
    s32 i;
    if (func_ov095_022941a0(s, a, (void *)b, c, d, e) == 0) {
        return FALSE;
    }
    for (i = d - 1; i > c; i--) {
        a[i] = a[i - 1];
    }
    a[c] = b;
    return TRUE;
}

BOOL func_ov095_022941a0(Unk_ov095_02292360 *s, u8 *a, void *b, s32 c, s32 d, s32 e)
{
    s32 n;
    if (d == c) {
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x40);
        }
        return FALSE;
    }
    n = func_020512e0(a, d);
    if (n == d && a[n - 1] != 0x85) {
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x40);
        }
        return FALSE;
    }
    if (e < 0) {
        return TRUE;
    }
    d = func_02051348(a, d);
    if (d + func_02051370(b) > e) {
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x80);
        }
        return FALSE;
    }
    return TRUE;
}

BOOL func_ov095_0229423c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x100) {
        return TRUE;
    }
    return FALSE;
}

void func_ov095_02294250(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02295340(s, 6);
    if (func_ov095_02293f90(s, a) == 0) {
        func_ov095_022953c0(s, 3);
    } else {
        func_ov095_02295340(s, 3);
    }
    if (func_ov095_02293f8c(s, a) == 0) {
        func_ov095_022953c0(s, 4);
    } else {
        func_ov095_02295340(s, 4);
    }
    if (func_ov095_02293f88(s, a) == 0) {
        func_ov095_022953c0(s, 5);
    } else {
        func_ov095_02295340(s, 5);
    }
}

void func_ov095_022942c0(Unk_ov095_02292360 *s)
{
    func_ov095_022953c0(s, 6);
    func_ov095_022953c0(s, 3);
    func_ov095_022953c0(s, 4);
    func_ov095_022953c0(s, 5);
}

BOOL func_ov095_022942e8(Unk_ov095_02292360 *s)
{
    if (s->unk_08 > 1) {
        s->unk_08--;
    }
    if (*(volatile u8 *)&s->unk_2c != 0) {
        s->unk_2c = *(volatile u8 *)&s->unk_2c - 1;
    } else {
        s->unk_2c = 1;
        return TRUE;
    }
    return FALSE;
}

void func_ov095_02294318(Unk_ov095_02292360 *s)
{
    s->unk_08 = 5;
    s->unk_2c = 0xd;
}

s32 func_ov095_02294324(Unk_ov095_02292360 *s)
{
    if (s->unk_08 != 0) {
        s->unk_08--;
        if (s->unk_08 >= 4) {
            return 1;
        }
        if (s->unk_08 == 0) {
            func_ov095_02295194(s);
        }
    }
    return 0;
}

void func_ov095_02294358(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 1) != 0) {
        if (func_020b86c0((u8 *)s + 0x2318, (u8 *)s + 0x23bc, a, 0x800, 0) != 0) {
            func_ov095_02292360(s, 1);
        }
    }
    func_ov095_02292360(s, 2);
    func_ov095_02292360(s, 0x200);
}

void func_ov095_022943b4(Unk_ov095_02292360 *s, s32 a)
{
    func_020024f0((u8 *)s + 0x23bc, a, 0x800, 0);
    func_ov095_02292360(s, 1);
}

void func_ov095_022943dc(Unk_ov095_02292360 *s, s32 a)
{
    func_020641b4((void *)a, (u8 *)s + 0x23bc, 0x800);
}

void func_ov095_022943f8(Unk_ov095_02292360 *s, s32 a)
{
    func_0200261c(data_ov095_02296804, data_021f482c, a, 0x13d, 0x1eb, 0x1f0);
}

void func_ov095_02294438(Unk_ov095_02292360 *s)
{
    func_020b87d0((u8 *)s + 0x22f4);
    func_020b87d0((u8 *)s + 0x2318);
    func_0206fc44((u8 *)s + 0x233c);
    func_0206fc44((u8 *)s + 0x237c);
    func_0206e6ac(s->unk_02);
}

void func_ov095_02294478(Unk_ov095_02292360 *s, s32 a)
{
    Unk_ov095_02294478_Reg *r;
    s->unk_0c = 0;
    s->unk_07 = 8;
    s->unk_10 = -1;
    s->flags = 0;
    s->unk_03 = 0xff;
    s->unk_04 = 0;
    s->unk_14 = -1;
    s->unk_18 = 100;
    s->unk_1c = 100;
    func_ov095_02293dc0(s);
    if (a == 0) {
        func_ov095_02292368(s, 4);
        s->unk_30 = data_ov095_02295d44;
    } else {
        s->unk_30 = data_ov095_02295d74;
    }
    s->unk_2e = a;
    s->unk_05 = 0xc;
    s->unk_06 = 0xc;
    s->unk_02 = 1;
    r = s->unk_30;
    r->unk_04 = (r->unk_04 & ~0x3ff) | 0x103;
    r = s->unk_30;
    r->unk_0c = (r->unk_0c & ~0x3ff) | 0x107;
    if (func_0209750c() != 0) {
        func_0209888c();
        if (func_0209411c() == 0) {
            func_02003f3c(0);
            return;
        }
    }
    func_02003f3c(1);
}

void func_ov095_02294520(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x20) != 0) {
        func_ov095_02292360(s, 0x20);
        func_ov095_02294648(s, 2, a, 1);
    }
}

void func_ov095_02294550(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x20) != 0) {
        func_ov095_02292360(s, 0x20);
        func_ov095_02294648(s, 2, a, 1);
    } else {
        func_ov095_02292368(s, 0x20);
        func_ov095_02294648(s, 3, a, 1);
    }
}

void func_ov095_02294594(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x20) != 0) {
        s->unk_07 = 2;
        func_ov095_02292360(s, 0x20);
    }
    switch (s->unk_07) {
    case 2:
        func_ov095_02294648(s, 3, a, 1);
        break;
    case 3:
        func_ov095_02294648(s, 2, a, 1);
        break;
    }
}

void func_ov095_022945e0(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    switch (a) {
    case 0x107:
        s->unk_02 = 1;
        break;
    case 0x108:
        s->unk_02 = 3;
        break;
    case 0x109:
        s->unk_02 = 2;
        break;
    }
    func_ov095_02294648(s, 8, b, 1);
}

void func_ov095_02294624(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02294648(s, s->unk_07, a, 0);
    func_ov095_02294358(s, a);
}

void func_ov095_02294648(Unk_ov095_02292360 *s, s32 mode, s32 a, s32 c)
{
    s32 g;
    s32 h;
    if (mode == 8) {
        mode = func_0206e694(s->unk_02);
    }
    if (mode == 3 && func_ov095_02292370(s, 0x20) != 0) {
        func_0206e688(s->unk_02, 2);
    } else {
        func_0206e688(s->unk_02, mode);
    }
    g = data_021f482c;
    if (c == 0) {
        func_020026c4(data_ov095_0229681c, g, a, 1, 1, 4);
        func_020026c4(data_ov095_0229681c, g, a, 1, 7, 7);
        func_020026c4(data_ov095_0229681c, g, a, 1, 9, 9);
    }
    if (s->unk_07 == mode && c != 0) {
        goto end;
    }
    func_020641b4((void *)data_ov095_022957cc[mode], (u8 *)s + 0x34, 0x22c0);
    if (func_ov095_02292370(s, 4) != 0) {
        h = data_ov095_022957ec[mode];
    } else {
        h = data_ov095_0229584c[mode];
    }
    h = func_020641ec(h, g, -4, 0);
    func_02116048((void *)(h + 0x240), (u8 *)s + 0x25fc, 0x380);
    func_ov095_0229434c(s);
    func_020e85fc(g, h);
    func_020b8714((u8 *)s + 0x22f4, (u8 *)s + 0x34, a, 0x1ea, 0x1ea, 0x2ff);
    s->unk_07 = mode;
    switch (s->unk_07) {
    case 0:
        func_ov095_022953c0(s, 1);
        func_ov095_02295340(s, 2);
        break;
    case 1:
        func_ov095_02295340(s, 1);
        func_ov095_022953c0(s, 2);
        break;
    case 2:
    case 3:
        func_ov095_022953c0(s, 8);
        func_ov095_02295340(s, 9);
        func_ov095_02295340(s, 10);
        func_ov095_02295340(s, 7);
        func_ov095_02295340(s, 13);
        break;
    case 4:
        func_ov095_02295340(s, 8);
        func_ov095_022953c0(s, 9);
        func_ov095_02295340(s, 10);
        func_ov095_022953c0(s, 7);
        func_ov095_022953c0(s, 13);
        break;
    case 5:
        func_ov095_02295340(s, 8);
        func_ov095_02295340(s, 9);
        func_ov095_022953c0(s, 10);
        func_ov095_022953c0(s, 7);
        func_ov095_022953c0(s, 13);
        break;
    case 6:
        break;
    }
    func_ov095_02293dc0(s);
end:
    func_ov095_022951e4(s);
}

void func_ov095_0229483c(Unk_ov095_02292360 *s, s32 a)
{
    s->unk_02 = func_0206e6b8();
    func_ov095_02294648(s, func_0206e694(s->unk_02), a, 0);
}

s32 func_ov095_02294864(Unk_ov095_02292360 *s, s32 a, u32 b)
{
    s32 r;
    if (b >= 8) {
        b = s->unk_07;
    }
    r = func_ov095_02294a2c(s, a);
    if (r >= 0) {
        return r;
    }
    switch (b) {
    case 0:
        return func_ov095_022949a8(s, a);
    case 1:
        return func_ov095_0229497c(s, a);
    case 2:
        return func_ov095_02294960(s, a);
    case 3:
        return func_ov095_02294944(s, a);
    case 4:
    case 5:
        return func_ov095_02294928(s, a);
    case 6:
        return func_ov095_0229490c(s, a);
    case 7:
        return func_ov095_022948f0(s, a);
    }
    return 0x85;
}

s32 func_ov095_0229497c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0 && a <= 0x25) {
        return a + 0x9c;
    }
    if (a >= 0x28 && a <= 0x2f) {
        return a + 0x74;
    }
    return func_ov095_022949d4(s, a);
}

s32 func_ov095_022949a8(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0 && a <= 0x25) {
        return a + 0x9c;
    }
    if (a >= 0x28 && a <= 0x2f) {
        return a + 0x74;
    }
    return func_ov095_022949d4(s, a);
}

s32 func_ov095_022948f0(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x92 && a <= 0xc8) {
        return data_ov095_02295fec[a - 0x92];
    }
    return 0;
}

s32 func_ov095_0229490c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x70 && a <= 0x91) {
        return data_ov095_02295e04[a - 0x70];
    }
    return 0;
}

s32 func_ov095_02294928(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x3b && a <= 0x6f) {
        return data_ov095_02295f80[a - 0x3b];
    }
    return 0;
}

s32 func_ov095_02294944(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x3b && a <= 0x6f) {
        return data_ov095_02295f14[a - 0x3b];
    }
    return 0;
}

s32 func_ov095_02294960(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x3b && a <= 0x6f) {
        return data_ov095_02295ea8[a - 0x3b];
    }
    return 0;
}

s32 func_ov095_022949d4(Unk_ov095_02292360 *s, s32 a)
{
    if (a == 0x26) {
        return 0x87;
    }
    if (a == 0x27) {
        return 0x9b;
    }
    if (a == 0x37) {
        return 0xc9;
    }
    if (a == 0x3a) {
        return 0x85;
    }
    if (a == 0x30) {
        return 0x9c;
    }
    if (a == 0x31) {
        return 0x9c;
    }
    if (a == 0x39) {
        return 0x86;
    }
    if (a == 0x38) {
        return 0x100;
    }
    if (a >= 0x32 && a <= 0x36) {
        return a + 0xcf;
    }
    return 0;
}

void func_ov095_0229434c(Unk_ov095_02292360 *s)
{
    func_ov095_02292368(s, 1);
}

void func_ov095_0229442c(Unk_ov095_02292360 *s)
{
    func_ov095_02292368(s, 8);
}
}

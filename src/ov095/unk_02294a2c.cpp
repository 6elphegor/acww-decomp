#include "types.h"

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
};

struct Unk_ov095_02294dc0_Entry {
    u32 unk_00;
    u32 lo : 12;
    u32 pal : 4;
    u32 hi : 16;
};

extern "C" {
extern s32 data_ov095_0229553c[];
extern s32 data_ov095_02295494[];
extern s32 data_ov095_022954cc[];
extern s32 data_ov095_02295504[];

s32 func_02133150(s32 a, s32 b);

void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m);
BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m);
Unk_ov095_02294dc0_Entry *func_ov095_02293b0c(Unk_ov095_02292360 *s);
BOOL func_ov095_02295440(Unk_ov095_02292360 *s, s32 i);
void func_ov095_022953c0(Unk_ov095_02292360 *s, s32 i);

s32 func_ov095_02294d90(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294dc0(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294ebc(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294fb4(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_022950f4(Unk_ov095_02292360 *s, s32 a, s32 b);
s32 func_ov095_02294af4(Unk_ov095_02292360 *s, u32 a, u32 b);
s32 func_ov095_02294b44(Unk_ov095_02292360 *s, u32 a, u32 b);
s32 func_ov095_02294bac(Unk_ov095_02292360 *s, u32 a, u32 b);
s32 func_ov095_02294c24(Unk_ov095_02292360 *s, u32 a, u32 b);
void func_ov095_02294d4c(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02295150(Unk_ov095_02292360 *s);
BOOL func_ov095_022952b4(Unk_ov095_02292360 *s, s32 a);
BOOL func_ov095_022952c4(Unk_ov095_02292360 *s, s32 a);

s32 func_ov095_02294a2c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0xc9 && a <= 0xe1) {
        return a + 0x3d;
    }
    return -1;
}

s32 func_ov095_02294a40(Unk_ov095_02292360 *s)
{
    return s->unk_10;
}

s32 func_ov095_02294a44(Unk_ov095_02292360 *s, s32 a, u32 b)
{
    s32 r;
    s->unk_10 = -1;
    r = func_ov095_02294af4(s, a, b);
    if (r == -1) {
        if (func_ov095_02292370(s, 4) == 0) {
            if (b < 0xf7) {
                b = (u8)(b + 8);
            } else {
                b = 0xff;
            }
        }
        switch (s->unk_02) {
        case 0:
            break;
        case 1:
            r = func_ov095_02294c24(s, a, b);
            if (r == 0x6a || (u32)(r - 0x6c) <= 1) {
                r = 0x6b;
            }
            break;
        case 2:
            r = func_ov095_02294bac(s, a, b);
            break;
        case 3:
            r = func_ov095_02294b44(s, a, b);
            break;
        default:
            return -1;
        }
    }
    if (func_ov095_022952c4(s, r)) {
        return -1;
    }
    s->unk_10 = r;
    return r;
}

s32 func_ov095_02294af4(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    if (func_ov095_02292370(s, 4)) {
        if (b >= 0x50 && b <= 0x58) {
            if (a < 0x30) {
                return 0xdb;
            }
            if (a > 0xd0) {
                return 0xdc;
            }
        }
    } else {
        if (b >= 0x48 && b <= 0x50) {
            if (a < 0x30) {
                return 0xdb;
            }
            if (a > 0xd0) {
                return 0xdc;
            }
        }
    }
    return -1;
}

s32 func_ov095_02294b44(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    s32 row;
    s32 col;
    if (b < 0x60 || b >= 0xb0) {
        return -1;
    }
    if (a < 0x8 || a >= 0xf8) {
        return -1;
    }
    row = (s32)(b - 0x60) >> 4;
    col = func_02133150(a - 8, 0x14);
    if (row == 4) {
        if (col >= 8) {
            return 0xc8;
        }
        return col + 0x92 + row * 0xb;
    }
    if (col >= 0xb) {
        if (b < 0x78) {
            return 0xc6;
        }
        return 0xc7;
    }
    return col + 0x92 + row * 0xb;
}

s32 func_ov095_02294bac(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    if (b < 0x68) {
        return -1;
    }
    if (b >= 0xa8) {
        return -1;
    }
    if (b >= 0x98) {
        if (a >= 0x50 && a < 0xb0) {
            return 0x91;
        }
        return -1;
    }
    if (a < 0x8) {
        return -1;
    }
    if (a >= 0xf8) {
        return -1;
    }
    if (a < 0xd0) {
        {
            s32 c = func_02133150(a - 8, 0x14);
            s32 rw = ((s32)(b - 0x68) >> 4) * 10;
            return c + rw + 0x70;
        }
    }
    if (b >= 0x78) {
        return 0x90;
    }
    if (a < 0xe4) {
        return 0x8e;
    }
    return 0x8f;
}

s32 func_ov095_02294c24(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    if (b < 0x60) {
        return -1;
    }
    if (b >= 0xb0) {
        return -1;
    }
    if (b < 0x70) {
        if (a < 4) {
            return -1;
        }
        if (a >= 0xf4) {
            return -1;
        }
        return func_02133150(a - 4, 0x14) + 0x3b;
    }
    if (b < 0x80) {
        if (a < 0xc) {
            return -1;
        }
        if (a >= 0xfc) {
            return -1;
        }
        if (a >= 0xd4) {
            return 0x51;
        }
        return func_02133150(a - 0xc, 0x14) + 0x47;
    }
    if (b < 0x90) {
        if (a < 4) {
            return -1;
        }
        if (a < 0x18) {
            return 0x52;
        }
        if (a >= 0xfc) {
            return -1;
        }
        if (a >= 0xcc) {
            return 0x5c;
        }
        return func_02133150(a - 0x18, 0x14) + 0x53;
    }
    if (b < 0xa0) {
        if (a < 4) {
            return -1;
        }
        if (a < 0x20) {
            return 0x5d;
        }
        if (a >= 0xe8) {
            return -1;
        }
        return func_02133150(a - 0x20, 0x14) + 0x5e;
    }
    if (b < 0xb0) {
        if (a < 0x18) {
            return -1;
        }
        if (a >= 0x40 && a < 0xcc) {
            return 0x6b;
        }
        if (a < 0x54) {
            return func_02133150(a - 0x18, 0x14) + 0x68;
        }
        if (a >= 0xf4) {
            return -1;
        }
        return func_02133150(a - 0xa4, 0x14) + 0x6c;
    }
    return -1;
}

void func_ov095_02294d40(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02294d4c(s, a, 0xd);
}

void func_ov095_02294d4c(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    switch (s->unk_02) {
    case 0:
        func_ov095_022950f4(s, a, b);
        break;
    case 1:
        func_ov095_02294fb4(s, a, b);
        break;
    case 2:
        func_ov095_02294ebc(s, a, b);
        break;
    case 3:
        func_ov095_02294dc0(s, a, b);
        break;
    }
    func_ov095_02292368(s, 1);
}

void func_ov095_02294dc0(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0x92 || a > 0xc8) {
        return;
    }
    p = func_ov095_02293b0c(s);
    if (a >= 0x92 && a <= 0x9c) {
        i = a - 0x92;
    } else if (a >= 0x9d && a <= 0xa7) {
        i = a - 0x90;
    } else if (a >= 0xa8 && a <= 0xb2) {
        i = a - 0x8e;
    } else if (a >= 0xb3 && a <= 0xbd) {
        i = a - 0x8e;
    } else if (a >= 0xbe && a <= 0xc5) {
        i = a - 0x8e;
    } else {
        switch (a) {
        case 0xc6:
            i = 0xb;
            p[12].pal = b;
            break;
        case 0xc7:
            i = 0x18;
            p[25].pal = b;
            break;
        case 0xc8:
            i = 0x38;
            p[57].pal = b;
            p[58].pal = b;
            p[59].pal = b;
            break;
        default:
            return;
        }
    }
    p[i].pal = b;
}

void func_ov095_02294ebc(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0x70 || a > 0x91) {
        return;
    }
    p = func_ov095_02293b0c(s);
    if (a >= 0x70 && a <= 0x79) {
        i = a - 0x70;
    } else if (a >= 0x7a && a <= 0x83) {
        i = a - 0x6e;
    } else if (a >= 0x84 && a <= 0x8d) {
        i = a - 0x6c;
    } else {
        a -= 0x8e;
        switch (a) {
        case 0:
            i = 0xa;
            break;
        case 1:
            i = 0xb;
            break;
        case 2:
            i = 0x16;
            p[23].pal = b;
            break;
        case 3:
            i = 0x22;
            p[35].pal = b;
            p[36].pal = b;
            p[37].pal = b;
            p[38].pal = b;
            break;
        default:
            return;
        }
    }
    p[i].pal = b;
}

void func_ov095_02294fb4(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0x3b || a > 0x6f) {
        return;
    }
    p = func_ov095_02293b0c(s);
    if (a >= 0x3b && a <= 0x46) {
        i = a - 0x3b;
    } else if (a >= 0x47 && a <= 0x50) {
        i = a - 0x3b;
    } else if (a == 0x51) {
        i = 0x16;
        p[23].pal = b;
    } else if (a >= 0x52 && a <= 0x5b) {
        i = a - 0x3a;
    } else if (a == 0x5c) {
        i = 0x22;
        p[35].pal = b;
        p[36].pal = b;
    } else if (a >= 0x5d && a <= 0x67) {
        i = a - 0x38;
    } else if (a >= 0x68 && a <= 0x69) {
        i = a - 0x38;
    } else if (a == 0x6b) {
        i = 0x32;
        p[51].pal = b;
        p[52].pal = b;
        p[53].pal = b;
        p[54].pal = b;
        p[55].pal = b;
    } else if (a >= 0x6e && a <= 0x6f) {
        i = a - 0x36;
    } else {
        return;
    }
    p[i].pal = b;
}

void func_ov095_022950f4(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0 || a > 0x3a) {
        return;
    }
    p = func_ov095_02293b0c(s);
    if (a >= 0 && a <= 0x31) {
        a += 5;
    } else if (a >= 0x32 && a <= 0x36) {
        a -= 0x32;
    } else if (a >= 0x37 && a <= 0x3a) {
    } else {
        return;
    }
    p[a].pal = b;
}

void func_ov095_02295150(Unk_ov095_02292360 *s)
{
    if (s->unk_07 != 3) {
        func_ov095_02292360(s, 0x20);
    }
    if (s->unk_07 != 2 && s->unk_07 == 3) {
        if (func_ov095_02292370(s, 0x20)) {
            func_ov095_02294fb4(s, 0x5d, 0xd);
        } else {
            func_ov095_02294fb4(s, 0x52, 0xd);
        }
    }
}

void func_ov095_02295194(Unk_ov095_02292360 *s)
{
    s32 i;
    if (s->unk_10 != -1) {
        func_ov095_02294d4c(s, s->unk_10, 0xc);
        s->unk_10 = -1;
    }
    for (i = 0; i < 0xe; i++) {
        if (func_ov095_02295440(s, i)) {
            func_ov095_022953c0(s, i);
        }
    }
    func_ov095_02295150(s);
    func_ov095_02292368(s, 1);
}

void func_ov095_022951e4(Unk_ov095_02292360 *s)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    p = func_ov095_02293b0c(s);
    if (p != NULL) {
        for (i = 0; i < 0x64; i++) {
            p[i].pal = 0xc;
            if (p[i].hi == 0xffff) {
                i = 0x64;
            }
        }
    }
    for (i = 0; i < 0xe; i++) {
        if (func_ov095_02295440(s, i)) {
            func_ov095_022953c0(s, i);
        }
    }
    func_ov095_02295150(s);
    func_ov095_02292368(s, 1);
}

BOOL func_ov095_02295258(Unk_ov095_02292360 *s)
{
    return func_ov095_02292370(s, 0x80);
}

BOOL func_ov095_02295264(Unk_ov095_02292360 *s)
{
    return func_ov095_02292370(s, 0x40);
}

BOOL func_ov095_02295270(Unk_ov095_02292360 *s, s32 a)
{
    if (a == -1) {
        a = s->unk_14;
    }
    switch (a) {
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022952a0(Unk_ov095_02292360 *s, s32 a)
{
    if (a == -1) {
        a = s->unk_14;
    }
    return func_ov095_022952b4(s, a);
}

BOOL func_ov095_022952b4(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0xcd && a <= 0xd4) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022952c4(Unk_ov095_02292360 *s, s32 a)
{
    s32 i;
    s32 *tbl;
    if (a == -1) {
        return FALSE;
    }
    switch (s->unk_02) {
    case 0:
        tbl = data_ov095_0229553c;
        break;
    case 1:
        tbl = data_ov095_02295494;
        break;
    case 2:
        tbl = data_ov095_022954cc;
        break;
    case 3:
        tbl = data_ov095_02295504;
        break;
    default:
        return FALSE;
    }
    for (i = 0; i < 0xe; i++) {
        if (a == tbl[i]) {
            if (func_ov095_02295440(s, i)) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

s32 func_ov095_02294d90(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    if (a == 0xdb) {
        goto body;
    }
    if (a == 0xdc) {
body:
        switch (b) {
        case 0xc:
            b = 0xc;
            break;
        case 0xe:
            b = 0xe;
            break;
        case 0xd:
            b = 0xd;
            break;
        }
        if (a == 0xdb) {
            s->unk_05 = b;
        } else {
            s->unk_06 = b;
        }
    }
    return 0;
}
}

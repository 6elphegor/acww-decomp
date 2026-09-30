#include "types.h"

struct Unk_ov112_02296840 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xac - 0x8e];
    u32 unk_0ac;
    u8 pad_0b0[0xbd - 0xb0];
    u8 unk_0bd;
    u8 unk_0be;
    u8 unk_0bf;
    u8 unk_0c0;
    u8 unk_0c1;
    u8 unk_0c2;
    u8 unk_0c3[0x183 - 0xc3];
    u8 unk_183[0xc0];
    u8 pad_243;
    u8 unk_244[0x370 - 0x244];
    u8 unk_370[0x40ac - 0x370];
    u8 unk_40ac[0x40f4 - 0x40ac];
    u8 unk_40f4[0x4258 - 0x40f4];
    u8 unk_4258[0x40];
};

typedef Unk_ov112_02296840 S;

extern u16 data_021f47d8[];
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;

extern "C" {
void func_0200402c(s32 a);
void func_0205125c(void *p, s32 n);
s32 func_02051268(void *src, void *dst, s32 n);
s32 func_020512e0(void *p, s32 n);
BOOL func_0208d534(void *p);
BOOL func_0208d4fc(void *p);
BOOL func_0208d9a8(void *p);

void func_ov095_02293dc0(void *p);
void func_ov095_02293d94(void *p);
void func_ov095_02293d88(void *p);
void func_ov095_02293da8(void *p);
s32 func_ov095_02293dc8(void *p, s32 key, s32 n);
void func_ov095_022923ec(void *p);
void func_ov095_022923f8(void *p);
s32 func_ov095_02292404(void *p);
s32 func_ov095_02293f90(void *p, s32 a);
s32 func_ov095_02293f8c(void *p, s32 a);
s32 func_ov095_02293f88(void *p, s32 a);
BOOL func_ov095_02293f94(void *p, void *q, s32 a, u32 b, s32 c, s32 d);
BOOL func_ov095_02293ff0(void *p, void *q, s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
BOOL func_ov095_0229423c(void *p, s32 key);
BOOL func_ov095_02295264(void *p);
BOOL func_ov095_02295258(void *p);
void func_ov095_02295194(void *p);
s32 func_ov095_02294a44(void *p, u32 a, u32 b);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02294318(void *p);
void func_ov095_02294324(void *p);
BOOL func_ov095_02295440(void *p, s32 a);
BOOL func_ov095_02295270(void *p, s32 a);

void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
s32 func_ov002_022009d4();
s32 func_ov002_022009c8(void *self);
BOOL func_ov002_0220125c(s32 p);
BOOL func_ov002_0220126c(s32 p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202ef4(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);

BOOL func_ov112_02297280(S *s);
void func_ov112_0229721c(S *s);
BOOL func_ov112_02297818(S *s, u32 m);
void func_ov112_022977f8(S *s, u32 m);
void func_ov112_02297808(S *s, u32 m);
void func_ov112_02297934(S *s);
void func_ov112_022976a8(S *s);
void func_ov112_02296ff4(S *s);
void func_ov112_02296e14(S *s);
u32 func_ov112_02297044(S *s);
void func_ov112_0229705c(S *s, u32 v);
void func_ov112_02297a4c(S *s);
void func_ov112_02297a0c(S *s);
void func_ov112_02296d6c(S *s);
void func_ov112_02296c48(S *s);
void func_ov112_02296c28(S *s);
void func_ov112_02296ce8(S *s);
void func_ov112_02296cb4(S *s, s32 a, s32 b);
void func_ov112_02296bfc(S *s);
void func_ov112_02297434(S *s);
void func_ov112_022978a4(S *s, s32 a, s32 b);
void func_ov112_022978e0(S *s);
void func_ov112_02297984(S *s);
void func_ov112_022979c0(S *s);
void func_ov112_0229788c(S *s);
s32 func_ov112_02297104(S *s);
s32 func_ov112_022972ac(S *s);

BOOL func_ov112_02297c7c(S *s, u32 a, s32 b);
BOOL func_ov112_02297cd4(S *s, s32 flag);
s32 func_ov112_02297d74(S *s, s32 key);

void func_ov112_02297a90(S *s)
{
    s32 n;
    s32 i;

    if (func_ov112_02297818(s, 0x200)) {
        if (func_ov112_02297280(s)) {
            func_ov112_0229721c(s);
        }
        func_ov095_02293dc0(s->unk_370);
        func_ov095_02293d94(s->unk_370);
        n = func_020512e0(s->unk_183, 0xc0);
        for (i = 0; i < n; i++) {
            if (!func_ov112_02297c7c(s, s->unk_183[i], 0)) {
                if (i == 0) {
                    func_ov112_02297934(s);
                }
                i = n;
            }
        }
        func_ov095_022923ec(s->unk_370);
        func_ov112_022976a8(s);
        func_ov112_02296ff4(s);
        func_ov095_02293d88(s->unk_370);
    }
}

void func_ov112_02297b28(S *s)
{
    u32 a;
    u32 b;
    u32 x;
    u32 y;

    if (func_ov112_02297280(s)) {
        b = s->unk_0bf;
        a = s->unk_0be;
        if (a > b) {
            x = b;
            y = a - b;
        } else {
            x = a;
            y = b - a;
        }
        func_0205125c(s->unk_183, 0xc0);
        func_02051268(s->unk_0c3 + x, s->unk_183, y);
        func_ov112_02297808(s, 0x200);
        func_ov095_022923f8(s->unk_370);
        func_ov112_02296e14(s);
    }
}

BOOL func_ov112_02297b90(S *s, s32 key)
{
    s32 r = func_ov112_02297044(s);

    if (r == 0) {
        return FALSE;
    }
    switch (key) {
    case 0x103:
        r = func_ov095_02293f90(s->unk_370, r);
        break;
    case 0x104:
        r = func_ov095_02293f8c(s->unk_370, r);
        break;
    case 0x105:
        r = func_ov095_02293f88(s->unk_370, r);
        break;
    }
    if (r == 0) {
        return FALSE;
    }
    if (!func_ov095_02293f94(s->unk_370, s->unk_0c3, r, s->unk_0bd, 0xc0, 0x2710)) {
        return FALSE;
    }
    func_ov112_022976a8(s);
    func_ov112_02296ff4(s);
    return TRUE;
}

BOOL func_ov112_02297c38(S *s, u32 key)
{
    BOOL r;

    if (func_ov112_02297280(s)) {
        func_ov112_0229721c(s);
        func_ov095_02293dc0(s->unk_370);
    }
    r = func_ov112_02297c7c(s, key, 1);
    func_ov112_022976a8(s);
    func_ov112_02296ff4(s);
    return r;
}

BOOL func_ov112_02297c7c(S *s, u32 a, s32 b)
{
    u8 x = s->unk_0bd;

    if (func_ov095_02293ff0(s->unk_370, s->unk_0c3, a, &x, 0xc0, 0x28, 6, 0x96, 0, b)) {
        func_ov112_0229705c(s, x);
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov112_02297cd4(S *s, s32 flag)
{
    if (func_ov112_02297280(s)) {
        func_ov095_02293dc0(s->unk_370);
        func_0200402c(0x35);
    } else {
        u32 c0 = s->unk_0c0;
        u32 bd = s->unk_0bd;

        if (bd > c0) {
            s->unk_0be = bd;
            s->unk_0bf = s->unk_0bd - 1;
            func_0200402c(0x35);
        } else if (s->unk_0c3[c0] != 0) {
            s->unk_0be = c0;
            s->unk_0bf = s->unk_0c0 + 1;
            func_0200402c(0x35);
        } else {
            if (flag != 0) {
                func_ov112_02297934(s);
            }
            return FALSE;
        }
    }
    func_ov112_0229721c(s);
    func_ov112_022976a8(s);
    func_ov112_02296ff4(s);
    return TRUE;
}

s32 func_ov112_02297d74(S *s, s32 key)
{
    s32 r = 1;
    s32 t = func_ov095_02293dc8(s->unk_370, key, 6);

    if (t != 0) {
        func_ov112_022976a8(s);
        return t;
    }
    if (func_ov095_0229423c(s->unk_370, key)) {
        switch (key) {
        case 0x100:
            func_ov112_02297cd4(s, r);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (!func_ov112_02297b90(s, key)) {
                func_ov112_02297934(s);
            }
            r = 2;
            break;
        case 0x118:
            func_ov112_02297b28(s);
            r = 2;
            break;
        case 0x119:
            func_ov112_02297a90(s);
            r = 2;
            break;
        case 0x113:
            func_ov112_02297a4c(s);
            r = 3;
            break;
        case 0x115:
            func_ov112_02297a0c(s);
            r = 3;
            break;
        case 0x101:
        case 0x102:
        default:
            r = 2;
            break;
        }
    } else {
        t = func_ov112_02297c38(s, (u8)key);
        if (func_ov095_02295264(s->unk_370)) {
            func_ov112_022978a4(s, 0x1c, r);
            return 4;
        }
        if (func_ov095_02295258(s->unk_370)) {
            func_ov112_022978a4(s, 0x1c, r);
            return 4;
        }
        if (t == 0) {
            func_ov112_02297934(s);
        }
        if (key == 0x86) {
            r = 2;
        }
    }
    return r;
}

s32 func_ov112_02297eb8(S *s)
{
    s32 a;
    s32 b;
    s32 r;

    func_ov095_02295194(s->unk_370);
    a = func_ov095_02294a44(s->unk_370, data_021ef5f0, data_021ef5ec);
    if (a != -1) {
        b = func_ov095_02294864(s->unk_370, a, 8);
        r = func_ov112_02297d74(s, b);
        func_ov095_02294d40(s->unk_370, a);
        func_ov095_02294318(s->unk_370);
        return r;
    }
    return 0;
}

BOOL func_ov112_02297f1c(S *s)
{
    if ((data_021f47d8[1] & 8) == 0) {
        return FALSE;
    }
    func_ov112_02296d6c(s);
    func_ov112_02297a4c(s);
    return TRUE;
}

BOOL func_ov112_02297f48(S *s)
{
    if ((data_021f47d8[1] & 0x200) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(s->unk_370, 0xb)) {
        return FALSE;
    }
    func_ov112_02297d74(s, 0x118);
    func_ov095_02294d40(s->unk_370, 0xdb);
    s->unk_0c1 = s->unk_08d;
    func_ov002_02200a58(s, 0xe);
    return TRUE;
}

BOOL func_ov112_02297fac(S *s)
{
    if ((data_021f47d8[1] & 0x100) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(s->unk_370, 0xc)) {
        return FALSE;
    }
    func_ov112_02297d74(s, 0x119);
    func_ov095_02294d40(s->unk_370, 0xdc);
    func_ov112_02296c48(s);
    s->unk_0c1 = s->unk_08d;
    func_ov002_02200a58(s, 0xf);
    return TRUE;
}

BOOL func_ov112_02298018(S *s)
{
    if ((data_021f47d8[1] & 0x800) == 0) {
        return FALSE;
    }
    if (func_ov112_02297818(s, 0x800)) {
        func_ov112_022977f8(s, 0x800);
    } else {
        func_ov112_02297808(s, 0x800);
        func_ov112_02297434(s);
    }
    if (func_ov095_02295270(s->unk_370, -1)) {
        if (func_ov112_02297818(s, 0x800)) {
            func_ov002_02202c40(s->unk_4258);
            func_ov002_02200a58(s, 0xc);
        } else {
            func_ov002_02202ca0(s->unk_4258);
            func_ov002_02200a58(s, 6);
        }
        func_ov112_02296ce8(s);
    } else {
        func_ov112_02296ce8(s);
    }
    return TRUE;
}

BOOL func_ov112_022980b0(S *s)
{
    if ((data_021f47d8[0] & 2) == 0) {
        return FALSE;
    }
    func_ov095_02293da8(s->unk_370);
    if (func_ov112_02297cd4(s, 0)) {
        func_ov095_02294318(s->unk_370);
        s->unk_0c1 = s->unk_08d;
        func_ov002_02200a58(s, 0xb);
    } else {
        func_ov112_02296d6c(s);
        func_ov112_02297a0c(s);
    }
    return TRUE;
}

BOOL func_ov112_02298114(S *s)
{
    s32 a;

    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    a = func_ov095_02292404(s->unk_370);
    if (a != -1) {
        func_ov095_02294864(s->unk_370, a, 8);
        func_ov095_02294d40(s->unk_370, a);
        func_ov112_02296c28(s);
        return TRUE;
    }
    return FALSE;
}

void func_ov112_0229816c(S *s)
{
    func_ov095_02294324(s->unk_370);
    if (func_ov002_02204234(s->unk_244, 1)) {
        func_ov112_022978e0(s);
    }
}

void func_ov112_0229819c(S *s)
{
    s32 a;
    s32 b;
    s32 c;

    if (func_ov002_0220308c(s->unk_40f4)) {
        if (func_0208d534(s->unk_4258)) {
            a = func_ov002_0220306c(s->unk_40f4);
            b = func_ov002_022030f4(s->unk_40f4, -1);
            c = func_ov002_022030b8(s->unk_40f4, -1);
            func_ov002_02202a40(s->unk_4258, a + b, a + c);
        }
    } else {
        func_ov112_02296d6c(s);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov112_02298208(S *s)
{
    if (func_0208d4fc(s->unk_4258)) {
        if (s->unk_0c2 != 0) {
            func_ov112_02297984(s);
        } else {
            func_ov112_022979c0(s);
        }
    }
}

void func_ov112_0229823c(S *s)
{
    u32 old;
    s32 r;
    s32 a;
    s32 b;
    u32 t;

    if (func_ov002_022009d4()) {
        func_ov112_0229788c(s);
        return;
    }
    if (data_021f47d8[1] & 1) {
        func_ov002_02202b68(s->unk_4258);
        func_ov002_02200a58(s, 0x14);
        return;
    }
    old = s->unk_0c2;
    r = func_ov002_022009c8(s);
    if (func_ov002_0220126c(r)) {
        if (s->unk_0c2 != 0) {
            s->unk_0c2 = *(volatile u8 *)&s->unk_0c2 - 1;
        }
    } else if (func_ov002_0220125c(r)) {
        if (s->unk_0c2 < 1) {
            s->unk_0c2 = *(volatile u8 *)&s->unk_0c2 + 1;
        }
    }
    if (old != s->unk_0c2) {
        if (s->unk_0c2 != 0) {
            a = func_ov002_022030f4(s->unk_40f4, 4);
            b = func_ov002_022030b8(s->unk_40f4, 4);
            func_ov112_02296cb4(s, a, b);
        } else {
            a = func_ov002_022030f4(s->unk_40f4, 3);
            b = func_ov002_022030b8(s->unk_40f4, 3);
            func_ov112_02296cb4(s, a, b);
        }
    }
    t = data_021f47d8[1];
    if (t & 2) {
        func_ov112_02296d6c(s);
        func_ov112_02297984(s);
    } else if (t & 8) {
        func_ov112_02296d6c(s);
        func_ov112_022979c0(s);
    }
}

void func_ov112_02298354(S *s)
{
    if (func_0208d9a8(s->unk_40ac)) {
        func_ov112_02296bfc(s);
        func_ov112_022977f8(s, 0x1000);
    }
}

void func_ov112_02298380(S *s)
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02202ef4(s->unk_40ac);
        func_ov002_02200a58(s, 0x12);
        func_ov112_02297104(s);
    } else {
        func_ov112_022972ac(s);
    }
}

}

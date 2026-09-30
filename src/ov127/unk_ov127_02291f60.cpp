#include "types.h"

struct Unk_ov127_02291f60_Vec {
    s32 x, y, z;
};

struct Unk_ov127_02291f60 {
    /* 0x0000 */ u8 unk_00[0x24];
    /* 0x0024 */ u8 unk_24[0x1000];
    /* 0x1024 */ u16 unk_1024[0x800];
    /* 0x2024 */ u16 unk_2024[0x400];
    /* 0x2824 */ s16 unk_2824;
    /* 0x2826 */ s16 unk_2826;
    /* 0x2828 */ s16 unk_2828;
    /* 0x282a */ s16 unk_282a;
    /* 0x282c */ s16 unk_282c;
    /* 0x282e */ s16 unk_282e;
    /* 0x2830 */ u16 unk_2830;
    /* 0x2832 */ u8 unk_2832;
    /* 0x2833 */ u8 unk_2833;
    /* 0x2834 */ u8 unk_2834;
    /* 0x2835 */ u8 unk_2835;
    /* 0x2836 */ u8 unk_2836;
};

struct Unk_ov127_02291fcc {
    u8 unk_00[0x26];
    u16 unk_26[16];
};

extern "C" {
extern u8 data_ov127_022940a0[];
extern u8 data_ov127_022940b4[];
extern u8 data_ov127_02292c0c[];
extern u8 data_ov127_02292ac4[];
extern u16 data_ov127_02292f98[];
extern s32 data_ov127_02292abc[];
extern u8 data_ov127_02293fa0[];
extern u8 data_ov127_02293fa4[];
extern u8 data_ov127_02293fac[];
extern s32 data_ov127_02293fb4[];
extern s32 data_ov127_02293fc4[];
extern u8 data_ov127_02293fd4[];

Unk_ov127_02291fcc *func_020b04a4(s32 i);
Unk_ov127_02291fcc *func_020b053c(s32 i);
s32 func_020b005c(s32 x, s32 y);
void func_020b0008(void *p);
s32 func_020b87d0(void *p);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_02087dac(void *info, s32 x, s32 y, s32 a, s32 b);
void func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 flag);
s32 func_02003ff4(s32 a, s32 b);
void func_02004008(s32 a);
s32 func_02003b6c(s32 a);
void func_020021fc(u32 a, s32 b, s32 c);
void func_020e9960(Unk_ov127_02291f60_Vec *out, Unk_ov127_02291f60_Vec *a, Unk_ov127_02291f60_Vec *b);
s32 func_020e9688(Unk_ov127_02291f60_Vec *v);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffd070(Unk_ov127_02291f60_Vec *out, Unk_ov127_02291f60_Vec *a, Unk_ov127_02291f60_Vec *b);
void func_02116048(const void *src, void *dst, u32 n);

void func_ov127_02291fcc(Unk_ov127_02291fcc *p, u8 *out);
u8 *func_ov127_0229207c(u16 i);
u32 func_ov127_02292088(s32 i);
u32 func_ov127_02292098(s32 i);
s32 func_ov127_022921c4(s32 x, s32 y);
s32 func_ov127_02292198(s32 i);
s32 func_ov127_022921d8(s32 i);
void func_ov127_02292218(Unk_ov127_02291f60 *s, u32 m);
void func_ov127_02292228(Unk_ov127_02291f60 *s, u32 m);
BOOL func_ov127_02292238(Unk_ov127_02291f60 *s, u32 m);
s32 func_ov127_02292250(Unk_ov127_02291f60 *s);
s32 func_ov127_0229225c(Unk_ov127_02291f60 *s);
s32 func_ov127_02292268(Unk_ov127_02291f60 *s);
void func_ov127_02292274(Unk_ov127_02291f60 *s);
BOOL func_ov127_02292410(Unk_ov127_02291f60 *s, s32 x, s32 y, s32 *ox, s32 *oy);
BOOL func_ov127_0229247c(Unk_ov127_02291f60 *s, s32 a, s32 b);
void func_ov127_02292518(Unk_ov127_02291f60 *s, s32 a);
namespace Unk_ov127_02292698_Ns {
s32 func_ov127_02292518(Unk_ov127_02291f60 *s, s32 a);
}
void func_ov127_02292698(Unk_ov127_02291f60 *s, s32 mode, s32 a, s32 b);

BOOL func_ov127_02291f60(Unk_ov127_02291fcc *p)
{
    s32 i, j, k;
    func_ov127_02291fcc(p, data_ov127_022940a0);
    for (i = 0; i < 16; i++) {
        Unk_ov127_02291fcc *q = func_020b04a4(i);
        if (q == 0) {
            continue;
        }
        func_ov127_02291fcc(q, data_ov127_022940b4);
        for (j = 0; j < 0x11 && data_ov127_022940a0[j] != 0xff; j++) {
            for (k = 0; k < 0x11 && data_ov127_022940b4[k] != 0xff; k++) {
                if (data_ov127_022940a0[j] == data_ov127_022940b4[k]) {
                    return FALSE;
                }
            }
        }
    }
    return TRUE;
}

void func_ov127_02291fcc(Unk_ov127_02291fcc *p, u8 *out)
{
    s32 i, k, j, n;
    u8 *q;
    for (i = 0; i < 0x11; i++) {
        out[i] = 0xff;
    }
    n = 0;
    for (i = 0; i < 16; i++) {
        u32 v = p->unk_26[i];
        if (v == 0xffff) {
            continue;
        }
        q = func_ov127_0229207c(v);
        for (k = 0; k < 2; k++) {
            for (j = 0; n >= j; j++) {
                if (j == n) {
                    out[n] = q[k];
                    n++;
                    j = n + 1;
                } else if (out[j] == q[k]) {
                    j = n + 1;
                }
            }
        }
    }
}

s32 func_ov127_02292040(u16 v)
{
    s32 i, j;
    for (i = 0; i < 16; i++) {
        Unk_ov127_02291fcc *q = func_020b053c(i);
        if (q == 0) {
            continue;
        }
        for (j = 0; j < 16; j++) {
            if (v == q->unk_26[j]) {
                return i;
            }
        }
    }
    return -1;
}

u8 *func_ov127_0229207c(u16 i)
{
    return data_ov127_02292c0c + i * 2;
}

u32 func_ov127_02292088(s32 i)
{
    return data_ov127_02292ac4[i * 2 + 1];
}

u32 func_ov127_02292098(s32 i)
{
    return data_ov127_02292ac4[i * 2];
}

s32 func_ov127_022920a4(u16 *out, s32 x, s32 y)
{
    s32 n, t, a, b;
    volatile s32 c, d;
    a = x - 1;
    t = a & 0x3f;
    a = t;
    b = x + 1;
    t = b & 0x3f;
    b = t;
    c = y - 1;
    d = y + 1;
    n = 0;
    if (c >= 0) {
        t = func_ov127_022921c4(a, c);
        if (t != -1) {
            out[n] = t;
            n++;
        }
        t = func_ov127_022921c4(x, c);
        if (t != -1) {
            out[n] = t;
            n++;
        }
        t = func_ov127_022921c4(b, c);
        if (t != -1) {
            out[n] = t;
            n++;
        }
    }
    t = func_ov127_022921c4(a, y);
    if (t != -1) {
        out[n] = t;
        n++;
    }
    t = func_ov127_022921c4(b, y);
    if (t != -1) {
        out[n] = t;
        n++;
    }
    if (d < 0x20) {
        t = func_ov127_022921c4(a, d);
        if (t != -1) {
            out[n] = t;
            n++;
        }
        t = func_ov127_022921c4(x, d);
        if (t != -1) {
            out[n] = t;
            n++;
        }
        t = func_ov127_022921c4(b, d);
        if (t != -1) {
            out[n] = t;
            n++;
        }
    }
    if (x == 0x3e && y == 0) {
        n--;
    }
    return n;
}

s32 func_ov127_02292198(s32 i)
{
    u32 v = data_ov127_02292f98[i];
    s32 t = v & 0xf000;
    if ((t >> 12) == 2) {
        return v & 0xfff;
    }
    return -1;
}

s32 func_ov127_022921c4(s32 x, s32 y)
{
    return func_ov127_02292198(func_020b005c(x, y));
}

s32 func_ov127_022921d8(s32 i)
{
    u32 v = data_ov127_02292f98[i];
    s32 t = v & 0xf000;
    if ((t >> 12) == 1) {
        return v & 0xfff;
    }
    return -1;
}

s32 func_ov127_02292204(s32 x, s32 y)
{
    return func_ov127_022921d8(func_020b005c(x, y));
}

void func_ov127_02292218(Unk_ov127_02291f60 *s, u32 m)
{
    s->unk_2830 &= ~m;
}

void func_ov127_02292228(Unk_ov127_02291f60 *s, u32 m)
{
    s->unk_2830 |= m;
}

BOOL func_ov127_02292238(Unk_ov127_02291f60 *s, u32 m)
{
    if ((s->unk_2830 & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov127_02292250(Unk_ov127_02291f60 *s)
{
    return s->unk_2826;
}

s32 func_ov127_0229225c(Unk_ov127_02291f60 *s)
{
    return s->unk_2824;
}

s32 func_ov127_02292268(Unk_ov127_02291f60 *s)
{
    return s->unk_2828;
}

void func_ov127_02292274(Unk_ov127_02291f60 *s)
{
    struct {
        Unk_ov127_02291f60_Vec a, b, c, e, f;
    } l;
    s32 len, t, bx;
    func_ov127_02292228(s, 1);
    l.a.y = 0;
    l.a.x = s->unk_2824 << 12;
    l.a.z = s->unk_2826 << 12;
    bx = s->unk_282a;
    t = bx - s->unk_2824;
    if (t <= -0x100) {
        bx = bx + 0x200;
    } else if (t >= 0x100) {
        bx = bx - 0x200;
    }
    l.b.x = bx << 12;
    l.b.y = 0;
    l.b.z = s->unk_282c << 12;
    func_020e9960(&l.e, &l.b, &l.a);
    l.c.x = l.e.x;
    l.c.y = l.e.y;
    l.c.z = l.e.z;
    len = func_020e9688(&l.c);
    if (len <= 0x8000) {
        func_ov127_02292218(s, 4);
        s->unk_2824 = s->unk_282a;
        s->unk_2826 = s->unk_282c;
    } else {
        t = len >> 1;
        if (t < 0x8000) {
            t = 0x8000;
        } else if (t > 0x40000) {
            t = 0x40000;
        }
        l.c.x = func_01ffc5a4(func_01ffcb0c(l.c.x, t), len);
        l.c.z = func_01ffc5a4(func_01ffcb0c(l.c.z, t), len);
        func_01ffd070(&l.f, &l.a, &l.c);
        l.b.x = l.f.x;
        l.b.y = l.f.y;
        l.b.z = l.f.z;
        s->unk_2824 = l.f.x >> 12;
        s->unk_2826 = l.b.z >> 12;
    }
}

void func_ov127_02292380(Unk_ov127_02291f60 *s, s32 x, s32 y)
{
    s->unk_282a = (x - 0x80) & 0x1ff;
    s->unk_282c = y - 0x60;
    s32 t = s->unk_282c;
    if (t < -0x18) {
        s->unk_282c = -0x18;
    } else if (t > 0x54) {
        s->unk_282c = 0x54;
    }
    func_ov127_02292228(s, 4);
}

void func_ov127_022923c0(Unk_ov127_02291f60 *s)
{
    func_020b0008(s->unk_24);
    func_ov127_02292228(s, 2);
}

s32 func_ov127_022923d8(Unk_ov127_02291f60 *s, s32 x, s32 y, s32 *ox, s32 *oy)
{
    s32 cx = x >> 3;
    s32 cy = y >> 3;
    if ((s->unk_2024[cx + (cy << 5)] & 0x3ff) == 0x20) {
        return func_ov127_02292410(s, x, y, ox, oy);
    }
    return 0;
}

BOOL func_ov127_02292410(Unk_ov127_02291f60 *s, s32 x, s32 y, s32 *ox, s32 *oy)
{
    x = (x + s->unk_2824) & 0x1ff;
    y = y + s->unk_2826;
    if (y < 0 || y >= 0x100) {
        return FALSE;
    }
    *ox = x >> 3;
    *oy = y >> 3;
    return TRUE;
}

void func_ov127_02292454(Unk_ov127_02291f60 *s, s32 x, s32 y)
{
    s->unk_2824 = (x - 0x80) & 0x1ff;
    s->unk_2826 = y - 0x60;
    func_ov127_0229247c(s, 0, 0);
}

BOOL func_ov127_0229247c(Unk_ov127_02291f60 *s, s32 a, s32 b)
{
    s32 old = s->unk_2826;
    s32 t;
    if (b != 0 && s->unk_2828 != 0) {
        s32 o = s->unk_2828;
        s->unk_2828 = o + a;
        t = s->unk_2828;
        if (t < -0x44) {
            s->unk_2828 = -0x44;
        } else if (t > 0x4c) {
            s->unk_2828 = 0x4c;
        }
        if (s->unk_2828 * o < 0) {
            s->unk_2828 = 0;
        }
        return TRUE;
    }
    s->unk_2826 = *(volatile s16 *)&s->unk_2826 + a;
    t = s->unk_2826;
    if (t < -0x18) {
        s->unk_2826 = -0x18;
        if (b != 0) {
            s->unk_2828 = a;
        }
    } else if (t > 0x54) {
        s->unk_2826 = 0x54;
        if (b != 0) {
            s->unk_2828 = a;
        }
    }
    func_ov127_02292228(s, 1);
    if (old != s->unk_2826) {
        return TRUE;
    }
    return FALSE;
}

void func_ov127_02292518(Unk_ov127_02291f60 *s, s32 a)
{
    s->unk_2824 = (s->unk_2824 + a) & 0x1ff;
    func_ov127_02292228(s, 1);
}

BOOL func_ov127_02292538(Unk_ov127_02291f60 *s)
{
    if (s->unk_2836 != 0) {
        s->unk_2836--;
        func_ov127_02292698(s, s->unk_2835, data_ov127_02292abc[s->unk_2836], 0);
    }
    if (s->unk_2836 == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov127_0229257c(Unk_ov127_02291f60 *s, s32 d)
{
    if (func_ov127_02292238(s, 8)) {
        func_ov127_02292218(s, 8);
        func_02003ff4(0x883, 1);
    }
    func_ov127_02292698(s, d, 1, 0);
    s->unk_2836 = 2;
    s->unk_2835 = d;
}

void func_ov127_022925c8(Unk_ov127_02291f60 *s, s32 d, s32 e)
{
    s32 ox = s->unk_2828;
    s32 oy = s->unk_2824;
    s32 oz = s->unk_2826;
    BOOL ch;
    func_ov127_02292698(s, d, 4, e);
    s->unk_2834 = d;
    ch = FALSE;
    if (ox != s->unk_2828 || oy != s->unk_2824 || oz != s->unk_2826) {
        ch = TRUE;
    }
    if (oz != s->unk_2826) {
        s32 t = s->unk_2826;
        if (t == -0x18 || t == 0x54) {
            ch = FALSE;
        }
    }
    if (ch) {
        if (!func_ov127_02292238(s, 8)) {
            func_ov127_02292228(s, 8);
            func_02004008(0x883);
        }
    } else {
        if (func_ov127_02292238(s, 8) == 1) {
            func_ov127_02292218(s, 8);
            func_02003ff4(0x883, 1);
        }
    }
    if (func_ov127_02292238(s, 8) && e != 0) {
        func_02003b6c(data_ov127_02293fa0[d]);
    }
}

void func_ov127_02292698(Unk_ov127_02291f60 *s, s32 mode, s32 a, s32 b)
{
    switch (mode) {
    case 0:
        Unk_ov127_02292698_Ns::func_ov127_02292518(s, -a);
        break;
    case 1:
        Unk_ov127_02292698_Ns::func_ov127_02292518(s, a);
        break;
    case 2:
        func_ov127_0229247c(s, a, b);
        break;
    case 3:
        func_ov127_0229247c(s, -a, b);
        break;
    }
}

s32 func_ov127_022926e0(void *s, s32 x, s32 y)
{
    s32 xs, ys;
    u8 i;
    xs = x - 0x80;
    ys = y - 0x60;
    for (i = 0; i < 4; i = i + 1) {
        if (func_02087dac(data_ov127_02293fd4 + i * 8, xs, ys, 2, 2)) {
            return i;
        }
    }
    return 4;
}

void func_ov127_02292724(Unk_ov127_02291f60 *s, s32 i)
{
    s32 a = func_ov127_0229225c(s);
    s32 t = func_ov127_02292098(i);
    s32 x = -a;
    x += 4;
    x += t << 3;
    s32 b = func_ov127_02292250(s);
    t = func_ov127_02292088(i);
    s32 y = -b;
    y += 4;
    y += t << 3;
    func_02088730(1, data_ov127_02293fa4, x & 0x1ff, y, -1, 2, 0);
}

void func_ov127_02292780(void *s, s32 y)
{
    func_02088730(1, data_ov127_02293fac, 0x80, y + 0x60, -1, 1, 0);
}

void func_ov127_022927a8(Unk_ov127_02291f60 *s, s32 a, s32 b)
{
    s32 q, pal, i;
    u32 off;
    for (i = 0; i < 4; i++) {
        pal = (i == s->unk_2834) ? 7 : b;
        off = i << 2;
        q = a >> 2;
        func_02088730(1, data_ov127_02293fd4 + i * 8, q * *(s32 *)((u8 *)data_ov127_02293fb4 + off) + 0x80, q * *(s32 *)((u8 *)data_ov127_02293fc4 + off) + 0x60, pal, 1, 0);
    }
    s->unk_2834 = 4;
}

void func_ov127_0229281c(void *p)
{
    func_020b87d0(p);
}

void func_ov127_02292824(Unk_ov127_02291f60 *s)
{
    if (func_ov127_02292238(s, 4)) {
        func_ov127_02292274(s);
    }
    if (func_ov127_02292238(s, 1)) {
        s32 v;
        func_020021fc(s->unk_2832, s->unk_2824, s->unk_2826);
        func_ov127_02292218(s, 1);
        v = 0;
        s32 t = s->unk_2826;
        if (t < 0) {
            v = ((t - 7) << 13) >> 16;
        } else if (t >= 0x40) {
            v = ((t - 0x39) << 13) >> 16;
        }
        if (v != s->unk_282e) {
            s->unk_282e = v;
            func_ov127_02292228(s, 2);
        }
    }
    if (func_ov127_02292238(s, 2)) {
        s32 cnt;
        u16 *p1;
        u16 *p2;
        s32 j;
        s32 i;
        func_02116048(s->unk_24, s->unk_1024, 0x1000);
        cnt = s->unk_282e;
        if (cnt > 0) {
            p1 = s->unk_1024;
            p2 = (u16 *)((u8 *)p1 + 0x800);
            for (i = 0; i < s->unk_282e; i++) {
                for (j = 0; j < 0x20; j++) {
                    *p1 = 0x4010;
                    *p2 = 0x4010;
                    p1++;
                    p2++;
                }
            }
        } else if (cnt < 0) {
            p1 = (u16 *)((u8 *)s->unk_1024 + ((cnt + 0x20) << 6));
            p2 = (u16 *)((u8 *)p1 + 0x800);
            for (i = 0; i > s->unk_282e; i--) {
                for (j = 0; j < 0x20; j++) {
                    *p1 = 0x4010;
                    *p2 = 0x4010;
                    p1++;
                    p2++;
                }
            }
        }
        func_020b86c0(s, s->unk_1024, s->unk_2832, 0x1000, 0);
        func_ov127_02292218(s, 2);
    }
}
}

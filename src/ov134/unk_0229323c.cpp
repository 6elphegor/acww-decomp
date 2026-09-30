#include "types.h"

struct Unk_ov134_0229323c {
    u32 unk_00[0x21];
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c;
    u16 unk_90;
    u16 unk_92;
    u16 unk_94;
    u16 unk_96;
    volatile u8 unk_98[6];
    u8 unk_9e;
    u8 unk_9f;
    u8 unk_a0;
    u8 unk_a1[0x10];
    u8 unk_b1;
    u8 unk_b2[6];
    u8 unk_b8[8];
    u8 unk_c0[8];
    u8 unk_c8[8];
    u8 unk_d0[8];
    u32 unk_d8[(0x584 - 0xd8) / 4];
    u32 unk_584[4];
};

extern u32 data_ov134_02294c7c[];
extern u32 data_ov134_02294c94[];
extern u32 data_ov134_02294cac[];
extern u32 data_ov134_02294cc4[];
extern u32 data_ov134_02294cdc[];
extern u32 data_ov134_02294cf4[];
extern u32 data_ov134_02294d0c[];

extern "C" {
void func_ov134_02291f60(Unk_ov134_0229323c *self, u32 f);
void func_ov134_02291f70(Unk_ov134_0229323c *self, u32 f);
BOOL func_ov134_02291f80(Unk_ov134_0229323c *self, u32 f);
s32 func_ov134_0229462c(Unk_ov134_0229323c *self, s32 i);
void func_ov134_02294638(Unk_ov134_0229323c *self, s32 i);
void func_ov134_022946b0(Unk_ov134_0229323c *self);
void func_0206ee80(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_0209ceac(u32 a, u32 b, u32 c);
void func_0209d258(void *p, s32 v);
void func_0209d0e4(void *p, s32 v);
s32 func_0209d3d0(void *a, void *b, s32 c);
s32 func_0209d374(void *a, void *b);
void func_0209d124(void *p, s32 v);
void func_0209d28c(void *p, s32 v);
void func_02116048(void *dst, void *src, s32 n);
void func_02003ff4(s32 a, s32 b);
void func_0200402c(s32 a);
void func_02004008(s32 a);
s32 func_020e7b98(s32 a, s32 b);

void func_ov134_0229323c(Unk_ov134_0229323c *self);
void func_ov134_022932a0(Unk_ov134_0229323c *self, u8 v);
u8 func_ov134_022932d8(Unk_ov134_0229323c *self);
void func_ov134_022932e0(Unk_ov134_0229323c *self);
void func_ov134_02293320(Unk_ov134_0229323c *self);
void func_ov134_02293350(Unk_ov134_0229323c *self, s32 a, s32 b);
void func_ov134_022933a4(Unk_ov134_0229323c *self, s32 idx, s32 x);
s32 func_ov134_02293474(Unk_ov134_0229323c *self, s32 i);
s32 func_ov134_02293484(Unk_ov134_0229323c *self, s32 i);
s32 func_ov134_022934a4(Unk_ov134_0229323c *self, s32 i);
s32 func_ov134_022934b0(Unk_ov134_0229323c *self, s32 i);
s32 func_ov134_022934e0(Unk_ov134_0229323c *self, s32 i);
s32 func_ov134_02293510(Unk_ov134_0229323c *self, s32 x, s32 y);
s32 func_ov134_02293564(Unk_ov134_0229323c *self, s32 x, s32 y);
s32 func_ov134_022935b8(Unk_ov134_0229323c *self, s32 x, s32 y);
s32 func_ov134_0229360c(Unk_ov134_0229323c *self, s32 x, s32 y);
BOOL func_ov134_02293660(Unk_ov134_0229323c *self);
BOOL func_ov134_022936ac(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep);
void func_ov134_022936f4(Unk_ov134_0229323c *self, s32 delta);
BOOL func_ov134_022938a0(void *self, s32 x, s32 y, s32 r);
s32 func_ov134_022938c4(void *self, s32 a, s32 b);
s32 func_ov134_022938fc(Unk_ov134_0229323c *self, s32 x, s32 y, s32 t);
s32 func_ov134_02293928(void *self, s32 x, s32 y);
void func_ov134_0229393c(Unk_ov134_0229323c *self);
void func_ov134_02293988(Unk_ov134_0229323c *self);
void func_ov134_0229399c(Unk_ov134_0229323c *self, u8 a, u8 b);
void func_ov134_022939e8(Unk_ov134_0229323c *self, s32 x, s32 y);
void func_ov134_02293a14(Unk_ov134_0229323c *self, s32 x, s32 y);
BOOL func_ov134_02293a3c(Unk_ov134_0229323c *self);
BOOL func_ov134_02293a5c(Unk_ov134_0229323c *self);
void func_ov134_02293b30(Unk_ov134_0229323c *self, s32 x, s32 y);

static inline s32 Unk_ov134_02293510_Hi(Unk_ov134_0229323c *self, s32 i, s32 off) { return func_ov134_02293484(self, i) + off; }

void func_ov134_0229323c(Unk_ov134_0229323c *self)
{
    switch (self->unk_a0) {
    case 0:
    case 1:
        if (self->unk_b1 < 4) {
            func_ov134_022932a0(self, self->unk_b1 + 1);
        } else {
            func_ov134_022932a0(self, 6);
        }
        break;
    case 2:
    case 3:
        if (self->unk_b1 < 2) {
            func_ov134_022932a0(self, self->unk_b1 + 1);
        } else {
            func_ov134_022932a0(self, 6);
        }
        break;
    }
}

void func_ov134_022932a0(Unk_ov134_0229323c *self, u8 v)
{
    u32 old = self->unk_b1;
    if (old == v) return;
    self->unk_b1 = v;
    if (old != 6) {
        func_ov134_022933a4(self, old, 3);
    }
    if (v != 6) {
        func_ov134_022933a4(self, v, 3);
    }
}

u8 func_ov134_022932d8(Unk_ov134_0229323c *self)
{
    return self->unk_b1;
}

void func_ov134_022932e0(Unk_ov134_0229323c *self)
{
    s32 i;
    for (i = 0; i <= 5; i++) {
        if (self->unk_98[i] != 0) {
            self->unk_98[i] = self->unk_98[i] - 1;
            if (self->unk_98[i] == 0) {
                func_ov134_022933a4(self, i, 3);
            }
        }
    }
}

void func_ov134_02293320(Unk_ov134_0229323c *self)
{
    s32 i;
    s32 j;
    for (i = 0; i <= 5; i++) {
        func_ov134_022933a4(self, i, 3);
    }
    for (j = 0; j <= 5; j++) {
        self->unk_98[j] = 0;
    }
}

void func_ov134_02293350(Unk_ov134_0229323c *self, s32 a, s32 b)
{
    s32 x = func_ov134_02293484(self, a) + 1;
    s32 y = func_ov134_022934b0(self, a);
    s32 z;
    if (self->unk_a0 == 0 && a == 3) {
        z = x + 1;
    } else {
        z = x + 2;
    }
    func_0206ee80(self->unk_584, x, y, z, y + 1, b);
    func_ov134_02291f70(self, 2);
}

void func_ov134_022933a4(Unk_ov134_0229323c *self, s32 idx, s32 x)
{
    s32 t;
    s32 a;
    s32 b;
    s32 c;
    if (self->unk_a0 == 1) {
        if (idx == 0) return;
        if (idx == 1 || idx == 2 || idx == 5) {
            if (x == 3) x = 4;
            if (x == 5) x = 7;
        }
    } else if (self->unk_a0 == 2) {
        if (idx != 1 && idx != 2) return;
    }
    if (idx == 5 && x == 3) {
        if (func_0209ceac(self->unk_b8[5], self->unk_b8[4], self->unk_b8[3]) == 0) {
            x = 8;
            func_ov134_02291f70(self, x);
        } else {
            func_ov134_02291f60(self, 8);
        }
    }
    if (self->unk_b1 == idx && x == 3) x = 5;
    t = func_ov134_022934e0(self, idx);
    a = func_ov134_022934b0(self, idx);
    b = func_ov134_02293484(self, idx);
    c = func_ov134_02293474(self, idx);
    func_0206ee80(self->unk_584, t, a, b, c, x);
    func_ov134_02291f70(self, 2);
}

s32 func_ov134_02293474(Unk_ov134_0229323c *self, s32 i)
{
    return func_ov134_022934b0(self, i) + 1;
}

s32 func_ov134_02293484(Unk_ov134_0229323c *self, s32 i)
{
    s32 a = func_ov134_022934e0(self, i);
    return a + func_ov134_022934a4(self, i) - 1;
}

s32 func_ov134_022934a4(Unk_ov134_0229323c *self, s32 i)
{
    return data_ov134_02294c94[i];
}

s32 func_ov134_022934b0(Unk_ov134_0229323c *self, s32 i)
{
    u32 m = self->unk_a0;
    if (m == 2) return data_ov134_02294cf4[i];
    if (m == 1) return data_ov134_02294d0c[i];
    return data_ov134_02294c7c[i];
}

s32 func_ov134_022934e0(Unk_ov134_0229323c *self, s32 i)
{
    u32 m = self->unk_a0;
    if (m == 2) return data_ov134_02294cac[i];
    if (m == 1) return data_ov134_02294cdc[i];
    return data_ov134_02294cc4[i];
}

s32 func_ov134_02293510(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 3; i <= 4; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

s32 func_ov134_02293564(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 1; i <= 2; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

s32 func_ov134_022935b8(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 0; i <= 2; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 3) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

s32 func_ov134_0229360c(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 0; i <= 4; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

BOOL func_ov134_02293660(Unk_ov134_0229323c *self)
{
    BOOL r;
    if (self->unk_84 == self->unk_88) {
        r = TRUE;
    } else {
        r = func_ov134_022936ac(self, &self->unk_84, self->unk_88, 0x30, 3);
        func_ov134_0229393c(self);
    }
    if (r == TRUE) {
        func_02003ff4(0x54, 1);
        func_0200402c(0x2e);
    }
    return r;
}

BOOL func_ov134_022936ac(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep)
{
    s32 d;
    s32 step;
    s32 cur = *p;
    if (cur > target) { d = cur - target; } else { d = target - cur; }
    if (d < minstep) { *p = target; return TRUE; }
    step = d >> 1;
    if (step > maxstep) { step = maxstep; } else if (step < minstep) { step = minstep; }
    if (cur > target) { *p = *p - step; } else { *p = *p + step; }
    return FALSE;
}

void func_ov134_022936f4(Unk_ov134_0229323c *self, s32 delta)
{
    u8 buf[6];
    s32 i;
    BOOL r;
    s32 v;
    u8 *pc;
    if (delta == 0) return;
    for (i = 0; i <= 4; i++) {
        buf[i] = func_ov134_0229462c(self, i);
    }
    buf[5] = 0;
    if (delta > 0) {
        func_0209d258(self->unk_c0, delta);
    } else {
        func_0209d0e4(self->unk_c0, -delta);
    }
    r = TRUE;
    if (func_ov134_02291f80(self, 0x40)) {
        if (func_0209d3d0(self->unk_d0, self->unk_c0, 0x3f) == -1) {
            v = func_0209d374(self->unk_d0, self->unk_c0);
            r = FALSE;
            func_02116048(self->unk_d0, self->unk_b8, 8);
            func_ov134_02291f70(self, 0x10);
            pc = self->unk_c0;
            while (v >= 0x2d0) {
                func_0209d124(pc, 0xc);
                v -= 0x2d0;
            }
        } else {
            func_ov134_02291f60(self, 0x10);
        }
    }
    if (func_ov134_02291f80(self, 0x80)) {
        if (func_0209d3d0(self->unk_c8, self->unk_c0, 0x3f) == 1) {
            v = func_0209d374(self->unk_c0, self->unk_c8);
            r = FALSE;
            func_02116048(self->unk_c8, self->unk_b8, 8);
            func_ov134_02291f70(self, 0x20);
            pc = self->unk_c0;
            while (v >= 0x2d0) {
                func_0209d28c(pc, 0xc);
                v -= 0x2d0;
            }
        } else {
            func_ov134_02291f60(self, 0x20);
        }
    }
    if (r) {
        func_02116048(self->unk_c0, self->unk_b8, 8);
        func_ov134_02293988(self);
    } else {
        func_ov134_0229399c(self, self->unk_c0[2], self->unk_c0[1]);
    }
    for (i = 0; i <= 4; i++) {
        if (buf[i] != func_ov134_0229462c(self, i)) {
            self->unk_98[i] = 10;
            func_ov134_022933a4(self, i, 5);
            func_ov134_02294638(self, i);
            if (i >= 0 && i <= 2) {
                buf[5] = 1;
            }
        }
    }
    if (buf[5] != 0) {
        self->unk_98[5] = 10;
        func_ov134_022933a4(self, 5, 5);
        func_ov134_022946b0(self);
    }
}

BOOL func_ov134_022938a0(void *self, s32 x, s32 y, s32 r)
{
    s32 dx = x - 0x38;
    dx = dx * dx;
    s32 dy = y - 0x34;
    dy = dy * dy;
    if (dx + dy < r * r) return TRUE;
    return FALSE;
}

s32 func_ov134_022938c4(void *self, s32 a, s32 b)
{
    s32 x = a - b;
    s32 y = b - a;
    while (x < 0) x += 0x10000;
    while (x >= 0x10000) x -= 0x10000;
    while (y < 0) y += 0x10000;
    while (y >= 0x10000) y -= 0x10000;
    if (x > y) {
        x = -y;
    }
    return x;
}

s32 func_ov134_022938fc(Unk_ov134_0229323c *self, s32 x, s32 y, s32 t)
{
    if (x == 0x38 && y == 0x34) {
        return 0;
    }
    return func_ov134_022938c4(self, func_ov134_02293928(self, x, y), t);
}

s32 func_ov134_02293928(void *self, s32 x, s32 y)
{
    return func_020e7b98((x - 0x38) << 12, -(y - 0x34) << 12);
}

void func_ov134_0229393c(Unk_ov134_0229323c *self)
{
    s32 t = self->unk_84;
    while (t < 0) t += 0x2d0;
    while (t >= 0x2d0) t -= 0x2d0;
    self->unk_94 = (t << 16) / 0x2d0;
    self->unk_92 = (t % 0x3c) * 0x444;
}

void func_ov134_02293988(Unk_ov134_0229323c *self)
{
    func_ov134_0229399c(self, self->unk_b8[2], self->unk_b8[1]);
}

void func_ov134_0229399c(Unk_ov134_0229323c *self, u8 a, u8 b)
{
    self->unk_84 = a * 0x3c + b;
    if (a >= 0xc) {
        a = a - 0xc;
    }
    self->unk_94 = ((b + a * 0x3c) << 16) / 0x2d0;
    self->unk_92 = b * 0x444;
}

void func_ov134_022939e8(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    s32 t = func_ov134_022938fc(self, x, y, self->unk_94);
    if (t != 0) {
        func_ov134_022936f4(self, (t * 0x2d0) >> 16);
    }
}

void func_ov134_02293a14(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    s32 t = func_ov134_022938fc(self, x, y, self->unk_92);
    if (t != 0) {
        func_ov134_022936f4(self, (t * 0x3c) >> 16);
    }
}

BOOL func_ov134_02293a3c(Unk_ov134_0229323c *self)
{
    if (func_ov134_02293660(self)) {
        func_ov134_02293988(self);
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov134_02293a5c(Unk_ov134_0229323c *self)
{
    s32 a;
    func_ov134_02293320(self);
    if (func_ov134_02291f80(self, 0x40) && func_ov134_02291f80(self, 0x10)) {
        a = func_ov134_0229462c(self, 4);
        self->unk_88 = a + func_ov134_0229462c(self, 3) * 0x3c;
        while (self->unk_88 > self->unk_84) {
            self->unk_88 = self->unk_88 - 0x2d0;
        }
        func_02004008(0x54);
        return TRUE;
    }
    if (func_ov134_02291f80(self, 0x80) && func_ov134_02291f80(self, 0x20)) {
        a = func_ov134_0229462c(self, 4);
        self->unk_88 = a + func_ov134_0229462c(self, 3) * 0x3c;
        while (self->unk_88 < self->unk_84) {
            self->unk_88 = self->unk_88 + 0x2d0;
        }
        func_02004008(0x54);
        return TRUE;
    }
    return FALSE;
}

void func_ov134_02293b30(Unk_ov134_0229323c *self, s32 x, s32 y)
{
    u32 w;
    s32 t;
    switch (self->unk_9e) {
    case 0:
        func_ov134_02293a14(self, x, y);
        w = self->unk_92;
        break;
    case 1:
        func_ov134_022939e8(self, x, y);
        w = self->unk_94;
        break;
    default:
        return;
    }
    t = func_ov134_022938c4(self, self->unk_96, w);
    if (t < -1000 || t > 1000) {
        func_0200402c(0x1a);
        self->unk_96 = w;
    }
}
}

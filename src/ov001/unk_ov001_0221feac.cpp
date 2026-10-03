// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df04 {
    void *unk_00;
    void *unk_04;
    void *unk_08[2];
    void *unk_10;
    u32 unk_14;
    u16 unk_18;
    s8 unk_1a;
    s8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
};

struct Unk_ov001_0222a3f8 {
    u16 a;
    u16 b;
};

extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a38c;
extern "C" const u8 data_ov001_0222a390[8];
extern "C" const u8 data_ov001_0222a398[8];
extern "C" const u16 data_ov001_0222a3a0[4];
extern "C" const u8 data_ov001_0222a3a8[6][2];
extern "C" const s8 data_ov001_0222a3b4[12];
extern "C" const u8 data_ov001_0222a3c0[6][2];
extern "C" const u8 data_ov001_0222a3cc[20];
extern "C" const u16 data_ov001_0222a3e0[12];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a3f8[6];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a410[6];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a428[5][2];
#define data_ov001_0222a3b5 (data_ov001_0222a3b4 + 1)
#define data_ov001_0222a3e2 (data_ov001_0222a3e0 + 1)
#define data_ov001_0222a3fa ((const Unk_ov001_0222a3f8 *)((const u8 *)data_ov001_0222a3f8 + 2))
#define data_ov001_0222a412 ((const Unk_ov001_0222a3f8 *)((const u8 *)data_ov001_0222a410 + 2))
#define data_ov001_0222a42a ((const u16 (*)[4])((const u8 *)data_ov001_0222a428 + 2))
extern "C" Unk_ov001_0222df04 *data_ov001_0222df04;

extern "C" {
extern void *data_ov001_0222de1c[];

s32 func_ov001_022247cc(void *);
void func_ov001_0222449c(void *, s32, s32 *, s32 *);
void func_ov001_02224558(void *, s32, s32, s32);
void func_ov001_022244d8(void *, s32, s32);
void func_ov001_02224704(void *, s32, s32, s32);
void func_ov001_022247e0(void *);
void *func_ov001_022247d4(void *, s32);
void func_ov001_02225718(void *);
void func_ov001_02225958(s32, s32, s32, s32, void *);
void func_ov001_02225ae8(s32, s32, const void *);
void func_ov001_02226fdc(s32, s32);
void func_ov001_02226ffc(s32, void *);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02225924(const void *, const void *, void *);
s32 func_ov001_022260ac(void *);
s32 func_ov001_022261cc(s32);
void *func_ov001_02224b14(s32, s32, s32);
void func_ov001_02224b9c(s32, s32, void *);
void *func_ov001_02225db0(s32, s32);
void func_ov001_02225d58(void *);
void *func_ov001_02225748(s32, s32, s32, s32, void *, s32);
void *func_ov001_02224870(s32, s32, s32);
void *func_ov001_02208388();
void func_ov001_02225254(void *, u32, u32, u32, u32, s32, void *, s32);
void func_ov001_0222519c(void *, u32, u32, void *, s32);
void func_ov001_0222597c(s32, s32, s32, s32);
void *func_ov001_0220cbd0(void *, s32, s32, s32);
void G2x_ChangeBlendBrightness_(u32, s32);
void G2x_SetBlendBrightness_(u32, s32, s32);

void func_ov001_0221feac(s32 a);
void func_ov001_0221ff64(s32 a);
void func_ov001_0221ffc8(s32 a);
void func_ov001_02220064(s32 a);
void func_ov001_022200b4(s32 i);
void func_ov001_02220178(void *a, s32 b);
void func_ov001_0222020c(s32 r);
void func_ov001_022203c4(s32 r);
void func_ov001_02220444(s32 r);
void func_ov001_022205a4(s32 r);
void func_ov001_02220690(s32 r);
BOOL func_ov001_022206f8();
s32 func_ov001_02220714();
void func_ov001_02220728();
void func_ov001_02220778(s32 a, s32 b, s32 c, s32 d, s32 e);
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 data_ov001_0222a3c0[6][2];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a38c;
extern "C" const u8 data_ov001_0222a390[8];
extern "C" Unk_ov001_0222df04 *data_ov001_0222df04;
extern "C" const u8 data_ov001_0222a398[8];
extern "C" const u16 data_ov001_0222a3a0[4];
extern "C" const u8 data_ov001_0222a3a8[6][2];
extern "C" const u8 data_ov001_0222a3cc[20];
extern "C" const u16 data_ov001_0222a3e0[12];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a3f8[6];
extern "C" const s8 data_ov001_0222a3b4[12];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a410[6];
extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a428[5][2];

extern "C" const u8 data_ov001_0222a3c0[6][2] = {{0x1b, 0x19}, {0x57, 0}, {0x23, 0x1d}, {0x59, 0}, {0x23, 0x1d}, {0, 0}};

void func_ov001_02220778(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    u8 buf[6] = {1, 1, 0, 0, 1, 1};
    Unk_ov001_0222df04 *g;
    void *v;
    void *out;
    s32 i;

    v = func_ov001_0220cbd0(*data_ov001_0222de1c, a, d, e);
    g = (Unk_ov001_0222df04 *)func_ov001_02225db0(0x20, 4);
    data_ov001_0222df04 = g;
    g->unk_1c = b;
    data_ov001_0222df04->unk_1b = -2;
    data_ov001_0222df04->unk_1e = c;
    G2x_SetBlendBrightness_(0x4000050, 0x1f, 0);
    data_ov001_0222df04->unk_00 = func_ov001_02224b14(0, data_ov001_0222a390[b], 0);
    func_ov001_02224558(data_ov001_0222df04->unk_00, -1, 0x100, 0);
    func_ov001_022244d8(data_ov001_0222df04->unk_00, -1, 0);
    for (i = 0; i < data_ov001_0222a398[b]; i++) {
        data_ov001_0222df04->unk_08[i] = func_ov001_02224b14(0, data_ov001_0222a3c0[b][i], 0);
        func_ov001_02224558(data_ov001_0222df04->unk_08[i], -1, 0x100, 0);
        func_ov001_022244d8(data_ov001_0222df04->unk_08[i], -1, 0);
    }
    data_ov001_0222df04->unk_10 = func_ov001_02225748(0, 0x20, 0xc, 1, &out, 0);
    data_ov001_0222df04->unk_04 = func_ov001_02224870(0, (s32)out, 0);
    func_ov001_02225254(data_ov001_0222df04->unk_10, 0, 0, data_ov001_0222a3e0[b * 2], data_ov001_0222a3e2[b * 2], 2, func_ov001_02208388(), (s32)v);
    func_ov001_0222519c(data_ov001_0222df04->unk_10, 0x100, 0, data_ov001_0222df04->unk_04, 0);
    func_ov001_0222597c(0, 0, 0x1f, 0);
    func_ov001_0222597c(0, 1, 0x1f, buf[data_ov001_0222df04->unk_1c]);
    func_ov001_0222597c(0, 3, 0x1f, 1);
    func_ov001_02225ae8(0, 1, data_ov001_0222a3a0);
    func_ov001_0222020c(0xc0);
    {
        volatile u32 *reg = (volatile u32 *)0x4000000;
        *reg = (*reg & ~0xe000) | 0x6000;
    }
    if (c != 0) {
        data_ov001_0222df04->unk_14 = (u32)func_ov001_02227094(1, (void *)func_ov001_02220690, 0, 0x78);
    } else {
        data_ov001_0222df04->unk_14 = (u32)func_ov001_02227094(1, (void *)func_ov001_022205a4, 0, 0x78);
    }
}

void func_ov001_02220728()
{
    func_ov001_02226fdc(0, data_ov001_0222df04->unk_14);
    data_ov001_0222df04->unk_14 = (u32)func_ov001_02227094(1, (void *)func_ov001_02220064, 0, 0x78);
}

s32 func_ov001_02220714()
{
    return data_ov001_0222df04->unk_1b;
}

BOOL func_ov001_022206f8()
{
    if (data_ov001_0222df04 != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov001_02220690(s32 r)
{
    data_ov001_0222df04->unk_1a = data_ov001_0222df04->unk_1a - 1;
    G2x_ChangeBlendBrightness_(0x4000050, data_ov001_0222df04->unk_1a);
    if (data_ov001_0222df04->unk_1a > -12) {
        return;
    }
    func_ov001_02226ffc(r, (void *)func_ov001_022205a4);
}

void func_ov001_022205a4(s32 r)
{
    s32 x, y;
    s32 k;
    func_ov001_0222449c(data_ov001_0222df04->unk_00, 0, &x, &y);
    y -= 12;
    k = data_ov001_0222a3fa[data_ov001_0222df04->unk_1c].a;
    if (y > k) {
        func_ov001_0222020c(y);
        return;
    }
    func_ov001_0222020c(k);
    if (data_ov001_0222df04->unk_1c == 5) {
        data_ov001_0222df04->unk_14 = (u32)func_ov001_02227094(0, (void *)func_ov001_022203c4, 0, 0x78);
    } else {
        data_ov001_0222df04->unk_14 = (u32)func_ov001_02227094(0, (void *)func_ov001_02220444, 0, 0x78);
    }
    func_ov001_02226fdc(1, r);
}

void func_ov001_02220444(s32 r)
{
    s32 i;
    u32 loc[2];
    Unk_ov001_0222df04 *g;

    for (i = 0; i < data_ov001_0222a398[data_ov001_0222df04->unk_1c]; i++) {
        u32 idx = data_ov001_0222a3a8[data_ov001_0222df04->unk_1c][i];
        func_ov001_02225924(&data_ov001_0222a428[data_ov001_0222df04->unk_1c][idx],
                            &data_ov001_0222a3cc[data_ov001_0222df04->unk_1c * 4], loc);
        if (func_ov001_022260ac(loc) != 0) {
            data_ov001_0222df04->unk_1b = i;
            break;
        }
    }
    if (func_ov001_022261cc(1) != 0) {
        data_ov001_0222df04->unk_1b = data_ov001_0222a3b4[data_ov001_0222df04->unk_1c * 2];
    }
    if (func_ov001_022261cc(2) != 0) {
        data_ov001_0222df04->unk_1b = data_ov001_0222a3b5[data_ov001_0222df04->unk_1c * 2];
    }
    g = data_ov001_0222df04;
    for (i = 0; i < data_ov001_0222a398[*(volatile u8 *)&g->unk_1c]; i++) {
        if (i == g->unk_1b) {
            func_ov001_022200b4(i);
            return;
        }
    }
    g->unk_1b = -1;
}

void func_ov001_022203c4(s32 r)
{
    Unk_ov001_0222df04 *g = data_ov001_0222df04;
    g->unk_1b = -1;
    data_ov001_0222df04->unk_18 = data_ov001_0222df04->unk_18 + 1;
    if (data_ov001_0222df04->unk_18 < 0x78) {
        return;
    }
    func_ov001_02226fdc(0, r);
    data_ov001_0222df04->unk_14 = (u32)func_ov001_02227094(1, (void *)func_ov001_02220064, 0, 0x78);
}

void func_ov001_0222020c(s32 r)
{
    s32 k;
    s32 i;
    Unk_ov001_0222df04 *g;

    g = data_ov001_0222df04;
    func_ov001_02224558(g->unk_00, -1, data_ov001_0222a3f8[g->unk_1c].a, r);
    g = data_ov001_0222df04;
    func_ov001_02224558(g->unk_04, -1, data_ov001_0222a38c.a + data_ov001_0222a3f8[g->unk_1c].a, r + data_ov001_0222a38c.b);
    func_ov001_02220178(data_ov001_0222df04->unk_00, r);
    func_ov001_02220178(data_ov001_0222df04->unk_04, r);
    for (i = 0; i < data_ov001_0222a398[k = data_ov001_0222df04->unk_1c]; i++) {
        g = data_ov001_0222df04;
        u32 idx = data_ov001_0222a3a8[g->unk_1c][i];
        func_ov001_02224558(g->unk_08[i], -1, data_ov001_0222a428[g->unk_1c][idx].a,
                            r + data_ov001_0222a428[g->unk_1c][idx].b - data_ov001_0222a3f8[g->unk_1c].b);
        func_ov001_02220178(data_ov001_0222df04->unk_08[i], r);
    }
    {
        s32 t = r & 0xff;
        s32 y1, y2;
        if (t >= 0xc0) {
            y2 = 0;
            y1 = 0;
        } else {
            y1 = t;
            y2 = t + data_ov001_0222a412[k].a;
        }
        s32 loc[2];
        if (y2 > 0xc0) {
            y2 = 0xc0;
        }
        func_ov001_02225958(data_ov001_0222a3f8[k].a, y1, data_ov001_0222a3f8[k].a + data_ov001_0222a410[k].a, y2, loc);
        func_ov001_02225ae8(0, 0, loc);
    }
}

void func_ov001_02220178(void *a, s32 b)
{
    s32 n = func_ov001_022247cc(a);
    s32 i;
    s32 x, y;
    for (i = 0; i < n; i++) {
        func_ov001_0222449c(a, i, &x, &y);
        s32 v;
        if (y >= b && y < 0xc0) {
            v = 0;
        } else {
            v = 0x200;
        }
        func_ov001_02224704(a, i, v, 0);
    }
}

void func_ov001_022200b4(s32 i)
{
    void *o = func_ov001_022247d4(data_ov001_0222df04->unk_08[i], 0);
    func_ov001_02224b9c(0, ((const u8 *)data_ov001_0222a3c0 + data_ov001_0222df04->unk_1c * 2)[i] + 1, o);
    u32 t = data_ov001_0222df04->unk_1c;
    void *p = data_ov001_0222df04->unk_08[i];
    u32 off = ((const u8 *)data_ov001_0222a3a8 + t * 2)[i] << 2;
    func_ov001_02224558(p, -1, *(u16 *)(off + (u32)data_ov001_0222a428[t]), *(u16 *)(off + (u32)data_ov001_0222a42a[t]));
    func_ov001_022244d8(data_ov001_0222df04->unk_08[i], -1, 0);
}

void func_ov001_02220064(s32 a)
{
    data_ov001_0222df04->unk_1d++;
    if (data_ov001_0222df04->unk_1d < 8) {
        return;
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221ffc8);
}

void func_ov001_0221ffc8(s32 a)
{
    s32 x, y;
    func_ov001_0222449c(data_ov001_0222df04->unk_00, 0, &x, &y);
    y += 0xc;
    func_ov001_0222020c(y);
    if (y < 0xc0) {
        return;
    }
    if (data_ov001_0222df04->unk_1e != 0) {
        func_ov001_02226ffc(a, (void *)func_ov001_0221ff64);
    } else {
        func_ov001_02226ffc(a, (void *)func_ov001_0221feac);
    }
}

void func_ov001_0221ff64(s32 a)
{
    data_ov001_0222df04->unk_1a++;
    G2x_ChangeBlendBrightness_(0x4000050, data_ov001_0222df04->unk_1a);
    if (data_ov001_0222df04->unk_1a < 0) {
        return;
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221feac);
}

void func_ov001_0221feac(s32 a)
{
    s32 i;
    *(volatile u32 *)0x4000000 &= ~0xe000;
    func_ov001_022247e0(data_ov001_0222df04->unk_00);
    func_ov001_022247e0(data_ov001_0222df04->unk_04);
    for (i = 0; i < data_ov001_0222a398[data_ov001_0222df04->unk_1c]; i++) {
        if (data_ov001_0222df04->unk_08[i] != NULL) {
            func_ov001_022247e0(data_ov001_0222df04->unk_08[i]);
        }
    }
    func_ov001_02225718(data_ov001_0222df04->unk_10);
    func_ov001_02226fdc(1, a);
    func_ov001_02225d58(&data_ov001_0222df04);
}

extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a38c = {8, 8};

extern "C" const u8 data_ov001_0222a390[8] = {0, 0, 0x46, 0x46, 0x4f, 0x2f, 0, 0};

extern "C" Unk_ov001_0222df04 *data_ov001_0222df04 = 0;

extern "C" const u8 data_ov001_0222a398[8] = {2, 1, 2, 1, 2, 0, 0, 0};

extern "C" const u16 data_ov001_0222a3a0[4] = {4, 0x1d, 0xfc, 0x44};

extern "C" const u8 data_ov001_0222a3a8[6][2] = {{0, 1}, {1, 0}, {0, 1}, {1, 0}, {0, 1}, {0, 0}};

extern "C" const u8 data_ov001_0222a3cc[20] = {0x6c, 0, 0x10, 0, 0x6c, 0, 0x10, 0, 0x78, 0, 0x10, 0, 0x78, 0, 0x10, 0, 0x78, 0, 0x10, 0};

extern "C" const u16 data_ov001_0222a3e0[12] = {0xd8, 0x50, 0xd8, 0x50, 0xe6, 0x4f, 0xe6, 0x4f, 0xe6, 0x48, 0xda, 0x5c};

extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a3f8[6] = {{0xb, 0x27}, {0xb, 0x27}, {4, 0x4c}, {4, 0x4c}, {4, 0x54}, {0xb, 0x27}};

extern "C" const s8 data_ov001_0222a3b4[12] = {1, 0, 0, -1, 1, 0, 0, -1, 1, 0, 0, 0};

extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a410[6] = {{0xea, 0x72}, {0xea, 0x72}, {0xf8, 0x70}, {0xf8, 0x70}, {0x64, 0x70}, {0xea, 0x72}};

extern "C" const Unk_ov001_0222a3f8 data_ov001_0222a428[5][2] = {{{0x10, 0x84}, {0x84, 0x84}}, {{0x10, 0x84}, {0x84, 0x84}}, {{9, 0xa7}, {0x83, 0xa7}}, {{9, 0xa7}, {0x83, 0xa7}}, {{9, 0xa7}, {0x83, 0xa7}}};

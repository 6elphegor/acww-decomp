#include "types.h"

struct Unk_ov110_02295588_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov110_02295588 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xa0 - 0x8e];
    s32 unk_0a0;
    s32 unk_0a4;
    s32 unk_0a8;
    s32 unk_0ac;
    u8 pad_0b0[0xec - 0xb0];
    u16 unk_0ec;
    u8 pad_0ee[2];
    u8 unk_0f0;
    u8 unk_0f1;
    u8 pad_0f2;
    u8 unk_0f3;
    u8 pad_0f4;
    u8 unk_0f5;
    u8 pad_0f6[2];
    u8 unk_0f8;
    u8 unk_0f9;
    u8 unk_0fa;
    u8 pad_0fb[0x138 - 0xfb];
    u8 unk_138[0xb98 - 0x138];
    u8 unk_b98[0x21a0 - 0xb98];
    u8 unk_21a0[0x2260 - 0x21a0];
    u8 unk_2260[0x2278 - 0x2260];
    u8 unk_2278[0x22dc - 0x2278];
    u8 unk_22dc[0x40];
};

typedef Unk_ov110_02295588 S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;

extern "C" {
BOOL func_0206ef00();
s32 func_0206ed50();
BOOL func_0209cef4();
void func_02089af8(void *p);
void func_02089af0(void *p);
void func_02089ad8(void *p, s32 a, s32 b);
void func_0208d538(void *p, s32 a);

void func_ov094_0229357c(void *p, u32 v);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, u32 v);
void func_ov094_022935dc(void *p);
u32 func_ov094_02293504(void *p, u32 v);
u32 func_ov094_0229352c(void *p, u32 v);
void func_ov094_022934d8(void *p, u32 v);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_02293638(void *p, void *q, u32 v);
void func_ov094_02293308(void *p, u32 v);
BOOL func_ov094_0229311c(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
void func_ov094_022943b0(void *p);
void func_ov094_022943f8(void *p);
BOOL func_ov094_02292414(u32 v);
BOOL func_ov094_022924c4(u32 v);
s32 func_ov094_02293610(void *p, u32 v);

void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202d00(void *p, s32 a);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 v);
s32 func_ov002_02201a70(void *p);
void func_ov002_02200a58(void *self, s32 s);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);

BOOL func_ov110_02294d88(S *s, u32 m);
void func_ov110_02294d68(S *s, u32 m);
s32 func_ov110_022954e8(S *s);
s32 func_ov110_02295e98(S *s, u32 v);
s32 func_ov110_02295e48(S *s, u32 a);
s32 func_ov110_02295f18(S *s, u32 a, u32 b, u32 c);
BOOL func_ov110_02296088(S *s, u32 a);
BOOL func_ov110_02296094(S *s, u32 a);
BOOL func_ov110_022960a4(S *s, u32 a);
u32 func_ov110_02296050(S *s, u32 a);

s32 func_ov110_022956c4(S *s);
s32 func_ov110_022956d4(S *s);
void func_ov110_022957d4(S *s, u32 a);
BOOL func_ov110_02295bbc(S *s, u32 a);
u32 func_ov110_02295b38(S *s, u32 a);
u32 func_ov110_02295b78(S *s, u32 a);
BOOL func_ov110_02295c78(S *s, u32 a);
void func_ov110_02295b14(S *s);
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" {

void func_ov110_02295588(S *s)
{
    s->unk_0f9 = 1;
    s->unk_0fa = func_ov002_02201a70(s->unk_22dc);
    s32 a = func_ov002_022014a4(s->unk_22dc);
    s32 b = func_ov002_02201498(s->unk_22dc, s->unk_0fa);
    func_ov002_02202a40(s->unk_2278, a, b);
    func_0208d538(s->unk_2278, 8);
    func_ov002_02200a58(s, 0x12);
}

void func_ov110_022955e8(S *s)
{
    s32 a = func_ov002_022014a4(s->unk_22dc);
    s32 b = func_ov002_02201498(s->unk_22dc, s->unk_0fa);
    func_ov002_02202a18(s->unk_2278, a, b, 2);
    s->unk_0f8 = s->unk_08d;
    func_ov002_02200a58(s, 8);
}

void func_ov110_02295638(S *s)
{
    s32 a = func_ov110_022956d4(s);
    s32 b = func_ov110_022956c4(s);
    func_ov002_022029e8(s->unk_2278, a, b, 3, 1);
    s->unk_0f8 = s->unk_08d;
    func_ov002_02200a58(s, 8);
    if (func_ov110_02294d88(s, 0x100)) {
        ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
        func_ov110_02294d68(s, 0x100);
    }
}

void func_ov110_022956a0(S *s)
{
    func_ov002_02202d00(s->unk_2278, 0);
    ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
}

s32 func_ov110_022956c4(S *s)
{
    return func_ov110_02295e48(s, s->unk_0f5);
}

s32 func_ov110_022956d4(S *s)
{
    s32 r = func_ov110_02295e98(s, s->unk_0f5);
    if (func_ov110_02294d88(s, 0x20)) {
        r += 0x100;
    } else if (func_ov110_02294d88(s, 0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

void func_ov110_02295718(S *s)
{
    s32 a = func_ov110_022956d4(s);
    s32 b = func_ov110_022956c4(s);
    func_ov002_02202a40(s->unk_2278, a, b);
    if (func_ov110_02296088(s, s->unk_0f5)) {
        func_ov002_02202d00(s->unk_2278, 7);
    } else {
        func_ov002_02202d00(s->unk_2278, 1);
    }
    func_ov110_022954e8(s);
}

void func_ov110_02295770(S *s, u32 a)
{
    if (s->unk_0f1 == 1) {
        u32 h = s->unk_0ec;
        u32 b = s->unk_0f0;
        func_ov110_022957d4(s, a);
        func_ov110_02295f18(s, a, h, b);
    }
}

void func_ov110_022957a8(S *s, u32 a)
{
    if (s->unk_0f1 == 1) {
        func_ov110_02295f18(s, a, s->unk_0ec, s->unk_0f0);
    }
    s->unk_0f1 = 0;
}

void func_ov110_022957d4(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        u32 t = func_ov110_02296050(s, a);
        s->unk_0f1 = 1;
        s->unk_0ec = func_ov094_0229352c(s->unk_138, t);
        s->unk_0f0 = func_ov094_02293504(s->unk_138, t);
        func_ov094_022934d8(s->unk_138, t);
        func_ov094_0229341c(s->unk_138, s->unk_0ec, s->unk_0f0);
    }
}

void func_ov110_0229584c(S *s)
{
    s->unk_0a8 = func_ov002_02202710(s->unk_2260);
    s->unk_0ac = func_ov002_02202708(s->unk_2260);
}

void func_ov110_02295874(S *s)
{
    s->unk_0a8 = func_ov002_022028c8(s->unk_2278) - 2;
    s->unk_0ac = func_ov002_022028a0(s->unk_2278) - 4;
}

void func_ov110_022958a0(S *s)
{
    s->unk_0a8 = s->unk_0a0 + data_021ef5f0;
    s->unk_0ac = s->unk_0a4 + data_021ef5ec;
}

void func_ov110_022958cc(S *s)
{
    if (!func_ov110_02294d88(s, 0x40)) {
        u32 t = s->unk_0f1;
        if (t != 0) {
            if (t == 1) {
                func_ov094_0229313c(s->unk_138, s->unk_0a8, s->unk_0ac);
            }
        }
    }
}

void func_ov110_02295904(S *s)
{
    if (func_ov110_022960a4(s, s->unk_0f5) || func_ov110_02296094(s, s->unk_0f5)) {
        if (func_ov110_02295bbc(s, s->unk_0f5)) {
            func_ov002_022006b0(s->unk_21a0);
        } else {
            s->unk_0f3 = s->unk_0f5;
            func_ov002_022006b8(s->unk_21a0);
        }
    } else {
        func_ov002_022006b0(s->unk_21a0);
    }
}

void func_ov110_02295968(S *s)
{
    s32 a = func_ov110_02295e98(s, s->unk_0f3) - 0x6d;
    s32 b = func_ov110_02295e48(s, s->unk_0f3) - 0x78;
    if (func_0206ef00()) {
        b -= 8;
    }
    if (b < -0x5c) {
        func_02089af8(s->unk_21a0);
        b = func_ov110_02295e48(s, s->unk_0f3) - 0x50;
    } else {
        func_02089af0(s->unk_21a0);
    }
    func_02089ad8(s->unk_21a0, a, b);
    if (func_ov110_022960a4(s, s->unk_0f3) || func_ov110_02296094(s, s->unk_0f3)) {
        u32 t = func_ov110_02296050(s, s->unk_0f3);
        func_ov094_02293638(s->unk_138, s->unk_21a0, t);
    }
}

BOOL func_ov110_02295a14()
{
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov110_02295a58(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        func_ov094_0229357c(s->unk_138, func_ov110_02296050(s, a));
    }
}

void func_ov110_02295a94(S *s)
{
    func_ov094_0229358c(s->unk_138);
    func_ov094_022943b0(s->unk_b98);
}

void func_ov110_02295ab8(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        func_ov094_0229359c(s->unk_138, func_ov110_02296050(s, a));
        func_ov094_022943f8(s->unk_b98);
    } else if (func_ov110_02296088(s, a)) {
        func_ov110_02295b14(s);
    }
}

void func_ov110_02295b14(S *s)
{
    func_ov094_022935dc(s->unk_138);
    func_ov094_022943f8(s->unk_b98);
}

u32 func_ov110_02295b38(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_02293504(s->unk_138, func_ov110_02296050(s, a));
    }
    return 0xf1;
}

u32 func_ov110_02295b78(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_0229352c(s->unk_138, func_ov110_02296050(s, a));
    }
    return 0xfff1;
}

BOOL func_ov110_02295bbc(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_0229311c(s->unk_138, func_ov110_02296050(s, a));
    }
    return TRUE;
}

BOOL func_ov110_02295bfc(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_0229333c(s->unk_138, func_ov110_02296050(s, a));
    }
    return FALSE;
}

void func_ov110_02295c3c(S *s)
{
    u32 i = 0;
    do {
        if (func_ov110_02295c78(s, i)) {
            func_ov094_02293308(s->unk_138, func_ov110_02296050(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

BOOL func_ov110_02295c78(S *s, u32 a)
{
    volatile u16 v;
    if (func_ov110_02295bbc(s, a)) {
        return FALSE;
    }
    if (func_ov110_02295b38(s, a)) {
        return TRUE;
    }
    u32 t = func_ov110_02295b78(s, a);
    if (func_ov094_02292414(t)) {
        return TRUE;
    }
    v = t;
    switch (func_0206ed50()) {
    case 0x1e: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if ((x >= 0x11a8 && x <= 0x12a7) || (x >= 0x13c8 && x <= 0x1407) || (x >= 0x13a8 && x <= 0x13c7)
            || (x >= 0x1408 && x <= 0x1428) || (x >= 0x1431 && x <= 0x1470) || (x >= 0x1471 && x <= 0x1491)
            || (x >= 0x1380 && x <= 0x139f)) {
            return FALSE;
        }
        return TRUE;
    }
    case 0x1d: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if (!func_0209cef4()) {
            BOOL g = FALSE;
            u16 x2 = v;
            u16 y2 = v;
            if (y2 >= 0x1531 && x2 <= 0x153a) g = TRUE;
            if (g) return TRUE;
        }
        return FALSE;
    }
    case 0x1f:
        return TRUE;
    case 0x20:
        if (func_ov094_022924c4(t)) {
            BOOL f = FALSE;
            u16 x = v;
            u16 y = v;
            if (y >= 0x1531 && x <= 0x153a) f = TRUE;
            if (f || (x >= 0x153b && x <= 0x1541) || (x >= 0x154a && x <= 0x1553)) {
                return FALSE;
            }
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 func_ov110_02295e48(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_02293610(s->unk_138, func_ov110_02296050(s, a));
    }
    if (func_ov110_02296088(s, a)) {
        return 0x68;
    }
    return 0;
}

}

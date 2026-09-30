#include "types.h"

struct Unk_ov100_0229555c_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov100_0229555c {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xcc - 0x8e];
    u8 unk_0cc[0xb2c - 0xcc];
    u8 unk_b2c[0x2134 - 0xb2c];
    u8 unk_2134[0x21f4 - 0x2134];
    u8 unk_21f4[0x220c - 0x21f4];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2704 - 0x2270];
    s32 unk_2704;
    s32 unk_2708;
    s32 unk_270c;
    s32 unk_2710;
    u8 pad_2714[0x2750 - 0x2714];
    u16 unk_2750;
    u8 pad_2752[2];
    u8 unk_2754;
    u8 unk_2755;
    u8 pad_2756;
    u8 unk_2757;
    u8 pad_2758;
    u8 unk_2759;
    u8 pad_275a[2];
    u8 unk_275c;
    u8 unk_275d;
    u8 unk_275e;
};

typedef Unk_ov100_0229555c S;

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

BOOL func_ov100_02294d80(S *s, u32 m);
void func_ov100_02294d60(S *s, u32 m);
s32 func_ov100_0229553c(S *s);
s32 func_ov100_02295e98(S *s, u32 v);
s32 func_ov100_02295eec(S *s, u32 v);
s32 func_ov100_02295f68(S *s, u32 a, u32 b, u32 c);
BOOL func_ov100_022960cc(S *s, u32 a);
BOOL func_ov100_022960e0(S *s, u32 a);
BOOL func_ov100_022960f0(S *s, u32 a);
u32 func_ov100_02296094(S *s, u32 a);

s32 func_ov100_02295720(S *s);
s32 func_ov100_02295730(S *s);
void func_ov100_0229583c(S *s, u32 a);
BOOL func_ov100_02295c18(S *s, u32 a);
u32 func_ov100_02295b9c(S *s, u32 a);
u32 func_ov100_02295bd8(S *s, u32 a);
BOOL func_ov100_02295cc8(S *s, u32 a);
void func_ov100_02295b80(S *s);
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

void func_ov100_0229555c(S *s)
{
    s32 a = func_ov100_02295730(s);
    s32 b = func_ov100_02295720(s);
    func_ov002_02202a40(s->unk_220c, a, b);
    func_ov002_02202d00(s->unk_220c, 1);
}

void func_ov100_02295590(S *s)
{
    s->unk_275e = 0;
    s32 a = func_ov002_022014a4(s->unk_2270);
    s32 b = func_ov002_02201498(s->unk_2270, s->unk_275e);
    func_ov002_02202a40(s->unk_220c, a, b);
    func_ov002_02202d00(s->unk_220c, 7);
}

void func_ov100_022955dc(S *s)
{
    s->unk_275d = 1;
    s->unk_275e = func_ov002_02201a70(s->unk_2270);
    s32 a = func_ov002_022014a4(s->unk_2270);
    s32 b = func_ov002_02201498(s->unk_2270, s->unk_275e);
    func_ov002_02202a40(s->unk_220c, a, b);
    func_0208d538(s->unk_220c, 8);
    func_ov002_02200a58(s, 0x12);
}

void func_ov100_02295640(S *s)
{
    s32 a = func_ov002_022014a4(s->unk_2270);
    s32 b = func_ov002_02201498(s->unk_2270, s->unk_275e);
    func_ov002_02202a18(s->unk_220c, a, b, 2);
    s->unk_275c = s->unk_08d;
    func_ov002_02200a58(s, 8);
}

void func_ov100_02295694(S *s)
{
    s32 a = func_ov100_02295730(s);
    s32 b = func_ov100_02295720(s);
    func_ov002_022029e8(s->unk_220c, a, b, 3, 1);
    s->unk_275c = s->unk_08d;
    func_ov002_02200a58(s, 8);
    if (func_ov100_02294d80(s, 0x100)) {
        ((Unk_ov100_0229555c_Vt *)s->unk_220c)->vfunc_0c();
        func_ov100_02294d60(s, 0x100);
    }
}

void func_ov100_022956fc(S *s)
{
    func_ov002_02202d00(s->unk_220c, 0);
    ((Unk_ov100_0229555c_Vt *)s->unk_220c)->vfunc_0c();
}

s32 func_ov100_02295720(S *s)
{
    return func_ov100_02295e98(s, s->unk_2759);
}

s32 func_ov100_02295730(S *s)
{
    s32 r = func_ov100_02295eec(s, s->unk_2759);
    if (func_ov100_02294d80(s, 0x20)) {
        r += 0x100;
    } else if (func_ov100_02294d80(s, 0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

void func_ov100_02295778(S *s)
{
    s32 a = func_ov100_02295730(s);
    s32 b = func_ov100_02295720(s);
    func_ov002_02202a40(s->unk_220c, a, b);
    if (func_ov100_022960cc(s, s->unk_2759)) {
        func_ov002_02202d00(s->unk_220c, 7);
    } else {
        func_ov002_02202d00(s->unk_220c, 1);
    }
    func_ov100_0229553c(s);
}

void func_ov100_022957d0(S *s, u32 a)
{
    if (s->unk_2755 == 1) {
        u32 h = s->unk_2750;
        u32 b = s->unk_2754;
        func_ov100_0229583c(s, a);
        func_ov100_02295f68(s, a, h, b);
    }
}

void func_ov100_0229580c(S *s, u32 a)
{
    if (s->unk_2755 == 1) {
        func_ov100_02295f68(s, a, s->unk_2750, s->unk_2754);
    }
    s->unk_2755 = 0;
}

void func_ov100_0229583c(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        u32 t = func_ov100_02296094(s, a);
        s->unk_2755 = 1;
        s->unk_2750 = func_ov094_0229352c(s->unk_0cc, t);
        s->unk_2754 = func_ov094_02293504(s->unk_0cc, t);
        func_ov094_022934d8(s->unk_0cc, t);
        func_ov094_0229341c(s->unk_0cc, s->unk_2750, s->unk_2754);
    }
}

void func_ov100_022958b4(S *s)
{
    s->unk_270c = func_ov002_02202710(s->unk_21f4);
    s->unk_2710 = func_ov002_02202708(s->unk_21f4);
}

void func_ov100_022958e4(S *s)
{
    s->unk_270c = func_ov002_022028c8(s->unk_220c) - 2;
    s->unk_2710 = func_ov002_022028a0(s->unk_220c) - 4;
}

void func_ov100_02295918(S *s)
{
    s->unk_270c = s->unk_2704 + data_021ef5f0;
    s->unk_2710 = s->unk_2708 + data_021ef5ec;
}

void func_ov100_02295950(S *s)
{
    if (!func_ov100_02294d80(s, 0x40)) {
        u32 t = s->unk_2755;
        if (t != 0) {
            if (t == 1) {
                func_ov094_0229313c(s->unk_0cc, s->unk_270c, s->unk_2710);
            }
        }
    }
}

void func_ov100_0229598c(S *s)
{
    if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
        if (func_ov100_02295c18(s, s->unk_2759)) {
            func_ov002_022006b0(s->unk_2134);
        } else {
            s->unk_2757 = s->unk_2759;
            func_ov002_022006b8(s->unk_2134);
        }
    } else {
        func_ov002_022006b0(s->unk_2134);
    }
}

void func_ov100_022959f0(S *s)
{
    s32 a = func_ov100_02295eec(s, s->unk_2757) - 0x6d;
    s32 b = func_ov100_02295e98(s, s->unk_2757) - 0x78;
    if (func_0206ef00()) {
        b -= 8;
    }
    if (b < -0x5c) {
        func_02089af8(s->unk_2134);
        b = func_ov100_02295e98(s, s->unk_2757) - 0x50;
    } else {
        func_02089af0(s->unk_2134);
    }
    func_02089ad8(s->unk_2134, a, b);
    if (func_ov100_022960f0(s, s->unk_2757) || func_ov100_022960e0(s, s->unk_2757)) {
        u32 t = func_ov100_02296094(s, s->unk_2757);
        func_ov094_02293638(s->unk_0cc, s->unk_2134, t);
    }
}

BOOL func_ov100_02295a90()
{
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov100_02295ad4(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        func_ov094_0229357c(s->unk_0cc, func_ov100_02296094(s, a));
    }
}

void func_ov100_02295b0c(S *s)
{
    func_ov094_0229358c(s->unk_0cc);
    func_ov094_022943b0(s->unk_b2c);
}

void func_ov100_02295b28(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        func_ov094_0229359c(s->unk_0cc, func_ov100_02296094(s, a));
        func_ov094_022943f8(s->unk_b2c);
    } else if (func_ov100_022960cc(s, a)) {
        func_ov100_02295b80(s);
    }
}

void func_ov100_02295b80(S *s)
{
    func_ov094_022935dc(s->unk_0cc);
    func_ov094_022943f8(s->unk_b2c);
}

u32 func_ov100_02295b9c(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_02293504(s->unk_0cc, func_ov100_02296094(s, a));
    }
    return 0xf1;
}

u32 func_ov100_02295bd8(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_0229352c(s->unk_0cc, func_ov100_02296094(s, a));
    }
    return 0xfff1;
}

BOOL func_ov100_02295c18(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_0229311c(s->unk_0cc, func_ov100_02296094(s, a));
    }
    return TRUE;
}

BOOL func_ov100_02295c54(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_0229333c(s->unk_0cc, func_ov100_02296094(s, a));
    }
    return FALSE;
}

void func_ov100_02295c90(S *s)
{
    u32 i = 0;
    do {
        if (func_ov100_02295cc8(s, i)) {
            func_ov094_02293308(s->unk_0cc, func_ov100_02296094(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

BOOL func_ov100_02295cc8(S *s, u32 a)
{
    volatile u16 v;
    if (func_ov100_02295c18(s, a)) {
        return FALSE;
    }
    if (func_ov100_02295b9c(s, a)) {
        return TRUE;
    }
    u32 t = func_ov100_02295bd8(s, a);
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

}

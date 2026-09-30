#include "types.h"

struct Unk_ov102_02295558_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov102_02295c38_Ent {
    u8 b[8];
};

struct Unk_ov102_02295558 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xcc - 0x8e];
    u8 unk_0cc[0xb2c - 0xcc];
    u8 unk_b2c[0x2134 - 0xb2c];
    u8 unk_2134[0x21f4 - 0x2134];
    u8 unk_21f4[0x220c - 0x21f4];
    u8 unk_220c[0x2404 - 0x220c];
    s32 unk_2404;
    s32 unk_2408;
    s32 unk_240c;
    s32 unk_2410;
    u16 unk_2414[1];
    u8 pad_2416[0x24c8 - 0x2416];
    u16 unk_24c8;
    u8 unk_24ca;
    u8 unk_24cb;
    u8 pad_24cc;
    u8 unk_24cd;
    u8 unk_24ce;
    u8 unk_24cf;
    u8 unk_24d0;
    u8 unk_24d1;
    u8 pad_24d2;
    u8 unk_24d3;
    u8 pad_24d4[2];
    u8 unk_24d6;
};

typedef Unk_ov102_02295558 S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;
extern Unk_ov102_02295c38_Ent data_ov102_02297580[];

extern "C" {
BOOL func_0206ef00();
s32 func_0208d534(void *p);
void func_02089af8(void *p);
void func_02089af0(void *p);
void func_02089ad8(void *p, s32 a, s32 b);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);

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
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
u32 func_ov094_02293968(void *p);
u32 func_ov094_02293938(void *p, u32 a, u32 b);

void func_ov002_02202a78(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02200a58(void *self, s32 s);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);

BOOL func_ov102_02294d68(S *s, u32 m);
void func_ov102_02294d48(S *s, u32 m);
u32 func_ov102_02295ec0(S *s, u32 v);
u32 func_ov102_02295eb0(S *s, u32 v);
BOOL func_ov102_02295ef8(S *s, u32 v);
BOOL func_ov102_02295f04(S *s, u32 v);
BOOL func_ov102_02295f14(S *s, u32 v);
BOOL func_ov102_02295f24(S *s, u32 v);

void func_ov102_02295558(S *s);
s32 func_ov102_02295634(S *s);
s32 func_ov102_02295644(S *s);
void func_ov102_02295720(S *s, u32 a);
void func_ov102_02295750(S *s, u32 a);
void func_ov102_02295a9c(S *s);
BOOL func_ov102_02295b34(S *s, u32 a);
u32 func_ov102_02295ab8(S *s, u32 a);
u32 func_ov102_02295af4(S *s, u32 a);
BOOL func_ov102_02295be4(S *s, u32 a);
s32 func_ov102_02295c38(S *s, u32 a);
s32 func_ov102_02295ca8(S *s, u32 a);
u32 func_ov102_02295d34(S *s, u32 a);
u32 func_ov102_02295d48(S *s, u32 a);
void func_ov102_02295d64(S *s, u32 a, u32 b, u32 c);
}

extern "C" {

void func_ov102_02295558(S *s)
{
    func_ov002_02202a78(s->unk_220c);
    ((Unk_ov102_02295558_Vt *)s->unk_220c)->vfunc_0c();
}

void func_ov102_02295578(S *s)
{
    if (func_ov102_02294d68(s, 8)) {
        s32 a = func_ov102_02295644(s);
        s32 b = func_ov102_02295634(s);
        func_ov002_02202a40(s->unk_220c, a, b);
        func_ov102_02294d48(s, 8);
    } else {
        s32 a = func_ov102_02295644(s);
        s32 b = func_ov102_02295634(s);
        func_ov002_022029e8(s->unk_220c, a, b, 3, 1);
        s->unk_24d3 = s->unk_08d;
        func_ov002_02200a58(s, 5);
        if (func_ov102_02294d68(s, 0x100)) {
            ((Unk_ov102_02295558_Vt *)s->unk_220c)->vfunc_0c();
            func_ov102_02294d48(s, 0x100);
        }
    }
}

void func_ov102_02295610(S *s)
{
    func_ov002_02202d00(s->unk_220c, 0);
    ((Unk_ov102_02295558_Vt *)s->unk_220c)->vfunc_0c();
}

s32 func_ov102_02295634(S *s)
{
    return func_ov102_02295c38(s, s->unk_24d1);
}

s32 func_ov102_02295644(S *s)
{
    s32 r = func_ov102_02295ca8(s, s->unk_24d1);
    if (func_ov102_02294d68(s, 0x20)) {
        r += 0x100;
    } else if (func_ov102_02294d68(s, 0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

void func_ov102_0229568c(S *s)
{
    s32 a = func_ov102_02295644(s);
    s32 b = func_ov102_02295634(s);
    func_ov002_02202a40(s->unk_220c, a, b);
    if (func_ov102_02295ef8(s, s->unk_24d1)) {
        func_ov002_02202d00(s->unk_220c, 7);
    } else {
        func_ov002_02202d00(s->unk_220c, 1);
    }
    func_ov102_02295558(s);
}

void func_ov102_022956e4(S *s, u32 a)
{
    if (s->unk_24cb == 1) {
        u32 h = s->unk_24c8;
        u32 b = s->unk_24ca;
        func_ov102_02295750(s, a);
        func_ov102_02295d64(s, a, h, b);
    }
}

void func_ov102_02295720(S *s, u32 a)
{
    if (s->unk_24cb == 1) {
        func_ov102_02295d64(s, a, s->unk_24c8, s->unk_24ca);
    }
    s->unk_24cb = 0;
}

void func_ov102_02295750(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        u32 t = func_ov102_02295ec0(s, a);
        s->unk_24cb = 1;
        s->unk_24c8 = func_ov094_0229352c(s->unk_0cc, t);
        s->unk_24ca = func_ov094_02293504(s->unk_0cc, t);
        func_ov094_022934d8(s->unk_0cc, t);
        func_ov094_0229341c(s->unk_0cc, s->unk_24c8, s->unk_24ca);
    }
}

void func_ov102_022957c8(S *s)
{
    s->unk_240c = func_ov002_02202710(s->unk_21f4);
    s->unk_2410 = func_ov002_02202708(s->unk_21f4);
}

void func_ov102_022957f8(S *s)
{
    s->unk_240c = func_ov002_022028c8(s->unk_220c) - 2;
    s->unk_2410 = func_ov002_022028a0(s->unk_220c) - 4;
    if (func_0208d534(s->unk_220c) == 1) {
        s->unk_2410 -= 0x16;
    }
}

void func_ov102_02295840(S *s)
{
    s->unk_240c = s->unk_2404 + data_021ef5f0;
    s->unk_2410 = s->unk_2408 + data_021ef5ec;
}

void func_ov102_02295878(S *s)
{
    if (!func_ov102_02294d68(s, 0x40)) {
        u32 t = s->unk_24cb;
        if (t != 0) {
            if (t == 1) {
                func_ov094_0229313c(s->unk_0cc, s->unk_240c, s->unk_2410);
            }
        }
    }
}

void func_ov102_022958b4(S *s)
{
    if (func_ov102_02295f24(s, s->unk_24d1) || func_ov102_02295f14(s, s->unk_24d1)) {
        if (func_ov102_02295b34(s, s->unk_24d1)) {
            func_ov002_022006b0(s->unk_2134);
        } else {
            s->unk_24cd = s->unk_24d1;
            func_ov002_022006b8(s->unk_2134);
        }
    } else {
        func_ov002_022006b0(s->unk_2134);
    }
}

void func_ov102_02295918(S *s)
{
    s32 a = func_ov102_02295ca8(s, s->unk_24cd) - 0x6d;
    s32 b = func_ov102_02295c38(s, s->unk_24cd) - 0x78;
    if (func_0206ef00()) {
        b -= 8;
    }
    if (b < -0x5c) {
        func_02089af8(s->unk_2134);
        b = func_ov102_02295c38(s, s->unk_24cd) - 0x50;
    } else {
        func_02089af0(s->unk_2134);
    }
    func_02089ad8(s->unk_2134, a, b);
    if (func_ov102_02295f24(s, s->unk_24cd) || func_ov102_02295f14(s, s->unk_24cd)) {
        u32 t = func_ov102_02295ec0(s, s->unk_24cd);
        func_ov094_02293638(s->unk_0cc, s->unk_2134, t);
    }
}

BOOL func_ov102_022959b8()
{
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov102_022959fc(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        func_ov094_0229357c(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
}

void func_ov102_02295a34(S *s)
{
    func_ov094_0229358c(s->unk_0cc);
    func_ov094_022943b0(s->unk_b2c);
}

void func_ov102_02295a50(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        func_ov094_0229359c(s->unk_0cc, func_ov102_02295ec0(s, a));
        func_ov094_022943f8(s->unk_b2c);
    } else {
        func_ov102_02295a9c(s);
    }
}

void func_ov102_02295a9c(S *s)
{
    func_ov094_022935dc(s->unk_0cc);
    func_ov094_022943f8(s->unk_b2c);
}

u32 func_ov102_02295ab8(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        return func_ov094_02293504(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
    return 0xf1;
}

u32 func_ov102_02295af4(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        return func_ov094_0229352c(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
    return 0xfff1;
}

BOOL func_ov102_02295b34(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        return func_ov094_0229311c(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
    return TRUE;
}

BOOL func_ov102_02295b70(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        return func_ov094_0229333c(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
    return FALSE;
}

void func_ov102_02295bac(S *s)
{
    u32 i = 0;
    do {
        if (func_ov102_02295be4(s, i)) {
            func_ov094_02293308(s->unk_0cc, func_ov102_02295ec0(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

BOOL func_ov102_02295be4(S *s, u32 a)
{
    if (func_ov102_02295b34(s, a)) {
        return FALSE;
    }
    if (func_ov102_02295ab8(s, a)) {
        return TRUE;
    }
    u32 t = func_ov102_02295af4(s, a);
    if (func_ov094_022924c4(t)) {
        return TRUE;
    }
    if (func_ov094_02292414(t)) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov102_02295c38(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        return func_ov094_02293610(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
    if (func_ov102_02295ef8(s, a)) {
        return 0x70;
    }
    if (func_ov102_02295f04(s, a)) {
        return func_02087e0c(&data_ov102_02297580[(a - 0x1e) * 3]) + 0x68;
    }
    return 0;
}

s32 func_ov102_02295ca8(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        return func_ov094_02293624(s->unk_0cc, func_ov102_02295ec0(s, a));
    }
    if (func_ov102_02295ef8(s, a)) {
        return 0xc4;
    }
    if (func_ov102_02295f04(s, a)) {
        return func_02087e14(&data_ov102_02297580[(a - 0x1e) * 3]) + 0x80;
    }
    return 0;
}

u16 *func_ov102_02295d18(S *s)
{
    return s->unk_2414 + s->unk_24d6 * 0xf;
}

void func_ov102_02295d64(S *s, u32 a, u32 b, u32 c)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        u32 t = func_ov102_02295ec0(s, a);
        func_ov094_02293494(s->unk_0cc, t, b, c);
        func_ov094_02293434(s->unk_0cc, t);
    } else if (func_ov102_02295f04(s, a)) {
        s32 t = (s->unk_24cf - 1) * 0xf;
        s->unk_2414[t + s->unk_24d0] = b;
    }
}

BOOL func_ov102_02295de0(S *s, u32 a)
{
    if (func_ov102_02295f24(s, a) || func_ov102_02295f14(s, a)) {
        u32 t = func_ov102_02295af4(s, a);
        if (t != 0xfff1) {
            u32 u = func_ov102_02295ab8(s, a);
            func_ov102_02295d64(s, s->unk_24ce, t, u);
        }
        func_ov102_02295720(s, a);
        return TRUE;
    }
    return FALSE;
}

u32 func_ov102_02295e3c(S *s, u32 a, u32 b, u32 c)
{
    u32 r = func_ov094_02293968(s->unk_0cc);
    if (r != 0x23) {
        if (c != 0 && func_ov094_0229311c(s->unk_0cc, r)) {
            return 0x25;
        }
        return func_ov102_02295eb0(s, r);
    }
    r = func_ov094_02293938(s->unk_0cc, a, b);
    if (r == 0x23) {
        goto fail;
    }
    if (c != 0 && func_ov094_0229311c(s->unk_0cc, r)) {
        return 0x25;
    }
    return func_ov102_02295d34(s, r);
fail:
    return 0x25;
}


u32 func_ov102_02295d34(S *s, u32 a)
{
    if (a >= 0xf && a <= 0x1d) {
        return (u8)a;
    }
    return 0x25;
}

u32 func_ov102_02295d48(S *s, u32 a)
{
    if (func_ov102_02295f14(s, a)) {
        return (u8)a;
    }
    return 0xf;
}
}

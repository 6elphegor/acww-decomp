#include "types.h"

struct Unk_ov096_02294c40 {
    u8 unk_00[0x8d];
    u8 unk_8d;
    u8 unk_8e[0xa4 - 0x8e];
    s32 unk_a4;
    s32 unk_a8;
    u8 unk_ac[2];
    u16 unk_ae;
    u8 unk_b0;
    u8 unk_b1[3];
    u8 unk_b4;
    u8 unk_b5;
    u8 unk_b6[4];
    u8 unk_ba;
    u8 unk_bb[4];
    u8 unk_bf;
    u8 unk_c0;
    u8 unk_c1;
    u8 unk_c2[0x358 - 0xc2];
    u8 unk_358[8];
    u8 unk_360[0x2480 - 0x360];
    u8 unk_2480[8];
    u8 unk_2488[0x2c8c - 0x2488];
    u8 unk_2c8c[8];
};

struct Unk_ov096_02297fb8_Msg {
    u8 a;
    u8 b;
};

typedef Unk_ov096_02294c40 S;

extern "C" {
extern u8 data_021edb68;

s32 func_ov094_0229433c(void *p, u32 a);
s32 func_ov094_02293504(void *p, u32 a);
s32 func_ov094_0229352c(void *p, u32 a);
s32 func_ov094_0229311c(void *p, u32 a);
s32 func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_0229333c(void *p, u32 a);
s32 func_ov094_022941ec(void *p, u32 a);
s32 func_ov094_02293610(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293624(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
s32 func_ov094_02293928(void *p);
void func_ov094_02294318(void *p, u32 a, void *q);
s32 func_ov094_02294610(void *p);
s32 func_ov094_022942f4(void *p, u32 a);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
s32 func_ov094_02293968(void *p);
s32 func_ov090_02291a78(s32 a);
s32 func_ov090_02291944();
s32 func_020655c0(s32 a);
s32 func_020655d0(s32 a);
void func_02065588(s32 a, u32 b, u32 c);
void func_02065e70(void *p, s32 a);
s32 func_0204b718(s32 a, s32 b, s32 c);
s32 func_02098ffc();
void func_020b87d0(void *p);
void func_0208d63c(void *p);
void func_ov002_0220288c(void *p);
void func_ov002_02200a58(void *p, u32 a);
void func_ov002_02204394(void *p, void *q, u32 a, u32 b);
void func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, u32 c);
void func_ov002_02202718(void *p);

s32 func_ov096_02294dbc(S *s, u32 a);
s32 func_ov096_02294d9c(S *s, u32 a);
void func_ov096_02294e08(S *s);
s32 func_ov096_02296c18(S *s);
void func_ov096_02296b68(S *s, u32 a);
s32 func_ov096_02296cac(S *s);
void func_ov096_02296d5c(S *s);
void func_ov096_0229713c(S *s);
s32 func_ov096_022971dc(S *s);
void func_ov096_02297358(S *s, u32 a, u32 b);
void func_ov096_022974b8(S *s, u32 a, u32 b);
void func_ov096_022974f4(S *s);
void func_ov096_022969bc(S *s, void *a, u32 b, u16 *c, s32 d);

u32 func_ov096_022982e0(S *s, u32 id);
u32 func_ov096_022982f0(S *s, u32 id);
u32 func_ov096_022982c0(S *s, u32 id);
u32 func_ov096_022982d0(S *s, u32 id);
u32 func_ov096_02298008(S *s, u32 id);
u32 func_ov096_0229826c(S *s, u32 id);
u32 func_ov096_02297ff8(S *s, u32 id);
u32 func_ov096_0229825c(S *s, u32 id);

s32 func_ov096_02297b14(S *s, u32 id);
s32 func_ov096_02297b48(S *s, u32 id);
u32 func_ov096_02297b9c(S *s, u32 id);
s32 func_ov096_02297c10(S *s, u32 id);
s32 func_ov096_02297c68(S *s, u32 id);
s32 func_ov096_02297cc0(S *s, u32 id);
s32 func_ov096_02297d50(S *s, u32 id);
s32 func_ov096_02297de0(S *s, s32 x, s32 y);
BOOL func_ov096_02297e5c(S *s, s32 x, s32 y);
BOOL func_ov096_02297e7c(S *s, s32 x, s32 y);
s32 func_ov096_02297e94(S *s, s32 x, s32 y);
BOOL func_ov096_02297f20(S *s, s32 x, s32 y);
void func_ov096_02297f3c(S *s, u32 id, void *p);
s32 func_ov096_02297f6c(S *s, u32 id);
u32 func_ov096_02297fb8(S *s, s32 a, s32 b, s32 c);
u32 func_ov096_0229801c();
void func_ov096_0229803c(S *s, u32 id);
void func_ov096_0229806c(S *s, u32 id);
void func_ov096_022980a0(S *s, u32 id, u32 a, u32 b);
s32 func_ov096_02298110(S *s, u32 id);
u32 func_ov096_0229821c(S *s, s32 a, s32 b, s32 c);
void func_ov096_022982a0(S *s);
void func_ov096_022982fc(S *s);
void func_ov096_02298320(S *s);
void func_ov096_02298334(S *s, u32 a, u32 b, void *c);
void func_ov096_0229838c(S *s, u32 a, u32 b, u32 c, u8 d);
void func_ov096_022983cc(S *s, u32 a, u32 b);

s32 func_ov096_02297b14(S *s, u32 id)
{
    if (func_ov096_022982e0(s, id)) {
    } else {
        return 0;
    }
    return func_ov094_0229433c((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
}

s32 func_ov096_02297b48(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_02293504((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_020655c0(func_ov096_02297b14(s, id));
    }
    func_ov096_022982c0(s, id);
    return 0;
}

u32 func_ov096_02297b9c(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_0229352c((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        if (func_ov096_02297c10(s, id)) {
            return 0xfff1;
        }
        return func_020655d0(func_ov096_02297b14(s, id));
    }
    if (func_ov096_022982c0(s, id)) {
        return s->unk_ae;
    }
    return 0xfff1;
}

s32 func_ov096_02297c10(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_0229311c((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_02293d80((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    return 1;
}

s32 func_ov096_02297c68(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_0229333c((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_022941ec((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    return 0;
}

s32 func_ov096_02297cc0(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_02293610((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_02293d9c((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    if (func_ov096_022982d0(s, id)) {
        return 8;
    }
    if (func_ov096_022982c0(s, id)) {
        return func_ov094_02293610((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (id == 0x21) {
        return 0xb0;
    }
    return 0;
}

s32 func_ov096_02297d50(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_02293624((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_02293df8((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    if (func_ov096_022982d0(s, id)) {
        return func_ov090_02291a78(id - 0x19) - 8;
    }
    if (func_ov096_022982c0(s, id)) {
        return func_ov094_02293624((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    return 0;
}

s32 func_ov096_02297de0(S *s, s32 x, s32 y)
{
    s32 v;

    if (y < 0x50 || y > 0x60) {
        return 0;
    }
    s->unk_bf = 0;
    if (x < 0x30) {
        return 0;
    }
    if (x < 0x40) {
        v = 10000;
        s->unk_bf = 3;
    } else if (x < 0x48) {
        v = 1000;
        s->unk_bf = 2;
    } else if (x < 0x60) {
        v = 100;
        s->unk_bf = 1;
    } else {
        return 0;
    }
    if (v > func_ov096_02296c18(s)) {
        return 1;
    }
    s->unk_ae = func_0204b718(v, 0, 0);
    return 2;
}

BOOL func_ov096_02297e5c(S *s, s32 x, s32 y)
{
    if (func_ov094_02293928(s->unk_358)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov096_02297e7c(S *s, s32 x, s32 y)
{
    if (x > 0x88 && x < 0xa8 && y > 0x20 && y < 0x50) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov096_02297e94(S *s, s32 x, s32 y)
{
    if (func_ov096_02297e7c(s, x, y)) {
        return 0x24;
    }
    if (x > 0x6c && x < 0xc4 && y > 0x50 && y < 0x68) {
        if (x < 0x98) {
            return 0x22;
        }
        return 0x23;
    }
    if (func_ov096_02297e5c(s, x, y)) {
        if (func_ov096_02294dbc(s, 0x4000)) {
            return 0x26;
        }
        return 0x25;
    }
    if (x > 0x30 && x < 0x60 && y > 0x50 && y < 0x60) {
        if (func_ov096_02294dbc(s, 0x4000)) {
            return 0x26;
        }
        return 0x25;
    }
    func_ov096_02294d9c(s, 0x4000);
    return 0x26;
}

BOOL func_ov096_02297f20(S *s, s32 x, s32 y)
{
    if (x < 4 || x >= 0x1c) {
        return FALSE;
    }
    if (y < 0xac || y >= 0xc4) {
        return FALSE;
    }
    return TRUE;
}

void func_ov096_02297f3c(S *s, u32 id, void *p)
{
    if (func_ov096_022982e0(s, id)) {
        func_ov094_02294318((u8 *)s + 0xdb8, func_ov096_02298008(s, id), p);
    }
}

s32 func_ov096_02297f6c(S *s, u32 id)
{
    if (!func_ov096_02297c10(s, id)) {
        func_02065e70(s->unk_2c8c, func_ov096_02297b14(s, id));
        func_ov096_02297f3c(s, s->unk_b4, s->unk_2c8c);
    }
    func_ov096_02297358(s, id, 1);
    return 1;
}

u32 func_ov096_02297fb8(S *s, s32 a, s32 b, s32 c)
{
    s32 r = func_ov094_02294610((u8 *)s + 0xdb8);
    if (r != 0x37) {
        if (c && func_ov094_02293d80((u8 *)s + 0xdb8, r)) {
            return 0x26;
        }
        return func_ov096_02297ff8(s, r);
    }
    return 0x26;
}

u32 func_ov096_02297ff8(S *s, u32 id)
{
    if (id <= 9) {
        return (u8)(id + 0xf);
    }
    return 0x26;
}

u32 func_ov096_02298008(S *s, u32 id)
{
    if (id >= 0xf && id <= 0x18) {
        return (u8)(id - 0xf);
    }
    return 0;
}

u32 func_ov096_0229801c()
{
    s32 r = func_02098ffc();
    if (r == -1) {
        return 0x26;
    }
    return (u8)r;
}

void func_ov096_0229803c(S *s, u32 id)
{
    if (func_ov096_022982e0(s, id)) {
        func_ov094_022942f4((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
}

void func_ov096_0229806c(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id) || func_ov096_022982e0(s, id)) {
        func_ov096_022980a0(s, id, 0xfff1, 0);
    }
}

void func_ov096_022980a0(S *s, u32 id, u32 a, u32 b)
{
    if (func_ov096_022982f0(s, id)) {
        u32 t = func_ov096_0229826c(s, id);
        func_ov094_02293494((u8 *)s + 0x358, t, a, b);
        func_ov094_02293434((u8 *)s + 0x358, t);
    } else if (func_ov096_022982e0(s, id)) {
        func_02065588(func_ov096_02297b14(s, id), a, b);
    } else if (id == 0x25) {
        func_ov096_02296b68(s, a);
    }
}

s32 func_ov096_02298110(S *s, u32 id)
{
    u16 v;

    if (func_ov096_022982e0(s, id) && func_ov096_02297c10(s, id)) {
        return 0;
    }
    if (func_ov096_022982f0(s, id) || func_ov096_022982e0(s, id)) {
        v = func_ov096_02297b9c(s, id);
        func_ov096_022969bc(s, s->unk_ac, s->unk_b0, &v, func_ov096_02297b48(s, id));
        if (v != 0xfff1) {
            func_ov096_022980a0(s, s->unk_b4, v, func_ov096_02297b48(s, id));
        }
        func_ov096_02297358(s, id, 1);
        return 1;
    }
    if ((u8)(id + 0xde) <= 1) {
        if (func_ov096_022971dc(s)) {
            return 1;
        }
        return 0;
    }
    if (id == 0x24) {
        if (s->unk_c0 < 1) {
            func_ov096_02296d5c(s);
            return 0;
        }
        func_ov096_0229713c(s);
        return 1;
    }
    if (id == 0x25) {
        if (!func_ov096_02296cac(s)) {
            func_ov096_02297358(s, s->unk_b4, 1);
        }
        return 1;
    }
    if (id == 0x21) {
        func_ov096_02294e08(s);
        return 1;
    }
    return 0;
}

u32 func_ov096_0229821c(S *s, s32 a, s32 b, s32 c)
{
    s32 r = func_ov094_02293968((u8 *)s + 0x358);
    if (r != 0x23) {
        if (c && func_ov094_0229311c((u8 *)s + 0x358, r)) {
            return 0x26;
        }
        return func_ov096_0229825c(s, r);
    }
    return 0x26;
}

u32 func_ov096_0229825c(S *s, u32 id)
{
    if (id <= 0xe) {
        return (u8)id;
    }
    return 0x26;
}

u32 func_ov096_0229826c(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return (u8)id;
    }
    if (func_ov096_022982c0(s, id)) {
        return (u8)(id - 4);
    }
    return 0;
}

void func_ov096_022982a0(S *s)
{
    func_ov002_0220288c((u8 *)s + 0x2498);
    s->unk_b5 = func_ov090_02291944() + 0x19;
}

u32 func_ov096_022982c0(S *s, u32 id)
{
    if (id >= 0x22 && id <= 0x25) {
        return 1;
    }
    return 0;
}

u32 func_ov096_022982d0(S *s, u32 id)
{
    if (id >= 0x19 && id <= 0x20) {
        return 1;
    }
    return 0;
}

u32 func_ov096_022982e0(S *s, u32 id)
{
    if (id >= 0xf && id <= 0x18) {
        return 1;
    }
    return 0;
}

u32 func_ov096_022982f0(S *s, u32 id)
{
    if (id <= 0xe) {
        return 1;
    }
    return 0;
}

void func_ov096_022982fc(S *s)
{
    s32 i = 0;
    u8 *p = (u8 *)s + 0x2e8;
    for (; i < 2; i++) {
        func_020b87d0(p + i * 0x38);
    }
}

void func_ov096_02298320(S *s)
{
    s->unk_c1 = 0xe;
    func_ov002_02200a58(s, 0x32);
}

void func_ov096_02298334(S *s, u32 a, u32 b, void *c)
{
    Unk_ov096_02297fb8_Msg m;

    if (b == 0xff) {
        s->unk_ba = s->unk_8d;
    } else {
        s->unk_ba = b;
    }
    m.a = data_021edb68;
    m.a = a;
    func_ov002_02204394((u8 *)s + 0x27fc, &m, (u32)c, 0);
    func_ov002_02200a58(s, 0x20);
    func_0208d63c((u8 *)s + 0x2498);
}

void func_ov096_0229838c(S *s, u32 a, u32 b, u32 c, u8 d)
{
    func_ov096_022974b8(s, c, d);
    s->unk_a4 = func_ov096_02297d50(s, a);
    s->unk_a8 = func_ov096_02297cc0(s, a);
    func_ov096_022983cc(s, b, 4);
}

void func_ov096_022983cc(S *s, u32 a, u32 b)
{
    s32 t;
    s32 u;

    s->unk_b4 = a;
    func_ov002_022026f4(s->unk_2480, s->unk_a4, s->unk_a8);
    t = func_ov096_02297d50(s, a);
    u = func_ov096_02297cc0(s, a);
    func_ov002_022026c4(s->unk_2480, t, u, b);
    func_ov002_02202718(s->unk_2480);
    func_ov096_022974f4(s);
    func_ov002_02200a58(s, 0x1b);
}

}

#include "types.h"

class Unk_ov134_02291f60_Sub18 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov134_02291f60 {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0x18 - 8];
    Unk_ov134_02291f60_Sub18 unk_18;
    u8 pad_1c[0x70 - 0x1c];
    u32 unk_70;
    u32 unk_74;
    u32 unk_78;
    u8 pad_7c[0x90 - 0x7c];
    u16 unk_90;
    u8 pad_92[0x98 - 0x92];
    u8 unk_98;
    u8 pad_99[0xa0 - 0x99];
    u8 unk_a0;
    u8 unk_a1;
    u8 unk_a2;
    u8 unk_a3;
    u8 unk_a4;
    u8 pad_a5[0xb1 - 0xa5];
    u8 unk_b1;
    u8 unk_b2;
    u8 unk_b3;
    u8 unk_b4;
    u8 pad_b5[0xb7 - 0xb5];
    s8 unk_b7;
    u8 unk_b8[8];
    u8 unk_c0[8];
    u8 unk_c8[8];
    u8 unk_d0[8];
    u8 unk_d8[0x11 * 0x40];
    u8 unk_518[0x24];
    u8 unk_53c[0x24];
    u8 unk_560[0x24];
    u8 unk_584[0x800];
    u8 unk_d84[0x800];
    u8 unk_1584[0x800];
    u8 unk_1d84[0x800];
    u8 unk_2584[0x20];
};

typedef Unk_ov134_02291f60 S;

extern u8 data_ov134_02295280[];
extern u8 data_ov134_02294c70[];
extern u8 data_ov134_02294c68[];
extern u8 data_ov134_02295290[];
extern u8 data_ov134_022952ac[];
extern u32 data_ov134_02294d40[];
extern u8 data_ov134_022952c8[];
extern u8 data_ov134_022952e8[];
extern u8 data_ov134_02295300[];
extern u32 data_ov134_02294d64[];
extern u8 data_ov134_02295318[];
extern u32 data_ov134_02294d94[];
extern u8 data_ov134_0229532c[];
extern u8 data_ov134_02295348[];
extern s32 data_021f482c;
extern u16 data_021f47d8;

extern "C" {
void func_ov134_02291f60(S *s, u32 m);
void func_ov134_02291f70(S *s, u32 m);
BOOL func_ov134_02291f80(S *s, u32 m);
void func_ov134_02292074(S *s);
void func_ov134_022932e0(S *s);
void func_ov134_02293320(S *s);
void func_ov134_02293988(S *s);
void func_ov134_02294334(S *s);
void func_ov134_02294458(S *s);
void func_ov134_02294488(S *s);
void func_ov134_0229405c(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void func_ov134_02294230(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g);
void func_ov134_022942bc(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void func_ov134_022940a8(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void func_ov002_02202ed0(void *p);
void func_ov002_02202f0c(void *p);
void func_ov002_02202f70(void *p);
void func_ov002_02202f88(void *p);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_0200261c(const void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void func_02002654(const void *name, s32 h, s32 a);
void func_02002688(const void *name, s32 h, s32 a, s32 b, s32 c);
void func_020026c4(const void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void func_0200212c(u32 a);
void func_020641b4(const void *src, void *dst, s32 n);
void *func_020641ec(const void *a, s32 h, s32 b, u32 *out);
void func_02116048(void *dst, void *src, u32 n);
void func_0209d28c(void *p, s32 a);
void func_0209d2c0(void *p, s32 a);
s32 func_0209d3d0(void *a, void *b, s32 c);
void func_0209d498(void *p);
s32 func_0209ceac(u32 a, u32 b, u32 c);
s32 func_020b86c0(void *a, void *b, u32 c, s32 d, s32 e);
void func_020b87d0(void *p);
void func_020b8800(void *p);
void func_020e85fc(s32 h, void *p);
s32 func_02133150(s32 a, s32 b);
void func_02135714(void *p, s32 n, s32 size, void (*ctor)(void *), void (*dtor)(void *));
void func_021355f0(void *p, s32 n, s32 size, void (*dtor)(void *));
void func_0206fca8(void *p);
void func_0206fcc8(void *p);

void func_ov134_022944f0(S *s);
u32 func_ov134_0229452c(S *s, u32 a);
void func_ov134_02294534(S *s);
u32 func_ov134_02294570(S *s, u32 a);
void func_ov134_0229457c(S *s);
void func_ov134_022946b0(S *s);
u32 func_ov134_022945f0(S *s, u32 idx, u8 *p);

void func_ov134_022944f0(S *s)
{
    u32 r = func_ov134_0229452c(s, s->unk_b8[3]);
    func_ov134_02294230(s, s->unk_a3, 0x19e, 5, data_ov134_02295280, r, 0xf, 0);
}

u32 func_ov134_0229452c(S *s, u32 a)
{
    return (u8)(a + 0xc);
}

void func_ov134_02294534(S *s)
{
    u32 r = func_ov134_02294570(s, s->unk_b8[4]);
    func_ov134_02294230(s, s->unk_a3, 0x18e, 8, data_ov134_02295280, r, 0xf, 0);
}

u32 func_ov134_02294570(S *s, u32 a)
{
    return data_ov134_02294c70[a - 1];
}

void func_ov134_0229457c(S *s)
{
    func_ov134_0229405c(s, s->unk_a3, 0x180, 4, 0x7d0 + s->unk_b8[5], 0xf, 0);
}

void func_ov134_022945b0(S *s, u32 idx, u32 v)
{
    switch (idx) {
    case 0:
        s->unk_b8[5] = v;
        break;
    case 1:
        s->unk_b8[4] = v + 1;
        break;
    case 2:
        s->unk_b8[3] = v + 1;
        break;
    case 3:
        s->unk_b8[2] = v;
        break;
    case 4:
        s->unk_b8[1] = v;
        break;
    case 5:
        break;
    }
}

u32 func_ov134_022945f0(S *s, u32 idx, u8 *p)
{
    switch (idx) {
    case 0:
        return p[5];
    case 1:
        return p[4];
    case 2:
        return p[3];
    case 3:
        return p[2];
    case 4:
        return p[1];
    case 5:
        return 0;
    }
    return 0xff;
}

u32 func_ov134_0229462c(S *s, u32 idx)
{
    return func_ov134_022945f0(s, idx, s->unk_b8);
}

void func_ov134_02294638(S *s, u32 idx)
{
    switch (idx) {
    case 0:
        func_ov134_0229457c(s);
        break;
    case 1:
        func_ov134_02294534(s);
        break;
    case 2:
        func_ov134_022944f0(s);
        break;
    case 3:
        func_ov134_02294488(s);
        break;
    case 4:
        func_ov134_02294458(s);
        break;
    case 5:
        func_ov134_022946b0(s);
        break;
    }
}

void func_ov134_02294684(S *s)
{
    func_ov134_0229457c(s);
    func_ov134_02294534(s);
    func_ov134_022944f0(s);
    func_ov134_02294488(s);
    func_ov134_02294458(s);
    func_ov134_022946b0(s);
}

void func_ov134_022946b0(S *s)
{
    s32 i = func_0209ceac(s->unk_b8[5], s->unk_b8[4], s->unk_b8[3]);
    func_ov134_022942bc(s, s->unk_a3, 0x1a8, 7, data_ov134_02294c68[i], 1, 0xf, 0);
}

void func_ov134_022946fc(S *s)
{
    s32 h = data_021f482c;
    func_020026c4(data_ov134_02295290, h, 8, 4, 4, 10);
    func_0200261c(data_ov134_022952ac, h, 8, 0xc0, 0xc0, 0x1df);
    u32 v = s->unk_a1;
    u32 out;
    u8 *buf = (u8 *)func_020641ec((const void *)data_ov134_02294d40[v >> 2], h, -4, &out);
    u8 *p = buf + ((s32)v % 4) * 0x100;
    s32 x = 0xc0;
    s32 i = 0;
    do {
        func_02002438(p, 8, x, x, x + 7);
        p += 0x400;
        x += 0x20;
        i++;
    } while (i < 8);
    func_020e85fc(h, buf);
    func_02002688(data_ov134_022952c8, h, 8, s->unk_a1, 4);
}

void func_ov134_022947b8(S *s, u32 a)
{
    func_ov134_02294684(s);
    func_ov134_022942bc(s, s->unk_a2, 0x54, 0x10, a, 1, 0xf, 0xe);
}

void func_ov134_022947e8(S *s)
{
    s32 h = data_021f482c;
    func_0200261c(data_ov134_022952e8, h, s->unk_a2, 0x10, 0x10, 0x80);
    func_020026c4(data_ov134_02295300, h, s->unk_a2, 1, 1, 10);
    func_020026c4((const void *)data_ov134_02294d64[s->unk_a0], h, s->unk_a2, 1, 1, 2);
    func_02002654(data_ov134_02295318, h, s->unk_a2);
    func_020641b4((const void *)data_ov134_02294d94[s->unk_a0], s->unk_584, 0x800);
    func_ov134_02293320(s);
    func_020641b4(data_ov134_0229532c, s->unk_d84, 0x800);
    func_020641b4(data_ov134_02295348, s->unk_2584, 0x20);
}

BOOL func_ov134_022948b8(S *s)
{
    if (func_0209d3d0(s->unk_c8, s->unk_b8, 0x3f) == 1) {
        return TRUE;
    }
    return FALSE;
}

void func_ov134_022948d8(S *s, void *src)
{
    func_02116048(s->unk_b8, src, 8);
}

void func_ov134_022948e4(S *s)
{
    func_ov134_02292074(s);
    func_ov002_02202ed0(&s->unk_18);
    if (func_ov134_02291f80(s, 2)) {
        if (func_020b86c0(s->unk_518, s->unk_584, s->unk_a3, 0x800, 0)) {
            func_ov134_02291f60(s, 2);
        }
    }
    if (func_ov134_02291f80(s, 1)) {
        if (func_020b86c0(s->unk_53c, s->unk_1d84, s->unk_a4, 0x800, 0)) {
            func_ov134_02291f60(s, 1);
        }
    }
    s32 t = s->unk_b7;
    if (t > 0) {
        if (data_021f47d8 & 0x40) {
            s->unk_b7 = 0;
        }
    } else if (t < 0) {
        if (data_021f47d8 & 0x80) {
            s->unk_b7 = 0;
        }
    }
}

void func_ov134_022949a8(S *s)
{
    func_ov134_02294334(s);
    func_020b87d0(s->unk_518);
    func_020b87d0(s->unk_53c);
    func_020b87d0(s->unk_560);
    func_ov134_022932e0(s);
    s->unk_18.vfunc_0c();
}

void func_ov134_022949ec(S *s)
{
    func_ov134_02294334(s);
    func_0200212c(s->unk_a4);
    func_020b87d0(s->unk_518);
    func_020b87d0(s->unk_53c);
    func_020b87d0(s->unk_560);
}

void func_ov134_02294a28(S *s)
{
    func_ov134_02291f70(s, 0x80);
}

void func_ov134_02294a34(S *s, u32 a, u32 b, u32 c, u8 d)
{
    s->unk_90 = 0;
    s->unk_b7 = 0;
    s->unk_a0 = a;
    s->unk_98 = 0;
    switch (s->unk_a0) {
    case 0:
    case 1:
        s->unk_a1 = 0;
        break;
    case 2:
        s->unk_a1 = 1;
        break;
    case 3:
        s->unk_a1 = 2;
        break;
    }
    s->unk_a2 = b;
    s->unk_a3 = c;
    s->unk_a4 = d;
    s->unk_70 = 0;
    s->unk_74 = 0;
    s->unk_78 = 0;
    func_ov002_02202f0c(&s->unk_18);
    s->unk_04 = 0;
    switch (s->unk_a0) {
    case 0:
    case 3:
        s->unk_b1 = 0;
        break;
    case 1:
        s->unk_b1 = 3;
        func_ov134_02291f70(s, 0x40);
        func_ov134_02291f70(s, 0x80);
        break;
    case 2:
        s->unk_b1 = 1;
        break;
    }
    if (s->unk_a0 == 2) {
        *(u32 *)&s->unk_b8[0] = 0;
        *(u32 *)&s->unk_b8[4] = 0;
        s->unk_b8[5] = 1;
        s->unk_b8[4] = 1;
        s->unk_b8[3] = 1;
    } else {
        func_0209d498(s->unk_b8);
        s->unk_b8[0] = 0;
        if (s->unk_a0 == 3) {
            func_0209d2c0(s->unk_b8, 1);
        }
        func_02116048(s->unk_b8, s->unk_c8, 8);
        func_02116048(s->unk_b8, s->unk_d0, 8);
        func_0209d28c(s->unk_d0, 0xc);
        s->unk_b2 = s->unk_c8[2];
        s->unk_b3 = s->unk_d0[2];
        s->unk_b4 = s->unk_c8[1];
        func_ov134_02293988(s);
    }
}

S *func_ov134_02294bac(S *s)
{
    func_021355f0(s->unk_d8, 0x11, 0x40, func_0206fca8);
    func_ov002_02202f70(&s->unk_18);
    return s;
}

S *func_ov134_02294bd0(S *s)
{
    func_ov002_02202f88(&s->unk_18);
    *(u32 *)&s->unk_b8[0] = 0;
    *(u32 *)&s->unk_b8[4] = 0;
    *(u32 *)&s->unk_c0[0] = 0;
    *(u32 *)&s->unk_c0[4] = 0;
    *(u32 *)&s->unk_c8[0] = 0;
    *(u32 *)&s->unk_c8[4] = 0;
    *(u32 *)&s->unk_d0[0] = 0;
    *(u32 *)&s->unk_d0[4] = 0;
    func_02135714(s->unk_d8, 0x11, 0x40, func_0206fcc8, func_0206fca8);
    func_020b8800(s->unk_518);
    func_020b8800(s->unk_53c);
    func_020b8800(s->unk_560);
    return s;
}

}

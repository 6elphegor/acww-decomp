#include "types.h"

struct Unk_02090a80_Rec {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02090a80_Idx {
    u8 b[4];
};

struct Unk_02090a80_Arg {
    u8 unk_00[4];
    Unk_02090a80_Idx idx;
};

struct Unk_02090bd8_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_02090bd8_Vec { s32 x, y, z; };

struct Unk_02090bd8_V {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_02090bd8_V() {}
    ~Unk_02090bd8_V() {}
};

struct Unk_02090bd8_Obj {
    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ u8 *unk_0c;
    /* 0x10 */ u8 unk_10[8];
    /* 0x18 */ Unk_02090bd8_Sub **unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u8 unk_2c[0x18];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
};

extern Unk_02090a80_Rec data_021d04b0[];
extern Unk_02090a80_Rec data_021d0830;
extern char data_020d03b4[], data_020d03c0[], data_020d0300[], data_020d039c[], data_020d03a8[], data_020d02b8[];
extern char data_020e18a8[][12], data_020e183c[][12];
extern char data_020e167c[], data_020e14b8[], data_020e16bc[], data_020e1000[];
extern char data_020e158c[], data_020e1514[], data_020e17fc[], data_020e168c[], data_020e14cc[];
extern char data_020d02c4[], data_020d02e8[], data_020d02a0[], data_020d0258[], data_020d0240[], data_020d021c[];
extern char data_020e15d4[], data_020e14a8[], data_020e16d4[], data_020e148c[], data_020e1498[];

extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02116048(void *, void *, u32);
s32 func_02093c28(void *p, const char *a, const char *b);
s32 func_02093c94(void *p, const char *a, const char *b);
s32 func_02093bb4(s32 id, s32 a, s32 b, s32 c, void *d, const char *e);
s32 func_02093d54(s32 id, s32 a, s32 b, s32 c, void *d, const char *e);
s32 func_02093914(void *p, s32 a, const char *b, s32 c, const char *d, s32 e, const char *f, s32 g, s32 h);
s32 func_020931e8(s32 a, s32 b, s32 c, void *p, const char *d, const char *e, void (*f)(s32));
s32 func_020932bc(s32 a, s32 b);
s32 func_02093e60(s32 a, s32 b);
s32 func_02093c1c(void *p);
s32 func_0208fe0c(void *p);
void func_02091140(s32 p);


s32 func_02090a80(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &data_021d04b0[i.b[0]];
    func_02093c28(p, r->unk_10 != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
}

void func_02090ad0(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &data_021d0830;
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, g->unk_10 != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
    func_02116048(g, &data_021d04b0[i.b[0]], 0x1c);
}

void func_02090b2c(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &data_021d0830;
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, g->unk_10 != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
    func_02116048(g, &data_021d04b0[i.b[0]], 0x1c);
}


#define W_B(name, id, str) \
    s32 name(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(id, a, b, c, d, str); }
#define W_D(name, id, str) \
    s32 name(s32 a, s32 b, s32 c, void *d) { return func_02093d54(id, a, b, c, d, str); }
#define W_28(name, fn, str) \
    s32 name(void *p) { return fn(p, str, 0); }

W_B(func_02090b88, 0xd, data_020e167c)
W_D(func_02090bb0, 0x5d, data_020e14b8)

void func_02090bd8(Unk_02090bd8_Obj *o)
{
    Unk_02090bd8_V v;
    Unk_02090a80_Rec *const g = &data_021d0830;
    v.unk_00 = g->x;
    v.unk_04 = g->y;
    v.unk_08 = g->z;
    v.unk_04 = 0;
    o->unk_20 = v.unk_00 + (*o->unk_18)->unk_04;
    o->unk_24 = v.unk_04 + (*o->unk_18)->unk_08;
    o->unk_28 = v.unk_08 + (*o->unk_18)->unk_0c;
    func_0208fe0c(o);
}

W_D(func_02090c20, 0xc, 0)
W_D(func_02090c44, 0xb, 0)
W_D(func_02090c68, 0xa, 0)
W_B(func_02090c8c, 0x9, data_020e16bc)

void func_02090cb4(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &data_021d04b0[i.b[0]];
    func_02093c28(p, data_020e18a8[r->unk_10], 0);
}

void func_02090cfc(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &data_021d04b0[i.b[0]];
    func_02093c28(p, data_020e183c[r->unk_10], 0);
}

s32 func_02090d44(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &data_021d0830;
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, data_020e18a8[g->unk_10], 0);
    func_02116048(g, &data_021d04b0[i.b[0]], 0x1c);
}

s32 func_02090d98(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &data_021d0830;
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, data_020e183c[g->unk_10], 0);
    func_02116048(g, &data_021d04b0[i.b[0]], 0x1c);
}

W_B(func_02090dec, 0x16, 0)
W_B(func_02090e10, 0x8, 0)
W_B(func_02090e34, 0x5c, data_020e158c)
W_B(func_02090e5c, 0x5b, data_020e158c)
W_28(func_02090e84, func_02093c28, data_020d02c4)
W_28(func_02090e94, func_02093c94, data_020d02c4)
W_B(func_02090ea4, 0x7, data_020e1514)
W_28(func_02090ecc, func_02093c28, data_020d02e8)
W_28(func_02090edc, func_02093c94, data_020d02e8)
W_B(func_02090eec, 0x6, data_020e17fc)
W_D(func_02090f14, 0x5, 0)
W_D(func_02090f38, 0x4, 0)
W_D(func_02090f5c, 0x3, 0)
W_B(func_02090f80, 0x1, 0)
W_D(func_02090fa4, 0, 0)
W_B(func_02090fc8, 0x97, data_020e168c)
W_B(func_02090ff0, 0x96, data_020e168c)
W_28(func_02091018, func_02093c28, data_020d02a0)
W_28(func_02091028, func_02093c28, data_020d0258)
W_28(func_02091038, func_02093c28, data_020d0240)
W_28(func_02091048, func_02093c94, data_020d02a0)
W_28(func_02091058, func_02093c94, data_020d0258)
W_28(func_02091068, func_02093c94, data_020d0240)
W_B(func_02091078, 0x95, data_020e14cc)
W_28(func_020910a0, func_02093c28, data_020d021c)
W_28(func_020910b0, func_02093c94, data_020d021c)

s32 func_020910c0(s32 a, s32 b, s32 c, s16 *d)
{
    if (d != 0) {
        s16 t = func_01ffc5a4(*d - 0x600, 0x1200);
        return func_020931e8(a, b, c, &t, data_020e15d4, data_020e14a8, func_02091140);
    }
    return 3;
}

s32 func_02091118(void *p)
{
    func_02093914(p, 0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

void func_02091140(s32 p)
{
    s32 t = func_01ffcb0c(0x2000, data_021d0830.unk_10) + 0x99a;
    func_020932bc(p, t);
}

void func_0209116c(s32 p)
{
    s32 u = (s16)((s16)func_01ffcb0c(0x1e66, data_021d0830.unk_10) + 0xb33);
    func_02093e60(p, u);
}

void func_020911a0(Unk_02090bd8_Obj *o)
{
    s32 f = data_021d0830.unk_10;
    s32 a = (s16)((s16)func_01ffcb0c(0x1333, f) + 0x4cd);
    s32 b = (s16)((s16)func_01ffcb0c(0x3ae, f) + 0x800);
    func_02093c1c(o);
    *(s32 *)(o->unk_0c + 0x44) = a;
    *(s32 *)(o->unk_0c + 0x50) = b;
}

s32 func_020911fc(s32 a, s32 b, s32 c, s16 *d)
{
    s32 r = 3;
    if (d != 0) {
        func_02093d54(0x6c, a, b, c, d, data_020e148c);
        if (*d >= 0xc00) {
            func_02093d54(0x6d, a, b, c, d, data_020e1498);
        }
        r = 1;
    }
    return r;
}

s32 func_02091254(Unk_02090bd8_Obj *o)
{
    Unk_02090a80_Rec *const g = &data_021d0830;
    s32 f = g->unk_10;
    Unk_02090bd8_V v;
    v.unk_00 = g->x;
    v.unk_04 = g->y;
    v.unk_08 = g->z;
    s32 t = func_01ffc5a4(f - 0xc00, 0xc00);
    s32 a = (s16)((s16)func_01ffcb0c(0x4cd, t) + 0xb33);
    s32 c = (s16)((s16)func_01ffcb0c(0x19a, t) + 0x400);
    s32 b = (s16)((s16)func_01ffcb0c(0x19a, t) + 0x333);
    o->unk_44 = a;
    o->unk_4c = b;
    o->unk_54 = c;
    o->unk_20 = v.unk_00 + (*o->unk_18)->unk_04;
    o->unk_24 = v.unk_04 + (*o->unk_18)->unk_08;
    o->unk_28 = v.unk_08 + (*o->unk_18)->unk_0c;
    o->unk_5c = 0x99a;
    func_0208fe0c(o);
}

s32 func_02091310(Unk_02090bd8_Obj *o)
{
    Unk_02090a80_Rec *const g = &data_021d0830;
    s32 a, b, c;
    s32 f = g->unk_10;
    if (f < 0xc00) {
        s32 t = func_01ffc5a4(f - 0x600, 0x600);
        a = (s16)((s16)func_01ffcb0c(0x266, t) + 0x266);
        c = (s16)((s16)func_01ffcb0c(0x400, t) + 0x400);
        b = (s16)((s16)func_01ffcb0c(0x52, t) + 0xcd);
    } else {
        s32 t = func_01ffc5a4(f - 0xc00, 0xc00);
        a = (s16)((s16)func_01ffcb0c(0x800, t) + 0x4cd);
        c = (s16)((s16)func_01ffcb0c(0x4cd, t) + 0x800);
        b = (s16)((s16)func_01ffcb0c(0x52, t) + 0x11f);
    }
    o->unk_44 = a;
    o->unk_4c = b;
    o->unk_54 = c;
    o->unk_20 = g->x + (*o->unk_18)->unk_04;
    o->unk_24 = g->y + (*o->unk_18)->unk_08;
    o->unk_28 = g->z + (*o->unk_18)->unk_0c;
    func_0208fe0c(o);
}
}

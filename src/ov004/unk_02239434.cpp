#include "types.h"

struct Unk_ov004_02239434_Vec {
    s32 x, y, z;
};

struct Unk_ov004_02239988_Vec2 {
    s32 x, y;
};

struct Unk_ov004_022395cc_Pad {
    s32 v[3];
    Unk_ov004_022395cc_Pad() {}
    ~Unk_ov004_022395cc_Pad() {}
};

struct Unk_ov004_02239b6c_Sub {
    /* 0x00 */ u8 pad_00[0x9c];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
    /* 0xa4 */ u32 unk_a4;
    /* 0xa8 */ u32 pad_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 pad_b0[0xb8 - 0xb0];
};

struct Unk_ov004_02239b6c_Buf {
    u8 pad[0x10];
    s32 v;
    u8 flag;
};

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_02063b8c(s32 a);
s32 func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020547a4(void *p, s32 a);
s32 func_02002bdc(void *a, void *b);
extern u8 data_ov004_022523e4;
void func_ov004_0223d980(Unk_ov004_02239434_Vec *out, s32 ang);
void func_ov004_0223d020(void *self, void *out);
}

class Unk_ov004_02239434 {
public:
    void func_ov004_02239434();
    void func_ov004_02239450();
    void func_ov004_0223945c();
    void func_ov004_02239468();
    void func_ov004_02239474();
    void func_ov004_02239480();
    void func_ov004_02239488();
    void func_ov004_022394c4();
    void func_ov004_022394d0();
    void func_ov004_022394dc();
    void func_ov004_022394e8();
    void func_ov004_022394f4();
    void func_ov004_02239500();
    void func_ov004_0223950c();
    void func_ov004_02239518();
    void func_ov004_02239524();
    void func_ov004_02239530();
    void func_ov004_0223953c();
    void func_ov004_02239548();
    void func_ov004_02239554();
    void func_ov004_02239560();
    void func_ov004_0223956c();
    void func_ov004_02239574(s32 a, s32 b);
    void func_ov004_022395a0();
    void func_ov004_022395a8();
    void func_ov004_022395c4();
    void func_ov004_022395cc();
    void func_ov004_0223965c();
    void func_ov004_022396fc();
    void func_ov004_02239704();
    void func_ov004_02239724();
    void func_ov004_02239744();
    void func_ov004_02239764();
    void func_ov004_02239784();
    void func_ov004_022397a4();
    void func_ov004_022397c4();
    void func_ov004_022397e4();
    void func_ov004_02239804(s32 a, s32 b, s32 c, s32 d, s32 e);
    void func_ov004_022398ec();
    void func_ov004_022398f4(u32 a, s32 b, s32 c, s16 d, s32 e, s32 f);
    void func_ov004_02239988();
    void func_ov004_022399d0(s32 *a, s32 *b);
    void func_ov004_02239a4c();
    void func_ov004_02239b6c(u16 *out);
    void func_ov004_02239d18();

    // callees outside this range
    void func_ov004_02239e70();
    void func_ov004_0223a25c();
    void func_ov004_0223c310();
    void func_ov004_0223c164();
    void func_ov004_0223b74c();
    void func_ov004_0223cfe8();

    /* 0x00 */ u8 pad_00[0x22];
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x30 - 0x23];
    /* 0x30 */ u16 unk_30;
    /* 0x32 */ u8 pad_32[2];
    /* 0x34 */ Unk_ov004_02239434_Vec unk_34;
    /* 0x40 */ Unk_ov004_02239434_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ Unk_ov004_02239988_Vec2 unk_58;
    /* 0x60 */ Unk_ov004_02239988_Vec2 unk_60;
    /* 0x68 */ u8 pad_68[0x98 - 0x68];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ u8 pad_9b;
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ s16 unk_9e;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u8 pad_ac[2];
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 pad_af;
    /* 0xb0 */ Unk_ov004_02239b6c_Sub unk_b0;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u16 unk_16a;
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x190 - 0x178];
    /* 0x190 */ s16 unk_190;
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_02239434_Vec unk_2c8;
};

void Unk_ov004_02239434::func_ov004_02239434()
{
    func_ov004_02239574(0xc8, 0x50);
    unk_b0.unk_ac = 0;
}

void Unk_ov004_02239434::func_ov004_02239450() { func_ov004_02239574(0xc8, 0x3c); }
void Unk_ov004_02239434::func_ov004_0223945c() { func_ov004_02239574(0xc8, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239468() { func_ov004_02239574(0xc8, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239474() { func_ov004_02239574(0xc8, 0x3c); }

void Unk_ov004_02239434::func_ov004_02239480() { func_ov004_02239e70(); }

void Unk_ov004_02239434::func_ov004_02239488()
{
    func_ov004_02239574(0x96, 0x46);
    func_0205668c(&unk_b0.unk_9c, (u32)(unk_b0.unk_a0 << 4) >> 16, 1, 0x1000, 0);
}

void Unk_ov004_02239434::func_ov004_022394c4() { func_ov004_02239574(0x28, 0x78); }
void Unk_ov004_02239434::func_ov004_022394d0() { func_ov004_02239574(0x5a, 0x3c); }
void Unk_ov004_02239434::func_ov004_022394dc() { func_ov004_02239574(0x5a, 0x3c); }
void Unk_ov004_02239434::func_ov004_022394e8() { func_ov004_02239574(0x82, 0x3c); }
void Unk_ov004_02239434::func_ov004_022394f4() { func_ov004_02239574(0x82, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239500() { func_ov004_02239574(0x82, 0x3c); }
void Unk_ov004_02239434::func_ov004_0223950c() { func_ov004_02239574(0x82, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239518() { func_ov004_02239574(0x5a, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239524() { func_ov004_02239574(0x64, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239530() { func_ov004_02239574(0x64, 0x3c); }
void Unk_ov004_02239434::func_ov004_0223953c() { func_ov004_02239574(0x64, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239548() { func_ov004_02239574(0x5a, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239554() { func_ov004_02239574(0x5a, 0x3c); }
void Unk_ov004_02239434::func_ov004_02239560() { func_ov004_02239574(0x5a, 0x3c); }

void Unk_ov004_02239434::func_ov004_0223956c() { func_ov004_0223a25c(); }

void Unk_ov004_02239434::func_ov004_02239574(s32 a, s32 b)
{
    func_ov004_022398f4(a, b, 0x3556, (s16)0x8000, 0, 0);
    unk_50 = 0;
}

void Unk_ov004_02239434::func_ov004_022395a0() { func_ov004_0223c310(); }

void Unk_ov004_02239434::func_ov004_022395a8() { func_ov004_022398f4(0, 0, 0, 0, 0, 0xb); }

void Unk_ov004_02239434::func_ov004_022395c4() { func_ov004_0223c164(); }

void Unk_ov004_02239434::func_ov004_022395cc()
{
    Unk_ov004_022395cc_Pad pad;
    if (unk_22) {
        Unk_ov004_02239434_Vec *v = &unk_2c8;
        v->x = 0x7a00;
        v->y = 0x2d00;
        v->z = 0x12c00;
        func_ov004_022398f4(0x5a, 0x50, 0, 0, 0, 4);
        unk_50 = 0x3c;
        s32 a[2];
        s32 b[2];
        a[0] = 0;
        a[1] = 0xac;
        b[0] = 0x96;
        b[1] = 0x1ac;
        func_ov004_022399d0(a, b);
    } else {
        func_ov004_022398f4(0x5a, 0x50, 0x3556, 0x6000, 0, 4);
    }
}

void Unk_ov004_02239434::func_ov004_0223965c()
{
    Unk_ov004_02239434_Vec *d = &unk_40;
    func_ov004_022398f4(0x96, 0x28, 1, (s16)0x8000, 0, 9);
    if (unk_22 == 0) {
        unk_190 = 0x2aa8;
    }
    unk_50 = 0x3c;
    unk_16a = (u8)func_02063b8c(0x12);
    unk_170 = 1;
    unk_54 = 0;
    Unk_ov004_02239434_Vec *s = &unk_2c8;
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    if (unk_22 == 0) {
        func_0205668c(&unk_b0.unk_9c, 8, 1, 0x1000, 0);
    }
}

void Unk_ov004_02239434::func_ov004_022396fc() { func_ov004_0223b74c(); }

void Unk_ov004_02239434::func_ov004_02239704() { func_ov004_02239804(0xc8, 0x50, 0x2d, 8, 0x1000); }
void Unk_ov004_02239434::func_ov004_02239724() { func_ov004_02239804(0xc8, 0x50, 0x2d, 0xf, 0x1000); }
void Unk_ov004_02239434::func_ov004_02239744() { func_ov004_02239804(0xc8, 0x50, 0x14, 9, 0x1000); }
void Unk_ov004_02239434::func_ov004_02239764() { func_ov004_02239804(0xc8, 0x50, 0x2d, 7, 0xe66); }
void Unk_ov004_02239434::func_ov004_02239784() { func_ov004_02239804(0xc8, 0x50, 0x28, 7, 0x1000); }
void Unk_ov004_02239434::func_ov004_022397a4() { func_ov004_02239804(0xc8, 0x50, 0x28, 7, 0x1000); }
void Unk_ov004_02239434::func_ov004_022397c4() { func_ov004_02239804(0xc8, 0x50, 0x25, 6, 0x119a); }
void Unk_ov004_02239434::func_ov004_022397e4() { func_ov004_02239804(0xc8, 0x50, 0x25, 6, 0x119a); }

void Unk_ov004_02239434::func_ov004_02239804(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    s32 t = func_01ffcb0c((c + 8) << 12, 0x1000);
    s32 r = func_01ffcb0c(t, 0x100);
    Unk_ov004_02239434_Vec *s = &unk_2c8;
    Unk_ov004_02239434_Vec *dst = &unk_40;
    dst->x = s->x;
    dst->y = s->y;
    dst->z = s->z;
    func_ov004_022398f4(a, b, 0, 0, 0, d);
    unk_50 = 0x28;
    unk_174 = (func_02063b8c(10) + 0x10) * 0x14;
    unk_16a = (u8)func_02063b8c(0x12);
    unk_170 = 1;
    unk_4c = e;
    unk_98 = 0;
    unk_a8 = r;
    unk_54 = r;
    if (unk_22 == 0) {
        unk_172 = 6;
        s32 c2 = unk_196;
        if (c2 != 0xa && c2 != 0x33) {
            func_0205668c(&unk_b0.unk_9c, 0x11, 1, 0x1000, 9);
        } else {
            func_020547a4(&unk_b0, 0);
        }
    }
}

void Unk_ov004_02239434::func_ov004_022398ec() { func_ov004_0223cfe8(); }

void Unk_ov004_02239434::func_ov004_022398f4(u32 a, s32 b, s32 c, s16 d, s32 e, s32 f)
{
    Unk_ov004_02239434_Vec *o = &unk_2c8;
    Unk_ov004_02239434_Vec *dv = &unk_34;
    dv->x = o->x;
    dv->y = o->y;
    dv->z = o->z;
    unk_172 = 0x19;
    unk_192 = d;
    unk_190 = c;
    unk_9e = a;
    unk_a0 = func_01ffcb0c(b << 12, 0x100);
    unk_4c = 0;
    unk_16c = f;
    unk_30 = 0;
    unk_9c = 0;
    s32 t = func_01ffcb0c(e << 12, 0x100);
    unk_a8 = o->y + t;
    unk_54 = unk_a8;
    unk_9a = 0;
}

void Unk_ov004_02239434::func_ov004_02239988()
{
    Unk_ov004_02239434_Vec *o = &unk_2c8;
    s32 ay = o->z - 0x200;
    Unk_ov004_02239988_Vec2 *a = &unk_58;
    a->x = o->x - 0x900;
    a->y = ay;
    s32 by = o->z + 0x500;
    Unk_ov004_02239988_Vec2 *b = &unk_60;
    b->x = o->x + 0x900;
    b->y = by;
}

void Unk_ov004_02239434::func_ov004_022399d0(s32 *a, s32 *b)
{
    s32 y1 = func_01ffcb0c(a[1] << 12, 0x100);
    s32 x1 = func_01ffcb0c(a[0] << 12, 0x100);
    Unk_ov004_02239988_Vec2 *a2 = &unk_58;
    a2->x = x1;
    a2->y = y1;
    s32 y2 = func_01ffcb0c(b[1] << 12, 0x100);
    s32 x2 = func_01ffcb0c(b[0] << 12, 0x100);
    Unk_ov004_02239988_Vec2 *b2 = &unk_60;
    b2->x = x2;
    b2->y = y2;
}

extern "C" s16 func_ov004_02239a24(s32 n)
{
    return func_01ffcb0c(0x38e, (func_02063b8c(n * 2 + 1) - n) << 12);
}

void Unk_ov004_02239434::func_ov004_02239a4c()
{
    s32 *p60 = &unk_60.x;
    s32 *p58 = &unk_58.x;
    s32 ang = unk_192;
    u32 flip = unk_ae;
    Unk_ov004_02239434_Vec *pos = &unk_2c8;
    struct {
        Unk_ov004_02239434_Vec v;
        Unk_ov004_02239434_Vec sv;
    } l;
    l.sv.x = pos->x;
    l.sv.y = pos->y;
    l.sv.z = pos->z;
    if (func_02063b8c(100) > 0x50) {
        if (data_ov004_022523e4 % 0x14 == 0) {
            if (flip == 0) flip = 1; else flip = 0;
            unk_ae = flip;
        }
        if (flip) {
            ang = (s16)(ang + (s16)unk_4c);
        } else {
            ang = (s16)(ang - (s16)unk_4c);
        }
    }
    func_ov004_0223d980(&l.v, ang);
    unk_192 = ang;
    pos->z += func_01ffcb0c(func_01ffcb0c(unk_16c << 12, l.v.z), 0x80);
    pos->x += func_01ffcb0c(func_01ffcb0c(unk_16c << 12, l.v.x), 0x80);
    s32 x = pos->x;
    if (x < p58[0] || x > p60[0]) pos->x = l.sv.x;
    s32 z = pos->z;
    if (z < p58[1] || z > p60[1]) pos->z = l.sv.z;
    s32 sz = l.sv.z;
    s32 nz = pos->z;
    if (nz != sz) pos->y = pos->y - (nz - sz);
    s32 y = pos->y;
    if (y < 0x900 && y > 0x1000) pos->y = l.sv.y;
}

void Unk_ov004_02239434::func_ov004_02239b6c(u16 *out)
{
    Unk_ov004_02239b6c_Buf buf;
    func_ov004_0223d020(this, &buf);
    if (buf.flag == 0) return;
    s32 r6 = unk_9c;
    Unk_ov004_02239b6c_Sub *r4 = &unk_b0;
    if (buf.v <= 0xccd) {
        *out = 0;
        return;
    }
    s32 c = unk_196;
    u8 n;
    if ((u8)(s8)(c - 0xe) <= 1) {
        if (unk_50 != 0) {
            unk_192 = func_02002bdc(&unk_2c8, &buf);
            unk_172 = 0x19;
        }
        if (r6 > 0x14) {
            func_0205668c(&r4->unk_9c, 9, 1, 0x1000, (u32)(r4->unk_a4 << 4) >> 16);
            unk_50 = 0x3c;
        } else if ((n = unk_50) != 0) {
            unk_50 = n - 1;
        } else if (buf.v < unk_a0) {
            u32 t = (u32)(r4->unk_a4 << 4) >> 16;
            if (t == 0) {
                func_0205668c(&r4->unk_9c, 4, 1, 0x1000, 0);
                unk_50 = 0x3c;
            } else if (t > 4) {
                func_0205668c(&r4->unk_9c, 4, 3, 0x1000, t);
            }
        } else {
            u32 t = (u32)(r4->unk_a4 << 4) >> 16;
            if (t != 0) {
                func_0205668c(&r4->unk_9c, 0, 3, 0x1000, t);
            }
        }
    } else if (c == 0x1a) {
        if (r6 > 0x14 || unk_22 == 0) {
            u32 t = (u32)(r4->unk_a4 << 4) >> 16;
            if (t == 2) {
                func_020547a4(r4, 1);
            } else if (t == 1) {
                func_020547a4(r4, 0);
                unk_172 = 0x19;
                unk_50 = 0x3c;
            }
        } else {
            s32 h = (s32)r4->unk_a4 >> 12;
            if ((u16)h == 0 && unk_50 == 0) {
                func_020547a4(r4, 1);
            } else if ((u16)h == 1) {
                func_020547a4(r4, 2);
            } else if ((n = unk_50) != 0) {
                unk_50 = n - 1;
            }
        }
    }
}

void Unk_ov004_02239434::func_ov004_02239d18()
{
    volatile s16 *p = &unk_168;
    s32 v;
    func_ov004_02239b6c((u16 *)p);
    unk_168 = unk_168 + 1;
    if (unk_172 == 4) {
        func_ov004_02239a4c();
        if (unk_196 == 0x1a) {
            if ((v = *p) > 0x140 || (v % 0x14 == 0 && func_02063b8c(100) > 0x5a && *p > 0xa0)) {
                unk_172 = 0x19;
                *p = 0;
            }
        } else {
            if ((v = *p) > 0xa0 || (v % 0x14 == 0 && func_02063b8c(100) > 0x5a && *p > 0x50)) {
                unk_172 = 0x19;
                *p = 0;
            }
        }
    } else if (unk_196 == 0x1a) {
        if (unk_22 != 0 && (u32)(unk_b0.unk_a4 << 4) >> 16 == 2) {
            if ((v = *p) > 0xa0 || (v % 0x14 == 0 && func_02063b8c(100) > 0x55 && *p >= 0x28)) {
                *p = 0;
                unk_172 = 4;
            }
        }
    } else if (unk_22) {
        if ((v = *p) > 0x50 || (v % 0x14 == 0 && func_02063b8c(100) > 0x55)) {
            unk_172 = 4;
            *p = 0;
        }
    } else {
        if ((v = *p) > 0x320 || (v % 100 == 0 && func_02063b8c(100) > 0x5a)) {
            unk_172 = 4;
            *p = 0;
        }
    }
}

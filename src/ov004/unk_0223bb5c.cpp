#include "types.h"

struct Unk_ov004_0223bb5c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0223bb5c_Out {
    s32 pad[4];
    s32 unk_10;
    u8 flag;
};

struct Unk_ov004_0223bb5c {
    u8 pad_00[0x22];
    u8 unk_22;
    u8 pad_23[0x34 - 0x23];
    Unk_ov004_0223bb5c_V3 unk_34;
    Unk_ov004_0223bb5c_V3 unk_40;
    s32 unk_4c;
    u8 unk_50;
    u8 pad_51[0x58 - 0x51];
    s32 unk_58;
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0x98 - 0x68];
    s16 unk_98;
    u8 unk_9a;
    u8 pad_9b;
    s16 unk_9c;
    s16 unk_9e;
    u8 pad_a0[0xac - 0xa0];
    s16 unk_ac;
    u8 pad_ae[0x168 - 0xae];
    s16 unk_168;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 pad_170[2];
    s16 unk_172;
    s32 unk_174;
    u8 pad_178[0x190 - 0x178];
    s16 unk_190;
    s16 unk_192;
    u8 pad_194[2];
    s8 unk_196;
    u8 pad_197[0x288 - 0x197];
    u32 unk_288[16];
    Unk_ov004_0223bb5c_V3 unk_2c8;
};

typedef Unk_ov004_0223bb5c Obj;
typedef Unk_ov004_0223bb5c_V3 V3;

class Unk_0203389c {
public:
    s32 func_02033914(s32 flag);
    u8 pad_00[0x3c];
    s32 unk_3c;
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(V3 *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern u8 data_ov004_022523e4;
extern u8 data_020e12cc[];

s32 func_02133150(s32, s32);
s32 func_02063b8c(s32);
void func_0208fc88(u32, void *, s32, void *);
void *func_0209c0ac(void *);
void func_02106054(void *, s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_01ffc5a4(s32, s32);
s32 func_02002bdc(void *, void *);
s32 func_020e7530(s16 *, s32, s32);
void func_020e7d4c(void *, void *, s32, s32, ...);
s32 func_020e9650(void *, void *);
u8 *func_02095204(s32);
s32 func_02094a08();

void func_ov004_0223a570(Obj *);
void func_ov004_0223a25c(Obj *);
void func_ov004_0223d800(Obj *, V3 *);
void func_ov004_0223d5a8(Obj *, s32);
s32 func_ov004_0223d5e8(Obj *);
void func_ov004_0223d608(Obj *);
void func_ov004_0223d720(Obj *);
void func_ov004_0223d85c(V3 *, V3 *);
void func_ov004_0223d8e8(Obj *);
void func_ov004_0223d910(V3 *, void *, s32, s32);
void func_ov004_0223d980(V3 *, s32);
void func_ov004_0223d020(Obj *, Unk_ov004_0223bb5c_Out *);
s32 func_ov004_0223d2cc(Obj *);
void func_ov004_0223d344(Obj *, s32, s32, s32);
void func_ov004_0223d3b4(Obj *, s32, s32, s32);
s32 func_ov004_02239a24(s32);
s32 func_ov004_0223c348(s32);
void func_ov004_02239a4c(Obj *, s32);

void func_ov004_0223bb5c(Obj *self, s16 *p)
{
    s16 *q = &self->unk_98;
    if (self->unk_98 > 0) {
        *q = self->unk_98 - 1;
        func_ov004_0223a570(self);
        func_ov004_0223d800(self, &self->unk_2c8);
        if (*q > 5) {
            if (data_ov004_022523e4 % 8 == 0) {
                if (func_02063b8c(100) > 50) {
                    s32 t = self->unk_192;
                    self->unk_ac = t + func_ov004_02239a24(12);
                    self->unk_172 = 3;
                }
            }
        } else if (*q == 5) {
            func_0208fc88(0x80, &self->unk_2c8, 0, data_020e12cc);
        }
    } else {
        self->unk_172 = 16;
        func_02106054(func_0209c0ac(self->unk_288), 0, 0);
        self->unk_174 = 60;
        *p = 0;
    }
}
void func_ov004_0223bc10(Obj *self, s16 *p)
{
    V3 *v = &self->unk_2c8;
    s32 k = (self->unk_16c + 2) << 12;
    V3 d;
    func_ov004_0223d980(&d, self->unk_192);
    self->unk_2c8.x += func_01ffcb0c(k, d.x);
    v->z += func_01ffcb0c(k, d.z);
    v->y += (25 - *p) * (*p * 4);
    BOOL ok;
    {
        Unk_0203398c g;
        g.func_020339bc(v, 0, 1);
        if (v->y > g.func_02033914(0)) {
            ok = FALSE;
        } else {
            ok = TRUE;
        }
    }
    if (ok && *p > 0) {
        self->unk_172 = 4;
        self->unk_9c = 0;
        *p = 0;
        self->unk_190 = 0;
    } else {
        *p = *p + 2;
    }
}

void func_ov004_0223bcc8(Obj *self)
{
    u32 idx;
    s32 c;
    V3 *v;
    Unk_ov004_0223bb5c_Out o;
    v = &self->unk_2c8;
    idx = (u8)self->unk_9c;
    func_ov004_0223d020(self, &o);
    if (o.flag != 0) {
        if (o.unk_10 < 0x5000) {
            self->unk_50 = 60;
        }
        c = self->unk_50;
        if (c > 0) {
            func_ov004_0223d5a8(self, 0);
            self->unk_50 = c - 1;
        }
        if ((s32)idx > self->unk_9e) {
            self->unk_172 = 5;
            func_0208fc88(0x80, v, 0, data_020e12cc);
            self->unk_98 = (func_02063b8c(11) + 5) * 20;
            self->unk_192 = func_02002bdc(&o, v);
            func_02106054(func_0209c0ac(self->unk_288), 0, 31);
            V3 *sp = &self->unk_2c8;
            V3 *dp = &self->unk_34;
            self->unk_34.x = sp->x;
            dp->y = sp->y;
            dp->z = sp->z;
        }
    }
}

void func_ov004_0223bd90(Obj *self)
{
    switch (self->unk_172) {
    case 4:
        func_ov004_0223d5a8(self, 2);
        func_ov004_0223bb5c(self, &self->unk_168);
        break;
    case 5:
        func_ov004_0223bc10(self, &self->unk_168);
        break;
    case 3: {
        s16 t = self->unk_192;
        if (func_020e7530(&t, self->unk_ac, 0x38e) != 0) {
            self->unk_172 = 4;
        }
        func_ov004_0223d5a8(self, 2);
        self->unk_192 = t;
        break;
    }
    case 16:
        if (func_ov004_0223d5e8(self) != 0) {
            self->unk_172 = 25;
            V3 *sp = &self->unk_34;
            V3 *dp = &self->unk_2c8;
            dp->x = self->unk_34.x;
            dp->y = sp->y;
            dp->z = sp->z;
        }
        break;
    default:
        func_ov004_0223bcc8(self);
        break;
    }
}

void func_ov004_0223be4c(Obj *self)
{
    s16 *q = &self->unk_98;
    V3 *v = &self->unk_2c8;
    V3 saved;
    saved.x = v->x;
    saved.y = v->y;
    saved.z = v->z;
    func_020e7d4c(v, &self->unk_34, 0xaa, 0x1000, 0x333);
    if (self->unk_98 > 0) {
        s32 k = self->unk_98 << 12;
        v->y = func_01ffcb0c(0x99a - func_01ffcb0c(0x7b, k), k);
        if (v->y < 0) {
            u8 *p = func_02095204(4);
            s32 n = 20;
            if (p != 0) {
                if (func_020e9650(p + 0x5c, v) > 0x6000) {
                    n = 0;
                }
            }
            self->unk_174 = (s16)(func_02063b8c(n * 2 + 20) + 20) >> 1;
            self->unk_172 = 25;
            *q = 0;
        } else {
            *q = *q + 1;
        }
    }
    func_ov004_0223d85c(v, &saved);
}

void func_ov004_0223bf0c(Obj *self)
{
    if (self->unk_172 == 4) {
        func_ov004_0223be4c(self);
    } else if (func_ov004_0223d5e8(self) != 0) {
        u8 *p = func_02095204(4);
        if (p != 0) {
            u8 r = func_02063b8c(0x21) + 0x10;
            V3 *v = &self->unk_2c8;
            u8 *pp = p + 0x5c;
            if (func_020e9650(pp, v) > 0x6000) {
                r += 0x10;
            }
            self->unk_192 = func_02002bdc(v, pp);
            s32 ang = self->unk_192;
            func_ov004_0223d910(&self->unk_34, v, ang, func_01ffcb0c(r << 12, 0x100));
            self->unk_98 = 1;
            self->unk_172 = 4;
        }
    }
}

void func_ov004_0223bfa8(Obj *self)
{
    s16 *q = &self->unk_98;
    func_ov004_0223d8e8(self);
    if (func_ov004_0223d2cc(self) == 2) {
        self->unk_9a = 0;
    }
    if (self->unk_9a != 0) {
        func_ov004_0223d3b4(self, 0xaaa, 10, 0x46);
    } else {
        func_ov004_0223d720(self);
        func_ov004_0223d3b4(self, 0xaaa, 20, 0x50);
    }
    if (self->unk_196 == 0x33) {
        func_ov004_0223d344(self, *q, 0x19a, (func_02063b8c(8) + 0x12) << 12);
        *q = *q + 0x1554;
    } else {
        func_ov004_0223d344(self, *q, 0x1200, (func_02063b8c(8) + 10) << 12);
        *q = *q + 0xaaa;
    }
}

void func_ov004_0223c05c(Obj *self)
{
    switch (self->unk_172) {
    case 0:
        func_ov004_0223d5a8(self, 0);
        func_ov004_0223bfa8(self);
        break;
    case 6:
        if (self->unk_196 == 10) {
            func_ov004_02239a4c(self, self->unk_196);
        }
        func_ov004_0223d608(self);
        break;
    case 7:
        self->unk_172 = 0;
        if (self->unk_9a != 0) {
            self->unk_192 = self->unk_192 + self->unk_ac;
        }
        break;
    default:
        self->unk_9a = 0;
        self->unk_172 = 0;
        if (self->unk_196 == 0x33) {
            V3 *p = &self->unk_40;
            if (func_02063b8c(100) > 50) {
                p->x = 0xef00;
                p->z = 0xc900;
            } else {
                p->x = 0xf700;
                p->z = 0x15200;
            }
            p->y = 0x1300;
        }
        break;
    }
}

void func_ov004_0223c108(Obj *self)
{
    func_ov004_0223d3b4(self, 0x38e, 0x28, 0x50);
    s32 r = func_02063b8c(4);
    self->unk_168 = self->unk_168 + (s16)func_01ffc5a4(0x2000, (r + 5) << 12);
    func_ov004_0223d344(self, self->unk_168, 0x1000, (func_02063b8c(4) + 10) << 12);
}

void func_ov004_0223c164(Obj *self)
{
    if (self->unk_22 == 0) {
        func_ov004_0223a25c(self);
    } else if (self->unk_172 == 0) {
        func_ov004_0223c108(self);
        func_ov004_0223d800(self, &self->unk_2c8);
    } else {
        self->unk_9a = 0;
        self->unk_172 = 0;
    }
}

void func_ov004_0223c1a8(Obj *self, s16 *p)
{
    u8 *b;
    struct {
        s16 t;
        s16 pad;
    } l;
    V3 d;
    b = func_02095204(4);
    if (b != 0) {
        V3 *v = &self->unk_2c8;
        s32 dist;
        u8 *pb = b + 0x5c;
        dist = func_020e9650(pb, v);
        l.t = self->unk_192;
        func_020e7530(&l.t, func_02002bdc(v, pb), 0x38e);
        *p = *p + 0xaaa;
        if (self->unk_9a != 0) {
            s32 c = self->unk_9c;
            if (dist > 0x3000) {
                self->unk_9a = 0;
            } else if (c < 60) {
                self->unk_9c = (u8)(s16)(c + 1);
            } else if (self->unk_4c == 0 && dist < 0x1000 && func_02094a08() != 0) {
                self->unk_9a = 0;
                self->unk_172 = 0;
                self->unk_4c = 1;
                *p = 0;
            }
        }
        if (dist < 0x2000) {
            if (dist < 0x1000 && self->unk_9a == 0) {
                self->unk_9a = 1;
                self->unk_9c = 0;
            }
            if (func_02063b8c(100) > 30) {
                if (l.t > 0) {
                    l.t += 0x5b0;
                } else if (l.t < 0) {
                    l.t -= 0x5b0;
                }
            }
        }
        self->unk_192 = l.t;
        func_ov004_0223d980(&d, l.t);
        v->x += func_01ffcb0c(d.x, 0x8000);
        v->z += func_01ffcb0c(d.z, 0x8000);
        func_ov004_0223d344(self, *p, 0x2800, (func_02063b8c(4) + 0x12) << 12);
    }
}

void func_ov004_0223c310(Obj *self)
{
    func_ov004_0223d8e8(self);
    func_ov004_0223d5a8(self, 0);
    if (self->unk_172 == 0) {
        func_ov004_0223c1a8(self, &self->unk_168);
    } else {
        self->unk_172 = 0;
    }
}

s32 func_ov004_0223c348(s32 n)
{
    s32 r;
    switch (func_02063b8c(n)) {
    case 0:
        r = 0xaaa;
        break;
    case 1:
        r = 0x1554;
        break;
    case 2:
        r = 0x2000;
        break;
    case 3:
        r = 0x2aaa;
        break;
    case 4:
        r = -0xaaa;
        break;
    case 5:
        r = -0x1554;
        break;
    case 6:
        r = -0x2000;
        break;
    default:
        r = -0x2aaa;
        break;
    }
    return r;
}

void func_ov004_0223c3b4(Obj *self, s16 *p)
{
    V3 d;
    volatile V3 saved;
    V3 *v = &self->unk_2c8;
    saved.x = v->x;
    saved.y = v->y;
    saved.z = v->z;
    s32 *hi = &self->unk_60;
    s32 *lo = &self->unk_58;
    func_ov004_0223d980(&d, self->unk_192);
    self->unk_2c8.x += func_01ffcb0c((*p * self->unk_16c) << 12, d.x);
    v->z += func_01ffcb0c((*p * self->unk_16c) << 12, d.z);
    v->y = 0x200;
    *p = *p - 1;
    if (self->unk_2c8.x < self->unk_58 || self->unk_2c8.x > hi[0] || v->z < lo[1] || v->z > hi[1]) {
        s32 base = -0x8000;
        v->x = saved.x;
        v->y = saved.y;
        v->z = saved.z;
        base += func_ov004_0223c348(8);
        self->unk_ac = base;
        self->unk_172 = 15;
        *p = 0;
    } else if (*p <= 0) {
        self->unk_172 = 25;
        if (self->unk_22 != 0) {
            self->unk_98 = func_02063b8c(60);
        } else {
            self->unk_98 = func_02063b8c(0x12c);
        }
    }
}

//__END
}

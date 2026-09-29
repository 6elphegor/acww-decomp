#include "types.h"

struct Unk_ov004_0223b1e8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0223b1e8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223b1e8_Obj {
    u8 pad_00[0x21];
    u8 unk_21;
    u8 unk_22;
    u8 pad_23[0x34 - 0x23];
    Unk_ov004_0223b1e8_V3 unk_34;
    Unk_ov004_0223b1e8_V3 unk_40;
    s32 unk_4c;
    u8 unk_50;
    u8 pad_51[0x98 - 0x51];
    s16 unk_98;
    u8 unk_9a;
    u8 pad_9b;
    s16 unk_9c;
    s16 unk_9e;
    u8 pad_a0[0xac - 0xa0];
    s16 unk_ac;
    u8 unk_ae;
    u8 pad_af;
    u8 unk_b0[0x14c - 0xb0];
    u8 unk_14c[4];
    s32 unk_150;
    Unk_ov004_0223b1e8_Bits unk_154;
    u8 pad_158[0x15c - 0x158];
    s32 unk_15c;
    u8 pad_160[0x168 - 0x160];
    s16 unk_168;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 unk_170;
    u8 pad_171;
    s16 unk_172;
    s32 unk_174;
    u8 pad_178[0x192 - 0x178];
    s16 unk_192;
    u8 pad_194[0x196 - 0x194];
    s8 unk_196;
    u8 pad_197[0x2c8 - 0x197];
    Unk_ov004_0223b1e8_V3 unk_2c8;
};

struct Unk_ov004_0223b1e8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    s32 unk_a0;
    Unk_ov004_0223b1e8_Bits unk_a4;
};

struct Unk_ov004_0223b1e8_V3E : Unk_ov004_0223b1e8_V3 {
    Unk_ov004_0223b1e8_V3E() {}
};

typedef Unk_ov004_0223b1e8_Sub Sub;
typedef Unk_ov004_0223b1e8_Obj Obj;
typedef Unk_ov004_0223b1e8_V3 V3;

extern "C" {
extern u8 data_ov004_022523e4;

s32 func_02063b8c(s32 n);
void func_0205668c(void *p, u32 a, u32 b, u32 c, u32 d);
void func_020547a4(void *p, s32 v);
s32 func_02002bdc(V3 *a, V3 *b);
u32 func_020e7530(s16 *cur, s32 target, s32 step);
s32 func_020e7d4c(V3 *a, V3 *b, s32 c, s32 d, s32 e);

s32 func_ov004_0223d800(Obj *o, V3 *v);
s32 func_ov004_0223d5a8(Obj *o, s32 v);
s32 func_ov004_0223d5e8(Obj *o);
s32 func_ov004_0223db50(Obj *o);
s32 func_ov004_0223db3c(Obj *o);
s32 func_ov004_0223d188(s32 v, s32 w);
s32 func_ov004_0223d12c(Obj *o);
s32 func_ov004_02239a24(s32 v);
s32 func_ov004_0223aa40(Obj *o);
Obj *func_ov004_02237800();
void func_ov004_0223af70(Obj *o);
void func_ov004_0223ae38(Obj *o);
void func_ov004_0223acfc(Obj *o);
void func_ov004_0223abf0(Obj *o);
void func_ov004_0223acc4(Obj *o);
void func_ov004_0223ab48(Obj *o);

BOOL func_ov004_0223b1e8(Obj *o);
BOOL func_ov004_0223b3f0(Obj *a, Obj *b);
void func_ov004_0223b464(Obj *o, s32 a, s32 b);
void func_ov004_0223b4ac(Obj *o);
void func_ov004_0223b62c(Obj *o);
void func_ov004_0223b74c(Obj *o);
void func_ov004_0223b7c0(V3 *v, s32 k);
void func_ov004_0223b84c(Obj *o);
void func_ov004_0223b8e4(Obj *o);
BOOL func_ov004_0223b9b0(Obj *o);
void func_ov004_0223ba10(Obj *o);
s32 func_ov004_0223bac0(Obj *o);

BOOL func_ov004_0223b1e8(Obj *o)
{
    func_ov004_0223d800(o, &o->unk_2c8);
    if (o->unk_196 == 0x37) {
        Sub *b = (Sub *)((u8 *)o + 0xb0);
        s32 t = b->unk_a0 >> 12;
        if ((u16)t < 11 && b->unk_a4.mid <= 2) {
            func_0205668c(b->unk_9c, 11, 1, 0x1000, 3);
        } else if ((u16)t < 14 && b->unk_a4.mid < 11) {
            func_0205668c(b->unk_9c, 14, 0, 0x1000, 10);
        } else if ((u16)t > 11 && b->unk_a4.mid == 13) {
            func_020547a4(b, 10);
        }
        return FALSE;
    }
    if (o->unk_172 == 0x19) {
        Obj *p = func_ov004_02237800();
        u32 r = (u8)func_02063b8c(100);
        s16 *q = &o->unk_98;
        if (!func_ov004_0223b3f0(o, p)) {
            return FALSE;
        }
        if (r < 20) {
            o->unk_174 = (func_02063b8c(8) + 2) * 20;
            o->unk_172 = 20;
        } else if (r < 35) {
            o->unk_174 = (func_02063b8c(4) + 1) * 20;
            o->unk_172 = 21;
            {
                V3 *sv = &p->unk_2c8;
                V3 *dv = &p->unk_34;
                dv->x = sv->x;
                dv->y = sv->y;
                dv->z = sv->z;
            }
            if (func_02063b8c(100) > 50) {
                o->unk_170 = 0;
            } else {
                o->unk_170 = 1;
            }
        } else if (r < 50) {
            o->unk_174 = (func_02063b8c(4) + 1) * 20;
            o->unk_172 = 22;
            {
                V3 *sv = &o->unk_2c8;
                V3 *dv = &o->unk_34;
                dv->x = sv->x;
                dv->y = sv->y;
                dv->z = sv->z;
            }
            if (func_02063b8c(100) > 50) {
                o->unk_170 = 0;
            } else {
                o->unk_170 = 1;
            }
        } else if (r < 70) {
            o->unk_174 = (func_02063b8c(4) + 1) * 20;
            o->unk_172 = 23;
        } else {
            o->unk_174 = (func_02063b8c(8) + 1) * 20;
            o->unk_172 = 24;
            p->unk_15c = 0;
        }
        o->unk_4c = 0;
        *q = func_02063b8c(5) + 5;
        if (func_02063b8c(100) > 50) {
            *q = -*q;
        }
        p->unk_168 = 0;
        p->unk_172 = o->unk_172;
        func_ov004_0223d800(p, &p->unk_2c8);
    }
    return TRUE;
}

BOOL func_ov004_0223b3f0(Obj *a, Obj *b)
{
    s16 v[2];
    u8 r;
    v[0] = a->unk_192;
    v[1] = b->unk_192;
    r = func_020e7530(&v[1], func_02002bdc(&b->unk_2c8, &a->unk_2c8), 0xaaa);
    r &= func_020e7530(&v[0], func_02002bdc(&a->unk_2c8, &b->unk_2c8), 0xaaa);
    a->unk_192 = v[0];
    b->unk_192 = v[1];
    if (r) {
        return TRUE;
    }
    return FALSE;
}

void func_ov004_0223b464(Obj *o, s32 a, s32 b)
{
    if (b % 4 == 0) {
        o->unk_192 = a + 0x71c;
    } else if (b % 2 == 0) {
        o->unk_192 = a - 0x71c;
    }
    func_ov004_0223d5a8(o, 0);
}

void func_ov004_0223b4ac(Obj *o)
{
    if (o->unk_21 != 0) {
        if (!func_ov004_0223b1e8(o)) {
            return;
        }
    } else {
        if (func_ov004_0223aa40(o) == 1) {
            return;
        }
        if (o->unk_196 == 0x37) {
            u32 t = o->unk_154.mid;
            if (t > 3) {
                func_0205668c(o->unk_14c, 3, 3, 0x1000, t);
            } else if (t == 3) {
                func_0205668c(o->unk_14c, 3, 0, 0x1000, 0);
            }
        }
    }
    switch (o->unk_172) {
    case 20:
        func_ov004_0223af70(o);
        return;
    case 21:
        func_ov004_0223ae38(o);
        return;
    case 22:
        func_ov004_0223acfc(o);
        return;
    case 23:
        func_ov004_0223abf0(o);
        return;
    case 24:
        func_ov004_0223acc4(o);
        return;
    case 4:
        func_ov004_0223ab48(o);
        return;
    case 3:
    case 15: {
        s32 r = func_ov004_0223db50(o);
        if (r != 0 && o->unk_172 == 3) {
            o->unk_ac = func_ov004_0223d188(o->unk_192, r);
            o->unk_172 = 15;
            return;
        }
        {
            s16 v = o->unk_192;
            if (func_020e7530(&v, o->unk_ac, 0x71c)) {
                o->unk_172 = 4;
            }
            o->unk_192 = v;
        }
        return;
    }
    default:
        if (func_ov004_0223d5e8(o)) {
            s32 t;
            s32 c;
            o->unk_9a = 0;
            o->unk_172 = 3;
            t = (func_02063b8c(3) + 1) * 20;
            o->unk_174 = (s16)t;
            c = o->unk_192;
            s32 t2 = func_ov004_02239a24(0x10);
            t2 += c;
            o->unk_ac = t2;
        }
        return;
    }
}

void func_ov004_0223b62c(Obj *o)
{
    u8 r6 = o->unk_ae;
    V3 *r4 = &o->unk_2c8;
    V3 *tp = (V3 *)o;
    volatile u32 c;
    u8 r7;
    Unk_ov004_0223b1e8_V3E sv;
    tp = (V3 *)((u8 *)tp + 0x40);
    r7 = o->unk_170;
    *(V3 *)&sv = *r4;
    if (func_02063b8c(100) > 30) {
        u32 t = data_ov004_022523e4;
        c = t;
        if (t % 10 == 0) {
            o->unk_170 = (r7 == 0) ? 1 : 0;
        } else if (c % 5 == 0) {
            o->unk_ae = (r6 == 0) ? 1 : 0;
        }
    }
    if (r6) {
        r4->x = r4->x + o->unk_16c * 0x30;
    } else {
        r4->x = r4->x - o->unk_16c * 0x30;
    }
    if (r7) {
        r4->y = r4->y + o->unk_16c * 0x30;
    } else {
        r4->y = r4->y - o->unk_16c * 0x30;
    }
    {
        s32 d = r4->x - tp->x;
        if (d < 0) d = -d;
        if (d > 0x1000) {
            o->unk_ae = (r6 == 0) ? 1 : 0;
            r4->x = sv.x;
        }
    }
    {
        s32 d = r4->y - tp->y;
        if (d < 0) d = -d;
        if (d > 0x800) {
            o->unk_170 = (r7 == 0) ? 1 : 0;
            r4->y = sv.y;
        }
    }
}

void func_ov004_0223b74c(Obj *o)
{
    if (o->unk_172 == 0) {
        func_ov004_0223b62c(o);
    } else if (o->unk_22 != 0) {
        o->unk_9a = 0;
        o->unk_172 = 0;
        o->unk_168 = 0;
    } else if (data_ov004_022523e4 % 40 == 0) {
        if (func_02063b8c(100) > 80) {
            func_0205668c(o->unk_14c, 8, 1, 0x1000, 0);
        }
    }
}

void func_ov004_0223b7c0(V3 *v, s32 k)
{
    switch (k) {
    case 0:
        v->x = 0x11e00;
        v->y = 0x800;
        v->z = 0xda00;
        break;
    case 1:
        v->x = 0x12300;
        v->y = 0x800;
        v->z = 0xf400;
        break;
    case 2:
        v->x = 0x13800;
        v->y = 0x800;
        v->z = 0xf600;
        break;
    case 3:
        v->x = 0x14100;
        v->y = 0x800;
        v->z = 0xe800;
        break;
    default:
        v->x = 0x14000;
        v->y = 0x800;
        v->z = 0xd900;
        break;
    }
}

void func_ov004_0223b84c(Obj *o)
{
    u32 st = (u8)o->unk_4c;
    u32 nx;
    if (st == 0 && o->unk_170 == 0) {
        o->unk_170 = 1;
        nx = 1;
    } else if (st == 4 && o->unk_170 != 0) {
        nx = 3;
        o->unk_170 = 0;
    } else if (func_02063b8c(100) > 70 && st != 0 && st != 4) {
        if (o->unk_170 != 0) {
            nx = (u8)(st - 1);
            o->unk_170 = 0;
        } else {
            nx = (u8)(st + 1);
            o->unk_170 = 1;
        }
    } else {
        if (o->unk_170 != 0) {
            nx = (u8)(st + 1);
        } else {
            nx = (u8)(st - 1);
        }
    }
    o->unk_4c = nx;
    func_ov004_0223b7c0(&o->unk_34, nx);
}

void func_ov004_0223b8e4(Obj *o)
{
    if (!func_ov004_0223b9b0(o)) {
        return;
    }
    {
        V3 *r4 = &o->unk_2c8;
        V3 *r6 = &o->unk_34;
        if (func_ov004_0223d5e8(o) == 0) {
            if (func_020e7d4c(r4, r6, 0x40, 0x1000, 0x29) == 0) {
                func_ov004_0223b84c(o);
                o->unk_ac = func_02002bdc(r4, r6);
                o->unk_172 = 3;
            } else {
                s32 t = (s16)o->unk_174;
                o->unk_192 = func_02002bdc(r4, r6);
                if (t % 8 == 0) {
                    o->unk_192 = o->unk_192 + 0xaaa;
                } else if (t % 4 == 0) {
                    o->unk_192 = o->unk_192 - 0xaaa;
                }
            }
        } else {
            o->unk_174 = (func_02063b8c(3) + 2) * 20;
            o->unk_172 = 0x19;
        }
    }
}

BOOL func_ov004_0223b9b0(Obj *o)
{
    s32 r4 = o->unk_50;
    func_ov004_0223d12c(o);
    if (o->unk_9c < o->unk_9e && r4 < 2) {
        func_020547a4(o->unk_b0, 1);
        goto yes;
    }
    if (r4 == 0) {
        o->unk_50 = 0x3c;
    } else if (r4 > 1) {
        o->unk_50 = r4 - 1;
    }
    func_020547a4(o->unk_b0, 0);
    return FALSE;
yes:
    return TRUE;
}

void func_ov004_0223ba10(Obj *o)
{
    switch (o->unk_172) {
    case 3:
        if (func_ov004_0223b9b0(o)) {
            s16 v = o->unk_192;
            if (func_020e7530(&v, o->unk_ac, 0x38e)) {
                o->unk_172 = 4;
            }
            o->unk_192 = v;
        }
        break;
    case 4:
        func_ov004_0223b8e4(o);
        break;
    default:
        if (func_ov004_0223d5e8(o) && func_ov004_0223b9b0(o)) {
            if (o->unk_154.mid != 1) {
                func_020547a4(o->unk_b0, 1);
            }
            o->unk_168 = 0;
            o->unk_172 = 4;
            o->unk_174 = (func_02063b8c(9) + 4) * 20;
        }
        break;
    }
}

s32 func_ov004_0223bac0(Obj *o)
{
    u8 r4 = o->unk_50;
    u32 r0;
    s16 r1;
    if (o->unk_196 == 0x34) {
        r0 = func_ov004_0223db3c(o);
    } else {
        r0 = func_ov004_0223db50(o);
    }
    if (r0 != 0) {
        r1 = o->unk_192;
        if (r0 == 3) {
            if (r4 == 1 || r4 == 10) {
                r1 -= 0xaaa;
            } else {
                r1 += 0xaaa;
            }
        } else if (r0 == 1 || r4 == 1) {
            r1 -= 0x38e;
            r4 = 1;
        } else if (r0 == 2 || r4 == 2) {
            r1 += 0x38e;
            r4 = 2;
        }
        o->unk_192 = r1;
    } else if (r4 < 10) {
        r4 = r4 * 10;
    }
    o->unk_50 = r4;
    return r0;
}
}

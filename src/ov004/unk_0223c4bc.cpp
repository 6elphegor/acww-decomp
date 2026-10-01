#include "types.h"

struct Unk_ov004_0223c4bc_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0223c4bc_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223c4bc_Obj {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22;
    u8 pad_23[0x34 - 0x23];
    Unk_ov004_0223c4bc_V3 unk_34;
    Unk_ov004_0223c4bc_V3 unk_40;
    s32 unk_4c;
    u8 unk_50;
    u8 pad_51[0x98 - 0x51];
    s16 unk_98;
    u8 unk_9a;
    u8 pad_9b;
    s16 unk_9c;
    s16 unk_9e;
    u8 pad_a0[4];
    u8 unk_a4;
    u8 pad_a5[3];
    s32 unk_a8;
    s16 unk_ac;
    u8 unk_ae;
    u8 pad_af;
    u8 unk_b0[0x14c - 0xb0];
    u8 unk_14c[4];
    s32 unk_150;
    Unk_ov004_0223c4bc_Bits unk_154;
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
    Unk_ov004_0223c4bc_V3 unk_2c8;
};

typedef Unk_ov004_0223c4bc_Obj Obj;
typedef Unk_ov004_0223c4bc_V3 V3;

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(V3 *v, s32 a, s32 b);
    s32 func_02033914(s32 a);
    ~Unk_0203398c();
};

extern "C" {
extern u8 data_ov004_022523e4;

s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
void func_020547a4(void *p, s32 v);
s32 func_02002bdc(V3 *a, V3 *b);
s32 func_020e7d4c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_020e7e6c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_020e7870(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_0209028c(s32 a, V3 *b, s16 *c, s32 d);

s32 func_ov004_0223d800(Obj *o, V3 *v);
s32 func_ov004_0223d5a8(Obj *o, s32 v);
s32 func_ov004_0223d5e8(Obj *o);
s32 func_ov004_0223db50(Obj *o);
s32 func_ov004_0223db3c(Obj *o);
s32 func_ov004_0223d188(s32 v, s32 mode);
s32 func_ov004_0223d12c(Obj *o);
s32 func_ov004_0223d13c(Obj *o, s32 a, s32 b);
s32 func_ov004_02239a24(s32 v);
void func_ov004_0223d910(V3 *a, V3 *b, s32 c, s32 d);
void func_ov004_0223d8e8(Obj *o);
s32 func_ov004_0223d2cc(Obj *o);
void func_ov004_0223c3b4(Obj *o, s16 *p);

void func_ov004_0223c4bc(Obj *o, s16 *p);
void func_ov004_0223c578(Obj *o);
void func_ov004_0223c5cc(Obj *o);
s32 func_ov004_0223c5f8(Obj *o, s16 *p);
void func_ov004_0223c678(Obj *o);
void func_ov004_0223c7cc(Obj *o);
s32 func_ov004_0223c8d4(Obj *o);
void func_ov004_0223c9b4(Obj *o);
void func_ov004_0223ca5c(Obj *o);
void func_ov004_0223caf4(Obj *o);
void func_ov004_0223cbec(Obj *o);
void func_ov004_0223cc7c(Obj *o);

void func_ov004_0223c4bc(Obj *o, s16 *p)
{
    s16 a, t;
    s16 r4;
    t = o->unk_192;
    a = t;
    r4 = 0;
    if (o->unk_172 == 15) {
        r4 = (s16)(t + o->unk_ac);
        o->unk_172 = 4;
    } else {
        u8 n = (u8)func_02063b8c(5);
        u8 i;
        for (i = 0; i < n; i++) {
            r4 = (s16)(r4 + 0xaaa);
        }
        if (func_02063b8c(100) > 50) {
            r4 = (s16)-r4;
        }
        r4 += a;
        o->unk_172 = 4;
    }
    if (o->unk_172 == 4) {
        V3 v;
        o->unk_192 = r4;
        *p = func_02063b8c(8) + 8;
        V3 *sp_ = &o->unk_2c8;
        v.x = sp_->x;
        v.y = sp_->y;
        v.z = sp_->z;
        a = 0;
        func_0209028c(0x1f, &v, &a, 0);
    }
}

void func_ov004_0223c578(Obj *o)
{
    switch (o->unk_172) {
    case 3:
    case 15:
        func_ov004_0223c4bc(o, &o->unk_168);
        break;
    case 4:
        func_ov004_0223c3b4(o, &o->unk_168);
        break;
    default: {
        s16 *p = &o->unk_98;
        if (*p <= 0) {
            o->unk_172 = 3;
        } else {
            *p = *p - 1;
        }
        o->unk_9a = 0;
        break;
    }
    }
}

void func_ov004_0223c5cc(Obj *o)
{
    switch (o->unk_196) {
    case 0x1b:
    case 0x1c:
    case 0x1d:
        if (o->unk_9c < 5) {
            func_ov004_0223d5a8(o, 0);
        }
        break;
    }
}

s32 func_ov004_0223c5f8(Obj *o, s16 *p)
{
    s32 r = func_ov004_0223db50(o);
    if (r != 0) {
        s32 t, rn;
        o->unk_ac = func_ov004_0223d188(o->unk_192, r);
        t = o->unk_ac;
        rn = func_02063b8c(3);
        func_ov004_0223d910(&o->unk_34, &o->unk_2c8, t, (o->unk_a4 + rn) << 12);
        o->unk_ac = func_02002bdc(&o->unk_2c8, &o->unk_34);
        o->unk_172 = 15;
        o->unk_4c++;
        *p = 0;
    }
    return r;
}

void func_ov004_0223c678(Obj *o)
{
    V3 *r6 = &o->unk_34;
    V3 *r4 = &o->unk_2c8;
    volatile V3 sv;
    s32 t;
    s32 r7;
    sv.x = r4->x;
    sv.y = r4->y;
    sv.z = r4->z;
    r7 = o->unk_16c;
    if (func_ov004_0223db50(o) == 0 || o->unk_20 != 0) {
        if (func_020e7d4c(r4, r6, r7, 0x1000, 0x333)) {
            if (func_ov004_0223d800(o, r4)) {
                r4->x = sv.x;
                r4->y = sv.y;
                r4->z = sv.z;
                *r6 = *r4;
            } else {
                o->unk_192 = func_02002bdc(r4, r6);
            }
        }
    } else {
        *r6 = *r4;
    }
    if (o->unk_170) {
        if (!func_020e7870(&r4->y, 0x1400, r7, 0x1000, 0xcd)) {
            o->unk_170 = 0;
        }
    } else {
        {
            Unk_0203398c loc;
            loc.func_020339bc(r4, 0, 1);
            t = loc.func_02033914(0);
        }
        if (!func_020e7870(&r4->y, t, r7, 0x1000, 0x266)) {
            o->unk_98 = (func_02063b8c(9) + 2) * 20;
            o->unk_172 = 25;
            func_020547a4(&o->unk_ae + 2, 0);
            *r6 = *r4;
            if (o->unk_9a != 0) {
                o->unk_9c = (u8)(o->unk_9e - 10);
                o->unk_9a = 0;
            }
        }
    }
}

void func_ov004_0223c7cc(Obj *o)
{
    switch (o->unk_172) {
    case 3:
    case 15:
        func_ov004_0223d13c(o, 1, 4);
        break;
    case 4:
        func_ov004_0223c678(o);
        break;
    default: {
        s16 *r4 = &o->unk_168;
        s16 *r6;
        if (o->unk_22) {
            func_ov004_0223c5cc(o);
        }
        if (func_ov004_0223c5f8(o, r4) != 0) {
            break;
        }
        r6 = &o->unk_98;
        if (func_ov004_0223d12c(o) == 1) {
            *r4 = *r6 * 5;
        } else if (o->unk_22 == 0 && *r4 == 0) {
            *r6 = *r6 * 5;
        }
        *r4 = *r4 + 1;
        if (*r4 >= *r6 || o->unk_20 != 0) {
            s32 a, rn;
            s32 t = o->unk_192;
            a = func_ov004_02239a24(12);
            a += t;
            o->unk_ac = a;
            a = o->unk_ac;
            rn = func_02063b8c(3);
            func_ov004_0223d910(&o->unk_34, &o->unk_2c8, a, (o->unk_a4 + rn) << 12);
            o->unk_ac = func_02002bdc(&o->unk_2c8, &o->unk_34);
            o->unk_172 = 3;
            *r4 = 0;
            o->unk_9c = 0;
        }
        break;
    }
    }
    o->unk_20 = 0;
}

s32 func_ov004_0223c8d4(Obj *o)
{
    V3 *p;
    s32 r5, r4, r3, r2, s0, s4;
    s32 px, pz, d1, d2, t;
    p = &o->unk_2c8;
    switch (o->unk_196) {
    case 0x15:
        r5 = 0x16c00;
        s0 = 0x1400;
        r4 = 0xd200;
        r3 = 0x1a600;
        s4 = 0x1400;
        r2 = 0x13c00;
        break;
    case 0x16:
        r5 = 0x13200;
        s0 = 0x1400;
        r4 = 0x10d00;
        r3 = 0x16600;
        s4 = 0x1400;
        r2 = 0x14200;
        break;
    default:
        r5 = 0x17800;
        s0 = 0x1400;
        r4 = 0x12200;
        r3 = 0x12b00;
        s4 = 0x1a00;
        r2 = 0xda00;
        break;
    }
    px = p->x;
    t = px - r5;
    if (t < 0) t = -t;
    pz = p->z;
    d1 = pz - r4;
    if (d1 < 0) d1 = -d1;
    d1 = t + d1;
    t = px - r3;
    if (t < 0) t = -t;
    d2 = pz - r2;
    if (d2 < 0) d2 = -d2;
    d2 = t + d2;
    if (d1 < d2) {
        o->unk_40.x = r5;
        o->unk_40.y = s0;
        o->unk_40.z = r4;
        return d1;
    }
    o->unk_40.x = r3;
    o->unk_40.y = s4;
    o->unk_40.z = r2;
    return d2;
}

void func_ov004_0223c9b4(Obj *o)
{
    s32 r = func_ov004_0223db3c(o);
    if (r != 0) {
        s32 t, rn;
        o->unk_ac = func_ov004_0223d188(o->unk_192, r);
        t = o->unk_ac;
        rn = func_02063b8c(3);
        func_ov004_0223d910(&o->unk_34, &o->unk_2c8, t, (o->unk_a4 + rn) << 12);
        o->unk_ac = func_02002bdc(&o->unk_2c8, &o->unk_34);
        if (o->unk_9a != 0) {
            o->unk_172 = 15;
        } else {
            o->unk_172 = 12;
            if (o->unk_196 == 0x17) {
                o->unk_168 = 0;
            } else {
                o->unk_168 = (func_02063b8c(5) + 2) * 10;
            }
        }
    }
}

void func_ov004_0223ca5c(Obj *o)
{
    V3 *r7 = &o->unk_34;
    V3 *r4 = &o->unk_2c8;
    s32 r6 = o->unk_16c;
    if (!func_020e7d4c(r4, r7, r6, 0x1000, o->unk_4c)) {
        o->unk_172 = 25;
    } else {
        o->unk_192 = func_02002bdc(r4, r7);
    }
    if (o->unk_170) {
        func_020e7870(&r4->y, o->unk_a8, r6, 0x1000, 0xcd);
    } else {
        if (!func_020e7870(&r4->y, o->unk_a8 - 0x1000, r6, 0x1000, 0xcd)) {
            o->unk_170 = 1;
        }
    }
}

void func_ov004_0223caf4(Obj *o)
{
    s16 *r6 = &o->unk_168;
    V3 *r4 = &o->unk_2c8;
    if (*r6 <= 0) {
        s16 t = o->unk_172;
        if ((u16)(s16)(t - 12) <= 1) {
            o->unk_172 = 15;
        } else if (t == 14) {
            o->unk_172 = 19;
        } else {
            s32 a, rn;
            if (o->unk_196 == 0x17) {
                s32 t = o->unk_192;
                a = func_ov004_02239a24(4);
                a += t;
                o->unk_ac = a;
            } else {
                s32 t = o->unk_192;
                a = func_ov004_02239a24(12);
                a += t;
                o->unk_ac = a;
            }
            o->unk_172 = 3;
            a = o->unk_ac;
            rn = func_02063b8c(3);
            func_ov004_0223d910(&o->unk_34, r4, a, (o->unk_a4 + rn) << 12);
            o->unk_ac = func_02002bdc(&o->unk_2c8, &o->unk_34);
        }
    } else {
        if (*r6 % 10 < 5) {
            s32 y = r4->y;
            if (y < o->unk_a8 + 0x800) {
                r4->y = y + 0x80;
            }
        } else {
            s32 y = r4->y;
            if (y > o->unk_a8 - 0x1000) {
                r4->y = y - 0x80;
            }
        }
        *r6 = *r6 - 1;
    }
}

void func_ov004_0223cbec(Obj *o)
{
    V3 *r4 = &o->unk_2c8;
    V3 *r6 = &o->unk_40;
    s32 a, b;
    switch (o->unk_196) {
    case 0x15:
        a = 0x148;
        b = 0x40;
        break;
    case 0x16:
        a = 0x19a;
        b = 0x49;
        break;
    default:
        a = 0x19a;
        b = 0x4e;
        break;
    }
    if (!func_020e7e6c(r4, r6, b, 0x1000, a)) {
        o->unk_172 = 25;
        o->unk_174 = (func_02063b8c(5) + 5) * 20;
        o->unk_ae = 1;
    } else {
        o->unk_192 = func_02002bdc(r4, r6);
    }
}

void func_ov004_0223cc7c(Obj *o)
{
    u8 st = (u8)o->unk_172;
    if (st != 0x19) {
        func_ov004_0223d8e8(o);
    }
    switch (st) {
    case 19:
        func_ov004_0223d13c(o, 0, 5);
        break;
    case 3:
    case 15:
        func_ov004_0223d13c(o, 0, 4);
        break;
    case 4:
        if (func_ov004_0223d5e8(o) != 0 && func_ov004_0223c8d4(o) < 0x5000) {
            o->unk_ac = func_02002bdc(&o->unk_2c8, &o->unk_40);
            o->unk_172 = 14;
            if (o->unk_196 != 0x17) {
                o->unk_168 = (func_02063b8c(5) + 2) * 10;
            }
        } else {
            func_ov004_0223ca5c(o);
        }
        func_ov004_0223c9b4(o);
        break;
    case 5:
        func_ov004_0223cbec(o);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
        func_ov004_0223caf4(o);
        break;
    case 7: {
        s32 a, rn;
        o->unk_172 = 15;
        o->unk_9c = 0;
        o->unk_174 = 0xa0;
        o->unk_9a = 0;
        o->unk_ae = 0;
        a = o->unk_ac;
        rn = func_02063b8c(3);
        func_ov004_0223d910(&o->unk_34, &o->unk_2c8, a, (o->unk_a4 + rn) << 12);
        o->unk_ac = func_02002bdc(&o->unk_2c8, &o->unk_34);
        break;
    }
    case 0:
    case 1:
    case 2:
    case 6:
    case 8:
    case 9:
    case 10:
    case 16:
    case 17:
    case 18:
    default:
        if (o->unk_20 != 0) {
            o->unk_172 = 7;
        } else if (o->unk_ae != 0) {
            if (data_ov004_022523e4 % 20 == 0) {
                u32 r = (u8)func_02063b8c(100);
                if (o->unk_154.mid == 0 && r > 0x5c) {
                    func_020547a4(&o->unk_b0, 2);
                } else if (r > 0x32) {
                    func_020547a4(&o->unk_b0, 0);
                }
            } else if (o->unk_154.mid != 0) {
                func_ov004_0223d8e8(o);
            }
            func_ov004_0223d2cc(o);
            if (o->unk_22 != 0 && func_ov004_0223d5e8(o) != 0) {
                o->unk_ae = 0;
                o->unk_172 = 11;
                o->unk_174 = 0xa0;
                if (o->unk_196 == 0x17) {
                    o->unk_168 = 0;
                } else {
                    o->unk_168 = (func_02063b8c(5) + 2) * 10;
                }
            }
        } else {
            o->unk_172 = 11;
            if (o->unk_196 == 0x17) {
                o->unk_168 = 0;
            } else {
                o->unk_168 = (func_02063b8c(5) + 2) * 10;
            }
        }
        break;
    }
    o->unk_20 = 0;
}
}

#include "types.h"

struct Unk_ov003_0220c448_V3 {
    s32 x, y, z;
    Unk_ov003_0220c448_V3() {}
    Unk_ov003_0220c448_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220c448_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220c448_Blk {
    s32 v[12];
};

struct Unk_ov003_0220c4ac_Rec {
    u8 a, b, c;
};

class Unk_ov003_0220c4ac_Msg {
public:
    Unk_ov003_0220c4ac_Msg();
    ~Unk_ov003_0220c4ac_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov003_0220c4ac_Rec unk_0c;
    u8 pad_0f[0x1c - 0xf];
};

struct Unk_ov003_0220c448_Pair {
    s32 a, b;
};

struct Unk_ov003_0220c448_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_0220c448_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    u16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x168 - 0x9c];
    u8 unk_168;
    u8 pad_169[0x2cc - 0x169];
    u8 unk_2cc[8];
    Unk_ov003_0220c448_Bits unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[0x604 - 0x59c];
    Unk_ov003_0220c448_Blk unk_604;
    u8 pad_634[0x688 - 0x634];
    s32 unk_688;
    s32 unk_68c;
    s32 unk_690;
    u8 pad_694[0x7d0 - 0x694];
    u8 unk_7d0;
    u8 pad_7d1[3];
    u8 unk_7d4;
    u8 pad_7d5[3];
    Unk_ov003_0220c448_V3 unk_7d8;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
};

class Unk_ov003_0220c768_A {
public:
    Unk_ov003_0220c768_A();
    ~Unk_ov003_0220c768_A();
    u8 pad_00[0x14];
};

class Unk_ov003_0220c768_B {
public:
    Unk_ov003_0220c768_B(void *v, s32 a, s32 b);
    ~Unk_ov003_0220c768_B();
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x40 - 0x34];
};

typedef Unk_ov003_0220c448_Obj Obj;
typedef Unk_ov003_0220c448_V3 V3;
typedef Unk_ov003_0220c4ac_Msg Msg;
typedef Unk_ov003_0220c4ac_Rec Rec;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;
extern u8 data_ov003_02230ad4[];
extern u8 data_ov003_02230adc[];
extern u8 data_ov003_02230ae0[];
extern s16 data_02135f44[];

u32 func_020769ac(void *p);
void func_020769c4(void *p, s32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_020109c4(Obj *o);
void func_0201071c(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0203ee38(V3 *a, V3 *b);
u8 *func_0205dfa4(void *p);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_02032228(void *p);
void func_02032218(void *p);
s32 func_02030908(void *p, V3 *a, V3 *b, s32 c);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0204ee10(s32 *a, s32 *b, V3 *c);
void func_02043f04(void *p);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, void *arg);
s32 func_0203081c(V3 *a, s32 *b, s32 c);
void func_0204edd8(V3 *a, V3 *b);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);

s32 func_ov003_02226ee8(s32 a, u32 b);
s32 func_ov003_02226fac(s32 a);
s32 func_ov003_022052f4(Obj *o);
void func_ov003_0220cf68(Obj *o);
void func_ov003_0220cd4c(Obj *o);
void func_ov003_0220cf78(Obj *o);
void func_ov003_0220cf30(Obj *o);

void func_ov003_0220c698(Obj *o);
void func_ov003_0220c5b8(Obj *o);
void func_ov003_0220c6e0(Obj *o);
s32 func_ov003_0220c888(Obj *o);
s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e);
void func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_0220c93c(Obj *o, V3 *a, V3 *b, u8 *c);
}

extern "C" u32 func_ov003_0220c448(void *p) {
    return func_020769ac((u8 *)p + 4);
}

extern "C" u32 func_ov003_0220c454(u8 *p) {
    return p[0];
}

extern "C" void func_ov003_0220c458(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u16 *e) {
    *a = p[0];
    *b = p[1];
    *c = p[2];
    *d = p[3];
    *e = func_ov003_0220c448(p);
}

extern "C" void func_ov003_0220c47c(void *p, s32 a) {
    func_020769c4((u8 *)p + 4, a);
}

extern "C" void func_ov003_0220c488(u8 *p, u32 a) {
    p[0] = a;
}

extern "C" void func_ov003_0220c48c(u8 *p, u32 a, u32 b, u32 c, u8 d, s16 e) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    func_ov003_0220c47c(p, e);
}

extern "C" s32 func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e) {
    Msg m;
    m.func_0200e2c0(0x57, d, e);
    Rec &q = m.unk_0c;
    q.c = a;
    q.a = b;
    q.b = c;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220c4f0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220cf68(o);
        func_ov003_0220cd4c(o);
        func_ov003_0220cf78(o);
        func_020109c4(o);
        func_0201071c(o);
        func_ov003_0220c698(o);
        func_ov003_0220c5b8(o);
        func_ov003_0220cf30(o);
    } else {
        func_ov003_0220c6e0(o);
        func_ov003_0220cf78(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        func_ov003_0220c698(o);
        func_ov003_0220c5b8(o);
        func_ov003_0220cf30(o);
    }
    u8 *p = &o->unk_7d0;
    V3 a, b(o->unk_604.v[9], o->unk_604.v[10], o->unk_604.v[11]);
    func_0203ee38(&a, &b);
    *(V3 *)(p + 8) = a;
}

extern "C" void func_ov003_0220c5b8(Obj *o) {
    if (func_02056654(o->unk_2cc) == 0 && o->unk_2dc != 0) {
        return;
    }
    u8 *p = &o->unk_7d0;
    if (p[0] != 0) {
        u32 id = p[4];
        if (id == 0xff) {
            func_ov003_0220c4ac(o, 0, id, 0x30, 6, -1);
        } else {
            s32 r = func_ov003_02226ee8(id, (u8)o->unk_7fc);
            if (r == 0) {
                u32 t = (u8)func_ov003_02226fac(id);
                func_ov003_0220c4ac(o, 0, id, t, 6, -1);
            } else if (r == 1) {
                p[0] = 0;
            }
        }
    } else {
        if (func_02056654(func_0205dfa4(o->unk_59c) + 0x9c)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (func_020729bc(data_020cbb18, o->unk_7fc)) {
                func_0200ce98(o, 9, 1, -1);
            }
        }
    }
}

extern "C" void func_ov003_0220c698(Obj *o) {
    if (o->unk_98 != 0) {
        s32 t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
        if (o->unk_98 == 0) {
            func_02090330(0x2b, &o->unk_5c, &o->unk_8e, 0);
        }
    }
}

extern "C" void func_ov003_0220c6e0(Obj *o) {
    if (o->unk_2dc != 0 && o->unk_2d4.mid >= 3) {
        if (func_ov003_0220c888(o) == 0) {
            V3 a(o->unk_688, o->unk_68c, o->unk_690);
            V3 b, c, d, e;
            func_0203ee38(&a, &a);
            b = a;
            func_ov003_0220cbc8(o, &b, &c, &d);
            e = a;
            func_ov003_0220c768(o, &e, &c, &d);
        }
    }
}

extern "C" s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c) {
    Unk_ov003_0220c768_A l;
    s32 x, y;
    if (func_02030908(&l, c, a, 0x1b)) {
    L_ok:
        func_0200ec30(o, 9);
        func_0200ecdc(o, 0x846);
        o->unk_2dc = 0;
        func_0205e1a0(o->unk_59c, 4, 3, 1);
        if (func_020565e8(o->unk_2cc, 5)) {
            Unk_ov003_0220c448_Pair p;
            x = 0;
            y = 0;
            func_0204ee10(&x, &y, c);
            p.a = x;
            p.b = y;
            func_02043f04(&p);
        }
        if (o->unk_2d4.mid <= 4) {
            return 1;
        }
    } else {
        if (func_020565e8(o->unk_2cc, 5) == 0) {
            goto end0;
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            Unk_ov003_0220c768_B q(b, 0, 0);
            if (q.unk_30 == 0) {
                *c = *b;
                goto L_ok;
            }
        }
        func_02090330(0xb, b, 0, 0);
        func_0200ec30(o, 9);
        func_0205e1a0(o->unk_59c, 4, 3, 1);
    }
end0:
    return 0;
}

extern "C" s32 func_ov003_0220c888(Obj *o) {
    V3 v;
    s32 t;
    if (func_020565e8(o->unk_2cc, 4)) {
        if (func_ov003_022052f4(o)) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            return 1;
        }
        func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, data_ov003_02230ad4);
        if (func_0203081c(&v, &t, 0x19) >= 0x400) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            return 1;
        }
    }
    return 0;
}

extern "C" s32 func_ov003_0220c93c(Obj *o, V3 *a, V3 *b, u8 *c) {
    volatile V3 base;
    V3 *pv = &o->unk_5c;
    base.x = pv->x;
    base.y = pv->y;
    base.z = pv->z;
    u16 *cell = func_0204eba0(data_021c47c4, a, 0);
    if (cell) {
        if (*cell == 0x1b || *cell == 0x89) {
            return 1;
        }
    }
    if (c[0] == 0) {
        s32 a4 = func_020e7b98(b->x - base.x, b->z - base.z);
        s32 a5 = func_020e7b98(a->x - base.x, a->z - base.z);
        s32 t1 = (s16)func_020e780c(a4, 0);
        s32 t2 = (s16)func_020e780c(a5, 0);
        if (t1 == t2) {
            s32 z = b->z;
            s32 bz = base.z;
            if ((bz >= z && z > a->z) || (bz <= z && z < a->z)) {
                return 1;
            }
            return 0;
        }
        if ((t1 >= 0x4000 && t2 > t1) || (t2 < 0x4000 && t2 <= t1)) {
            return 1;
        }
        s32 dx = a->x - base.x;
        s32 dz = a->z - base.z;
        s32 d2 = dx * dx + dz * dz;
        s16 k = data_02135f44[(((u16)(s16)(t1 - t2)) >> 4) * 2 + 1];
        s32 q = func_01ffcb0c(d2, k);
        q = func_01ffcb0c(q, k);
        if (d2 - q < 0x900000) {
            return 0;
        }
        return 1;
    } else {
        s32 z = b->z;
        s32 bz = base.z;
        if ((bz >= z && z > a->z) || (bz <= z && z < a->z)) {
            return 1;
        }
        return 0;
    }
}

extern "C" s32 func_ov003_0220ca70(Obj *o, u8 *a, V3 *b, u8 *c) {
    V3 v;
    s32 t;
    if (func_020565e8(o->unk_2cc, 4)) {
        if (func_ov003_022052f4(o)) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            if (o->unk_168 == 4) {
                return 3;
            }
            if (a[0] != 0) {
                return 1;
            }
            return 2;
        }
        func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, data_ov003_02230adc);
        func_0204edd8(&v, &v);
        if (func_0203081c(&v, &t, 0x19) >= 0x400) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            if (a[0] != 0) {
                if (func_ov003_0220c93c(o, &v, b, c)) {
                    return 1;
                }
                return 2;
            }
            return 2;
        }
    } else if (func_020565e8(o->unk_2cc, 3)) {
        if (a[0] != 0) {
            V3 w;
            s32 u;
            func_0200f3ec(&w, o, &o->unk_5c, &o->unk_8e, data_ov003_02230ae0);
            func_0204edd8(&w, &w);
            if (func_0203081c(&w, &u, 0x19) >= 0x400) {
                if (func_ov003_0220c93c(o, &w, b, c)) {
                    return 1;
                }
                return 2;
            }
        }
    }
    return 0;
}

extern "C" void func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *out) {
    V3 *pos = &o->unk_5c;
    b->x = pos->x;
    b->y = pos->y;
    b->z = pos->z;
    s32 idx = (o->unk_8e >> 4) * 2;
    s32 sn = data_02135f44[idx];
    s32 cs = data_02135f44[idx + 1];
    switch (o->unk_2d4.mid) {
    case 3:
        func_0200ecdc(o, 0x845);
        a->y += 0x1dd3;
        b->x += func_01ffcb0c(sn, 0x1e66);
        b->y += 0x24cd;
        b->z += func_01ffcb0c(cs, 0x1e66);
        break;
    case 4:
        a->x = pos->x;
        a->y = pos->y;
        a->z = pos->z;
        a->x += func_01ffcb0c(sn, 0x1e66);
        a->y += 0x24cd;
        a->z += func_01ffcb0c(cs, 0x1e66);
        b->x += func_01ffcb0c(sn, 0x2a66);
        b->z += func_01ffcb0c(cs, 0x2a66);
        break;
    case 5:
        a->x = pos->x;
        a->y = pos->y;
        a->z = pos->z;
        a->x += func_01ffcb0c(sn, 0x2a66);
        a->z += func_01ffcb0c(cs, 0x2a66);
        b->x += func_01ffcb0c(sn, 0x2800);
        b->y -= 0x666;
        b->z += func_01ffcb0c(cs, 0x2800);
        break;
    }
    Unk_ov003_0220c448_Blk l = o->unk_604;
    V3 t(l.v[9], l.v[10], l.v[11]);
    func_0203ee38(&t, &t);
    *out = t;
}

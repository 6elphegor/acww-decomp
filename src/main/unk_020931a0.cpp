#include "types.h"

struct Unk_02093748_Vec {
    s32 x, y, z;
};

struct Unk_020932bc_V32 {
    s32 x, y, z;
    void Set(s32 a, s32 b, s32 c)
    {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_020932bc_V16 {
    s16 x, y, z;
    void Set(s32 a, s32 b, s32 c)
    {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_021d0830 {
    s32 x, y, z;
    s16 ang;
    s16 pad_e;
};

struct Unk_0209355c_Pos {
    u32 pad_00;
    Unk_02093748_Vec pos;
};

struct Unk_0209355c_Ref {
    Unk_0209355c_Pos *unk_00;
};

struct Unk_02093914_Ent {
    u8 pad_00[0xe];
    s16 unk_0e;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[4];
};

struct Unk_02093914_Id {
    u8 b[4];
};

typedef void (*Unk_0209389c_Fn)(void *);

class Unk_0203398c {
public:
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    s32 func_020338e8();
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_02093748_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

struct Unk_02093998_Node {
    Unk_02093998_Node *unk_00;
    u8 pad_04[4];
    s32 unk_08, unk_0c, unk_10;
    u8 pad_14[0x10];
    u16 unk_24, unk_26;
    u8 pad_28[0x10];
    s32 unk_38, unk_3c, unk_40;
};

extern "C" {
extern u8 data_020e16d4[];
extern u8 data_020e152c[];
extern u8 data_020e1594[];
extern u8 data_020e15e4[];
extern u8 data_020e1608[];
extern u8 data_020e15c4[];
extern u8 data_020e150c[];
extern u8 data_020e1474[];
extern u8 data_020e14b4[];
extern u8 data_020e14d4[];
extern u8 data_020e14ec[];
extern u8 data_020e1480[];
extern u8 data_020d027c[];
extern u8 data_020d02f4[];
extern u8 data_020d0318[];
extern u8 data_020d0390[];
extern u8 data_020e416c[];
extern Unk_021d0830 data_021d0830;
extern Unk_02093914_Ent data_021d04b0[];
extern Unk_02093748_Vec data_021f4880;

s32 func_02093d54(s32 kind, s32 a, void *b, void *c, s32 d, void *data);
s32 func_02093da4(void *obj, const void *a, const void *b);
s32 func_020904f0(void *obj, s32 h, s32 a, void *b, void *c, s32 d, s32 e);
s32 func_0208fb20(s32 kind, void *b, void *c, void *data);
s32 func_0208fb00(s32 kind, Unk_0209389c_Fn fn);
s32 func_0208fc88(s32 kind, void *b, void *c, void *data);
s32 func_02090538(void *obj);
s32 func_020b8fe8();
s32 func_020b50bc();
s32 func_0208fe0c(void *obj);
void func_02033988(void *o);
void func_020e944c(Unk_02093748_Vec *v, s32 a);
void func_020e93a0(Unk_02093748_Vec *v, s32 a);
void func_02116048(void *src, void *dst, u32 n);
s32 func_0209389c(s32 kind, s32 a, void *b, void *c, s32 d, Unk_0209389c_Fn fn);
s32 func_020931e8(s32 a, void *b, void *c, s32 d, void *e, s32 f, Unk_0209389c_Fn fn);
void func_020932ac(void *o);
void func_020938e0(void *o);
}

class Unk_0209355c {
public:
    s32 func_02093998(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    s32 func_02093aa8(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    void func_0209355c();

    u8 pad_00[8];
    Unk_02093998_Node *unk_08;
    s32 unk_0c;
    u8 pad_10[8];
    Unk_0209355c_Ref *unk_18;
    u8 pad_1c[4];
    s32 unk_20, unk_24, unk_28;
    u8 pad_2c[0x10];
    Unk_020932bc_V16 unk_3c;
    u8 pad_42[0x1a];
    s32 unk_5c;
};

class Unk_020931a0 {
public:
    void func_020931a0();
    void func_02093284();
    void func_02093720();
    void func_020936f8();
    void func_02093748();
    s32 func_02093914(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);

    u8 pad_00[4];
    Unk_02093914_Id unk_04;
    u8 pad_08[4];
    Unk_0209355c *unk_0c;
};

class Unk_020932ac {
public:
    void func_020932bc(s32 s);

    u8 pad_00[4];
    Unk_020932bc_V32 unk_04;
    Unk_020932bc_V32 unk_10;
    Unk_020932bc_V16 unk_1c;
};

void Unk_020931a0::func_020931a0()
{
    func_02093914(0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
}

extern "C" void func_020931c4(s32 a, void *b, void *c, s32 d)
{
    func_020931e8(a, b, c, d, data_020e152c, 0, func_020932ac);
}

extern "C" s32 func_020931e8(s32 a, void *b, void *c, s32 d, void *e, s32 f, Unk_0209389c_Fn fn)
{
    Unk_02093748_Vec *v = (Unk_02093748_Vec *)b;
    u8 *const g = (u8 *)data_021d04b0;
    Unk_0203398c o;
    s32 result;
    o.func_020339bc(v, 0, 0);
    result = 3;
    if (o.unk_30 != 0) {
        v->y = o.unk_3c;
    }
    if (func_02093d54(0x4a, a, v, c, d, (void *)f) < 3) {
        func_0209389c(2, a, v, c, d, fn);
        func_020904f0(&data_021d0830, *(u16 *)(g + 0x39c), a, v, c, d, -1);
        if (func_0208fb20(0x45, v, c, e) != 0) {
            result = 2;
        }
    }
    func_02090538(&data_021d0830);
    return result;
}

void Unk_020931a0::func_02093284()
{
    func_02093914(0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

static inline BOOL Unk_020935e8_IsOne(u8 v)
{
    return v == 1 ? TRUE : FALSE;
}

extern "C" void func_020932ac(void *o)
{
    ((Unk_020932ac *)o)->func_020932bc(0x1000);
}

void Unk_020932ac::func_020932bc(s32 s)
{
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&data_021d0830;
    Unk_020932bc_V32 *p = &unk_04;
    p->x = g->x;
    p->y = g->y;
    p->z = g->z;
    Unk_020932bc_V32 *q = &unk_10;
    q->x = s;
    q->y = s;
    q->z = s;
    Unk_020932bc_V16 *r = &unk_1c;
    r->x = 0;
    r->y = 0;
    r->z = 0;
}

extern "C" s32 func_020932f0(s32 a, void *b, void *c, s32 d)
{
    u8 *const g = (u8 *)data_021d04b0;
    Unk_0203398c o;
    s32 t, result;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    result = 3;
    if (func_020b8fe8() == 1) {
        func_020904f0(&data_021d0830, *(u16 *)(g + 0x39c), a, b, c, d, -1);
        if (func_0208fb20(0x36, b, c, data_020e1594) != 0) {
            result = 2;
        }
    } else if (func_020b50bc() != 0 && t == 3) {
        func_020904f0(&data_021d0830, *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x35, b, c, data_020e15e4) != 0) {
            result = 2;
        }
    } else {
        s32 kind;
        if (t == 0x13) {
            kind = 0x34;
        } else {
            kind = 0x33;
        }
        result = func_02093d54(kind, a, b, c, d, 0);
    }
    return result;
}

extern "C" s32 func_020933c0(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x32;
    } else {
        kind = 0x31;
    }
    r = func_02093d54(kind, a, b, c, d, data_020e1608);
    return r;
}

extern "C" s32 func_02093408(void *a)
{
    return func_02093da4(a, data_020d027c, data_020d02f4);
}

extern "C" s32 func_0209341c(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x30;
    } else {
        kind = 0x2f;
    }
    r = func_02093d54(kind, a, b, c, d, 0);
    return r;
}

extern "C" s32 func_02093460(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x2e;
    } else {
        kind = 0x2c;
    }
    r = func_02093d54(kind, a, b, c, d, data_020e15c4);
    return r;
}

extern "C" s32 func_020934a8(void *a)
{
    return func_02093da4(a, 0, data_020d0318);
}

extern "C" s32 func_020934b8(void *a)
{
    return func_02093da4(a, 0, data_020d0390);
}

extern "C" s32 func_020934c8(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x2d;
    } else {
        kind = 0x2b;
    }
    r = func_02093d54(kind, a, b, c, d, 0);
    return r;
}

extern "C" s32 func_0209350c(s32 a, void *b, void *c, s32 d)
{
    return func_02093d54(0x2a, a, b, c, d, data_020e150c);
}

extern "C" s32 func_02093534(s32 a, void *b, void *c, s32 d)
{
    return func_02093d54(0x29, a, b, c, d, data_020e1474);
}

void Unk_0209355c::func_0209355c()
{
    Unk_021d0830 *const g = &data_021d0830;
    s32 ang = (s16)(g->ang + 0x8000);
    Unk_02093748_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0x1000;
    unk_20 = g->x + unk_18->unk_00->pos.x;
    unk_24 = g->y + unk_18->unk_00->pos.y;
    unk_28 = g->z + unk_18->unk_00->pos.z;
    unk_5c = g->y + 0x333;
    func_020e944c(&v, 0xffffe000);
    func_020e93a0(&v, ang);
    s32 ty = v.y;
    s32 tz = v.z;
    s32 tx = v.x;
    unk_3c.Set(tx, ty, tz);
    func_0208fe0c(this);
}

extern "C" s32 func_020935e8(s32 a, void *b, void *c, s32 d)
{
    u8 *const g = (u8 *)data_021d04b0;
    Unk_0203398c o;
    s32 t, result;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    result = 3;
    if (Unk_020935e8_IsOne(*data_020e416c)) {
        if (t == 9 || t == 3) {
            result = func_02093d54(0x19, a, b, c, d, data_020e14b4);
        }
    } else if (t == 0x16 || func_020b8fe8() == 1) {
        func_020904f0(&data_021d0830, *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x1b, b, c, data_020e14d4) != 0) {
            result = 2;
        }
    } else if (t == 3 && func_020b50bc() != 0) {
        func_020904f0(&data_021d0830, *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x1c, b, c, data_020e14ec) != 0) {
            result = 2;
        }
    } else {
        s32 kind;
        if (t == 0x13) {
            kind = 0x1a;
        } else {
            kind = 0x19;
        }
        result = func_02093d54(kind, a, b, c, d, data_020e14b4);
    }
    return result;
}

void Unk_020931a0::func_02093720()
{
    func_02093914(0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}

void Unk_020931a0::func_020936f8()
{
    func_02093914(0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

void Unk_020931a0::func_02093748()
{
    Unk_021d0830 *const g = &data_021d0830;
    Unk_02093914_Id id = unk_04;
    Unk_02093748_Vec v;
    Unk_0209355c *p;
    v.x = 0;
    v.y = 0xb50;
    v.z = 0xb50;
    p = unk_0c;
    p->unk_20 = g->x + p->unk_18->unk_00->pos.x;
    p->unk_24 = g->y + p->unk_18->unk_00->pos.y;
    p->unk_28 = g->z + p->unk_18->unk_00->pos.z;
    func_0208fe0c(unk_0c);
    func_020e93a0(&v, g->ang);
    s32 ty = v.y;
    s32 tz = v.z;
    p = unk_0c;
    s32 tx = v.x;
    p->unk_3c.Set(tx, ty, tz);
    func_02116048(g, &data_021d04b0[id.b[0]], 0x1c);
}

extern "C" s32 func_020937dc(s32 a, void *b, u16 *c, s32 d)
{
    Unk_0203398c o;
    s32 t, result, kind;
    const void *p;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    p = data_020e1480;
    result = 3;
    kind = 2;
    if (Unk_020935e8_IsOne(*data_020e416c)) {
        if (t == 9 || t == 3) {
            result = func_02093d54(2, a, b, c, d, (void *)p);
        }
    } else {
        if (t == 0x16) {
            kind = 0x21;
            if (c != 0) *c = 0;
            p = data_020e16d4;
        } else if (func_020b8fe8() == 1) {
            kind = 0x20;
            if (c != 0) *c = 0;
            p = data_020e16d4;
        } else if (t != 3) {
            if (t == 0x13) kind = 0x17;
        } else if (func_020b50bc() != 0) {
            kind = 0x18;
            p = 0;
        }
        result = func_02093d54(kind, a, b, c, d, (void *)p);
    }
    return result;
}

extern "C" s32 func_0209389c(s32 kind, s32 a, void *b, void *c, s32 d, Unk_0209389c_Fn fn)
{
    Unk_0209389c_Fn f = fn;
    if (f == 0) {
        f = func_020938e0;
    }
    func_020904f0(&data_021d0830, -1, a, b, c, d, -1);
    func_0208fb00(kind, f);
    return 1;
}

extern "C" void func_020938e0(void *o)
{
    Unk_020932ac *self = (Unk_020932ac *)o;
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&data_021d0830;
    Unk_020932bc_V32 *p = &self->unk_04;
    p->x = g->x;
    p->y = g->y;
    p->z = g->z;
    Unk_020932bc_V32 *q = &self->unk_10;
    q->x = 0x1000;
    q->y = 0x1000;
    q->z = 0x1000;
    Unk_020932bc_V16 *r = &self->unk_1c;
    r->x = 0;
    r->y = 0;
    r->z = 0;
}

s32 Unk_020931a0::func_02093914(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
{
    Unk_02093914_Id id = unk_04;
    BOOL r;
    Unk_02093914_Ent *e;
    e = &data_021d04b0[id.b[0]];
    r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e == -1) {
            if (unk_0c->unk_0c > 0) {
                e->unk_0e = 0;
            }
            r = TRUE;
        }
        if (e->unk_0e == 0) {
            r = unk_0c->func_02093aa8(id1, d1, id2, d2, id3, d3, id4, d4);
        }
    }
    if (!r) {
        func_02090538(e);
    }
    return r;
}

s32 Unk_0209355c::func_02093998(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
{
    Unk_02093748_Vec v;
    BOOL result;
    Unk_02093998_Node *n;
    n = unk_08;
    v.x = data_021f4880.x;
    v.y = data_021f4880.y;
    v.z = data_021f4880.z;
    result = FALSE;
    if (n) {
        result = TRUE;
        for (; n;) {
            Unk_0203398c o;
            v.x = n->unk_08 + n->unk_38;
            v.y = n->unk_0c + n->unk_3c;
            v.z = n->unk_10 + n->unk_40;
            o.func_020339bc(&v, 0, 0);
            if (o.unk_30 != 0) {
                s32 h = o.func_020338e8();
                if (v.y <= h) {
                    v.y = h;
                    if (id1 != -1) {
                        func_02093d54(id1, 0x64, &v, 0, 0, d1);
                    }
                    if (id2 != -1) {
                        func_02093d54(id2, 0x64, &v, 0, 0, d2);
                    }
                    n->unk_26 = n->unk_24;
                }
            } else if (v.y <= 0) {
                if (id3 != -1) {
                    v.y = 0;
                    func_02093d54(id3, 0x64, &v, 0, 0, d3);
                }
                if (id4 != -1) {
                    v.y = 0;
                    func_02093d54(id4, 0x64, &v, 0, 0, d4);
                }
                n->unk_26 = n->unk_24;
            }
            n = n->unk_00;
        }
    }
    return result;
}

#include "types.h"

struct Unk_0205f1e8_Vec {
    s32 x, y, z;
};

struct Unk_0205f7f4_Mtx {
    s32 v[12];
};

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_0205f1e8_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

class Unk_0205f6b4_Obj {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0205f6b4_Obj() {}
    Unk_0205f6b4_Obj *func_020339bc(Unk_0205f1e8_Vec *v, s32 a, s32 b);
};

class Unk_0205f360;

extern "C" {
extern u32 data_021c73d4[];
extern void *data_021c61c8;
extern u8 *data_020cbb18;
extern char data_021c73e4[];
extern const char data_020dc4a8[];
extern s16 data_02135f44[];
extern u8 data_021c7468[];

s32 func_0205ef74(u8 *p);
s32 func_0205f030();
s32 func_0205f02c();
s32 func_0205f018();
void func_0205ef88(u8 *p, u8 v);
s32 func_0205efa0(u32 *a, u32 i);
void func_020e885c(void *p);
void func_020e877c(void *p);
void *func_020e8628(void *h, s32 size, s32 align);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_0205bcb4();
s32 func_0205bcd0();
void func_0205efa8(u32 *a);
void func_0205efd0(u32 *a);
void func_02076964(void *p, s32 v);
void func_02076b08(void *p, s32 a, u8 b);
BOOL func_020a62a0();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL func_02072e44(void *p);
BOOL func_020729cc(void *p, s32 h);
u16 func_0207694c();
void func_02076ae8(void *p, u8 *a, u8 *b);
BOOL func_020b5198(u32 v);
void *func_0204da0c();
void *func_0204d500(u32 v);
void func_0204eb30(void *o, u16 *v, s32 a, s32 b, s32 c);
void func_0204e978(void *o, s32 a, s32 b);
void func_0204e914(void *o, s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_020e7870(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02090330(s32 kind, Unk_0205f1e8_Vec *v, void *a, s32 b);
s32 func_020902d4(s32 h, Unk_0205f1e8_Vec *v, void *a, s32 b);
s32 func_020902f8(s32 h);
void func_020e9790(Unk_0205f1e8_Vec *out, Unk_0205f1e8_Vec *in, s32 n);
void func_01ffca8c(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, Unk_0205f1e8_Vec *out);
void func_01ffca58(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, Unk_0205f1e8_Vec *out);
s32 func_020e9650(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b);
void func_020e9768(Unk_0205f1e8_Vec *v, s32 n);
void func_020e8388(Unk_0205f7f4_Mtx *m, s32 x, s32 y, s32 z);
void func_ov003_02222f1c();
void *func_0205fd94(u8 *tbl, u32 idx);
void func_0203ee38(void *p, Unk_0205f1e8_Vec *v);
void func_0203ef38(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b);
s32 func_0205fbb8(void *p);
void func_0205553c(void *e, s32 a);
void func_02033988(void *p);
}

class Unk_0205f360 {
public:
    void func_0205f2fc();
    void func_0205f92c(s32 state);
    void func_0205f360();
    void func_0205f388();
    void func_0205f3c4();
    void func_0205f400();
    void func_0205f4e4();
    void func_0205f52c();
    void func_0205f6b4();
    void func_0205f77c();
    void func_0205f7ec();
    void func_0205f7f0();

    u8 pad_00[8];
    Unk_0205f1e8_Vec unk_08;
    s32 unk_14;
    s32 unk_18;
    Unk_0205f1e8_Vec unk_1c;
    u8 *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
    s32 unk_3c;
};

extern "C" {

s32 func_0205ef60(u8 *p)
{
    s32 a = func_0205ef74(p);
    return a + func_0205f030();
}

s32 func_0205ef74(u8 *p)
{
    return func_0205efa0(data_021c73d4, *p);
}

void func_0205ef88(u8 *p, u8 v)
{
    *p = v;
}

void func_0205ef8c(u8 *p, u8 v)
{
    func_0205ef88(p, v);
}

void func_0205ef94()
{
}

void func_0205ef98(u8 *p)
{
    *p = 4;
}

s32 func_0205efa0(u32 *a, u32 i)
{
    return a[i];
}

void func_0205efa8(u32 *a)
{
    s32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        a[i] = z;
    }
    if (data_021c61c8) {
        func_020e885c(data_021c61c8);
    }
}

void func_0205efd0(u32 *out)
{
    void *h = data_021c61c8;
    u32 n = data_020cbb18[0x6c];
    u32 i;
    for (i = 0; i < n; i++) {
        out[i] = (u32)func_020e8628(h, func_0205f018(), 4);
    }
}

void func_0205f010()
{
}

void func_0205f014()
{
}

s32 func_0205f018()
{
    s32 a = func_0205f030();
    return a + func_0205f02c();
}

s32 func_0205f02c()
{
    return 0xd4;
}

s32 func_0205f030()
{
    return 0xe4;
}

char *func_0205f034(u32 x)
{
    func_020639e8(data_021c73e4, data_020dc4a8, x >> 5, x);
    return data_021c73e4;
}

void func_0205f054()
{
    func_0205efa8(data_021c73d4);
    func_0205bcb4();
}

void func_0205f06c()
{
    func_0205bcd0();
    func_0205efd0(data_021c73d4);
    if (data_021c61c8) {
        func_020e877c(data_021c61c8);
    }
}

BOOL func_0205f144(u8 *p);

void func_0205f100(u8 *p)
{
    if (func_0205f144(p)) {
        if (func_02072e44((void *)data_020cbb18)) {
            void *q = (void *)data_020cbb18;
            func_020728d4(q);
            func_020728a4(q, p, 5);
            func_02072824(q, 0x12, 4);
        }
    }
}

void func_0205f094(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    u8 buf[5];
    func_02076964(buf, d);
    func_02076b08(buf + 2, c, e ? 1 : 0);
    buf[3] = a;
    buf[4] = b;
    if (func_020a62a0()) {
        func_0205f100(buf);
    } else {
        void *q = (void *)data_020cbb18;
        func_020728d4(q);
        func_020728a4(q, buf, 5);
        func_02072824(q, 0x13, 6);
    }
}

BOOL func_0205f144(u8 *p)
{
    struct {
        u8 t[2];
        u16 h[2];
    } l;
    void *o;
    BOOL r6;
    s32 x, y;
    u16 id = func_0207694c();
    func_02076ae8(p + 2, &l.t[0], &l.t[1]);
    r6 = l.t[1] ? TRUE : FALSE;
    x = *(s8 *)(p + 3);
    y = *(s8 *)(p + 4);
    if (func_020b5198(l.t[0])) {
        o = func_0204da0c();
        if (o != 0) {
            l.h[0] = id;
            func_0204eb30(o, &l.h[0], x, y, 0);
            if (r6) {
                func_0204e978(o, x, y);
            } else {
                func_0204e914(o, x, y);
            }
            return TRUE;
        }
    } else {
        o = func_0204d500(l.t[0]);
        if (o != 0) {
            l.h[1] = id;
            func_0204eb30(o, &l.h[1], x, y, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_0205f1e8(Unk_0205f1e8_Vec *a, s32 k, Unk_0205f1e8_Vec *b, s32 *c, u8 flag)
{
    s32 m, n, d, r1, r2;
    if (flag) {
        m = 0xccd;
        n = 5;
    } else {
        m = 0xccd;
        n = 0xa;
    }
    d = func_02133150(0x1000, n);
    r1 = func_020e7870(&b->x, a->x, d, m, 0x19a);
    r2 = r1 + func_020e7870(&b->z, a->z, d, m, 0x19a);
    if (*c < 0 && flag) {
        func_020e7870(&b->y, a->y, d, 0xccd, 0x52);
    } else {
        b->y += *c;
        *c -= k;
    }
    return r2 == 0 ? TRUE : FALSE;
}

void func_0205f284(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, s32 *c, s32 *d, u8 mode)
{
    s32 t;
    switch (mode) {
    case 0:
        *c = 0xa3;
        break;
    case 1:
    case 3:
        t = b->y - a->y;
        if (t < 0) t = -t;
        *c = func_02133150(t + 0x4000, 100);
        break;
    case 2:
        t = b->y - a->y;
        if (t < 0) t = -t;
        *c = func_02133150(t + 0x8000, 100);
        break;
    }
    *d = *c * 10;
}

}

void Unk_0205f360::func_0205f2fc()
{
    s32 d = func_02133150(unk_30 * unk_30 * 0x4800, 0xe1);
    s16 ang = (s16)(*(s16 *)(unk_28 + 0x8e) - d);
    u32 idx = (u16)ang >> 4;
    idx = idx * 2;
    unk_08.x -= func_01ffcb0c(data_02135f44[idx], 0x2ee);
    unk_08.z -= func_01ffcb0c(data_02135f44[idx + 1], 0x2ee);
}

void Unk_0205f360::func_0205f360()
{
    unk_08.y += 0x1000;
    if (unk_08.y >= 0x28000) {
        func_0205f92c(0);
    }
}

void Unk_0205f360::func_0205f388()
{
    Unk_0205f1e8_Vec v;
    v.x = unk_1c.x;
    v.y = unk_1c.y;
    v.z = unk_1c.z;
    if (func_0205f1e8(&v, unk_14, &unk_08, &unk_18, 1)) {
        func_0205f92c(1);
    }
}

void Unk_0205f360::func_0205f3c4()
{
    Unk_0205f1e8_Vec v;
    v.x = unk_1c.x;
    v.y = unk_1c.y;
    v.z = unk_1c.z;
    if (func_0205f1e8(&v, unk_14, &unk_08, &unk_18, 1)) {
        func_0205f92c(1);
    }
}

void Unk_0205f360::func_0205f400()
{
    if (unk_2c == 0) {
        if (func_020729cc((void *)data_020cbb18, unk_3c)) {
            func_0205f92c(4);
            return;
        }
        Unk_0203398c o;
        o.func_020339bc(&unk_08, 1, 1);
        if (o.unk_30 != 0) {
            Unk_0205f1e8_Vec v;
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = func_02090330(0x11, &v, 0, 0);
            } else {
                func_020902d4(unk_34, &v, 0, 0);
            }
        }
    } else {
        Unk_0203398c o;
        o.func_020339bc(&unk_08, 1, 1);
        if (o.unk_30 != 0) {
            s32 lim = o.unk_3c + 0x4cd;
            if (unk_08.y < lim) {
                unk_08.y += 0x19a;
            } else {
                unk_08.y = lim;
            }
            Unk_0205f1e8_Vec v;
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = func_02090330(0x11, &v, 0, 0);
            } else {
                func_020902d4(unk_34, &v, 0, 0);
            }
        }
    }
}

void Unk_0205f360::func_0205f4e4()
{
    Unk_0203398c o;
        o.func_020339bc(&unk_08, 1, 1);
    if (o.unk_30 != 0) {
        s32 lim = o.unk_3c - 0x333;
        if (unk_08.y > lim) {
            unk_08.y -= 0x19a;
        } else {
            unk_08.y = lim;
        }
    }
}

void Unk_0205f360::func_0205f52c()
{
    u16 ang;
    Unk_0205f1e8_Vec base;
    Unk_0203398c o;
    Unk_0205f1e8_Vec v, w;
    Unk_0205f1e8_Vec *pb = (Unk_0205f1e8_Vec *)(unk_28 + 0x5c);
    base.x = pb->x;
    base.y = pb->y;
    base.z = pb->z;
    o.func_020339bc(&unk_08, 0, 1);
    ang = 0;
    if (o.unk_30 != 0) {
                func_020e9790(&w, (Unk_0205f1e8_Vec *)&o.unk_24, 5);
        ang = func_020e7b98(w.x, w.z);
        func_01ffca8c(&unk_08, &w, &unk_08);
        s32 y = o.unk_3c;
        s32 c = unk_08.y;
        if (c < y + 0x333) {
            s32 lim = y + 0x19a;
            if (c < lim) {
                unk_08.y = c + 0x66;
                if (unk_08.y >= lim) {
                    v.x = unk_08.x;
                    v.y = unk_08.y;
                    v.z = unk_08.z;
                    v.y = y;
                    func_02090330(0xf, &v, 0, 0);
                }
            } else {
                unk_08.y = c + 0x66;
            }
        } else {
            unk_08.y = y + 0x30a;
        }
    }
    s32 dist = func_020e9650(&base, &unk_08);
    if (dist >= 0x8000) {
        s32 dx = unk_08.x - base.x;
        s32 dz = unk_08.z - base.z;
        u32 idx = (u16)func_020e7b98(dx, dz) >> 4;
        idx = idx * 2;
        unk_08.x = base.x + func_01ffcb0c(0x7f33, data_02135f44[idx]);
        unk_08.z = base.z + func_01ffcb0c(0x7f33, data_02135f44[idx + 1]);
        if (o.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = func_02090330(0xe, &v, &ang, 0);
            } else {
                func_020902d4(unk_34, &v, &ang, 0);
            }
        }
    } else {
        if (unk_34 != -1) {
            if (dist < 0x7e66) {
                func_020902f8(unk_34);
                unk_34 = -1;
            } else if (o.unk_30 != 0) {
                    v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = o.unk_3c;
                func_020902d4(unk_34, &v, &ang, 0);
            }
        }
    }
}

void Unk_0205f360::func_0205f6b4()
{
    Unk_0205f6b4_Obj o;
    Unk_0205f1e8_Vec v, a, b, c;
    if (unk_30 < 0xf) {
        func_0205f2fc();
        if (unk_30 == 0xe) {
            a.x = unk_1c.x;
            a.y = unk_1c.y;
            a.z = unk_1c.z;
            b.x = unk_08.x;
            b.y = unk_08.y;
            b.z = unk_08.z;
            func_0205f284(&a, &b, &unk_14, &unk_18, 0);
        }
    } else {
        c.x = unk_1c.x;
        c.y = unk_1c.y;
        c.z = unk_1c.z;
        func_0205f1e8(&c, unk_14, &unk_08, &unk_18, 0);
        o.func_020339bc(&unk_08, 1, 1);
        if (o.unk_30 != 0) {
            s32 y = o.unk_3c;
            if (y >= unk_08.y) {
                func_0205f92c(4);
                unk_08.y = o.unk_3c - 0x333;
                v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = y;
                func_02090330(0xc, &v, 0, 0);
                unk_38 = 1;
                func_ov003_02222f1c();
            }
        }
        func_02033988(&o);
    }
}

void Unk_0205f360::func_0205f77c()
{
    if (unk_30 < 0xf) {
        func_0205f2fc();
    } else if (unk_30 >= 0x15) {
        func_0205f92c(1);
    } else {
        s16 ang = (s16)(*(s16 *)(unk_28 + 0x8e) - 0x1838);
        u32 idx = (u16)ang >> 4;
        idx = idx * 2;
        unk_08.x += func_01ffcb0c(data_02135f44[idx], 0x640);
        unk_08.z += func_01ffcb0c(data_02135f44[idx + 1], 0x640);
    }
}

void Unk_0205f360::func_0205f7ec()
{
}

void Unk_0205f360::func_0205f7f0()
{
}

extern "C" void func_0205f7f4(u8 *self, Unk_0205f7f4_Mtx *m, s32 arg)
{
    if (*(s32 *)(self + 4) != 0) {
        u8 *e = (u8 *)func_0205fd94(data_021c7468, *self);
        Unk_0205f7f4_Mtx mt = *m;
        Unk_0205f1e8_Vec v;
        if (*(s32 *)(self + 4) <= 1) {
            v.x = mt.v[9];
            v.y = mt.v[10];
            v.z = mt.v[11];
            func_0203ee38(self + 8, &v);
        } else {
            v.x = *(s32 *)(self + 8);
            v.y = *(s32 *)(self + 12);
            v.z = *(s32 *)(self + 16);
            if (*(s32 *)(self + 4) == 6) {
                s32 r = func_0205fbb8(self);
                if (r != 0) {
                    Unk_0205f1e8_Vec t;
                    Unk_0205f1e8_Vec *pv = (Unk_0205f1e8_Vec *)(r + 0x120);
                    t.x = pv->x;
                    t.y = pv->y;
                    t.z = pv->z;
                    func_01ffca58(&t, &v, &t);
                    func_020e9768(&t, 3);
                    t.y = 0;
                    func_01ffca8c(&v, &t, &v);
                }
            }
            func_0203ef38(&v, &v);
            Unk_0205f7f4_Mtx tmp;
            func_020e8388(&tmp, v.x, v.y, v.z);
            mt = tmp;
        }
        *(Unk_0205f7f4_Mtx *)(e + 0x64) = mt;
        func_0205553c(e, arg);
    }
}

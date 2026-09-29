#include "types.h"

struct Unk_0203182c_Vec { s32 x, y, z; };

struct Unk_020c7c50_Entry {
    u8 unk_00;
    u8 unk_01;
    s16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[2];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 pad_11[2];
    u8 unk_13;
    u8 pad_14[10];
};

extern Unk_020c7c50_Entry data_020c7c50[];
typedef u32 (*Unk_020c7c3c_Fn)(s32);
extern Unk_020c7c3c_Fn data_020c7c2c[4];
extern Unk_020c7c3c_Fn data_020c7c3c[4];

extern "C" s32 func_01ffcb2c(s32 x, s32 y);

extern "C" BOOL func_020311c0(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    u32 v = t < 0x7c ? data_020c7c50[t].unk_13 : 0;
    return v != 0 ? TRUE : FALSE;
}

extern "C" s32 func_020311ec(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) {
        s32 v = data_020c7c50[t].unk_02;
        if (v > 0) v = 1;
        return v;
    }
    return -1;
}

extern "C" s32 func_02031218(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c50[t].unk_05;
    return 2;
}

extern "C" s32 func_0203123c(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c50[t].unk_01;
    return 0;
}

extern "C" s32 func_02031260(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c50[t].unk_04;
    return 0;
}

extern "C" s32 func_02031284(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c50[t].unk_00;
    return 0;
}

extern "C" s32 func_020312a8(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t == 8) return 1;
    if (t == 7 || (t >= 0xb && t <= 0x12)) return 2;
    return 0;
}

extern "C" BOOL func_020312d0(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t == 3 || t == 0x1d) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020312ec(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t == 7) return TRUE;
    return FALSE;
}

extern "C" u32 func_020313f4(s32 x, s32 y, u32 c)
{
    return data_020c7c3c[c & 3](func_01ffcb2c(x, y));
}

extern "C" u32 func_02031474(s32 x, s32 y, u32 c)
{
    return data_020c7c2c[c & 3](func_01ffcb2c(x, y));
}

extern "C" u32 func_02031414(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_0c : 0; }
extern "C" u32 func_0203142c(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_0d : 0; }
extern "C" u32 func_02031444(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_0e : 0; }
extern "C" u32 func_0203145c(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_0f : 0; }
extern "C" u32 func_02031494(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_08 : 0; }
extern "C" u32 func_020314ac(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_09 : 0; }
extern "C" u32 func_020314c4(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_0a : 0; }
extern "C" u32 func_020314dc(s32 t) { return t < 0x7c ? data_020c7c50[t].unk_0b : 0; }

extern "C" BOOL func_02031360(s32 t, s32 k)
{
    u32 v = t < 0x7c ? data_020c7c50[t].unk_10 : 0;
    if (v != 0) {
        switch (k) {
        case 1:
            if (t == 0x16) return FALSE;
            break;
        case 2:
            if (t == 0x16) return FALSE;
            break;
        }
        return TRUE;
    }
    return FALSE;
}

struct Unk_02031304_Vec { s32 x, y, z; };
extern "C" void func_020339bc(void *obj, Unk_02031304_Vec *v, s32 a, s32 b);
extern "C" BOOL func_02033914(void *obj, s32 a);
extern "C" void func_02033988(void *obj);
extern "C" BOOL func_020307c4(s32 x, s32 z, s32 *a, s32 *b, s32 *c);

extern "C" BOOL func_02031304(Unk_02031304_Vec *v)
{
    u32 obj[16];
    s32 a, b, c;
    func_020339bc(obj, v, 0, 0);
    if (func_02033914(obj, 0)) {
        func_02033988(obj);
        return TRUE;
    }
    if (func_020307c4(v->x >> 13, v->z >> 13, &a, &b, &c)) {
        func_02033988(obj);
        return TRUE;
    }
    func_02033988(obj);
    return FALSE;
}

struct Unk_020314f4_Vec { s32 x, y, z; };
extern "C" void func_01ffca58(Unk_020314f4_Vec *a, Unk_020314f4_Vec *b, Unk_020314f4_Vec *out);

extern "C" s32 func_020314f4(Unk_020314f4_Vec *p)
{
    Unk_020314f4_Vec v, w;
    s32 s, d;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    w.x = (v.x & 0xffffe000) + 0x1000;
    w.y = 0;
    w.z = (v.z & 0xffffe000) + 0x1000;
    func_01ffca58(&v, &w, &v);
    d = v.z - v.x;
    s = v.x + v.z;
    if (s > 0) {
        if (d > 0) return 2;
        return 3;
    }
    if (d > 0) return 1;
    return 0;
}

extern "C" void func_02031554(s32 *a, s32 *b)
{
    if (b[0] < a[0]) a[0] = b[0];
    if (b[1] < a[1]) a[1] = b[1];
    if (b[2] < a[2]) a[2] = b[2];
}

extern "C" void func_02031574(s32 *a, s32 *b)
{
    if (b[0] > a[0]) a[0] = b[0];
    if (b[1] > a[1]) a[1] = b[1];
    if (b[2] > a[2]) a[2] = b[2];
}

extern u8 data_021bfbec[];
extern "C" u32 func_02031594(s32 i)
{
    return data_021bfbec[i * 0x138];
}

struct Unk_020d8d00 {
    Unk_020d8d00();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

Unk_020d8d00::Unk_020d8d00() {}
void Unk_020d8d00::vfunc_08() {}
void Unk_020d8d00::vfunc_04() {}
void Unk_020d8d00::vfunc_00() {}

struct Unk_020d8d3c {
    Unk_020d8d3c();
    virtual ~Unk_020d8d3c();
    virtual s32 vfunc_08();
};

Unk_020d8d3c::Unk_020d8d3c() {}
s32 Unk_020d8d3c::vfunc_08() { return 0; }
Unk_020d8d3c::~Unk_020d8d3c() {}

struct Unk_020d8ce8 {
    u8 pad_000[0x120];
    Unk_020d8d3c *unk_120;
};
extern Unk_020d8ce8 *data_020d8ce8;

extern "C" Unk_020d8d3c *func_0203139c()
{
    static Unk_020d8d3c inst;
    Unk_020d8d3c *p = data_020d8ce8->unk_120;
    if (p == 0) p = &inst;
    return p;
}

extern "C" void func_020e9960(Unk_0203182c_Vec *out, Unk_0203182c_Vec *a, Unk_0203182c_Vec *b);
extern "C" void func_01ffd070(Unk_0203182c_Vec *out, Unk_0203182c_Vec *a, Unk_0203182c_Vec *b);

extern "C" BOOL func_0203182c(Unk_0203182c_Vec *a, Unk_0203182c_Vec *b, Unk_0203182c_Vec *c, Unk_0203182c_Vec *d)
{
    Unk_0203182c_Vec mn, mx;
    Unk_0203182c_Vec *pts[2];
    s32 mask, i;
    pts[0] = c;
    pts[1] = d;
    func_020e9960(&mn, a, b);
    func_01ffd070(&mx, a, b);
    mask = 0xff;
    for (i = 0; i < 2; i++) {
        Unk_0203182c_Vec *p = pts[i];
        s32 f = 0;
        if (p->x < mn.x) f |= 1;
        else if (p->x > mx.x) f |= 2;
        if (p->z < mn.z) f |= 4;
        else if (p->z > mx.z) f |= 8;
        if (f == 0) return FALSE;
        mask &= f;
    }
    if (mask == 1) return TRUE;
    if (mask == 2) return TRUE;
    if (mask == 4) return TRUE;
    if (mask == 8) return TRUE;
    return FALSE;
}

struct Unk_020318cc_Node {
    u8 pad_00[0x2c];
    Unk_020318cc_Node *unk_2c;
};
extern Unk_020318cc_Node *data_021bf9b4;
extern "C" s32 func_02031d04(Unk_020318cc_Node *n);

extern "C" BOOL func_020318cc(Unk_020318cc_Node *n)
{
    Unk_020318cc_Node *cur = data_021bf9b4;
    Unk_020318cc_Node *prev = 0;
    while (cur != 0) {
        if (cur == n) {
            if (prev != 0) {
                prev->unk_2c = cur->unk_2c;
            } else {
                data_021bf9b4 = cur->unk_2c;
            }
            func_02031d04(n);
            return TRUE;
        }
        prev = cur;
        cur = cur->unk_2c;
    }
    return FALSE;
}

struct Unk_02031908_Vec { s32 x, y, z; };
extern "C" BOOL func_02031b90(Unk_020318cc_Node *n, s32 a, s32 b, s32 c, s32 d, s32 e, Unk_02031908_Vec *v);

extern "C" BOOL func_02031908(Unk_020318cc_Node *n, s32 a, s32 b, s32 c, s32 d, s16 e, Unk_02031908_Vec *v)
{
    Unk_02031908_Vec s;
    s.x = 0x1000;
    s.y = 0x1000;
    s.z = 0x1000;
    if (v != 0) {
        s.x = v->x;
        s.y = v->y;
        s.z = v->z;
    }
    if (func_02031b90(n, a, b, c, d, e, &s)) {
        n->unk_2c = data_021bf9b4;
        data_021bf9b4 = n;
        return TRUE;
    }
    return FALSE;
}

struct Unk_02031960_P8 { s32 a, b; };

struct Unk_02031618 {
    u8 pad_00[4];
    Unk_0203182c_Vec unk_04;
    Unk_0203182c_Vec unk_10;
    Unk_0203182c_Vec unk_1c;
    s16 unk_28;
    s16 unk_2a;
    Unk_02031618 *unk_2c;
    Unk_0203182c_Vec unk_30[4];
    Unk_02031960_P8 unk_60[4];
    Unk_0203182c_Vec unk_80;
    Unk_0203182c_Vec unk_8c;

    BOOL func_02031960(Unk_0203182c_Vec *a, s32 ang, Unk_0203182c_Vec *b);
};

extern u8 data_021f47e0[];
struct Unk_02031960_V : Unk_0203182c_Vec { Unk_02031960_V(s32 a, s32 b, s32 c) { x = a; y = b; z = c; } };
extern "C" s32 func_020e96ec(void *a, void *b);
extern "C" void func_020e8388(void *m, s32 x, s32 y, s32 z);
extern "C" void func_020e8404(void *m, s32 ang);
extern "C" void func_020e84f8(void *m, s32 x, s32 y, s32 z);
extern "C" void func_01ffb898(Unk_0203182c_Vec *p, void *m, Unk_0203182c_Vec *out);
extern "C" void func_0202f048(Unk_02031960_P8 *o, s32 a, s32 b);
extern "C" void func_0202ef18(Unk_02031960_P8 *o, s32 ang);

extern "C" void func_02031574(s32 *a, s32 *b);
extern "C" void func_02031554(s32 *a, s32 *b);
BOOL Unk_02031618::func_02031960(Unk_0203182c_Vec *a, s32 ang, Unk_0203182c_Vec *b)
{
    Unk_0203182c_Vec corners[4];
    Unk_0203182c_Vec hi, lo;
    Unk_0203182c_Vec *p, *q;
    Unk_0203182c_Vec *pv;
    Unk_02031960_P8 *as;
    s32 i, k;
    s32 hx, hy, hz;
    s32 cx, cy, cz, dx, dy, dz;
    BOOL result;
    if (ang == unk_28) {
        if (func_020e96ec(&unk_04, a) == 0) {
            if (func_020e96ec(&unk_1c, b) == 0) goto end0;
        }
    }
    unk_04.x = a->x;
    unk_04.y = a->y;
    unk_04.z = a->z;
    unk_1c.x = b->x;
    unk_1c.y = b->y;
    unk_1c.z = b->z;
    unk_28 = ang;
    hx = unk_10.x >> 1;
    hz = unk_10.y >> 1;
    hy = unk_10.z;
    corners[0].x = -hx;
    corners[0].y = hy;
    corners[0].z = hz;
    q = &corners[1];
    q->x = hx;
    q->y = hy;
    q->z = hz;
    q = &corners[2];
    q->x = hx;
    q->y = hy;
    q->z = -hz;
    q = &corners[3];
    q->x = -hx;
    q->y = hy;
    q->z = -hz;
    func_020e8388(data_021f47e0, a->x, a->y, a->z);
    func_020e8404(data_021f47e0, ang);
    func_020e84f8(data_021f47e0, b->x, b->y, b->z);
    p = corners;
    pv = unk_30;
    as = unk_60;
    if (unk_10.x == 0 || unk_10.y == 0) {
        k = 1;
        if (unk_10.y == 0) k = 0;
        unk_2a = 2;
        for (i = 0; i < 4; p++, i++) {
            if ((i & 1) == k) {
                func_01ffb898(p, data_021f47e0, pv);
                if (i == k) {
                    hi.x = pv->x; hi.y = pv->y; hi.z = pv->z;
                    lo.x = pv->x; lo.y = pv->y; lo.z = pv->z;
                } else {
                    func_02031574(&hi.x, &pv->x);
                    func_02031554(&lo.x, &pv->x);
                }
                func_0202f048(as, 0, 0x1000);
                func_0202ef18(as, (s16)(ang + (i << 14)));
                pv++;
                as++;
            }
        }
    } else {
        unk_2a = 4;
        for (i = 0; i < unk_2a; i++) {
            func_01ffb898(p, data_021f47e0, pv);
            if (i == 0) {
                hi.x = pv->x; hi.y = pv->y; hi.z = pv->z;
                lo.x = pv->x; lo.y = pv->y; lo.z = pv->z;
            } else {
                func_02031574(&hi.x, &pv->x);
                func_02031554(&lo.x, &pv->x);
            }
            func_0202f048(as, 0, 0x1000);
            func_0202ef18(as, (s16)(ang + (i << 14)));
            pv++;
            p++;
            as++;
        }
    }
    cz = (hi.z + lo.z) >> 1;
    cy = (hi.y + lo.y) >> 1;
    cx = (hi.x + lo.x) >> 1;
    unk_80.x = cx;
    unk_80.y = cy;
    unk_80.z = cz;
    dz = hi.z - unk_80.z;
    dy = hi.y - unk_80.y;
    dx = hi.x - unk_80.x;
    unk_8c.x = dx;
    unk_8c.y = dy;
    unk_8c.z = dz;
    result = TRUE;
    goto end;
end0:
    result = FALSE;
end:
    return result;
}

extern "C" s32 func_01ffcb0c(s32 a, s32 b);
extern "C" void func_02033098(void *out, Unk_02031960_P8 *a, Unk_02031960_P8 *b, Unk_02031960_P8 *c, s32 d, s32 e, s32 f, Unk_02031618 *n);
extern "C" void func_02032d98(s32 a, void *o);
extern "C" void func_02033104(void *o);
extern "C" void func_02033170(s32 a, Unk_0203182c_Vec *p, Unk_0203182c_Vec *q, Unk_0203182c_Vec *r, void *d, s32 e, Unk_02031618 *n);
extern u8 data_021bfa4c[];

static inline s32 Unk_02031618_Abs(s32 v) { if (v < 0) v = -v; return v; }
extern "C" void func_020e9960(Unk_0203182c_Vec *out, Unk_0203182c_Vec *a, Unk_0203182c_Vec *b);
extern "C" BOOL func_0203182c(Unk_0203182c_Vec *a, Unk_0203182c_Vec *b, Unk_0203182c_Vec *c, Unk_0203182c_Vec *d);

extern "C" void func_02031618(s32 unused, Unk_0203182c_Vec *pos, Unk_0203182c_Vec *size, s32 a3, s32 a4, u32 flags, s32 mode)
{
    u8 *q;
    Unk_02031618 *n = (Unk_02031618 *)data_021bf9b4;
    u32 m2 = flags & 2;
    u32 m1 = flags & 1;
    for (; n != 0; n = n->unk_2c) {
        BOOL skip = FALSE;
        Unk_0203182c_Vec c, d;
        s32 i;
        if (mode == 0) {
            if (n->unk_04.y <= 0) skip = TRUE;
        } else {
            if (n->unk_04.y > 0) skip = TRUE;
        }
        if (skip) continue;
        c.x = n->unk_80.x;
        c.y = n->unk_80.y;
        c.z = n->unk_80.z;
        func_020e9960(&d, &c, pos);
        if (Unk_02031618_Abs(d.x) >= n->unk_8c.x + size->x) continue;
        if (Unk_02031618_Abs(d.z) >= n->unk_8c.z + size->z) continue;
        if (m2 != 0) {
            u8 res[4];
            q = res;
            s32 base;
            for (i = 0; i < ((volatile Unk_02031618 *)n)->unk_2a; i++) {
                *q = func_0203182c(pos, size, &n->unk_30[i & (n->unk_2a - 1)], &n->unk_30[(i + 1) & (n->unk_2a - 1)]);
                q++;
            }
            base = n->unk_04.y + func_01ffcb0c(n->unk_10.z, n->unk_1c.y);
            for (i = 0; i < ((volatile Unk_02031618 *)n)->unk_2a; i++) {
                if (res[i & 3] == 0) {
                    Unk_02031960_P8 e0, e1;
                    u8 obj[0x34];
                    func_0202f048(&e0, n->unk_30[i & (n->unk_2a - 1)].x, n->unk_30[i & (n->unk_2a - 1)].z);
                    func_0202f048(&e1, n->unk_30[(i + 1) & (n->unk_2a - 1)].x, n->unk_30[(i + 1) & (n->unk_2a - 1)].z);
                    func_02033098(obj, &e0, &e1, &n->unk_60[i & (n->unk_2a - 1)], base, 1, 1, n);
                    func_02032d98(a3, obj);
                    func_02033104(obj);
                }
            }
        }
        if (m1 != 0) {
            s32 cc = n->unk_2a - 1;
            func_02033170(a4, &n->unk_30[0], &n->unk_30[cc & 1], &n->unk_30[cc & 3], data_021bfa4c, 1, n);
            cc = n->unk_2a - 1;
            func_02033170(a4, &n->unk_30[cc & 1], &n->unk_30[cc & 2], &n->unk_30[cc & 3], data_021bfa4c, 1, n);
        }
    }
}

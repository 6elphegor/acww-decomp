#include "types.h"

extern "C" {
BOOL func_020308b4(s32 *p, s32 a, s32 *c, s32 w, s32 h)
{
    s32 hw = w >> 1;
    s32 hh = h >> 1;
    s32 cx = c[0];
    s32 lox = a + (cx - hw);
    s32 hix = cx + hw - a;
    s32 cz = c[2];
    s32 loz = a + (cz - hh);
    s32 hiz = cz + hh - a;
    BOOL r = FALSE;
    if (p[0] < lox) { p[0] = lox; r = TRUE; }
    else if (p[0] > hix) { p[0] = hix; r = TRUE; }
    if (p[2] < loz) { p[2] = loz; r = TRUE; }
    else if (p[2] > hiz) { p[2] = hiz; r = TRUE; }
    return r;
}
}
struct Unk_02030e48_Vec { s32 x, y, z; };
static inline void Unk_02030e48_Set(Unk_02030e48_Vec *v, s32 x, s32 y, s32 z) { v->x = x; v->y = y; v->z = z; }
struct Unk_020339bc {
    u8 unk_00[0x30];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
    Unk_020339bc(Unk_02030e48_Vec *pos, s32 a, s32 flags);
    ~Unk_020339bc();
    s32 func_02033914(s32 a);
    BOOL func_020338d0(s32 a);
};
struct Unk_02033b94 {
    s32 unk_00[4];
    u8 unk_10[4];
    u8 unk_14;
};
Unk_02033b94 *func_02033b94(Unk_02033b94 *out, s32 x, s32 z, s32 flag);
Unk_02033b94 *func_02033d2c(Unk_02033b94 *out, Unk_02030e48_Vec *pos, s32 flag);
extern "C" {
s32 func_02031284(s32 a, s32 b);
BOOL func_020311c0(s32 a, s32 b);
s32 func_0203081c(Unk_02030e48_Vec *p, s32 *out, s32 flags);
void func_01ffd070(Unk_02030e48_Vec *out, Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
extern u16 data_020c7c4e[];
extern u16 data_020c7c4c[];
extern u8 data_020c7c60[];
extern u8 data_020c7c64[];
extern u8 data_020c7c65[];
extern u8 data_020c7c66[];
extern u8 data_020c7c67[];
extern u8 data_020c7c18[];
s32 func_01ffcb2c(...);

void func_02031594(s32 a, s32 b, s32 c);
BOOL func_02030e48(Unk_02030e48_Vec *pos, s32 r, s32 *out, s32 flags);
BOOL func_02030d9c(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, u32 dist, s32 *dir, u32 count, s32 r, s32 flags);
void func_020e93a0(Unk_02030e48_Vec *v, s32 *dir);
s32 func_01ffcb0c(s32 a, s32 b);
struct Unk_02031154_Tile { u32 unk_00; u8 *unk_04; };
struct Unk_020310f8_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, s32 d, s32 e);
};
Unk_020310f8_Obj *func_0203139c(s32 a, s32 b);
Unk_02031154_Tile *func_01ffcb5c(s32 a, s32 b);

BOOL func_02031260(s32 a, s32 b);

s32 func_02030bc4()
{
    s32 r = func_01ffcb2c();
    if (r >= 0x6f && r <= 0x70) return r - 0x6f;
    return -1;
}
void func_02030d54() {}
void func_02030d58(s32 a, s32 b, s32 c) { func_02031594(a, b, c); }
BOOL func_02030d60(Unk_02030e48_Vec *pos)
{
    return func_02030e48(pos, 0xa00, 0, 2);
}
BOOL func_02030d78(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, s32 *dir, u32 dist, u32 s5, s32 s6)
{
    return func_02030d9c(out, pos, dist, dir, s6, s5, 2);
}
u16 func_02031060(s32 i)
{
    if (i < 0x7c) return *(u16 *)((u8 *)data_020c7c4e + i * 30);
    return 0xffff;
}
u16 func_0203107c(s32 i)
{
    if (i < 0x7c) return *(u16 *)((u8 *)data_020c7c4c + i * 30);
    return 0xffff;
}
BOOL func_02031098(u8 *out, s32 a, s32 b)
{
    s32 i = func_01ffcb2c(a, b);
    if (i < 0x7c) {
        s32 o = i * 30;
        out[0] = data_020c7c64[o];
        out[1] = data_020c7c65[o];
        out[2] = data_020c7c66[o];
        out[3] = data_020c7c67[o];
        return TRUE;
    }
    out[0] = data_020c7c18[0];
    out[1] = data_020c7c18[1];
    out[2] = data_020c7c18[2];
    out[3] = data_020c7c18[3];
    return FALSE;
}
BOOL func_02031194(s32 a, s32 b)
{
    if (func_01ffcb2c(a, b) == 0x1e && func_01ffcb2c(a, b + 1) == 8) return TRUE;
    return FALSE;
}

u32 func_02031154(s32 x, s32 y)
{
    Unk_02031154_Tile *p = func_01ffcb5c(x >> 4, y >> 4);
    if (p) {
        s32 i, b;
        x &= 15;
        y &= 15;
        i = x + y * 16;
        b = p->unk_04[i >> 1];
        if (i & 1) return (b >> 4) & 15;
        return b & 15;
    }
    return 0;
}

BOOL func_020310f8(s32 a, s32 b)
{
    Unk_020310f8_Obj *o = func_0203139c(a, b);
    if (o) {
        s32 x, y, z;
        if (o->vfunc_08(&x, &y, &z, a, b)) return FALSE;
    }
    return func_02031260(a, b);
}
BOOL func_02031130(s32 a, s32 b)
{
    if (func_02031154(a, b)) return FALSE;
    return func_020310f8(a, b);
}

BOOL func_02030e48(Unk_02030e48_Vec *pos, s32 r, s32 *out, s32 flags)
{
    Unk_020339bc a(pos, 0, flags);
    if (a.unk_30) {
        Unk_02030e48_Vec tmp;
        Unk_02030e48_Vec d[8];
        s32 nr = -r;
        s32 z = 0;
        s32 best;
        s32 i;
        d[0].x = nr; d[0].y = 0; d[0].z = nr;
        { s32 *q = (s32 *)&d[1]; q[0] = nr; q[1] = z; q[2] = r; }
        { s32 *q = (s32 *)&d[2]; q[0] = r; q[1] = z; q[2] = r; }
        { s32 *q = (s32 *)&d[3]; q[0] = r; q[1] = z; q[2] = nr; }
        { s32 *q = (s32 *)&d[4]; q[0] = nr; q[1] = z; q[2] = z; }
        { s32 *q = (s32 *)&d[5]; q[0] = r; q[1] = z; q[2] = z; }
        { s32 *q = (s32 *)&d[6]; q[0] = z; q[1] = z; q[2] = r; }
        { s32 *q = (s32 *)&d[7]; q[0] = z; q[1] = z; q[2] = nr; }
        best = z;
        for (i = 0; i < 8; i++) {
            func_01ffd070(&tmp, pos, &d[i]);
            Unk_020339bc b(&tmp, z, flags);
            if (!b.unk_30) return FALSE;
            best = a.unk_3c;
        }
        if (out) *out = best;
        return TRUE;
    }
    return FALSE;
}

BOOL func_02030d9c(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, u32 dist, s32 *dir, u32 count, s32 r, s32 flags)
{
    if (count >= 1) {
        u32 step = dist / count;
        Unk_02030e48_Vec v;
        u32 i;
        v.x = 0;
        v.y = 0;
        v.z = 0x1000;
        func_020e93a0(&v, dir);
        for (i = 0; i <= count; i++) {
            s32 t = i;
            s32 u, s, res;
            Unk_02030e48_Vec p;
            t = t * step;
            s = pos->z + func_01ffcb0c(v.z, t);
            u = pos->y + func_01ffcb0c(v.y, t);
            p.x = pos->x + func_01ffcb0c(v.x, t);
            p.y = u;
            p.z = s;
            if (func_02030e48(&p, r, &res, flags)) {
                out->x = p.x;
                out->y = p.y;
                out->z = p.z;
                out->y = res;
                return TRUE;
            }
        }
    }
    return FALSE;
}

struct Unk_02030f10_Vec : Unk_02030e48_Vec { Unk_02030f10_Vec() {} };
static inline BOOL Unk_02030f10_Flat(Unk_02033b94 *T)
{
    BOOL f = FALSE, e = FALSE;
    if (T->unk_00[0] == T->unk_00[1] && T->unk_00[0] == T->unk_00[2]) e = TRUE;
    if (e && T->unk_00[0] == T->unk_00[3]) f = TRUE;
    return f;
}
struct Unk_02030f10_L { Unk_02030f10_Vec R; Unk_02033b94 T; Unk_02030f10_Vec S; Unk_02033b94 T2; };
BOOL func_02030f10(s32 a, s32 b, s32 c, s32 d, u8 flag)
{
    s32 dy, dx;
    s32 r5;
    volatile Unk_02030f10_Vec A;
    Unk_02030f10_Vec Q;
    dx = a - c;
    if (dx < 0) dx = -dx;
    if (dx > 1) return FALSE;
    dy = b - d;
    if (dy < 0) dy = -dy;
    if (dy > 1) return FALSE;
    if (flag) {
        if (!func_02031284(c, d) || func_020311c0(c, d)) return FALSE;
    } else {
        if (!func_02031284(c, d)) return FALSE;
    }
    A.x = (a << 13) + 0x1000;
    A.y = 0;
    A.z = (b << 13) + 0x1000;
    Q.x = (c << 13) + 0x1000;
    Q.y = 0;
    Q.z = (d << 13) + 0x1000;
    dx += dy;
    r5 = func_0203081c(&Q, 0, 25);
    if (dx == 1) {
        if (r5 != 0) return FALSE;
    } else if (dx == 2) {
        Unk_02030f10_L l;
        s32 tR, tS;
        l.R.x = Q.x;
        l.R.y = 0;
        l.R.z = A.z;
        tR = func_0203081c(&l.R, 0, 25);
        if (tR == 0 && r5 == tR) {
            func_02033d2c(&l.T, &l.R, 0);
            if (Unk_02030f10_Flat(&l.T)) return TRUE;
        }
        l.S.x = A.x;
        l.S.y = 0;
        l.S.z = Q.z;
        tS = func_0203081c(&l.S, 0, 25);
        if (tS == 0 && r5 == tS) {
            func_02033d2c(&l.T2, &l.S, 0);
            if (Unk_02030f10_Flat(&l.T2)) return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

s32 func_02030be4(s32 *a, s32 *b, s32 c, s32 d)
{
    volatile s32 bx, bz, j, g, zz, z14, z18, z1c, z20, z24;
    Unk_02033b94 X, Y, Z;
    Unk_02033b94 *py;
    s32 i;
    if (func_01ffcb5c(c, d) == 0) return 4;
    bx = c << 4;
    bz = d << 4;
    j = 0;
    z14 = 0;
    z18 = 0;
    py = &Y;
    z1c = 0;
    z20 = 0;
    z24 = 0;
    for (; j < 16; j++) {
        i = z14;
        zz = bz + j;
        for (; i < 16; i++) {
            BOOL f, e;
            *a = bx + i;
            *b = zz;
            func_02033b94(&X, *a, *b, z18);
            func_02033b94(py, *a + 1, *b, z1c);
            s32 t = z20;
            g = t; e = t; f = t;
            if (X.unk_10[0] == 0x14 && X.unk_10[1] == 0x14) e = TRUE;
            if (e && X.unk_10[2] == 0x14) f = TRUE;
            if (f && X.unk_10[3] == 0x14) g = TRUE;
            if (g) {
                BOOL h;
                if (py->unk_10[0] == 0x14 && py->unk_10[1] == 0x14 && py->unk_10[2] == 0x14 && py->unk_10[3] == 0x14) h = TRUE;
                else h = z24;
                if (h) {
                    BOOL k;
                    func_02033b94(&Z, *a + 2, *b, 0);
                    if (Z.unk_10[0] == 0x14 && Z.unk_10[1] == 0x14 && Z.unk_10[2] == 0x14 && Z.unk_10[3] == 0x14) k = TRUE;
                    else k = FALSE;
                    if (k) return 1;
                    return 0;
                }
            }
            if (X.unk_10[0] != 0x14 && X.unk_10[1] != 0x14 && X.unk_10[2] == 0x14 && X.unk_10[3] == 0x14
                && py->unk_10[0] != 0x14 && py->unk_10[1] == 0x14 && py->unk_10[2] == 0x14 && py->unk_10[3] != 0x14) {
                s32 idx = py->unk_10[3];
                s32 v;
                if (idx < 0x7c) v = data_020c7c60[idx * 30];
                else v = 0;
                if (v == 0) return 2;
                return 3;
            }
        }
    }
    return 4;
}

}

struct Unk_02030908_D {
    u8 unk_00;
    u32 unk_04;
    Unk_02030e48_Vec unk_08;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    Unk_02030908_D();
    ~Unk_02030908_D();
    void func_020339cc(Unk_02030908_D *src);
};
struct Unk_020d8d00 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    Unk_020d8d00();
    ~Unk_020d8d00();
};
struct Unk_020d8d14 : Unk_020d8d00 {
    Unk_02030e48_Vec *unk_04;
    Unk_02030e48_Vec unk_08;
    u32 unk_14;
    u8 unk_18;
    Unk_02030908_D unk_1c;
    Unk_020d8d14() {}
    virtual void vfunc_00();
    virtual void vfunc_04();
};
extern "C" {
void func_02031554(Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
void func_02031574(Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
void func_02030608(Unk_02030e48_Vec *a, Unk_02030e48_Vec *b, Unk_020d8d00 *o, u32 flags, s32 c, s32 d);

u8 func_02030908(Unk_02030908_D *out, Unk_02030e48_Vec *pos, Unk_02030e48_Vec *tgt, u32 flags)
{
    Unk_02030e48_Vec A, B, C;
    A = *pos;
    B = *tgt;
    C = *tgt;
    func_02031554(&B, &A);
    func_02031574(&C, &A);
    Unk_020d8d14 o;
    o.unk_1c.unk_14 = 0;
    o.unk_04 = &A;
    o.unk_08.x = tgt->x;
    o.unk_08.y = tgt->y;
    o.unk_08.z = tgt->z;
    o.unk_14 = flags;
    o.unk_18 = 0;
    o.unk_1c.unk_18 = 0;
    o.unk_1c.unk_1c = 0;
    o.unk_1c.unk_20 = 0;
    func_02030608(&B, &C, &o, flags, 1, 0);
    if (flags & 8) *pos = A;
    out->unk_08.x = o.unk_1c.unk_08.x;
    out->unk_08.y = o.unk_1c.unk_08.y;
    out->unk_08.z = o.unk_1c.unk_08.z;
    out->func_020339cc(&o.unk_1c);
    return o.unk_18;
}

}

struct Unk_020309d4_Owner {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    Unk_02030e48_Vec unk_24;
};
struct Unk_020d8d28 : Unk_020d8d00 {
    Unk_020309d4_Owner *unk_04;
    Unk_02030e48_Vec *unk_08;
    Unk_02030e48_Vec unk_0c;
    u16 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u32 unk_24;
    Unk_020d8d28() {}
    virtual void vfunc_00();
    virtual void vfunc_04();
};
extern "C" {
extern s32 data_021bfa70;
void func_01ffca8c(Unk_02030e48_Vec *out, Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
void func_01ffca58(Unk_02030e48_Vec *out, Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
void func_020e9960(Unk_02030e48_Vec *out, Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
void func_020323d8(Unk_020309d4_Owner *o);
void func_02032238(Unk_020309d4_Owner *o, s32 v);
BOOL func_02031304(Unk_02030e48_Vec *v);
void func_02031d5c(Unk_02030e48_Vec *v, s32 a, s32 b);

void func_020309d4(Unk_020309d4_Owner *self, Unk_02030e48_Vec *pos, Unk_02030e48_Vec *tgt, u16 hh, s32 arg5, s32 arg6, u32 flags)
{
    struct { Unk_02030e48_Vec A, B, V1, C, D; } l;
    s32 lim, dx, dz;
    BOOL fl;
    l.A = *pos;
    l.B = *tgt;
    lim = (data_021bfa70 + arg5) * 2;
    dx = l.A.x - tgt->x;
    if (dx < 0) dx = -dx;
    if (lim + dx > 0xc000) goto reset;
    dz = l.A.z - tgt->z;
    if (dz < 0) dz = -dz;
    if (lim + dz > 0xc000) {
    reset:
        l.B = l.A;
    }
    l.V1.x = arg5;
    l.V1.y = arg5;
    l.V1.z = arg5;
    l.C = l.B;
    l.D = l.B;
    func_02031574(&l.C, &l.A);
    func_02031554(&l.D, &l.A);
    func_01ffca8c(&l.C, &l.V1, &l.C);
    func_01ffca58(&l.D, &l.V1, &l.D);
    Unk_020d8d28 o;
    o.unk_04 = self;
    o.unk_08 = &l.A;
    o.unk_0c.x = l.B.x;
    o.unk_0c.y = l.B.y;
    o.unk_0c.z = l.B.z;
    o.unk_18 = hh;
    o.unk_1c = arg5;
    o.unk_20 = arg6;
    o.unk_24 = flags;
    func_020323d8(self);
    fl = (self->unk_00 & 2) ? TRUE : FALSE;
    func_02030608(&l.D, &l.C, &o, flags, 0, fl);
    if ((flags & 4) && func_02031304(&l.A)) {
        l.A.x = tgt->x;
        l.A.y = tgt->y;
        l.A.z = tgt->z;
    }
    if (flags & 1) {
        s32 r2 = 1;
        s32 r3;
        if (!(self->unk_00 & 2)) r2 = 0;
        r3 = (flags & 0x80) ? 1 : 0;
        Unk_020339bc E(&l.A, r2, r3);
        if (l.A.y < E.func_02033914(0) + 0x200) {
            self->unk_04 |= 1;
            self->unk_08 = E.unk_34;
            l.A.y = E.func_02033914(0) + 0x200;
        }
        if (E.func_020338d0(l.A.y)) self->unk_04 |= 2;
    }
    func_02032238(self, hh);
    Unk_02030e48_Vec F;
    func_020e9960(&F, &l.A, pos);
    self->unk_24.x = F.x;
    self->unk_24.y = F.y;
    self->unk_24.z = F.z;
    if (flags & 8) {
        pos->x = l.A.x;
        pos->y = l.A.y;
        pos->z = l.A.z;
    }
    if (arg6) func_02031d5c(&l.A, arg5, arg6);
}
}

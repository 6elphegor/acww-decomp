#include "types.h"

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; s32 unk_68; };
struct Unk_020449e8_Pos { s32 x, y; };
struct Unk_020449e8_Out {
    u8 pad_00[2];
    u16 pos;
    u8 pad_04[2];
    u8 slot[3][2];
    u16 code;
};
struct Unk_020449e8_Src {
    u8 a : 2;
    u8 b : 2;
    u8 c : 2;
    u8 d : 2;
    u8 kind : 5;
    u8 e : 2;
    u8 f : 1;
    u16 pos;
    u16 code;
    u16 unk_06;
};
struct Unk_02045214_Ent {
    u8 kind : 3;
    u8 unk_b0 : 5;
    u8 pad0 : 2;
    u8 unk_b1_2 : 3;
    u8 pad1 : 2;
    u8 flag : 1;
    s8 pad2 : 2;
    s8 sf : 4;
    u8 rest[13];
};
struct Unk_02044dd8_Ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;
    u8 unk_1d;
    s8 unk_1e;
    u8 pad_1f;
    u8 pad_20[4];
};
struct Unk_02044aa8_Vec3 { s32 x, y, z; };
struct Unk_02044aa8_Rng { u32 a, b; };
struct Unk_0204512c_Obj { u8 pad[0x5c]; Unk_02044aa8_Vec3 pos; };

extern Unk_020cbb18 *data_020cbb18;
extern Unk_02045214_Ent data_021c3f8c[];
extern Unk_02044dd8_Ent data_021c4350[];
extern void *data_021c47c4;
extern u8 data_021c47bc;
extern u8 data_020c91d0[];
extern u32 data_020c920c[];
extern u32 data_020ca018[][8];
extern u16 data_020c9200[];
extern u16 data_020c91e8[];

static inline BOOL Unk_020449e8_R(volatile u16 *p, u32 &c, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    c = *p;
    u32 b = *p;
    if (b >= lo && c <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02044aa8_R(volatile u16 *p, u32 c, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    u32 a = *p;
    if (a >= lo && c <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" {
BOOL func_02072e44(Unk_020cbb18 *g);
s32 func_0204ed8c(Unk_02044aa8_Vec3 *out, s32 x, s32 z);
Unk_0204512c_Obj *func_02095204(u32 i);
s32 func_01ffcb0c(s32 a, s32 b);
u32 func_02043ee0(u32 a);
s32 func_0204588c(void *p);
s32 func_02045354(Unk_020449e8_Pos *p, s32 a);
s32 func_02043ec0();
s32 func_020452ec(s32 a, Unk_020449e8_Pos *p, s32 b);
BOOL func_0204af08(u16 *p);
BOOL func_02043ba8();
u32 func_0204da0c();
s32 func_0204568c(u8 a, Unk_020449e8_Pos *p, u32 val, u32 code, u32 s0, u32 s1, u32 s2, u8 s3, u32 s4, s32 s5);
s32 func_0204ad08(u16 *p);
u16 *func_0204ebd8(void *obj, s32 tx, s32 ty, s32 px, s32 py, s32 z);
BOOL func_0204e474(void *obj, s32 x, s32 y);
s32 func_020453e8(Unk_020449e8_Pos *p, s32 a);
void func_0206338c(Unk_02044aa8_Rng *r, s32 a, s32 b);
void func_02063388(Unk_02044aa8_Rng *r);
void func_02062f94(u16 *out, Unk_02044aa8_Rng *r, s32 a, s32 b, s32 c, s32 d, s32 e);
u32 func_ov003_0221ba28(u32 a, Unk_02044aa8_Vec3 *v);
BOOL func_020a62a0();
void func_02044774(Unk_020449e8_Src *s, s32 a, s32 b);
s32 func_020728d4(Unk_020cbb18 *g);
s32 func_020728a4(Unk_020cbb18 *g, void *p, s32 n);
s32 func_02072824(Unk_020cbb18 *g, s32 a, s32 b);
void func_02042660(u32 a, Unk_020449e8_Pos *p);
void func_02042478(void *a, Unk_020449e8_Pos *p);
void func_02044bf4(Unk_020449e8_Out *o, u32 x, u32 code);
void func_02044aa8(Unk_020449e8_Out *o, Unk_020449e8_Src *s, u32 x);
u32 func_02044cd8(Unk_020449e8_Out *a, u32 id);
BOOL func_02044d18(Unk_020449e8_Out *a, Unk_020449e8_Pos *p, u32 idx, void *obj);
BOOL func_02045058(u32 idx, Unk_020449e8_Pos *p);
BOOL func_02044f74(Unk_020449e8_Src *s, Unk_02044dd8_Ent *e);
BOOL func_020450e8(Unk_020449e8_Pos *p);
BOOL func_0204512c(Unk_020449e8_Pos *p, s32 idx);
BOOL func_020449e8(Unk_020449e8_Out *o, Unk_020449e8_Src *s, u32 x);

BOOL func_020449e8(Unk_020449e8_Out *o, Unk_020449e8_Src *s, u32 x)
{
    BOOL res = FALSE;
    switch (s->kind) {
    case 1:
    case 6: {
        volatile u16 v = 0xfff1;

        for (s32 i = 0; i < 3; i++) {
            *(u16 *)o->slot[i] = 0xffff;
        }
        v = s->code;
        BOOL rr = FALSE;
        u32 c = v;
        u32 b = v;
        if (b >= 0x2f && c <= 0x56) rr = TRUE;
        if (rr || (c >= 0xc8 && c <= 0xcf) || (c >= 0x57 && c <= 0x5b)) {
            if (func_0204af08((u16 *)&v)) {
                func_02044bf4(o, x, s->code);
                res = TRUE;
            }
        } else if (c == 0x67 || c == 0x6b) {
            if (func_02043ba8()) {
                func_02044aa8(o, s, x);
                res = TRUE;
            }
        } else if ((c >= 0x66 && c <= 0x68) || (c >= 0x6a && c <= 0x6c)) {
            func_02044aa8(o, s, x);
            res = TRUE;
        }
        break;
    }
    }
    return res;
}

void func_02044aa8(Unk_020449e8_Out *o, Unk_020449e8_Src *s, u32 x)
{
    volatile u16 v0 = 0xfff1;
    volatile u16 v2;
    u16 ret;
    volatile u16 x1, y1, x2, y2, p1, p2;
    Unk_020449e8_Pos pos;
    Unk_02044aa8_Rng rng;
    Unk_020449e8_Pos q;
    Unk_02044aa8_Vec3 vec;
    u32 owner;
    u32 code;
    pos.x = 0;
    pos.y = 0;
    owner = func_0204da0c();
    if (owner != 0) {
        v0 = s->code;
        BOOL ok = TRUE;
        BOOL rr = FALSE;
        u32 c = v0;
        u32 b = v0;
        if (b >= 0x66 && c <= 0x68) rr = TRUE;
        if (!(rr || (c >= 0x6a && c <= 0x6c))) {
            ok = FALSE;
        }
        if (ok) {
            u32 sc = ((volatile Unk_020449e8_Src *)s)->code;
            if (sc == 0x68 || sc == 0x6c) {
                code = 0x1492;
            } else {
                v2 = 0xfff1;
                func_0206338c(&rng, 0, 0);
                func_02062f94(&ret, &rng, 0, 0, 1, 1, 0);
                v2 = ret;
                func_02063388(&rng);
                code = v2;
            }
        } else {
            code = 0x1492;
        }
        p1 = s->pos;
        u16 t1 = p1;
        y1 = t1;
        x1 = t1;
        func_0204ed8c(&vec, x1 >> 8, y1 & 0xff);
        u32 idx = func_ov003_0221ba28(x, &vec);
        p2 = o->pos;
        u16 t2 = p2;
        y2 = t2;
        s32 d = data_020c91d0[data_020c920c[idx]];
        x2 = t2;
        pos.x = (x2 >> 8) + ((d >> 4) - 8);
        pos.y = (y2 & 0xff) + ((d & 0xf) - 8);
        if (func_02044d18(o, &pos, idx, (void *)owner)) {
            q.x = pos.x;
            q.y = pos.y;
            func_0204568c(x, &q, code, 0xfff1, 0, 0, 0, 0, 0, -1);
            s32 sy = pos.y;
            s32 sx = pos.x;
            o->slot[0][1] = sx;
            o->slot[0][0] = sy;
        } else {
            *(u16 *)o->slot[0] = 0xffff;
        }
        o->code = code;
    }
}

void func_02044bf4(Unk_020449e8_Out *o, u32 x, u32 code)
{
    Unk_020449e8_Pos pos;
    pos.x = 0;
    pos.y = 0;
    u32 owner;
    owner = func_0204da0c();
    if (owner != 0) {
        u32 val;
        s32 n;
        volatile u16 vx, vy, vp;
        s32 i;
        if (code == 0xcc) {
            n = 2;
        } else {
            n = 3;
        }
        val = func_02044cd8(o, code);
        for (i = 0; i < n; i++) {
            s32 d;
            vp = o->pos;
            u16 t = vp;
            vy = t;
            d = data_020c91d0[data_020c920c[i]];
            vx = t;
            pos.x = (vx >> 8) + ((d >> 4) - 8);
            pos.y = (vy & 0xff) + ((d & 0xf) - 8);
            if (func_02044d18(o, &pos, i, (void *)owner)) {
                Unk_020449e8_Pos q;
                q.x = pos.x;
                q.y = pos.y;
                func_0204568c(x, &q, val, 0xfff1, 0, 0, 0, i, 0, -1);
                s32 sy = pos.y;
                s32 sx = pos.x;
                o->slot[i][1] = sx;
                o->slot[i][0] = sy;
            } else {
                *(u16 *)o->slot[i] = 0xffff;
            }
        }
        o->code = val;
    }
}

u32 func_02044cd8(Unk_020449e8_Out *a, u32 id)
{
    u32 r;
    switch (id) {
    case 0xcc:
        r = 0x1548;
        break;
    case 0x5b:
        r = 0x14b8;
        break;
    default: {
        u16 v = 0xfff1;
        v = id;
        r = data_020c9200[func_0204ad08(&v)];
    }
    }
    return r;
}

BOOL func_02044d18(Unk_020449e8_Out *a, Unk_020449e8_Pos *p, u32 idx, void *obj)
{
    s32 i, z0, z1;
    u32 *base;
    u32 *e;
    u32 off = idx * 32; base = (u32 *)(off + (u32)data_020ca018);
    e = base;
    i = 0;
    z1 = 0;
    z0 = 0;
    for (; i < 8; e++, i++) {
        u32 d = data_020c91d0[*e];
        s32 x = p->x + (((s32)d >> 4) - 8);
        s32 y = p->y + ((d & 0xf) - 8);
        s32 tx = x >> 4;
        s32 ty = y >> 4;
        u16 *t = func_0204ebd8(obj, tx, ty, x - (tx << 4), y - (ty << 4), z0);
        if (t && *t == 0xfff1 && func_0204e474(obj, x, y)) {
            Unk_020449e8_Pos q;
            q.x = x;
            q.y = y;
            if (func_020453e8(&q, z1) < 0) {
                p->x = x;
                p->y = y;
                return TRUE;
            }
        }
    }
    u32 d = data_020c91d0[*base];
    p->x = p->x + (((s32)d >> 4) - 8);
    p->y = p->y + ((d & 0xf) - 8);
    return FALSE;
}

void func_02044dd8(u8 idx, u32 arg)
{
    void *o = data_021c47c4;
    Unk_02044dd8_Ent *e = &data_021c4350[idx];
    Unk_020449e8_Src s;
    Unk_020449e8_Pos p;
    Unk_020449e8_Pos p2;
    Unk_020449e8_Out out;
    u16 *t;
    s32 x, y;
    if (o == NULL) {
        e->unk_08 = 3;
        return;
    }
    x = e->unk_14;
    y = e->unk_18;
    {
        s32 tx = x >> 4;
        s32 ty = y >> 4;
        t = func_0204ebd8(o, tx, ty, x - (tx << 4), y - (ty << 4), 0);
    }
    if (t == NULL) {
        e->unk_08 = 3;
        return;
    }
    p.x = x;
    p.y = y;
    if (!func_02045058(idx, &p)) {
        e->unk_08 = 3;
        return;
    }
    s.a = e->unk_00;
    s.b = idx;
    s.c = e->unk_1d;
    s.kind = e->unk_0c;
    ((u8 *)&s.pos)[1] = x;
    ((u8 *)&s.pos)[0] = y;
    s.code = *t;
    s.unk_06 = e->unk_10;
    s.e = (u8)arg;
    s.f = e->unk_1c;
    Unk_020cbb18 *g = data_020cbb18;
    if (func_02072e44(g)) {
        if (func_020a62a0()) {
            func_02044774(&s, 1, g->unk_64);
        } else {
            g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, &s, 8);
            func_02072824(g, 0x31, 6);
        }
    } else {
        e->unk_08 = 2;
        if (!func_02044f74(&s, e)) {
            s8 sb = e->unk_1e;
            p2.x = e->unk_14;
            p2.y = e->unk_18;
            if (!func_0204568c(0, &p2, s.unk_06, s.code, s.kind, s.c, s.e, 4, s.f, sb)) {
                e->unk_08 = 3;
            } else {
                s32 px = e->unk_14;
                s32 py = e->unk_18;
                u8 *pp = (u8 *)&out.pos;
                pp[1] = px;
                pp[0] = py;
                func_020449e8(&out, &s, 0);
            }
        }
    }
}

BOOL func_02044f74(Unk_020449e8_Src *s, Unk_02044dd8_Ent *e)
{
    volatile u16 v = 0xfff1;
    BOOL res = FALSE;
    v = s->unk_06;
    switch (s->kind) {
    case 0x13: {
        u32 c;
        if (Unk_020449e8_R(&v, c, 0x1518, 0x151c)) {
            s->unk_06 = data_020c91e8[c - 0x1518];
        } else {
            switch (c) {
            case 0x1548:
                s->unk_06 = 0xc8;
                break;
            case 0x151d:
                s->unk_06 = 0x26;
                break;
            case 0x151e:
                s->unk_06 = 0x5d;
                break;
            }
        }
        break;
    }
    case 0xf: {
        Unk_020449e8_Pos t;
        u32 r = func_02043ee0(e->unk_00);
        t.x = e->unk_14;
        t.y = e->unk_18;
        func_02042660(r, &t);
        res = TRUE;
        break;
    }
    case 0xc:
    case 0xd:
    case 0x17:
        res = TRUE;
        break;
    case 0xe: {
        Unk_020449e8_Pos t;
        t.x = e->unk_14;
        t.y = e->unk_18;
        func_02042478(&data_021c47bc, &t);
        break;
    }
    }
    return res;
}

BOOL func_02045058(u32 idx, Unk_020449e8_Pos *p)
{
    volatile u16 v = 0xfff1;
    BOOL res = FALSE;
    Unk_02044dd8_Ent *e = &data_021c4350[idx];
    Unk_020449e8_Pos t;
    s32 r;
    s32 fl;
    v = e->unk_12;
    fl = e->unk_1c;
    t.x = p->x;
    t.y = p->y;
    r = func_020453e8(&t, fl);
    if (r < 0) {
        Unk_020449e8_Pos t2;
        t2.x = p->x;
        t2.y = p->y;
        if (func_020450e8(&t2)) {
            res = TRUE;
        }
    } else {
        Unk_02045214_Ent *g = &data_021c3f8c[r];
        if (g->kind == (u8)(e->unk_00 & 3)) {
            if (g->sf == e->unk_1e) {
                if (g->flag) {
                    res = TRUE;
                }
            }
        }
    }
    return res;
}

BOOL func_020450e8(Unk_020449e8_Pos *p)
{
    Unk_020449e8_Pos t;
    s32 owner = data_020cbb18->unk_68;
    t.x = p->x;
    t.y = p->y;
    return func_0204512c(&t, owner);
}

BOOL func_0204510c(Unk_020449e8_Pos *p, u32 x)
{
    Unk_020449e8_Pos t;
    t.x = p->x;
    t.y = p->y;
    return func_0204512c(&t, func_02043ee0(x));
}

BOOL func_0204512c(Unk_020449e8_Pos *p, s32 idx)
{
    Unk_02044aa8_Vec3 v;
    if (!func_02072e44(data_020cbb18)) {
        return TRUE;
    }
    func_0204ed8c(&v, p->x, p->y);
    for (s32 i = 0; i < 4; i++) {
        if (i != idx) {
            Unk_0204512c_Obj *o = func_02095204(i);
            if (o) {
                Unk_02044aa8_Vec3 *q = &o->pos;
                s32 dx = v.x - q->x;
                s32 dz = v.z - q->z;
                s32 a = func_01ffcb0c(dx, dx);
                s32 b = func_01ffcb0c(dz, dz);
                if (a + b < 0x1000) {
                    return FALSE;
                }
            }
        }
    }
    return TRUE;
}

void func_020451a4(u8 *a)
{
    u8 *p = a + 4;
    for (s32 i = 0; i < 20; i++) {
        func_0204588c(p);
        p += 0x10;
    }
}

u8 *func_020451c4(u32 a)
{
    Unk_02045214_Ent *e;
    s32 i;
    u8 *r;
    r = NULL;
    if (!func_02072e44(data_020cbb18)) {
        a = 0;
    }
    e = data_021c3f8c;
    for (i = 0; i < 20; e++, i++) {
        if (a == e->kind && e->flag) {
            r = (u8 *)e + 8;
            break;
        }
    }
    return r;
}

Unk_02045214_Ent *func_02045214(u32 i)
{
    return &data_021c3f8c[i];
}

s32 func_02045220(u32 a, u32 b)
{
    s32 r = -1;
    if (!func_02072e44(data_020cbb18)) {
        a = 0;
    }
    Unk_02045214_Ent *e = data_021c3f8c;
    for (s32 i = 0; i < 20; e++, i++) {
        if (a == e->kind && b == e->unk_b1_2) {
            r = i;
            break;
        }
    }
    return r;
}

s32 func_02045270(u32 a)
{
    Unk_02045214_Ent *e;
    s32 i, r;
    i = 0;
    r = -1;
    a = (u8)(a & 3);
    e = data_021c3f8c;
    for (; i < 20; e++, i++) {
        if (a == e->kind && e->flag) {
            r = i;
            break;
        }
    }
    return r;
}

void func_020452b0()
{
    Unk_020449e8_Pos p;
    p.x = 0xff;
    p.y = 0xff;
    func_02045354(&p, 0);
}

s32 func_020452c8(u32 a, Unk_020449e8_Pos *p, s32 b)
{
    Unk_020449e8_Pos t;
    s32 x = func_02043ec0();
    t.x = p->x;
    t.y = p->y;
    return func_020452ec(x, &t, b);
}
}

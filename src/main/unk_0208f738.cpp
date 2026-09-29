#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0208f738_C {
    s32 unk_00;
    u32 unk_04[0x144 / 4];
};

struct Unk_0208f738_B {
    /* 0x000 */ s32 unk_00;
    /* 0x004 */ Unk_0208f738_C unk_04[4];
    /* 0x524 */ u32 unk_524[3];
};

struct Unk_0208f8fc_Entry;

struct Unk_0208f8fc_Cb {
    s32 (*unk_00)(Unk_0208f8fc_Entry *);
    s32 (*unk_04)(Unk_0208f8fc_Entry *);
};

struct Unk_0208f8fc_Obj {
    u8 unk_00[8];
    void *unk_08;
    u8 unk_0c[0x10];
    u32 unk_1c;
};

struct Unk_0208f8fc_Tag {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0208f8fc_Entry {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_0208f8fc_Tag unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0c */ Unk_0208f8fc_Obj *unk_0c;
    /* 0x10 */ Unk_0208f8fc_Cb unk_10;
};

struct Unk_0208f8fc_Pool {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ Unk_0208f8fc_Entry unk_04[32];
};


struct Unk_0208fb20_Sub {
    u8 unk_00[0x20];
    s16 unk_20;
};

struct Unk_0208fb20_Obj {
    u8 unk_00[8];
    Unk_0208fb20_Sub *unk_08;
    u8 unk_0c[0x10];
    u32 unk_1c;
};

struct Unk_0208fb20_Row {
    u32 unk_00_0 : 1;
    u32 unk_00_1 : 1;
    u32 unk_00_rest : 30;
    u32 *unk_04;
    s32 unk_08;
};

struct Unk_0208fdcc_A {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10[0x40];
    u8 unk_50;
};

struct Unk_0208fdcc_B {
    Unk_0208fdcc_A *unk_00;
};

struct Unk_0208fdcc_Obj {
    u8 unk_00[0x18];
    Unk_0208fdcc_B *unk_18;
    u8 unk_1c[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c[0x2e];
    u16 unk_5a;
    u8 unk_5c[0x24];
    u8 unk_80;
};

struct Unk_0208ffe4_V {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_0208ffe4_V(s32 a, s32 b, s32 c)
    {
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
    }
};

struct Unk_0208fe0c_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

union Unk_0208fe0c_U {
    u16 v;
    Unk_0208fe0c_Col c;
};

struct Unk_0209002c_Handle {
    u8 unk_00[0x30];
    u32 unk_30;
};

class Unk_020e141c : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    s32 func_02090168();
    s32 func_0209018c();
    s32 func_02090140(s32);

    /* 0x50 */ Unk_0209002c_Handle *unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ Unk_0208f8fc_Pool unk_58;
    /* 0x35c */ Unk_0208f738_B unk_35c[4];
    /* 0x181c */ u32 unk_181c[1];
};

extern "C" {
extern Unk_020e141c *data_021d049c;
extern void *data_021d04a0;
extern void *data_021d04a4;
extern void *data_021d04a8;
extern s32 *data_021d04ac;
extern s32 data_021f482c;
extern Unk_0208fb20_Row data_020cfafc[];
extern u32 data_0213c7e0[];
extern s16 data_020e13b4[];
extern s16 *data_020e1180[];
s32 func_0209019c(...);

s32 func_0208f3c8(Unk_0208f738_C *, Unk_0208f738_B *, s32);
s32 func_0208f474(Unk_0208f738_C *);
s32 func_0208f480(Unk_0208f738_C *);
s32 func_0208f508(Unk_0208f738_C *);
s32 func_0208f568(Unk_0208f738_C *, Unk_0208f738_B *);
s32 func_0208f6c0(void *);
s32 func_0208f6f0(void *, Unk_0208f738_B *);
s32 func_0208f378(void *);
s32 func_0208f398(void *);
s32 func_0208f354(void *, u32);
s32 func_0208f32c(void *, u32, void *);
void func_020e8c94(void *);
void *func_020e8e7c(u32, s32);
void *func_020e8574(u32);
void func_020e8558(void *);
void *func_020f8c44(void *);
void *func_020f8bb0(void *, u32, u32);
void func_020f8b44(void *, void *, s32);
void func_020f8cb8(void *, void *, void *);
void func_020f8d24(void *);
Unk_0209002c_Handle *func_020f94a8(void *, s32, s32, s32, s32, s32);
void func_020f92d4(void *, void *);
void func_020f9018(void *, s32);
void func_021010d0(void *);
void *func_021010dc(void *, void *, void *);
void func_02115e64(s32, void *, s32);
void func_02115fb4(void *, s32, s32);
s32 func_02133150(s32, s32);
u16 func_02064f18();
u16 func_020b5b98();
s32 func_0204c0ac();
s32 func_0203ef38(void *, void *);
void func_0208fa88(Unk_0208f8fc_Entry *);
s32 func_0208faa0(Unk_0208f8fc_Entry *, s32, s32, s32, Unk_0208f8fc_Cb *, Unk_0208f8fc_Tag);
}

extern "C" {

void func_0208f738(Unk_0208f738_B *b, s32 a)
{
    s32 i;
    Unk_0208f738_C *c = b->unk_04;
    for (i = 0; i < 4; i++) {
        if (c->unk_00 == 0) {
            func_0208f3c8(c, b, a);
            break;
        }
        c++;
    }
}

void func_0208f76c(Unk_0208f738_B *b)
{
    s32 i;
    func_0208f6c0(b->unk_524);
    for (i = 0; i < 4; i++) {
        func_0208f474(&b->unk_04[i]);
    }
}

void func_0208f79c(Unk_0208f738_B *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f480(&b->unk_04[i]);
    }
}

void func_0208f7c0(Unk_0208f738_B *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f508(&b->unk_04[i]);
    }
}

void func_0208f7e4(Unk_0208f738_B *b, s32 a)
{
    s32 i;
    b->unk_00 = a;
    func_0208f6f0(b->unk_524, b);
    for (i = 0; i < 4; i++) {
        func_0208f568(&b->unk_04[i], b);
    }
}

void func_0208f820(Unk_0208f738_B *b, s32 idx, s32 a)
{
    func_0208f738(&b[idx], a);
}

void func_0208f834(Unk_0208f738_B *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f76c(&b[i]);
    }
    if (data_021d04a0 != NULL) {
        func_020e8c94(data_021d04a0);
        data_021d04a0 = NULL;
    }
}

void func_0208f86c(Unk_0208f738_B *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f79c(&b[i]);
    }
}

void func_0208f890(Unk_0208f738_B *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f7c0(&b[i]);
    }
}

void func_0208f8b4(Unk_0208f738_B *b)
{
    s32 i;
    if (data_021d04a0 == NULL) {
        data_021d04a0 = func_020e8e7c(0x2800, data_021f482c);
    }
    for (i = 0; i < 4; i++) {
        func_0208f7e4(&b[i], i);
    }
}

Unk_0208f8fc_Entry *func_0208f8fc(Unk_0208f8fc_Pool *p, s32 id, s32 a2, s32 a3, Unk_0208f8fc_Cb *cb, u32 b, u32 c)
{
    Unk_0208f8fc_Entry *r = NULL;
    Unk_0208f8fc_Tag tag;
    s32 i;
    s32 cur;
    tag.unk_01 = b;
    tag.unk_02 = c;
    for (i = 0; i < 0x20; i++) {
        cur = p->unk_00;
        if (p->unk_04[cur].unk_00 == -1) {
            tag.unk_00 = cur;
            if (func_0208faa0(&p->unk_04[cur], id, a2, a3, cb, tag)) {
                r = &p->unk_04[p->unk_00];
                p->unk_00 = (p->unk_00 + 1) % 0x20;
            }
            break;
        } else {
            p->unk_00 = (cur + 1) % 0x20;
        }
    }
    return r;
}

Unk_0208f8fc_Entry *func_0208f98c(Unk_0208f8fc_Pool *p, s32 id)
{
    Unk_0208f8fc_Entry *e = p->unk_04;
    Unk_0208f8fc_Entry *r = NULL;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (id == e->unk_00) {
            BOOL f;
            if (e->unk_08 == 1) {
                f = TRUE;
            } else {
                f = FALSE;
            }
            if (f == 0) {
                r = e;
                break;
            }
        }
        e++;
    }
    return r;
}

void func_0208f9c4(Unk_0208f8fc_Pool *p)
{
    s32 z = 0;
    Unk_0208f8fc_Entry *e = p->unk_04;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->unk_00 != ~z) {
            e->unk_08 = 0;
            func_0208fa88(e);
            p->unk_00 = i;
        }
        e++;
    }
}

void func_0208f9f8(Unk_0208f8fc_Pool *p)
{
    s32 z = 0;
    s32 w = 0;
    Unk_0208f8fc_Entry *e = p->unk_04;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->unk_00 != ~w) {
            Unk_0208f8fc_Cb *cb = &e->unk_10;
            e->unk_08 = 0;
            if (cb != NULL) {
                if (cb->unk_04(e)) {
                    e->unk_08 = 1;
                }
            }
            {
                BOOL t;
                if (e->unk_08 == 1) {
                    t = TRUE;
                } else {
                    t = z;
                }
                if (t == 0) {
                    func_0208fa88(e);
                    p->unk_00 = i;
                }
            }
        }
        e++;
    }
}

void func_0208fa54(Unk_0208f8fc_Pool *p)
{
    Unk_0208f8fc_Entry *e;
    s32 i;
    e = p->unk_04;
    do {
        e->unk_00 = -1;
        e++;
    } while (e != &p->unk_04[32]);
    p->unk_00 = 0;
    for (i = 0; i < 0x20; i++) {
        p->unk_04[i].unk_00 = -1;
    }
}

void func_0208fa88(Unk_0208f8fc_Entry *e)
{
    if (e->unk_0c != NULL) {
        e->unk_0c->unk_1c = (e->unk_0c->unk_1c & ~1) | 1;
    }
    e->unk_00 = -1;
}

s32 func_0208faa0(Unk_0208f8fc_Entry *e, s32 id, s32 a2, s32 a3, Unk_0208f8fc_Cb *cb, Unk_0208f8fc_Tag tag)
{
    s32 r;
    u32 d, c, b;
    b = tag.unk_01;
    c = tag.unk_02;
    d = tag.unk_03;
    r = 0;
    e->unk_0c = (Unk_0208f8fc_Obj *)func_020f8c44(data_021d049c->unk_50);
    if (e->unk_0c != NULL) {
        e->unk_00 = id;
        e->unk_08 = 1;
        e->unk_10.unk_00 = cb->unk_00;
        e->unk_10.unk_04 = cb->unk_04;
        e->unk_04.unk_00 = tag.unk_00;
        e->unk_04.unk_01 = b;
        e->unk_04.unk_02 = c;
        e->unk_04.unk_03 = d;
        cb->unk_00(e);
        r = 1;
    }
    return r;
}

void func_0208fb00(s32 a, s32 b)
{
    func_0208f820(data_021d049c->unk_35c, a, b);
}

s16 func_0208ff18()
{
    return data_020e13b4[func_0204c0ac()];
}

s16 func_0208ff30(Unk_0208fdcc_Obj *o)
{
    s32 idx = func_0204c0ac();
    return data_020e1180[o->unk_80][idx];
}

void func_0208fe0c(Unk_0208fdcc_Obj *o)
{
    u32 f = o->unk_18->unk_00->unk_50;
    if ((f & 0x80) != 0) {
        volatile Unk_0208fe0c_U l0, l2, l4, l6, l8, la, lc, le;
        l4.v = func_02064f18();
        la.v = l4.v;
        l6.v = la.v;
        if ((f & 0x40) != 0) {
            l8.v = func_020b5b98();
        } else if ((f & 0x20) != 0) {
            l2.v = func_0208ff30(o);
            lc.v = l2.v;
            l8.v = lc.v;
        } else if ((f & 8) != 0) {
            l0.v = func_0208ff18();
            le.v = l0.v;
            l8.v = le.v;
        } else {
            l8.v = 0x7fff;
        }
        l6.c.r = (u16)(l8.c.r * l6.c.r / 31);
        l6.c.g = (u16)(l8.c.g * l6.c.g / 31);
        l6.c.b = (u16)(l8.c.b * l6.c.b / 31);
        o->unk_5a = l6.v;
    }
}

void func_0208fdcc(Unk_0208fdcc_Obj *o)
{
    s32 *v;
    func_0208fe0c(o);
    v = data_021d04ac;
    if (v != NULL) {
        o->unk_20 = v[0] + o->unk_18->unk_00->unk_04;
        o->unk_24 = v[1] + o->unk_18->unk_00->unk_08;
        o->unk_28 = v[2] + o->unk_18->unk_00->unk_0c;
    }
}

void func_0208fdc0(Unk_0208f8fc_Entry *e)
{
    func_0208fdcc((Unk_0208fdcc_Obj *)e->unk_0c);
}

s32 func_0208fdac(Unk_0208f8fc_Entry *e)
{
    func_0208fe0c((Unk_0208fdcc_Obj *)e->unk_0c);
    return 1;
}

u16 func_0208ffe4(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3)
{
    Unk_0208ffe4_V t(a1, a2, a3);
    return func_0203ef38(a0, &t);
}

static inline void Unk_0208fb20_GetTag(Unk_0208f8fc_Tag *r, Unk_0208f8fc_Tag p)
{
    r->unk_00 = p.unk_00;
    r->unk_01 = p.unk_01;
    r->unk_02 = p.unk_02;
    r->unk_03 = p.unk_03;
}

static inline void Unk_0208fb20_SetTag(Unk_0208f8fc_Entry *e, Unk_0208f8fc_Tag t)
{
    e->unk_04 = t;
}

static inline void Unk_0208fb20_Clear(void *p, u32 n)
{
    volatile s32 d = 0;
    func_02115e64(d, p, n);
}

s32 func_0208fb20(s32 idx, s32 p1, s16 *p2, Unk_0208f8fc_Cb *p3)
{
    Unk_0208f8fc_Pool *pool;
    s32 count;
    s32 ok = 1;
    s32 zero;
    Unk_0208f8fc_Tag x;
    void *list[10];
    Unk_0208fb20_Row *row;
    u32 *ids;
    Unk_0208f8fc_Entry *e;
    s32 i;
    s32 j;

    Unk_0208fb20_Clear(list, 0x28);
    if (p1 == 0) {
        return 0;
    }
    pool = (Unk_0208f8fc_Pool *)data_021d049c;
    pool = (Unk_0208f8fc_Pool *)((u8 *)pool + 0x58);
    row = &data_020cfafc[idx];
    count = row->unk_08;
    ids = row->unk_04;
    if (p2 != NULL) {
        if (row->unk_00_0 == 1) {
            count = count >> 1;
            if (*p2 >= 0) {
                ids += count;
            }
        }
    }
    data_021d04ac = (s32 *)p1;
    zero = 0;
    for (i = 0; i < count; i++) {
        e = func_0208f98c(pool, *ids);
        if (e != NULL) {
            e->unk_08 = 1;
            e->unk_09 = i;
            Unk_0208fb20_GetTag(&x, e->unk_04);
            x.unk_01 = data_021d049c->unk_54;
            x.unk_02 = i;
            Unk_0208fb20_SetTag(e, x);
            Unk_0208f8fc_Cb *cb = &e->unk_10;
            if (cb != NULL) {
                cb->unk_00(e);
            }
        } else {
            e = func_0208f8fc(pool, *ids, p1, (s32)p2, p3, data_021d049c->unk_54, i);
            if (e == NULL) {
                ok = zero;
            }
        }
        if (ok == 0) {
            for (j = 0; j < i; j++) {
                func_0208fa88((Unk_0208f8fc_Entry *)list[j]);
            }
            break;
        }
        list[i] = e;
        ids++;
        p3++;
    }
    data_021d04ac = NULL;
    data_021d049c->unk_54++;
    return ok;
}

s32 func_0208fc88(s32 idx, s32 p1, s16 *p2, u32 *p3)
{
    Unk_0208f8fc_Pool *pool;
    Unk_020e141c *mgr;
    Unk_0208fb20_Row *row;
    s32 count;
    u32 *ids;
    s32 i;
    void *ctx;
    Unk_0208fb20_Sub *sub;
    s32 zero14;
    s32 zero18;
    Unk_0208fb20_Obj *o;
    Unk_0208fb20_Obj *h;

    if (p1 == 0) {
        return 0;
    }
    mgr = data_021d049c;
    row = &data_020cfafc[idx];
    count = row->unk_08;
    ids = row->unk_04;
    if (p2 != NULL) {
        if (row->unk_00_0 == 1) {
            count = count >> 1;
            if (*p2 >= 0) {
                ids += count;
            }
        }
    }
    data_021d04ac = (s32 *)p1;
    if (row->unk_00_1 != 0) {
        ctx = &mgr->unk_181c;
        i = 0;
        zero18 = 0;
        zero14 = 0;
        for (; i < count; i++) {
            o = (Unk_0208fb20_Obj *)func_0208f354(ctx, *ids);
            if (o == NULL) {
                h = (Unk_0208fb20_Obj *)func_020f8bb0(data_021d049c->unk_50, *ids, *p3);
                if (h != NULL) {
                    if (func_0208f32c(ctx, *ids, h) != 0) {
                        h->unk_1c |= 2;
                        func_020f8b44(data_021d049c->unk_50, h, p1);
                        sub = h->unk_08;
                        if (p2 != NULL) {
                            sub->unk_20 = p2[zero14];
                        }
                    }
                }
            } else {
                func_020f8b44(data_021d049c->unk_50, o, p1);
                sub = o->unk_08;
                if (p2 != NULL) {
                    sub->unk_20 = p2[zero18];
                }
            }
            ids++;
            p3++;
        }
    } else {
        for (i = 0; i < count; i++) {
            func_020f8bb0(data_021d049c->unk_50, *ids, *p3);
            ids++;
            p3++;
        }
    }
    data_021d04ac = NULL;
    return 1;
}
}

extern "C" {
void func_0208f86c(Unk_0208f738_B *);
}

BOOL Unk_020e141c::vfunc_0c()
{
    if (data_021d04a4 != NULL) {
        func_021010d0(data_021d04a4);
        data_021d04a4 = NULL;
    }
    if (data_021d04a8 != NULL) {
        func_0208f9c4(&unk_58);
        func_020e8558(data_021d04a8);
        data_021d04a8 = NULL;
    }
    func_0208f834(unk_35c);
    func_0208f378(unk_181c);
    data_021d049c = NULL;
    return TRUE;
}

BOOL Unk_020e141c::vfunc_24()
{
    func_020f8cb8(unk_50, data_0213c7e0, (void *)func_0208ffe4);
    func_0208f86c(unk_35c);
    return TRUE;
}

BOOL Unk_020e141c::vfunc_18()
{
    func_0208f9f8(&unk_58);
    func_0208f890(unk_35c);
    func_020f8d24(unk_50);
    return TRUE;
}

BOOL Unk_020e141c::vfunc_00()
{
    BOOL result = FALSE;
    void *h;
    s32 r;

    data_021d049c = this;
    unk_50 = NULL;
    data_021d04a4 = NULL;
    unk_54 = 0;
    data_021d04ac = NULL;
    data_021d04a8 = func_020e8574(0xc000);
    if (data_021d04a8 != NULL) {
        data_021d04a4 = func_021010dc(data_021d04a8, (void *)0xc000, NULL);
        unk_50 = func_020f94a8((void *)func_0209019c, 0x20, 0x64, 0x14, 0x15, 0x32);
        unk_50->unk_30 = 0x8800;
        if (unk_50 != NULL) {
            h = (void *)func_0209018c();
            if (h != NULL) {
                func_020f92d4(unk_50, h);
                if (func_02090168() != 0) {
                    r = func_02090140((s32)h);
                    if (r != 0) {
                        func_020f9018(unk_50, r);
                        result = TRUE;
                    }
                }
                func_020e8558(h);
            }
        }
    }
    if (result == FALSE) {
        if (data_021d04a4 != NULL) {
            func_021010d0(data_021d04a4);
            data_021d04a4 = NULL;
        }
        if (data_021d04a8 != NULL) {
            func_0208f9c4(&unk_58);
            func_020e8558(data_021d04a8);
            data_021d04a8 = NULL;
        }
    } else {
        func_02115fb4(unk_35c, 0, 0x14c0);
        func_0208f8b4(unk_35c);
        func_0208f398(unk_181c);
    }
    return result;
}

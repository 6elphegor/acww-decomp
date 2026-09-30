// mwcc-flags: -O4,p
#include "types.h"

// ---- types (all overlay-065 library code is plain C-style free functions; no vtables in this range)

struct Unk_ov065_0225f1cc_Cfg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    void *(*unk_18)(u32);
    void (*unk_1c)(void *);
    s32 unk_20;
    u32 unk_24;
    u32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
};

struct Unk_ov065_0225f210_G {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    u32 unk_14;
    u32 unk_18;
    void *unk_1c;
    u32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_0225f5c8_T {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_ov065_0225f634_Params {
    s8 unk_00;
    s8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    Unk_ov065_0225f5c8_T unk_10;
    Unk_ov065_0225f5c8_T unk_14;
};

struct Unk_ov065_0225f618_Pair {
    void *unk_00;
    u32 unk_04;
};

struct Unk_ov065_0225f378_Obj;

struct Unk_ov065_0225f4d4_Msg {
    s32 (*unk_00)(Unk_ov065_0225f4d4_Msg *);
    Unk_ov065_0225f378_Obj *unk_04;
    void *unk_08;
    s8 unk_0c;
    s8 unk_0d;
    u8 unk_0e[2];
    u16 unk_10;
    u32 *unk_14;
    u32 *unk_18;
};

struct Unk_ov065_0225f634_Sub1 {
    u8 unk_00[0xe0];
    u8 unk_e0[0x18];
    u32 unk_f8;
    u16 unk_fc;
    u8 unk_fe[0x0c];
    u16 unk_10a;
    u32 unk_10c;
    u32 unk_110;
    u8 unk_114[4];
};

struct Unk_ov065_0225f634_Sub2 {
    u8 unk_00[0xe0];
    u8 unk_e0[0x18];
    Unk_ov065_0225f618_Pair unk_f8;
    u8 unk_100[4];
    u32 unk_104;
    u32 unk_108;
    Unk_ov065_0225f378_Obj *unk_10c;
    u8 unk_110[4];
};

struct Unk_ov065_0225f378_Obj {
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08[0x34];
    Unk_ov065_0225f618_Pair unk_3c;
    u8 unk_44[4];
    Unk_ov065_0225f618_Pair unk_48;
    Unk_ov065_0225f618_Pair unk_50;
    Unk_ov065_0225f618_Pair unk_58;
    u8 unk_60[4];
    Unk_ov065_0225f634_Sub1 *unk_64;
    Unk_ov065_0225f634_Sub2 *unk_68;
    s32 unk_6c;
    s16 unk_70;
    s8 unk_72;
    s8 unk_73;
    u16 unk_74;
    u8 unk_76[10];
    u8 unk_80[4];
};

struct Unk_ov065_0225f410_Q {
    u32 unk_00[8];
};

struct Unk_ov065_0225f524_Q {
    u32 unk_00[5];
    s32 unk_14;
    u32 unk_18;
    s32 unk_1c;
};

extern "C" {
extern Unk_ov065_0225f1cc_Cfg *data_ov065_0228e9a0;
extern u32 data_ov065_0228e9a4;
extern u32 data_ov065_0228e9a8;
extern u32 data_ov065_0228e9ac;
extern Unk_ov065_0225f378_Obj *data_ov065_0228e9b0;
extern Unk_ov065_0225f210_G data_ov065_0228e9b4;
extern void *data_ov065_0228e9e4;
extern Unk_ov065_0225f524_Q data_ov065_0228e9e8;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228ebfc[2];
extern Unk_ov065_0225f634_Params data_ov065_0228b3dc;
extern Unk_ov065_0225f634_Params data_ov065_0228b3f4;

// main module
void func_02000b44(u32);
void *func_02115fb4(void *, s32, u32);
s32 func_02133150(s32, s32);
s32 func_02114050(void *, void *, s32);
u32 func_01ffa2ec(void);
void func_02113254(void);
s32 func_02114188(void *, void *, s32);
s32 func_02114234(void *, void *, s32);
void func_0211321c(void);
void func_01ffa3d4(u32);
void func_02113554(void);
void func_021142dc(void *, void *, s32);
void func_0211450c(void *);
void func_02113a70(void *, void *, void *, void *, u32, u32);
void func_0211366c(void *);
void func_02114480(void *);
void func_02114410(void *);

// overlay 065, other groups
s32 func_ov065_0226abb0(void);
void func_ov065_0226498c(s32);
void func_ov065_0226ab40(void *);
void func_ov065_022649fc(void *);
void func_ov065_02264a48(void *);
void func_ov065_0226459c(void);
void func_ov065_022608a4(void);
u32 func_ov065_02260ed8(u32);
void func_ov065_02260f94(void *);
s32 func_ov065_02260f04(void);
void func_ov065_02262a44(void *);
void func_ov065_02262984(void *);
void func_ov065_022629b0(void);
void func_ov065_02262a18(void);
void func_ov065_02262954(void *);
void func_ov065_0225fd18(void);
void func_ov065_022629d0(u32, s32, s32);
void func_ov065_02262924(void);
void *func_ov065_02262840(u16 *, s32 *);
s32 func_ov065_0225fc98(s32, u32);

// same group, forward declarations
BOOL func_ov065_0225f1a0(void);
void func_ov065_0225f1bc(void);
void func_ov065_0225f1cc(void);
void func_ov065_0225f210(void);
s32 func_ov065_0225f314(void);
s32 func_ov065_0225f344(Unk_ov065_0225f1cc_Cfg *);
void func_ov065_0225f378(void *);
s32 func_ov065_0225f3e4(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f3f8(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f404(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f410(void *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f458(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f46c(void *, Unk_ov065_0225f4d4_Msg *);
void *func_ov065_0225f4ac(Unk_ov065_0225f378_Obj *);
void func_ov065_0225f4b8(void *);
Unk_ov065_0225f4d4_Msg *func_ov065_0225f4d4(void *, Unk_ov065_0225f378_Obj *, s32);
Unk_ov065_0225f4d4_Msg *func_ov065_0225f4fc(s32);
s32 func_ov065_0225f524(void);
s32 func_ov065_0225f560(s32);
u32 func_ov065_0225f5c8(void *, void *, Unk_ov065_0225f5c8_T *);
u8 *func_ov065_0225f618(u8 *, Unk_ov065_0225f618_Pair *, u32);
u8 *func_ov065_0225f634(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f634_Params *);
u32 func_ov065_0225f718(Unk_ov065_0225f5c8_T *);
u32 func_ov065_0225f738(Unk_ov065_0225f634_Params *);
Unk_ov065_0225f378_Obj *func_ov065_0225f7a0(Unk_ov065_0225f634_Params *);
s32 func_ov065_0225f7ec(Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f84c(Unk_ov065_0225f634_Params *);
s32 func_ov065_0225f880(Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f8dc(Unk_ov065_0225f378_Obj *, u32 *, u32 *);
s32 func_ov065_0225f9a8(Unk_ov065_0225f378_Obj *, u32 *, u32 *);
s32 func_ov065_0225fa6c(Unk_ov065_0225f378_Obj *);

static inline BOOL Unk_ov065_0225f8dc_IsOpen(Unk_ov065_0225f378_Obj *o)
{
    BOOL r = FALSE;
    if (o == NULL || (o->unk_70 & 1) == 0) {
    } else {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov065_0225f8dc_IsIdle(Unk_ov065_0225f378_Obj *o)
{
    BOOL r = TRUE;
    s32 s = o->unk_73;
    if (s != 0 && s != 4) {
        r = FALSE;
    }
    return r;
}

BOOL func_ov065_0225f1a0(void)
{
    if (func_ov065_0226abb0()) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0225f1bc(void)
{
    data_ov065_0228e9ac |= 2;
}

void func_ov065_0225f1cc(void)
{
    Unk_ov065_0225f1cc_Cfg *c = data_ov065_0228e9a0;
    data_ov065_0228ebd8 = c->unk_04;
    data_ov065_0228eba4 = c->unk_08;
    data_ov065_0228ebc0 = c->unk_0c;
    data_ov065_0228ebfc[0] = c->unk_10;
    data_ov065_0228ebfc[1] = c->unk_14;
    data_ov065_0228e9ac |= 2;
}

void func_ov065_0225f210(void)
{
    Unk_ov065_0225f210_G *g = &data_ov065_0228e9b4;
    Unk_ov065_0225f1cc_Cfg *c = data_ov065_0228e9a0;
    s32 a;
    s32 b;
    func_02115fb4(g, 0, 0x30);
    g->unk_04 = (void *)c->unk_18;
    g->unk_08 = (void *)c->unk_1c;
    g->unk_10 = (void *)func_ov065_0225f1a0;
    g->unk_14 = 0;
    g->unk_18 = 0;
    g->unk_2c = data_ov065_0228e9a4;
    if (c->unk_24 != 0) {
        g->unk_20 = c->unk_24;
    } else {
        g->unk_20 = 0x4000;
    }
    if (c->unk_28 != 0) {
        g->unk_1c = (void *)c->unk_28;
    } else {
        g->unk_1c = data_ov065_0228e9a0->unk_18(g->unk_20);
    }
    a = c->unk_30;
    if (a == 0) {
        a = 0x240;
    }
    b = c->unk_34;
    if (b == 0) {
        b = 0x10c0;
    }
    g->unk_24 = a - 0x28;
    data_ov065_0228b3dc.unk_02 = b;
    data_ov065_0228b3dc.unk_04 = func_02133150(b, 2);
    data_ov065_0228ebd8 = 0;
    if (c->unk_00 != 0) {
        data_ov065_0228e9ac = 1;
        g->unk_00 = 0;
        g->unk_0c = (void *)func_ov065_0225f1bc;
        g->unk_28 = data_ov065_0228e9a8;
    } else {
        data_ov065_0228e9ac = 0;
        g->unk_00 = 1;
        g->unk_0c = (void *)func_ov065_0225f1cc;
    }
    {
        s32 t = c->unk_2c;
        if (t == 0) {
            t = 0xb;
        }
        func_ov065_0226498c(t);
    }
    func_ov065_0226ab40((void *)func_ov065_0226459c);
    func_ov065_022649fc((void *)func_ov065_022608a4);
    func_ov065_02264a48(g);
}

s32 func_ov065_0225f314(void)
{
    s32 r = func_ov065_0225f560(data_ov065_0228e9a0->unk_20);
    if (r >= 0) {
        data_ov065_0228e9b0 = (Unk_ov065_0225f378_Obj *)func_ov065_0225f84c(&data_ov065_0228b3f4);
    }
    return r;
}

s32 func_ov065_0225f344(Unk_ov065_0225f1cc_Cfg *cfg)
{
    func_02000b44(0x2000bd4);
    if (data_ov065_0228e9a0 != NULL) {
        return 0;
    }
    data_ov065_0228e9a0 = cfg;
    func_ov065_0225f210();
    return func_ov065_0225f314();
}

void func_ov065_0225f378(void *q)
{
    Unk_ov065_0225f4d4_Msg *m;
    for (;;) {
        func_02114050(q, &m, 1);
        if (m == NULL) {
            break;
        }
        s32 r = m->unk_00(m);
        u32 irq = func_01ffa2ec();
        func_02113254();
        func_02114188(q, 0, 0);
        if (m->unk_04 != NULL) {
            m->unk_04->unk_6c = r;
        }
        if (m->unk_08 != NULL) {
            func_02114234(m->unk_08, (void *)r, 0);
        }
        func_ov065_0225f4b8(m);
        func_0211321c();
        func_01ffa3d4(irq);
        func_02113554();
    }
}

s32 func_ov065_0225f3e4(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f410(func_ov065_0225f4ac(o), m);
}

s32 func_ov065_0225f3f8(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f410(o->unk_68, m);
}

s32 func_ov065_0225f404(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f410(o->unk_64, m);
}

s32 func_ov065_0225f410(void *q, Unk_ov065_0225f4d4_Msg *m)
{
    s32 res;
    s32 buf;
    Unk_ov065_0225f410_Q lq;
    if (m->unk_0d == 0) {
        m->unk_08 = NULL;
        res = func_ov065_0225f46c(q, m);
    } else {
        func_021142dc(&lq, &buf, 1);
        m->unk_08 = &lq;
        func_ov065_0225f46c(q, m);
        func_02114188(&lq, &res, 1);
    }
    return res;
}

s32 func_ov065_0225f458(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f46c(func_ov065_0225f4ac(o), m);
}

s32 func_ov065_0225f46c(void *q, Unk_ov065_0225f4d4_Msg *m)
{
    s32 flag;
    s32 r;
    if (m != NULL) {
        flag = m->unk_0d;
    } else {
        flag = 1;
    }
    r = func_02114234(q, m, flag);
    if (r == 0) {
        func_ov065_0225f4b8(m);
    }
    if (r != 0) {
        return 0;
    }
    return -0x2a;
}

void *func_ov065_0225f4ac(Unk_ov065_0225f378_Obj *o)
{
    void *p = o->unk_64;
    if (p == NULL) {
        p = o->unk_68;
    }
    return p;
}

void func_ov065_0225f4b8(void *m)
{
    if (m != NULL) {
        func_02114234(&data_ov065_0228e9e8, m, 0);
    }
}

Unk_ov065_0225f4d4_Msg *func_ov065_0225f4d4(void *fn, Unk_ov065_0225f378_Obj *o, s32 c)
{
    Unk_ov065_0225f4d4_Msg *m = func_ov065_0225f4fc(c);
    if (m != NULL) {
        m->unk_00 = (s32 (*)(Unk_ov065_0225f4d4_Msg *))fn;
        m->unk_04 = o;
        m->unk_08 = NULL;
        m->unk_0c = o->unk_73;
        m->unk_0d = c;
    }
    return m;
}

Unk_ov065_0225f4d4_Msg *func_ov065_0225f4fc(s32 c)
{
    Unk_ov065_0225f4d4_Msg *m;
    if (func_02114188(&data_ov065_0228e9e8, &m, c)) {
        return m;
    }
    return NULL;
}

s32 func_ov065_0225f524(void)
{
    if (data_ov065_0228e9e8.unk_1c < data_ov065_0228e9e8.unk_14) {
        return -1;
    }
    data_ov065_0228e9a0->unk_1c(data_ov065_0228e9e4);
    data_ov065_0228e9e4 = NULL;
    return 0;
}

s32 func_ov065_0225f560(s32 n)
{
    u32 a = (n * 4 + 3) & ~3;
    u32 b = (n * 0x2c + 3) & ~3;
    u8 *p = (u8 *)data_ov065_0228e9a0->unk_18(b + a);
    u8 *e;
    if (p == NULL) {
        return -1;
    }
    func_021142dc(&data_ov065_0228e9e8, p, n);
    e = p + a;
    while (n > 0) {
        func_ov065_0225f4b8(e);
        e += 0x2c;
        n--;
    }
    data_ov065_0228e9e4 = p;
    return 0;
}

u32 func_ov065_0225f5c8(void *a, void *b, Unk_ov065_0225f5c8_T *c)
{
    u32 r = (u32)a + func_ov065_0225f718(c);
    func_021142dc(b, a, c->unk_03);
    func_0211450c((u8 *)b + 0xe0);
    func_02113a70((u8 *)b + 0x20, (void *)func_ov065_0225f378, b, (void *)r, c->unk_00, c->unk_02);
    func_0211366c((u8 *)b + 0x20);
    return r;
}

u8 *func_ov065_0225f618(u8 *base, Unk_ov065_0225f618_Pair *dst, u32 n)
{
    u8 *v = base;
    if (n == 0) {
        v = NULL;
    }
    dst->unk_04 = (u32)v;
    dst->unk_00 = (void *)n;
    return base + func_ov065_02260ed8(n);
}

u8 *func_ov065_0225f634(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f634_Params *p)
{
    Unk_ov065_0225f634_Sub1 *s1;
    Unk_ov065_0225f634_Sub2 *s2;
    u8 *cur;
    o->unk_73 = p->unk_00;
    o->unk_72 = p->unk_01;
    cur = o->unk_80;
    if (p->unk_02 != 0) {
        s1 = (Unk_ov065_0225f634_Sub1 *)cur;
        o->unk_64 = s1;
        s1->unk_fc = p->unk_04;
        cur = (u8 *)func_ov065_0225f5c8(s1->unk_114, s1, &p->unk_10);
        cur = func_ov065_0225f618(cur, &o->unk_3c, p->unk_02);
        cur = func_ov065_0225f618(cur, &o->unk_50, p->unk_08);
        s1->unk_10a = p->unk_0e;
        s1->unk_10c = s1->unk_110 = 0;
    }
    if (p->unk_06 != 0) {
        s2 = (Unk_ov065_0225f634_Sub2 *)cur;
        o->unk_68 = s2;
        s2->unk_10c = o;
        cur = (u8 *)func_ov065_0225f5c8(s2->unk_110, s2, &p->unk_14);
        cur = func_ov065_0225f618(cur, &o->unk_48, p->unk_06);
        cur = func_ov065_0225f618(cur, &o->unk_58, p->unk_0a);
        cur = func_ov065_0225f618(cur, &s2->unk_f8, p->unk_0c);
        s2->unk_104 = s2->unk_108 = 0;
    } else {
        o->unk_68 = data_ov065_0228e9b0->unk_68;
    }
    return cur;
}

u32 func_ov065_0225f718(Unk_ov065_0225f5c8_T *t)
{
    u32 a = func_ov065_02260ed8(t->unk_03 << 2);
    return a + func_ov065_02260ed8(t->unk_00);
}

u32 func_ov065_0225f738(Unk_ov065_0225f634_Params *p)
{
    u32 sz = 0x80;
    if (p->unk_02 != 0) {
        sz += 0x114;
        sz += func_ov065_02260ed8(p->unk_02);
        sz += func_ov065_02260ed8(p->unk_08);
        sz += func_ov065_0225f718(&p->unk_10);
    }
    if (p->unk_06 != 0) {
        sz += 0x110;
        sz += func_ov065_02260ed8(p->unk_06);
        sz += func_ov065_02260ed8(p->unk_0a);
        sz += func_ov065_02260ed8(p->unk_0c);
        sz += func_ov065_0225f718(&p->unk_14);
    }
    return sz;
}

Unk_ov065_0225f378_Obj *func_ov065_0225f7a0(Unk_ov065_0225f634_Params *p)
{
    u32 size = func_ov065_0225f738(p);
    u32 irq = func_01ffa2ec();
    Unk_ov065_0225f378_Obj *o = (Unk_ov065_0225f378_Obj *)data_ov065_0228e9a0->unk_18(size);
    if (o != NULL) {
        func_02115fb4(o, 0, size);
        func_ov065_0225f634(o, p);
        func_ov065_02260f94(o);
    }
    func_01ffa3d4(irq);
    return o;
}

s32 func_ov065_0225f7ec(Unk_ov065_0225f4d4_Msg *m)
{
    Unk_ov065_0225f378_Obj *o = (Unk_ov065_0225f378_Obj *)m->unk_04;
    u8 *sub;
    func_ov065_02262a44(o);
    sub = (u8 *)o->unk_68;
    switch (o->unk_73) {
    case 0:
    case 4:
        func_ov065_02262984(sub + 0x20);
        func_ov065_022629b0();
        break;
    case 1:
        func_ov065_022629b0();
        func_ov065_02262a18();
        func_ov065_02262954((void *)func_ov065_0225fd18);
        break;
    case 2:
        func_ov065_02262a18();
        break;
    case 3:
        break;
    }
    o->unk_70 = 1;
    return 0;
}

s32 func_ov065_0225f84c(Unk_ov065_0225f634_Params *p)
{
    Unk_ov065_0225f378_Obj *o = func_ov065_0225f7a0(p);
    if (o == NULL) {
        return -0x31;
    }
    func_ov065_0225f3e4(o, func_ov065_0225f4d4((void *)func_ov065_0225f7ec, o, 1));
    return (s32)o;
}

s32 func_ov065_0225f880(Unk_ov065_0225f4d4_Msg *m)
{
    Unk_ov065_0225f378_Obj *o = m->unk_04;
    Unk_ov065_0225f634_Sub1 *s = o->unk_64;
    u16 a;
    s32 b;
    s32 r;
    func_02114480(s->unk_e0);
    func_ov065_022629d0(m->unk_10, 0, 0);
    func_ov065_02262924();
    s->unk_f8 = 0;
    r = (s32)func_ov065_02262840(&a, &b);
    *(u16 *)m->unk_14 = a;
    *(s32 *)m->unk_18 = r;
    o->unk_70 = o->unk_70 | 4;
    func_02114410(s->unk_e0);
    return 0;
}

s32 func_ov065_0225f8dc(Unk_ov065_0225f378_Obj *o, u32 *x, u32 *y)
{
    s32 t;
    Unk_ov065_0225f4d4_Msg *m;
    if (func_ov065_02260f04() != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsOpen(o)) {
        return -0x27;
    }
    if ((o->unk_70 & 2) != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsIdle(o)) {
        return -0x1c;
    }
    t = o->unk_72;
    if (t != 1) {
        return -6;
    }
    if (o->unk_74 == 0) {
        return -0x1c;
    }
    m = func_ov065_0225f4d4((void *)func_ov065_0225f880, o, t);
    m->unk_10 = o->unk_74;
    m->unk_14 = x;
    m->unk_18 = y;
    o->unk_70 = o->unk_70 | 2;
    return func_ov065_0225f404(o, (Unk_ov065_0225f4d4_Msg *)m);
}

s32 func_ov065_0225f9a8(Unk_ov065_0225f378_Obj *o, u32 *x, u32 *y)
{
    s32 h;
    if (func_ov065_02260f04() != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsOpen(o)) {
        return -0x27;
    }
    if ((o->unk_70 & 2) != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsIdle(o)) {
        return -0x1c;
    }
    if (o->unk_72 != 1) {
        return -6;
    }
    h = func_ov065_0225f84c(&data_ov065_0228b3dc);
    if (h >= 0) {
        s32 r = func_ov065_0225fc98(h, o->unk_74);
        if (r >= 0) {
            r = func_ov065_0225f8dc((Unk_ov065_0225f378_Obj *)h, x, y);
            if (r >= 0) {
                r = h;
            }
        }
        return r;
    }
    return h;
}

s32 func_ov065_0225fa6c(Unk_ov065_0225f378_Obj *o)
{
    if (func_ov065_02260f04() != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsOpen(o)) {
        return -0x27;
    }
    if ((o->unk_70 & 2) != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsIdle(o)) {
        return -0x1c;
    }
    if (o->unk_72 == 1) {
        return 0;
    }
    return -6;
}
}

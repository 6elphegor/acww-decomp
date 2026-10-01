// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ---- types of the former unk_0225f1a0.cpp part (functions 0x0225f5c8..0x0225fa6c)

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

// ---- types of the former unk_0225faf4.cpp part (functions 0x0225faf4..0x0225fd18)

struct Unk_ov065_0225faf4_Node {
    Unk_ov065_0225faf4_Node *next;
    u16 len;
    u16 unk_06;
    u32 unk_08;
    u8 data[4];
};

struct Unk_ov065_0225faf4_Alloc {
    void *pad[6];
    Unk_ov065_0225faf4_Node *(*alloc)(u32);
    void (*free)(void *);
};

struct Unk_ov065_0225faf4_Sess;

struct Unk_ov065_0225faf4_Ctx {
    u8 pad_00[0xc4];
    Unk_ov065_0225faf4_Sess *cur;
    u8 pad_c8[0x18];
    u8 mutex[0x18];
    s32 pos;
    u16 limit;
    s8 lock;
    u8 pad_ff;
    Unk_ov065_0225faf4_Node *volatile tail;
    Unk_ov065_0225faf4_Node *head;
    u16 used;
    u16 cap;
    u8 queue[4];
};

struct Unk_ov065_0225faf4_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
    u8 pad_0c[0xc];
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 pad_24[0x1c];
    u8 *unk_40;
    s32 unk_44;
    s32 unk_48;
    u8 *unk_4c;
    u8 pad_50[0x14];
    Unk_ov065_0225faf4_Ctx *ctx;
    void *rx;
    s32 unk_6c;
    volatile s16 flags;
    s8 unk_72;
    s8 state;
    u16 unk_74;
    u16 unk_76;
    u32 unk_78;
};

typedef Unk_ov065_0225faf4_Node Node;
typedef Unk_ov065_0225faf4_Sess Sess;
typedef Unk_ov065_0225faf4_Ctx Ctx;

struct Unk_ov065_0225faf4_Job {
    u32 unk_00;
    Sess *sess;
    u32 unk_08;
    s8 unk_0c;
    u8 pad_0d[3];
    u16 unk_10;
    u16 unk_12;
    void *unk_14;
};

typedef Unk_ov065_0225faf4_Job Job;

struct Unk_ov065_0225fd18_Counters {
    u32 unk_00;
    u32 unk_04;
};

typedef Unk_ov065_0225f378_Obj Obj;
typedef Unk_ov065_0225f4d4_Msg Msg;

// ---- externals

// the same function is called with and without its argument (0x0225f8dc.. vs 0x0225fbbc..)
namespace Unk_ov065_0225fbbc_Ns {
extern "C" s32 func_ov065_02260f04(Sess *s);
}

extern "C" {
// own data (other TUs of the overlay)
extern Unk_ov065_0225faf4_Alloc *data_ov065_0228e9a0;
extern Obj *data_ov065_0228e9b0;
extern Unk_ov065_0225f634_Params data_ov065_0228b3dc;

// main module
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 v);
void func_02113a70(void *, void *, void *, void *, u32, u32);
void func_0211366c(void *);
void func_021136a0(void *q);
s32 func_021142dc(void *, void *, s32);
void func_02114410(void *m);
void func_02114480(void *m);
void func_0211450c(void *);
void func_02115fb4(void *, s32, u32);
void func_02116048(const void *src, void *dst, u32 n);

// other TUs of the overlay
void func_ov065_0225f378(void *);
s32 func_ov065_0225f3e4(Obj *, Msg *);
s32 func_ov065_0225f404(Obj *, Msg *);
Msg *func_ov065_0225f4d4(void *, Obj *, s32);
s32 func_ov065_02260f04(void);
u32 func_ov065_02260ed8(u32);
void func_ov065_02260f94(void *);
void func_ov065_02262a44(void *);
void func_ov065_02262984(void *);
void func_ov065_022629b0(void);
void func_ov065_02262a18(void);
void func_ov065_02262954(void *);
void func_ov065_022629d0(u32, u32, void *);
void func_ov065_02262924(void);
void *func_ov065_02262840(u16 *, s32 *);
s32 func_ov065_02262874(void);

// this TU
s32 func_ov065_0225fd18(void *data, u32 len, Sess *s);
s32 func_ov065_0225fc98(Sess *s, u16 a);
s32 func_ov065_0225fbbc(Sess *s, u16 a, u32 b);
s32 func_ov065_0225fb68(Sess *s);
s32 func_ov065_0225faf4(Job *j);
s32 func_ov065_0225fa6c(Obj *);
s32 func_ov065_0225f9a8(Obj *, u32 *, u32 *);
s32 func_ov065_0225f8dc(Obj *, u32 *, u32 *);
s32 func_ov065_0225f880(Msg *);
s32 func_ov065_0225f84c(Unk_ov065_0225f634_Params *);
s32 func_ov065_0225f7ec(Msg *);
Obj *func_ov065_0225f7a0(Unk_ov065_0225f634_Params *);
u32 func_ov065_0225f738(Unk_ov065_0225f634_Params *);
u32 func_ov065_0225f718(Unk_ov065_0225f5c8_T *);
u8 *func_ov065_0225f634(Obj *, Unk_ov065_0225f634_Params *);
u8 *func_ov065_0225f618(u8 *, Unk_ov065_0225f618_Pair *, u32);
u32 func_ov065_0225f5c8(void *, void *, Unk_ov065_0225f5c8_T *);
}

static inline BOOL Unk_ov065_0225f8dc_IsOpen(Obj *o)
{
    BOOL r = FALSE;
    if (o == NULL || (o->unk_70 & 1) == 0) {
    } else {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov065_0225f8dc_IsIdle(Obj *o)
{
    BOOL r = TRUE;
    s32 s = o->unk_73;
    if (s != 0 && s != 4) {
        r = FALSE;
    }
    return r;
}

static inline BOOL IsIdle(Sess *s)
{
    BOOL r = TRUE;
    if (s->state != 0 && s->state != 4) {
        r = FALSE;
    }
    return r;
}

static inline BOOL IsValid(Sess *s)
{
    BOOL r = FALSE;
    if (s == NULL || !(s->flags & 1)) {
    } else {
        r = TRUE;
    }
    return r;
}

extern "C" {
s32 data_ov065_0228b3c0 = -0x1a;
Unk_ov065_0225fd18_Counters data_ov065_0228ea08;

s32 func_ov065_0225fd18(void *data, u32 len, Sess *s)
{
    Ctx *c = s->ctx;
    u32 irq = func_01ffa2ec();

    if (c->cap >= c->used + len) {
        Node *n = data_ov065_0228e9a0->alloc(len + 12);
        if (n != NULL) {
            c->used += len;
            n->next = NULL;
            n->len = len;
            n->unk_06 = s->unk_18;
            n->unk_08 = s->unk_1c;
            func_02116048(data, n->data, len);
            if (s->unk_74 == 0) {
                s->unk_74 = s->unk_0a;
            }
            s->unk_18 = s->unk_1a;
            s->unk_1c = s->unk_20;
            if (c->tail != NULL) {
                c->tail->next = n;
            }
            c->tail = n;
            if (c->head == NULL) {
                c->head = n;
            }
        } else {
            data_ov065_0228ea08.unk_00++;
        }
    } else {
        data_ov065_0228ea08.unk_04++;
    }
    func_021136a0(c->queue);
    func_01ffa3d4(irq);
    return 1;
}

s32 func_ov065_0225fc98(Sess *s, u16 a)
{
    if (Unk_ov065_0225fbbc_Ns::func_ov065_02260f04(s) != 0) {
        return -0x1c;
    }
    if (!IsValid(s)) {
        return -0x27;
    }
    if (s->flags & 2) {
        return -7;
    }
    s->unk_74 = a;
    if (s->state == 1) {
        return func_ov065_0225fb68(s);
    }
    return 0;
}

s32 func_ov065_0225fbbc(Sess *s, u16 a, u32 b)
{
    s32 r;
    if (Unk_ov065_0225fbbc_Ns::func_ov065_02260f04(s) != 0 || (s->flags & 8) != 0) {
        return -0x1c;
    }
    if (!IsValid(s)) {
        return -0x27;
    }
    if (IsIdle(s)) {
        if (s->flags & 4) {
            if (s->unk_72 == 1) {
                return -0x1e;
            }
            return 0;
        }
        if (s->flags & 2) {
            if (s->flags & 0x40) {
                return s->unk_6c;
            }
            return data_ov065_0228b3c0;
        }
        s->unk_76 = a;
        s->unk_78 = b;
        r = func_ov065_0225fb68(s);
        if (s->unk_72 == 1) {
            return r;
        }
        return -0x1a;
    }
    s->unk_76 = a;
    s->unk_78 = b;
    return 0;
}

s32 func_ov065_0225fb68(Sess *s)
{
    u32 r0 = (u32)func_ov065_0225f4d4((void *)func_ov065_0225faf4, (Obj *)s, s->unk_72);
    Job *j = (Job *)r0;
    if (j == NULL) {
        return -0x21;
    }
    j->unk_10 = s->unk_74;
    j->unk_12 = s->unk_76;
    j->unk_14 = (void *)s->unk_78;
    s->flags |= 2;
    return func_ov065_0225f404((Obj *)s, (Msg *)j);
}

s32 func_ov065_0225faf4(Job *j)
{
    Sess *s = j->sess;
    Ctx *c;
    s32 err = 0;
    c = s->ctx;

    func_02114480(c->mutex);
    func_ov065_022629d0(j->unk_10, j->unk_12, j->unk_14);
    c->pos = err;
    if (j->unk_0c == 0 || j->unk_0c == 4) {
        err = func_ov065_02262874();
    }
    func_02114410(c->mutex);
    if (err) {
        s->flags |= 0x40;
        return -0x4c;
    }
    s->flags |= 4;
    return 0;
}

s32 func_ov065_0225fa6c(Obj *o)
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

s32 func_ov065_0225f9a8(Obj *o, u32 *x, u32 *y)
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
        s32 r = func_ov065_0225fc98((Sess *)h, o->unk_74);
        if (r >= 0) {
            r = func_ov065_0225f8dc((Obj *)h, x, y);
            if (r >= 0) {
                r = h;
            }
        }
        return r;
    }
    return h;
}

s32 func_ov065_0225f8dc(Obj *o, u32 *x, u32 *y)
{
    s32 t;
    Msg *m;
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
    return func_ov065_0225f404(o, (Msg *)m);
}

s32 func_ov065_0225f880(Msg *m)
{
    Obj *o = m->unk_04;
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

s32 func_ov065_0225f84c(Unk_ov065_0225f634_Params *p)
{
    Obj *o = func_ov065_0225f7a0(p);
    if (o == NULL) {
        return -0x31;
    }
    func_ov065_0225f3e4(o, func_ov065_0225f4d4((void *)func_ov065_0225f7ec, o, 1));
    return (s32)o;
}

s32 func_ov065_0225f7ec(Msg *m)
{
    Obj *o = (Obj *)m->unk_04;
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

Obj *func_ov065_0225f7a0(Unk_ov065_0225f634_Params *p)
{
    u32 size = func_ov065_0225f738(p);
    u32 irq = func_01ffa2ec();
    Obj *o = (Obj *)data_ov065_0228e9a0->alloc(size);
    if (o != NULL) {
        func_02115fb4(o, 0, size);
        func_ov065_0225f634(o, p);
        func_ov065_02260f94(o);
    }
    func_01ffa3d4(irq);
    return o;
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

u32 func_ov065_0225f718(Unk_ov065_0225f5c8_T *t)
{
    u32 a = func_ov065_02260ed8(t->unk_03 << 2);
    return a + func_ov065_02260ed8(t->unk_00);
}

u8 *func_ov065_0225f634(Obj *o, Unk_ov065_0225f634_Params *p)
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

u32 func_ov065_0225f5c8(void *a, void *b, Unk_ov065_0225f5c8_T *c)
{
    u32 r = (u32)a + func_ov065_0225f718(c);
    func_021142dc(b, a, c->unk_03);
    func_0211450c((u8 *)b + 0xe0);
    func_02113a70((u8 *)b + 0x20, (void *)func_ov065_0225f378, b, (void *)r, c->unk_00, c->unk_02);
    func_0211366c((u8 *)b + 0x20);
    return r;
}
}

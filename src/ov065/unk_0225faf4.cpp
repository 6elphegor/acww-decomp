// mwcc-flags: -O4,p
#include "types.h"

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

struct Unk_ov065_022603bc_Rx {
    u8 pad_00[0x102];
    u16 unk_102;
    u8 pad_104[4];
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
    Unk_ov065_022603bc_Rx *rx;
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
typedef Unk_ov065_022603bc_Rx Rx;

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

struct Unk_ov065_0225ff64_Job {
    u32 unk_00;
    Sess *sess;
    u8 pad_08[8];
    u8 *unk_10;
    u32 unk_14;
    u16 *unk_18;
    u32 *unk_1c;
};

struct Unk_ov065_022603bc_Job {
    u32 unk_00;
    Sess *sess;
    u8 pad_08[8];
    u8 *unk_10;
    s32 unk_14;
    u8 *unk_18;
    s32 unk_1c;
    u16 unk_20;
    u8 pad_22[2];
    u16 unk_24;
    u16 unk_26;
    void *unk_28;
};

typedef Unk_ov065_0225faf4_Job Job;
typedef Unk_ov065_0225ff64_Job RJob;
typedef Unk_ov065_022603bc_Job WJob;

struct Unk_ov065_0225fd18_Counters {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {
extern s32 data_ov065_0228b3c0;
extern Unk_ov065_0225faf4_Alloc *data_ov065_0228e9a0;
extern Unk_ov065_0225fd18_Counters data_ov065_0228ea08;

u32 func_01ffa2ec(...);
void func_01ffa3d4(u32 v);
s32 func_01ffa3b4();
void func_021132e0(s32 v);
void func_02113720(void *q);
void func_021136a0(void *q);
s32 func_02114354(void *m);
void func_02114410(void *m);
void func_02114480(void *m);
void func_02116048(const void *src, void *dst, u32 n);

s32 func_ov065_0225f404(Sess *s, void *m);
u32 func_ov065_0225f4d4(void *fn, void *s, s32 idx);
s32 func_ov065_02260f04(Sess *s);
void func_ov065_022629d0(u16 a, u16 b, void *c);
s32 func_ov065_02262874();
void func_ov065_02262640(s32 n);
u8 *func_ov065_022626b8(u32 *out);
s32 func_ov065_02262334(u8 *p, s32 n);

s32 func_ov065_0225faf4(Job *j);
s32 func_ov065_0225fb68(Sess *s);
s32 func_ov065_0225fbbc(Sess *s, u16 a, u32 b);
s32 func_ov065_0225fc98(Sess *s, u16 a);
s32 func_ov065_0225fd18(void *data, u32 len, Sess *s);
s32 func_ov065_0225fdf0(Sess *s, u8 *dst, s32 max, u16 *o1, u32 *o2, s32 block);
s32 func_ov065_0225fee0(Sess *s);
s32 func_ov065_0225ff10(Job *j);
s32 func_ov065_0225ff1c(Sess *s);
s32 func_ov065_0225ff64(RJob *j);
s32 func_ov065_0226003c(Sess *s, u8 *a, s32 b, u16 *c, u32 *d);
u8 *func_ov065_02260070(Sess *s, s32 *outlen, u16 *a, u16 *b, u32 *c);
s32 func_ov065_022600c0(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb);
s32 func_ov065_02260188(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e);
s32 func_ov065_022601dc(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e, s32 f);
s32 func_ov065_02260254(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e);
s32 func_ov065_02260360(u8 *buf, s32 n, WJob *j);
s32 func_ov065_022603bc(WJob *j);
}

static inline Unk_ov065_0225faf4_Job *AllocJob(void *fn, Sess *s, s32 i)
{
    return (Unk_ov065_0225faf4_Job *)func_ov065_0225f4d4(fn, s, i);
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

s32 func_ov065_0225fb68(Sess *s)
{
    u32 r0 = func_ov065_0225f4d4((void *)func_ov065_0225faf4, s, s->unk_72);
    Job *j = (Job *)r0;
    if (j == NULL) {
        return -0x21;
    }
    j->unk_10 = s->unk_74;
    j->unk_12 = s->unk_76;
    j->unk_14 = (void *)s->unk_78;
    s->flags |= 2;
    return func_ov065_0225f404(s, j);
}

s32 func_ov065_0225fbbc(Sess *s, u16 a, u32 b)
{
    s32 r;
    if (func_ov065_02260f04(s) != 0 || (s->flags & 8) != 0) {
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

s32 func_ov065_0225fc98(Sess *s, u16 a)
{
    if (func_ov065_02260f04(s) != 0) {
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

s32 func_ov065_0225fdf0(Sess *s, u8 *dst, s32 max, u16 *o1, u32 *o2, s32 block)
{
    u32 irq;
    s32 err;
    Ctx *c = s->ctx;
    Node *n;

    irq = func_01ffa2ec(c->head);
    n = c->head;
    while (n == NULL) {
        if (block == 0) {
            err = -6;
            break;
        }
        func_02113720(c->queue);
        if (func_ov065_02260f04(s) != 0 || !IsValid(s)) {
            err = -0x37 - 1;
            break;
        }
        n = c->head;
    }
    if (n != NULL) {
        if (max > n->len) {
            max = n->len;
        }
        func_02116048(n->data, dst, max);
        if (o1 != NULL) {
            *o1 = n->unk_06;
        }
        if (o2 != NULL) {
            *o2 = n->unk_08;
        }
        err = n->len;
        if (c->lock == 0) {
            c->head = n->next;
            if (n->next == NULL) {
                c->tail = NULL;
            }
            data_ov065_0228e9a0->free(n);
            c->used = c->used - err;
        }
    }
    func_01ffa3d4(irq);
    return err;
}

s32 func_ov065_0225fee0(Sess *s)
{
    Ctx *c = s->ctx;
    u32 irq = func_01ffa2ec();
    s32 v = c->pos;
    if (v != 0) {
        c->pos = 0;
        func_ov065_02262640(v);
    }
    func_01ffa3d4(irq);
    return v;
}

s32 func_ov065_0225ff10(Job *j)
{
    return func_ov065_0225fee0(j->sess);
}

s32 func_ov065_0225ff1c(Sess *s)
{
    Ctx *c = s->ctx;
    if (c->pos < c->limit) {
        return 0;
    }
    Job *j = AllocJob((void *)func_ov065_0225ff10, s, 0);
    if (j == NULL) {
        return -0x21;
    }
    return func_ov065_0225f404(s, j);
}

s32 func_ov065_0225ff64(RJob *j)
{
    Sess *s = j->sess;
    Ctx *c = s->ctx;
    u8 *dst = j->unk_10;
    u32 n = j->unk_14;
    u16 *pa = j->unk_18;
    u32 *pb = j->unk_1c;
    s32 pos = c->pos;
    u8 *src;
    u32 x;

    for (;;) {
        src = func_ov065_022626b8(&x);
        if (src == NULL) {
            break;
        }
        if ((s32)(x - pos) > 0) {
            break;
        }
        if (IsIdle(s)) {
            if (s->unk_08 != 4) {
                src = NULL;
                break;
            }
        }
        func_021132e0(10);
    }
    if (s->state == 4) {
        if (src == NULL) {
            return 0;
        }
        if (n > x) {
            n = x;
        }
        func_02116048(src, dst, n);
        func_ov065_02262640(n);
        return n;
    }
    if (src != NULL) {
        pos = func_ov065_022600c0(s, dst, n, pa, pb);
    } else {
        pos = 0;
    }
    if (pos <= 0) {
        return pos;
    }
    if (c->pos >= c->limit) {
        func_ov065_0225fee0(s);
    }
    return pos;
}

s32 func_ov065_0226003c(Sess *s, u8 *a, s32 b, u16 *c, u32 *d)
{
    RJob *j = (RJob *)AllocJob((void *)func_ov065_0225ff64, s, 1);
    j->unk_10 = a;
    j->unk_14 = b;
    j->unk_18 = c;
    j->unk_1c = d;
    return func_ov065_0225f404(s, j);
}

u8 *func_ov065_02260070(Sess *s, s32 *outlen, u16 *a, u16 *b, u32 *c)
{
    Ctx *ctx = s->ctx;
    Sess *e = ctx->cur;
    s32 pos = ctx->pos;
    s32 d = e->unk_44 - pos;
    if (d >= 0) {
        *a = e->unk_0a;
        *b = e->unk_18;
        *c = e->unk_1c;
        *outlen = d;
        if (d == 0 && e->unk_08 != 4) {
            return NULL;
        }
    } else {
        *outlen = -1;
        return NULL;
    }
    return e->unk_40 + pos;
}

s32 func_ov065_022600c0(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb)
{
    u32 irq = func_01ffa2ec();
    u16 v[2];
    s32 outlen;
    u32 c;
    s32 r;
    u8 *src;

    src = func_ov065_02260070(s, &outlen, &v[0], &v[1], &c);
    if (src != NULL) {
        r = outlen;
        if (r == 0) {
            r = -6;
        } else {
            if (n > r) {
                n = r;
            }
            if (IsIdle(s)) {
                r = n;
            }
            func_02116048(src, buf, n);
            if (s->ctx->lock == 0) {
                s->ctx->pos = s->ctx->pos + r;
            }
        }
    } else {
        if (outlen == 0) {
            r = 0;
        } else {
            r = -0x1c;
        }
        s->flags &= ~6;
    }
    if (r >= 0) {
        if (pa != NULL && pb != NULL) {
            *pa = v[1];
            *pb = c;
        }
        if (s->unk_74 == 0) {
            s->unk_74 = v[0];
        }
    }
    func_01ffa3d4(irq);
    return r;
}

s32 func_ov065_02260188(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e)
{
    s32 r;
    if (s->state == 4) {
        return func_ov065_0226003c(s, buf, n, pa, pb);
    }
    r = func_ov065_022600c0(s, buf, n, pa, pb);
    if (r == -6 && e == 1) {
        r = func_ov065_0226003c(s, buf, n, pa, pb);
    }
    return r;
}

s32 func_ov065_022601dc(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e, s32 f)
{
    Ctx *c = s->ctx;
    BOOL lock;
    s8 saved;
    s32 res;

    if ((f & 2) && c) {
        lock = TRUE;
    } else {
        lock = FALSE;
    }
    if (lock) {
        saved = c->lock;
        c->lock = 1;
    }
    if (s->state == 1) {
        res = func_ov065_0225fdf0(s, buf, n, pa, pb, e);
    } else {
        res = func_ov065_02260188(s, buf, n, pa, pb, e);
        if (res >= 0) {
            func_ov065_0225ff1c(s);
        }
    }
    if (lock) {
        c->lock = saved;
    }
    return res;
}

s32 func_ov065_02260254(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e)
{
    s32 blk;
    s32 r;
    Ctx *c;

    if (func_ov065_02260f04(s) != 0) {
        return -0x1c;
    }
    if ((e & 4) || s->unk_72 == 0) {
        if (s->state == 4) {
            return -0x1c;
        }
        blk = 0;
    } else {
        if (func_01ffa3b4() == 0x12) {
            return -0x1c;
        }
        blk = 1;
    }
    if (!IsValid(s)) {
        return -0x27;
    }
    if (IsIdle(s)) {
        if (!(s->flags & 4) || (s->flags & 8)) {
            return -0x38;
        }
    }
    c = s->ctx;
    if (blk == 0) {
        if (func_02114354(c->mutex) == 0) {
            return -6;
        }
    } else {
        func_02114480(c->mutex);
    }
    r = func_ov065_022601dc(s, buf, n, pa, pb, blk, e);
    func_02114410(c->mutex);
    return r;
}

s32 func_ov065_02260360(u8 *buf, s32 n, WJob *j)
{
    s32 a = j->unk_14;
    s32 b = j->unk_1c;
    if (a > n) {
        a = n;
        b = 0;
    } else if (b > n - a) {
        b = n - a;
    }
    if (a > 0) {
        func_02116048(j->unk_10, buf, a);
        j->unk_10 += a;
        j->unk_14 -= a;
    }
    if (b > 0) {
        func_02116048(j->unk_18, buf + a, b);
        j->unk_18 += b;
        j->unk_1c -= b;
    }
    return a + b;
}

s32 func_ov065_022603bc(WJob *j)
{
    Sess *s = j->sess;
    Rx *rx = s->rx;
    u8 *buf;
    s32 r = 0;
    s32 off;
    s32 room;
    s32 k;
    s32 m;

    if (!IsIdle(s) || (s->flags & 4)) {
        if (j->unk_28 != NULL) {
            func_ov065_022629d0(j->unk_24, j->unk_26, j->unk_28);
        }
        if (IsIdle(s)) {
            off = 0x36;
        } else {
            off = 0x2a;
        }
        buf = s->unk_4c + off;
        room = s->unk_48 - off;
        for (;;) {
            k = func_ov065_02260360(buf, room, j);
            if (k <= 0) {
                break;
            }
            m = func_ov065_02262334(buf, k);
            if (m > 0) {
                goto addm;
            }
            if (IsIdle(s)) {
                s->flags &= ~0xe;
            }
            r = -0x4c;
            break;
        addm:
            r += m;
        }
    } else {
        r = -0x4c;
    }
    rx->unk_102 = j->unk_20;
    func_021136a0((u8 *)rx + 0x104);
    return r;
}

}

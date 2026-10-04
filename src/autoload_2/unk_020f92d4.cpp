// mwcc-flags: -nothumb -O4,p
// G013a: autoload_2 0x020f92d4-0x020fa0f4 (9 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ names, nothing defined but the functions.
// SPL-style particle manager (continued from G011b): resource file loader (func_020f92d4: counts + texture table), manager creation (SPL_Init),
// file-read callbacks (f9620/f9658), emitter draw dispatch (f969c, f9714, f97d0) and the per-emitter simulation step (spl_calc).
#include "types.h"
#include "game/Vec3.h"
#include "gfx/SplManager.h"
#include "gfx/SplRes.h"
#include "gfx/SplEmitterViews.h"
#include "gfx/VecFx32.h"
#include "gfx/SplTex.h"
#include "gfx/SplViews.h"
#include "gfx/Pt.h"
#include "gfx/SplNode.h"







struct Res {
    HdrW *p0;
    u8 p4[0x10];
    Blk14 *p14;
};




extern "C" {
void *MI_CpuFill8(void *p, u32 v, u32 n);
void spl_push_front(void *list, void *e);
void spl_set_tex(void *p);
void spl_set_tex_dummy(void *p);
void spl_gen_ptcl(void *e, void *l);
void sDrawChild(Pm *m, u32 a);
void func_020f97d0(Pm *m, u32 a);
void func_020fbad0(Mc *m, Node *n, u32 a);
void func_020fac28(Mc *m, Node *n, u32 a);
void func_020fbf94(Mc *m, Node *n, u32 a);
void func_020fb378(Mc *m, Node *n, u32 a);
}













typedef s32 (*PosCb)(Vec3 *, Vec3);
typedef void (*SetFn)(s32, s32, s32, s32);
typedef void (*MkFn)(s32, s32, Mt *);

extern "C" {
extern s16 data_02135f44[];
extern MkFn data_0213bb9c[];
extern SetFn data_0213bb94[];
void MTX_Scale43_(Mt *m, s32 x, s32 y, s32 z);
void MTX_RotX43_(Mt *m, s32 s, s32 c);
void MTX_Concat43(Mt *a, Mt *b, Mt *ab);
void G3_MultMtx43(Mt *m);
void G3_LoadMtx43(Mt *m);
}


static inline s32 FxMul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}
extern "C" {
void func_020fa488(Mg2 *m, Nd *p, PosCb cb);
void func_020fa858(Mg2 *m, Nd *p, PosCb cb);
}


extern "C" {
extern u32 (*data_0213bc18)(u32, u32, u32);
extern u32 (*data_0213bc10)(u32, u32, u32);
}

typedef void (*TexFn)(void *);
typedef void (*DrawFn)(Mc *, Node *, u32);

















typedef void (*FldFn)(Pt *, RU *, u32);


extern "C" {
void spl_scl_in_out(Pt *, RU *, u32);
void spl_clr_in_out(Pt *, RU *, u32);
void spl_alp_in_out(Pt *, RU *, u32);
void spl_tex_ptn_anm(Pt *, RU *, u32);
void spl_chld_scl_out(Pt *, RU *, u32);
void spl_chld_alp_out(Pt *, RU *, u32);
void func_020fc6bc(Pt *, EU *, void *);
void spl_gen_ptcl(void *, void *);
u32 func_02133150x(void);
Pt *spl_del(void *, Pt *);
void spl_push_front(void *, void *);
}

typedef void (*IFn)(void *, Pt *, s32 *, EU *);

extern "C" void spl_calc(MU *m, EU *e) {
    Pt *next;
    RU *res = e->res;
    HdrP *hp = res->p0;
    B14 *b14 = res->p14;
    HdrU h = *(HdrU *)hp;
    s32 drag = hp->c66 + 384;
    Pt *p;
    s32 i;
    s32 n = 0;
    s32 cnt = res->h1c;
    FEnt arr[4];
    FEnt arr2[4];
    u8 fr[2];
    s32 acc[3];
    if (e->cb) e->cb(e, 0);
    if (hp->h56 == 0 || e->h56 < hp->h56) {
        if (e->h56 % e->c104 == 0 && !e->fl.b0 && !e->fl.b1 && e->fl.b4) spl_gen_ptcl(e, (u8 *)m + 20);
    }
    if (h.b8) {
        arr[n].fn = spl_scl_in_out;
        arr[n++].arg = res->p4->b0;

    }
    if (h.b9) {
        B8 *q = res->p8;
        if (q->b0 == 0) {
            arr[n].fn = spl_clr_in_out;
            arr[n++].arg = q->b1;

        }
    }
    if (h.b10) {
        arr[n].fn = spl_alp_in_out;
        arr[n++].arg = res->pc->b8;

    }
    if (h.b11) {
        B10 *q = res->p10;
        if (q->b16 == 0) {
            arr[n].fn = spl_tex_ptn_anm;
            arr[n++].arg = q->b17;

        }
    }
    p = e->l8;
    if (p != 0) {
        do {
            next = p->next;
            fr[0] = (p->h42 * p->h38) >> 8;
            fr[1] = p->c45 + ((p->h40 * p->h38) >> 8);
            for (i = 0; i < n; i++) arr[i].fn(p, res, fr[arr[i].arg]);
            acc[0] = acc[1] = acc[2] = 0;
            if (h.b15) {
                p->v56 = e->v32;
            }
            for (i = 0; i < cnt; i++) ((IFn)res->p18[i].fn)(res->p18[i].p4, p, acc, e);
            p->h32 = p->h32 + p->s34;
            p->w20 = (p->w20 * drag) >> 9;
            p->w24 = (p->w24 * drag) >> 9;
            p->w28 = (p->w28 * drag) >> 9;
            p->w20 += acc[0];
            p->w24 += acc[1];
            p->w28 += acc[2];
            p->w8 = p->w8 + (p->w20 + e->w44);
            p->w12 = p->w12 + (p->w24 + e->w48);
            p->w16 = p->w16 + (p->w28 + e->w52);
            if (h.b16) {
                s32 d = (p->h38 << 12) - (FxMul(p->h36 << 12, b14->c13 << 12) >> 8);
                if (d >= 0) {
                    if ((d >> 12) % b14->c14 == 0) func_020fc6bc(p, e, (u8 *)m + 20);
                }
            }
            if (((HdrU *)e->res->p0)->b30) {
                p->id46 = (u16)m->b18;
            } else {
                p->id46 = (u16)m->b12;
                m->b12 = m->b12 + 1;
                if (m->b12 > m->b6) m->b12 = m->b0;
            }
            p->h38 = p->h38 + 1;
            if (p->h38 > p->h36) spl_push_front((u8 *)m + 20, spl_del((u8 *)e + 8, p));
            p = next;
        } while (p != 0);
    }
    if (h.b16) {
        n = 0;
        if (b14->b1) {
            arr2[n].fn = spl_chld_scl_out;
            arr2[n].arg = n;
            n++;
        }
        if (b14->b2) {
            arr2[n].fn = spl_chld_alp_out;
            arr2[n].arg = 0;
            n++;
        }
        p = e->l16;
        if (!b14->b0) cnt = 0;
        if (p != 0) {
            do {
                next = p->next;
                fr[0] = (p->h38 << 8) / p->h36;
                for (i = 0; i < n; i++) arr2[i].fn(p, res, fr[0]);
                acc[0] = acc[1] = acc[2] = 0;
                if (b14->b5) {
                    p->v56 = e->v32;
                }
                for (i = 0; i < cnt; i++) ((IFn)res->p18[i].fn)(res->p18[i].p4, p, acc, e);
                p->h32 = p->h32 + p->s34;
                p->w20 = (p->w20 * drag) >> 9;
                p->w24 = (p->w24 * drag) >> 9;
                p->w28 = (p->w28 * drag) >> 9;
                p->w20 += acc[0];
                p->w24 += acc[1];
                p->w28 += acc[2];
                p->w8 = p->w8 + (p->w20 + e->w44);
                p->w12 = p->w12 + (p->w24 + e->w48);
                p->w16 = p->w16 + (p->w28 + e->w52);
                if (((HdrU *)e->res->p0)->b31) {
                    p->id46 = (u16)m->b18;
                } else {
                    p->id46 = (u16)m->b12;
                    m->b12 = m->b12 + 1;
                    if (m->b12 > m->b6) m->b12 = m->b0;
                }
                p->h38 = p->h38 + 1;
                if (p->h38 > p->h36) spl_push_front((u8 *)m + 20, spl_del((u8 *)e + 16, p));
                p = next;
            } while (p != 0);
        }
    }
    e->h56 = e->h56 + 1;
    if (e->cb) e->cb(e, 1);
}

extern "C" void func_020f97d0(Pm *mp, u32 a) {
    Mc *m = (Mc *)mp;
    Em *cur = m->cur;
    HdrW *h = cur->res->p0;
    TexFn tf;
    Node *n;
    DrawFn fn = 0;
    spl_set_tex((u8 *)m->tex + h->c43 * 20);
    switch (h->k4) {
        case 0:
            fn = func_020fbf94;
            break;
        case 1:
            fn = func_020fb378;
            break;
        case 2:
            fn = (DrawFn)func_020fa858;
            break;
    }
    tf = h->b11 ? spl_set_tex : spl_set_tex_dummy;
    n = cur->l8;
    if (n == 0) return;
    do {
        tf((u8 *)m->tex + n->c2c * 20);
        fn(m, n, a);
        n = n->next;
    } while (n != 0);
}

extern "C" void sDrawChild(Pm *mp, u32 a) {
    Mc *m = (Mc *)mp;
    Em *cur = m->cur;
    Res *res = cur->res;
    DrawFn fn = 0;
    Node *n;
    if (!res->p0->b16) return;
    spl_set_tex((u8 *)m->tex + res->p14->c15 * 20);
    switch (res->p14->k7) {
        case 0:
            fn = func_020fbad0;
            break;
        case 1:
            fn = func_020fac28;
            break;
        case 2:
            fn = (DrawFn)func_020fa488;
            break;
    }
    n = cur->l16;
    if (n == 0) return;
    do {
        fn(m, n, a);
        n = n->next;
    } while (n != 0);
}

extern "C" void func_020f969c(Pm *m, u32 a) {
    Mc *mm = (Mc *)m;
    HdrW *ri = mm->cur->res->p0;
    if (ri->b21) {
        sDrawChild(m, a);
        if (ri->b22) return;
        func_020f97d0(m, a);
    } else {
        if (!ri->b22) func_020f97d0(m, a);
        sDrawChild(m, a);
    }
}

extern "C" void func_020f9690(void *e, void *l) {
    spl_gen_ptcl(e, l);
}

extern "C" u32 sAllocTex(u32 a, u32 b) {
    u32 r = data_0213bc10(a, b, 0);
    return (r & 0xffff) << 3;
}

extern "C" u32 sAllocTexPalette(u32 a, u32 b) {
    u32 r = data_0213bc18(a, b, 0);
    return (r & 0xffff) << 3;
}

extern "C" PmNew *SPL_Init(void *(*alloc)(u32), s32 n1, s32 n2, u32 a3, u16 a4, u16 a5) {
    PmNew *m = (PmNew *)alloc(60);
    s32 i;
    u8 *p;
    MI_CpuFill8(m, 0, 60);
    m->h40 = n1;
    m->h42 = n2;
    m->b0 = a4;
    m->b6 = a5;
    m->b12 = m->b0;
    m->b18 = a3;
    *((u8 *)m + 0x2f) = 0;
    m->alloc = alloc;
    m->w8 = 0;
    m->w16 = 0;
    m->w24 = 0;
    m->w4 = 0;
    m->w12 = 0;
    m->w20 = 0;
    m->w48 = 0;
    p = (u8 *)alloc(n1 * 132);
    MI_CpuFill8(p, 0, n1 * 132);
    for (i = 0; i < n1; i++) {
        spl_push_front(&m->w12, p);
        p += 132;
    }
    p = (u8 *)alloc(n2 * 68);
    MI_CpuFill8(p, 0, n2 * 68);
    for (i = 0; i < n2; i++) {
        spl_push_front(&m->w20, p);
        p += 68;
    }
    m->w28 = 0;
    m->w32 = 0;
    m->h38 = 0;
    m->h36 = m->h38;
    return m;
}

extern "C" void func_020f92d4(Pm *self, u8 *base) {
    s32 i;
    u32 off = 32;
    self->h24 = *(u16 *)(base + 8);
    self->h26 = *(u16 *)(base + 10);
    for (i = 0; i < self->h24; i++) {
        HdrBits h = *(HdrBits *)(base + off);
        off += 0x54;
        if (h.b8) off += 12;
        if (h.b9) off += 12;
        if (h.b10) off += 8;
        if (h.b11) off += 12;
        if (h.b16) off += 20;
        {
            u32 cnt = h.b24 + h.b25 + h.b26 + h.b27 + h.b28 + h.b29;
            if (cnt != 0) {
                if (h.b24) off += 8;
                if (h.b25) off += 8;
                if (h.b26) off += 16;
                if (h.b27) off += 4;
                if (h.b28) off += 8;
                if (h.b29) off += 16;
            }
        }
    }
    self->tex = (TexEnt *)self->alloc(self->h26 * 20);
    MI_CpuFill8(self->tex, 0, self->h26 * 20);
    {
        for (i = 0; i < self->h26; i++) {
            TexEnt *t = &self->tex[i];
            Hdr20 *e = (Hdr20 *)(base + off);
            t->e = e;
            t->h16 = 1 << (((e->w4 << 24) >> 28) + 3);
            t->h18 = 1 << (((e->w4 << 20) >> 28) + 3);
            t->w12 = e->w4;
            off += e->w1c;
        }
    }
}

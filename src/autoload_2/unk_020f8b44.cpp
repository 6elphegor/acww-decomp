// mwcc-flags: -nothumb -O4,p
// RC_020f8b44 (companion of RC_020f7a5c): G011b without its first ten functions (the Rb state machine 0x020f86c0-0x020f8b44, now in the BGM file RC_020f7a5c).
// autoload_2 0x020f8b44-0x020f92d4 (10 functions), PARTIAL, code unchanged from G011b: particle manager (emit, update);
// 0x020f8e70-0x020f9018: resource table loaders (callbacks) and resource layout builder (SPL_Load).
#include "types.h"
#include "snd/SndBgmViews.h"
#include "gfx/SplEmitterViews.h"
#include "snd/SndBgmHd.h"



struct Fo;
// view of gSndMgr (sound manager of G006): +0 current object, +0x2c Q*, +0x3c Hd* (same word as gSndBgmHandle)
struct Mg {
    Fo *cur;
    u8 p4[0x28];
    Q *q;
    u8 p30[0xc];
    Hd *h;
};

// object with the sub-struct at +0x14
struct Fo {
    u32 *vptr;
    u32 w4;
    u8 pad8[0xc];
    s8 c14;
    s8 c15;
    s8 c16;
    s8 c17;
    s8 c18;
    u8 pad19[3];
    s32 w1c;
    s32 w20;
    s32 w24;
    u8 c28;
    u8 c29;
    u8 c2a;
    u8 pad2b;
    s16 s2c;
    u8 c2e;
};


// SPL-style particle manager: ResInfo = emitter resource header, Entry = live emitter, Mgr = manager
struct ResInfo {
    u32 pad0 : 14;
    u32 f14 : 1;
    u32 pad15 : 17;
    u32 w4;
    u32 w8;
    u32 wc;
    u8 pad10[0x22];
    u16 h32;
    u8 pad34[4];
    u16 h38;
};

struct Res {
    ResInfo *p0;
};

struct Fl {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 pad : 27;
};

struct Fx3 {
    s32 x;
    s32 y;
    s32 z;
};

struct Entry {
    Entry *next;
    u8 p4[8];
    u32 w12;
    u32 w16;
    u32 w20;
    Res *res;
    Fl fl;
    s32 px;
    s32 py;
    s32 pz;
    u8 p2c[0xc];
    u16 h38;
    u8 p3a[0x2e];
    u32 pad68a : 16;
    u32 f16 : 3;
    u32 pad68b : 13;
};

struct Mgr {
    u32 w0;
    Entry *act;
    u32 w8;
    Entry *fr;
    u8 p10[0xc];
    u8 *tab;
    u8 p20[0x14];
    Entry *cur;
    u32 w38;
};

// resource-table entries (texture / palette loader, callbacks supplied by the caller)
struct EBits {
    u32 kind : 4;
    u32 pad : 13;
    u32 isref : 1;
    u32 idx : 8;
    u32 pad2 : 6;
};

struct SEnt {
    u32 w0;
    EBits b;
    u32 w8;
    u32 wc;
    u32 w16;
};

struct Slot {
    SEnt *e;
    u32 w4;
    u32 w8;
    u32 w12;
    u32 w16;
};

typedef u32 (*Cb)(u32, u32);

struct Fp {
    void *(*alloc)(u32);
    u8 p4[0x18];
    u8 *p1c;
    Slot *tab;
    u16 h24;
    u16 h26;
};


struct Item8 {
    void *fn;
    u8 *p4;
};

struct Pool32 {
    u8 *p0;
    u8 *p4;
    u8 *p8;
    u8 *pc;
    u8 *p10;
    u8 *p14;
    Item8 *p18;
    u16 h1c;
    u16 pad1e;
};

extern "C" {
extern Mg gSndMgr;
extern s16 data_021f5c30;
extern s16 data_021f5c34;
void func_0210a024(void *p, u32 sel, void *out);
void func_0210a008(u32 sel, void *out);
void NNS_SndArcPlayerStartSeq(void *p, u32 v);
void Snd_StopHandle(void *p, u32 v);
void Snd_InitHandle(void *p);
void NNS_SndHandleReleaseSeq(void *p);
void func_02109fd0(void *p, u32 a, s32 b);
void BgmSyncSnd_ReadHeader(Rb *r);
void BgmSyncSnd_ReadVars(Rb *r);
void BgmSyncSnd_SelectStep(Rb *r);
void BgmSyncSnd_UpdatePosition(Rb *r, void *arg);
s32 BgmSyncSnd_CalcPhase(Rb *r);
void BgmSyncSnd_SetState(Rb *r, u32 mode);
void func_020f9690(Entry *e, void *list);
void spl_init(Entry *e, void *tab, void *v);
Entry *spl_pop_front(void *list);
void spl_push_front(void *list, Entry *e);
Entry *spl_del(void *list, Entry *e);
void func_020f969c(Mgr *m, u32 a);
void spl_calc(Mgr *m, Entry *e);
extern u16 data_021f5c38;
void spl_calc_gravity(void);
void spl_calc_random(void);
void spl_calc_magnet(void);
void spl_calc_spin(void);
void spl_calc_scfield(void);
void spl_calc_convergence(void);
void GX_BeginLoadTexPltt(void);
void GX_LoadTexPltt(void *dst, u32 a, u32 n);
void GX_EndLoadTexPltt(void);
void GX_BeginLoadTex(void);
void GX_LoadTex(void *dst, u32 a, u32 n);
void GX_EndLoadTex(void);
s32 SPL_LoadTexPlttByCallbackFunction(Fp *self, Cb cb);
u32 sAllocTexPalette(u32 a, u32 b);
s32 SPL_LoadTexByCallbackFunction(Fp *self, Cb cb);
u32 sAllocTex(u32 a, u32 b);
void *MI_CpuFill8(void *p, u32 v, u32 n);
}

static inline BOOL nz(u32 v) { return v != 0; }

extern "C" void SPL_Load(Fp *self, u8 *base) {
    s32 i;
    u32 off = 0;
    self->p1c = (u8 *)self->alloc(self->h24 << 5);
    MI_CpuFill8(self->p1c, 0, self->h24 << 5);
    for (i = 0; i < self->h24; i++) {
        Pool32 *p = (Pool32 *)(self->p1c + i * 32);
        HdrBits h;
        p->p0 = base + off;
        off += 0x54;
        h = *(HdrBits *)p->p0;
        if (h.b8) {
            p->p4 = base + off;
            off += 12;
        } else {
            p->p4 = 0;
        }
        if (h.b9) {
            p->p8 = base + off;
            off += 12;
        } else {
            p->p8 = 0;
        }
        if (h.b10) {
            p->pc = base + off;
            off += 8;
        } else {
            p->pc = 0;
        }
        if (h.b11) {
            p->p10 = base + off;
            off += 12;
        } else {
            p->p10 = 0;
        }
        if (h.b16) {
            p->p14 = base + off;
            off += 20;
        } else {
            p->p14 = 0;
        }
        p->h1c = h.b24 + h.b25 + h.b26 + h.b27 + h.b28 + h.b29;
        if (p->h1c != 0) {
            Item8 *it = (Item8 *)self->alloc(p->h1c << 3);
            p->p18 = it;
            it = p->p18;
            if (h.b24) {
                it->p4 = base + off;
                it->fn = (void *)spl_calc_gravity;
                off += 8;
                it++;
            }
            if (h.b25) {
                it->p4 = base + off;
                it->fn = (void *)spl_calc_random;
                off += 8;
                it++;
            }
            if (h.b26) {
                it->p4 = base + off;
                it->fn = (void *)spl_calc_magnet;
                off += 16;
                it++;
            }
            if (h.b27) {
                it->p4 = base + off;
                it->fn = (void *)spl_calc_spin;
                off += 4;
                it++;
            }
            if (h.b28) {
                it->p4 = base + off;
                it->fn = (void *)spl_calc_scfield;
                off += 8;
                it++;
            }
            if (h.b29) {
                it->p4 = base + off;
                it->fn = (void *)spl_calc_convergence;
                off += 16;
                it++;
            }
        } else {
            p->p18 = 0;
        }
    }
}

extern "C" s32 SPL_LoadTexByCallbackFunction(Fp *self, Cb cb) {
    s32 i;
    GX_BeginLoadTex();
    for (i = 0; i < self->h26; i++) {
        Slot *s = &self->tab[i];
        SEnt *e = s->e;
        if (e->b.isref != 0) {
            s->w4 = self->tab[e->b.idx].w4;
        } else {
            u32 r = cb(e->w8, e->b.kind == 5 ? 1 : 0);
            GX_LoadTex((u8 *)s->e + 32, r, e->w8);
            s->w4 = r;
        }
    }
    GX_EndLoadTex();
    return 1;
}

extern "C" s32 SPL_LoadTexPlttByCallbackFunction(Fp *self, Cb cb) {
    s32 i;
    GX_BeginLoadTexPltt();
    for (i = 0; i < self->h26; i++) {
        Slot *s = &self->tab[i];
        SEnt *e = s->e;
        u32 r = 0;
        if (e->w16 != 0) {
            r = cb(e->w16, e->b.kind == 2 ? 1 : 0);
            GX_LoadTexPltt((u8 *)s->e + e->wc, r, e->w16);
        }
        s->w8 = r;
    }
    GX_EndLoadTexPltt();
    return 1;
}

extern "C" s32 SPL_LoadTexByVRAMManager(Fp *self) {
    return SPL_LoadTexByCallbackFunction(self, sAllocTex);
}

extern "C" s32 SPL_LoadTexPlttByVRAMManager(Fp *self) {
    return SPL_LoadTexPlttByCallbackFunction(self, sAllocTexPalette);
}

extern "C" void SPL_Calc(Mgr *m) {
    Entry *e;
    for (e = m->act; e != 0;) {
        Entry *next;
        ResInfo *ri;
        ri = e->res->p0;
        next = e->next;
        if (e->fl.b4 == 0) {
            if (e->h38 >= ri->h32) {
                e->fl.b4 = 1;
                e->h38 = 0;
            }
        }
        if (e->fl.b2 == 0) {
            u32 t = e->f16;
            if (t == 0 || data_021f5c38 == t - 1) spl_calc(m, e);
        }
        if ((ri->f14 != 0 && ri->h38 != 0 && e->fl.b4 != 0 && e->h38 > ri->h38) || e->fl.b0 != 0) {
            if (e->w12 == 0 && e->w20 == 0) {
                spl_push_front(&m->fr, spl_del(&m->act, e));
            }
        }
        e = next;
    }
    data_021f5c38 += 1;
    if (data_021f5c38 > 1) data_021f5c38 = 0;
}

extern "C" void func_020f8cb8(Mgr *m, u32 a1, u32 a2) {
    Entry *e;
    *(vu16 *)0x04000060 = (u16)((*(vu16 *)0x04000060 & ~0x3000) | 8);
    m->w38 = a1;
    e = m->act;
    if (e == 0) return;
    do {
        m->cur = e;
        if (e->fl.b3 == 0) func_020f969c(m, a2);
        e = e->next;
    } while (e != 0);
}

extern "C" Entry *SPL_Create(Mgr *m, s32 idx, void *p) {
    Entry *e = 0;
    if (m->fr != 0) {
        e = spl_pop_front(&m->fr);
        spl_init(e, m->tab + idx * 32, p);
        spl_push_front(&m->act, e);
        if (e->res->p0->f14 != 0) e = 0;
    }
    return e;
}

extern "C" Entry *SPL_CreateWithInitialize(Mgr *m, u32 idx, void (*cb)(Entry *)) {
    Entry *e = 0;
    if (m->fr != 0) {
        Fx3 z = {0, 0, 0};
        e = spl_pop_front(&m->fr);
        spl_init(e, m->tab + idx * 32, &z);
        if (cb != 0) cb(e);
        spl_push_front(&m->act, e);
        if (e->res->p0->f14 != 0) e = 0;
    }
    return e;
}

extern "C" void func_020f8b44(Mgr *m, Entry *e, Fx3 *v) {
    e->px = v->x + ((ResInfo *)e->res->p0)->w4;
    e->py = v->y + e->res->p0->w8;
    e->pz = v->z + e->res->p0->wc;
    func_020f9690(e, (u8 *)m + 20);
}

// ---- file-scope objects (autoload_3 .bss 0x021f5c38-0x021f5c3c)
u16 data_021f5c38;

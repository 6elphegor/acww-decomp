// mwcc-flags: -nothumb -O4,p
#include "types.h"
#include "game/Vec3.h"
#include "gfx/SplManager.h"
#include "gfx/SplRes.h"
#include "gfx/SplEmitterViews.h"
#include "gfx/VecFx32.h"
#include "gfx/SplTex.h"
#include "gfx/SplViews.h"
#include "gfx/Pt.h"







struct Res {
    HdrW *p0;
    u8 p4[0x10];
    Blk14 *p14;
};

struct Node {
    Node *next;
    u8 p4[0x28];
    u8 c2c;
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











struct Nd {
    u8 p0[8];
    s32 w8;
    s32 w12;
    s32 w16;
    u8 p14[12];
    u16 h32;
    u8 p22[12];
    Cbits c46;
    s32 w48;
    s16 s52;
    u16 h54;
    s32 w56;
    s32 w60;
    s32 w64;
};



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

static inline u32 G3_PolygonAttr(u32 light, u32 mode, u32 cull, u32 id, u32 alpha, u32 misc) {
    return *(volatile u32 *)0x040004a4 = light | (mode << 4) | (cull << 6) | (id << 24) | (alpha << 16) | (misc << 8);
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


static inline void G3_TexImageParam(u32 fmt, u32 texgen, u32 s, u32 t, u32 rep, u32 flip, u32 c0, u32 addr) {
    *(volatile u32 *)0x040004a8 = (addr >> 3) | (fmt << 26) | (texgen << 30) | (s << 20) | (t << 23) | (rep << 16) | (flip << 18) | (c0 << 29);
}
static inline void G3_TexPlttBase(u32 addr, u32 fmt) {
    *(volatile u32 *)0x040004ac = addr >> (4 - (fmt == 2 ? 1 : 0));
}
static inline void G3_MtxMode(u32 m) {
    *(volatile u32 *)0x04000440 = m;
}
static inline void G3_Identity(void) {
    *(volatile u32 *)0x04000454 = 0;
}
static inline void G3_Scale(s32 x, s32 y, s32 z) {
    *(volatile u32 *)0x0400046c = x;
    *(volatile u32 *)0x0400046c = y;
    *(volatile u32 *)0x0400046c = z;
}


static inline void G3_Translate(s32 x, s32 y, s32 z) {
    *(volatile u32 *)0x04000470 = x;
    *(volatile u32 *)0x04000470 = y;
    *(volatile u32 *)0x04000470 = z;
}

















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

extern "C" void spl_init(EmI *e, ResB *res, s32 *pos) {
    e->res = res;
    e->w28 = 0;
    e->w32 = pos[0] + e->res->p0->w4;
    e->w36 = pos[1] + e->res->p0->w8;
    e->w40 = pos[2] + e->res->p0->w12;
    e->w44 = e->w48 = e->w52 = 0;
    e->h56 = 0;
    e->h58 = 0;
    e->h60 = *(U16x3 *)&e->res->p0->h28; // three u16 copied as one block
    e->h66 = 0;
    e->w68 = e->res->p0->w20;
    e->w72 = e->res->p0->w24;
    e->w76 = e->res->p0->w36;
    e->w80 = e->res->p0->w40;
    e->w84 = e->res->p0->w44;
    e->h88 = e->res->p0->h58;
    e->h90 = 0x7fff;
    e->c104 = e->res->p0->c64;
    e->c105 = e->res->p0->c65;
    e->f16 = 0;
    e->pad104 = 0;
    e->w92 = 0x80000000;
    e->s96 = 4096 << e->res->p0->s24;
    e->s98 = 4096 << e->res->p0->s26;
    if (e->res->p0->flip0) e->s96 *= -1;
    if (e->res->p0->flip1) e->s98 *= -1;
    if (e->res->p0->b16) {
        e->s100 = 4096 << e->res->p14->s0;
        e->s102 = 4096 << e->res->p14->s2;
        if (e->res->p14->fx) e->s100 *= -1;
        if (e->res->p14->fy) e->s102 *= -1;
    }
    e->w0 = e->w4 = 0;
    e->w8 = e->w16 = 0;
    e->w12 = e->w20 = 0;
    e->w120 = 0;
    e->w124 = 0;
    e->w128 = 0;
}

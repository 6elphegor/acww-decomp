// mwcc-flags: -nothumb -O4,p
#include "types.h"
#include "game/Vec3.h"
#include "gfx/SplManager.h"
#include "gfx/SplRes.h"
#include "gfx/SplEmitterViews.h"
#include "gfx/VecFx32.h"
#include "gfx/SplTex.h"







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


struct Mc {
    u8 p0[0x20];
    TexEnt *tex;
    u8 p24[0x10];
    Em *cur;
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








struct Mt {
    s32 m[12];
};


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

struct Mg2 {
    u8 p0[0x30];
    u32 w48;
    EmI *cur;
    Mt *mt;
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










struct Pt {
    Pt *next;
    u8 p4[4];
    s32 w8;
    s32 w12;
    s32 w16;
    s32 w20;
    s32 w24;
    s32 w28;
    u16 h32;
    s16 s34;
    u16 h36;
    u16 h38;
    u16 h40;
    u16 h42;
    u8 p44;
    u8 c45;
    u16 pad46 : 10;
    u16 id46 : 6;
    u8 p48[8];
    A3 v56;
};


struct ItemU {
    void *fn;
    void *p4;
};




struct MU {
    u8 p0[20];
    void *freelist;
    u8 p18[0x14];
    u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 pad : 8;
};

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

typedef enum { GX_TEXFMT_NONE = 0, GX_TEXFMT_A3I5 = 1, GX_TEXFMT_PLTT4 = 2 } GXTexFmt;
typedef enum { GX_TEXGEN_NONE = 0, GX_TEXGEN_TEXCOORD = 1 } GXTexGen;
typedef enum { GX_TEXSIZE_S8 = 0 } GXTexSizeS;
typedef enum { GX_TEXSIZE_T8 = 0 } GXTexSizeT;
typedef enum { GX_TEXREPEAT_NONE = 0 } GXTexRepeat;
typedef enum { GX_TEXFLIP_NONE = 0 } GXTexFlip;
typedef enum { GX_TEXPLTTCOLOR0_USE = 0 } GXTexPlttColor0;
#define GX_PACK_TEXIMAGE_PARAM(texFmt, texGen, sSize, tSize, repeat, flip, pltt0, addr) \
    ((u32)(((addr) >> 3) | ((texFmt) << 26) | ((texGen) << 30) | ((sSize) << 20) | ((tSize) << 23) | ((repeat) << 16) | ((flip) << 18) | ((pltt0) << 29)))
#define GX_PACK_TEXPLTTBASE_PARAM(addr, texFmt) ((u32)((addr) >> (4 - ((texFmt) == GX_TEXFMT_PLTT4))))
static inline void G3_TexImageParam(GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS sSize, GXTexSizeT tSize, GXTexRepeat repeat, GXTexFlip flip, GXTexPlttColor0 pltt0, u32 addr) {
    *(volatile u32 *)0x040004a8 = GX_PACK_TEXIMAGE_PARAM(texFmt, texGen, sSize, tSize, repeat, flip, pltt0, addr);
}
static inline void G3_TexPlttBase(u32 addr, GXTexFmt texfmt) {
    *(volatile u32 *)0x040004ac = GX_PACK_TEXPLTTBASE_PARAM(addr, texfmt);
}
extern "C" void spl_set_tex(void *p) {
    TexEnt *e = (TexEnt *)p;
    TexBits b = *(TexBits *)&e->w12;
    G3_TexImageParam((GXTexFmt)b.fmt, GX_TEXGEN_TEXCOORD, (GXTexSizeS)b.sizeS, (GXTexSizeT)b.sizeT, (GXTexRepeat)b.rep, (GXTexFlip)b.flip, (GXTexPlttColor0)b.c0, e->w4);
    G3_TexPlttBase(e->w8, (GXTexFmt)b.fmt);
    G3_MtxMode(3);
    G3_Identity();
    G3_Scale(e->h16 << 12, e->h18 << 12, 0);
    G3_MtxMode(1);
}

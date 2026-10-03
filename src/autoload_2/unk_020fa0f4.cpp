// mwcc-flags: -nothumb -O4,p
#include "types.h"

// SPL-style particle manager (continued from G011b): resource header word, bits 24-29 = field types
struct HdrBits {
    u32 pad0 : 8;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 pad12 : 4;
    u32 b16 : 1;
    u32 pad17 : 7;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 pad30 : 2;
};

// texture table entry (20 bytes)
struct TexEnt {
    void *e;
    u32 w4;
    u32 w8;
    u32 w12;
    u16 h16;
    u16 h18;
};

struct Hdr20 {
    u32 w0;
    u32 w4;
    u8 p8[0x14];
    u32 w1c;
};

struct Pm {
    void *(*alloc)(u32);
    u8 p4[0x1c];
    TexEnt *tex;
    u16 h24;
    u16 h26;
};

// resource header (first word flags)
struct HdrW {
    u32 pad0 : 4;
    u32 k4 : 2;
    u32 pad6 : 5;
    u32 b11 : 1;
    u32 pad12 : 4;
    u32 b16 : 1;
    u32 pad17 : 4;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 pad23 : 9;
    u8 p4[0x3f];
    u8 c43;
};

struct Blk14 {
    u16 pad0 : 7;
    u16 k7 : 2;
    u16 pad9 : 7;
    u8 p2[13];
    u8 c15;
};

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

struct Em {
    u8 p0[8];
    Node *l8;
    u8 pc[4];
    Node *l16;
    u8 p14[4];
    Res *res;
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


struct U16x3 {
    u16 v[3];
};

struct H2 {
    u16 a;
    u16 b;
};

// resource header (first part of a resource block)
struct Rh {
    u32 pad0 : 16;
    u32 b16 : 1;
    u32 k17 : 2;
    u32 k19 : 1;
    u32 pad20 : 3;
    u32 b23 : 1;
    u32 pad24 : 8;
    s32 w4;
    s32 w8;
    s32 w12;
    u32 w16;
    u32 w20;
    u32 w24;
    U16x3 h28; // three u16 copied as one block (array member: see notes)
    u16 pad34;
    u32 w36;
    u32 w40;
    u32 w44;
    s16 s48;
    u8 p4a[8];
    u16 h58;
    u8 p5c[4];
    u8 c64;
    u8 c65;
    u8 p66[2];
    u32 pad68a : 24;
    u32 s24 : 2;
    u32 s26 : 2;
    u32 mode : 3;
    u32 pad68b : 1;
    u32 flip0 : 1;
    u32 flip1 : 1;
    u32 pad72 : 30;
    s16 s76;
    s16 s78;
    u8 c80;
};

struct Rb14 {
    u16 pad0 : 9;
    u16 k9 : 2;
    u16 k11 : 1;
    u16 pad12 : 4;
    u8 p2[14];
    u32 s0 : 2;
    u32 s2 : 2;
    u32 fx : 1;
    u32 fy : 1;
    u32 pad : 26;
};

struct ResB {
    Rh *p0;
    u8 p4[0x10];
    Rb14 *p14;
};

struct EmI {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 w12;
    s32 w16;
    s32 w20;
    ResB *res;
    s32 w28;
    s32 w32;
    s32 w36;
    s32 w40;
    s32 w44;
    s32 w48;
    s32 w52;
    u16 h56;
    u16 h58;
    U16x3 h60;
    u16 h66;
    u32 w68;
    u32 w72;
    u32 w76;
    u32 w80;
    u32 w84;
    u16 h88;
    u16 h90;
    u32 w92;
    s16 s96;
    s16 s98;
    s16 s100;
    s16 s102;
    u32 c104 : 8;
    u32 c105 : 8;
    u32 f16 : 3;
    u32 pad104 : 13;
    u8 p108[12];
    u32 w120;
    u32 w124;
    u32 w128;
};


struct Mt {
    s32 m[12];
};

struct Cbits {
    u16 a : 5;
    u16 b : 5;
    u16 id : 6;
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

struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
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

struct PmNew {
    void *(*alloc)(u32);
    u32 w4;
    u32 w8;
    u32 w12;
    u32 w16;
    u32 w20;
    u32 w24;
    u32 w28;
    u32 w32;
    u16 h36;
    u16 h38;
    u16 h40;
    u16 h42;
    u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 pad24 : 8;
    u32 w48;
};

extern "C" {
extern u32 (*data_0213bc18)(u32, u32, u32);
extern u32 (*data_0213bc10)(u32, u32, u32);
}

typedef void (*TexFn)(void *);
typedef void (*DrawFn)(Mc *, Node *, u32);

struct TexBits {
    u32 fmt : 4;
    u32 sizeS : 4;
    u32 sizeT : 4;
    u32 rep : 2;
    u32 flip : 2;
    u32 c0 : 1;
    u32 pad : 15;
};

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

struct A3 {
    s32 a[3];
};

struct V3 {
    s32 x;
    s32 y;
    s32 z;
};

// emitter update (spl_calc): own views of the emitter, particle and resource block
struct HdrU {
    u32 pad0 : 8;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 pad12 : 3;
    u32 b15 : 1;
    u32 b16 : 1;
    u32 pad17 : 13;
    u32 b30 : 1;
    u32 b31 : 1;
};

struct HdrP {
    u8 p0[0x38];
    u16 h56;
    u8 p3a[0x08];
    u8 c66;
};

struct B4 {
    u8 p0[8];
    u16 b0 : 1;
    u16 pad : 15;
};

struct B8 {
    u8 p0[8];
    u16 b0 : 1;
    u16 b1 : 1;
    u16 pad : 14;
};

struct B12 {
    u8 p0[2];
    u16 pad : 8;
    u16 b8 : 1;
    u16 pad2 : 7;
};

struct B10 {
    u8 p0[8];
    u32 pad : 16;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 pad2 : 14;
};

struct B14 {
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 pad : 10;
    u8 p2[11];
    u8 c13;
    u8 c14;
};

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

struct Fi {
    void (*fn)(Pt *, Pt *, s32 *, void *);
};

struct ItemU {
    void *fn;
    void *p4;
};

struct RU {
    HdrP *p0;
    B4 *p4;
    B8 *p8;
    B12 *pc;
    B10 *p10;
    B14 *p14;
    ItemU *p18;
    u16 h1c;
};

struct EFlags {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 pad : 27;
};

struct EU {
    u8 p0[8];
    Pt *l8;
    u8 pc[4];
    Pt *l16;
    u8 p14[4];
    RU *res;
    EFlags fl;
    A3 v32;
    s32 w44;
    s32 w48;
    s32 w52;
    u16 h56;
    u8 p3a[0x2e];
    u8 c104;
    u8 p69[0x0f];
    void (*cb)(EU *, u32);
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

struct FEnt {
    FldFn fn;
    u32 arg;
};

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
    e->h60 = e->res->p0->h28;
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

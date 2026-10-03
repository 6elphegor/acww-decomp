// mwcc-flags: -nothumb -O4,p
// G013c: autoload_2 0x020fa488-0x020fac28 (2 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ names, nothing defined but the functions.
// Particle drawing: the two billboard particle drawers of the SPL-style manager. They write the 3D geometry engine registers (POLYGON_ATTR 0x040004a4,
// MTX_IDENTITY 0x04000454, MTX_TRANS 0x04000470, DIF_AMB 0x04000480) and use the ITCM matrix helpers.
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
void func_020fe3a0(void *list, void *e);
void spl_set_tex(void *p);
void func_020fa398(void *p);
void func_020fc984(void *e, void *l);
void func_020f9714(Pm *m, u32 a);
void func_020f97d0(Pm *m, u32 a);
void func_020fbad0(Mc *m, Node *n, u32 a);
void func_020fac28(Mc *m, Node *n, u32 a);
void func_020fbf94(Mc *m, Node *n, u32 a);
void func_020fb378(Mc *m, Node *n, u32 a);
}


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
    u16 h28;
    u16 h30;
    u16 h32;
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
    u16 h60;
    u16 h62;
    u16 h64;
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


static inline void G3_Translate(s32 x, s32 y, s32 z) {
    *(volatile u32 *)0x04000470 = x;
    *(volatile u32 *)0x04000470 = y;
    *(volatile u32 *)0x04000470 = z;
}

extern "C" void func_020fa858(Mg2 *m, Nd *p, PosCb cb) {
    s32 alpha = (p->c46.a * (p->c46.b + 1)) >> 5;
    Mt mA;
    Mt mB;
    Mt mC;
    Vec3 v;
    Rh *h;
    Mt mD;
    s32 idx;
    s32 x;
    s32 y;
    s32 r;
    u32 t = G3_PolygonAttr(m->w48, 0, 3, p->c46.id, alpha, 0);
    if (alpha == 0) return;
    idx = p->h32 >> 4;
    data_0213bb9c[m->cur->res->p0->k17](data_02135f44[idx * 2], data_02135f44[idx * 2 + 1], &mB);
    y = p->w48;
    x = FxMul(y, m->cur->res->p0->s48);
    switch (m->cur->res->p0->mode) {
        case 0:
            x = FxMul(x, p->s52);
            y = FxMul(y, p->s52);
            break;
        case 1:
            x = FxMul(x, p->s52);
            break;
        case 2:
            y = FxMul(y, p->s52);
            break;
    }
    MTX_Scale43_(&mC, x, y, y);
    MTX_Concat43(&mC, &mB, &mA);
    h = m->cur->res->p0;
    if (h->b23 == 0) {
        v.x = p->w8 + p->w56;
        v.y = p->w12 + p->w60;
        v.z = p->w16 + p->w64;
        r = cb(&v, v);
        G3_LoadMtx43((Mt *)m->mt);
    } else {
        v.x = p->w8 + p->w56 - h->w4;
        v.y = p->w12 + p->w60 - m->cur->res->p0->w8;
        v.z = p->w16 + p->w64 - m->cur->res->p0->w12;
        r = cb(&v, v);
        *(volatile u32 *)0x04000454 = 0;
        G3_Translate(m->cur->res->p0->w4, m->cur->res->p0->w8, m->cur->res->p0->w12);
        G3_MultMtx43((Mt *)m->mt);
    }
    G3_Translate(v.x, v.y, v.z);
    if (m->cur->res->p0->c80 & 0x10) {
        idx = r >> 4;
        MTX_RotX43_(&mD, data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
        G3_MultMtx43(&mD);
    }
    G3_MultMtx43(&mA);
    {
        s32 dd = m->cur->h90;
        s32 cc = p->h54;
        *(volatile u32 *)0x04000480 = (u16)((((cc & 0x1f) * (dd & 0x1f)) >> 5) | (((cc & 0x3e0) * (dd & 0x3e0)) >> 15 << 5) | (((cc & 0x7c00) * (dd & 0x7c00)) >> 25 << 10));
    }
    data_0213bb94[m->cur->res->p0->k19](m->cur->s96, m->cur->s98, m->cur->res->p0->s76, m->cur->res->p0->s78);
}

extern "C" void func_020fa488(Mg2 *m, Nd *p, PosCb cb) {
    s32 alpha = (p->c46.a * (p->c46.b + 1)) >> 5;
    Mt mA;
    Mt mB;
    Mt mC;
    Vec3 v;
    Rh *h;
    Mt mD;
    s32 idx;
    s32 x;
    s32 y;
    s32 r;
    u32 t = G3_PolygonAttr(m->w48, 0, 3, p->c46.id, alpha, 0);
    if (alpha == 0) return;
    idx = p->h32 >> 4;
    data_0213bb9c[m->cur->res->p14->k9](data_02135f44[idx * 2], data_02135f44[idx * 2 + 1], &mB);
    y = p->w48;
    x = FxMul(y, m->cur->res->p0->s48);
    switch (m->cur->res->p0->mode) {
        case 0:
            x = FxMul(x, p->s52);
            y = FxMul(y, p->s52);
            break;
        case 1:
            x = FxMul(x, p->s52);
            break;
        case 2:
            y = FxMul(y, p->s52);
            break;
    }
    MTX_Scale43_(&mC, x, y, y);
    MTX_Concat43(&mB, &mC, &mA);
    h = m->cur->res->p0;
    if (h->b23 == 0) {
        v.x = p->w8 + p->w56;
        v.y = p->w12 + p->w60;
        v.z = p->w16 + p->w64;
        r = cb(&v, v);
        G3_LoadMtx43((Mt *)m->mt);
    } else {
        v.x = p->w8 + p->w56 - h->w4;
        v.y = p->w12 + p->w60 - m->cur->res->p0->w8;
        v.z = p->w16 + p->w64 - m->cur->res->p0->w12;
        r = cb(&v, v);
        *(volatile u32 *)0x04000454 = 0;
        G3_Translate(m->cur->res->p0->w4, m->cur->res->p0->w8, m->cur->res->p0->w12);
        G3_MultMtx43((Mt *)m->mt);
    }
    G3_Translate(v.x, v.y, v.z);
    if (m->cur->res->p0->c80 & 0x10) {
        idx = r >> 4;
        MTX_RotX43_(&mD, data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
        G3_MultMtx43(&mD);
    }
    G3_MultMtx43(&mA);
    {
        s32 dd = m->cur->h90;
        s32 cc = p->h54;
        *(volatile u32 *)0x04000480 = (u16)((((cc & 0x1f) * (dd & 0x1f)) >> 5) | (((cc & 0x3e0) * (dd & 0x3e0)) >> 15 << 5) | (((cc & 0x7c00) * (dd & 0x7c00)) >> 25 << 10));
    }
    data_0213bb94[m->cur->res->p14->k11](m->cur->s100, m->cur->s102, 0, 0);
}

// mwcc-flags: -nothumb -O4,p
// G013a: autoload_2 0x020f92d4-0x020fa0f4 (9 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ names, nothing defined but the functions.
// SPL-style particle manager (continued from G011b): resource file loader (func_020f92d4: counts + texture table), manager creation (func_020f94a8),
// file-read callbacks (f9620/f9658), emitter draw dispatch (f969c, f9714, f97d0) and the per-emitter simulation step (func_020f98ac).
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
void *func_02115fb4(void *p, u32 v, u32 n);
void func_020fe3a0(void *list, void *e);
void func_020fa39c(void *p);
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
void func_01ffb828(Mt *m, s32 x, s32 y, s32 z);
void func_01ffb840(Mt *m, s32 s, s32 c);
void func_01ffb94c(Mt *a, Mt *b, Mt *ab);
void func_02110bcc(Mt *m);
void func_02110be8(Mt *m);
}


static inline s32 FxMul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
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

struct A3 {
    s32 a[3];
};

struct V3 {
    s32 x;
    s32 y;
    s32 z;
};

// emitter update (func_020f98ac): own views of the emitter, particle and resource block
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
void func_020fde58(Pt *, RU *, u32);
void func_020fdc8c(Pt *, RU *, u32);
void func_020fdbb0(Pt *, RU *, u32);
void func_020fdb4c(Pt *, RU *, u32);
void func_020fdb00(Pt *, RU *, u32);
void func_020fdaa8(Pt *, RU *, u32);
void func_020fc6bc(Pt *, EU *, void *);
void func_020fc984(void *, void *);
u32 func_02133150x(void);
Pt *func_020fe2f0(void *, Pt *);
void func_020fe3a0(void *, void *);
}

typedef void (*IFn)(void *, Pt *, s32 *, EU *);

extern "C" void func_020f98ac(MU *m, EU *e) {
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
        if (e->h56 % e->c104 == 0 && !e->fl.b0 && !e->fl.b1 && e->fl.b4) func_020fc984(e, (u8 *)m + 20);
    }
    if (h.b8) {
        arr[n].fn = func_020fde58;
        arr[n++].arg = res->p4->b0;

    }
    if (h.b9) {
        B8 *q = res->p8;
        if (q->b0 == 0) {
            arr[n].fn = func_020fdc8c;
            arr[n++].arg = q->b1;

        }
    }
    if (h.b10) {
        arr[n].fn = func_020fdbb0;
        arr[n++].arg = res->pc->b8;

    }
    if (h.b11) {
        B10 *q = res->p10;
        if (q->b16 == 0) {
            arr[n].fn = func_020fdb4c;
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
            if (p->h38 > p->h36) func_020fe3a0((u8 *)m + 20, func_020fe2f0((u8 *)e + 8, p));
            p = next;
        } while (p != 0);
    }
    if (h.b16) {
        n = 0;
        if (b14->b1) {
            arr2[n].fn = func_020fdb00;
            arr2[n].arg = n;
            n++;
        }
        if (b14->b2) {
            arr2[n].fn = func_020fdaa8;
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
                if (p->h38 > p->h36) func_020fe3a0((u8 *)m + 20, func_020fe2f0((u8 *)e + 16, p));
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
    func_020fa39c((u8 *)m->tex + h->c43 * 20);
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
    tf = h->b11 ? func_020fa39c : func_020fa398;
    n = cur->l8;
    if (n == 0) return;
    do {
        tf((u8 *)m->tex + n->c2c * 20);
        fn(m, n, a);
        n = n->next;
    } while (n != 0);
}

extern "C" void func_020f9714(Pm *mp, u32 a) {
    Mc *m = (Mc *)mp;
    Em *cur = m->cur;
    Res *res = cur->res;
    DrawFn fn = 0;
    Node *n;
    if (!res->p0->b16) return;
    func_020fa39c((u8 *)m->tex + res->p14->c15 * 20);
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
        func_020f9714(m, a);
        if (ri->b22) return;
        func_020f97d0(m, a);
    } else {
        if (!ri->b22) func_020f97d0(m, a);
        func_020f9714(m, a);
    }
}

extern "C" void func_020f9690(void *e, void *l) {
    func_020fc984(e, l);
}

extern "C" u32 func_020f9658(u32 a, u32 b) {
    u32 r = data_0213bc10(a, b, 0);
    return (r & 0xffff) << 3;
}

extern "C" u32 func_020f9620(u32 a, u32 b) {
    u32 r = data_0213bc18(a, b, 0);
    return (r & 0xffff) << 3;
}

extern "C" PmNew *func_020f94a8(void *(*alloc)(u32), s32 n1, s32 n2, u32 a3, u16 a4, u16 a5) {
    PmNew *m = (PmNew *)alloc(60);
    s32 i;
    u8 *p;
    func_02115fb4(m, 0, 60);
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
    func_02115fb4(p, 0, n1 * 132);
    for (i = 0; i < n1; i++) {
        func_020fe3a0(&m->w12, p);
        p += 132;
    }
    p = (u8 *)alloc(n2 * 68);
    func_02115fb4(p, 0, n2 * 68);
    for (i = 0; i < n2; i++) {
        func_020fe3a0(&m->w20, p);
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
    func_02115fb4(self->tex, 0, self->h26 * 20);
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

#include "types.h"

struct Unk_020561d8_Vec { s32 x, y, z; };
struct Unk_020561d8_Mtx { s32 m[9]; };

extern "C" {
s32 func_02057110(void *res);
u32 func_02057100(void *res, u32 x);
void *func_020570b0(void *res, u32 x);
void func_020566bc(void *p);
void func_02056714(void *p);
s32 func_0205668c(void *p, u32 a, u32 b, void *c, void *d);
void *func_02106824(void *p, s32 x);
u32 func_02106300(void *a, void *b);
void *func_021066cc(void *a, s32 i);
void *func_0210629c(void *p);
void *func_020e8608(void *heap, u32 size);
BOOL func_020b8984(void *a, void *b, u32 c, void *d);
void func_020b89c8(void *a);
void func_020b8b08(void *a);
void func_020b8b20(void *a);
void func_01ffb448(void *m);
s32 func_01ffc5a4(s32 a, s32 b);
void func_02115fb4(void *dst, u32 v, u32 n);
void func_01ffc928(void *a, void *b, void *c);
extern void *data_021f482c;
void operator delete(void *p);
void func_020563cc(Unk_020561d8_Vec *v);
}


class Unk_0205614c {
public:
    void *unk_00;
    u8 unk_04[0x1c];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22;
    u8 unk_23;
    u16 unk_24;

    void func_02056070(u32 frame, u8 *p2, void *p3, void *p4);
    BOOL func_02056018();
    void func_02056028(void *a, void *b);
    void func_020560f8();
    BOOL func_0205610c();
    void func_02056124();
    Unk_0205614c *func_0205614c();
};

class Unk_020dbe7c {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u8 unk_14;
    Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~Unk_020dbe7c();
    BOOL func_020565e8(s32 x);
};

class Unk_020dbe5c : public Unk_020dbe7c {
public:
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u16 unk_24;
    u8 unk_26;
    Unk_0205614c *unk_28;

    Unk_020dbe5c();
    virtual ~Unk_020dbe5c();
    void func_02055d18();
    BOOL func_02055d60(s32 unused, u32 x);
    void func_02055df0();
    void func_02055e38();
    void func_02055e4c(void *r1, void *r2, u32 r3, u8 p5, void *p6);
    void func_02055eec();
    BOOL func_02055f1c(void *r1, void *r2, u32 r3, void *heap);
    void func_02055f9c();
};

void Unk_020dbe5c::func_02055d18() {
    s32 id = func_02057110(unk_18);
    s32 i;
    if (id != -1) {
        for (i = 0; i < unk_26; i++) {
            if (id == unk_28[i].unk_22) {
                unk_28[i].unk_23 |= 1;
                break;
            }
        }
    }
}

BOOL Unk_020dbe5c::func_02055d60(s32 unused, u32 x) {
    BOOL z = FALSE;
    s32 id = func_02057110(unk_18);
    
    if (id == -1) return z;
    u8 v = func_02057100(unk_1c, x);
    
    if (v == -1) return z;
    s32 i = z;
    for (; i < unk_26; i++) {
        if (id == unk_28[i].unk_22) {
            if (v != unk_28[i].unk_20) {
                unk_28[i].unk_20 = v;
                unk_28[i].unk_21 = 0xff;
                unk_28[i].unk_24 = 0xffff;
                unk_28[i].func_02056028(unk_18, unk_1c);
                return TRUE;
            }
            return z;
        }
    }
    return z;
}

void Unk_020dbe5c::func_02055df0() {
    u32 frame = (unk_08 << 4) >> 16;
    s32 i;
    for (i = 0; i < unk_26; i++) {
        if (!unk_28[i].func_02056018()) {
            unk_28[i].func_02056070(frame, (u8 *)unk_20, unk_1c, unk_18);
        }
    }
}

void Unk_020dbe5c::func_02055e38() {
    func_020566bc(this);
    func_02055df0();
}

void Unk_020dbe5c::func_02055e4c(void *r1, void *r2, u32 r3, u8 p5, void *p6) {
    unk_20 = func_02106824(r1, 0);
    unk_24 = *(u16 *)((u8 *)unk_20 + 4);
    if (r3 == 0) {
        r3 = unk_24;
    }
    u8 *hdr = (u8 *)unk_18;
    u8 *base = hdr + *(u32 *)(hdr + 8);
    s32 i;
    for (i = 0; i < *((u8 *)unk_20 + 0xd); i++) {
        u8 *a = (u8 *)unk_20 + 0xc;
        a = a + *(u16 *)(a + 6);
        u8 *b = a + *(u16 *)(a + 2);
        unk_28[i].unk_22 = func_02106300(base + 4, b + i * 16);
        unk_28[i].unk_00 = func_021066cc(unk_20, i);
        unk_28[i].unk_21 = 0xff;
        unk_28[i].unk_20 = 0xff;
        unk_28[i].unk_24 = 0xffff;
    }
    func_0205668c(this, r3, p5, p6, r2);
}

void Unk_020dbe5c::func_02055eec() {
    s32 i;
    for (i = 0; i < unk_26; i++) {
        unk_28[i].func_020560f8();
    }
    func_02055f9c();
}

BOOL Unk_020dbe5c::func_02055f1c(void *r1, void *r2, u32 r3, void *heap) {
    unk_18 = r1;
    if (heap == NULL) {
        heap = data_021f482c;
    }
    unk_1c = func_0210629c(r2);
    unk_26 = r3;
    unk_28 = (Unk_0205614c *)func_020e8608(heap, unk_26 * 0x28);
    if (unk_28 == NULL) {
        return FALSE;
    }
    s32 i;
    for (i = 0; i < unk_26; i++) {
        Unk_0205614c *e = &unk_28[i];
        if (e) {
            e->func_0205614c();
        }
        if (!unk_28[i].func_0205610c()) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_020dbe5c::func_02055f9c() {
    unk_18 = NULL;
    unk_24 = 0;
    unk_26 = 0;
    unk_28 = NULL;
    unk_20 = NULL;
}

Unk_020dbe5c::~Unk_020dbe5c() {}

Unk_020dbe5c::Unk_020dbe5c() { func_02055f9c(); }

BOOL Unk_0205614c::func_02056018() { return (unk_23 & 1) ? TRUE : FALSE; }

void Unk_0205614c::func_02056028(void *a, void *b) {
    if (!func_020b8984(unk_04, a, unk_22, func_020570b0(b, unk_20))) {
        unk_21 = 0xff;
        unk_20 = 0xff;
        unk_24 = 0xffff;
    }
}

void Unk_0205614c::func_02056070(u32 frame, u8 *p2, void *p3, void *p4) {
    u8 *b = p2;
    u8 i;
    u8 *p;
    s32 n;
    u16 *h;
    if (unk_22 != 0xff && frame != unk_24) {
        unk_24 = frame;
        h = (u16 *)unk_00;
        p = b + h[3];
        i = 0;
        n = h[0] - 1;
        for (; i < n; i = i + 1) {
            if (*(u16 *)(p + 4) > frame) break;
            p += 4;
        }
        if (unk_21 != i) {
            unk_21 = i;
            u8 v = func_02106300((u8 *)p3 + 0x3c, b + *(u16 *)(b + 8) + (p[2] << 4));
            if (v != unk_20) {
                unk_20 = v;
                func_02056028(p4, p3);
            }
        }
    }
}

void Unk_0205614c::func_020560f8() {
    func_02056124();
    func_020b89c8(unk_04);
}

BOOL Unk_0205614c::func_0205610c() {
    func_02056124();
    func_020b8b08(unk_04);
    return TRUE;
}

void Unk_0205614c::func_02056124() {
    unk_21 = 0xff;
    unk_22 = 0xff;
    unk_20 = 0xff;
    unk_23 = 0;
    unk_00 = NULL;
    unk_24 = 0xffff;
}

Unk_0205614c *Unk_0205614c::func_0205614c() {
    func_020b8b20(unk_04);
    return this;
}


struct Unk_02056160_Rec {
    u8 pad[0x28];
    Unk_020561d8_Mtx mtx;
    Unk_020561d8_Vec vec;
};

struct Unk_02056160_Tbl {
    u8 pad[0x34];
    Unk_02056160_Rec *recs;
};

struct Unk_02056160_Hdr {
    u8 pad;
    u8 idx;
};

struct Unk_020561d8_Z {
    u32 flags;
    u8 pad[0x24];
    Unk_020561d8_Mtx mtx;
    Unk_020561d8_Vec vec;
};

struct Unk_02056160_Arg {
    Unk_02056160_Hdr *hdr;
    Unk_02056160_Tbl *tbl;
    u8 pad[0xac];
    Unk_020561d8_Z *z;
};

extern "C" {
void func_02056274(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t);
void func_020562e0(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t);
}

class Unk_020dbe6c {
public:
    Unk_020561d8_Mtx unk_04;
    Unk_020561d8_Vec unk_28;
    s32 unk_34;
    s32 unk_38;

    Unk_020dbe6c();
    virtual ~Unk_020dbe6c();
    void func_02056160(Unk_02056160_Arg *x);
    void func_020561d8(Unk_02056160_Arg *x);
    void func_02056520(s32 n);
    BOOL func_02056544();
};

void Unk_020dbe6c::func_02056160(Unk_02056160_Arg *x) {
    Unk_02056160_Rec *r = &x->tbl->recs[x->hdr->idx];
    if (r->mtx.m[0] == 0 && r->mtx.m[1] == 0 && r->mtx.m[2] == 0 && r->mtx.m[3] == 0 && r->mtx.m[4] == 0 &&
        r->mtx.m[5] == 0 && r->mtx.m[6] == 0 && r->mtx.m[7] == 0 && r->mtx.m[8] == 0) {
        func_01ffb448(&unk_04);
    } else {
        unk_04 = r->mtx;
    }
    unk_28.x = r->vec.x;
    unk_28.y = r->vec.y;
    unk_28.z = r->vec.z;
}

void Unk_020dbe6c::func_020561d8(Unk_02056160_Arg *x) {
    Unk_020561d8_Vec v;
    Unk_020561d8_Mtx m;
    u32 idx = x->hdr->idx;
    if ((x->z->flags & 4) == 0 && idx <= 1) {
        func_02056274(&x->z->vec, &unk_28, &v, unk_34);
        Unk_020561d8_Z *z = x->z;
        Unk_020561d8_Vec *pv = &z->vec;
        pv->x = v.x;
        pv->y = v.y;
        pv->z = v.z;
    }
    if (x->z->flags & 2) {
        func_01ffb448(&x->z->mtx);
    }
    func_020562e0(&x->z->mtx, &unk_04, &m, unk_34);
    x->z->mtx = m;
    x->z->flags &= ~2;
}

void Unk_020dbe6c::func_02056520(s32 n) {
    unk_34 = 0;
    if (n == 0) {
        unk_38 = 0;
    } else {
        unk_38 = func_01ffc5a4(0x1000, n << 12);
    }
}

BOOL Unk_020dbe6c::func_02056544() {
    if (unk_38 != 0) {
        unk_34 += unk_38;
        if (unk_34 >= 0x1000) {
            unk_34 = 0x1000;
            unk_38 = 0;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

Unk_020dbe6c::~Unk_020dbe6c() {}

Unk_020dbe6c::Unk_020dbe6c() {
    func_02115fb4(&unk_04, 0, 0x24);
    unk_34 = 0;
    unk_38 = 0;
}

#pragma thumb off
extern "C" void func_02056274(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t) {
    s32 k = 0x1000 - t;
    out->x = (s32)(((s64)t * a->x + (s64)k * b->x) >> 12);
    out->y = (s32)(((s64)t * a->y + (s64)k * b->y) >> 12);
    out->z = (s32)(((s64)t * a->z + (s64)k * b->z) >> 12);
}

extern "C" void func_020562e0(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t) {
    s32 k = 0x1000 - t;
    out->m[0] = (s32)(((s64)t * a->m[0] + (s64)k * b->m[0]) >> 12);
    out->m[1] = (s32)(((s64)t * a->m[1] + (s64)k * b->m[1]) >> 12);
    out->m[2] = (s32)(((s64)t * a->m[2] + (s64)k * b->m[2]) >> 12);
    out->m[3] = (s32)(((s64)t * a->m[3] + (s64)k * b->m[3]) >> 12);
    out->m[4] = (s32)(((s64)t * a->m[4] + (s64)k * b->m[4]) >> 12);
    out->m[5] = (s32)(((s64)t * a->m[5] + (s64)k * b->m[5]) >> 12);
    func_020563cc((Unk_020561d8_Vec *)&out->m[0]);
    func_020563cc((Unk_020561d8_Vec *)&out->m[3]);
    func_01ffc928(&out->m[0], &out->m[3], &out->m[6]);
    func_01ffc928(&out->m[6], &out->m[0], &out->m[3]);
}

extern "C" void func_020563cc(Unk_020561d8_Vec *v) {
    s64 sum = (s64)v->x * v->x;
    sum += (s64)v->y * v->y;
    sum += (s64)v->z * v->z;
    if (sum != 0) {
        volatile u16 *divcnt = (volatile u16 *)0x4000280;
        *divcnt = 2;
        *(volatile s64 *)0x4000290 = (s64)0x1000000 << 32;
        *(volatile s64 *)0x4000298 = sum;
        volatile u16 *sqrtcnt = (volatile u16 *)0x40002b0;
        *sqrtcnt = 1;
        *(volatile s64 *)0x40002b8 = sum << 2;
        while (*sqrtcnt & 0x8000) {}
        s32 sq = *(volatile s32 *)0x40002b4;
        while (*divcnt & 0x8000) {}
        s64 inv = *(volatile s64 *)0x40002a0;
        s64 q = inv * sq;
        v->x = (s32)((q * v->x + ((s64)0x1000 << 32)) >> 45);
        v->y = (s32)((q * v->y + ((s64)0x1000 << 32)) >> 45);
        v->z = (s32)((q * v->z + ((s64)0x1000 << 32)) >> 45);
    }
}
#pragma thumb reset

BOOL Unk_020dbe7c::func_020565e8(s32 x) {
    s32 lim = x << 12;
    s32 a = unk_08;
    s32 b = unk_0c;
    if (b == a) {
        if (a == x) {
            return TRUE;
        }
        return FALSE;
    }
    BOOL flag = (unk_14 & 2) ? TRUE : FALSE;
    if (flag) {
        if (b > a) {
            if (b <= lim) goto no;
            if (a > lim) goto no;
            return TRUE;
        }
        if (lim < b) goto yes1;
        if (lim < a) goto no;
    yes1:
        return TRUE;
    }
    if (b < a) {
        if (b >= lim) goto no;
        if (a < lim) goto no;
        return TRUE;
    }
    if (lim > b) goto yes2;
    if (lim > a) goto no;
yes2:
    return TRUE;
no:
    return FALSE;
}

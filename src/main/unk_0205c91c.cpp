#include "types.h"

struct Unk_0205cc70_Pad {
    s32 v[2];
    Unk_0205cc70_Pad() {}
    ~Unk_0205cc70_Pad() {}
};

struct Unk_0203442c {
    u16 v;
    Unk_0203442c();
    Unk_0203442c(u16 x) { v = x; }
    ~Unk_0203442c();
};

struct Unk_0205cbe8;

extern "C" {
extern void *data_021c61dc;
extern u8 *data_020cbb18;

BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_0203c6b8(u32 a, u16 *b, s32 c);
BOOL func_0203c6b0(void *, void *);
u32 func_0203c6c0();
void func_0205be58();
void func_0205be74();
void *func_020e8628(void *heap, u32 size, u32 align);
void func_020e885c(void *p);
void func_020e877c(void *p);
u32 func_020b50e8();
u32 func_020b4928(u32 a);
u32 func_020b491c(u32 a);
u32 func_02084fbc();
void func_02116048(void *dst, void *src, u32 n);
}

struct Unk_0205ca94 {
    u8 v;
    Unk_0205ca94();
    ~Unk_0205ca94();
    void func_0205ca94(u16 *s, s32 a, s32 b, s32 c);
    void func_0205cba4(u32 x);
    void func_0205cba8();
    void func_0205cbb0(u32 x);
};

struct Unk_0205cbe8 {
    u32 ptr[10];
    Unk_0203442c id[10];
    Unk_0205ca94 sub;
    Unk_0205cbe8();
    ~Unk_0205cbe8();
    s32 func_0205cbe8(u16 *s);
    void func_0205cc4c(u32 idx, u16 *s);
    Unk_0205ca94 *func_0205cc64();
    u32 func_0205cc68(u32 idx);
    void func_0205cc70();
    void func_0205ccb0();
};

extern "C" {
extern Unk_0205cbe8 data_021c6404;
void func_0205cc58(u16 *out, Unk_0205cbe8 *t, u32 idx);
void func_0205c930(void *p, s32 x);
}

extern "C" void func_0205cde4() {
    func_0205be74();
    data_021c6404.func_0205ccb0();
    if (data_021c61dc) func_020e877c(data_021c61dc);
}

extern "C" void func_0205cdcc() {
    data_021c6404.func_0205cc70();
    func_0205be58();
}

extern "C" void func_0205cdbc() { data_021c6404.func_0205cc64(); }

Unk_0205cbe8::Unk_0205cbe8() {
    for (s32 i = 0; i < 10; i++) id[i].v = 0xfff1;
}

Unk_0205cbe8::~Unk_0205cbe8() {}

void Unk_0205cbe8::func_0205ccb0() {
    void *heap = data_021c61dc;
    u32 n = data_020cbb18[0x6c];
    u32 m = func_020b4928(func_020b50e8());
    u32 i;
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = (u32)func_020e8628(heap, func_0203c6c0(), 4);
    }
    ptr[4] = (u32)func_020e8628(heap, func_0203c6c0(), 4);
    if (m == 0) m = 1;
    u32 q = func_020b491c(func_020b50e8());
    m = (q + func_02084fbc()) - m;
    for (i = 5; i < m + 5; i++) {
        ptr[i] = (u32)func_020e8628(heap, func_0203c6c0(), 4);
    }
    sub.func_0205cbb0(4);
}

void Unk_0205cbe8::func_0205cc70() {
    Unk_0205cc70_Pad pad;
    sub.func_0205cba8();
    for (s32 i = 0; i < 10; i++) {
        ptr[i] = 0;
        id[i].v = 0xfff1;
    }
    if (data_021c61dc) func_020e885c(data_021c61dc);
}

u32 Unk_0205cbe8::func_0205cc68(u32 idx) { return ptr[idx]; }

Unk_0205ca94 *Unk_0205cbe8::func_0205cc64() { return &sub; }

extern "C" void func_0205cc58(u16 *out, Unk_0205cbe8 *t, u32 idx) { *out = t->id[idx].v; }

void Unk_0205cbe8::func_0205cc4c(u32 idx, u16 *s) { id[idx].v = *s; }

s32 Unk_0205cbe8::func_0205cbe8(u16 *s) {
    u16 *p;
    BOOL z1 = FALSE, z2 = FALSE;
    for (s32 i = 0; i < 10; i++) {
        BOOL r;
        p = &id[i].v;
        if (func_0204b2d4(p)) {
            r = (func_0204b25c(p) == func_0204b25c(s)) ? TRUE : z1;
        } else {
            u16 a = id[i].v;
            r = (a == *s) ? TRUE : z2;
        }
        if (r) return i;
    }
    return 10;
}

Unk_0205ca94::Unk_0205ca94() { v = 10; }

Unk_0205ca94::~Unk_0205ca94() {}

void Unk_0205ca94::func_0205cbb0(u32 x) {
    func_0205cba4(x);
    u16 s = 0xfff1;
    func_0205ca94(&s, 0, 0, 0);
}

void Unk_0205ca94::func_0205cba8() { v = 10; }
void Unk_0205ca94::func_0205cba4(u32 x) { v = x; }

void Unk_0205ca94::func_0205ca94(u16 *s, s32 a, s32 b, s32 c) {
    u32 st = v;
    BOOL r4, r2, r1;
    if (*s == 0xfff1) {
        data_021c6404.func_0205cc4c(st, s);
    }
    r4 = TRUE;
    r2 = TRUE;
    r1 = FALSE;
    u32 h = *s;
    if (h >= 0x12a8 && h <= 0x12af) r1 = TRUE;
    if (!r1) {
        if (h < 0x1429 || h > 0x1430) r2 = FALSE;
    }
    if (!r2) {
        if (h < 0x13a0 || h > 0x13a7) r4 = FALSE;
    }
    if (c == 0 && !r4) {
        u16 tmp;
        BOOL eq;
        func_0205cc58(&tmp, &data_021c6404, st);
        if (func_0204b2d4(s)) {
            s32 t = func_0204b25c(s);
            if (t == func_0204b25c(&tmp)) eq = TRUE; else eq = FALSE;
        } else {
            if (*s == tmp) eq = TRUE; else eq = FALSE;
        }
        if (eq) return;
    }
    if (b != 0 && !r4) {
        s32 idx = data_021c6404.func_0205cbe8(s);
        if (idx != 10) {
            func_0205c930(this, idx);
            return;
        }
    }
    if (func_0203c6b8(data_021c6404.func_0205cc68(st), s, a)) {
        data_021c6404.func_0205cc4c(st, s);
    }
}

extern "C" void func_0205ca2c(u8 *p, void *q) {
    u32 cur = *p;
    if (func_0203c6b0((void *)data_021c6404.func_0205cc68(cur), q)) {
        static Unk_0203442c dflt(0xffff);
        data_021c6404.func_0205cc4c(cur, &dflt.v);
    }
}

extern "C" void func_0205c930(void *pp, s32 x) {
    u8 *p = (u8 *)pp;
    u32 cur = *p;
    if (x != cur) {
        u16 v[2];
        func_0205cc58(&v[0], &data_021c6404, x);
        func_0205cc58(&v[1], &data_021c6404, cur);
        BOOL ok = FALSE;
        volatile u16 *pv = v;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12a8 && a <= 0x12af) ok = TRUE;
        if (ok) {
            BOOL ok2;
            if (a >= 0x1429 && a <= 0x1430) ok2 = TRUE; else ok2 = FALSE;
            if (ok2) {
                BOOL ok3;
                if (a >= 0x13a0 && a <= 0x13a7) ok3 = TRUE; else ok3 = FALSE;
                if (ok3) goto copy;
            }
        }
        {
            BOOL eq;
            if (func_0204b2d4(v)) {
                s32 q = func_0204b25c(v);
                if (q == func_0204b25c(&v[1])) eq = TRUE; else eq = FALSE;
            } else {
                if (v[0] == v[1]) eq = TRUE; else eq = FALSE;
            }
            if (eq) return;
        }
    copy:
        void *pa = (void *)data_021c6404.func_0205cc68(x);
        void *pb = (void *)data_021c6404.func_0205cc68(cur);
        if (pa != 0 && pb != 0) {
            func_02116048(pa, pb, func_0203c6c0());
            data_021c6404.func_0205cc4c(cur, v);
        }
    }
}

extern "C" void func_0205c91c(u8 *p) { data_021c6404.func_0205cc68(*p); }

Unk_0205cbe8 data_021c6404;

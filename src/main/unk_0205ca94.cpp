#include "types.h"

struct Unk_0205ca94;
struct Unk_0205cbe8;
struct Unk_0205cfb4;
struct Unk_0205ce0c;
struct Unk_0205d238;
struct Unk_0205d3a0;

struct Unk_0205cc70_Pad {
    s32 v[2];
    Unk_0205cc70_Pad() {}
    ~Unk_0205cc70_Pad() {}
};

struct Unk_02004b60 {
    u16 v;
    Unk_02004b60();
    ~Unk_02004b60();
};

extern "C" {
extern Unk_0205cbe8 data_021c6404;
extern Unk_0205cfb4 data_021c6464;
extern Unk_0205d238 data_021c64dc;
extern Unk_0205d3a0 data_021c650c;
extern void *data_021c61dc;
extern void *data_021c61d4;
extern void *data_021c61d8;
extern void *data_021c61bc;
extern u8 *data_020cbb18;
extern u8 data_020cb1ec[];
extern u8 data_021c6450[];
extern u8 data_020dc3e8[];

BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_0203c6b8(u32 a, u16 *b, s32 c);
u32 func_0203c6c0();
void func_0205c930(void *p, s32 i);
void func_0205be58();
void func_0205be74();
void func_0205bda8();
void func_0205bdc4();
void func_0205bba0();
void func_0205bbbc();
void *func_020e8628(void *heap, u32 size, u32 align);
void *func_020e8da0(u32 size, void *heap);
void func_020e885c(void *p);
void func_020e877c(void *p);
u32 func_020b50e8();
u32 func_020b4928(u32 a);
u32 func_020b491c(u32 a);
u32 func_02084fbc();
void func_02116048(void *dst, void *src, u32 n);
s32 func_020641b4(void *name, void *buf, s32 size);
void func_020639e8(void *buf, void *fmt, u32 a, u32 b);
u32 func_0205d418();
void *func_0205d420(u32 a);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
void func_02004b60_(void);
}

extern "C" void func_02004b60(void *);

// ---------------------------------------------------------------- table 1
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
    Unk_02004b60 id[10];
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

extern "C" void func_0205cc58(u16 *out, Unk_0205cbe8 *t, u32 idx);

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

void Unk_0205ca94::func_0205cba4(u32 x) { v = x; }
void Unk_0205ca94::func_0205cba8() { v = 10; }

void Unk_0205ca94::func_0205cbb0(u32 x) {
    func_0205cba4(x);
    u16 s = 0xfff1;
    func_0205ca94(&s, 0, 0, 0);
}

Unk_0205ca94::~Unk_0205ca94() {}

Unk_0205ca94::Unk_0205ca94() { v = 10; }

s32 Unk_0205cbe8::func_0205cbe8(u16 *s) {
    u16 *p;
    BOOL z1 = FALSE, z2 = FALSE;
    for (s32 i = 0; i < 10; i++) {
        BOOL r;
        p = &id[i].v;
        if (func_0204b2d4(p)) {
            if (func_0204b25c(p) == func_0204b25c(s)) r = TRUE; else r = z1;
        } else {
            u16 a = id[i].v;
            if (a == *s) r = TRUE; else r = z2;
        }
        if (r) return i;
    }
    return 10;
}

void Unk_0205cbe8::func_0205cc4c(u32 idx, u16 *s) { id[idx].v = *s; }

void func_0205cc58(u16 *out, Unk_0205cbe8 *t, u32 idx) { *out = t->id[idx].v; }

Unk_0205ca94 *Unk_0205cbe8::func_0205cc64() { return &sub; }

u32 Unk_0205cbe8::func_0205cc68(u32 idx) { return ptr[idx]; }

void Unk_0205cbe8::func_0205cc70() {
    Unk_0205cc70_Pad pad;
    sub.func_0205cba8();
    for (s32 i = 0; i < 10; i++) {
        ptr[i] = 0;
        id[i].v = 0xfff1;
    }
    if (data_021c61dc) func_020e885c(data_021c61dc);
}

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

Unk_0205cbe8::~Unk_0205cbe8() {}

Unk_0205cbe8::Unk_0205cbe8() {
    for (s32 i = 0; i < 10; i++) id[i].v = 0xfff1;
}

extern "C" void func_0205cdbc() { data_021c6404.func_0205cc64(); }
extern "C" void func_0205cdcc() {
    data_021c6404.func_0205cc70();
    func_0205be58();
}
extern "C" void func_0205cde4() {
    func_0205be74();
    data_021c6404.func_0205ccb0();
    if (data_021c61dc) func_020e877c(data_021c61dc);
}

// ---------------------------------------------------------------- table 2
struct Unk_0205ce0c {
    u8 v;
    Unk_0205ce0c();
    ~Unk_0205ce0c();
    void func_0205ce0c(s32 a, s32 b, s32 c, s32 d);
    s32 func_0205ce78(s32 a, s32 b, s32 c);
    void func_0205cf54();
    void func_0205cf60();
    void func_0205cf6c(u32 j);
    void func_0205cf80(u32 x);
    void func_0205cf84(u32 x);
};

struct Unk_0205cfb4 {
    u32 ptr[9];
    u16 a[2][9];
    u16 b[2][9];
    void func_0205cfb4(u32 i, u32 j, u32 val);
    u32 func_0205cfc8(u32 i, u32 j);
    u32 func_0205cfd8(u32 x);
    void func_0205d010(u32 i, u32 j, u32 val);
    u32 func_0205d028(u32 i, u32 j);
    u32 func_0205d038(u32 i, u32 j);
    void func_0205d054();
    void func_0205d0ac();
    void func_0205d138();
};

extern "C" {
u32 func_0205d16c(u32 x);
u32 func_0205d178();
u32 func_0205d190();
u8 *func_0205d198(u32 x);
}

void Unk_0205ce0c::func_0205ce0c(s32 a, s32 b, s32 c, s32 d) {
    u32 st = v;
    if (a >= 0x16f) {
        data_021c6464.func_0205d010(st, 0, 0x16f);
        data_021c6464.func_0205cfb4(st, 0, 0);
    } else {
        func_0205ce78(a, c, d);
    }
    if (b >= 0x16f) {
        data_021c6464.func_0205d010(st, 1, 0x16f);
        data_021c6464.func_0205cfb4(st, 1, 0);
    } else {
        func_0205ce78(b, c, d);
    }
}

s32 Unk_0205ce0c::func_0205ce78(s32 a, s32 b, s32 c) {
    u32 st = v;
    u32 j = func_0205d16c(a);
    if (c == 0) {
        if (a == data_021c6464.func_0205d028(st, j)) return;
    }
    u32 buf = data_021c6464.func_0205d038(st, j);
    s32 size;
    if (j == 0) {
        size = func_0205d190();
    } else {
        size = func_0205d178() - func_0205d190();
    }
    if (b != 0) {
        u32 k = data_021c6464.func_0205cfd8(a);
        if (k != 9) {
            u32 src = data_021c6464.func_0205d038(k, j);
            u32 n = data_021c6464.func_0205cfc8(k, j);
            if (src != 0 && n != 0) {
                func_02116048((void *)src, (void *)buf, n);
                data_021c6464.func_0205d010(st, j, a);
                data_021c6464.func_0205cfb4(st, j, n);
            }
        }
    }
    s32 got = func_020641b4(func_0205d198(a), (void *)buf, size);
    if (got != 0) {
        data_021c6464.func_0205d010(st, j, a);
        data_021c6464.func_0205cfb4(st, j, got);
    }
}

void Unk_0205ce0c::func_0205cf54() { func_0205cf6c(1); }
void Unk_0205ce0c::func_0205cf60() { func_0205cf6c(0); }
void Unk_0205ce0c::func_0205cf6c(u32 j) { data_021c6464.func_0205d038(v, j); }
void Unk_0205ce0c::func_0205cf80(u32 x) { v = x; }

void Unk_0205ce0c::func_0205cf84(u32 x) {
    func_0205cf80(x);
    func_0205ce0c(0x16f, 0x16f, 0, 0);
}

Unk_0205ce0c::~Unk_0205ce0c() {}
Unk_0205ce0c::Unk_0205ce0c() { v = 9; }

void Unk_0205cfb4::func_0205cfb4(u32 i, u32 j, u32 val) { a[j][i] = val; }
u32 Unk_0205cfb4::func_0205cfc8(u32 i, u32 j) { return a[j][i]; }

u32 Unk_0205cfb4::func_0205cfd8(u32 x) {
    u32 j = func_0205d16c(x);
    s32 i;
    for (i = 0; i < 9; i++) {
        s32 c = func_0205d028(i, j);
        if (c == x) return i;
    }
    return 9;
}

void Unk_0205cfb4::func_0205d010(u32 i, u32 j, u32 val) { b[j][i] = val; }
u32 Unk_0205cfb4::func_0205d028(u32 i, u32 j) { return b[j][i]; }

u32 Unk_0205cfb4::func_0205d038(u32 i, u32 j) {
    if (j == 1) {
        u32 t = ptr[i];
        return t + func_0205d190();
    }
    return ptr[i];
}

void Unk_0205cfb4::func_0205d054() {
    for (s32 i = 0; i < 9; i++) {
        ptr[i] = 0;
        for (s32 j = 0; j < 2; j++) {
            b[j][i] = 0x16f;
            a[j][i] = 0;
        }
    }
    if (data_021c61d4) func_020e885c(data_021c61d4);
}

void Unk_0205cfb4::func_0205d0ac() {
    void *heap = data_021c61d4;
    u32 n, i, m;
    n = data_020cbb18[0x6c];
    m = func_020b4928(func_020b50e8());
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = (u32)func_020e8628(heap, func_0205d178(), 4);
    }
    if (m == 0) m = 1;
    u32 q = func_020b491c(func_020b50e8());
    m = (q + func_02084fbc()) - m;
    u32 al = 4;
    for (i = al; i < m + 4; i++) {
        ptr[i] = (u32)func_020e8628(heap, func_0205d178(), al);
    }
}

void Unk_0205cfb4::func_0205d138() {
    for (s32 i = 0; i < 9; i++) {
        for (s32 j = 0; j < 2; j++) b[j][i] = 0x16f;
    }
}

extern "C" u32 func_0205d16c(u32 x) { return data_020cb1ec[x]; }
extern "C" u32 func_0205d178() { return func_0205d190() + 0x118; }
extern "C" u32 func_0205d190() { return 0x118; }
extern "C" u8 *func_0205d198(u32 x) {
    func_020639e8(data_021c6450, data_020dc3e8, x >> 5, x);
    return data_021c6450;
}

extern "C" void func_0205d1b8() {
    data_021c6464.func_0205d054();
    func_0205bda8();
}
extern "C" void func_0205d1d0() {
    func_0205bdc4();
    data_021c6464.func_0205d0ac();
    if (data_021c61d4) func_020e877c(data_021c61d4);
}

// ---------------------------------------------------------------- table 3
struct Unk_0205d1f8 {
    u8 v;
    Unk_0205d1f8();
    ~Unk_0205d1f8();
    void *func_0205d1f8();
    void func_0205d20c(u32 x);
};

struct Unk_0205d238 {
    void *ptr[9];
    void *func_0205d238(u32 idx);
    void func_0205d240();
    void func_0205d278();
};

extern "C" u32 func_0205d2fc();

void *Unk_0205d1f8::func_0205d1f8() { return data_021c64dc.func_0205d238(v); }

void Unk_0205d1f8::func_0205d20c(u32 x) {
    func_020e885c(data_021c64dc.func_0205d238(x));
    v = x;
}

Unk_0205d1f8::~Unk_0205d1f8() {}
Unk_0205d1f8::Unk_0205d1f8() { v = 9; }

void *Unk_0205d238::func_0205d238(u32 idx) { return ptr[idx]; }

void Unk_0205d238::func_0205d240() {
    for (s32 i = 0; i < 9; i++) {
        void **p = &ptr[i];
        if (ptr[i]) {
            func_020e885c(ptr[i]);
            *p = NULL;
        }
    }
    if (data_021c61bc) func_020e885c(data_021c61bc);
}

void Unk_0205d238::func_0205d278() {
    void *heap = data_021c61bc;
    u32 n, i, m;
    n = data_020cbb18[0x6c];
    m = func_020b4928(func_020b50e8());
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = func_020e8da0(func_0205d2fc(), heap);
    }
    if (m == 0) m = 1;
    u32 q = func_020b491c(func_020b50e8());
    m = (q + func_02084fbc()) - m;
    for (i = 4; i < m + 4; i++) {
        ptr[i] = func_020e8da0(func_0205d2fc(), heap);
    }
}

extern "C" void func_0205d2f4() {}
extern "C" void func_0205d2f8() {}
extern "C" u32 func_0205d2fc() { return 0x50; }

extern "C" void func_0205d300() {
    data_021c64dc.func_0205d240();
    func_0205bba0();
}
extern "C" void func_0205d318() {
    func_0205bbbc();
    data_021c64dc.func_0205d278();
    if (data_021c61bc) func_020e877c(data_021c61bc);
}

// ---------------------------------------------------------------- table 4
struct Unk_0205d340 {
    u8 v;
    Unk_0205d340();
    ~Unk_0205d340();
    void *func_0205d340();
    s32 func_0205d354(u32 idx);
    void func_0205d388(u32 x);
    void func_0205d38c(u32 x);
};

struct Unk_0205d3a0 {
    void *ptr[4];
    void *func_0205d3a0(u32 idx);
    void func_0205d3a8();
};

void *Unk_0205d340::func_0205d340() { return data_021c650c.func_0205d3a0(v); }

s32 Unk_0205d340::func_0205d354(u32 idx) {
    void *p = data_021c650c.func_0205d3a0(v);
    void *name = func_0205d420(idx);
    return func_020641b4(name, p, func_0205d418());
}

void Unk_0205d340::func_0205d388(u32 x) { v = x; }
void Unk_0205d340::func_0205d38c(u32 x) { func_0205d388(x); }
Unk_0205d340::~Unk_0205d340() {}
Unk_0205d340::Unk_0205d340() { v = 4; }

void *Unk_0205d3a0::func_0205d3a0(u32 idx) { return ptr[idx]; }

void Unk_0205d3a0::func_0205d3a8() {
    for (s32 i = 0; i < 4; i++) ptr[i] = NULL;
    if (data_021c61d8) func_020e885c(data_021c61d8);
}

extern "C" void func_0205d134() {}

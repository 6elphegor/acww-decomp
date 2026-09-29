#include "types.h"

struct Unk_020cbb18 {
    u8 pad_00[0x104];
    u8 *unk_104;
    u8 pad_108[8];
    u8 *unk_110;

    void func_02072454(u32 v);
    void func_02072460();
    u32 func_02072478();
    void func_02072484(u8 *src, u32 n);
    void func_020724b8(u32 v);
    void func_020724c4();
    u32 func_020724d8();
    void func_0207264c();
};

extern "C" {
void func_02116048(const void *src, void *dst, u32 n);
s32 func_020b50e8();
void func_02084040();
void func_02076ae8(u8 *src, u8 *a, u8 *b);
void func_020a6914(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020a6958(void *p);
void func_020a695c(void *p);
}

extern Unk_020cbb18 *data_020cbb18;
extern void (*data_020d07a0[])(s32);
extern void (*data_020d07a4[])(u8 *, u32);
extern void (*data_020d07a8[])(u8 *, u32);
extern void (*data_020d07b0[])(s32);

struct Unk_020a66f8 {
    u32 unk_00;
    Unk_020a66f8();
    ~Unk_020a66f8();
    void func_020a66f8();
    void func_020a6700(u32 *out);
    void func_020a6708(u32 v);
};

struct Unk_020a6720 {
    u32 unk_00;
    u8 unk_04;
    Unk_020a6720();
    ~Unk_020a6720();
    void func_020a6720();
    void func_020a672c(s32 *a, u8 *b);
    void func_020a6738(u32 a, u8 b);
};

struct Unk_020a6754 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    Unk_020a6754();
    ~Unk_020a6754();
    void func_020a6754();
    void func_020a6760(u8 *a, u8 *b, u8 *c);
    void func_020a6774(u8 a, u8 b, u8 c);
};

struct Unk_020a6790 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u32 unk_04;
    Unk_020a6790();
    ~Unk_020a6790();
    void func_020a6790();
    void func_020a67a0(u8 *a, u8 *b, u8 *c, u32 *d);
    void func_020a67bc(u8 a, u8 b, u8 c, u32 mask);
};

extern Unk_020a6754 data_021eda94[];
extern Unk_020a6720 data_021edaa0[];
extern Unk_020a66f8 data_021edac0[];

extern "C" {

void func_020a63a8(s32 idx, u32 v) { data_021edac0[idx].func_020a6708(v); }

void func_020a63bc(s32 idx, u32 b, u32 c, u32 d, u32 e) {
    Unk_020a6754 *t = &data_021eda94[idx];
    u8 v[3];
    t->func_020a6760(&v[0], &v[1], &v[2]);
    if (e & 1) {
        v[0] = b;
    }
    if (e & 2) {
        v[1] = c;
    }
    if (e & 4) {
        v[2] = d;
    }
    t->func_020a6774(v[0], v[1], v[2]);
    data_020cbb18->func_0207264c();
}

void func_020a6430(u32 a, u8 b) {
    Unk_020a6720 *p = data_021edaa0;
    s32 i;
    for (i = 3; i >= 0; p++, i--) {
        s32 v;
        u8 t;
        p->func_020a672c(&v, &t);
        if (v >= 4) {
            p->func_020a6738(a, b);
            break;
        }
    }
}

void func_020a6470() {}

s32 func_020a6474() { return 0; }

s32 func_020a6478() { return 0; }

struct Unk_020a647c_Buf {
    u16 total;
    u16 len;
    u8 id;
};

void func_020a647c() {
    Unk_020cbb18 *g = data_020cbb18;
    Unk_020cbb18 *sg = g;
    u8 *p = (u8 *)g->func_02072478();
    Unk_020a647c_Buf b;
    u32 n;
    func_02116048(p, &b.total, 2);
    u32 total = b.total;
    n = 0;
    p += 2;
    n += 2;
    while (n < total) {
        func_02116048(p, &b.len, 4);
        p += 4;
        n += 4;
        u32 len = b.len;
        u32 id = *(volatile u8 *)&b.id;
        data_020d07a4[id](p, len);
        p += len;
        n += len;
    }
    sg->func_02072460();
}

void func_020a64e0() {}

void func_020a64e4() {
    Unk_020cbb18 *g = data_020cbb18;
    g->func_02072460();
    u8 *base = (u8 *)g->func_02072478();
    u8 *p = base + 2;
    s32 m = func_020b50e8();
    g->unk_110 = p + 4;
    u8 *start = g->unk_110;
    data_020d07a0[0](m);
    u8 *cur = g->unk_110;
    Unk_020a647c_Buf b;
    s32 diff = cur - start;
    if (diff != 0) {
        b.len = diff;
        b.id = 0;
        func_02116048(&b.len, p, 4);
        p = cur;
    }
    s32 tot = p - base;
    b.total = tot - 2;
    func_02116048(&b.total, base, 2);
    g->func_02072454(tot);
}

void func_020a6560() {}

void func_020a6564() {
    Unk_020cbb18 *g = data_020cbb18;
    Unk_020cbb18 *sg = g;
    u8 *p = (u8 *)g->func_020724d8();
    Unk_020a647c_Buf b;
    u32 n;
    func_02116048(p, &b.total, 2);
    u32 total = b.total;
    n = 0;
    p += 2;
    n += 2;
    while (n < total) {
        func_02116048(p, &b.len, 4);
        p += 4;
        n += 4;
        u32 len = b.len;
        u32 id = *(volatile u8 *)&b.id;
        data_020d07a8[id](p, len);
        p += len;
        n += len;
    }
    sg->func_020724c4();
}

void func_020a65c8(u8 *p) {
    u8 v = 0;
    func_020b50e8();
    func_02116048(p, &v, 1);
    if (v != 0) {
        func_02084040();
    }
}

void func_020a65f8() {}

void func_020a65fc() {
    Unk_020cbb18 *g = data_020cbb18;
    g->func_020724c4();
    u8 *base = (u8 *)g->func_020724d8();
    u8 *p = base + 2;
    s32 m = func_020b50e8();
    Unk_020a647c_Buf b;
    u32 i;
    for (i = 0; i < 2; i++) {
        g->unk_104 = p + 4;
        u8 *start = g->unk_104;
        data_020d07b0[i](m);
        u8 *cur = g->unk_104;
        s32 diff = cur - start;
        if (diff != 0) {
            b.len = diff;
            b.id = i;
            func_02116048(&b.len, p, 4);
            p = cur;
        }
    }
    s32 tot = p - base;
    b.total = tot - 2;
    func_02116048(&b.total, base, 2);
    g->func_020724b8(tot);
}

void func_020a6688() {
    u8 v = 1;
    data_020cbb18->func_02072484(&v, 1);
}

void func_020a66a8() {}

void func_020a66ac(u8 *p, s32 *a, s32 *b, s32 *c) {
    *a = *p & 7;
    *b = (*p >> 5) & 7;
    *c = (*p >> 3) & 3;
}

void func_020a66d4(u8 *p, s32 a, s32 b, s32 c) {
    *p = (a & 7) | (((b << 5) & 0xe0) | (c << 3));
}

void func_020a66f0() {}

void func_020a66f4() {}

}

void Unk_020a66f8::func_020a66f8() { unk_00 = 0; }
void Unk_020a66f8::func_020a6700(u32 *out) { *out = unk_00; }
void Unk_020a66f8::func_020a6708(u32 v) { unk_00 = v; }
Unk_020a66f8::~Unk_020a66f8() {}
Unk_020a66f8::Unk_020a66f8() { func_020a66f8(); }

void Unk_020a6720::func_020a6720() {
    unk_00 = 4;
    unk_04 = 0x3f;
}
void Unk_020a6720::func_020a672c(s32 *a, u8 *b) {
    *a = unk_00;
    *b = unk_04;
}
void Unk_020a6720::func_020a6738(u32 a, u8 b) {
    unk_00 = a;
    unk_04 = b;
}
Unk_020a6720::~Unk_020a6720() {}
Unk_020a6720::Unk_020a6720() { func_020a6720(); }

void Unk_020a6754::func_020a6754() {
    unk_00 = 0x3f;
    unk_01 = 0;
    unk_02 = 0;
}
void Unk_020a6754::func_020a6760(u8 *a, u8 *b, u8 *c) {
    *a = unk_00;
    *b = unk_01;
    *c = unk_02;
}
void Unk_020a6754::func_020a6774(u8 a, u8 b, u8 c) {
    unk_00 = a;
    unk_01 = b;
    unk_02 = c;
}
Unk_020a6754::~Unk_020a6754() {}
Unk_020a6754::Unk_020a6754() { func_020a6754(); }

void Unk_020a6790::func_020a6790() {
    unk_00 = 0x3f;
    unk_01 = 0;
    unk_02 = 0;
    unk_04 = 0;
}
void Unk_020a6790::func_020a67a0(u8 *a, u8 *b, u8 *c, u32 *d) {
    *a = unk_00;
    *b = unk_01;
    *c = unk_02;
    *d = unk_04;
}
void Unk_020a6790::func_020a67bc(u8 a, u8 b, u8 c, u32 mask) {
    if (mask & 1) {
        unk_00 = a;
    }
    if (mask & 2) {
        unk_01 = b;
    }
    if (mask & 4) {
        unk_02 = c;
    }
    unk_04 |= mask;
}
Unk_020a6790::~Unk_020a6790() {}
Unk_020a6790::Unk_020a6790() { func_020a6790(); }

extern "C" {

void func_020a6804(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e);
void func_020a68b8(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e);

void func_020a6804(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e) { func_020a68b8(p, a, b, c, d, e); }

void func_020a681c(u8 *p, s32 a, s32 b, s32 c, u8 d, s32 e) { func_020a6914(p, a, b, c, d, e); }

void *func_020a6838(void *p) {
    func_020a6958(p);
    return p;
}

void *func_020a6848(void *p) {
    func_020a695c(p);
    return p;
}

void func_020a6858(u8 *p, u8 *b, u8 *c, u8 *d, s32 *e) {
    s32 x;
    func_020a68b8(p, &x, b, c, d, e);
}

void func_020a6878(u8 *p, s32 b, s32 c, s32 d, s32 e) { func_020a6914(p, 0, b, c, d, e); }

void *func_020a6898(void *p) {
    func_020a6958(p);
    return p;
}

void *func_020a68a8(void *p) {
    func_020a695c(p);
    return p;
}

void func_020a68b8(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e) {
    u8 loc;
    func_02076ae8(p, b, &loc);
    if (loc & 1) {
        *c = 1;
    } else {
        *c = 0;
    }
    if (loc & 2) {
        *d = 1;
    } else {
        *d = 0;
    }
    *e = p[1] & 0x3f;
    *a = ((u32)p[1] >> 6) & 3;
}

}

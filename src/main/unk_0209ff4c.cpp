#include "types.h"

struct Unk_020cbb18 {
    u8 pad_00[0x68];
    volatile s32 unk_68;
};

struct Unk_021ed3b0 {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 pad_54[0x9d - 0x54];
    u8 unk_9d;
    u8 pad_9e[0xc0 - 0x9e];
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    u8 pad_cc[4];
    u16 unk_d0;
    u8 unk_d2;
    u8 unk_d3;
    u8 pad_d4;
    u8 unk_d5;
    u8 unk_d6;
    u8 pad_d7;
    u8 unk_d8[8];
    u8 unk_e0;
    u8 unk_e1;
    u8 unk_e2;
    u8 unk_e3[4];
    u8 unk_e7[4];
    u8 unk_eb[4];
    u8 unk_ef;
    u8 unk_f0[4];
    u8 unk_f4[4];
    u8 unk_f8[4];
    u8 unk_fc;
    u8 unk_fd;
};

class Unk_020a071c_Date {
public:
    u32 v;
    Unk_020a071c_Date();
    ~Unk_020a071c_Date();
    u32 func_0209eb14();
};

class Unk_020a0088_Date {
public:
    u16 v;
    Unk_020a0088_Date() {}
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern Unk_021ed3b0 *data_021ed3b0;
extern s32 data_021ed3bc;
extern u8 data_021ed398;
extern s32 data_021ed3b4;
extern u8 data_021ed3a8;
extern s32 data_021ed3c4;
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u8 data_021e7f8c[];
extern u8 data_021ecfa8[];
extern u8 data_021ed32c[];
extern u8 data_021c4890[];
extern const u32 data_020d0794[];
extern u8 data_020e24ec;
extern u8 data_020e252c[];

BOOL func_02072e88(Unk_020cbb18 *, s32);
void func_020729a8(Unk_020cbb18 *, u32);
void func_0208f0b0(s32);
void func_0208f18c();
void func_02087368();
void func_0209fcc4(void *, s32);
s32 func_020a5ef8();
void func_020a147c(void *, s32, s32);
s32 func_02063b8c(s32);
void func_02073340(void *);
void func_0209f000(void *);
void func_020952f0(s32);
void func_02095300(s32, s32);
s32 func_020952e0(s32);
s32 func_020974a0(s32);
void func_02098a58();
void func_0209cfc8(s32);
void func_0209d70c(void *, s32);
void func_0209d624(void *);
s32 func_0204da0c();
void func_0204dab4(s32);
void func_0204da24(s32);
void func_0204c6a4(s32);
void func_0204d42c();
void func_0204d3d8();
void func_02045e98();
void func_020741b8(s32);
u8 *func_020952c8(s32);
u16 *func_020952d8();
void func_0209d498(void *);
void func_020987b0(s32, Unk_020a0088_Date);
void func_0209df9c(void *);
s32 func_020977a0(void *);
void func_020975f0(void *, void *, s32, s32);
s32 func_0208f1c4(void *);
u32 func_0204fef4(void *, u32, u32);
void func_0208f1d0(void *, u32);
s32 func_0208f060(void *);
void func_0208f068(void *, u32);
BOOL func_020500f0(void *, u32, void *, u32);
s32 func_020974f8();
s32 func_0209750c();
u8 *func_02098674();
void func_02097868(void *, s32);
u8 *func_02098680();
s32 func_02076d50(void *);
void func_02076d5c(void *, u32);
s32 func_02076c6c(void *);
void func_02076c74(void *, u32);
void func_0209eb7c(void *);
void func_0209d604(s32);
s32 func_02050008(void *, void *, u32, u32);
s32 func_020a0774(s32, Unk_020a071c_Date *);
BOOL func_020a07b0(s32);
Unk_021ed3b0 *func_020a0370();
s32 func_020a03ac();
BOOL func_020a02dc();
BOOL func_020a0318();
BOOL func_020a02f0();

void func_0209ff4c(void *a) {
    s32 i = 3;
    Unk_020cbb18 *g = data_020cbb18;
    for (; i >= 0; i--) {
        if (func_02072e88(g, i)) {
            func_0208f0b0(i);
            func_0208f18c();
            func_02087368();
        }
    }
    func_0209fcc4(a, func_020a5ef8());
}

void func_0209ff8c(void *a) {
    s32 list[4];
    s32 n = 0;
    s32 i = 3, j;
    Unk_020cbb18 *g = data_020cbb18;
    for (; i >= 0; i--) {
        if (func_02072e88(g, i)) {
            list[n] = i;
            n++;
        }
    }
    for (i = 3; i >= 0; i--) {
        func_020a147c(a, i, 4);
    }
    j = 0;
    for (i = 0; i < n; i++) {
        s32 k = i + 1;
        if (k >= n) k = j;
        func_020a147c(a, n ? list[i] : list[i], list[k]);
    }
}

void func_0209fffc(void *a) {
    s32 list[4];
    Unk_020cbb18 *g;
    s32 n;
    s32 i;
    s32 cur = func_020a5ef8();
    s32 pick;
    n = 0;
    i = 3;
    g = data_020cbb18;
    for (; i >= 0; i--) {
        if (i != cur && func_02072e88(g, i)) {
            list[n] = i;
            n++;
        }
    }
    for (i = 3; i >= 0; i--) {
        if (func_02072e88(g, i)) {
            func_020a147c(a, i, i);
        } else {
            func_020a147c(a, i, 4);
        }
    }
    pick = list[func_02063b8c(n)];
    func_020a147c(a, pick, cur);
    func_020a147c(a, cur, pick);
}

void func_020a0088(void *a, s32 b, s32 c) {
    s32 i;
    Unk_020cbb18 *g;
    s32 s;
    s32 t;
    s32 r5;
    u8 *r4;
    struct { Unk_020a0088_Date packed; u32 d[2]; } l;
    func_02073340(a);
    func_0209f000(a);
    if (b < 7) {
        g = data_020cbb18;
        func_020952f0(g->unk_68);
        g->unk_68 = 0;
    }
    g = data_020cbb18;
    func_020729a8(g, 1);
    if (b < 7) {
        func_02095300(g->unk_68, b);
    }
    s = g->unk_68;
    func_020952e0(s);
    for (i = 3; i >= 0; i--) {
        if (i != s) func_020952f0(i);
    }
    for (i = 2; i >= 0; i--) {
        if (func_020974a0(i + 4)) func_02098a58();
    }
    if (c == 0) {
        func_0209cfc8(0);
        func_0209d70c(data_021d7350, 2);
        func_0209d624(data_021d7350);
        if (func_0204da0c()) {
            func_0204dab4(func_0204da0c());
            func_0204da24(func_0204da0c());
            func_0204c6a4(func_0204da0c());
        }
        func_0204d42c();
        func_0204d3d8();
    } else {
        func_02045e98();
    }
    func_020741b8(-4);
    if (c == 0) {
        t = func_020952e0(0);
        if (t < 7) {
            r5 = func_020974a0(t);
            r4 = func_020952c8(r5);
            if (*r4 & 6) {
                l.d[0] = 0;
                l.d[1] = 0;
                func_0209d498(l.d);
                l.packed.v = (l.packed.v & ~0x7f) | (((u8 *)l.d)[5] & 0x7f);
                l.packed.v = (l.packed.v & ~0x780) | ((((u8 *)l.d)[4] & 0xf) << 7);
                l.packed.v = (l.packed.v & ~0xf800) | ((((u8 *)l.d)[3] & 0x1f) << 11);
                if (*r4 & 2) *r4 |= 0x11;
            } else {
                l.packed.v = *func_020952d8();
                *r4 = *r4 | ((*r4 >> 4) & 1);
            }
            func_020987b0(r5, l.packed);
        }
    }
}

void func_020a0208(Unk_021ed3b0 *p, u32 v) { p->unk_fd = v; }

u32 func_020a0210() {
    if (data_021ed3b0) return data_021ed3b0->unk_fc;
    return 4;
}

void func_020a0228(u32 v) {
    if (data_021ed3b0) data_021ed3b0->unk_fc = v;
}

void func_020a023c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_f8[i] = v; }
void func_020a0244(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_f4[i] = v; }
void func_020a024c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_f0[i] = v; }

void func_020a0254(u32 v) {
    if (data_021ed3b0) data_021ed3b0->unk_ef = v;
}

void func_020a0268(Unk_021ed3b0 *p) {
    s32 i;
    for (i = 3; i >= 0; i--) p->unk_eb[i] = 0;
}

void func_020a027c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_eb[i] = v; }
void func_020a0284(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_e7[i] = v; }
void func_020a028c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_e3[i] = v; }
u8 *func_020a0294(Unk_021ed3b0 *p) { return p->unk_d8; }
void func_020a0298(Unk_021ed3b0 *p, u32 v) { p->unk_d6 = v; }
void func_020a02a0(Unk_021ed3b0 *p, u32 v) { p->unk_d5 = v; }
void func_020a02a8(Unk_021ed3b0 *p, u32 v) { p->unk_e2 = v; }
void func_020a02b0(Unk_021ed3b0 *p, u32 v) { p->unk_e1 = v; }
void func_020a02b8(Unk_021ed3b0 *p, u32 v) { p->unk_e0 = v; }
void func_020a02c0(Unk_021ed3b0 *p, u32 v) { p->unk_d3 = v; }
void func_020a02c8(Unk_021ed3b0 *p, u32 v) { p->unk_d0 = v; }

void func_020a02d0() { data_021ed3bc = 0; }

BOOL func_020a02dc() {
    if (data_021ed3bc == 4) return TRUE;
    return FALSE;
}
BOOL func_020a02f0() {
    if (data_021ed3bc == 3) return TRUE;
    return FALSE;
}
BOOL func_020a0304() {
    if (data_021ed3bc == 2) return TRUE;
    return FALSE;
}
BOOL func_020a0318() {
    if (data_021ed3bc == 1) return TRUE;
    return FALSE;
}
BOOL func_020a032c() {
    if (data_021ed3bc != 0) return TRUE;
    return FALSE;
}

void func_020a0340() { data_021ed3bc = 4; }
void func_020a034c() { data_021ed3bc = 3; }
void func_020a0358() { data_021ed3bc = 2; }
void func_020a0364() { data_021ed3bc = 1; }

Unk_021ed3b0 *func_020a0370() { return data_021ed3b0; }

s32 func_020a037c() {
    if (data_021ed3b0 == NULL) return 0;
    return data_021ed3b0->unk_c8;
}
s32 func_020a0394() {
    if (data_021ed3b0 == NULL) return 0;
    return data_021ed3b0->unk_c4;
}
s32 func_020a03ac() {
    if (data_021ed3b0 == NULL) return 0;
    return data_021ed3b0->unk_c0;
}

u32 func_020a03c4() {
    if (func_020a0370()) return func_020a0370()->unk_d2;
    return 0;
}

void func_020a03e4() { data_021ed398 = 1; }
u32 func_020a03f0() { return data_021ed398; }
s32 func_020a03fc() { return data_021ed3b4; }
void func_020a0408(u32 v) { data_021ed3a8 = v; }
u32 func_020a0414() { return data_021ed3a8; }
void func_020a0420(s32 v) { data_021ed3c4 = v; }

void func_020a042c() {
    if (!func_020a02dc()) {
        if (func_020a0318()) func_0209df9c(data_021d7350);
        if (func_020a02f0()) {
            Unk_020cbb18 *g = data_020cbb18;
            g->unk_68 = 0;
            func_02095300(g->unk_68, 0);
        } else {
            void *p = data_021d735c;
            s32 t = func_020977a0(p);
            Unk_020cbb18 *g = data_020cbb18;
            g->unk_68 = 0;
            func_02095300(g->unk_68, t);
            func_020975f0(p, data_020e252c, 0, t);
        }
    }
}

BOOL func_020a049c() {
    u32 y, x;
    u32 a, b;
    void *base = data_021d7350;
    void *p = data_021e7f8c;
    void *q = data_021ecfa8;
    a = (u32)p - (u32)base;
    b = (u32)q - (u32)base;
    func_0208f1d0(p, func_0204fef4(p, 0x84c, func_0208f1c4(p)));
    func_0208f068(q, func_0204fef4(q, 0xf8, func_0208f060(q)));
    if (func_020500f0(data_021c4890, data_020d0794[0] + a, p, 0x84c) == 1) return TRUE;
    if (func_020500f0(data_021c4890, data_020d0794[1] + a, p, 0x84c) == 1) return TRUE;
    if (func_020500f0(data_021c4890, data_020d0794[0] + b, q, 0xf8) == 1) return TRUE;
    if (func_020500f0(data_021c4890, data_020d0794[1] + b, q, 0xf8) == 1) return TRUE;
    return FALSE;
}

BOOL func_020a0554() {
    u8 *base = data_021d7350;
    s32 t = func_020974f8();
    u8 *p;
    u8 *q;
    func_0209750c();
    p = func_02098674();
    if (t >= 4) t = data_020e24ec;
    func_02097868(base + 0xc, t);
    q = func_02098674();
    func_02076d5c(p, func_0204fef4(p, 0x384, func_02076d50(p)));
    {
        u32 d = q - base;
        if (func_020500f0(data_021c4890, data_020d0794[0] + d, p, 0x384) == 1) return TRUE;
        if (func_020500f0(data_021c4890, data_020d0794[1] + d, p, 0x384) == 1) return TRUE;
    }
    return FALSE;
}

BOOL func_020a05e8() {
    u8 *q;
    u32 d;
    func_02097868(data_021d735c, func_020974f8());
    q = func_02098680();
    func_02076c74(q, func_0204fef4(q, 0x50, func_02076c6c(q)));
    d = q - data_021d7350;
    if (func_020500f0(data_021c4890, data_020d0794[0] + d, q, 0x50) == 1) return TRUE;
    if (func_020500f0(data_021c4890, data_020d0794[1] + d, q, 0x50) == 1) return TRUE;
    return FALSE;
}

BOOL func_020a0664() {
    u32 r4 = func_020a03ac();
    u8 *const r7 = data_021ed32c;
    u32 r6, r5;
    func_0209eb7c(r7);
    func_0209d604(r4);
    r6 = r4 + 0x11df0;
    r5 = r7 - data_021d7350;
    r4 = r6 - r4;
    if (func_020500f0(data_021c4890, data_020d0794[0] + r5, r7, 4) == 1) return TRUE;
    if (func_020500f0(data_021c4890, data_020d0794[1] + r5, r7, 4) == 1) return TRUE;
    if (func_020500f0(data_021c4890, data_020d0794[2] + r4, (void *)r6, 1) == 1) return TRUE;
    return FALSE;
}

BOOL func_020a06ec() {
    u8 z = 0;
    if (func_020500f0(data_021c4890, 0x3fffc, &z, 1) == 1) return TRUE;
    return FALSE;
}

BOOL func_020a071c() {
    Unk_020a071c_Date a;
    func_020a0774(0, &a);
    Unk_020a071c_Date b;
    func_020a0774(1, &b);
    if (a.func_0209eb14() == b.func_0209eb14()) return TRUE;
    return FALSE;
}

s32 func_020a0774(s32 idx, Unk_020a071c_Date *d) {
    return func_02050008(data_021c4890, d, 4, ((u32)data_021ed32c - (u32)data_021d7350) + data_020d0794[idx]);
}

BOOL func_020a07a4() { return func_020a07b0(0); }

BOOL func_020a07b0(s32 idx) {
    Unk_020a071c_Date d;
    if (func_020a0774(idx, &d)) return TRUE;
    return FALSE;
}

BOOL func_020a07e4() {
    Unk_021ed3b0 *g = data_021ed3b0;
    if (g && g->unk_50 == 0x1f) {
        u32 t = g->unk_9d;
        if (t == 0xf || t == 0x14) return TRUE;
    }
    return FALSE;
}

BOOL func_020a080c() {
    Unk_021ed3b0 *g = data_021ed3b0;
    if (g && g->unk_50 == 0) return TRUE;
    return FALSE;
}

BOOL func_020a0828() {
    Unk_021ed3b0 *g = data_021ed3b0;
    if (g && g->unk_50 == 0x13 && g->unk_9d == 3) return TRUE;
    return FALSE;
}

BOOL func_020a084c() {
    Unk_021ed3b0 *g = data_021ed3b0;
    if (g && g->unk_50 == 0) return TRUE;
    return FALSE;
}
}

#include "types.h"

extern "C" {
void func_02116048(const void *src, void *dst, u32 n);
void func_0205125c(void *p, u32 n);
void func_02076fc8(u32 a, const char *s);
u16 func_0207694c(void *p);
void func_02076964(void *p, u16 v);
BOOL func_02072e44(void *g);
s32 func_020728d4(void *g);
s32 func_020728a4(void *g, void *p, s32 n);
s32 func_02072824(void *g, s32 a, s32 b);
u32 func_0207e334(u32 a);
BOOL func_0207c014(u32 a);
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
void func_020a7c3c(void *p);
extern void *data_020cbb18;
extern char *data_020e0544;
void func_02077a9c(u32 *o0, u32 *o1, u8 *src);
void func_02077ab4(u8 *out, s32 a, s32 b);
void func_02077404(s32 *out, u16 *dst, u8 *src);
void func_02077428(u8 *out, s32 a, u16 *src);
void func_02077488(u32 a, u16 *b);
void func_02077508(u8 *out, s32 a, u16 *b);
void func_02077558(u32 a, u16 *b);
void func_020775e8(u32 a, u32 b, u32 c, u32 d, u8 e);
void func_02077684(u8 *out, s32 a, u32 b, u16 *c, s32 d, u8 e);
void func_020776fc(u32 a, u32 b, u32 c);
void func_02077734(u32 a, u32 b, u32 c);
void func_020777a0(u8 *out, s32 a, s32 b, u32 c);
void func_020777f0(u32 a, u32 b, u32 c);
void func_0207785c(u8 *out, s32 a, s32 b, u16 *c);
void func_020778b4(u32 a, u32 b, u32 c);
void func_02077944(u32 a, u32 b, u32 c);
void func_020773b8(u32 a, u16 *b);
void func_020779d4(u32 a, u32 b);
void func_02077a54(u32 a, u32 b);
}

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// Source-side text buffer of 0xc1 bytes.
class Unk_020e0574 : public Unk_020e2a78 {
public:
    Unk_020e0574();
    virtual ~Unk_020e0574();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[0xaf];
};

u8 *Unk_020e0574::vfunc_0c() { return unk_12; }
u32 Unk_020e0574::vfunc_08() { return 0xc1; }
Unk_020e0574::~Unk_020e0574() {}
Unk_020e0574::Unk_020e0574() { func_020a7c3c(); }

// Record of 0xc0 data bytes plus a few state bytes.
class Unk_020772cc {
public:
    Unk_020772cc();
    ~Unk_020772cc();

    void func_020772cc();
    BOOL func_020772dc();
    void func_020772f0(s32 i);
    BOOL func_02077310(s32 i);
    u8 func_02077330();
    u8 func_02077338();
    u8 func_02077340();
    void func_02077348(u8 *src);

    /* 0x00 */ u8 unk_00[0xc0];
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3;
};

class Unk_02077198 {
public:
    Unk_02077198();
    ~Unk_02077198();

    void func_02077198(s32 idx);
    void func_020771d8(u16 v);
    u16 func_020771e4();
    Unk_020772cc *func_020771f0();
    u8 func_02077230();
    void func_0207723c();
    void func_02077264();
    Unk_020772cc *func_02077278(s32 idx);
    Unk_020772cc *func_02077280(s32 idx);

    /* 0x000 */ Unk_020772cc unk_000[15];
    /* 0xb7c */ u16 unk_b7c;
    /* 0xb7e */ u8 unk_b7e;
};

void Unk_02077198::func_02077198(s32 idx) {
    s32 i;
    for (i = idx; i < unk_b7e - 1; i++) {
        func_02116048(&unk_000[i + 1], &unk_000[i], 0xc4);
    }
    unk_b7e--;
}

void Unk_02077198::func_020771d8(u16 v) { unk_b7c = v; }
u16 Unk_02077198::func_020771e4() { return unk_b7c; }

Unk_020772cc *Unk_02077198::func_020771f0() {
    if (unk_b7e < 15) {
        unk_b7e++;
        return &unk_000[unk_b7e - 1];
    } else {
        func_02077198(0);
        unk_b7e = 15;
        return &unk_000[unk_b7e - 1];
    }
}

u8 Unk_02077198::func_02077230() { return unk_b7e; }

void Unk_02077198::func_02077264() {
    unk_b7e = 0;
    unk_b7c = 0;
}

void Unk_02077198::func_0207723c() {
    func_02077264();
    func_02076fc8(0, data_020e0544);
    func_02076fc8(1, data_020e0544);
}

Unk_020772cc *Unk_02077198::func_02077278(s32 idx) { return func_02077280(idx); }
Unk_020772cc *Unk_02077198::func_02077280(s32 idx) { return &unk_000[idx]; }

Unk_02077198::~Unk_02077198() {}
Unk_02077198::Unk_02077198() {}

void Unk_020772cc::func_020772cc() { unk_c3 |= 0x10; }
BOOL Unk_020772cc::func_020772dc() {
    if (unk_c3 & 0x10) return TRUE;
    return FALSE;
}
void Unk_020772cc::func_020772f0(s32 i) {
    if (i >= 0 && i < 4) {
        unk_c3 |= (u8)(1 << i);
    }
}
BOOL Unk_020772cc::func_02077310(s32 i) {
    if (i < 0 || i >= 4) return TRUE;
    if (unk_c3 & (1 << i)) return TRUE;
    return FALSE;
}
u8 Unk_020772cc::func_02077330() { return unk_c2; }
u8 Unk_020772cc::func_02077338() { return unk_c1; }
u8 Unk_020772cc::func_02077340() { return unk_c0; }
void Unk_020772cc::func_02077348(u8 *src) {
    unk_c0 = src[0];
    unk_c1 = src[1];
    unk_c2 = src[2];
    unk_c3 = 0;
    func_0205125c(this, 0xc0);
}
Unk_020772cc::~Unk_020772cc() {}
Unk_020772cc::Unk_020772cc() {}

// ---------------------------------------------------------------------------
extern "C" u8 *func_02077374(u8 *p) { return p; }

extern "C" void func_02077380(u32 a, u16 *b) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020773b8(a, b);
        }
    }
}

extern "C" void func_020773b8(u32 a, u16 *b) {
    if (func_02072e44(data_020cbb18) && b) {
        u8 buf[9];
        func_02077428(buf, a, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 9);
        func_02072824(g, 0x3b, 4);
    }
}

extern "C" void func_02077404(s32 *out, u16 *dst, u8 *src) {
    s32 i;
    *out = src[8];
    for (i = 0; i < 4; i++) {
        *dst = func_0207694c(src + i * 2);
        dst++;
    }
}

extern "C" void func_02077428(u8 *out, s32 a, u16 *src) {
    s32 i;
    for (i = 0; i < 4; i++) {
        func_02076964(out + i * 2, *src);
        src++;
    }
    out[8] = a;
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_02077450(u32 a, u16 *b) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077488(a, b);
        }
    }
}

extern "C" void func_02077488(u32 a, u16 *b) {
    if (func_02072e44(data_020cbb18)) {
        if (R1(b, 0x11a8, 0x12a7)) {
            u8 buf[3];
            func_02077508(buf, a, b);
            void *g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, buf, 3);
            func_02072824(g, 0x3a, 4);
        }
    }
}

extern "C" void func_020774f0(s32 *out, u16 *dst, u8 *src) {
    *out = src[2];
    *dst = func_0207694c(src);
}

extern "C" void func_02077508(u8 *out, s32 a, u16 *b) {
    func_02076964(out, *b);
    out[2] = a;
}

extern "C" void func_02077520(u32 a, u16 *b) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077558(a, b);
        }
    }
}

extern "C" void func_02077558(u32 a, u16 *b) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[3];
        func_02077508(buf, a, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 3);
        func_02072824(g, 0x3f, 4);
    }
}

extern "C" void func_020775a0(u32 a, u32 b, u32 c, u32 d, u8 e) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020775e8(a, b, c, d, e);
        }
    }
}

extern "C" void func_020775e8(u32 a, u32 b, u32 c, u32 d, u8 e) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[4];
        func_02077684(buf, a, b, (u16 *)c, d, e ? 1 : 0);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 4);
        func_02072824(g, 0x3d, 4);
    }
}

extern "C" void func_0207764c(s32 *o0, u8 *o1, u16 *o2, s32 *o3, u8 *o4, u8 *src) {
    *o0 = (src[2] >> 4) & 0xf;
    *o3 = src[2] & 7;
    *o4 = (src[2] >> 3) & 1;
    *o1 = src[3];
    *o2 = func_0207694c(src);
}

extern "C" void func_02077684(u8 *out, s32 a, u32 b, u16 *c, s32 d, u8 e) {
    out[2] = (d & 7) | (((a << 4) & 0xf0) | ((e & 1) << 3));
    out[3] = b;
    func_02076964(out, *c);
}

extern "C" void func_020776b4(u32 a, u32 b) { func_020776fc(a, b, 5); }
extern "C" void func_020776c0(u32 a, u32 b) { func_020776fc(a, b, 4); }
extern "C" void func_020776cc(u32 a, u32 b) { func_020776fc(a, b, 3); }
extern "C" void func_020776d8(u32 a) { func_020776fc(a, 1, 2); }
extern "C" void func_020776e4(u32 a) { func_020776fc(a, 0, 1); }
extern "C" void func_020776f0(u32 a, u32 b) { func_020776fc(a, b, 0); }

extern "C" void func_020776fc(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077734(a, b, c);
        }
    }
}

extern "C" void func_02077734(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[2];
        func_020777a0(buf, a, c, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 2);
        func_02072824(g, 0x3c, 4);
    }
}

extern "C" void func_02077780(s32 *o0, u8 *o1, u8 *o2, u8 *src) {
    *o0 = (src[0] >> 4) & 0xf;
    *o1 = src[0] & 0xf;
    *o2 = src[1];
}

extern "C" void func_020777a0(u8 *out, s32 a, s32 b, u32 c) {
    out[0] = ((a << 4) & 0xf0) | (b & 0xf);
    out[1] = c;
}

extern "C" void func_020777b8(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020777f0(a, b, c);
        }
    }
}

extern "C" void func_020777f0(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[3];
        func_0207785c(buf, a, b, (u16 *)c);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 3);
        func_02072824(g, 0x3e, 4);
    }
}

extern "C" void func_0207783c(u32 *o0, u32 *o1, u16 *o2, u8 *src) {
    func_02077a9c(o0, o1, src + 2);
    *o2 = func_0207694c(src);
}

extern "C" void func_0207785c(u8 *out, s32 a, s32 b, u16 *c) {
    func_02077ab4(out + 2, a, b);
    func_02076964(out, *c);
}

extern "C" void func_0207787c(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020778b4(a, b, c);
        }
    }
}

extern "C" void func_020778b4(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 1);
        func_020728a4(g, &c, 1);
        func_02072824(g, 0x39, 4);
    }
}

extern "C" void func_0207790c(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077944(a, b, c);
        }
    }
}

extern "C" void func_02077944(u32 a, u32 b, u32 c) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 1);
        func_020728a4(g, &c, 1);
        func_02072824(g, 0x38, 4);
    }
}

extern "C" void func_0207799c(u32 a, u32 b) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020779d4(a, b);
        }
    }
}

extern "C" void func_020779d4(u32 a, u32 b) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 1);
        func_02072824(g, 0x37, 4);
    }
}

extern "C" void func_02077a1c(u32 a, u32 b) {
    if (func_02072e44(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077a54(a, b);
        }
    }
}

#include "types.h"

extern "C" {
void func_020942c8(void *p);
void func_020942f8(void *p);
s32 func_0209d498(void *p);
s32 func_0209d258(void *p, s32 x);
s32 func_0209d020(void *p);
s32 func_0209d374(void *p, void *q);
s32 func_0209d3d0(void *p, void *q, s32 m);
s32 func_0209d3a4(void *p, void *q);
s32 func_02063b8c(s32 x);
void func_02116048(void *a, void *b, s32 n);
void func_02115fb4(void *a, s32 v, s32 n);
s32 func_02133150(s32 a, s32 b);
s32 func_020b35f8(void *a, void *b, void *c);
void func_02135558(void *obj, void *dtor, void *reg);
extern u32 data_020d05e0[];
extern u32 data_020d05b4[];
extern u8 data_020d0594[];
extern u8 data_020d05ac[];
extern u8 data_020e22c4[];
extern u32 data_021d70b4;
}

// ---------------------------------------------------------------- class 1

struct Unk_0209ada4 {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;

    void func_0209ab8c(u16 *p);
    u16 *func_0209ab94();
    void func_0209ab98(u8 v);
    u32 func_0209abac();
    void func_0209abb4(u8 v);
    u32 func_0209abc4();
    s32 func_0209abcc();
    s32 func_0209ac10();
    s32 func_0209ac48(s32 x);
    u32 func_0209ac64();
    BOOL func_0209ac68(s32 *out);
    s32 func_0209acac();
    BOOL func_0209ace8(s32 *out);
    s32 func_0209ad28();
    void func_0209ad54(u8 a, u16 *p, u8 b);
    BOOL func_0209ad68();
    void func_0209ad80();
    void func_0209ada0();
    void func_0209ada4();
};

extern "C" {
s32 func_0209abd8(u32 x);
s32 func_0209ac1c(u32 x);
BOOL func_0209ac78(s32 *out, s32 x);
s32 func_0209acb8(u32 x);
BOOL func_0209acdc(u32 x);
BOOL func_0209acf8(s32 *out, s32 x);
s32 func_0209ad34(u32 x);
BOOL func_0209ad48(u32 x);
BOOL func_0209ad74(u32 x);
}

extern "C" void *func_0209ab54(Unk_0209ada4 *self) {
    func_020942c8((u8 *)self + 0xc);
    self->func_0209ada0();
    return self;
}

extern "C" void *func_0209ab6c(Unk_0209ada4 *self) {
    self->func_0209ada4();
    func_020942f8((u8 *)self + 0xc);
    *(u16 *)((u8 *)self + 0x24) = 0xfff1;
    return self;
}

void Unk_0209ada4::func_0209ab8c(u16 *p) { unk_08 = *p; }
u16 *Unk_0209ada4::func_0209ab94() { return &unk_08; }

void Unk_0209ada4::func_0209ab98(u8 v) { unk_0b = (unk_0b & ~0xe0) | ((v & 7) << 5); }
struct Unk_0209abac_Bits { u8 lo : 5; u8 hi : 3; };
u32 Unk_0209ada4::func_0209abac() { return ((Unk_0209abac_Bits *)&unk_0b)->hi; }
void Unk_0209ada4::func_0209abb4(u8 v) { unk_0b = (unk_0b & ~0x1f) | (v & 0x1f); }
u32 Unk_0209ada4::func_0209abc4() { return ((Unk_0209abac_Bits *)&unk_0b)->lo; }

s32 Unk_0209ada4::func_0209abcc() { return func_0209abd8(unk_0a); }

extern "C" s32 func_0209abd8(u32 x) {
    s32 r = 4;
    if (func_0209acb8(x) == 1) {
        if (x < 0x13) {
            if (x < 0xb) {
                r = 0;
            } else {
                r = 1;
            }
        } else if (x < 0x14) {
            r = 2;
        } else if (x < 0x15) {
            r = 3;
        }
    }
    return r;
}

s32 Unk_0209ada4::func_0209ac10() { return func_0209ac1c(unk_0a); }

extern "C" s32 func_0209ac1c(u32 x) {
    s32 r = 2;
    if (func_0209acb8(x) == 1) {
        if (x < 0x13) {
            r = 0;
        } else if (x < 0x14) {
            r = 1;
        }
    }
    return r;
}

s32 Unk_0209ada4::func_0209ac48(s32 x) {
    func_0209d498(this);
    return func_0209d258(this, x);
}

u32 Unk_0209ada4::func_0209ac64() { return unk_0a; }

BOOL Unk_0209ada4::func_0209ac68(s32 *out) { return func_0209ac78(out, unk_0a); }

extern "C" BOOL func_0209ac78(s32 *out, s32 x) {
    s32 k = func_0209acb8(x);
    BOOL r = FALSE;
    if (func_0209acdc(k)) {
        *out = x - data_020d05e0[k];
        r = TRUE;
    }
    return r;
}

s32 Unk_0209ada4::func_0209acac() { return func_0209acb8(unk_0a); }

extern "C" s32 func_0209acb8(u32 x) {
    s32 r = 4;
    if (x < 0xa) {
        r = 0;
    } else if (x < 0x14) {
        r = 1;
    } else if (x < 0x15) {
        r = 2;
    } else if (x < 0x16) {
        r = 3;
    }
    return r;
}

extern "C" BOOL func_0209acdc(u32 x) {
    if (x < 4) return TRUE;
    return FALSE;
}

BOOL Unk_0209ada4::func_0209ace8(s32 *out) { return func_0209acf8(out, unk_0a); }

extern "C" BOOL func_0209acf8(s32 *out, s32 x) {
    s32 k = func_0209ad34(x);
    if (func_0209ad48(k)) {
        *out = x - data_020d05b4[k];
        return TRUE;
    }
    return FALSE;
}

s32 Unk_0209ada4::func_0209ad28() { return func_0209ad34(unk_0a); }

extern "C" s32 func_0209ad34(u32 x) {
    s32 r = 2;
    if (x < 5) {
        r = 0;
    } else if (x < 0x16) {
        r = 1;
    }
    return r;
}

extern "C" BOOL func_0209ad48(u32 x) {
    if (x < 2) return TRUE;
    return FALSE;
}

void Unk_0209ada4::func_0209ad54(u8 a, u16 *p, u8 b) {
    unk_0a = a;
    unk_08 = *p;
    unk_0b = (unk_0b & ~0x1f) | (b & 0x1f);
}

BOOL Unk_0209ada4::func_0209ad68() { return func_0209ad74(unk_0a); }

extern "C" BOOL func_0209ad74(u32 x) {
    if (x < 0x16) return TRUE;
    return FALSE;
}

void Unk_0209ada4::func_0209ad80() {
    unk_0a = 0x16;
    unk_08 = 0xfff1;
    unk_0b = unk_0b & ~0x1f;
    unk_0b = unk_0b & ~0xe0;
}

void Unk_0209ada4::func_0209ada0() {}

void Unk_0209ada4::func_0209ada4() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0xfff1;
    unk_0a = 0x16;
    unk_08 = 0xfff1;
}

extern "C" void func_0209ac44() {}

// ---------------------------------------------------------------- class 2

struct Unk_0209b434 {
    u8 unk_00[8];

    Unk_0209b434();
    ~Unk_0209b434();
    u32 func_0209b434(u32 i);
    void func_0209b450(u8 i, u32 v);
    void func_0209b46c(u8 i, u32 v);
    void func_0209b494(u32 i);
    u8 func_0209b4cc();
    void func_0209b540();
    void func_0209b550();
};

extern "C" BOOL func_0209b3b0(u32 x);
extern "C" s32 func_0209b334(u32 x);

struct Unk_0209adbc_T {
    u16 v;
    Unk_0209adbc_T(u16 x) { v = x; }
    ~Unk_0209adbc_T();
};

extern "C" void func_0209adbc(u16 *out, s32 idx) {
    static Unk_0209adbc_T tbl[8] = {
        Unk_0209adbc_T(0x1376), Unk_0209adbc_T(0x1374), Unk_0209adbc_T(0x1369), Unk_0209adbc_T(0xfff1),
        Unk_0209adbc_T(0xfff1), Unk_0209adbc_T(0x1378), Unk_0209adbc_T(0xfff1), Unk_0209adbc_T(0xfff1)};
    if (func_0209b3b0(idx)) {
        *out = tbl[idx].v;
    } else {
        *out = 0xfff1;
    }
}

struct Unk_0209b2e4_Bits { u8 f : 1; u8 x : 7; };

struct Unk_0209b3bc {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    Unk_0209b434 unk_11;
    Unk_0209b434 unk_19;
    Unk_0209b2e4_Bits unk_21;
    u8 unk_22[2];

    Unk_0209b3bc();
    ~Unk_0209b3bc();
    void func_0209aed4(Unk_0209b3bc *other, s16 *p);
    void func_0209af0c(u8 idx, s32 delta);
    BOOL func_0209af4c(s16 *p);
    void func_0209afa4(s16 *p);
    s32 func_0209b014(s32 x);
    s32 func_0209b044(void *x);
    s32 func_0209b0c4(Unk_0209b3bc *o);
    s32 func_0209b12c();
    s32 func_0209b18c();
    BOOL func_0209b1e4(void *o);
    BOOL func_0209b1f0(void *o, u32 c);
    void func_0209b238();
    void func_0209b294();
    BOOL func_0209b2e4();
    s32 func_0209b328();
    void func_0209b350(u32 v);
    u32 func_0209b354();
    void func_0209b358(s32 a, s32 flag);
    BOOL func_0209b394();
    BOOL func_0209b3a4();
    void func_0209b3bc();
};

void Unk_0209b3bc::func_0209aed4(Unk_0209b3bc *other, s16 *p) {
    u8 i = other->unk_11.func_0209b4cc();
    if (func_0209b3b0(i)) {
        unk_11.func_0209b46c(i, (u8)((p[i] * 10) >> 12));
    }
}

void Unk_0209b3bc::func_0209af0c(u8 idx, s32 delta) {
    if (func_0209b3b0(idx)) {
        s32 t = delta + unk_19.func_0209b434(idx);
        if (t < 0) {
            t = 0;
        } else if (t > 10) {
            t = 10;
        }
        unk_19.func_0209b450(idx, (u8)t);
    }
}

BOOL Unk_0209b3bc::func_0209af4c(s16 *p) {
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (unk_11.func_0209b434((u8)i) < 0xff) {
            s32 t = func_02063b8c(10);
            if (t > 0) {
                unk_11.func_0209b46c((u8)i, (u8)((*p * t) >> 12));
            }
            r = TRUE;
        }
    }
    return r;
}

void Unk_0209b3bc::func_0209afa4(s16 *p) {
    const u8 *w = data_020d05ac;
    s32 i;
    for (i = 0; i < 8; p++, w++, i++) {
        s32 v = unk_19.func_0209b434((u8)i);
        s32 wt = *w;
        if (wt != 0 && v != 0) {
            s32 m = *p * wt;
            unk_11.func_0209b46c((u8)i, (u8)((v * m) >> 12));
        }
    }
    unk_19.func_0209b550();
}

extern "C" void *func_0209b00c(void *p) { return (u8 *)p + 8; }
extern "C" void func_0209b010() {}

s32 Unk_0209b3bc::func_0209b014(s32 x) {
    if (!func_0209b3b0(x)) x = 7;
    u8 buf = x;
    return func_020b35f8(this, &buf, data_020e22c4);
}

s32 Unk_0209b3bc::func_0209b044(void *x) {
    if (unk_10 == 0xa) {
        if (x == 0 || (func_0209d3d0(x, this, 0x3f) == 1 && func_0209d3a4(this, x) >= 1)) {
            u32 i = unk_11.func_0209b4cc();
            if (func_0209b3b0(i)) {
                func_0209b350(i);
                unk_11.func_0209b494(i);
                unk_21.f = 0;
                func_0209d498(this);
                func_02116048(this, (u8 *)this + 8, 8);
                return i;
            }
        }
    }
    return 0xc;
}

s32 Unk_0209b3bc::func_0209b0c4(Unk_0209b3bc *o) {
    if (unk_10 == 0xb && *((u8 *)o + 3) != *((u8 *)this + 3)) {
        u32 i = unk_11.func_0209b4cc();
        if (func_0209b3b0(i)) {
            func_0209b350(i);
            unk_11.func_0209b494(i);
            unk_21.f = 0;
            func_0209d498(this);
            func_02116048(this, (u8 *)this + 8, 8);
            return i;
        }
    }
    return 0xc;
}

s32 Unk_0209b3bc::func_0209b12c() {
    if (unk_10 == 8) {
        u32 i = unk_11.func_0209b4cc();
        if (func_0209b3b0(i)) {
            func_0209b350(i);
            unk_11.func_0209b494(i);
            unk_21.f = 0;
            func_0209d498(this);
            func_02116048(this, (u8 *)this + 8, 8);
            return i;
        }
    }
    return 0xc;
}

s32 Unk_0209b3bc::func_0209b18c() {
    if (func_0209b3b0(unk_10)) {
        u32 i = unk_11.func_0209b4cc();
        if (func_0209b3b0(i)) {
            if (unk_11.func_0209b434(i) == 0xff) {
                if (unk_10 == i) {
                    unk_11.func_0209b494(unk_10);
                    return unk_10;
                } else {
                    func_0209b294();
                    return 8;
                }
            }
        }
    }
    return 0xc;
}

BOOL Unk_0209b3bc::func_0209b1e4(void *o) { return func_0209b1f0(o, 7); }

BOOL Unk_0209b3bc::func_0209b1f0(void *o, u32 c) {
    if (func_0209d020(this) == 0 && func_0209b3a4()) {
        s32 t = func_0209d374(this, o);
        if (t < 0) t = -t;
        if ((u32)func_02133150(t, 0x5a0) >= c) return TRUE;
        return FALSE;
    }
    return FALSE;
}

void Unk_0209b3bc::func_0209b238() {
    if (func_0209b354() == 2 || func_0209b2e4()) {
        unk_21.f = 1;
    } else {
        unk_21.f = 0;
    }
    func_0209b350(0xb);
    func_0209d498(this);
    func_02116048(this, (u8 *)this + 8, 8);
}

void Unk_0209b3bc::func_0209b294() {
    if (func_0209b354() == 2) {
        unk_21.f = 1;
    } else {
        unk_21.f = 0;
    }
    func_0209b350(8);
    func_0209d498(this);
    func_02116048(this, (u8 *)this + 8, 8);
}

BOOL Unk_0209b3bc::func_0209b2e4() {
    if (unk_21.f) return TRUE;
    return FALSE;
}

extern "C" s32 func_0209b2f8(u8 *out, s32 x) {
    *out = func_0209b334(x);
    if (*out < 3) return x - data_020d0594[*out];
    return -1;
}

s32 Unk_0209b3bc::func_0209b328() { return func_0209b334(unk_10); }

extern "C" s32 func_0209b334(u32 x) {
    s32 r = 3;
    if (x < 5) {
        r = 0;
    } else if (x < 8) {
        r = 1;
    } else if (x < 0xc) {
        r = 2;
    }
    return r;
}

void Unk_0209b3bc::func_0209b350(u32 v) { unk_10 = v; }
u32 Unk_0209b3bc::func_0209b354() { return unk_10; }

void Unk_0209b3bc::func_0209b358(s32 a, s32 flag) {
    unk_11.func_0209b540();
    unk_10 = unk_11.func_0209b4cc();
    if (flag != 0) {
        unk_11.func_0209b494(unk_10);
    }
    func_0209d498(this);
    func_0209d498((u8 *)this + 8);
}

BOOL Unk_0209b3bc::func_0209b394() {
    if (unk_10 < 0xc) return TRUE;
    return FALSE;
}

BOOL Unk_0209b3bc::func_0209b3a4() { return func_0209b3b0(unk_10); }

extern "C" BOOL func_0209b3b0(u32 x) {
    if (x < 8) return TRUE;
    return FALSE;
}

void Unk_0209b3bc::func_0209b3bc() {
    func_02115fb4(this, 0, 0x24);
    unk_10 = 7;
    unk_11.func_0209b550();
    unk_19.func_0209b550();
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
}

Unk_0209b3bc::~Unk_0209b3bc() {}

Unk_0209b3bc::Unk_0209b3bc() : unk_00(0), unk_04(0), unk_08(0), unk_0c(0) { func_0209b3bc(); }

u32 Unk_0209b434::func_0209b434(u32 i) {
    u32 r = 0;
    if (func_0209b3b0(i)) r = unk_00[i];
    return r;
}

void Unk_0209b434::func_0209b450(u8 i, u32 v) {
    if (func_0209b3b0(i)) unk_00[i] = v;
}

void Unk_0209b434::func_0209b46c(u8 i, u32 v) {
    if (func_0209b3b0(i)) {
        s32 t = unk_00[i];
        t += v;
        if (t >= 0xff) t = 0xff;
        unk_00[i] = t;
    }
}

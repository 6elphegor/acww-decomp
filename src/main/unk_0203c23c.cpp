#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203bc68_Ent {
    s16 h0, h1;
    s32 w0;
    s32 x, y, z;
};

struct Unk_0203bc68_Pos {
    s16 h0, h1;
    s32 w0;
    s32 x, y, z;
};

struct Unk_0203c0b0_Vec {
    s32 x, y, z;
};

struct Unk_0203442c {
    u16 v;
    Unk_0203442c(u16 x) { v = x; }
    ~Unk_0203442c();
};

class Unk_0203be94_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
};

class Unk_020e4590 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e4590();
    virtual BOOL vfunc_24();
};

extern "C" {
extern void *data_021c3070;
}

extern "C" {
extern u32 data_021c3ba4[];
}

extern "C" {
extern s32 data_020d9250;
}

extern "C" {
extern s32 data_020d9254;
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern Unk_0203bc68_Ent data_020c8d9c[];
}

extern "C" {
extern u32 data_020c8d3c[][4];
}

extern "C" {
extern u32 data_027e0148[];
}

extern "C" {
struct Unk_0203bd10_Dtcm { u32 pad[16]; u32 a, b, c, d, e, f, g, h, i; };
}

extern "C" {
extern Unk_0203bd10_Dtcm data_027e02c8;
}

extern "C" {
extern u32 data_027e00d0[];
}

extern "C" {
extern u32 data_027e0114[];
}

extern "C" {
void MTX_Identity43_(void *p);
}

extern "C" {
void MTX_Inverse43(void *a, void *b);
}

extern "C" {
void func_01ffcbb0(void *out, void *self);
}

extern "C" {
void VEC_Add(void *a, void *b, void *c);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void func_020e98f4(void *out, void *a, s32 n);
}

extern "C" {
void G3i_PerspectiveW_(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g, u32 h);
}

extern "C" {
void G3i_LookAt_(void *a, void *b, void *c, s32 d, void *e);
}

extern "C" {
void func_0203b768(void *self);
}

extern "C" {
void func_0203ecec(void *a, void *b);
}

extern "C" {
Unk_0203bc68_Pos *func_020947f0(s32 id);
}

extern "C" {
void func_0203b9d4(void *self);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_02081640(s32 a);
}

extern "C" {
Unk_0203be94_Obj *func_0208175c(s32 i);
}

extern "C" {
void *func_0209750c();
}

extern "C" {
s32 func_02098044(void *s, s32 a);
}

extern "C" {
void *func_020b50dc();
}

extern "C" {
s32 func_020b530c(void *a);
}

extern "C" {
void func_0203a468();
}

extern "C" {
s32 NNS_G3dGetTex();
}

extern "C" {
void func_02135558(void *a, void *b, void *c);
}

extern "C" {
BOOL func_02063fcc(u32 a, s32 b, void *s, s32 idx);
}

extern "C" {
void *_ZN12Unk_0209865c13func_020986c8Ev(void *s);
}

extern "C" {
BOOL func_0203c41c(void *a, u16 *p, s32 c);
}

extern "C" {
BOOL func_0203c42c(u8 *base, u16 *p, s32 skip, s32 set);
}

extern "C" {
BOOL func_0203c4cc(u8 *base, u16 *p);
}

extern "C" {
u8 *func_0203c4f8(u8 *base, u8 *out, u16 *p);
}

extern "C" {
s32 func_0203c354(u16 base, u32 n);
}

extern "C" {
s32 func_0203c2f4();
}

extern "C" {
s32 func_0203c304();
}

extern "C" {
s32 func_0203c314();
}

extern "C" {
s32 func_0203c318();
}

extern "C" {
void func_02061168(u16 *out, u16 *in, s32 n);
}

extern "C" {
BOOL func_0204b300(u16 *p);
}

extern "C" {
BOOL func_0204b2d4(u16 *p);
}

extern "C" {
s32 func_0204b25c(u16 *p);
}

extern "C" {
s32 func_0204b354(u16 *p);
}

extern "C" {
s32 func_0204b248(s32 a, s32 b);
}

extern "C" {
BOOL func_0204b8ac(u16 *p);
}

class Unk_01ffb7cc {
public:
    Unk_01ffb7cc();
    u8 pad_00[0x30];
};

class Unk_020d93b8 : public Unk_020e4590, public Unk_01ffb7cc {
public:
    Unk_020d93b8() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    u8 *func_0203bc58();
    s16 func_0203bc68();
    s16 func_0203bc7c();
    s16 func_0203bc90();
    u8 *func_0203bc9c();
    void func_0203bca8();
    void func_0203c07c(u32 *src);
    void func_0203c09c(s32 i);
    void func_0203c0b0(s32 a, s32 b, s32 n);
    void func_0203c1a4(s32 i, Unk_0203bc68_Pos *out);
    BOOL func_0203b7ac(s32 st);

        /* 0x80 */ s32 unk_80, unk_84, unk_88, unk_8c, unk_90, unk_94;
    s16 unk_98, unk_9a, unk_9c, unk_9e;
    s32 unk_a0, unk_a4, unk_a8, unk_ac, unk_b0, unk_b4;
    s32 unk_b8, unk_bc, unk_c0, unk_c4;
    u8 pad_c8[0xfc - 0xc8];
    Unk_0203bc68_Pos unk_fc;
    s32 unk_110, unk_114, unk_118;
    u8 pad_11c[0x148 - 0x11c];
    s16 unk_148, unk_14a;
    u8 pad_14c[0x168 - 0x14c];
    s32 unk_168;
    u8 pad_16c[0x188 - 0x16c];
    s32 unk_188, unk_18c, unk_190, unk_194, unk_198, unk_19c, unk_1a0, unk_1a4, unk_1a8;
    s16 unk_1ac;
    s16 pad_1ae;
    s32 unk_1b0, unk_1b4, unk_1b8;
    u8 pad_1bc[0x1c8 - 0x1bc];
    s16 unk_1c8;
    u8 pad_1ca[0x1e4 - 0x1ca];
    s32 unk_1e4, unk_1e8, unk_1ec, unk_1f0;
    s32 unk_1f4;
    s32 unk_1f8, unk_1fc, unk_200;
    u8 pad_204[0x21c - 0x204];
    s32 unk_21c;
    u8 pad_220[0x14];
};

static inline BOOL Unk_0203c23c_InRange(u16 c, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (c >= lo && c <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0203c23c_InRangeP(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_0203c23c_Idx(u16 c, u32 lo, u32 hi) {
    if (Unk_0203c23c_InRange(c, lo, hi)) return c - lo;
    return -1;
}

static inline s32 Unk_0203c23c_None() {
    return Unk_0203c23c_Idx(0, 1, 0);
}

extern "C" u8 *func_0203c4f8(u8 *base, u8 *out, u16 *p) {
    u16 c;
    s32 n;
    func_02061168(&c, p, 1);
    if (func_0204b2d4(&c)) {
        n = func_0204b25c(&c);
        *out = 1 << (n & 7);
        return base + (n >> 3);
    }
    if (Unk_0203c23c_InRangeP(&c, 0x1100, 0x1143)) {
        n = Unk_0203c23c_Idx(c, 0x1100, 0x1143);
        *out = 1 << (n & 7);
        return base + 0x100 + (n >> 3);
    }
    if (c >= 0x1144 && c <= 0x1187) {
        n = Unk_0203c23c_Idx(c, 0x1144, 0x1187);
        *out = 1 << (n & 7);
        return base + 0x109 + (n >> 3);
    }
    if (c >= 0x1323 && c <= 0x1368) {
        n = Unk_0203c23c_Idx(c, 0x1323, 0x1368);
        *out = 1 << (n & 7);
        return base + 0x112 + (n >> 3);
    }
    if (c >= 0x1000 && c <= 0x10ff) {
        n = func_0204b354(&c);
        *out = 1 << (n & 7);
        return base + 0x11b + (n >> 3);
    }
    *out = 0;
    return 0;
}

extern "C" BOOL func_0203c4cc(u8 *base, u16 *p) {
    u8 mask;
    u8 *b = func_0203c4f8(base, &mask, p);
    if (b) {
        if (*b & mask) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_0203c42c(u8 *base, u16 *p, s32 skip, s32 set) {
    u8 mask;
    u8 *b;
    if (skip == 0) {
        if (Unk_0203c23c_InRangeP(p, 0x12e8, 0x131f) || (*p >= 0x12b0 && *p <= 0x12e7) ||
            (*p >= 0x4384 && *p <= 0x4463) || (*p >= 0x42a4 && *p <= 0x4383))
            return FALSE;
    }
    b = func_0203c4f8(base, &mask, p);
    if (b) {
        if (set) {
            *b |= mask;
        } else {
            *b &= ~mask;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0203c41c(void *a, u16 *p, s32 c) {
    return func_0203c42c((u8 *)a, p, c, 1);
}

extern "C" s32 func_0203c354(u16 base, u32 n) {
    void *s = func_0209750c();
    s32 count = 0;
    u16 v[6];
    v[0] = base;
    if (!s) return count;
    if (func_0204b300(&v[0])) {
        u32 i;
        for (i = 0; i < n; i++) {
            v[1] = base + i;
            func_02061168(&v[4], &v[1], 1);
            v[1] = v[4];
            if (func_0204b8ac(&v[1])) {
                if (func_0203c4cc((u8 *)_ZN12Unk_0209865c13func_020986c8Ev(s), &v[1])) count++;
            }
        }
        return count;
    }
    if (func_0204b2d4(&v[0])) {
        u32 i;
        s32 z;
        v[2] = base;
        u8 *r = (u8 *)func_0204b25c(&v[2]);
        z = 0;
        for (i = 0; i < n; i++) {
            v[3] = func_0204b248((s32)r + i, z);
            if (func_0204b8ac(&v[3])) {
                if (func_0203c4cc((u8 *)_ZN12Unk_0209865c13func_020986c8Ev(s), &v[3])) count++;
            }
        }
    }
    return count;
}

extern "C" BOOL func_0203c338() {
    if (func_0203c304() == func_0203c318()) return TRUE;
    return FALSE;
}

extern "C" BOOL func_0203c31c() {
    if (func_0203c2f4() == func_0203c314()) return TRUE;
    return FALSE;
}

extern "C" s32 func_0203c318() {
    return 0x38;
}

extern "C" s32 func_0203c314() {
    return 0x38;
}

extern "C" s32 func_0203c304() {
    return func_0203c354(0x12e8, 0x38);
}

extern "C" s32 func_0203c2f4() {
    return func_0203c354(0x12b0, 0x38);
}

extern "C" BOOL func_0203c2d0(u16 *p) {
    void *s = func_0209750c();
    if (s) return func_0203c41c(_ZN12Unk_0209865c13func_020986c8Ev(s), p, 1);
    return FALSE;
}

extern "C" void func_0203c2cc() {
}

extern "C" BOOL func_0203c23c(u32 a, u16 *p) {
    u16 c = *p;
    BOOL ok = Unk_0203c23c_InRange(c, 0x1144, 0x1187);
    s32 idx;
    if (ok) idx = c - 0x1144;
    else idx = -1;
    if (idx != -1) {
        if (func_02063fcc(a, -1, (void *)"/carpet/floor_%d.nsbtx", idx)) return TRUE;
        return FALSE;
    }
    static Unk_0203442c s(0x1144);
    return func_0203c23c(a, &s.v);
}

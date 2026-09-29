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

struct Unk_0203c23c_Static {
    u16 v;
    Unk_0203c23c_Static(u16 x) { v = x; }
    ~Unk_0203c23c_Static();
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
extern u32 data_021c3ba4[];
extern s32 data_020d9250;
extern s32 data_020d9254;
extern s16 data_02135f44[];
extern Unk_0203bc68_Ent data_020c8d9c[];
extern u32 data_020c8d3c[][4];
extern u32 data_021c3240;
extern u16 data_021c323c;
extern u8 data_020d9400[];
extern u32 data_027e0148[];
struct Unk_0203bd10_Dtcm { u32 pad[16]; u32 a, b, c, d, e, f, g, h, i; };
extern Unk_0203bd10_Dtcm data_027e02c8;
extern u32 data_027e00d0[];
extern u32 data_027e0114[];

void func_01ffb7cc(void *p);
void func_01ffbb6c(void *a, void *b);
void func_01ffcbb0(void *out, void *self);
void func_01ffca8c(void *a, void *b, void *c);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e98f4(void *out, void *a, s32 n);
void func_02111404(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g, u32 h);
void func_0211126c(void *a, void *b, void *c, s32 d, void *e);
void func_0203b768(void *self);
void func_0203ecec(void *a, void *b);
Unk_0203bc68_Pos *func_020947f0(s32 id);
void func_0203b9d4(void *self);
s32 func_020b50e8();
s32 func_02081640(s32 a);
Unk_0203be94_Obj *func_0208175c(s32 i);
void *func_0209750c();
s32 func_02098044(void *s, s32 a);
void *func_020b50dc();
s32 func_020b530c(void *a);
void func_0203a468();
s32 func_0210629c();
void func_02135558(void *a, void *b, void *c);
BOOL func_02063fcc(u32 a, s32 b, void *s, s32 idx);
void *func_020986c8(void *s);
BOOL func_0203c41c(void *a, u16 *p, s32 c);
BOOL func_0203c42c(u8 *base, u16 *p, s32 skip, s32 set);
BOOL func_0203c4cc(u8 *base, u16 *p);
u8 *func_0203c4f8(u8 *base, u8 *out, u16 *p);
s32 func_0203c354(u16 base, u32 n);
s32 func_0203c2f4();
s32 func_0203c304();
s32 func_0203c314();
s32 func_0203c318();
void func_02061168(u16 *out, u16 *in, s32 n);
BOOL func_0204b300(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0204b354(u16 *p);
s32 func_0204b248(s32 a, s32 b);
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

u8 *Unk_020d93b8::func_0203bc58() {
    return (u8 *)unk_a0 + 0xf0a;
}

s16 Unk_020d93b8::func_0203bc68() {
    return unk_148 + unk_9c;
}

s16 Unk_020d93b8::func_0203bc7c() {
    return unk_14a + unk_9a;
}

void Unk_020d93b8::func_0203bca8() {
    unk_80 = 0;
    unk_9a = 0;
    unk_9c = 0;
    unk_84 = 0;
    unk_88 = 0;
    unk_8c = 0;
    unk_98 = 0;
    unk_90 = 0;
    unk_94 = 0;
    unk_a0 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_b4 = 0;
}

s16 Unk_020d93b8::func_0203bc90() {
    return unk_1ac;
}

u8 *Unk_020d93b8::func_0203bc9c() {
    return (u8 *)this + 0x168;
}

BOOL Unk_020d93b8::vfunc_0c() {
    data_021c3070 = 0;
    return TRUE;
}

BOOL Unk_020d93b8::vfunc_24() {
    s32 i = unk_1c8 >> 5;
    s32 k = i * 2;
    func_02111404(data_02135f44[k], data_02135f44[k + 1], unk_1b0, unk_1b4, unk_1b8, 0x1000, 1, 0);
    func_0211126c(&unk_194, &unk_1a0, &unk_188, 1, (u8 *)this + 0x50);
    func_01ffbb6c((u8 *)this + 0x50, (u8 *)this + 0xcc);
    s32 j = (s16)(unk_1c8 + unk_98) >> 5;
    s32 m = j * 2;
    func_02111404(data_02135f44[m], data_02135f44[m + 1], unk_1b0, unk_1b4 + unk_90, unk_1b8 + unk_94, 0x1000, 0,
                  (u32)data_027e00d0);
    data_027e0148[0x7c / 4] &= ~0x50;
    data_027e02c8.a = unk_194;
    data_027e02c8.b = unk_198;
    data_027e02c8.c = unk_19c;
    data_027e02c8.d = unk_1a0;
    data_027e02c8.e = unk_1a4;
    data_027e02c8.f = unk_1a8;
    data_027e02c8.g = unk_188;
    data_027e02c8.h = unk_18c;
    data_027e02c8.i = unk_190;
    func_0211126c(&unk_194, &unk_1a0, &unk_188, 0, data_027e0114);
    data_027e0148[0x7c / 4] &= ~0xe8;
    return Unk_020e4590::vfunc_24();
}

BOOL Unk_020d93b8::vfunc_18() {
    s32 v[4];
    func_0203b768(this);
    func_01ffcbb0(v, this);
    func_0203ecec(data_021c3ba4, v);
    return TRUE;
}

void Unk_020d93b8::func_0203c07c(u32 *src) {
    unk_b8 = src[0];
    unk_bc = src[1];
    unk_c0 = src[2];
    unk_c4 = src[3];
}

void Unk_020d93b8::func_0203c09c(s32 i) {
    func_0203c07c(data_020c8d3c[i]);
}

void Unk_020d93b8::func_0203c0b0(s32 a, s32 b, s32 n) {
    Unk_0203c0b0_Vec d, q;
    d.x = data_020c8d9c[b].x - data_020c8d9c[a].x;
    d.y = data_020c8d9c[b].y - data_020c8d9c[a].y;
    d.z = data_020c8d9c[b].z - data_020c8d9c[a].z;
    unk_fc.x = data_020c8d9c[a].x;
    unk_fc.y = data_020c8d9c[a].y;
    unk_fc.z = data_020c8d9c[a].z;
    s32 w = data_020c8d9c[a].w0;
    unk_fc.w0 = w;
    s16 h1 = data_020c8d9c[a].h1;
    unk_fc.h1 = h1;
    s16 h0 = data_020c8d9c[a].h0;
    unk_fc.h0 = h0;
    func_020e98f4(&q, &d, n);
    func_01ffca8c(&unk_fc.x, &q, &unk_fc.x);
    unk_fc.w0 += func_01ffcb0c(data_020c8d9c[b].w0 - w, n);
    unk_fc.h1 = unk_fc.h1 + (s16)func_01ffcb0c((s16)(data_020c8d9c[b].h1 - h1), n);
    unk_fc.h0 = unk_fc.h0 + (s16)func_01ffcb0c((s16)(data_020c8d9c[b].h0 - h0), n);
}

void Unk_020d93b8::func_0203c1a4(s32 i, Unk_0203bc68_Pos *out) {
    if (!out) out = &unk_fc;
    out->x = data_020c8d9c[i].x;
    out->y = data_020c8d9c[i].y;
    out->z = data_020c8d9c[i].z;
    out->w0 = data_020c8d9c[i].w0;
    out->h1 = data_020c8d9c[i].h1;
    out->h0 = data_020c8d9c[i].h0;
}

BOOL Unk_020d93b8::vfunc_00() {
    data_021c3070 = this;
    func_0203bca8();
    unk_1ec = 1;
    unk_1f0 = 1;
    unk_1c8 = 0x1555;
    unk_1e4 = 0;
    unk_1e8 = 0;
    unk_1f8 = unk_1fc = 0;
    if (func_0203b7ac(0)) {
        Unk_0203bc68_Pos *p = func_020947f0(4);
        if (p) {
            unk_110 = ((s32 *)p)[0];
            unk_114 = ((s32 *)p)[1];
            unk_118 = ((s32 *)p)[2];
        }
    }
    func_0203b9d4(this);
    s32 r = func_020b50e8();
    if (r == 9) {
        data_020d9254 = 0x1000;
    } else {
        data_020d9254 = 0x1800;
    }
    switch (r) {
    case 0x2c: {
        Unk_0203be94_Obj *p = 0;
        s32 *g = &data_020d9250;
        s32 i = *g;
        if (i == 8) {
            p = (Unk_0203be94_Obj *)func_02081640((s32)g);
        } else {
            i = i + 1;
            if (i == 8) {
                i = (s32)p;
            } else {
                while (i != data_020d9250) {
                    p = func_0208175c(i);
                    if (p) {
                        if (p->vfunc_a8()) break;
                    }
                    i++;
                    if (i == 8) {
                        i = 0;
                        break;
                    }
                }
            }
            data_020d9250 = i;
        }
        if (p) {
            unk_21c = (s32)p;
            func_0203b7ac(7);
        } else {
            data_020d9250 = 8;
            func_0203b7ac(8);
        }
        break;
    }
    case 0x2d:
        func_0203b7ac(9);
        break;
    case 6:
        func_0203b7ac(0xa);
        break;
    case 13:
    case 14:
    case 0x2f:
        func_0203b7ac(0xe);
        break;
    case 12:
        func_0203b7ac(6);
        break;
    case 0: {
        void *s = func_0209750c();
        if (s) {
            if (func_02098044(s, 0x23)) {
                if (func_020b530c(func_020b50dc()) != 0 || (s32)func_020b50dc() == 6) func_0203b7ac(0xd);
            }
        }
        break;
    }
    }
    vfunc_24();
    unk_1fc = unk_1f8;
    unk_200 = unk_1fc;
    func_0203a468();
    return TRUE;
}

extern "C" Unk_020d93b8 *func_0203c1f0() {
    return new Unk_020d93b8();
}

extern "C" void func_0203c230() {
}

extern "C" s32 func_0203c234() {
    return func_0210629c();
}

Unk_0203c23c_Static::~Unk_0203c23c_Static() {
}

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

extern "C" BOOL func_0203c23c(u32 a, u16 *p) {
    u16 c = *p;
    BOOL ok = Unk_0203c23c_InRange(c, 0x1144, 0x1187);
    s32 idx;
    if (ok) idx = c - 0x1144;
    else idx = -1;
    if (idx != -1) {
        if (func_02063fcc(a, -1, data_020d9400, idx)) return TRUE;
        return FALSE;
    }
    static Unk_0203c23c_Static s(0x1144);
    return func_0203c23c(a, &s.v);
}

extern "C" void func_0203c2cc() {
}

extern "C" BOOL func_0203c2d0(u16 *p) {
    void *s = func_0209750c();
    if (s) return func_0203c41c(func_020986c8(s), p, 1);
    return FALSE;
}

extern "C" s32 func_0203c2f4() {
    return func_0203c354(0x12b0, 0x38);
}

extern "C" s32 func_0203c304() {
    return func_0203c354(0x12e8, 0x38);
}

extern "C" s32 func_0203c314() {
    return 0x38;
}

extern "C" s32 func_0203c318() {
    return 0x38;
}

extern "C" BOOL func_0203c31c() {
    if (func_0203c2f4() == func_0203c314()) return TRUE;
    return FALSE;
}

extern "C" BOOL func_0203c338() {
    if (func_0203c304() == func_0203c318()) return TRUE;
    return FALSE;
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
                if (func_0203c4cc((u8 *)func_020986c8(s), &v[1])) count++;
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
                if (func_0203c4cc((u8 *)func_020986c8(s), &v[3])) count++;
            }
        }
    }
    return count;
}

extern "C" BOOL func_0203c41c(void *a, u16 *p, s32 c) {
    return func_0203c42c((u8 *)a, p, c, 1);
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

extern "C" BOOL func_0203c4cc(u8 *base, u16 *p) {
    u8 mask;
    u8 *b = func_0203c4f8(base, &mask, p);
    if (b) {
        if (*b & mask) return TRUE;
        return FALSE;
    }
    return FALSE;
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

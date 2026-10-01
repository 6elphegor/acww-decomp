// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_02215c7c_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

struct Unk_ov003_02215c7c_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_02215c7c_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// ---- main-module helper classes ----
class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void func_020566bc();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    void func_02055a9c(u32 a);
    void func_02055ae4(s32 a, s32 b, s32 c, s32 e, u16 f);
    BOOL func_02055bcc(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

class Unk_020dbd54 {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    s32 func_020547cc(void *q);
    BOOL func_020555ec(void *a, u32 b);
    void *func_020554c0();

    u8 pad_04[0x5c - 4];
    void *unk_5c;
    u8 pad_60[0xb8 - 0x60];
};

class Unk_020dbe34 {
public:
    void func_020554a0(s32 a, s32 b, s32 c, s32 d, s32 e);
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[8];
};

class Unk_020b1ddc {
public:
    void func_020b1e74();
    void func_020b1ddc();
};

// ---- ov009 actor base ----
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020e2a30 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_02215c7c_Vec *vfunc_50();
    virtual void vfunc_60(s32 a, Unk_020b1ddc *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual s32 vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    /* 0x10c */ u8 pad_10c[0x128 - 0x10c];
    /* 0x128 */ void *unk_128;
    /* 0x12c */ u8 pad_12c[4];
    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[0x138 - 0x134];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_02215c7c_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_02215c7c_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_02215c7c_Vec unk_2a4;
};

extern "C" {
extern u8 data_021dfd8c[];
extern void *data_020cbb18;
extern void *data_021c6204;
extern u8 data_ov003_0222eff8[];
extern u8 data_ov003_0222eff0[];
extern const char data_ov003_02231a24[];
extern const char data_ov003_02231a34[];
extern const char data_ov003_02231a44[];
extern const char data_ov003_02231a60[];
extern const char data_ov003_02231a78[];
extern const char data_ov003_02231be4[];
extern const char data_ov003_02231bec[];
extern char data_ov003_02235330[];
extern char data_ov003_02235308[];
extern char data_ov003_022352d4[];
extern u32 data_ov003_022352e8[];
extern u32 data_ov003_022352b8;
extern u8 data_ov003_022352c8[];
extern u8 data_ov003_022352bc[];

void func_0209d498(void *p);
BOOL func_ov009_0225d600(void *p);
void *func_0207bf60(void *p, s32 i);
s32 func_0207e274(void *p);
s32 func_0207e278(void *p);
BOOL func_02072e88(void *p, s32 i);
void func_020a5e74(s32 i, u8 *a, u8 *b, u8 *c);
s32 func_020b51e8(u32 a);
void *func_020805c4(void *p);
s32 func_02003098(void *);
void func_02002fc8(void *p, void *q);
void func_02067a3c(void *p, s32 a, void *q);
s32 func_020639e8(char *buf, const char *fmt, ...);
void *func_0207fc1c(void *p);
void func_01ffd070(Unk_ov003_02215c7c_Vec *out, void *a, void *b);
void func_02002cf8(s32 a, s32 b, void *c, s32 d, void *e);
void func_02135558();
void func_021039ec(void *a, s32 b);
void func_02103830(void *a, s32 b);
void func_02000c8c();
s32 func_02056fcc(void *p, const char *s);
void func_ov003_0221655c();

s32 func_ov003_02218d8c();
s32 func_ov003_02218978(s32 a);
s32 func_ov003_0221897c(s32 a);
void *func_ov003_02218d84();
BOOL func_ov003_02218868(void *p);
void *func_ov003_02218870(void *p, s32 i);
s32 func_ov003_02218880(void *p);
s32 func_ov003_0221886c(void *p);
s32 func_ov003_0221898c(s32 a, s32 b);
s32 func_ov003_02218980(s32 a, s32 b);
s32 func_ov003_02218da8();
}

// ============================================================ class Unk_ov003_0223177c
class Unk_ov003_0223177c : public Unk_ov009_0225e29c {
public:
    Unk_ov003_0223177c();
    virtual ~Unk_ov003_0223177c();

    virtual BOOL vfunc_18();
    virtual BOOL vfunc_70();

    /* 0x2b0 */ u8 unk_2b0;
    /* 0x2b1 */ u8 pad_2b1[3];
};

BOOL Unk_ov003_0223177c::vfunc_18() {
    return TRUE;
}

BOOL Unk_ov003_0223177c::vfunc_70() {
    struct {
        s32 a, b;
    } d;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    unk_2b0 = *((u8 *)&d + 2);
    return TRUE;
}

Unk_ov003_0223177c::~Unk_ov003_0223177c() {
}

Unk_ov003_0223177c::Unk_ov003_0223177c() {
}

extern "C" void func_ov003_02215c20() {
    new Unk_ov003_0223177c;
}

static inline s32 Unk_ov003_02215c7c_Idx(Unk_ov009_0225e29c *o) {
    BOOL r = FALSE;
    u16 v = o->unk_132;
    if (v < 0x5001 || v > 0x5008) {
    } else {
        r = TRUE;
    }
    if (r) {
        return v - 0x5001;
    }
    return -1;
}

struct Unk_ov003_02215fc0_Rec {
    u8 f : 5;
};

struct Unk_ov003_02216138_V3 {
    s32 x, y, z;
    Unk_ov003_02216138_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_ov003_02216138_V3() {}
};

// ============================================================ class Unk_ov003_022318e8
class Unk_ov003_022318e8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_022318e8();
    virtual ~Unk_ov003_022318e8();

    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual BOOL vfunc_70();
    virtual s32 vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();

    char *func_ov003_02215f98();
    u8 func_ov003_02215fc0();
    s32 func_ov003_02216018();

    /* 0x2b0 */ Unk_020dbd54 unk_2b0;
    /* 0x368 */ Unk_020dbe4c unk_368;
};

BOOL Unk_ov003_022318e8::vfunc_98() {
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_90() {
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_9c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    if (func_ov009_0225d600(this)) {
        void *p = func_0207bf60(data_021dfd8c, idx);
        if (p) {
            if (func_0207e274(p) == 0) {
                return FALSE;
            }
            if (func_0207e278(p) == 0 || func_0207e278(p) == 3 || func_0207e278(p) == 4 || func_0207e278(p) == 5 ||
                func_0207e278(p) == 6 || func_0207e278(p) == 7) {
                return FALSE;
            }
            if (func_0207e278(p) == 2) {
                u8 a, b, c;
                u32 i = 0;
                void *g = data_020cbb18;
                for (; i < 4; i++) {
                    if (func_02072e88(g, i)) {
                        func_020a5e74(i, &a, &b, &c);
                        if (idx == func_020b51e8(a)) {
                            return TRUE;
                        }
                    }
                }
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_022318e8::vfunc_8c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = func_0207bf60(data_021dfd8c, idx);
    if (p) {
        if (func_0207e274(p) == 0) {
            return FALSE;
        }
        if (func_0207e278(p) == 0 || func_0207e278(p) == 3 || func_0207e278(p) == 4 || func_0207e278(p) == 5 ||
            func_0207e278(p) == 6 || func_0207e278(p) == 7) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov003_022318e8::vfunc_78() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = func_0207bf60(data_021dfd8c, idx);
    func_020a710c(data_ov003_02231a24);
    if (func_0207e274(p) == 0) {
        unk_1e = 6;
    } else if (unk_232.f1) {
        func_020a710c(data_ov003_02231a34);
        unk_1e = 0;
    } else if (void *q = func_020805c4(p)) {
        if (unk_233 == 0) {
            unk_1e = data_ov003_0222eff8[func_02003098(q)];
        } else {
            unk_1e = data_ov003_0222eff0[func_02003098(q)];
        }
    }
    struct {
        u32 pad;
        Unk_020e1c64 obj;
    } l;
    func_02002fc8(func_020805c4(p), &l.obj);
    func_02067a3c(unk_128, 0, &l.obj);
}

s32 Unk_ov003_022318e8::vfunc_68() {
    return func_ov003_02218978(func_ov003_02218d8c());
}

s32 Unk_ov003_022318e8::vfunc_64() {
    return func_ov003_0221897c(func_ov003_02218d8c());
}

BOOL Unk_ov003_022318e8::vfunc_ac() {
    return FALSE;
}

char *Unk_ov003_022318e8::vfunc_a8() {
    s32 a = func_ov003_02216018();
    char *s = func_ov003_02215f98();
    s32 e = func_ov003_02218da8();
    func_020639e8(data_ov003_02235330, data_ov003_02231a44, a >> 2, s, e);
    return data_ov003_02235330;
}

char *Unk_ov003_022318e8::vfunc_a4() {
    s32 a = func_ov003_02216018();
    char *s = func_ov003_02215f98();
    s32 e = func_ov003_02218da8();
    func_020639e8(data_ov003_02235308, data_ov003_02231a60, a >> 2, s, e);
    return data_ov003_02235308;
}

char *Unk_ov003_022318e8::func_ov003_02215f98() {
    s32 t = func_ov003_02216018();
    func_020639e8(data_ov003_022352d4, data_ov003_02231a78, t >> 2, t & 3);
    return data_ov003_022352d4;
}

u8 Unk_ov003_022318e8::func_ov003_02215fc0() {
    u8 *g = data_021dfd8c;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)func_0207fc1c(func_0207bf60(g, idx));
    return r->f & 3;
}

s32 Unk_ov003_022318e8::func_ov003_02216018() {
    u8 *g = data_021dfd8c;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)func_0207fc1c(func_0207bf60(g, idx));
    return r->f;
}

BOOL Unk_ov003_022318e8::vfunc_0c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    data_ov003_022352e8[idx] = 0;
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_24() {
    if (func_ov003_02218868(func_ov003_02218d84())) {
        unk_2b0.func_020547cc(0);
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_18() {
    if (func_ov003_02218868(func_ov003_02218d84())) {
        *(Unk_ov003_02215c7c_Blk *)((u8 *)this + 0x314) = unk_19c;
        if ((unk_231 & 1) == 0) {
            unk_368.func_020566bc();
            **(u32 **)((u8 *)this + 0x380) = *(u32 *)((u8 *)this + 0x370);
        }
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_70() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    static Unk_ov003_02216138_V3 v(-0x2000, 0x1000, 0x2000);
    Unk_ov003_02215c7c_Vec tmp;
    func_01ffd070(&tmp, &unk_5c, &v);
    func_02002cf8(0x18, idx, &tmp, 0, this);
    data_ov003_022352e8[idx] = (u32)this;
    s32 k = func_ov003_02215fc0();
    s32 r7 = func_ov003_0221898c(func_ov003_02218d8c(), k);
    s32 r4 = func_ov003_02218980(func_ov003_02218d8c(), k);
    void *g = unk_194;
    if (r7) {
        func_021039ec(g, r7);
    }
    if (r4) {
        func_021039ec(g, r4);
        func_02103830(g, r4);
    }
    if (func_ov003_02218868(func_ov003_02218d84())) {
        s32 q = func_ov003_02216018() >> 2;
        if (unk_2b0.func_020555ec(func_ov003_02218870(func_ov003_02218d84(), q), 0)) {
            void *a = func_ov003_02218870(func_ov003_02218d84(), q);
            func_021039ec(a, func_ov003_02218880(func_ov003_02218d84()));
            void *b = func_ov003_02218870(func_ov003_02218d84(), q);
            func_02103830(b, func_ov003_02218880(func_ov003_02218d84()));
            if (unk_368.func_02055bcc((u32)unk_2b0.unk_5c, data_021c6204)) {
                s32 c = func_ov003_0221886c(func_ov003_02218d84());
                s32 d = func_ov003_02218880(func_ov003_02218d84());
                unk_368.func_02055ae4(c, d, 0, 0x1000, 0);
                unk_368.func_02055a9c((u32)unk_2b0.func_020554c0());
                *(Unk_ov003_02215c7c_Blk *)((u8 *)this + 0x314) = unk_19c;
            }
        }
    }
    return TRUE;
}

Unk_ov003_022318e8::~Unk_ov003_022318e8() {
}

Unk_ov003_022318e8::Unk_ov003_022318e8() {
    for (u32 i = 0; i < 8; i++) {
        data_ov003_022352e8[i] = 0;
    }
}

extern "C" void func_ov003_022163dc() {
    new Unk_ov003_022318e8;
}

// ============================================================ class Unk_ov003_02231aa8
class Unk_ov003_02231aa8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231aa8();
    virtual ~Unk_ov003_02231aa8();

    virtual void vfunc_60(s32 a, Unk_020b1ddc *p);
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_98();

    /* 0x2b0 */ s8 unk_2b0;
    /* 0x2b1 */ s8 unk_2b1;
    /* 0x2b2 */ u8 pad_2b2[2];
};

BOOL Unk_ov003_02231aa8::vfunc_98() {
    return TRUE;
}

void Unk_ov003_02231aa8::vfunc_60(s32 a, Unk_020b1ddc *p) {
    if (a == unk_2b0) {
        p->func_020b1e74();
    } else if (a == unk_2b1) {
        p->func_020b1ddc();
    }
}

BOOL Unk_ov003_02231aa8::vfunc_70() {
    unk_2b0 = func_02056fcc(unk_194, data_ov003_02231be4);
    unk_2b1 = func_02056fcc(unk_194, data_ov003_02231bec);
    if (unk_2b0 != -1 && unk_2b1 != -1) {
        ((Unk_020dbe34 *)unk_138)->func_020554a0((s32)func_ov003_0221655c, 6, 2, (s32)this, 0);
    }
    return TRUE;
}

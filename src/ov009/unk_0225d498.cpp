#include "types.h"
#define vfunc_28() vfunc_28(u32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_28

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

// Returned through a hidden pointer by vfunc_b4 (func_ov009_0225b884)
struct Unk_ov009_0225da90_Vec3 {
    s32 x, y, z;
    Unk_ov009_0225da90_Vec3() {}
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
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e468(s32 v);
    void func_0203e47c(Unk_020e2a30 *a);
    void func_0203e488(Unk_020e2a30 *a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov009_0225bbdc_Target {
    /* 0x00 */ u8 pad_00[0x28];
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
};

struct Unk_ov009_0225bc88_Blk {
    s64 v[6];
};

struct Unk_ov009_0225bf3c_Flags {
    u8 f0 : 1;
    u8 rest : 7;
};

// Flag byte at +0x231
struct Unk_ov009_0225da90_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
    u8 rest : 4;
};

// Record returned by func_ov009_0225d244 (0x22 entries of 0x50 bytes at data_ov009_0225e674)
struct Unk_ov009_0225d244_Rec {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ s32 unk_20[4];
    /* 0x30 */ u8 pad_30[0x10];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
};

// Scratch object of func_020b16bc / func_020b16b8 and the accessors below
class Unk_ov009_0225bb0c_Tmp {
public:
    Unk_ov009_0225bb0c_Tmp(const u8 *src);
    ~Unk_ov009_0225bb0c_Tmp();
    s32 func_020b1694();
    s32 func_020b1698();
    s32 func_020b169c();
    s32 func_020b16b0();

    u32 pad[4];
};

// Opaque 0x44-byte sub-object at +0x234 (class Unk_ov009_0225b894 in unk_0225b880.cpp); dtor is func_ov009_0225b934
class Unk_ov009_0225b894 {
public:
    void func_ov009_0225b8cc();
    void func_ov009_0225b8ec(Unk_ov009_0225b880_Vec3 *v, u32 extra);
    void func_ov009_0225b914();
};

extern "C" {
extern u8 data_020d0a7c[];
extern u32 data_021c6204;
extern char data_ov009_0225e554[];
extern char data_ov009_0225e474[];
extern char data_ov009_0225e534[];
extern char data_ov009_0225e494[];
extern char data_ov009_0225e514[];
extern char data_ov009_0225e4b0[];

s32 func_020639e8(char *buf, const char *fmt, ...);
u16 func_0204b1cc(u32 x);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
BOOL func_0204b1a0(u16 *);
s32 func_020b1d80(u32);
s32 func_020b50e8();
s32 func_ov003_02218da8();
void func_ov003_02218d94();
s32 func_ov003_022187f8();
void func_ov003_02218c0c(void *);
void func_ov003_02218c34(void *);
BOOL func_020555ec(void *, void *, s32);
void func_02054800(void *, u32);
void func_02054720(void *, s32, s32, s32, s32, s32);
void func_02054710(void *);
void func_020555dc(void *);
void func_02055488(void *, void *, void *);
void func_020548a0(void *);
void func_0209c364(void *);
void func_0209cf18(void *);
void func_020b1f7c(void *, s32, s32, s32);
void func_020b1f94(void *, void *);
void func_020b1fd4(void *, void *, s32);
void func_020b200c(void *);
void func_02065fd0(void *);
void func_0203e9d8();
void func_020ac790(u32);
BOOL func_02002d9c(void *);
s32 func_02002dd0(void *, u32);
BOOL func_0203e638(void *);
BOOL func_0203e650(void *);
void func_0203e624(void *, u32);
BOOL func_0203a4c4(void *, s32, s32);
s32 func_0203eeac(void *, void *);
void func_020e8388(void *, s32, s32, s32);
void func_020e8434(void *, s32);
void func_02103830(void *, s32);
void func_021039ec(void *, s32);
void func_ov009_0225b934(void *);
void func_ov009_0225df84(void *);
}

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020e2a30 {
public:
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28(u32 a);
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual void vfunc_60();
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
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
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual Unk_ov009_0225da90_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8();

    // in range
    BOOL func_ov009_0225d498(char *a, char *b, char *c);
    s32 func_ov009_0225d650();
    void *func_ov009_0225d6b8(u32 idx);
    s32 func_ov009_0225d6d8();
    s32 func_ov009_0225d720();
    s32 func_ov009_0225d788();
    s32 func_ov009_0225d7f0();
    void func_ov009_0225d858();
    void func_ov009_0225d928();

    // out of range
    Unk_ov009_0225d244_Rec *func_ov009_0225d244();
    void func_ov009_0225d2a4(char *a, char *b, char *c);
    void func_ov009_0225d078(Unk_ov009_0225bc88_Blk *a);
    void func_ov009_0225cf40();
    void func_ov009_0225cd58();
    void func_ov009_0225cfd8(Unk_ov009_0225bc88_Blk *a);
    void func_ov009_0225ce04(void *m);
    void func_ov009_0225d0d8();
    void func_ov009_0225c290();
    void func_ov009_0225cdb4();
    void func_ov009_0225c360(s32 a);
    u16 *func_ov009_0225b98c();
    BOOL func_ov009_0225bbdc(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    void func_ov009_0225bc88();
    void func_ov009_0225ba74();

    /* 0x10c */ u8 pad_10c[0x128 - 0x10c];
    /* 0x128 */ void *unk_128;
    /* 0x12c */ u8 pad_12c[4];
    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u32 unk_134;
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[0x1f0 - 0x198];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags unk_232;
    /* 0x233 */ u8 pad_233[0x234 - 0x233];
    /* 0x234 */ u32 unk_234[0x44 / 4];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 pad_27c[0x280 - 0x27c];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 pad_284[0x288 - 0x284];
    /* 0x288 */ Unk_ov009_0225bbdc_Target *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d;
    /* 0x28e */ u8 unk_28e[2];
    /* 0x290 */ s32 unk_290;
    /* 0x294 */ s32 unk_294;
    /* 0x298 */ s32 unk_298;
    /* 0x29c */ s32 unk_29c;
    /* 0x2a0 */ s32 unk_2a0;
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
};

static inline BOOL Unk_ov009_0225d858_Is(u16 *p, u32 v) {
    if (func_0204b2d4(p)) {
        u16 t = v;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(&t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == v) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
BOOL func_ov009_0225d600() {
    struct {
        u8 v[4];
    } t;
    func_0209cf18(&t);
    u32 b = t.v[1];
    if (b >= 6 && b < 0x12) {
        return FALSE;
    }
    return TRUE;
}
}

BOOL Unk_ov009_0225e29c::func_ov009_0225d498(char *a, char *b, char *c) {
    if (unk_280 != 0 || unk_194 != 0) {
        return TRUE;
    }
    func_ov009_0225d2a4(a, b, c);
    Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
    if (r != NULL && r->unk_00 != 0) {
        if (func_020555ec(unk_138, r->unk_00, 0)) {
            func_ov003_02218d94();
            s32 x = func_ov003_022187f8();
            func_02103830(r->unk_00, x);
            if (r->unk_14) {
                func_021039ec(r->unk_00, r->unk_14);
            }
            if (r->unk_18) {
                func_021039ec(r->unk_00, r->unk_18);
                func_02103830(r->unk_00, r->unk_18);
            }
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

char *Unk_ov009_0225e29c::vfunc_ac() {
    volatile u16 v = func_0204b1cc(unk_134);
    switch (v) {
    case 0x500a:
    case 0x5011:
    case 0x501c:
    case 0x501d:
        return 0;
    }
    u32 i = unk_134;
    func_020639e8(data_ov009_0225e554, data_ov009_0225e474, i, i, func_ov003_02218da8());
    return data_ov009_0225e554;
}

char *Unk_ov009_0225e29c::vfunc_a8() {
    u32 i = unk_134;
    func_020639e8(data_ov009_0225e534, data_ov009_0225e494, i, i, func_ov003_02218da8());
    return data_ov009_0225e534;
}

char *Unk_ov009_0225e29c::vfunc_a4() {
    u32 i = unk_134;
    func_020639e8(data_ov009_0225e514, data_ov009_0225e4b0, i, i, func_ov003_02218da8());
    return data_ov009_0225e514;
}

BOOL Unk_ov009_0225e29c::vfunc_8c() { return TRUE; }

BOOL Unk_ov009_0225e29c::vfunc_9c() {
    if (func_ov009_0225d600() && vfunc_8c()) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov009_0225e29c::func_ov009_0225d650() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t(v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = t.func_020b16b0();
    return r;
}

void *Unk_ov009_0225e29c::func_ov009_0225d6b8(u32 idx) {
    if (idx < 4) {
        Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
        if (r != NULL) {
            return (void *)r->unk_20[idx];
        }
    }
    return 0;
}

s32 Unk_ov009_0225e29c::func_ov009_0225d6d8() {
    Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
    if (r != NULL) {
        return r->unk_10;
    }
    return 0;
}

s32 Unk_ov009_0225e29c::vfunc_68() {
    Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
    if (r != NULL) {
        return r->unk_0c;
    }
    return 0;
}

s32 Unk_ov009_0225e29c::vfunc_64() {
    Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
    if (r != NULL) {
        return r->unk_08;
    }
    return 0;
}

s32 Unk_ov009_0225e29c::func_ov009_0225d720() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t(v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = t.func_020b1698() << 13;
    return r;
}

s32 Unk_ov009_0225e29c::func_ov009_0225d788() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t(v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = t.func_020b1694() << 13;
    return r;
}

s32 Unk_ov009_0225e29c::func_ov009_0225d7f0() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t(v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = t.func_020b169c() << 13;
    return r;
}

void Unk_ov009_0225e29c::func_ov009_0225d858() {
    if (vfunc_64() != 0 || vfunc_68() != 0) {
        func_02054800(unk_138, data_021c6204);
        func_02054720(unk_138, vfunc_64(), 0, 0x1000, 0, 0);
        func_02054710(unk_138);
    }
    if (func_ov009_0225d650() != 0) {
        u16 *p = func_ov009_0225b98c();
        if (Unk_ov009_0225d858_Is(p, 0x501d)) {
            vfunc_6c(func_020b1d80(unk_132));
        } else {
            vfunc_6c(0);
        }
    }
}

void Unk_ov009_0225e29c::func_ov009_0225d928() {
    Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
    if (r != NULL) {
        s32 z = unk_5c[2] + r->unk_44;
        s32 y = unk_5c[1];
        s32 x = unk_5c[0] + r->unk_40;
        unk_290 = x;
        unk_294 = y;
        unk_298 = z;
        unk_29c = r->unk_48;
        unk_2a0 = r->unk_4c;
    }
}

BOOL Unk_ov009_0225e29c::vfunc_10() {
    if (!func_0203e650(this)) {
        return FALSE;
    }
    ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b8cc();
    func_ov009_0225cf40();
    func_ov009_0225cd58();
    func_020555dc(unk_138);
    func_ov003_02218c0c(this);
    if (unk_232.f0) {
        func_0203e9d8();
        if (func_0204b1a0(&unk_132)) {
            func_020ac790(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov009_0225e29c::vfunc_30() {
    if (!func_02002d9c(this)) {
        return FALSE;
    }
    if ((unk_231 & 1) == 0) {
        u16 *p = func_ov009_0225b98c();
        BOOL r = Unk_ov009_0225d858_Is(p, 0x500b);
        if (r || !func_0203a4c4(&unk_290, unk_29c, unk_2a0)) {
            if (vfunc_b0()) {
                func_ov009_0225bc88();
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov009_0225e29c::vfunc_28(u32 a) {
    Unk_ov009_0225da90_Vec3 v = vfunc_b4();
    u16 *pp = func_ov009_0225b98c();
    ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b8ec((Unk_ov009_0225b880_Vec3 *)&v, *pp);
    if (unk_231 & 2) {
        unk_231 |= 8;
    } else {
        unk_231 &= ~8;
    }
    unk_231 &= ~2;
    unk_231 &= ~4;
    func_02002dd0(this, a);
}

BOOL Unk_ov009_0225e29c::vfunc_24() {
    if (!func_0203e638(this)) {
        return FALSE;
    }
    ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b914();
    u16 *p = func_ov009_0225b98c();
    if (Unk_ov009_0225d858_Is(p, 0x501d)) {
        s32 t = func_020b1d80(unk_132);
        if (unk_130 != t) {
            vfunc_6c(t);
        }
    }
    func_ov009_0225ba74();
    if (func_020b50e8() != 0x2c) {
        func_ov009_0225c290();
    }
    vfunc_74();
    if (func_020b50e8() != 0x2c) {
        func_ov009_0225cdb4();
    }
    BOOL on = vfunc_9c();
    s32 b = vfunc_a0();
    func_020b1f7c(unk_1f0, on, 1, b);
    func_020b1f94(unk_1f0, unk_194);
    func_ov009_0225d0d8();
    return TRUE;
}

BOOL Unk_ov009_0225e29c::vfunc_00() {
    Unk_ov009_0225bc88_Blk b1;
    Unk_ov009_0225bc88_Blk b2;
    struct {
        s32 v[12];
    } m;
    Unk_ov009_0225b880_Vec3 v;
    func_ov003_02218c34(this);
    unk_228 = unk_5c[0] >> 13;
    unk_22c = unk_5c[2] >> 13;
    func_0203e624(this, (u16)(((unk_22c & 0xff) << 8) | (unk_228 & 0xff)));
    unk_132 = *(u32 *)((u8 *)this + 8);
    unk_134 = unk_132 & 0xfff;
    char *a = vfunc_a4();
    char *bb = vfunc_a8();
    char *c = vfunc_ac();
    func_ov009_0225d498(a, bb, c);
    func_ov009_0225d928();
    func_ov009_0225d858();
    func_ov009_0225d078(&b1);
    func_02055488(unk_138, (void *)func_ov009_0225df84, this);
    b2 = b1;
    func_ov009_0225cfd8(&b2);
    s32 ang = func_0203eeac(&v, &unk_5c[0]);
    func_020e8388(&m, v.x, v.y, v.z);
    func_020e8434(&m, ang);
    func_ov009_0225ce04(&m);
    Unk_ov009_0225d244_Rec *r = func_ov009_0225d244();
    func_020b1fd4(unk_1f0, r ? r->unk_00 : 0, 1);
    func_0203e468(0);
    if (func_ov009_0225bbdc(&unk_2a4, (s16 *)0)) {
        unk_2a4.z -= 0x4000;
    }
    BOOL res = vfunc_70();
    func_ov009_0225c360(0);
    return res;
}

BOOL Unk_ov009_0225e29c::vfunc_70() { return TRUE; }

Unk_ov009_0225e29c::~Unk_ov009_0225e29c() {
    func_0209c364(unk_28e);
    func_ov009_0225b934(unk_234);
    func_020b200c(unk_1f0);
    func_020548a0(unk_138);
}

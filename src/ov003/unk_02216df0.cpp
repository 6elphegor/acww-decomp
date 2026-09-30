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
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ u8 unk_c4[0xc];
    /* 0xd0 */ u16 unk_d0;
    /* 0xd2 */ u8 pad_d2[2];
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
    void func_02055b38(s32 a, s32 b, s32 c, s32 d);
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
    void *func_020554c0();
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
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8(void *a);

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


class Unk_020b6a94 {
public:
    Unk_020b6a94();
    ~Unk_020b6a94();
    u8 pad[0x1c];
};

struct Unk_ov003_022173a8_Glob {
    u8 pad[0x58];
    u32 unk_58;
};

typedef s32 (*Unk_ov003_Dummy)();

extern "C" {
extern u8 data_021ed104[];
extern void *data_020cbb18;
extern void *data_021c6204;
extern u8 data_021f47e0[];
extern Unk_ov003_022173a8_Glob data_021ed150;
extern const char data_ov003_022320e4[];
extern const char data_ov003_02232250[];
extern const char data_ov003_02232260[];
extern const char data_ov003_02232270[];

BOOL func_020b1454(void *o, s32 v);
BOOL func_0206ec6c();
BOOL func_ov003_022123a4(s32 a);
BOOL func_0206eca4(u32 a);
s32 func_02030814(s32 a);
BOOL func_ov003_022123e0(void *p);
u32 func_0203ef38(void *out, void *in);
void func_ov009_0225d264(void *self, void *p);
BOOL func_ov009_0225d6b8(void *self, s32 a);
void func_020e8528(void *m, s32 a, s32 b, s32 c);
void *func_0209750c();
void *func_020979d8(void *p);
BOOL func_020970b8(void *p, u32 i);
BOOL func_02065578();
void func_0203e42c();
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
void *func_020b50b4();
void func_020b68d4(void *self, void *o);
BOOL func_020b68a8(void *self, void *o, void *a, s32 b, s32 c, u8 d);
u32 func_ov003_02218b1c(void *p);
BOOL func_020b5184();
BOOL func_02072e44(void *p);
BOOL func_020729cc(void *p, s32 a);
u32 func_020b1d80(u32 a);
void func_020ac1f8(void *p);
s32 func_ov003_02218d9c();
void func_02062650(void *obj, u16 *p);
void func_0206260c(void *obj);
void func_02067a3c(void *p, s32 a, void *q);
void func_0209d498(void *p);
void func_0209cf18(void *p);
BOOL func_020ae964(void *p, void *q);
BOOL func_020ae9e0(void *p);
BOOL func_020a032c();
BOOL func_02098044(void *p, s32 a);
void *func_020aeac4(void *p);
BOOL func_020ae8fc(void *p);
BOOL func_020ae940(void *p);
void func_ov003_02217350();
void func_ov003_022174bc();
}

// ============================================================ class Unk_ov003_02231e4c
class Unk_ov003_02231e4c : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231e4c();
    virtual ~Unk_ov003_02231e4c();

    virtual BOOL vfunc_18();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b8(void *a);

    s32 func_02216dd0();
    s32 func_02216df0();
    s32 func_02216e04();
    s32 func_02216e28();
    s32 func_02216e2c();
    s32 func_02216e38();
    s32 func_02216e54();
    s32 func_02216e70();
    s32 func_02216eac();
    s32 func_02216eb0();
    void func_02216eb4();
    s32 func_02216f4c(s32 idx);
    u32 func_0221706c();
    s32 func_02217078();

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ Unk_020dbe4c unk_2b4;
    /* 0x2d4 */ Unk_020b6a94 unk_2d4;
    /* 0x2f0 */ u8 unk_2f0;
    /* 0x2f1 */ u8 pad_2f1[3];
};

typedef s32 (Unk_ov003_02231e4c::*Unk_ov003_02231e4c_Fn)();

s32 Unk_ov003_02231e4c::func_02216df0() {
    func_020b1454(this, 5);
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_02216e04() {
    if (func_0206ec6c()) {
        if (func_ov003_022123a4(2)) {
            func_02216f4c(4);
        }
    }
}

s32 Unk_ov003_02231e4c::func_02216e28() {
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_02216e2c() {
    return func_02216f4c(3);
}

s32 Unk_ov003_02231e4c::func_02216e38() {
    if (func_0206eca4(0x27)) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov003_02231e4c::func_02216e54() {
    if (unk_130 == 4) {
        func_02216f4c(2);
    }
}

s32 Unk_ov003_02231e4c::func_02216e70() {
    struct {
        s32 a, b, c;
    } v;
    v.a = unk_5c[0];
    v.b = func_02030814(0);
    v.c = unk_5c[2] + 0x2000;
    if (func_ov003_022123e0(&v)) {
        func_020b1454(this, 3);
    }
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_02216eac() {
}

s32 Unk_ov003_02231e4c::func_02216eb0() {
    return TRUE;
}

void Unk_ov003_02231e4c::func_02216eb4() {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Unk_ov003_02231e4c::func_02216eac,
        &Unk_ov003_02231e4c::func_02216e54,
        &Unk_ov003_02231e4c::func_02216e2c,
        &Unk_ov003_02231e4c::func_02216e04,
        &Unk_ov003_02231e4c::func_02216dd0,
    };
    if (unk_2b0 < 5) {
        (this->*tbl[unk_2b0])();
    }
}

s32 Unk_ov003_02231e4c::func_02216f4c(s32 idx) {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Unk_ov003_02231e4c::func_02216eb0,
        &Unk_ov003_02231e4c::func_02216e70,
        &Unk_ov003_02231e4c::func_02216e38,
        &Unk_ov003_02231e4c::func_02216e28,
        &Unk_ov003_02231e4c::func_02216df0,
    };
    if (idx < 5) {
        if ((this->*tbl[idx])()) {
            unk_2b0 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov003_02231e4c::vfunc_b8(void *a) {
    struct {
        s32 a, b, c;
    } v;
    s32 z = unk_5c[2] - 0x1000;
    v.a = unk_5c[0] + 0x2000;
    v.b = 0;
    v.c = z;
    unk_d0 = func_0203ef38(unk_c4, &v);
    func_ov009_0225d264(this, a);
    *(Unk_ov003_02215c7c_Blk *)data_021f47e0 = *(Unk_ov003_02215c7c_Blk *)a;
    func_020e8528(data_021f47e0, (s32)0xffffe000, 0, 0x1000);
    *(Unk_ov003_02215c7c_Blk *)a = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_02217078() {
    if (func_0221706c()) {
        void *p = func_020979d8(func_0209750c());
        if (p) {
            s32 n = 0;
            u32 i;
            for (i = n; i < 10; i++) {
                if (func_020970b8(p, i)) {
                    if (func_02065578()) {
                        n++;
                    }
                }
            }
            return n;
        }
    }
    return 0;
}

void Unk_ov003_02231e4c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        func_02216f4c(1);
        break;
    case 8:
        func_02216f4c(0);
        break;
    }
}

BOOL Unk_ov003_02231e4c::vfunc_48(void *a) {
    Unk_020d9670::vfunc_48(a);
    if (!func_0221706c()) {
        return FALSE;
    }
    if (unk_130 == 2 && a) {
        if (func_020e9650((u8 *)a + 0x5c, unk_5c) < 0x2333) {
            if (func_020e780c((s16)(unk_8e + 0x8000), *(s16 *)((u8 *)a + 0x8e)) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov003_02231e4c::vfunc_b0() {
    return FALSE;
}

BOOL Unk_ov003_02231e4c::vfunc_18() {
    func_02216eb4();
    func_020b68d4(func_020b50b4(), &unk_2d4);
    return TRUE;
}

BOOL Unk_ov003_02231e4c::vfunc_70() {
    if (func_ov009_0225d6b8(this, 0)) {
        if (unk_2b4.func_02055bcc((u32)unk_194, data_021c6204)) {
            unk_2b4.func_02055b38(func_ov009_0225d6b8(this, 0), 1, 0x1000, 0);
            unk_2b4.func_02055a9c((u32)((Unk_020dbe34 *)unk_138)->func_020554c0());
        }
    }
    u8 b = (u8)func_ov003_02218b1c(this);
    struct {
        s32 x, y, z;
    } v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    v.y = v.y + 0x1000;
    func_020b68a8(func_020b50b4(), &unk_2d4, &v, 0x1000, 7, b);
    unk_2f0 = 1;
    if (!func_020b5184()) {
        unk_2f0 = 0;
    } else {
        void *g = data_020cbb18;
        if (func_02072e44(g)) {
            if (!func_020729cc(g, 0)) {
                unk_2f0 = 0;
            }
        }
    }
    func_02216f4c(0);
    if (func_0221706c()) {
        vfunc_6c(0);
    } else {
        vfunc_6c(func_020b1d80(unk_132));
    }
    return TRUE;
}

Unk_ov003_02231e4c::~Unk_ov003_02231e4c() {
}

Unk_ov003_02231e4c::Unk_ov003_02231e4c() {
}

extern "C" void func_ov003_02217350() {
    new Unk_ov003_02231e4c;
}

u32 Unk_ov003_02231e4c::func_0221706c() {
    return unk_2f0;
}

// ============================================================ class Unk_ov003_02231fa8
class Unk_ov003_02231fa8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231fa8();
    virtual ~Unk_ov003_02231fa8();

    virtual BOOL vfunc_24();
    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();

    /* 0x2b0 */ u16 unk_2b0;
    /* 0x2b2 */ u16 pad_2b2;
};

BOOL Unk_ov003_02231fa8::vfunc_8c() {
    return FALSE;
}

void Unk_ov003_02231fa8::vfunc_78() {
    u16 v[2];
    u32 obj[9];
    func_020a710c(data_ov003_022320e4);
    unk_1e = unk_2b0 % 14 + 1;
    u16 w;
    if (data_021ed150.unk_58 < 5) {
        w = data_021ed150.unk_58 + 0x1518;
    } else {
        w = 0x1518;
    }
    v[1] = w;
    func_02062650(obj, &v[1]);
    func_02067a3c(unk_128, 1, obj);
    func_0206260c(obj);
}

BOOL Unk_ov003_02231fa8::vfunc_24() {
    func_020ac1f8(unk_5c);
    return TRUE;
}

BOOL Unk_ov003_02231fa8::vfunc_70() {
    unk_2b0 = func_ov003_02218d9c();
    return TRUE;
}

Unk_ov003_02231fa8::~Unk_ov003_02231fa8() {
}

Unk_ov003_02231fa8::Unk_ov003_02231fa8() {
}

extern "C" void func_ov003_022174bc() {
    new Unk_ov003_02231fa8;
}

// ============================================================ class Unk_ov003_02232114
class Unk_ov003_02232114 : public Unk_ov009_0225e29c {
public:
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_98();

    BOOL func_02217514();

    /* 0x2b0 */ s32 unk_2b0;
};

BOOL Unk_ov003_02232114::vfunc_98() {
    return TRUE;
}

BOOL Unk_ov003_02232114::func_02217514() {
    if (unk_2b0 != -1) {
        struct {
            s32 a, b;
        } d;
        d.a = 0;
        d.b = 0;
        func_0209d498(&d);
        if (func_020ae964(data_021ed104, &d)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov003_02232114::vfunc_8c() {
    struct {
        u8 a, b, c, d;
    } d;
    func_0209cf18(&d);
    if (unk_2b0 == -1) {
        if (d.b >= 8 && d.b < 0x17) {
            return TRUE;
        }
        return FALSE;
    }
    void *x = func_0209750c();
    if (func_020a032c() || (x && func_02098044(x, 0x23))) {
        return FALSE;
    }
    if (x && func_02098044(x, 1)) {
        return TRUE;
    }
    if (func_02217514()) {
        return FALSE;
    }
    if (d.b >= 8) {
        if (d.b < 0x17) {
            goto range;
        }
    }
    return FALSE;
range:
    if (!func_020ae9e0(data_021ed104)) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov003_02232114::vfunc_78() {
    struct {
        s32 pad0, pad1;
        s32 a, b;
    } l;
    func_020a710c(data_ov003_02232250);
    if (unk_2b0 == -1) {
        if (unk_232.f1) {
            func_020a710c(data_ov003_02232260);
            unk_1e = 0;
        } else {
            unk_1e = 4;
        }
    } else {
        void *x = func_0209750c();
        if (func_020a032c() || func_02098044(x, 0x23)) {
            func_020a710c(data_ov003_02232270);
            unk_1e = 0x15;
        } else if (func_02217514()) {
            unk_1e = 7;
        } else if (unk_232.f1) {
            func_020a710c(data_ov003_02232260);
            unk_1e = 0;
        } else {
            BOOL k = FALSE;
            u8 *p = data_021ed104;
            if (((u8 *)func_020aeac4(p))[3]) {
                l.a = 0;
                l.b = 0;
                func_0209d498(&l.a);
                if (func_020ae8fc(p)) {
                    if (*((u8 *)&l + 10) > 0xc) {
                        k = TRUE;
                    }
                } else if (func_020ae940(p)) {
                    k = TRUE;
                } else if (func_020ae9e0(p)) {
                    k = TRUE;
                }
            }
            if (k) {
                unk_1e = 7;
            } else {
                unk_1e = unk_2b0 & 3;
            }
        }
    }
}

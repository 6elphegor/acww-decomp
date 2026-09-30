// mwcc-version: 1.2/sp2
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov003_022164d0_Vec3 {
    s32 x, y, z;
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
    virtual Unk_ov003_022164d0_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_022164d0_Rec {
    u32 pad_00;
    u16 unk_04;
};

struct Unk_ov009_0225bc88_Blk {
    s64 v[6];
};

struct Unk_ov009_0225bf3c_Flags {
    u8 f0 : 1;
    u8 rest : 7;
};

class Unk_0206022c {
public:
    BOOL func_0206022c();
    u8 func_0206045c();
    u8 pad[0x15a4];
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020e2a30 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_022164d0_Vec3 *vfunc_50();
    virtual void vfunc_60(u8 a, void *b);
    virtual Unk_ov003_022164d0_Rec *vfunc_64();
    virtual Unk_ov003_022164d0_Rec *vfunc_68();
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
    virtual void vfunc_9c();
    virtual s32 vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    void func_ov009_0225bc88();
    BOOL func_ov009_0225bbdc(Unk_ov003_022164d0_Vec3 *out, s16 *ang);

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
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags unk_232;
    /* 0x233 */ u8 pad_233;
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_022164d0_Vec3 unk_2a4;
};

extern "C" {
extern u32 data_021f482c;
extern void *data_021c6204;
extern Unk_0206022c data_021e58a8;
extern s8 data_ov003_0222f000[];
extern char data_ov003_02231d50[];
extern char data_ov003_02235358[];

s32 func_020974f8();
s32 func_020978fc();
void *func_020641ec(char *a, u32 b, s32 c, s32 *out);
void *func_0210629c(void *p);
BOOL func_020557a0(void *p, u32 a);
void *func_0205588c(void *p, void *a);
void func_020e8558(void *p);
void func_021039ec(void *a, void *b);
void func_02103830(void *a, void *b);
void func_02002cf8(u32 a, u32 b, void *c, u32 d, u32 e);
s32 func_020639e8(char *buf, const char *fmt, ...);
void func_020b1454(void *p, s32 a);
BOOL func_020b1d3c(u32 a, s32 b);
s32 func_0203d67c(void *p);
void func_02054720(void *self, Unk_ov003_022164d0_Rec *a, s32 b, s32 c, u16 d, u16 e);
void func_020547e4(void *p);
void func_020566bc(void *p);
BOOL func_02056654(void *p);
BOOL func_020565e8(void *p, s32 a);
void *func_020554c0(void *p);
void func_02055b00(void *self, void *a, void *b, s32 c, s32 d, s32 e);
void func_ov009_0225b8b0(void *self, u32 a);
void *func_ov009_0225d6b8(void *self, s32 a);
Unk_ov009_0225e29c *func_ov003_02218b40(u32 a);
u32 func_ov003_02218da8();
}

class Unk_ov003_02231aa8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231aa8();
    virtual ~Unk_ov003_02231aa8();

    /* 0x2b0 */ s8 unk_2b0;
    /* 0x2b1 */ s8 unk_2b1;
};

class Unk_ov003_02231c14 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231c14();
    virtual ~Unk_ov003_02231c14();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_98();
    virtual void vfunc_9c();

    void func_ov003_02216604();
    void func_ov003_02216648();

    /* 0x2b0 */ void *unk_2b0;
    /* 0x2b4 */ void *unk_2b4;
};

class Unk_ov003_02231e4c : public Unk_ov009_0225e29c {
public:
    virtual s32 vfunc_6c(s32 a);
    virtual void vfunc_74();

    BOOL func_ov003_0221706c();
    BOOL func_ov003_02217078();

    void func_ov003_02216824();
    BOOL func_ov003_0221687c();
    void func_ov003_022168d4();
    BOOL func_ov003_02216940();
    void func_ov003_02216998();
    BOOL func_ov003_022169c0();
    void func_ov003_02216a04();
    BOOL func_ov003_02216a5c();
    void func_ov003_02216aa0();
    BOOL func_ov003_02216ac8();
    void func_ov003_02216b38();
    BOOL func_ov003_02216b70();
    void func_ov003_02216ba4();
    BOOL func_ov003_02216bc0();
    s32 func_ov003_02216dd0();

    /* 0x2b0 */ u8 pad_2b0[4];
    /* 0x2b4 */ u8 unk_2b4[8];
    /* 0x2bc */ u32 unk_2bc;
    /* 0x2c0 */ u8 pad_2c0[0x2cc - 0x2c0];
    /* 0x2cc */ u32 *unk_2cc;
};

typedef void (Unk_ov003_02231e4c::*Unk_ov003_02216c20_Fn)();
typedef BOOL (Unk_ov003_02231e4c::*Unk_ov003_02216cf8_Fn)();

// class 1 (0x2b4 bytes)
Unk_ov003_02231aa8::~Unk_ov003_02231aa8() {}

Unk_ov003_02231aa8::Unk_ov003_02231aa8() {
    unk_2b1 = -1;
    unk_2b0 = unk_2b1;
}

struct Unk_ov003_0221655c_Arg {
    u8 *unk_00;
    Unk_ov003_022164d0_Vec3 *unk_04;
};

struct Unk_ov003_0221655c_Owner {
    u8 pad_00[0x2c];
    Unk_ov009_0225e29c *unk_2c;
};

struct Unk_ov003_0221655c_Src {
    u8 *unk_00;
    Unk_ov003_0221655c_Owner *unk_04;
};

extern "C" void func_ov003_0221655c(Unk_ov003_0221655c_Src *a) {
    Unk_ov009_0225e29c *o = a->unk_04->unk_2c;
    if (o) {
        o->vfunc_60(a->unk_00[1], a);
    }
}

extern "C" void func_ov003_0221657c() {
    new Unk_ov003_02231aa8();
}

// class 2 (0x2b8 bytes)
Unk_ov003_02231c14::~Unk_ov003_02231c14() {}

Unk_ov003_02231c14::Unk_ov003_02231c14() {}

extern "C" void func_ov003_022167d0() {
    new Unk_ov003_02231c14();
}

BOOL Unk_ov003_02231c14::vfunc_98() { return TRUE; }
BOOL Unk_ov003_02231c14::vfunc_8c() { return TRUE; }
void Unk_ov003_02231c14::vfunc_9c() { data_021e58a8.func_0206022c(); }

BOOL Unk_ov003_02231c14::vfunc_90() {
    func_020974f8();
    if (func_020978fc() == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov003_02231c14::func_ov003_02216604() {
    if (unk_2b0) {
        func_021039ec(unk_194, unk_2b0);
    }
    if (unk_2b4) {
        func_021039ec(unk_194, unk_2b4);
        func_02103830(unk_194, unk_2b4);
    }
}

extern "C" u8 func_ov003_022166d8() { return data_021e58a8.func_0206045c(); }

extern "C" char *func_ov003_022166a4() {
    u32 i = func_ov003_022166d8();
    u32 c = func_ov003_02218da8();
    func_020639e8(data_ov003_02235358, data_ov003_02231d50, data_ov003_0222f000[i & 0xf], c);
    return data_ov003_02235358;
}

void Unk_ov003_02231c14::func_ov003_02216648() {
    void *r4 = func_020641ec(func_ov003_022166a4(), data_021f482c, -4, 0);
    unk_2b0 = func_0210629c(r4);
    if (func_020557a0(unk_2b0, 0)) {
        unk_2b0 = func_0205588c(unk_2b0, data_021c6204);
    }
    func_020e8558(r4);
}

BOOL Unk_ov003_02231c14::vfunc_24() {
    Unk_ov009_0225e29c *o = func_ov003_02218b40(0x501d);
    if (o) {
        o->func_ov009_0225bc88();
    }
    return TRUE;
}

BOOL Unk_ov003_02231c14::vfunc_70() {
    Unk_ov003_022164d0_Vec3 v;
    s16 ang;
    func_ov003_02216648();
    func_ov003_02216604();
    if (func_ov009_0225bbdc(&v, &ang)) {
        v.x -= 0x2000;
        v.z += 0x1000;
        func_02002cf8(0x24, 0x501d, &v, 0, 0);
    }
    return TRUE;
}

// class 3 state methods
void Unk_ov003_02231e4c::func_ov003_02216824() {
    if (func_ov003_0221706c() && func_02056654(unk_1d4)) {
        func_020b1454(this, 0);
    } else {
        func_020547e4(unk_138);
    }
    func_020566bc(unk_2b4);
    *unk_2cc = unk_2bc;
}

BOOL Unk_ov003_02231e4c::func_ov003_0221687c() {
    Unk_ov003_022164d0_Rec *a = vfunc_64();
    Unk_ov003_022164d0_Rec *b = vfunc_64();
    func_02054720(unk_138, b, 3, 0x1000, a->unk_04 - 1, 0);
    func_ov009_0225b8b0(unk_234, 0x81b);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_022168d4() {
    if (func_ov003_0221706c() && func_02056654(unk_1d4)) {
        if (func_ov003_02217078() == 0) {
            func_020b1454(this, 6);
        } else {
            func_020b1454(this, 2);
        }
    } else {
        func_020547e4(unk_138);
    }
    func_020566bc(unk_2b4);
    *unk_2cc = unk_2bc;
}

BOOL Unk_ov003_02231e4c::func_ov003_02216940() {
    Unk_ov003_022164d0_Rec *a = vfunc_68();
    Unk_ov003_022164d0_Rec *b = vfunc_68();
    func_02054720(unk_138, b, 3, 0x1000, a->unk_04 - 1, 0);
    func_ov009_0225b8b0(unk_234, 0x81a);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216998() {
    func_020566bc(unk_2b4);
    *unk_2cc = unk_2bc;
}

BOOL Unk_ov003_02231e4c::func_ov003_022169c0() {
    Unk_ov003_022164d0_Rec *a = vfunc_68();
    Unk_ov003_022164d0_Rec *b = vfunc_68();
    func_02054720(unk_138, b, 1, 0x1000, a->unk_04 - 1, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216a04() {
    func_020547e4(unk_138);
    func_020566bc(unk_2b4);
    *unk_2cc = unk_2bc;
    if (func_ov003_0221706c() && func_02056654(unk_1d4)) {
        func_020b1454(this, 4);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_02216a5c() {
    Unk_ov003_022164d0_Rec *b = vfunc_68();
    func_02054720(unk_138, b, 1, 0x1000, 0, 0);
    func_ov009_0225b8b0(unk_234, 0x819);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216aa0() {
    func_020566bc(unk_2b4);
    *unk_2cc = unk_2bc;
}

BOOL Unk_ov003_02231e4c::func_ov003_02216ac8() {
    Unk_ov003_022164d0_Rec *a = vfunc_64();
    Unk_ov003_022164d0_Rec *b = vfunc_64();
    func_02054720(unk_138, b, 1, 0x1000, a->unk_04 - 1, 0);
    void *r5 = func_020554c0(unk_138);
    void *r2 = func_ov009_0225d6b8(this, 0);
    func_02055b00(unk_2b4, r5, r2, 0, 0x1000, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216b38() {
    if (func_ov003_0221706c() && func_02056654(unk_1d4)) {
        func_020b1454(this, 2);
    } else {
        func_020547e4(unk_138);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_02216b70() {
    Unk_ov003_022164d0_Rec *b = vfunc_64();
    func_02054720(unk_138, b, 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216ba4() {
    if (func_ov003_02217078()) {
        func_020b1454(this, 1);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_02216bc0() {
    Unk_ov003_022164d0_Rec *b = vfunc_64();
    func_02054720(unk_138, b, 1, 0x1000, 0, 0);
    void *r4 = func_020554c0(unk_138);
    void *r2 = func_ov009_0225d6b8(this, 0);
    func_02055b00(unk_2b4, r4, r2, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::vfunc_74() {
    static Unk_ov003_02216c20_Fn tbl[7] = {
        &Unk_ov003_02231e4c::func_ov003_02216ba4, &Unk_ov003_02231e4c::func_ov003_02216b38,
        &Unk_ov003_02231e4c::func_ov003_02216aa0, &Unk_ov003_02231e4c::func_ov003_02216a04,
        &Unk_ov003_02231e4c::func_ov003_02216998, &Unk_ov003_02231e4c::func_ov003_022168d4,
        &Unk_ov003_02231e4c::func_ov003_02216824};
    if (unk_130 < 7) {
        (this->*tbl[unk_130])();
    }
    if (func_020565e8(unk_2b4, 0x12)) {
        func_ov009_0225b8b0(unk_234, 0x7de);
    }
}

s32 Unk_ov003_02231e4c::vfunc_6c(s32 idx) {
    static Unk_ov003_02216cf8_Fn tbl[7] = {
        &Unk_ov003_02231e4c::func_ov003_02216bc0, &Unk_ov003_02231e4c::func_ov003_02216b70,
        &Unk_ov003_02231e4c::func_ov003_02216ac8, &Unk_ov003_02231e4c::func_ov003_02216a5c,
        &Unk_ov003_02231e4c::func_ov003_022169c0, &Unk_ov003_02231e4c::func_ov003_02216940,
        &Unk_ov003_02231e4c::func_ov003_0221687c};
    if ((u32)idx < 7) {
        if ((this->*tbl[idx])() && func_020b1d3c(unk_132, idx)) {
            unk_130 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov003_02231e4c::func_ov003_02216dd0() {
    u8 s = unk_130;
    if (s == 0 || s == 2) {
        func_0203d67c(this);
    }
}

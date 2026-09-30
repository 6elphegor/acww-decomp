// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_02214494_Vec3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
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
    virtual Unk_ov003_02214494_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);
    void func_02065f50(u32 v);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

// ---------------------------------------------------------------- helper classes
class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 pad[0x26];
};

struct Unk_02032238 {
    Unk_02032238();
    ~Unk_02032238();
    u32 pad[12];
};

class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual Unk_ov003_02214494_Vec3 *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);

    /* 0x04 */ u8 pad_04[0x3c - 4];
    /* 0x3c */ u8 unk_3c;
};

class Unk_020e0cf4 : public Unk_020e0d08 {
public:
    Unk_020e0cf4();
    ~Unk_020e0cf4();
    virtual Unk_ov003_02214494_Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    /* 0x40 */ u8 *unk_40;
};

class Unk_ov003_02230c40 : public Unk_020e0cf4 {
public:
    Unk_ov003_02230c40();
    ~Unk_ov003_02230c40();
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    /* 0x44 */ u8 unk_44;
};

// ---------------------------------------------------------------- ov009 actor base (see src/ov009/unk_0225b880.cpp)
struct Unk_ov003_022141bc_Target {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

struct Unk_ov003_022141bc_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_02214494_Vec3 *vfunc_50();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
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

    s32 func_ov009_0225d650();
    s32 func_ov009_0225bb74();
    BOOL func_ov009_0225bbdc(Unk_ov003_02214494_Vec3 *out, s16 *ang);

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[0x228 - 0x134];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_022141bc_Flags unk_232;
    /* 0x233 */ u8 pad_233[0x2b0 - 0x233];
};

class Unk_ov003_02230df4 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02230df4();
    virtual ~Unk_ov003_02230df4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();

    void func_ov003_02214208();
    BOOL func_ov003_02214284(s32 m);
    void func_ov003_022141bc();
    BOOL func_ov003_022141d4();
    BOOL func_ov003_022141d8();
    BOOL func_ov003_022141e4();
    void func_ov003_02214200();
    BOOL func_ov003_02214204();

    /* 0x2b0 */ s32 unk_2b0;
};

class Unk_ov003_02230ff0 : public Unk_ov003_02230df4 {
public:
    BOOL func_ov003_02214974(s32 m);

    void func_ov003_02214494();
    BOOL func_ov003_02214568();
    void func_ov003_02214578();
    BOOL func_ov003_022145cc();
    void func_ov003_022145dc();
    BOOL func_ov003_02214608();
    void func_ov003_0221461c();
    BOOL func_ov003_02214640();
    void func_ov003_02214644();
    BOOL func_ov003_022146c4();
    void func_ov003_022146c8();
    BOOL func_ov003_02214700();
    void func_ov003_02214704();
    BOOL func_ov003_02214734();
    void func_ov003_02214738();
    BOOL func_ov003_0221475c();
    void func_ov003_02214800();
    BOOL func_ov003_02214848();
    void func_ov003_02214870();

    /* 0x2b4 */ u16 unk_2b4;
    /* 0x2b6 */ u8 unk_2b6;
};

// ---------------------------------------------------------------- the 0x3a0-byte actor
class Unk_ov003_02230c6c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov003_02230c6c();
    virtual ~Unk_ov003_02230c6c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    /* 0x130 */ Unk_020dbd34 unk_130;
    /* 0x1cc */ Unk_020dbd34 unk_1cc;
    /* 0x268 */ u8 pad_268[0x270 - 0x268];
    /* 0x270 */ Unk_02032238 unk_270;
    /* 0x2a0 */ Unk_ov003_02230c40 unk_2a0;
    /* 0x2e8 */ u8 pad_2e8[0x324 - 0x2e8];
    /* 0x324 */ u8 unk_324[0x396 - 0x324];
    /* 0x396 */ u16 unk_396;
    /* 0x398 */ u8 pad_398[0x3a0 - 0x398];
};

extern "C" {
extern void *data_021c620c;
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void func_020f43fc(void *p);
void func_020f440c(void *p);
BOOL func_0206ec6c();
BOOL func_0206eca4(u32 a);
BOOL func_0203d67c(void *p);
BOOL func_0203d704(void *p, u32 a);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
BOOL func_020951d0();
BOOL func_020951c4();
void func_020949a0(u32 a);
void *func_020b4934();
BOOL func_020b4bbc(void *o, s32 a);
s32 func_020b50e8();
void func_020b49c4(void *o, s32 a, Unk_ov003_02214494_Vec3 *v, u32 b, s32 c, u32 d, u32 e);
s32 func_02030814(u32 a);
BOOL func_ov003_02212430(u32 a, s32 *b, s32 *c, s32 d);
BOOL func_0206ed18();
s32 func_020ad274();
s32 func_02067a84(void *o, u8 *p, char *s);
void func_020b1040(u32 a, u32 b);
extern u8 data_ov003_02231138[];
extern u8 data_021ed2c0[];
s32 func_020ad3bc(void *p);
s32 func_020ad5f8();
void func_0206ec84(u32 a, s32 b);
s32 func_020ad2c8();
u32 func_020b10c4(u32 a);
void func_020b10e0(u32 a);
s32 func_020e780c(s32 a, s32 b);
}

// ================================================================
// class Unk_ov003_02230c40
void Unk_ov003_02230c40::vfunc_08(u32 a, u32 b, u32 c) {
    if (c & 4) {
        unk_44 = 1;
    }
}

Unk_ov003_02230c40::~Unk_ov003_02230c40() {
    unk_44 = 0;
}

Unk_ov003_02230c40::Unk_ov003_02230c40() {
    unk_44 = 0;
}

// ================================================================
// class Unk_ov003_02230c6c
void Unk_ov003_02230c6c::operator delete(void *p) {
    void *h = data_021c620c;
    if (h) {
        func_020e85fc(h, p);
    }
}

void *Unk_ov003_02230c6c::operator new(unsigned long size) {
    void *p = func_020e8608(data_021c620c, size);
    func_0212899c(p, 0, size);
    return p;
}

extern "C" s32 func_ov003_02213fb4() { return 0x1400; }
extern "C" s32 func_ov003_02213fbc() { return 0x800; }

Unk_ov003_02230c6c::~Unk_ov003_02230c6c() {
    func_020f43fc(unk_324);
}

Unk_ov003_02230c6c::Unk_ov003_02230c6c() {
    func_020f440c(unk_324);
    unk_396 = 0xfff1;
}

extern "C" void func_ov003_02214168() {
    new Unk_ov003_02230c6c;
}

// ================================================================
// class Unk_ov003_02230df4
BOOL Unk_ov003_02230df4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov003_02230df4::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov003_02230df4::vfunc_18() {
    func_ov003_02214208();
    return TRUE;
}

BOOL Unk_ov003_02230df4::vfunc_70() {
    func_ov003_02214284(0);
    return TRUE;
}

typedef void (Unk_ov003_02230df4::*Unk_02214208_Fn)();
typedef BOOL (Unk_ov003_02230df4::*Unk_02214284_Fn)();

void Unk_ov003_02230df4::func_ov003_02214200() {}

BOOL Unk_ov003_02230df4::func_ov003_02214204() {
    return TRUE;
}

BOOL Unk_ov003_02230df4::func_ov003_022141d4() {
    return TRUE;
}

BOOL Unk_ov003_02230df4::func_ov003_022141d8() {
    return func_ov003_02214284(2);
}

BOOL Unk_ov003_02230df4::func_ov003_022141e4() {
    if (func_0206eca4(0)) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov003_02230df4::func_ov003_022141bc() {
    if (func_0206ec6c()) {
        func_0203d67c(this);
    }
}

void Unk_ov003_02230df4::func_ov003_02214208() {
    static Unk_02214208_Fn tbl[3] = { &Unk_ov003_02230df4::func_ov003_02214200, (Unk_02214208_Fn)&Unk_ov003_02230df4::func_ov003_022141d8, &Unk_ov003_02230df4::func_ov003_022141bc };
    if (unk_2b0 < 3) {
        (this->*tbl[unk_2b0])();
    }
}

BOOL Unk_ov003_02230df4::func_ov003_02214284(s32 m) {
    static Unk_02214284_Fn tbl[3] = { &Unk_ov003_02230df4::func_ov003_02214204, &Unk_ov003_02230df4::func_ov003_022141e4, &Unk_ov003_02230df4::func_ov003_022141d4 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_2b0 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov003_02230df4::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        func_ov003_02214284(1);
        break;
    case 8:
        func_ov003_02214284(0);
        break;
    }
}

BOOL Unk_ov003_02230df4::vfunc_48(Unk_020d9670 *a) {
    if (unk_231 & 8) {
        if (a) {
            if (func_020e780c((s16)(unk_8e + 0x8000), a->unk_8e) < 0x1300) {
                func_0203e42c();
                return TRUE;
            }
        }
    }
    return FALSE;
}

Unk_ov003_02230df4::~Unk_ov003_02230df4() {}

Unk_ov003_02230df4::Unk_ov003_02230df4() {}

extern "C" void func_ov003_02214424() {
    new Unk_ov003_02230df4;
}

// ================================================================
// class Unk_ov003_02230ff0 (state functions)
void Unk_ov003_02230ff0::func_ov003_02214494() {
    if (func_020951d0()) {
        unk_2b4++;
    }
    u32 lim;
    if (func_ov009_0225d650() == 2) {
        lim = 0x14;
    } else {
        lim = 0xf;
    }
    if (func_ov009_0225d650() == 1) {
        lim += 0xc;
    }
    if (unk_2b4 >= lim) {
        s32 t = func_ov009_0225bb74();
        s16 ang;
        Unk_ov003_02214494_Vec3 v;
        if (func_ov009_0225bbdc(&v, &ang)) {
            if (func_020b4bbc(func_020b4934(), t)) {
                v.y = func_02030814(0);
                v.z = v.z + 0x1000;
                void *o = func_020b4934();
                s32 r = func_020b50e8();
                func_020b49c4(o, r, &v, 0xf000000, (s16)(ang + 0x8000), unk_228, unk_22c);
                unk_232.f0 = 1;
            }
        }
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214568() {
    unk_2b4 = 0;
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214578() {
    if (func_020951c4()) {
        func_ov003_02214974(9);
    } else if (unk_2b6 == 0) {
        s16 ang;
        Unk_ov003_02214494_Vec3 v;
        if (func_ov009_0225bbdc(&v, &ang)) {
            if (func_ov003_02212430(2, &v.x, &v.z, ang)) {
                unk_2b6 = 1;
            }
        }
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_022145cc() {
    unk_2b6 = 0;
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_022145dc() {
    if (func_020951d0()) {
        if (func_ov003_02214974(8)) {
            func_0203e47c(this, this);
        }
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214608() {
    func_020949a0(0);
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_0221461c() {
    Unk_ov003_022141bc_Target *t = (Unk_ov003_022141bc_Target *)unk_3c;
    if (t) {
        if (t->unk_04 == 0) {
            func_ov003_02214974(7);
        }
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214640() {
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214644() {
    if (func_0206ec6c()) {
        u8 r[2];
        if (func_0206ed18()) {
            func_020ad274();
            r[0] = 3;
            func_02067a84(unk_3c, &r[0], (char *)data_ov003_02231138);
            ((Unk_ov003_022141bc_Target *)unk_3c)->unk_08 = 1;
            func_ov003_02214974(3);
        } else {
            r[1] = 4;
            func_02067a84(unk_3c, &r[1], (char *)data_ov003_02231138);
            ((Unk_ov003_022141bc_Target *)unk_3c)->unk_08 = 1;
            func_ov003_02214974(3);
            func_020b1040(unk_132, 0);
        }
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_022146c4() {
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_022146c8() {
    if (((Unk_ov003_022141bc_Target *)unk_3c)->unk_04 == 5) {
        func_020ad3bc(data_021ed2c0);
        func_0206ec84(0xe, func_020ad5f8());
        func_ov003_02214974(5);
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214700() {
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214704() {
    Unk_ov003_022141bc_Target *t = (Unk_ov003_022141bc_Target *)unk_3c;
    if (t) {
        if (t->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214734() {
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214738() {
    Unk_ov003_022141bc_Target *t = (Unk_ov003_022141bc_Target *)unk_3c;
    if (t) {
        if (t->unk_04 != 0) {
            func_ov003_02214974(3);
        }
    }
}

struct Unk_ov003_0221475c_Pad {
    s32 v[2];
    Unk_ov003_0221475c_Pad() {}
    ~Unk_ov003_0221475c_Pad() {}
};

BOOL Unk_ov003_02230ff0::func_ov003_0221475c() {
    Unk_ov003_0221475c_Pad pad;
    func_0203e488(this, this);
    func_020a710c((const char *)data_ov003_02231138);
    if (vfunc_8c() == 0) {
        unk_1e = 0x34;
        if (unk_232.f1 == 0) {
            func_020b1040(unk_132, 0);
        }
    } else {
        if (unk_232.f1) {
            unk_1e = 0x31;
        } else if (func_020ad2c8()) {
            unk_1e = 0x32;
        } else {
            unk_1e = 0;
        }
    }
    ((Unk_ov003_022141bc_Target *)unk_3c)->unk_08 = 1;
    func_02065f50(0);
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214800() {
    u32 r = func_020b10c4(unk_132);
    if (r != 0) {
        u8 s;
        if (r == 2) {
            s = 1;
        } else {
            s = 0;
        }
        unk_232.f1 = s;
        func_ov003_02214974(2);
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214848() {
    func_020b10e0(unk_132);
    unk_232.f1 = 0;
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214870() {
    if (unk_231 & 4) {
        func_0203d704(this, 0);
    }
}

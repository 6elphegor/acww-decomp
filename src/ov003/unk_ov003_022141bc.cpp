// mwcc-version: 1.2/sp2
#include "types.h"

class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov003_Vec {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
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
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e624(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    u8 pad_00[0x14];
    s32 unk_14;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void vfunc_s30();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    void func_02065f90(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov003_Blk {
    s64 v[6];
};

struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
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
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d6b8(u32 a);
    void func_ov009_0225d244();
    void func_ov009_0225bc88();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
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
    /* 0x2a4 */ Unk_ov003_Vec unk_2a4;
    /* 0x2b0 */
};

struct Unk_ov003_02230df4_Color {
    u8 a, b, c, d;
    Unk_ov003_02230df4_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct Unk_ov003_SceneEntry {
    void *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

extern "C" {
BOOL func_0206ec6c();
BOOL func_0206eca4(u32 a);
BOOL func_0203d67c(void *p);
s32 func_020e780c(s32 a, s32 b);
}

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

extern "C" void func_ov003_02214424();

typedef void (Unk_ov003_02230df4::*Unk_02214208_Fn)();
typedef BOOL (Unk_ov003_02230df4::*Unk_02214284_Fn)();

extern "C" Unk_ov003_02230df4_Color data_ov003_02235110(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_02235100(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_02235104(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_022350fc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_022350f8(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_022350f4(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov003_SceneEntry data_ov003_02230dd4 = {(void *(*)())func_ov003_02214424, 0x22, 0x28, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void func_ov003_02214424() {
    new Unk_ov003_02230df4;
}

Unk_ov003_02230df4::Unk_ov003_02230df4() {}

Unk_ov003_02230df4::~Unk_ov003_02230df4() {}

BOOL Unk_ov003_02230df4::vfunc_70() {
    func_ov003_02214284(0);
    return TRUE;
}

BOOL Unk_ov003_02230df4::vfunc_18() {
    func_ov003_02214208();
    return TRUE;
}

BOOL Unk_ov003_02230df4::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov003_02230df4::vfunc_0c() {
    return TRUE;
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

void Unk_ov003_02230df4::func_ov003_02214208() {
    static Unk_02214208_Fn tbl[3] = { (Unk_02214208_Fn)&Unk_ov003_02230df4::func_ov003_02214200, (Unk_02214208_Fn)&Unk_ov003_02230df4::func_ov003_022141d8, (Unk_02214208_Fn)&Unk_ov003_02230df4::func_ov003_022141bc };
    if (unk_2b0 < 3) {
        (this->*tbl[unk_2b0])();
    }
}

BOOL Unk_ov003_02230df4::func_ov003_02214204() {
    return TRUE;
}

void Unk_ov003_02230df4::func_ov003_02214200() {}

BOOL Unk_ov003_02230df4::func_ov003_022141e4() {
    if (func_0206eca4(0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02230df4::func_ov003_022141d8() {
    return func_ov003_02214284(2);
}

BOOL Unk_ov003_02230df4::func_ov003_022141d4() {
    return TRUE;
}

void Unk_ov003_02230df4::func_ov003_022141bc() {
    if (func_0206ec6c()) {
        func_0203d67c(this);
    }
}


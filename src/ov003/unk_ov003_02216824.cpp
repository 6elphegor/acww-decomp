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
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ u8 unk_c4[0xc];
    /* 0xd0 */ u16 unk_d0;
    /* 0xd2 */ u8 pad_d2[2];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14 (vfunc_88).
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
    // Slot 0x14 has the name of Unk_ov009_0225e29c::vfunc_88, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev (0x0221445c).  The compiler also emits a link-once copy of the
    // thunk in this unit; the linker keeps the first one (unk_ov003_022141bc.cpp) and drops this one.
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

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov009_0225bc88_Blk {
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
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual void vfunc_60(u32 a, void *p);
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
    virtual BOOL vfunc_b8(void *a);

    void *func_ov009_0225d6b8(u32 a);
    void func_ov009_0225d264(Unk_ov009_0225bc88_Blk *out);
    void func_ov009_0225bc88();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
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
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
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

// ---- main-module helper classes ----
class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void func_020566bc();
    BOOL func_02056654();
    BOOL func_020565e8(s32 a);

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
    void func_02055b38(s32 a, s32 b, s32 c, u16 d);
    BOOL func_02055bcc(u32 a, void *c);

    s32 *unk_18;
    u32 unk_1c;
};

class Unk_020dbe34 {
public:
    void *func_020554c0();
};

// Member at +0x2d4: the original constructs it with the base-object constructor (C1 here; the member is built with the complete-object ctor at 0x020b6a94), which a member declaration
// cannot do, so it is raw storage plus explicit calls through the real symbol names.
struct Unk_020b6a94 {
    u8 pad[0x1c];
};

class Unk_ov009_0225b894 {
public:
    void func_ov009_0225b8b0(u32 a);
};

struct Unk_ov003_02231e4c_Color {
    u8 a, b, c, d;
    Unk_ov003_02231e4c_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
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

struct Unk_ov003_02216824_Rec {
    u32 pad_00;
    u16 unk_04;
};

class Unk_020970b8 {
public:
    BOOL func_020970b8(s32 i);
};

extern "C" {
extern void *data_021c6204;
extern void *data_020cbb18;
extern u8 data_021f47e0[];

BOOL func_020b1454(void *o, s32 v);
BOOL func_020b1d3c(u32 a, s32 b);
BOOL func_0203d67c(void *p);
void _ZN12Unk_0205454c13func_02054720Eiiitt(void *self, void *a, s32 b, s32 c, u16 d, u16 e);
void _ZN12Unk_020dbd5413func_020547e4Ev(void *self);
void _ZN12Unk_020dbe4c13func_02055b00Eiiiit(void *self, void *a, void *b, s32 c, s32 d, u16 e);
BOOL func_0206ec6c();
BOOL func_ov003_022123a4(s32 a);
BOOL func_0206eca4(u32 a);
s32 func_02030814(s32 a);
BOOL func_ov003_022123e0(void *p);
u32 func_0203ef38(void *out, void *in);
void func_020e8528(void *m, s32 a, s32 b, s32 c);
void *func_0209750c();
Unk_020970b8 *func_020979d8(void *p);
BOOL _ZN12Unk_0206555413func_02065578Ev();
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
void *func_020b50b4();
void _ZN12Unk_020b696013func_020b68d4EP12Unk_020b6a94(void *self, void *o);
BOOL _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih(void *self, void *o, void *a, s32 b, s32 c, u8 d);
u32 func_ov003_02218b1c(void *p);
BOOL func_020b5184();
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *self);
BOOL _ZN12Unk_020cbb1813func_020729ccEj(void *self, u32 a);
u32 func_020b1d80(u32 a);
void func_ov003_02217350();
void _ZN12Unk_020b6a94C1Ev(Unk_020b6a94 *self);
void _ZN12Unk_020b6a94D1Ev(Unk_020b6a94 *self);
void _ZN12Unk_020d967013func_0203e42cEv(void *self, void *a);
}

// ============================================================ class Unk_ov003_02231e4c
class Unk_ov003_02231e4c : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231e4c();
    virtual ~Unk_ov003_02231e4c();

    virtual BOOL vfunc_18();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b8(void *a);

    // state methods (old file 022164d0)
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

    // old file 02216df0
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

typedef void (Unk_ov003_02231e4c::*Unk_ov003_02216c20_Fn)();
typedef BOOL (Unk_ov003_02231e4c::*Unk_ov003_02216cf8_Fn)();
typedef s32 (Unk_ov003_02231e4c::*Unk_ov003_02231e4c_Fn)();

// colour constants (sinit store order = definition order), then the registration entry
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235380(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_0223537c(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235390(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235394(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_0223538c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235388(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov003_SceneEntry data_ov003_02231e2c = {(void *(*)())func_ov003_02217350, 0x24, 0x2a, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void func_ov003_02217350() {
    new Unk_ov003_02231e4c;
}

Unk_ov003_02231e4c::Unk_ov003_02231e4c() {
    _ZN12Unk_020b6a94C1Ev(&unk_2d4);
}

Unk_ov003_02231e4c::~Unk_ov003_02231e4c() {
    _ZN12Unk_020b6a94D1Ev(&unk_2d4);
}

BOOL Unk_ov003_02231e4c::vfunc_70() {
    if (func_ov009_0225d6b8(0)) {
        if (unk_2b4.func_02055bcc((u32)unk_194, data_021c6204)) {
            unk_2b4.func_02055b38((s32)func_ov009_0225d6b8(0), 1, 0x1000, 0);
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
    _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih(func_020b50b4(), &unk_2d4, &v, 0x1000, 7, b);
    unk_2f0 = 1;
    if (!func_020b5184()) {
        unk_2f0 = 0;
    } else {
        void *g = data_020cbb18;
        if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
            if (!_ZN12Unk_020cbb1813func_020729ccEj(g, 0)) {
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

BOOL Unk_ov003_02231e4c::vfunc_18() {
    func_02216eb4();
    _ZN12Unk_020b696013func_020b68d4EP12Unk_020b6a94(func_020b50b4(), &unk_2d4);
    return TRUE;
}

BOOL Unk_ov003_02231e4c::vfunc_b0() {
    return FALSE;
}

BOOL Unk_ov003_02231e4c::vfunc_48(void *a) {
    _ZN12Unk_020d967013func_0203e42cEv(this, a);
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

s32 Unk_ov003_02231e4c::func_02217078() {
    if (func_0221706c()) {
        Unk_020970b8 *p = func_020979d8(func_0209750c());
        if (p) {
            s32 n = 0;
            u32 i;
            for (i = n; i < 10; i++) {
                if (p->func_020970b8(i)) {
                    if (_ZN12Unk_0206555413func_02065578Ev()) {
                        n++;
                    }
                }
            }
            return n;
        }
    }
    return 0;
}

u32 Unk_ov003_02231e4c::func_0221706c() {
    return unk_2f0;
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
    func_ov009_0225d264((Unk_ov009_0225bc88_Blk *)a);
    *(Unk_ov009_0225bc88_Blk *)data_021f47e0 = *(Unk_ov009_0225bc88_Blk *)a;
    func_020e8528(data_021f47e0, (s32)0xffffe000, 0, 0x1000);
    *(Unk_ov009_0225bc88_Blk *)a = *(Unk_ov009_0225bc88_Blk *)data_021f47e0;
    return TRUE;
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

void Unk_ov003_02231e4c::func_02216eb4() {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Unk_ov003_02231e4c::func_02216eac,
        &Unk_ov003_02231e4c::func_02216e54,
        &Unk_ov003_02231e4c::func_02216e2c,
        &Unk_ov003_02231e4c::func_02216e04,
        &Unk_ov003_02231e4c::func_ov003_02216dd0,
    };
    if (unk_2b0 < 5) {
        (this->*tbl[unk_2b0])();
    }
}

s32 Unk_ov003_02231e4c::func_02216eb0() {
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_02216eac() {
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

s32 Unk_ov003_02231e4c::func_02216e54() {
    if (unk_130 == 4) {
        func_02216f4c(2);
    }
}

s32 Unk_ov003_02231e4c::func_02216e38() {
    if (func_0206eca4(0x27)) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov003_02231e4c::func_02216e2c() {
    return func_02216f4c(3);
}

s32 Unk_ov003_02231e4c::func_02216e28() {
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_02216e04() {
    if (func_0206ec6c()) {
        if (func_ov003_022123a4(2)) {
            func_02216f4c(4);
        }
    }
}

// ---- old file 02216df0
s32 Unk_ov003_02231e4c::func_02216df0() {
    func_020b1454(this, 5);
    return TRUE;
}

s32 Unk_ov003_02231e4c::func_ov003_02216dd0() {
    u8 s = unk_130;
    if (s == 0 || s == 2) {
        func_0203d67c(this);
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

void Unk_ov003_02231e4c::vfunc_74() {
    static Unk_ov003_02216c20_Fn tbl[7] = {
        &Unk_ov003_02231e4c::func_ov003_02216ba4, &Unk_ov003_02231e4c::func_ov003_02216b38,
        &Unk_ov003_02231e4c::func_ov003_02216aa0, &Unk_ov003_02231e4c::func_ov003_02216a04,
        &Unk_ov003_02231e4c::func_ov003_02216998, &Unk_ov003_02231e4c::func_ov003_022168d4,
        &Unk_ov003_02231e4c::func_ov003_02216824};
    if (unk_130 < 7) {
        (this->*tbl[unk_130])();
    }
    if (unk_2b4.func_020565e8(0x12)) {
        ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b8b0(0x7de);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_02216bc0() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 1, 0x1000, 0, 0);
    void *r4 = ((Unk_020dbe34 *)unk_138)->func_020554c0();
    void *r2 = func_ov009_0225d6b8(0);
    _ZN12Unk_020dbe4c13func_02055b00Eiiiit(&unk_2b4, r4, r2, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216ba4() {
    if (func_02217078()) {
        func_020b1454(this, 1);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_02216b70() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216b38() {
    if (func_0221706c() && ((Unk_020dbe7c *)unk_1d4)->func_02056654()) {
        func_020b1454(this, 2);
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_02216ac8() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_64();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 1, 0x1000, a->unk_04 - 1, 0);
    void *r5 = ((Unk_020dbe34 *)unk_138)->func_020554c0();
    void *r2 = func_ov009_0225d6b8(0);
    _ZN12Unk_020dbe4c13func_02055b00Eiiiit(&unk_2b4, r5, r2, 0, 0x1000, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216aa0() {
    unk_2b4.func_020566bc();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

BOOL Unk_ov003_02231e4c::func_ov003_02216a5c() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 1, 0x1000, 0, 0);
    ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b8b0(0x819);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216a04() {
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
    unk_2b4.func_020566bc();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
    if (func_0221706c() && ((Unk_020dbe7c *)unk_1d4)->func_02056654()) {
        func_020b1454(this, 4);
    }
}

BOOL Unk_ov003_02231e4c::func_ov003_022169c0() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_68();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 1, 0x1000, a->unk_04 - 1, 0);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_02216998() {
    unk_2b4.func_020566bc();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

BOOL Unk_ov003_02231e4c::func_ov003_02216940() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_68();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 3, 0x1000, a->unk_04 - 1, 0);
    ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b8b0(0x81a);
    return TRUE;
}

void Unk_ov003_02231e4c::func_ov003_022168d4() {
    if (func_0221706c() && ((Unk_020dbe7c *)unk_1d4)->func_02056654()) {
        if (func_02217078() == 0) {
            func_020b1454(this, 6);
        } else {
            func_020b1454(this, 2);
        }
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
    }
    unk_2b4.func_020566bc();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

BOOL Unk_ov003_02231e4c::func_ov003_0221687c() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_64();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, b, 3, 0x1000, a->unk_04 - 1, 0);
    ((Unk_ov009_0225b894 *)unk_234)->func_ov009_0225b8b0(0x81b);
    return TRUE;
}

// ---- state methods
void Unk_ov003_02231e4c::func_ov003_02216824() {
    if (func_0221706c() && ((Unk_020dbe7c *)unk_1d4)->func_02056654()) {
        func_020b1454(this, 0);
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
    }
    unk_2b4.func_020566bc();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}


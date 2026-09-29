// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

struct Unk_ov004_02208ba8_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u16 unk_04;
};

struct Unk_ov004_0220ce38_Slot {
    /* 0x00 */ u32 sub[2];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 pad_0c[3];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
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

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

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
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
};

class Unk_ov004_022059f4 {
public:
    Unk_ov004_022059f4();
    ~Unk_ov004_022059f4();
    void func_ov004_022059f4();
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
    u32 func_ov004_02205a64(u32 a, u32 b);
    /* 0x00 */ u8 pad[0x58];
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual BOOL vfunc_a0();

    BOOL func_ov004_02206f8c();
    BOOL func_ov004_02208980();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    void func_ov004_0220878c();
    u32 func_ov004_022087a4();
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    void func_ov004_02208ff0(s32 a);
    void func_ov004_022091e0();
    void func_ov004_02209198();

    /* 0x0f0 */ u8 pad_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ u32 unk_128;
    /* 0x12c */ u8 pad_12c[0x534 - 0x12c];
    /* 0x534 */ u8 f_534[0x590 - 0x534];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[0x5d0 - 0x594];
    /* 0x5d0 */ u8 f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 f_744[0x768 - 0x744];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u8 pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u8 pad_780[0x794 - 0x780];
    /* 0x794 */ u8 f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 f_7b4[0x840 - 0x7b4];
};

class Unk_ov004_0224b7c0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b7c0();
    virtual ~Unk_ov004_0224b7c0();
    /* 0x840 */ u8 pad_840[4];
};

class Unk_ov004_0224b8ec : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b8ec();
    virtual ~Unk_ov004_0224b8ec();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_02212b14();
    BOOL func_ov004_02212b1c();
    void func_ov004_02212b40();
    BOOL func_ov004_02212b74();
    void func_ov004_02212b98();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ Unk_ov004_022059f4 unk_844;
};

// Classes below exist only so their adjuster thunks are emitted.
#define STUB(N) class Unk_ov004_##N : public Unk_ov004_0224882c { public: virtual ~Unk_ov004_##N(); }; Unk_ov004_##N::~Unk_ov004_##N() {} extern "C" void stub_##N() { new Unk_ov004_##N; }
class Unk_ov004_0224ba18 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224ba18();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
};
Unk_ov004_0224ba18::~Unk_ov004_0224ba18() {}
void Unk_ov004_0224ba18::vfunc_s14() {}
void Unk_ov004_0224ba18::vfunc_s18() {}
extern "C" void stub_0224ba18() { new Unk_ov004_0224ba18; }

extern "C" {
BOOL func_ov004_02205c44(void *, s32, s32);
BOOL func_ov004_02205c6c(void *);
BOOL func_ov004_02205c7c(void *);
void func_ov004_02235908(void *, u32, void *);
void func_ov004_022358e0(void *, s32);
BOOL func_020565e8(void *, s32);
u32 func_02063b8c();
void func_02051cc8(void *, u8, s32, s32);
void func_ov004_02209aa8(void *);
void func_ov004_022096b4(void *);
void func_ov004_02209edc(void *);
void *func_ov004_02209ef0(u32);
extern u8 data_ov004_02240034[];
}

typedef void (Unk_ov004_0224b8ec::*Unk_ov004_02212b98_Fn)();
typedef BOOL (Unk_ov004_0224b8ec::*Unk_ov004_02212c04_Fn)();

// ---- class Unk_ov004_0224b7c0 ----
Unk_ov004_0224b7c0::~Unk_ov004_0224b7c0() {
}

Unk_ov004_0224b7c0::Unk_ov004_0224b7c0() {
}

extern "C" void func_ov004_02212af8() {
    new Unk_ov004_0224b7c0;
}

// ---- class Unk_ov004_0224b8ec ----
void Unk_ov004_0224b8ec::func_ov004_02212b14() {
    func_ov004_02212b40();
}

BOOL Unk_ov004_0224b8ec::func_ov004_02212b1c() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b8ec::func_ov004_02212b40() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, (unk_840 + 1) & 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b8ec::func_ov004_02212b74() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224b8ec::func_ov004_02212b98() {
    static Unk_ov004_02212b98_Fn tbl[2] = {
        &Unk_ov004_0224b8ec::func_ov004_02212b40,
        &Unk_ov004_0224b8ec::func_ov004_02212b14,
    };
    if (unk_840 < 2) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_0224b8ec::vfunc_70(s32 a, s32 b) {
    func_ov004_0220878c();
    static Unk_ov004_02212c04_Fn tbl[2] = {
        &Unk_ov004_0224b8ec::func_ov004_02212b74,
        &Unk_ov004_0224b8ec::func_ov004_02212b1c,
    };
    if ((u32)a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224b8ec::vfunc_74(u32 a) {
    if (a < 2) {
        return data_ov004_02240034[a];
    }
    return 0;
}

BOOL Unk_ov004_0224b8ec::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224b8ec::vfunc_80() {
    if (unk_77c == 1) {
        func_ov004_02208980();
    }
    unk_844.func_ov004_022059f4();
    unk_844.func_ov004_02205a1c(1, 0, 0);
    func_ov004_022091e0();
    func_ov004_02212b98();
    switch (func_ov004_022087a4()) {
    case 0x123:
        if (!func_ov004_02206f8c()) {
            func_ov004_02235908(f_794, 0x429, f_7b4);
            if (func_020565e8(f_5d0, 0x43)) {
                func_ov004_022358e0(f_794, 1);
            }
        }
        break;
    case 0x1fb:
        if (!func_ov004_02206f8c()) {
            func_ov004_02235908(f_794, 0x42b, f_7b4);
            if (func_020565e8(f_5d0, 4)) {
                func_ov004_022358e0(f_794, 1);
            } else if (func_020565e8(f_5d0, 0x16)) {
                func_ov004_022358e0(f_794, 2);
            }
        }
        break;
    case 0x1fc:
        if (!func_ov004_02206f8c()) {
            func_ov004_02235908(f_794, 0x42c, f_7b4);
            if (func_020565e8(f_5d0, 5) || func_020565e8(f_5d0, 0x12)) {
                func_ov004_022358e0(f_794, 1);
            }
        }
        break;
    default:
        func_ov004_02209198();
        break;
    }
    return TRUE;
}

BOOL Unk_ov004_0224b8ec::vfunc_7c() {
    if (unk_77c == 1) {
        func_ov004_02208ff0(0);
        u32 t = (unk_768 == 1) ? 0 : func_02063b8c();
        func_ov004_02208de0(0, 0, 0x1000, (u16)t);
        unk_844.func_ov004_02205a64(unk_590, 1);
    }
    if (func_ov004_02205c7c(f_73c)) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224b8ec::~Unk_ov004_0224b8ec() {
}

Unk_ov004_0224b8ec::Unk_ov004_0224b8ec() {
}

extern "C" void func_ov004_02212f0c() {
    new Unk_ov004_0224b8ec;
}

STUB(0224a3d4)
STUB(0224af8c)
STUB(0224ac08)
STUB(0224a2a8)
STUB(02249a74)
STUB(0224b694)
STUB(0224aadc)
STUB(0224a758)
STUB(0224a17c)
STUB(02249df8)
STUB(02249948)
STUB(022495c4)
STUB(0224b568)
STUB(0224b1e4)
STUB(0224ae60)
STUB(0224ad34)

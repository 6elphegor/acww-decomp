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

class Unk_ov004_022488d8 {
public:
    Unk_ov004_022488d8();
    virtual ~Unk_ov004_022488d8();
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
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

    // Callees outside this range
    BOOL func_ov004_02206f8c();
    BOOL func_ov004_02208980();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    void func_ov004_0220878c();
    u32 func_ov004_022087a4();
    void func_ov004_02207c40(void *a, s32 b, s32 c);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_022057b0();
    void func_ov004_0220711c(void *a, void *b, s32 c, s32 d);
    void func_ov004_02205814();
    void func_ov004_02209198();
    void func_ov004_02208a18(s32 a, s32 b, s32 c);
    void func_ov004_02208ba8(s32 a, s32 b, s32 c, s32 d);

    /* 0x0f0 */ u8 pad_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ u32 unk_128;
    /* 0x12c */ u8 pad_12c[0x534 - 0x12c];
    /* 0x534 */ u8 f_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 f_744[0x760 - 0x744];
    /* 0x760 */ u8 f_760[0x768 - 0x760];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u8 pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u32 unk_780;
    /* 0x784 */ u8 pad_784[0x840 - 0x784];
};


class Unk_ov004_02249a74 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249a74();
    virtual ~Unk_ov004_02249a74();
    /* 0x840 */ u8 pad_840[4];
};

class Unk_ov004_0224a2a8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a2a8();
    virtual ~Unk_ov004_0224a2a8();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_022118ec();
    BOOL func_ov004_02211930();
    void func_ov004_02211978();
    BOOL func_ov004_022119bc();
    void func_ov004_022119f8();
    BOOL func_ov004_02211a30();
    void func_ov004_02211a78();
    BOOL func_ov004_02211ab8();
    void func_ov004_02211af4();
    /* 0x840 */ u8 pad_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
};

class Unk_ov004_0224ac08 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ac08();
    virtual ~Unk_ov004_0224ac08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_02211d2c();
    BOOL func_ov004_02211d5c();
    void func_ov004_02211d90();
    BOOL func_ov004_02211dd0();
    void func_ov004_02211dfc();
    BOOL func_ov004_02211e2c();
    void func_ov004_02211e64();
    BOOL func_ov004_02211ea4();
    void func_ov004_02211ed8();
    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

class Unk_ov004_0224af8c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224af8c();
    virtual ~Unk_ov004_0224af8c();
    void func_ov004_02212110();
    BOOL func_ov004_02212140();
    /* 0x840 */ u8 pad_840[4];
    /* 0x844 */ u32 unk_844;
    /* 0x848 */ u8 f_848[0xcc - 4];
};

extern "C" {
BOOL func_ov004_02205c44(void *, s32, s32);
BOOL func_ov004_02205c6c(void *);
BOOL func_ov004_02205c7c(void *);
void func_ov004_022059b0(void *, s32);
void func_ov004_02205a1c(void *, s32, s32, s32);
BOOL func_ov004_02234ad4(void);
void func_ov004_02209aa8(void *);
void func_ov004_022096b4(void *);
void func_ov004_02209edc(void *);
void *func_ov004_02209ef0(u32);
void func_02051cc8(void *, s32, s32, s32);
void func_020e761c(void *, u32, u32);
extern u8 data_ov004_02240060[];
extern u8 data_ov004_02240054[];
}

typedef void (Unk_ov004_0224a2a8::*Unk_ov004_02211af4_Fn)();
typedef BOOL (Unk_ov004_0224a2a8::*Unk_ov004_02211b80_Fn)();
typedef void (Unk_ov004_0224ac08::*Unk_ov004_02211ed8_Fn)();
typedef BOOL (Unk_ov004_0224ac08::*Unk_ov004_02211f64_Fn)();

// ---- class A (0x02249a74) ----
Unk_ov004_02249a74::~Unk_ov004_02249a74() {
}

Unk_ov004_02249a74::Unk_ov004_02249a74() {
}

extern "C" void func_ov004_022118d0() {
    new Unk_ov004_02249a74;
}

// ---- class B (0x0224a2a8) ----
void Unk_ov004_0224a2a8::func_ov004_022118ec() {
    func_ov004_022059b0(f_760, 1);
    func_ov004_02209198();
    func_ov004_02205c44(f_73c, 0, 0);
    if (func_ov004_02208980()) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_02211930() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_022059b0(f_760, 1);
    func_ov004_02208ba8(1, 1, 0x1000, 0);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_02211978() {
    func_ov004_02209198();
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 3, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_022119bc() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02208a18(0, 1, 0x1000);
    func_ov004_022059b0(f_760, 1);
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_022119f8() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02209198();
    if (func_ov004_02208980()) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_02211a30() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_022059b0(f_760, 1);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_02211a78() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 1, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_02211ab8() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02208a18(1, 1, 0x1000);
    func_ov004_022059b0(f_760, 0);
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_02211af4() {
    static Unk_ov004_02211af4_Fn tbl[4] = {
        &Unk_ov004_0224a2a8::func_ov004_02211a78,
        &Unk_ov004_0224a2a8::func_ov004_022119f8,
        &Unk_ov004_0224a2a8::func_ov004_02211978,
        &Unk_ov004_0224a2a8::func_ov004_022118ec,
    };
    if (unk_841 < 4) {
        (this->*tbl[unk_841])();
    }
}

BOOL Unk_ov004_0224a2a8::vfunc_70(s32 a, s32 b) {
    func_ov004_0220878c();
    static Unk_ov004_02211b80_Fn tbl[4] = {
        &Unk_ov004_0224a2a8::func_ov004_02211ab8,
        &Unk_ov004_0224a2a8::func_ov004_02211a30,
        &Unk_ov004_0224a2a8::func_ov004_022119bc,
        &Unk_ov004_0224a2a8::func_ov004_02211930,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_841 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224a2a8::vfunc_74(u32 a) {
    if (a < 4) {
        return data_ov004_02240060[a];
    }
    return 0;
}

BOOL Unk_ov004_0224a2a8::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a2a8::vfunc_80() {
    func_ov004_02211af4();
    return TRUE;
}

BOOL Unk_ov004_0224a2a8::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    if (!func_ov004_02205c7c(f_73c) || func_ov004_02234ad4()) {
        vfunc_70(0, 0xff);
    } else {
        vfunc_70(2, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224a2a8::~Unk_ov004_0224a2a8() {
}

Unk_ov004_0224a2a8::Unk_ov004_0224a2a8() {
}

extern "C" void func_ov004_02211d10() {
    new Unk_ov004_0224a2a8;
}

// ---- class C (0x0224ac08) ----
void Unk_ov004_0224ac08::func_ov004_02211d2c() {
    func_ov004_02205c44(f_73c, 0, 0);
    if (func_ov004_02208980()) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211d5c() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02208a18(0, 3, 0x1000);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211d90() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 3, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211dd0() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02208a18(0, 1, 0x1000);
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211dfc() {
    func_ov004_02205c44(f_73c, 1, 0);
    if (func_ov004_02208980()) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211e2c() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211e64() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 1, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211ea4() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02208ba8(0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211ed8() {
    static Unk_ov004_02211ed8_Fn tbl[4] = {
        &Unk_ov004_0224ac08::func_ov004_02211e64,
        &Unk_ov004_0224ac08::func_ov004_02211dfc,
        &Unk_ov004_0224ac08::func_ov004_02211d90,
        &Unk_ov004_0224ac08::func_ov004_02211d2c,
    };
    if (unk_840 < 4) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_0224ac08::vfunc_70(s32 a, s32 b) {
    func_ov004_0220878c();
    static Unk_ov004_02211f64_Fn tbl[4] = {
        &Unk_ov004_0224ac08::func_ov004_02211ea4,
        &Unk_ov004_0224ac08::func_ov004_02211e2c,
        &Unk_ov004_0224ac08::func_ov004_02211dd0,
        &Unk_ov004_0224ac08::func_ov004_02211d5c,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224ac08::vfunc_74(u32 a) {
    if (a < 4) {
        return data_ov004_02240054[a];
    }
    return 0;
}

BOOL Unk_ov004_0224ac08::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224ac08::vfunc_80() {
    func_ov004_02211ed8();
    return TRUE;
}

BOOL Unk_ov004_0224ac08::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    if (func_ov004_02205c7c(f_73c) && !func_ov004_02234ad4()) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224ac08::~Unk_ov004_0224ac08() {
}

Unk_ov004_0224ac08::Unk_ov004_0224ac08() {
}

extern "C" void func_ov004_022120f4() {
    new Unk_ov004_0224ac08;
}

// ---- class D (0x0224af8c) ----
void Unk_ov004_0224af8c::func_ov004_02212110() {
    func_020e761c(&unk_844, 0, 0xcc);
    if (unk_844 == 0) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224af8c::func_ov004_02212140() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02209108();
    func_ov004_02205a1c(&unk_844 + 1, 1, 1, 0);
    return TRUE;
}

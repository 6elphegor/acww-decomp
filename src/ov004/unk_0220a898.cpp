#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------------------------------------------------------------
// Main-module base classes (layout only; copied in shape from src/main)

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xd4 - 0x50];
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
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0xec - 0xd4];
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// ---------------------------------------------------------------------------------------------------------------------
// Externs

extern "C" {
extern u8 data_ov004_02240024[];
extern u8 data_ov004_02240038[];
extern char data_ov004_0224bb50[];

s32 func_02051cc8(s32 a, s32 b, u8 c, u8 d);
s32 func_02051da4(s32 a, s32 b, u8 c, u8 d);
s32 func_02063b8c(s32 a, ...);
s32 func_0204b248(s32 a, s32 b);
BOOL func_0203c23c(u32 a, u16 *p);
s32 func_0203c234(s32 a);
BOOL func_020b8840(void *a, s32 b, char *c, s32 d, s32 e, s32 f);

s32 func_ov004_02208de0(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov004_02208ba8(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov004_022087a4(void *p);
s32 func_ov004_02233128(void);
s32 func_ov004_02208ff0(void *p);
void func_ov004_02208980(void *p);
void func_ov004_02209198(void *p);
void func_ov004_02209150(void *p);
void func_ov004_02209108(void *p);
void func_ov004_02205a1c(void *p, s32 a, s32 b, s32 c);
s32 func_ov004_02205c6c(void *p);
void func_ov004_02205c44(void *p, s32 a, s32 b);
void func_ov004_022059f4(void *p);
s32 func_ov004_02205c7c(void *p);
void func_ov004_02205a64(void *p, s32 a, s32 b);
s32 func_ov004_02234ad4(void);
void func_ov004_022059b0(void *p, s32 a);
s32 func_ov004_02235a04(void);
s32 func_ov004_02235a0c(s32 a);
s32 func_ov004_02235c74(s32 a);
}

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 4 base class (vtable 0x0224882c, secondary vtable 0x022488d8 at +0xec)

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_020e2a30 {
public:
    Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);
    virtual ~Unk_ov004_0224882c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual BOOL vfunc_70(u32 a, u32 b);
    virtual u32 vfunc_74(u32 a);
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual void vfunc_84();
    virtual BOOL vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    /* 0x10c */ u8 pad_10c[0x590 - 0x10c];
    /* 0x590 */ s32 unk_590;
    /* 0x594 */ u8 pad_594[0x73c - 0x594];
    /* 0x73c */ u8 unk_73c[0x24];
    /* 0x760 */ u8 unk_760[8];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[0x840 - 0x76c];
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224b43c

class Unk_ov004_0224b43c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b43c();
    virtual ~Unk_ov004_0224b43c() {}
    virtual BOOL vfunc_7c();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 unk_842;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 unk_845;
    /* 0x846 */ u8 pad_846[6];
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224936c

struct Unk_ov004_02205ad4 {
    Unk_ov004_02205ad4();
    ~Unk_ov004_02205ad4();
    u8 pad[0x58];
};

class Unk_ov004_0224936c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224936c();
    virtual ~Unk_ov004_0224936c() {}
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_0220aa30();
    BOOL func_0220aa74();
    void func_0220aaac();
    BOOL func_0220aae8();
    void func_0220ab20();

    /* 0x840 */ Unk_ov004_02205ad4 unk_840;
    /* 0x898 */ u8 unk_898;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x02249498

class Unk_ov004_02249498 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249498();
    virtual ~Unk_ov004_02249498() {}
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    void func_0220ad88();
    BOOL func_0220adb0();
    void func_0220adcc();
    BOOL func_0220adf4();
    void func_0220ae10();
    void func_0220af14();
    void func_0220af28();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x022496f0

class Unk_ov004_022496f0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_022496f0();
    virtual ~Unk_ov004_022496f0() {}
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u16 unk_840;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224981c

class Unk_ov004_0224981c : public Unk_ov004_0224882c {
public:
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ u8 unk_844[4];
};

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224b43c

BOOL Unk_ov004_0224b43c::vfunc_7c() {
    func_ov004_02208de0(this, 0, 1, 0x1000, 0);
    func_ov004_022087a4(this);
    s32 t = func_ov004_02233128();
    switch (t) {
    case 0x3f9:
        unk_844 = 4;
        unk_840 = unk_844;
        break;
    case 0x3fb:
        unk_844 = 4;
        unk_840 = unk_844;
        break;
    case 0x3fa:
        unk_844 = 4;
        unk_840 = unk_844;
        break;
    case 0x3fc:
        unk_844 = 2;
        unk_840 = unk_844;
        break;
    default:
        unk_844 = 1;
        unk_840 = unk_844;
        break;
    }
    unk_845 = 0;
    unk_842 = 0;
    if (unk_768 != 1) {
        if (t == 0x3fc) {
            unk_842 = func_02063b8c(0x3c, 0);
        } else if ((u16)(t + 0xfc07) <= 2) {
            unk_842 = func_02063b8c(0xc8, 0);
        } else {
            unk_842 = func_02063b8c(unk_840 * func_ov004_02208ff0(this));
        }
    }
    return TRUE;
}

extern "C" void func_ov004_0220aa14() {
    new Unk_ov004_0224b43c;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224936c

void Unk_ov004_0224936c::func_0220aa30() {
    func_ov004_02208980(this);
    func_ov004_02205a1c(&unk_840, 1, 1, 0);
    func_ov004_02209198(this);
    if (func_ov004_02205c6c(unk_73c)) {
        func_02051cc8((s32)this, 0, 0xff, 1);
    }
}

BOOL Unk_ov004_0224936c::func_0220aa74() {
    func_ov004_02209150(this);
    func_ov004_02205c44(unk_73c, 1, 0);
    func_ov004_02208ba8(this, 1, 0, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224936c::func_0220aaac() {
    func_ov004_02208980(this);
    func_ov004_02205a1c(&unk_840, 0, 1, 0);
    if (func_ov004_02205c6c(unk_73c)) {
        func_02051cc8((s32)this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224936c::func_0220aae8() {
    func_ov004_02209108(this);
    func_ov004_02205c44(unk_73c, 0, 0);
    func_ov004_02208ba8(this, 0, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224936c::func_0220ab20() {
    static void (Unk_ov004_0224936c::*tbl[2])() = {&Unk_ov004_0224936c::func_0220aaac, &Unk_ov004_0224936c::func_0220aa30};
    if (unk_898 < 2) {
        (this->*tbl[unk_898])();
    }
}

BOOL Unk_ov004_0224936c::vfunc_70(u32 a, u32 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static BOOL (Unk_ov004_0224936c::*tbl[2])() = {&Unk_ov004_0224936c::func_0220aae8, &Unk_ov004_0224936c::func_0220aa74};
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_898 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224936c::vfunc_74(u32 a) {
    if (a < 2) {
        return data_ov004_02240024[a];
    }
    return 0;
}

BOOL Unk_ov004_0224936c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224936c::vfunc_80() {
    func_0220ab20();
    func_ov004_022059f4(&unk_840);
    return TRUE;
}

BOOL Unk_ov004_0224936c::vfunc_7c() {
    func_ov004_02208de0(this, 0, 1, 0x1000, 0);
    s32 t = unk_590;
    s32 r = func_ov004_02205c7c(unk_73c);
    func_ov004_02205a64(&unk_840, t, r);
    if (unk_768 == 1) {
        func_02051da4((s32)this, 0, 0xff, 1);
    } else if (func_ov004_02205c7c(unk_73c) && !func_ov004_02234ad4()) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

extern "C" void func_ov004_0220ad6c() {
    new Unk_ov004_0224936c;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_02249498

void Unk_ov004_02249498::func_0220ad88() {
    func_ov004_02205c44(unk_73c, 1, 0);
    func_ov004_022059b0(unk_760, 1);
}

BOOL Unk_ov004_02249498::func_0220adb0() {
    func_ov004_02205c44(unk_73c, 1, 0);
    return TRUE;
}

void Unk_ov004_02249498::func_0220adcc() {
    func_ov004_02205c44(unk_73c, 0, 0);
    func_ov004_022059b0(unk_760, 0);
}

BOOL Unk_ov004_02249498::func_0220adf4() {
    func_ov004_02205c44(unk_73c, 0, 0);
    return TRUE;
}

void Unk_ov004_02249498::func_0220ae10() {
    static void (Unk_ov004_02249498::*tbl[2])() = {&Unk_ov004_02249498::func_0220adcc, &Unk_ov004_02249498::func_0220ad88};
    if (unk_840 < 2) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_02249498::vfunc_70(u32 a, u32 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static BOOL (Unk_ov004_02249498::*tbl[2])() = {&Unk_ov004_02249498::func_0220adf4, &Unk_ov004_02249498::func_0220adb0};
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_02249498::vfunc_74(u32 a) {
    if (a < 2) {
        return data_ov004_02240038[a];
    }
    return 0;
}

void Unk_ov004_02249498::func_0220af14() {
    func_02051cc8((s32)this, 1, 0xff, 1);
}

void Unk_ov004_02249498::func_0220af28() {
    func_02051cc8((s32)this, 0, 0xff, 1);
}

BOOL Unk_ov004_02249498::vfunc_88() {
    if (unk_841 != 0) {
        return TRUE;
    }
    if (unk_840 == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_02249498::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249498::vfunc_80() {
    func_0220ae10();
    return TRUE;
}

static inline BOOL Unk_ov004_0220af74_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    if (x >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_02249498::vfunc_7c() {
    volatile u16 v = func_0204b248(func_ov004_022087a4(this), 0);
    if (Unk_ov004_0220af74_Range(&v, 0x4124, 0x4223)) {
        unk_841 = 1;
    }
    if (func_ov004_02205c7c(unk_73c)) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

extern "C" void func_ov004_0220b058() {
    new Unk_ov004_02249498;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_022496f0

BOOL Unk_ov004_022496f0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_022496f0::vfunc_80() {
    return TRUE;
}

BOOL Unk_ov004_022496f0::vfunc_7c() {
    unk_840 = func_ov004_02235c74(func_ov004_02235a04());
    return TRUE;
}

extern "C" void func_ov004_0220b10c() {
    new Unk_ov004_022496f0;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224981c

BOOL Unk_ov004_0224981c::vfunc_88() {
    if (unk_842 >= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224981c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224981c::vfunc_80() {
    if (unk_842 < 2) {
        unk_842++;
    }
    return TRUE;
}

BOOL Unk_ov004_0224981c::vfunc_7c() {
    unk_840 = func_ov004_02235c74(func_ov004_02235a04());
    unk_842 = 0;
    u16 t = unk_840;
    s32 w;
    if (t < 0x44) {
        w = (u16)(t + 0x1144);
    } else {
        w = 0x1144;
    }
    u16 v = w;
    func_0203c23c(func_ov004_02235a0c(func_ov004_02235a04()), &v);
    s32 h = unk_590;
    s32 r = func_0203c234(func_ov004_02235a0c(func_ov004_02235a04()));
    if (func_020b8840(unk_844, h, data_ov004_0224bb50, r, 0, 0)) {
        return TRUE;
    }
    return FALSE;
}

// Out-of-line constructors (defined after the factories so they are not inlined)
Unk_ov004_0224b43c::Unk_ov004_0224b43c() {}
Unk_ov004_0224936c::Unk_ov004_0224936c() {}
Unk_ov004_02249498::Unk_ov004_02249498() {}
Unk_ov004_022496f0::Unk_ov004_022496f0() {}

#include "types.h"
// The base declares vfunc_14() with no parameters, but this overlay class takes one (r1), so widen it locally.
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
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
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e47c(s32 a);
    void func_0203e488(s32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

// Secondary base of the 0x0224882c family (at +0xec). Its vtable 0x020ddcf0 is not overridden by the derived class.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov004_0220a648_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual ~Unk_ov004_0224882c();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_02209150();

    /* 0x130 */ u8 pad_130[0x5d0 - 0x130];
    /* 0x5d0 */ u8 pad_5d0[4];
    /* 0x5d4 */ Unk_ov004_0220a648_Bits unk_5d4;
    /* 0x5d8 */ u8 pad_5d8[0x6c8 - 0x5d8];
    /* 0x6c8 */ u32 sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ u32 sub_73c[(0x768 - 0x73c) / 4];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[0x794 - 0x76c];
    /* 0x794 */ u32 sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ u32 sub_7b4[(0x820 - 0x7b4) / 4];
    /* 0x820 */ u32 pad_820;
    /* 0x824 */ Unk_ov004_0220a648_Bits unk_824;
    /* 0x828 */ u8 pad_828[0x840 - 0x828];
};

struct Unk_ov004_02209e64_Hdr {
    u8 unk_00;
    u8 unk_01;
};

// Target of the callbacks at 0x02209e64..0x02209ebc; only its vtable layout is known.
class Unk_ov004_02209e64_Tgt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60(u32 a, void *b);
    virtual void vfunc_64();
    virtual void vfunc_68(u32 a, void *b);
    virtual void vfunc_6c(u32 a, void *b);
};

struct Unk_ov004_02209e64_Own {
    u8 pad_00[0x2c];
    /* 0x2c */ Unk_ov004_02209e64_Tgt *unk_2c;
};

struct Unk_ov004_02209e64 {
    /* 0x00 */ Unk_ov004_02209e64_Hdr *unk_00;
    /* 0x04 */ Unk_ov004_02209e64_Own *unk_04;
    /* 0x08 */ u8 pad_08[0x24 - 0x08];
    /* 0x24 */ void (*unk_24)(Unk_ov004_02209e64 *);
    /* 0x28 */ u8 pad_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
};

// 0x0224b0b8: size 0x844
class Unk_ov004_0224b0b8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b0b8();
    virtual BOOL vfunc_0c();
    virtual ~Unk_ov004_0224b0b8();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u32 unk_840;
};

// 0x0224b310: size 0x858
class Unk_ov004_0224b310 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b310();
    virtual BOOL vfunc_0c();
    virtual ~Unk_ov004_0224b310();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220a040();
    BOOL func_ov004_0220a068();
    void func_ov004_0220a088();
    BOOL func_ov004_0220a0bc();
    void func_ov004_0220a0c0();
    BOOL func_ov004_0220a0e4();
    void func_ov004_0220a128();
    BOOL func_ov004_0220a154();
    void func_ov004_0220a174();
    BOOL func_ov004_0220a1e4();
    void func_ov004_0220a1e8();
    BOOL func_ov004_0220a280(s32 idx);
    void func_ov004_0220a328();
    BOOL func_ov004_0220a33c();
    void func_ov004_0220a360();
    BOOL func_ov004_0220a364();
    void func_ov004_0220a380();
    BOOL func_ov004_0220a394();
    void func_ov004_0220a3b8();
    BOOL func_ov004_0220a3bc();
    void func_ov004_0220a3d8();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ s32 unk_844;
    /* 0x848 */ s32 unk_848;
    /* 0x84c */ u16 unk_84c;
    /* 0x84e */ u16 unk_84e;
    /* 0x850 */ u8 unk_850;
    /* 0x851 */ u8 pad_851[3];
    /* 0x854 */ s32 unk_854;
};

// 0x0224b43c: size >= 0x84a (only the methods in this range are here)
class Unk_ov004_0224b43c : public Unk_ov004_0224882c {
public:
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 unk_842;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 unk_845;
    /* 0x846 */ u8 unk_846;
    /* 0x847 */ u8 pad_847;
    /* 0x848 */ u16 unk_848;
};

extern "C" {
extern u16 data_ov004_022486f8;
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];

void *func_ov004_022358d8(void);
void func_ov004_02235854(void *heap, void *p);
void *func_ov004_02235860(void *heap, u32 size);
void *func_0212899c(void *p, s32 v, u32 n);

void func_ov004_022099a0(void *);
void func_ov004_02209aa8(void *);

void func_ov004_02205c44(void *, s32, s32);
BOOL func_ov004_02205c6c(void *);
u8 func_ov004_02205c7c(void *);
void func_ov004_0223591c(void *, u32, void *);
void *func_ov004_02206be4(void *);
void *func_ov004_022063b0(void *, u32);
u32 func_ov004_02208980(void *);
u32 func_ov004_022087a4(void *);
u32 func_ov004_02233128(u32);
void *func_ov004_022354d8(void);
void *func_ov004_02235464(void *, void *);
s32 *func_ov004_022354ec(void);
u32 func_ov004_022354e0(void *);

u32 func_020621d4(void);
void func_0203d67c(void *);
void func_0203d704(void *, s32);
BOOL func_020565e8(void *, u32);
}

// ---------------------------------------------------------------- callbacks
extern "C" void func_ov004_02209e90(Unk_ov004_02209e64 *self);

extern "C" void func_ov004_02209e64(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e64_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_6c(self->unk_00->unk_01, self);
    }
    self->unk_24 = func_ov004_02209e90;
    self->unk_92 = 1;
}

extern "C" void func_ov004_02209e90(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e64_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_68(self->unk_00->unk_01, self);
    }
    self->unk_24 = func_ov004_02209e64;
    self->unk_92 = 2;
}

extern "C" void func_ov004_02209ebc(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e64_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_60(self->unk_00->unk_01, self);
    }
}

// ---------------------------------------------------------------- 0x0224882c allocator
void Unk_ov004_0224882c::operator delete(void *p) {
    func_ov004_02235854(func_ov004_022358d8(), p);
}

void *Unk_ov004_0224882c::operator new(unsigned long size) {
    void *p = func_ov004_02235860(func_ov004_022358d8(), size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

extern "C" void func_ov004_02209f1c() {
    new Unk_ov004_0224882c;
}

// ---------------------------------------------------------------- Unk_ov004_0224b0b8
BOOL Unk_ov004_0224b0b8::vfunc_0c() { return TRUE; }
BOOL Unk_ov004_0224b0b8::vfunc_80() { return TRUE; }

BOOL Unk_ov004_0224b0b8::vfunc_7c() {
    unk_840 = func_020621d4();
    func_ov004_02208de0(0, 0, 0, (u16)unk_840);
    func_ov004_02208980(this);
    return TRUE;
}

Unk_ov004_0224b0b8::~Unk_ov004_0224b0b8() {}

Unk_ov004_0224b0b8::Unk_ov004_0224b0b8() {}

extern "C" void func_ov004_0220a024() {
    new Unk_ov004_0224b0b8;
}

// ---------------------------------------------------------------- Unk_ov004_0224b310
void Unk_ov004_0224b310::func_ov004_0220a040() {
    if (unk_84e == 0) {
        func_0203d67c(this);
    }
    if (unk_84e != 0) {
        unk_84e--;
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a068() {
    vfunc_70(3, 0xff);
    unk_84e = 1;
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a088() {
    if (unk_3c != 0) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c((s32)(Unk_020ddcf0 *)this);
            func_ov004_0220a280(4);
        }
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a0bc() { return TRUE; }

void Unk_ov004_0224b310::func_ov004_0220a0c0() {
    if (unk_3c != 0) {
        if (unk_3c->unk_04 != 0) {
            func_ov004_0220a280(3);
        }
    }
}

struct Unk_ov004_0220a0e4_Pad {
    s32 v[2];
    Unk_ov004_0220a0e4_Pad() {}
    ~Unk_ov004_0220a0e4_Pad() {}
};

BOOL Unk_ov004_0224b310::func_ov004_0220a0e4() {
    Unk_ov004_0220a0e4_Pad pad;
    func_0203e488((s32)(Unk_020ddcf0 *)this);
    unk_3c->unk_08 = 1;
    Unk_020ddcf0 &s = *this;
    s.func_020a710c(data_ov004_0224bb44);
    unk_1e = 0;
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a128() {
    if (unk_84e == 0) {
        func_ov004_0220a280(2);
    }
    if (unk_84e != 0) {
        unk_84e--;
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a154() {
    vfunc_70(1, 0xff);
    unk_84e = 1;
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a174() {
    if (func_ov004_02205c6c(sub_73c)) {
        void *a = func_ov004_022354d8();
        void *b = func_ov004_02235464(a, this);
        s32 *v = func_ov004_022354ec();
        unk_840 = v[0];
        unk_844 = v[1];
        unk_848 = v[2];
        unk_84c = func_ov004_022354e0(b);
        func_0203d704(this, 0);
    }
    func_ov004_02205c44(sub_73c, 0, 0);
}

BOOL Unk_ov004_0224b310::func_ov004_0220a1e4() { return TRUE; }

typedef void (Unk_ov004_0224b310::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (Unk_ov004_0224b310::*Unk_ov004_0220a280_Fn)();

void Unk_ov004_0224b310::func_ov004_0220a1e8() {
    static Unk_ov004_0220a1e8_Fn tbl[5] = {
        &Unk_ov004_0224b310::func_ov004_0220a174,
        &Unk_ov004_0224b310::func_ov004_0220a128,
        &Unk_ov004_0224b310::func_ov004_0220a0c0,
        &Unk_ov004_0224b310::func_ov004_0220a088,
        &Unk_ov004_0224b310::func_ov004_0220a040,
    };
    if (unk_854 < 5) {
        (this->*tbl[unk_854])();
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a280(s32 idx) {
    static Unk_ov004_0220a280_Fn tbl[5] = {
        &Unk_ov004_0224b310::func_ov004_0220a1e4,
        &Unk_ov004_0224b310::func_ov004_0220a154,
        &Unk_ov004_0224b310::func_ov004_0220a0e4,
        &Unk_ov004_0224b310::func_ov004_0220a0bc,
        &Unk_ov004_0224b310::func_ov004_0220a068,
    };
    if (idx < 5) {
        if ((this->*tbl[idx])()) {
            unk_854 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224b310::func_ov004_0220a328() {
    vfunc_70(0, 0xff);
}

BOOL Unk_ov004_0224b310::func_ov004_0220a33c() {
    func_ov004_02205c44(sub_73c, 0, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a360() {}

BOOL Unk_ov004_0224b310::func_ov004_0220a364() {
    func_ov004_02205c44(sub_73c, 1, 0);
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a380() {
    vfunc_70(2, 0xff);
}

BOOL Unk_ov004_0224b310::func_ov004_0220a394() {
    func_ov004_02205c44(sub_73c, 1, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a3b8() {}

BOOL Unk_ov004_0224b310::func_ov004_0220a3bc() {
    func_ov004_02205c44(sub_73c, 0, 0);
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a3d8() {
    static Unk_ov004_0220a1e8_Fn tbl[4] = {
        &Unk_ov004_0224b310::func_ov004_0220a3b8,
        &Unk_ov004_0224b310::func_ov004_0220a380,
        &Unk_ov004_0224b310::func_ov004_0220a360,
        &Unk_ov004_0224b310::func_ov004_0220a328,
    };
    if (unk_850 < 4) {
        (this->*tbl[unk_850])();
    }
}

BOOL Unk_ov004_0224b310::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_0220a280_Fn tbl[4] = {
        &Unk_ov004_0224b310::func_ov004_0220a3bc,
        &Unk_ov004_0224b310::func_ov004_0220a394,
        &Unk_ov004_0224b310::func_ov004_0220a364,
        &Unk_ov004_0224b310::func_ov004_0220a33c,
    };
    if (a < 4) {
        if ((this->*tbl[a])()) {
            unk_850 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224b310::vfunc_74(u32 a) {
    if (a < 4) {
        return data_ov004_0224004c[a];
    }
    return 0;
}

void Unk_ov004_0224b310::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        func_ov004_0220a280(1);
        break;
    case 8:
        func_ov004_0220a280(0);
        break;
    }
}

BOOL Unk_ov004_0224b310::vfunc_0c() { return TRUE; }

BOOL Unk_ov004_0224b310::vfunc_80() {
    func_ov004_0220a1e8();
    func_ov004_0220a3d8();
    return TRUE;
}

BOOL Unk_ov004_0224b310::vfunc_7c() {
    if (unk_768 == 1) {
        func_ov004_02205c44(sub_73c, 0, 0);
    }
    if (func_ov004_02205c7c(sub_73c) != 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    func_ov004_0220a280(0);
    return TRUE;
}

Unk_ov004_0224b310::~Unk_ov004_0224b310() {}

Unk_ov004_0224b310::Unk_ov004_0224b310() {}

extern "C" void func_ov004_0220a628() {
    new Unk_ov004_0224b310;
}

// ---------------------------------------------------------------- Unk_ov004_0224b43c
BOOL Unk_ov004_0224b43c::vfunc_0c() { return TRUE; }

BOOL Unk_ov004_0224b43c::vfunc_80() {
    u32 h = func_ov004_02233128(func_ov004_022087a4(this));
    if ((u16)(h + 0xfc07) <= 3) {
        switch (unk_845) {
        case 0:
            if (unk_842 != 0) {
                unk_842--;
            }
            if (unk_842 == 0) {
                unk_845 = 1;
                unk_844 = 0;
                unk_846 = 0;
                unk_848 = 0;
                if (h != data_ov004_022486f8) {
                    func_ov004_0223591c(sub_794, h, sub_7b4);
                }
            }
            break;
        case 1: {
            unk_848++;
            u32 r = func_ov004_02208980(this);
            if (unk_846 != 0 && r != 0) {
                unk_846 = 0;
                func_ov004_02208ba8(0, 1, 0x1000, 0);
                unk_844++;
                if (unk_844 >= unk_840) {
                    unk_845 = 0;
                    if (h == 0x3fc) {
                        unk_842 = 0x3c;
                    } else {
                        unk_842 = 200;
                    }
                }
            }
            unk_846 = r;
            break;
        }
        }
    } else {
        switch (unk_845) {
        case 0:
            if (unk_842 != 0) {
                unk_842--;
            }
            if (unk_842 == 0) {
                unk_845 = 1;
                unk_844 = 0;
                unk_846 = 0;
                if (h != data_ov004_022486f8) {
                    func_ov004_0223591c(sub_794, h, sub_7b4);
                }
            }
            break;
        case 1:
        case 2:
        case 3: {
            if (h == 0x3ff) {
                if (func_020565e8(pad_5d0, 0x14)) {
                    if (h != data_ov004_022486f8) {
                        func_ov004_0223591c(sub_794, h, sub_7b4);
                    }
                }
            }
            u32 r = func_ov004_02208980(this);
            if (unk_846 != 0 && r != 0) {
                unk_846 = 0;
                func_ov004_02208ba8(0, 1, 0x1000, 0);
                unk_844++;
                if (unk_844 >= unk_840) {
                    unk_845 = (unk_845 + 1) & 3;
                    unk_844 = 0;
                    if (unk_845 != 0) {
                        if (h != data_ov004_022486f8) {
                            func_ov004_0223591c(sub_794, h, sub_7b4);
                        }
                    } else {
                        if (func_ov004_022063b0(func_ov004_02206be4(sub_6c8), 0) != 0) {
                            unk_842 = unk_840 * unk_824.mid;
                        } else {
                            unk_842 = unk_840 * unk_5d4.mid;
                        }
                    }
                }
            }
            unk_846 = r;
            break;
        }
        }
    }
    return TRUE;
}

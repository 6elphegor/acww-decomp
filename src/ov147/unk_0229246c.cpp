#include "types.h"
#include "Unk_020d8c7c.h"

// Secondary-type helper (ctor func_0206606c, D2 func_02065fd0); see src/main/unk_020655e4.cpp
class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();

    /* 0x04 */ u8 unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x44 - 0x1f];
};

// Vtable 0x022934a4, size 0x48 (sub-object at +0x54 of Unk_ov147_022933e8)
class Unk_ov147_022934a4 : public Unk_020ddcf0 {
public:
    Unk_ov147_022934a4();
    virtual ~Unk_ov147_022934a4();
    void func_ov147_0229246c(void *owner);
    u8 func_ov147_02291ce0();

    /* 0x44 */ void *unk_44;
};

// Object at +0xac of Unk_ov147_022933e8 (0x20 bytes)
class Unk_ov147_02292fd4 {
public:
    Unk_ov147_02292fd4();
    ~Unk_ov147_02292fd4();
    BOOL func_ov147_02292fd4();
    void func_ov147_02292fe8();
    void func_ov147_02292ff0(s32 a);
    void func_ov147_02292ff4();
    void func_ov147_02293068();
    void func_ov147_0229306c();

    u32 unk_00[8];
};

// Object at +0xcc (ctor func_020b8800, cleanup func_020b87d0)
class Unk_020b8800 {
public:
    Unk_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov147_022933e8;
typedef void (Unk_ov147_022933e8::*Unk_ov147_022933e8_Fn)();
struct Unk_ov147_0229372c {
    Unk_ov147_022933e8_Fn enter;
    Unk_ov147_022933e8_Fn update;
};

extern "C" {
extern Unk_ov147_0229372c data_ov147_0229372c[];
extern Unk_ov147_0229372c data_ov147_02293734[];
extern char *data_ov147_02293270;
extern char data_ov147_022935ac[];
extern u8 data_021c3cc0;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern u8 *data_021c1b3c;
extern u8 data_021d7350[];
extern s16 data_02135f44[];

struct Unk_ov147_022924c0_Rec {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};
Unk_ov147_022924c0_Rec *func_02067918(s32 a);
void func_02067958(void *p);
void func_02067978(void *a, void *b);
void func_020a4414(s32 a, s32 b, s32 c, s32 d);
void *func_020b4934();
void func_020b4f58(void *a, s32 b, s32 c, s32 d);
void func_020a08c4();
void func_020a0960();
void func_020a096c();
void func_020a710c(void *p, const char *s);
BOOL func_0209e170(void *a, s32 b);
void func_0203d52c();
void func_0208f044();
void func_0208f038();
BOOL func_020e7500(void *p);
void func_02034d84(s32 a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_020b87d0(void *p);
void func_0203d984();
void func_020a042c();
void func_0203cbb8();
void func_0203c98c();
void func_0203d990();
s32 func_0206d5b8();
s32 func_020a07a4();
s32 func_0203d538();
void func_0203d520();
void func_02110ae0(u32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02133150(s32 a, s32 b);
s32 func_020014e4(s32 a);
u32 func_02001510(s32 a);
void func_020014f4(s32 a);
void func_020017e4(s32 a, s32 b);
s32 func_ov147_02292f54(void *p);
void func_ov147_02292fc8(void *p);
void func_ov147_02292d6c();
void func_ov147_02292e74(s32 a);
void func_ov147_02292d34();
void func_ov147_02292d60();
}

static inline BOOL Unk_ov147_022924c0_IsTwo() {
    if (data_021c3cc0 == 2) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov147_0229281c_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022933e8, size 0xf4
class Unk_ov147_022933e8 : public Unk_020d8c7c {
public:
    Unk_ov147_022933e8();
    virtual ~Unk_ov147_022933e8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();

    void func_ov147_022924c0();
    void func_ov147_02292504();
    void func_ov147_0229250c();
    void func_ov147_02292550();
    void func_ov147_02292558();
    void func_ov147_022925a0();
    void func_ov147_022925a8();
    void func_ov147_022925ec();
    void func_ov147_022925f4();
    void func_ov147_02292638();
    void func_ov147_02292640();
    void func_ov147_02292688();
    void func_ov147_02292690();
    void func_ov147_022926d8();
    void func_ov147_022926e0();
    void func_ov147_0229270c();
    void func_ov147_02292710();
    void func_ov147_02292714();
    void func_ov147_02292718();
    void func_ov147_022927e8();
    void func_ov147_022927ec();
    void func_ov147_02292818();
    void func_ov147_0229281c();
    void func_ov147_0229297c();
    void func_ov147_02292988(s32 state);
    void func_ov147_022929c0();
    void func_ov147_022929dc();
    void func_ov147_02292a14(BOOL flag);
    void func_ov147_02291af4();
    void func_ov147_02291b14();
    void func_ov147_02291b28();

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_ov147_022934a4 unk_54;
    /* 0x9c */ u8 pad_9c[2];
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 pad_a0[6];
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 pad_aa[2];
    /* 0xac */ Unk_ov147_02292fd4 unk_ac;
    /* 0xcc */ Unk_020b8800 unk_cc;
    /* 0xf0 */ u8 unk_f0;
    /* 0xf1 */ u8 pad_f1[3];
};

// Fade/transition helper (no vtable)
class Unk_ov147_02292c10 {
public:
    void func_ov147_02292c10();
    void func_ov147_02292c40();
    void func_ov147_02292c68();
    void func_ov147_02292c90();
    void func_ov147_02292c9c();
    void func_ov147_02292cb4();
    void func_ov147_02292cc0();
    void func_ov147_02292cdc();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

void Unk_ov147_022934a4::func_ov147_0229246c(void *owner) { unk_44 = owner; }

Unk_ov147_022934a4::Unk_ov147_022934a4() {}

Unk_ov147_022934a4::~Unk_ov147_022934a4() {}

void Unk_ov147_022933e8::func_ov147_022924c0() {
    Unk_ov147_022924c0_Rec *r = func_02067918(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        func_02067958(r);
        func_020a4414(2, 2, 0, 0);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_02292504() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_0229250c() {
    Unk_ov147_022924c0_Rec *r = func_02067918(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        func_02067958(r);
        func_020b4f58(func_020b4934(), 0x30, 2, 2);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_02292550() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_02292558() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_ov147_022924c0_Rec *r = func_02067918(0);
        if (r->unk_04 == 0) {
            func_02067958(r);
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            func_020a08c4();
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_022925a0() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_022925a8() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_ov147_022924c0_Rec *r = func_02067918(0);
        if (r->unk_04 == 0) {
            func_02067958(r);
            func_020b4f58(func_020b4934(), 0x2d, 2, 0);
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_022925ec() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_022925f4() {
    Unk_ov147_022924c0_Rec *r = func_02067918(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        func_02067958(r);
        func_020b4f58(func_020b4934(), 6, 2, 2);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_02292638() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_02292640() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_ov147_022924c0_Rec *r = func_02067918(0);
        if (r->unk_04 == 0) {
            func_02067958(r);
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            func_020a0960();
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_02292688() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_02292690() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_ov147_022924c0_Rec *r = func_02067918(0);
        if (r->unk_04 == 0) {
            func_02067958(r);
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            func_020a096c();
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_022926d8() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_022926e0() {
    Unk_ov147_022924c0_Rec *r = func_02067918(0);
    if (r->unk_04 == 0) {
        func_02067958(r);
        func_ov147_02292988(0);
        unk_ac.func_ov147_02292ff0(1);
    }
}

void Unk_ov147_022933e8::func_ov147_0229270c() {}
void Unk_ov147_022933e8::func_ov147_02292710() {}
void Unk_ov147_022933e8::func_ov147_02292714() {}

void Unk_ov147_022933e8::func_ov147_02292718() {
    if (unk_ac.func_ov147_02292fd4()) {
        Unk_ov147_022924c0_Rec *r = func_02067918(0);
        unk_54.vfunc_08();
        if (unk_f0 != 0) {
            func_020a710c(&unk_54, data_ov147_02293270);
            *((u8 *)this + 0x72) = 0x32;
            unk_f0 = 0;
        } else if (unk_9e != 0) {
            func_020a710c(&unk_54, data_ov147_022935ac);
            *((u8 *)this + 0x72) = 9;
        } else if (func_0209e170(data_021d7350, 0x12)) {
            func_020a710c(&unk_54, data_ov147_02293270);
            *((u8 *)this + 0x72) = 0x24;
        } else {
            func_020a710c(&unk_54, data_ov147_02293270);
            *((u8 *)this + 0x72) = unk_54.func_ov147_02291ce0();
        }
        func_02067978(r, &unk_54);
        r->unk_08 = 1;
        func_ov147_02292988(2);
    }
}

void Unk_ov147_022933e8::func_ov147_022927e8() {}

void Unk_ov147_022933e8::func_ov147_022927ec() {
    if (unk_ac.func_ov147_02292fd4()) {
        func_0203d52c();
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_02292818() {}

void Unk_ov147_022933e8::func_ov147_0229281c() {
    if (data_021f47d8[1] != 0) {
        func_0208f044();
    } else if (Unk_ov147_0229281c_Both()) {
        func_0208f038();
    }
    u32 pad = data_021f47d8[1];
    if ((pad & 2) == 0 && (pad & 0x400) == 0 && (pad & 0x800) == 0) {
        if (unk_f0 != 0 || unk_9e != 0 || (pad & 8) != 0 || (pad & 1) != 0 || Unk_ov147_0229281c_Both()) {
            if (Unk_ov147_022924c0_IsTwo()) {
                u32 t = unk_a6;
                if (t != 0) {
                    if (t == 1) {
                        func_ov147_02291b14();
                        unk_a7 = 0xc;
                    } else if (unk_a7 == 0) {
                        func_ov147_02291af4();
                        unk_ac.func_ov147_02292fe8();
                        func_ov147_02292988(1);
                    }
                }
            }
        }
    }
    if (unk_a7 != 0) {
        unk_a7 = *(volatile u8 *)&unk_a7 - 1;
        if (unk_a7 == 0) {
            unk_ac.func_ov147_02292ff0(0);
        }
    }
    if ((u8)(unk_a6 + 0xfc) <= 1) {
        if (func_020e7500(&unk_a8) == 0) {
            unk_ac.func_ov147_02292fe8();
            func_ov147_02292988(0xb);
        }
    } else {
        unk_a8 = 0xe10;
    }
}

void Unk_ov147_022933e8::func_ov147_0229297c() { unk_a8 = 0xe10; }

void Unk_ov147_022933e8::func_ov147_02292988(s32 state) {
    if (data_ov147_0229372c[state].enter) {
        (this->*data_ov147_0229372c[state].enter)();
    }
    unk_50 = state;
}

void Unk_ov147_022933e8::func_ov147_022929c0() {
    if (unk_9f == 1) {
        *(s32 *)(data_021c1b3c + 0x248) = 0xb;
    }
}

void Unk_ov147_022933e8::func_ov147_022929dc() {
    u32 t = unk_9f;
    if (t != 0) {
        if (t == 1) {
            func_02034d84(0);
        } else if (t == 2) {
            func_02034d70(1);
        }
        func_02034dd0(1, 0xf, 0xf);
        unk_9f = 0;
    }
}

void Unk_ov147_022933e8::func_ov147_02292a14(BOOL flag) {
    if (unk_9f == 0) {
        if (flag) {
            func_02034dd0(1, 0xf, 0);
            unk_9f = 2;
        } else {
            func_02034e10(2, 0, 0x7f, 0);
            unk_9f = 1;
        }
    }
}

BOOL Unk_ov147_022933e8::vfunc_18() {
    if (data_ov147_02293734[unk_50].enter) {
        (this->*data_ov147_0229372c[unk_50].update)();
    }
    func_ov147_02291b28();
    unk_ac.func_ov147_02292ff4();
    return TRUE;
}

BOOL Unk_ov147_022933e8::vfunc_0c() {
    func_ov147_022929dc();
    unk_ac.func_ov147_02293068();
    func_020b87d0(&unk_cc);
    func_0203d984();
    if (unk_50 == 7) {
        func_020a042c();
    }
    return TRUE;
}

BOOL Unk_ov147_022933e8::vfunc_00() {
    unk_54.func_ov147_0229246c(this);
    func_0203cbb8();
    func_0203c98c();
    func_0203d990();
    if (func_0206d5b8() == 3) {
        unk_f0 = 1;
    }
    func_ov147_02292988(0);
    unk_a6 = 0;
    unk_a7 = 0;
    unk_ac.func_ov147_0229306c();
    if (func_020a07a4() == 1) {
        unk_9e = 1;
    }
    func_ov147_02292a14(func_0203d538() != 0 ? TRUE : FALSE);
    if (func_0203d538() != 0) {
        unk_a6 = 6;
        func_0203d520();
    }
    return TRUE;
}

Unk_ov147_022933e8::~Unk_ov147_022933e8() {}

Unk_ov147_022933e8::Unk_ov147_022933e8() {}

extern "C" Unk_ov147_022933e8 *func_ov147_02292bf8() { return new Unk_ov147_022933e8(); }

void Unk_ov147_02292c10::func_ov147_02292c10() {
    s32 r = func_ov147_02292f54(this);
    func_ov147_02292cdc();
    if (r != 0) {
        func_ov147_02292cc0();
        func_ov147_02292d34();
        func_ov147_02292cb4();
    }
}

void Unk_ov147_02292c10::func_ov147_02292c40() {
    unk_04 = 2;
    func_ov147_02292fc8(this);
    func_ov147_02292d6c();
    func_ov147_02292e74(unk_08);
    func_ov147_02292d60();
    func_ov147_02292cdc();
}

void Unk_ov147_02292c10::func_ov147_02292c68() {
    if (unk_08 != unk_0c) {
        func_ov147_02292cb4();
    } else {
        unk_18 = unk_18 - 1;
        if (unk_18 > 0) {
        } else {
            func_ov147_02292c40();
        }
    }
}

void Unk_ov147_02292c10::func_ov147_02292c90() {
    unk_04 = 1;
    unk_18 = 5;
}

void Unk_ov147_02292c10::func_ov147_02292c9c() {
    s32 t = unk_0c;
    if (t != 2) {
        unk_08 = t;
        func_ov147_02292c90();
    }
}

void Unk_ov147_02292c10::func_ov147_02292cb4() {
    unk_04 = 0;
    unk_08 = 2;
}

void Unk_ov147_02292c10::func_ov147_02292cc0() { func_02110ae0(0x4000050, 0, 0x20, 0x10, 0); }

void Unk_ov147_02292c10::func_ov147_02292cdc() {
    s32 t = func_02133150(unk_10 << 12, 10);
    s32 a = (s16)(t << 2);
    u32 i = ((u16)a >> 4) * 2;
    s32 v = data_02135f44[i];
    s32 b = (v * 16 + 0x800) >> 12;
    if (b < 0) {
        b = 0;
    } else if (b > 16) {
        b = 16;
    }
    func_02110ae0(0x4000050, 8, 0x21, b, 16 - b);
}

extern "C" void func_ov147_02292d34() {
    volatile u32 *r = (volatile u32 *)0x4000000;
    u32 v = func_02001510(func_020014e4(8));
    *r = (*r & 0xffffe0ff) | (v << 8);
}

extern "C" void func_ov147_02292d60() { func_020014f4(8); }

extern "C" void func_ov147_02292d6c() {
    volatile u16 *r = (volatile u16 *)0x400000e;
    *r = (*r & ~3) | 1;
    *r = (*r & 0x43) | 0x700;
    *r = *r & ~0x40;
    func_020017e4(0, 0);
}

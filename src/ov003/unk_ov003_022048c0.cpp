// mwcc-version: 1.2/sp2
#include "types.h"
#include "Unk_020d8c7c.h"

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
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e624(u32 a);

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

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

struct Unk_02204930_Pad {
    s32 v;
    Unk_02204930_Pad() {}
    ~Unk_02204930_Pad() {}
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 pad_04[0x18];
};

class Unk_02002fc8 {
public:
    u32 func_02002fc8(Unk_020e1c64 *p);
};

class Unk_020660f8 {
public:
    s32 func_02067a3c(s32 idx, Unk_020e1c64 *p);
    u8 pad_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

struct Unk_0202e9c8 {
    Unk_0202e9c8();
    ~Unk_0202e9c8();
    u8 pad[0x10];
};

struct Unk_020b6a94 : Unk_0202e9c8 {
    Unk_020b6a94();
    ~Unk_020b6a94();
    /* 0x10 */ u8 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ Unk_020b6a94 *unk_18;
};

struct Unk_020b6960 {
    BOOL func_020b68a8(Unk_020b6a94 *o, s32 *a, s32 b, s32 c, u8 d);
};

extern "C" {
extern u8 data_021dfd8c[];
u8 *func_0207bf60(u8 *p, s32 i);
Unk_02002fc8 *func_020805c4(u8 *p);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
BOOL func_0203d67c(void *p);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
Unk_020b6960 *func_020b50b4();
extern char data_ov003_02230ab0[];
extern u8 data_ov003_02234f60;
}

class Unk_ov003_022309d0;
extern "C" Unk_ov003_022309d0 *data_ov003_02234fb4[8];

// ---------------------------------------------------------------- Unk_ov003_022309d0
class Unk_ov003_022309d0 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov003_022309d0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov003_022309d0();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void func_ov003_022048d8();
    BOOL func_ov003_02204908();
    void func_ov003_0220490c();
    BOOL func_ov003_02204930();
    void func_ov003_022049a0();
    BOOL func_ov003_022049a4();
    void func_ov003_022049a8();
    BOOL func_ov003_02204a24(s32 m);

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ Unk_020b6a94 unk_134;
};

typedef void (Unk_ov003_022309d0::*Unk_022049a8_Fn)();
typedef BOOL (Unk_ov003_022309d0::*Unk_02204a24_Fn)();

// ================================================================
extern "C" Unk_ov003_022309d0 *func_ov003_022048c0(s32 i) {
    if (i >= 0 && i < 8) {
        return data_ov003_02234fb4[i];
    }
    return 0;
}

void Unk_ov003_022309d0::func_ov003_022048d8() {
    if (unk_3c) {
        if (((Unk_020660f8 *)unk_3c)->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov003_022309d0::func_ov003_02204908() {
    return TRUE;
}

void Unk_ov003_022309d0::func_ov003_0220490c() {
    if (unk_3c) {
        if (((Unk_020660f8 *)unk_3c)->unk_04) {
            func_ov003_02204a24(2);
        }
    }
}

BOOL Unk_ov003_022309d0::func_ov003_02204930() {
    Unk_02204930_Pad pad;
    func_0203e488(this, this);
    func_020a710c(data_ov003_02230ab0);
    unk_1e = 0;
    ((Unk_020660f8 *)unk_3c)->unk_08 = 1;
    Unk_020e1c64 buf;
    func_020805c4(func_0207bf60(data_021dfd8c, *(s32 *)((u8 *)this + 8)))->func_02002fc8(&buf);
    ((Unk_020660f8 *)unk_3c)->func_02067a3c(0, &buf);
    return TRUE;
}

void Unk_ov003_022309d0::func_ov003_022049a0() {}

BOOL Unk_ov003_022309d0::func_ov003_022049a4() {
    return TRUE;
}

void Unk_ov003_022309d0::func_ov003_022049a8() {
    static Unk_022049a8_Fn tbl[3] = { &Unk_ov003_022309d0::func_ov003_022049a0, &Unk_ov003_022309d0::func_ov003_0220490c, &Unk_ov003_022309d0::func_ov003_022048d8 };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov003_022309d0::func_ov003_02204a24(s32 m) {
    static Unk_02204a24_Fn tbl[3] = { (Unk_02204a24_Fn)&Unk_ov003_022309d0::func_ov003_022049a4, (Unk_02204a24_Fn)&Unk_ov003_022309d0::func_ov003_02204930, (Unk_02204a24_Fn)&Unk_ov003_022309d0::func_ov003_02204908 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov003_022309d0::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov003_02204a24(1);
        break;
    case 8:
        func_ov003_02204a24(0);
        break;
    }
}

BOOL Unk_ov003_022309d0::vfunc_48(void *a) {
    func_0203e42c();
    Unk_020d9670 *o = (Unk_020d9670 *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < 0x2333) {
            if (func_020e780c(-0x8000, o->unk_8e) <= 0x1100) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_02204b20() {
    if (data_ov003_02234f60 == 0) {
        u32 i;
        for (i = 0; i < 8; i++) {
            data_ov003_02234fb4[i] = 0;
        }
    }
}

BOOL Unk_ov003_022309d0::vfunc_0c() {
    data_ov003_02234fb4[*(s32 *)((u8 *)this + 8)] = 0;
    data_ov003_02234f60--;
    return TRUE;
}

BOOL Unk_ov003_022309d0::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov003_022309d0::vfunc_18() {
    func_ov003_022049a8();
    func_020b50b4()->func_020b68a8(&unk_134, unk_5c, 0xc00, 9, *(s32 *)((u8 *)this + 8));
    return TRUE;
}

BOOL Unk_ov003_022309d0::vfunc_00() {
    func_ov003_02204b20();
    func_0203e624((u16) * (s32 *)((u8 *)this + 8));
    func_ov003_02204a24(0);
    data_ov003_02234fb4[*(s32 *)((u8 *)this + 8)] = this;
    data_ov003_02234f60++;
    return TRUE;
}

Unk_ov003_022309d0::~Unk_ov003_022309d0() {}

Unk_ov003_022309d0::Unk_ov003_022309d0() {}

extern "C" Unk_ov003_022309d0 *func_ov003_02204c94() {
    return new Unk_ov003_022309d0;
}

// ---------------------------------------------------------------- free functions on the big player object
struct Unk_ov003_02204ce8_Vec {
    s32 x, y, z;
};

class Unk_02006d14 {
public:
    s32 func_0200f5b0();
    BOOL func_0200fa2c(s32 *p, s32 m);
    BOOL func_0200f9d4(s32 m);
    BOOL func_0200f8f8(s32 *p, s32 a, s32 b);
    BOOL func_0200f6d4(s32 *p, s32 a);
    s32 func_0200f9bc();

    u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    /* 0x8e */ u16 unk_8e;
    u8 pad_90[0x13c - 0x90];
    /* 0x13c */ u8 unk_13c;
    u8 pad_13d[3];
    /* 0x140 */ s32 unk_140;
    /* 0x144 */ u8 unk_144;
    u8 pad_145[0x154 - 0x145];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    u8 pad_160[0x16c - 0x160];
    /* 0x16c */ s32 unk_16c;
    u8 pad_170[0x6f0 - 0x170];
    /* 0x6f0 */ s32 unk_6f0;
    u8 pad_6f4[4];
    /* 0x6f8 */ s32 unk_6f8;
};

extern "C" {
extern s32 data_ov003_02230af0[];
extern s32 data_ov003_0222efb4[];
extern void *data_021c47c4;
BOOL func_ov003_02205b68(Unk_02006d14 *self, s32 *p);
s32 func_ov003_02205894(Unk_02006d14 *self, s32 *out, s32 *in);
void func_ov003_0220fc00(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220b620(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220d00c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220e8cc(Unk_02006d14 *self, s32 *v, s32 a, s32 b);
void func_ov003_0220e6b0(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02209030(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02208d18(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220627c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02206770(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02206574(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_022084f4(Unk_02006d14 *self, s32 x, s32 z, s32 f, s32 a, s32 b, s32 c);
void func_ov003_0220fe1c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02207404(Unk_02006d14 *self, s32 a, s32 b);
void func_0200f3ec(Unk_ov003_02204ce8_Vec *out, Unk_02006d14 *o, s32 *in, u16 *ang, s32 *p);
void func_0200f45c(Unk_ov003_02204ce8_Vec *out, Unk_02006d14 *o);
BOOL func_020e972c(s32 *a, s32 *b);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_02030d60(s32 *p);
BOOL func_020b8e14();
void func_0204ee10(s32 *a, s32 *b, s32 *c);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" BOOL func_ov003_02204d90(Unk_02006d14 *self, s32 mode, s32 *pos);

extern "C" BOOL func_ov003_02204ce8(Unk_02006d14 *self, s32 a) {
    Unk_ov003_02204ce8_Vec v;
    if (func_ov003_02205b68(self, &a)) {
        return TRUE;
    }
    if (self->unk_16c == 1) {
        Unk_ov003_02204ce8_Vec t;
        func_0200f3ec(&t, self, self->unk_5c, &self->unk_8e, data_ov003_02230af0);
        v.x = t.x;
        v.y = t.y;
        v.z = t.z;
    } else {
        v.x = self->unk_154;
        v.y = self->unk_158;
        v.z = self->unk_15c;
        if (!self->func_0200fa2c(&v.x, 0xc)) {
            return FALSE;
        }
    }
    if (self->func_0200f8f8(&v.x, 0, a)) {
        if (self->func_0200f6d4(&v.x, 0)) {
            return TRUE;
        }
    }
    return FALSE;
}


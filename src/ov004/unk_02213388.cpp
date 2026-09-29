// mwcc-version: 1.2/sp2
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
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    s32 func_02067a3c(s32 idx, void *p);
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

// ---------------------------------------------------------------- Unk_ov004_0224bc4c
struct Unk_020b6a94x {
    Unk_020b6a94x();
    ~Unk_020b6a94x();
    u8 pad[0x1c];
};

class Unk_020b6960x {
public:
    BOOL func_020b68a8(void *o, void *a, s32 b, s32 c, u8 d);
};

extern "C" {
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
BOOL func_0203d67c(void *p);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
Unk_020b6960x *func_020b50b4();
u32 func_020b50e8();
s32 func_02002cf8(s32 a, s32 b, void *c, void *d, void *e);
extern char data_ov004_0224bd2c[];
extern s16 data_ov004_0224bbf8;
extern s32 data_ov004_02250190;
extern u8 data_ov004_0225016c;
extern void *data_ov004_022501c4[];
}

class Unk_ov004_0224bc4c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224bc4c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224bc4c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void func_ov004_0221371c();
    BOOL func_ov004_0221374c();
    void func_ov004_02213750();
    BOOL func_ov004_02213774();
    void func_ov004_022137bc();
    BOOL func_ov004_022137c0();
    void func_ov004_022137c4();
    BOOL func_ov004_02213840(s32 m);
    BOOL func_ov004_02213948();
    BOOL func_ov004_0221397c();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ Unk_020b6a94x unk_134;
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 pad_151;
    /* 0x152 */ s16 unk_152;
    /* 0x154 */ s32 unk_154;
};

typedef void (Unk_ov004_0224bc4c::*Unk_022137c4_Fn)();
typedef BOOL (Unk_ov004_0224bc4c::*Unk_02213840_Fn)();

void Unk_ov004_0224bc4c::func_ov004_0221371c() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224bc4c::func_ov004_0221374c() {
    return TRUE;
}

void Unk_ov004_0224bc4c::func_ov004_02213750() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02213840(2);
        }
    }
}

struct Unk_02213774_Pad {
    s32 v[2];
    Unk_02213774_Pad() {}
    ~Unk_02213774_Pad() {}
};

BOOL Unk_ov004_0224bc4c::func_ov004_02213774() {
    Unk_02213774_Pad pad;
    func_0203e488(this, this);
    func_020a710c(data_ov004_0224bd2c);
    unk_1e = unk_152;
    unk_3c->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224bc4c::func_ov004_022137bc() {}

BOOL Unk_ov004_0224bc4c::func_ov004_022137c0() {
    return TRUE;
}

void Unk_ov004_0224bc4c::func_ov004_022137c4() {
    static Unk_022137c4_Fn tbl[3] = { &Unk_ov004_0224bc4c::func_ov004_022137bc, &Unk_ov004_0224bc4c::func_ov004_02213750, &Unk_ov004_0224bc4c::func_ov004_0221371c };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov004_0224bc4c::func_ov004_02213840(s32 m) {
    static Unk_02213840_Fn tbl[3] = { (Unk_02213840_Fn)&Unk_ov004_0224bc4c::func_ov004_022137c0, (Unk_02213840_Fn)&Unk_ov004_0224bc4c::func_ov004_02213774, (Unk_02213840_Fn)&Unk_ov004_0224bc4c::func_ov004_0221374c };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224bc4c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov004_02213840(1);
        break;
    case 8:
        func_ov004_02213840(0);
        break;
    }
}

BOOL Unk_ov004_0224bc4c::vfunc_48(void *a) {
    Unk_020d9670 *o = (Unk_020d9670 *)a;
    s32 lim = unk_154 + 0x2ccd;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < lim) {
            if (func_020e780c((s16)(unk_8e + 0x8000), o->unk_8e) < 0x1300) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bc4c::func_ov004_02213948() {
    u32 i = unk_150;
    if (i < 0x40) {
        data_ov004_022501c4[i] = 0;
        data_ov004_0225016c--;
        unk_150 = 0xff;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224bc4c::func_ov004_0221397c() {
    unk_150 = data_ov004_0225016c;
    u32 i = unk_150;
    if (i < 0x40) {
        data_ov004_022501c4[i] = this;
        data_ov004_0225016c++;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov004_022139ac();

BOOL Unk_ov004_0224bc4c::vfunc_0c() {
    func_ov004_02213948();
    return TRUE;
}

BOOL Unk_ov004_0224bc4c::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224bc4c::vfunc_18() {
    func_ov004_022137c4();
    func_020b50b4()->func_020b68a8(&unk_134, unk_5c, unk_154, 0x10, unk_150);
    return TRUE;
}

BOOL Unk_ov004_0224bc4c::vfunc_00() {
    func_ov004_022139ac();
    unk_152 = data_ov004_0224bbf8;
    unk_154 = data_ov004_02250190;
    if (func_ov004_0221397c()) {
        u32 t = func_020b50e8();
        func_0203e624((u16)(unk_150 | (t << 8)));
        func_ov004_02213840(0);
        return TRUE;
    }
    return FALSE;
}

Unk_ov004_0224bc4c::~Unk_ov004_0224bc4c() {}

Unk_ov004_0224bc4c::Unk_ov004_0224bc4c() {}

extern "C" Unk_ov004_0224bc4c *func_ov004_02213b3c() {
    return new Unk_ov004_0224bc4c;
}

extern "C" void func_ov004_022136d0(void *a, s32 b, s32 c, s32 d) {
    u16 loc[3];
    data_ov004_0224bbf8 = d;
    data_ov004_02250190 = b;
    loc[0] = 0;
    loc[1] = c;
    loc[2] = 0;
    func_02002cf8(0x17, 0, a, loc, 0);
}

extern "C" void *func_ov004_02213704(s32 i) {
    if (i >= 0 && (u32)i < 0x40) {
        return data_ov004_022501c4[i];
    }
    return 0;
}

extern "C" void func_ov004_022139ac() {
    if (data_ov004_0225016c == 0) {
        u32 i;
        for (i = 0; i < 0x40; i++) {
            data_ov004_022501c4[i] = 0;
        }
    }
}

// ---------------------------------------------------------------- free functions and the class that follows
extern "C" {
extern u8 data_ov004_022502c4;
extern s32 data_ov004_022502d4;
extern u16 data_ov004_0224bd3c;
extern s32 data_ov004_022502d8;
extern s32 data_ov004_022502e8;
extern s32 data_ov004_022502f8;
extern u8 data_021f4880[];
extern void *data_ov004_0225033c[];
}

extern "C" s32 func_ov004_02213b90() {
    if (data_ov004_022502c4 == 0) {
        data_ov004_022502d4 = 4;
        data_ov004_0224bd3c = 0;
        data_ov004_022502d8 = 0;
        data_ov004_022502e8 = 0;
        data_ov004_022502f8 = 0;
        return func_02002cf8(0x19, 0, data_021f4880, 0, 0);
    }
    return 0;
}

extern "C" void func_ov004_02213be8(s32 a, void *b, s32 c, s32 d, s16 e, s32 f, s32 g) {
    u16 loc[3];
    data_ov004_022502d4 = a;
    data_ov004_0224bd3c = e;
    data_ov004_022502d8 = f;
    data_ov004_022502e8 = g;
    data_ov004_022502f8 = d;
    loc[0] = 0;
    loc[1] = c;
    loc[2] = 0;
    func_02002cf8(0x19, 0, b, loc, 0);
}

extern "C" void *func_ov004_02213c40(s32 i) {
    if (i >= 0 && (u32)i < 0x20) {
        return data_ov004_0225033c[i];
    }
    return 0;
}

class Unk_020e1c64x {
public:
    Unk_020e1c64x();
    ~Unk_020e1c64x();
    u8 pad[0x20];
};

class Unk_0206fe80x {
public:
    BOOL func_020700a4(void *x, u16 *id);
    u32 func_02070370(u16 *id);
};

extern "C" {
extern Unk_0206fe80x data_021ed0a0;
extern char data_ov004_0224be8c[];
}

class Unk_ov004_02213c58 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    void func_ov004_02213c58();
    BOOL func_ov004_02213c7c();
    BOOL func_ov004_02213f34(s32 m);

    /* 0x130 */ u8 pad_130[0x168 - 0x130];
    /* 0x168 */ u8 unk_168;
};

void Unk_ov004_02213c58::func_ov004_02213c58() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02213f34(2);
        }
    }
}

BOOL Unk_ov004_02213c58::func_ov004_02213c7c() {
    u16 id[2];
    func_0203e488(this, this);
    func_020a710c(data_ov004_0224be8c);
    id[1] = 0x12e4;
    Unk_0206fe80x *const g = &data_021ed0a0;
    if (g->func_02070370(&id[1]) <= 1) {
        Unk_020e1c64x obj;
        if (g->func_020700a4(&obj, &id[1])) {
            unk_1e = 3;
            unk_3c->func_02067a3c(0, &obj);
        }
    } else {
        unk_1e = 4;
    }
    unk_3c->unk_08 = 1;
    unk_168++;
    return TRUE;
}

class Unk_ov004_0224a9b0 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224a9b0();
};
Unk_ov004_0224a9b0::~Unk_ov004_0224a9b0() {}

class Unk_ov004_0224a884 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224a884();
};
Unk_ov004_0224a884::~Unk_ov004_0224a884() {}

class Unk_ov004_0224a62c : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224a62c();
};
Unk_ov004_0224a62c::~Unk_ov004_0224a62c() {}

class Unk_ov004_0224a500 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224a500();
};
Unk_ov004_0224a500::~Unk_ov004_0224a500() {}

class Unk_ov004_0224a050 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224a050();
};
Unk_ov004_0224a050::~Unk_ov004_0224a050() {}

class Unk_ov004_02249f24 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_02249f24();
};
Unk_ov004_02249f24::~Unk_ov004_02249f24() {}

class Unk_ov004_02249ccc : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_02249ccc();
};
Unk_ov004_02249ccc::~Unk_ov004_02249ccc() {}

class Unk_ov004_02249ba0 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_02249ba0();
};
Unk_ov004_02249ba0::~Unk_ov004_02249ba0() {}

class Unk_ov004_0224981c : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224981c();
};
Unk_ov004_0224981c::~Unk_ov004_0224981c() {}

class Unk_ov004_022496f0 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_022496f0();
};
Unk_ov004_022496f0::~Unk_ov004_022496f0() {}

class Unk_ov004_02249498 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_02249498();
};
Unk_ov004_02249498::~Unk_ov004_02249498() {}

class Unk_ov004_0224936c : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224936c();
};
Unk_ov004_0224936c::~Unk_ov004_0224936c() {}

class Unk_ov004_0224b43c : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224b43c();
};
Unk_ov004_0224b43c::~Unk_ov004_0224b43c() {}

class Unk_ov004_0224b310 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224b310();
};
Unk_ov004_0224b310::~Unk_ov004_0224b310() {}

class Unk_ov004_0224b0b8 : public Unk_ov004_0224882c {
public:
    virtual ~Unk_ov004_0224b0b8();
};
Unk_ov004_0224b0b8::~Unk_ov004_0224b0b8() {}


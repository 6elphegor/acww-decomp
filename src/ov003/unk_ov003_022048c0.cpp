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
    virtual void vfunc_20();
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
    virtual void vfunc_20();
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
    virtual BOOL vfunc_48(void *a);
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

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX, except 0x14 (main symbol _ZN12Unk_020ddcf08vfunc_14Ev).
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 pad_04[0x18];
};

class Unk_020660f8 {
public:
    s32 func_02067a3c(s32 idx, void *p);
    u8 pad_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_14();
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

struct Unk_02204930_Pad {
    s32 v;
    Unk_02204930_Pad() {}
    ~Unk_02204930_Pad() {}
};

class Unk_02002fc8 {
public:
    u32 func_02002fc8(u32 p);
};

// member at +0x134: the original constructs it with C2 (base-object constructor), so it is raw storage plus explicit calls
struct Unk_020b6a94 {
    u8 pad[0x1c];
};

struct Unk_020b6960;

struct Unk_ov003_022309d0_Color {
    u8 a, b, c, d;
    Unk_ov003_022309d0_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
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
extern u8 data_021dfd8c[];
u8 *func_0207bf60(u8 *p, s32 i);
Unk_02002fc8 *_ZN12Unk_0208086013func_020805c4Ev(u8 *p);
void _ZN12Unk_020d967013func_0203e47cEi(void *self, Unk_020ddcf0 *sec);
void _ZN12Unk_020d967013func_0203e488Ei(void *self, Unk_020ddcf0 *sec);
BOOL _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih(Unk_020b6960 *self, Unk_020b6a94 *o, s32 *a, s32 b, s32 c, u8 d);
BOOL func_0203d67c(void *p);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
Unk_020b6960 *func_020b50b4();
void _ZN12Unk_020b6a94C1Ev(Unk_020b6a94 *self);
void _ZN12Unk_020b6a94D1Ev(Unk_020b6a94 *self);
void func_ov003_02204b20();
}

class Unk_ov003_022309d0;

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

extern "C" Unk_ov003_022309d0 *func_ov003_02204c94();

extern "C" Unk_ov003_022309d0 *data_ov003_02234fb4[8];

extern "C" Unk_ov003_022309d0_Color data_ov003_02234f80(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f64(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f68(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f70(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f6c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f74(0x14, 0x18, 0x18, 0x1f);
extern "C" {
u8 data_ov003_02234f60;
}

extern "C" Unk_ov003_022309d0 *func_ov003_02204c94() {
    return new Unk_ov003_022309d0;
}

Unk_ov003_022309d0::Unk_ov003_022309d0() {
    _ZN12Unk_020b6a94C1Ev(&unk_134);
}

Unk_ov003_022309d0::~Unk_ov003_022309d0() {
    _ZN12Unk_020b6a94D1Ev(&unk_134);
}

BOOL Unk_ov003_022309d0::vfunc_00() {
    func_ov003_02204b20();
    func_0203e624((u16) * (s32 *)((u8 *)this + 8));
    func_ov003_02204a24(0);
    data_ov003_02234fb4[*(s32 *)((u8 *)this + 8)] = this;
    data_ov003_02234f60++;
    return TRUE;
}

BOOL Unk_ov003_022309d0::vfunc_18() {
    func_ov003_022049a8();
    _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih(func_020b50b4(), &unk_134, unk_5c, 0xc00, 9, *(s32 *)((u8 *)this + 8));
    return TRUE;
}

BOOL Unk_ov003_022309d0::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov003_022309d0::vfunc_0c() {
    data_ov003_02234fb4[*(s32 *)((u8 *)this + 8)] = 0;
    data_ov003_02234f60--;
    return TRUE;
}

extern "C" void func_ov003_02204b20() {
    if (data_ov003_02234f60 == 0) {
        u32 i;
        for (i = 0; i < 8; i++) {
            data_ov003_02234fb4[i] = 0;
        }
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

void Unk_ov003_022309d0::func_ov003_022049a8() {
    static Unk_022049a8_Fn tbl[3] = { &Unk_ov003_022309d0::func_ov003_022049a0, &Unk_ov003_022309d0::func_ov003_0220490c, &Unk_ov003_022309d0::func_ov003_022048d8 };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

extern "C" Unk_ov003_SceneEntry data_ov003_022309b0 = {(void *(*)())func_ov003_02204c94, 0x18, 0x1d, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" {
Unk_ov003_022309d0 *data_ov003_02234fb4[8];
}

BOOL Unk_ov003_022309d0::func_ov003_022049a4() {
    return TRUE;
}

void Unk_ov003_022309d0::func_ov003_022049a0() {}

BOOL Unk_ov003_022309d0::func_ov003_02204930() {
    Unk_02204930_Pad pad;
    _ZN12Unk_020d967013func_0203e488Ei(this, this);
    func_020a710c("obj_etc_board");
    unk_1e = 0;
    ((Unk_020660f8 *)unk_3c)->unk_08 = 1;
    Unk_020e1c64 buf;
    _ZN12Unk_0208086013func_020805c4Ev(func_0207bf60(data_021dfd8c, *(s32 *)((u8 *)this + 8)))->func_02002fc8((u32)&buf);
    ((Unk_020660f8 *)unk_3c)->func_02067a3c(0, &buf);
    return TRUE;
}

void Unk_ov003_022309d0::func_ov003_0220490c() {
    if (unk_3c) {
        if (((Unk_020660f8 *)unk_3c)->unk_04) {
            func_ov003_02204a24(2);
        }
    }
}

BOOL Unk_ov003_022309d0::func_ov003_02204908() {
    return TRUE;
}

void Unk_ov003_022309d0::func_ov003_022048d8() {
    if (unk_3c) {
        if (((Unk_020660f8 *)unk_3c)->unk_04 == 0) {
            _ZN12Unk_020d967013func_0203e47cEi(this, this);
            func_0203d67c(this);
        }
    }
}

// ================================================================
extern "C" Unk_ov003_022309d0 *func_ov003_022048c0(s32 i) {
    if (i >= 0 && i < 8) {
        return data_ov003_02234fb4[i];
    }
    return 0;
}


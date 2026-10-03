#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
s32 func_0203e2f4();
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_02095134(s32 v);
}

extern "C" {
void DC_FlushRange(void *p, u32 size);
}

extern "C" {
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
}

extern "C" {
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
}

extern "C" {
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
}

extern "C" {
void func_020a7fd8(Unk_02050288 *obj);
}

extern "C" {
void func_020a7bd8(void *p);
}

extern s32 data_021c5384;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
struct Unk_0208e13c_Rec { u32 unk_00; u32 unk_04; };
extern Unk_0208e13c_Rec data_020d5b0c[];
extern u16 data_021ceb00[];
extern u8 data_020cf6ec[];
extern u32 data_020cf6f0[];
extern u8 data_020cf6e8[];
extern s32 data_020cf708[];
extern s32 data_020cf6f8[];

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e1028 : public Unk_020e0db4 {
public:
    Unk_020e1028(u32 flag);
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d9d4();
    void func_0208dae4(s32 v);
    void func_0208dae8(s32 x, s32 y);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

class Unk_020e1064 : public Unk_020e0db4 {
public:
    Unk_020e1064();
    virtual ~Unk_020e1064();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ddb8();
    void func_0208ddd8();
    void func_0208de10();
    void func_0208de30();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
};

Unk_020e1064 data_021ceadc;

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u32 flag);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208dff4();
    void func_0208e074();
    void func_0208e08c();
    BOOL func_0208e110();
    s32 func_0208e138();
    void func_0208e13c(s32 v);
    void func_0208e1fc(s32 *outx, s32 *outy);
    void func_0208e288(s32 x, s32 y);
    void func_0208e290();
    void func_0208e2c8();
    void func_0208e2d0();
    void func_0208e2d8();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ Unk_02050288 *unk_48;
    /* 0x4c */ StrBuf unk_4c;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};
// forward declarations
extern "C" void func_0208de8c();
extern "C" void func_0208de88();
extern "C" void func_0208de78();
extern "C" void func_0208de68();

Unk_020e1064::Unk_020e1064() {
    unk_20 = 0;
}

Unk_020e1064::~Unk_020e1064() {
}

void Unk_020e1064::vfunc_08() {
    if (unk_20 != 0) {
        void *h = unk_0c.func_02089248();
        s32 x = func_02089f68() + unk_0c.func_02089228(-1);
        s32 y = func_02089f64() + unk_0c.func_02089210(-1);
        func_02087e70(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_020e1064::vfunc_0c() {
    typedef void (Unk_020e1064::*Fn)();
    static Fn tbl[4] = {&Unk_020e1064::func_0208de30, &Unk_020e1064::func_0208de10, &Unk_020e1064::func_0208ddd8, &Unk_020e1064::func_0208ddb8};
    (this->*tbl[unk_20])();
}

extern "C" void func_0208de8c() { data_021ceadc.unk_20 = 0; }

extern "C" void func_0208de88() {}

extern "C" void func_0208de78() { data_021ceadc.vfunc_0c(); }

extern "C" void func_0208de68() { data_021ceadc.vfunc_08(); }


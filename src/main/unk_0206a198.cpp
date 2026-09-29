#include "types.h"

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a832c();
    void func_020a8348(u8 *p);
    void func_020a8368(u8 *p);
    BOOL func_020a837c(u32 arg);
    BOOL func_020a83f0(u32 c);
    void func_020a83f4(u8 *p);
    void func_020a8400(s32 n);
    void func_020a840c();
    void func_020a84bc();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_0206a198_Sub {
public:
    virtual ~Unk_0206a198_Sub();

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
    virtual void vfunc_38(u32 v);
};

struct Unk_0206a198_Owner {
    /* 0x0000 */ u8 pad[0x13b0];
    /* 0x13b0 */ Unk_0206a198_Sub *unk_13b0;
};

extern "C" {
void func_020a7768(void *p);
extern u8 data_020cba1c[];
}

class Unk_0206a198 : public Unk_020e2b08 {
public:

    void func_02068b4c();
    void func_02068b50();
    void func_02068b70();
    void func_02068b90();
    void func_02068bb0();
    void func_02068bd0();
    void func_02068bf0();
    void func_02068c10();
    void func_02068c30();
    void func_02068c50();
    void func_02068c70();
    void func_02068c90();
    void func_02068c94();
    void func_02068c98();
    void func_02068c9c();
    void func_02068d20();
    void func_02068d78();
    void func_02068dd0();
    void func_02068e40();
    void func_02068e9c();
    void func_02068f10();
    void func_02068f9c();
    void func_02068ffc();
    void func_0206905c();
    void func_020690d0();
    void func_0206912c();
    void func_020691bc();
    void func_0206920c();
    void func_02069258();
    void func_02069360();
    void func_020693a0();
    void func_020693fc();
    void func_02069400();
    void func_0206945c();
    void func_0206949c();
    void func_020694a8();
    void func_020694b4();
    void func_020694c0();
    void func_020694cc();
    void func_020694d8();
    void func_020694e4();
    void func_020694f0();
    void func_020694fc();
    void func_02069508();
    void func_02069514();
    void func_02069520();
    void func_0206952c();
    void func_02069538();
    void func_02069544();
    void func_02069550();
    void func_020695bc();
    void func_02069618();
    void func_02069674();
    void func_020696d0();
    void func_020696f0();
    void func_02069710();
    void func_02069730();
    void func_02069750();
    void func_02069770();
    void func_02069790();
    void func_020697b0();
    void func_020697f4();
    void func_02069834();
    void func_02069878();
    void func_020698bc();
    void func_020698e8();
    void func_02069914();
    void func_02069940();
    void func_0206996c();
    void func_0206998c();
    void func_020699a4();
    void func_020699bc();
    void func_020699d4();
    void func_020699ec();
    void func_02069ad0();
    void func_02069b94();
    void func_02069c34();
    void func_02069cb8();
    void func_02069cd8();
    void func_02069cfc();
    void func_02069d20();
    void func_02069d44();
    void func_02069d68();
    void func_02069d8c();
    void func_02069dc0();
    void func_02069df0();
    void func_02069e24();
    void func_02069e28();
    void func_02069e70();
    void func_02069e88();
    void func_02069ea0();
    void func_02069ec4();
    void func_02069ee8();
    void func_02069efc();
    void func_02069f28();
    void func_02069f40();
    void func_02069f58();
    void func_02069f70();
    void func_02069f88();
    void func_02069fa0();
    void func_0206a198();
    void func_0206a1f8();
    void func_0206a2d8();
    void func_0206a358();
    void func_0206a380();
    void func_0206a498();
    void func_0206a55c();
    void func_0206a7a8();
    void func_0206a844();
    void func_0206a93c();
    void func_0206aa84();

    /* 0x24 */ Unk_0206a198_Owner *unk_24;
    /* 0x28 */ u8 unk_28[0x10];
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40[0x8];
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 unk_4c[0x8c];
    /* 0xd8 */ u8 unk_d8;
};

void Unk_0206a198::func_0206a198()
{
    static void (Unk_0206a198::*const tbl[1])() = {
        &Unk_0206a198::func_02068b4c,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a1f8()
{
    static void (Unk_0206a198::*const tbl[10])() = {
        &Unk_0206a198::func_02068c70,
        &Unk_0206a198::func_02068c50,
        &Unk_0206a198::func_02068c30,
        &Unk_0206a198::func_02068c10,
        &Unk_0206a198::func_02068bf0,
        &Unk_0206a198::func_02068bd0,
        &Unk_0206a198::func_02068bb0,
        &Unk_0206a198::func_02068b90,
        &Unk_0206a198::func_02068b70,
        &Unk_0206a198::func_02068b50,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a2d8()
{
    static void (Unk_0206a198::*const tbl[3])() = {
        &Unk_0206a198::func_02068c98,
        &Unk_0206a198::func_02068c94,
        &Unk_0206a198::func_02068c90,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a358()
{
    u32 v = unk_3c;
    Unk_0206a198_Sub *p = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    p->vfunc_38(v);
}

void Unk_0206a198::func_0206a380()
{
    static void (Unk_0206a198::*const tbl[14])() = {
        &Unk_0206a198::func_0206920c,
        &Unk_0206a198::func_020691bc,
        &Unk_0206a198::func_0206912c,
        &Unk_0206a198::func_020690d0,
        &Unk_0206a198::func_0206905c,
        &Unk_0206a198::func_02068ffc,
        &Unk_0206a198::func_02068f9c,
        &Unk_0206a198::func_02068f10,
        &Unk_0206a198::func_02068e9c,
        &Unk_0206a198::func_02068e40,
        &Unk_0206a198::func_02068dd0,
        &Unk_0206a198::func_02068d78,
        &Unk_0206a198::func_02068d20,
        &Unk_0206a198::func_02068c9c,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a498()
{
    static void (Unk_0206a198::*const tbl[8])() = {
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069258,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a55c()
{
    static void (Unk_0206a198::*const tbl[35])() = {
        &Unk_0206a198::func_02069878,
        &Unk_0206a198::func_02069834,
        &Unk_0206a198::func_020697f4,
        &Unk_0206a198::func_020697b0,
        &Unk_0206a198::func_02069790,
        &Unk_0206a198::func_02069770,
        &Unk_0206a198::func_02069750,
        &Unk_0206a198::func_02069730,
        &Unk_0206a198::func_02069710,
        &Unk_0206a198::func_020696f0,
        &Unk_0206a198::func_020696d0,
        &Unk_0206a198::func_02069674,
        &Unk_0206a198::func_02069618,
        &Unk_0206a198::func_020695bc,
        &Unk_0206a198::func_02069550,
        &Unk_0206a198::func_02069544,
        &Unk_0206a198::func_02069538,
        &Unk_0206a198::func_0206952c,
        &Unk_0206a198::func_02069520,
        &Unk_0206a198::func_02069514,
        &Unk_0206a198::func_02069508,
        &Unk_0206a198::func_020694fc,
        &Unk_0206a198::func_020694f0,
        &Unk_0206a198::func_020694e4,
        &Unk_0206a198::func_020694d8,
        &Unk_0206a198::func_020694cc,
        &Unk_0206a198::func_020694c0,
        &Unk_0206a198::func_020694b4,
        &Unk_0206a198::func_020694a8,
        &Unk_0206a198::func_0206949c,
        &Unk_0206a198::func_0206945c,
        &Unk_0206a198::func_02069400,
        &Unk_0206a198::func_020693fc,
        &Unk_0206a198::func_020693a0,
        &Unk_0206a198::func_02069360,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a7a8()
{
    static void (Unk_0206a198::*const tbl[5])() = {
        &Unk_0206a198::func_0206996c,
        &Unk_0206a198::func_02069940,
        &Unk_0206a198::func_02069914,
        &Unk_0206a198::func_020698e8,
        &Unk_0206a198::func_020698bc,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206a844()
{
    static void (Unk_0206a198::*const tbl[8])() = {
        &Unk_0206a198::func_02069c34,
        &Unk_0206a198::func_02069b94,
        &Unk_0206a198::func_02069ad0,
        &Unk_0206a198::func_020699ec,
        &Unk_0206a198::func_020699d4,
        &Unk_0206a198::func_020699bc,
        &Unk_0206a198::func_020699a4,
        &Unk_0206a198::func_0206998c,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    if (unk_d8) {
        unk_d8 = 0;
        (this->*f)();
    } else {
        func_020a83f4(unk_48);
        unk_d8 = 1;
        func_020a8348(data_020cba1c);
    }
}

void Unk_0206a198::func_0206a93c()
{
    static void (Unk_0206a198::*const tbl[17])() = {
        &Unk_0206a198::func_02069efc,
        &Unk_0206a198::func_02069ee8,
        &Unk_0206a198::func_02069ec4,
        &Unk_0206a198::func_02069ea0,
        &Unk_0206a198::func_02069e88,
        &Unk_0206a198::func_02069e70,
        &Unk_0206a198::func_02069e28,
        &Unk_0206a198::func_02069e24,
        &Unk_0206a198::func_02069df0,
        &Unk_0206a198::func_02069dc0,
        &Unk_0206a198::func_02069d8c,
        &Unk_0206a198::func_02069d68,
        &Unk_0206a198::func_02069d44,
        &Unk_0206a198::func_02069d20,
        &Unk_0206a198::func_02069cfc,
        &Unk_0206a198::func_02069cd8,
        &Unk_0206a198::func_02069cb8,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

void Unk_0206a198::func_0206aa84()
{
    static void (Unk_0206a198::*const tbl[11])() = {
        &Unk_0206a198::func_02069f88,
        &Unk_0206a198::func_02069f70,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069f58,
        &Unk_0206a198::func_02069f40,
        &Unk_0206a198::func_02069f28,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

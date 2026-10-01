// mwcc-version: 1.2/base
// ov004 TU06: .text 0x02214948-0x02215f04 (classes Unk_ov004_0224c034 and its member Unk_ov004_0224bfa4)
#include "types.h"
// The no-argument vfunc_08 of the base is widened locally: Unk_020d77a4::vfunc_08 takes one argument.
#define vfunc_08() vfunc_08(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_08

extern "C" {
struct Unk_ov004_02215c94_V {
    s32 x, y, z;
};
struct Unk_02000c8c : Unk_ov004_02215c94_V {
    Unk_02000c8c(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~Unk_02000c8c();
};
}

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};

// ---------------------------------------------------------------------------------------------------------------------
// Class chain of Unk_ov004_0224c034 (vtable 0x0224c034). Every slot's final overrider carries the name the symbols use.
class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58();

    u32 pad_04[0x58 / 4];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xe0 - 0x90];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    u16 pad_e0[5];
    u16 unk_ea;
    u8 unk_ec[0x350 - 0xec];
    u8 unk_350[0x3b0 - 0x350];
    u8 unk_3b0[0x558 - 0x3b0];
    u8 unk_558[0xc];
    u8 unk_564[0x618 - 0x564];
    u8 unk_618[0x640 - 0x618];
};

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_0c();
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ u8 unk_64c[0x680 - 0x64c];
    /* 0x680 */ u8 unk_680[0x824 - 0x680];
    /* 0x824 */ u8 unk_824[8];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ u8 unk_838[0x894 - 0x838];
};

// ---------------------------------------------------------------------------------------------------------------------
// Member Unk_ov004_0224bfa4 (at +0x89c of the menu): a menu state holder with the owner at +0x1a0. Its vtable
// 0x0224bfa4 names its slots after four library classes; the chain below reproduces which class owns which slot.
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60x();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
};

class Unk_020d7710 : public Unk_02015b54 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60x();
};

class Unk_020d7714 : public Unk_020d7710 {
public:
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_6c();
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

struct Unk_ov004_0221572c_Sub {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    u8 pad_0c[8];
    /* 0x14 */ s32 unk_14;
};

class Unk_020d8938 : public Unk_020ddcf0 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
    virtual void vfunc_60();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();

    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_0221572c_Sub *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_ov004_0224c034;

class Unk_ov004_0224bfa4 : public Unk_020d8938 {
public:
    Unk_ov004_0224bfa4() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov004_0221570c(Unk_ov004_0224c034 *owner);
    void *func_ov004_0221588c();
    void func_ov004_022158a8(s32 v);
    BOOL func_ov004_022158c4(u16 *p);
    void *func_ov004_02215a50();
    void func_ov004_022159a4();
    u32 func_ov004_022159bc();
    void func_ov004_022159d8();
    BOOL func_ov004_022159f0();
    void func_ov004_02215a14();
    BOOL func_ov004_02215a2c();

    Unk_ov004_0224c034 *unk_1a0;
};

typedef BOOL (Unk_ov004_0224c034::*Unk_ov004_0224c034_Fn)();

class Unk_ov004_0224c034 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c034() : unk_a48(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL func_ov004_02215c3c();
    void func_ov004_02215b9c();
    BOOL func_ov004_02215208(s32 idx);
    void func_ov004_022150f0();
    BOOL func_ov004_02215098();

    void func_ov004_02214a04();
    BOOL func_ov004_02214a38();
    void func_ov004_02214a3c();
    BOOL func_ov004_02214a40();
    void func_ov004_02214a44();
    BOOL func_ov004_02214a48();
    void func_ov004_02214a4c();
    BOOL func_ov004_02214a80();
    void func_ov004_02214a90();
    BOOL func_ov004_02214ab0();
    void func_ov004_02214ab4();
    BOOL func_ov004_02214be8();
    void func_ov004_02214c28();
    BOOL func_ov004_02214c34();
    void func_ov004_02214c38();
    BOOL func_ov004_02214c58();
    void func_ov004_02214c5c();
    BOOL func_ov004_02214c68();
    void func_ov004_02214c9c();
    BOOL func_ov004_02214ca0();
    void func_ov004_02214cd4();
    BOOL func_ov004_02214d50();
    void func_ov004_02214d60();
    BOOL func_ov004_02214dc0();
    void func_ov004_02214dd0();
    BOOL func_ov004_02214dd4();
    void func_ov004_02214e58();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ u8 unk_898;
    /* 0x899 */ u8 pad_899[3];
    /* 0x89c */ Unk_ov004_0224bfa4 unk_89c;
    /* 0xa40 */ Unk_ov004_0224c034_Fn unk_a40;
    /* 0xa48 */ u16 unk_a48;
    /* 0xa4a */ u8 unk_a4a;
    /* 0xa4b */ u8 unk_a4b;
    /* 0xa4c */ s16 unk_a4c;
    /* 0xa4e */ u16 unk_a4e;
    /* 0xa50 */ s32 unk_a50[3];
    /* 0xa5c */ s32 unk_a5c[3];
};

struct Unk_ov004_022146ec_Actor {
    u8 pad_00[0x5c];
    s32 pos[3];
    u8 pad_68[0x8e - 0x68];
    u16 ang;
};

extern "C" {
Unk_ov004_0224c034 *func_ov004_02215eac();
BOOL func_ov004_02215e2c(u16 *p, s32 flag);
u16 func_ov004_022154ec(s32 n);
void func_ov004_0221570c(void *a, void *b);
s32 func_ov004_02234f6c(Unk_ov004_02215c94_V *v);
Unk_ov004_022146ec_Actor *func_ov004_02216c84(void);
u16 func_ov004_02216ba4(void *, void *, s32);
}

#define func_0200301c _ZN12Unk_02002fc813func_0200301cEPvjj
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02014ce4 _ZN12Unk_0201442013func_02014ce4EPtjjj
#define func_02014e60 _ZN12Unk_020d771013func_02014e60EPtjjj
#define func_0201578c _ZN12Unk_020d771413func_0201578cEjjj
#define func_020157b8 _ZN12Unk_020d771413func_020157b8Ejj
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_02019638 _ZN12Unk_0201985813func_02019638Eiht
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a9ec _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3
#define func_0201b138 _ZN12Unk_020d77a48vfunc_24Ev
#define func_0201bb3c _ZN12Unk_020d77a413func_0201bb3cEP16Unk_020d77a4_Vec
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bc4c _ZN12Unk_020d77a413func_0201bc4cEj
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0201bd20 _ZN12Unk_020d77a413func_0201bd20Ej
#define func_0202d388 _ZN12Unk_020d893813func_0202d388EP12Unk_020d89c8j
#define func_0202d928 _ZN12Unk_020d89c88vfunc_10Ev
#define func_0202d948 _ZN12Unk_020d89c88vfunc_00Ev
#define func_0202dab0 _ZN12Unk_020d89c88vfunc_04Ev
#define func_0206338c _ZN12Unk_0206338013func_0206338cEii
#define func_020679b4 _ZN12Unk_020660f813func_020679b4Ev
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02067abc _ZN12Unk_020660f813func_02067abcEPhPv
#define func_020805c4 _ZN12Unk_0208086013func_020805c4Ev
#define func_02080a04 _ZN12Unk_0208091c13func_02080a04Ev
#define func_02080a2c _ZN12Unk_0208091c13func_02080a2cEv
#define func_02080a40 _ZN12Unk_0208091c13func_02080a40Ev
#define func_02080a64 _ZN12Unk_0208091c13func_02080a64Ev
#define func_02080a74 _ZN12Unk_0208091c13func_02080a74Ev
#define func_02080a98 _ZN12Unk_0208091c13func_02080a98Ev
#define func_02080da4 _ZN12Unk_0208091c13func_02080da4Ei
#define func_02080dd8 _ZN12Unk_0208091c13func_02080dd8Ev
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_0209b354 _ZN12Unk_0209b3bc13func_0209b354Ev
#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev

struct Unk_ov004_02214ab4_Vec {
    s32 x, y, z;
};
extern "C" {
Unk_ov004_02214ab4_Vec *func_020947f0(u32);
s32 func_0201bd20(void *, u32);
s32 func_020197a8(void *);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201a9ec(void *, void *);
s32 func_02002bdc(void *, void *);
s32 func_020e780c(s32, s32);
void func_020141b4(void *, s32, s32, s32);
void *func_02095204(s32);
s32 func_0201bcbc(void *, void *);
s32 func_02019638(void *, s32, s32, u32);
s32 func_02019614(void *, s32, u32);
s32 func_020e7b98(s32, s32);
s32 func_0201a6c0(void *, s32, s32, void *, void *, s32, s32, s32);
s32 func_02063b8c(s32);
s32 func_02019790(void *);
s32 func_0201bb3c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e9650(void *, void *);
void func_02067a84(void *, void *, s32);
s32 func_0206ea84(void *);
s32 func_0206ead4(s32, u32);
s32 func_0203d67c(void *);
s32 func_0203d704(void *, u32);
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
extern u8 data_021edb5c[];
extern u8 data_ov004_0225042c[];
void *func_020679b4(void *);
s32 func_020aa514(void *);
void func_02067abc(void *, void *, s32);
void func_02014e60(void *, void *, s32, s32, s32);
void func_02099014(void *, s32);
void *func_02080dd8(void *);
void func_02080da4(void *, s8);
void func_0201578c(void *, void *, s32, s32);
void func_0206338c(void *, s32, s32);
void func_02063388(void *);
void func_02062f94(u16 *, void *, s32, s32, s32, s32, s32);
void *func_0209750c();
void func_0206277c(u16 *, void *, s32);
void *func_020805c4(void *);
void func_0200301c(void *, void *, s32, void *);
void func_020157b8(void *, void *, s32);
void *func_0208175c(s32);
s32 func_02081780();
s32 func_0206ec6c();
s32 func_0206ed18();
void *func_0206ed38();
u16 func_02099048();
s32 func_0204be70(u16 *);
void func_02099064(void *);
void func_02014ce4(void *, void *, s32, s32, s32);
void *func_0207e268(void *);
u32 func_0209a610(void *);
u32 func_0209b354(u32);
s32 func_0204b2d4(void *);
void func_0202d388(void *, void *, u32);
s32 func_0202d948(void *self);
s32 func_0202dab0(void *self);
s32 func_0202d928(void *self);
void func_020135c4(void *p);
void func_01ffd070(Unk_ov004_02215c94_V *out, void *a, void *b);
void func_0201bc28(void *self, void *p);
void *func_0201bc4c(void *self, s32 n);
void func_02015ab0(void *p, void *q);
void func_0203a680(void *p);
void func_0203a844();
s32 func_0209888c(...);
void *func_0207f55c(void *p, s32 v);
void func_02080ecc(void *p, s32 a, s32 b, s32 c);
s32 func_02080a64(void *p);
s32 func_02080a40(void *p);
s32 func_02080a98(void *p);
s32 func_02080a74(void *p);
s32 func_02080a2c(void *p);
s32 func_02080a04(void *p);
s32 func_02014220(void *p);
s32 func_0201b138(void *p);
s32 func_0204b25c(u16 *p);
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
}

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224c034 *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" Unk_ov004_0224c034 *func_ov004_02215eb8();
extern "C" void _ZN18Unk_ov004_0224c03419func_ov004_02215c3cEv();
extern "C" void *data_ov004_0224befc[2];
extern "C" Unk_ov004_Quad data_ov004_022503c0(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503dc(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503c4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503bc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503cc(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503d0(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry data_ov004_0224bf84 = { func_ov004_02215eb8, 0x80, 0x84, 2, 0x5000, 0x5000, 0x3e800 };
extern "C" {
Unk_ov004_0224c034 *data_ov004_022503d8;
}

typedef Unk_ov004_0221572c_Sub Unk_ov004_02214a4c_Obj;

static inline BOOL Unk_ov004_022158c4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

typedef void (Unk_ov004_0224c034::*Unk_ov004_022150f0_Fn)();
typedef BOOL (Unk_ov004_0224c034::*Unk_ov004_02215208_Fn)();

extern "C" Unk_ov004_0224c034 *func_ov004_02215eb8() {
    return new Unk_ov004_0224c034();
}

extern "C" Unk_ov004_0224c034 *func_ov004_02215eac() { return data_ov004_022503d8; }

extern "C" BOOL func_ov004_02215e84() {
    Unk_ov004_0224c034 *o = data_ov004_022503d8;
    if (o) {
        return o->unk_89c.func_ov004_022159bc();
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02215e2c(u16 *p, s32 flag) {
    if (flag == 0) {
        BOOL eq;
        if (func_0204b2d4(p)) {
            u16 v = 0xfff1;
            s32 a = func_0204b25c(p);
            if (a == func_0204b25c(&v)) {
                eq = TRUE;
            } else {
                eq = FALSE;
            }
        } else {
            if (*p == 0xfff1) {
                eq = TRUE;
            } else {
                eq = FALSE;
            }
        }
        if (eq == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224c034::vfunc_04() {
    if (!func_0202dab0(this)) {
        return FALSE;
    }
    unk_5c[0] = data_020c8cb4 + 0x1000;
    unk_5c[2] = data_020c8cb8 - 0x7000;
    static Unk_02000c8c vs[6] = {
        Unk_02000c8c(0, 0, 0), Unk_02000c8c(-0x2000, 0, 0), Unk_02000c8c(-0x4000, 0, 0),
        Unk_02000c8c(0x2000, 0, 0), Unk_02000c8c(0, 0, 0x2000), Unk_02000c8c(-0x2000, 0, 0x2000)
    };
    u32 i;
    for (i = 0; i < 6; i++) {
        Unk_ov004_02215c94_V t;
        func_01ffd070(&t, unk_5c, &vs[i]);
        if (!func_ov004_02234f6c(&t)) {
            unk_5c[0] = t.x;
            unk_5c[1] = t.y;
            unk_5c[2] = t.z;
            break;
        }
    }
    unk_8e = 0;
    func_0201bc28(this, &unk_89c);
    unk_89c.func_ov004_0221570c(this);
    if (!unk_89c.func_ov004_02215a2c()) {
        func_ov004_02215208(0);
    } else {
        func_ov004_02215208(7);
        unk_89c.func_ov004_02215a14();
    }
    data_ov004_022503d8 = this;
    return TRUE;
}

extern "C" void *data_ov004_0224befc[2] = { (void *)_ZN18Unk_ov004_0224c03419func_ov004_02215c3cEv, 0 };
extern "C" {
u8 data_ov004_0225042c[0x28];
}

BOOL Unk_ov004_0224c034::vfunc_00() {
    if (!func_0202d948(this)) {
        return FALSE;
    }
    unk_a40 = *(Unk_ov004_0224c034_Fn *)data_ov004_0224befc;
    func_020135c4(&unk_558);
    return TRUE;
}

BOOL Unk_ov004_0224c034::func_ov004_02215c3c() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c034::vfunc_24() {
    if (unk_a40) {
        return (this->*unk_a40)();
    }
    return TRUE;
}

BOOL Unk_ov004_0224c034::vfunc_10() {
    if (!func_0202d928(this)) {
        return FALSE;
    }
    data_ov004_022503d8 = NULL;
    return TRUE;
}

BOOL Unk_ov004_0224c034::vfunc_68() {
    func_ov004_022150f0();
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02215b9c() {
    void *o = func_0209750c();
    if (o != NULL && unk_82c != NULL) {
        s32 r = func_0209888c(o);
        void *p = func_0207f55c(unk_82c, r);
        func_02080ecc(p, 0, 0, 0);
    }
}

BOOL Unk_ov004_0224c034::vfunc_48() {
    if (func_02014220(&unk_618)) {
        return FALSE;
    }
    if (unk_894 <= 3) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c034::vfunc_58() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c034::vfunc_4c(s32 a, u32 b) {
    Unk_ov004_02215c94_V v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    v.y = v.y + 0x2000;
    switch (a) {
    case 3:
        *((u8 *)this + 0x560) = b;
        func_ov004_02215208(4);
        break;
    case 0:
        *((u8 *)this + 0x560) = b;
        func_02015ab0(&unk_89c, func_0201bc4c(this, 4));
        func_0203a680(&v);
        func_ov004_02215208(5);
        break;
    case 1:
        *((u8 *)this + 0x560) = b;
        func_02015ab0(&unk_89c, func_0201bc4c(this, 4));
        func_0203a680(&v);
        func_ov004_02215208(8);
        break;
    case 8:
        func_0203a844();
        func_ov004_02215b9c();
        func_ov004_02215208(0);
        break;
    case 4:
        func_ov004_02215208(0);
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

void *Unk_ov004_0224bfa4::func_ov004_02215a50() {
    if (unk_1a0 != NULL && unk_1a0->unk_82c != NULL) {
        func_0209750c();
        s32 r = func_0209888c();
        return func_0207f55c(unk_1a0->unk_82c, r);
    }
    return NULL;
}

BOOL Unk_ov004_0224bfa4::func_ov004_02215a2c() {
    void *p = func_ov004_02215a50();
    if (p) {
        if (func_02080a04(p) == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov004_0224bfa4::func_ov004_02215a14() {
    void *p = func_ov004_02215a50();
    if (p) {
        func_02080a2c(p);
    }
}

BOOL Unk_ov004_0224bfa4::func_ov004_022159f0() {
    void *p = func_ov004_02215a50();
    if (p) {
        if (func_02080a74(p) == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov004_0224bfa4::func_ov004_022159d8() {
    void *p = func_ov004_02215a50();
    if (p) {
        func_02080a98(p);
    }
}

u32 Unk_ov004_0224bfa4::func_ov004_022159bc() {
    void *p = func_ov004_02215a50();
    if (p) {
        return func_02080a40(p);
    }
    return 0;
}

void Unk_ov004_0224bfa4::func_ov004_022159a4() {
    void *p = func_ov004_02215a50();
    if (p) {
        func_02080a64(p);
    }
}

BOOL Unk_ov004_0224bfa4::func_ov004_022158c4(u16 *p) {
    BOOL r;
    if (unk_1a0 && unk_1a0->unk_82c) {
        u32 c = func_0209b354(func_0209a610(func_0207e268(unk_1a0->unk_82c)));
        r = FALSE;
        switch (c) {
        case 0:
            if (*p >= 0x12b0 && *p <= 0x12e7) r = TRUE;
            break;
        case 1:
            if (*p >= 0x12e8 && *p <= 0x131f) r = TRUE;
            break;
        case 2:
            if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
            break;
        case 3:
            if (*p >= 0x11a8 && *p <= 0x12a7) r = TRUE;
            break;
        case 4:
            if (func_0204b2d4(p)) {
                if (!Unk_ov004_022158c4_Range(p, 0x450c, 0x45db)) r = TRUE;
            }
            break;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov004_0224bfa4::func_ov004_022158a8(s32 v) {
    void *p = this->func_ov004_02215a50();
    if (p) {
        func_02080da4(p, v);
    }
}

void *Unk_ov004_0224bfa4::func_ov004_0221588c() {
    void *p = this->func_ov004_02215a50();
    if (p) {
        return func_02080dd8(p);
    }
    return 0;
}

void Unk_ov004_0224bfa4::vfunc_84() {
    if (unk_1a0->unk_894 == 0xc) {
        unk_3c->unk_08 = 1;
    }
}

void Unk_ov004_0224bfa4::vfunc_80() {
    u8 b0, b1, b2;
    u16 x;
    if (unk_1a0->unk_894 == 0xb) {
        if (func_0206ec6c()) {
            if (func_0206ed18() == 0) {
                unk_3c->unk_08 = 1;
                b0 = func_02063b8c(2) + 7;
                func_02067a84(unk_3c, &b0, 0);
                unk_1a0->func_ov004_02215208(6);
            } else {
                void *r6 = func_0206ed38();
                x = func_02099048();
                s32 r4 = func_0204be70(&x);
                func_02099064(r6);
                func_0201578c(this, &x, 0, 7);
                if (func_ov004_022158c4(&x)) {
                    b1 = func_02063b8c(2) + 0xd;
                    func_02067a84(unk_3c, &b1, 0);
                    func_ov004_022158a8(5);
                    if (r4 >= 1000) func_ov004_022158a8(5);
                    if (r4 >= 2000) func_ov004_022158a8(10);
                    func_02014ce4(this, &x, 0, 5, 0);
                    unk_1a0->func_ov004_02215208(12);
                } else {
                    b2 = func_02063b8c(2) + 0xb;
                    func_02067a84(unk_3c, &b2, 0);
                    func_ov004_022158a8(2);
                    if (r4 >= 1000) func_ov004_022158a8(5);
                    if (r4 >= 2000) func_ov004_022158a8(5);
                    func_02014ce4(this, &x, 0, 5, 0);
                    unk_1a0->func_ov004_02215208(12);
                }
            }
        }
    }
}

void Unk_ov004_0224bfa4::func_ov004_0221570c(Unk_ov004_0224c034 *owner) {
    func_0202d388(this, owner, 0x11);
    unk_1a0 = owner;
}

void Unk_ov004_0224bfa4::vfunc_78(void *arg) {
    u8 *out = (u8 *)arg;
    func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_0225042c, 0x28, (void *)"ev_nbirth");
    *(u32 *)out = (u32)data_ov004_0225042c;
    if (unk_1a0->unk_894 == 9) {
        out[4] = func_02063b8c(2);
    } else {
        s32 k = 3;
        if (this->func_ov004_022159f0()) {
            k = 1;
        } else if (this->func_ov004_022159bc()) {
            k = 2;
        }
        this->func_ov004_022159d8();
        switch (k) {
        case 1:
            out[4] = func_02063b8c(2) + 2;
            break;
        case 2:
            out[4] = func_02063b8c(4) + 0x13;
            break;
        default:
            out[4] = func_02063b8c(2) + 4;
            break;
        }
        Unk_ov004_0224c034 *p = unk_1a0;
        if (p->unk_89c.unk_3c) {
            if (p && p->unk_82c) {
                func_020157b8(&unk_1a0->unk_89c, func_020805c4(p->unk_82c), 1);
            }
            s32 i = 0;
            Unk_ov004_0224c034 **pp = &unk_1a0;
            goto test;
            for (;;) {
                void *q;
                q = func_0208175c(i);
                if (q && q != *pp) {
                    func_020157b8(&unk_1a0->unk_89c, func_020805c4(*(void **)((u8 *)q + 0x82c)), 0);
                    break;
                }
                i++;
            test:
                if (i >= func_02081780()) break;
            }
            u16 w = 0x1100;
            func_0201578c(this, &w, 0, 7);
            func_0201578c(this, &w, 1, 7);
        }
    }
}

extern "C" u16 func_ov004_022154ec(s32 n) {
    u16 w0, w1, w2, w3, w4;
    if (n <= 0) {
        u32 o[2];
        func_0206338c(o, 1, 0);
        func_02062f94(&w1, &o, 0, 0, 1, 1, 0);
        u16 r = w1;
        func_02063388(o);
        return r;
    }
    if (n <= 0x3f) {
        if (func_02063b8c(2) == 0) {
            u32 o[2];
        func_0206338c(o, 0, 0);
            func_02062f94(&w2, &o, 0, 0, 1, 1, 0);
            u16 r = w2;
            func_02063388(o);
            return r;
        } else {
            u32 o[2];
        func_0206338c(o, 2, 0);
            func_02062f94(&w3, &o, 0, 0, 1, 1, 0);
            u16 r = w3;
            func_02063388(o);
            return r;
        }
    }
    func_0206277c(&w0, func_0209750c(), 0);
    if (w0 == 0xfff1) {
        u32 o[2];
        func_0206338c(o, 0, 0);
        func_02062f94(&w4, &o, 0, 0, 1, 1, 0);
        u16 r = w4;
        func_02063388(o);
        return r;
    }
    return w0;
}

void Unk_ov004_0224bfa4::vfunc_10() {
    switch (unk_1e) {
    case 0xf:
    case 0x10: {
        volatile u16 v;
        v = func_ov004_022154ec((s32)func_ov004_0221588c());
        unk_1a0->unk_a48 = v;
        func_0201578c(this, (void *)&v, 1, 7);
        break;
    }
    }
}

void Unk_ov004_0224bfa4::vfunc_14() {
    u8 b[3];
    switch (unk_1e) {
    case 4:
    case 5:
    case 6:
        break;
    case 7:
    case 8:
        b[0] = data_021edb5c[0];
        func_02067abc(unk_3c, &b[0], 0);
        break;
    case 9:
    case 10:
        unk_1a0->func_ov004_02215208(10);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
        b[1] = func_02063b8c(2) + 0xf;
        func_02067a84(unk_1a0->unk_89c.unk_3c, &b[1], 0);
        break;
    case 15:
    case 16:
        func_02014e60(this, &unk_1a0->unk_a48, 0, 5, 0);
        func_02099014(&unk_1a0->unk_a48, 0);
        unk_1a0->func_ov004_02215208(13);
        break;
    case 17:
    case 18:
        this->func_ov004_022159a4();
        break;
    case 19:
    case 20:
    case 21:
    case 22:
        b[2] = data_021edb5c[0];
        func_02067abc(unk_3c, &b[2], 0);
        break;
    }
}

void Unk_ov004_0224bfa4::vfunc_18() {
    u8 b[3];
    s32 r = func_020aa514(func_020679b4(unk_1a0->unk_89c.unk_3c));
    switch (unk_1e) {
    case 4:
    case 5:
        if (r == 0) {
            if (func_0206ea84((void *)func_ov004_02215e2c)) {
                b[0] = func_02063b8c(2) + 9;
                func_02067a84(unk_1a0->unk_89c.unk_3c, &b[0], 0);
            } else {
                b[1] = 6;
                func_02067a84(unk_1a0->unk_89c.unk_3c, &b[1], 0);
            }
        } else {
            b[2] = func_02063b8c(2) + 7;
            func_02067a84(unk_1a0->unk_89c.unk_3c, &b[2], 0);
        }
        break;
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02215208(s32 idx) {
    static Unk_ov004_02215208_Fn tbl[14] = {
        &Unk_ov004_0224c034::func_ov004_02215098,
        &Unk_ov004_0224c034::func_ov004_02214dd4,
        &Unk_ov004_0224c034::func_ov004_02214dc0,
        &Unk_ov004_0224c034::func_ov004_02214d50,
        &Unk_ov004_0224c034::func_ov004_02214ca0,
        &Unk_ov004_0224c034::func_ov004_02214c68,
        &Unk_ov004_0224c034::func_ov004_02214c58,
        &Unk_ov004_0224c034::func_ov004_02214c34,
        &Unk_ov004_0224c034::func_ov004_02214be8,
        &Unk_ov004_0224c034::func_ov004_02214ab0,
        &Unk_ov004_0224c034::func_ov004_02214a80,
        &Unk_ov004_0224c034::func_ov004_02214a48,
        &Unk_ov004_0224c034::func_ov004_02214a40,
        &Unk_ov004_0224c034::func_ov004_02214a38,
    };
    if (idx < 14) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224c034::func_ov004_022150f0() {
    static Unk_ov004_022150f0_Fn tbl[14] = {
        &Unk_ov004_0224c034::func_ov004_02214e58,
        &Unk_ov004_0224c034::func_ov004_02214dd0,
        &Unk_ov004_0224c034::func_ov004_02214d60,
        &Unk_ov004_0224c034::func_ov004_02214cd4,
        &Unk_ov004_0224c034::func_ov004_02214c9c,
        &Unk_ov004_0224c034::func_ov004_02214c5c,
        &Unk_ov004_0224c034::func_ov004_02214c38,
        &Unk_ov004_0224c034::func_ov004_02214c28,
        &Unk_ov004_0224c034::func_ov004_02214ab4,
        &Unk_ov004_0224c034::func_ov004_02214a90,
        &Unk_ov004_0224c034::func_ov004_02214a4c,
        &Unk_ov004_0224c034::func_ov004_02214a44,
        &Unk_ov004_0224c034::func_ov004_02214a3c,
        &Unk_ov004_0224c034::func_ov004_02214a04,
    };
    if (unk_894 < 14) {
        (this->*tbl[unk_894])();
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02215098() {
    if (func_02019614(unk_564, 1, data_020c6cc8)) {
        func_0201a6c0(unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c034::func_ov004_02214e58() {
    s32 c[3];
    u8 *m = unk_564;
    if (unk_3b0[0x508 - 0x3b0] != 0 && func_020197a8(m) == 1) {
        func_020196b4(m, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        return;
    }
    if (func_020197a8(unk_564) == 0) {
        if (unk_a4e != 0) {
            unk_a4e--;
        }
        if (unk_a4e == 0) {
            unk_a4c = func_ov004_02216ba4(unk_a5c, unk_5c, unk_8e);
            unk_a50[0] = unk_a5c[0];
            unk_a50[1] = unk_a5c[1];
            unk_a50[2] = unk_a5c[2];
            if (unk_a4c != unk_8e) {
                if (func_020196b4(unk_564, 3, 1, 0, 0, 0, unk_a4c, 0, 0, data_020c6cc8, 0) != 0) {
                    unk_a4e = func_02063b8c(0x46) + 0x14;
                }
            } else {
                if (func_020196b4(unk_564, 1, 1, unk_a5c[0], unk_a5c[2], 0, 0, 0, 0, data_020c6cc8, 0) != 0) {
                    unk_a4e = func_02063b8c(0x50) + 0x14;
                }
            }
        } else {
            if (func_02019790(unk_564) != 0) {
                func_02019614(unk_564, 1, data_020c6cc8);
            }
        }
    } else if (func_020197a8(unk_564) == 3) {
        if (func_02019790(unk_564) != 0) {
            func_020196b4(unk_564, 1, 1, unk_a5c[0], unk_a5c[2], 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (func_020197a8(unk_564) == 1) {
        switch (func_0201bb3c(this, c)) {
        case 1:
            func_02019614(unk_564, 1, data_020c6cc8);
            break;
        case 2:
            unk_a50[0] = c[0];
            unk_a50[1] = c[1];
            unk_a50[2] = c[2];
            func_0201a9ec(unk_350, unk_a50);
            break;
        default:
            if (func_020e96ec(unk_a50, unk_a5c) != 0) {
                unk_a50[0] = unk_a5c[0];
                unk_a50[1] = unk_a5c[1];
                unk_a50[2] = unk_a5c[2];
                func_0201a9ec(unk_350, unk_a5c);
            } else if (func_020e9650(unk_a5c, unk_5c) < 0x200) {
                func_02019614(unk_564, 1, data_020c6cc8);
            }
            break;
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214dd4() {
    u8 *m = unk_564;
    Unk_ov004_022146ec_Actor *o = func_ov004_02216c84();
    if (o != 0) {
        s32 dx = o->pos[0] - unk_5c[0];
        s32 dz = o->pos[2] - unk_5c[2];
        s32 ang = func_020e7b98(dx, dz);
        func_020196b4(m, 3, 1, 0, 0, 0, ang, 0, 0, data_020c6cc8, 0);
        func_0201a6c0(unk_3b0, 2, 0, o, data_021f4880, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c034::func_ov004_02214dd0() {}

BOOL Unk_ov004_0224c034::func_ov004_02214dc0() {
    unk_a4b = 0x1e;
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214d60() {
    if (unk_a4b != 0) {
        unk_a4b--;
    }
    switch (unk_a4b) {
    case 0x14:
        func_02019638(unk_564, 1, 3, data_020c6cc8);
        break;
    case 1:
        func_02019638(unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        func_ov004_02215208(0);
        break;
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214d50() {
    unk_a4b = 0x32;
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214cd4() {
    if (unk_a4b != 0) {
        unk_a4b--;
    }
    switch (unk_a4b) {
    case 0x28:
        if (func_02063b8c(2) == 0) {
            func_02019638(unk_564, 1, 0xa, data_020c6cc8);
        } else {
            func_02019638(unk_564, 1, 0x17, data_020c6cc8);
        }
        break;
    case 1:
        func_02019638(unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        func_ov004_02215208(0);
        break;
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214ca0() {
    if ((u32)(unk_894 - 1) <= 2) {
        func_02019638(unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214c9c() {}

BOOL Unk_ov004_0224c034::func_ov004_02214c68() {
    BOOL r;
    void *o = func_02095204(4);
    if (o != 0) {
        func_020141b4(unk_618, 0, func_0201bcbc(this, o), 0);
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void Unk_ov004_0224c034::func_ov004_02214c5c() {
    func_ov004_02215208(6);
}

BOOL Unk_ov004_0224c034::func_ov004_02214c58() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214c38() {
    Unk_ov004_02214a4c_Obj *o = unk_89c.unk_3c;
    if (o != 0) {
        if (o->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214c34() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214c28() {
    func_0203d704(this, 0);
}

BOOL Unk_ov004_0224c034::func_ov004_02214be8() {
    unk_a4a = 0x32;
    func_020196b4(unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214ab4() {
    Unk_ov004_02214ab4_Vec a, b;
    s32 v, r4, r0;
    Unk_ov004_02214ab4_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    b.x = a.x;
    b.y = a.y;
    b.z = a.z;
    v = func_0201bd20(this, 4);
    if (v > 0x4000) {
        if (func_020197a8(unk_564) == 1) {
            func_020196b4(unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(unk_564) == 2) {
            func_020196b4(unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(unk_350, &b);
    if (unk_a4a != 0) {
        unk_a4a--;
    }
    r4 = func_02002bdc(unk_5c, &a);
    r0 = func_020e780c(unk_8e, r4);
    if (v <= 0x3000 || unk_a4a == 0) {
        func_020141b4(unk_618, 0, r4, 0);
        func_ov004_02215208(9);
    } else if (r0 > 0x2000) {
        func_020196b4(unk_564, 4, 2, b.x, b.z, 0, r4, 0, 0, data_020c6cc8, 0);
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214ab0() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214a90() {
    Unk_ov004_02214a4c_Obj *o = unk_89c.unk_3c;
    if (o != 0) {
        if (o->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214a80() {
    unk_89c.unk_3c->unk_14 = 1;
    return TRUE;
}

void Unk_ov004_0224c034::func_ov004_02214a4c() {
    if (unk_89c.unk_3c->unk_04 == 5) {
        if (func_0206ead4(func_0206ea84((void *)func_ov004_02215e2c), 0xd) != 0) {
            func_ov004_02215208(0xb);
        }
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02214a48() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214a44() {}

BOOL Unk_ov004_0224c034::func_ov004_02214a40() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214a3c() {}

BOOL Unk_ov004_0224c034::func_ov004_02214a38() { return TRUE; }

void Unk_ov004_0224c034::func_ov004_02214a04() {
    u8 buf[1];
    buf[0] = func_02063b8c(2) + 0x11;
    func_02067a84(unk_89c.unk_3c, buf, 0);
    func_ov004_02215208(6);
}

void Unk_ov004_0224c034::vfunc_80() {
    unk_898 = 1;
}

BOOL Unk_ov004_0224c034::vfunc_7c() {
    if (unk_898 == 0) {
        return TRUE;
    }
    return FALSE;
}


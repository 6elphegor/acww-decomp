#include "types.h"

// Library base class (same as Unk_020d8c7c.h, but vfunc_08 takes the s32 the vtable symbol names).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

struct Unk_0201bc1c;
class Unk_020d77a4;
class Unk_ov048_0225cc58;
class Unk_ov048_0225cbc8;

struct Unk_ov048_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_ov048_Vec_Loc : Unk_ov048_Vec {
    Unk_ov048_Vec_Loc() {}
};

struct Unk_ov048_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov048_Owner {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov048_0225b278_Vec {
    s32 x, y, z;
};

struct Unk_ov048_0225b278_Ent {
    u8 pad_00[0x5c];
    Unk_ov048_0225b278_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov048_0225ae04_Row {
    const void *name;
    u8 id;
};

struct Unk_ov048_Rec {
    u8 pad_00[4];
    s32 unk_04;
};
struct Unk_ov048_0225ae04_Out {
    const void *unk_00;
    u8 unk_04;
};
// Two-step storage for the three model/sequence name pointers (their strings are named arrays below).
extern "C" {
extern char data_ov048_0225caf4[];
extern char data_ov048_0225cb08[];
extern char data_ov048_0225cb1c[];
extern char data_ov048_0225cb4c[];
extern void *data_ov048_0225c6e0;
extern void *data_ov048_0225c6e4;
extern void *data_ov048_0225c6e8;
extern const u8 data_ov048_0225c324[4];
extern const Unk_ov048_Vec data_ov048_0225c328;
extern const Unk_ov048_Vec data_ov048_0225c334;
extern const Unk_ov048_Vec data_ov048_0225c340;
extern const Unk_ov048_Vec data_ov048_0225c34c;
extern const Unk_ov048_Vec data_ov048_0225c358;
extern const Unk_ov048_Vec data_ov048_0225c364;
extern Unk_ov048_Global *data_020cbb18;
extern u8 data_021c3cc0;
extern u16 data_020c6cc8;
extern u8 data_021d7352[];
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, void *);
void _ZN12Unk_020660f813func_02067a3cEiPv(void *, s32, void *);
void _ZN12Unk_020660f813func_02067a78Ev(void *);
s32 func_020eaf18();
s32 func_020ea748();
s32 func_020ea738();
void func_020ea72c();
void _ZN12Unk_020e3efcC1Ev(void *);
void _ZN12Unk_020e3efcD1Ev(void *);
void func_020b3270(void *, s32, s32, s32, s32, s32);
void _ZN12Unk_020dd38cC2Ev(void *);
void _ZN12Unk_020dd374C2Ev(void *);
void _ZN12Unk_020e1c64C1Ev(void *);
void _ZN12Unk_020e1c4cC1Ev(void *);
void _ZN12Unk_020e1c4cD1Ev(void *);
void _ZN12Unk_020e1c64D1Ev(void *);
void _ZN12Unk_020dd374D1Ev(void *);
void _ZN12Unk_020dd38cD1Ev(void *);
BOOL func_020a78a4(void *, const void *, s32);
void _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(void *, void *, s32, s32);
BOOL func_020e7500(void *);
s32 func_020e77cc(s32, s32, s32);
void * _ZN12Unk_0209865c13func_02098680Ev(...);
void * func_02076c7c(void *);
void * func_02076e1c(void *);
void * func_02076c80(...);
BOOL func_020a05e8();
BOOL func_020ea3e8(void *);
void func_020ea3d0(void *, void *);
s32 func_020ea5d0(s32);
s32 func_020ea434(s32);
s32 func_020ea598(s32);
BOOL func_020eb1cc(s32);
BOOL func_0206ed18();
s32 func_0206ed38();
u8 * _ZN12Unk_020cbb1813func_020721ecEv(void *);
u8 * _ZN12Unk_020cbb1813func_020721f8Ev(void *);
void * func_0209750c();
s32 _ZN12Unk_0209865c13func_02098878Ev();
void func_0209ed74();
void func_0209ecf8();
void func_0209ec80();
void func_0209f248();
BOOL func_020a0554();
BOOL func_020a0828();
BOOL func_020a084c();
void func_020c0378();
s32 func_020c03a0();
void func_020a093c();
BOOL func_0209ee3c();
BOOL func_0209ef5c();
BOOL func_0209edcc();
BOOL func_0209efa4();
BOOL func_0209edf4();
BOOL func_0209ee60();
BOOL func_0209ee18();
BOOL func_020733bc();
s32 func_020eae78(s32);
void * func_020ea65c(s32);
s32 func_020ea6c8(void *);
void * func_020ea6f4(void *);
void func_020ea608(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 func_02133150(s32, s32);
BOOL func_0209eedc();
s32 func_020eb650(...);
s32 func_020ea574(s32);
BOOL func_020a032c();
s32 _ZN12Unk_020aa3b813func_020aa514Ev(void *);
void * _ZN12Unk_020660f813func_020679b4Ev(void *);
s32 func_ov004_02225ebc();
s32 func_02073340();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *);
BOOL _ZN12Unk_020cbb1813func_020729ccEj(void *, s32);
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *, s32);
void func_0209f1e4();
void func_0209f1c4();
void func_02076c9c(void *);
s32 func_020e9d94(void *);
s32 func_020ea3dc(void *);
s64 func_020ea3c4(...);
void _ZN12Unk_020cbb1813func_02072368Ej(void *, s32);
s32 _ZN12Unk_020660f813func_02067990Ev(void *);
s32 _ZN12Unk_020660f813func_02067a6cEv(void *);
s32 _ZN12Unk_020660f813func_0206799cEv(void *, s32);
s32 func_ov004_02225e9c();
s32 func_ov004_02225ee0();
s32 func_0202e148();
void _ZN12Unk_02097ff413func_0209801cEj(void *, s32);
u32 func_0209ccd0();
void * _ZN12Unk_0209865c13func_02098674Ev(void *);
void * func_02076db4(void *);
void * func_02076cf0(void *);
s32 func_02076f04(void *);
s32 func_0209f204();
s32 func_02073bf8(s32, s32, s32);
s32 func_02073a78();
s32 _ZN12Unk_020d77a413func_0201b9e8Eii(void *, s32 *, s32 *);
BOOL func_020a62a0();
Unk_ov048_Rec * func_02067918(s32);
void func_020a0978();
void * func_020b4934();
s32 func_020b4f58(void *, s32, s32, s32);
void * func_020850e0();
void * func_02085180(void *);
Unk_ov048_0225b278_Ent * func_02095204(s32);
void func_0204ee10(s32 *, s32 *, Unk_ov048_0225b278_Vec *);
void _ZN12Unk_02086ef013func_02086f00Ej(void *, s32);
void _ZN12Unk_02086ef013func_02086ef8Ei(void *, s32);
s32 func_020b4aa8(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
void func_0203a3d8();
void func_020a090c();
void func_020a0930();
s32 func_020b4f18(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
s32 func_020a5ef8();
void * func_02097520();
void _ZN12Unk_020660f813func_02067958Ev(void *);
void func_020b4bbc(void *, s32);
void func_02094b0c(void *, s32, s32);
s32 func_020951b8(s32);
void _ZN12Unk_0209865c13func_02098a58Ev(void *);
void _ZN12Unk_020e2a3013func_020a710cEPKc(void *, const char *);
void _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(void *, void *);
void * _ZN12Unk_0209865c13func_0209888cEv(...);
void _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(void *, void *);
s32 func_020a03c4();
void func_020b78c4();
s32 func_020a0414();
s32 func_02094f2c(s32, s32);
void func_02094f48(s32, s32);
void _ZN12Unk_0201a8c413func_0201a99cEs(void *, s32);
s32 func_020a03e4();
s32 func_02087444();
void * _ZN12Unk_0209865c13func_020986a4Ev(void *);
void * _ZN12Unk_020872fc13func_02087364Ev(void *);
s32 func_02063954();
s32 memcmp(void *, void *, u32);
void _ZN12Unk_020872fc13func_020872fcEv(void *);
BOOL _ZN12Unk_020872fc13func_02087314Ev(void *);
u8 * _ZN12Unk_020d5d8413func_02002d3cEjPS_(s32, s32);
s32 func_020e7518(void *);
s32 _ZN12Unk_0201635013func_0201622cEiPv(void *, s32, void *);
s32 _ZN12Unk_0201985813func_020195c8Eiijtt(void *, s32, s32, s32, u32, s32);
s32 _ZN12Unk_0201985813func_02019790Ev(void *);
s32 _ZN12Unk_0201a33413func_0201a784Ev(void *);
s32 func_0204137c(s32, s32);
s32 func_0200403c();
s32 _ZN12Unk_0201985813func_020197a8Ev(void *);
void _ZN12Unk_0201985813func_02019614Ejt(void *, s32, s32);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02063b8c(s32);
s32 func_ov004_0223f944();
s32 func_ov004_0223f958();
s32 func_02094ae8(s32, s32);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *);
s32 func_0203a488();
void func_0203d67c(void *);
s32 func_020ea4dc(s32);
s32 func_02073368();
void * func_02063964(void *);
void * _ZN12Unk_020940a013func_02094104Ev(void *);
void func_020ea720(void *, s32);
Unk_ov048_Vec * func_020947f0(s32);
void _ZN12Unk_02013b1013func_020141b4Essh(void *, s32, s32, s32);
s32 _ZN12Unk_020d8bc88vfunc_0cEv();
s32 func_020b50e8();
void func_0203d984();
s32 _ZN12Unk_020d8bc88vfunc_00Ev();
s32 _ZN12Unk_02086ef013func_02086efcEv(void *);
s32 _ZN12Unk_02086ef013func_02086ef0Ev(void *);
void _ZN12Unk_02086ef013func_02086f04Ev(void *);
void func_0203d990();
s32 _ZN12Unk_020d8bc88vfunc_04Ev();
void func_0203d704(void *, s32);
void _ZN12Unk_0201ad2013func_0201ad30Ei(void *, s32);
void _ZN12Unk_0201ad2013func_0201ad34Ei(void *, s32);
BOOL func_020c03c8();
BOOL func_0203e2f4();
s32 _ZN12Unk_02019dd813func_02019d8cEv(void *);
s32 func_020eaf90();
void func_020a0408();
s32 func_02073204();
void func_020731d4();
BOOL func_02073230(u32);
void func_020a5f38(u32);
void func_020a5f18(u32);
void * func_02085178(void *);
BOOL _ZN12Unk_02086f8413func_02086fa8Ev(void *);
void _ZN12Unk_020872fc13func_02087308Ev(void *);
s32 func_020a5f6c();
BOOL func_02074e80(void *, s32);
void func_02073348();

}
s32 func_020721b4();
s32 func_0207217c();
s32 func_020720f8();

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    Unk_020d77a4 *func_02015aac();
    void func_02015ab0(u32 p);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov048_Owner *unk_3c;
    u8 pad_40[0xaa - 0x40];
    u8 unk_aa;
    u8 pad_ab[0xac - 0xab];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    void func_02015170(u32 a, u32 b);
    void func_0201514c(u32 a, u32 b, u32 c);
    void func_020151d0(s32 v);
};

struct Unk_ov048_M0 {
    u8 pad_00[0x2e0 - 0xb8];
    u8 unk_2e0[0x14];
    u8 unk_2f4[0xe0];
    s32 unk_3d4;
};
struct Unk_ov048_M1 { u8 unk_00[0x108]; };
struct Unk_ov048_M2 { u8 unk_00[0xd4]; };
struct Unk_ov048_M3 { u8 unk_00[0x22c]; };

// Dialog-state sub object embedded in the scene (vtable data_ov048_0225cbc8).
class Unk_ov048_0225cbc8 : public Unk_020d7710 {
public:
    typedef void (Unk_ov048_0225cbc8::*Fn)();
    typedef void (Unk_ov048_0225cbc8::*ArgFn)(s32);

    Unk_ov048_0225cbc8();
    virtual ~Unk_ov048_0225cbc8();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov048_022594a8();
    void func_ov048_0225950c();
    void func_ov048_02259524();
    void func_ov048_02259648();
    void func_ov048_02259690();
    void func_ov048_022596e8();
    void func_ov048_022597e8(u32 msg, s32 unused);
    BOOL func_ov048_02259838();
    BOOL func_ov048_02259868();
    BOOL func_ov048_022598c0();
    BOOL func_ov048_022598f0();
    BOOL func_ov048_02259924(s32 flag);
    void func_ov048_02259a3c();
    void func_ov048_02259ab8();
    void func_ov048_02259ae0();
    void func_ov048_02259b60();
    void func_ov048_02259bb0();
    void func_ov048_02259c1c();
    void func_ov048_02259d40();
    BOOL func_ov048_02259e6c();
    void func_ov048_02259e9c();
    void func_ov048_02259ed4();
    void func_ov048_02259f00();
    void func_ov048_02259f38();
    void func_ov048_02259f64();
    void func_ov048_02259f9c();
    void func_ov048_02259fc8();
    void func_ov048_0225a000();
    void func_ov048_0225a02c();
    void func_ov048_0225a078(s32 s);
    void func_ov048_0225a32c(s32 p);
    void func_ov048_0225a36c(s32 p);
    void func_ov048_0225a370(s32 p);
    void func_ov048_0225a3b0(s32 p);
    void func_ov048_0225a3d4(s32 p);
    void func_ov048_0225a3f8(s32 p);
    void func_ov048_0225a448(s32 p, s32 id);
    void func_ov048_0225a4b8(s32 p);
    void func_ov048_0225a4c4(s32 p);
    void func_ov048_0225a4d0(s32 p);
    void func_ov048_0225a4dc(s32 p);
    void func_ov048_0225a4e8(s32 p);
    void func_ov048_0225a514(s32 p);
    void func_ov048_0225a5a8(s32 p);
    void func_ov048_0225a6a4(s32 p);
    void func_ov048_0225a6c8();
    void func_ov048_0225a79c(s32 p);
    void func_ov048_0225a7dc(s32 p);
    void func_ov048_0225a81c(s32 p);
    void func_ov048_0225a838(s32 p);
    void func_ov048_0225a890(s32 p);
    void func_ov048_0225a8a4(s32 p);
    void func_ov048_0225aad4();
    void func_ov048_0225aafc();
    void func_ov048_0225ab60();
    void func_ov048_0225ab88();
    void func_ov048_0225ab98();
    void func_ov048_0225aba8();
    void func_ov048_0225ac0c();
    void func_ov048_0225ac58();
    void func_ov048_0225ac7c();
    void func_ov048_0225acac();
    void func_ov048_0225ace0();
    void func_ov048_0225ad18();
    void func_ov048_0225ad28();
    void func_ov048_0225ad38();
    void func_ov048_0225ad50(s32 flag);
    void func_ov048_0225ad78();
    void func_ov048_0225adb0();
    void func_ov048_0225adec();
    BOOL func_ov048_0225af0c();
    s32 func_ov048_0225af48(s64 v);
    void func_ov048_0225afd8(s32 a, s32 b);
    void func_ov048_0225b018();
    s32 func_ov048_0225b030();
    void func_ov048_0225b038(s32 v);
    void func_ov048_0225b040(u8 *p);
    u32 func_ov048_02259364();
    u32 func_ov048_02259390();
    u32 func_ov048_022593bc();
    s32 func_ov048_022593e4();
    s32 func_ov048_02259420();

    s32 unk_ac;
    s32 unk_b0;
    u8 *unk_b4;
    Unk_ov048_M0 unk_b8;
    Unk_ov048_M1 unk_3d8;
    Unk_ov048_M2 unk_4e0;
    Unk_ov048_M3 unk_5b4;
    u8 unk_7e0;
    u8 unk_7e1;
    u8 unk_7e2;
    u8 unk_7e3;
    s16 unk_7e4;
    u16 unk_7e6;
    u8 unk_7e8;
    u8 unk_7e9;
    u8 pad_7ea[2];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 pad_45[0x514 - 0x4cc - 0x45];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d77a4_Vec3;

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual BOOL vfunc_58();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    BOOL func_0201b9bc();
    BOOL func_0201ba88();
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    void func_0201bc28(Unk_0201bc1c *p);
    s32 func_0201bc4c(u32 v);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov048_0225cc58 : public Unk_020d8bc8 {
public:
    typedef BOOL (Unk_ov048_0225cc58::*Fn)();

    Unk_ov048_0225cc58() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual BOOL vfunc_7c();

    BOOL func_ov048_02258e34();
    BOOL func_ov048_02258e88();
    s32 func_ov048_0225913c(s32 id);
    BOOL func_ov048_0225b13c();
    BOOL func_ov048_0225b140();
    BOOL func_ov048_0225b144();
    BOOL func_ov048_0225b19c();
    BOOL func_ov048_0225b1a0();
    BOOL func_ov048_0225b23c();
    BOOL func_ov048_0225b240();
    BOOL func_ov048_0225b274();
    BOOL func_ov048_0225b278();
    BOOL func_ov048_0225b314();
    BOOL func_ov048_0225b318();
    BOOL func_ov048_0225b3a4();
    BOOL func_ov048_0225b3a8();
    BOOL func_ov048_0225b444();
    BOOL func_ov048_0225b454();
    BOOL func_ov048_0225b46c();
    BOOL func_ov048_0225b49c();
    BOOL func_ov048_0225b4e4();
    BOOL func_ov048_0225b578();
    BOOL func_ov048_0225b580();
    BOOL func_ov048_0225b588();
    BOOL func_ov048_0225b624();
    BOOL func_ov048_0225b634();
    BOOL func_ov048_0225b64c();
    BOOL func_ov048_0225b680();
    BOOL func_ov048_0225b70c();
    BOOL func_ov048_0225b770();
    BOOL func_ov048_0225b828();
    BOOL func_ov048_0225b854();
    BOOL func_ov048_0225b918();
    BOOL func_ov048_0225ba44();
    BOOL func_ov048_0225bb34();
    BOOL func_ov048_0225bb8c();
    BOOL func_ov048_0225bbf8();
    BOOL func_ov048_0225bc44();
    BOOL func_ov048_0225bcb0();
    BOOL func_ov048_0225bcc0();
    BOOL func_ov048_0225bde0();
    BOOL func_ov048_0225bdf0();
    BOOL func_ov048_0225be7c();
    BOOL func_ov048_0225be8c();
    BOOL func_ov048_0225bec8();
    BOOL func_ov048_0225bf04();
    BOOL func_ov048_0225bf08();
    BOOL func_ov048_0225bf0c();
    BOOL func_ov048_0225bf30();
    BOOL func_ov048_0225bf68();
    BOOL func_ov048_0225bf78();
    BOOL func_ov048_0225bf9c();
    BOOL func_ov048_0225bfb0();

    s32 unk_654;
    Unk_ov048_0225cbc8 unk_658;
};

struct Unk_ov048_State_Ent {
    Unk_ov048_0225cc58::Fn enter;
    Unk_ov048_0225cc58::Fn exit;
};

struct Unk_ov048_0225cd04_Ent {
    Unk_ov048_0225cbc8::Fn f;
    u8 flag;
};

struct Unk_ov048_0225a108_Row {
    u32 id;
    Unk_ov048_0225cbc8::ArgFn f;
};

struct Unk_ov048_0225a8d4_Row {
    u32 id;
    Unk_ov048_0225cbc8::Fn f;
};

struct Unk_020e3efc {
    u8 unk_00[0x2c];
    Unk_020e3efc();
    ~Unk_020e3efc();
};

extern "C" {
extern void *data_ov048_0225c6ec[2];
extern void *data_ov048_0225c6f4[2];
extern void *data_ov048_0225c6fc[2];
extern void *data_ov048_0225c704[2];
extern void *data_ov048_0225c70c[2];
extern void *data_ov048_0225c714[2];
extern void *data_ov048_0225c71c[2];
extern void *data_ov048_0225c724[2];
extern void *data_ov048_0225c72c[2];
extern void *data_ov048_0225c734[2];
extern void *data_ov048_0225c73c[2];
extern void *data_ov048_0225c744[2];
extern void *data_ov048_0225c74c[2];
extern void *data_ov048_0225c754[2];
extern void *data_ov048_0225c75c[2];
extern void *data_ov048_0225c764[2];
extern void *data_ov048_0225c76c[2];
extern void *data_ov048_0225c774[2];
extern void *data_ov048_0225c77c[2];
extern void *data_ov048_0225c784[2];
extern void *data_ov048_0225c78c[2];
extern void *data_ov048_0225c794[2];
extern void *data_ov048_0225c79c[2];
extern void *data_ov048_0225c7a4[2];
extern void *data_ov048_0225c7ac[2];
extern void *data_ov048_0225c7b4[2];
extern void *data_ov048_0225c7bc[2];
extern void *data_ov048_0225c7c4[2];
extern void *data_ov048_0225c7cc[2];
extern void *data_ov048_0225c7d4[2];
extern void *data_ov048_0225c7dc[2];
extern void *data_ov048_0225c7e4[2];
extern void *data_ov048_0225c7ec[2];
extern void *data_ov048_0225c7f4[2];
extern void *data_ov048_0225c7fc[2];
extern void *data_ov048_0225c804[2];
extern void *data_ov048_0225c80c[2];
extern void *data_ov048_0225c814[2];
extern void *data_ov048_0225c81c[2];
extern void *data_ov048_0225c824[2];
extern void *data_ov048_0225c82c[2];
extern void *data_ov048_0225c834[2];
extern void *data_ov048_0225c83c[2];
extern void *data_ov048_0225c844[2];
extern void *data_ov048_0225c84c[2];
extern void *data_ov048_0225c854[2];
extern void *data_ov048_0225c85c[2];
extern void *data_ov048_0225c864[2];
extern void *data_ov048_0225c86c[2];
extern void *data_ov048_0225c874[2];
extern void *data_ov048_0225c87c[2];
extern void *data_ov048_0225c884[2];
extern void *data_ov048_0225c88c[2];
extern void *data_ov048_0225c894[2];
extern void *data_ov048_0225c89c[2];
extern void *data_ov048_0225c8a4[2];
extern void *data_ov048_0225c8ac[2];
extern void *data_ov048_0225c8b4[2];
extern void *data_ov048_0225c8bc[2];
extern void *data_ov048_0225c8c4[2];
extern void *data_ov048_0225c8cc[2];
extern void *data_ov048_0225c8d4[2];
extern void *data_ov048_0225c8dc[2];
extern void *data_ov048_0225c8e4[2];
extern void *data_ov048_0225c8ec[2];
extern void *data_ov048_0225c8f4[2];
extern void *data_ov048_0225c8fc[2];
extern void *data_ov048_0225c904[2];
extern void *data_ov048_0225c90c[2];
extern void *data_ov048_0225c914[2];
extern void *data_ov048_0225c91c[2];
extern void *data_ov048_0225c924[2];
extern void *data_ov048_0225c92c[2];
extern void *data_ov048_0225c934[2];
extern void *data_ov048_0225c93c[2];
extern void *data_ov048_0225c944[2];
extern void *data_ov048_0225c94c[2];
extern void *data_ov048_0225c954[2];
extern void *data_ov048_0225c95c[2];
extern void *data_ov048_0225c964[2];
extern void *data_ov048_0225c96c[2];
extern void *data_ov048_0225c974[2];
extern void *data_ov048_0225c97c[2];
extern void *data_ov048_0225c984[2];
extern void *data_ov048_0225c98c[2];
extern void *data_ov048_0225c994[2];
extern void *data_ov048_0225c99c[2];
extern void *data_ov048_0225c9a4[2];
extern void *data_ov048_0225c9ac[2];
extern void *data_ov048_0225c9b4[2];
extern void *data_ov048_0225c9bc[2];
extern void *data_ov048_0225c9c4[2];
extern void *data_ov048_0225c9cc[2];
extern void *data_ov048_0225c9d4[2];
extern void *data_ov048_0225c9dc[2];
extern void *data_ov048_0225c9e4[2];
extern void *data_ov048_0225c9ec[2];
extern void *data_ov048_0225c9f4[2];
extern void *data_ov048_0225c9fc[2];
extern void *data_ov048_0225ca04[2];
extern void *data_ov048_0225ca0c[2];
extern void *data_ov048_0225ca14[2];
extern void *data_ov048_0225ca1c[2];
extern void *data_ov048_0225ca24[2];
extern void *data_ov048_0225ca2c[2];
extern void *data_ov048_0225ca34[2];
extern void *data_ov048_0225ca3c[2];
extern void *data_ov048_0225ca44[2];
extern void *data_ov048_0225ca4c[2];
extern void *data_ov048_0225ca54[2];
extern void *data_ov048_0225ca5c[2];
extern void *data_ov048_0225ca64[2];
extern void *data_ov048_0225ca6c[2];
extern void *data_ov048_0225ca74[2];
extern void *data_ov048_0225ca7c[2];
extern void *data_ov048_0225ca84[2];
extern void *data_ov048_0225ca8c[2];
extern void *data_ov048_0225ca94[2];
extern void *data_ov048_0225ca9c[2];
extern void *data_ov048_0225caa4[2];
extern void *data_ov048_0225caac[2];
extern void *data_ov048_0225cab4[2];
extern void *data_ov048_0225cabc[2];
extern void *data_ov048_0225cac4[2];
extern void *data_ov048_0225cacc[2];
extern void *data_ov048_0225cad4[2];
extern void *data_ov048_0225cadc[2];
extern void *data_ov048_0225cae4[2];
extern void *data_ov048_0225caec[2];
extern Unk_ov048_State_Ent data_ov048_0225d168[];
extern Unk_ov048_0225cd04_Ent data_ov048_0225cd04[];
void func_ov048_0225bfb4(void *p, s32 s);
}

extern "C" {
void _ZN18Unk_ov048_0225cbc819func_ov048_0225af48Ex(void *, s32, s32);
void _ZN12Unk_0208722413func_020872dcEv(void *);
void _ZN12Unk_0208722413func_020872ecEv(void *);
void func_0203ec50(void *);
void func_0203ec54(void *);
void func_0203eccc(void *);
void func_0203ecdc(void *);
void _ZN12Unk_02071e04D1Ev(void *);
void _ZN12Unk_02071e04C1Ev(void *);
}

#define RNG(v, lo, hi) (func_020e77cc((v), (lo), (hi)) != 0)

// ---- b444
static inline BOOL Unk_ov048_0225b4e4_Is2() {
    if (data_021c3cc0 == 2) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov048_0225b854_Is0() {
    if (data_021c3cc0 == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov048_0225cc58 *func_ov048_0225c20c() {
    return new Unk_ov048_0225cc58();
}

BOOL Unk_ov048_0225cc58::vfunc_04() {
    if (Unk_020d8bc8::vfunc_04() == 0) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov048_0225b040((u8 *)this);
    func_0201bd9c(0x100);
    _ZN12Unk_0201ad2013func_0201ad30Ei(&unk_2a0, 0xd9);
    _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0xd8);
    if (func_020b50e8() != 0xb) {
        unk_558.unk_0b = 1;
    }
    if (func_020b50e8() == 0xc) {
        unk_4cc.unk_44 = 0;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::vfunc_00() {
    if (Unk_020d8bc8::vfunc_00() == 0) {
        return FALSE;
    }
    unk_658.unk_7e4 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) && func_020b50e8() == 0xb) {
        if (func_0201ba88()) {
            func_ov048_0225bfb4(this, 1);
        } else {
            func_ov048_0225bfb4(this, 0xf);
        }
        return TRUE;
    }
    void *p = func_02085180(func_020850e0());
    if (_ZN12Unk_02086ef013func_02086efcEv(p) == 1 || _ZN12Unk_02086ef013func_02086efcEv(p) == 2) {
        if (_ZN12Unk_02086ef013func_02086efcEv(p) == 1) {
            unk_658.func_ov048_0225b038(6);
        } else {
            unk_658.func_ov048_0225b038(7);
        }
        func_ov048_0225bfb4(this, 0);
        unk_8e = _ZN12Unk_02086ef013func_02086ef0Ev(p);
        unk_94 = _ZN12Unk_02086ef013func_02086ef0Ev(p);
        _ZN12Unk_02086ef013func_02086f04Ev(p);
    } else if (func_020b50e8() == 0xd) {
        func_0203d990();
        func_ov048_0225bfb4(this, 9);
    } else if (func_020b50e8() == 0xe) {
        func_0203d990();
        func_ov048_0225bfb4(this, 0xb);
    } else {
        func_ov048_0225bfb4(this, 1);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    if (func_020b50e8() == 0xd || func_020b50e8() == 0xe) {
        func_0203d984();
    }
    return TRUE;
}

u8 *Unk_ov048_0225cc58::vfunc_6c() {
    return (u8 *)data_ov048_0225c6e4;
}

u8 *Unk_ov048_0225cc58::vfunc_70() {
    return (u8 *)data_ov048_0225c6e8;
}

BOOL Unk_ov048_0225cc58::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov048_0225d168[unk_654].exit) {
        r = (this->*data_ov048_0225d168[unk_654].exit)();
    }
    return r;
}

extern "C" void func_ov048_0225bfb4(void *p, s32 s) {
    Unk_ov048_0225cc58 *self = (Unk_ov048_0225cc58 *)p;
    BOOL r = TRUE;
    if (data_ov048_0225d168[s].enter) {
        r = (self->*data_ov048_0225d168[s].enter)();
    }
    if (r) {
        self->unk_654 = s;
    }
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bfb0() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf9c() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf78() {
    _ZN12Unk_0201985813func_02019614Ejt(&unk_564, 1, data_020c6cc8);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf68() {
    func_ov048_02258e88();
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf30() {
    Unk_020d77a4 *o = unk_658.func_02015aac();
    s32 r = 0;
    if (o) {
        r = func_0201bcbc(o);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf0c() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_0203d67c(this);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf08() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf04() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bec8() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, unk_658.unk_7e4, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225be8c() {
    if (func_ov048_02258e88()) {
        return TRUE;
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            func_ov048_0225bfb4(this, 1);
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225be7c() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bdf0() {
    Unk_ov048_Vec_Loc a;
    Unk_ov048_Vec_Loc b;
    func_0209750c();
    Unk_ov048_Vec *p = func_020947f0(4);
    *(Unk_ov048_Vec *)&a = *p;
    switch (unk_658.unk_7e9) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        *(Unk_ov048_Vec *)&b = data_ov048_0225c334;
        func_02094b0c(&b, 0x266, 4);
        unk_658.unk_7e9 = 3;
        break;
    case 3:
        if (func_020951b8(4) == 0) {
            func_0203d67c(this);
        }
        break;
    }
    return TRUE;
}

// ---- bde0

BOOL Unk_ov048_0225cc58::func_ov048_0225bde0() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bcc0() {
    u8 buf[0x14];
    void *h;
    switch (unk_658.unk_7e9) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        if (func_0203a488() == 0) {
            func_ov004_02225ee0();
            unk_658.unk_7e6 = 0x3c;
            unk_658.unk_7e9 = 2;
            if (func_020eaf18() == 4) {
                func_020ea4dc(func_020721b4());
                _ZN12Unk_020cbb1813func_02072368Ej(data_020cbb18, 0);
                func_02073368();
            }
        }
        break;
    case 2:
        if (func_020e7500(&unk_658.unk_7e6) == 0) {
            u8 t = unk_658.unk_1e;
            if (t == 0x46 || t == 0x6c) {
                if (func_020eaf18() == 3) {
                    if (func_020eb650(func_020720f8()) != 0) {
                        func_0203d67c(this);
                    }
                } else {
                    unk_658.func_ov048_0225afd8(1, 0);
                    h = func_0209750c();
                    MI_CpuCopy8(func_02063964(data_021d7352), buf, 8);
                    MI_CpuCopy8(_ZN12Unk_020940a013func_02094104Ev(_ZN12Unk_0209865c13func_0209888cEv(h)), buf + 8, 8);
                    buf[0x10] = 0;
                    func_0207217c();
                    func_020ea720(buf, 0x11);
                    func_02073368();
                    func_0203d67c(this);
                }
            }
        } else {
            if (func_020eaf18() == 3) {
                func_020eb650(func_020720f8());
            }
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bcb0() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bc44() {
    switch (unk_658.unk_7e9) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        if (func_0203a488() == 0) {
            func_ov004_02225ebc();
            unk_658.unk_7e6 = 0x3c;
            unk_658.unk_7e9 = 2;
        }
        break;
    case 2:
        if (func_020e7500(&unk_658.unk_7e6) == 0) {
            func_0203d67c(this);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bbf8() {
    Unk_ov048_Vec v;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_ov004_0223f958();
        v = data_ov048_0225c340;
        func_02094b0c(&v, 0x400, 4);
        func_02094f48(1, 4);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bb8c() {
    if (func_020951b8(4) == 0) {
        func_02094ae8((s32)0xffff8000, 4);
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        unk_658.unk_7e6 = (u8)(func_02063b8c(5) + 5);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bb34() {
    if (func_020e7500(&unk_658.unk_7e6) == 0) {
        u8 *base = _ZN12Unk_020d5d8413func_02002d3cEjPS_(0x73, 0);
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(base + 0x564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225ba44() {
    u8 *base = _ZN12Unk_020d5d8413func_02002d3cEjPS_(0x73, 0);
    u8 *r4 = base + 0x564;
    Unk_ov048_Vec v;
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_02019614Ejt(&unk_564, 1, data_020c6cc8);
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(r4) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(r4)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(r4, 0, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 0) {
        if (_ZN12Unk_0201985813func_020197a8Ev(r4) == 0) {
            v = data_ov048_0225c34c;
            func_02094b0c(&v, 0x666, 4);
            _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x81, 1, data_020c6cc8, 0);
            unk_658.unk_7e8 = func_02063b8c(5) + 5;
            unk_658.unk_7e6 = 0x16;
            func_ov004_0223f944();
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b918() {
    u8 *base = _ZN12Unk_020d5d8413func_02002d3cEjPS_(0x73, 0);
    u8 *r4 = base + 0x334;
    u8 *r6 = base + 0x564;
    u8 *r7 = base + 0x2a0;
    u8 *sp8 = base + 0x3b0;
    if (func_020e7518(&unk_658.unk_7e8) == 0) {
        if (_ZN12Unk_0201635013func_0201622cEiPv(r4, 0x81, r7) == 0) {
            if (_ZN12Unk_0201635013func_0201622cEiPv(r4, 0x82, r7) == 0) {
                _ZN12Unk_0201985813func_020195c8Eiijtt(r6, 1, 0x81, 1, data_020c6cc8, 0);
            }
        }
    }
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0x81, &unk_2a0) != 0) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564) != 0) {
            _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (_ZN12Unk_0201635013func_0201622cEiPv(r4, 0x81, r7) != 0) {
        if (_ZN12Unk_0201985813func_02019790Ev(r6) != 0) {
            _ZN12Unk_0201985813func_020195c8Eiijtt(r6, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (unk_658.unk_7e6 == 2) {
        _ZN12Unk_0201a33413func_0201a784Ev(&unk_3b0);
        _ZN12Unk_0201a33413func_0201a784Ev(sp8);
    }
    if (func_020e7500(&unk_658.unk_7e6) == 0) {
        if (unk_654 == 8) {
            if (func_0204137c(2, 0xf)) {
                func_0200403c();
                return TRUE;
            }
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov048_0225b8a8() {
    void *h = func_0209750c();
    void *r4;
    if (func_02087444()) {
        r4 = _ZN12Unk_0209865c13func_020986a4Ev(h);
        _ZN12Unk_020872fc13func_02087364Ev(r4);
        if (func_02063954()) {
            u16 *q = (u16 *)data_021d7352;
            u16 *p = (u16 *)_ZN12Unk_020872fc13func_02087364Ev(r4);
            if (p[0] == q[0]) {
                if (memcmp(p + 1, q + 1, 8) == 0) {
                    goto skip;
                }
            }
        }
        _ZN12Unk_020872fc13func_020872fcEv(_ZN12Unk_0209865c13func_020986a4Ev(func_0209750c()));
    skip:
        if (_ZN12Unk_020872fc13func_02087314Ev(r4)) {
            _ZN12Unk_02097ff413func_0209801cEj(h, 0x36);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b854() {
    if (unk_654 == 8) {
        if (Unk_ov048_0225b854_Is0()) {
            func_020a03e4();
        } else {
            return FALSE;
        }
        func_ov048_0225bfb4(this, 3);
    } else {
        func_020b4bbc(func_020b4934(), 0);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b828() {
    unk_658.unk_7e9 = 0;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, unk_658.unk_7e4);
    return TRUE;
}extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_022594a8Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225950cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259524Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259648Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259690Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_022596e8Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259a3cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259ab8Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259ae0Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259b60Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259bb0Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259c1cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259d40Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259e9cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259ed4Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259f00Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259f38Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259f64Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259f9cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_02259fc8Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a000Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a02cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a32cEi();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a36cEi();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a370Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a3b0Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a3d4Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a3f8Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a4b8Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a4c4Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a4d0Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a4dcEi();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a4e8Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a514Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a5a8Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a6a4Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a79cEi();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a7dcEi();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a81cEi();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a838Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a890Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225a8a4Ei();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225aad4Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225aafcEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ab60Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ab88Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ab98Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225aba8Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ac0cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ac58Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ac7cEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225acacEv();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ace0Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ad18Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ad28Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225ad78Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225adb0Ev();
extern "C" void _ZN18Unk_ov048_0225cbc819func_ov048_0225adecEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b13cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b140Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b144Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b19cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b1a0Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b23cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b240Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b274Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b278Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b314Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b318Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b3a4Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b3a8Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b444Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b454Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b46cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b49cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b4e4Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b578Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b580Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b588Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b624Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b634Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b64cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b680Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b70cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b770Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b828Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b854Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225b918Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225ba44Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bb34Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bb8cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bbf8Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bc44Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bcb0Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bcc0Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bde0Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bdf0Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225be7cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225be8cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bec8Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf04Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf08Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf0cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf30Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf68Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf78Ev();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bf9cEv();
extern "C" void _ZN18Unk_ov048_0225cc5819func_ov048_0225bfb0Ev();
struct Unk_ov048_SceneEntry {
    Unk_ov048_0225cc58 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov048_0225cc58 *func_ov048_0225c20c();

// Declarations for data defined further down (definition order sets the data layout)
extern "C" char data_ov048_0225caf4[];
extern "C" char data_ov048_0225cb1c[];
extern "C" const u8 data_ov048_0225c324[4];
extern "C" void *data_ov048_0225c6e4;
extern "C" Unk_ov048_0225cd04_Ent data_ov048_0225cd04[23];
extern "C" void *data_ov048_0225c6e0;
extern "C" const Unk_ov048_Vec data_ov048_0225c364;
extern "C" Unk_ov048_State_Ent data_ov048_0225d168[18];
extern "C" void *data_ov048_0225c8dc[2];
extern "C" void *data_ov048_0225cacc[2];
extern "C" void *data_ov048_0225c724[2];
extern "C" void *data_ov048_0225c8cc[2];
extern "C" void *data_ov048_0225c7ac[2];
extern "C" void *data_ov048_0225c714[2];
extern "C" void *data_ov048_0225c6ec[2];
extern "C" void *data_ov048_0225c71c[2];
extern "C" void *data_ov048_0225caec[2];
extern "C" void *data_ov048_0225cae4[2];
extern "C" void *data_ov048_0225cadc[2];
extern "C" void *data_ov048_0225cad4[2];
extern "C" void *data_ov048_0225c8a4[2];
extern "C" void *data_ov048_0225cac4[2];
extern "C" void *data_ov048_0225cabc[2];
extern "C" void *data_ov048_0225cab4[2];
extern "C" void *data_ov048_0225caac[2];
extern "C" void *data_ov048_0225caa4[2];
extern "C" void *data_ov048_0225c9cc[2];
extern "C" void *data_ov048_0225ca4c[2];
extern "C" void *data_ov048_0225ca8c[2];
extern "C" void *data_ov048_0225ca84[2];
extern "C" void *data_ov048_0225ca7c[2];
extern "C" void *data_ov048_0225ca74[2];
extern "C" void *data_ov048_0225ca6c[2];
extern "C" void *data_ov048_0225ca64[2];
extern "C" void *data_ov048_0225ca5c[2];
extern "C" void *data_ov048_0225ca54[2];
extern "C" void *data_ov048_0225c86c[2];
extern "C" void *data_ov048_0225ca44[2];
extern "C" void *data_ov048_0225ca3c[2];
extern "C" void *data_ov048_0225ca34[2];
extern "C" void *data_ov048_0225ca2c[2];
extern "C" void *data_ov048_0225ca24[2];
extern "C" void *data_ov048_0225ca1c[2];
extern "C" void *data_ov048_0225ca14[2];
extern "C" void *data_ov048_0225c84c[2];
extern "C" void *data_ov048_0225ca04[2];
extern "C" void *data_ov048_0225c9fc[2];
extern "C" void *data_ov048_0225c9f4[2];
extern "C" void *data_ov048_0225c9ec[2];
extern "C" void *data_ov048_0225c9e4[2];
extern "C" void *data_ov048_0225c9dc[2];
extern "C" void *data_ov048_0225c9d4[2];
extern "C" void *data_ov048_0225c82c[2];
extern "C" void *data_ov048_0225c9c4[2];
extern "C" void *data_ov048_0225c9bc[2];
extern "C" void *data_ov048_0225c9b4[2];
extern "C" void *data_ov048_0225c9ac[2];
extern "C" void *data_ov048_0225c9a4[2];
extern "C" void *data_ov048_0225c99c[2];
extern "C" void *data_ov048_0225c994[2];
extern "C" void *data_ov048_0225c80c[2];
extern "C" void *data_ov048_0225c984[2];
extern "C" void *data_ov048_0225c97c[2];
extern "C" void *data_ov048_0225c974[2];
extern "C" void *data_ov048_0225c96c[2];
extern "C" void *data_ov048_0225c964[2];
extern "C" void *data_ov048_0225c95c[2];
extern "C" void *data_ov048_0225c954[2];
extern "C" void *data_ov048_0225c94c[2];
extern "C" void *data_ov048_0225c944[2];
extern "C" void *data_ov048_0225c93c[2];
extern "C" void *data_ov048_0225c934[2];
extern "C" void *data_ov048_0225c92c[2];
extern "C" void *data_ov048_0225c924[2];
extern "C" void *data_ov048_0225c91c[2];
extern "C" void *data_ov048_0225c914[2];
extern "C" void *data_ov048_0225c904[2];
extern "C" void *data_ov048_0225c8f4[2];
extern "C" void *data_ov048_0225c78c[2];
extern "C" void *data_ov048_0225c79c[2];
extern "C" void *data_ov048_0225c8ec[2];
extern "C" void *data_ov048_0225c8e4[2];
extern "C" void *data_ov048_0225c794[2];
extern "C" void *data_ov048_0225c8d4[2];
extern "C" void *data_ov048_0225c7b4[2];
extern "C" void *data_ov048_0225c8c4[2];
extern "C" void *data_ov048_0225c8bc[2];
extern "C" void *data_ov048_0225c89c[2];
extern "C" void *data_ov048_0225c8ac[2];
extern "C" void *data_ov048_0225c8fc[2];
extern "C" void *data_ov048_0225c90c[2];
extern "C" void *data_ov048_0225ca0c[2];
extern "C" void *data_ov048_0225ca94[2];
extern "C" void *data_ov048_0225c884[2];
extern "C" void *data_ov048_0225c87c[2];
extern "C" void *data_ov048_0225c874[2];
extern "C" void *data_ov048_0225c77c[2];
extern "C" void *data_ov048_0225c864[2];
extern "C" void *data_ov048_0225c85c[2];
extern "C" void *data_ov048_0225c854[2];
extern "C" void *data_ov048_0225c76c[2];
extern "C" void *data_ov048_0225c844[2];
extern "C" void *data_ov048_0225c83c[2];
extern "C" void *data_ov048_0225c834[2];
extern "C" void *data_ov048_0225c75c[2];
extern "C" void *data_ov048_0225c824[2];
extern "C" void *data_ov048_0225c81c[2];
extern "C" void *data_ov048_0225c814[2];
extern "C" void *data_ov048_0225c74c[2];
extern "C" void *data_ov048_0225c804[2];
extern "C" void *data_ov048_0225c7fc[2];
extern "C" void *data_ov048_0225c7f4[2];
extern "C" void *data_ov048_0225c7ec[2];
extern "C" void *data_ov048_0225c7e4[2];
extern "C" void *data_ov048_0225c7dc[2];
extern "C" void *data_ov048_0225c7d4[2];
extern "C" void *data_ov048_0225c7cc[2];
extern "C" void *data_ov048_0225c7c4[2];
extern "C" void *data_ov048_0225c7bc[2];
extern "C" void *data_ov048_0225c7a4[2];
extern "C" void *data_ov048_0225c88c[2];
extern "C" void *data_ov048_0225c894[2];
extern "C" void *data_ov048_0225c8b4[2];
extern "C" void *data_ov048_0225c98c[2];
extern "C" void *data_ov048_0225ca9c[2];
extern "C" void *data_ov048_0225c784[2];
extern "C" void *data_ov048_0225c704[2];
extern "C" void *data_ov048_0225c774[2];
extern "C" void *data_ov048_0225c6fc[2];
extern "C" void *data_ov048_0225c764[2];
extern "C" void *data_ov048_0225c6f4[2];
extern "C" void *data_ov048_0225c754[2];
extern "C" void *data_ov048_0225c70c[2];
extern "C" void *data_ov048_0225c744[2];
extern "C" void *data_ov048_0225c73c[2];
extern "C" void *data_ov048_0225c72c[2];
extern "C" void *data_ov048_0225c734[2];
extern "C" const Unk_ov048_Vec data_ov048_0225c328;
extern "C" char data_ov048_0225cb08[];
extern "C" void *data_ov048_0225c6e8;
extern "C" const Unk_ov048_Vec data_ov048_0225c334;
extern "C" const Unk_ov048_Vec data_ov048_0225c34c;
extern "C" char data_ov048_0225cb4c[];
extern "C" Unk_ov048_SceneEntry data_ov048_0225cb34;
extern "C" const Unk_ov048_Vec data_ov048_0225c340;
extern "C" const Unk_ov048_Vec data_ov048_0225c358;

extern "C" char data_ov048_0225caf4[] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};

extern "C" char data_ov048_0225cb1c[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'c', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" const u8 data_ov048_0225c324[4] = {0x24, 0x41, 0x7f, 0x00};

BOOL Unk_ov048_0225cc58::func_ov048_0225b770() {
    static Unk_ov048_0225cc58::Fn tbl[6] = {
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c95c,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c954,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c94c,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c944,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c93c,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c934,
    };
    if (unk_658.unk_7e9 < 6) {
        if ((this->*tbl[unk_658.unk_7e9])()) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b70c() {
    Unk_ov048_Vec v;
    s32 a = func_020a0414();
    if (Unk_ov048_0225b4e4_Is2()) {
        if (func_02094f2c(1, a)) {
            func_02094f48(1, 4);
            v = data_ov048_0225c358;
            func_02094b0c(&v, 0x35c, a);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b680() {
    u8 buf[0x1c];
    void *h;
    void *o;
    s32 a = func_020a0414();
    h = func_02097520();
    if (func_020951b8(a) == 0) {
        o = func_02067918(0);
        unk_658.vfunc_08();
        _ZN12Unk_020e2a3013func_020a710cEPKc(&unk_658, (const char *)data_ov048_0225c6e0);
        unk_658.unk_1e = 0x67;
        _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(o, &unk_658);
        _ZN12Unk_020e1c64C1Ev(&buf[4]);
        _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(_ZN12Unk_0209865c13func_0209888cEv(h), &buf[4]);
        _ZN12Unk_020660f813func_02067a3cEiPv(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        _ZN12Unk_020e1c64D1Ev(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b64c() {
    void *o = func_02067918(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        if (func_020a03c4() == 0) {
            func_020b78c4();
            return FALSE;
        }
        _ZN12Unk_020660f813func_02067958Ev(o);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b634() {
    func_020b4bbc(func_020b4934(), 1);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b624() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}
extern "C" void *data_ov048_0225c6e4 = data_ov048_0225cb4c;

BOOL Unk_ov048_0225cc58::func_ov048_0225b588() {
    static Unk_ov048_0225cc58::Fn tbl[4] = {
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c7cc,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225caa4,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c744,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c8fc,
    };
    if (unk_658.unk_7e9 < 4) {
        if ((this->*tbl[unk_658.unk_7e9])()) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b580() {
    return func_ov048_0225b828();
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b578() {
    return func_ov048_0225b770();
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b4e4() {
    u8 buf[0x1c];
    void *h;
    void *o;
    func_020a5ef8();
    h = func_02097520();
    if (Unk_ov048_0225b4e4_Is2()) {
        o = func_02067918(0);
        unk_658.vfunc_08();
        _ZN12Unk_020e2a3013func_020a710cEPKc(&unk_658, (const char *)data_ov048_0225c6e0);
        unk_658.unk_1e = 0x7b;
        _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(o, &unk_658);
        _ZN12Unk_020e1c64C1Ev(&buf[4]);
        _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(_ZN12Unk_0209865c13func_0209888cEv(h), &buf[4]);
        _ZN12Unk_020660f813func_02067a3cEiPv(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        _ZN12Unk_020e1c64D1Ev(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b49c() {
    s32 a = func_020a5ef8();
    void *o = func_02067918(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        Unk_ov048_Vec v;
        _ZN12Unk_020660f813func_02067958Ev(o);
        v = data_ov048_0225c364;
        func_02094b0c(&v, 0x35c, a);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b46c() {
    s32 a = func_020a5ef8();
    void *b = func_02097520();
    if (func_020951b8(a) == 0) {
        _ZN12Unk_0209865c13func_02098a58Ev(b);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b454() {
    func_020b4bbc(func_020b4934(), 1);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b444() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}
extern "C" Unk_ov048_0225cd04_Ent data_ov048_0225cd04[23] = {
    {NULL, 0},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c8ac, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c784, 0},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c7c4, 0},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225cac4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c8ec, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c70c, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c8e4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c714, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c7a4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c884, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225cad4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c7fc, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c73c, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c72c, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c8c4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225cae4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c71c, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225caec, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c8b4, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225cadc, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c894, 1},
    {*(Unk_ov048_0225cbc8::Fn *)data_ov048_0225cacc, 1},
};

extern "C" void *data_ov048_0225c6e0 = data_ov048_0225cb08;

extern "C" const Unk_ov048_Vec data_ov048_0225c364 = {0x10000, 0x0, 0x5000};

extern "C" Unk_ov048_State_Ent data_ov048_0225d168[18] = {
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225cabc, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225cab4},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225caac, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c90c},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca9c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c924},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c98c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca84},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca7c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca74},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca6c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca64},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca5c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca54},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca4c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca44},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca3c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca34},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca2c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca24},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca1c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca14},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca0c, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225ca04},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9fc, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9f4},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9ec, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9e4},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9dc, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9d4},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9cc, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9c4},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9bc, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9b4},
    {*(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9ac, *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c9a4},
};

extern "C" void *data_ov048_0225c8dc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3b0Ei, 0};

extern "C" void *data_ov048_0225cacc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259a3cEv, 0};

extern "C" void *data_ov048_0225c724[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3d4Ei, 0};

extern "C" void *data_ov048_0225c8cc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b49cEv, 0};

extern "C" void *data_ov048_0225c7ac[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a79cEi, 0};

extern "C" void *data_ov048_0225c714[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225950cEv, 0};

extern "C" void *data_ov048_0225c6ec[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a32cEi, 0};

extern "C" void *data_ov048_0225c71c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259f9cEv, 0};

extern "C" void *data_ov048_0225caec[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259f64Ev, 0};

extern "C" void *data_ov048_0225cae4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259fc8Ev, 0};

extern "C" void *data_ov048_0225cadc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259ae0Ev, 0};

extern "C" void *data_ov048_0225cad4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259f38Ev, 0};

extern "C" void *data_ov048_0225c8a4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3b0Ei, 0};

extern "C" void *data_ov048_0225cac4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_022596e8Ev, 0};

extern "C" void *data_ov048_0225cabc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bfb0Ev, 0};

extern "C" void *data_ov048_0225cab4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf9cEv, 0};

extern "C" void *data_ov048_0225caac[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf78Ev, 0};

extern "C" void *data_ov048_0225caa4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b680Ev, 0};

extern "C" void *data_ov048_0225c9cc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b23cEv, 0};

extern "C" void *data_ov048_0225ca4c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bcb0Ev, 0};

extern "C" void *data_ov048_0225ca8c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225adb0Ev, 0};

extern "C" void *data_ov048_0225ca84[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf04Ev, 0};

extern "C" void *data_ov048_0225ca7c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bec8Ev, 0};

extern "C" void *data_ov048_0225ca74[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225be8cEv, 0};

extern "C" void *data_ov048_0225ca6c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225be7cEv, 0};

extern "C" void *data_ov048_0225ca64[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bdf0Ev, 0};

extern "C" void *data_ov048_0225ca5c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bde0Ev, 0};

extern "C" void *data_ov048_0225ca54[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bcc0Ev, 0};

extern "C" void *data_ov048_0225c86c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225adb0Ev, 0};

extern "C" void *data_ov048_0225ca44[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bc44Ev, 0};

extern "C" void *data_ov048_0225ca3c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b828Ev, 0};

extern "C" void *data_ov048_0225ca34[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b770Ev, 0};

extern "C" void *data_ov048_0225ca2c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b624Ev, 0};

extern "C" void *data_ov048_0225ca24[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b588Ev, 0};

extern "C" void *data_ov048_0225ca1c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b580Ev, 0};

extern "C" void *data_ov048_0225ca14[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b578Ev, 0};

extern "C" void *data_ov048_0225c84c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ace0Ev, 0};

extern "C" void *data_ov048_0225ca04[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b3a8Ev, 0};

extern "C" void *data_ov048_0225c9fc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b3a4Ev, 0};

extern "C" void *data_ov048_0225c9f4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b318Ev, 0};

extern "C" void *data_ov048_0225c9ec[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b314Ev, 0};

extern "C" void *data_ov048_0225c9e4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b278Ev, 0};

extern "C" void *data_ov048_0225c9dc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b274Ev, 0};

extern "C" void *data_ov048_0225c9d4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b240Ev, 0};

extern "C" void *data_ov048_0225c82c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ad28Ev, 0};

extern "C" void *data_ov048_0225c9c4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b1a0Ev, 0};

extern "C" void *data_ov048_0225c9bc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b140Ev, 0};

extern "C" void *data_ov048_0225c9b4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b13cEv, 0};

extern "C" void *data_ov048_0225c9ac[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b19cEv, 0};

extern "C" void *data_ov048_0225c9a4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b144Ev, 0};

extern "C" void *data_ov048_0225c99c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ac58Ev, 0};

extern "C" void *data_ov048_0225c994[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a5a8Ei, 0};

extern "C" void *data_ov048_0225c80c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a81cEi, 0};

extern "C" void *data_ov048_0225c984[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ac58Ev, 0};

extern "C" void *data_ov048_0225c97c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225adb0Ev, 0};

extern "C" void *data_ov048_0225c974[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225aba8Ev, 0};

extern "C" void *data_ov048_0225c96c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3f8Ei, 0};

extern "C" void *data_ov048_0225c964[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ac0cEv, 0};

extern "C" void *data_ov048_0225c95c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bbf8Ev, 0};

extern "C" void *data_ov048_0225c954[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bb8cEv, 0};

extern "C" void *data_ov048_0225c94c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bb34Ev, 0};

extern "C" void *data_ov048_0225c944[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225ba44Ev, 0};

extern "C" void *data_ov048_0225c93c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b918Ev, 0};

extern "C" void *data_ov048_0225c934[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b854Ev, 0};

extern "C" void *data_ov048_0225c92c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ab60Ev, 0};

extern "C" void *data_ov048_0225c924[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf0cEv, 0};

extern "C" void *data_ov048_0225c91c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ab60Ev, 0};

extern "C" void *data_ov048_0225c914[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a370Ei, 0};

extern "C" void *data_ov048_0225c904[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a4d0Ei, 0};

extern "C" void *data_ov048_0225c8f4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225aad4Ev, 0};

extern "C" void *data_ov048_0225c78c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225aafcEv, 0};

extern "C" void *data_ov048_0225c79c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225adecEv, 0};

extern "C" void *data_ov048_0225c8ec[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259690Ev, 0};

extern "C" void *data_ov048_0225c8e4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259524Ev, 0};

extern "C" void *data_ov048_0225c794[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3b0Ei, 0};

extern "C" void *data_ov048_0225c8d4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b4e4Ev, 0};

extern "C" void *data_ov048_0225c7b4[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b46cEv, 0};

extern "C" void *data_ov048_0225c8c4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a000Ev, 0};

extern "C" void *data_ov048_0225c8bc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b454Ev, 0};

extern "C" void *data_ov048_0225c89c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a4dcEi, 0};

extern "C" void *data_ov048_0225c8ac[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259c1cEv, 0};

extern "C" void *data_ov048_0225c8fc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b634Ev, 0};

extern "C" void *data_ov048_0225c90c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf68Ev, 0};

extern "C" void *data_ov048_0225ca0c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b444Ev, 0};

extern "C" void *data_ov048_0225ca94[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a4c4Ei, 0};

extern "C" void *data_ov048_0225c884[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a02cEv, 0};

extern "C" void *data_ov048_0225c87c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225adb0Ev, 0};

extern "C" void *data_ov048_0225c874[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225adb0Ev, 0};

extern "C" void *data_ov048_0225c77c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a4b8Ei, 0};

extern "C" void *data_ov048_0225c864[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ad78Ev, 0};

extern "C" void *data_ov048_0225c85c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ad18Ev, 0};

extern "C" void *data_ov048_0225c854[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225acacEv, 0};

extern "C" void *data_ov048_0225c76c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a4e8Ei, 0};

extern "C" void *data_ov048_0225c844[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ace0Ev, 0};

extern "C" void *data_ov048_0225c83c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ad18Ev, 0};

extern "C" void *data_ov048_0225c834[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ad28Ev, 0};

extern "C" void *data_ov048_0225c75c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a514Ei, 0};

extern "C" void *data_ov048_0225c824[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ad28Ev, 0};

extern "C" void *data_ov048_0225c81c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ace0Ev, 0};

extern "C" void *data_ov048_0225c814[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ac7cEv, 0};

extern "C" void *data_ov048_0225c74c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a5a8Ei, 0};

extern "C" void *data_ov048_0225c804[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a890Ei, 0};

extern "C" void *data_ov048_0225c7fc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259f00Ev, 0};

extern "C" void *data_ov048_0225c7f4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a81cEi, 0};

extern "C" void *data_ov048_0225c7ec[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ab98Ev, 0};

extern "C" void *data_ov048_0225c7e4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ab88Ev, 0};

extern "C" void *data_ov048_0225c7dc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225ab60Ev, 0};

extern "C" void *data_ov048_0225c7d4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3d4Ei, 0};

extern "C" void *data_ov048_0225c7cc[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b70cEv, 0};

extern "C" void *data_ov048_0225c7c4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259b60Ev, 0};

extern "C" void *data_ov048_0225c7bc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a3b0Ei, 0};

extern "C" void *data_ov048_0225c7a4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_022594a8Ev, 0};

extern "C" void *data_ov048_0225c88c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a838Ei, 0};

extern "C" void *data_ov048_0225c894[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259ab8Ev, 0};

extern "C" void *data_ov048_0225c8b4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259d40Ev, 0};

extern "C" void *data_ov048_0225c98c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf08Ev, 0};

extern "C" void *data_ov048_0225ca9c[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225bf30Ev, 0};

extern "C" void *data_ov048_0225c784[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259bb0Ev, 0};

extern "C" void *data_ov048_0225c704[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a81cEi, 0};

extern "C" void *data_ov048_0225c774[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a4e8Ei, 0};

extern "C" void *data_ov048_0225c6fc[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a36cEi, 0};

extern "C" void *data_ov048_0225c764[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a6a4Ei, 0};

extern "C" void *data_ov048_0225c6f4[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a8a4Ei, 0};

extern "C" void *data_ov048_0225c754[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a514Ei, 0};

extern "C" void *data_ov048_0225c70c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259648Ev, 0};

extern "C" void *data_ov048_0225c744[2] = {(void *)_ZN18Unk_ov048_0225cc5819func_ov048_0225b64cEv, 0};

extern "C" void *data_ov048_0225c73c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259ed4Ev, 0};

extern "C" void *data_ov048_0225c72c[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_02259e9cEv, 0};

extern "C" void *data_ov048_0225c734[2] = {(void *)_ZN18Unk_ov048_0225cbc819func_ov048_0225a7dcEi, 0};

BOOL Unk_ov048_0225cc58::func_ov048_0225b3a8() {
    static Unk_ov048_0225cc58::Fn tbl[4] = {
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c8d4,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c8cc,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c7b4,
        *(Unk_ov048_0225cc58::Fn *)data_ov048_0225c8bc,
    };
    if (unk_658.unk_7e9 < 4) {
        if ((this->*tbl[unk_658.unk_7e9])() != 0) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b3a4() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b318() {
    if (func_02067918(0)->unk_04 == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = func_02085180(func_020850e0());
        e = func_02095204(4);
        Unk_ov048_0225b278_Vec *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->unk_8e;
        a = 0;
        b = 0;
        func_0204ee10(&a, &b, &v);
        _ZN12Unk_02086ef013func_02086f00Ej(h, 1);
        _ZN12Unk_02086ef013func_02086ef8Ei(h, unk_8e);
        func_0203a3d8();
        func_020a0930();
        func_020b4f18(func_020b4934(), 0xc, &v, 0x800000, s, 2, 2);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b314() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b278() {
    if (func_02067918(0)->unk_04 == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = func_02085180(func_020850e0());
        e = func_02095204(4);
        Unk_ov048_0225b278_Vec *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->unk_8e;
        a = 0;
        b = 0;
        func_0204ee10(&a, &b, &v);
        _ZN12Unk_02086ef013func_02086f00Ej(h, 2);
        _ZN12Unk_02086ef013func_02086ef8Ei(h, unk_8e);
        func_020b4aa8(func_020b4934(), 0xc, &v, 0x800000, s, a, b);
        func_0203a3d8();
        func_020a090c();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b274() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b240() {
    if (func_02067918(0)->unk_04 == 5) {
        func_020a0978();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b23c() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b1a0() {
    s32 a, b;
    if (func_0201ba88() != 0) {
        a = 4;
        b = 4;
        s32 u;
        s32 x;
        if (_ZN12Unk_020d77a413func_0201b9e8Eii(this, &a, &b) != 0 && (x = a, u = data_020cbb18->unk_64, x == u) && x == b) {
            func_0201b9fc(1, u, u);
            ((Unk_020d7714 *)&unk_658)->vfunc_08();
            unk_658.func_02015ab0(func_0201bc4c(4));
            func_ov048_0225bfb4(this, 2);
        } else if (func_020a62a0() != 0 && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov048_0225bfb4(this, 1);
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b19c() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b144() {
    s32 a, b;
    if (func_0201ba88() != 0) {
        a = 4;
        b = 4;
        if (_ZN12Unk_020d77a413func_0201b9e8Eii(this, &a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(1, data_020cbb18->unk_64, 4);
                    func_ov048_0225bfb4(this, 4);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b140() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b13c() {
    return TRUE;
}

Unk_ov048_0225cbc8::Unk_ov048_0225cbc8() {
    _ZN12Unk_02071e04C1Ev(&unk_b8);
    func_0203ecdc(&unk_3d8);
    func_0203ec54(&unk_4e0);
    _ZN12Unk_0208722413func_020872ecEv(&unk_5b4);
}

Unk_ov048_0225cbc8::~Unk_ov048_0225cbc8() {
    _ZN12Unk_0208722413func_020872dcEv(&unk_5b4);
    func_0203ec50(&unk_4e0);
    func_0203eccc(&unk_3d8);
    _ZN12Unk_02071e04D1Ev(&unk_b8);
}

void Unk_ov048_0225cbc8::func_ov048_0225b040(u8 *p) {
    vfunc_08();
    unk_b4 = p;
    unk_ac = 0xb;
}

void Unk_ov048_0225cbc8::func_ov048_0225b038(s32 v) {
    unk_ac = v;
}

s32 Unk_ov048_0225cbc8::func_ov048_0225b030() {
    return unk_ac;
}

void Unk_ov048_0225cbc8::func_ov048_0225b018() {
    if (func_02073a78() != 0) {
        func_0209f1c4();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225afd8(s32 a, s32 b) {
    switch (a) {
    case 3:
    case 4:
        func_0209f1e4();
        break;
    case 1:
    case 2:
        func_0209f204();
        break;
    case 0:
        break;
    }
    func_02073bf8(a, 4, b);
}

s32 Unk_ov048_0225cbc8::func_ov048_0225af48(s64 v) {
    s64 q1 = (u64)v / 100000000;
    s64 m1 = q1 * 100000000;
    s64 rem = v - m1;
    s64 q2 = (u64)rem / 10000;
    func_02015958((s32)q1, 5, 4, 6, 0);
    func_02015958((s32)q2, 8, 4, 6, 0);
    func_02015958((s32)v - (s32)(q2 * 10000) - (s32)m1, 9, 4, 6, 0);
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225af0c() {
    u8 *arr = (u8 *)func_02076db4(_ZN12Unk_0209865c13func_02098674Ev(func_0209750c()));
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(arr + i * 0x1c)) != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov048_0225cbc8::vfunc_78(void *arg) {
    Unk_ov048_0225ae04_Out *out = (Unk_ov048_0225ae04_Out *)arg;
    static Unk_ov048_0225ae04_Row tbl[11] = {
        {data_ov048_0225c6e0, 0}, {data_ov048_0225c6e0, 4}, {data_ov048_0225c6e0, 5},
        {data_ov048_0225c6e0, 6}, {data_ov048_0225c6e0, 7}, {data_ov048_0225c6e0, 0xa},
        {data_ov048_0225c6e0, 0x68}, {data_ov048_0225c6e0, 0xd}, {data_ov048_0225caf4, 9},
        {data_ov048_0225c6e0, 0x47}, {data_ov048_0225c6e0, 0x48},
    };
    void *h;
    unk_7e1 = 0;
    unk_7e0 = 0;
    h = func_0209750c();
    if (func_020a032c() != 0) {
        func_ov048_0225b038(8);
    } else if (func_ov048_0225b030() == 6) {
        if (func_ov004_02225e9c() == 0) {
            func_ov004_02225ee0();
        }
    } else if (func_ov048_0225b030() != 7 && func_ov048_0225b030() != 9 && func_ov048_0225b030() != 0xa) {
        if (func_0202e148() == 0) {
            func_ov048_0225b038(5);
        } else if (_ZN12Unk_02097ff413func_02098044Ej(h, 5) == 0) {
            func_ov048_0225b038(0);
            _ZN12Unk_02097ff413func_0209801cEj(h, 5);
        } else {
            s32 t = func_0209ccd0() + 1;
            func_ov048_0225b038(t);
        }
    }
    if (unk_ac >= 0 && unk_ac < 0xb) {
        out->unk_04 = tbl[unk_ac].id;
        out->unk_00 = tbl[unk_ac].name;
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225adec() {
    func_ov048_0225ad50(0);
    func_ov048_0225a078(0x15);
}

void Unk_ov048_0225cbc8::func_ov048_0225adb0() {
    u8 buf[2];
    s32 v;
    if (_ZN12Unk_020cbb1813func_020729ccEj(data_020cbb18, 0) != 0) {
        v = 0x10;
    } else {
        v = 0xf;
    }
    buf[0] = v;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, buf, data_ov048_0225c6e0);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad78() {
    func_ov048_0225bfb4(unk_b4, 7);
    func_02073340();
    if (func_020eaf18() == 3 || func_020eaf18() == 4) {
        func_ov048_0225a078(0x14);
    } else {
        func_ov048_0225b018();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225ad50(s32 flag) {
    void *p = unk_3c;
    if (flag != 0) {
        _ZN12Unk_020660f813func_0206799cEv(p, 1);
    } else {
        _ZN12Unk_020660f813func_0206799cEv(p, 0);
    }
    _ZN12Unk_020660f813func_02067a78Ev(p);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad38() {
    void *p = unk_3c;
    _ZN12Unk_020660f813func_02067990Ev(p);
    _ZN12Unk_020660f813func_02067a6cEv(p);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad28() {
    func_ov048_0225bfb4(unk_b4, 5);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad18() {
    func_ov048_0225bfb4(unk_b4, 6);
}

void Unk_ov048_0225cbc8::func_ov048_0225ace0() {
    func_ov048_0225ad50(1);
    func_ov048_0225afd8(4, 2);
    *(u16 *)(unk_b4 + 0xe3e) = 0x960;
    func_ov048_0225a078(0xa);
}

void Unk_ov048_0225cbc8::func_ov048_0225acac() {
    func_ov048_0225ad50(1);
    func_ov048_0225afd8(2, 2);
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    func_ov048_0225a078(1);
}

void Unk_ov048_0225cbc8::func_ov048_0225ac7c() {
    func_0201514c((u32)unk_b8.unk_2f4, (u32)unk_b8.unk_2e0, 0);
    func_020151d0(4);
    func_ov048_0225a078(3);
}

void Unk_ov048_0225cbc8::func_ov048_0225ac58() {
    func_02015170(0x3c, 0);
    func_020151d0(2);
    func_ov048_0225a078(2);
}

void Unk_ov048_0225cbc8::func_ov048_0225ac0c() {
    func_ov048_0225ad50(1);
    if (func_020eaf18() == 2) {
        _ZN12Unk_020cbb1813func_02072368Ej(data_020cbb18, 1);
    } else {
        func_ov048_0225afd8(2, 1);
    }
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    func_ov048_0225a078(4);
}

void Unk_ov048_0225cbc8::func_ov048_0225aba8() {
    _ZN12Unk_020cbb1813func_02072368Ej(data_020cbb18, 1);
    if (func_020eaf18() != 4) {
        func_ov048_0225ace0();
    } else {
        s32 t;
        func_ov048_0225ad50(1);
        t = unk_b8.unk_3d4;
        func_020721b4();
        func_020ea434(t);
        *(u16 *)(unk_b4 + 0xe3e) = 0x960;
        func_ov048_0225a078(5);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225ab98() {
    func_ov048_0225bfb4(unk_b4, 8);
}

void Unk_ov048_0225cbc8::func_ov048_0225ab88() {
    func_ov048_0225bfb4(unk_b4, 0xa);
}

void Unk_ov048_0225cbc8::func_ov048_0225ab60() {
    u8 buf[2];
    buf[0] = func_ov048_022593bc();
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, buf, data_ov048_0225c6e0);
}

void Unk_ov048_0225cbc8::func_ov048_0225aafc() {
    u8 buf[2];
    if (unk_7e0 != 0) {
        func_ov048_0225af48(func_020ea3c4(func_02076c80(_ZN12Unk_0209865c13func_02098680Ev(func_0209750c()))));
        buf[0] = 0x76;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, buf, data_ov048_0225c6e0);
    } else {
        buf[1] = func_ov048_02259420();
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &buf[1], data_ov048_0225c6e0);
    }
}

// ---- aad4

void Unk_ov048_0225cbc8::func_ov048_0225aad4() {
    func_ov048_0225ad50(1);
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    func_ov048_0225a078(8);
}
extern "C" const Unk_ov048_Vec data_ov048_0225c328 = {0x10000, 0x0, 0x10000};

extern "C" char data_ov048_0225cb08[] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'a', 't', 'e', 'k', 'e', 'e', 'p', 'e', 'r', 0};

extern "C" void *data_ov048_0225c6e8 = data_ov048_0225cb1c;

extern "C" const Unk_ov048_Vec data_ov048_0225c334 = {0x10000, 0x0, 0x11800};

extern "C" const Unk_ov048_Vec data_ov048_0225c34c = {0x10000, 0x0, 0x2000};

void Unk_ov048_0225cbc8::vfunc_14() {
    static Unk_ov048_0225a8d4_Row tbl[28] = {
        {0x00, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c97c},
        {0x04, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225ca8c},
        {0x05, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c87c},
        {0x06, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c874},
        {0x07, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c86c},
        {0x38, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c864},
        {0x46, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c85c},
        {0x54, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c854},
        {0x3e, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c84c},
        {0x5b, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c844},
        {0x6c, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c83c},
        {0x47, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c834},
        {0x48, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c82c},
        {0x49, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c824},
        {0x25, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c81c},
        {0x55, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c814},
        {0x5d, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c99c},
        {0x6d, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c984},
        {0x62, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c974},
        {0x59, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c964},
        {0x68, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c7ec},
        {0x0d, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c7e4},
        {0x11, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c7dc},
        {0x58, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c92c},
        {0x61, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c91c},
        {0x75, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c78c},
        {0x12, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c8f4},
        {0x6a, *(Unk_ov048_0225cbc8::Fn *)data_ov048_0225c79c},
    };
    s32 i = 0;
    u8 *p = &unk_1e;
    for (; (u32)i < 0x1c; i++) {
        u32 a = *(u32 *)((u8 *)tbl + i * 12);
        u32 b = *p;
        if (a == b) {
            (this->*tbl[i].f)();
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a8a4(s32 p) {
    if (p == 0) {
        func_0209f1e4();
        func_02076c9c(_ZN12Unk_0209865c13func_02098680Ev(func_0209750c()));
        func_0209f1c4();
    }
    func_ov048_0225a838(p);
}

void Unk_ov048_0225cbc8::func_ov048_0225a890(s32 p) {
    if (p == 2) {
        func_ov048_0225b018();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a838(s32 p) {
    if (p == 0) {
        u32 id = 0xff;
        switch (unk_7e3) {
        case 2:
            unk_aa = 0x5b;
            id = 0x6a;
            break;
        case 1:
            unk_aa = 0x3e;
            id = 0x6a;
            break;
        case 0:
            id = 0x25;
            break;
        }
        if (id != 0xff) {
            u8 v = id;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a81c(s32 p) {
    if (p == 0) {
        unk_7e3 = 0;
        func_ov048_0225a6c8();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a7dc(s32 p) {
    if (p == 1) {
        unk_7e3 = 2;
        func_ov048_0225a6c8();
    } else if (p == 2) {
        u8 v = func_ov048_022593bc();
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a79c(s32 p) {
    if (p == 1) {
        unk_7e3 = 1;
        func_ov048_0225a6c8();
    } else if (p == 2) {
        u8 v = func_ov048_022593bc();
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a6c8() {
    u8 v0, v1, v2, v3, v4;
    if (unk_7e3 != 0 && func_ov048_0225af0c() == 0) {
        if (unk_7e3 == 2) {
            v0 = 0x6f;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v0, data_ov048_0225c6e0);
        } else {
            v1 = 0x70;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v1, data_ov048_0225c6e0);
        }
        return;
    }
    void *s = func_02076c80(_ZN12Unk_0209865c13func_02098680Ev(func_0209750c()));
    func_0209f1e4();
    if (func_020ea3dc(s)) {
        if (func_020e9d94(s)) {
            v2 = data_ov048_0225c324[unk_7e3];
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v2, data_ov048_0225c6e0);
        } else {
            unk_7e0 = 1;
            v3 = 0x72;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v3, data_ov048_0225c6e0);
        }
    } else {
        v4 = 0x71;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v4, data_ov048_0225c6e0);
    }
    func_0209f1c4();
}

void Unk_ov048_0225cbc8::func_ov048_0225a6a4(s32 p) {
    if (p == 0) {
        u8 v = 0x19;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a5a8(s32 p) {
    void *h = func_0209750c();
    u32 id = 0xff;
    switch (p) {
    case 0:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 8;
        } else {
            Unk_ov048_Global *g = data_020cbb18;
            if (_ZN12Unk_020cbb1813func_02072e44Ev(g) && _ZN12Unk_020cbb1813func_020729ccEj(g, 0)) {
                id = 0x50;
            } else if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 0xe;
        } else {
            id = func_ov048_022593e4();
        }
        break;
    case 2:
        if (_ZN12Unk_020cbb1813func_020729ccEj(data_020cbb18, 0) == 0) {
            if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
                id = 8;
            } else {
                void *s;
                func_0209f1e4();
                s = func_02076c80(_ZN12Unk_0209865c13func_02098680Ev(h));
                if (func_020e9d94(s)) {
                    if (func_020ea3dc(s)) {
                        id = 0x29;
                        s64 t = func_020ea3c4(s);
                        _ZN18Unk_ov048_0225cbc819func_ov048_0225af48Ex(this, (s32)t, (s32)(t >> 32));
                    } else {
                        id = 0x23;
                    }
                } else {
                    id = 0x2f;
                }
                func_0209f1c4();
            }
        }
        break;
    }
    if (id != 0xff) {
        u8 v = id;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a514(s32 p) {
    void *h = func_0209750c();
    u32 id = 0xff;
    switch (p) {
    case 0:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 8;
        } else {
            Unk_ov048_Global *g = data_020cbb18;
            if (_ZN12Unk_020cbb1813func_02072e44Ev(g) && _ZN12Unk_020cbb1813func_020729ccEj(g, 0)) {
                id = 0x50;
            } else if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 0xe;
        } else {
            id = func_ov048_022593e4();
        }
        break;
    }
    if (id != 0xff) {
        u8 v = id;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a4e8(s32 p) {
    if (p == 1) {
        u8 v = func_ov048_022593bc();
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a4dc(s32 p) { func_ov048_0225a448(p, 0x46); }

void Unk_ov048_0225cbc8::func_ov048_0225a4d0(s32 p) { func_ov048_0225a448(p, 0x3e); }

void Unk_ov048_0225cbc8::func_ov048_0225a4c4(s32 p) { func_ov048_0225a448(p, 0x54); }

void Unk_ov048_0225cbc8::func_ov048_0225a4b8(s32 p) { func_ov048_0225a448(p, 0x5b); }

void Unk_ov048_0225cbc8::func_ov048_0225a448(s32 p, s32 id) {
    u8 v0;
    u8 v1;
    u8 v2;
    if (p == 0) {
        unk_aa = id;
        if (unk_7e1 != 0) {
            v0 = unk_aa;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v0, data_ov048_0225c6e0);
        } else {
            v1 = 0x6a;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v1, data_ov048_0225c6e0);
        }
    }
    if (p == 1) {
        v2 = func_ov048_022593bc();
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v2, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a3f8(s32 p) {
    if (p == 0) {
        u8 v = 0x52;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
        func_ov004_02225ebc();
        func_02073340();
        if (func_020eaf18() == 3 || func_020eaf18() == 4) {
            func_ov048_0225a078(0x14);
        } else {
            func_ov048_0225b018();
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a3d4(s32 p) {
    if (p == 0) {
        u8 v = 0x59;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a3b0(s32 p) {
    if (p == 0) {
        u8 v = 0x62;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a370(s32 p) {
    Unk_ov048_Owner *o = unk_3c;
    if (p == 0) {
        o->unk_14 = 0;
        func_ov048_0225bfb4(unk_b4, 0xe);
    } else if (p == 1) {
        u8 v = func_ov048_022593bc();
        _ZN12Unk_020660f813func_02067a84EPhPv(o, &v, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a36c(s32 p) {}

void Unk_ov048_0225cbc8::func_ov048_0225a32c(s32 p) {
    switch (p) {
    case 0:
        func_ov048_0225a078(0x14);
        break;
    case 1: {
        u8 v = 0x6c;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &v, data_ov048_0225c6e0);
        break;
    }
    case 2:
        func_ov048_0225a078(0x14);
        break;
    }
}
extern "C" char data_ov048_0225cb4c[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'c', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

extern "C" Unk_ov048_SceneEntry data_ov048_0225cb34 = {func_ov048_0225c20c, 0x72, 0x77, 2, 0x5000, 0x5000, 0x3e800};

extern "C" const Unk_ov048_Vec data_ov048_0225c340 = {0x10000, 0x0, 0x13000};

extern "C" const Unk_ov048_Vec data_ov048_0225c358 = {0x10000, 0x0, 0x11800};

void Unk_ov048_0225cbc8::vfunc_18() {
    if (func_020a032c() == 0) {
        static Unk_ov048_0225a108_Row tbl[29] = {
            {0x15, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c89c},
            {0x41, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c904},
            {0x14, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225ca94},
            {0x7f, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c77c},
            {0x24, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c774},
            {0x56, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c76c},
            {0x0a, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c764},
            {0x10, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c75c},
            {0x21, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c754},
            {0x0f, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c74c},
            {0x22, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c994},
            {0x51, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c96c},
            {0x63, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c724},
            {0x65, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c7d4},
            {0x7d, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c794},
            {0x7e, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c7bc},
            {0x80, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c8dc},
            {0x82, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c8a4},
            {0x2c, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c914},
            {0x6b, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c6fc},
            {0x5f, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c6ec},
            {0x23, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c704},
            {0x28, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c80c},
            {0x2f, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c7f4},
            {0x52, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c734},
            {0x3d, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c7ac},
            {0x71, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c88c},
            {0x74, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c6f4},
            {0x57, *(Unk_ov048_0225cbc8::ArgFn *)data_ov048_0225c804},
        };
        s32 i = 0;
        u8 *p = &unk_1e;
        for (; (u32)i < 0x1d; i++) {
            u32 off = i * 12;
            u32 a = *(u32 *)((u8 *)tbl + off);
            u32 b = *p;
            if (a == b) {
                s32 arg = _ZN12Unk_020aa3b813func_020aa514Ev(_ZN12Unk_020660f813func_020679b4Ev(unk_3c));
                Unk_ov048_0225a108_Row *r = (Unk_ov048_0225a108_Row *)((u32)tbl + off);
                (this->*r->f)(arg);
            }
        }
    }
}

void Unk_ov048_0225cbc8::vfunc_80() {
    if (data_ov048_0225cd04[unk_b0].flag != 0) {
        if (data_ov048_0225cd04[unk_b0].f) {
            (this->*data_ov048_0225cd04[unk_b0].f)();
        }
    }
}

void Unk_ov048_0225cbc8::vfunc_84() {
    if (data_ov048_0225cd04[unk_b0].flag == 0) {
        if (data_ov048_0225cd04[unk_b0].f) {
            (this->*data_ov048_0225cd04[unk_b0].f)();
        }
    }
}

// Tiny setter last so it is not inlined into callers.
void Unk_ov048_0225cbc8::func_ov048_0225a078(s32 s) { unk_b0 = s; }

void Unk_ov048_0225cbc8::func_ov048_0225a02c() {
    func_020eb650(func_020720f8());
    if (func_ov048_02259868() == 0) {
        if (func_020ea574(func_020721b4()) != 0) {
            if (unk_7e3 == 0) {
                func_ov048_0225a078(0x13);
            } else {
                func_ov048_0225a078(unk_b0 + 1);
            }
        }
    }
}

// ---- a000

void Unk_ov048_0225cbc8::func_ov048_0225a000() {
    if (func_0209eedc()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259fc8() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209ee18()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f9c() {
    if (func_0209ee60()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f64() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209edf4()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f38() {
    if (func_0209efa4()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f00() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209edcc()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259ed4() {
    if (func_0209ef5c()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259e9c() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209ee3c()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259e6c() {
    s32 v = func_020ea738();
    if (v < 0) {
        v = -v;
    }
    if (func_020e77cc(v, 0x17ed0, 0x182b7)) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov048_0225cbc8::func_ov048_02259d40() {
    u8 *g = (u8 *)data_020cbb18;
    u8 *r4 = _ZN12Unk_020cbb1813func_020721ecEv(g);
    void *r6 = func_0209750c();
    u8 m;
    s32 mv;
    if (unk_1e == 0x62) {
        u8 *r6b = _ZN12Unk_020cbb1813func_020721f8Ev(g);
        s32 h = unk_b8.unk_3d4;
        s32 k;
        func_020721b4();
        k = func_020ea5d0(h);
        u8 *e = r6b + k * 0x13;
        if (e[0x190] != 6 || k == -1) {
            func_ov048_022597e8(0x78, 1);
        } else {
            h = unk_b8.unk_3d4;
            func_020721b4();
            func_020ea434(h);
            *(u16 *)(unk_b4 + 0xe3e) = 0x960;
            func_ov048_0225a078(5);
        }
    } else {
        if (func_020ea3e8(r4 + 0x10)) {
            func_020ea3d0(r4 + 0x10, func_02076e1c(func_02076c7c(_ZN12Unk_0209865c13func_02098680Ev(r6))));
            MI_CpuCopy8(r4 + 0x10, func_02076c80(_ZN12Unk_0209865c13func_02098680Ev(r6)), 0x40);
            if (func_020a05e8() == 0) {
                mv = 0x75;
            } else {
                mv = 2;
            }
        } else {
            mv = func_ov048_02259420();
        }
        m = mv;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &m, data_ov048_0225c6e0);
        if (unk_7e3 == 0 || unk_7e0 != 0) {
            func_ov048_0225a078(0x14);
        } else {
            func_ov048_0225ad38();
            func_ov048_0225a078(0);
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259c1c() {
    s32 n;
    void **arr;
    void *p;
    void *r7;
    u8 i;
    u8 buf[0x14];
    u32 A[0x1c / 4];
    u32 B[0x18 / 4];
    u32 C[0x1c / 4];
    u32 D[0x1c / 4];
    if (func_ov048_02259838() == 0) {
      n = func_020eae78(func_020733bc());
      if (n > 0) {
        arr = (void **)func_020ea65c(func_0207217c());
        _ZN12Unk_020dd38cC2Ev(A);
        _ZN12Unk_020dd374C2Ev(B);
        _ZN12Unk_020e1c64C1Ev(C);
        _ZN12Unk_020e1c4cC1Ev(D);
        r7 = unk_3c;
        for (i = 0; i < n; i++) {
            p = arr[i];
            s32 t;
            if (p) {
                func_0207217c();
                t = func_020ea6c8(p);
                if (t == 0x11) {
                    func_0207217c();
                    MI_CpuCopy8(func_020ea6f4(p), &buf[1], t);
                    if (buf[0x11] == 0) {
                        MI_CpuCopy8(p, unk_b8.unk_2f4, 0xe0);
                        func_020a78a4(B, &buf[1], 8);
                        _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(A, B, 0, 0);
                        func_020a78a4(D, &buf[9], 8);
                        _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(C, D, 0, 0);
                        _ZN12Unk_020660f813func_02067a3cEiPv(r7, 3, A);
                        _ZN12Unk_020660f813func_02067a3cEiPv(r7, 4, C);
                        buf[0] = 0x57;
                        _ZN12Unk_020660f813func_02067a84EPhPv(r7, buf, data_ov048_0225c6e0);
                        func_ov048_0225ad38();
                        func_ov048_0225a078(0);
                        break;
                    }
                }
            }
        }
        _ZN12Unk_020e1c4cD1Ev(D);
        _ZN12Unk_020e1c64D1Ev(C);
        _ZN12Unk_020dd374D1Ev(B);
        _ZN12Unk_020dd38cD1Ev(A);
    }
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259bb0() {
    if (func_0206ed18()) {
        s32 r5 = func_0206ed38();
        u8 a;
        func_020721b4();
        unk_b8.unk_3d4 = func_020ea598(r5);
        a = 0x62;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &a, data_ov048_0225c6e0);
        func_ov048_0225a078(0);
    } else {
        u8 b;
        func_ov048_0225a078(0x14);
        b = 0x61;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259b60() {
    if (func_0206ed18()) {
        u8 a = 0x59;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &a, data_ov048_0225c6e0);
    } else {
        u8 b = 0x58;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, data_ov048_0225c6e0);
        func_ov048_0225b018();
    }
    func_ov048_0225a078(0);
}

void Unk_ov048_0225cbc8::func_ov048_02259ae0() {
    void *t = unk_3c;
    if (t) {
        _ZN12Unk_020660f813func_02067a78Ev(t);
    }
    if (func_020eb1cc(func_020721b4())) {
        if (t) {
            func_ov048_0225ad38();
        }
        if (func_0209750c()) {
            s32 r = _ZN12Unk_0209865c13func_02098878Ev();
            if (r >= 0 && r < 4) {
                u8 b;
                func_0209ed74();
                func_0209ecf8();
                func_0209ec80();
                func_ov048_0225b018();
                func_0209f248();
                if (func_020a0554()) {
                    b = 2;
                    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, data_ov048_0225c6e0);
                }
            }
        }
        func_ov048_0225a078(0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259ab8() {
    if (((Unk_ov048_0225cc58 *)unk_b4)->func_ov048_02258e34()) {
        func_020a093c();
        func_ov048_0225a078(0x16);
    } else {
        func_020c03a0();
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259a3c() {
    void *t = unk_3c;
    if (func_020a0828()) {
        u8 a;
        func_ov048_0225ad38();
        a = 0xa;
        _ZN12Unk_020660f813func_02067a84EPhPv(t, &a, (void *)"sp_etc_sequence2");
        func_ov048_0225a078(0);
    } else if (func_020a084c()) {
        u8 b;
        unk_7e1 = 1;
        func_ov048_0225ad38();
        b = unk_aa;
        _ZN12Unk_020660f813func_02067a84EPhPv(t, &b, data_ov048_0225c6e0);
        func_020c0378();
        func_ov048_0225a078(0);
    }
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259924(s32 flag) {
    s32 code = func_020ea748();
    u32 a[0x2c / 4];
    u32 b[0x2c / 4];
    if (code != 0 || flag != 0) {
        if (flag != 0) {
            s32 r = func_ov048_02259390();
            func_ov048_022597e8(r, 0);
        } else if (func_020eaf18() == 3 || func_020eaf18() == 4) {
            s32 v = func_020ea738();
            s32 q;
            if (v < 0) {
                v = -v;
            }
            q = v / 1000;
            _ZN12Unk_020e3efcC1Ev(a);
            _ZN12Unk_020e3efcC1Ev(b);
            func_020b3270(a, q, 2, 6, 0, 0);
            func_020b3270(b, v - q * 1000, 3, 6, 0, 0);
            _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 6, a);
            _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 7, b);
            if (code == 0x400b) {
                func_ov048_022597e8(0x7d, 0);
            } else if (code == 0x400a) {
                func_ov048_022597e8(0x78, 0);
            } else if (v == 0x13a1a) {
                func_ov048_022597e8(0x7a, 0);
            } else {
                func_ov048_022597e8(0x7e, 0);
            }
            _ZN12Unk_020e3efcD1Ev(b);
            _ZN12Unk_020e3efcD1Ev(a);
        } else {
            s32 r = func_ov048_02259390();
            func_ov048_022597e8(r, 0);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_022598f0() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        s32 r = func_ov048_02259390();
        func_ov048_022597e8(r, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_022598c0() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        func_ov048_022597e8(0x65, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259868() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        func_ov048_022597e8(0x7a, 1);
        return TRUE;
    }
    if (func_020ea748() != 0) {
        s32 v = func_020ea738();
        if (v < 0) {
            v = -v;
        }
        s32 r = ((Unk_ov048_0225cc58 *)this)->func_ov048_0225913c(v);
        func_ov048_022597e8(r, 1);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259838() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        func_ov048_022597e8(0x56, 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov048_0225cbc8::func_ov048_022597e8(u32 msg, s32 unused) {
    u8 b = msg;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, data_ov048_0225c6e0);
    if (func_020eaf18() == 3 || func_020eaf18() == 4) {
        func_ov048_0225a078(0x14);
    } else {
        func_ov048_0225ad38();
        func_ov048_0225b018();
        func_ov048_0225a078(0);
    }
}

// ---- 96e8

void Unk_ov048_0225cbc8::func_ov048_022596e8() {
    BOOL z = FALSE;
    s32 n;
    void **arr;
    u8 i;
    u8 buf[0x18];
    if (func_ov048_02259924(0)) {
        return;
    }
    if (func_ov048_022598c0()) {
        return;
    }
    n = func_020eae78(func_020733bc());
    if (n > 0) {
        arr = (void **)func_020ea65c(func_0207217c());
        for (i = z; i < n; i++) {
            u8 *p = (u8 *)arr[i];
            s32 t;
            BOOL hit;
            if (p) {
                func_0207217c();
                t = func_020ea6c8(p);
                if (t == 0x11) {
                    func_0207217c();
                    MI_CpuCopy8(func_020ea6f4(p), buf, t);
                    if (buf[0x10] == 0) {
                        if (p[2] == unk_b8.unk_2f4[2] && p[3] == unk_b8.unk_2f4[3] && p[4] == unk_b8.unk_2f4[4] && p[5] == unk_b8.unk_2f4[5] &&
                            p[6] == unk_b8.unk_2f4[6] && p[7] == unk_b8.unk_2f4[7]) {
                            hit = TRUE;
                        } else {
                            hit = z;
                        }
                        if (hit) {
                            func_0207217c();
                            func_020ea608(p);
                            *(u16 *)(unk_b4 + 0xe3e) = 200;
                            func_ov048_0225a078(5);
                        }
                    }
                }
            }
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259690() {
    if (func_ov048_02259924(0) == 0 && func_ov048_022598f0() == 0) {
        func_020720f8();
        if (func_020eb650()) {
            if (func_020eaf18() != 3) {
                func_020eaf18();
            }
            *(u16 *)((u8 *)unk_b4 + 0xe3e) = 200;
            func_ov048_0225a078(6);
            func_020eaf90();
            func_02073348();
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259648() {
    func_020720f8();
    BOOL b;
    if (func_020eb650() == 0) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (func_ov048_02259924(b)) {
        func_020731d4();
    } else if (func_02073230(0)) {
        unk_7e2 = 0;
        func_ov048_0225a078(7);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259524() {
    func_020720f8();
    BOOL b;
    if (func_020eb650() == 0) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (func_ov048_02259924(b)) {
        func_020731d4();
        if (_ZN12Unk_02086f8413func_02086fa8Ev(func_02085178(func_020850e0()))) {
            if (_ZN12Unk_020872fc13func_02087314Ev(_ZN12Unk_0209865c13func_020986a4Ev(func_0209750c()))) {
                _ZN12Unk_020872fc13func_020872fcEv(_ZN12Unk_0209865c13func_020986a4Ev(func_0209750c()));
            }
        }
    } else {
        s32 t = func_02073204();
        if (t == 5) {
            if (_ZN12Unk_02086f8413func_02086fa8Ev(func_02085178(func_020850e0()))) {
                if (_ZN12Unk_020872fc13func_02087314Ev(_ZN12Unk_0209865c13func_020986a4Ev(func_0209750c())) == 0) {
                    _ZN12Unk_020872fc13func_02087308Ev(_ZN12Unk_0209865c13func_020986a4Ev(func_0209750c()));
                }
            }
            if (func_02074e80(&unk_7e2, func_020a5f6c())) {
                _ZN12Unk_020cbb1813func_02072368Ej(data_020cbb18, 0);
                func_020a5f38(0);
                func_020a5f18(0);
                func_020eaf90();
                func_020a0408();
                func_020731d4();
                unk_3c->unk_14 = 0;
                func_ov048_0225ad38();
                func_ov048_0225a078(0);
                func_ov048_0225bfb4(unk_b4, 0xc);
            }
        } else if (t == 6 || func_020ea748() == 0x800c) {
            func_020731d4();
            if (func_020ea748() == 0x800c) {
                func_ov048_022597e8(0x79, 1);
            } else {
                func_ov048_022597e8(func_ov048_02259364(), 0);
            }
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225950c() {
    func_02073230(1);
    func_ov048_0225a078(9);
}

void Unk_ov048_0225cbc8::func_ov048_022594a8() {
    Unk_ov048_Owner *o = unk_3c;
    s32 t = func_02073204();
    if ((u32)(t - 5) <= 1) {
        func_ov048_0225ad38();
        func_ov048_0225a078(0);
        if (t == 5) {
            o->unk_14 = 0;
            func_ov048_0225bfb4(unk_b4, 0xd);
            func_020a5f38(1);
            func_020a5f18(1);
        } else {
            u8 b[4];
            b[0] = 0xc;
            _ZN12Unk_020660f813func_02067a84EPhPv(o, b, data_ov048_0225c6e0);
        }
        func_020731d4();
    }
}

s32 Unk_ov048_0225cbc8::func_ov048_02259420() {
    u8 *p = _ZN12Unk_020cbb1813func_020721f8Ev(data_020cbb18);
    s32 n = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (*(p + i * 0x13 + 0x190) == 6) {
            n++;
        }
    }
    s32 r = 0;
    switch (unk_7e3) {
    case 0: {
        func_0209f1e4();
        r = 0x26;
        func_0209750c();
        _ZN12Unk_0209865c13func_02098680Ev();
        func_02076c80();
        s64 t = func_020ea3c4();
        _ZN18Unk_ov048_0225cbc819func_ov048_0225af48Ex(this, (s32)t, (s32)(t >> 32));
        func_0209f1c4();
        break;
    }
    case 1:
        if (n != 0) {
            r = 0x6b;
        } else {
            r = 0x46;
        }
        break;
    case 2:
        r = 0x5d;
        break;
    }
    return r;
}

s32 Unk_ov048_0225cbc8::func_ov048_022593e4() {
    void *g = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_020729ccEj(g, 0)) {
        if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
            return 0x17;
        }
        if (func_020eaf18() == 3) {
            return 0x3a;
        }
        return 0x38;
    }
    return 0x3d;
}

u32 Unk_ov048_0225cbc8::func_ov048_022593bc() {
    return (u8)(_ZN12Unk_020cbb1813func_020729ccEj(data_020cbb18, 0) ? 0x21 : 0x22);
}

u32 Unk_ov048_0225cbc8::func_ov048_02259390() {
    BOOL r = TRUE;
    if (func_020eaf18() != 3 && func_020eaf18() != 4) {
        r = FALSE;
    }
    return (u8)(r ? 0x82 : 0x65);
}

u32 Unk_ov048_0225cbc8::func_ov048_02259364() {
    BOOL r = TRUE;
    if (func_020eaf18() != 3 && func_020eaf18() != 4) {
        r = FALSE;
    }
    return (u8)(r ? 0x80 : 0x63);
}

s32 Unk_ov048_0225cc58::func_ov048_0225913c(s32 id) {
    s32 r = 0x84;
    if (id == 0x4e85 || id == 0x5bcf || RNG(id, 0x59d8, 0x5dbf)) {
        r = 0x83;
    } else if (RNG(id, 0x4e86, 0x4e8b) || id == 0x4e8d || RNG(id, 0x4e8f, 0x5207) || RNG(id, 0xcb24, 0xcb82) ||
               RNG(id, 0xcc4c, 0xccaf) || RNG(id, 0xcf08, 0xcf6b) || RNG(id, 0xcf6c, 0xcfcf) ||
               RNG(id, 0xcfd0, 0xd033)) {
        r = 0x84;
    } else if (id == 0x4e8c) {
        r = 0x85;
    } else if (id == 0x4e8e) {
        r = 0x86;
    } else if (id == 0xc3b3) {
        r = 0x87;
    } else if (RNG(id, 0xc79b, 0xc79e) || RNG(id, 0xc7a0, 0xc7fe) || RNG(id, 0xc864, 0xc8c6)) {
        r = 0x88;
    } else if (id == 0xc79f) {
        r = 0x89;
    } else if (RNG(id, 0xc800, 0xc863)) {
        r = 0x8a;
    } else if (RNG(id, 0xcb20, 0xcb23) || RNG(id, 0xcb84, 0xcb87) || RNG(id, 0xcbe8, 0xcbeb)) {
        r = 0x8b;
    }
    s32 q = id / 1000;
    Unk_020e3efc a;
    Unk_020e3efc b;
    func_020b3270(&a, q, 2, 6, 0, 0);
    func_020b3270(&b, id - q * 1000, 3, 6, 0, 0);
    _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 6, &a);
    _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 7, &b);
    return r;
}

BOOL Unk_ov048_0225cc58::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::vfunc_58() {
    if (unk_558.unk_0b != 0) {
        return TRUE;
    }
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov048_0225cc58::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov048_0225bfb4(this, 0x10);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            func_ov048_0225bfb4(this, 0x10);
        }
        break;
    case 1: {
        ((Unk_020d7714 *)&unk_658)->vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov048_0225bfb4(this, 2);
        break;
    }
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov048_0225bfb4(this, 0x11);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            ((Unk_020d7714 *)&unk_658)->vfunc_08();
            unk_658.func_02015ab0(func_0201bc4c(4));
            func_ov048_0225bfb4(this, 2);
        }
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(1, data_020cbb18->unk_64, 4);
                func_ov048_0225bfb4(this, 4);
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov048_0225bfb4(this, 0xf);
            }
        }
        unk_658.func_ov048_0225b038(0xb);
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (_ZN12Unk_020d77a413func_0201b9e8Eii(this, &a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov048_0225bfb4(this, 1);
                    }
                }
            }
        }
        break;
    }
}

BOOL Unk_ov048_0225cc58::func_ov048_02258e88() {
    Unk_ov048_Global *g = data_020cbb18;
    Unk_ov048_Vec_Loc v;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
        return FALSE;
    }
    if (func_020b50e8() == 0x2f) {
        return FALSE;
    }
    if (func_0203e2f4()) {
        return FALSE;
    }
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) == 0) {
        return FALSE;
    }
    Unk_ov048_Vec *p = func_020947f0(4);
    *(Unk_ov048_Vec *)&v = *p;
    if (v.unk_08 <= data_ov048_0225c328.unk_08) {
        func_0209750c();
        if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
            unk_658.func_ov048_0225b038(9);
        } else {
            unk_658.func_ov048_0225b038(10);
        }
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::vfunc_7c() {
    if (func_020b50e8() == 0xc) {
        return FALSE;
    }
    return Unk_020d8bc8::vfunc_7c();
}

// ---- 8de0

BOOL Unk_ov048_0225cc58::func_ov048_02258e34() {
    if (_ZN12Unk_02019dd813func_02019d8cEv(&unk_2ac) == 0xba && func_020c03c8() && unk_658.unk_3c->unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}




// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"

// ---- declarations shared by the merged files
class Unk_020ddcf0;

class Unk_020660f8 {
public:
    void func_02067958();
    void func_02067978(Unk_020ddcf0 *p);
    void func_02067990();
    s32 func_02067a3c(s32 idx, void *p);
    void func_02067a6c();
    void func_02067a78();
    void func_02067a84(u8 *b, void *c);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

struct Unk_020cbb18 {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 *unk_08;
    /* 0x0c */ u32 unk_0c[3];
    /* 0x18 */ u8 pad_18[0x64 - 0x18];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ u8 unk_6c;

    void func_02072368(u32 v);
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *src, u32 n);
    void func_020728d4();
    void func_020729a8(u32 v);
    BOOL func_020729cc(u32 v);
    BOOL func_02072d44(s32 v);
    u8 func_02072e24();
    void func_02072e28(u32 v);
    BOOL func_02072e44();
    u32 func_02072e88(s32 i);
    void func_02072e94(s32 i, u32 v);
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x20 */ u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020e2824_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

// vtable 0x020e281c: the message object inside the scene (size 0x48)
class Unk_020e2824 : public Unk_020ddcf0 {
public:
    Unk_020e2824();
    virtual ~Unk_020e2824();
    virtual void vfunc_14();
    virtual void vfunc_18();

    void func_020a1574(u32 v);

    /* 0x44 */ u32 unk_44;
};

class Unk_020e27d4;
typedef void (Unk_020e27d4::*Unk_020e27d4_Fn)();

struct Unk_020e27d4_Ent {
    Unk_020e27d4_Fn enter;
    Unk_020e27d4_Fn exec;
};

// vtable 0x020e27cc: the scene (size 0x10c). Its destructor is implicit (D1, D0 at the start of the unit).
class Unk_020e27d4 : public Unk_020d8c7c {
public:
    typedef s32 (Unk_020e27d4::*Fn)();

    Unk_020e27d4() {
        unk_d8 = 0;
        unk_dc = 0;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();

    s32 func_020a1224();
    s32 func_020a12f0();
    s32 func_020a1330();
    s32 func_020a1374();
    s32 func_020a13c4();
    void func_020a1464(u32 i, u8 v);
    u32 func_020a1470(u32 i);
    void func_020a147c(u32 i, u8 v);
    u32 func_020a1484(u32 i);
    u32 func_020a148c();
    void func_020a1494();
    void func_020a14ac();
    BOOL func_020a15c8(u32 v);
    void func_020a15f8();
    void func_020a1614();
    void func_020a1648();
    void func_020a167c();
    void func_020a1950();
    void func_020a1974();
    void func_020a3b7c();
    void func_020a3b9c();
    void func_020a3c84();
    void func_020a3cc4();
    void func_020a3dac();
    void func_020a3dec();
    void func_020a3eb8();
    void func_020a3ebc(s32 idx);

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_020e2824 unk_54;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 pad_9e[0xa8 - 0x9e];
    /* 0xa8 */ void *unk_a8;
    /* 0xac */ void *unk_ac;
    /* 0xb0 */ void *unk_b0;
    /* 0xb4 */ void *unk_b4;
    /* 0xb8 */ void *unk_b8;
    /* 0xbc */ void *unk_bc;
    /* 0xc0 */ void *unk_c0;
    /* 0xc4 */ void *unk_c4;
    /* 0xc8 */ void *unk_c8;
    /* 0xcc */ u8 pad_cc[0xd4 - 0xcc];
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 pad_d5[0xd8 - 0xd5];
    /* 0xd8 */ u32 unk_d8;
    /* 0xdc */ u32 unk_dc;
    /* 0xe0 */ u8 pad_e0[0xeb - 0xe0];
    /* 0xeb */ u8 unk_eb[0x12];
    /* 0xfd */ u8 unk_fd;
    /* 0xfe */ u8 unk_fe;
    /* 0xff */ u8 unk_ff[4];
    /* 0x103 */ u8 unk_103[4];
    /* 0x107 */ u8 unk_107;
    /* 0x108 */ u8 unk_108;
    /* 0x109 */ Unk_020e2824_Nib unk_109;
    /* 0x10a */ Unk_020e2824_Nib unk_10a;
};

// the three file-scope objects of __sinit (constructors and destructors are functions of other units)
class Unk_0203ecdc {
public:
    Unk_0203ecdc();
    ~Unk_0203ecdc();
    u32 unk_00[0x42];
};

class Unk_0203ec54 {
public:
    Unk_0203ec54();
    ~Unk_0203ec54();
    u8 unk_00[0xd2];
};

class Unk_02087224 {
public:
    Unk_02087224();
    ~Unk_02087224();
    u8 unk_00[0x22c];
};

struct Unk_020a4238_Entry {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
};

// the 4-byte record class of the previous file (constructor 0x0209eb90, destructor 0x0209eb8c)
extern "C" void _ZN12Unk_0209ea5013func_0209eb90Ev(void *p);
extern "C" void _ZN12Unk_0209ea5013func_0209eb8cEv(void *p);

// ---- unk_0209e394.cpp

namespace NA {
extern "C" {
extern u8 data_021ed3ac[];
extern u8 data_021ed3a0;
extern u8 data_021ed448[];
void MI_CpuCopy8(void *src, void *dst, s32 n);
void func_0203ec54(void *p);
void *func_0203ec4c(void *p);
void func_0211a748(void *a, void *b, s32 c, s32 d, s32 e);
void MI_CpuFill8(void *p, s32 v, s32 n);
s32 func_02000b7c();
s32 func_02063a04(void *a, void *b, s32 n);
void func_0203ec18(void *p);
void func_0203ec50(void *p);
}
}

// ---- unk_0209ecf8.cpp

struct Unk_0209f080 {
    u8 unk_00[0x64];
    s32 unk_64;
    u8 pad_68[0xc0 - 0x68];
    u32 unk_c0;
    u8 pad_c4[0x10c4 - 0xc4];
    u32 unk_10c4;
    u8 unk_10c8;

    u8 func_0209f080();
    void func_0209f08c(u32 a);
    void func_0209f0c0();
    void func_0209f0dc();
};

struct Unk_0209f14c {
    u32 unk_00;
    u8 unk_04[4];
    u8 unk_08[4];

    u32 func_0209f14c();
    void func_0209f150();
    void func_0209f190();
};

struct Unk_0209f304 {
    u8 pad_00[0xb4];
    void *unk_b4;
    u8 pad_b8[0xeb - 0xb8];
    u8 unk_eb;
    u8 pad_ec[0xf4 - 0xec];
    u8 unk_f4[4];
    u8 pad_f8[0x10a - 0xf8];
    u8 unk_10a_lo : 4;
    u8 unk_10a_hi : 4;

    void func_0209f304(u8 *p, u32 base);
    BOOL func_0209f344();
    void func_0209f390(u8 *p, u32 base, u32 x, u32 y);
    s32 func_0209f430(u8 *p, u32 base, u32 fail, u8 a5, u8 a6, u8 a7, u32 a8);
};

namespace NB {
extern "C" {
extern u8 data_021ed394;
extern u8 data_021ed51c[];
extern u8 data_021ed39c;
extern u8 data_021ed824[];
extern u8 data_021eca50[];
extern u8 data_021ed3a0;
extern char *data_020e24fc;
extern char *data_020e24f4;
extern char *data_020e2500;
extern u32 data_020e24f8;
extern u8 data_021ed448[];
extern u8 data_021d7350[];
extern u8 data_021cc7d0[];
extern u8 data_021ed390;
extern u8 data_021ed3a4;
extern u8 *data_020cbb18;
extern u8 data_021ed32c[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_65_ID[];
extern u32 OVERLAY_66_ID[];
void *func_0203ecdc(void *p);
u8 *func_0203ecc8(u8 *p);
void *func_0203eccc(void *p);
BOOL func_0203ec58(u8 *p);
s32 func_02000b7c(void);
void MI_CpuFill8(void *p, u32 v, u32 n);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
void func_0211a748(void *a, void *b, u32 c, s32 d, u32 e);
s32 func_02063a04(u8 *a, u8 *b, u32 n);
s32 func_0204ff18(void *a, u32 n);
void _ZN12Unk_0208722413func_0208728cEj(void *p, u32 v);
void _ZN12Unk_0208722413func_02087230Ej(void *p, s32 v);
s32 _ZN12Unk_0208722413func_02087224Ev(void *p);
s32 func_0204fef4(void *p, u32 n, s32 v);
s32 _ZN12Unk_0208722413func_02087280Ev(void *p);
void _ZN12Unk_0208722413func_020872c8Ev(void *p);
s32 _Z13func_020721b4v(void);
s32 func_020ea01c(s32 a);
s32 func_020e9da0(s32 a);
s32 _ZN12Unk_0209da4413func_0209e170Ej(void *p, u32 n);
char *func_0212a360(char *dst, const char *src);
char *func_0212a2bc(char *dst, const char *src);
void func_020e9b00(char *p);
s32 func_020e9e38(char *a, void *b, u32 c, u32 d);
s32 func_020e9eb8(void *a, void *b, u32 c, u32 d);
s32 func_020ea0b4(void *a, void *b, u32 c, u32 d);
s32 func_020eaf18(void);
s32 func_02073a78(void);
s32 func_0209750c(void);
s32 _ZN12Unk_0209865c13func_02098878Ev(s32 h);
void func_0209ed74(void);
void func_0209ecf8(void);
void func_0209ec80(void);
void func_0209f248(void);
s32 func_020a0554(void);
s32 func_02067918(s32 a);
void _ZN12Unk_020660f813func_02067990Ev(void);
void _ZN12Unk_020660f813func_02067a6cEv(s32 a);
void _ZN12Unk_020660f813func_02067a84EPhPv(s32 a, u8 *b, void *c);
void OS_CreateThread(void *a, void *fn, u32 b, void *c, u32 d, u32 e);
void OS_WakeupThreadDirect(void *a);
s32 OS_IsThreadTerminated(void *a);
void OS_KillThread(void *a, u32 b);
void OS_ExitThread(void);
void *func_020a0394(void);
void *func_020a037c(void);
void *func_020a03fc(void);
void func_021163b0(void *a, void *b, void *c);
void func_021162b0(void *a, void *b, u32 c);
s32 func_021164ec(void *a, u32 b, void *c);
void func_02076c50(void *p);
void func_02076c24(void *p, u32 v);
s32 _ZN12Unk_020cbb1813func_020721f8Ev(void *p);
s32 _ZN12Unk_0209865c13func_02098674Ev(void);
u8 *func_02076db4(void);
s32 func_02076cf0(u8 *p);
u8 *func_02076e1c(s32 p);
void _ZN12Unk_020a099013func_020a0990EPKch(u32 a, void *b, u32 c);
void _ZN12Unk_02097ff413func_02097ff4Ej(s32 a, u32 b);
void _ZN12Unk_02097ff413func_0209801cEj(s32 a, u32 b);
s32 func_0208a578(void);
void _ZN12Unk_020e0f1013func_0208c134Eii(s32 a, u32 b, u32 c);
u32 _ZN12Unk_020cbb1813func_02072e24Ev(void *g);
s32 func_02074a2c(void);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *g, s32 i);
s32 _ZN12Unk_020cbb1813func_020729ccEj(void *g, s32 i);
s32 func_020a6358(s32 i);
s32 func_020a62f8(s32 i);
void _ZN12Unk_020cbb1813func_02072e20Ej(void *g, u32 v);
s32 func_02074d78(void);
s32 func_02073090(u32 a);
void func_0207312c(void);
s32 _ZN12Unk_020e27d413func_020a13c4Ev(void *p);
s32 _ZN12Unk_020a09d813func_020a09fcEi(void *p, u32 v);
s32 _ZN12Unk_020a09d813func_020a1158Ei(void *p, u32 v);
s32 func_02074b58(u32 a, u32 b);
void func_020a0268(void *p);
void _ZN12Unk_020e27d413func_020a1494Ev(void *p);
void func_020a14d8(void *p);
void func_0209fbe4(void *p);
void func_020873e0(void);
void _ZN12Unk_0209ea5013func_0209eb74Ev(void *p);
void _ZN12Unk_0209ea5013func_0209eb6cEv(void *p);
void func_0209f110(s32 a);
u8 func_0209f23c(void);
}
}

// ---- unk_0209f638.cpp

struct Unk_0209f638 {
    u8 pad_00[0xeb];
    u8 unk_eb[5];
    u8 unk_f0[0x1f - 5];
     u8 unk_10a;
};

struct Unk_0209fb48_V3 { s32 v[3]; };

struct Unk_0209f898_Rec { u32 unk_00; u32 unk_04; };

namespace NC {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021ed32c;
extern Unk_0209fb48_V3 data_020e2764;
extern Unk_0209fb48_V3 data_020e2770;
BOOL func_02073090(s32 a);
void func_0207312c();
u32 func_02073190();
void func_02073340();
void _Z13func_020720f8v();
BOOL func_020eaca0();
BOOL func_020eaf90();
s32 func_020eaf18();
void func_020741b0();
void func_020741a8();
BOOL func_02074b58(s32 a, u32 b);
BOOL func_020748fc();
s32 _ZN12Unk_020e27d413func_020a13c4Ev(Unk_0209f638 *p);
s32 _ZN12Unk_020a09d813func_020a1158Ei(Unk_0209f638 *p, u32 v);
void _ZN12Unk_020e27d413func_020a1494Ev(Unk_0209f638 *p);
void func_020a0268(Unk_0209f638 *p);
void _ZN12Unk_020e27d413func_020a1648Ev(Unk_0209f638 *p);
void _ZN12Unk_020e27d413func_020a1614Ev(Unk_0209f638 *p);
void *_ZN12Unk_020e27d413func_020a1484Ej(Unk_0209f638 *p, s32 i);
void _ZN12Unk_0209ea5013func_0209eb74Ev(void *p);
void _ZN12Unk_0209ea5013func_0209eb6cEv(void *p);
void func_020873e0();
void func_0209f000(Unk_0209f638 *p);
Unk_0209f898_Rec *func_02067918(s32 i);
void OS_ResetSystem(s32 v);
void func_02074eb4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_0208f0b0(s32 a);
BOOL _ZN12Unk_0208f23813func_0208f1c0Ev(void *a);
void *_ZN12Unk_0208f23813func_0208f18cEv(void *a);
void _ZN12Unk_020872fc13func_02087368Ev(void *a);
s32 _ZN12Unk_020872fc13func_02087354Ev(void *a);
void *_ZN12Unk_020872fc13func_02087364Ev(void *a);
void _ZN12Unk_020872fc13func_0208733cEv(void *a);
void _ZN12Unk_020872fc13func_02087328Eh(void *a, u8 b);
void _ZN12Unk_020872fc13func_0208735cEv(void *a, void *b);
void _ZN12Unk_020872fc13func_02087344Eh(void *a, s32 b);
void MI_CpuCopy8(void *dst, void *src, u32 n);
void _ZN12Unk_020dd38cC2Ev(void *p);
void _ZN12Unk_020dd38cD1Ev(void *p);
void func_020638d0(void *a, void *b);
void *func_0209409c(void *a);
void *_ZN12Unk_0209865c13func_0209888cEv(void *a);
void *_ZN12Unk_0209865c13func_020986a4Ev(void *a);
void *func_0209750c();
void *func_02097520(s32 i);
void *func_0209c37c(s32 a, s32 b);
BOOL func_02063b8c(s32 a);
void *_ZN12Unk_0209865c13func_02098680Ev(void *a);
void *_ZN12Unk_0209865c13func_02098674Ev(void *a);
void *func_02076c7c(void *a);
void *func_02076e1c(void *a);
void *func_02076db4(void *a);
void *func_02076cf0(void *a);
BOOL func_020e9d88(void *a, void *b);
void func_0209fef8(Unk_0209f638 *p, void *q);
BOOL func_0209fc68(Unk_0209f638 *p, void *a, void *b);
void func_0209fcc4(Unk_0209f638 *p, s32 idx);
void func_0209fbe4(Unk_0209f638 *p);
}
}

// ---- unk_0209ff4c.cpp

struct Unk_020cbb18_ff4c {
    u8 pad_00[0x68];
    volatile s32 unk_68;
};

struct Unk_021ed3b0 {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 pad_54[0x9d - 0x54];
    u8 unk_9d;
    u8 pad_9e[0xc0 - 0x9e];
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    u8 pad_cc[4];
    u16 unk_d0;
    u8 unk_d2;
    u8 unk_d3;
    u8 pad_d4;
    u8 unk_d5;
    u8 unk_d6;
    u8 pad_d7;
    u8 unk_d8[8];
    u8 unk_e0;
    u8 unk_e1;
    u8 unk_e2;
    u8 unk_e3[4];
    u8 unk_e7[4];
    u8 unk_eb[4];
    u8 unk_ef;
    u8 unk_f0[4];
    u8 unk_f4[4];
    u8 unk_f8[4];
    u8 unk_fc;
    u8 unk_fd;
};

class Unk_0209ea50 {
public:
    u32 v;
    Unk_0209ea50() { _ZN12Unk_0209ea5013func_0209eb90Ev(this); }
    ~Unk_0209ea50() { _ZN12Unk_0209ea5013func_0209eb8cEv(this); }
    u32 func_0209eb14();
};

class Unk_020a0088_Date {
public:
    u16 v;
    Unk_020a0088_Date() {}
};

namespace ND {
extern "C" {
extern Unk_020cbb18_ff4c *data_020cbb18;
extern Unk_021ed3b0 *data_021ed3b0;
extern s32 data_021ed3bc;
extern u8 data_021ed398;
extern s32 data_021ed3b4;
extern u8 data_021ed3a8;
extern s32 data_021ed3c4;
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u8 data_021e7f8c[];
extern u8 data_021ecfa8[];
extern u8 data_021ed32c[];
extern u8 data_021c4890[];
extern const u32 data_020d0794[];
extern u8 data_020e24ec;
extern u8 data_020e252c[];
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18_ff4c *, s32);
void _ZN12Unk_020cbb1813func_020729a8Ej(Unk_020cbb18_ff4c *, u32);
void func_0208f0b0(s32);
void _ZN12Unk_0208f23813func_0208f18cEv();
void _ZN12Unk_020872fc13func_02087368Ev();
void func_0209fcc4(void *, s32);
s32 func_020a5ef8();
void _ZN12Unk_020e27d413func_020a147cEjh(void *, s32, s32);
s32 func_02063b8c(s32);
void func_02073340(void *);
void func_0209f000(void *);
void func_020952f0(s32);
void func_02095300(s32, s32);
s32 func_020952e0(s32);
s32 func_020974a0(s32);
void _ZN12Unk_0209865c13func_02098a58Ev();
void func_0209cfc8(s32);
void func_0209d70c(void *, s32);
void func_0209d624(void *);
s32 func_0204da0c();
void _ZN12Unk_0204da1813func_0204dab4Ev(s32);
void _ZN12Unk_0204da1813func_0204da24Ev(s32);
void func_0204c6a4(s32);
void func_0204d42c();
void func_0204d3d8();
void func_02045e98();
void func_020741b8(s32);
u8 *func_020952c8(s32);
u16 *func_020952d8();
void func_0209d498(void *);
void _ZN12Unk_0209865c13func_020987b0E17Unk_0209865c_Bits(s32, Unk_020a0088_Date);
void _ZN12Unk_0209da4413func_0209df9cEv(void *);
s32 func_020977a0(void *);
void func_020975f0(void *, void *, s32, s32);
s32 _ZN12Unk_0208f23813func_0208f1c4Ev(void *);
u32 func_0204fef4(void *, u32, u32);
void _ZN12Unk_0208f23813func_0208f1d0Ej(void *, u32);
s32 _ZN12Unk_0208f23813func_0208f060Ev(void *);
void _ZN12Unk_0208f23813func_0208f068Ej(void *, u32);
BOOL func_020500f0(void *, u32, void *, u32);
s32 func_020974f8();
s32 func_0209750c();
u8 *_ZN12Unk_0209865c13func_02098674Ev();
void func_02097868(void *, s32);
u8 *_ZN12Unk_0209865c13func_02098680Ev();
s32 func_02076d50(void *);
void func_02076d5c(void *, u32);
s32 func_02076c6c(void *);
void func_02076c74(void *, u32);
void _ZN12Unk_0209ea5013func_0209eb7cEv(void *);
void func_0209d604(s32);
s32 func_02050008(void *, void *, u32, u32);
s32 func_020a0774(s32, Unk_0209ea50 *);
BOOL func_020a07b0(s32);
Unk_021ed3b0 *func_020a0370();
s32 func_020a03ac();
BOOL func_020a02dc();
BOOL func_020a0318();
BOOL func_020a02f0();
}
}

// ---- unk_020a0868.cpp

class Unk_020a09d8;

typedef s32 (Unk_020a09d8::*Unk_020a09d8_State)(s32);

class Unk_020a09d8 {
public:
    s32 func_020a10ec(s32 idx);
    s32 func_020a0f88(s32 mode);
    s32 func_020a0f1c(s32 idx);
    s32 func_020a0e44(s32 idx);
    s32 func_020a0dd0(s32 idx);
    s32 func_020a0d90(s32 idx);
    s32 func_020a0d28(s32 idx);
    s32 func_020a0b08(s32 idx);
    s32 func_020a09fc(s32 idx);
    BOOL func_020a09d8(u8 *p, u8 *q, s32 n);
    s32 func_020a1158(s32 arg);

     u32 unk_00[0x14];
     s32 unk_50;
     u32 unk_54[0x12];
     u8 unk_9c;
     u8 unk_9d;
     u8 unk_9e;
     u8 unk_9f;
     s16 unk_a0;
     s16 unk_a2;
     s32 unk_a4;
     u32 unk_a8;
     u8 *unk_ac;
     u8 *unk_b0;
};

class Unk_020a0990 {
public:
    void func_020a0990(const char *str, u8 flag);

     u32 unk_00[0x15];
     Unk_020ddcf0 unk_54;
};

namespace NE {
extern "C" {
extern s32 data_021ed3c8;
extern u8 data_021d7350[];
extern u8 data_021c4890[];
extern s32 data_020d0764[];
extern s32 data_020d077c[];
extern s32 data_020d0794[];
extern u8 __ptmf_null[];
extern Unk_020a09d8 *data_021ed3b0;
Unk_020660f8 *func_02067918(s32 i);
s32 func_0204ff6c(void *p);
s32 func_0204ff40(void *p);
s32 func_0204ffa0(void *p, void *buf, s32 size, s32 off);
s32 func_0205007c(void *p, s32 off, void *buf, s32 size);
s32 func_02050008(void *p, void *buf, s32 size, s32 off);
s32 func_0204ff18(void *buf, s32 size);
s32 _ZN12Unk_0209da4413func_0209e1a0Ev(void *buf);
void *MI_CpuFill8(void *dst, s32 v, u32 n);
void *MI_CpuCopy8(void *dst, void *src, u32 n);
u8 *func_020a03ac(void);
s32 func_020a071c(void);
void func_020a0774(s32 a, void *p);
u16 func_0204fef4(void *p, u32 n, u32 m);
void _ZN12Unk_0209ea5013func_0209eb1cEv(void *p);
void _ZN12Unk_0209ea5013func_0209eb90Ev(void *p);
void _ZN12Unk_0209ea5013func_0209eb8cEv(void *p);
u32 _ZN12Unk_0209ea5013func_0209eb14Ev(void *p);
void _ZN12Unk_0209ea5013func_0209eb18Eh(void *p, u32 v);
u32 _ZN12Unk_0209eb0c13func_0209eb0cEv(void *p);
void _ZN12Unk_0209eb0c13func_0209eb10Et(void *p, u32 v);
u32 _ZN12Unk_0208f23813func_0208f1c4Ev(void *p);
void _ZN12Unk_0208f23813func_0208f1d0Ej(void *p, u32 v);
u32 _ZN12Unk_0208f23813func_0208f060Ev(void *p);
void _ZN12Unk_0208f23813func_0208f068Ej(void *p, u32 v);
void *func_02097868(void *t, s32 i);
void *_ZN12Unk_0209865c13func_02098680Ev(void *p);
void *_ZN12Unk_0209865c13func_02098674Ev(void *p);
u16 func_02076c6c(void *p);
void func_02076c74(void *p, u32 v);
u16 func_02076d50(void *p);
void func_02076d5c(void *p, u32 v);
BOOL func_020a0ba4(u32 idx, s32 flag);
BOOL func_020a0c0c(u32 idx);
s32 func_020a0c18(s32 idx, s32 flag);
s32 func_020a0ccc(s32 idx);
}
}

// ---- unk_020a1224.cpp

void operator delete(void *p);

class Unk_020e0ef4 {
public:
    void func_0208aa28();
    void func_0208aa30();
};

namespace Unk_020a14ac_Ns {
extern "C" s32 MI_CpuCopy8(const void *src, void *dst, u32 size);
}

namespace NF {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021d7350[];
extern u8 data_021ed32c[];
extern u8 data_021edb5c[];
extern u8 data_021e7f8c[];
extern u8 data_020e24ec;
u8 _ZN12Unk_020a09d813func_020a0b08Ei(Unk_020e27d4 *self, u32 x);
s32 _ZN12Unk_020a09d813func_020a1158Ei(Unk_020e27d4 *self, u32 x);
u32 func_020a071c(void);
s32 func_020a0210(void);
void _ZN12Unk_020e27d413func_020a3ebcEi(void *p, s32 x);
void *func_02067918(u32 x);
void _ZN12Unk_020660f813func_02067a78Ev(void *o);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *o, void *a, void *b);
void _ZN12Unk_020660f813func_02067990Ev(void *o);
s32 _ZN12Unk_020660f813func_02067a6cEv(void *o);
void _ZN12Unk_020660f813func_0206799cEv(void *o, u32 x);
s32 func_02073090(s32 x);
void func_0207312c(void);
s32 func_02074894(void);
s32 func_02074860(u8 *p);
s32 func_02074828(u8 *p);
s32 func_020747c0(void);
s32 func_02074b58(u32 a, u32 b);
u32 _Z13func_020720f8v(void);
s32 func_020eaca0(u32 x);
u32 func_020eaf28(void);
s32 func_020eaf90(s32 x);
Unk_020e0ef4 *func_0208a570(void);
void _ZN12Unk_0208f23813func_0208f174Ev(void *p);
void *func_0209750c(void);
u32 func_020974a0(u32 x);
s32 func_020974f8(void);
s32 _ZN12Unk_02097ff413func_02097ff4Ej(void *p, u32 x);
void *_ZN12Unk_0209865c13func_02098a58Ev(void *p);
void func_0209d624(void *p);
void func_0209d70c(void *p, u32 x);
void _ZN12Unk_0209da4413func_0209df30Ei(void *p, s32 x);
void _ZN12Unk_0209da4413func_0209e148Ej(void *p, u32 x);
void _ZN12Unk_0209ea5013func_0209eb6cEv(void *p);
void _ZN12Unk_0209ea5013func_0209eb74Ev(void *p);
u32 func_0209f000(void *p);
void func_0209f1c4(void);
void func_0209f898(void *self, u8 *st, u32 a, u32 b, u32 c, u32 d);
void func_02073348(void);
void func_0203ca94(void);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}
}

// ---- unk_020a1c88.cpp

class Unk_020a1c88 {
public:
    u8 pad_00[0x9d];
    u8 unk_9d;
    u8 pad_9e[0xcc - 0x9e];
    u16 unk_cc;
    u16 unk_ce;
    u8 pad_d0[0xe1 - 0xd0];
    u8 unk_e1;
    u8 unk_e2;
    u8 pad_e3[0xf0 - 0xe3];
    u8 unk_f0[8];
    u8 unk_f8[6];
    u8 unk_fe;
    u8 pad_ff[0x107 - 0xff];
    u8 unk_107;

    void func_020a1c88();
    void func_020a1cb8();
    void func_020a1d74();
    void func_020a1de4();
    void func_020a1e04();
    void func_020a1e14();
    void func_020a20a4();
    void func_020a20ac();
    void func_020a2400();
    void func_020a2408();
};

namespace NG {
extern "C" {
extern u8 data_021d7350[];
extern u8 data_021d7352[];
extern u8 data_021d735c[];
extern u8 data_020e24ec;
extern Unk_020cbb18 *data_020cbb18;
s32 func_020a0210(Unk_020a1c88 *self);
void _ZN12Unk_020e27d413func_020a3ebcEi(Unk_020a1c88 *self, u32 s);
BOOL _ZN12Unk_020e27d413func_020a15c8Ej(Unk_020a1c88 *self, u32 a);
void _ZN12Unk_020e27d413func_020a15f8Ev(Unk_020a1c88 *self);
BOOL _ZN12Unk_020e27d413func_020a1470Ej(Unk_020a1c88 *self, s32 a);
void _ZN12Unk_020e27d413func_020a14acEv(Unk_020a1c88 *self);
s32 _ZN12Unk_020e27d413func_020a1484Ej(Unk_020a1c88 *self, u32 a);
void func_020a0088(Unk_020a1c88 *self, u32 a, u32 b);
void _ZN12Unk_020a099013func_020a0990EPKch(Unk_020a1c88 *self, void *a, u32 b);
BOOL func_0209f000(Unk_020a1c88 *self);
void func_0209ff8c(Unk_020a1c88 *self);
void func_0209fefc(Unk_020a1c88 *self);
BOOL _ZN12Unk_0209f30413func_0209f344Ev(Unk_020a1c88 *self);
BOOL func_0209fb48(Unk_020a1c88 *self);
void func_0209f294(Unk_020a1c88 *self);
void _ZN12Unk_0209f30413func_0209f304EPhj(Unk_020a1c88 *self, u8 *s, u32 a);
void _ZN12Unk_0209f30413func_0209f390EPhjjj(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c);
void _ZN12Unk_0209f30413func_0209f430EPhjjhhhj(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0209f638(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void func_0209f898(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c, u32 d);
BOOL _ZN12Unk_0209da4413func_0209e1a0Ev(void *p);
Unk_020660f8 *func_02067918(u32 x);
u32 func_020eb004();
BOOL func_020e7500(void *p);
BOOL func_020733bc();
void func_02073bf8(s32 a, u32 b, u32 c);
void func_020733b0();
void *func_02063964(void *p);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
void _Z13func_0207217cv();
void func_020ea720(void *p, u32 n);
u8 func_020977a0(void *p);
void func_0209f204();
BOOL func_02073090(s32 a);
void func_0207312c();
u32 func_02073190();
u32 func_02073168();
BOOL func_0209f23c();
void _Z13func_020720f8v();
BOOL func_020eaca0();
BOOL func_020eb650();
BOOL func_020749cc();
BOOL func_020748fc();
BOOL func_02074960(u32 a);
void func_020741b0();
void func_020741a8();
void func_0209f1c4();
s32 func_020a5ef8();
void func_020a5c94(u32 a);
void func_020b8e80();
void *func_0208f0b0(u32 a);
s32 func_0208f1dc(void *a);
}
}

// ---- unk_020a25d8.cpp

struct Unk_0204da18 {
    void func_0204da24();
    void func_0204dab4();
};

struct Unk_020a25d8 {
    u8 pad_00[0x9d];
    u8 unk_9d;
    u8 pad_9e[0xc8 - 0x9e];
    u32 unk_c8;
    u8 pad_cc[2];
    u16 unk_ce;
    u16 unk_d0;
    u8 unk_d2;
    u8 unk_d3;
    u8 unk_d4;
    u8 unk_d5;
    u8 unk_d6;
    u8 pad_d7;
    u8 unk_d8[8];
    u8 unk_e0;
    u8 unk_e1;
    u8 pad_e2[0xf0 - 0xe2];
    u8 unk_f0[8];
    u8 unk_f8[4];
};

struct Unk_020a2ecc_Reg {
    u8 pad_00[0x38];
    u16 unk_38;
};

namespace NH {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_020e24ec;
extern u8 data_021ed3a8;
extern u8 data_021c3cb8;
extern u32 data_021ed304;
extern void *data_021ed3b4;
extern u8 data_021d7350[];
extern Unk_020a2ecc_Reg data_021ed2d0;
void func_0209f2d4(Unk_020a25d8 *p, s32 v);
BOOL func_02073090(u32 v);
void func_0207312c();
u32 func_02073190();
u32 func_02073168();
BOOL _ZN12Unk_020e27d413func_020a15c8Ej(Unk_020a25d8 *p, s32 v);
void func_0209fffc(Unk_020a25d8 *p);
void func_0209ff4c(Unk_020a25d8 *p);
void _ZN12Unk_0209f30413func_0209f390EPhjjj(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_0209f30413func_0209f344Ev(Unk_020a25d8 *p);
BOOL func_0209fb48(Unk_020a25d8 *p);
s32 func_020a5ef8();
u32 _ZN12Unk_020e27d413func_020a1484Ej(Unk_020a25d8 *p, s32 v);
void *func_0208f0b0(u32 v);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void func_0208f1dc(void *p);
void _ZN12Unk_020e27d413func_020a14acEv(Unk_020a25d8 *p);
void func_0209ec20(u32 v);
void func_0209f638(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
BOOL func_02074960(u32 v);
void func_02073e14(u32 v);
void _Z13func_020720f8v();
BOOL func_020eaca0();
u32 func_020eb004();
void func_020b8e80();
void func_02045e98();
void func_0209f898(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d);
void _ZN12Unk_020e27d413func_020a15f8Ev(Unk_020a25d8 *p);
void _ZN12Unk_020e27d413func_020a3ebcEi(Unk_020a25d8 *p, s32 v);
void _ZN12Unk_0209f30413func_0209f304EPhj(Unk_020a25d8 *p, u8 *st, u32 a);
BOOL _ZN12Unk_020e27d413func_020a1470Ej(Unk_020a25d8 *p, s32 v);
void _ZN12Unk_0209f30413func_0209f430EPhjjhhhj(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
BOOL func_020749cc();
void func_020a0088(Unk_020a25d8 *p, u32 a, u32 b);
void func_0209f1c4();
void *func_0209750c();
void _ZN12Unk_02097ff413func_0209801cEj(void *p, s32 v);
void func_020a5ee8(s32 v);
void func_020a63bc(u32 a, s32 b, u32 c, u32 d, u32 e);
void func_020741b8(u32 v);
BOOL func_02074e80(u8 *p, u32 v);
BOOL func_020a5cec();
BOOL func_02075170(u32 v);
BOOL func_02076744(u32 v);
BOOL func_02074df4(u32 v);
BOOL func_02074e50(u8 *p, u32 v);
BOOL func_02074a94(u32 v);
void _ZN12Unk_0209f08013func_0209f08cEj(u32 a, s32 b);
BOOL _ZN12Unk_0209f08013func_0209f080Ev(u32 a);
void DC_FlushAll();
BOOL func_02075078(u8 *p, u32 v);
BOOL func_02074bc8(u32 v);
void func_0209ec60(u32 v);
void func_02096b74();
void func_020b013c();
void func_0209ec0c();
BOOL func_02074d18();
BOOL func_02074ff0(u8 *p);
BOOL func_02097444(s32 v);
BOOL func_020a03f0();
void *func_02095204(u32 v);
void func_020ed188();
BOOL func_02074c4c();
u32 func_020eaf90();
u32 func_020952e0(u32 v);
void *func_020974a0(u32 v);
void func_02095300(u32 a, u32 b);
u32 func_0209cb9c(u32 *a, void *b);
u32 func_0209cb74(u32 *a, void *b);
Unk_0204da18 *func_0204da0c();
void func_0204c6a4(Unk_0204da18 *p);
void func_0204d42c();
void func_0204d3d8();
void func_0206daec(u8 *p);
BOOL func_02074cb4(u32 v);
BOOL func_ov048_0225b8a8();
void *func_020b4934();
void func_020b4bbc(void *p, u32 v);
void func_020b4940(void *p, u32 v);
}
}

// ---- unk_020a3238.cpp

struct Unk_020a3238_Vec {
    s32 x, y, z;
};

class Unk_020a3238;

class Unk_020a3238 {
public:
    u8 pad_00[0x9d];
    u8 unk_9d;
    u8 pad_9e[0x10a - 0x9e];
    u8 unk_10a;

    void func_020a3238();
    void func_020a324c();
    void func_020a32e0();
    void func_020a32fc();
    void func_020a3390();
    void func_020a3398();
    void func_020a33c4();
    void func_020a33c8();
    void func_020a3408();
    void func_020a340c();
    void func_020a3478();
    void func_020a347c();
    void func_020a34e0();
    void func_020a34e4();
    void func_020a3514();
    void func_020a3518();
    void func_020a3584();
    void func_020a3588();
    void func_020a35b8();
    void func_020a35bc();
    void func_020a3614();
    void func_020a3618();
    void func_020a3670();
    void func_020a3674();
    void func_020a36a0();
    void func_020a36a4();
    void func_020a3768();
    void func_020a3784();
    void func_020a3868();
    void func_020a38f4();
    void func_020a39c8();
    void func_020a39e4();
    void func_020a3ac8();
    void func_020a3ad0();
};

namespace NI {
extern "C" {
extern u8 data_021c3cc0;
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u32 data_021ed3c4;
extern Unk_020a3238_Vec data_020d0788;
extern Unk_020a3238_Vec data_020d0770;
extern u8 data_021dfd8c[];
s32 _ZN12Unk_020e27d413func_020a13c4Ev(Unk_020a3238 *self);
s32 _ZN12Unk_020a09d813func_020a1158Ei(Unk_020a3238 *self, u32 n);
s32 _ZN12Unk_020e27d413func_020a15c8Ej(Unk_020a3238 *self, u32 n);
void _ZN12Unk_020e27d413func_020a15f8Ev(Unk_020a3238 *self);
void _ZN12Unk_020e27d413func_020a1648Ev(Unk_020a3238 *self);
void _ZN12Unk_020e27d413func_020a3ebcEi(Unk_020a3238 *self, u32 n);
void _ZN12Unk_020a099013func_020a0990EPKch(Unk_020a3238 *self, void *p, u32 n);
s32 func_020a0664(Unk_020a3238 *self);
s32 _ZN12Unk_020a09d813func_020a0d28Ei(Unk_020a3238 *self, u32 n);
Unk_020660f8 *func_02067918(s32 i);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_020b50e8();
s32 func_0204da0c();
void func_0204d5d8(s32 a, Unk_020a3238_Vec *v, s32 b, s32 c);
void func_020b4f18(s32 a, s32 b, Unk_020a3238_Vec *v, s32 c, s32 d, s32 e, s32 f);
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
s32 _ZN12Unk_0209da4413func_0209e170Ej(void *p, s32 n);
void func_020a034c();
void func_020a0340();
void func_020a042c();
s32 func_020a4414(s32 a, s32 b, s32 c, s32 d);
s32 func_020a0cd8();
void _ZN12Unk_0209da4413func_0209df9cEv(void *p);
void func_02097564();
void func_02078370();
void func_0209d70c(void *p, s32 n);
void func_0209d624(void *p);
void func_0207835c();
void func_0209f2d4(void *p, s32 n);
s32 func_020b013c();
s32 func_0209750c(void *p);
void _ZN12Unk_02097ff413func_02097ff4Ej(s32 a, s32 b);
void func_0209cfe4();
void func_0207ae84(void *p, s32 n);
s32 func_0204198c();
s32 func_02041960();
void func_02041ac0();
s32 func_02097868(void *p, u32 n);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
s32 _ZN12Unk_0209865c13func_0209888cEv(...);
void _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(s32 a, void *p);
void _ZN12Unk_0209865c13func_02098a58Ev(s32 a);
void _ZN12Unk_0209da4413func_0209df30Ei(void *p, u32 n);
s32 func_020978a4(void *p);
}
}

static inline BOOL Unk_020a3238_Is2(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

// ---- unk_020a3b7c.cpp

namespace NJ {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021c3cc0;
extern s32 data_021ed3c8;
extern void *data_021ed3b0;
extern void *data_021ed3b4;
extern u8 data_021ed398;
extern void *data_021f482c;
extern u8 data_021dfd8c[];
extern u8 data_021ed1a4[];
extern Unk_020e27d4_Ent data_021ed624[];
s32 func_020b50e8(void);
void _ZN12Unk_020a099013func_020a0990EPKch(void *p, char *name, s32 id);
s32 func_0203ca94(void);
s32 _ZN12Unk_020e27d413func_020a15c8Ej(void *p, s32 v);
s32 func_02073340(void);
BOOL func_0209f000(void *p);
s32 func_0209f1c4(void);
s32 _ZN12Unk_020e27d413func_020a13c4Ev(void *p);
s32 _ZN12Unk_020a09d813func_020a1158Ei(void *p, u32 v);
s32 _ZN12Unk_020e27d413func_020a1648Ev(void *p);
s32 _ZN12Unk_020e27d413func_020a15f8Ev(void *p);
void *func_0209750c(void);
s32 func_0206e7f8(void);
s32 _ZN12Unk_02097ff413func_02097ff4Ej(void *p, s32 v);
s32 func_0204c3c0(void *p);
s32 func_02079cc8(void *p);
s32 func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, u32 size);
s32 _ZN12Unk_0209f08013func_0209f0c0Ev(void);
s32 func_0204da0c(void);
s32 _ZN12Unk_0204da1813func_0204dab4Ev(s32 v);
s32 _ZN12Unk_0204da1813func_0204da24Ev(s32 v);
s32 func_0204c6a4(s32 v);
s32 func_0204d42c(void);
s32 func_0204d3d8(void);
void _ZN12Unk_020e282413func_020a1574Ej(void *p, void *q);
s32 func_020a0c0c(s32 v);
void *func_020a03ac(void);
s32 func_0204ff18(void *p, u32 v);
s32 func_0209d610(void *p);
s32 MI_CpuFill8(void *p, s32 v, u32 n);
s32 func_0209d5f8(void *p);
s32 _ZN12Unk_0209f08013func_0209f0dcEv(void *p);
s32 _ZN12Unk_0209ea5013func_0209eb7cEv(void *p);
}
}

static inline BOOL Unk_020a42c4_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

// ---- objects of the unit
extern const s32 data_020d0764[3];
extern const Unk_020a3238_Vec data_020d0770;
extern const s32 data_020d077c[3];
extern const Unk_020a3238_Vec data_020d0788;
extern const u32 data_020d0794[3];
extern char data_020e24f0[];
extern char data_020e277c[];
extern char data_020e2790[];
extern char data_020e27a4[];
extern "C" Unk_020e27d4 *func_020a4238();
namespace NT {
extern "C" {
void _ZN12Unk_020e27d413func_020a3eb8Ev();
void _ZN12Unk_020e27d413func_020a3decEv();
void _ZN12Unk_020e27d413func_020a3dacEv();
void _ZN12Unk_020e27d413func_020a3cc4Ev();
void _ZN12Unk_020e27d413func_020a3c84Ev();
void _ZN12Unk_020e27d413func_020a3b9cEv();
void _ZN12Unk_020e27d413func_020a3b7cEv();
void _ZN12Unk_020a323813func_020a3ad0Ev();
void _ZN12Unk_020a323813func_020a3ac8Ev();
void _ZN12Unk_020a323813func_020a39e4Ev();
void _ZN12Unk_020a323813func_020a39c8Ev();
void _ZN12Unk_020a323813func_020a38f4Ev();
void _ZN12Unk_020a323813func_020a3868Ev();
void _ZN12Unk_020a323813func_020a3784Ev();
void _ZN12Unk_020a323813func_020a3768Ev();
void _ZN12Unk_020a323813func_020a36a4Ev();
void _ZN12Unk_020a323813func_020a36a0Ev();
void _ZN12Unk_020a323813func_020a3674Ev();
void _ZN12Unk_020a323813func_020a3670Ev();
void _ZN12Unk_020a323813func_020a3618Ev();
void _ZN12Unk_020a323813func_020a3614Ev();
void _ZN12Unk_020a323813func_020a35bcEv();
void _ZN12Unk_020a323813func_020a35b8Ev();
void _ZN12Unk_020a323813func_020a3588Ev();
void _ZN12Unk_020a323813func_020a3584Ev();
void _ZN12Unk_020a323813func_020a3518Ev();
void _ZN12Unk_020a323813func_020a3514Ev();
void _ZN12Unk_020a323813func_020a34e4Ev();
void _ZN12Unk_020a323813func_020a34e0Ev();
void _ZN12Unk_020a323813func_020a347cEv();
void _ZN12Unk_020a323813func_020a3478Ev();
void _ZN12Unk_020a323813func_020a340cEv();
void _ZN12Unk_020a323813func_020a3408Ev();
void _ZN12Unk_020a323813func_020a33c8Ev();
void _ZN12Unk_020a323813func_020a33c4Ev();
void _ZN12Unk_020a323813func_020a3398Ev();
void _ZN12Unk_020a323813func_020a3390Ev();
void _ZN12Unk_020a323813func_020a32fcEv();
void _ZN12Unk_020a323813func_020a32e0Ev();
void _ZN12Unk_020a323813func_020a324cEv();
void _ZN12Unk_020a323813func_020a3238Ev();
void func_020a2ecc();
void func_020a2e9c();
void func_020a2be8();
void func_020a2bdc();
void func_020a2ae4();
void func_020a2abc();
void func_020a2908();
void func_020a28fc();
void func_020a25e4();
void func_020a25d8();
void _ZN12Unk_020a1c8813func_020a2408Ev();
void _ZN12Unk_020a1c8813func_020a2400Ev();
void _ZN12Unk_020a1c8813func_020a20acEv();
void _ZN12Unk_020a1c8813func_020a20a4Ev();
void _ZN12Unk_020a1c8813func_020a1e14Ev();
void _ZN12Unk_020a1c8813func_020a1e04Ev();
void _ZN12Unk_020a1c8813func_020a1de4Ev();
void _ZN12Unk_020a1c8813func_020a1d74Ev();
void _ZN12Unk_020a1c8813func_020a1cb8Ev();
void _ZN12Unk_020a1c8813func_020a1c88Ev();
void _ZN12Unk_020e27d413func_020a1974Ev();
void _ZN12Unk_020e27d413func_020a1950Ev();
void _ZN12Unk_020e27d413func_020a167cEv();
}
}
extern void *data_020e273c[2];
extern void *data_020e2734[2];
extern void *data_020e25bc[2];
extern void *data_020e2724[2];
extern void *data_020e271c[2];
extern void *data_020e25ac[2];
extern void *data_020e2574[2];
extern void *data_020e2704[2];
extern void *data_020e26fc[2];
extern void *data_020e26f4[2];
extern void *data_020e26ec[2];
extern void *data_020e26e4[2];
extern void *data_020e26dc[2];
extern void *data_020e259c[2];
extern void *data_020e25cc[2];
extern void *data_020e26c4[2];
extern void *data_020e26bc[2];
extern void *data_020e26b4[2];
extern void *data_020e26ac[2];
extern void *data_020e26a4[2];
extern void *data_020e269c[2];
extern void *data_020e2694[2];
extern void *data_020e2654[2];
extern void *data_020e266c[2];
extern void *data_020e2674[2];
extern void *data_020e2684[2];
extern void *data_020e268c[2];
extern void *data_020e270c[2];
extern void *data_020e2714[2];
extern void *data_020e2744[2];
extern void *data_020e274c[2];
extern void *data_020e2644[2];
extern void *data_020e263c[2];
extern void *data_020e2634[2];
extern void *data_020e253c[2];
extern void *data_020e2624[2];
extern void *data_020e2504[2];
extern void *data_020e250c[2];
extern void *data_020e2514[2];
extern void *data_020e2604[2];
extern void *data_020e25fc[2];
extern void *data_020e25f4[2];
extern void *data_020e25ec[2];
extern void *data_020e2534[2];
extern void *data_020e25dc[2];
extern void *data_020e2554[2];
extern void *data_020e2564[2];
extern void *data_020e25c4[2];
extern void *data_020e256c[2];
extern void *data_020e25b4[2];
extern void *data_020e257c[2];
extern void *data_020e25a4[2];
extern void *data_020e2584[2];
extern void *data_020e2594[2];
extern void *data_020e25d4[2];
extern void *data_020e2614[2];
extern void *data_020e261c[2];
extern void *data_020e264c[2];
extern void *data_020e265c[2];
extern void *data_020e267c[2];
extern void *data_020e26cc[2];
extern void *data_020e272c[2];
extern void *data_020e2754[2];
extern void *data_020e2544[2];

extern "C" Unk_020e27d4 *func_020a4238() {
    return new Unk_020e27d4;
}

BOOL Unk_020e27d4::vfunc_00() {
    if (NJ::func_020b50e8() == 6) {
        if (NJ::func_0204da0c() != 0) {
            NJ::_ZN12Unk_0204da1813func_0204dab4Ev(NJ::func_0204da0c());
            NJ::_ZN12Unk_0204da1813func_0204da24Ev(NJ::func_0204da0c());
            NJ::func_0204c6a4(NJ::func_0204da0c());
        }
        NJ::func_0204d42c();
        NJ::func_0204d3d8();
    }
    NJ::data_021ed398 = 0;
    if (NJ::data_020cbb18->func_02072e44()) {
        if (NJ::func_020b50e8() == 0xb || NJ::func_020b50e8() == 9) {
            return FALSE;
        }
    }
    NJ::data_021ed3b0 = this;
    NJ::_ZN12Unk_020e282413func_020a1574Ej(&unk_54, this);
    unk_a8 = NJ::data_021f482c;
    if (NJ::func_020b50e8() == 0x2e || NJ::func_020b50e8() == 6 || NJ::func_020b50e8() == 9 || NJ::func_020b50e8() == 0xb) {
        unk_ac = NJ::func_020e8608(unk_a8, 0x15fe0);
        unk_b0 = NJ::func_020e8608(unk_a8, 0x15fe0);
        unk_c0 = NJ::func_020e8608(unk_a8, 0x11df4);
        NJ::func_020a0c0c(2);
        void *r4 = NJ::func_020a03ac();
        s32 r6 = NJ::func_0204ff18(r4, 0x11df4);
        if (NJ::func_0209d610(r4) == 0 || r6 != 0) {
            NJ::MI_CpuFill8(r4, 0, 0x11df4);
        }
        NJ::func_0209d5f8(r4);
    }
    if (NJ::func_020b50e8() == 9) {
        unk_b8 = NJ::func_020e8608(unk_a8, 0x228c);
    }
    if (NJ::func_020b50e8() == 0x2e) {
        unk_b4 = NJ::func_020e8608(unk_a8, 0x15fe0);
        unk_bc = NJ::func_020e8608(unk_a8, 0x84c);
    }
    if (NJ::data_021ed3c8 == 0x14 || NJ::data_021ed3c8 == 0x15) {
        unk_c4 = NJ::func_020e8608(unk_a8, 0x15fe4);
        unk_c8 = NJ::func_020e8608(unk_a8, 0x10cc);
        NJ::_ZN12Unk_0209f08013func_0209f0dcEv(unk_c8);
    }
    if (NJ::data_021ed3c8 == 0x14) {
        void *p = NJ::func_020e8608(unk_a8, 0x15fe0);
        NJ::data_021ed3b4 = p;
        NJ::_ZN12Unk_0209ea5013func_0209eb7cEv((u8 *)p + 0x15fdc);
    }
    return TRUE;
}

BOOL Unk_020e27d4::vfunc_0c() {
    if (NJ::func_020b50e8() == 6) {
        NJ::func_02079cc8(NJ::data_021dfd8c);
    }
    if (NJ::data_020cbb18->func_02072e44()) {
        if (NJ::func_020b50e8() == 0xb || NJ::func_020b50e8() == 9) {
            return TRUE;
        }
    }
    NJ::data_021ed3b0 = 0;
    if (NJ::func_020b50e8() == 0x2e || NJ::func_020b50e8() == 6 || NJ::func_020b50e8() == 9 || NJ::func_020b50e8() == 0xb) {
        NJ::func_020e85fc(unk_a8, unk_ac);
        NJ::func_020e85fc(unk_a8, unk_b0);
        NJ::func_020e85fc(unk_a8, unk_c0);
    }
    if (NJ::func_020b50e8() == 9) {
        NJ::func_020e85fc(unk_a8, unk_b8);
    }
    if (NJ::data_021ed3b4) {
        NJ::func_020e85fc(unk_a8, NJ::data_021ed3b4);
        NJ::data_021ed3b4 = 0;
    }
    if (unk_c8) {
        NJ::_ZN12Unk_0209f08013func_0209f0c0Ev();
        NJ::func_020e85fc(unk_a8, unk_c8);
        unk_c8 = 0;
    }
    if (unk_c4) {
        NJ::func_020e85fc(unk_a8, unk_c4);
    }
    if (NJ::func_020b50e8() == 0x2e) {
        NJ::func_020e85fc(unk_a8, unk_b4);
        NJ::func_020e85fc(unk_a8, unk_bc);
    }
    return TRUE;
}

BOOL Unk_020e27d4::vfunc_18() {
    if (NJ::data_021ed624[unk_50].exec) {
        (this->*NJ::data_021ed624[unk_50].exec)();
    }
    return TRUE;
}

void Unk_020e27d4::func_020a3ebc(s32 idx) {
    if (NJ::data_021ed624[idx].enter) {
        (this->*NJ::data_021ed624[idx].enter)();
    }
    unk_50 = idx;
}

void Unk_020e27d4::func_020a3eb8() {}

void Unk_020e27d4::func_020a3dec() {
    s32 m = NJ::func_020b50e8();
    if (Unk_020a42c4_IsTwo(NJ::data_021c3cc0) != 0) {
        if (m == 9) {
            s32 t = NJ::data_021ed3c8;
            if (t == 0x12 || t == 0x1f) {
                func_020a3ebc(*(volatile s32 *)&NJ::data_021ed3c8);
                NJ::data_021ed3c8 = 0;
            }
        } else if (m == 0xb) {
            if (NJ::data_021ed3c8 == 0x13) {
                func_020a3ebc(NJ::data_021ed3c8);
                NJ::data_021ed3c8 = 0;
            }
        } else if (m == 6) {
            if ((u32)(NJ::data_021ed3c8 - 3) <= 1) {
                func_020a3ebc(NJ::data_021ed3c8);
                NJ::data_021ed3c8 = 0;
            }
        } else if (m == 0x2e) {
            func_020a3ebc(NJ::data_021ed3c8);
            NJ::data_021ed3c8 = 0;
        }
        if (m == 0xc && NJ::data_021ed3c8 == 0x14) {
            func_020a3ebc(NJ::data_021ed3c8);
            NJ::data_021ed3c8 = 0;
        }
        if (m == 0x2f || m == 0xd) {
            func_020a3ebc(NJ::data_021ed3c8);
            NJ::data_021ed3c8 = 0;
        }
    }
}

void Unk_020e27d4::func_020a3dac() {
    void *r5 = NJ::func_0209750c();
    NJ::_ZN12Unk_020a099013func_020a0990EPKch(this, (char *)"sp_etc_sequence2", 1);
    NJ::func_0206e7f8();
    NJ::_ZN12Unk_02097ff413func_02097ff4Ej(r5, 2);
    NJ::func_0204c3c0(NJ::data_021ed1a4);
    unk_9d = 0;
}

void Unk_020e27d4::func_020a3cc4() {
    switch (unk_9d) {
    case 0:
        if (NJ::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0) != 0) {
            if (NJ::data_020cbb18->func_02072e88(NJ::data_020cbb18->unk_64) != 0) {
                NJ::func_02073340();
                if (NJ::func_0209f000(this) != 0) {
                    NJ::func_0209f1c4();
                }
            }
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = NJ::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 4;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NJ::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = NJ::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.lo);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 6;
        }
        break;
    }
    case 4:
        NJ::_ZN12Unk_020e27d413func_020a1648Ev(this);
        unk_9d = 5;
        break;
    case 5:
        break;
    default:
        NJ::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        func_020a3ebc(0xc);
        break;
    }
}

void Unk_020e27d4::func_020a3c84() {
    void *r5 = NJ::func_0209750c();
    NJ::_ZN12Unk_020a099013func_020a0990EPKch(this, (char *)"sp_npc_gatekeeper", 0x66);
    NJ::func_0206e7f8();
    NJ::_ZN12Unk_02097ff413func_02097ff4Ej(r5, 2);
    NJ::func_0204c3c0(NJ::data_021ed1a4);
    unk_9d = 0;
}

void Unk_020e27d4::func_020a3b9c() {
    switch (unk_9d) {
    case 0:
        if (NJ::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0) != 0) {
            if (NJ::data_020cbb18->func_02072e88(NJ::data_020cbb18->unk_64) != 0) {
                NJ::func_02073340();
                if (NJ::func_0209f000(this) != 0) {
                    NJ::func_0209f1c4();
                }
            }
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = NJ::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 4;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NJ::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = NJ::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.lo);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 6;
        }
        break;
    }
    case 4:
        NJ::_ZN12Unk_020e27d413func_020a1648Ev(this);
        unk_9d = 5;
        break;
    case 5:
        break;
    default:
        NJ::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        func_020a3ebc(0xd);
        break;
    }
}

void Unk_020e27d4::func_020a3b7c() {
    NJ::_ZN12Unk_020a099013func_020a0990EPKch(this, (char *)"sp_etc_sequence1", 0x28);
    NJ::func_0203ca94();
    unk_9d = 0;
}

void Unk_020a3238::func_020a3ad0() {
    switch (unk_9d) {
    case 0:
        if (NI::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0) != 0) {
            NI::func_0209cfe4();
            unk_9d = unk_9d + 1;
        }
        break;
    case 1:
        NI::func_0207ae84(NI::data_021dfd8c, 0);
        unk_9d = unk_9d + 1;
        break;
    case 2:
        NI::func_0209d70c(NI::data_021d7350, 2);
        unk_9d = unk_9d + 1;
        break;
    case 3:
        NI::func_02041ac0();
        unk_9d = unk_9d + 1;
        break;
    case 4:
        NI::func_0209d624(NI::data_021d7350);
        unk_9d = unk_9d + 1;
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 4);
        break;
    }
}

void Unk_020a3238::func_020a3ac8() {
    unk_9d = 0;
}

void Unk_020a3238::func_020a39e4() {
    switch (unk_9d) {
    case 0:
        unk_9d = 1;
        break;
    case 1:
        if (NI::func_0204198c() != 0) {
            unk_9d = 2;
        } else {
            unk_9d = 3;
        }
        break;
    case 2:
        if (NI::func_02041960() != 0) {
            unk_9d = 3;
        }
        break;
    case 3: {
        s32 r = NI::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 6;
        } else if (r != 3) {
            unk_9d = 4;
        }
        break;
    }
    case 4: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 6;
        } else if (r == 0) {
            unk_9d = 5;
        }
        break;
    }
    case 5: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 28) >> 28);
        if (r == 1) {
            unk_9d = 6;
        } else if (r == 0) {
            unk_9d = 8;
        }
        break;
    }
    case 6:
        NI::_ZN12Unk_020e27d413func_020a1648Ev(this);
        unk_9d = 7;
        break;
    case 7:
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0x10);
        break;
    }
}

void Unk_020a3238::func_020a39c8() {
    NI::_ZN12Unk_020a099013func_020a0990EPKch(this, (u32 *)"sp_etc_sequence1", 0xc);
    unk_9d = 0;
}

void Unk_020a3238::func_020a38f4() {
    switch (unk_9d) {
    case 0:
        if (NI::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0) != 0) {
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = NI::func_020a0664(this);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a0d28Ei(this, 0);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a0d28Ei(this, 1);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 4: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a0d28Ei(this, 2);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 7;
        }
        break;
    }
    case 5:
        NI::_ZN12Unk_020e27d413func_020a1648Ev(this);
        unk_9d = 6;
        break;
    case 6:
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0xc);
        break;
    }
}

void Unk_020a3238::func_020a3868() {
    Unk_020660f8 *o = NI::func_02067918(0);
    u8 *d = NI::data_021d7350;
    u8 buf[0x1c];
    s32 h = NI::func_02097868(NI::data_021d735c, NI::data_021ed3c4);
    NI::_ZN12Unk_020e1c64C1Ev(buf);
    NI::_ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(NI::_ZN12Unk_0209865c13func_0209888cEv(h), buf);
    o->func_02067a3c(0, buf);
    NI::_ZN12Unk_0209865c13func_02098a58Ev(h);
    NI::_ZN12Unk_0209da4413func_0209df30Ei(d, NI::data_021ed3c4);
    NI::_ZN12Unk_020a099013func_020a0990EPKch(this, (u32 *)"sp_etc_sequence1", 7);
    if (NI::func_020978a4(NI::data_021d735c) == 0) {
        *(u8 *)(d + 0x15e76) = 0;
    }
    unk_9d = 0;
    NI::_ZN12Unk_020e1c64D1Ev(buf);
}

void Unk_020a3238::func_020a3784() {
    switch (unk_9d) {
    case 0:
        if (NI::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0) != 0) {
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = NI::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 5;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 28) >> 28);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 4: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, 2);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 7;
        }
        break;
    }
    case 5:
        NI::_ZN12Unk_020e27d413func_020a1648Ev(this);
        unk_9d = 6;
        break;
    case 6:
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0xc);
        break;
    }
}

void Unk_020a3238::func_020a3768() {
    NI::_ZN12Unk_020a099013func_020a0990EPKch(this, (u32 *)"sp_etc_sequence3", 0x27);
    unk_9d = 0;
}

void Unk_020a3238::func_020a36a4() {
    switch (unk_9d) {
    case 0:
        if (NI::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0) != 0) {
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = NI::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 4;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 28) >> 28);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 6;
        }
        break;
    }
    case 4:
        NI::_ZN12Unk_020e27d413func_020a1648Ev(this);
        unk_9d = 5;
        break;
    case 5:
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0xf);
        break;
    }
}

void Unk_020a3238::func_020a36a0() {}

void Unk_020a3238::func_020a3674() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        NI::func_020b4bbc(NI::func_020b4934(), 1);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a3670() {}

void Unk_020a3238::func_020a3618() {
    Unk_020a3238_Vec v;
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        v.x = NI::data_020d0770.x;
        v.y = NI::data_020d0770.y;
        v.z = NI::data_020d0770.z;
        NI::func_020b4f18(NI::func_020b4934(), 0xd, &v, 0x800000, 0, 3, 2);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a3614() {}

void Unk_020a3238::func_020a35bc() {
    Unk_020a3238_Vec v;
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        v.x = NI::data_020d0788.x;
        v.y = NI::data_020d0788.y;
        v.z = NI::data_020d0788.z;
        NI::func_020b4f18(NI::func_020b4934(), 0xe, &v, 0x800000, 0, 3, 2);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a35b8() {}

void Unk_020a3238::func_020a3588() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        NI::func_020b4f58(NI::func_020b4934(), 0x2f, 3, 2);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a3584() {}

void Unk_020a3238::func_020a3518() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        s32 r = NI::func_020a0cd8();
        if (r == 4 || r == 1) {
            NI::_ZN12Unk_0209da4413func_0209df9cEv(NI::data_021d7350);
            NI::func_02097564();
            NI::func_02078370();
            NI::func_0209d70c(NI::data_021d7350, 3);
        } else {
            NI::func_0209d70c(NI::data_021d7350, 4);
        }
        NI::func_0209d624(NI::data_021d7350);
        NI::func_0207835c();
        NI::func_020b4f58(NI::func_020b4934(), 0x2c, 3, 2);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a3514() {}

void Unk_020a3238::func_020a34e4() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        NI::func_020a4414(2, 3, 0, 0);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a34e0() {}

void Unk_020a3238::func_020a347c() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (Unk_020a3238_Is2(NI::data_021c3cc0)) {
        if (o->unk_04 == 0) {
            o->func_02067958();
            if (NI::_ZN12Unk_0209da4413func_0209e170Ej(NI::data_021d7350, 0x12) != 0) {
                NI::func_020a034c();
            } else {
                NI::func_020a0340();
            }
            NI::func_020a042c();
            NI::func_020b4f58(NI::func_020b4934(), 0x2d, 3, 0);
            NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
        }
    }
}

void Unk_020a3238::func_020a3478() {}

void Unk_020a3238::func_020a340c() {
    Unk_020a3238_Vec v;
    Unk_020660f8 *o = NI::func_02067918(0);
    if (Unk_020a3238_Is2(NI::data_021c3cc0)) {
        if (o->unk_04 == 0) {
            o->func_02067958();
            NI::func_0204d5d8(NI::func_0204da0c(), &v, 0, 0);
            NI::func_020b4f18(NI::func_020b4934(), 0, &v, 0x400000, -0x8000, 3, 2);
            NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
        }
    }
}

void Unk_020a3238::func_020a3408() {}

void Unk_020a3238::func_020a33c8() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        if (NI::func_020b50e8() == 6) {
            NI::func_020b4bbc(NI::func_020b4934(), 2);
        } else {
            NI::func_020b4bbc(NI::func_020b4934(), 0);
        }
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a33c4() {}

void Unk_020a3238::func_020a3398() {
    Unk_020660f8 *o = NI::func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        NI::func_020b4bbc(NI::func_020b4934(), 2);
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    }
}

void Unk_020a3238::func_020a3390() {
    unk_9d = 0;
}

void Unk_020a3238::func_020a32fc() {
    switch (unk_9d) {
    case 0: {
        s32 r = NI::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 3;
        } else if (r != 3) {
            unk_9d = 1;
        }
        break;
    }
    case 1: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, 2);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 3:
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
        break;
    }
}

void Unk_020a3238::func_020a32e0() {
    NI::_ZN12Unk_02097ff413func_02097ff4Ej(NI::func_0209750c(this), 2);
    unk_9d = 0;
}

void Unk_020a3238::func_020a324c() {
    switch (unk_9d) {
    case 0: {
        s32 r = NI::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            unk_9d = 3;
        } else if (r != 3) {
            unk_9d = 1;
        }
        break;
    }
    case 1: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, (u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN12Unk_020a09d813func_020a1158Ei(this, 2);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 3:
        break;
    default:
        NI::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
        break;
    }
}

void Unk_020a3238::func_020a3238() {
    NI::func_0209f2d4(this, 1);
    NI::func_020b013c();
}

extern "C" void func_020a2ecc(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::func_02074d18()) {
            p->unk_9d = 1;
        }
        break;
    case 1:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (p->unk_d0 != 0) {
            p->unk_d4 = 0;
            p->unk_9d = 2;
        }
        break;
    case 2:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::func_02074ff0(&p->unk_d4)) {
            p->unk_d4 = 0;
            p->unk_9d = 3;
        }
        break;
    case 3:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::_ZN12Unk_0209f08013func_0209f080Ev(p->unk_c8)) {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            for (; r5 >= 0; r5--) {
                if (r5 != 0) {
                    u32 m = (u16)(1 << r5);
                    if (m == (m & p->unk_d0)) {
                        if (NH::func_02097444(r5 + 3) == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (!r6) {
                p->unk_9d = 4;
            }
        }
        break;
    case 4:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::func_020a03f0()) {
            NH::func_02095204(4);
            NH::func_020ed188();
            p->unk_9d = 5;
        }
        break;
    case 5:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::func_02095204(4) == 0) {
            if (NH::func_02074c4c()) {
                p->unk_9d = 6;
            }
        }
        break;
    case 6:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (p->unk_d6 != 0) {
            u32 r7 = NH::func_020eaf90();
            Unk_020cbb18 *r5 = NH::data_020cbb18;
            r5->unk_64 = r7;
            void *r6 = NH::func_020974a0(NH::func_020952e0(r5->unk_68));
            NH::MI_CpuCopy8(r6, NH::func_020974a0(r5->unk_64 + 3), 0x228c);
            NH::data_020e24ec = NH::func_020952e0(r5->unk_68);
            r5->unk_68 = r7;
            u32 cnt = 0;
            u32 zero = 0;
            s32 i = 3;
            for (; i >= 0; i--) {
                if (p->unk_d0 & (1 << i)) {
                    r5->func_02072e94(i, 1);
                    cnt = (u8)(cnt + 1);
                } else {
                    r5->func_02072e94(i, zero);
                }
            }
            r5->func_020729a8(cnt);
            NH::func_020a63bc(r7, 0xc, 1, 0, 7);
            NH::func_02095300(0, p->unk_d3);
            NH::func_02095300(r7, r7 + 3);
            NH::MI_CpuCopy8(NH::data_021ed3b4, NH::data_021d7350, 0x15fe0);
            u8 buf1[8];
            u8 buf2[8];
            NH::MI_CpuCopy8(p->unk_d8, buf1, 8);
            u32 *const r7p = &NH::data_021ed304;
            u32 r6b = NH::func_0209cb9c(r7p, buf1);
            NH::MI_CpuCopy8(p->unk_d8, buf2, 8);
            u32 h = NH::func_0209cb74(r7p, buf2);
            *r7p = r6b;
            NH::data_021ed2d0.unk_38 = h;
            if (NH::func_0204da0c()) {
                NH::func_0204da0c()->func_0204dab4();
                NH::func_0204da0c()->func_0204da24();
                NH::func_0204c6a4(NH::func_0204da0c());
            }
            NH::func_0204d42c();
            NH::func_0204d3d8();
            NH::func_020741b8(4);
            NH::func_0206daec((u8 *)((u32)NH::data_021d7350 + 0x15fa8));
            NH::func_020b8e80();
            p->unk_d2 = 1;
            r5->func_02072e28(1);
            p->unk_9d = 7;
        }
        break;
    case 7:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::func_02074cb4(NH::func_02073190())) {
            p->unk_9d = 8;
        }
        break;
    case 8:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else {
            NH::_Z13func_020720f8v();
            if (NH::func_020eaca0()) {
                NH::data_020cbb18->func_02072e28(2);
                if (NH::func_ov048_0225b8a8()) {
                    NH::func_020b4bbc(NH::func_020b4934(), 2);
                    NH::func_020b4940(NH::func_020b4934(), 3);
                } else {
                    NH::func_020b4bbc(NH::func_020b4934(), 0);
                    NH::func_020b4940(NH::func_020b4934(), 3);
                }
                NH::data_021c3cb8 = 1;
                p->unk_9d = 9;
            }
        }
        break;
    }
}

extern "C" void func_020a2e9c(Unk_020a25d8 *p) {
    NH::func_0209f2d4(p, 1);
    if (NH::data_020cbb18->unk_6c == 1) {
        NH::func_02096b74();
        NH::func_02096b74();
        NH::func_020b013c();
        NH::func_0209ec0c();
    }
}

extern "C" void func_020a2be8(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0: {
        u32 r5 = NH::func_02073190();
        r5 |= 1 << NH::func_020a5ef8();
        if (NH::func_02073090(r5)) {
            NH::func_0207312c();
        } else if (NH::func_020a5cec()) {
            p->unk_9d = 1;
        }
        break;
    }
    case 1:
    case 2: {
        u32 r5 = NH::func_02073190();
        r5 |= 1 << NH::func_020a5ef8();
        if (NH::func_02073090(r5)) {
            NH::func_0207312c();
        } else {
            NH::_ZN12Unk_0209f30413func_0209f390EPhjjj(p, &p->unk_9d, 1, 0xd, 0x2f);
            if (p->unk_9d > 2) {
                NH::func_020a63bc(NH::data_021ed3a8, 0xc, 1, 0, 7);
                Unk_020cbb18 *g = NH::data_020cbb18;
                g->func_020729a8((u8)(g->unk_6c + 1));
                g->func_02072e94(NH::data_021ed3a8, 1);
                NH::func_020741b8(NH::data_021ed3a8);
            }
        }
        break;
    }
    case 3:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::func_02075170((u16)(1 << NH::data_021ed3a8))) {
            p->unk_9d = 4;
        }
        break;
    case 4:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::func_02076744(NH::data_021ed3a8)) {
            p->unk_9d = 5;
        }
        break;
    case 5:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::func_02074df4((u16)(1 << NH::data_021ed3a8))) {
            p->unk_d4 = 0;
            p->unk_9d = 6;
        }
        break;
    case 6:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::func_02074e50(&p->unk_d4, (u16)(1 << NH::data_021ed3a8))) {
            p->unk_9d = 7;
        }
        break;
    case 7:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::func_02074a94(NH::data_021ed3a8)) {
            NH::_ZN12Unk_0209f08013func_0209f08cEj(p->unk_c8, 1);
            p->unk_d4 = 0;
            p->unk_9d = 8;
        }
        break;
    case 8:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::_ZN12Unk_0209f08013func_0209f080Ev(p->unk_c8)) {
            NH::DC_FlushAll();
            if (NH::func_02075078(&p->unk_d4, (u16)(1 << NH::data_021ed3a8))) {
                p->unk_9d = 9;
            }
        }
        break;
    case 9:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (p->unk_d5 != 0) {
            if (NH::func_02074bc8((u16)(1 << NH::data_021ed3a8))) {
                p->unk_9d = 10;
            }
        }
        break;
    case 10:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else {
            NH::_Z13func_020720f8v();
            if (NH::func_020eaca0()) {
                if (p->unk_e0 != 0) {
                    NH::data_020cbb18->func_02072e28(2);
                    p->unk_d2 = 1;
                    NH::func_0209ec60(NH::data_021ed3a8);
                    p->unk_9d = 11;
                }
            }
        }
        break;
    }
}

extern "C" void func_020a2bdc(Unk_020a25d8 *p) {
    NH::func_0209f2d4(p, 1);
}

extern "C" void func_020a2ae4(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::data_020cbb18->func_02072e24() == 1) {
            NH::func_020a63bc(NH::data_021ed3a8, 0xc, 1, 0, 7);
            Unk_020cbb18 *g = NH::data_020cbb18;
            g->func_020729a8((u8)(g->unk_6c + 1));
            g->func_02072e94(NH::data_021ed3a8, 1);
            NH::func_020741b8(NH::data_021ed3a8);
            p->unk_9d = 1;
        }
        break;
    case 1:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::func_02074e80(&p->unk_d4, (u16)(1 << NH::data_021ed3a8))) {
            p->unk_9d = 2;
        }
        break;
    case 2:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else {
            NH::_Z13func_020720f8v();
            if (NH::func_020eaca0()) {
                if (p->unk_e0 != 0) {
                    NH::data_020cbb18->func_02072e28(2);
                    p->unk_d2 = 1;
                    p->unk_9d = 3;
                }
            }
        }
        break;
    }
}

extern "C" void func_020a2abc(Unk_020a25d8 *p) {
    NH::func_0209f2d4(p, 0);
    NH::_ZN12Unk_02097ff413func_0209801cEj(NH::func_0209750c(), 2);
    NH::func_020a5ee8(NH::data_020cbb18->unk_64);
}

extern "C" void func_020a2908(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::_ZN12Unk_020e27d413func_020a15c8Ej(p, 0)) {
            p->unk_ce = NH::func_02073168();
            p->unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else {
            NH::_ZN12Unk_0209f30413func_0209f304EPhj(p, &p->unk_9d, 1);
        }
        break;
    case 3:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (NH::_ZN12Unk_020e27d413func_020a1470Ej(p, NH::data_020cbb18->unk_64)) {
            NH::_ZN12Unk_020e27d413func_020a14acEv(p);
            p->unk_9d = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        NH::_ZN12Unk_0209f30413func_0209f430EPhjjhhhj(p, &p->unk_9d, 4, 0xe, 0x14, 1, 0, 1);
        break;
    case 12:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = NH::data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (g->func_02072d44(r5)) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (NH::func_020749cc()) {
                    p->unk_9d = 0xd;
                }
            }
        }
        break;
    case 13:
        if (NH::func_02073090(1)) {
            NH::func_0207312c();
        } else if (p->unk_e1 != 0) {
            NH::func_020a0088(p, NH::data_020e24ec, 0);
            NH::data_020e24ec = 7;
            NH::func_0209f1c4();
            NH::func_020b8e80();
            p->unk_9d = 0x19;
        }
        break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
        NH::func_0209f898(p, &p->unk_9d, 0xe, 0x14, 1, 1);
        break;
    default:
        NH::_ZN12Unk_020e27d413func_020a15f8Ev(p);
        NH::_ZN12Unk_020e27d413func_020a3ebcEi(p, 8);
        break;
    }
}

extern "C" void func_020a28fc(Unk_020a25d8 *p) {
    NH::func_0209f2d4(p, 0);
}

extern "C" void func_020a25e4(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::_ZN12Unk_020e27d413func_020a15c8Ej(p, 0)) {
            p->unk_ce = NH::func_02073168();
            NH::func_0209fffc(p);
            NH::func_0209ff4c(p);
            p->unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else {
            NH::_ZN12Unk_0209f30413func_0209f390EPhjjj(p, &p->unk_9d, 1, 0x2e, 0x2e);
        }
        break;
    case 3:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::_ZN12Unk_0209f30413func_0209f344Ev(p)) {
            p->unk_9d = 4;
        }
        break;
    case 4:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else if (NH::func_0209fb48(p)) {
            s32 r5 = NH::func_020a5ef8();
            u32 r7 = NH::_ZN12Unk_020e27d413func_020a1484Ej(p, r5);
            void *r6 = NH::func_0208f0b0(r5);
            NH::MI_CpuCopy8(r6, NH::func_0208f0b0(r7), 0x84c);
            NH::func_0208f1dc(r6);
            NH::_ZN12Unk_020e27d413func_020a14acEv(p);
            NH::func_0209ec20((u8)r5);
            p->unk_9d = 5;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        u32 t = NH::func_02073190();
        NH::func_0209f638(p, &p->unk_9d, 1, 5, 0xf, 0x15, 4, 1, t);
        break;
    }
    case 12:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = NH::data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (p->unk_f8[r5] == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (g->func_02072d44(NH::func_020a5ef8())) {
                    r6 = FALSE;
                }
            }
            if (r6) {
                if (NH::func_02074960((u16)(1 << NH::func_020a5ef8()))) {
                    p->unk_9d = 0xd;
                }
            }
        }
        break;
    case 13: {
        u32 r5 = NH::func_02073190();
        r5 ^= (u16)(1 << NH::func_020a5ef8());
        if (NH::func_02073090(r5)) {
            NH::func_0207312c();
        } else {
            NH::_Z13func_020720f8v();
            if (NH::func_020eaca0() || NH::func_020eb004() <= 1) {
                NH::func_02073e14(NH::func_020a5ef8());
                Unk_020cbb18 *g = NH::data_020cbb18;
                g->func_02072e28(2);
                if (g->func_02072e44()) {
                    u8 b = NH::func_020a5ef8();
                    g = NH::data_020cbb18;
                    g->func_020728d4();
                    g->func_020728a4(&b, 1);
                    g->func_02072824(5, 5);
                }
                p->unk_9d = 0xe;
            }
        }
        break;
    }
    case 14:
        if (NH::func_02073090(NH::func_02073190())) {
            NH::func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = NH::data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (p->unk_f0[r5] == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                NH::func_020b8e80();
                g = NH::data_020cbb18;
                g->func_020728d4();
                g->func_02072824(7, 5);
                if (g->unk_6c == 1) {
                    NH::func_02045e98();
                }
                p->unk_9d = 0x1a;
            }
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        NH::func_0209f898(p, &p->unk_9d, 0xf, 0x15, NH::func_02073190(), 1);
        break;
    default:
        NH::_ZN12Unk_020e27d413func_020a15f8Ev(p);
        NH::_ZN12Unk_020e27d413func_020a3ebcEi(p, 10);
        break;
    }
}

extern "C" void func_020a25d8(Unk_020a25d8 *p) {
    NH::func_0209f2d4(p, 0);
}

void Unk_020a1c88::func_020a2408() {
    switch (unk_9d) {
    case 0:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (NG::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0)) {
            unk_ce = NG::func_02073168();
            unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else {
            NG::_ZN12Unk_0209f30413func_0209f304EPhj(this, &unk_9d, 1);
        }
        break;
    case 3:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (NG::_ZN12Unk_020e27d413func_020a1470Ej(this, NG::data_020cbb18->unk_64)) {
            NG::_ZN12Unk_020e27d413func_020a14acEv(this);
            unk_9d = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        NG::_ZN12Unk_0209f30413func_0209f430EPhjjhhhj(this, &unk_9d, 4, 0xf, 0x15, 1, 1, 1);
        break;
    case 12:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else {
            BOOL r5 = TRUE;
            if (NG::data_020cbb18->func_02072d44(NG::func_020a5ef8())) {
                r5 = FALSE;
            }
            if (r5) {
                if (NG::func_020749cc()) {
                    unk_9d = 0xd;
                }
            }
        }
        break;
    case 13:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else {
            NG::_Z13func_020720f8v();
            if (NG::func_020eaca0()) {
                u32 t = NG::func_02073168();
                if (unk_ce != t) {
                    Unk_020cbb18 *r5;
                    NG::func_020a5c94(NG::func_020a5ef8());
                    r5 = NG::data_020cbb18;
                    r5->func_02072e28(2);
                    r5->func_020728d4();
                    r5->func_02072824(6, 0);
                    unk_9d = 0xe;
                }
            }
        }
        break;
    case 14:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (unk_e2) {
            NG::func_020b8e80();
            unk_9d = 0x1a;
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        NG::func_0209f898(this, &unk_9d, 0xf, 0x15, 1, 1);
        break;
    default:
        NG::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0xa);
        break;
    }
}

void Unk_020a1c88::func_020a2400() {
    NG::func_0209f294(this);
}

void Unk_020a1c88::func_020a20ac() {
    switch (unk_9d) {
    case 0:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else if (NG::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0)) {
            if (NG::func_0209f23c()) {
                NG::func_0209ff8c(this);
                NG::func_0209fefc(this);
            }
            unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else {
            NG::_ZN12Unk_0209f30413func_0209f390EPhjjj(this, &unk_9d, 1, 0x2e, 0x2e);
        }
        break;
    case 3:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else if (NG::_ZN12Unk_0209f30413func_0209f344Ev(this)) {
            unk_9d = 4;
        }
        break;
    case 4:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else if (NG::func_0209f23c()) {
            if (NG::func_0209fb48(this)) {
                s32 r5 = NG::_ZN12Unk_020e27d413func_020a1484Ej(this, 0);
                if (r5 < 4) {
                    void *dst = NG::func_0208f0b0(0);
                    void *src = NG::func_0208f0b0(r5);
                    NG::MI_CpuCopy8(src, dst, 0x84c);
                } else {
                    NG::func_0208f1dc(NG::func_0208f0b0(0));
                }
                for (r5 = 2; r5 >= 0; r5--) {
                    NG::func_0208f1dc(NG::func_0208f0b0(r5 + 1));
                }
                NG::_ZN12Unk_020e27d413func_020a14acEv(this);
                unk_9d = 5;
            }
        } else {
            unk_9d = 5;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        BOOL r5;
        if (NG::func_0209f23c()) r5 = TRUE; else r5 = FALSE;
        NG::func_0209f638(this, &unk_9d, 1, 5, 0x10, 0x16, 4, r5, NG::func_02073190());
        break;
    }
    case 12:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else {
            NG::_Z13func_020720f8v();
            if (NG::func_020eaca0()) {
                if (!NG::func_0209f23c()) {
                    NG::data_020cbb18->func_02072e28(2);
                    unk_9d = 0xe;
                } else {
                    unk_9d = 0xd;
                }
            }
        }
        break;
    case 14:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else {
            Unk_020cbb18 *r5 = NG::data_020cbb18;
            r5->func_020728d4();
            r5->func_02072824(7, 5);
            unk_9d = 0x1b;
        }
        break;
    case 13:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *r7 = NG::data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (r7->func_02072e88(r5)) {
                    if (!r7->func_020729cc(r5)) {
                        if (!unk_f8[r5]) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                for (r5 = 3; r5 >= 0; r5--) {
                    if (r7->func_02072e88(r5)) {
                        if (!r7->func_020729cc(r5)) {
                            if (r7->func_02072d44(r5)) {
                                r6 = FALSE;
                                break;
                            }
                        }
                    }
                }
            }
            if (r6) {
                if (NG::func_02074960(NG::func_02073190())) {
                    unk_9d = 0xf;
                }
            }
        }
        break;
    case 15:
        if (NG::func_02073090(NG::func_02073190())) {
            NG::func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5;
            Unk_020cbb18 *r7;
            NG::func_020741b0();
            r5 = 3;
            r7 = NG::data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (r7->func_02072e88(r5)) {
                    if (!r7->func_020729cc(r5)) {
                        if (!unk_f0[r5]) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            NG::func_020741a8();
            if (r6) {
                NG::func_020a0088(this, 7, 1);
                NG::func_0209f1c4();
                unk_9d = 0x1b;
            }
        }
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        NG::func_0209f898(this, &unk_9d, 0x10, 0x16, NG::func_02073190(), 1);
        break;
    default: {
        u8 b;
        NG::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        if (NG::func_0209f23c()) {
            b = 6;
            NG::func_02067918(0)->func_02067a84(&b, (u8 *)"sp_etc_sequence2");
        }
        NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 8);
        break;
    }
    }
}

void Unk_020a1c88::func_020a20a4() {
    NG::func_0209f294(this);
}

void Unk_020a1c88::func_020a1e14() {
    switch (unk_9d) {
    case 0:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (NG::_ZN12Unk_020e27d413func_020a15c8Ej(this, 0)) {
            unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else {
            NG::_ZN12Unk_0209f30413func_0209f304EPhj(this, &unk_9d, 1);
        }
        break;
    case 3:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (NG::func_0209f23c()) {
            if (NG::_ZN12Unk_020e27d413func_020a1470Ej(this, NG::data_020cbb18->unk_64)) {
                NG::_ZN12Unk_020e27d413func_020a14acEv(this);
                unk_9d = 4;
            }
        } else {
            unk_9d = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        BOOL a, b;
        if (NG::func_0209f23c()) a = FALSE; else a = TRUE;
        if (NG::func_0209f23c()) b = TRUE; else b = FALSE;
        NG::_ZN12Unk_0209f30413func_0209f430EPhjjhhhj(this, &unk_9d, 4, 0x11, 0x17, b, a, 1);
        break;
    }
    case 12:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else {
            NG::_Z13func_020720f8v();
            if (NG::func_020eaca0()) {
                if (!NG::func_0209f23c()) {
                    unk_9d = 0xd;
                } else {
                    unk_9d = 0xe;
                }
            }
        }
        break;
    case 13:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (unk_e2) {
            NG::data_020cbb18->func_02072e28(2);
            unk_9d = 0x1c;
        }
        break;
    case 14:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = NG::data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (g->func_02072d44(r5)) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (NG::func_020749cc()) {
                    unk_9d = 0xf;
                }
            }
        }
        break;
    case 15:
        if (NG::func_02073090(1)) {
            NG::func_0207312c();
        } else if (unk_e1) {
            if (NG::func_020748fc()) {
                NG::data_020cbb18->func_02072368(2);
                unk_9d = 0x10;
            }
        }
        break;
    case 16:
        NG::_Z13func_020720f8v();
        if (!NG::func_020eb650()) {
            NG::func_020a0088(this, NG::data_020e24ec, 0);
            NG::func_0209f1c4();
            NG::data_020e24ec = 7;
            unk_9d = 0x1c;
        }
        break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        NG::func_0209f898(this, &unk_9d, 0x11, 0x17, 1, 1);
        break;
    default: {
        u8 b;
        NG::_ZN12Unk_020e27d413func_020a15f8Ev(this);
        if (NG::func_0209f23c()) {
            b = 6;
            NG::func_02067918(0)->func_02067a84(&b, (u8 *)"sp_etc_sequence2");
            NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0x11);
        } else {
            NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 8);
        }
        break;
    }
    }
}

void Unk_020a1c88::func_020a1e04() {
    NG::_ZN12Unk_020a099013func_020a0990EPKch(this, (u8 *)"sp_etc_sequence1", 0x23);
}

void Unk_020a1c88::func_020a1de4() {
    if (NG::_ZN12Unk_020e27d413func_020a15c8Ej(this, 1)) {
        NG::func_0209f204();
        NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0x1d);
    }
}

void Unk_020a1c88::func_020a1d74() {
    u8 buf[16];
    unk_cc = 0x258;
    NG::func_02073bf8(1, 2, 0);
    NG::func_020733b0();
    NG::MI_CpuCopy8(NG::func_02063964(NG::data_021d7352), buf, 8);
    buf[9] = 1;
    buf[8] = 0;
    if (NG::_ZN12Unk_0209da4413func_0209e1a0Ev(NG::data_021d7350) == 0) {
        buf[8] = 1;
    }
    NG::_Z13func_0207217cv();
    NG::func_020ea720(buf, 10);
    unk_fe = NG::func_020977a0(NG::data_021d735c);
}

void Unk_020a1c88::func_020a1cb8() {
    u8 b[2];
    s32 n = NG::func_020a0210(this);
    if (n > 0 && n < 4) {
        Unk_020660f8 *p = NG::func_02067918(0);
        p->func_02067990();
        p->func_02067a6c();
        b[0] = 0x26;
        p->func_02067a84(&b[0], (u8 *)"sp_etc_sequence1");
        NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
    } else {
        BOOL ok = FALSE;
        if (NG::func_020eb004() == 2) {
            unk_cc = ok;
            return;
        }
        if (NG::func_020eb004() == 1) {
            if (NG::func_020e7500(&unk_cc) == 0) {
                ok = TRUE;
            } else {
                NG::func_020733bc();
            }
        } else {
            ok = TRUE;
        }
        if (ok) {
            if (NG::func_0209f000(this)) {
                NG::func_0209f1c4();
            }
            Unk_020660f8 *p = NG::func_02067918(0);
            b[1] = 0x25;
            p->func_02067a84(&b[1], (u8 *)"sp_etc_sequence1");
            p->func_02067990();
            p->func_02067a6c();
            NG::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0xc);
        }
    }
}

void Unk_020a1c88::func_020a1c88() {
    unk_9d = 0;
    if (NG::_ZN12Unk_0209da4413func_0209e1a0Ev(NG::data_021d7350) == 0) {
        unk_107 = 1;
    } else {
        unk_107 = 0;
    }
}

void Unk_020e27d4::func_020a1974() {
    switch (unk_9d) {
    case 0:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else if (func_020a15c8(0)) {
            unk_9d = 1;
        }
        break;
    case 1:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else {
            s32 r = NF::func_020a0210();
            if (r > 0) {
                if (r < 4) {
                    unk_9d = 2;
                }
            }
        }
        break;
    case 2:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else if (unk_fd != 0) {
            if (unk_107 == 0) {
                NF::func_0209d70c(NF::data_021d7350, 5);
                NF::func_0209d624(NF::data_021d7350);
            } else {
                NF::_ZN12Unk_0209da4413func_0209e148Ej(NF::data_021d7350, 0x12);
            }
            NF::func_0203ca94();
            unk_9d = 3;
        }
        break;
    case 3:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else {
            s32 r = NF::_ZN12Unk_020a09d813func_020a1158Ei(this, 2);
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r == 0) {
                unk_9d = 4;
            }
        }
        break;
    case 4:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else {
            s32 r = func_020a13c4();
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r != 3) {
                NF::_ZN12Unk_0209ea5013func_0209eb74Ev(NF::data_021ed32c);
                unk_9d = 5;
            }
        }
        break;
    case 5:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else {
            s32 r = NF::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r == 0) {
                unk_9d = 6;
            }
        }
        break;
    case 6:
        if (NF::func_02073090(-1)) {
            NF::func_0207312c();
        } else {
            u32 t = unk_eb[NF::func_020a0210()];
            if (t == 1) {
                NF::_ZN12Unk_0209ea5013func_0209eb6cEv(NF::data_021ed32c);
                unk_eb[NF::func_020a0210()] = 0;
                NF::data_020cbb18->func_02072368(2);
                unk_9d = 7;
            } else if (t == 2) {
                unk_9d = 0x11;
            }
        }
        break;
    case 7: {
        NF::func_02073090(-1);
        s32 r = NF::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
        if (r == 1) {
            NF::data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            unk_9d = 8;
        }
        break;
    }
    case 8:
        if (NF::func_02073090(-1)) {
            NF::_ZN12Unk_0209ea5013func_0209eb74Ev(NF::data_021ed32c);
            unk_9d = 0xa;
        } else {
            s32 i = NF::func_020a0210();
            if (NF::func_02074b58(1, (u16)(1 << i))) {
                NF::data_020cbb18->func_02072368(0);
                unk_9d = 9;
            }
        }
        break;
    case 9: {
        u32 m = NF::func_020eaf28();
        if ((m & (1 << NF::func_020a0210())) == 0) {
            if (NF::func_0209f000(this)) {
                NF::func_0209f1c4();
            }
            unk_9d = 0x16;
        }
        break;
    }
    case 10: {
        NF::func_02073090(-1);
        s32 r = NF::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
        if (r == 1) {
            NF::data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            NF::data_020cbb18->func_02072368(0);
            unk_9d = 0x11;
        }
        break;
    }
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21: {
        s32 i = NF::func_020a0210();
        NF::func_0209f898(this, &unk_9d, 0xb, 0x11, (u16)(1 << i), 1);
        break;
    }
    default:
        func_020a15f8();
        NF::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0xe);
        break;
    }
}

void Unk_020e27d4::func_020a1950() {
    NF::func_020eaf90(NF::_ZN12Unk_02097ff413func_02097ff4Ej(NF::func_0209750c(), 2));
    NF::func_02073348();
    unk_9d = 0;
}

void Unk_020e27d4::func_020a167c() {
    switch (unk_9d) {
    case 0:
        if (NF::func_02073090(1)) {
            NF::func_0207312c();
        } else if (NF::func_02074894()) {
            unk_9d = 1;
        }
        break;
    case 1:
        if (NF::func_02073090(1)) {
            NF::func_0207312c();
        } else if (NF::func_02074860(&unk_d4)) {
            unk_d4 = 0;
            unk_9d = 2;
        }
        break;
    case 2:
        if (NF::func_02073090(1)) {
            NF::func_0207312c();
        } else if (NF::func_02074828(&unk_d4)) {
            unk_d4 = 0;
            unk_9d = 3;
        }
        break;
    case 3:
        if (NF::func_02073090(1)) {
            NF::func_0207312c();
        } else if (NF::func_020747c0()) {
            unk_9d = 4;
        }
        break;
    case 4:
        if (NF::func_02073090(1)) {
            NF::func_0207312c();
        } else if (NF::func_020eaca0(NF::_Z13func_020720f8v())) {
            NF::func_0208a570()->func_0208aa30();
            NF::MI_CpuCopy8(NF::func_0209750c(), unk_b8, 0x228c);
            NF::_ZN12Unk_0209865c13func_02098a58Ev(NF::func_0209750c());
            NF::_ZN12Unk_0209da4413func_0209df30Ei(NF::data_021d7350, NF::func_020974f8());
            unk_9d = 5;
        }
        break;
    case 5:
        if (NF::func_02073090(1)) {
            NF::func_0207312c();
        } else {
            s32 r = func_020a13c4();
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r != 3) {
                NF::data_020cbb18->func_02072368(2);
                unk_9d = 6;
            }
        }
        break;
    case 6: {
        NF::func_02073090(1);
        s32 r = NF::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
        if (r == 1) {
            NF::data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            unk_9d = 7;
        }
        break;
    }
    case 7:
        if (NF::func_02073090(1)) {
            NF::_ZN12Unk_0209ea5013func_0209eb74Ev(NF::data_021ed32c);
            unk_9d = 0xa;
        } else if (NF::func_02074b58(1, 1)) {
            unk_9d = 8;
        }
        break;
    case 8:
        if (NF::func_02073090(1)) {
            NF::_ZN12Unk_0209ea5013func_0209eb74Ev(NF::data_021ed32c);
            unk_9d = 0xa;
        } else if (NF::func_020eaca0(NF::_Z13func_020720f8v())) {
            u32 t = unk_eb[0];
            if (t == 1) {
                NF::data_020cbb18->func_02072368(0);
                unk_9d = 9;
            } else if (t == 2) {
                NF::_ZN12Unk_0209ea5013func_0209eb74Ev(NF::data_021ed32c);
                unk_9d = 0xa;
            }
        }
        break;
    case 9:
        if (NF::func_0209f000(this)) {
            NF::func_0209f1c4();
        }
        NF::MI_CpuCopy8(unk_b8, NF::func_0209750c(), 0x228c);
        NF::func_0208a570()->func_0208aa28();
        unk_9d = 0x16;
        break;
    case 10: {
        NF::func_02073090(1);
        s32 r = NF::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a.hi);
        if (r == 1) {
            NF::data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            NF::data_020cbb18->func_02072368(0);
            unk_9d = 0x11;
        }
        break;
    }
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
        NF::func_0209f898(this, &unk_9d, 0xb, 0x11, 1, 1);
        break;
    default:
        NF::_ZN12Unk_020e27d413func_020a3ebcEi(this, 0);
        break;
    }
}

void Unk_020e27d4::func_020a1648() {
    u8 b;
    void *o = NF::func_02067918(0);
    NF::_ZN12Unk_020660f813func_02067990Ev(o);
    NF::_ZN12Unk_020660f813func_02067a6cEv(o);
    b = 0xa;
    NF::_ZN12Unk_020660f813func_02067a84EPhPv(o, &b, (u8 *)"sp_etc_sequence2");
}

void Unk_020e27d4::func_020a1614() {
    u8 b;
    void *o = NF::func_02067918(0);
    NF::_ZN12Unk_020660f813func_02067990Ev(o);
    NF::_ZN12Unk_020660f813func_02067a6cEv(o);
    b = 0xb;
    NF::_ZN12Unk_020660f813func_02067a84EPhPv(o, &b, (u8 *)"sp_etc_sequence2");
}

void Unk_020e27d4::func_020a15f8() {
    void *o = NF::func_02067918(0);
    NF::_ZN12Unk_020660f813func_02067990Ev(o);
    NF::_ZN12Unk_020660f813func_02067a6cEv(o);
}

BOOL Unk_020e27d4::func_020a15c8(u32 v) {
    void *o = NF::func_02067918(0);
    if (((u32 *)o)[1] == 2) {
        if (v != 0) {
            NF::_ZN12Unk_020660f813func_0206799cEv(o, 1);
        } else {
            NF::_ZN12Unk_020660f813func_0206799cEv(o, 0);
        }
        return TRUE;
    }
    return FALSE;
}

Unk_020e2824::Unk_020e2824() {
}

Unk_020e2824::~Unk_020e2824() {
}

void Unk_020e2824::func_020a1574(u32 v) {
    unk_44 = v;
}

void Unk_020e2824::vfunc_14() {
    void *o = NF::func_02067918(0);
    switch (((u8 *)unk_04)[0x1a]) {
    case 0xa:
        NF::_ZN12Unk_020660f813func_02067a78Ev(o);
        break;
    case 8:
        NF::_ZN12Unk_020660f813func_02067a84EPhPv(o, NF::data_021edb5c, 0);
        break;
    case 0x27:
        NF::_ZN12Unk_020660f813func_02067a84EPhPv(o, NF::data_021edb5c, 0);
        break;
    case 0x26:
        NF::_ZN12Unk_020660f813func_02067a78Ev(o);
        NF::_ZN12Unk_020e27d413func_020a3ebcEi((void *)unk_44, 0x1e);
        break;
    case 0x69:
        NF::_ZN12Unk_020660f813func_02067a84EPhPv(o, NF::data_021edb5c, 0);
        break;
    }
}

void Unk_020e2824::vfunc_18() {
}

extern "C" void func_020a14d8(void) {
    void *o = NF::func_0209750c();
    NF::MI_CpuCopy8(o, (void *)NF::func_020974a0(NF::data_020e24ec), 0x228c);
}

void Unk_020e27d4::func_020a14ac() {
    u8 *const g = NF::data_021e7f8c;
    NF::_ZN12Unk_0208f23813func_0208f174Ev(g);
    Unk_020a14ac_Ns::MI_CpuCopy8(g, unk_bc, 0x84c);
}

void Unk_020e27d4::func_020a1494() {
    NF::MI_CpuCopy8(unk_bc, NF::data_021e7f8c, 0x84c);
}

u32 Unk_020e27d4::func_020a148c() {
    return unk_fe;
}

u32 Unk_020e27d4::func_020a1484(u32 i) {
    return unk_ff[i];
}

void Unk_020e27d4::func_020a147c(u32 i, u8 v) {
    unk_ff[i] = v;
}

u32 Unk_020e27d4::func_020a1470(u32 i) {
    return unk_103[i];
}

void Unk_020e27d4::func_020a1464(u32 i, u8 v) {
    unk_103[i] = v;
}

Unk_0203ecdc data_021ed51c;

Unk_0203ec54 data_021ed448;

Unk_02087224 data_021ed824;

Unk_020e27d4_Ent data_021ed624[32] = {
    {*(Unk_020e27d4_Fn *)data_020e273c, *(Unk_020e27d4_Fn *)data_020e2734},
    {*(Unk_020e27d4_Fn *)data_020e25bc, *(Unk_020e27d4_Fn *)data_020e2724},
    {*(Unk_020e27d4_Fn *)data_020e271c, *(Unk_020e27d4_Fn *)data_020e25ac},
    {*(Unk_020e27d4_Fn *)data_020e2574, *(Unk_020e27d4_Fn *)data_020e2704},
    {*(Unk_020e27d4_Fn *)data_020e26fc, *(Unk_020e27d4_Fn *)data_020e26f4},
    {*(Unk_020e27d4_Fn *)data_020e26ec, *(Unk_020e27d4_Fn *)data_020e26e4},
    {*(Unk_020e27d4_Fn *)data_020e26dc, *(Unk_020e27d4_Fn *)data_020e259c},
    {*(Unk_020e27d4_Fn *)data_020e25cc, *(Unk_020e27d4_Fn *)data_020e26c4},
    {*(Unk_020e27d4_Fn *)data_020e26bc, *(Unk_020e27d4_Fn *)data_020e26b4},
    {*(Unk_020e27d4_Fn *)data_020e26ac, *(Unk_020e27d4_Fn *)data_020e26a4},
    {*(Unk_020e27d4_Fn *)data_020e269c, *(Unk_020e27d4_Fn *)data_020e2694},
    {*(Unk_020e27d4_Fn *)data_020e2654, *(Unk_020e27d4_Fn *)data_020e266c},
    {*(Unk_020e27d4_Fn *)data_020e2674, *(Unk_020e27d4_Fn *)data_020e2684},
    {*(Unk_020e27d4_Fn *)data_020e268c, *(Unk_020e27d4_Fn *)data_020e270c},
    {*(Unk_020e27d4_Fn *)data_020e2714, *(Unk_020e27d4_Fn *)data_020e2744},
    {*(Unk_020e27d4_Fn *)data_020e274c, *(Unk_020e27d4_Fn *)data_020e2644},
    {*(Unk_020e27d4_Fn *)data_020e263c, *(Unk_020e27d4_Fn *)data_020e2634},
    {*(Unk_020e27d4_Fn *)data_020e253c, *(Unk_020e27d4_Fn *)data_020e2624},
    {*(Unk_020e27d4_Fn *)data_020e2504, *(Unk_020e27d4_Fn *)data_020e250c},
    {*(Unk_020e27d4_Fn *)data_020e2514, *(Unk_020e27d4_Fn *)data_020e2604},
    {*(Unk_020e27d4_Fn *)data_020e25fc, *(Unk_020e27d4_Fn *)data_020e25f4},
    {*(Unk_020e27d4_Fn *)data_020e25ec, *(Unk_020e27d4_Fn *)data_020e2534},
    {*(Unk_020e27d4_Fn *)data_020e25dc, *(Unk_020e27d4_Fn *)data_020e2554},
    {*(Unk_020e27d4_Fn *)data_020e2564, *(Unk_020e27d4_Fn *)data_020e25c4},
    {*(Unk_020e27d4_Fn *)data_020e256c, *(Unk_020e27d4_Fn *)data_020e25b4},
    {*(Unk_020e27d4_Fn *)data_020e257c, *(Unk_020e27d4_Fn *)data_020e25a4},
    {*(Unk_020e27d4_Fn *)data_020e2584, *(Unk_020e27d4_Fn *)data_020e2594},
    {*(Unk_020e27d4_Fn *)data_020e25d4, *(Unk_020e27d4_Fn *)data_020e2614},
    {*(Unk_020e27d4_Fn *)data_020e261c, *(Unk_020e27d4_Fn *)data_020e264c},
    {*(Unk_020e27d4_Fn *)data_020e265c, *(Unk_020e27d4_Fn *)data_020e267c},
    {*(Unk_020e27d4_Fn *)data_020e26cc, *(Unk_020e27d4_Fn *)data_020e272c},
    {*(Unk_020e27d4_Fn *)data_020e2754, *(Unk_020e27d4_Fn *)data_020e2544},
};

void *data_020e2654[2] = {(void *)NT::_ZN12Unk_020a323813func_020a35b8Ev, 0};

u8 data_021ed390;

Unk_020e27d4 *data_021ed3b0;

void *data_020e2674[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3584Ev, 0};

u8 data_021ed3a8;

void *data_020e2574[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3b7cEv, 0};

char *data_020e24f8 = data_020e24f0;

void *data_020e2624[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3398Ev, 0};

char data_020e2790[] = "forest_mail_USA.bin";

char data_020e24f0[] = "us";

void *data_020e250c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a32fcEv, 0};

void *data_020e2514[2] = {(void *)NT::_ZN12Unk_020a323813func_020a32e0Ev, 0};

void *data_020e256c[2] = {(void *)NT::func_020a28fc, 0};

void *data_020e25d4[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a20a4Ev, 0};

void *data_020e2754[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a1950Ev, 0};

void *data_020e25cc[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3768Ev, 0};

s32 data_021ed3c8;

u8 data_021ed3ac[3];

const Unk_020a3238_Vec data_020d0770 = {0x10000, 0, 0x5000};

void *data_020e272c[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a1974Ev, 0};

void *data_020e2724[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3cc4Ev, 0};

void *data_020e271c[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3c84Ev, 0};

void *data_020e257c[2] = {(void *)NT::func_020a25d8, 0};

void *data_020e2584[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a2400Ev, 0};

void *data_020e2704[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3ad0Ev, 0};

void *data_020e26fc[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3ac8Ev, 0};

void *data_020e26f4[2] = {(void *)NT::_ZN12Unk_020a323813func_020a39e4Ev, 0};

void *data_020e2594[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a20acEv, 0};

void *data_020e26e4[2] = {(void *)NT::_ZN12Unk_020a323813func_020a38f4Ev, 0};

u8 data_021ed39c;

u8 data_021ed3a0;

void *data_020e26cc[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a1c88Ev, 0};

void *data_020e26c4[2] = {(void *)NT::_ZN12Unk_020a323813func_020a36a4Ev, 0};

void *data_020e26bc[2] = {(void *)NT::_ZN12Unk_020a323813func_020a36a0Ev, 0};

void *data_020e26b4[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3674Ev, 0};

void *data_020e26ac[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3670Ev, 0};

void *data_020e26a4[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3618Ev, 0};

void *data_020e269c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3614Ev, 0};

void *data_020e2694[2] = {(void *)NT::_ZN12Unk_020a323813func_020a35bcEv, 0};

void *data_020e268c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3514Ev, 0};

void *data_020e267c[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a1cb8Ev, 0};

void *data_021ed3b4;

void *data_020e2684[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3518Ev, 0};

Unk_0209fb48_V3 data_020e2770 = {4, 4, 4};

void *data_020e26ec[2] = {(void *)NT::_ZN12Unk_020a323813func_020a39c8Ev, 0};

void *data_020e270c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a34e4Ev, 0};

void *data_020e273c[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3eb8Ev, 0};

void *data_020e2744[2] = {(void *)NT::_ZN12Unk_020a323813func_020a347cEv, 0};

void *data_020e2644[2] = {(void *)NT::_ZN12Unk_020a323813func_020a340cEv, 0};

void *data_020e263c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3408Ev, 0};

void *data_020e2634[2] = {(void *)NT::_ZN12Unk_020a323813func_020a33c8Ev, 0};

void *data_020e253c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a33c4Ev, 0};

void *data_020e261c[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a1e04Ev, 0};

const s32 data_020d0764[3] = {0x15fe0, 0x15fe0, 0x11df4};

void *data_020e2614[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a1e14Ev, 0};

char data_020e277c[] = "forest_bbs_USA.bin";

void *data_020e2604[2] = {(void *)NT::_ZN12Unk_020a323813func_020a324cEv, 0};

void *data_020e25fc[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3238Ev, 0};

void *data_020e25f4[2] = {(void *)NT::func_020a2ecc, 0};

void *data_020e25ec[2] = {(void *)NT::func_020a2e9c, 0};

char *data_020e2500 = data_020e2790;

void *data_020e25dc[2] = {(void *)NT::func_020a2bdc, 0};

s32 data_021ed3bc;

void *data_020e2554[2] = {(void *)NT::func_020a2ae4, 0};

void *data_020e25c4[2] = {(void *)NT::func_020a2908, 0};

void *data_020e2734[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3decEv, 0};

void *data_020e25b4[2] = {(void *)NT::func_020a25e4, 0};

s32 data_021ed3c4;

const Unk_020a3238_Vec data_020d0788 = {0x10000, 0, 0x5000};

void *data_020e259c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3784Ev, 0};

void *data_020e25a4[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a2408Ev, 0};

void *data_020e25ac[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3b9cEv, 0};

const u32 data_020d0794[3] = {0, 0x15fe0, 0x2e20c};

void *data_020e264c[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a1de4Ev, 0};

void *data_020e265c[2] = {(void *)NT::_ZN12Unk_020a1c8813func_020a1d74Ev, 0};

Unk_0209fb48_V3 data_020e2764 = {3, 3, 3};

u8 data_021ed3a4;

char *data_020e24f4 = data_020e277c;

void *data_020e2714[2] = {(void *)NT::_ZN12Unk_020a323813func_020a34e0Ev, 0};

void *data_020e274c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3478Ev, 0};

void *data_020e2544[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a167cEv, 0};

void *data_020e2504[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3390Ev, 0};

u8 data_021ed394;

u8 data_020e252c[8] = {0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0, 0};

s32 Unk_020e27d4::func_020a13c4() {
    s32 r = 0;
    static Fn tbl[4] = {&Unk_020e27d4::func_020a1374, &Unk_020e27d4::func_020a1330, &Unk_020e27d4::func_020a12f0,
                        &Unk_020e27d4::func_020a1224};
    if (tbl[unk_9c] != 0) {
        r = (this->*tbl[unk_9c])();
    }
    if (r != 3) {
        unk_9c = 0;
        return r;
    }
    return 3;
}

s32 Unk_020e27d4::func_020a1374() {
    unk_109.hi = 3;
    unk_109.lo = 3;
    unk_10a.lo = 3;
    unk_10a.hi = 3;
    unk_9c = unk_9c + 1;
    return 3;
}

s32 Unk_020e27d4::func_020a1330() {
    unk_109.hi = NF::_ZN12Unk_020a09d813func_020a0b08Ei(this, 0);
    if (unk_109.hi == 3) {
        return 3;
    }
    unk_9c = unk_9c + 1;
    return 3;
}

s32 Unk_020e27d4::func_020a12f0() {
    unk_109.lo = NF::_ZN12Unk_020a09d813func_020a0b08Ei(this, 1);
    if (unk_109.lo == 3) {
        return 3;
    }
    unk_9c = unk_9c + 1;
    return 3;
}

s32 Unk_020e27d4::func_020a1224() {
    s32 r = 0;
    if (unk_109.lo == 1 || unk_109.hi == 1) {
        r = 1;
    } else if (unk_109.hi != 0 && unk_109.lo != 0) {
        unk_10a.lo = 1;
        unk_10a.hi = 0;
        r = 4;
    } else if (unk_109.hi != 0) {
        unk_10a.lo = 1;
        unk_10a.hi = 0;
    } else if (unk_109.lo != 0) {
        unk_10a.lo = 0;
        unk_10a.hi = 1;
    } else {
        unk_10a.lo = (u8)NF::func_020a071c();
        if (unk_10a.lo == 1) {
            unk_10a.hi = 0;
        } else {
            unk_10a.hi = 1;
        }
    }
    unk_9c = 6;
    return r;
}

s32 Unk_020a09d8::func_020a1158(s32 arg) {
    static Unk_020a09d8_State tbl[7] = {
        &Unk_020a09d8::func_020a10ec, &Unk_020a09d8::func_020a0f88, &Unk_020a09d8::func_020a0f1c,
        &Unk_020a09d8::func_020a0e44, &Unk_020a09d8::func_020a0dd0, &Unk_020a09d8::func_020a0d90,
        *(Unk_020a09d8_State *)NE::__ptmf_null};
    s32 r = 3;
    if (tbl[unk_9c]) r = (this->*tbl[unk_9c])(arg);
    if (unk_9c == 6) {
        r = 0;
        unk_9c = r;
    }
    return r;
}

s32 Unk_020a09d8::func_020a10ec(s32 idx) {
    u8 *a[3];
    a[0] = NE::data_021d7350;
    a[1] = NE::data_021d7350;
    a[2] = NE::func_020a03ac();
    NE::MI_CpuFill8(unk_ac, 0, NE::data_020d0764[idx]);
    NE::MI_CpuCopy8(a[idx], unk_ac, NE::data_020d077c[idx]);
    unk_9e = 0;
    unk_a0 = -1;
    unk_a4 = 0;
    unk_9c = 1;
    return 3;
}

s32 Unk_020a09d8::func_020a0f88(s32 mode) {
    if (mode == 2) {
        u8 *b = unk_ac;
        *(u16 *)(b + 0x11df2) = NE::func_0204fef4(b, 0x11df4, *(u16 *)(b + 0x11df2));
    } else {
        s32 s = 0;
        if (mode == 1) s = func_020a0b08(s);
        if (s == 3) return 3;
        if (s == 1) return 1;
        u8 *buf = unk_ac;
        if (mode == 0) {
            NE::_ZN12Unk_0209ea5013func_0209eb1cEv(buf + 0x15fdc);
        } else if (s == 0) {
            u32 local;
            NE::_ZN12Unk_0209ea5013func_0209eb90Ev(&local);
            NE::func_020a0774(0, &local);
            NE::_ZN12Unk_0209ea5013func_0209eb18Eh(buf + 0x15fdc, NE::_ZN12Unk_0209ea5013func_0209eb14Ev(&local));
            NE::_ZN12Unk_0209ea5013func_0209eb8cEv(&local);
        }
        u8 *p = buf + 0x10c3c;
        NE::_ZN12Unk_0208f23813func_0208f1d0Ej(p, NE::func_0204fef4(p, 0x84c, NE::_ZN12Unk_0208f23813func_0208f1c4Ev(p)));
        p = buf + 0x15c58;
        NE::_ZN12Unk_0208f23813func_0208f068Ej(p, NE::func_0204fef4(p, 0xf8, NE::_ZN12Unk_0208f23813func_0208f060Ev(p)));
        for (s32 i = 0; i < 4; i++) {
            void *e = NE::_ZN12Unk_0209865c13func_02098680Ev(NE::func_02097868(buf + 0xc, i));
            NE::func_02076c74(e, NE::func_0204fef4(e, 0x50, NE::func_02076c6c(e)));
            e = NE::_ZN12Unk_0209865c13func_02098674Ev(NE::func_02097868(buf + 0xc, i));
            NE::func_02076d5c(e, NE::func_0204fef4(e, 0x384, NE::func_02076d50(e)));
        }
        NE::_ZN12Unk_0209eb0c13func_0209eb10Et(buf + 0x15fdc, NE::func_0204fef4(buf, 0x15fe0, NE::_ZN12Unk_0209eb0c13func_0209eb0cEv(buf + 0x15fdc)));
        NE::func_0204ff18(buf, 0x15fe0);
        NE::func_0204ff18(buf, 0x15fe0);
    }
    unk_9c = 2;
    return 3;
}

s32 Unk_020a09d8::func_020a0f1c(s32 idx) {
    s32 r = NE::func_0204ff6c(NE::data_021c4890);
    s32 off = NE::data_020d0794[idx];
    s32 size = NE::data_020d0764[idx];
    if (r == 1) {
        NE::func_0204ff40(NE::data_021c4890);
        return 1;
    } else if (r == 4) {
        NE::MI_CpuFill8(unk_b0, 0, size);
        NE::func_0204ffa0(NE::data_021c4890, unk_b0, size, off);
    } else if (r != 3) {
        NE::func_0204ff40(NE::data_021c4890);
        unk_9c = 3;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a0e44(s32 idx) {
    s32 size = NE::data_020d0764[idx];
    s32 q = size / 0x200;
    s32 rem = size % 0x200;
    while (unk_9e <= q) {
        s32 n = 0x200;
        if (unk_9e == q) n = rem;
        s32 o = unk_9e << 9;
        if (func_020a09d8(unk_ac + o, unk_b0 + o, n) == 0) {
            if (unk_a0 == -1) unk_a0 = unk_9e;
            unk_a4 = unk_a4 + n;
            if (unk_9e == q) {
                unk_9c = 4;
                unk_9e = unk_9e + 1;
                return 3;
            }
        } else if (unk_a4 != 0) {
            unk_9c = 4;
            return 3;
        }
        unk_9e = unk_9e + 1;
    }
    if (unk_9e > q) unk_9c = 5;
    return 3;
}

s32 Unk_020a09d8::func_020a0dd0(s32 idx) {
    s32 r = NE::func_0204ff6c(NE::data_021c4890);
    s32 off = NE::data_020d0794[idx];
    if (r == 1) {
        NE::func_0204ff40(NE::data_021c4890);
        return 1;
    } else if (r == 4) {
        s32 o = unk_a0 << 9;
        NE::func_0205007c(NE::data_021c4890, o + off, unk_ac + o, unk_a4);
    } else if (r != 3) {
        NE::func_0204ff40(NE::data_021c4890);
        unk_a0 = -1;
        unk_a4 = 0;
        unk_9c = 3;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a0d90(s32 idx) {
    u8 *a[3];
    a[0] = NE::data_021d7350;
    a[1] = NE::data_021d7350;
    a[2] = NE::func_020a03ac();
    NE::MI_CpuCopy8(unk_ac, a[idx], NE::data_020d077c[idx]);
    unk_9c = 6;
    return 3;
}

s32 Unk_020a09d8::func_020a0d28(s32 idx) {
    s32 r = NE::func_0204ff6c(NE::data_021c4890);
    s32 off = NE::data_020d0794[idx];
    s32 size = NE::data_020d0764[idx];
    if (r == 1) {
        NE::func_0204ff40(NE::data_021c4890);
        return 1;
    } else if (r == 4) {
        NE::MI_CpuFill8(unk_ac, 0xff, size);
        NE::func_0205007c(NE::data_021c4890, off, unk_ac, size);
    } else if (r != 3) {
        NE::func_0204ff40(NE::data_021c4890);
        return 0;
    }
    return 3;
}

extern "C" s32 func_020a0cd8(void) {
    s32 a = NE::func_020a0ccc(0);
    s32 b = NE::func_020a0ccc(1);
    if (a == 1 || b == 1) return 1;
    if (a != 0 && b != 0) return 4;
    if (a != 0) NE::func_020a0c0c(1);
    else if (b != 0) NE::func_020a0c0c(0);
    else NE::func_020a0c0c(NE::func_020a071c());
    return 0;
}

extern "C" s32 func_020a0ccc(s32 idx) {
    return NE::func_020a0c18(idx, 0);
}

extern "C" s32 func_020a0c18(s32 idx, s32 flag) {
    if (flag != 0 && NE::data_021ed3b0 == NULL) return 1;
    s32 r = NE::func_020a0ba4(idx, flag);
    if (r == 0) {
        u8 *buf;
        if (flag != 0) buf = NE::data_021ed3b0->unk_ac;
        else buf = NE::data_021d7350;
        s32 t = NE::func_0204ff18(buf, 0x15fe0);
        if (NE::_ZN12Unk_0209da4413func_0209e1a0Ev(buf) == 0) return 4;
        if (t == 0) {
            NE::func_0204ff18(buf + 0x10c3c, 0x84c);
            s32 i = 0;
            u8 *p = buf + 0xc;
            for (; i < 4; i++) {
                NE::func_0204ff18(NE::_ZN12Unk_0209865c13func_02098680Ev(NE::func_02097868(p, i)), 0x50);
                NE::func_0204ff18(NE::_ZN12Unk_0209865c13func_02098674Ev(NE::func_02097868(buf + 0xc, i)), 0x384);
            }
        } else {
            return 4;
        }
    }
    return r;
}

extern "C" BOOL func_020a0c0c(u32 idx) {
    return NE::func_020a0ba4(idx, 0);
}

extern "C" BOOL func_020a0ba4(u32 idx, s32 flag) {
    u8 *a[3];
    a[0] = NE::data_021d7350;
    a[1] = NE::data_021d7350;
    a[2] = NE::func_020a03ac();
    u8 *buf = a[idx];
    s32 off = NE::data_020d0794[idx];
    s32 size = NE::data_020d0764[idx];
    if (flag != 0 && idx <= 1) {
        Unk_020a09d8 *g = NE::data_021ed3b0;
        if (g == NULL) return TRUE;
        buf = g->unk_ac;
    }
    if (NE::func_02050008(NE::data_021c4890, buf, size, off) != 0) return TRUE;
    return FALSE;
}

s32 Unk_020a09d8::func_020a0b08(s32 idx) {
    s32 r = NE::func_0204ff6c(NE::data_021c4890);
    s32 off = NE::data_020d0794[idx];
    s32 size = NE::data_020d0764[idx];
    if (r == 4) {
        NE::MI_CpuFill8(unk_b0, 0, size);
        NE::func_0204ffa0(NE::data_021c4890, unk_b0, size, off);
    } else if (r != 3) {
        NE::func_0204ff40(NE::data_021c4890);
        if (NE::_ZN12Unk_0209da4413func_0209e1a0Ev(NE::data_021ed3b0->unk_b0) == 0) return 4;
        if (NE::func_0204ff18(unk_b0, NE::data_020d077c[idx]) == 0) return 0;
        return 4;
    } else if (r == 1) {
        NE::func_0204ff40(NE::data_021c4890);
        return 1;
    }
    return 3;
}

extern "C" s32 func_020a0a7c(s32 idx, u8 *buf) {
    s32 r = NE::func_0204ff6c(NE::data_021c4890);
    s32 off = NE::data_020d0794[idx];
    s32 size = NE::data_020d0764[idx];
    if (r == 4) {
        NE::MI_CpuFill8(buf, 0, size);
        NE::func_0204ffa0(NE::data_021c4890, buf, size, off);
    } else if (r != 3) {
        NE::func_0204ff40(NE::data_021c4890);
        s32 t = NE::func_0204ff18(buf, NE::data_020d077c[idx]);
        if (NE::_ZN12Unk_0209da4413func_0209e1a0Ev(buf) == 0) return 4;
        if (t == 0) return 0;
        return 4;
    } else if (r == 1) {
        NE::func_0204ff40(NE::data_021c4890);
        return 1;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a09fc(s32 idx) {
    u8 *a[3];
    a[0] = NE::data_021d7350;
    a[1] = NE::data_021d7350;
    a[2] = NE::func_020a03ac();
    u8 *buf = a[idx];
    s32 r = NE::func_0204ff6c(NE::data_021c4890);
    s32 off = NE::data_020d0794[idx];
    s32 size = NE::data_020d0764[idx];
    if (r == 4) {
        NE::func_0204ffa0(NE::data_021c4890, buf, size, off);
    } else if (r == 1) {
        NE::func_0204ff40(NE::data_021c4890);
        return 1;
    } else if (r != 3) {
        NE::func_0204ff40(NE::data_021c4890);
        if (NE::func_0204ff18(buf, NE::data_020d077c[idx]) == 0) return 0;
        return 4;
    }
    return 3;
}

BOOL Unk_020a09d8::func_020a09d8(u8 *p, u8 *q, s32 n) {
    while (n != 0) {
        if (*p != *q) return FALSE;
        p++;
        q++;
        n--;
    }
    return TRUE;
}

void Unk_020a0990::func_020a0990(const char *str, u8 flag) {
    Unk_020660f8 *o = NE::func_02067918(0);
    unk_54.vfunc_08();
    unk_54.func_020a710c(str);
    unk_54.unk_1e = flag;
    o->func_02067a78();
    o->func_02067978(&unk_54);
    o->unk_08 = 1;
}

extern "C" void func_020a0984(void) { NE::data_021ed3c8 = 1; }

extern "C" void func_020a0978(void) { NE::data_021ed3c8 = 2; }

extern "C" void func_020a096c(void) { NE::data_021ed3c8 = 6; }

extern "C" void func_020a0960(void) { NE::data_021ed3c8 = 5; }

extern "C" void func_020a0954(void) { NE::data_021ed3c8 = 3; }

extern "C" void func_020a0948(void) { NE::data_021ed3c8 = 0x12; }

extern "C" void func_020a093c(void) { NE::data_021ed3c8 = 0x13; }

extern "C" void func_020a0930(void) { NE::data_021ed3c8 = 0x14; }

extern "C" void func_020a0924(void) { NE::data_021ed3c8 = 0x15; }

extern "C" void func_020a0918(void) { NE::data_021ed3c8 = 0x16; }

extern "C" void func_020a090c(void) { NE::data_021ed3c8 = 0x17; }

extern "C" void func_020a0900(void) { NE::data_021ed3c8 = 0x18; }

extern "C" void func_020a08f4(void) { NE::data_021ed3c8 = 0x19; }

extern "C" void func_020a08e8(void) { NE::data_021ed3c8 = 0x1a; }

extern "C" void func_020a08dc(void) { NE::data_021ed3c8 = 0x1b; }

extern "C" void func_020a08d0(void) { NE::data_021ed3c8 = 0x1f; }

extern "C" void func_020a08c4(void) { NE::data_021ed3c8 = 0x1c; }

extern "C" BOOL func_020a08a8(void) {
    Unk_020a09d8 *p = NE::data_021ed3b0;
    if (p != NULL && p->unk_50 == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0884(void) {
    Unk_020a09d8 *p = NE::data_021ed3b0;
    if (p != NULL && p->unk_50 == 0x12 && p->unk_9d == 3) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0868(void) {
    Unk_020a09d8 *p = NE::data_021ed3b0;
    if (p != NULL && p->unk_50 == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a084c() {
    Unk_021ed3b0 *g = ND::data_021ed3b0;
    if (g && g->unk_50 == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0828() {
    Unk_021ed3b0 *g = ND::data_021ed3b0;
    if (g && g->unk_50 == 0x13 && g->unk_9d == 3) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a080c() {
    Unk_021ed3b0 *g = ND::data_021ed3b0;
    if (g && g->unk_50 == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a07e4() {
    Unk_021ed3b0 *g = ND::data_021ed3b0;
    if (g && g->unk_50 == 0x1f) {
        u32 t = g->unk_9d;
        if (t == 0xf || t == 0x14) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020a07b0(s32 idx) {
    Unk_0209ea50 d;
    if (ND::func_020a0774(idx, &d)) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a07a4() { return ND::func_020a07b0(0); }

extern "C" s32 func_020a0774(s32 idx, Unk_0209ea50 *d) {
    return ND::func_02050008(ND::data_021c4890, d, 4, ((u32)ND::data_021ed32c - (u32)ND::data_021d7350) + ND::data_020d0794[idx]);
}

extern "C" BOOL func_020a071c() {
    Unk_0209ea50 a;
    ND::func_020a0774(0, &a);
    Unk_0209ea50 b;
    ND::func_020a0774(1, &b);
    if (a.func_0209eb14() == b.func_0209eb14()) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a06ec() {
    u8 z = 0;
    if (ND::func_020500f0(ND::data_021c4890, 0x3fffc, &z, 1) == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0664() {
    u32 r4 = ND::func_020a03ac();
    u8 *const r7 = ND::data_021ed32c;
    u32 r6, r5;
    ND::_ZN12Unk_0209ea5013func_0209eb7cEv(r7);
    ND::func_0209d604(r4);
    r6 = r4 + 0x11df0;
    r5 = r7 - ND::data_021d7350;
    r4 = r6 - r4;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[0] + r5, r7, 4) == 1) return TRUE;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[1] + r5, r7, 4) == 1) return TRUE;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[2] + r4, (void *)r6, 1) == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a05e8() {
    u8 *q;
    u32 d;
    ND::func_02097868(ND::data_021d735c, ND::func_020974f8());
    q = ND::_ZN12Unk_0209865c13func_02098680Ev();
    ND::func_02076c74(q, ND::func_0204fef4(q, 0x50, ND::func_02076c6c(q)));
    d = q - ND::data_021d7350;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[0] + d, q, 0x50) == 1) return TRUE;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[1] + d, q, 0x50) == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0554() {
    u8 *base = ND::data_021d7350;
    s32 t = ND::func_020974f8();
    u8 *p;
    u8 *q;
    ND::func_0209750c();
    p = ND::_ZN12Unk_0209865c13func_02098674Ev();
    if (t >= 4) t = ND::data_020e24ec;
    ND::func_02097868(base + 0xc, t);
    q = ND::_ZN12Unk_0209865c13func_02098674Ev();
    ND::func_02076d5c(p, ND::func_0204fef4(p, 0x384, ND::func_02076d50(p)));
    {
        u32 d = q - base;
        if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[0] + d, p, 0x384) == 1) return TRUE;
        if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[1] + d, p, 0x384) == 1) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020a049c() {
    u32 y, x;
    u32 a, b;
    void *base = ND::data_021d7350;
    void *p = ND::data_021e7f8c;
    void *q = ND::data_021ecfa8;
    a = (u32)p - (u32)base;
    b = (u32)q - (u32)base;
    ND::_ZN12Unk_0208f23813func_0208f1d0Ej(p, ND::func_0204fef4(p, 0x84c, ND::_ZN12Unk_0208f23813func_0208f1c4Ev(p)));
    ND::_ZN12Unk_0208f23813func_0208f068Ej(q, ND::func_0204fef4(q, 0xf8, ND::_ZN12Unk_0208f23813func_0208f060Ev(q)));
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[0] + a, p, 0x84c) == 1) return TRUE;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[1] + a, p, 0x84c) == 1) return TRUE;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[0] + b, q, 0xf8) == 1) return TRUE;
    if (ND::func_020500f0(ND::data_021c4890, ND::data_020d0794[1] + b, q, 0xf8) == 1) return TRUE;
    return FALSE;
}

extern "C" void func_020a042c() {
    if (!ND::func_020a02dc()) {
        if (ND::func_020a0318()) ND::_ZN12Unk_0209da4413func_0209df9cEv(ND::data_021d7350);
        if (ND::func_020a02f0()) {
            Unk_020cbb18_ff4c *g = ND::data_020cbb18;
            g->unk_68 = 0;
            ND::func_02095300(g->unk_68, 0);
        } else {
            void *p = ND::data_021d735c;
            s32 t = ND::func_020977a0(p);
            Unk_020cbb18_ff4c *g = ND::data_020cbb18;
            g->unk_68 = 0;
            ND::func_02095300(g->unk_68, t);
            ND::func_020975f0(p, ND::data_020e252c, 0, t);
        }
    }
}

extern "C" void func_020a0420(s32 v) { ND::data_021ed3c4 = v; }

extern "C" u32 func_020a0414() { return ND::data_021ed3a8; }

extern "C" void func_020a0408(u32 v) { ND::data_021ed3a8 = v; }

extern "C" s32 func_020a03fc() { return ND::data_021ed3b4; }

extern "C" u32 func_020a03f0() { return ND::data_021ed398; }

extern "C" void func_020a03e4() { ND::data_021ed398 = 1; }

extern "C" u32 func_020a03c4() {
    if (ND::func_020a0370()) return ND::func_020a0370()->unk_d2;
    return 0;
}

extern "C" s32 func_020a03ac() {
    if (ND::data_021ed3b0 == NULL) return 0;
    return ND::data_021ed3b0->unk_c0;
}

extern "C" s32 func_020a0394() {
    if (ND::data_021ed3b0 == NULL) return 0;
    return ND::data_021ed3b0->unk_c4;
}

extern "C" s32 func_020a037c() {
    if (ND::data_021ed3b0 == NULL) return 0;
    return ND::data_021ed3b0->unk_c8;
}

extern "C" Unk_021ed3b0 *func_020a0370() { return ND::data_021ed3b0; }

extern "C" void func_020a0364() { ND::data_021ed3bc = 1; }

extern "C" void func_020a0358() { ND::data_021ed3bc = 2; }

extern "C" void func_020a034c() { ND::data_021ed3bc = 3; }

extern "C" void func_020a0340() { ND::data_021ed3bc = 4; }

extern "C" BOOL func_020a032c() {
    if (ND::data_021ed3bc != 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0318() {
    if (ND::data_021ed3bc == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0304() {
    if (ND::data_021ed3bc == 2) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a02f0() {
    if (ND::data_021ed3bc == 3) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a02dc() {
    if (ND::data_021ed3bc == 4) return TRUE;
    return FALSE;
}

extern "C" void func_020a02d0() { ND::data_021ed3bc = 0; }

extern "C" void func_020a02c8(Unk_021ed3b0 *p, u32 v) { p->unk_d0 = v; }

extern "C" void func_020a02c0(Unk_021ed3b0 *p, u32 v) { p->unk_d3 = v; }

extern "C" void func_020a02b8(Unk_021ed3b0 *p, u32 v) { p->unk_e0 = v; }

extern "C" void func_020a02b0(Unk_021ed3b0 *p, u32 v) { p->unk_e1 = v; }

extern "C" void func_020a02a8(Unk_021ed3b0 *p, u32 v) { p->unk_e2 = v; }

extern "C" void func_020a02a0(Unk_021ed3b0 *p, u32 v) { p->unk_d5 = v; }

extern "C" void func_020a0298(Unk_021ed3b0 *p, u32 v) { p->unk_d6 = v; }

extern "C" u8 *func_020a0294(Unk_021ed3b0 *p) { return p->unk_d8; }

extern "C" void func_020a028c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_e3[i] = v; }

extern "C" void func_020a0284(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_e7[i] = v; }

extern "C" void func_020a027c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_eb[i] = v; }

extern "C" void func_020a0268(Unk_021ed3b0 *p) {
    s32 i;
    for (i = 3; i >= 0; i--) p->unk_eb[i] = 0;
}

extern "C" void func_020a0254(u32 v) {
    if (ND::data_021ed3b0) ND::data_021ed3b0->unk_ef = v;
}

extern "C" void func_020a024c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_f0[i] = v; }

extern "C" void func_020a0244(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_f4[i] = v; }

extern "C" void func_020a023c(Unk_021ed3b0 *p, s32 i, u32 v) { p->unk_f8[i] = v; }

extern "C" void func_020a0228(u32 v) {
    if (ND::data_021ed3b0) ND::data_021ed3b0->unk_fc = v;
}

extern "C" u32 func_020a0210() {
    if (ND::data_021ed3b0) return ND::data_021ed3b0->unk_fc;
    return 4;
}

extern "C" void func_020a0208(Unk_021ed3b0 *p, u32 v) { p->unk_fd = v; }

extern "C" void func_020a0088(void *a, s32 b, s32 c) {
    s32 i;
    Unk_020cbb18_ff4c *g;
    s32 s;
    s32 t;
    s32 r5;
    u8 *r4;
    struct { Unk_020a0088_Date packed; u32 d[2]; } l;
    ND::func_02073340(a);
    ND::func_0209f000(a);
    if (b < 7) {
        g = ND::data_020cbb18;
        ND::func_020952f0(g->unk_68);
        g->unk_68 = 0;
    }
    g = ND::data_020cbb18;
    ND::_ZN12Unk_020cbb1813func_020729a8Ej(g, 1);
    if (b < 7) {
        ND::func_02095300(g->unk_68, b);
    }
    s = g->unk_68;
    ND::func_020952e0(s);
    for (i = 3; i >= 0; i--) {
        if (i != s) ND::func_020952f0(i);
    }
    for (i = 2; i >= 0; i--) {
        if (ND::func_020974a0(i + 4)) ND::_ZN12Unk_0209865c13func_02098a58Ev();
    }
    if (c == 0) {
        ND::func_0209cfc8(0);
        ND::func_0209d70c(ND::data_021d7350, 2);
        ND::func_0209d624(ND::data_021d7350);
        if (ND::func_0204da0c()) {
            ND::_ZN12Unk_0204da1813func_0204dab4Ev(ND::func_0204da0c());
            ND::_ZN12Unk_0204da1813func_0204da24Ev(ND::func_0204da0c());
            ND::func_0204c6a4(ND::func_0204da0c());
        }
        ND::func_0204d42c();
        ND::func_0204d3d8();
    } else {
        ND::func_02045e98();
    }
    ND::func_020741b8(-4);
    if (c == 0) {
        t = ND::func_020952e0(0);
        if (t < 7) {
            r5 = ND::func_020974a0(t);
            r4 = ND::func_020952c8(r5);
            if (*r4 & 6) {
                l.d[0] = 0;
                l.d[1] = 0;
                ND::func_0209d498(l.d);
                l.packed.v = (l.packed.v & ~0x7f) | (((u8 *)l.d)[5] & 0x7f);
                l.packed.v = (l.packed.v & ~0x780) | ((((u8 *)l.d)[4] & 0xf) << 7);
                l.packed.v = (l.packed.v & ~0xf800) | ((((u8 *)l.d)[3] & 0x1f) << 11);
                if (*r4 & 2) *r4 |= 0x11;
            } else {
                l.packed.v = *ND::func_020952d8();
                *r4 = *r4 | ((*r4 >> 4) & 1);
            }
            ND::_ZN12Unk_0209865c13func_020987b0E17Unk_0209865c_Bits(r5, l.packed);
        }
    }
}

extern "C" void func_0209fffc(void *a) {
    s32 list[4];
    Unk_020cbb18_ff4c *g;
    s32 n;
    s32 i;
    s32 cur = ND::func_020a5ef8();
    s32 pick;
    n = 0;
    i = 3;
    g = ND::data_020cbb18;
    for (; i >= 0; i--) {
        if (i != cur && ND::_ZN12Unk_020cbb1813func_02072e88Ei(g, i)) {
            list[n] = i;
            n++;
        }
    }
    for (i = 3; i >= 0; i--) {
        if (ND::_ZN12Unk_020cbb1813func_02072e88Ei(g, i)) {
            ND::_ZN12Unk_020e27d413func_020a147cEjh(a, i, i);
        } else {
            ND::_ZN12Unk_020e27d413func_020a147cEjh(a, i, 4);
        }
    }
    pick = list[ND::func_02063b8c(n)];
    ND::_ZN12Unk_020e27d413func_020a147cEjh(a, pick, cur);
    ND::_ZN12Unk_020e27d413func_020a147cEjh(a, cur, pick);
}

extern "C" void func_0209ff8c(void *a) {
    s32 list[4];
    s32 n = 0;
    s32 i = 3, j;
    Unk_020cbb18_ff4c *g = ND::data_020cbb18;
    for (; i >= 0; i--) {
        if (ND::_ZN12Unk_020cbb1813func_02072e88Ei(g, i)) {
            list[n] = i;
            n++;
        }
    }
    for (i = 3; i >= 0; i--) {
        ND::_ZN12Unk_020e27d413func_020a147cEjh(a, i, 4);
    }
    j = 0;
    for (i = 0; i < n; i++) {
        s32 k = i + 1;
        if (k >= n) k = j;
        ND::_ZN12Unk_020e27d413func_020a147cEjh(a, n ? list[i] : list[i], list[k]);
    }
}

extern "C" void func_0209ff4c(void *a) {
    s32 i = 3;
    Unk_020cbb18_ff4c *g = ND::data_020cbb18;
    for (; i >= 0; i--) {
        if (ND::_ZN12Unk_020cbb1813func_02072e88Ei(g, i)) {
            ND::func_0208f0b0(i);
            ND::_ZN12Unk_0208f23813func_0208f18cEv();
            ND::_ZN12Unk_020872fc13func_02087368Ev();
        }
    }
    ND::func_0209fcc4(a, ND::func_020a5ef8());
}

extern "C" void func_0209fefc(Unk_0209f638 *self) {
    Unk_020cbb18 *o;
    s32 i = 3;
    o = NC::data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i)) {
            NC::_ZN12Unk_020872fc13func_02087368Ev(NC::_ZN12Unk_0208f23813func_0208f18cEv(NC::func_0208f0b0(i)));
        }
    }
    for (i = 3; i >= 0; i--) {
        if (o->func_02072e88(i)) {
            NC::func_0209fcc4(self, i);
        }
    }
}

extern "C" void func_0209fef8(Unk_0209f638 *p, void *q) {}

extern "C" void func_0209fcc4(Unk_0209f638 *self, s32 idx) {
    void *r7 = NC::func_02097520(idx);
    if (r7 == 0) return;
    u32 sa[7];
    NC::_ZN12Unk_020dd38cC2Ev(sa);
    NC::func_020638d0(NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(r7)), sa);
    void *r6 = NC::_ZN12Unk_0209865c13func_020986a4Ev(r7);
    if (NC::_ZN12Unk_020872fc13func_02087354Ev(r6)) {
        NC::func_0209fef8(self, r6);
        NC::_ZN12Unk_020dd38cD1Ev(sa);
        return;
    }
    s32 found = 4;
    void *other = 0;
    void *other2 = 0;
    u32 sb[7];
    NC::_ZN12Unk_020dd38cC2Ev(sb);
    s32 i = 0;
    Unk_020cbb18 *o = NC::data_020cbb18;
    for (; i < 4; i++) {
        if (i == idx) continue;
        if (!o->func_02072e88(i)) continue;
        other = NC::func_02097520(i);
        if (!other) continue;
        NC::func_020638d0(NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(other)), sb);
        other2 = NC::_ZN12Unk_0209865c13func_020986a4Ev(other);
        if (NC::_ZN12Unk_020872fc13func_02087354Ev(other2)) continue;
        if (NC::func_020eaf18() == 3 || NC::func_020eaf18() == 4) {
            if (!NC::func_0209fc68(self, other, r7)) continue;
            if (!NC::func_0209fc68(self, r7, other)) continue;
        }
        found = i;
        break;
    }
    if (found == 4) {
        NC::_ZN12Unk_020dd38cD1Ev(sb);
        NC::_ZN12Unk_020dd38cD1Ev(sa);
        return;
    }
    s16 *pp = (s16 *)NC::func_0209c37c(0, 0x49);
    if (*pp == 0 && NC::func_02063b8c(0x10)) {
        NC::_ZN12Unk_020dd38cD1Ev(sb);
        NC::_ZN12Unk_020dd38cD1Ev(sa);
        return;
    }
    s32 r4 = NC::func_02063b8c(2);
    NC::_ZN12Unk_020872fc13func_02087328Eh(other2, r4 == 0 ? 1 : 0);
    NC::_ZN12Unk_020872fc13func_0208735cEv(other2, NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(r7)));
    NC::_ZN12Unk_020872fc13func_02087344Eh(other2, 0xa);
    NC::_ZN12Unk_020872fc13func_02087328Eh(r6, r4 == 1 ? 1 : 0);
    NC::_ZN12Unk_020872fc13func_0208735cEv(r6, NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(other)));
    NC::_ZN12Unk_020872fc13func_02087344Eh(r6, 0xa);
    NC::func_0209fef8(self, r6);
    NC::func_0209fef8(self, other2);
    void *h7 = NC::_ZN12Unk_020e27d413func_020a1484Ej(self, idx);
    void *h5 = NC::_ZN12Unk_020e27d413func_020a1484Ej(self, found);
    void *c4 = NC::func_02097520((s32)h7);
    void *m7 = NC::func_0208f0b0((s32)h7);
    u32 sc[7];
    NC::_ZN12Unk_020dd38cC2Ev(sc);
    if (c4) {
        NC::func_020638d0(NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(c4)), sc);
    }
    NC::MI_CpuCopy8(r6, NC::_ZN12Unk_0208f23813func_0208f18cEv(m7), 0xc);
    c4 = NC::func_02097520((s32)h5);
    void *m5 = NC::func_0208f0b0((s32)h5);
    u32 sd[7];
    NC::_ZN12Unk_020dd38cC2Ev(sd);
    if (c4) {
        NC::func_020638d0(NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(c4)), sd);
    }
    NC::MI_CpuCopy8(other2, NC::_ZN12Unk_0208f23813func_0208f18cEv(m5), 0xc);
    NC::_ZN12Unk_020dd38cD1Ev(sd);
    NC::_ZN12Unk_020dd38cD1Ev(sc);
    NC::_ZN12Unk_020dd38cD1Ev(sb);
    NC::_ZN12Unk_020dd38cD1Ev(sa);
    return;
}

extern "C" BOOL func_0209fc68(Unk_0209f638 *self, void *a, void *b) {
    void *r6 = NC::func_02076e1c(NC::func_02076c7c(NC::_ZN12Unk_0209865c13func_02098680Ev(a)));
    u8 *r5 = (u8 *)NC::func_02076db4(NC::_ZN12Unk_0209865c13func_02098674Ev(b));
    s32 i;
    u32 st = 0x1c;
    for (i = 0; i < 0x20; i++) {
        void *e = NC::func_02076e1c(NC::func_02076cf0(r5 + i * st));
        if (e) {
            if (NC::func_020e9d88(r6, e)) return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0209fbe4(Unk_0209f638 *self) {
    void *p5 = NC::func_0208f0b0(4);
    void *r4 = NC::func_0209750c();
    u32 s1[7];
    NC::_ZN12Unk_020dd38cC2Ev(s1);
    NC::func_020638d0(NC::func_0209409c(NC::_ZN12Unk_0209865c13func_0209888cEv(r4)), s1);
    void *r6 = NC::_ZN12Unk_0209865c13func_020986a4Ev(r4);
    void *q = NC::_ZN12Unk_0208f23813func_0208f18cEv(p5);
    u32 s2[7];
    NC::_ZN12Unk_020dd38cC2Ev(s2);
    NC::func_020638d0(NC::_ZN12Unk_020872fc13func_02087364Ev(q), s2);
    if (NC::_ZN12Unk_020872fc13func_02087354Ev(q)) {
        NC::MI_CpuCopy8(q, r6, 0xc);
        NC::_ZN12Unk_020872fc13func_0208733cEv(q);
    }
    NC::_ZN12Unk_020872fc13func_02087368Ev(NC::_ZN12Unk_0208f23813func_0208f18cEv(p5));
    NC::_ZN12Unk_020dd38cD1Ev(s2);
    NC::_ZN12Unk_020dd38cD1Ev(s1);
}

extern "C" void func_0209fb48(Unk_0209f638 *self) {
    Unk_0209fb48_V3 a = NC::data_020e2764;
    Unk_0209fb48_V3 b = NC::data_020e2770;
    s32 i = 2;
    Unk_020cbb18 *o = NC::data_020cbb18;
    for (; i >= 0; i--) {
        s32 n = i + 1;
        if (o->func_02072e88(n)) {
            s32 q = (s32)NC::_ZN12Unk_020e27d413func_020a1484Ej(self, n);
            if (q < 4) {
                if (NC::_ZN12Unk_0208f23813func_0208f1c0Ev(NC::func_0208f0b0(q))) {
                    a.v[i] = 2;
                    b.v[i] = q;
                } else {
                    a.v[i] = 1;
                }
            } else {
                a.v[i] = 0;
            }
        }
    }
    NC::func_02074eb4(a.v[0], b.v[0], a.v[1], b.v[1], a.v[2], b.v[2]);
}

extern "C" s32 func_0209f898(Unk_0209f638 *self, u8 *st, s32 base, s32 base2, u32 mask, u8 a6) {
    u32 cur = *st;
    if (cur == base) {
        if (NC::func_02073090(mask)) {
            NC::func_0207312c();
            return 0x20;
        }
        if (NC::func_020eaf90() == 0) {
            if (NC::func_02074b58(2, mask)) {
                *st = base + 1;
            }
        } else {
            if (NC::func_02074b58(2, 1)) {
                *st = base + 1;
            }
        }
    } else if (cur == base + 1) {
        if (NC::func_02073090(mask)) {
            NC::func_0207312c();
            return 0x20;
        }
        NC::_Z13func_020720f8v();
        if (NC::func_020eaca0()) {
            *st = base + 2;
        }
    } else if (cur == base + 2) {
        if (NC::func_020eaf90() == 0) {
            BOOL flag = TRUE;
            u32 m = 0;
            s32 i;
            NC::func_020741b0();
            for (i = 3; i >= 0; i--) {
                if (i != 0) {
                    u32 bit = 1 << i;
                    if (mask & bit) {
                        if (self->unk_f0[i] == 0) {
                            flag = FALSE;
                            m = m | bit;
                            m = (u16)m;
                        }
                    }
                }
            }
            BOOL err = NC::func_02073090(m);
            NC::func_020741a8();
            if (err) {
                NC::func_0207312c();
                return 0x20;
            }
            if (flag) {
                NC::func_02073340();
                NC::func_0209f000(self);
                *st = base + 3;
            }
        } else {
            if (NC::func_02073090(mask)) {
                NC::func_0207312c();
                return 0x20;
            }
            if (self->unk_eb[0]) {
                if (NC::func_020748fc()) {
                    *st = base + 3;
                }
            }
        }
    } else if (cur == base + 3) {
        if (NC::func_020eaf90() == 0) {
            *st = base + 4;
        } else {
            if (NC::func_02073090(mask)) {
                NC::func_0207312c();
                return 0x20;
            }
            NC::_Z13func_020720f8v();
            if (NC::func_020eaca0()) {
                NC::func_02073340();
                NC::func_0209f000(self);
                *st = base + 4;
            }
        }
    } else if (cur == base + 4) {
        if (a6) NC::_ZN12Unk_020e27d413func_020a1648Ev(self);
        *st = base + 5;
    }

    cur = *st;
    if (cur == base2) {
        if (NC::func_02073090(mask)) {
            NC::func_0207312c();
            return 0x20;
        }
        if (NC::func_020eaf90() == 0) {
            if (NC::func_02074b58(2, mask)) {
                *st = base2 + 1;
            }
        } else {
            if (NC::func_020748fc()) {
                *st = base2 + 1;
            }
        }
    } else if (cur == base2 + 1) {
        if (NC::func_02073090(mask)) {
            NC::func_0207312c();
            return 0x20;
        }
        NC::_Z13func_020720f8v();
        if (NC::func_020eaca0()) {
            *st = base2 + 2;
        }
    } else if (cur == base2 + 2) {
        if (NC::func_020eaf90() == 0) {
            BOOL flag = TRUE;
            u32 m = 0;
            s32 i;
            NC::func_020741b0();
            for (i = 3; i >= 0; i--) {
                if (i != 0) {
                    u32 bit = 1 << i;
                    if (mask & bit) {
                        if (self->unk_f0[i] == 0) {
                            flag = FALSE;
                            m = m | bit;
                            m = (u16)m;
                        }
                    }
                }
            }
            m = NC::func_02073090(m);
            NC::func_020741a8();
            if (m) {
                NC::func_0207312c();
                return 0x20;
            }
            if (flag) {
                NC::func_02073340();
                NC::func_0209f000(self);
                *st = base2 + 3;
            }
        } else {
            NC::func_02073340();
            NC::func_0209f000(self);
            *st = base2 + 3;
        }
    } else if (cur == base2 + 3) {
        if (a6) NC::_ZN12Unk_020e27d413func_020a1614Ev(self);
        *st = base2 + 4;
    } else if (cur == base2 + 4) {
        if (NC::func_02067918(0)->unk_04 == 0) {
            NC::OS_ResetSystem(0);
        }
    }
    return 0x20;
}

extern "C" s32 func_0209f638(Unk_0209f638 *self, u8 *st, s32 a2, s32 base, u8 a5, u8 a6, s32 a7, u8 a8, u32 a9) {
    Unk_020cbb18 *o5, *o2;
    u32 cur = *st;
    if (cur == base) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        s32 r = NC::_ZN12Unk_020e27d413func_020a13c4Ev(self);
        if (r == 1) {
            *st = a5;
        } else if (r == 3) {
        } else {
            NC::_ZN12Unk_0209ea5013func_0209eb74Ev(&NC::data_021ed32c);
            if (a8) {
                NC::_ZN12Unk_020e27d413func_020a1494Ev(self);
                NC::func_0209fbe4(self);
                NC::func_020873e0();
            }
            *st = base + 1;
        }
    } else if (cur == base + 1) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        s32 r = NC::_ZN12Unk_020a09d813func_020a1158Ei(self, (u32)(self->unk_10a << 24) >> 28);
        if (r == 1) {
            *st = a5;
        } else if (r == 0) {
            *st = base + 2;
        }
    } else if (cur == base + 2) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        s32 r6 = 1;
        s32 i = 3;
        o2 = NC::data_020cbb18;
        for (; i >= 0; i--) {
            if (o2->func_02072e88(i) && !o2->func_020729cc(i)) {
                u8 v = self->unk_eb[i];
                if (v == 0) {
                    r6 = 0;
                    break;
                }
                if (v == 2) {
                    r6 = 2;
                    break;
                }
            }
        }
        if (r6) {
            if (a2 == 0) r6 = 0;
            else if (a2 == 2) r6 = 2;
        }
        if (r6 == 1) {
            NC::func_020a0268(self);
            *st = base + 3;
        } else if (r6 == 2) {
            *st = a6;
        }
    } else if (cur == base + 3) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        NC::_Z13func_020720f8v();
        if (NC::func_020eaca0()) {
            u32 m = NC::func_02073190();
            if (NC::func_02074b58(1, m)) {
                NC::_ZN12Unk_0209ea5013func_0209eb6cEv(&NC::data_021ed32c);
                *st = base + 4;
            }
        }
    } else if (cur == base + 4) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        s32 r = NC::_ZN12Unk_020a09d813func_020a1158Ei(self, (u32)(self->unk_10a << 24) >> 28);
        if (r == 1) {
            *st = a5;
        } else if (r == 0) {
            *st = base + 5;
        }
    } else if (cur == base + 5) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        s32 r7 = 1;
        s32 i = 3;
        o5 = NC::data_020cbb18;
        for (; i >= 0; i--) {
            if (o5->func_02072e88(i) && !o5->func_020729cc(i)) {
                u8 v = self->unk_eb[i];
                if (v == 0) {
                    r7 = 0;
                    break;
                }
                if (v == 2) {
                    r7 = 2;
                    break;
                }
            }
        }
        if (r7 == 1) {
            *st = base + 6;
        } else if (r7 == 2) {
            *st = a6;
        }
    } else if (cur == base + 6) {
        if (NC::func_02073090(a9)) {
            NC::func_0207312c();
            return 0x20;
        }
        u32 m = NC::func_02073190();
        if (a7 < 4) {
            m = (u16)(m | (1 << a7));
        }
        if (NC::func_02074b58(1, m)) {
            *st = base + 7;
        }
    }
    return 0x20;
}

s32 Unk_0209f304::func_0209f430(u8 *p, u32 base, u32 fail, u8 a5, u8 a6, u8 a7, u32 a8) {
    u32 v = *p;
    s32 r;
    if (v == base) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        r = NB::_ZN12Unk_020e27d413func_020a13c4Ev(this);
        if (r == 1) {
            *p = fail;
        } else if (r != 3) {
            NB::MI_CpuCopy8(NB::data_021d7350, unk_b4, 0x15fe0);
            *p = base + 1;
        }
    } else if (v == base + 1) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        r = NB::_ZN12Unk_020a09d813func_020a09fcEi(this, unk_10a_lo);
        if (r == 1) {
            *p = fail;
        } else if (r == 0) {
            if (a6 != 0) {
                NB::_ZN12Unk_020e27d413func_020a1494Ev(this);
            }
            NB::func_020a14d8(this);
            if (a6 != 0) {
                NB::func_0209fbe4(this);
                NB::func_020873e0();
            }
            NB::_ZN12Unk_0209ea5013func_0209eb74Ev(NB::data_021ed32c);
            *p = base + 2;
        }
    } else if (v == base + 2) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        r = NB::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a_hi);
        if (r == 1) {
            *p = fail;
        } else if (r == 0) {
            *p = base + 3;
        }
    } else if (v == base + 3) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        if (NB::func_02074b58(1, 1) != 0) {
            *p = base + 4;
        }
    } else if (v == base + 4) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        if (unk_eb == 1) {
            NB::func_020a0268(this);
            NB::_ZN12Unk_0209ea5013func_0209eb6cEv(NB::data_021ed32c);
            *p = base + 5;
        } else if (unk_eb == 2) {
            *p = a5;
        }
    } else if (v == base + 5) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        r = NB::_ZN12Unk_020a09d813func_020a1158Ei(this, unk_10a_hi);
        if (r == 1) {
            *p = fail;
        } else if (r == 0) {
            if (a7 != 0) {
                NB::MI_CpuCopy8(unk_b4, NB::data_021d7350, 0x15fe0);
            }
            *p = base + 6;
        }
    } else if (v == base + 6) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        if (NB::func_02074b58(1, 1) != 0) {
            *p = base + 7;
        }
    } else if (v == base + 7) {
        if (NB::func_02073090(a8) != 0) {
            NB::func_0207312c();
            return 0x20;
        }
        if (unk_eb == 1) {
            *p = base + 8;
        } else if (unk_eb == 2) {
            *p = a5;
        }
    }
    return 0x20;
}

void Unk_0209f304::func_0209f390(u8 *p, u32 base, u32 x, u32 y) {
    u32 v = *p;
    if (v == base) {
        BOOL r = TRUE;
        s32 i = 3;
        u8 *g = NB::data_020cbb18;
        for (; i >= 0; i--) {
            if (NB::_ZN12Unk_020cbb1813func_02072e88Ei(g, i) != 0 && NB::_ZN12Unk_020cbb1813func_020729ccEj(g, i) == 0) {
                if (x == NB::func_020a6358(i) || y == NB::func_020a6358(i)) {
                    if (NB::func_020a62f8(i) == 0) {
                        continue;
                    }
                }
                r = FALSE;
                break;
            }
        }
        if (r) {
            NB::_ZN12Unk_020cbb1813func_02072e20Ej(g, 1);
            *p = base + 1;
        }
    } else if (v == base + 1) {
        if (NB::_ZN12Unk_020cbb1813func_02072e24Ev(NB::data_020cbb18) == 1 && NB::func_02074d78() != 0) {
            *p = base + 2;
        }
    }
}

BOOL Unk_0209f304::func_0209f344() {
    BOOL r = TRUE;
    s32 i = 3;
    u8 *g = NB::data_020cbb18;
    for (; i >= 0; i--) {
        if (NB::_ZN12Unk_020cbb1813func_02072e88Ei(g, i) != 0 && NB::_ZN12Unk_020cbb1813func_020729ccEj(g, i) == 0 && unk_f4[i] == 0) {
            r = FALSE;
            break;
        }
    }
    return r;
}

void Unk_0209f304::func_0209f304(u8 *p, u32 base) {
    u32 v = *p;
    if (v == base) {
        if (NB::_ZN12Unk_020cbb1813func_02072e24Ev(NB::data_020cbb18) == 1) {
            *p = base + 1;
        }
    } else if (v == base + 1) {
        if (NB::func_02074a2c() != 0) {
            *p = base + 2;
        }
    }
}

extern "C" void func_0209f2d4(u32 a, u32 b) {
    if (b == 0) {
        NB::_ZN12Unk_020a099013func_020a0990EPKch(a, (u8 *)"sp_npc_gatekeeper", 0x69);
    }
    NB::_ZN12Unk_02097ff413func_02097ff4Ej(NB::func_0209750c(), 2);
    NB::_ZN12Unk_020e0f1013func_0208c134Eii(NB::func_0208a578(), 0, 1);
}

extern "C" void func_0209f294(u32 a) {
    NB::_ZN12Unk_020a099013func_020a0990EPKch(a, (u8 *)"sp_etc_sequence2", 7);
    NB::_ZN12Unk_02097ff413func_02097ff4Ej(NB::func_0209750c(), 2);
    if (NB::func_0209f23c() != 0) {
        NB::_ZN12Unk_020e0f1013func_0208c134Eii(NB::func_0208a578(), 0, 1);
        NB::_ZN12Unk_02097ff413func_0209801cEj(NB::func_0209750c(), 2);
    }
}

extern "C" void func_0209f248(void) {
    s32 r6 = NB::_ZN12Unk_020cbb1813func_020721f8Ev(NB::data_020cbb18);
    NB::func_0209750c();
    NB::_ZN12Unk_0209865c13func_02098674Ev();
    u8 *r5 = NB::func_02076db4();
    s32 i;
    for (i = 0; i < 0x20; i++) {
        NB::MI_CpuCopy8((u8 *)r6 + i * 12, NB::func_02076e1c(NB::func_02076cf0(r5)), 12);
        r5 += 0x1c;
    }
}

extern "C" u8 func_0209f23c(void) { return NB::data_021ed3a4; }

extern "C" void func_0209f230(u32 v) { NB::data_021ed3a4 = v; }

extern "C" void func_0209f224(u32 v) { NB::data_021ed390 = v; }

extern "C" void func_0209f204(void) {
    NB::func_02076c50(NB::data_021cc7d0);
    NB::func_02076c24(NB::data_021cc7d0, (u32)NB::OVERLAY_66_ID);
}

extern "C" void func_0209f1e4(void) {
    NB::func_02076c50(NB::data_021cc7d0);
    NB::func_02076c24(NB::data_021cc7d0, (u32)NB::OVERLAY_65_ID);
}

extern "C" void func_0209f1c4(void) {
    NB::func_02076c50(NB::data_021cc7d0);
    NB::func_02076c24(NB::data_021cc7d0, (u32)NB::OVERLAY_68_ID);
}

void Unk_0209f14c::func_0209f190() {
    s32 r = NB::func_021164ec(NB::data_021d7350, 0x15fe0, unk_04);
    if (r == 0) {
        unk_00 = 0;
        NB::MI_CpuCopy8(NB::data_021d7350, unk_04, 0x15fe0);
    } else {
        unk_00 = r;
    }
}

void Unk_0209f14c::func_0209f150() {
    void *dst = NB::func_020a03fc();
    if (unk_00 != 0) {
        u8 ctx[0x10];
        NB::func_021163b0(ctx, dst, unk_04);
        NB::func_021162b0(ctx, unk_08, unk_00 - 4);
    } else {
        NB::MI_CpuCopy8(unk_04, dst, 0x15fe0);
    }
}

u32 Unk_0209f14c::func_0209f14c() {
    return unk_00;
}

extern "C" void func_0209f110(s32 a) {
    BOOL r = a != 0 ? TRUE : FALSE;
    if (r) {
        ((Unk_0209f14c *)NB::func_020a0394())->func_0209f190();
    } else {
        ((Unk_0209f14c *)NB::func_020a0394())->func_0209f150();
    }
    ((Unk_0209f080 *)NB::func_020a037c())->unk_10c8 = 1;
    NB::OS_ExitThread();
}

void Unk_0209f080::func_0209f0dc() {
    unk_c0 = 0x3039;
    unk_10c4 = 0x3039;
    unk_10c8 = 0;
    NB::MI_CpuFill8(this, 0, 0xc0);
    unk_64 = 2;
}

void Unk_0209f080::func_0209f0c0() {
    if (NB::OS_IsThreadTerminated(this) == 0) {
        NB::OS_KillThread(this, 0);
    }
}

void Unk_0209f080::func_0209f08c(u32 a) {
    NB::OS_CreateThread(this, (void *)NB::func_0209f110, a, &unk_10c4, 0x1000, 0x1e);
    NB::OS_WakeupThreadDirect(this);
}

u8 Unk_0209f080::func_0209f080() {
    return unk_10c8;
}

extern "C" s32 func_0209f000(void) {
    BOOL r4 = FALSE;
    if (NB::func_020eaf18() == 3 || NB::func_020eaf18() == 4) {
        r4 = TRUE;
    }
    s32 r5 = NB::func_02073a78();
    if (r4) {
        s32 h = NB::func_0209750c();
        if (h != 0) {
            s32 q = NB::_ZN12Unk_0209865c13func_02098878Ev(h);
            if (q >= 0 && q < 4) {
                NB::func_0209ed74();
                NB::func_0209ecf8();
                NB::func_0209ec80();
                NB::func_0209f248();
                if (NB::func_020a0554() != 0) {
                    s32 t = NB::func_02067918(0);
                    NB::_ZN12Unk_020660f813func_02067990Ev();
                    NB::_ZN12Unk_020660f813func_02067a6cEv(t);
                    u8 b = 2;
                    NB::_ZN12Unk_020660f813func_02067a84EPhPv(t, &b, (u8 *)"sp_npc_gatekeeper");
                }
            }
        }
    }
    return r5;
}

extern "C" BOOL func_0209efa4(void) {
    u8 *p = NB::data_021eca50;
    if (NB::_ZN12Unk_0208722413func_02087280Ev(p) == 3) {
        s32 v = NB::_ZN12Unk_0208722413func_02087224Ev(p);
        NB::_ZN12Unk_0208722413func_02087230Ej(p, NB::func_0204fef4(p, 0x22c, v));
        u32 t = NB::data_020e24f8;
        NB::_Z13func_020721b4v();
        NB::func_020ea0b4((u8 *)"http://gamestats.gs.nintendowifi.net/acrossingds/upload.asp", p, 0x22c, t);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0209ef5c(void) {
    if (NB::_ZN12Unk_0208722413func_02087280Ev(NB::data_021eca50) == 0) {
        u32 t = NB::data_020e24f8;
        NB::_Z13func_020721b4v();
        if (NB::func_020e9eb8((u8 *)"http://gamestats.gs.nintendowifi.net/acrossingds/download.asp", NB::data_021ed824, 0x22c, t) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_0209eedc(void) {
    char a[0xc];
    char buf[0x84];
    if (NB::_ZN12Unk_0209da4413func_0209e170Ej(NB::data_021d7350, 0x14) != 0) {
        return FALSE;
    }
    NB::func_0212a360(buf, NB::data_020e24fc);
    NB::func_0212a2bc(buf, NB::data_020e2500);
    NB::func_020e9b00(a);
    NB::func_0212a2bc(buf, "?brid=");
    NB::func_0212a2bc(buf, a);
    u32 t = NB::data_020e24f8;
    NB::_Z13func_020721b4v();
    if (NB::func_020e9e38(buf, NB::data_021ed51c, 0x108, t) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0209ee60(void) {
    char a[0xc];
    char buf[0x84];
    if (NB::_ZN12Unk_0209da4413func_0209e170Ej(NB::data_021d7350, 0x14) != 0) {
        return FALSE;
    }
    NB::func_0212a360(buf, NB::data_020e24fc);
    NB::func_0212a2bc(buf, NB::data_020e24f4);
    NB::func_020e9b00(a);
    NB::func_0212a2bc(buf, "?brid=");
    NB::func_0212a2bc(buf, a);
    u32 t = NB::data_020e24f8;
    NB::_Z13func_020721b4v();
    if (NB::func_020e9e38(buf, NB::data_021ed448, 0xd2, t) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0209ee3c(void) {
    if (NB::func_020e9da0(NB::_Z13func_020721b4v()) != 0) {
        NB::data_021ed39c = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0209ee18(void) {
    if (NB::func_020e9da0(NB::_Z13func_020721b4v()) != 0) {
        NB::data_021ed394 = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0209edf4(void) {
    if (NB::func_020e9da0(NB::_Z13func_020721b4v()) != 0) {
        NB::data_021ed3a0 = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0209edcc(void) {
    if (NB::func_020ea01c(NB::_Z13func_020721b4v()) != 0) {
        NB::_ZN12Unk_0208722413func_020872c8Ev(NB::data_021eca50);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0209ed74(void) {
    if (NB::data_021ed39c != 0) {
        NB::data_021ed39c = 0;
        s32 r = NB::func_0204ff18(NB::data_021ed824, 0x22c);
        u8 *dst = NB::data_021eca50;
        if (r == 0) {
            NB::_ZN12Unk_0208722413func_0208728cEj(NB::data_021ed824, 1);
            NB::MI_CpuCopy8(NB::data_021ed824, dst, 0x22c);
        }
        NB::MI_CpuFill8(NB::data_021ed824, 0, 0x22c);
        NB::_ZN12Unk_0208722413func_02087230Ej(NB::data_021ed824, 1);
    }
}

extern "C" void func_0209ecf8(void) {
    if (NB::data_021ed394 != 0) {
        u32 buf[4];
        u32 obj[0x42];
        NB::data_021ed394 = 0;
        NB::func_0203ecdc(obj);
        NB::MI_CpuCopy8(NB::data_021ed51c, obj, 0x108);
        NB::MI_CpuFill8(NB::func_0203ecc8((u8 *)obj), 0, 0x10);
        NB::func_0211a748(buf, obj, 0x108, NB::func_02000b7c(), 0x10);
        if (NB::func_02063a04(NB::func_0203ecc8(NB::data_021ed51c), (u8 *)buf, 0x10) == 0) {
            NB::func_0203ec58(NB::data_021ed51c);
        }
        NB::MI_CpuFill8(NB::data_021ed51c, 0, 0x108);
        NB::func_0203eccc(obj);
    }
}

extern "C" void func_0209ec80() {
    u8 a[0x10];
    u8 b[0xd2];
    if (NA::data_021ed3a0 != 0) {
        NA::data_021ed3a0 = 0;
        NA::func_0203ec54(b);
        NA::MI_CpuCopy8(NA::data_021ed448, b, 0xd2);
        NA::MI_CpuFill8(NA::func_0203ec4c(b), 0, 0x10);
        NA::func_0211a748(a, b, 0xd2, NA::func_02000b7c(), 0x10);
        if (NA::func_02063a04(NA::func_0203ec4c(NA::data_021ed448), a, 0x10) == 0) {
            NA::func_0203ec18(NA::data_021ed448);
        }
        NA::MI_CpuFill8(NA::data_021ed448, 0, 0xd2);
        NA::func_0203ec50(b);
    }
}

extern "C" void func_0209ec60(u32 v) {
    s32 i;
    for (i = 0; i < 2; i++) {
        NA::data_021ed3ac[i] = NA::data_021ed3ac[i + 1];
    }
    NA::data_021ed3ac[2] = v;
}

extern "C" void func_0209ec20(u32 v) {
    u32 idx = 0xff;
    s32 i;
    for (i = 0; i < 3; i++) {
        if (NA::data_021ed3ac[i] == v) {
            idx = i;
            break;
        }
    }
    if (idx != 0xff) {
        for (; (s32)idx < 2; idx++) {
            NA::data_021ed3ac[idx] = NA::data_021ed3ac[idx + 1];
        }
        NA::data_021ed3ac[2] = 0xff;
    }
}

extern "C" void func_0209ec0c() {
    s32 i;
    for (i = 0; i < 3; i++) {
        NA::data_021ed3ac[i] = 0xff;
    }
}

extern "C" u32 func_0209ebf0() {
    s32 i;
    for (i = 2; i >= 0; i--) {
        if (NA::data_021ed3ac[i] != 0xff) {
            return NA::data_021ed3ac[i];
        }
    }
    return 4;
}

void *data_020e2534[2] = {(void *)NT::func_020a2be8, 0};

Unk_020a4238_Entry data_020e254c = {(void *)func_020a4238, 0xc7, 0xc5};

void *data_020e25bc[2] = {(void *)NT::_ZN12Unk_020e27d413func_020a3dacEv, 0};

u8 data_020e24ec = 7;

void *data_020e266c[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3588Ev, 0};

void *data_020e26dc[2] = {(void *)NT::_ZN12Unk_020a323813func_020a3868Ev, 0};

char data_020e27a4[] = "http://axing.nintendowifi.net/axmail/";

void *data_020e2564[2] = {(void *)NT::func_020a2abc, 0};

const s32 data_020d077c[3] = {0x15fe0, 0x15fe0, 0x11df4};

char *data_020e24fc = data_020e27a4;

u8 data_021ed398;

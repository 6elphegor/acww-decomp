#include "types.h"

// U126: communication manager Unk_020cbb18 (singleton data_021cc260, reached through the constant pointer
// data_020cbb18) and its helpers, 0x020720f8-0x020742f4

struct Unk_02072408_Row {
    u32 v[3];
};

struct Unk_02072408_Tail {
    u32 pad[9];
    u32 a4c[3];
    u32 a58[3];
};

class Unk_020cbb18 {
public:
    /* 0x000 */ u8 unk_00[4];
    /* 0x004 */ u16 unk_04;
    /* 0x006 */ u8 unk_06;
    /* 0x007 */ u8 unk_07;
    /* 0x008 */ u8 *unk_08;
    /* 0x00c */ u32 unk_0c[3];
    /* 0x018 */ u32 unk_18[3];
    /* 0x024 */ u8 *unk_24;
    /* 0x028 */ union {
        Unk_02072408_Row unk_28[4];
        Unk_02072408_Tail unk_28t;
    };
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u32 unk_68;
    /* 0x06c */ u8 unk_6c;
    /* 0x06d */ u8 unk_6d;
    /* 0x06e */ u8 pad_6e[2];
    /* 0x070 */ void *unk_70;
    /* 0x074 */ u8 unk_74;
    /* 0x078 */ u8 *unk_78;
    /* 0x07c */ u8 unk_7c[0xc4 - 0x7c];
    /* 0x0c4 */ u8 *unk_c4;
    /* 0x0c8 */ u32 unk_c8;
    /* 0x0cc */ u8 *unk_cc;
    /* 0x0d0 */ u8 *unk_d0;
    /* 0x0d4 */ u8 *unk_d4;
    /* 0x0d8 */ u8 *unk_d8;
    /* 0x0dc */ u32 unk_dc;
    /* 0x0e0 */ u8 *unk_e0;
    /* 0x0e4 */ u8 *unk_e4;
    /* 0x0e8 */ u32 unk_e8;
    /* 0x0ec */ u8 *unk_ec;
    /* 0x0f0 */ u32 unk_f0;
    /* 0x0f4 */ u8 *unk_f4;
    /* 0x0f8 */ u32 unk_f8;
    /* 0x0fc */ u32 unk_fc;
    /* 0x100 */ u32 unk_100;
    /* 0x104 */ u8 *unk_104;
    /* 0x108 */ u32 unk_108;
    /* 0x10c */ u32 unk_10c;
    /* 0x110 */ u8 pad_110[4];
    /* 0x114 */ s16 unk_114;
    /* 0x116 */ s16 unk_116;
    /* 0x118 */ u32 unk_118;
    /* 0x11c */ u32 unk_11c;
    /* 0x120 */ u32 unk_120;
    /* 0x124 */ u32 unk_124;
    /* 0x128 */ u16 unk_128[3];
    /* 0x12e */ u16 unk_12e;
    /* 0x130 */ u16 unk_130;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 unk_134[0x3e0];
    /* 0x514 */ u8 unk_514[0x50];

    Unk_020cbb18();
    ~Unk_020cbb18();

    u8 *func_020721ec();
    u8 *func_020721f8();
    void func_02072204(u32 v);
    u32 func_02072210();
    void func_0207221c(u32 v);
    u32 func_02072228();
    void func_02072234(u32 v);
    void func_02072240();
    void func_02072258(s32 i);
    u32 func_020722d4(s32 i);
    u32 func_0207235c();
    void func_02072368(u32 v);
    u32 func_02072374();
    void func_02072380(u32 v);
    u32 func_0207238c();
    void func_02072398(u32 v);
    void func_020723a4(void *src, u32 n);
    void func_020723d4();
    u32 func_020723e0();
    void func_020723ec(u32 v);
    void func_020723f8();

    void func_02072408();
    s16 func_02072418();
    s16 func_02072424();
    void func_02072430(s16 v);
    void func_0207243c(s16 v);
    u32 func_02072448();
    void func_02072454(u32 v);
    void func_02072460();
    void func_0207246c(u32 v);
    u32 func_02072478();
    void func_02072484(u8 *src, u32 n);
    u32 func_020724ac();
    void func_020724b8(u32 v);
    void func_020724c4();
    void func_020724d0(u32 v);
    u32 func_020724d8();
    void func_020724e0();
    u32 func_02072558();
    void func_02072560(u32 v);
    void func_02072568();
    void func_02072574(u8 *v);
    u8 *func_0207257c();
    void func_02072584();
    u32 func_02072620();
    void func_02072628(u32 v);
    void func_02072630();
    void func_0207263c(u8 *v);
    u8 *func_02072644();
    void func_0207264c();
    u32 func_02072744();
    void func_0207274c(u32 v);
    void func_02072754();
    void func_02072760(u8 *v);
    u8 *func_02072768();
    void func_02072770(u8 *src, u32 n);
    u8 *func_02072798();
    void func_020727a0(u8 *v);
    u32 func_020727f8();
    void func_02072800(u32 v);
    void func_02072808();
    void func_02072814(u8 *v);
    u8 *func_0207281c();
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *p, u32 n);
    void func_020728d4();
    u32 func_02072900();
    void func_02072908(u32 v);
    void func_02072910();
    void func_0207292c(u8 *v);
    u8 *func_02072938();
    void func_02072940();
    void func_02072960(s32 i, u32 v);
    u32 func_02072968(s32 i);
    u8 *func_02072970(u32 i);
    void func_02072994(u8 *v);
    u8 *func_02072998();
    void func_0207299c();
    void func_020729a8(u32 v);
    BOOL func_020729bc(u32 v);
    BOOL func_020729cc(u32 v);
    u32 func_020729dc(s32 a);
    u32 func_02072a04(s32 a);
    void func_02072a24(s32 a);
    void func_02072a50(s32 a);
    void func_02072a6c();
    void func_02072a84();
    void func_02072c38();
    void func_02072c50(s32 a, u32 b);
    void func_02072c60(s32 a, u32 b, u32 c);
    u32 func_02072c80(s32 a, u32 b);
    void func_02072ca4(u8 *v);
    u8 *func_02072ca8(s32 a, s32 b);
    u8 *func_02072cb8(s32 a, s32 b);
    void func_02072cfc();
    void func_02072d0c(s32 a);
    void func_02072d28(s32 a, u32 v);
    u32 func_02072d44(s32 a);

    void func_02072d5c();
    void func_02072d6c(s32 a);
    void func_02072d84(s32 a, u32 b);
    void func_02072da4(s32 a, u32 b);
    u32 func_02072dc4(s32 a);
    u8 *func_02072ddc(s32 i);
    void func_02072e18(u8 *p);
    u8 func_02072e1c();
    void func_02072e20(u32 v);
    u8 func_02072e24();
    void func_02072e28(u32 v);
    void func_02072e2c();
    s16 func_02072e34();
    BOOL func_02072e44();
    void func_02072e68();
    u32 func_02072e88(s32 i);
    void func_02072e94(s32 i, u32 v);
    BOOL func_02072e98();
    BOOL func_02072ee4(u8 *a1, u32 a2, u32 a3, u8 *s4, u32 s5, u16 s6, u8 *s7, u32 s8, u16 s9);
    void func_02072fb4();
    void func_02073044();
    void func_02073068();
};

// ======== types of unk_02071ae0.cpp ========
struct Unk_02071b10_Id16 {
    u8 b[16];
};
struct Unk_02071fa4_Id8 {
    u8 b[8];
};
class Unk_020942c8 {
public:
    Unk_020942c8();
    ~Unk_020942c8();
    u16 unk_00;
    Unk_02071fa4_Id8 unk_02;
    u16 unk_0a;
    Unk_02071fa4_Id8 unk_0c;
    s8 unk_14;
    u8 unk_15;
    BOOL func_020941e8(Unk_020942c8 *o);
};
class Unk_020dd30c {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    Unk_020dd30c();
    virtual ~Unk_020dd30c();
    void func_02062464(u8 *dst, s32 n);
    void func_02050f7c(u8 *src, s32 n);
    u8 unk_04[0x20];
};
class Unk_02071ed0 : public Unk_020942c8 {
public:
    Unk_02071ed0();
    ~Unk_02071ed0();
    Unk_02071b10_Id16 unk_16;
    struct {
        u8 lo : 4;
        u8 hi : 4;
    } unk_26;
    u8 pad_27;

    void func_02071ed0(u32 v);
    u8 func_02071ee8();
    void func_02071ef4(u8 *src);
    void func_02071f08(Unk_020dd30c *o);
    void func_02071f1c(void *x);
    void func_02071f48(u8 *dst);
    void func_02071f5c(Unk_020dd30c *o);
    void func_02071f70(void *x);
    Unk_020942c8 *func_02071fa0();
    void func_02071fa4(Unk_020942c8 *src);
    void func_02071ff0();
    void func_0207200c(u32 v);
    u8 func_0207202c();
    void func_02072040();
    BOOL func_02072084(Unk_02071ed0 *o);
};
class Unk_02071e04 {
public:
    Unk_02071e04();
    ~Unk_02071e04();
    u8 unk_00[0x200];
    Unk_02071ed0 unk_200;

    Unk_02071ed0 *func_02071e04();
    void func_02071e10(u32 v);
    void func_02071e3c(void *dst);
    u8 *func_02071e58();
    BOOL func_02071e8c(Unk_02071e04 *o);
};
class Unk_02071ae0 : public Unk_02071e04 {
public:
    Unk_02071ae0();
    ~Unk_02071ae0();
};
class Unk_02071c1c {
public:
    Unk_02071c1c();
    ~Unk_02071c1c();
    u8 unk_00[8];
    u32 func_02071c1c(u32 i);
    void func_02071c2c(u32 a, u32 b);
    void func_02071c44();
};
class Unk_02071b00 {
public:
    Unk_02071b00();
    ~Unk_02071b00();
    Unk_02071e04 unk_00[8];

    Unk_02071e04 *func_02071b00(u8 i);
    void func_02071b10();
};
class Unk_02071c5c {
public:
    Unk_02071c5c();
    ~Unk_02071c5c();
    Unk_02071e04 unk_00[8];
    Unk_02071c1c unk_1140;

    Unk_02071c1c *func_02071c5c();
    Unk_02071e04 *func_02071c68(u32 i);
    Unk_02071e04 *func_02071c88(u8 i);
    void func_02071c98(Unk_020942c8 *a, Unk_020942c8 *b);
    void func_02071d08(Unk_020942c8 *a);
};
struct Unk_020720f8_Data {
    u32 v;
    u8 f;
};
enum Unk_020720f8_Id { Unk_020720f8_Id_0 = 0 };

// ======== types of unk_02072408.cpp ========
struct Unk_020724e0_Loc {
    u8 a;
    u8 b;
    u8 buf[5];
};
struct Unk_0207264c_Loc {
    u8 a;
    u8 b;
    u8 buf[5];
    u8 buf3[5];
    u8 buf2[5];
};

// ======== types of unk_02072d5c.cpp ========

// ======== types of new_020733e4.cpp ========

// ======== types of unk_020739b8.cpp ========

// ======== unk_020739b8.cpp ========
namespace n4 {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
extern u32 *data_021c6218;
}
extern "C" {
extern u8 data_021d7350[];
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *, s32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072e24Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072584Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020724e0Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072a84Ev(Unk_020cbb18 *);
}
extern "C" {
void func_020ebc34();
}
extern "C" {
s32 func_0205c20c();
}
extern "C" {
u32 func_020e86fc(u32 *, u32);
}
extern "C" {
void _Z13func_020720f8v();
}
extern "C" {
s32 func_020eb1d8();
}
extern "C" {
void func_020b7870();
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072fb4Ev(Unk_020cbb18 *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072478Ev(Unk_020cbb18 *);
}
extern "C" {
void func_02076b9c(void *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_0207246cEj(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_020724d8Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020724d0Ej(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_0207257cEv(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072574EPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072644Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_0207263cEPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072768Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072760EPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_0207281cEv(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072814EPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072938Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_0207292cEPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072cb8Eii(Unk_020cbb18 *, u32, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072ca4EPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072ddcEi(Unk_020cbb18 *, s32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072e18EPh(Unk_020cbb18 *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072998Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072994EPh(Unk_020cbb18 *, void *);
}
extern "C" {
void func_02076240();
}
extern "C" {
void *func_02076bb0(u32, u32);
}
extern "C" {
void func_020ebb6c(u32, u32, u32, u64, u32, void *, void *);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_020721f8Ev(Unk_020cbb18 *);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_020721ecEv(Unk_020cbb18 *);
}
extern "C" {
void func_02115fb4(void *, u32, u32);
}
extern "C" {
u32 func_0209750c();
}
extern "C" {
void _ZN12Unk_0209865c13func_02098674Ev();
}
extern "C" {
u8 *func_02076db4();
}
extern "C" {
void func_02076cf0(void *);
}
extern "C" {
void *func_02076e1c();
}
extern "C" {
void func_02116048(const void *, void *, u32);
}
extern "C" {
void _ZN12Unk_0209865c13func_0209888cEv(u32);
}
extern "C" {
void *_ZN12Unk_020940a013func_02094104Ev();
}
extern "C" {
void *func_02063964(void *);
}
extern "C" {
void _ZN12Unk_0209865c13func_02098680Ev(u32);
}
extern "C" {
void *func_02076c80();
}
extern "C" {
s32 _Z13func_020721b4v();
}
extern "C" {
void func_020eb8c0(u32, void *, void *, void *, void *);
}
extern "C" {
void _Z13func_0207217cv();
}
extern "C" {
void func_020eb9fc(u32, void *);
}
extern "C" {
void func_02098e8c();
}
extern "C" {
void func_02074104(u32, u8 *, u32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072368Ej(Unk_020cbb18 *, u32);
}
extern "C" {
s32 func_020766e0(u32);
}
extern "C" {
void func_0205c228(u32, u32);
}
extern "C" {
void func_020ebc38();
}
extern "C" {
void func_020a63bc(u32, u32, u32, u32, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072e94Eij(Unk_020cbb18 *, u32, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020729a8Ej(Unk_020cbb18 *, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072d6cEi(Unk_020cbb18 *, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072d28Eij(Unk_020cbb18 *, u32, u32);
}
extern "C" {
void func_020a5c94(u32);
}
extern "C" {
u32 func_020a5f8c(u32);
}
extern "C" {
void func_02076bf0(void *, u32, u32);
}
extern "C" {
u32 func_02073168(u32);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_020727f8Ev();
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_02072744Ev(Unk_020cbb18 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_0207274cEj(Unk_020cbb18 *, u32);
}
extern "C" {
void func_02076ae8(u8 *, u8 *, u8 *);
}
extern "C" {
u32 func_0207691c(u8 *);
}
extern "C" {
void func_020b50e8();
}
extern "C" {
u32 func_020a6114(u32, u32, u32, u8 *);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072968Ei(Unk_020cbb18 *, u32);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072970Ej(Unk_020cbb18 *, u32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_020729ccEj(Unk_020cbb18 *, u32);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072d44Ei(Unk_020cbb18 *, u32);
}
extern "C" {
void func_02076c04(void *, void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072418Ev(Unk_020cbb18 *);
}
extern "C" {
void func_01ffa314();
}
extern "C" {
void func_01ffa2ec();
}
extern "C" {
s32 func_02076bd4(u8 *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072da4Eij(Unk_020cbb18 *, u32, s32);
}
extern "C" {
s32 func_02076bdc(u8 *);
}
extern "C" {
s32 func_02076bc8(u8 *);
}
extern "C" {
void func_020742f4(u8 *, u32, u32, s32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072258Ei(Unk_020cbb18 *, u32);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_020729dcEi(Unk_020cbb18 *, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072c60Eijj(Unk_020cbb18 *, u32, u32, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072a50Ei(Unk_020cbb18 *, u32);
}
extern "C" {
void func_020eb068(u32, void *, u32);
}
extern "C" {
void func_02114560(u32);
}
extern "C" {
void func_02078348();
}
extern "C" {
void func_020850e0();
}
extern "C" {
void func_020851e4();
}
extern "C" {
void func_0205267c();
}
extern "C" {
void func_0209c408();
}
extern "C" {
void func_020b1dc0();
}
extern "C" {
void func_0203eb38();
}
extern "C" {
void func_0206f81c();
}
extern "C" {
void *func_0204b1cc(u32);
}
extern "C" {
void func_020b1040(void *, u32);
}
extern "C" {
void func_020514a4(u32);
}
extern "C" {
void func_0209c5a0(u32, u32);
}
extern "C" {
void func_02095260(u32);
}
extern "C" {
void func_020ad4f4();
}
namespace Unk_02073e14_ns {
extern "C" s32 func_020741b8(s32);
}
extern "C" s32 func_02073efc(u32);
extern "C" s32 func_020740c0(s32 a, s32 b);

extern "C" void func_020741b8(s32 r4) {
    if (r4 == 4) {
        func_02078348();
        func_020850e0();
        func_020851e4();
    }
    func_0205267c();
    func_0209c408();
    func_020b1dc0();
    func_0203eb38();
    func_0206f81c();
    if (r4 < 0) {
        Unk_020cbb18 *o = data_020cbb18;
        if (_ZN12Unk_020cbb1813func_020729ccEj(o, 0) != 0 || _ZN12Unk_020cbb1813func_020729ccEj(o, 4) != 0) {
            if (r4 == -4) {
                for (u32 i = 0; i < 0x22; i++) {
                    void *r6 = func_0204b1cc(i);
                    func_020b1040(r6, 1);
                    func_020b1040(r6, 2);
                    func_020b1040(r6, 3);
                }
                func_020514a4(1);
                func_020514a4(2);
                func_020514a4(3);
                for (u32 i = 0; i < 0x33; i++) {
                    u32 r6 = (u8)i;
                    func_0209c5a0(r6, 1);
                    func_0209c5a0(r6, 2);
                    func_0209c5a0(r6, 3);
                }
            } else {
                s32 r6 = -r4;
                for (u32 i = 0; i < 0x22; i++) {
                    func_020b1040(func_0204b1cc(i), r6);
                }
                func_020514a4(r6);
                for (u32 i = 0; i < 0x33; i++) {
                    func_0209c5a0((u8)i, r6);
                }
            }
        }
    }
    if (r4 < 0) {
        if (r4 == -4) {
            for (u32 i = 0; i < 4; i++) {
                func_02095260(i);
            }
        } else {
            func_02095260(-r4);
        }
    }
    if (r4 == -4) {
        func_020ad4f4();
    }
    if ((r4 < 0 ? -r4 : r4) < 4) {
        if (r4 < 0) r4 = -r4;
        _ZN12Unk_020cbb1813func_02072258Ei(data_020cbb18, r4);
    }
}
extern "C" void func_020741b0() {
    func_01ffa2ec();
}
extern "C" void func_020741a8() {
    func_01ffa314();
}
extern "C" void func_02074104(u32 a, u8 *b, u32 c) {
    func_02114560(a);
    s32 r2 = func_02076bd4(b);
    if (r2 != 0) {
        _ZN12Unk_020cbb1813func_02072da4Eij(data_020cbb18, a, r2);
    }
    if (func_02076bdc(b) != 0) {
        s32 r3 = func_02076bc8(b);
        if (r3 < 0x18) {
            func_020742f4(b + 1, c - 1, a, r3);
        }
    } else {
        _ZN12Unk_020cbb1813func_02072258Ei(data_020cbb18, a);
        if (c > 1) {
            Unk_020cbb18 *o = data_020cbb18;
            _ZN12Unk_020cbb1813func_02072c60Eijj(o, a, _ZN12Unk_020cbb1813func_020729dcEi(o, a), c);
            _ZN12Unk_020cbb1813func_02072a50Ei(o, a);
            void *r4 = _ZN12Unk_020cbb1813func_02072cb8Eii(o, a, _ZN12Unk_020cbb1813func_020729dcEi(o, a));
            _Z13func_020720f8v();
            func_020eb068((u16)a, r4, 0x1000);
        }
    }
}
extern "C" s32 func_020740c0(s32 a, s32 b) {
    if (b < 0) return 0;
    if (a < 0) return 1;
    s32 d = a - b;
    if (d != 0) {
        if (d > 0x3fff) {
            d -= 0x7fff;
        } else if (d < -0x3fff) {
            d = 0x7fff - d;
        }
        if (d > 0) return 0;
    }
    return 1;
}
extern "C" void func_020740a0(s32 a) {
    func_020740c0(a, (s32)_ZN12Unk_020cbb1813func_02072418Ev(data_020cbb18));
}
extern "C" void func_02074054() {
    s32 i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (_ZN12Unk_020cbb1813func_02072e88Ei(o, i)) {
            if (_ZN12Unk_020cbb1813func_020729ccEj(o, i) == 0) {
                void *p = _ZN12Unk_020cbb1813func_02072ddcEi(o, i);
                func_02076c04(p, _ZN12Unk_020cbb1813func_02072d44Ei(o, i));
            }
        }
    }
}
extern "C" s32 func_02073fdc(u8 *dst, void *src, s32 n) {
    if (src == 0) {
        s32 cnt = 0;
        s32 i = 0x45;
        Unk_020cbb18 *o = data_020cbb18;
        for (; i >= 0; i--) {
            if (_ZN12Unk_020cbb1813func_02072968Ei(o, i)) {
                u8 tmp;
                tmp = i;
                func_02116048(&tmp, dst, 1);
                dst++;
                cnt++;
                void *p = _ZN12Unk_020cbb1813func_02072970Ej(o, i);
                s32 sz = func_020766e0(i);
                func_02116048(p, dst, sz);
                dst += sz;
                cnt += sz;
            }
        }
        *dst = 0x46;
        return cnt + 1;
    }
    func_02116048(src, dst, n);
    return n;
}
extern "C" u32 func_02073f18(u8 *dst, u32 id) {
    u32 r7 = 0;
    u32 size, l0c, l14;
    Unk_020cbb18 *o;
    u8 a[8];
    o = data_020cbb18;
    size = _ZN12Unk_020cbb1813func_020727f8Ev();
    u8 *r5 = (u8 *)_ZN12Unk_020cbb1813func_0207281cEv(o);
    u32 r6 = 0;
    while (r6 < size) {
        func_02116048(r5, a + 3, 5);
        l0c = a[6];
        func_02076ae8(a + 7, a, a + 1);
        u32 r4 = func_0207691c(a + 3);
        func_020b50e8();
        u32 r = func_020a6114(id, l0c, a[0], a + 2);
        if (a[2] != 0) {
            l14 = _ZN12Unk_020cbb1813func_02072744Ev(o);
            u8 *d2 = (u8 *)_ZN12Unk_020cbb1813func_02072768Ev(o) + l14;
            func_02116048(r5, d2, r4 + 5);
            l14 += r4 + 5;
            _ZN12Unk_020cbb1813func_0207274cEj(o, l14);
        } else if (r == id) {
            func_02116048(r5, dst, r4 + 5);
            dst += r4 + 5;
            r7 += r4 + 5;
        }
        r5 += r4 + 5;
        r6 += r4 + 5;
    }
    return r7;
}
extern "C" s32 func_02073efc(u32 a) {
    u32 v = func_020a5f8c(a);
    if (v - 5 <= 1) return 1;
    return 0;
}
extern "C" s32 func_02073eb0(u32 a) {
    s32 r5 = 0;
    if (func_02073efc(a)) {
        u8 *r6 = (u8 *)_ZN12Unk_020cbb1813func_02072ddcEi(data_020cbb18, a);
        func_02076bf0(r6, r5, 6);
        u32 r4 = func_020a5f8c(a);
        u32 t = func_02073168(r4);
        r6[1] = (r4 & 7) | ((t << 4) & 0xf0);
        r5 += 2;
    }
    return r5;
}
extern "C" void func_02073e14(s32 a) {
    s32 i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (_ZN12Unk_020cbb1813func_02072e88Ei(o, i)) {
            if (i == 0) {
                func_020a63bc(0, 0x3f, 1, 0, 2);
            } else {
                func_020a63bc(i, 0x3f, 0, 0, 2);
            }
        }
    }
    func_020a63bc(a, 0x3f, 0, 0, 7);
    o = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072e94Eij(o, a, 0);
    _ZN12Unk_020cbb1813func_020729a8Ej(o, (u8)(o->unk_6c - 1));
    _ZN12Unk_020cbb1813func_02072d6cEi(o, a);
    _ZN12Unk_020cbb1813func_02072d28Eij(o, a, 0);
    func_020a5c94(a);
    Unk_02073e14_ns::func_020741b8(-a);
}
extern "C" void func_02073dd8(u32 a) {
    u32 r5 = 0;
    for (s32 i = 0x45; i >= 0; i--) {
        u32 v = func_020766e0(i);
        if (v > r5) r5 = v;
    }
    data_020cbb18->unk_6d = r5;
    func_0205c228(0x4b000, a);
    func_020ebc38();
}
extern "C" void func_02073bf8(s32 a, u32 b, u32 c) {
    Unk_020cbb18 *o = data_020cbb18;
    o->unk_74 = 1;
    func_02076240();
    o->unk_70 = func_02076bb0(o->unk_6d, 4);
    _ZN12Unk_020cbb1813func_02072e18EPh(o, func_02076bb0(0x3000, 4));
    _ZN12Unk_020cbb1813func_02072ca4EPh(o, func_02076bb0(0x9000, 4));
    _ZN12Unk_020cbb1813func_0207292cEPh(o, func_02076bb0(0x92e, 4));
    _ZN12Unk_020cbb1813func_02072814EPh(o, func_02076bb0(0x92e, 4));
    _ZN12Unk_020cbb1813func_02072760EPh(o, func_02076bb0(0x92e, 4));
    _ZN12Unk_020cbb1813func_0207263cEPh(o, func_02076bb0(0x92e, 4));
    _ZN12Unk_020cbb1813func_02072574EPh(o, func_02076bb0(0x92e, 4));
    _ZN12Unk_020cbb1813func_020724d0Ej(o, func_02076bb0(0xc00, 4));
    _ZN12Unk_020cbb1813func_0207246cEj(o, func_02076bb0(0xc00, 4));
    _Z13func_020720f8v();
    func_020ebb6c(0x41444d45, 0x400040, 1, 0x4fe752, b, (void *)func_02076bb0, (void *)func_02076b9c);
    if ((u8)(a + 0xff) <= 1) {
        _Z13func_0207217cv();
        func_020eb9fc(a, (void *)func_02074104);
    } else {
        Unk_020cbb18 *p = data_020cbb18;
        u8 *r5 = (u8 *)_ZN12Unk_020cbb1813func_020721f8Ev(p);
        u8 *r6 = (u8 *)_ZN12Unk_020cbb1813func_020721ecEv(p);
        func_02115fb4(r5, 0, 0x3e0);
        func_02115fb4(r6, 0, 0x50);
        u32 l18 = func_0209750c();
        _ZN12Unk_0209865c13func_02098674Ev();
        u8 *l1c = func_02076db4();
        for (s32 i = 0; i < 0x20; i++) {
            func_02076cf0(l1c);
            func_02116048(func_02076e1c(), r5 + i * 12, 12);
            l1c += 0x1c;
        }
        _ZN12Unk_0209865c13func_0209888cEv(l18);
        func_02116048(_ZN12Unk_020940a013func_02094104Ev(), r6, 8);
        func_02116048(func_02063964((u8 *)((u32)data_021d7350 + 2)), r6 + 8, 8);
        _ZN12Unk_0209865c13func_02098680Ev(l18);
        func_02116048(func_02076c80(), r6 + 0x10, 0x40);
        _Z13func_020721b4v();
        func_020eb8c0(a, (void *)func_02074104, (void *)func_02098e8c, r6, r5);
    }
    _ZN12Unk_020cbb1813func_02072368Ej(o, c);
}
extern "C" void func_02073bac() {
    data_020cbb18->unk_74 = 1;
    _Z13func_020720f8v();
    func_020ebb6c(0x41444d45, 0x400083, 1, 0x4fe752, 2, (void *)func_02076bb0, (void *)func_02076b9c);
}
extern "C" s32 func_02073a78() {
    s32 r5 = 1;
    if (data_020cbb18->unk_74 != 0) {
        u32 *r4 = data_021c6218;
        u32 r6 = func_020e86fc(r4, 0x8000);
        func_020e86fc(r4, r6 | 0x2000);
        _Z13func_020720f8v();
        if (func_020eb1d8() == 0) {
            func_020b7870();
            r5 = 0;
        }
        func_020e86fc(r4, r6);
        Unk_020cbb18 *o = data_020cbb18;
        func_02076b9c(_ZN12Unk_020cbb1813func_02072478Ev(o));
        _ZN12Unk_020cbb1813func_0207246cEj(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_020724d8Ev(o));
        _ZN12Unk_020cbb1813func_020724d0Ej(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_0207257cEv(o));
        _ZN12Unk_020cbb1813func_02072574EPh(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_02072644Ev(o));
        _ZN12Unk_020cbb1813func_0207263cEPh(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_02072768Ev(o));
        _ZN12Unk_020cbb1813func_02072760EPh(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_0207281cEv(o));
        _ZN12Unk_020cbb1813func_02072814EPh(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_02072938Ev(o));
        _ZN12Unk_020cbb1813func_0207292cEPh(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_02072cb8Eii(o, 4, 0));
        _ZN12Unk_020cbb1813func_02072ca4EPh(o, 0);
        func_02076b9c(_ZN12Unk_020cbb1813func_02072ddcEi(o, 4));
        _ZN12Unk_020cbb1813func_02072e18EPh(o, 0);
        func_02076b9c(o->unk_70);
        o->unk_70 = 0;
        func_02076b9c(_ZN12Unk_020cbb1813func_02072998Ev(o));
        _ZN12Unk_020cbb1813func_02072994EPh(o, 0);
        _ZN12Unk_020cbb1813func_02072fb4Ev(o);
        o->unk_74 = 0;
    }
    return r5;
}
extern "C" void func_02073a0c() {
    if (data_020cbb18->unk_74 != 0) {
        u32 *const r5 = data_021c6218;
        u32 r4 = func_020e86fc(r5, 0x8000);
        func_020e86fc(r5, r4 | 0x2000);
        _Z13func_020720f8v();
        if (func_020eb1d8() == 0) {
            func_020b7870();
        }
        func_020e86fc(r5, r4);
        Unk_020cbb18 *o = data_020cbb18;
        _ZN12Unk_020cbb1813func_02072fb4Ev(o);
        o->unk_74 = 0;
    }
}
extern "C" void func_020739f8() {
    func_020ebc34();
    func_0205c20c();
}
extern "C" void func_020739b8(s32 x) {
    if (x == 0) {
        Unk_020cbb18 *o = data_020cbb18;
        if (_ZN12Unk_020cbb1813func_02072e88Ei(o, o->unk_64)) {
            if (_ZN12Unk_020cbb1813func_02072e24Ev(o)) {
                o = data_020cbb18;
                _ZN12Unk_020cbb1813func_02072584Ev(o);
                _ZN12Unk_020cbb1813func_020724e0Ev(o);
                _ZN12Unk_020cbb1813func_02072a84Ev(o);
            }
        }
    }
}
}

// ======== new_020733e4.cpp ========
namespace n5 {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
void _Z13func_020720f8v();
}
extern "C" {
void _Z13func_020722f0P12Unk_020cbb18(Unk_020cbb18 *self);
}
extern "C" {
extern u8 data_021cc250[4];
}
extern "C" {
BOOL _Z13func_02072278v(Unk_020cbb18 *self);
}
extern "C" {
BOOL func_020727a8(void *unused, u8 *buf, u32 n);
}
extern "C" {
BOOL func_02038178();
}
extern "C" {
BOOL func_02076b34();
}
extern "C" {
void func_02074054();
}
extern "C" {
void func_02133ef8(void *, u32);
}
extern "C" {
s32 func_02073fdc(u8 *dst, void *src, s32 n);
}
extern "C" {
u32 func_02073f18(u8 *dst, u32 id);
}
extern "C" {
u32 func_02076c0c(s32 a);
}
extern "C" {
s32 func_02073eb0(u32 a);
}
extern "C" {
s32 func_02073efc(u32 a);
}
extern "C" {
void func_020741b0();
}
extern "C" {
void func_020741a8();
}
extern "C" {
void func_020a5f9c(s32 a, s32 b);
}
extern "C" {
s32 func_020a5ec8();
}
extern "C" {
void func_020a5ed8(s32 a);
}
extern "C" {
s32 func_02076bd4(u8 *p);
}
extern "C" {
BOOL func_020733bc();
}
extern "C" {
BOOL func_020eaca0();
}
extern "C" {
void func_02076bf0(u8 *p, u32 a, u32 b);
}
extern "C" {
u32 func_020eaf28();
}
extern "C" {
BOOL func_020eb650();
}
extern "C" {
void func_020733e4(s32 a);
}

extern "C" void func_020733e4(s32 a) {
    Unk_020cbb18 *g = data_020cbb18;
    s32 self = g->unk_64;
    u32 mode;
    u32 saved;
    u8 *first;
    s32 flen;
    u8 *p3;
    BOOL ok;
    s32 i;
    u8 *bufs[3];
    u32 lens[3];
    u16 masks[3];
    u8 *bufs2[3];
    u32 lens2[3];
    u16 masks2[3];
    u32 lens3[3];
    u16 masks3[3];
    u8 *bufs3[3];

    if (!g->func_02072e88(self)) {
        return;
    }
    ok = g->func_02072e98();
    if (ok) {
        s16 t = g->func_02072424();
        if (t >= 0) {
            Unk_020cbb18 *o = data_020cbb18;
            o->func_02072430(t);
            o->func_02072408();
        }
    }
    if (ok) {
        if (g->func_02072e1c() == 1) {
            Unk_020cbb18 *o = data_020cbb18;
            o->func_02072e28(1);
            o->func_02072e20(3);
        }
    }
    mode = g->func_02072e24();
    if (mode != 0) {
        u32 n = g->func_02072900();
        if (n != 0) {
            Unk_020cbb18 *o = data_020cbb18;
            u32 fl = o->func_02072374();
            if (func_020727a8(o, o->func_02072938(), n)) {
                g->func_02072910();
                if (fl & 2) {
                    if (!func_02038178()) {
                        g->func_02072380(fl ^ 2);
                    }
                }
            } else {
                if (!(fl & 2)) {
                    g->func_02072380(fl | 2);
                }
            }
        }
    }
    if (ok) {
        if (mode == 2) {
            if (func_02076b34()) {
                saved = g->func_02072744();
                func_02074054();
                first = NULL;
                flen = 0;
                func_02133ef8(bufs, 12);
                func_02133ef8(lens, 12);
                func_02133ef8(masks, 6);
                for (i = 3; i >= 0; i--) {
                    if (g->func_02072e88(i)) {
                        if (!g->func_020729cc(i)) {
                            u8 *p = g->func_02072ddc(i);
                            u32 len = 0;
                            p++;
                            len++;
                            if (first == NULL) {
                                first = p;
                                flen = func_02073fdc(p, NULL, 0);
                                p += flen;
                                len += flen;
                            } else {
                                func_02073fdc(p, first, flen);
                                p += flen;
                                len += flen;
                            }
                            len += func_02073f18(p, i);
                            u32 idx = func_02076c0c(i);
                            bufs[idx] = g->func_02072ddc(i);
                            lens[idx] = len;
                            masks[idx] = 1 << i;
                        } else {
                            u32 c = g->func_02072558();
                            u32 r = func_02073f18(g->func_0207257c() + c, i);
                            if (r != 0) {
                                c += r;
                                g->func_02072560(c);
                            }
                        }
                    } else {
                        if (g->func_020729cc(0)) {
                            s32 r = func_02073eb0(i);
                            if (r != 0) {
                                s32 idx = i - 1;
                                bufs[idx] = g->func_02072ddc(i);
                                lens[idx] = r;
                                masks[idx] = 1 << i;
                            }
                        }
                    }
                }
                BOOL sent = g->func_02072ee4(bufs[0], lens[0], masks[0], bufs[1], lens[1], masks[1], bufs[2], lens[2], masks[2]);
                if (sent || g->unk_6c <= 1) {
                    Unk_020cbb18 *o = data_020cbb18;
                    o->func_0207243c(o->func_02072e34());
                    o->func_02072940();
                    o->func_02072808();
                    for (i = 3; i >= 0; i--) {
                        if (g->func_02072e88(i)) {
                            if (!g->func_020729cc(i)) {
                                func_020741b0();
                                g->func_02072d84(i, 1);
                                func_020741a8();
                                g->func_02072d28(i, 0);
                            }
                        } else if (sent) {
                            if (g->func_020729cc(0)) {
                                if (func_02073efc(i)) {
                                    func_020a5f9c(i, 7);
                                }
                            }
                        }
                    }
                    if (func_020a5ec8() == 7) {
                        func_020a5ed8(8);
                    }
                } else {
                    g->func_0207274c(saved);
                }
            } else {
                if (ok) {
                    func_02074054();
                    func_02133ef8(bufs2, 12);
                    func_02133ef8(lens2, 12);
                    func_02133ef8(masks2, 6);
                    s32 cnt = 0;
                    for (i = 3; i >= 0; i--) {
                        if (g->func_02072e88(i) && !g->func_020729cc(i)) {
                            u8 *p = g->func_02072ddc(i);
                            if (func_02076bd4(p)) {
                                bufs2[cnt] = p;
                                lens2[cnt] = 1;
                                masks2[cnt] = 1 << i;
                                cnt++;
                            }
                        }
                    }
                    if (cnt != 0) {
                        if (g->func_02072ee4(bufs2[0], lens2[0], masks2[0], bufs2[1], lens2[1], masks2[1], bufs2[2], lens2[2], masks2[2]) || g->unk_6c <= 1) {
                            for (i = 3; i >= 0; i--) {
                                if (g->func_02072e88(i) && !g->func_020729cc(i)) {
                                    g->func_02072d28(i, 0);
                                }
                            }
                        }
                    } else {
                        if (g->func_020729cc(0)) {
                            if (g->unk_6c != 4) {
                                func_020733bc();
                            }
                        }
                    }
                } else {
                    if (g->func_020729cc(0)) {
                        if (g->unk_6c != 4) {
                            func_020733bc();
                        }
                    }
                }
            }
        } else if (mode == 1) {
            if (g->func_02072e44()) {
                _Z13func_020720f8v();
                if (func_020eaca0()) {
                    func_02133ef8(lens3, 12);
                    func_02133ef8(masks3, 6);
                    func_02133ef8(bufs3, 12);
                    for (i = 3; i >= 0; i--) {
                        if (g->func_02072e88(i) && !g->func_020729cc(i)) {
                            u32 v = g->func_02072d44(i);
                            u32 idx = func_02076c0c(i);
                            if (v != 0) {
                                p3 = &data_021cc250[idx];
                                func_02076bf0(p3, v, 0x18);
                                bufs3[idx] = p3;
                                lens3[idx]++;
                                masks3[idx] = 1 << i;
                            }
                        }
                    }
                    if (g->func_02072ee4(bufs3[0], lens3[0], masks3[0], bufs3[1], lens3[1], masks3[1], bufs3[2], lens3[2], masks3[2])) {
                        for (i = 3; i >= 0; i--) {
                            if (g->func_02072e88(i) && !g->func_020729cc(i)) {
                                g->func_02072d28(i, 0);
                            }
                        }
                    }
                }
            }
        }
    }
    if (mode == 2) {
        func_020741b0();
        Unk_020cbb18 *o = data_020cbb18;
        _Z13func_020722f0P12Unk_020cbb18(o);
        func_020741a8();
        func_020741b0();
        BOOL r = _Z13func_02072278v(o);
        func_020741a8();
        u32 fl = o->func_02072374();
        if (r) {
            if (!(fl & 1)) {
                g->func_02072380(fl | 1);
            }
        } else {
            if (fl & 1) {
                if (!func_02038178()) {
                    g->func_02072380(fl ^ 1);
                }
            }
        }
        if (self == 0) {
            u16 m = 0;
            for (i = 3; i >= 0; i--) {
                if (g->func_02072e88(i) && !g->func_020729cc(i)) {
                    m |= 1 << i;
                }
            }
            u32 x = func_020eaf28();
            if (m != (m & x)) {
                u32 f = g->func_02072374();
                if (!(f & 4)) {
                    g->func_02072380(f | 4);
                }
            }
        } else {
            _Z13func_020720f8v();
            if (!func_020eb650()) {
                u32 f = g->func_02072374();
                if (!(f & 8)) {
                    g->func_02072380(f | 8);
                }
            }
        }
    }
    if (a == 0) {
        g->func_02072e2c();
    }
}
}

// ======== unk_02072d5c.cpp ========
namespace n3 {
extern "C" {
void _Z13func_020720f8v();
}
extern "C" {
u32 func_02076c0c(s32 a);
}
extern "C" {
void func_02076bdc(u8 *p);
}
extern "C" {
void func_02076bf0(u8 *p, u32 a, u32 b);
}
extern "C" {
void func_02076b18();
}
extern "C" {
s32 func_02073a78();
}
extern "C" {
void func_020a5ca4();
}
extern "C" {
void func_020a5cb4();
}
extern "C" {
void func_020a5f8c(s32 a);
}
extern "C" {
void func_020a5f9c(s32 a, s32 b);
}
extern "C" {
void func_020a63bc(u32 a, s32 b, u32 c, u32 d, u32 e);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
u32 func_020eb004();
}
extern "C" {
BOOL func_020eaca0();
}
extern "C" {
BOOL func_020eaf90();
}
extern "C" {
u32 func_020eaf28();
}
extern "C" {
BOOL func_020eb650();
}
extern "C" {
BOOL func_020eabe8(u8 *a, u32 b, u32 c, u32 d, u8 *e, u32 f, u16 g, u32 h, u8 *i, u32 j, u16 k, u32 l);
}
extern "C" {
void func_020eb068(u16 a, u8 *p, u32 sz);
}
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
BOOL func_02073090(s32 a);
}
extern "C" {
void func_0207312c();
}
extern "C" {
s32 func_02073154();
}
extern "C" {
u32 func_02073168();
}
extern "C" {
u32 func_02073190();
}
extern "C" {
void func_020731d4();
}
extern "C" {
void func_02073204();
}
extern "C" {
BOOL func_02073230(u8 a);
}
extern "C" {
void func_020732dc(u32 a);
}
extern "C" {
void func_02073340();
}
extern "C" {
void func_02073348(u32 a);
}
extern "C" {
void func_02073368();
}
extern "C" {
void func_020733b0();
}
extern "C" {
BOOL func_020733bc();
}

extern "C" BOOL func_020733bc() { return data_020cbb18->func_02072ee4(0, 0, 0, 0, 0, 0, 0, 0, 0); }
extern "C" void func_020733b0() { func_020732dc(0); }
extern "C" void func_02073368() {
    Unk_020cbb18 *o = data_020cbb18;
    o->func_02072e28(2);
    o->unk_64 = 0;
    o->func_02072e94(o->unk_64, 1);
    func_020732dc(0);
    func_020a5cb4();
    func_020a63bc(0, func_020b50e8(), 1, 0, 7);
}
extern "C" void func_02073348(u32 a) {
    data_020cbb18->func_02072e28(0);
    func_020732dc(a);
}
extern "C" void func_02073340() { func_020a5ca4(); }
extern "C" void func_020732dc(u32 a) {
    s32 i = 3;
    Unk_020cbb18 *g = data_020cbb18;
    for (; i >= 0; i--) {
        if (i < a) {
            u8 *p = g->func_02072ca8(i, 0);
            _Z13func_020720f8v();
            func_020eb068(i, p, 0x1000);
        } else if (i > a) {
            u8 *p = g->func_02072ca8(i - 1, 0);
            _Z13func_020720f8v();
            func_020eb068(i, p, 0x1000);
        }
    }
}
extern "C" BOOL func_02073230(u8 a) {
    u8 tmp;
    Unk_020cbb18 *o = data_020cbb18;
    s32 idx = o->unk_64;
    if (!o->func_02072e88(idx)) {
        func_020a5f9c(3, 4);
        o = data_020cbb18;
        u8 *p = o->func_02072ddc(4);
        func_02076bf0(p, 0, 5);
        p[1] = 0;
        return o->func_02072ee4(o->func_02072ddc(4), 2, 1, 0, 0, 0, 0, 0, 0);
    }
    if (o->func_020729cc(0)) {
        func_020a5f9c(idx, a);
    } else {
        func_020a5f9c(idx, 4);
        tmp = a;
        o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&tmp, 1);
        o->func_02072824(0, 0);
    }
    return TRUE;
}
extern "C" void func_02073204() {
    s32 a = data_020cbb18->unk_64;
    if (!data_020cbb18->func_02072e88(a)) {
        func_020a5f8c(3);
    } else {
        func_020a5f8c(a);
    }
}
extern "C" void func_020731d4() {
    s32 a = data_020cbb18->unk_64;
    if (!data_020cbb18->func_02072e88(a)) {
        func_020a5f9c(3, 7);
    } else {
        func_020a5f9c(a, 7);
    }
}
extern "C" u32 func_02073190() {
    u32 r = 0;
    s32 i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i) && !o->func_020729cc(i)) {
            r |= (u8)(1 << i);
        }
    }
    return r;
}
extern "C" u32 func_02073168() {
    u32 r = func_02073190();
    Unk_020cbb18 *o = data_020cbb18;
    s32 i = o->unk_64;
    if (i < 4) {
        r |= (u16)(1 << i);
    }
    return r;
}
extern "C" s32 func_02073154() {
    func_02073340();
    return func_02073a78();
}
extern "C" void func_0207312c() {
    Unk_020cbb18 *o = data_020cbb18;
    u32 v = o->func_02072374();
    if ((v & 0x40) == 0) {
        o->func_02072380(v | 0x40);
    }
}
extern "C" BOOL func_02073090(s32 a) {
    Unk_020cbb18 *o = data_020cbb18;
    u32 n = o->func_02072210();
    if (n != 0) {
        if (o->func_02072e98()) {
            o = data_020cbb18;
            o->func_02072234(0);
            o->func_0207221c(0);
        } else {
            u32 c = o->func_02072228();
            if (c >= n) {
                return TRUE;
            }
            o->func_02072234((u16)(c + 1));
        }
    }
    if (a >= 0) {
        u16 h = a;
        if (func_020eaf90()) {
            if (a <= 0) {
                goto zero;
            }
            _Z13func_020720f8v();
            if (func_020eb650()) {
                goto zero;
            }
            return TRUE;
        }
        u32 m = func_020eaf28();
        if (h == (h & m)) {
            goto zero;
        }
        return TRUE;
    }
    if (func_020eaf28() != 0) {
        goto zero;
    }
    return TRUE;
zero:
    return FALSE;
}
}
Unk_020cbb18::Unk_020cbb18() {
    using namespace n3; func_02073068(); }
namespace n3 {
}
Unk_020cbb18::~Unk_020cbb18() {
    using namespace n3;}
namespace n3 {
}
void Unk_020cbb18::func_02073068() {
    using namespace n3;
    func_02073044();
    func_02072fb4();
}
namespace n3 {
}
void Unk_020cbb18::func_02073044() {
    using namespace n3;
    unk_68 = 4;
    func_0207299c();
    func_02072398(0);
    func_02072380(0);
}
namespace n3 {
}
void Unk_020cbb18::func_02072fb4() {
    using namespace n3;
    func_02072e68();
    func_02072e28(0);
    func_02072e20(3);
    func_02072d5c();
    func_02072cfc();
    func_02072c38();
    unk_64 = 4;
    func_02072940();
    func_02072910();
    func_02072808();
    func_02072754();
    func_02072630();
    func_02072568();
    func_020724c4();
    func_02072460();
    func_02072408();
    func_020723f8();
    func_02072240();
    func_02072234(0);
    func_0207221c(0);
    func_02072368(0);
}
namespace n3 {
}
BOOL Unk_020cbb18::func_02072ee4(u8 *a1, u32 a2, u32 a3, u8 *s4, u32 s5, u16 s6, u8 *s7, u32 s8, u16 s9) {
    using namespace n3;
    _Z13func_020720f8v();
    if (func_020eabe8(a1, a2, a3, 0, s4, s5, s6, 0, s7, s8, s9, 0)) {
        if (func_02072e24() != 2) {
            if ((a1 != NULL || s4 != NULL || s7 != NULL) && (a2 != 0 || s5 != 0 || s8 != 0)) {
                if (a1 != NULL && a2 != 0) {
                    func_02076bdc(a1);
                }
                if (s4 != NULL && s5 != 0) {
                    func_02076bdc(s4);
                }
                if (s7 != NULL && s8 != 0) {
                    func_02076bdc(s7);
                }
                func_02072234(0);
                func_02076b18();
                func_0207221c(0x258);
            }
        } else {
            func_02072234(0);
            func_0207221c(0);
        }
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
BOOL Unk_020cbb18::func_02072e98() {
    using namespace n3;
    s32 n = unk_64;
    if (func_02072e88(n)) {
        if (n == 0) {
            if (func_020eb004() > 1) {
                _Z13func_020720f8v();
                if (func_020eaca0()) {
                    return TRUE;
                }
                return FALSE;
            }
        } else {
            _Z13func_020720f8v();
            if (func_020eaca0()) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return TRUE;
}
namespace n3 {
}
void Unk_020cbb18::func_02072e94(s32 i, u32 v) {
    using namespace n3; unk_00[i] = v; }
namespace n3 {
}
u32 Unk_020cbb18::func_02072e88(s32 i) {
    using namespace n3;
    if (i < 4) {
        return unk_00[i];
    }
    return 0;
}
namespace n3 {
}
void Unk_020cbb18::func_02072e68() {
    using namespace n3;
    for (s32 i = 3; i >= 0; i--) {
        func_02072e94(i, 0);
    }
}
namespace n3 {
}
BOOL Unk_020cbb18::func_02072e44() {
    using namespace n3;
    if (func_02072e88(unk_64) && unk_6c >= 2) {
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
s16 Unk_020cbb18::func_02072e34() {
    using namespace n3; return (s16)(unk_04 & 0x7fff); }
namespace n3 {
}
void Unk_020cbb18::func_02072e2c() {
    using namespace n3; unk_04 = unk_04 + 1; }
namespace n3 {
}
void Unk_020cbb18::func_02072e28(u32 v) {
    using namespace n3; unk_06 = v; }
namespace n3 {
}
u8 Unk_020cbb18::func_02072e24() {
    using namespace n3; return unk_06; }
namespace n3 {
}
void Unk_020cbb18::func_02072e20(u32 v) {
    using namespace n3; unk_07 = v; }
namespace n3 {
}
u8 Unk_020cbb18::func_02072e1c() {
    using namespace n3; return unk_07; }
namespace n3 {
}
void Unk_020cbb18::func_02072e18(u8 *p) {
    using namespace n3; unk_08 = p; }
namespace n3 {
}
u8 *Unk_020cbb18::func_02072ddc(s32 i) {
    using namespace n3;
    if (i >= 4) {
        return unk_08;
    }
    if (func_020729cc(i)) {
        return NULL;
    }
    if (i < unk_64) {
        return unk_08 + (i << 12);
    }
    return unk_08 + ((i - 1) << 12);
}
namespace n3 {
}
u32 Unk_020cbb18::func_02072dc4(s32 a) {
    using namespace n3; return unk_0c[func_02076c0c(a)]; }
namespace n3 {
}
void Unk_020cbb18::func_02072da4(s32 a, u32 b) {
    using namespace n3; unk_0c[func_02076c0c(a)] += b; }
namespace n3 {
}
void Unk_020cbb18::func_02072d84(s32 a, u32 b) {
    using namespace n3; unk_0c[func_02076c0c(a)] -= b; }
namespace n3 {
}
void Unk_020cbb18::func_02072d6c(s32 a) {
    using namespace n3; unk_0c[func_02076c0c(a)] = 3; }
namespace n3 {
}
void Unk_020cbb18::func_02072d5c() {
    using namespace n3;
    u32 *p = unk_0c;
    for (s32 i = 2; i >= 0; i--) {
        *p++ = 3;
    }
}
namespace n3 {
}

// ======== unk_02072408.cpp ========
namespace n2 {
extern "C" {
void func_02116048(const void *src, void *dst, u32 n);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *g, u32 i);
}
extern "C" {
s32 func_0207521c(u32 x, u32 p, u32 len, u32 b, u32 c, u32 d);
}
extern "C" {
u32 func_0207691c(u8 *p);
}
extern "C" {
void func_02076ae8(u8 *src, u8 *a, u8 *b);
}
extern "C" {
void func_02076934(void *out, u16 v);
}
extern "C" {
void func_02076b08(void *out, u32 a, u32 b);
}
extern "C" {
u32 func_020766d4(u32 a);
}
extern "C" {
u32 func_020766e0();
}
extern "C" {
u32 func_02076c0c(s32 a);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
s32 func_020a6214(u32 a);
}
extern "C" {
BOOL func_020a62f8(u32 a);
}
extern "C" {
BOOL func_020a62a0();
}
extern "C" {
void func_020a5cc0(s32 a);
}
extern "C" {
void func_020741b0();
}
extern "C" {
void func_020741a8();
}
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}

}
u32 Unk_020cbb18::func_02072d44(s32 a) {
    using namespace n2; return unk_18[func_02076c0c(a)]; }
namespace n2 {
}
void Unk_020cbb18::func_02072d28(s32 a, u32 v) {
    using namespace n2; unk_18[func_02076c0c(a)] = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072d0c(s32 a) {
    using namespace n2; unk_18[func_02076c0c(a)] += 1; }
namespace n2 {
}
void Unk_020cbb18::func_02072cfc() {
    using namespace n2;
    s32 i;
    u32 *p = unk_18;
    for (i = 2; i >= 0; i--) *p++ = 0;
}
namespace n2 {
}
u8 *Unk_020cbb18::func_02072cb8(s32 a, s32 b) {
    using namespace n2;
    if (a >= 4) return unk_24;
    if (func_020729cc(a)) return 0;
    if (a < unk_64) {
        return unk_24 + ((b + a * 3) << 12);
    }
    return unk_24 + ((b + (a - 1) * 3) << 12);
}
namespace n2 {
}
u8 *Unk_020cbb18::func_02072ca8(s32 a, s32 b) {
    using namespace n2;
    return unk_24 + ((b + a * 3) << 12);
}
namespace n2 {
}
void Unk_020cbb18::func_02072ca4(u8 *v) {
    using namespace n2; unk_24 = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_02072c80(s32 a, u32 b) {
    using namespace n2;
    return unk_28[func_02076c0c(a)].v[b];
}
namespace n2 {
}
void Unk_020cbb18::func_02072c60(s32 a, u32 b, u32 c) {
    using namespace n2;
    unk_28[func_02076c0c(a)].v[b] = c;
}
namespace n2 {
}
void Unk_020cbb18::func_02072c50(s32 a, u32 b) {
    using namespace n2; func_02072c60(a, b, 0); }
namespace n2 {
}
void Unk_020cbb18::func_02072c38() {
    using namespace n2;
    u32 *p = (u32 *)&unk_28[0];
    s32 i;
    for (i = 4; i >= 0; i--) {
        *p++ = 0;
    }
    func_02072a6c();
}
namespace n2 {
}
void Unk_020cbb18::func_02072a84() {
    using namespace n2;
    s32 outer;
    u32 i;
    u32 x;
    u32 lim;
    s32 cc;
    u32 k;
    u32 bb;
    u32 dbg;
    u32 len;
    Unk_020cbb18 *g;
    u32 rem;
    u32 n;
    u32 t;
    u8 *p;
    u16 j;
    u8 c;
    u8 a, b;
    u8 buf[5];
    outer = 2;
    g = data_020cbb18;
    do {
        for (i = 0; i < 4; i++) {
            if (func_020729cc(i)) continue;
            x = func_02072a04(i);
            if (x >= 3) continue;
            lim = func_02072c80(i, x) - 1;
            p = func_02072cb8(i, x) + 1;
            j = 0;
            do {
                func_02116048(p, &c, 1);
                p++;
                j = (u16)(j + 1);
                cc = c;
                if (cc >= 0x46) break;
                n = func_020766e0();
                func_02116048(p, func_02072970(cc), n);
                p += n;
                j = (u16)(j + n);
            } while (j < lim);
            k = 0;
            rem = (u16)(lim - j);
            while (k < rem) {
                func_02116048(p, buf, 5);
                p += 5;
                k += 5;
                t = buf[3];
                func_02076ae8(&buf[4], &a, &b);
                bb = b;
                dbg = func_020b50e8();
                len = func_0207691c(buf);
                if (func_020a62f8(unk_64) && t == 7 && a != dbg) {
                    t = func_02072620();
                    u8 *dd = func_02072644() + t;
                    func_02116048(p - 5, dd, len + 5);
                    u32 nf = t; nf += len + 5; func_02072628(nf);
                } else {
                    if (func_020a62a0() == 0 && t == 6) {
                    } else if (t == 6 && a != dbg) {
                    } else if (t == 7 && a != dbg) {
                    } else {
                        func_0207521c(buf[2], (u32)p, len, t, a, bb);
                    }
                }
                p += len;
                k += len;
            }
            func_020741b0();
            g->func_02072c50(i, x);
            g->func_02072a24(i);
            g->func_02072d0c(i);
            func_020741a8();
        }
        outer--;
    } while (outer >= 0);
}
namespace n2 {
}
void Unk_020cbb18::func_02072a6c() {
    using namespace n2;
    u32 *p = unk_28t.a4c;
    u32 *q = unk_28t.a58;
    s32 i;
    for (i = 2; i >= 0; i--) {
        *p++ = 0;
        *q++ = 0;
    }
}
namespace n2 {
}
void Unk_020cbb18::func_02072a50(s32 a) {
    using namespace n2;
    u32 i = func_02076c0c(a);
    unk_28t.a58[i] += 1;
}
namespace n2 {
}
void Unk_020cbb18::func_02072a24(s32 a) {
    using namespace n2;
    u32 i = func_02076c0c(a);
    unk_28t.a58[i] -= 1;
    u32 t = unk_28t.a4c[i] + 1;
    if (t >= 3) t = 0;
    unk_28t.a4c[i] = t;
}
namespace n2 {
}
u32 Unk_020cbb18::func_02072a04(s32 a) {
    using namespace n2;
    u32 i = func_02076c0c(a);
    if (unk_28t.a58[i] == 0) return 3;
    return unk_28t.a4c[i];
}
namespace n2 {
}
u32 Unk_020cbb18::func_020729dc(s32 a) {
    using namespace n2;
    u32 i = func_02076c0c(a);
    u32 c = unk_28t.a58[i];
    if (c >= 3) {
        return unk_28t.a4c[i];
    }
    u32 r = c + unk_28t.a4c[i];
    if (r >= 3) r -= 3;
    return r;
}
namespace n2 {
}
BOOL Unk_020cbb18::func_020729cc(u32 v) {
    using namespace n2;
    if (v == unk_64) return TRUE;
    return FALSE;
}
namespace n2 {
}
BOOL Unk_020cbb18::func_020729bc(u32 v) {
    using namespace n2;
    if (v == unk_68) return TRUE;
    return FALSE;
}
namespace n2 {
}
void Unk_020cbb18::func_020729a8(u32 v) {
    using namespace n2;
    if (v > 4) {
        unk_6c = 0;
        return;
    }
    unk_6c = v;
}
namespace n2 {
}
void Unk_020cbb18::func_0207299c() {
    using namespace n2; func_020729a8(0); }
namespace n2 {
}
u8 *Unk_020cbb18::func_02072998() {
    using namespace n2; return unk_78; }
namespace n2 {
}
void Unk_020cbb18::func_02072994(u8 *v) {
    using namespace n2; unk_78 = v; }
namespace n2 {
}
u8 *Unk_020cbb18::func_02072970(u32 i) {
    using namespace n2;
    u8 *p = func_02072998();
    if (p == 0) return 0;
    return p + func_020766d4(i);
}
namespace n2 {
}
u32 Unk_020cbb18::func_02072968(s32 i) {
    using namespace n2; return unk_7c[i]; }
namespace n2 {
}
void Unk_020cbb18::func_02072960(s32 i, u32 v) {
    using namespace n2; unk_7c[i] = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072940() {
    using namespace n2;
    s32 i;
    for (i = 0x45; i >= 0; i--) {
        func_02072960(i, 0);
    }
}
namespace n2 {
}
u8 *Unk_020cbb18::func_02072938() {
    using namespace n2; return unk_c4; }
namespace n2 {
}
void Unk_020cbb18::func_0207292c(u8 *v) {
    using namespace n2;
    unk_c4 = v;
    unk_cc = v;
}
namespace n2 {
}
void Unk_020cbb18::func_02072910() {
    using namespace n2;
    func_02072908(0);
    unk_cc = func_02072938();
}
namespace n2 {
}
void Unk_020cbb18::func_02072908(u32 v) {
    using namespace n2; unk_c8 = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_02072900() {
    using namespace n2; return unk_c8; }
namespace n2 {
}
void Unk_020cbb18::func_020728d4() {
    using namespace n2;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(this)) {
        unk_d0 = unk_cc;
        unk_d4 = unk_cc + 5;
    }
}
namespace n2 {
}
void Unk_020cbb18::func_020728a4(u8 *p, u32 n) {
    using namespace n2;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(this)) {
        func_02116048(p, unk_d4, n);
        unk_d4 += n;
    }
}
namespace n2 {
}
void Unk_020cbb18::func_02072824(u32 a, u32 b) {
    using namespace n2;
    u8 buf[8];
    if (_ZN12Unk_020cbb1813func_02072e44Ev(this)) {
        if (b - 6 <= 1) {
            func_020a5cc0(func_020b50e8());
        }
        u32 len = unk_d4 - unk_d0;
        func_02076934(buf, (u16)(len - 5));
        buf[2] = a;
        buf[3] = b;
        func_02076b08(buf + 4, func_020b50e8(), (u8)unk_64);
        func_02116048(buf, unk_d0, 5);
        unk_c8 += len;
        unk_cc = unk_d4;
    }
}
namespace n2 {
}
u8 *Unk_020cbb18::func_0207281c() {
    using namespace n2; return unk_d8; }
namespace n2 {
}
void Unk_020cbb18::func_02072814(u8 *v) {
    using namespace n2; unk_d8 = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072808() {
    using namespace n2; func_02072800(0); }
namespace n2 {
}
void Unk_020cbb18::func_02072800(u32 v) {
    using namespace n2; unk_dc = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_020727f8() {
    using namespace n2; return unk_dc; }
namespace n2 {
extern "C" BOOL func_020727a8(void *unused, u8 *buf, u32 n) {
    u32 o = data_020cbb18->func_020727f8();
    if (0x92e - o >= n) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02116048(buf, g->func_0207281c() + o, n);
        g->func_02072800(o + n);
        return TRUE;
    }
    return FALSE;
}
}
void Unk_020cbb18::func_020727a0(u8 *v) {
    using namespace n2; unk_e0 = v; }
namespace n2 {
}
u8 *Unk_020cbb18::func_02072798() {
    using namespace n2; return unk_e0; }
namespace n2 {
}
void Unk_020cbb18::func_02072770(u8 *src, u32 n) {
    using namespace n2;
    u8 *d = func_02072798();
    func_02116048(d, src, n);
    func_020727a0(d + n);
}
namespace n2 {
}
u8 *Unk_020cbb18::func_02072768() {
    using namespace n2; return unk_e4; }
namespace n2 {
}
void Unk_020cbb18::func_02072760(u8 *v) {
    using namespace n2; unk_e4 = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072754() {
    using namespace n2; func_0207274c(0); }
namespace n2 {
}
void Unk_020cbb18::func_0207274c(u32 v) {
    using namespace n2; unk_e8 = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_02072744() {
    using namespace n2; return unk_e8; }
namespace n2 {
}
void Unk_020cbb18::func_0207264c() {
    using namespace n2;
    Unk_0207264c_Loc l;
    s32 v6 = unk_64;
    if (_ZN12Unk_020cbb1813func_02072e88Ei(this, v6)) {
        u32 total = func_02072744();
        if (total != 0) {
            u8 *p = func_02072768();
            func_02116048(p, l.buf, 5);
            func_02076ae8(&l.buf[4], &l.a, &l.b);
            s32 v = func_020a6214(l.a);
            if (v >= 4) return;
            if (v == v6) {
                u32 c6 = func_02072558();
                u8 *dst = func_0207257c() + c6;
                u32 cnt = 0;
                u32 len;
                while (cnt < total) {
                    func_02116048(p, l.buf3, 5);
                    len = func_0207691c(l.buf3);
                    func_02116048(p, dst, len + 5);
                    dst += len + 5;
                    c6 += len + 5;
                    p += len + 5;
                    cnt += len + 5;
                }
                func_02072560(c6);
            } else {
                u32 c6 = 0;
                while (c6 < total) {
                    func_02116048(p, l.buf2, 5);
                    p += 5;
                    c6 += 5;
                    u32 len = func_0207691c(l.buf2);
                    func_020728d4();
                    func_020728a4(p, len);
                    func_02072824(l.buf2[2], l.buf2[3]);
                    p += len;
                    c6 += len;
                }
            }
            func_02072754();
        }
    }
}
namespace n2 {
}
u8 *Unk_020cbb18::func_02072644() {
    using namespace n2; return unk_ec; }
namespace n2 {
}
void Unk_020cbb18::func_0207263c(u8 *v) {
    using namespace n2; unk_ec = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072630() {
    using namespace n2; func_02072628(0); }
namespace n2 {
}
void Unk_020cbb18::func_02072628(u32 v) {
    using namespace n2; unk_f0 = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_02072620() {
    using namespace n2; return unk_f0; }
namespace n2 {
}
void Unk_020cbb18::func_02072584() {
    using namespace n2;
    Unk_020724e0_Loc l;
    u32 size = func_02072620();
    if (size != 0) {
        u8 *p = func_02072644();
        func_02116048(p, l.buf, 5);
        func_02076ae8(&l.buf[4], &l.a, &l.b);
        if (l.a == func_020b50e8()) {
            u32 pos = 0;
            while (pos < size) {
                func_02116048(p, l.buf, 5);
                p += 5;
                pos += 5;
                func_02076ae8(&l.buf[4], &l.a, &l.b);
                u32 t = l.b;
                u32 len = func_0207691c(l.buf);
                func_0207521c(l.buf[2], (u32)p, len, l.buf[3], l.a, t);
                p += len;
                pos += len;
            }
            func_02072630();
        }
    }
}
namespace n2 {
}
u8 *Unk_020cbb18::func_0207257c() {
    using namespace n2; return unk_f4; }
namespace n2 {
}
void Unk_020cbb18::func_02072574(u8 *v) {
    using namespace n2; unk_f4 = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072568() {
    using namespace n2; func_02072560(0); }
namespace n2 {
}
void Unk_020cbb18::func_02072560(u32 v) {
    using namespace n2; unk_f8 = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_02072558() {
    using namespace n2; return unk_f8; }
namespace n2 {
}
void Unk_020cbb18::func_020724e0() {
    using namespace n2;
    Unk_020724e0_Loc l;
    u32 size = func_02072558();
    if (size != 0) {
        u32 pos = 0;
        u8 *p = func_0207257c();
        while (pos < size) {
            func_02116048(p, l.buf, 5);
            p += 5;
            pos += 5;
            func_02076ae8(&l.buf[4], &l.a, &l.b);
            u32 t = l.b;
            u32 len = func_0207691c(l.buf);
            func_0207521c(l.buf[2], (u32)p, len, l.buf[3], l.a, t);
            p += len;
            pos += len;
        }
        func_02072568();
    }
}
namespace n2 {
}
u32 Unk_020cbb18::func_020724d8() {
    using namespace n2; return unk_fc; }
namespace n2 {
}
void Unk_020cbb18::func_020724d0(u32 v) {
    using namespace n2; unk_fc = v; }
namespace n2 {
}
void Unk_020cbb18::func_020724c4() {
    using namespace n2; func_020724b8(0); }
namespace n2 {
}
void Unk_020cbb18::func_020724b8(u32 v) {
    using namespace n2; unk_100 = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_020724ac() {
    using namespace n2; return unk_100; }
namespace n2 {
}
void Unk_020cbb18::func_02072484(u8 *src, u32 n) {
    using namespace n2;
    func_02116048(src, unk_104, n);
    unk_104 += n;
}
namespace n2 {
}
u32 Unk_020cbb18::func_02072478() {
    using namespace n2; return unk_108; }
namespace n2 {
}
void Unk_020cbb18::func_0207246c(u32 v) {
    using namespace n2; unk_108 = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072460() {
    using namespace n2; func_02072454(0); }
namespace n2 {
}
void Unk_020cbb18::func_02072454(u32 v) {
    using namespace n2; unk_10c = v; }
namespace n2 {
}
u32 Unk_020cbb18::func_02072448() {
    using namespace n2; return unk_10c; }
namespace n2 {
}
void Unk_020cbb18::func_0207243c(s16 v) {
    using namespace n2; unk_114 = v; }
namespace n2 {
}
void Unk_020cbb18::func_02072430(s16 v) {
    using namespace n2; unk_116 = v; }
namespace n2 {
}
s16 Unk_020cbb18::func_02072424() {
    using namespace n2; return unk_114; }
namespace n2 {
}
s16 Unk_020cbb18::func_02072418() {
    using namespace n2; return unk_116; }
namespace n2 {
}
void Unk_020cbb18::func_02072408() {
    using namespace n2; unk_114 = -1; }
namespace n2 {
}
void Unk_020cbb18::func_020723f8() {
    using namespace n2; unk_116 = -1; }
namespace n2 {
}

// ======== unk_02071ae0.cpp ========
namespace n1 {
extern "C" {
extern u32 OVERLAY_65_ID[];
}
extern "C" {
extern u32 OVERLAY_66_ID[];
}
extern "C" {
extern u32 OVERLAY_67_ID[];
}
extern "C" {
extern u16 data_020cb6f4;
}
extern "C" {
extern u16 data_020d03cc;
}
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
extern Unk_020720f8_Data data_021cc7d0;
}
extern "C" {
void *func_020e8574(u32 n);
}
extern "C" {
void func_020e8558(void *p);
}
extern "C" {
void func_020712dc(void *p);
}
extern "C" {
void func_0207131c(void *p);
}
extern "C" {
BOOL func_020712a0(void *t, void *buf, s16 i);
}
extern "C" {
BOOL func_020712e0(void *t, void *buf, s16 i);
}
extern "C" {
void func_020712c4(void *t);
}
extern "C" {
void func_02071304(void *t);
}
extern "C" {
void *func_02071320(void);
}
extern "C" {
void func_02071328(void *t, Unk_02071ed0 *s, s32 id);
}
extern "C" {
Unk_020942c8 *func_0209409c(Unk_020942c8 *p);
}
extern "C" {
void func_02063950(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN12Unk_020940a013func_02094128Et(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN12Unk_0206395413func_02094094EPS_(Unk_020942c8 *a, Unk_020942c8 *b);
}
extern "C" {
s32 func_02128930(void *a, void *b, u32 n);
}
extern "C" {
void func_02116048(void *src, void *dst, u32 n);
}
extern "C" {
s32 func_02076c0c(s32 i);
}
extern "C" {
s32 func_02076b18();
}
extern "C" {
void *func_0209750c();
}
extern "C" {
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
}
extern "C" {
void *func_020716cc();
}
extern "C" {
void _ZN12Unk_020718a413func_020716d4Ei(void *p, u32 v);
}
extern "C" {
s32 func_0206d49c();
}
extern "C" {
void _ZN12Unk_020e2a6013func_020a77f8EP12Unk_020e2a78(Unk_020dd30c *o, void *x);
}
extern "C" {
void _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(void *dst, Unk_020dd30c *o, u32 a, u32 b);
}

}
void Unk_020cbb18::func_020723ec(u32 v) {
    using namespace n1; unk_118 = v; }
namespace n1 {
}
u32 Unk_020cbb18::func_020723e0() {
    using namespace n1; return unk_118; }
namespace n1 {
}
void Unk_020cbb18::func_020723d4() {
    using namespace n1; unk_118 = 0; }
namespace n1 {
}
void Unk_020cbb18::func_020723a4(void *src, u32 n) {
    using namespace n1;
    u8 *d = func_02072ddc(4);
    d = d + unk_118;
    func_02116048(src, d, n);
    unk_118 += n;
}
namespace n1 {
}
void Unk_020cbb18::func_02072398(u32 v) {
    using namespace n1; unk_11c = v; }
namespace n1 {
}
u32 Unk_020cbb18::func_0207238c() {
    using namespace n1; return unk_11c; }
namespace n1 {
}
void Unk_020cbb18::func_02072380(u32 v) {
    using namespace n1; unk_120 = v; }
namespace n1 {
}
u32 Unk_020cbb18::func_02072374() {
    using namespace n1; return unk_120; }
namespace n1 {
}
void Unk_020cbb18::func_02072368(u32 v) {
    using namespace n1; unk_124 = v; }
namespace n1 {
}
u32 Unk_020cbb18::func_0207235c() {
    using namespace n1; return unk_124; }
namespace n1 {
}
void func_020722f0(Unk_020cbb18 *self) {
    using namespace n1;
    s32 i;
    Unk_020cbb18 *g;
    i = 3;
    g = data_020cbb18;
    for (; i >= 0; i--) {
        if (g->func_02072e88(i) && !g->func_020729cc(i)) {
            s32 idx = func_02076c0c(i);
            u32 v = g->func_020722d4(i);
            func_02076b18();
            if (v <= 0x258) self->unk_128[idx]++;
        }
    }
}
namespace n1 {
}
u32 Unk_020cbb18::func_020722d4(s32 i) {
    using namespace n1;
    return unk_128[func_02076c0c(i)];
}
namespace n1 {
}
BOOL func_02072278() {
    using namespace n1;
    s32 i;
    Unk_020cbb18 *g;
    i = 3;
    g = data_020cbb18;
    for (; i >= 0; i--) {
        if (g->func_02072e88(i) && !g->func_020729cc(i)) {
            func_02076c0c(i);
            u32 v = g->func_020722d4(i);
            func_02076b18();
            if (v > 0x258) return TRUE;
        }
    }
    return FALSE;
}
namespace n1 {
}
void Unk_020cbb18::func_02072258(s32 i) {
    using namespace n1;
    unk_128[func_02076c0c(i)] = 0;
}
namespace n1 {
}
void Unk_020cbb18::func_02072240() {
    using namespace n1;
    u16 *p = unk_128;
    for (s32 i = 2; i >= 0; i--) *p++ = 0;
}
namespace n1 {
}
void Unk_020cbb18::func_02072234(u32 v) {
    using namespace n1; unk_12e = v; }
namespace n1 {
}
u32 Unk_020cbb18::func_02072228() {
    using namespace n1; return unk_12e; }
namespace n1 {
}
void Unk_020cbb18::func_0207221c(u32 v) {
    using namespace n1; unk_130 = v; }
namespace n1 {
}
u32 Unk_020cbb18::func_02072210() {
    using namespace n1; return unk_130; }
namespace n1 {
}
void Unk_020cbb18::func_02072204(u32 v) {
    using namespace n1; unk_132 = v; }
namespace n1 {
}
u8 *Unk_020cbb18::func_020721f8() {
    using namespace n1; return unk_134; }
namespace n1 {
}
u8 *Unk_020cbb18::func_020721ec() {
    using namespace n1; return (u8 *)this + 0x514; }
namespace n1 {
}
void func_020721b4() {
    using namespace n1;
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    if ((u32)OVERLAY_65_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}
namespace n1 {
}
void func_0207217c() {
    using namespace n1;
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    if ((u32)OVERLAY_66_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}
namespace n1 {
}
void func_02072144() {
    using namespace n1;
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    if ((u32)OVERLAY_67_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}
namespace n1 {
}
void func_020720f8() {
    using namespace n1;
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    Unk_020720f8_Id a = (Unk_020720f8_Id)(u32)OVERLAY_65_ID;
    Unk_020720f8_Id b = (Unk_020720f8_Id)(u32)OVERLAY_66_ID;
    Unk_020720f8_Id c = (Unk_020720f8_Id)(u32)OVERLAY_67_ID;
    if (x == a || x == b || x == c) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}
namespace n1 {
}

// ======== data ========
u8 data_021cc250[4];

Unk_020cbb18 data_021cc260;

// The pointer is a constant (.rodata) that every user loads from memory: the users see it as a plain
// `Unk_020cbb18 *`, so the definition has its own declaration scope.
namespace U126_def {
extern "C" {
extern Unk_020cbb18 *const data_020cbb18;
Unk_020cbb18 *const data_020cbb18 = &data_021cc260;
}
}

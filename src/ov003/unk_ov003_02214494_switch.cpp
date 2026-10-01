// mwcc-version: 1.2/base
// mwcc-flags: -O4,s
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
    virtual void vfunc_20(u32 a);
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

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
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
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
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

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    u8 pad_00[0x14];
    s32 unk_14;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
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
    virtual BOOL vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    void func_02065f50(u32 a);
    void func_02065f90(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov003_Blk {
    s64 v[6];
};

struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d650();
    s32 func_ov009_0225bb74();
    BOOL func_ov009_0225bbdc(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    s32 func_ov009_0225d6b8(u32 a);
    void func_ov009_0225d244();
    void func_ov009_0225bc88();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
    /* 0x2b0 */
};

struct Unk_ov003_022141bc_Target {u8 pad_00[4]; u32 unk_04; u32 unk_08;};
struct Unk_ov003_0221475c_Pad {s32 v[2]; Unk_ov003_0221475c_Pad() {} ~Unk_ov003_0221475c_Pad() {}};
struct Unk_ov003_02214890_Buf {s32 w0,w1;};
class Unk_020ad700 {public: u32 func_020ad618(void *w);};


extern "C" {
extern void *data_021c620c;
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void func_020f43fc(void *p);
void func_020f440c(void *p);
BOOL func_0206ec6c();
BOOL func_0206eca4(u32 a);
BOOL func_0203d67c(void *p);
BOOL func_0203d704(void *p, u32 a);
void _ZN12Unk_020d967013func_0203e47cEi(void *self, Unk_020ddcf0 *sec);
void _ZN12Unk_020d967013func_0203e488Ei(void *self, Unk_020ddcf0 *sec);
BOOL func_020951d0();
BOOL func_020951c4();
void func_020949a0(u32 a);
void *func_020b4934();
BOOL func_020b4bbc(void *o, s32 a);
s32 func_020b50e8();
void func_020b49c4(void *o, s32 a, Unk_ov009_0225b880_Vec3 *v, u32 b, s32 c, u32 d, u32 e);
s32 func_02030814(u32 a);
BOOL func_ov003_02212430(u32 a, s32 *b, s32 *c, s32 d);
BOOL func_0206ed18();
s32 func_020ad274();
s32 _ZN12Unk_020660f813func_02067a84EPhPv(void *o, u8 *p, char *s);
void func_020b1040(u32 a, u32 b);
extern u8 data_ov003_02231138[];
extern u8 data_021ed2c0[];
Unk_020ad700 *_ZN12Unk_021ed2c013func_020ad3bcEv(void *p);
s32 _ZN12Unk_020ad70013func_020ad5f8Ev();
void func_0206ec84(u32 a, s32 b);
s32 func_020ad2c8();
u32 func_020b10c4(u32 a);
void func_020b10e0(u32 a);
s32 func_020e780c(s32 a, s32 b);
}

extern "C" {
extern u8 data_021ed2c0[];
extern u8 data_021ecc7c[];
void _ZN12Unk_020e2e54C1Ev(void *);
void _ZN12Unk_020e2e54D1Ev(void *);
Unk_020ad700 *_ZN12Unk_021ed2c013func_020ad3bcEv(void *);
void _ZN12Unk_020660f813func_02067a3cEiPv(void *, s32, void *);
void func_0209d498(void *);
void func_02116048(void *, void *, s32);
s32 func_0203f2e0(u32, void *, u32);
s32 func_020b50e8();
void func_02083d84(void *, s32, void *);
extern u16 data_ov003_02231144;
extern u8 data_ov003_02231430[];
extern u8 data_ov003_02231434[];
extern u8 data_ov003_0223144c[];
extern u8 data_ov003_02231464[];
extern char data_ov003_0223524c[];
extern char data_ov003_02235204[];
extern char data_ov003_02235228[];
extern u32 data_ov003_022312c8[];
extern u32 data_ov003_02235278;
extern u32 data_ov003_0223527c;
extern u32 data_ov003_02235280;
void func_0203c924(void *);
void func_0203c928(void *);
BOOL func_0203c6f8(void *a, void *b);
void *func_0203c6c8(void *);
s32 func_020b23a0(void *);
s32 func_020b249c(s32);
void func_020b24a4(s32, void *);
s32 func_020b24ac(s32);
void func_020547e4(void *);
void func_0204ee10(s32 *, s32 *, s32 *);
BOOL func_0203006c(s32, s32, s32);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_ov003_02218da8();
void func_0200402c(u32);
u32 func_ov003_02214f3c();
s32 func_ov003_02214f54();
}

class Unk_ov003_02230ff0 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02230ff0();
    virtual ~Unk_ov003_02230ff0();
    virtual BOOL vfunc_18();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_s10();
    virtual void vfunc_s18();
    virtual BOOL vfunc_s6c();

    void func_ov003_02214870();
    void func_ov003_02214800();
    void func_ov003_02214738();
    void func_ov003_02214704();
    void func_ov003_022146c8();
    void func_ov003_02214644();
    void func_ov003_0221461c();
    void func_ov003_022145dc();
    void func_ov003_02214578();
    void func_ov003_02214494();
    BOOL func_ov003_02214890();
    BOOL func_ov003_02214848();
    BOOL func_ov003_0221475c();
    BOOL func_ov003_02214734();
    BOOL func_ov003_02214700();
    BOOL func_ov003_022146c4();
    BOOL func_ov003_02214640();
    BOOL func_ov003_02214608();
    BOOL func_ov003_022145cc();
    BOOL func_ov003_02214568();
    void func_ov003_02214894();
    BOOL func_ov003_02214974(s32 i);

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ u16 unk_2b4; u8 unk_2b6;
    /* 0x2b7 */ u8 unk_2b7;
};

void Unk_ov003_02230ff0::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        Unk_ov009_0225e29c::vfunc_4c(a, b);
        break;
    case 0:
    case 1:
        func_ov003_02214974(1);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
        break;
    case 8:
        func_ov003_02214974(0);
        break;
    }
}
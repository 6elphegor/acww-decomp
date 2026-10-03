// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

extern "C" {
u8 data_ov065_02290810[4];
u32 data_ov065_0229081c;
void *data_ov065_02290818;
void *data_ov065_02290814;
u8 data_ov065_02290820[0x20];
u8 data_ov065_02290840[0x738];
}

namespace F02271da0 {
extern "C" {


// ov065_031: DWC-like connection/http glue (0x02271da0..0x022726a0)

struct Unk_ov065_0229080c_Big {
    u8 unk_00[0x214];
    s32 unk_214;
    u8 unk_218[0x100];
    u8 unk_318[0x100];
};

struct Unk_ov065_0229080c_Sub {
    Unk_ov065_0229080c_Big *unk_00;
};

struct Unk_ov065_0229080c_Ent {
    u8 unk_00[0xc];
};

struct Unk_ov065_0229080c {
    s32 unk_00;
    Unk_ov065_0229080c_Sub *unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
    Unk_ov065_0229080c_Ent *unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    void (*unk_2c)(s32, u32, s32);
    s32 unk_30;
    void (*unk_34)(s32, s32, char *, s32);
    s32 unk_38;
    void (*unk_3c)(void);
    void (*unk_40)(void);
    void (*unk_44)(s32, s32);
    s32 unk_48;
    u32 unk_4c;
    u32 unk_50;
};

struct Unk_ov065_0227194c_Out {
    u32 unk_00;
    u32 unk_04;
    char unk_08[0x100];
    char unk_108[0x108];
};

struct Unk_ov065_02272428_Sub {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_02272428_Rec {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov065_02290814_Sub {
    u32 unk_00;
};

struct Unk_ov065_02290814 {
    u8 unk_00[4];
    Unk_ov065_02290814_Sub *unk_04;
    s32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e[6];
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16[0xde];
    u32 unk_f4[32];
    u8 unk_174;
    u8 unk_175;
    u8 unk_176[2];
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c[0xc];
    s32 unk_198;
    u8 unk_19c[0x4c];
    u32 unk_1e8;
    u8 unk_1ec[0xc];
    u32 unk_1f8[32];
    u16 unk_278[32];
};

struct Unk_ov065_022726a0_Hdr {
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
};

extern "C" {

extern Unk_ov065_0229080c *data_ov065_0229080c;
extern Unk_ov065_02290814 *data_ov065_02290814;

u64 OS_GetTick();
s32 func_020ffc60(s32, void *);
s32 func_020ffdd8(void *);
s32 strcmp(const char *, const char *);
s32 STD_GetStringLength(const char *);
void func_02127838(char *, const char *);
s32 func_0212b854(const char *, char **, s32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(const void *, void *, u32);
s32 strncmp(const void *, const void *, u32);
void OS_SNPrintf(char *, s32, const char *, u32);

s32 func_ov065_02270e34(s32, s32);
s32 func_ov065_02270e4c();
s32 func_ov065_02270e94();
s32 func_ov065_02270508();
s32 func_ov065_02271474();
void func_ov065_02271b7c();
void func_ov065_02271ba0(void *, s32);
s32 func_ov065_022715a4();
void func_ov065_022715b0();
void func_ov065_02271698();
void func_ov065_02271d20();
void func_ov065_02271d44();
s32 func_ov065_022718ec();
s32 func_ov065_0227194c(void *, Unk_ov065_0227194c_Out *);
s32 func_ov065_0226f9e0(const char *, s32, char *, u32);
s32 func_ov065_0226fb08(void *, s32, void *, u32);
s32 func_ov065_02272d5c();
s32 func_ov065_02272dd4(s32, s32);
s32 func_ov065_02272e18();
s32 func_ov065_02275474(void *);
s32 func_ov065_0227627c(s32, s32);
u64 func_ov065_02277974();
s32 func_ov065_02277998(const char *, char *, char *, s32);
s32 func_ov065_02283d14();
s32 func_ov065_02284a80(u32, s32, s32, char *, s32, s32, s32, s32);
s32 func_ov065_022868b0(u32, u32, s32);
s32 func_ov065_022741b0(u32);
s32 func_ov065_0227412c(u32);
s32 func_ov065_022749f8(u32, u32, u32, u32, void *, s32);
s32 func_ov065_0227bd8c(Unk_ov065_0229080c_Sub *, s32, char *, char *);
s32 func_ov065_0227bf5c(void *, s32);
s32 func_ov065_0227bfb4(void *, s32);
s32 func_ov065_0227c05c(void *, s32, Unk_ov065_0227194c_Out *);
s32 func_ov065_0227c400(void *, s32, s32, s32, void (*)(), s32);
s32 func_ov065_022722fc(void *, u8 *, u8 *, char *);
s32 func_ov065_022723b8(void *, char *);
s32 func_ov065_02271ed8(s32);
s32 func_ov065_02271e8c(s32);
s32 func_ov065_02271e00(s32, char *, char *);
void func_ov065_02271fc8(s32, s32);
s32 func_ov065_022723cc(s32);

s32 func_ov065_022723b8(void *a, char *b);
s32 func_ov065_022723cc(s32 a);
void func_ov065_02272428(s32 a, s32 b, Unk_ov065_02272428_Sub *c, Unk_ov065_02272428_Sub *d);
void func_ov065_0227269c();
void func_ov065_022726a0(u8 *buf, u32 n);
}

}
}

namespace F02272734 {
extern "C" {


// ov065_032: DWC connection state machine / error-code helpers (0x02272734..0x02272fe0)

struct Unk_ov065_02290814_Ctx {
    u8 unk_00[0x0d];
    u8 unk_0d;
    u8 unk_0e[6];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17[3];
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24[8];
    u8 unk_44[0x60];
    u16 unk_a4[8];
    u8 unk_b4[0x30];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[0x20];
    u8 unk_174;
    u8 unk_175[3];
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u8 unk_184[0x14];
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d[0x0d];
    u16 unk_1aa;
    u32 unk_1ac;
    u8 unk_1b0[0x38];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0xc8];
    u8 unk_2b8[8];
    u8 unk_2c0[0xf4];
    u8 unk_3b4;
    u8 unk_3b5[0xa7];
    s32 (*unk_45c)(s32, u32);
    u32 unk_460;
};

struct Unk_ov065_02290818_Sm {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_02290840_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[6];
    s32 *unk_08;
};

extern "C" {
extern Unk_ov065_02290814_Ctx *data_ov065_02290814;
extern Unk_ov065_02290818_Sm *data_ov065_02290818;
extern Unk_ov065_02290840_Ent data_ov065_02290840[];

// callees outside this group
s32 func_ov065_022754f0(s32 a, u32 b, u32 c);
void func_ov065_022880fc(u32 a, u32 b);
void func_ov065_022880d8(u32 a, s32 b);
void func_ov065_02288094(u32 a, s32 *b);
s32 func_ov065_02289268(u32 list);
u32 func_ov065_02289274(u32 list, s32 i);
u32 func_ov065_022890b8(u32 e, void *a, u32 b);
void func_ov065_022892c8(u32 list, u32 e);
void func_ov065_0228914c(u32 e, void *a, u32 b);
void func_ov065_02289258(u32 list, u32 a, void *b, u32 c);
u32 func_ov065_022778b0(u32 a);
s32 func_ov065_0227330c(u32 e);
s32 func_ov065_02275764(u32 a);
s32 func_ov065_022745bc(u32 a, u32 b);
s32 func_ov065_022746e4(s32 a);
u32 func_ov065_02289098(u32 e);
u32 func_ov065_0228907c(u32 e);
s32 func_ov065_022740a4(u32 a);
s32 func_ov065_02274308(u32 a);
s32 func_ov065_022743e0(u32 a, u32 b);
s32 func_ov065_02270508(void);
void func_ov065_02271440(s32 a, s32 b);
void func_ov065_02271fc8(s32 a, s32 b);
void func_ov065_02270e34(s32 a, s32 b);
void func_ov065_0227627c(s32 a, s32 b);
u64 func_ov065_02277974(void);
u64 OS_GetTick(void);
s32 func_ov065_02273274(u32 a);
s32 func_ov065_02273d38(u32 a);
void func_ov065_02273230(u32 a);
void func_ov065_02273a40(void);
s32 func_ov065_02273b88(u32 a);
s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

// in this group
s32 func_ov065_02272e18(s32 a);
s32 func_ov065_02272e60(s32 a);
s32 func_ov065_02272f0c(s32 a);
BOOL func_ov065_0227295c(u32 a);
void func_ov065_02272aac(u32 a);

enum Unk_ov065_02272734_Z { Unk_ov065_02272734_Z_0 = 0 };

void func_ov065_02272734(u32 a);
void func_ov065_022727c4(u32 a, u32 b);
s32 func_ov065_022727d4(s32 a);
s32 func_ov065_022727dc(void);
void func_ov065_022727e0(s32 a, u32 b);
void func_ov065_02272850(void);
void func_ov065_02272854(void);
void func_ov065_02272858(s32 a, u32 b);
BOOL func_ov065_0227295c(u32 a);
void func_ov065_02272aac(u32 a);
void func_ov065_02272ab0(u32 list, s32 mode, u32 c);
s32 func_ov065_02272d5c(s32 a);
s32 func_ov065_02272dd4(s32 a);
s32 func_ov065_02272e18(s32 a);
s32 func_ov065_02272e60(s32 a);
s32 func_ov065_02272f0c(s32 a);
s32 func_ov065_02272f80(s32 a);
void func_ov065_02272fe0(void);
}

}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

// ov065_033: DWC-like connection state machine (0x02273230..0x02273ad0)

struct Unk_ov065_02273230_H {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_02273274_G {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[5];
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10[4];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u8 unk_24[0xd0];
    u32 unk_f4[0x29];
    s32 unk_198;
    u8 unk_19c[4];
    u8 unk_1a0;
    u8 unk_1a1[2];
    u8 unk_1a3;
    u8 unk_1a4;
    u8 unk_1a5;
    u16 unk_1a6;
    u16 unk_1a8;
    u8 unk_1aa[0x1e];
    u32 unk_1c8;
    u32 unk_1cc;
    u64 unk_1d0;
    u64 unk_1d8;
    u8 unk_1e0[0x10];
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
};

extern Unk_ov065_02273230_H *data_ov065_02290818;
extern Unk_ov065_02273274_G *data_ov065_02290814;
extern u8 data_ov065_02290840[];

extern "C" {
u64 func_ov065_02277974(void);
s32 func_ov065_022890b8(...);
void func_ov065_02277b64(u32, u32, u32);
void MIi_CpuClear32(u32, void *, u32);
s32 func_ov065_02270508(u32);
s32 func_ov065_02273b88(u32);
s32 func_ov065_02273d38(u32);
s32 func_ov065_0227532c(u32, u32, u32, u32, void *, u32);
s32 func_ov065_022746e4(s32);
s32 func_ov065_022741b0(u32);
s32 func_ov065_02277750(u32, u32, void *, u32);
s32 func_ov065_0227062c(u32);
s32 func_ov065_022849f8(u32);
s32 func_ov065_02284a18(u32);
u32 *func_ov065_02270350(u32, u32);
s32 func_ov065_02275f98(u32, u32);
u32 func_ov065_02275764(u32);
s32 func_ov065_02272f0c(u32);
u32 func_ov065_022745bc(u32, u32);

u32 func_ov065_022736fc(u32 a, u32 b);
u32 func_ov065_02273958(u32 mask);
void func_ov065_022738b4(u32 a, u32 b);
void func_ov065_02273a40(void);
s32 func_ov065_02273a70(u32 a);


void func_ov065_02273230(u32 a);
u32 func_ov065_02273274(u32 a);
u32 func_ov065_022732c0(u32 v, s32 k);
u32 func_ov065_0227330c(char *s);
u32 func_ov065_022733c0(void);
void func_ov065_02273400(void);
u32 func_ov065_02273440(void);
u32 func_ov065_02273590(u32 a, u32 b, u32 c);
u32 func_ov065_022736fc(u32 a, u32 b);
u32 func_ov065_02273760(void);
void func_ov065_022738b4(u32 a, u32 b);
u32 func_ov065_02273958(u32 mask);
void func_ov065_02273a40(void);
s32 func_ov065_02273a70(u32 a);
u32 func_ov065_02273ad0(void);
}
#undef G
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

// ov065_034: DWC connection state machine (0x02273b60..0x022745bc)

typedef s32 (*Unk_ov065_02273b60_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02273b60_Ctx {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e[2];
    u32 unk_10;
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u32 unk_24[32];
    u16 unk_a4[32];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[32];
    u8 unk_174[0x20];
    u32 unk_194;
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d;
    u8 unk_19e;
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[6];
    u16 unk_1a8;
    u8 unk_1aa[6];
    u32 unk_1b0;
    u8 unk_1b4[8];
    u32 unk_1bc;
    u64 unk_1c0;
    u32 unk_1c8;
    u32 unk_1cc;
    u8 unk_1d0[0x18];
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x2c];
    u8 *unk_2e4;
    u8 unk_2e8[4];
    u8 unk_2ec[0x40];
    s32 unk_32c;
    u32 unk_330;
    u8 unk_334[0x80];
    u8 unk_3b4;
    u8 unk_3b5;
    u8 unk_3b6[0x96];
    Unk_ov065_02273b60_Fn unk_44c;
    u32 unk_450;
};

struct Unk_ov065_022743e0_Rec {
    u32 unk_00;
    u32 unk_04;
};

extern Unk_ov065_02273b60_Ctx *data_ov065_02290814;
extern u8 data_ov065_02290810[];


extern "C" {
s32 func_ov065_02273a40(void);
s32 func_ov065_02273a70(s32);
s32 func_ov065_022736fc(s32, s32);
s32 func_ov065_022738b4(s32, s32);
s32 func_ov065_02275984(void);
s32 func_ov065_02271e8c(...);
s32 func_ov065_02275764(s32);
s32 func_ov065_02272f0c(void);
s32 func_ov065_02272f80(void);
s32 func_ov065_02275890(void);
s32 func_ov065_02275ccc(void);
s32 func_ov065_02271e00(s32, void *, s32);
s32 func_ov065_0227bfb4(u32, u32);
s32 func_ov065_0227532c(s32, u32, u32, u32, void *, s32);
s32 func_ov065_022746e4(void);
s32 func_ov065_0227627c(s32, s32);
s32 func_ov065_02288190(u32);
s32 func_ov065_02289444(u32);
s32 func_ov065_02289280(u32);
s32 func_ov065_02287260(void);
s32 func_ov065_022849f8(u32);
s32 func_ov065_02286da0(u32);
s32 func_ov065_02271474(void);
s32 func_ov065_0227c000(u32, s32, void *);
s32 func_ov065_0227c05c(u32, u32, void *);
s32 func_ov065_02277998(const char *, void *, void *, s32);
s32 func_ov065_022745bc(s32, s32);
u64 OS_GetTick(void);
s32 func_020ffc60(s32, u8 *);
s32 func_020ffdd8(u8 *);
s32 func_0212b854(void *, s32, s32);

void func_ov065_02273b60(void);
void func_ov065_02273b88(s32 a);
void func_ov065_02273c30(void);
s32 func_ov065_02273cb8(u32 *a, u32 n);
void func_ov065_02273d38(s32 a);
s32 func_ov065_022740a4(void);
s32 func_ov065_0227412c(void);
s32 func_ov065_022741b0(s32 a);
s32 func_ov065_02274308(s32 a);
s32 func_ov065_0227433c(void);
s32 func_ov065_022743e0(s32 a, s32 b);

void func_ov065_02273b60(void);
void func_ov065_02273b88(s32 a);
void func_ov065_02273c30(void);
s32 func_ov065_02273cb8(u32 *a, u32 n);
void func_ov065_02273d38(s32 a);
s32 func_ov065_022740a4(void);
s32 func_ov065_0227412c(void);
s32 func_ov065_022741b0(s32 a);
s32 func_ov065_02274308(s32 a);
s32 func_ov065_0227433c(void);
s32 func_ov065_022743e0(s32 a, s32 b);
}
#undef g
}
}

namespace F022745bc {
extern "C" {


// ov065_035: DWC-like connection message handling (0x022745bc..0x022749f8)

struct Unk_ov065_022745bc_Ctx {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[5];
    u8 unk_0d;
    u8 unk_0e[2];
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[2];
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24[8];
    u8 unk_44[0x60];
    u16 unk_a4[8];
    u8 unk_b4[0x30];
    u32 unk_e4;
    u32 unk_e8;
    u64 unk_ec;
    u32 unk_f4[0x20];
    u8 unk_174[0x10];
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c;
    u8 unk_18d[0xb];
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d[2];
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[8];
    u16 unk_1aa;
    u32 unk_1ac;
    u32 unk_1b0;
    u64 unk_1b4;
    u32 unk_1bc;
    u64 unk_1c0;
    u8 unk_1c8[0x20];
    s32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x78];
    u32 unk_330;
    u32 unk_334;
    u32 unk_338[0x1f];
    u8 unk_3b4;
    u8 unk_3b5[0x9f];
    s32 (*unk_454)(s32, u32);
    u32 unk_458;
};

struct Unk_ov065_022749f8_H {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_022749f8_Sa {
    u16 unk_0;
    u16 unk_2;
    u32 unk_4;
};

extern Unk_ov065_022745bc_Ctx *data_ov065_02290814;
extern Unk_ov065_022749f8_H *data_ov065_02290818;
extern u8 data_ov065_02290810[];

extern "C" {
u64 OS_GetTick(void);
void MIi_CpuCopy32(void *, void *, u32);
u32 func_ov065_02289274(u32, s32);
s32 func_ov065_022890b8(...);
u32 func_ov065_02289098(u32);
u32 func_ov065_0228907c(u32);
s32 func_ov065_0227532c(u32, s32, u32, u32, void *, u32);
s32 func_ov065_02272f0c(s32);
s32 func_ov065_02272f80(s32);
void func_ov065_02288190(u32);
u32 func_ov065_022733c0(void);
void func_ov065_02273230(u32);
s32 func_ov065_0227bfb4(u32, s32);
s32 func_ov065_02274308(u32);
s32 func_ov065_02271e8c(s32);
s32 func_ov065_022743e0(...);
s32 func_ov065_02273cb8(void *, u32);
s32 func_ov065_022754f0(s32, u32, u32);
s32 func_ov065_02272e18(void);
s32 func_ov065_02275764(u32);
s32 func_ov065_0227433c(void);
s32 func_ov065_022849f8(u32);
s32 func_ov065_022741b0(u32);
s32 func_ov065_022849c8(u32);
void func_ov065_02272428(u32, u32, void *, void *);
s32 func_ov065_02273d38(u32);
s32 func_ov065_02273ad0(void);
s32 func_ov065_0227412c(u32);
s32 func_ov065_02273a40(void);
s32 func_ov065_02273a70(u32);
s32 func_ov065_02273b88(u32);
s32 func_ov065_02273590(u32, u32, u32);
u32 func_ov065_022732c0(u32, s32);
s32 func_ov065_0227062c(u32);
u64 func_ov065_02277974(void);
s32 func_ov065_0227627c(u32, s32);
s32 func_ov065_022740a4(void);
s32 func_ov065_022746e4(s32);
u32 func_ov065_02274864(s32, u32, u32, u32, u32);
void func_ov065_0227470c(u32, u32 *);
s32 func_ov065_02274754(u32, u32, u16);

s32 func_ov065_022745bc(u32 a, s32 b);
s32 func_ov065_022749f8(u32 ev, s32 h, u32 p2, u16 p3, u32 *args, s32 n);
u32 func_ov065_02274864(s32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_ov065_02274754(u32 a, u32 b, u16 c);
void func_ov065_0227470c(u32 a, u32 *p);
s32 func_ov065_022746e4(s32 a);
}

}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

// ov065_036: DWC matchmaking / SB (server browser) request code (0x022751b0..0x02275c60)

struct Unk_ov065_02290814_Sub {
    u32 unk_00;
};

struct Unk_ov065_02275474_Arg {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov065_02290814 {
    u32 unk_00;
    Unk_ov065_02290814_Sub *unk_04;
    u8 unk_08[4];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f[5];
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 unk_24[0x80];
    u8 unk_a4[0x40];
    u32 unk_e4;
    u32 unk_e8;
    u8 unk_ec[8];
    u32 unk_f4[32];
    u8 unk_174;
    u8 unk_175;
    u16 unk_176;
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u32 unk_184;
    u32 unk_188;
    Unk_ov065_02275474_Arg unk_18c;
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d;
    u8 unk_19e;
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2;
    u8 unk_1a3;
    u8 unk_1a4;
    u8 unk_1a5;
    u16 unk_1a6;
    u16 unk_1a8;
    u16 unk_1aa;
    u32 unk_1ac;
    u32 unk_1b0;
    u32 unk_1b4;
    u32 unk_1b8;
    u32 unk_1bc;
    u32 unk_1c0;
    u32 unk_1c4;
    u32 unk_1c8;
    u32 unk_1cc;
    u32 unk_1d0;
    u32 unk_1d4;
    u32 unk_1d8;
    u32 unk_1dc;
    u32 unk_1e0;
    u32 unk_1e4;
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u32 unk_1f8[32];
    u16 unk_278[32];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
    u8 unk_2dc[0x54];
    u8 unk_330[0x84];
    u8 unk_3b4;
    u8 unk_3b5;
    u16 unk_3b6;
    u32 unk_3b8;
    u32 unk_3bc[32];
    u32 unk_43c;
    u32 unk_440;
    u32 unk_444;
    u32 unk_448;
    u32 unk_44c;
    u32 unk_450;
    u32 unk_454;
    u32 unk_458;
};

struct Unk_ov065_02275298_Hdr {
    char unk_00[4];
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14[32];
};

struct Unk_ov065_02290840_Ent {
    u8 unk_00;
    u8 unk_01[11];
};

extern Unk_ov065_02290814 *data_ov065_02290814;
extern u32 data_ov065_0229081c;
extern Unk_ov065_02290840_Ent data_ov065_02290840[];

extern "C" {

char *func_0212a120(const char *, s32);
s32 STD_GetStringLength(const char *);
void func_02127838(char *, const char *);
void MI_CpuCopy8(const void *, void *, u32);
void MIi_CpuCopy32(const void *, void *, u32);
void MIi_CpuClear32(u32, void *, u32);
void MIi_CpuClear16(u32, void *, u32);
void MI_CpuFill8(void *, s32, u32);
s32 OS_SNPrintf(char *, s32, const char *, ...);

s32 func_ov065_0227bd20(u32, u32, char *);
s32 func_ov065_022868b0(u32, u32, s32);
s32 func_ov065_02289324(u32, s32, u32, void *, s32);
s32 func_ov065_022892ec(u32, s32, u32, u32);
s32 func_ov065_02272f0c(void);
s32 func_ov065_022849c8(u32);
s32 func_ov065_022849d4(u32);
s32 func_ov065_02286dcc(s32, u32, u32, void *, void *, void *);
void func_ov065_02272428(u32, u32, u32, void *);
s32 func_ov065_0227269c(void);
u64 func_ov065_02277974(void);
s32 func_ov065_02289064(u32);
u32 func_ov065_02289098(u32);
u32 func_ov065_0228907c(u32);
u32 func_ov065_02289060(u32);
u32 func_ov065_02289044(u32);
s32 func_ov065_0228924c(u32);
s32 func_ov065_02261358(void);
u32 func_ov065_022778b0(u32);
s32 func_ov065_02289280(u32);
s32 func_ov065_02289364(u32, u32, u32, void *, u32, void *, u32);
s32 func_ov065_02289444(u32);
s32 func_ov065_02287260(void);
void func_ov065_02277b64(u32, u32);
void func_ov065_02273400(void);
void func_ov065_022884fc(u32, char *);


s32 func_ov065_022751b0(char *out, const char *s, s32 n);
s32 func_ov065_02275228(u32 a, u32 b, u32 c, char *d);
s32 func_ov065_02275298(u32 a, u32 b, u32 c, u32 *d, s32 e);
s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f);
s32 func_ov065_02275474(Unk_ov065_02275474_Arg *p);
s32 func_ov065_022754f0(u32 a, u32 b, u32 c);
void func_ov065_0227571c(char *buf, u32 x, u32 y, u32 z);
void func_ov065_02275764(u32 a);
void func_ov065_02275890(void);
void func_ov065_022758f4(u32 a, u32 b, u32 c, u32 d);
void func_ov065_02275984(u32 a);

static inline void Unk_ov065_02275984_Clear32(void *d, u32 n) {
    volatile u32 t = 0;
    MIi_CpuClear32(t, d, n);
}

static inline void Unk_ov065_02275984_Clear16(void *d, u32 n) {
    volatile u16 t = 0;
    MIi_CpuClear16(t, d, n);
}

s32 func_ov065_022751b0(char *out, const char *s, s32 n);
s32 func_ov065_02275228(u32 a, u32 b, u32 c, char *d);
s32 func_ov065_02275298(u32 a, u32 b, u32 c, u32 *d, s32 e);
s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f);
s32 func_ov065_02275474(Unk_ov065_02275474_Arg *p);
s32 func_ov065_022754f0(u32 a, u32 b, u32 c);
void func_ov065_0227571c(char *buf, u32 x, u32 y, u32 z);
void func_ov065_02275764(u32 a);
void func_ov065_02275890(void);
void func_ov065_022758f4(u32 a, u32 b, u32 c, u32 d);
void func_ov065_02275984(u32 a);
}
#undef G
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

// ov065_037: DWC connection helpers (0x02275c60..0x02276500)

typedef s32 (*Unk_ov065_0227627c_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290814_Sub {
    u32 unk_00;
};

struct Unk_ov065_02290814 {
    u32 unk_00;
    Unk_ov065_02290814_Sub *unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u32 unk_10;
    volatile u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u32 unk_24[32];
    u16 unk_a4[32];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[32];
    u32 unk_174[4];
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c[8];
    u32 unk_194;
    s32 unk_198;
    u8 unk_19c[4];
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[4];
    u16 unk_1a6;
    u8 unk_1a8[0x20];
    u32 unk_1c8;
    u8 unk_1cc[0x14];
    u32 unk_1e0;
    u32 unk_1e4;
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u32 unk_1f8[32];
    u16 unk_278[32];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
    u8 unk_2dc[0xd8];
    u8 unk_3b4;
    u8 unk_3b5;
    u8 unk_3b6[0x96];
    Unk_ov065_0227627c_Fn unk_44c;
    u32 unk_450;
};

struct Unk_ov065_02270344_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

extern Unk_ov065_02290814 *data_ov065_02290814;
extern u8 data_ov065_02290810[];
extern u32 data_ov065_0229081c;
extern u32 data_ov065_02290818;
extern u8 data_ov065_02290820[];


extern "C" {
void OS_SNPrintf(char *, s32, const char *, ...);
void MI_CpuFill8(void *, s32, s32);
u32 func_0212b854(const char *, char **, s32);

void func_ov065_02277b64(s32, u32, s32);
void func_ov065_02273400(void);
s32 func_ov065_02277a9c(const char *, char *, char *, s32);
s32 func_ov065_02277a6c(const char *, char *, char *, s32);
s32 func_ov065_02271e00(s32, void *, s32);
s32 func_ov065_02271e8c(void);
s32 func_ov065_022741b0(...);
s32 func_ov065_02270508(void);
s32 func_ov065_02286da0(u32);
s32 func_ov065_022849f8(u32);
s32 func_ov065_02273ad0(void);
s32 func_ov065_02273b88(u32);
u64 func_ov065_02277974(void);
s32 func_ov065_022738b4(u32, s32);
s32 func_ov065_02273274(u32);
s32 func_ov065_02273d38(u32);
s32 func_ov065_02288190(u32);
s32 func_ov065_02273a40(void);
s32 func_ov065_02270e34(s32, s32);
s32 func_ov065_02275890(void);
s32 func_ov065_022751b0(char *, const char *, s32);
s32 func_ov065_022749f8(u32, u32, u32, u32, void *, s32);
s32 func_ov065_022868b0(u32, u32, s32);
s32 func_ov065_02284a80(u32, s32, s32, char *, s32, s32, s32, s32);
s32 func_ov065_02272d5c(void);
s32 func_ov065_022703ec(void);
u32 *func_ov065_022703ac(s32);
Unk_ov065_02270344_Rec *func_ov065_02270344(s32);
s32 func_ov065_022849c0(u32, void *);
s32 func_ov065_02284b8c(u32, const char *, s32);
s32 func_ov065_02284b94(u32, u32);

void func_ov065_02275df4(void);
u32 func_ov065_02275e64(s32, s32);
void func_ov065_0227627c(s32, s32);
void func_ov065_02276304(void);

BOOL func_ov065_02275c60(void);
void func_ov065_02275c74(void);
s32 func_ov065_02275ccc(void);
s32 func_ov065_02275d58(u8 **out);
s32 func_ov065_02275dd0(u32 *out);
void func_ov065_02275df4(void);
u32 func_ov065_02275e3c(void);
u32 func_ov065_02275e50(void);
u32 func_ov065_02275e64(s32 idx, s32 n);
BOOL func_ov065_02275f98(u32 v, s32 n);
void func_ov065_02275fdc(u32 a);
BOOL func_ov065_02276000(s32 a, u32 b);
void func_ov065_02276124(u32 a, s32 b, u8 *c);
void func_ov065_02276254(void);
void func_ov065_0227627c(s32 a, s32 b);
void func_ov065_02276304(void);
void func_ov065_02276324(u32 a, u32 b, const char *s);
void func_ov065_02276374(u32 a, u32 b);
void func_ov065_02276500(u32 a0, u32 b, u32 c, u32 d, s32 s0, u8 *e);
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

// ov065_038: DWC connection state machine (0x02276698..0x02276f4c)

typedef s32 (*Unk_ov065_02276e44_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02276e44_Obj {
    u8 unk_00[0xb4];
    s32 unk_b4;
};

struct Unk_ov065_02276f4c_Ctx {
    u32 unk_00;
    u32 *unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_ov065_02276e44_Obj *unk_10;
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 unk_24[0xc0];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec[2];
    u32 unk_f4[32];
    u8 unk_174[8];
    u32 unk_17c[2];
    u32 unk_184[2];
    u8 unk_18c[12];
    u32 unk_198;
    u8 unk_19c[6];
    u8 unk_1a2;
    u8 unk_1a3[2];
    u8 unk_1a5;
    u8 unk_1a6[10];
    u32 unk_1b0;
    u32 unk_1b4[2];
    u32 unk_1bc;
    u32 unk_1c0[2];
    u8 unk_1c8[0x18];
    u32 unk_1e0[2];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0xe8];
    u32 unk_2d8;
    u32 unk_2dc;
    u32 unk_2e0;
    u32 unk_2e4;
    u32 unk_2e8;
    u8 unk_2ec[0x40];
    u32 unk_32c;
    u8 unk_330[0x84];
    u8 unk_3b4;
    u8 unk_3b5;
    u16 unk_3b6;
    u32 unk_3b8;
    u8 unk_3bc[0x80];
    u32 unk_43c;
    u32 unk_440;
    u32 unk_444[2];
    u32 unk_44c;
    u32 unk_450;
    u32 unk_454;
    u32 unk_458;
    u32 unk_45c;
    u32 unk_460;
};

struct Unk_ov065_02276f4c_Pad {
    s32 v[1];
    Unk_ov065_02276f4c_Pad() {}
    ~Unk_ov065_02276f4c_Pad() {}
};

struct Unk_ov065_02290810 {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
};

extern Unk_ov065_02276f4c_Ctx *data_ov065_02290814;
extern Unk_ov065_02290810 data_ov065_02290810;
extern char data_ov065_0228e16c[];


extern "C" {
u64 OS_GetTick(void);
u64 func_02132ef8(u64 a, u64 b);
void MIi_CpuClear32(u32 v, void *dst, u32 n);
void MI_CpuFill8(void *dst, s32 v, u32 n);
s32 memcmp(void *, void *, u32);
u64 func_ov065_02277974(void);

s32 func_ov065_0228758c(void *, char *, void *, void *);
s32 func_ov065_02286934(char *, void *, void *);
s32 func_ov065_02270e4c(void);
s32 func_ov065_02288318(void *);
s32 func_ov065_02284ba4(u32);
s32 func_ov065_0227433c(void);
s32 func_ov065_022745bc(u32, u32);
s32 func_ov065_022746e4(void);
s32 func_ov065_0227627c(s32, s32);
s32 func_ov065_02275764(u32);
s32 func_ov065_02272f0c(...);
s32 func_ov065_0227412c(u32);
s32 func_ov065_0227532c(s32, u32, u32, u32, void *, u32);
s32 func_ov065_02276304(void);
s32 func_ov065_022741b0(u32);
s32 func_ov065_02273b60(void);
s32 func_ov065_02272428(u32, u32, u32, void *);
s32 func_ov065_022892b0(u32);
s32 func_ov065_02288190(void *);
s32 func_ov065_02286c3c(void);
s32 func_ov065_02273ad0(void);
s32 func_ov065_02273760(void);
s32 func_ov065_02273440(void);
s32 func_ov065_02272fe0(void);
s32 func_ov065_022758f4(s32, u32, u32, u32);
s32 func_ov065_02289460(u32, u32, u32, u32, u32, u32, u32, void *, u32);
s32 func_ov065_02271e00(s32, void *, s32);
s32 func_ov065_02272f80(void);
s32 func_ov065_02275ccc(void);
s32 func_ov065_02272ab0(void);
s32 func_ov065_022849c8(u32);
s32 func_ov065_022849d4(u32);
s32 func_ov065_02288380(void *, s32, s32, u32, u32, u32, u32, void *, void *, void *, void *, void *, void *, u32);
s32 func_ov065_02272e60(s32);
s32 func_ov065_02288344(void *, void *);
s32 func_ov065_0228836c(void *, void *);
s32 func_ov065_02288358(void *, void *);
s32 func_ov065_02272858(void);
s32 func_ov065_02272854(void);
s32 func_ov065_02272850(void);
s32 func_ov065_022727e0(void);
s32 func_ov065_022727dc(void);
s32 func_ov065_022727d4(void);
s32 func_ov065_022727c4(void);
s32 func_ov065_02272734(void);
s32 func_ov065_022726a0(void);
s32 func_ov065_02273400(void);
s32 func_ov065_02275984(u32);
s32 func_ov065_02276e44(u32 a);

s32 func_ov065_02276698(s32 a0, u32 ip, s32 port, char *name, void *arg);
void func_ov065_0227674c(u32 a);
s32 func_ov065_02276cc0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
void func_ov065_02276db4(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
s32 func_ov065_02276e44(u32 a);
void func_ov065_02276f4c(Unk_ov065_02276f4c_Ctx *a0, u32 a1, u32 *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);
}
#undef g
}
}

namespace F0227702c {
extern "C" {


// ov065_039: DWC-like send/receive channel table (0x0227702c..0x022778b0)

struct Unk_ov065_02277418_Rec {
    u8 *unk_00;
    u8 *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u16 unk_20;
    u16 unk_22;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02290f78 {
    Unk_ov065_02277418_Rec unk_000[32];
    void (*unk_600)(...);
    void (*unk_604)(...);
    void (*unk_608)(...);
    void (*unk_60c)(...);
    u16 unk_610;
    u16 unk_612;
};

struct Unk_ov065_02277054_Sm {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_022778b0_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_0227762c_Hdr {
    u32 unk_00;
    u16 unk_04;
    u8 unk_06[2];
};

extern "C" {
extern u8 data_ov065_02290810[];
extern u8 *data_ov065_02290814;
extern Unk_ov065_02277054_Sm *data_ov065_02290818;
extern Unk_ov065_02290f78 *data_ov065_02290f78;
extern Unk_ov065_022778b0_Rng data_ov065_02290f7c;

void *func_ov065_02277b8c(s32, s32);
u64 func_ov065_02277974(void);
s32 func_ov065_02270418(s32);
s32 func_ov065_02270428(s32);
void func_ov065_02270e34(s32, s32);
s32 func_ov065_02270e4c(void);
s32 func_ov065_02270584(u8 **);
s32 func_ov065_022705d0(void);
s32 func_ov065_0227051c(s32);
s32 func_ov065_02270310(s32);
s32 func_ov065_022849cc(s32);
s32 func_ov065_022849d8(s32);
s32 func_ov065_02284a24(s32);
void func_ov065_02284a2c(s32, void *, s32, s32);
void func_ov065_02276124(s32, s32, s32);
u64 OS_GetTick(void);
void MI_CpuCopy8(void *, void *, s32);
void MI_CpuFill8(void *, s32, s32);
s32 memcmp(void *, void *, s32);
void func_0212a2ec(void *, void *, s32);
void OS_GetMacAddress(void *);
u64 func_02132ef8(u64, u64);

void func_ov065_0227702c(void);
BOOL func_ov065_02277038(void);
s32 func_ov065_02277054(s32 m, u8 *p);
s32 func_ov065_02277140(s32 id);
void func_ov065_02277160(s32 a, void *b, s32 c);
void func_ov065_02277190(s32 id, void *buf, s32 n);
void func_ov065_02277230(s32 id, void *buf, s32 n);
void func_ov065_022772b0(s32 a, void *buf, s32 n);
void func_ov065_02277320(s32 a, void *buf, s32 n);
void func_ov065_022773d4(s32 id, void *buf, s32 n, s32 f);
u32 func_ov065_022773f0(s32 id);
u32 func_ov065_02277404(s32 id);
Unk_ov065_02277418_Rec *func_ov065_02277418(s32 id);
void func_ov065_02277428(void);
void func_ov065_02277434(s32 id);
void func_ov065_0227746c(void);
void func_ov065_02277588(s32 a, s32 b);
void func_ov065_022775b8(s32 a, void *b, s32 c, s32 d);
void func_ov065_022775e8(void *p);
s32 func_ov065_02277618(s32 m);
u32 func_ov065_0227762c(void *src);
void func_ov065_02277660(void *p, u32 a, u32 b);
void func_ov065_02277680(u32 v);
void func_ov065_022776a0(void *cb);
void func_ov065_022776b4(void *cb);
void func_ov065_022776c8(void *cb);
void func_ov065_022776dc(s32 id);
BOOL func_ov065_02277714(s32 id, u8 *buf, s32 n);
BOOL func_ov065_02277750(s32 m, s32 id, u8 *buf, s32 n);
BOOL func_ov065_02277824(s32 id, u8 *buf, s32 n);
BOOL func_ov065_02277840(s32 id, s32 m);
BOOL func_ov065_022778a4(s32 id);
u32 func_ov065_022778b0(u32 n);

void func_ov065_0227702c(void);
BOOL func_ov065_02277038(void);
s32 func_ov065_02277054(s32 m, u8 *p);
}

}
}

namespace F0227702c {
extern "C" {


s32 func_ov065_02277054(s32 m, u8 *p) {
    u8 *g = data_ov065_02290814;
    if (g == NULL) {
        return 1;
    }
    if (p == NULL) {
        return 3;
    }
    switch (m) {
    case 0: {
        Unk_ov065_02277054_Sm *s;
        if (*(s32 *)(g + 0x198) == 0x13) {
            return 1;
        }
        if (p[0] != 0 && p[1] <= 1) {
            return 3;
        }
        s = data_ov065_02290818;
        if (s == NULL) {
            s = (Unk_ov065_02277054_Sm *)func_ov065_02277b8c(4, 0x20);
            data_ov065_02290818 = s;
            if (s == NULL) {
                return 4;
            }
        }
        s->unk_00 = p[0];
        data_ov065_02290818->unk_01 = p[1];
        {
            s32 z = 0;
            data_ov065_02290818->unk_02 = z;
            data_ov065_02290818->unk_03 = z;
            data_ov065_02290818->unk_04 = *(u32 *)(p + 4);
            data_ov065_02290818->unk_08 = z;
            data_ov065_02290818->unk_0c = z;
        }
        data_ov065_02290818->unk_10 = func_ov065_02277974();
        data_ov065_02290818->unk_18 = func_ov065_02277974();
        return 0;
    }
    case 1:
        if (*(u32 *)p != 0) {
            data_ov065_02290810[0] = 1;
        } else {
            data_ov065_02290810[0] = 0;
        }
        data_ov065_02290810[1] = 0;
        return 0;
    }
    return 2;
}

}
}

namespace F0227702c {
extern "C" {


BOOL func_ov065_02277038(void) {
    if (data_ov065_02290810[0] == 0 || data_ov065_02290810[1] == 0) {
        return FALSE;
    }
    return TRUE;
}

}
}

namespace F0227702c {
extern "C" {


void func_ov065_0227702c(void) {
    data_ov065_02290810[1] = 0;
}

}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276f4c(Unk_ov065_02276f4c_Ctx *a0, u32 a1, u32 *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    g = a0;
    a0->unk_00 = a1;
    g->unk_04 = a2;
    g->unk_08 = a3;
    g->unk_10 = 0;
    g->unk_1c = 0;
    g->unk_1a = 0;
    g->unk_e4 = 0;
    g->unk_198 = 0;
    g->unk_0f = 0;
    g->unk_19 = 0;
    g->unk_1a5 = 0;
    g->unk_1e8 = 0;
    g->unk_2dc = a4;
    g->unk_2e0 = a5;
    g->unk_2e4 = a6;
    g->unk_2e8 = a7;
    MI_CpuFill8(g->unk_2ec, 0, 0x40);
    g->unk_32c = 0;
    g->unk_44c = 0;
    g->unk_450 = 0;
    g->unk_45c = 0;
    g->unk_460 = 0;
    func_ov065_02273400();
    data_ov065_02290810.unk_00 = 0;
    data_ov065_02290810.unk_01 = 0;
    data_ov065_02290810.unk_02 = 0;
    func_ov065_02275984(0);
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02276e44(u32 a) {
    Unk_ov065_02276f4c_Ctx *c;
    s32 i;
    s32 z;
    s32 r;
    if (g->unk_10 != 0) {
        return 0;
    }
    g->unk_1e8 = a;
    i = 0;
    z = i;
    for (; i < 5; i++) {
        c = g;
        s32 h = func_ov065_022849c8(*c->unk_04);
        s32 h2 = func_ov065_022849d4(*c->unk_04);
        r = func_ov065_02288380(&g->unk_10, h, h2, c->unk_2dc, c->unk_2e0, 1, 1, (void *)func_ov065_02272858, (void *)func_ov065_02272854, (void *)func_ov065_02272850, (void *)func_ov065_022727e0, (void *)func_ov065_022727dc, (void *)func_ov065_022727d4, z);
        if (r == 0) {
            break;
        }
        if (r != 3 || i == 4) {
            func_ov065_02272e60(r);
            return r;
        }
    }
    g->unk_1c = 0;
    g->unk_1a = 0;
    func_ov065_02288344(g->unk_10, (void *)func_ov065_022727c4);
    func_ov065_0228836c(g->unk_10, (void *)func_ov065_02272734);
    func_ov065_02288358(g->unk_10, (void *)func_ov065_022726a0);
    func_ov065_02288190(g->unk_10);
    return r;
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276db4(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    func_ov065_022758f4(2, a0, a1, a2);
    g->unk_454 = a3;
    g->unk_458 = a4;
    g->unk_f4[0] = g->unk_1e8;
    g->unk_2d8 = 1;
    g->unk_0e = 0;
    data_ov065_02290810.unk_01 = 0;
    g->unk_198 = 10;
    func_ov065_02275ccc();
    if (func_ov065_02272f80() == 0) {
        if (g->unk_10 == 0) {
            func_ov065_02276e44(g->unk_1e8);
        }
    }
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02276cc0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    s32 r;
    func_ov065_022758f4(3, 0, a1, a2);
    g->unk_454 = a3;
    g->unk_458 = a4;
    g->unk_17 = 1;
    g->unk_20 = g->unk_1e8;
    g->unk_f4[0] = a0;
    g->unk_198 = 4;
    if (g->unk_e4 == 0) {
        g->unk_e4 = func_ov065_02289460(g->unk_2dc, g->unk_2dc, g->unk_2e0, 0, 0x14, 1, 0, (void *)func_ov065_02272ab0, 0);
    }
    if (g->unk_e4 == 0) {
        r = func_ov065_02272f0c(5);
        if (r != 0) {
            return r;
        }
    }
    func_ov065_02271e00(5, (char *)"", 0);
    r = func_ov065_02272f80();
    if (r != 0) {
        return r;
    }
    if (g->unk_10 == 0) {
        r = func_ov065_02276e44(g->unk_1e8);
        if (r != 0) {
            return r;
        }
    }
    func_ov065_022745bc(g->unk_f4[0], 0);
    r = func_ov065_022746e4();
    if (r != 0) {
        return r;
    }
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_0227674c(u32 a) {
    Unk_ov065_02276f4c_Pad pad;
    Unk_ov065_02276f4c_Ctx *c;
    u32 r5;
    if (g != 0) {
        if (func_ov065_02270e4c() == 0) {
            if (a == 0) {
                if (g->unk_10) {
                    func_ov065_02288318(g->unk_10);
                }
                if (g->unk_04 != 0) {
                    func_ov065_02284ba4(*g->unk_04);
                }
                return;
            }
            c = g;
            u32 st = c->unk_198;
            if (st == 0) {
                return;
            }
            switch (st) {
            case 0:
            case 1:
                break;
            case 4:
                if (c->unk_1bc != 0) {
                    u64 el = ((OS_GetTick() - *(u64 *)c->unk_1c0) << 6) / 0x82ea;
                    if ((u64)c->unk_1bc < el) {
                        c->unk_1bc = 0;
                        c = g;
                        if (c->unk_15 == 3) {
                            c->unk_1a2++;
                            if (g->unk_1a2 > 5) {
                                func_ov065_0227627c(6, -0x13a2e);
                                return;
                            }
                            func_ov065_022745bc(g->unk_f4[0], 0);
                            if (func_ov065_022746e4() != 0) {
                                return;
                            }
                        } else {
                            if (func_ov065_0227433c() == 0) {
                                return;
                            }
                        }
                    }
                }
                c = g;
                if (c->unk_1b0 == 0) {
                    break;
                }
                { u32 t = c->unk_0d * 3000; r5 = t + 3000; }
                if (((OS_GetTick() - *(u64 *)c->unk_1b4) << 6) / 0x82ea >= (u64)r5) {
                    func_ov065_022745bc(c->unk_f4[0], 0);
                    if (func_ov065_022746e4() != 0) {
                        return;
                    }
                }
                break;
            case 2:
            case 3:
            case 5:
                if (c->unk_e8 <= 0) {
                    break;
                }
                if (st == 3) {
                    { u32 t = c->unk_0d * 3000; r5 = t + 3000; }
                } else if (c->unk_e8 == 1) {
                    r5 = 1000;
                } else {
                    r5 = 3000;
                }
                if ((u64)r5 < ((OS_GetTick() - *(u64 *)c->unk_ec) << 6) / 0x82ea) {
                    func_ov065_02275764(c->unk_1ec);
                    if (func_ov065_02272f0c() != 0) {
                        return;
                    }
                    g->unk_e8 = 0;
                }
                break;
            case 7:
                if (*(u64 *)c->unk_184 != 0) {
                    u64 d = func_ov065_02277974() - *(u64 *)c->unk_184;
                    if (d > 0x61a8) {
                        c = g;
                        *(u64 *)c->unk_184 = 0;
                        if (func_ov065_0227412c(c->unk_f4[0]) != 0) {
                            break;
                        }
                        return;
                    }
                    break;
                } else if (c->unk_3b4 == 6) {
                    u64 d = func_ov065_02277974() - *(u64 *)c->unk_444;
                    if (d > 0x1770) {
                        c->unk_3b5++;
                        c = g;
                        if (c->unk_3b5 > 5) {
                            func_ov065_02276304();
                            if (func_ov065_0227412c(g->unk_f4[0]) == 0) {
                                return;
                            }
                        } else {
                            func_ov065_0227532c(6, c->unk_43c, c->unk_3b8, c->unk_3b6, c->unk_3bc, c->unk_440);
                            if (func_ov065_022746e4() != 0) {
                                return;
                            }
                        }
                    }
                }
                break;
            case 8:
            case 9:
            case 10:
                break;
            case 11:
                if (c->unk_3b4 != 2) {
                    break;
                }
                if (c->unk_15 == 0) {
                    u64 d = func_ov065_02277974() - *(u64 *)g->unk_444;
                    if (d > 0x1770) {
                        goto do_b;
                    }
                }
                {
                    u64 d = func_ov065_02277974() - *(u64 *)g->unk_444;
                    if (d > 0x4a38) {
                    do_b:
                        func_ov065_02276304();
                        c = g;
                        if (func_ov065_022741b0(c->unk_f4[c->unk_0d + 1]) != 0) {
                            break;
                        }
                        return;
                    }
                }
                break;
            case 12:
                break;
            case 13:
                if (c->unk_3b4 != 8) {
                    break;
                }
                {
                    u64 d = func_ov065_02277974() - *(u64 *)c->unk_444;
                    if (d > 0x7530) {
                        c->unk_3b5++;
                        c = g;
                        if (c->unk_3b5 != 0) {
                            func_ov065_02276304();
                            c = g;
                            if (c->unk_15 == 2) {
                                if (func_ov065_022741b0(c->unk_f4[c->unk_0d]) == 0) {
                                    return;
                                }
                            } else {
                                func_ov065_02273b60();
                            }
                        } else {
                            func_ov065_0227532c(8, c->unk_43c, c->unk_3b8, c->unk_3b6, c->unk_3bc, c->unk_440);
                            if (func_ov065_022746e4() == 0) {
                                break;
                            }
                            return;
                        }
                    }
                }
                break;
            }
            c = g;
            if (c->unk_198 == 0xb || c->unk_198 == 6) {
                if (*(u64 *)c->unk_17c != 0) {
                    u64 d = func_ov065_02277974() - *(u64 *)c->unk_17c;
                    if (d > 0x2710) {
                        func_ov065_02272428(1, 0, 0, c->unk_18c);
                    }
                }
            }
            if (g->unk_e4) {
                func_ov065_022892b0(g->unk_e4);
            }
            if (g->unk_10) {
                func_ov065_02288318(g->unk_10);
                c = g;
                Unk_ov065_02276e44_Obj *o = c->unk_10;
                if (o->unk_b4 == 0 && (c->unk_15 == 0 || c->unk_15 == 1)) {
                    if (c->unk_198 == 1 || c->unk_198 == 2 || c->unk_198 == 3 || c->unk_198 == 4 || c->unk_198 == 6 || c->unk_198 == 0xb) {
                        goto do_kill;
                    }
                }
                if (c->unk_15 == 2 && c->unk_198 == 0xb) {
                do_kill:
                    func_ov065_02288190(o);
                }
            }
            func_ov065_02286c3c();
            if (g->unk_04 != 0) {
                func_ov065_02284ba4(*g->unk_04);
            }
            if (g->unk_198 == 0x12) {
                u64 d = func_ov065_02277974() - *(u64 *)g->unk_1e0;
                if (d > 0xbb8) {
                    if (func_ov065_02273ad0() != 0) {
                        return;
                    }
                }
            }
            if (func_ov065_02273760() != 0) {
                if (func_ov065_02273440() != 0) {
                    func_ov065_02272fe0();
                }
            }
        }
    }
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02276698(s32 a0, u32 ip, s32 port, char *name, void *arg) {
    struct {
        u8 len;
        u8 family;
        u16 port;
        u32 ip;
    } addr;
    volatile s32 z;
    if (arg == 0 || name == 0) {
        return 0;
    }
    z = 0;
    MIi_CpuClear32(z, &addr, 8);
    addr.family = 2;
    addr.ip = ip;
    addr.port = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    u32 c = (u8)name[0];
    if ((c == 0xfe && (u8)name[1] == 0xfd) || c == 0x5c) {
        if (g->unk_10) {
            func_ov065_0228758c(g->unk_10, name, arg, &addr);
        }
    } else if (memcmp(name, data_ov065_0228e16c, 6) == 0) {
        func_ov065_02286934(name, arg, &addr);
    } else {
        if (c == 0xfe) {
            return 0;
        } else if (c != 0) {
            c = c;
        }
        return 0;
    }
    return 1;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276500(u32 a0, u32 b, u32 c, u32 d, s32 s0, u8 *e) {
    s32 id;
    if (g != NULL && g->unk_198 == 7 && g->unk_1a1 == 0) {
    } else {
        func_ov065_02284b8c(b, (char *)"Init state", -1);
        return;
    }
    id = func_ov065_022703ec();
    if (id == -1) {
        func_ov065_02284b8c(b, (char *)"Server full", -1);
        func_ov065_0227627c(6, -0x1543c);
        return;
    }
    if (c != g->unk_1f8[g->unk_0d] || d != g->unk_278[g->unk_0d]) {
        if (*e != 0) {
            if (g->unk_f4[g->unk_0d] == func_0212b854((char *)e, NULL, 10)) {
                g->unk_1f8[g->unk_0d] = c;
                g->unk_278[g->unk_0d] = d;
                goto ok;
            }
        }
        func_ov065_02284b8c(b, (char *)"Unknown connect attempt", -1);
        return;
    }
ok:
    Unk_ov065_02290814 *gs = g;
    gs->unk_184 = 0;
    gs->unk_188 = 0;
    if (func_ov065_02284b94(b, gs->unk_08) == 0) {
        func_ov065_0227627c(6, -0x13a1a);
        return;
    }
    func_ov065_02276304();
    if (g->unk_0d == 0) {
        s32 t = s0 >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        g->unk_1a6 = t;
    }
    u32 *p = func_ov065_022703ac(id);
    Unk_ov065_02270344_Rec *q = func_ov065_02270344(id);
    *p = b;
    g->unk_0d++;
    q->unk_00 = id;
    q->unk_01 = g->unk_2b8[g->unk_0d - 1];
    q->unk_02 = 0;
    q->unk_04 = 0;
    func_ov065_022849c0(b, q);
    func_ov065_02273d38(2);
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276374(u32 a, u32 b) {
    char buf[12];
    if (g == NULL) {
        return;
    }
    if (g->unk_198 != 7 && g->unk_198 != 0xc) {
        return;
    }
    switch (b) {
    case 5:
        return;
    case 6: {
        g->unk_0c++;
        if (g->unk_0c > 5) {
            g->unk_0c = 0;
            func_ov065_022741b0(g->unk_f4[g->unk_14]);
            return;
        }
        OS_SNPrintf(buf, 12, (char *)"%u", g->unk_1e8);
        Unk_ov065_02290814 *c = g;
        s32 r0 = func_ov065_022868b0(c->unk_1f8[c->unk_14], c->unk_278[c->unk_14], 0);
        s32 r = func_ov065_02284a80(g->unk_04->unk_00, 0, r0, buf, -1, 0x1388, c->unk_08, 0);
        if (r == 1) {
            func_ov065_02272d5c();
            return;
        } else if (r != 0) {
            if (func_ov065_022741b0(g->unk_f4[g->unk_14]) == 0) {
                return;
            }
        }
        break;
    }
    default:
        if (func_ov065_022741b0(g->unk_f4[g->unk_0d + 1]) == 0) {
            return;
        }
        break;
    case 0: {
        s32 id = func_ov065_022703ec();
        if (id == -1) {
            func_ov065_0227627c(6, -0x1543c);
        }
        u32 *p = func_ov065_022703ac(id);
        Unk_ov065_02270344_Rec *q = func_ov065_02270344(id);
        *p = a;
        g->unk_0d++;
        q->unk_00 = id;
        q->unk_02 = 0;
        q->unk_04 = 0;
        q->unk_01 = g->unk_2b8[g->unk_0d];
        func_ov065_022849c0(a, q);
        if (g->unk_198 == 0xc) {
            func_ov065_02273d38(0);
            return;
        }
        func_ov065_02273d38(1);
        break;
    }
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276324(u32 a, u32 b, const char *s) {
    char tmp[16];
    u32 arr[128];
    s32 i = 0;
    s32 z = 0;
    for (; i < 0x80; i++) {
        s32 r = func_ov065_022751b0(tmp, s + 1, i);
        if (r == ~z) {
            break;
        }
        arr[i] = func_0212b854(tmp, NULL, 10);
    }
    func_ov065_022749f8(*(u8 *)s, b, 0, 0, arr, i);
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276304(void) {
    g->unk_3b4 = 0xff;
    g->unk_3b5 = 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_0227627c(s32 a, s32 b) {
    if (g != NULL && a != 0) {
        func_ov065_02273a40();
        func_ov065_02270e34(a, b);
        func_ov065_02271e00(1, (char *)"", 0);
        Unk_ov065_02290814 *c = g;
        BOOL x;
        BOOL y;
        if (c->unk_15 == 2) {
            x = TRUE;
        } else {
            x = FALSE;
        }
        if (c->unk_1f4 == 0) {
            y = TRUE;
        } else {
            y = FALSE;
        }
        s32 t = func_ov065_02271e8c();
        g->unk_44c(a, 0, y, x, t, c->unk_450);
        func_ov065_02275890();
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276254(void) {
    if (g->unk_15 != 2) {
        g->unk_14 = 0;
        g->unk_16 = 0;
        func_ov065_02288190(g->unk_10);
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02276124(u32 a, s32 b, u8 *c) {
    switch (b) {
    case 2:
        if (g->unk_198 == 1) {
            if (c[0] == 1) {
                g->unk_1f4 = 0;
            }
            u32 x = c[1];
            u8 y = c[2];
            g->unk_2b8[x] = y;
            g->unk_f4[x] = g->unk_1e8;
            if (g->unk_15 == 0 || g->unk_15 == 1) {
                g->unk_16 = g->unk_0d;
            }
            g->unk_198 = 9;
        }
        func_ov065_022738b4(a, 3);
        break;
    case 3:
        if (g->unk_198 == 0x10) {
            g->unk_1c8 |= 1 << a;
            s32 v = c[0] | (c[1] << 8);
            if (v > g->unk_1a6) {
                g->unk_1a6 = v;
            }
            s32 r = func_ov065_02273274(0);
            if (g->unk_1c8 == r) {
                s32 i;
                for (i = 1; i <= g->unk_0d; i++) {
                    func_ov065_022738b4(g->unk_2b8[i], 4);
                }
                g->unk_198 = 0x11;
            }
        } else {
            func_ov065_022738b4(a, 4);
        }
        break;
    case 4:
        if (g->unk_198 == 9) {
            func_ov065_02273d38(4);
        }
        break;
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

BOOL func_ov065_02276000(s32 a, u32 b) {
    if (func_ov065_02270508() != 5) {
        return FALSE;
    }
    if (g->unk_15 == 2) {
        return TRUE;
    }
    if (a != 0) {
        func_ov065_0227627c(a, b - 0x13880);
        return TRUE;
    }
    g->unk_2b8[0] = 0;
    if (g->unk_1a1 == 1 || (u8)(g->unk_1a0 + 0xff) <= 1) {
        return TRUE;
    }
    if (g->unk_194 != 0) {
        func_ov065_02286da0(g->unk_194);
        g->unk_194 = 0;
    }
    if (g->unk_0d != 0) {
        if (g->unk_1a0 == 0) {
            g->unk_1a0 = 3;
            func_ov065_022849f8(g->unk_04->unk_00);
        }
    } else if (g->unk_15 == 3) {
        func_ov065_0227627c(6, -0x13a2e);
    } else if (g->unk_1f0 != 0) {
        func_ov065_02273ad0();
    } else if (g->unk_198 == 1) {
        g->unk_198 = 0x12;
        u64 t = func_ov065_02277974();
        Unk_ov065_02290814 *c = g;
        c->unk_1e0 = (u32)t;
        c->unk_1e4 = (u32)(t >> 32);
    } else {
        func_ov065_02273b88(1);
    }
    return TRUE;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02275fdc(u32 a) {
    if (g->unk_1a0 != 2) {
        func_ov065_022741b0(a);
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

BOOL func_ov065_02275f98(u32 v, s32 n) {
    s32 i;
    u8 *q;
    if (g == NULL) {
        return FALSE;
    }
    q = (u8 *)g;
    for (i = 0; i < n; i++) {
        if (v == *(u32 *)(q + 0xf4)) {
            func_ov065_02275e64(i, n);
            return TRUE;
        }
        q += 4;
    }
    return FALSE;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

u32 func_ov065_02275e64(s32 idx, s32 n) {
    u32 saved;
    if (g == NULL) {
        return 0;
    }
    saved = g->unk_f4[idx];
    g->unk_2d8 &= ~(1 << g->unk_2b8[idx]);
    func_ov065_02275df4();
    if (idx < n - 1) {
        s32 i;
        for (i = 0; i < n - idx; i++) {
            s32 j = idx + i;
            s32 k = j + 1;
            g->unk_24[j] = g->unk_24[k];
            g->unk_a4[j] = g->unk_a4[k];
            g->unk_f4[j] = g->unk_f4[k];
            g->unk_1f8[j] = g->unk_1f8[k];
            g->unk_278[j] = g->unk_278[k];
            g->unk_2b8[j] = g->unk_2b8[k];
        }
    }
    if (n > 0) {
        s32 l = n - 1;
        g->unk_24[l] = 0;
        g->unk_a4[l] = 0;
        g->unk_f4[l] = 0;
        g->unk_1f8[l] = 0;
        g->unk_278[l] = 0;
        g->unk_2b8[l] = 0;
    }
    return saved;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

u32 func_ov065_02275e50(void) {
    if (g != NULL) {
        return g->unk_0d;
    }
    return 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

u32 func_ov065_02275e3c(void) {
    if (g != NULL) {
        return g->unk_0e;
    }
    return 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02275df4(void) {
    s32 n, i;
    n = -1;
    i = 0;
    Unk_ov065_02290814 *c = g;
    u32 v = c->unk_2d8;
    for (; i < 32; i++) {
        if ((v & (1 << i)) != 0) {
            n++;
        }
    }
    s32 z = 0;
    s32 m1 = ~z;
    if (n == m1) {
        c->unk_0e = z;
    } else {
        c->unk_0e = n;
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02275dd0(u32 *out) {
    if (g == NULL) {
        return 0;
    }
    *out = (u32)&g->unk_2b8;
    return g->unk_0d + 1;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02275d58(u8 **out) {
    s32 i;
    u32 b;
    if (g == NULL) {
        return 0;
    }
    MI_CpuFill8(data_ov065_02290820, 0, 0x20);
    i = 0;
    for (; i <= g->unk_0e; i++) {
        b = g->unk_2b8[i];
        if ((g->unk_2d8 & (1 << b)) == 0) {
            break;
        }
        data_ov065_02290820[i] = b;
    }
    *out = data_ov065_02290820;
    return g->unk_0e + 1;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02275ccc(void) {
    char buf[12];
    char buf2[32];
    if (g->unk_15 != 2) {
        return 0;
    }
    OS_SNPrintf(buf, 12, (char *)"%u", g->unk_16 + 1);
    func_ov065_02277a9c((char *)"SCM", buf, buf2, 0x2f);
    OS_SNPrintf(buf, 12, (char *)"%u", g->unk_0d + 1);
    func_ov065_02277a6c((char *)"SCN", buf, buf2, 0x2f);
    OS_SNPrintf(buf, 12, (char *)"%u", 3);
    func_ov065_02277a6c((char *)"VER", buf, buf2, 0x2f);
    return func_ov065_02271e00(6, buf2, 0);
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02275c74(void) {
    s32 z = 0;
    data_ov065_02290814 = (Unk_ov065_02290814 *)z;
    if (data_ov065_0229081c != 0) {
        func_ov065_02277b64(4, data_ov065_0229081c, z);
        data_ov065_0229081c = 0;
    }
    func_ov065_02273400();
    if (data_ov065_02290818 != 0) {
        func_ov065_02277b64(4, data_ov065_02290818, 0);
        data_ov065_02290818 = 0;
    }
    data_ov065_02290810[0] = 0;
    data_ov065_02290810[1] = 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g data_ov065_02290814

BOOL func_ov065_02275c60(void) {
    if (g == NULL) {
        return TRUE;
    }
    return FALSE;
}
#undef g
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_02275984(u32 a) {
    G->unk_0c = 0;
    G->unk_174 = 0;
    G->unk_176 = func_ov065_022778b0(0x10000);
    G->unk_178 = 0;
    {
        Unk_ov065_02290814 *g = G;
        g->unk_17c = 0;
        g->unk_180 = 0;
        g->unk_184 = 0;
        g->unk_188 = 0;
        g->unk_19c = 0;
    }
    G->unk_1a1 = 0;
    G->unk_1a2 = 0;
    G->unk_1a3 = 0;
    G->unk_1a4 = 0;
    G->unk_19f = 0;
    G->unk_1a0 = 0;
    G->unk_1a8 = 0;
    G->unk_1aa = 0;
    G->unk_1ac = 0;
    {
        Unk_ov065_02290814 *g = G;
        g->unk_1d0 = 0;
        g->unk_1d4 = 0;
        g->unk_1e0 = 0;
        g->unk_1e4 = 0;
        Unk_ov065_02275984_Clear32(&g->unk_3b4, 0x98);
    }
    if (a == 2) {
        G->unk_14 = G->unk_0d;
        if (G->unk_15 == 3) {
            G->unk_198 = 1;
        } else if (G->unk_15 == 2) {
            G->unk_198 = 10;
        }
    } else {
        G->unk_0d = 0;
        G->unk_0e = 0;
        G->unk_14 = 0;
        G->unk_17 = 0;
        G->unk_20 = 0;
        G->unk_e8 = 0;
        G->unk_19d = 0;
        G->unk_1a6 = 0;
        G->unk_1b0 = 0;
        {
            Unk_ov065_02290814 *g = G;
            g->unk_1b4 = 0;
            g->unk_1b8 = 0;
            g->unk_1bc = 0;
        }
        {
            Unk_ov065_02290814 *g = G;
            g->unk_1c0 = 0;
            g->unk_1c4 = 0;
            g->unk_1c8 = 0;
        }
        G->unk_1ec = 0;
        G->unk_1f0 = 0;
        G->unk_2d8 = 0;
        Unk_ov065_02275984_Clear32(G->unk_24, 0x80);
        Unk_ov065_02275984_Clear16(G->unk_a4, 0x40);
        Unk_ov065_02275984_Clear32(G->unk_f4, 0x80);
        Unk_ov065_02275984_Clear32(&G->unk_18c, 0xc);
        Unk_ov065_02275984_Clear32(G->unk_1f8, 0x80);
        Unk_ov065_02275984_Clear16(G->unk_278, 0x40);
        MI_CpuFill8(G->unk_2b8, 0, 0x20);
        Unk_ov065_02275984_Clear32(G->unk_330, 0x84);
        if (a == 1) {
            if (G->unk_15 == 0) {
                G->unk_198 = 3;
            } else if (G->unk_15 == 1) {
                G->unk_198 = 4;
            }
        } else {
            G->unk_15 = 0;
            G->unk_16 = 0;
            G->unk_18 = 0;
            G->unk_1f4 = 0;
            G->unk_19e = 0;
            G->unk_454 = 0;
            G->unk_458 = 0;
        }
    }
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_022758f4(u32 a, u32 b, u32 c, u32 d) {
    func_ov065_02275984(0);
    G->unk_15 = a;
    G->unk_16 = b;
    G->unk_44c = c;
    G->unk_450 = d;
    G->unk_175 = 0;
    G->unk_2b8[0] = 0;
    func_ov065_022884fc(0x32, (char *)"dwc_pid");
    func_ov065_022884fc(0x33, (char *)"dwc_mtype");
    func_ov065_022884fc(0x34, (char *)"dwc_mresv");
    func_ov065_022884fc(0x35, (char *)"dwc_mver");
    func_ov065_022884fc(0x36, (char *)"dwc_eval");
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_02275890(void) {
    if (G != NULL) {
        if (G->unk_e4 != 0) {
            func_ov065_02289444(G->unk_e4);
            G->unk_e4 = 0;
        }
        func_ov065_02287260();
        G->unk_198 = 0;
        if (data_ov065_0229081c != 0) {
            func_ov065_02277b64(4, data_ov065_0229081c);
            data_ov065_0229081c = 0;
        }
        func_ov065_02273400();
        G->unk_18 = 1;
    }
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_02275764(u32 a) {
    char buf[0x100];
    u8 list[0xa8];
    s32 n = 7;
    s32 i;
    Unk_ov065_02290840_Ent *e;
    u8 *q;
    s32 k;
    list[0] = 8;
    list[1] = 10;
    list[2] = 0x32;
    list[3] = 0x33;
    list[4] = 0x34;
    list[5] = 0x35;
    list[6] = 0x36;
    if (G->unk_15 == 0 || G->unk_15 == 1) {
        i = 0;
        e = data_ov065_02290840;
        q = &list[7];
        for (; i < 0x9a; e++, i++) {
            if (e->unk_00 != 0) {
                *q = e->unk_00;
                q++;
                n++;
            }
        }
    }
    switch (G->unk_198) {
    case 0:
    case 1:
        break;
    case 3:
        a = G->unk_1f0;
        if (a == 0) {
            func_ov065_0227571c(buf, G->unk_1e8, G->unk_16, G->unk_15);
            if (data_ov065_0229081c != 0) {
                OS_SNPrintf(buf, 0x100, (char *)"%s and (%s)", buf, data_ov065_0229081c);
            }
            break;
        }
        // fallthrough
    case 2:
    case 4:
    case 5:
        OS_SNPrintf(buf, 0x100, (char *)"%s = %u", (char *)"dwc_pid", a);
        G->unk_1ec = a;
        break;
    }
    func_ov065_02289280(G->unk_e4);
    for (k = 0; k < 5; k++) {
        s32 r = func_ov065_02289364(G->unk_e4, 1, 0, list, n, buf, 0x10);
        if (r == 0) break;
        if (r != 2) break;
    }
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_0227571c(char *buf, u32 x, u32 y, u32 z) {
    OS_SNPrintf(buf, 0x100, (char *)"%s = %d and %s != %u and maxplayers = %d and numplayers < %d and %s = %d and %s != %s", (char *)"dwc_mver", 3, (char *)"dwc_pid", x, y, y, (char *)"dwc_mtype", z, (char *)"dwc_mresv", (char *)"dwc_pid");
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814
enum Unk_ov065_022754f0_Z { Unk_ov065_022754f0_Z_0 = 0 };
s32 func_ov065_022754f0(u32 a, u32 b, u32 c) {
    s32 flag;
    u8 idx = G->unk_14;
    s32 ret = 0;
    if (a == 0) {
        b = (G->unk_1e8 & 0xffff) | (G->unk_176 << 16);
        if (func_ov065_02289064(c) != 0) {
            s32 t = func_ov065_02289098(c);
            if (t == func_ov065_0228924c(G->unk_e4)) {
                G->unk_1f8[idx] = func_ov065_02289060(c);
                G->unk_278[idx] = func_ov065_02289044(c);
                flag = 0;
            } else {
                flag = 1;
            }
        } else {
            u16 t = func_ov065_02261358();
            u32 lo;
            u32 m;
            if ((t & 0xffff) == 0xa8c0) goto yes;
            lo = t & 0xff;
            if (lo == 0xac) {
                m = t & 0xff00;
                if (m >= 0x1000 && m <= 0x1f00) goto yes;
            }
            if (lo == 0x10) {
            yes:
                flag = 1;
            } else {
                G->unk_1f8[idx] = func_ov065_02289098(c);
                G->unk_278[idx] = func_ov065_0228907c(c);
                flag = 0;
            }
        }
        if (flag != 0) {
            G->unk_176 = func_ov065_022778b0(0x10000);
            G->unk_18c.unk_08 = b;
        } else {
            u32 loc[2];
            s32 x;
            loc[0] = func_ov065_02261358();
            loc[1] = func_ov065_022849d4(G->unk_04->unk_00);
            x = func_ov065_02289098(c);
            b = func_ov065_0228907c(c);
            x = func_ov065_0227532c(6, G->unk_f4[idx], x, b, loc, 2);
            G->unk_3b5 = 0;
            if (x != 0) {
                return 2;
            }
            G->unk_18c.unk_08 = 0;
        }
        G->unk_18c.unk_00 = 0;
        G->unk_18c.unk_01 = 0;
        G->unk_18c.unk_02 = func_ov065_0228907c(c);
        G->unk_18c.unk_04 = func_ov065_02289098(c);
    } else {
        flag = 1;
        G->unk_18c.unk_00 = 1;
        G->unk_18c.unk_01 = ret;
        G->unk_18c.unk_02 = ret;
        G->unk_18c.unk_04 = ret;
        G->unk_18c.unk_08 = b;
    }
    if (flag != 0) {
        ret = func_ov065_02275474(&G->unk_18c);
    } else {
        Unk_ov065_02290814 *g = G;
        func_ov065_02272428(0, func_ov065_022849c8(g->unk_04->unk_00), 0, &g->unk_18c);
        Unk_ov065_022754f0_Z z = Unk_ov065_022754f0_Z_0;
        g = G;
        g->unk_184 = z;
        g->unk_188 = z;
    }
    return ret;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

s32 func_ov065_02275474(Unk_ov065_02275474_Arg *p) {
    s32 i;
    s32 r;
    if (p->unk_00 == 0) {
        func_ov065_022892ec(G->unk_e4, func_ov065_022868b0(p->unk_04, 0, 0), p->unk_02, p->unk_08);
        if (func_ov065_02272f0c() != 0) {
            return 2;
        }
    }
    for (i = 0; i < 5; i++) {
        r = func_ov065_02286dcc(func_ov065_022849c8(G->unk_04->unk_00), p->unk_08, p->unk_00, (void *)func_ov065_0227269c, (void *)func_ov065_02272428, p);
        if (r == 0) break;
        if (r != 3) break;
    }
    return r;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f) {
    s32 r;
    char buf[0x200];
    char tmp[0x10];
    s32 i;
    u32 *p;
    r = 0;
    if (G->unk_15 == 0 || ((G->unk_15 == 3 || G->unk_19e != 0) && a == 6)) {
        r = func_ov065_02275298(a, c, d, e, f);
    } else {
        if (e != NULL && f != 0) {
            r = OS_SNPrintf(buf, 0x200, (char *)"%u", e[0]);
            i = 1;
            if (i < f) {
                p = e + 1;
                do {
                    s32 m = OS_SNPrintf(tmp, 0x10, (char *)"/%u", *p);
                    MI_CpuCopy8(tmp, buf + r, m);
                    r += m;
                    p++;
                    i++;
                } while (i < f);
            }
        }
        buf[r] = 0;
        r = func_ov065_02275228(G->unk_00, a, b, buf);
    }
    if (a == 2 || a == 6 || (u8)(a + 0xf8) <= 1) {
        G->unk_3b4 = a;
        G->unk_3b6 = d;
        G->unk_3b8 = c;
        G->unk_43c = b;
        G->unk_440 = f;
        {
            Unk_ov065_02290814 *g = G;
            u64 t = func_ov065_02277974();
            g->unk_444 = (u32)t;
            g->unk_448 = (u32)(t >> 32);
            if (e != NULL && f != 0) {
                MIi_CpuCopy32(e, g->unk_3bc, f * 4);
            }
        }
    }
    return r;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

s32 func_ov065_02275298(u32 a, u32 b, u32 c, u32 *d, s32 e) {
    Unk_ov065_02275298_Hdr h;
    s32 i;
    s32 r;
    if (d != NULL && e != 0) {
        MIi_CpuCopy32(d, h.unk_14, e * 4);
    } else {
        e = 0;
    }
    func_02127838(h.unk_00, (char *)"SBCM");
    h.unk_04 = 3;
    h.unk_08 = a;
    h.unk_09 = e * 4;
    h.unk_0a = G->unk_1a;
    h.unk_0c = G->unk_1c;
    h.unk_10 = G->unk_1e8;
    i = 0;
    do {
        r = func_ov065_02289324(G->unk_e4, func_ov065_022868b0(b, 0, 0), c, &h, h.unk_09 + 0x14);
        if (r == 0) break;
        if (r != 2) break;
        i++;
    } while (i < 5);
    return r;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

s32 func_ov065_02275228(u32 a, u32 b, u32 c, char *d) {
    char buf[0x200];
    s32 n = OS_SNPrintf(buf, 0x200, (char *)"%s%dv%s", (char *)"GPCM", 3, (char *)"MAT");
    char *q = &buf[1];
    char *p;
    buf[n] = b;
    p = q + n;
    q[n] = 0;
    if (d != NULL) {
        s32 len = STD_GetStringLength(d);
        MI_CpuCopy8(d, p, len);
        p[len] = 0;
    }
    return func_ov065_0227bd20(a, c, buf);
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G data_ov065_02290814

s32 func_ov065_022751b0(char *out, const char *s, s32 n) {
    char *end = func_0212a120(s, 0);
    s32 i;
    char *p;
    s32 len;
    for (i = 0; i < n; i++) {
        p = func_0212a120(s, '/');
        if (p == NULL) {
            return -1;
        }
        s = p + 1;
    }
    p = func_0212a120(s, '/');
    if (p == NULL) {
        p = end;
    }
    if (s == p) {
        return -1;
    }
    len = p - s;
    MI_CpuCopy8(s, out, len);
    out[len] = 0;
    return len;
}
#undef G
}
}

namespace F022745bc {
extern "C" {

enum Unk_ov065_022749f8_Z { Unk_ov065_022749f8_Z_0 = 0 };
s32 func_ov065_022749f8(u32 ev, s32 h, u32 p2, u16 p3, u32 *args, s32 n) {
    u8 ub;
    u32 buf[0x41];
    u32 loc1c;
    Unk_ov065_022749f8_Sa sa;
    s32 z = 0;
    s32 i;
    Unk_ov065_022745bc_Ctx *g = data_ov065_02290814;
    s32 st;
    if (g == 0 || (st = g->unk_198) == 0) {
        return 1;
    }
    switch (ev) {
    case 1:
    case 11: {
        u32 r;
        if (g->unk_15 != 0) {
            p2 = args[1];
            p3 = (u16)args[2];
        }
        r = func_ov065_02274864(h, p2, p3, args[0], ev == 0xb ? 1 : 0);
        if (r == 2) {
            Unk_ov065_022745bc_Ctx *q;
            if (func_ov065_022746e4(func_ov065_02274754(h, p2, p3)) != 0) {
                return 0;
            }
            q = data_ov065_02290814;
            if (q->unk_15 == 2 && q->unk_454 != 0) {
                data_ov065_02290814->unk_454(func_ov065_02271e8c(h), q->unk_458);
            }
            buf[0] = data_ov065_02290814->unk_14;
            for (z = 1; z <= data_ov065_02290814->unk_14; z++) {
                buf[z] = data_ov065_02290814->unk_f4[z];
            }
            buf[z++] = data_ov065_02290814->unk_1c;
            buf[z++] = data_ov065_02290814->unk_1a;
            data_ov065_02290814->unk_198 = 0xb;
        }
        if (r == 0xff) {
            break;
        }
        if (func_ov065_022746e4(func_ov065_0227532c(r, h, p2, p3, buf, z)) != 0) {
            return 0;
        }
        break;
    }
    case 2:
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        g->unk_1f0 = z;
        data_ov065_02290814->unk_19f = z;
        data_ov065_02290814->unk_1bc = z;
        data_ov065_02290814->unk_1b0 = z;
        data_ov065_02290814->unk_24[0] = (args + 1)[args[0]];
        data_ov065_02290814->unk_a4[0] = (args + 2)[args[0]];
        data_ov065_02290814->unk_1ac = (args + 1)[args[0]];
        data_ov065_02290814->unk_1aa = (args + 2)[args[0]];
        if (data_ov065_02290814->unk_15 == 1) {
            if (func_ov065_02273cb8(args + 1, args[0]) != 0) {
                if (data_ov065_02290814->unk_0d != 0) {
                    func_ov065_0227470c(h, args);
                }
            } else {
                if (func_ov065_022746e4(func_ov065_02274308(h)) != 0) {
                    return z;
                }
                if (func_ov065_022746e4(func_ov065_022743e0(z, z)) == 0) {
                    break;
                }
                return z;
            }
        }
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            if (q->unk_15 == 0) {
                if (q->unk_0d != 0) {
                    func_ov065_0227470c(h, args);
                    if (func_ov065_022746e4(func_ov065_022740a4()) != 0) {
                        return 0;
                    }
                }
                data_ov065_02290814->unk_198 = 6;
                func_ov065_022754f0(0, 0, func_ov065_02289274(data_ov065_02290814->unk_e4, 0));
                if (func_ov065_02272e18() == 0) {
                    break;
                }
                return 0;
            } else {
                q->unk_198 = 5;
                if (func_ov065_02272f0c(func_ov065_02275764(h)) == 0) {
                    break;
                }
                return 0;
            }
        }
    case 3:
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        return func_ov065_0227433c();
    case 4: {
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        g->unk_1c0 = OS_GetTick();
        if ((g->unk_1f0 != 0 && g->unk_19f < 0x10) || g->unk_15 == 3) {
            Unk_ov065_022745bc_Ctx *q;
            g->unk_1b0 = 1;
            q = data_ov065_02290814;
            q->unk_1b4 = OS_GetTick();
            if (q->unk_15 != 3) {
                q->unk_19f++;
            }
        } else {
            Unk_ov065_022745bc_Ctx *q;
            g->unk_1f0 = 0;
            data_ov065_02290814->unk_19f = 0;
            q = data_ov065_02290814;
            if (q->unk_15 == 0) {
                q->unk_198 = 3;
                data_ov065_02290814->unk_e8 = 1;
                u64 t = OS_GetTick();
                Unk_ov065_022745bc_Ctx *q2 = data_ov065_02290814;
                q2->unk_ec = t;
            } else if (((volatile Unk_ov065_022745bc_Ctx *)q)->unk_15 == 1) {
                func_ov065_022743e0(1, 0);
            }
        }
        break;
    }
    case 5:
        if (g->unk_17 == 0) {
            break;
        }
        if (h != g->unk_20) {
            break;
        }
        if (g->unk_15 == 2 && g->unk_0d == 1 && g->unk_f4[1] == h) {
            func_ov065_022849f8(*g->unk_04);
        }
        if (func_ov065_022741b0(h) == 0) {
            return 0;
        }
        break;
    case 6: {
        s32 y, x;
        x = args[0];
        y = (u16)args[1];
        if (st == 1) {
            g->unk_198 = 6;
        } else if (st == 6 || st == 0xb) {
            if (h != g->unk_20) {
                break;
            }
        } else {
            break;
        }
        data_ov065_02290814->unk_3b4 = 0xff;
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            u32 *b0 = q->unk_f4;
            s32 k = q->unk_0d + 1;
            u32 *pe = b0 + k;
            if (h != b0[k]) {
                *pe = h;
            }
        }
        sa.unk_4 = x;
        sa.unk_2 = ((y >> 8) & 0xff) | ((y << 8) & 0xff00);
        data_ov065_02290814->unk_18c = 1;
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            func_ov065_02272428(0, func_ov065_022849c8(*q->unk_04), &sa, &q->unk_18c);
        }
        Unk_ov065_022749f8_Z z6 = Unk_ov065_022749f8_Z_0;
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            q->unk_184 = z6;
            q->unk_188 = z6;
        }
        break;
    }
    case 7:
        if (st != 1) {
            break;
        }
        if (h != g->unk_f4[0]) {
            break;
        }
        loc1c = args[0];
        {
            ub = (u8)args[1];
            g->unk_f4[g->unk_14 + 1] = loc1c;
            data_ov065_02290814->unk_2b8[data_ov065_02290814->unk_14 + 1] = ub;
        }
        func_ov065_02288190(data_ov065_02290814->unk_10);
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            if (q->unk_454 != 0) {
                data_ov065_02290814->unk_454(func_ov065_02271e8c(loc1c), q->unk_458);
            }
        }
        break;
    case 8:
        if (st != 1) {
            break;
        }
        if (h != g->unk_f4[0]) {
            break;
        }
        {
        u32 v = args[0];
        loc1c = v;
        if (v == 0) {
            u32 a1 = args[1];
            u32 a2 = args[2];
            g->unk_2b8[a1] = a2;
            data_ov065_02290814->unk_f4[a1] = data_ov065_02290814->unk_1e8;
            func_ov065_02273d38(3);
            break;
        } else {
            u32 a1 = args[1];
            ub = (u8)args[2];
            u32 *b0 = g->unk_f4;
            u32 *pp = b0 + a1;
            if (v == b0[a1] && a1 == g->unk_0d - 1) {
                if (func_ov065_022746e4(func_ov065_0227532c(9, h, g->unk_24[0], g->unk_a4[0], &loc1c, 1)) == 0) {
                    break;
                }
                return 0;
            }
            *pp = v;
            data_ov065_02290814->unk_2b8[a1] = ub;
            data_ov065_02290814->unk_24[a1] = args[3];
            data_ov065_02290814->unk_a4[a1] = args[4];
            data_ov065_02290814->unk_1ac = args[3];
            data_ov065_02290814->unk_1aa = args[4];
            data_ov065_02290814->unk_198 = 5;
            if (func_ov065_02272f0c(func_ov065_02275764(loc1c)) != 0) {
                return 0;
            }
            data_ov065_02290814->unk_1bc = 0;
            data_ov065_02290814->unk_1b0 = 0;
            break;
        }
        }
    case 9: {
        s32 t;
        u32 a0;
        if (st != 0xd) {
            break;
        }
        a0 = *(volatile u32 *)args;
        t = g->unk_19c;
        t++;
        if (a0 != g->unk_f4[t]) {
            break;
        }
        g->unk_19c = t;
        func_ov065_02273d38(z);
        break;
    }
    case 10:
        if (st != 1 && st != 0x12) {
            break;
        }
        if (g->unk_15 == 0 || func_ov065_02273cb8(args + 1, args[0]) != 0) {
            data_ov065_02290814->unk_1f0 = args[1];
            data_ov065_02290814->unk_19f = 0;
        } else {
            data_ov065_02290814->unk_1f0 = 0;
        }
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            if (q->unk_0d != 0) {
                func_ov065_022849f8(*q->unk_04);
            } else {
                if (func_ov065_02273ad0() != 0) {
                    return 0;
                }
            }
        }
        break;
    case 12:
        if (h != g->unk_f4[0]) {
            break;
        }
        if (g->unk_15 == 0 || ((volatile Unk_ov065_022745bc_Ctx *)g)->unk_15 == 1) {
            if (func_ov065_0227412c(h) == 0) {
                return 0;
            }
            break;
        }
        if (((volatile Unk_ov065_022745bc_Ctx *)g)->unk_15 != 3) {
            break;
        }
        if (args[0] == 0) {
            g->unk_1f4 = h;
            func_ov065_02273a40();
            func_ov065_02273b88(z);
        } else {
            func_ov065_02273a70(args[0]);
        }
        break;
    case 13:
    case 14:
    case 15:
        if (func_ov065_02273590(h, ev, args[0]) == 0) {
            return z;
        }
        break;
    case 16:
        if (h != g->unk_f4[0]) {
            return 1;
        }
        if (n > 0) {
            do {
                u32 t = func_ov065_022732c0(args[0], 0);
                if (t != 0xff) {
                    func_ov065_0227062c(t);
                }
                args++;
                z++;
            } while (z < n);
        }
        break;
    case 17: {
        Unk_ov065_022749f8_H *m = data_ov065_02290818;
        if (m != 0 && m->unk_00 != 0) {
            u64 d = func_ov065_02277974() - m->unk_10;
            if (d >= m->unk_04) {
                buf[0] = 1;
                goto sent;
            }
        }
        buf[0] = 0;
    sent:
        if (func_ov065_022746e4(func_ov065_0227532c(0x12, h, p2, p3, buf, 1)) != 0) {
            return 0;
        }
        break;
    }
    case 18: {
        u32 t;
        u32 m;
        if (st != 0x13) {
            break;
        }
        t = func_ov065_022732c0(h, z);
        if (t == 0xff) {
            break;
        }
        m = 1 << t;
        data_ov065_02290818->unk_08 |= m;
        if (args[0] != 0) {
            data_ov065_02290818->unk_0c |= m;
        }
        break;
    }
    case 19:
        func_ov065_0227627c(0xb, z);
        return z;
    }
    return 1;
}

}
}

namespace F022745bc {
extern "C" {


u32 func_ov065_02274864(s32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_ov065_022745bc_Ctx *g = data_ov065_02290814;
    u32 r;
    switch (g->unk_15) {
    case 1:
        if (func_ov065_0227bfb4(g->unk_00, a) == 0) {
            r = 0xff;
            goto end;
        }
    case 0:
        g = data_ov065_02290814;
        if (d != g->unk_15 || g->unk_1a1 != 0 || g->unk_14 == g->unk_16 ||
            (g->unk_17 != 0 && g->unk_20 == g->unk_1e8)) {
            r = 3;
            if (g->unk_15 == 0) {
                u32 obj = g->unk_10;
                if (*(u32 *)(obj + 0xb4) == 0) {
                    if (g->unk_17 != 0) {
                        if (data_ov065_02290814->unk_20 == data_ov065_02290814->unk_1e8) {
                            func_ov065_02288190(obj);
                        }
                    }
                }
            }
            goto end;
        }
        {
            s32 t = g->unk_198;
            u32 p;
            if (t != 3 && t != 4) {
                goto r4;
            }
            if (g->unk_1c == 0 && g->unk_1a == 0) {
                goto r4;
            }
            if (b == 0 && c == 0) {
            r4:
                r = 4;
                goto end;
            }
            p = g->unk_1ec;
            if (p == 0) {
                goto r2b;
            }
            if (p != (u32)a) {
                goto other;
            }
            if (e == 0) {
                if (g->unk_1e8 >= a) {
                    goto rff;
                }
                if (a == g->unk_1f0) {
                    goto rff;
                }
            }
            r = 2;
            goto end;
        rff:
            r = 0xff;
            goto end;
        other:
            if (e == 0) {
                if (g->unk_1e8 >= a) {
                    goto r3;
                }
                if (g->unk_1f0 != 0) {
                    goto r3;
                }
            }
            if (func_ov065_022746e4(func_ov065_02274308(p)) != 0) {
                return 0xff;
            }
            r = 2;
            goto end;
        r3:
            r = 3;
            goto end;
        r2b:
            r = 2;
            goto end;
        }
    case 2:
        if (func_ov065_0227bfb4(g->unk_00, a) == 0) {
            r = 0xff;
            goto end;
        }
        if (d != 3 || (g = data_ov065_02290814, g->unk_14 == g->unk_16)) {
            r = 3;
            goto end;
        }
        if (data_ov065_02290810[0] == 1 && data_ov065_02290810[1] == 1) {
            r = 0x13;
            goto end;
        }
        if (g->unk_198 != 0xa) {
            goto r4b;
        }
        if (g->unk_1c == 0 && g->unk_1a == 0) {
            goto r4b;
        }
        if (b != 0 || c != 0) {
            goto r2c;
        }
    r4b:
        r = 4;
        goto end;
    r2c:
        r = 2;
        break;
    }
end:
    return r;
}

}
}

namespace F022745bc {
extern "C" {


s32 func_ov065_02274754(u32 a, u32 b, u16 c) {
    u32 args[2];
    s32 i;
    Unk_ov065_022745bc_Ctx *g = data_ov065_02290814;
    if (g->unk_17 != 0 && g->unk_20 == a) {
        return 0;
    }
    g->unk_17 = 1;
    data_ov065_02290814->unk_20 = a;
    data_ov065_02290814->unk_1b0 = 0;
    data_ov065_02290814->unk_1bc = 0;
    func_ov065_02288190(data_ov065_02290814->unk_10);
    data_ov065_02290814->unk_1ec = 0;
    data_ov065_02290814->unk_f4[data_ov065_02290814->unk_14 + 1] = a;
    data_ov065_02290814->unk_24[data_ov065_02290814->unk_14 + 1] = b;
    data_ov065_02290814->unk_a4[data_ov065_02290814->unk_14 + 1] = c;
    data_ov065_02290814->unk_1ac = b;
    data_ov065_02290814->unk_1aa = c;
    Unk_ov065_022745bc_Ctx *h = data_ov065_02290814;
    h->unk_2b8[h->unk_14 + 1] = func_ov065_022733c0();
    args[0] = a;
    args[1] = data_ov065_02290814->unk_2b8[data_ov065_02290814->unk_14 + 1];
    for (i = 1; i <= data_ov065_02290814->unk_14; i++) {
        Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
        s32 r = func_ov065_0227532c(7, q->unk_f4[i], q->unk_24[i], q->unk_a4[i], args, 2);
        if (r != 0) {
            return r;
        }
    }
    func_ov065_02273230(1);
    return 0;
}

}
}

namespace F022745bc {
extern "C" {


void func_ov065_0227470c(u32 a, u32 *p) {
    u32 n = p[0] + 2;
    if (n > 2) {
        MIi_CpuCopy32(&p[1], data_ov065_02290814->unk_338, (n - 2) * 4);
    }
    data_ov065_02290814->unk_330 = n - 1;
    data_ov065_02290814->unk_334 = a;
}

}
}

namespace F022745bc {
extern "C" {


s32 func_ov065_022746e4(s32 a) {
    if (data_ov065_02290814->unk_15 == 0) {
        return func_ov065_02272f0c(a);
    }
    return func_ov065_02272f80(a);
}

}
}

namespace F022745bc {
extern "C" {


s32 func_ov065_022745bc(u32 a, s32 b) {
    u32 args[3];
    s32 n;
    if (b != 0 || (data_ov065_02290814->unk_1c == 0 && data_ov065_02290814->unk_1a == 0)) {
        data_ov065_02290814->unk_1b0 = 1;
        Unk_ov065_022745bc_Ctx *h = data_ov065_02290814;
        h->unk_1b4 = OS_GetTick();
        h->unk_f4[0] = a;
        return 0;
    }
    if (data_ov065_02290814->unk_15 == 0) {
        u32 l = func_ov065_02289274(data_ov065_02290814->unk_e4, 0);
        data_ov065_02290814->unk_f4[0] = func_ov065_022890b8(l, (char *)"dwc_pid", 0);
        data_ov065_02290814->unk_24[0] = func_ov065_02289098(l);
        data_ov065_02290814->unk_a4[0] = func_ov065_0228907c(l);
        data_ov065_02290814->unk_1ec = data_ov065_02290814->unk_f4[0];
        n = 1;
    } else {
        if (((volatile Unk_ov065_022745bc_Ctx *)data_ov065_02290814)->unk_15 == 1) {
            data_ov065_02290814->unk_f4[0] = a;
        }
        data_ov065_02290814->unk_1ec = a;
        args[1] = data_ov065_02290814->unk_1c;
        args[2] = data_ov065_02290814->unk_1a;
        n = 3;
    }
    data_ov065_02290814->unk_1bc = 0x1770;
    {
        Unk_ov065_022745bc_Ctx *h = data_ov065_02290814;
        h->unk_1c0 = OS_GetTick();
        h->unk_1b0 = 0;
    }
    u32 k = data_ov065_02290814->unk_1f0 != 0 ? 0xb : 1;
    Unk_ov065_022745bc_Ctx *j = data_ov065_02290814;
    args[0] = j->unk_15;
    return func_ov065_0227532c(k, a, j->unk_24[0], j->unk_a4[0], args, n);
}

}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_022743e0(s32 a, s32 b) {
    s32 x;
    volatile s32 av = a;
    volatile s32 first;
    volatile s32 next;
    volatile s32 started;
    struct {
        volatile s32 n2;
        u8 buf14[8];
        u32 h;
        char buf20[12];
        Unk_ov065_022743e0_Rec rec;
        char buf34[0x208];
    } l;
    if (b != 0) {
        next = g->unk_19d;
    } else {
        u8 cur = g->unk_19d;
        if (cur < g->unk_32c - 1) next = cur + 1;
        else next = 0;
    }
    started = 0;
    if (b == 0) first = 1;
    else first = 0;
    Unk_ov065_02273b60_Ctx **const gp = &g;
    for (;;) {
        Unk_ov065_02273b60_Ctx *c;
        s32 i;
        s32 n;
        s32 e0, e1;
        s32 n1, n3;
        if (first != 0 || started != 0) {
            (*gp)->unk_19d++;
            if ((*gp)->unk_19d >= (*gp)->unk_32c) (*gp)->unk_19d = 0;
        }
        if (started != 0 && (*gp)->unk_19d == next) {
            (*gp)->unk_1bc = 3000;
            c = *gp;
            u64 t = OS_GetTick();
            c->unk_1c0 = t;
            c->unk_1b0 = 0;
            return 0;
        }
        started = 1;
        c = *gp;
        x = func_020ffc60(func_ov065_02271474(), c->unk_2e4 + c->unk_2ec[c->unk_19d] * 12);
        if (x == 0) continue;
        if (x == -1) continue;
        if (func_020ffdd8((*gp)->unk_2e4 + (*gp)->unk_2ec[(*gp)->unk_19d] * 12) == 0) continue;
        i = 1;
        c = *gp;
        n = c->unk_0d;
        if (n >= 1) {
            u32 *p = (u32 *)((u8 *)c + 4);
            do {
                if (x == *(u32 *)((u8 *)p + 0xf4)) break;
                p++;
                i++;
            } while (i <= *(volatile u8 *)&c->unk_0d);
        }
        if (i <= n) continue;
        e0 = func_ov065_0227c000((*gp)->unk_00, x, &l.h);
        e1 = func_ov065_0227c05c((*gp)->unk_00, l.h, &l.rec);
        if ((e0 | e1) != 0) continue;
        if (l.rec.unk_04 != 4) continue;
        n1 = func_ov065_02277998((char *)"VER", l.buf20, l.buf34, 0x2f);
        l.n2 = func_ov065_02277998((char *)"FME", l.buf14 + 2, l.buf34, 0x2f);
        n3 = func_ov065_02277998((char *)"MDF", l.buf14, l.buf34, 0x2f);
        if (n1 <= 0) continue;
        if (l.n2 <= 0) continue;
        if (n3 <= 0) continue;
        if (func_0212b854(l.buf20, 0, 10) != 3) continue;
        if ((*gp)->unk_16 != func_0212b854(l.buf14 + 2, 0, 10)) continue;
        return func_ov065_022745bc(x, av);
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_0227433c(void) {
    Unk_ov065_02273b60_Ctx *c;
    u64 t;
    g->unk_1f0 = 0;
    g->unk_1ec = 0;
    g->unk_19f = 0;
    c = g;
    t = OS_GetTick();
    c->unk_1c0 = t;
    if (c->unk_15 == 0) {
        c->unk_198 = 3;
        func_ov065_02275764(0);
        if (func_ov065_02272f0c() != 0) return FALSE;
    } else if (c->unk_15 == 1) {
        func_ov065_022743e0(0, 0);
        if (func_ov065_022746e4() != 0) return FALSE;
    } else if (c->unk_15 == 3) {
        func_ov065_0227627c(6, -0x13a1a);
        return FALSE;
    }
    return TRUE;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02274308(s32 a) {
    Unk_ov065_02273b60_Ctx *c = g;
    s32 r = func_ov065_0227532c(5, a, c->unk_24[0], c->unk_a4[0], 0, 0);
    g->unk_1ec = 0;
    return r;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_022741b0(s32 a) {
    Unk_ov065_02273b60_Ctx *c = g;
    BOOL b;
    if (c->unk_17 != 0 && c->unk_20 == c->unk_1e8) b = FALSE;
    else b = TRUE;
    if (b) {
        c->unk_17 = 0;
        g->unk_20 = 0;
        func_ov065_02288190(g->unk_10);
    }
    if (g->unk_0d < 0x1f) g->unk_f4[g->unk_0d + 1] = 0;
    g->unk_3b4 = 0xff;
    if (g->unk_194 != 0) {
        func_ov065_02286da0(g->unk_194);
        g->unk_194 = 0;
    }
    g->unk_14 = g->unk_0d;
    g->unk_1ec = 0;
    if (!b) {
        if (g->unk_15 != 3) func_ov065_02273b60();
    } else if (g->unk_15 == 0) {
        g->unk_198 = 3;
        g->unk_e8 = 2;
        u64 t = OS_GetTick();
        Unk_ov065_02273b60_Ctx *d = g;
        d->unk_ec = (u32)t;
        d->unk_f0 = (u32)(t >> 32);
    } else if (g->unk_15 == 1) {
        g->unk_198 = 4;
        func_ov065_022743e0(1, 0);
    } else if (g->unk_15 == 2) {
        s32 i;
        g->unk_198 = 14;
        g->unk_1cc = 0;
        g->unk_1a8 = 0;
        func_ov065_02273a70(a);
        for (i = 1; i <= g->unk_0d; i++) {
            if (func_ov065_022736fc(g->unk_f4[i], 13) == 0) return FALSE;
        }
        if (g->unk_0d == 0) func_ov065_02273b88(2);
    }
    return TRUE;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_0227412c(void) {
    BOOL r = TRUE;
    Unk_ov065_02273b60_Ctx *c = g;
    if (c->unk_15 == 3) {
        if (c->unk_0d != 0) func_ov065_02273a40();
        func_ov065_0227627c(6, -0x13a2e);
        return FALSE;
    }
    c->unk_14 = c->unk_0d;
    g->unk_1f0 = 0;
    if (g->unk_194 != 0) {
        func_ov065_02286da0(g->unk_194);
        g->unk_194 = 0;
    }
    c = g;
    if (c->unk_0d != 0) {
        func_ov065_02273b60();
    } else {
        c->unk_198 = 4;
        r = func_ov065_0227433c();
    }
    return r;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_022740a4(void) {
    s32 i, r;
    for (i = 1; i <= g->unk_0d; i++) {
        Unk_ov065_02273b60_Ctx *c = g;
        r = func_ov065_0227532c(10, c->unk_f4[i], c->unk_24[i], c->unk_a4[i], &c->unk_330, c->unk_330 + 1);
        if (r != 0) return r;
    }
    g->unk_17 = 0;
    g->unk_20 = 0;
    g->unk_1a0 = 1;
    func_ov065_022849f8(*(u32 *)g->unk_04);
    g->unk_1a0 = 0;
    return 0;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02273d38(s32 a) {
    s32 kind = 3;
    u32 args[6];
    BOOL done = FALSE;
    s32 i;
    switch (a) {
    case 0:
        if (g->unk_19c < g->unk_0d - 1) {
            g->unk_198 = 13;
            args[0] = g->unk_f4[g->unk_19c + 1];
            args[1] = g->unk_19c + 1;
            args[2] = g->unk_2b8[g->unk_19c + 1];
            args[3] = g->unk_24[g->unk_19c + 1];
            args[4] = g->unk_a4[g->unk_19c + 1];
            kind = 5;
        } else {
            g->unk_17 = 0;
            g->unk_20 = 0;
            func_ov065_02288190(g->unk_10);
            if (g->unk_15 == 0) g->unk_198 = 3;
            else if (g->unk_15 == 1) g->unk_198 = 4;
            else g->unk_198 = 10;
            g->unk_19c = 0;
            if (g->unk_15 == 2 || g->unk_0d == g->unk_16) {
                if (g->unk_15 == 2) {
                    g->unk_1f4 = g->unk_f4[g->unk_0d];
                } else {
                    g->unk_1f4 = 0;
                    g->unk_f4[0] = g->unk_1e8;
                }
                g->unk_198 = 0x10;
                g->unk_1c8 = 0;
                for (i = 1; i <= g->unk_0d; i++) {
                    func_ov065_022738b4(g->unk_2b8[i], 2);
                }
            } else {
                args[0] = 0;
                args[1] = g->unk_0d;
                args[2] = g->unk_2b8[g->unk_0d];
                if (g->unk_15 == 0) {
                    g->unk_e8 = 2;
                    u64 t = OS_GetTick();
                    Unk_ov065_02273b60_Ctx *c = g;
                    c->unk_ec = (u32)t;
                    c->unk_f0 = (u32)(t >> 32);
                } else if (g->unk_15 == 1) {
                    func_ov065_022743e0(1, 0);
                }
            }
            if (g->unk_15 != 2) done = TRUE;
        }
        if (g->unk_198 != 0x10) {
            Unk_ov065_02273b60_Ctx *c = g;
            u32 n = c->unk_0d;
            if (func_ov065_0227532c(8, c->unk_f4[n], c->unk_24[n], c->unk_a4[n], args, kind), func_ov065_022746e4() != 0) return;
            g->unk_3b5 = 0;
        }
        break;
    case 1:
        g->unk_198 = 1;
        if (g->unk_15 == 3) g->unk_1f4 = g->unk_f4[g->unk_0d];
        done = TRUE;
        break;
    case 2:
        g->unk_198 = 1;
        if (g->unk_15 == 0 || g->unk_15 == 1) {
            g->unk_17 = 1;
            g->unk_20 = g->unk_1e8;
        }
        if (g->unk_0d > 1) {
            Unk_ov065_02273b60_Ctx *c = g;
            u32 args2 = (u32)&c->unk_f4[c->unk_0d - 1];
            func_ov065_0227532c(9, c->unk_f4[0], c->unk_24[0], c->unk_a4[0], (void *)args2, 1);
            if (func_ov065_022746e4() != 0) return;
        }
        break;
    case 3:
        g->unk_198 = 1;
        g->unk_1f4 = done;
        done = TRUE;
        break;
    case 4:
        if (g->unk_15 != 2) func_ov065_02271e00(2, (char *)"", done);
        {
            Unk_ov065_02273b60_Ctx *c = g;
            BOOL r;
            if (c->unk_1f4 == 0) r = TRUE;
            else r = FALSE;
            g->unk_44c(0, 0, r, 0, func_ov065_02271e8c(), c->unk_450);
        }
        if (g->unk_15 == 0 || g->unk_15 == 1) {
            func_ov065_02275890();
        } else {
            if (g->unk_e4 != 0) {
                func_ov065_02289444(g->unk_e4);
                g->unk_e4 = 0;
            }
            func_ov065_02287260();
            if (g->unk_15 == 2) {
                func_ov065_02275ccc();
                if (func_ov065_02272f80() != 0) return;
                if (data_ov065_02290810[0] == 1) data_ov065_02290810[1] = 1;
                g->unk_198 = 10;
            } else {
                g->unk_198 = 1;
            }
            g->unk_1f4 = 0;
        }
        g->unk_1a1 = 0;
        break;
    }
    if (done != 0 && g->unk_15 != 3) {
        func_ov065_02289280(g->unk_e4);
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

s32 func_ov065_02273cb8(u32 *a, u32 n) {
    u32 i;
    if (g->unk_19e != 0 && g->unk_198 == 4) return TRUE;
    for (i = 0; i < n; a++, i++) {
        if (func_ov065_0227bfb4(g->unk_00, *a) == 0) return FALSE;
        if (g->unk_19e != 0 && g->unk_198 == 1) return TRUE;
    }
    return TRUE;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02273c30(void) {
    s32 v;
    Unk_ov065_02273b60_Ctx *c;
    BOOL r6, r5;
    func_ov065_02271e00(1, (char *)"", 0);
    if (func_ov065_02272f80() == 0) {
        func_ov065_02275890();
        c = g;
        v = c->unk_1f4;
        if (v != 0) r5 = TRUE;
        else if (c->unk_15 == 2) r5 = TRUE;
        else r5 = FALSE;
        if (v == 0) r6 = TRUE;
        else r6 = FALSE;
        g->unk_44c(0, 1, r6, r5, func_ov065_02271e8c(v), c->unk_450);
        g->unk_1a1 = 0;
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02273b88(s32 a) {
    Unk_ov065_02273b60_Ctx *c;
    BOOL r;
    if (a == 0) {
        func_ov065_02273c30();
    } else {
        func_ov065_02275984();
        c = g;
        if (c->unk_15 == 2 || c->unk_15 == 3) {
            if (c->unk_1f4 == 0) r = TRUE;
            else r = FALSE;
            g->unk_44c(0, 1, r, 0, func_ov065_02271e8c(), c->unk_450);
        } else if (c->unk_15 == 0) {
            if (a == 1) {
                func_ov065_02275764(0);
                if (func_ov065_02272f0c() != 0) return;
            }
        } else if (c->unk_15 == 1) {
            if (a == 1) {
                func_ov065_022743e0(0, 0);
            }
        }
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g data_ov065_02290814

void func_ov065_02273b60(void) {
    if (g->unk_15 == 2) return;
    if (g->unk_15 == 3) return;
    func_ov065_02273a40();
    func_ov065_02273b88(1);
}
#undef g
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_02273ad0(void) {
    u32 r = 0;
    G->unk_17 = r;
    G->unk_20 = r;
    G->unk_1a0 = r;
    if (G->unk_1f0 != 0) {
        if (*(volatile u8 *)&G->unk_15 == 0) {
            G->unk_198 = 3;
            r = func_ov065_02275764(r);
            if (func_ov065_02272f0c(r)) return r;
        } else if (*(volatile u8 *)&G->unk_15 == 1) {
            G->unk_198 = 4;
            r = func_ov065_022745bc(G->unk_1f0, 0);
            if (func_ov065_022746e4(r)) return r;
        }
    } else {
        func_ov065_02273b88(1);
    }
    return 0;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

s32 func_ov065_02273a70(u32 a) {
    u32 *r;
    G->unk_1f4 = a;
    r = func_ov065_02270350(a, G->unk_0d + 1);
    if (r != NULL) {
        G->unk_1a0 = 2;
        func_ov065_02284a18(*r);
        G->unk_1a0 = 0;
        return 1;
    }
    func_ov065_02275f98(a, G->unk_0d + 1);
    return 0;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_02273a40(void) {
    G->unk_1a0 = 2;
    func_ov065_022849f8(*G->unk_04);
    *(volatile u8 *)&G->unk_1a0 = 0;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_02273958(u32 mask) {
    u32 a[32];
    u32 b[32];
    Unk_ov065_02273274_G *g;
    s32 i, j, n1, n2;
    u8 *q;
    u8 *r;
    n2 = 0;
    n1 = 0;
    i = 1;
    g = G;
    if (i <= g->unk_0d) {
        q = (u8 *)g + 1;
        r = (u8 *)g + 4;
        do {
            if (mask & (1 << q[0x2b8])) {
                b[n1] = *(u32 *)(r + 0xf4);
                n1++;
            } else {
                a[n2] = *(u32 *)(r + 0xf4);
                n2++;
            }
            q++;
            r += 4;
            i++;
        } while (i <= g->unk_0d);
    }
    for (j = 0; j < n1; j++) {
        if (func_ov065_022746e4(func_ov065_0227532c(0x10, b[j], 0, 0, a, n2))) return 0;
    }
    G->unk_1a0 = 2;
    for (j = 0; j < n2; j++) {
        u32 idx = func_ov065_022732c0(a[j], 0);
        if (idx != 0xff) {
            func_ov065_0227062c(idx);
        }
    }
    G->unk_1a0 = 0;
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_022738b4(u32 a, u32 b) {
    u8 buf[4];
    switch (b) {
    case 2: {
        u8 i;
        Unk_ov065_02273274_G *g;
        g = G;
        if (a == g->unk_2b8[g->unk_0d]) {
            buf[0] = 1;
        } else {
            buf[0] = 0;
        }
        for (i = 1; i <= *(volatile u8 *)&g->unk_0d; i++) {
            if (a == g->unk_2b8[i]) {
                buf[1] = i;
                buf[2] = a;
                break;
            }
        }
        break;
    }
    case 3:
        buf[0] = G->unk_1a6;
        buf[1] = G->unk_1a6 >> 8;
        break;
    }
    func_ov065_02277750(b, a, buf, 4);
    G->unk_1d0 = func_ov065_02277974();
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_02273760(void) {
    Unk_ov065_02273274_G *g = G;
    u64 d;
    s32 st = g->unk_198;
    if (st == 9 || st == 16 || st == 17) {
        d = func_ov065_02277974() - g->unk_1d0;
    } else {
        return 1;
    }
    switch (g->unk_198) {
    case 9:
        if (d > 0x1770) {
            func_ov065_022738b4(g->unk_2b8[0], 3);
        }
        break;
    case 16:
        if (d > 0x1770) {
            g->unk_1a3++;
            Unk_ov065_02273274_G *h = G;
            if (h->unk_1a3 > 5) {
                if (*(volatile u8 *)&h->unk_15 == 0) goto yes;
                if (*(volatile u8 *)&h->unk_15 == 1) {
                yes:
                    func_ov065_02273a40();
                    func_ov065_02273b88(1);
                } else {
                    if (!func_ov065_02273958(h->unk_1c8)) return 0;
                    if (G->unk_0d != 0) {
                        G->unk_1a3 = 0;
                        G->unk_1d0 = func_ov065_02277974();
                    } else {
                        if (!func_ov065_022741b0(G->unk_1f4)) return 0;
                    }
                }
            } else {
                s32 i;
                for (i = 1; i <= G->unk_0d; i++) {
                    if ((G->unk_1c8 & (1 << G->unk_2b8[i])) == 0) {
                        func_ov065_022738b4(G->unk_2b8[i], 2);
                    }
                }
            }
        }
        break;
    case 17:
        if (g->unk_1a6 < d) {
            func_ov065_02273d38(4);
        }
        break;
    }
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_022736fc(u32 a, u32 b) {
    u32 tmp;
    u32 flag;
    if (b == 0xd) {
        tmp = G->unk_1f4;
        flag = 1;
    } else {
        flag = 0;
    }
    if (func_ov065_022746e4(func_ov065_0227532c(b, a, 0, 0, &tmp, flag))) return 0;
    G->unk_1d8 = func_ov065_02277974();
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_02273590(u32 a, u32 b, u32 c) {
    if (func_ov065_02270508(a) != 6) return 1;
    switch (b) {
    case 0xd:
        if (G->unk_198 != 8) {
            G->unk_198 = 8;
            func_ov065_02273a70(c);
        }
        if (!func_ov065_022736fc(a, 0xe)) return 0;
        break;
    case 0xe:
        if (G->unk_198 == 0xe) {
            u64 now = func_ov065_02277974();
            Unk_ov065_02273274_G *g = G;
            u64 t0 = g->unk_1d8;
            u64 lim = t0 + 0x258;
            if (lim < now) {
                u64 x = ((now - t0) >> 1) + (u64)-300;
                if (g->unk_1a8 < x) {
                    g->unk_1a8 = (u16)x;
                }
            }
            {
                u32 idx = func_ov065_022732c0(a, 0);
                if (idx != 0xff) {
                    G->unk_1cc |= 1 << idx;
                }
            }
            {
                u32 m = func_ov065_02273274(1);
                if (G->unk_1cc == m) {
                    s32 i;
                    for (i = 1; i <= G->unk_0d; i++) {
                        if (!func_ov065_022736fc(G->unk_f4[i], 0xf)) return 0;
                    }
                    G->unk_198 = 0xf;
                }
            }
        } else {
            if (!func_ov065_022736fc(a, 0xf)) return 0;
        }
        break;
    case 0xf:
        if (G->unk_198 == 8) {
            func_ov065_02273b88(2);
        }
        break;
    }
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_02273440(void) {
    Unk_ov065_02273274_G *g = G;
    u64 d;
    s32 st = g->unk_198;
    if (st == 8 || st == 14 || st == 15) {
        d = func_ov065_02277974() - g->unk_1d8;
    } else {
        return 1;
    }
    switch (g->unk_198) {
    case 8:
        if (d > 0x1770) {
            if (!func_ov065_022736fc(g->unk_f4[0], 0xe)) return 0;
        }
        break;
    case 14:
        if (d > 0x1770) {
            g->unk_1a4++;
            if (G->unk_1a4 > 5) {
                if (!func_ov065_02273958(G->unk_1cc)) return 0;
                if (G->unk_0d != 0) {
                    G->unk_1a4 = 0;
                    G->unk_1d8 = func_ov065_02277974();
                } else {
                    func_ov065_02273b88(2);
                }
            } else {
                s32 i;
                for (i = 1; i <= G->unk_0d; i++) {
                    if ((G->unk_1cc & (1 << G->unk_2b8[i])) == 0) {
                        if (!func_ov065_022736fc(G->unk_f4[i], 0xd)) return 0;
                    }
                }
            }
        }
        break;
    case 15:
        if (g->unk_1a8 < d) {
            func_ov065_02273b88(2);
        }
        break;
    }
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_02273400(void) {
    s32 i = 0;
    u32 *p;
    p = (u32 *)data_ov065_02290840;
    for (; i < 0x9a; i++) {
        if (p[1] != 0) {
            func_ov065_02277b64(4, p[1], 0);
        }
        p += 3;
    }
    {
        volatile u32 z = 0;
        MIi_CpuClear32(z, data_ov065_02290840, 0x738);
    }
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_022733c0(void) {
    s32 j;
    Unk_ov065_02273274_G *g;
    u8 i = 0;
    g = G;
    for (; i < 0x20; i++) {
        for (j = 0; j <= *(volatile u8 *)&g->unk_14; j++) {
            if (i == g->unk_2b8[j]) break;
        }
        if (j > *(volatile u8 *)&g->unk_14) break;
    }
    return i;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_0227330c(char *s) {
    if (func_ov065_022890b8(s, (char *)"numplayers", -1) == -1) return 0;
    if (func_ov065_022890b8(s, (char *)"maxplayers", -1) == -1) return 0;
    if (func_ov065_022890b8(s, (char *)"dwc_mtype", -1) == -1) return 0;
    if (func_ov065_022890b8(s, (char *)"dwc_mresv", -1) == -1 && func_ov065_022890b8(s, (char *)"dwc_mresv", 0) == 0) return 0;
    if (func_ov065_022890b8(s, (char *)"dwc_mver", -1) == -1) return 0;
    return func_ov065_022890b8(s, (char *)"dwc_pid", 0);
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_022732c0(u32 v, s32 k) {
    Unk_ov065_02273274_G *g;
    s32 i;
    if (k == 0) {
        k = 1;
    } else {
        k = 0;
    }
    for (; k <= *(volatile u8 *)&G->unk_0d; k++) {
        g = G;
        if (v == g->unk_f4[k]) {
            return g->unk_2b8[k];
        }
    }
    return 0xff;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

u32 func_ov065_02273274(u32 a) {
    u32 r = 0;
    if (a != 0) {
        return G->unk_2d8 & ~1;
    }
    {
        u32 i = 1;
        u32 n = G->unk_0d;
        for (; (s32)i <= (s32)n; i++) {
            r |= 1 << G->unk_2b8[i];
        }
    }
    return r;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G data_ov065_02290814

void func_ov065_02273230(u32 a) {
    Unk_ov065_02273230_H *h = data_ov065_02290818;
    if (h != NULL && h->unk_00 != 0) {
        h->unk_08 = 0;
        data_ov065_02290818->unk_0c = 0;
        data_ov065_02290818->unk_02 = 0;
        data_ov065_02290818->unk_18 = func_ov065_02277974();
        if (a == 0) {
            data_ov065_02290818->unk_10 = func_ov065_02277974();
        }
    }
}
#undef G
}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272fe0(void)
{
    Unk_ov065_02290818_Sm *s = data_ov065_02290818;
    Unk_ov065_02290814_Ctx *cx;
    s32 st;
    s32 j;
    if (s == 0) {
        goto end;
    }
    if (s->unk_00 == 0) {
        goto end;
    }
    cx = data_ov065_02290814;
    if (cx->unk_15 == 2) {
        goto end;
    }
    if (*(volatile u8 *)&cx->unk_15 == 3) {
        goto end;
    }
    st = cx->unk_198;
    if (st == 0x13) {
        s32 t = func_ov065_02273274(0);
        u32 five;
        s = data_ov065_02290818;
        if (s->unk_08 == t) {
            if (s->unk_0c == t) {
                data_ov065_02290814->unk_16 = data_ov065_02290814->unk_0d;
                data_ov065_02290814->unk_19c = data_ov065_02290814->unk_0d - 1;
                func_ov065_02273d38(0);
                goto end;
            }
            s->unk_18 = func_ov065_02277974();
            s->unk_08 = 0;
            if (data_ov065_02290814->unk_15 == 0) {
                u64 t2;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_198 = 3;
                data_ov065_02290814->unk_e8 = 2;
                t2 = OS_GetTick();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t2;
                cw->unk_f0 = (u32)(t2 >> 32);
                goto end;
            }
            data_ov065_02290814->unk_198 = 4;
            func_ov065_022743e0(1, 0);
            goto end;
        }
        five = s->unk_02;
        if ((u64)(func_ov065_02277974() - s->unk_18) < (u64)(s64)(s32)(five * 0x1770)) {
            goto end;
        }
        if (five > 5) {
            func_ov065_02273230(1);
            func_ov065_02273a40();
            func_ov065_02273b88(1);
            goto end;
        }
        {
            for (j = 1; j <= data_ov065_02290814->unk_0d; j++) {
                u32 bits = data_ov065_02290818->unk_08;
                Unk_ov065_02290814_Ctx *c2;
                if ((bits & (1 << (((u8 *)data_ov065_02290814) + j)[0x2b8])) == 0) {
                    c2 = data_ov065_02290814;
                    if (func_ov065_022746e4(func_ov065_0227532c(0x11, c2->unk_f4[j], c2->unk_24[j], c2->unk_a4[j], 0, 0)) != 0) {
                        goto end;
                    }
                }
            }
            data_ov065_02290818->unk_02++;
        }
    } else {
        if ((u32)(st - 3) > 1) {
            goto end;
        }
        if ((s32)cx->unk_0d < (s32)s->unk_01 - 1) {
            goto end;
        }
        if (s->unk_02 == 0) {
            if (func_ov065_02277974() - s->unk_10 >= (u64)s->unk_04) {
                goto proceed;
            }
        }
        if (s->unk_02 == 0) {
            goto end;
        }
        s = data_ov065_02290818;
        if (func_ov065_02277974() - s->unk_18 < (u64)(s->unk_04 >> 2)) {
            goto end;
        }
    proceed:
        if (data_ov065_02290814->unk_1ec != 0) {
            if (func_ov065_022746e4(func_ov065_02274308(data_ov065_02290814->unk_1ec)) != 0) {
                goto end;
            }
        }
        data_ov065_02290814->unk_198 = 0x13;
        {
            for (j = 1; j <= data_ov065_02290814->unk_0d; j++) {
                Unk_ov065_02290814_Ctx *c2 = data_ov065_02290814;
                if (func_ov065_022746e4(func_ov065_0227532c(0x11, c2->unk_f4[j], c2->unk_24[j], c2->unk_a4[j], 0, 0)) != 0) {
                    goto end;
                }
            }
        }
        s = data_ov065_02290818;
        s->unk_18 = func_ov065_02277974();
        s->unk_02 = 1;
    }
end:;
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_02272f80(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
        t = 8;
        c = ~1;
        break;
    case 3:
        t = 6;
        c = ~9;
        break;
    case 4:
        t = 6;
        c = ~0x13;
        break;
    }
    func_ov065_0227627c(t, c - 0x13c68);
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_02272f0c(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 6;
        c = ~0x31;
        break;
    case 2:
        t = 6;
        c = ~0x1d;
        break;
    case 3:
        t = 6;
        c = ~0x13;
        break;
    case 4:
        t = 6;
        c = ~0x27;
        break;
    case 5:
        t = 8;
        c = -1;
        break;
    case 6:
        t = 8;
        c = ~1;
        break;
    }
    func_ov065_0227627c(t, c - 0x14c08);
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_02272e60(s32 a)
{
    s32 c, t;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 6;
        c = ~0x31;
        break;
    case 2:
        t = 6;
        c = ~0x3b;
        break;
    case 3:
        t = 6;
        c = ~0x1d;
        break;
    case 4:
        t = 6;
        c = ~0x4f;
        break;
    case 5:
        t = 6;
        c = ~0x13;
        break;
    }
    switch (func_ov065_02270508()) {
    case 2:
        func_ov065_02271440(t, c - 0xfa00);
        break;
    case 4:
        func_ov065_02271fc8(t, c - 0x12110);
        break;
    case 5:
        func_ov065_0227627c(t, c - 0x14820);
        break;
    default:
        func_ov065_02270e34(t, c - 0x16f30);
        break;
    }
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_02272e18(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
        t = 6;
        c = ~0x31;
        break;
    case 3:
        t = 6;
        c = ~0x1d;
        break;
    }
    func_ov065_0227627c(t, c - 0x14ff0);
    return a;
}

}
}

namespace F02272734 {
extern "C" {

enum Unk_ov065_02272dd4_E { Unk_ov065_02272dd4_E_6 = 6 };
s32 func_ov065_02272dd4(s32 a)
{
    Unk_ov065_02272dd4_E t;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        t = Unk_ov065_02272dd4_E_6;
        break;
    }
    if (t != 0) {
        func_ov065_0227627c(t, -0x14ff9);
    }
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_02272d5c(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
    case 5:
        t = 0;
        c = 0;
        a = 0;
        break;
    case 3:
        t = 6;
        c = ~9;
        break;
    case 4:
        t = 6;
        c = ~0x1d;
        break;
    case 6:
        t = 6;
        c = ~0x45;
        break;
    case 7:
        t = 6;
        c = ~0x4f;
        break;
    }
    if (t != 0) {
        func_ov065_0227627c(t, c - 0x153d8);
    }
    return a;
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272ab0(u32 list, s32 mode, u32 c)
{
    switch (mode) {
    case 0:
        func_ov065_02272aac(c);
        break;
    case 4: {
        s32 i = 0;
        if (func_ov065_02289268(list) > 0) {
            do {
                u32 e = func_ov065_02289274(list, i);
                if (func_ov065_0227330c(e) == 0) {
                    func_ov065_022892c8(list, e);
                    i--;
                }
                i++;
            } while (i < func_ov065_02289268(list));
        }
        switch (data_ov065_02290814->unk_198) {
        case 2: {
            i = 0;
            if (func_ov065_02289268(list) > 0) {
                do {
                    u32 e = func_ov065_02289274(list, i);
                    Unk_ov065_02290814_Ctx *cx = data_ov065_02290814;
                    if (cx->unk_1c != 0) {
                        if (cx->unk_1c == func_ov065_02289098(e)) {
                            if (cx->unk_1a != 0) {
                                if (data_ov065_02290814->unk_1a == func_ov065_0228907c(e)) {
                                    break;
                                }
                            }
                        }
                    }
                    i++;
                } while (i < func_ov065_02289268(list));
            }
            if (i < func_ov065_02289268(list)) {
                data_ov065_02290814->unk_198 = 3;
                data_ov065_02290814->unk_1ec = 0;
                if (func_ov065_02272f0c(func_ov065_02275764(data_ov065_02290814->unk_1ec)) != 0) {
                    return;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_e8 = 2;
                t = OS_GetTick();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        }
        case 3:
            func_ov065_0227295c(1);
            if (func_ov065_02289268(list) != 0) {
                if (func_ov065_022746e4(func_ov065_022745bc(0, 0)) == 0) {
                    data_ov065_02290814->unk_198 = 4;
                    data_ov065_02290814->unk_e8 = 0;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_e8 = 2;
                t = OS_GetTick();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        case 5: {
            if (func_ov065_02289268(list) != 0) {
                do {
                    u32 e = func_ov065_02289274(list, 0);
                    if (data_ov065_02290814->unk_1ac == func_ov065_02289098(e)) {
                        if (data_ov065_02290814->unk_1aa == func_ov065_0228907c(e)) {
                            break;
                        }
                    }
                    func_ov065_022892c8(list, e);
                } while (func_ov065_02289268(list) != 0);
            }
            if (func_ov065_02289268(list) != 0) {
                u32 e = func_ov065_02289274(list, 0);
                u32 h = func_ov065_022890b8(e, (char *)"dwc_pid", 0);
                Unk_ov065_02290814_Ctx *cx = data_ov065_02290814;
                if (cx->unk_15 == 1 && h == cx->unk_f4[0]) {
                    if (func_ov065_0227295c(0) != 0) {
                        if (data_ov065_02290814->unk_0d != 0) {
                            if (func_ov065_022746e4(func_ov065_022740a4(data_ov065_02290814->unk_0d)) != 0) {
                                return;
                            }
                        }
                    } else {
                        if (func_ov065_022746e4(func_ov065_02274308(data_ov065_02290814->unk_f4[0])) != 0) {
                            return;
                        }
                        data_ov065_02290814->unk_198 = 4;
                        if (func_ov065_022746e4(func_ov065_022743e0(0, 0)) != 0) {
                            return;
                        }
                        return;
                    }
                }
                data_ov065_02290814->unk_198 = 6;
                if (func_ov065_02272e18(func_ov065_022754f0(0, 0, func_ov065_02289274(list, 0))) != 0) {
                    return;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_e8 = 2;
                t = OS_GetTick();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        }
        }
        break;
    }
    case 5:
        break;
    }
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272aac(u32 a)
{
}

}
}

namespace F02272734 {
extern "C" {


BOOL func_ov065_0227295c(u32 a)
{
    BOOL flag2 = FALSE;
    s32 i = 0;
    if (func_ov065_02289268(data_ov065_02290814->unk_e4) > 0) {
        do {
            u32 e = func_ov065_02289274(data_ov065_02290814->unk_e4, i);
            BOOL found;
            if (data_ov065_02290814->unk_15 == 0) {
                u32 h = func_ov065_022890b8(e, (char *)"dwc_pid", 0);
                s32 j;
                found = FALSE;
                for (j = 1; j <= data_ov065_02290814->unk_0d; j++) {
                    if (h == data_ov065_02290814->unk_f4[j]) {
                        func_ov065_022892c8(data_ov065_02290814->unk_e4, e);
                        i--;
                        found = TRUE;
                        break;
                    }
                }
                if (found) {
                    goto next;
                }
            }
            if (data_ov065_02290814->unk_45c != 0) {
                s32 v = data_ov065_02290814->unk_45c(i, data_ov065_02290814->unk_460);
                if (v > 0) {
                    if (v > 0x7fffff) {
                        v = 0x7fffff;
                    }
                    func_ov065_0228914c(e, (char *)"dwc_eval", (v << 8) | func_ov065_022778b0(0x100));
                } else {
                    func_ov065_022892c8(data_ov065_02290814->unk_e4, e);
                    i--;
                    flag2 = TRUE;
                }
            } else {
                func_ov065_0228914c(e, (char *)"dwc_eval", func_ov065_022778b0(0x80));
            }
        next:
            i++;
        } while (i < func_ov065_02289268(data_ov065_02290814->unk_e4));
    }
    if (a != 0) {
        if (func_ov065_02289268(data_ov065_02290814->unk_e4) != 0) {
            func_ov065_02289258(data_ov065_02290814->unk_e4, 0, (char *)"dwc_eval", 0);
        }
    }
    if (flag2 != 0) {
        if (func_ov065_02289268(data_ov065_02290814->unk_e4) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272858(s32 a, u32 b)
{
    switch (a) {
    case 8:
        func_ov065_022880d8(b, data_ov065_02290814->unk_14);
        break;
    case 10:
        func_ov065_022880d8(b, data_ov065_02290814->unk_16);
        break;
    case 0x32:
        func_ov065_022880d8(b, *(s32 *)((u8 *)data_ov065_02290814 + 0x1e8));
        break;
    case 0x33:
        func_ov065_022880d8(b, data_ov065_02290814->unk_15);
        break;
    case 0x34:
        func_ov065_022880d8(b, data_ov065_02290814->unk_20);
        break;
    case 0x35:
        func_ov065_022880d8(b, 3);
        break;
    case 0x36:
        func_ov065_022880d8(b, 1);
        break;
    default: {
        s32 i = a - 0x64;
        if (data_ov065_02290840[i].unk_00 != 0) {
            if (data_ov065_02290840[i].unk_01 != 0) {
                func_ov065_02288094(b, data_ov065_02290840[i].unk_08);
            } else {
                func_ov065_022880d8(b, *data_ov065_02290840[i].unk_08);
            }
        }
        break;
    }
    }
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272854(void)
{
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272850(void)
{
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_022727e0(s32 a, u32 b)
{
    switch (a) {
    case 0: {
        s32 i;
        Unk_ov065_02290840_Ent *e;
        func_ov065_022880fc(b, 8);
        func_ov065_022880fc(b, 10);
        func_ov065_022880fc(b, 0x32);
        func_ov065_022880fc(b, 0x33);
        func_ov065_022880fc(b, 0x34);
        func_ov065_022880fc(b, 0x35);
        func_ov065_022880fc(b, 0x36);
        for (i = 0, e = data_ov065_02290840; i < 0x9a; e++, i++) {
            if (e->unk_00 != 0) {
                func_ov065_022880fc(b, e->unk_00);
            }
        }
        break;
    }
    case 1:
        break;
    case 2:
        break;
    }
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_022727dc(void)
{
    return 0;
}

}
}

namespace F02272734 {
extern "C" {


s32 func_ov065_022727d4(s32 a)
{
    return func_ov065_02272e60(a);
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_022727c4(u32 a, u32 b)
{
    data_ov065_02290814->unk_1c = a;
    data_ov065_02290814->unk_1a = b;
}

}
}

namespace F02272734 {
extern "C" {


void func_ov065_02272734(u32 a)
{
    if (data_ov065_02290814->unk_198 == 1) {
        data_ov065_02290814->unk_198 = 6;
    } else if (data_ov065_02290814->unk_198 != 6 && data_ov065_02290814->unk_198 != 0xb) {
        return;
    }
    if (data_ov065_02290814->unk_178 == a) {
        data_ov065_02290814->unk_174++;
    } else {
        data_ov065_02290814->unk_174 = 0;
        data_ov065_02290814->unk_178 = a;
    }
    Unk_ov065_02272734_Z z = Unk_ov065_02272734_Z_0;
    {
        Unk_ov065_02290814_Ctx *c = data_ov065_02290814;
        c->unk_17c = z;
        c->unk_180 = z;
    }
    if (func_ov065_02272e18(func_ov065_022754f0(1, a, z)) == 0) {
        data_ov065_02290814->unk_3b4 = 0xff;
    }
}

}
}

namespace F02271da0 {
extern "C" {


void func_ov065_022726a0(u8 *buf, u32 n) {
    u32 off = 0;
    Unk_ov065_022726a0_Hdr hdr;
    u8 body[0x80];
    if (func_ov065_02270508() == 5 ||
        (func_ov065_02270508() == 6 &&
         (data_ov065_02290814->unk_15 == 2 || data_ov065_02290814->unk_15 == 3))) {
        while (off + 0x14 <= n) {
            MI_CpuCopy8(buf, &hdr, 0x14);
            if (strncmp(&hdr, (char *)"SBCM", 4) != 0) {
                break;
            }
            if (hdr.unk_04 != 3) {
                break;
            }
            MI_CpuCopy8(buf + 0x14, body, hdr.unk_09);
            if (func_ov065_022749f8(hdr.unk_08, hdr.unk_10, hdr.unk_0c, hdr.unk_0a, body, hdr.unk_09 >> 2) == 0) {
                break;
            }
            off += hdr.unk_09 + 0x14;
        }
    }
}

}
}

namespace F02271da0 {
extern "C" {


void func_ov065_0227269c() {
}

}
}

namespace F02271da0 {
extern "C" {


void func_ov065_02272428(s32 a, s32 b, Unk_ov065_02272428_Sub *c, Unk_ov065_02272428_Sub *d) {
    Unk_ov065_02290814 *g;
    if (data_ov065_02290814->unk_198 != 6 && data_ov065_02290814->unk_198 != 0xb) {
        return;
    }
    if (d == NULL) {
        return;
    }
    if (a == 0) {
        s32 idx;
        char buf[12];
        d->unk_08 = 0;
        data_ov065_02290814->unk_14++;
        idx = data_ov065_02290814->unk_14;
        if (d->unk_00 != 0) {
            data_ov065_02290814->unk_1f8[idx] = c->unk_04;
            data_ov065_02290814->unk_278[idx] = ((c->unk_02 >> 8) & 0xff) | ((c->unk_02 << 8) & 0xff00);
            data_ov065_02290814->unk_174 = 0;
            data_ov065_02290814->unk_178 = 0;
            *(u64 *)&data_ov065_02290814->unk_17c = 0;
            if (data_ov065_02290814->unk_198 == 0xb) {
                data_ov065_02290814->unk_198 = 0xc;
            } else {
                data_ov065_02290814->unk_198 = 7;
            }
            data_ov065_02290814->unk_0c = 0;
            OS_SNPrintf(buf, 12, (char *)"%u", data_ov065_02290814->unk_1e8);
            s32 r = func_ov065_02284a80(data_ov065_02290814->unk_04->unk_00, 0,
                                        func_ov065_022868b0(data_ov065_02290814->unk_1f8[idx], data_ov065_02290814->unk_278[idx], 0),
                                        buf, -1, 0x1388, data_ov065_02290814->unk_08, 0);
            if (r == 1) {
                func_ov065_02272d5c();
                return;
            }
            if (r == 0) {
                return;
            }
            if (func_ov065_022741b0(data_ov065_02290814->unk_f4[idx]) != 0) {
                return;
            }
            return;
        }
        if (c != NULL) {
            s32 i = idx - 1;
            data_ov065_02290814->unk_1f8[i] = c->unk_04;
            data_ov065_02290814->unk_278[i] = ((c->unk_02 >> 8) & 0xff) | ((c->unk_02 << 8) & 0xff00);
        }
        g = data_ov065_02290814;
        {
            u64 t = func_ov065_02277974();
            *(u64 *)&g->unk_184 = t;
        }
        g->unk_198 = 7;
        return;
    }
    if (d->unk_08 == 0) {
        return;
    }
    {
        s32 r4 = func_ov065_02272dd4(a, d->unk_08);
        if (r4 != 2 && r4 != 1) {
            return;
        }
        if (d->unk_00 == 0) {
            if (r4 == 1 || (r4 == 2 && d->unk_01 >= 1)) {
                d->unk_08 = 0;
                if (func_ov065_022723cc(0) == 0) {
                    return;
                }
                if (func_ov065_0227412c(data_ov065_02290814->unk_f4[data_ov065_02290814->unk_0d]) != 0) {
                    return;
                }
                return;
            }
            d->unk_01++;
            func_ov065_02275474(d);
            if (func_ov065_02272e18() != 0) {
                return;
            }
            return;
        }
        g = data_ov065_02290814;
        {
            u64 t = func_ov065_02277974();
            *(u64 *)&g->unk_17c = t;
        }
        if (r4 == 1 || (r4 == 2 && g->unk_174 >= 1)) {
            d->unk_08 = 0;
            if (data_ov065_02290814->unk_15 == 3 || data_ov065_02290814->unk_15 == 2) {
                if (func_ov065_022723cc(1) == 0) {
                    return;
                }
            } else {
                if (func_ov065_022723cc(0) == 0) {
                    return;
                }
            }
            data_ov065_02290814->unk_174 = 0;
            data_ov065_02290814->unk_178 = 0;
            *(u64 *)&data_ov065_02290814->unk_17c = 0;
            if (func_ov065_022741b0(data_ov065_02290814->unk_f4[data_ov065_02290814->unk_0d + 1]) != 0) {
                return;
            }
        }
    }
}

}
}

namespace F02271da0 {
extern "C" {


s32 func_ov065_022723cc(s32 a) {
    if (a != 0) {
        return 1;
    }
    if (data_ov065_02290814->unk_15 != 3) {
        data_ov065_02290814->unk_175++;
    }
    if (data_ov065_02290814->unk_15 == 3 || data_ov065_02290814->unk_175 >= 5) {
        func_ov065_0227627c(6, -0x15194);
        return 0;
    }
    return 1;
}

}
}

namespace F02271da0 {
extern "C" {


s32 func_ov065_022723b8(void *a, char *b) {
    return func_ov065_022722fc(a, NULL, NULL, b);
}

}
}

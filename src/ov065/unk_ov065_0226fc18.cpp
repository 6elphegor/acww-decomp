// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

extern "C" {
void *data_ov065_02290670;
u32 data_ov065_02290674;
u32 data_ov065_02290678[32];
u8 data_ov065_022906f8[0x100];
}

namespace F0226f7c8 {
struct Unk_ov065_0226f924_Blob {
    s32 v[3];
};

struct Unk_ov065_0226f924_Cfg {
    void *(*unk_00)(void *, u32);
    void (*unk_04)(void *, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226f7c8_Ctx {
    u8 unk_00[4];
    s32 unk_04;
    u8 unk_08[0x100];
    Unk_ov065_0226f924_Cfg unk_108;
    u32 unk_114;
    u32 unk_118;
    u8 unk_11c[0x6c];
    u32 unk_188;
    u8 unk_18c[0x50];
    u8 unk_1dc[0x1024];
};

struct Unk_ov065_0226fc54_Ctx {
    u8 unk_00[0x24];
    s32 unk_24;
    u8 unk_28[4];
    u8 unk_2c;
    u8 unk_2d;
    u8 unk_2e[2];
    u32 unk_30;
    u8 unk_34[0x38];
    u32 (*unk_6c)(s32, s32, s32);
    s32 unk_70;
    u32 (*unk_74)(s32, s32, s32, s32, s32, s32);
    s32 unk_78;
    u32 (*unk_7c)(s32, s32, s32, s32, s32, s32);
    s32 unk_80;
    u8 unk_84[0x2c5];
    u8 unk_349;
    u8 unk_34a[2];
    u32 unk_34c;
    u8 unk_350;
    u8 unk_351;
    u8 unk_352;
    u8 unk_353[0xdd];
    u32 unk_430[0x29];
    u32 unk_4d4;
    u8 unk_4d8[0x11c];
    u8 unk_5f4[0x20];
    u32 unk_614;
};

struct Unk_ov065_0226fc54_Ent {
    u8 unk_00;
    u8 unk_01;
};
extern "C" {
extern Unk_ov065_0226f7c8_Ctx *data_ov065_02290620;
extern void *data_ov065_0229061c;
extern u8 data_ov065_0228bbac[];
extern u8 data_ov065_0228bbb4[];
extern u8 data_ov065_0228bae4[];
extern u8 data_ov065_0228bb10[];
extern s8 *data_ov065_0228bbc0;
extern u32 data_ov065_02290674;
extern Unk_ov065_0226fc54_Ctx *data_ov065_02290670;
extern u32 data_ov065_02290678[];
void func_ov065_0226f818();
void func_ov065_0226ea84();
void func_ov065_0226dc40();
void func_ov065_0226e4dc();
void func_ov065_0226dbfc();
void func_ov065_0226ecfc();
s32 func_ov065_022849c8();
u32 func_ov065_02278be8();
void func_ov065_02270e34(s32, s32);
void func_ov065_02277588(s32, s32);
void func_ov065_022775b8(s32, s32, s32, s32);
s32 func_ov065_02275c60();
Unk_ov065_0226fc54_Ent *func_ov065_022849bc(s32);
void func_ov065_02277434(u32);
u32 func_ov065_022702bc(u32);
void func_ov065_02275ccc();
void func_ov065_02275df4();
void func_ov065_02275fdc(u32);
s32 func_ov065_02276000(s32, s32, u32);
void func_ov065_02275e64(s32, s32);
void func_ov065_02271e00(s32, void *, s32);
void func_ov065_02288190(u32);
u32 func_ov065_02271e8c(u32);
void func_ov065_02287260();
void func_ov065_02276254();
s32 func_ov065_022702fc(s32);
s32 func_ov065_02271f58(void *, u32 *, u32);
void func_ov065_02276324(void *, u32, void *);
s32 func_ov065_022701d0(s32);
u32 func_ov065_02270298(u8 *, s32);
void func_02113788(void *);
s32 func_02113774(void *);
void func_02113a70(void *, void (*)(), void *, void *, u32, u32);
void func_0211366c(void *);
void func_0211450c(void *);
void func_02115fb4(void *, u32, u32);
void func_02116048(void *, void *, u32);
s32 func_02133150(s32, s32);
u32 func_0213335c(u32, u32);
u32 func_021277d4(void *);
s32 func_02128930(void *, void *, u32);
char *func_0212a120(void *, s32);
void func_0212a2ec(void *, void *, u32);
s32 func_0212b854(void *, u32, u32);
void func_ov065_0226fc18();
void func_ov065_0226fc4c(s32 a, s32 b);
void func_ov065_0226fc54(s32 a0, s32 a1);
void func_ov065_0226fed4(s32 a, s32 b, s32 c, s32 d);
void func_ov065_0226fee4(void *a, u32 *b, u32 c);
void func_ov065_0226ffb4(s32 a, u32 *b);
void func_ov065_0226ffe4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);
}
}

namespace F022700e4 {
typedef void (*Unk_ov065_022700e4_Cb)(s32, s32, s32);
typedef void (*Unk_ov065_02270710_Cb)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290670 {
    u32 unk_00;
    u8 pad_04[0x14];
    u32 unk_18_pad;
    u8 unk_1c[0x8];
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c;
    u8 unk_2d;
    u8 pad_2e[2];
    u32 unk_30;
    u8 unk_34[0x20];
    u8 pad_54[0x8];
    Unk_ov065_022700e4_Cb unk_5c;
    s32 unk_60;
    Unk_ov065_022700e4_Cb unk_64;
    s32 unk_68;
    u8 pad_6c[8];
    Unk_ov065_02270710_Cb unk_74;
    s32 unk_78;
    s32 unk_7c;
    s32 unk_80;
    u8 pad_84[8];
    s32 unk_8c;
    u8 pad_90[4];
    s32 unk_94;
    s32 unk_98;
    u8 pad_9c[0x34];
    u8 unk_d0[0x100];
    u8 unk_1d0[0x179];
};

struct Unk_ov065_02270710_Buf {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x208];
};

struct Unk_ov065_022906f8 {
    u32 unk_00;
    u32 unk_04;
};
extern "C" {
extern Unk_ov065_02290670 *data_ov065_02290670;
extern u32 data_ov065_02290678[32];
extern Unk_ov065_022906f8 data_ov065_022906f8[32];
void func_ov065_0226fc18();
void func_ov065_0226ffe4();
void func_ov065_0226ffb4();
void func_ov065_0226fee4();
void func_ov065_02271f9c();
void func_ov065_02271f08();
void func_ov065_02276500();
void func_ov065_02276698();
void func_ov065_022700e4(s32 a, s32 b);
u8 *func_ov065_022849bc(u32 v);
void func_ov065_02271440(s32 a, s32 b);
void func_ov065_02271e64();
void func_ov065_02271e00(s32 a, void *b, s32 c);
void func_ov065_02287260();
void func_ov065_022849f8(u32 a);
void func_ov065_02271fc8(s32 a, s32 b);
void func_ov065_0227627c(s32 a, s32 b);
u32 func_ov065_02271ed8(s32 a);
s32 func_ov065_0227bfb4(void *a, u32 b);
void func_ov065_0227c000(void *a, u32 b, s32 *c);
void func_ov065_0227c05c(void *a, s32 b, void *c);
void func_ov065_02276cc0(u32 a, void (*b)(), s32 c, s32 d, s32 e);
void func_ov065_02276db4(u32 a, void (*b)(), s32 c, s32 d, s32 e);
void func_ov065_02272004(void *a, void *b, void (*c)(s32, s32), s32 d, s32 e, s32 f, s32 g, s32 h);
s32 func_ov065_02277c68();
void func_ov065_02278250(u32 a);
s32 func_ov065_022780e0();
u32 func_ov065_0227c6c0(void *a, u32 b, s32 c);
s32 func_ov065_0227c624(void *a, s32 b, void (*c)(), s32 d);
void func_ov065_02271534();
void func_ov065_02271488();
void func_ov065_0227204c();
void func_ov065_0227674c(s32 a);
void func_ov065_0227746c();
void func_ov065_02288124();
void func_ov065_02284a18(u32 a);
u32 func_ov065_022778b0(u32 a);
u32 func_ov065_022868b0(s32 a, u32 b, s32 c);
s32 func_ov065_02284bdc(void *a, u32 b, u32 c, u32 d, void (*e)());
void func_ov065_02284b9c(u32 a, void (*b)());
void func_ov065_022849c4(u32 a, void (*b)());
s32 func_ov065_02275dd0(u8 **out);
s32 func_ov065_02275d58(u8 **out);
s32 func_ov065_02275e64(s32 a, s32 b);
s32 func_ov065_02275e3c();
s32 func_ov065_02275e50();
s32 func_ov065_02270e4c();
void func_ov065_02270e34(s32 a, s32 b);
s32 func_ov065_02270b78();
void func_ov065_02270b74();
void func_02115e64(u32 v, void *dst, u32 size);
s32 func_021277d4(char *s);
void func_02116048(char *src, void *dst, s32 n);
void func_ov065_022702fc(s32 s);
s32 func_ov065_02270158(s32 x);
s32 func_ov065_022701d0(s32 x);
u32 func_ov065_02270298(u8 *p, s32 n);
u32 func_ov065_02270310(u32 v);
u32 func_ov065_02270408(u32 v);
u32 func_ov065_02270428(u32 v);
u32 *func_ov065_022703ac(u32 idx);
s32 func_ov065_02270584(u8 **out);
void func_ov065_022703b8();
void func_ov065_02270114(s32 a, s32 b);
u32 func_ov065_022702bc(u32 c);
Unk_ov065_022906f8 *func_ov065_02270344(u32 idx);
u32 *func_ov065_02270350(u32 key, s32 n);
s32 func_ov065_022703ec();
u32 func_ov065_02270418(u32 v);
s32 func_ov065_02270474();
s32 func_ov065_02270508();
u32 func_ov065_0227051c(u32 bit);
u32 func_ov065_02270558();
u32 func_ov065_022705d0();
s32 func_ov065_022705e8();
s32 func_ov065_0227062c(u32 a);
s32 func_ov065_0227067c();
void func_ov065_022706f8(s32 a, s32 b);
void func_ov065_02270710(s32 a, Unk_ov065_02270710_Cb cb, s32 arg, s32 d, s32 e);
void func_ov065_0227083c(s32 a, Unk_ov065_02270710_Cb b, s32 c, s32 d, s32 e);
s32 func_ov065_0227089c(char *s, Unk_ov065_022700e4_Cb f1, s32 f2, s32 f3, s32 p5, s32 p6, s32 p7);
void func_ov065_02270958(s32 a, s32 b, Unk_ov065_022700e4_Cb c, s32 d);
void func_ov065_022709c0();
}
}

namespace F02270b74 {
typedef void (*Unk_ov065_02270c94_Cb)(s32, s32, u32);
typedef void (*Unk_ov065_02271440_Cb)(void *, void *, u32);

struct Unk_ov065_02270ba4_Sub {
    void *unk_00;
};

struct Unk_ov065_02270ba4_G {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    Unk_ov065_02270ba4_Sub unk_1c;
    void *unk_20;
    u32 unk_24;
    u32 unk_28;
    u8 unk_2c;
    u8 unk_2d;
    u16 unk_2e;
    u32 unk_30;
    u8 unk_34[0x20];
    void *unk_54;
    void *unk_58;
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 unk_68;
    u32 unk_6c;
    u32 unk_70;
    u32 unk_74;
    u32 unk_78;
    u32 unk_7c;
    u32 unk_80;
    u8 unk_84[0x2e8 - 0x84];
    u8 unk_2e8[0x33c - 0x2e8];
    u8 unk_33c[0x34c - 0x33c];
    void *unk_34c;
    u8 unk_350[4];
    u8 unk_354;
    u8 unk_355[0x420 - 0x355];
    void *unk_420;
    u8 unk_424[0x7a0 - 0x424];
    u8 unk_7a0[4];
};

struct Unk_ov065_02270eb0_Tri {
    u32 v[3];
};

struct Unk_ov065_02270eb0_P {
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08[0xc];
    u32 unk_14;
    u8 unk_18[4];
    u32 unk_1c;
    u8 unk_20[4];
    u32 unk_24;
};

struct Unk_ov065_02270eb0_H {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[4];
    u32 unk_0c;
    u8 unk_10[8];
    Unk_ov065_02270c94_Cb unk_18;
    u32 unk_1c;
    Unk_ov065_02270eb0_P *unk_20;
    u8 unk_24[4];
    void *unk_28;
    u64 unk_2c;
    s32 unk_34;
    u64 unk_38;
    Unk_ov065_02270eb0_Tri unk_40;
    char unk_4c[0x100];
    char unk_14c[0x100];
    u8 unk_24c[9];
    char unk_255[0x100];
};

struct Unk_ov065_02270eb0_X {
    s32 unk_00;
    u32 unk_04;
    u8 unk_08[0x86];
    s8 unk_8e[1];
};

struct Unk_ov065_0227112c_Pair {
    u32 hi;
    u32 lo;
};

struct Unk_ov065_02270fd4_S {
    s32 unk_00;
    u8 unk_04[0x46];
    char unk_4a[0x100];
    u8 unk_14a[0x2d];
    char unk_177[0x4d];
};

struct Unk_ov065_0227112c_Cfg {
    u8 unk_00[0x16];
    char unk_16[14];
    void *unk_24;
    void *unk_28;
};

namespace Unk_ov065_0227138c_Ns {
extern "C" s32 func_ov065_0227138c(s32 r);
}
extern "C" {
extern Unk_ov065_02270ba4_G *data_ov065_02290670;
extern s32 data_ov065_022907f8;
extern s32 data_ov065_022907fc;
extern u32 data_ov065_02290800;
extern Unk_ov065_02270eb0_H *data_ov065_02290804;
extern Unk_ov065_02271440_Cb data_ov065_02290808;
extern u8 data_ov065_02291104[];
extern u8 data_ov065_02291204[];
extern u8 data_ov065_0228c818[];
void func_ov065_02277cdc(void);
s32 func_ov065_02277bc0(void);
void func_ov065_02277c34(void);
void func_ov065_02288124(void *);
void func_ov065_02289444(void *);
void func_ov065_02287260(void);
void func_ov065_02283e00(void);
void func_ov065_0227c624(void *, s32, s32, s32);
void func_ov065_0227c670(void *);
void func_ov065_0227c6a8(void *);
void func_ov065_02271da0(void);
void func_ov065_02275c74(void);
void func_ov065_02277428(void);
void func_ov065_02284bc8(void *);
void func_ov065_02276374(void);
void func_ov065_0226fed4(void);
void func_ov065_0226fc54(void);
void func_ov065_0226fc4c(void);
void func_ov065_022703b8(void);
void func_ov065_0227155c(void *, void *, void *, void *, u32, void *, s32);
void func_ov065_02270114(void);
void func_ov065_022720f8(void *, void *, void *, void *, void *);
void func_ov065_02276f4c(void *, void *, void *, void *, void *, void *, void *, void *);
void func_ov065_022775e8(void *);
u32 func_021277d4(const char *);
void func_02116048(const void *, void *, u32);
void func_020fff48(void *, u32, void *);
s32 func_ov065_0227c3b0(void *, s32, void *);
s32 func_ov065_0227c400(void *, u32, s32, s32, void *, s32);
s32 func_ov065_0227c538(void *);
s32 func_ov065_0227c564(void *, void *, void *, s32, s32, void *, s32);
s32 func_0212a190(const char *, const char *);
void func_020ffd30(void *, void *, u32);
s32 func_ov065_0226db98(void);
void func_ov065_0226db28(s32 *);
void func_ov065_0226dbfc(void);
void func_ov065_0226dc40(void);
s32 func_ov065_0226dd2c(void *, void *);
void func_02127838(char *, const char *);
void func_02115fb4(void *, s32, u32);
u64 func_01ffa6b4(void);
u64 func_02132ef8(u64, u32);
u64 func_02133100(u64, u32, u32);
s32 func_020ffdfc(void *);
s32 func_020ffe08(void *);
s32 func_020ffe24(void *);
void func_020ffe84(void *);
void func_02100160(void *, u32);
void func_ov065_02277b64(s32, void *, s32);
void func_ov065_02277b8c(void);
void *func_ov065_02277b78(s32, s32, s32);
s32 func_ov065_02271e00(s32, void *);
s32 func_ov065_02270474(void);
s32 func_ov065_02276e44(u32);
void func_ov065_02270b74(void);
s32 func_ov065_02270b78(void);
void func_ov065_02270ba4(void);
void func_ov065_02270c94(Unk_ov065_02270ba4_G *g, Unk_ov065_02270eb0_P *a1, void *a2, const char *a3, const char *a4, void *a5, void *a6, void *a7, void *a8);
void func_ov065_02270e34(s32 a, s32 b);
BOOL func_ov065_02270e4c(void);
void func_ov065_02270e60(void);
s32 func_ov065_02270e7c(s32 *out);
BOOL func_ov065_02270e94(void);
void func_ov065_02270eb0(void *a0, Unk_ov065_02270eb0_X *x);
void func_ov065_02270fd4(void);
void func_ov065_0227112c(Unk_ov065_02271440_Cb cb, u32 arg);
void func_ov065_0227124c(const char *a, const char *b, void *c, s32 d);
void func_ov065_022712bc(const char *a, const char *b);
void func_ov065_022712d4(void *a0, Unk_ov065_02270eb0_X *x);
void func_ov065_022713ec(void);
void func_ov065_02271404(void);
void func_ov065_02271440(s32 a, s32 b);
void *func_ov065_02271474(void);
}
}

#define G data_ov065_02290670

#define FAIL710()                                                              \
    {                                                                          \
        func_ov065_02270e34(10, 0);                                            \
        Unk_ov065_02290670 *s = G;                                             \
        s->unk_74(10, 0, 1, 0, 0, s->unk_78);                                  \
        if (G != 0 && G->unk_24 == 5) {                                        \
            func_ov065_022702fc(3);                                            \
            func_ov065_02271e00(1, (void *)"", 0);                             \
            return;                                                            \
        }                                                                      \
    }

namespace F02270b74 {
extern "C" {
void func_ov065_02270c94(Unk_ov065_02270ba4_G *g, Unk_ov065_02270eb0_P *a1, void *a2, const char *a3, const char *a4,
                         void *a5, void *a6, void *a7, void *a8) {
    data_ov065_02290670 = g;
    func_ov065_02270e60();
    data_ov065_02290670->unk_00 = NULL;
    data_ov065_02290670->unk_04 = (void *)func_ov065_02276374;
    data_ov065_02290670->unk_08 = (void *)func_ov065_0226fed4;
    data_ov065_02290670->unk_0c = (void *)func_ov065_0226fc54;
    data_ov065_02290670->unk_10 = (void *)func_ov065_0226fc4c;
    data_ov065_02290670->unk_14 = a5 != NULL ? a5 : (void *)0x2000;
    data_ov065_02290670->unk_18 = a6 != NULL ? a6 : (void *)0x2000;
    data_ov065_02290670->unk_1c.unk_00 = NULL;
    data_ov065_02290670->unk_20 = a1;
    data_ov065_02290670->unk_24 = 0;
    data_ov065_02290670->unk_28 = 0;
    data_ov065_02290670->unk_2c = 0;
    data_ov065_02290670->unk_2d = 0;
    data_ov065_02290670->unk_2e = 0;
    data_ov065_02290670->unk_30 = 0;
    data_ov065_02290670->unk_54 = data_ov065_02291104;
    data_ov065_02290670->unk_58 = data_ov065_02291204;
    data_ov065_02290670->unk_5c = 0;
    data_ov065_02290670->unk_60 = 0;
    data_ov065_02290670->unk_64 = 0;
    data_ov065_02290670->unk_68 = 0;
    data_ov065_02290670->unk_6c = 0;
    data_ov065_02290670->unk_70 = 0;
    data_ov065_02290670->unk_74 = 0;
    data_ov065_02290670->unk_78 = 0;
    data_ov065_02290670->unk_7c = 0;
    data_ov065_02290670->unk_80 = 0;
    func_ov065_022703b8();
    func_ov065_0227155c(&data_ov065_02290670->unk_84, a1, &data_ov065_02290670->unk_1c, a2, a1->unk_24,
                        (void *)func_ov065_02270114, 0);
    func_ov065_022720f8(&data_ov065_02290670->unk_2e8, &data_ov065_02290670->unk_1c, &data_ov065_02290670->unk_34, a7,
                        a8);
    func_ov065_02276f4c(&data_ov065_02290670->unk_33c, &data_ov065_02290670->unk_1c, data_ov065_02290670,
                        &data_ov065_02290670->unk_04, data_ov065_02291104, data_ov065_02291204, a7, a8);
    func_ov065_022775e8(&data_ov065_02290670->unk_7a0);
    u32 n;
    if (func_021277d4(a3) < 0x100) {
        n = func_021277d4(a3);
    } else {
        n = 0xff;
    }
    func_02116048(a3, data_ov065_02291104, n);
    data_ov065_02291104[n] = 0;
    u32 m;
    if (func_021277d4(a4) < 0x100) {
        m = func_021277d4(a4);
    } else {
        m = 0xff;
    }
    func_02116048(a4, data_ov065_02291204, m);
    data_ov065_02291204[m] = 0;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02270ba4(void) {
    if (data_ov065_02290670 == NULL) {
        return;
    }
    if (data_ov065_02290670->unk_34c != NULL) {
        func_ov065_02288124(data_ov065_02290670->unk_34c);
        data_ov065_02290670->unk_34c = NULL;
    }
    data_ov065_02290670->unk_354 = 0;
    if (data_ov065_02290670->unk_420 != NULL) {
        func_ov065_02289444(data_ov065_02290670->unk_420);
        data_ov065_02290670->unk_420 = NULL;
    }
    func_ov065_02287260();
    func_ov065_02283e00();
    if (data_ov065_02290670->unk_1c.unk_00 != NULL) {
        func_ov065_0227c624(&data_ov065_02290670->unk_1c, 0, 0, 0);
        func_ov065_0227c624(&data_ov065_02290670->unk_1c, 3, 0, 0);
        func_ov065_0227c624(&data_ov065_02290670->unk_1c, 1, 0, 0);
        func_ov065_0227c624(&data_ov065_02290670->unk_1c, 2, 0, 0);
        func_ov065_0227c670(&data_ov065_02290670->unk_1c);
        func_ov065_0227c6a8(&data_ov065_02290670->unk_1c);
        data_ov065_02290670->unk_1c.unk_00 = NULL;
    }
    func_ov065_02271404();
    func_ov065_02271da0();
    func_ov065_02275c74();
    func_ov065_02277428();
    if (data_ov065_02290670->unk_00 != NULL) {
        func_ov065_02284bc8(data_ov065_02290670->unk_00);
        data_ov065_02290670->unk_00 = NULL;
    }
    data_ov065_02290670 = NULL;
}
}
}

namespace F02270b74 {
extern "C" {
s32 func_ov065_02270b78(void) {
    func_ov065_02277cdc();
    if (func_ov065_02277bc0()) {
        func_ov065_02270e34(7, 0);
        func_ov065_02277c34();
        return 1;
    }
    return 0;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02270b74(void) {}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_022709c0() {
    if (func_ov065_02270b78() != 0) {
        func_ov065_02270b74();
    }
    if (G == 0 || G->unk_24 == 0 || func_ov065_02270e4c() != 0) {
        return;
    }
    switch (G->unk_24) {
    case 0:
        break;
    case 1:
        switch (func_ov065_022780e0()) {
        case 1:
            if (func_ov065_022701d0(func_ov065_0227c6c0(G->unk_1c, G->unk_8c, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 0, func_ov065_0226ffb4, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 3, func_ov065_0226fee4, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 1, func_ov065_02271f9c, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 2, func_ov065_02271f08, 0)) != 0) {
                return;
            }
            func_ov065_022702fc(2);
            func_ov065_02271534();
            break;
        case 2:
            func_ov065_02271440(3, -0x4e8e);
            return;
        case 3:
            func_ov065_02271440(4, -0x4e85);
            return;
        }
        break;
    case 2:
        func_ov065_02271488();
        break;
    case 3:
    case 4:
        func_ov065_0227204c();
        func_ov065_0227674c(0);
        break;
    case 5:
        func_ov065_0227674c(1);
        func_ov065_0227204c();
        break;
    case 6: {
        Unk_ov065_02290670 *s;
        func_ov065_0227746c();
        func_ov065_0227204c();
        s = G;
        if (*(volatile u8 *)((u8 *)s + 0x351) == 2 || *(volatile u8 *)((u8 *)s + 0x351) == 3) {
            func_ov065_0227674c(1);
        } else if (s->unk_00 != 0) {
            func_ov065_0227674c(0);
        }
        break;
    }
    }
    if (*((u8 *)G + 0x354) == 1) {
        if (*(u32 *)((u8 *)G + 0x34c) != 0) {
            func_ov065_02288124();
            *(u32 *)((u8 *)G + 0x34c) = 0;
        }
        *((u8 *)G + 0x354) = 0;
    }
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_02270958(s32 a, s32 b, Unk_ov065_022700e4_Cb c, s32 d) {
    if (func_ov065_02270e4c() == 0 && G->unk_24 == 0) {
        G->unk_5c = c;
        G->unk_60 = d;
        G->unk_94 = a;
        G->unk_98 = b;
        if (func_ov065_02277c68() != 4) {
            func_ov065_02271440(2, -0xea6a);
            return;
        }
        func_ov065_022702fc(1);
        func_ov065_02278250(*(u32 *)((u8 *)G + 0x54));
    }
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_0227089c(char *s, Unk_ov065_022700e4_Cb f1, s32 f2, s32 f3, s32 p5, s32 p6, s32 p7) {
    s32 n;
    if (G == 0 || func_ov065_02270e4c() != 0 || G->unk_24 < 3 || G->unk_24 == 4) {
        return 0;
    }
    if (s == 0 || *s == 0) {
        n = 0;
    } else {
        if (func_021277d4(s) < 0x20) {
            n = func_021277d4(s);
        } else {
            n = 0x1f;
        }
        func_02116048(s, G->unk_34, n);
    }
    G->unk_34[n] = 0;
    G->unk_64 = f1;
    G->unk_68 = f2;
    func_ov065_022702fc(4);
    func_ov065_02272004(G->unk_d0, G->unk_d0 + 0x100, func_ov065_022700e4, 0, f3, p5, p6, p7);
    return 1;
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_0227083c(s32 a, Unk_ov065_02270710_Cb b, s32 c, s32 d, s32 e) {
    if (func_ov065_02270e4c() == 0 && G->unk_24 == 3) {
        func_ov065_022703b8();
        G->unk_74 = b;
        G->unk_78 = c;
        G->unk_2c = 0;
        func_ov065_022702fc(5);
        func_ov065_02276db4((u8)(a - 1), func_ov065_0226ffe4, 0, d, e);
    }
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_02270710(s32 a, Unk_ov065_02270710_Cb cb, s32 arg, s32 d, s32 e) {
    s32 v = -1;
    Unk_ov065_02270710_Buf buf;
    if (func_ov065_02270e4c() == 0 && G->unk_24 == 3) {
        u32 t;
        func_ov065_022703b8();
        G->unk_74 = cb;
        G->unk_78 = arg;
        func_ov065_022702fc(5);
        t = func_ov065_02271ed8(a);
        if (t == 0 || func_ov065_0227bfb4(G->unk_1c, t) == 0) {
            FAIL710()
        } else {
            func_ov065_0227c000(G->unk_1c, t, &v);
            func_ov065_0227c05c(G->unk_1c, v, &buf);
            if (buf.unk_04 != 6) {
                FAIL710()
            } else {
                func_ov065_02276cc0(t, func_ov065_0226ffe4, 0, d, e);
            }
        }
    }
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_022706f8(s32 a, s32 b) {
    if (G != 0) {
        G->unk_7c = a;
        G->unk_80 = b;
    }
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_0227067c() {
    Unk_ov065_02290670 *s;
    if (G == 0 || func_ov065_02270e4c() != 0 || (s = G, s->unk_24 != 5 && s->unk_24 != 6)) {
        return -1;
    }
    if (*((u8 *)s + 0x349) == 0) {
        func_ov065_02271e00(1, (void *)"", 0);
        func_ov065_02287260();
        func_ov065_022702fc(3);
        return 1;
    }
    s->unk_2d = 1;
    func_ov065_022849f8(G->unk_00);
    G->unk_2d = 0;
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_0227062c(u32 a) {
    u32 r;
    if (G == 0 || func_ov065_02270e4c() != 0 || (G->unk_24 != 5 && G->unk_24 != 6)) {
        return -1;
    }
    r = func_ov065_02270428(a);
    if (r == 0) {
        return -2;
    }
    func_ov065_02284a18(r);
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_022705e8() {
    if (G == 0) {
        return 0;
    }
    if (*(volatile u8 *)((u8 *)G + 0x351) == 2 || *(volatile u8 *)((u8 *)G + 0x351) == 3) {
        return func_ov065_02275e3c() + 1;
    }
    return func_ov065_02275e50() + 1;
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_022705d0() {
    if (G != 0) {
        return G->unk_2c;
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_02270584(u8 **out) {
    if (G == 0) {
        return 0;
    }
    *out = (u8 *)G + 0x5f4;
    if (*(volatile u8 *)((u8 *)G + 0x351) == 2 || *(volatile u8 *)((u8 *)G + 0x351) == 3) {
        return func_ov065_02275d58(out);
    }
    return func_ov065_02275dd0(out);
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_02270558() {
    u8 *p;
    if (G == 0) {
        return 0;
    }
    s32 n = func_ov065_02270584(&p);
    return func_ov065_02270298(p, n);
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_0227051c(u32 bit) {
    if (G == 0) {
        return 0;
    }
    if (*(u32 *)((u8 *)G + 0x614) & (1 << bit)) {
        return func_ov065_02270310(bit);
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_02270508() {
    if (G != 0) {
        return G->unk_24;
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_02270474() {
    Unk_ov065_02290670 *s;
    u32 h;
    s32 r;
    if (G->unk_00 != 0) {
        return 0;
    }
    h = (u16)(func_ov065_022778b0(0x4000) + 0xc000);
    s = G;
    r = func_ov065_02284bdc(G, func_ov065_022868b0(0, h, 0), *(u32 *)((u8 *)s + 0x14), *(u32 *)((u8 *)s + 0x18), func_ov065_0226fc18);
    if (func_ov065_02270158(r) != 0) {
        return r;
    }
    func_ov065_02284b9c(G->unk_00, func_ov065_02276500);
    func_ov065_022849c4(G->unk_00, func_ov065_02276698);
    return r;
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_02270428(u32 v) {
    s32 i;
    u32 *p;
    if (G == 0) {
        return 0;
    }
    for (i = 0, p = data_ov065_02290678; i < 0x20; p++, i++) {
        if (*p != 0) {
            u8 *r = func_ov065_022849bc(*p);
            if (v == r[1]) {
                return data_ov065_02290678[i];
            }
        }
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_02270418(u32 v) {
    return func_ov065_022849bc(v)[1];
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_02270408(u32 v) {
    return func_ov065_022849bc(v)[0];
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_022703ec() {
    s32 i;
    u32 *p;
    for (i = 0, p = data_ov065_02290678; i < 0x20; p++, i++) {
        if (*p == 0) {
            return i;
        }
    }
    return -1;
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_022703b8() {
    volatile u32 a = 0;
    func_02115e64(a, data_ov065_02290678, 0x80);
    volatile u32 b = 0;
    func_02115e64(b, data_ov065_022906f8, 0x100);
}
}
}

namespace F022700e4 {
extern "C" {
u32 *func_ov065_022703ac(u32 idx) {
    return &data_ov065_02290678[idx];
}
}
}

namespace F022700e4 {
extern "C" {
u32 *func_ov065_02270350(u32 key, s32 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        if (key == *(u32 *)((u8 *)G + i * 4 + 0x430)) {
            break;
        }
    }
    if (i >= n) {
        return 0;
    }
    return func_ov065_022703ac(func_ov065_02270408(func_ov065_02270428(*((u8 *)G + i + 0x5f4))));
}
}
}

namespace F022700e4 {
extern "C" {
Unk_ov065_022906f8 *func_ov065_02270344(u32 idx) {
    return &data_ov065_022906f8[idx];
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_02270310(u32 v) {
    s32 i;
    u32 *p;
    for (i = 0, p = data_ov065_02290678; i < 0x20; p++, i++) {
        if (*p != 0) {
            u8 *r = func_ov065_022849bc(*p);
            if (v == r[1]) {
                return 1;
            }
        }
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_022702fc(s32 s) {
    G->unk_28 = G->unk_24;
    G->unk_24 = s;
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_022702bc(u32 c) {
    u8 *p;
    s32 i;
    s32 n;
    u8 *q;
    n = func_ov065_02275dd0(&p);
    i = 0;
    if (n > 0) {
        q = p;
        do {
            if (c == *q) {
                break;
            }
            q++;
            i++;
        } while (i < n);
    }
    if (i == n) {
        return 0;
    }
    return func_ov065_02275e64(i, n);
}
}
}

namespace F022700e4 {
extern "C" {
u32 func_ov065_02270298(u8 *p, s32 n) {
    u32 r = 0;
    s32 i = 0;
    for (; i < n; i++) {
        r |= 1 << p[i];
    }
    return r;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_022701d0(s32 x) {
    s32 a, b;
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
        a = 8;
        b = -2;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -20;
        break;
    }
    switch (G->unk_24) {
    case 1:
        b = b - 0xee48;
        func_ov065_02271440(a, b);
        break;
    case 2:
        b = b - 0xee48;
        func_ov065_02271440(a, b);
        break;
    case 5:
        b = b - 0x13c68;
        func_ov065_0227627c(a, b);
        break;
    case 4:
        b = b - 0x11558;
        break;
    default:
        b = b - 0x16378;
        break;
    }
    func_ov065_02271fc8(a, b);
    return x;
}
}
}

namespace F022700e4 {
extern "C" {
s32 func_ov065_02270158(s32 x) {
    s32 a, b;
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
    case 5:
        a = 0;
        b = 0;
        x = 0;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -30;
        break;
    case 6:
        a = 6;
        b = -70;
        break;
    case 7:
        a = 6;
        b = -80;
        break;
    }
    if (a != 0) {
        func_ov065_02271440(a, b - 0x105b8);
    }
    return x;
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_02270114(s32 a, s32 b) {
    if (a == 0) {
        G->unk_30 = b;
        func_ov065_022702fc(3);
        func_ov065_02271e64();
    } else {
        func_ov065_022702fc(0);
    }
    if (G->unk_5c != 0) {
        G->unk_5c(a, b, G->unk_60);
    }
}
}
}

namespace F022700e4 {
extern "C" {
void func_ov065_022700e4(s32 a, s32 b) {
    s32 t = G->unk_28;
    if (t != 4) {
        func_ov065_022702fc(t);
    }
    G->unk_64(a, b, G->unk_68);
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226ffe4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 i;
    Unk_ov065_0226fc54_Ctx *g;
    Unk_ov065_0226fc54_Ctx *h;

    if (a0 == 0 && a1 != 0) {
        if (data_ov065_02290670->unk_4d4 == 0) {
            func_ov065_02276254();
            func_ov065_022702fc(3);
        }
    } else if (a0 == 0) {
        func_ov065_022702fc(6);
        i = 0;
        g = data_ov065_02290670;
        if (i <= *(volatile u8 *)&g->unk_349) {
            h = g;
            do {
                if (h->unk_30 == g->unk_430[0]) {
                data_ov065_02290670->unk_2c = data_ov065_02290670->unk_5f4[i];
                break;
                }
                g = (Unk_ov065_0226fc54_Ctx *)((u8 *)g + 4);
                i++;
            } while (i <= *(volatile u8 *)&h->unk_349);
        }
    }
    data_ov065_02290670->unk_614 = func_ov065_02270298(data_ov065_02290670->unk_5f4, data_ov065_02290670->unk_349 + 1);
    func_ov065_02275df4();
    g = data_ov065_02290670;
    if (*(volatile u8 *)&g->unk_351 == 2 || *(volatile u8 *)&g->unk_351 == 3) {
        data_ov065_02290670->unk_74(a0, a1, a2, a3, a4, data_ov065_02290670->unk_78);
    } else {
        g->unk_6c(a0, a1, g->unk_70);
    }
    if (a0 != 0 && data_ov065_02290670 != 0 && data_ov065_02290670->unk_24 == 5) {
        func_ov065_022702fc(3);
    }
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226ffb4(s32 a, u32 *b) {
    u32 t = b[1];
    if (t != 0x603 && t != 0x901 && t != 0xb01) {
        func_ov065_022701d0(3);
    }
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226fee4(void *a, u32 *b, u32 c) {
    u8 buf[12] = {0};
    char *s;
    char *e;
    u32 n;
    Unk_ov065_0226fc54_Ctx *g;

    s = (char *)b[2];
    if (func_ov065_02271f58(a, b, c) == 0) {
        if (func_02128930(s, (void *)"GPCM", func_021277d4((void *)"GPCM")) == 0) {
            s += func_021277d4((void *)"GPCM");
            e = func_0212a120(s, 0x76);
            n = e - s;
            func_0212a2ec(buf, s, n);
            if (n <= 10) {
                if (func_0212b854(buf, 0, 10) == 3) {
                    s += n + 1;
                    if (func_02128930(s, (void *)"MAT", func_021277d4((void *)"MAT")) == 0) {
                        g = data_ov065_02290670;
                        if (g->unk_24 != 5) {
                            if (g->unk_24 != 6) {
                                goto fin;
                            }
                            if (*(volatile u8 *)&g->unk_351 != 2 && *(volatile u8 *)&g->unk_351 != 3) {
                                goto fin;
                            }
                        }
                        char *t = s + func_021277d4((void *)"MAT");
                        func_ov065_02276324(a, b[0], t);
                    }
                }
            }
        }
    }
fin:;
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226fed4(s32 a, s32 b, s32 c, s32 d) {
    func_ov065_022775b8(a, b, c, d);
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226fc54(s32 a0, s32 a1) {
    u32 r5;
    s32 r4;
    s32 r7;
    Unk_ov065_0226fc54_Ctx *g;
    u32 v0c = 0;
    u32 v10 = 0;
    volatile BOOL k;
    Unk_ov065_0226fc54_Ent *volatile ent;
    Unk_ov065_0226fc54_Ent *et;

    if (func_ov065_02275c60() != 0) {
        return;
    }
    switch (a1) {
    case 0:
    case 1:
        r4 = 0;
        break;
    case 2:
    case 3:
        r4 = 6;
        r7 = -0x1db0;
        break;
    case 4:
        r4 = 8;
        r7 = -0x1db1;
        break;
    }
    if (r4 == 0) {
        et = func_ov065_022849bc(a0);
        ent = et;
        if (et == 0) {
            return;
        }
        r5 = et->unk_01;
        u32 m = *(volatile u32 *)&data_ov065_02290670->unk_614;
        k = TRUE;
        if ((m & (1 << r5)) == 0) {
            k = FALSE;
        }
        func_ov065_02277434(r5);
        g = data_ov065_02290670;
        if ((g->unk_351 == 2 && a1 == 0) || (g->unk_351 == 3 && r5 == 0)) {
            v10 = 1;
        }
        v0c = func_ov065_022702bc(r5);
        data_ov065_02290678[ent->unk_00] = 0;
        data_ov065_02290670->unk_349--;
        data_ov065_02290670->unk_350--;
    }
    g = data_ov065_02290670;
    if (g->unk_2d == 0 && g->unk_24 == 6 && k == 0) {
        if (g->unk_351 == 2 && r4 == 0) {
            func_ov065_02275ccc();
            func_ov065_02275fdc(v0c);
            return;
        }
        return;
    }
    if (func_ov065_02276000(r4, r7, v0c) != 0) {
        return;
    }
    if (r4 != 0) {
        func_ov065_02270e34(r4, r7);
        return;
    }
    g = data_ov065_02290670;
    if (g->unk_2d == 0) {
        if (*(volatile u8 *)&g->unk_351 != 2 && *(volatile u8 *)&g->unk_351 != 3) {
            goto skip1;
        }
        Unk_ov065_0226fc54_Ctx *h = data_ov065_02290670;
        u32 n = h->unk_349;
        u32 i = n + 2;
        if (h->unk_430[i] != 0) {
            h->unk_5f4[n + 1] = h->unk_5f4[i];
            func_ov065_02275e64(data_ov065_02290670->unk_349 + 1, data_ov065_02290670->unk_349 + 3);
        }
    }
skip1:
    g = data_ov065_02290670;
    if (g->unk_351 == 2) {
        if (g->unk_2d == 0) {
            func_ov065_02275ccc();
        } else if (g->unk_349 == 0) {
            func_ov065_02271e00(1, (void *)"", 0);
        }
    } else if (g->unk_349 == 0) {
        func_ov065_02271e00(1, (void *)"", 0);
    }
    g = data_ov065_02290670;
    if (*(volatile u8 *)&g->unk_351 != 0 && *(volatile u8 *)&g->unk_351 != 1) {
    } else {
        data_ov065_02290670->unk_352 = data_ov065_02290670->unk_350;
        func_ov065_02288190(data_ov065_02290670->unk_34c);
    }
    g = data_ov065_02290670;
    if (g->unk_7c != 0 && k != 0) {
        if (a1 == 0) {
            a1 = 1;
        } else {
            a1 = 0;
        }
        data_ov065_02290670->unk_7c(r4, a1, v10, r5, func_ov065_02271e8c(v0c), g->unk_80);
    }
    g = data_ov065_02290670;
    if (g->unk_2d == 0 && g->unk_351 == 2) {
        return;
    }
    if (g->unk_349 == 0) {
        func_ov065_02287260();
        func_ov065_02276254();
        func_ov065_022702fc(3);
    }
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226fc4c(s32 a, s32 b) {
    func_ov065_02277588(a, b);
}
}
}

namespace F0226f7c8 {
extern "C" {
void func_ov065_0226fc18() {
    func_ov065_022849c8();
    data_ov065_02290674 = func_ov065_02278be8();
    func_ov065_02270e34(8, -0x17aeb);
    *(u32 *)data_ov065_02290670 = 0;
}
}
}

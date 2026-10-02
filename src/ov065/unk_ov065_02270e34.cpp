// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

extern "C" {
void (*data_ov065_02290808)(void *, void *, u32);
void *data_ov065_02290804;
u32 data_ov065_02290800;
s32 data_ov065_022907fc;
s32 data_ov065_022907f8;
void *data_ov065_0229080c;
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
extern s32 data_ov065_022907f8;
extern s32 data_ov065_022907fc;
extern u32 data_ov065_02290800;
extern Unk_ov065_02270eb0_H *data_ov065_02290804;
extern Unk_ov065_02271440_Cb data_ov065_02290808;
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
s32 func_ov065_0227138c(s32 r, s32 unused);
}
}

namespace F02271488 {
struct Unk_ov065_02271488_Inner {
    void *unk_00;
};

struct Unk_ov065_02271488_A {
    Unk_ov065_02271488_Inner *unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 unk_10;
    u32 unk_14;
    void (*unk_18)(s32, s32, void *);
    void *unk_1c;
    void *unk_20;
    u8 unk_24[0x10];
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u8 unk_40[0x224];
};

struct Unk_ov065_02271774_Ent {
    u8 unk_00[12];
};

struct Unk_ov065_02271774_B {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
    Unk_ov065_02271774_Ent *unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    void *unk_20;
    u32 unk_24;
    s32 unk_28;
    void (*unk_2c)(s32, s32, void *);
    void *unk_30;
    void *unk_34;
    void *unk_38;
    void (*unk_3c)(s32, s32, void *);
    void *unk_40;
    void (*unk_44)(s32, void *);
    void *unk_48;
};

struct Unk_ov065_02271774_Item {
    s32 unk_00;
    u8 unk_04[0xa8];
};

struct Unk_ov065_02271774_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02271774_Item *unk_0c;
};

struct Unk_ov065_02271ba0_Out {
    s32 unk_00;
    u8 unk_04[0x210];
};
extern "C" {
extern Unk_ov065_02271488_A *data_ov065_02290804;
extern Unk_ov065_02271774_B *data_ov065_0229080c;
u64 func_01ffa6b4(void);
u64 func_02132ef8(u64, u64);
void *func_02115fb4(void *, s32, u32);
s32 func_0212a190(void *, void *);
s32 func_021000f4(void *);
s32 func_021000fc(void *);
void func_02100094(void *);
void func_020ffb98(void *, void *, void *);
void func_020ffba8(void *, s32);
s32 func_020ffc60(void *, void *);
void func_ov065_02271440(s32, s32);
u32 func_ov065_02271474(void);
s32 func_ov065_02270e4c(void);
s32 func_ov065_02270e94(void);
s32 func_ov065_02270fd4(void);
void func_ov065_022712bc(void);
void func_ov065_0227112c(void *, s32);
s32 func_ov065_0227c670(void *);
s32 func_ov065_0227c224(void *, s32);
s32 func_ov065_0227c17c(void *, s32);
s32 func_ov065_0227c278(void *, s32, s32);
s32 func_ov065_0227c000(void *, s32, s32 *);
s32 func_ov065_0227c05c(void *, s32, void *);
s32 func_ov065_0227c14c(void *, s32 *);
s32 func_ov065_0227bf5c(void *, s32);
s32 func_ov065_0227c4b0(void *, s32, s32, s32, s32, void *, s32, s32, void *, s32);
s32 func_ov065_02271dac(s32);
s32 func_ov065_02271ed8(s32);
s32 func_ov065_02271fc8(s32, s32);
s32 func_ov065_02283e00(void);
s32 func_ov065_022718ec(s32);
s32 func_ov065_02271ac8(Unk_ov065_02271774_Ent *, s32, s32);
s32 func_ov065_022719e0(s32);
void func_ov065_02271b40(Unk_ov065_02271774_Ent *, s32, s32);
s32 func_ov065_02271a04(Unk_ov065_02271774_Ent *, s32, s32);
void func_ov065_02271488(void);
void func_ov065_02271534(void);
void func_ov065_0227155c(void *mem, void *a, void *b, void *c, void *d, void *e, void *f);
void *func_ov065_022715a4(void);
void func_ov065_022715b0(void *x, Unk_ov065_02271774_Rec *p);
void func_ov065_02271698(void *x, Unk_ov065_02271774_Rec *p);
void func_ov065_02271774(void *x, Unk_ov065_02271774_Rec *p, s32 idx);
s32 func_ov065_0227194c(void *a, void *b);
void func_ov065_02271b7c(void);
void func_ov065_02271ba0(Unk_ov065_02271774_Ent *arr, s32 n);
void func_ov065_02271d20(void);
s32 func_ov065_02271d44(void);
}
}

namespace F02271da0 {
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
u64 func_01ffa6b4();
s32 func_020ffc60(s32, void *);
s32 func_020ffdd8(void *);
s32 func_0212a190(const char *, const char *);
s32 func_021277d4(const char *);
void func_02127838(char *, const char *);
s32 func_0212b854(const char *, char **, s32);
void func_02115fb4(void *, s32, u32);
void func_02116048(const void *, void *, u32);
s32 func_0212a15c(const void *, const void *, u32);
void func_02113088(char *, s32, const char *, u32);
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
void func_ov065_02271da0();
void func_ov065_02271dac(s32 idx);
void func_ov065_02271e64();
void func_ov065_02271f08(void *a, u32 *b);
s32 func_ov065_02271f58(void *a, u32 *b);
void func_ov065_02271f9c(void *a, u32 *b);
void func_ov065_02272004(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f, void (*g)(void), void (*h)(void));
void func_ov065_0227204c();
void func_ov065_022720f8(Unk_ov065_0229080c *a, Unk_ov065_0229080c_Sub *b, s32 c, Unk_ov065_0229080c_Ent *d, s32 e);
void func_ov065_02272164(void *p);
BOOL func_ov065_022721cc();
BOOL func_ov065_022721ec(void *a, s32 b);
s32 func_ov065_02272254(u8 *p, s32 n);
s32 func_ov065_02272290(void *a, u8 *b, u8 *c, char *d, s32 *out);
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_022722fc(void *a, u8 *p1, u8 *p2, char *dst) {
    char tmp[4];
    Unk_ov065_0227194c_Out o;
    if (func_ov065_0227194c(a, &o) != 0) {
        if (o.unk_04 == 6) {
            if (p1 != NULL) {
                if (func_ov065_02277998((char *)"SCM", tmp, o.unk_08, 0x2f) > 0) {
                    *p1 = func_0212b854(tmp, NULL, 10);
                } else {
                    *p1 = 0;
                }
            }
            if (p2 != NULL) {
                if (func_ov065_02277998((char *)"SCN", tmp, o.unk_08, 0x2f) > 0) {
                    *p2 = func_0212b854(tmp, NULL, 10);
                } else {
                    *p2 = 0;
                }
            }
        } else {
            if (p1 != NULL) {
                *p1 = 0;
            }
            if (p2 != NULL) {
                *p2 = 0;
            }
        }
        if (dst != NULL) {
            func_02127838(dst, o.unk_108);
        }
        return (u8)o.unk_04;
    }
    if (p1 != NULL) {
        *p1 = 0;
    }
    if (p2 != NULL) {
        *p2 = 0;
    }
    return 0;
}
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_02272290(void *a, u8 *b, u8 *c, char *d, s32 *out) {
    char buf[0x100];
    s32 r = func_ov065_022722fc(a, b, c, buf);
    s32 t;
    if (r == 0) {
        *out = -1;
        return r;
    }
    *out = func_ov065_0226f9e0(buf, func_021277d4(buf), NULL, 0);
    if (d == NULL || (t = *out) == -1) {
        return r;
    }
    func_ov065_0226f9e0(buf, func_021277d4(buf), d, t);
    return r;
}
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_02272254(u8 *p, s32 n) {
    s32 cnt = 0;
    s32 i;
    if (p == NULL) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (func_020ffdd8(p) != 0) {
            cnt++;
        }
        p += 12;
    }
    return cnt;
}
}
}

namespace F02271da0 {
extern "C" {
BOOL func_ov065_022721ec(void *a, s32 b) {
    char buf[0x100];
    s32 n;
    if (data_ov065_0229080c == NULL || func_ov065_02270e94() == 0) {
        return FALSE;
    }
    n = func_ov065_0226fb08(a, b, buf, 0xff);
    if (n == -1) {
        return FALSE;
    }
    buf[n] = 0;
    if (func_ov065_02271e00(-1, NULL, buf) == 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02271da0 {
extern "C" {
BOOL func_ov065_022721cc() {
    if (data_ov065_0229080c != NULL) {
        if ((u8)(data_ov065_0229080c->unk_1e + 0xff) <= 1) {
            return FALSE;
        }
    }
    return TRUE;
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02272164(void *p) {
    if (data_ov065_0229080c != NULL && func_ov065_02270e94() != 0 && func_ov065_02271474() != 0) {
        s32 t = func_020ffc60(func_ov065_02271474(), p);
        if (t != 0 && t != -1 && func_ov065_0227bfb4(data_ov065_0229080c->unk_04, t) != 0) {
            func_ov065_0227bf5c(data_ov065_0229080c->unk_04, t);
        }
    }
    func_02115fb4(p, 0, 12);
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_022720f8(Unk_ov065_0229080c *a, Unk_ov065_0229080c_Sub *b, s32 c, Unk_ov065_0229080c_Ent *d, s32 e) {
    data_ov065_0229080c = a;
    a->unk_00 = 0;
    data_ov065_0229080c->unk_04 = b;
    data_ov065_0229080c->unk_08 = 0;
    {
        Unk_ov065_0229080c *g = data_ov065_0229080c;
        g->unk_0c = 0;
        g->unk_10 = 0;
        g->unk_14 = e;
    }
    data_ov065_0229080c->unk_18 = d;
    data_ov065_0229080c->unk_1c = 0;
    data_ov065_0229080c->unk_1d = 0;
    data_ov065_0229080c->unk_1e = 0;
    data_ov065_0229080c->unk_1f = 0;
    data_ov065_0229080c->unk_20 = 0;
    data_ov065_0229080c->unk_24 = 0;
    data_ov065_0229080c->unk_28 = c;
    data_ov065_0229080c->unk_2c = NULL;
    data_ov065_0229080c->unk_30 = 0;
    data_ov065_0229080c->unk_34 = NULL;
    data_ov065_0229080c->unk_38 = 0;
    data_ov065_0229080c->unk_3c = NULL;
    data_ov065_0229080c->unk_40 = NULL;
    data_ov065_0229080c->unk_44 = NULL;
    data_ov065_0229080c->unk_48 = 0;
    data_ov065_0229080c->unk_4c = 0;
    data_ov065_0229080c->unk_50 = 0;
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_0227204c() {
    if (data_ov065_0229080c == NULL) {
        return;
    }
    if (data_ov065_0229080c->unk_18 == NULL) {
        return;
    }
    if (func_ov065_02270e4c() != 0) {
        return;
    }
    if (func_ov065_022715a4() != 0 && func_ov065_02283d14() == 0) {
        func_ov065_02271fc8(6, -0x1194a);
        return;
    }
    if (data_ov065_0229080c->unk_04 != NULL && data_ov065_0229080c->unk_04->unk_00 != NULL) {
        func_ov065_02271d44();
        if (func_ov065_022718ec() != 0) {
            return;
        }
        if (data_ov065_0229080c->unk_18 != NULL && data_ov065_0229080c->unk_1e != 3 && data_ov065_0229080c->unk_08 > 7) {
            if (data_ov065_0229080c->unk_1e <= 1) {
                func_ov065_02271ba0(data_ov065_0229080c->unk_18, data_ov065_0229080c->unk_14);
            }
            if (data_ov065_0229080c->unk_1c >= data_ov065_0229080c->unk_14) {
                data_ov065_0229080c->unk_1e = 3;
                data_ov065_0229080c->unk_1f++;
            }
        }
    }
    if (data_ov065_0229080c->unk_1f >= 2) {
        data_ov065_0229080c->unk_1f = 0;
        func_ov065_02271b7c();
    }
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02272004(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f,
                         void (*g)(void), void (*h)(void)) {
    data_ov065_0229080c->unk_2c = c;
    data_ov065_0229080c->unk_30 = d;
    data_ov065_0229080c->unk_34 = e;
    data_ov065_0229080c->unk_38 = f;
    data_ov065_0229080c->unk_3c = g;
    data_ov065_0229080c->unk_40 = h;
    data_ov065_0229080c->unk_1d = 0;
    data_ov065_0229080c->unk_1e = 0;
    data_ov065_0229080c->unk_1f = 0;
    data_ov065_0229080c->unk_1c = 0;
    data_ov065_0229080c->unk_00 = 1;
    data_ov065_0229080c->unk_1f++;
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02271fc8(s32 a, s32 b) {
    if (data_ov065_0229080c != NULL && a != 0) {
        func_ov065_02270e34(a, b);
        if (data_ov065_0229080c->unk_00 != 0 && data_ov065_0229080c->unk_00 != 2) {
            data_ov065_0229080c->unk_2c(a, data_ov065_0229080c->unk_1d, data_ov065_0229080c->unk_30);
        }
        func_ov065_02271d20();
    }
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02271f9c(void *a, u32 *b) {
    if (data_ov065_0229080c->unk_18 != NULL) {
        func_ov065_0227c400(a, b[0], 0, 0, func_ov065_02271698, 0);
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_02271f58(void *a, u32 *b) {
    if (func_0212a190((const char *)b[2], "I have authorized your request to add me to your list") == 0) {
        func_ov065_0227c400(a, b[0], 0, 0, func_ov065_022715b0, 0);
        return 1;
    }
    return 0;
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02271f08(void *a, u32 *b) {
    Unk_ov065_0227194c_Out o;
    if (data_ov065_0229080c->unk_34 != NULL) {
        s32 i = func_ov065_02271e8c(b[0]);
        if (i != -1) {
            func_ov065_0227c05c(a, b[2], &o);
            data_ov065_0229080c->unk_34(i, (u8)o.unk_04, o.unk_108, data_ov065_0229080c->unk_38);
        }
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_02271ed8(s32 i) {
    s32 r = func_020ffc60(func_ov065_02271474(), &data_ov065_0229080c->unk_18[i]);
    s32 m = -1;
    if (r == 0 || r == m) {
        r = 0;
    }
    return r;
}
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_02271e8c(s32 v) {
    s32 i;
    if (data_ov065_0229080c == NULL || v == 0) {
        return -1;
    }
    for (i = 0; i < data_ov065_0229080c->unk_14; i++) {
        if (v == func_ov065_02271ed8(i)) {
            return i;
        }
    }
    return -1;
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02271e64() {
    if (data_ov065_0229080c != NULL) {
        data_ov065_0229080c->unk_08 = 0;
        u64 t = func_01ffa6b4();
        Unk_ov065_0229080c *g = data_ov065_0229080c;
        g->unk_0c = (u32)t;
        g->unk_10 = (u32)(t >> 32);
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 func_ov065_02271e00(s32 a, char *b, char *c) {
    Unk_ov065_0229080c_Sub *s;
    if (data_ov065_0229080c == NULL || data_ov065_0229080c->unk_04 == NULL) {
        return 0;
    }
    s = data_ov065_0229080c->unk_04;
    if (a == -1) {
        a = s->unk_00->unk_214;
    }
    if (b == NULL) {
        b = (char *)s->unk_00->unk_218;
    }
    if (c == NULL) {
        c = (char *)s->unk_00->unk_318;
    }
    return func_ov065_0227bd8c(s, a, b, c);
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02271dac(s32 idx) {
    Unk_ov065_0227194c_Out o;
    if (data_ov065_0229080c->unk_44 != NULL && data_ov065_0229080c->unk_00 != 1) {
        data_ov065_0229080c->unk_44(idx, data_ov065_0229080c->unk_48);
    }
    if (data_ov065_0229080c->unk_34 != NULL) {
        s32 r = func_ov065_022723b8(&data_ov065_0229080c->unk_18[idx], o.unk_108);
        data_ov065_0229080c->unk_34(idx, r, o.unk_108, data_ov065_0229080c->unk_38);
    }
}
}
}

namespace F02271da0 {
extern "C" {
void func_ov065_02271da0() {
    data_ov065_0229080c = NULL;
}
}
}

namespace F02271488 {
extern "C" {
s32 func_ov065_02271d44(void)
{
    Unk_ov065_02271774_B *b = data_ov065_0229080c;
    u64 d = (func_01ffa6b4() - *(u64 *)&b->unk_0c) << 6;
    d = d / 0x82ea;
    if (d >= 0x12c) {
        b->unk_08++;
        func_ov065_0227c670(data_ov065_0229080c->unk_04);
        *(u64 *)&data_ov065_0229080c->unk_0c = func_01ffa6b4();
    }
    return 0;
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271d20(void)
{
    if (data_ov065_0229080c != NULL) {
        func_ov065_02283e00();
        data_ov065_0229080c->unk_00 = 0;
    }
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271ba0(Unk_ov065_02271774_Ent *arr, s32 n)
{
    s32 cnt;
    s32 idx;
    u8 buf[0x18];
    Unk_ov065_02271ba0_Out out;
    s32 j;
    s32 id;
    if (data_ov065_0229080c->unk_1e == 0) {
        func_ov065_022718ec(func_ov065_0227c14c(data_ov065_0229080c->unk_04, &cnt));
        idx = 0;
        if (cnt > 0) {
            do {
                func_ov065_022718ec(func_ov065_0227c05c(data_ov065_0229080c->unk_04, idx, &out));
                for (j = 0; j < n; j++) {
                    if (out.unk_00 == func_ov065_02271ed8(j)) {
                        s32 off = j * 12;
                        if (func_021000fc((void *)((u32)arr + off)) == 0) {
                            Unk_ov065_02271774_Ent *e = (Unk_ov065_02271774_Ent *)((u8 *)arr + off);
                            func_020ffba8(e, out.unk_00);
                            func_02100094(e);
                            data_ov065_0229080c->unk_1d = 1;
                        }
                        break;
                    }
                }
                if (j == n) {
                    func_ov065_022718ec(func_ov065_0227bf5c(data_ov065_0229080c->unk_04, out.unk_00));
                    cnt--;
                    idx--;
                }
                idx++;
            } while (idx < cnt);
        }
        data_ov065_0229080c->unk_1e = 1;
    }
    while (data_ov065_0229080c->unk_1c < n) {
        id = func_ov065_02271ed8(data_ov065_0229080c->unk_1c);
        if (id != 0) {
            if (func_ov065_02271ac8(arr, data_ov065_0229080c->unk_1c, id) == 0) {
                func_ov065_022718ec(func_ov065_0227c000(data_ov065_0229080c->unk_04, id, &idx));
                if (idx == -1) {
                    func_ov065_022719e0(id);
                }
            }
        } else {
            if (func_020ffc60((void *)func_ov065_02271474(), &arr[data_ov065_0229080c->unk_1c]) == -1) {
                func_020ffb98((void *)func_ov065_02271474(), &arr[data_ov065_0229080c->unk_1c], buf);
                func_ov065_0227c4b0(data_ov065_0229080c->unk_04, 0, 0, 0, 0, buf, 0, 0, (void *)func_ov065_02271774, data_ov065_0229080c->unk_1c);
                data_ov065_0229080c->unk_1e = 2;
                return;
            }
        }
        data_ov065_0229080c->unk_1c++;
    }
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271b7c(void)
{
    data_ov065_0229080c->unk_2c(0, data_ov065_0229080c->unk_1d, data_ov065_0229080c->unk_30);
    data_ov065_0229080c->unk_00 = 2;
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271b40(Unk_ov065_02271774_Ent *arr, s32 i, s32 j)
{
    if (data_ov065_0229080c != NULL) {
        func_02115fb4(&arr[i], 0, 12);
        if (data_ov065_0229080c->unk_3c != NULL) {
            data_ov065_0229080c->unk_3c(i, j, data_ov065_0229080c->unk_40);
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
s32 func_ov065_02271ac8(Unk_ov065_02271774_Ent *arr, s32 n, s32 id)
{
    s32 i;
    for (i = 0; i < n; i++) {
        s32 t = func_ov065_02271ed8(i);
        if (t != 0 && t == id) {
            if (func_021000fc(&arr[n]) != 0 && func_021000fc(&arr[i]) == 0) {
                func_ov065_02271b40(arr, i, n);
            } else {
                func_ov065_02271b40(arr, n, i);
            }
            data_ov065_0229080c->unk_1d = 1;
            return TRUE;
        }
    }
    return FALSE;
}
}
}

namespace F02271488 {
extern "C" {
s32 func_ov065_02271a04(Unk_ov065_02271774_Ent *arr, s32 n, s32 id)
{
    s32 res, i, j, t;
    Unk_ov065_02271774_Ent *q, *p;
    res = -1;
    i = 0;
    if (n - 1 > 0) {
        q = arr;
        p = arr;
        do {
            t = func_ov065_02271ed8(i);
            if (t != 0) {
                if (t == id) {
                    res = i;
                }
                j = i + 1;
                for (; j < n; j++) {
                    if (t == func_ov065_02271ed8(j)) {
                        if (func_021000f4(q) == 2 && func_021000f4(&arr[j]) == 3) {
                            func_020ffba8(p, t);
                        }
                        if (func_021000fc(&arr[j]) != 0) {
                            func_02100094(p);
                        }
                        func_ov065_02271b40(arr, j, i);
                        data_ov065_0229080c->unk_1d = 1;
                    }
                }
            }
            q++;
            p++;
            i++;
        } while (i < n - 1);
    }
    return res;
}
}
}

namespace F02271488 {
extern "C" {
s32 func_ov065_022719e0(s32 a)
{
    s32 r = func_ov065_0227c278(data_ov065_0229080c->unk_04, a, data_ov065_0229080c->unk_28);
    func_ov065_022718ec(r);
    return r;
}
}
}

namespace F02271488 {
extern "C" {
s32 func_ov065_0227194c(void *a, void *b)
{
    s32 out;
    s32 t;
    out = 0;
    if (data_ov065_0229080c == NULL || func_ov065_02270e94() == 0) {
        return FALSE;
    }
    t = func_020ffc60((void *)func_ov065_02271474(), a);
    if (t > 0) {
        if (func_ov065_0227c000(data_ov065_0229080c->unk_04, t, &out) != 0) {
            return FALSE;
        }
    }
    if (t <= 0 || out == -1) {
        return FALSE;
    }
    if (func_ov065_0227c05c(data_ov065_0229080c->unk_04, out, b) == 0) {
        goto ok;
    }
    return FALSE;
ok:
    return TRUE;
}
}
}

namespace F02271488 {
extern "C" {
s32 func_ov065_022718ec(s32 r)
{
    s32 a;
    s32 b;
    if (r == 0) {
        return 0;
    }
    switch (r) {
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
    func_ov065_02271fc8(a, b - 0x11558);
    return r;
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271774(void *x, Unk_ov065_02271774_Rec *p, s32 idx)
{
    s32 off;
    s32 i;
    s32 out;
    if (p->unk_00 == 0 && p->unk_04 != 0) {
        off = idx * 12;
        if (func_021000f4((u8 *)data_ov065_0229080c->unk_18 + off) != 0) {
            if (data_ov065_0229080c->unk_00 == 1) {
                data_ov065_0229080c->unk_1d = 1;
                for (i = 0; i < p->unk_04; i++) {
                    if (func_ov065_02271ac8(data_ov065_0229080c->unk_18, idx, p->unk_0c[i].unk_00) != 0) {
                        data_ov065_0229080c->unk_1c++;
                        data_ov065_0229080c->unk_1e = 1;
                        p->unk_08 = 0x601;
                        return;
                    }
                }
                for (i = 0; i < p->unk_04; i++) {
                    func_ov065_022718ec(func_ov065_0227c000(x, p->unk_0c[i].unk_00, &out));
                    if (out == -1) {
                        func_ov065_022719e0(p->unk_0c[i].unk_00);
                    } else {
                        func_020ffba8((u8 *)data_ov065_0229080c->unk_18 + off, p->unk_0c[0].unk_00);
                        func_02100094((u8 *)data_ov065_0229080c->unk_18 + off);
                        func_ov065_02271dac(idx);
                        data_ov065_0229080c->unk_1c++;
                        data_ov065_0229080c->unk_1e = 1;
                        p->unk_08 = 0x601;
                        return;
                    }
                }
                if (p->unk_08 != 0x600) {
                    data_ov065_0229080c->unk_1c++;
                    data_ov065_0229080c->unk_1e = 1;
                    return;
                }
            }
            return;
        }
    }
    if (p->unk_00 != 0) {
        s32 e = func_ov065_022718ec(p->unk_00);
        if (e > 0) {
            e = 1;
        } else if (e != 0) {
            e = e;
        }
    } else {
        if (data_ov065_0229080c->unk_00 == 1 || func_021000f4((u8 *)data_ov065_0229080c->unk_18 + idx * 12) == 0) {
            data_ov065_0229080c->unk_1c++;
            data_ov065_0229080c->unk_1e = 1;
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271698(void *x, Unk_ov065_02271774_Rec *p)
{
    s32 i;
    s32 found;
    found = 0;
    if (p->unk_00 == 0) {
        i = found;
        for (; i < data_ov065_0229080c->unk_14; i++) {
            if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 1) {
                u8 buf[24];
                func_020ffb98((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i], buf);
                if (func_0212a190(buf, (u8 *)p + 0x8e) == 0) {
                    func_ov065_0227c224(x, p->unk_04);
                    func_020ffba8(&data_ov065_0229080c->unk_18[i], p->unk_04);
                    found = 1;
                }
            } else if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 3
                       || func_021000f4(&data_ov065_0229080c->unk_18[i]) == 2) {
                s32 v = p->unk_04;
                if (v == func_020ffc60((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i])) {
                    func_ov065_0227c224(x, v);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            func_ov065_022719e0(p->unk_04);
        } else {
            func_ov065_0227c17c(x, p->unk_04);
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_022715b0(void *x, Unk_ov065_02271774_Rec *p)
{
    s32 i;
    s32 found;
    u8 buf[28];
    found = 0;
    if (p->unk_00 == 0) {
        i = found;
        for (; i < data_ov065_0229080c->unk_14; i++) {
            if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 1) {
                func_020ffb98((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i], buf);
                if (func_0212a190(buf, (u8 *)p + 0x8e) == 0) {
                    func_020ffba8(&data_ov065_0229080c->unk_18[i], p->unk_04);
                    func_02100094(&data_ov065_0229080c->unk_18[i]);
                    found = 1;
                }
            } else if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 3
                       || func_021000f4(&data_ov065_0229080c->unk_18[i]) == 2) {
                s32 v = p->unk_04;
                if (v == func_020ffc60((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i])) {
                    func_020ffba8(&data_ov065_0229080c->unk_18[i], v);
                    func_02100094(&data_ov065_0229080c->unk_18[i]);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            func_ov065_02271dac(func_ov065_02271a04(data_ov065_0229080c->unk_18, data_ov065_0229080c->unk_14, p->unk_04));
            data_ov065_0229080c->unk_1d = 1;
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void *func_ov065_022715a4(void)
{
    return data_ov065_0229080c->unk_20;
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_0227155c(void *mem, void *a, void *b, void *c, void *d, void *e, void *f)
{
    data_ov065_02290804 = (Unk_ov065_02271488_A *)mem;
    func_02115fb4(data_ov065_02290804, 0, 0x264);
    data_ov065_02290804->unk_00 = (Unk_ov065_02271488_Inner *)b;
    data_ov065_02290804->unk_04 = 0;
    data_ov065_02290804->unk_08 = c;
    data_ov065_02290804->unk_0c = d;
    data_ov065_02290804->unk_18 = (void (*)(s32, s32, void *))e;
    data_ov065_02290804->unk_1c = f;
    data_ov065_02290804->unk_20 = a;
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271534(void)
{
    func_ov065_0227112c((void *)func_ov065_022712bc, 0);
    data_ov065_02290804->unk_04 = 1;
    data_ov065_02290804->unk_34 = 0;
}
}
}

namespace F02271488 {
extern "C" {
void func_ov065_02271488(void)
{
    if (data_ov065_02290804 != NULL) {
        if (func_ov065_02270e4c() == 0) {
            switch (data_ov065_02290804->unk_04) {
            case 0:
                break;
            case 1:
                func_ov065_02270fd4();
                break;
            case 2:
            case 3:
            case 4: {
                Unk_ov065_02271488_Inner *in = data_ov065_02290804->unk_00;
                if (in != NULL) {
                    if (in->unk_00 != NULL) {
                        func_ov065_0227c670(in);
                    }
                }
                if (data_ov065_02290804->unk_34 != 0) {
                    u64 d = (func_01ffa6b4() - *(u64 *)&data_ov065_02290804->unk_38) << 6;
                    d = d / 0x82ea;
                    if (d > 0xea60) {
                        func_ov065_02271440(6, -0xee8e);
                        data_ov065_02290804->unk_34 = 0;
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
}
}

namespace F02270b74 {
extern "C" {
void *func_ov065_02271474(void) {
    if (data_ov065_02290804 != NULL) {
        return data_ov065_02290804->unk_20;
    }
    return NULL;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02271440(s32 a, s32 b) {
    if (data_ov065_02290804 != NULL && a != 0) {
        func_ov065_02270e34(a, b);
        if (data_ov065_02290804->unk_18 != NULL) {
            data_ov065_02290804->unk_18(a, 0, data_ov065_02290804->unk_1c);
        }
        func_ov065_022713ec();
    }
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02271404(void) {
    if (data_ov065_02290804->unk_28 != NULL) {
        func_ov065_0226dc40();
        func_ov065_0226dbfc();
        func_ov065_02277b64(0, data_ov065_02290804->unk_28, 0);
        data_ov065_02290804->unk_28 = NULL;
    }
    data_ov065_02290804 = NULL;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_022713ec(void) {
    if (data_ov065_02290804 != NULL) {
        data_ov065_02290804->unk_04 = 0;
        data_ov065_02290804->unk_34 = 0;
    }
}
}
}

namespace F02270b74 {
extern "C" {
s32 func_ov065_0227138c(s32 r, s32 unused) {
    s32 a = r;
    s32 b = unused;
    if (r == 0) {
        return 0;
    }
    switch (r) {
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
    func_ov065_02271440(a, b - 0xee48);
    return r;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_022712d4(void *a0, Unk_ov065_02270eb0_X *x) {
    data_ov065_02290804->unk_34 = 0;
    if (x->unk_00 == 0) {
        if (data_ov065_02290804->unk_04 == 2) {
            if (Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_02271e00(1, (void *)"")) == 0) {
                if (data_ov065_02290804->unk_20->unk_1c == x->unk_04) {
                    if (func_ov065_02270474() == 0) {
                        if (func_ov065_02276e44(x->unk_04) == 0) {
                            data_ov065_02290804->unk_04 = 5;
                            data_ov065_02290804->unk_18(0, x->unk_04, data_ov065_02290804->unk_1c);
                        }
                    }
                } else {
                    func_ov065_02271440(6, -60000);
                }
            }
        } else if (data_ov065_02290804->unk_04 == 3) {
            s32 r = Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_0227c400(a0, x->unk_04, 0, 0, (void *)func_ov065_02270eb0, 0));
            if (r == 0) {
            } else if (r != 0) {
                r = r;
            }
        }
    } else {
        Unk_ov065_0227138c_Ns::func_ov065_0227138c(x->unk_00);
    }
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_022712bc(const char *a, const char *b) {
    func_ov065_0227124c(a, b, (void *)func_ov065_022712d4, 2);
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_0227124c(const char *a, const char *b, void *c, s32 d) {
    func_02127838(data_ov065_02290804->unk_4c, a);
    func_02127838(data_ov065_02290804->unk_14c, b);
    Unk_ov065_02270eb0_H *g = data_ov065_02290804;
    u64 t = func_01ffa6b4();
    g->unk_38 = t;
    g->unk_34 = 1;
    Unk_ov065_02270eb0_H *h = data_ov065_02290804;
    if (Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_0227c564(h->unk_00, h->unk_4c, h->unk_14c, 1, 0, c, 0)) == 0) {
        data_ov065_02290804->unk_04 = d;
    }
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_0227112c(Unk_ov065_02271440_Cb cb, u32 arg) {
    Unk_ov065_0227112c_Cfg cfg;
    func_02115fb4(&cfg, 0, 0x2c);
    data_ov065_02290808 = cb;
    data_ov065_02290800 = arg;
    if (func_020ffdfc(data_ov065_02290804->unk_20)) {
        func_020fff48((u8 *)data_ov065_02290804->unk_20 + 0x10, data_ov065_02290804->unk_20->unk_24,
                      data_ov065_02290804->unk_24c);
    } else {
        if (func_020ffe08(&data_ov065_02290804->unk_40) == 0) {
            if (func_020ffe24((u8 *)data_ov065_02290804->unk_20 + 4)) {
                data_ov065_02290804->unk_40 = *(Unk_ov065_02270eb0_Tri *)((u8 *)data_ov065_02290804->unk_20 + 4);
            } else {
                func_020ffe84(&data_ov065_02290804->unk_40);
            }
        } else {
            func_02100160(&data_ov065_02290804->unk_40, (u32)(((u64)((s64)func_01ffa6b4() * 0x5d588b656c078965LL) + 0x269ec3) >> 32));
        }
        func_020fff48(&data_ov065_02290804->unk_40, data_ov065_02290804->unk_0c, data_ov065_02290804->unk_24c);
    }
    func_02127838(cfg.unk_16, data_ov065_02290804->unk_255);
    cfg.unk_24 = (void *)func_ov065_02277b8c;
    cfg.unk_28 = (void *)func_ov065_02277b64;
    void *p = func_ov065_02277b78(0, 0x1a60, 4);
    data_ov065_02290804->unk_28 = p;
    u64 t2 = func_01ffa6b4();
    data_ov065_02290804->unk_2c = t2;
    func_ov065_0226dd2c(&cfg, p);
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02270fd4(void) {
    Unk_ov065_0227112c_Cfg cfg;
    Unk_ov065_02270fd4_S s1;
    Unk_ov065_02270fd4_S s2;
    if (func_ov065_0226db98() == 0x14) {
        func_ov065_0226db28(&s1.unk_00);
        func_02127838(data_ov065_02290804->unk_4c, s1.unk_4a);
        func_02127838(data_ov065_02290804->unk_14c, s1.unk_177);
        func_ov065_0226dbfc();
        func_ov065_02277b64(0, data_ov065_02290804->unk_28, 0);
        data_ov065_02290804->unk_28 = NULL;
        if (func_020ffdfc(data_ov065_02290804->unk_20)) {
            data_ov065_02290808(data_ov065_02290804->unk_4c, data_ov065_02290804->unk_14c, data_ov065_02290800);
        } else {
            func_ov065_0227124c(data_ov065_02290804->unk_4c, data_ov065_02290804->unk_14c,
                                (void *)func_ov065_022712d4, 3);
        }
    } else if (func_ov065_0226db98() != 0) {
        u64 now = func_01ffa6b4();
        u64 d = now - data_ov065_02290804->unk_2c;
        if ((d * 64) / 0x82ea > 0x2710) {
            func_ov065_0226db28(&s2.unk_00);
            func_ov065_0226dbfc();
            func_ov065_02277b64(0, data_ov065_02290804->unk_28, 0);
            data_ov065_02290804->unk_28 = NULL;
            func_ov065_02271440(2, s2.unk_00);
        } else {
            func_ov065_0226dbfc();
            func_02115fb4(&cfg, 0, 0x2c);
            func_02127838(cfg.unk_16, data_ov065_02290804->unk_255);
            cfg.unk_24 = (void *)func_ov065_02277b8c;
            cfg.unk_28 = (void *)func_ov065_02277b64;
            func_ov065_0226dd2c(&cfg, data_ov065_02290804->unk_28);
        }
    }
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02270eb0(void *a0, Unk_ov065_02270eb0_X *x) {
    u8 a[0x14];
    u8 b[0x14];
    u8 c[0x1c];
    if (x->unk_00 == 0) {
        if (data_ov065_02290804->unk_04 == 3) {
            if (x->unk_8e[0] == 0) {
                func_020fff48((u8 *)data_ov065_02290804->unk_20 + 4, data_ov065_02290804->unk_0c, a);
                if (Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_0227c3b0(a0, 0x705, a)) == 0) {
                    data_ov065_02290804->unk_04 = 4;
                    s32 r = Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_0227c400(a0, x->unk_04, 0, 0, (void *)func_ov065_02270eb0, 0));
                    if (r == 0) {
                    } else if (r != 0) {
                        r = r;
                    }
                }
            } else {
                func_ov065_0227c538(a0);
                func_ov065_0227112c((Unk_ov065_02271440_Cb)func_ov065_022712bc, 0);
                data_ov065_02290804->unk_04 = 1;
            }
        } else if (data_ov065_02290804->unk_04 == 4) {
            func_020fff48((u8 *)data_ov065_02290804->unk_20 + 4, data_ov065_02290804->unk_0c, &b[1]);
            if (func_0212a190((const char *)&x->unk_8e[0], (const char *)&b[1]) == 0) {
                func_020fff48(&data_ov065_02290804->unk_40, data_ov065_02290804->unk_0c, &c[2]);
                func_020ffd30(data_ov065_02290804->unk_20, &data_ov065_02290804->unk_40, x->unk_04);
                func_ov065_0227c538(a0);
                data_ov065_02290808(data_ov065_02290804->unk_4c, data_ov065_02290804->unk_14c, data_ov065_02290800);
            } else {
                s32 r = Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_0227c400(a0, x->unk_04, 0, 0, (void *)func_ov065_02270eb0, 0));
                if (r == 0) { return; }
            }
        }
    }
}
}
}

namespace F02270b74 {
extern "C" {
BOOL func_ov065_02270e94(void) {
    if (data_ov065_02290804 != NULL && data_ov065_02290804->unk_04 == 5) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02270b74 {
extern "C" {
s32 func_ov065_02270e7c(s32 *out) {
    if (out != NULL) {
        *out = data_ov065_022907fc;
    }
    return data_ov065_022907f8;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02270e60(void) {
    if (data_ov065_022907f8 != 8) {
        data_ov065_022907f8 = 0;
        data_ov065_022907fc = 0;
    }
}
}
}

namespace F02270b74 {
extern "C" {
BOOL func_ov065_02270e4c(void) {
    if (data_ov065_022907f8 != 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02270b74 {
extern "C" {
void func_ov065_02270e34(s32 a, s32 b) {
    if (data_ov065_022907f8 != 8) {
        data_ov065_022907f8 = a;
        data_ov065_022907fc = b;
    }
}
}
}

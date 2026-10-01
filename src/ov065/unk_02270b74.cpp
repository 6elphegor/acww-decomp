// mwcc-flags: -O4,p
#include "types.h"

// ov065_029: DWC-like connection helper: init/shutdown, status, auth/connect state callbacks (0x02270b74..0x02271474)

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
void func_ov065_02270c94(Unk_ov065_02270ba4_G *g, Unk_ov065_02270eb0_P *a1, void *a2, const char *a3, const char *a4,
                         void *a5, void *a6, void *a7, void *a8);
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

void func_ov065_02270b74(void) {}

s32 func_ov065_02270b78(void) {
    func_ov065_02277cdc();
    if (func_ov065_02277bc0()) {
        func_ov065_02270e34(7, 0);
        func_ov065_02277c34();
        return 1;
    }
    return 0;
}

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

void func_ov065_02270e34(s32 a, s32 b) {
    if (data_ov065_022907f8 != 8) {
        data_ov065_022907f8 = a;
        data_ov065_022907fc = b;
    }
}

BOOL func_ov065_02270e4c(void) {
    if (data_ov065_022907f8 != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02270e60(void) {
    if (data_ov065_022907f8 != 8) {
        data_ov065_022907f8 = 0;
        data_ov065_022907fc = 0;
    }
}

s32 func_ov065_02270e7c(s32 *out) {
    if (out != NULL) {
        *out = data_ov065_022907fc;
    }
    return data_ov065_022907f8;
}

BOOL func_ov065_02270e94(void) {
    if (data_ov065_02290804 != NULL && data_ov065_02290804->unk_04 == 5) {
        return TRUE;
    }
    return FALSE;
}

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
        if (d * 64 / 0x82ea > 0x2710) {
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
            func_02100160(&data_ov065_02290804->unk_40, (u32)((func_01ffa6b4() * 0x5d588b656c078965ULL + 0x269ec3) >> 32));
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

void func_ov065_022712bc(const char *a, const char *b) {
    func_ov065_0227124c(a, b, (void *)func_ov065_022712d4, 2);
}

void func_ov065_022712d4(void *a0, Unk_ov065_02270eb0_X *x) {
    data_ov065_02290804->unk_34 = 0;
    if (x->unk_00 == 0) {
        if (data_ov065_02290804->unk_04 == 2) {
            if (Unk_ov065_0227138c_Ns::func_ov065_0227138c(func_ov065_02271e00(1, data_ov065_0228c818)) == 0) {
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

void func_ov065_022713ec(void) {
    if (data_ov065_02290804 != NULL) {
        data_ov065_02290804->unk_04 = 0;
        data_ov065_02290804->unk_34 = 0;
    }
}

void func_ov065_02271404(void) {
    if (data_ov065_02290804->unk_28 != NULL) {
        func_ov065_0226dc40();
        func_ov065_0226dbfc();
        func_ov065_02277b64(0, data_ov065_02290804->unk_28, 0);
        data_ov065_02290804->unk_28 = NULL;
    }
    data_ov065_02290804 = NULL;
}

void func_ov065_02271440(s32 a, s32 b) {
    if (data_ov065_02290804 != NULL && a != 0) {
        func_ov065_02270e34(a, b);
        if (data_ov065_02290804->unk_18 != NULL) {
            data_ov065_02290804->unk_18(a, 0, data_ov065_02290804->unk_1c);
        }
        func_ov065_022713ec();
    }
}

void *func_ov065_02271474(void) {
    if (data_ov065_02290804 != NULL) {
        return data_ov065_02290804->unk_20;
    }
    return NULL;
}

}

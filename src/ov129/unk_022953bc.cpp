#include "types.h"

class Unk_ov129_02295c04_Vt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov129_022965f8 {
    /* 0x0000 */ u8 pad_00[0x94];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ u8 pad_9c[8];
    /* 0x00a4 */ u16 unk_a4;
    /* 0x00a6 */ u16 unk_a6;
    /* 0x00a8 */ u16 unk_a8;
    /* 0x00aa */ u16 unk_aa;
    /* 0x00ac */ u8 unk_ac;
    /* 0x00ad */ u8 unk_ad;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 pad_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 pad_b2;
    /* 0x00b3 */ u8 unk_b3;
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 pad_b5[0x1c0 - 0xb5];
    /* 0x01c0 */ u8 unk_1c0[0x324 - 0x1c0];
    /* 0x0324 */ Unk_ov129_02295c04_Vt unk_324;
    /* 0x0328 */ u8 pad_328[0x388 - 0x328];
    /* 0x0388 */ u8 unk_388[0x6b8 - 0x388];
    /* 0x06b8 */ u8 unk_6b8[0x30e8 - 0x6b8];
};

typedef Unk_ov129_022965f8 S;

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern s32 data_021f482c;
extern u8 *data_021c1b3c;
extern u8 data_ov129_02296658[];

void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02004008(s32 a);
void func_02003ff4(s32 a, s32 b);
void func_02094960();
void func_02034f80(void *a);
void func_02034f98(void *a);
void func_020b0780(void *a);
void func_020b0788(void *a, s32 b);
void func_020b080c(void *a);
s32 func_0208d534(void *a);
s32 func_0208d4fc(void *a);

s32 func_ov002_02200a14(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a60(void *a, s32 b);
s32 func_ov002_022009c8(void *a);
s32 func_ov002_022009d4(void *a);
s32 func_ov002_02203110(void *a, s32 b);
s32 func_ov002_0220308c(void *a);
s32 func_ov002_0220306c(void *a);
s32 func_ov002_022030f4(void *a, s32 b);
s32 func_ov002_022030b8(void *a, s32 b);
void func_ov002_02202a40(void *a, s32 b, s32 c);
s32 func_ov002_022028f0(void *a);
s32 func_ov002_02202fac(void *a, s32 b);
void func_ov002_02202fc8(void *a, s32 b);
void func_ov002_02202fe4(void *a, s32 b);
void func_ov002_02203920(void *a);
void func_ov002_02203548(void *a);
void func_ov002_02203900(void *a);

s32 func_ov127_02292538(void *a);
void func_ov127_0229257c(void *a, s32 b);
void func_ov127_022925c8(void *a, s32 b, s32 c);
s32 func_ov127_022926e0(void *a, s32 b, s32 c);
void func_ov127_02292518(void *a, s32 b);
s32 func_ov127_0229247c(void *a, s32 b, s32 c);
void func_ov127_02292a0c(void *a, s32 b);
void func_ov127_02292994(void *a, s32 b, s32 c);
void func_ov127_02292950(void *a);
void func_ov127_02292824(void *a);
void func_ov127_0229281c(void *a);
void func_ov127_02292a7c(void *a);
void func_ov004_02224844();

void func_ov129_02295000(S *s);
void func_ov129_02295040(S *s);
void func_ov129_02295110(S *s);
void func_ov129_02295154(S *s);
void func_ov129_02295200(S *s);
void func_ov129_0229522c(S *s);
void func_ov129_02295d38(S *s);
void func_ov129_02296138(S *s);
void func_ov129_0229418c(S *s, s32 a);
void func_ov129_0229419c(S *s, s32 a);
s32 func_ov129_022941ac(S *s, s32 a);
s32 func_ov129_022941c0(S *s);
s32 func_ov129_0229470c(S *s, s32 a, s32 b);
void func_ov129_0229497c(S *s);
void func_ov129_02294a50(S *s);
void func_ov129_02294ad4(S *s);
void func_ov129_02294afc(S *s);
void func_ov129_02294b2c(S *s);
void func_ov129_02294b90(S *s);
void func_ov129_02294bb4(S *s);
void func_ov129_02294c94(S *s);
void func_ov129_02294cb8(S *s);
void func_ov129_02294ce4(S *s);
void func_ov129_02294d04(S *s);
void func_ov129_02294d58(S *s);
void func_ov129_02294db0(S *s);
s32 func_ov129_02294f30(S *s, s32 a);

static inline BOOL Unk_ov129_02295000_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov129_022953bc(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov129_02295d38(s);
    } else if (Unk_ov129_02295000_Both()) {
        if (func_ov002_02203110(s->unk_1c0, 3)) {
            func_ov129_02295040(s);
        } else if (func_ov002_02203110(s->unk_1c0, 4)) {
            func_ov129_02295000(s);
        }
    }
}

void func_ov129_02295428(S *s) {
    if (func_ov002_0220308c(s->unk_1c0)) {
        if (func_0208d534(&s->unk_324)) {
            s32 a = func_ov002_0220306c(s->unk_1c0);
            s32 b = func_ov002_022030f4(s->unk_1c0, -1);
            s32 c = func_ov002_022030b8(s->unk_1c0, -1);
            func_ov002_02202a40(&s->unk_324, a + b, a + c);
        }
    } else {
        func_ov129_02294db0(s);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov129_02295494(S *s) {
    if (func_0208d4fc(&s->unk_324)) {
        func_ov129_02294d04(s);
        func_ov002_02200a58(s, s->unk_ac);
    }
}

void func_ov129_022954c0(S *s) {
    if (func_0208d4fc(&s->unk_324)) {
        if (func_ov129_022941ac(s, 2)) {
            if (func_ov129_0229470c(s, s->unk_94, s->unk_98)) {
                if (func_ov129_022941c0(s) == 3) return;
            }
            func_ov129_02294bb4(s);
            func_ov002_02200a58(s, 3);
            func_ov129_02294cb8(s);
        } else {
            u32 v = s->unk_ae;
            switch (v) {
            case 4:
                if (func_ov002_02202fac(s->unk_1c0, 6) == 0) {
                    func_ov129_02295154(s);
                } else {
                    func_ov002_02200a58(s, 4);
                    func_ov129_02294cb8(s);
                }
                break;
            case 5:
                func_ov129_02295110(s);
                break;
            case 0:
            case 1:
            case 2:
            case 3:
                s->unk_ad = v;
                func_ov127_022925c8(s->unk_6b8, s->unk_ad, 0);
                func_ov002_02200a58(s, 5);
                break;
            }
        }
    }
}

void func_ov129_02295594(S *s) {
    if (func_ov002_022028f0(&s->unk_324) == 0) {
        func_ov002_02200a58(s, s->unk_ac);
        func_ov129_02296138(s);
    }
}

void func_ov129_022955c0(S *s) {
    if (func_ov127_02292538(s->unk_6b8)) {
        func_ov129_02294d04(s);
        func_ov002_02200a58(s, s->unk_ac);
    }
    if (func_0208d4fc(&s->unk_324)) {
        func_ov129_02294d04(s);
    }
}

void func_ov129_02295604(S *s) {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(s, 4);
        func_ov129_02294cb8(s);
        func_ov002_02200a58(s, 6);
        func_ov127_0229257c(s->unk_6b8, s->unk_ad);
    } else {
        func_ov127_022925c8(s->unk_6b8, s->unk_ad, 0);
    }
}

void func_ov129_02295654(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov129_0229522c(s);
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov129_02294ce4(s);
        } else if (k & 0x800) {
            func_ov129_0229419c(s, 2);
            func_ov129_02294bb4(s);
            func_ov002_02200a58(s, 3);
            func_ov129_02294d58(s);
        } else if (k & 8) {
            if (func_ov002_02202fac(s->unk_1c0, 6) == 0) {
                func_ov129_02294db0(s);
                func_ov129_02295154(s);
            }
        } else if (k & 2) {
            func_ov129_02294db0(s);
            func_ov129_02295110(s);
        } else {
            if (func_ov129_02294f30(s, func_ov002_022009c8(s))) {
                func_ov129_02294d58(s);
            }
        }
    }
}

void func_ov129_0229570c(S *s) {
    u32 j;
    u32 k;
    if (func_ov002_022009d4(s)) {
        func_ov129_0229522c(s);
    } else {
        k = data_021f47d8[1];
        if (k & 1) {
            func_ov129_02294ce4(s);
        } else if (k & 0x800) {
            func_ov129_0229418c(s, 2);
            func_ov002_02200a58(s, 4);
            func_ov129_02294d58(s);
            func_ov129_02294c94(s);
        } else if (k & 8) {
            if (func_ov002_02202fac(s->unk_1c0, 6) == 0) {
                func_ov129_0229418c(s, 2);
                s->unk_ae = 4;
                func_ov129_02294c94(s);
                func_ov129_02294db0(s);
                func_ov129_02295154(s);
            }
        } else if (k & 2) {
            func_ov129_0229418c(s, 2);
            s->unk_ae = 5;
            func_ov129_02294c94(s);
            func_ov129_02294db0(s);
            func_ov129_02295110(s);
        } else {
            s32 ox = s->unk_94;
            s32 oy = s->unk_98;
            j = *(volatile u16 *)&data_021f47d8[0];
            if (j & 0x20) {
                s->unk_94 = s->unk_94 - 4;
            } else if (j & 0x10) {
                s->unk_94 = s->unk_94 + 4;
            }
            j = *(volatile u16 *)&data_021f47d8[0];
            if (j & 0x40) {
                s->unk_98 = s->unk_98 - 4;
            } else if (j & 0x80) {
                s->unk_98 = s->unk_98 + 4;
            }
            s32 nx = s->unk_94;
            if (ox != nx || oy != s->unk_98) {
                if (nx < 0x30) {
                    s->unk_94 = 0x30;
                    func_ov127_02292518(s->unk_6b8, -4);
                    func_ov129_0229419c(s, 0x40);
                } else if (nx > 0xd0) {
                    s->unk_94 = 0xd0;
                    func_ov127_02292518(s->unk_6b8, 4);
                    func_ov129_0229419c(s, 0x40);
                }
                if (s->unk_98 < 0x1c) {
                    s->unk_98 = 0x1c;
                    if (func_ov127_0229247c(s->unk_6b8, -4, 0)) {
                        func_ov129_0229419c(s, 0x40);
                    }
                } else if (s->unk_98 > 0xac) {
                    s->unk_98 = 0xac;
                    if (func_ov127_0229247c(s->unk_6b8, 4, 0)) {
                        func_ov129_0229419c(s, 0x40);
                    }
                }
                func_ov129_02294bb4(s);
                func_ov002_02202a40(&s->unk_324, s->unk_94, s->unk_98);
            }
        }
    }
}

void func_ov129_02295914(S *s) {
    if (func_ov127_02292538(s->unk_6b8)) {
        if (data_021f4770 != 0) {
            s->unk_ad = func_ov127_022926e0(s->unk_6b8, data_021ef5f8, data_021ef5f4);
            if (s->unk_ad != 4) {
                func_ov127_022925c8(s->unk_6b8, s->unk_ad, 0);
                func_ov002_02200a58(s, 1);
                return;
            }
        }
        func_ov002_02200a58(s, 0);
    }
}

void func_ov129_02295980(S *s) {
    if (data_021f4770 == 0) {
        func_ov127_0229257c(s->unk_6b8, s->unk_ad);
        func_ov002_02200a58(s, 2);
    } else {
        func_ov127_022925c8(s->unk_6b8, s->unk_ad, 0);
    }
}

void func_ov129_022959c0(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov129_02295200(s);
        func_ov129_02294b90(s);
    } else if (Unk_ov129_02295000_Both()) {
        s32 a = data_021ef5f0;
        s32 b = data_021ef5ec;
        s->unk_ad = func_ov127_022926e0(s->unk_6b8, a, b);
        if (s->unk_ad != 4) {
            func_ov127_022925c8(s->unk_6b8, s->unk_ad, 0);
            func_ov002_02200a58(s, 1);
            func_ov129_02294b90(s);
        } else if (func_ov002_02202fac(s->unk_1c0, 6) == 0 && func_ov002_02203110(s->unk_1c0, 6)) {
            func_ov129_02295154(s);
            func_ov129_02294b90(s);
        } else if (func_ov002_02203110(s->unk_1c0, 5)) {
            func_ov129_02295110(s);
            func_ov129_02294b90(s);
        } else {
            if (func_ov129_0229470c(s, a, b)) {
                switch (func_ov129_022941c0(s)) {
                case 1:
                    return;
                case 2:
                    func_ov129_02294b2c(s);
                    return;
                case 3:
                    return;
                }
            }
            goto fallback;
        }
    } else {
    fallback:
        func_ov129_02294afc(s);
    }
}

void func_ov129_02295ac8(S *s) {
    func_ov127_02292a0c(s->unk_6b8, 3);
    func_ov127_02292994(s->unk_6b8, 6, 1);
    func_020b0788(s->unk_388, 3);
    func_ov127_02292950(s->unk_6b8);
    func_ov002_02203920(s->unk_1c0);
    func_ov002_02203548(s->unk_1c0);
    if (s->unk_b1 == 2) {
        func_ov002_02202fc8(s->unk_1c0, 6);
    } else {
        func_ov002_02202fe4(s->unk_1c0, 6);
    }
}

void func_ov129_02295b38(S *s) {
    func_020015b8(0);
    func_02002398(3, 2);
    func_0200226c(3, 1, 0, 0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
}

void func_ov129_02295b70(S *s) {
    func_ov127_02292824(s->unk_6b8);
    if (func_ov129_022941ac(s, 0x40)) {
        if (func_ov129_022941ac(s, 0x20) == 0) {
            func_ov129_0229419c(s, 0x20);
            func_02004008(0x883);
        }
    } else if (func_ov129_022941ac(s, 0x20)) {
        func_ov129_0229418c(s, 0x20);
        func_02003ff4(0x883, 1);
    }
}

void func_ov129_02295bd0(S *s) {
    func_020b080c(s->unk_388);
    func_ov002_02203900(s->unk_1c0);
    func_ov129_0229418c(s, 0x40);
}

void func_ov129_02295bfc(S *s) {
    func_ov129_02295b70(s);
}

void func_ov129_02295c04(S *s) {
    func_ov129_02295bd0(s);
    s->unk_324.vfunc_0c();
}

void func_ov129_02295c20(S *s) {
    func_020b0780(s->unk_388);
    func_ov127_0229281c(s->unk_6b8);
    func_ov002_02203900(s->unk_1c0);
    func_02094960();
    func_02034f80(data_021c1b3c + 0x2f0);
    func_0200261c(data_ov129_02296658, data_021f482c, 3, 0, 0x10, 0x10);
}

void func_ov129_02295c88(S *s) {
    s->unk_a4 = 0;
    func_ov127_02292a7c(s->unk_6b8);
    s->unk_94 = 0x80;
    s->unk_98 = 0x60;
    s->unk_ae = 4;
    s->unk_a6 = 0xffff;
    s->unk_a8 = 0xffff;
    s->unk_b4 = 0;
    func_ov129_02294ad4(s);
    func_ov129_02294a50(s);
    s->unk_b0 = 0xff;
    s->unk_aa = 0xffff;
    s->unk_b3 = 0xff;
    func_ov129_0229497c(s);
    func_ov004_02224844();
    func_02034f98(data_021c1b3c + 0x2f0);
}
}

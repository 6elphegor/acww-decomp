#include "types.h"

class Unk_ov110_02296e30_Vt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov110_02296874 {
    /* 0x0000 */ u8 pad_00[0x94];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ u8 pad_a0[8];
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ u16 unk_b0[15];
    /* 0x00ce */ u16 unk_ce[15];
    /* 0x00ec */ u8 pad_ec[5];
    /* 0x00f1 */ u8 unk_f1;
    /* 0x00f2 */ u8 unk_f2;
    /* 0x00f3 */ u8 unk_f3;
    /* 0x00f4 */ u8 unk_f4;
    /* 0x00f5 */ u8 unk_f5;
    /* 0x00f6 */ u8 pad_f6[3];
    /* 0x00f9 */ u8 unk_f9;
    /* 0x00fa */ u8 pad_fa;
    /* 0x00fb */ u8 unk_fb;
    /* 0x00fc */ u8 pad_fc[0x138 - 0xfc];
    /* 0x0138 */ u8 unk_138[0xa60];
    /* 0x0b98 */ u8 unk_b98[0x28];
    /* 0x0bc0 */ u8 unk_bc0[0x15e0];
    /* 0x21a0 */ u8 unk_21a0[0xc0];
    /* 0x2260 */ u8 unk_2260[0x18];
    /* 0x2278 */ Unk_ov110_02296e30_Vt unk_2278;
    /* 0x227c */ u8 pad_227c[0x60];
    /* 0x22dc */ u8 unk_22dc[0x2f9];
    /* 0x25d5 */ u8 unk_25d5[0x18f];
};

typedef Unk_ov110_02296874 S;

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern s32 data_021f482c;
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u8 data_ov110_022977d8[];
extern u8 data_ov110_022977fc[];
extern u8 data_ov110_0229781c[];
extern u8 data_ov110_02297834[];
extern u8 data_ov110_0229784c[];
extern u8 data_ov110_02297864[];
extern u8 data_ov110_0229787c[];
extern u8 data_ov110_02297894[];
extern u8 data_ov110_022978ac[];
extern u8 data_ov110_022978c4[];

void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002654(void *a, s32 b, s32 c);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0206ed50();
void func_0206ec04();
void func_02116048(void *a, void *b, u32 c);
s32 func_020ed174(void *a);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);

s32 func_ov002_022009c8(void *a);
s32 func_ov002_022009d4(void *a);
void func_ov002_022006e4(void *a, s32 b);
void func_ov002_022006c0(void *a);
void func_ov002_022006a4(void *a, s32 b);
s32 func_ov002_02200a14(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a60(void *a, s32 b);
void func_ov002_02200a50(void *a, s32 b);
s32 func_ov002_022014c0(void *a, s32 b, s32 c);
void func_ov002_02201aa0(void *a, s32 b, s32 c);
s32 func_ov002_0220071c(void *a);
void func_ov002_02201b58(void *a);
void func_ov002_02201b04(void *a);
void func_ov002_022027a4(void *a);
void func_ov002_02202310(void *a, s32 b, s32 c, s32 d);
s32 func_ov002_022008fc(void *a, s32 b);
s32 func_ov002_02200908(void *a, s32 b);
s32 func_ov002_02200920(void *a);
void func_ov002_02200840(void *a, s32 b, s32 c, s32 d);
void func_ov002_022008c4(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_022008e0(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_02200850(void *a, s32 b);

void func_ov094_02292ae0(void *a);
void func_ov094_02292d1c(void *a, s32 b);
void func_ov094_02292aa4(void *a);
void func_ov094_02292acc(void *a);
void func_ov094_022939a0(void *a);
void func_ov094_0229462c(void *a);
void func_ov094_02292a80(void *a);
void func_ov094_02293998(void *a);
void func_ov094_022939c0(void *a, s32 b);
void func_ov094_02294644(void *a, s32 b);
void func_ov094_02292d30(void *a, s32 b);
void func_ov094_02292398();
void func_ov094_022937a0(void *a);
void func_ov094_02293764(void *a, void *b);
void func_ov094_02293d2c(void *a);
void func_ov094_022941f8(void *a, s32 b);

void func_ov110_02294d68(S *s, s32 a);
void func_ov110_02294d78(S *s, s32 a);
s32 func_ov110_02294d88(S *s, s32 a);
s32 func_ov110_02294d9c(S *s);
void func_ov110_02294e78(S *s, s32 a);
void func_ov110_02294fb8(S *s, s32 a);
void func_ov110_02295034(S *s);
s32 func_ov110_02295060(S *s, s32 a, s32 b);
void func_ov110_022953b4(S *s);
void func_ov110_02295488(S *s);
void func_ov110_022954c8(S *s);
void func_ov110_02295638(S *s);
void func_ov110_022956a0(S *s);
void func_ov110_022957a8(S *s, s32 a);
void func_ov110_022958a0(S *s);
void func_ov110_02295904(S *s);
void func_ov110_02295968(S *s);
s32 func_ov110_02295a14(S *s);
void func_ov110_02295a58(S *s, s32 a);
void func_ov110_02295a94(S *s);
s32 func_ov110_02295b78(S *s, s32 a);
s32 func_ov110_02295bbc(S *s, s32 a);
s32 func_ov110_02295bfc(S *s, s32 a);
void func_ov110_02295c3c(S *s);
s32 func_ov110_02295f68(S *s, s32 a);
s32 func_ov110_02295fc4(S *s, s32 a, s32 b, s32 c);
s32 func_ov110_02296088(S *s, s32 a);
s32 func_ov110_02296094(S *s, s32 a);
s32 func_ov110_022960a4(S *s, s32 a);
void func_ov110_022960b0(S *s);
s32 func_ov110_022960c0(S *s);
s32 func_ov110_022960e8(S *s);
void func_ov110_02296108(S *s, s32 a, s32 b);
void func_ov110_02296140(S *s, s32 a, s32 b);
void func_ov110_02296230(S *s, s32 a);
void func_ov110_02296278(S *s, s32 a);
void func_ov110_02296300(S *s);
void func_ov110_02296320(S *s);
void func_ov110_02296354(S *s);
s32 func_ov110_0229726c(S *s);

static inline BOOL Unk_ov110_02296b1c_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov110_02296874(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov110_02296354(s);
        func_ov002_022006e4(s->unk_21a0, 1);
    } else {
        s32 v = func_ov002_022009c8(s);
        if (func_ov110_02295060(s, v, 0)) {
            func_ov110_02295904(s);
            func_ov110_02295638(s);
            func_ov002_022006e4(s->unk_21a0, 0);
        } else {
            if (func_ov110_02295bfc(s, s->unk_f5) != 0) goto tail;
            {
                u32 k = data_021f47d8[1];
                if (k & 1) {
                    if (func_ov110_022960a4(s, s->unk_f5) || func_ov110_02296094(s, s->unk_f5)) {
                        if (!func_ov110_02295bbc(s, s->unk_f5)) {
                            func_ov110_02295488(s);
                        }
                    } else if (func_ov110_02296088(s, s->unk_f5)) {
                        func_ov110_022954c8(s);
                    }
                } else if (k & 0x800) {
                    if (func_ov110_022960a4(s, s->unk_f5) || func_ov110_02296094(s, s->unk_f5)) {
                        if (!func_ov110_02295bbc(s, s->unk_f5)) {
                            s32 r = func_ov110_022960a4(s, s->unk_f5) ? func_ov110_022960c0(s) : func_ov110_022960e8(s);
                            if (r != 0x1f) {
                                func_ov110_02296108(s, s->unk_f5, r);
                                func_ov002_022006e4(s->unk_21a0, 1);
                            }
                        }
                    }
                } else {
                    goto tail;
                }
            }
            return;
tail:
            {
                u32 k = data_021f47d8[1];
                if ((k & 8) || (k & 2)) {
                    func_ov110_022956a0(s);
                    func_ov002_022006e4(s->unk_21a0, 0);
                    func_ov110_02294e78(s, 1);
                } else {
                    func_ov002_022006c0(s->unk_21a0);
                }
            }
        }
    }
}

void func_ov110_022969ec(S *s) {
    if (func_ov110_0229726c(s)) {
        func_ov110_022957a8(s, s->unk_f4);
        func_ov110_022956a0(s);
        func_ov002_022006e4(s->unk_21a0, 0);
        func_ov110_02294e78(s, 0);
    } else {
        func_ov110_022958a0(s);
        func_ov110_02295a94(s);
        s32 x = s->unk_ac + 8;
        s32 t = func_ov110_02295fc4(s, s->unk_a8 + 8, x, 0);
        if (func_ov110_02294d88(s, 0x200)) {
            if ((func_ov110_02296094(s, t) && func_ov110_022960a4(s, s->unk_f4))
                || (func_ov110_022960a4(s, t) && func_ov110_02296094(s, s->unk_f4))) {
                if (func_ov110_02295b78(s, t) != 0xfff1) {
                    t = 0x1f;
                }
            }
        }
        if (t != 0x1f) {
            if (data_021f4770 == 0) {
                if (func_ov110_02295bfc(s, t)) {
                    func_ov110_02296140(s, s->unk_f4, x);
                } else {
                    s32 r = func_ov110_02295f68(s, t);
                    if (r == 0) {
                        func_ov110_02296140(s, s->unk_f4, x);
                    } else {
                        func_ov094_02292398();
                        func_ov110_02296300(s);
                    }
                }
            } else {
                func_ov110_02295a58(s, t);
            }
        } else if (data_021f4770 == 0) {
            func_ov110_02296140(s, s->unk_f4, x);
        }
    }
}

void func_ov110_02296b1c(S *s) {
    if (func_ov110_0229726c(s)) {
        func_ov110_022953b4(s);
    } else if (func_ov002_02200a14(s, 1)) {
        func_ov110_022953b4(s);
    } else {
        if (Unk_ov110_02296b1c_Both()) {
            s32 t = func_ov002_022014c0(s->unk_22dc, data_021ef5f0, data_021ef5ec);
            if (t >= 0) {
                func_ov002_02201aa0(s->unk_22dc, t, 1);
                s->unk_f9 = s->unk_25d5[t];
                func_ov002_02200a58(s, 0x12);
            }
        }
    }
}

void func_ov110_02296bb8(S *s) {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 0);
        func_ov002_022006a4(s->unk_21a0, 0x3c);
    } else if (func_ov110_02294d88(s, 4) && func_ov110_02295a14(s)) {
        func_ov110_02296230(s, s->unk_f2);
    } else {
        func_ov002_022006c0(s->unk_21a0);
    }
}

void func_ov110_02296c0c(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov110_02296320(s);
    } else {
        if (Unk_ov110_02296b1c_Both()) {
            s32 x = data_021ef5f0;
            s32 y = data_021ef5ec;
            s32 r = func_ov110_02295fc4(s, x, y, 1);
            if (r != 0x1f) {
                func_ov110_02296278(s, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x60 && y <= 0x70) {
                func_ov110_02294e78(s, 1);
            }
        }
    }
}

void func_ov110_02296c8c(S *s) {
    func_ov094_02292ae0(s->unk_bc0);
}

void func_ov110_02296c9c(S *s) {
    s32 h = data_021f482c;
    func_02002654(data_ov110_022977d8, h, 4);
    func_0200261c(data_ov110_022977fc, h, 4, 0x1b9, 0x1b9, 0x238);
    s32 v = func_0206ed50();
    u8 *a = NULL;
    u8 *b = NULL;
    switch (v) {
    case 0x1d:
        a = data_ov110_0229781c;
        b = data_ov110_02297834;
        break;
    case 0x1e:
        a = data_ov110_0229784c;
        b = data_ov110_02297864;
        break;
    case 0x1f:
        a = data_ov110_0229787c;
        b = data_ov110_02297894;
        break;
    case 0x20:
        a = data_ov110_022978ac;
        b = data_ov110_022978c4;
        break;
    }
    if (a != NULL) {
        func_020026c4(a, h, 4, 3, 3, 5);
    }
    if (b != NULL) {
        func_0200261c(b, h, 4, 0x208, 0x208, 0x238);
    }
    func_ov110_02294fb8(s, 0);
}

void func_ov110_02296d70(S *s) {
    func_ov094_02292d1c(s->unk_bc0, 0);
}

void func_ov110_02296d84() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void func_ov110_02296db8(S *s) {
    func_ov002_02201b58(s->unk_22dc);
    func_ov094_02292aa4(s->unk_bc0);
    if (func_ov002_0220071c(s->unk_21a0)) {
        func_ov110_02295968(s);
    }
}

void func_ov110_02296df0(S *s) {
    func_ov110_022960b0(s);
    func_ov094_02292acc(s->unk_bc0);
    func_ov094_022939a0(s->unk_138);
    func_ov094_0229462c(s->unk_b98);
    func_ov110_02295034(s);
}

void func_ov110_02296e28(S *s) {
    func_ov110_02296db8(s);
}

void func_ov110_02296e30(S *s) {
    func_ov110_02296df0(s);
    s->unk_2278.vfunc_0c();
}

void func_ov110_02296e4c(S *s) {
    func_ov110_022960b0(s);
    func_ov094_02292a80(s->unk_bc0);
    func_ov094_02293998(s->unk_138);
    func_ov002_02201b04(s->unk_22dc);
    func_ov110_02295034(s);
}

void func_ov110_02296e84(S *s) {
    s32 i;
    s->unk_94 = 0;
    func_ov094_022939c0(s->unk_138, 1);
    func_ov094_02294644(s->unk_b98, 2);
    func_ov094_02292d30(s->unk_bc0, 6);
    s->unk_f3 = 0x1f;
    func_ov002_022027a4(s->unk_2260);
    s->unk_f1 = 0;
    s->unk_f5 = 0;
    func_ov002_02202310(s->unk_22dc, 3, 1, 0);
    s->unk_fb = 0;
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        for (i = 0; i < 15; i++) {
            s->unk_b0[i] = 0xfff1;
        }
        func_ov110_02294d78(s, 0x200);
        break;
    case 0x1f:
        func_02116048(data_021ed210, s->unk_b0, 0x1e);
        break;
    case 0x20:
        func_02116048(data_021ed22e, s->unk_b0, 0x1e);
        break;
    }
    func_02116048(s->unk_b0, s->unk_ce, 0x1e);
    func_0206ec04();
}

void func_ov110_02296f70(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(6);
        func_ov002_02200a60(s, 5);
        func_ov110_02294d68(s, 1);
        func_ov110_02294d68(s, 2);
    } else {
        func_ov002_02200840(s, 6, 0, 0);
    }
    s->unk_98 = func_ov002_02200920(s);
}

void func_ov110_02296fbc(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(4);
        func_ov110_02294d68(s, 0x80);
        func_ov002_022008c4(s, 8, 0, 0, 0x30);
        func_ov002_02200840(s, 6, 0, 0);
        func_ov002_02200a50(s, 6);
        func_ov110_02296f70(s);
    } else {
        func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = func_ov002_02200920(s);
    }
}

void func_ov110_02297024(S *s) {
    if (func_ov110_02294d9c(s)) {
        func_ov002_022006e4(s->unk_21a0, 1);
        func_ov110_022956a0(s);
        func_ov092_02291ce4(func_020ed174(s), 0x44, 1);
        func_ov002_022008c4(s, 2, 4, 1, 0x30);
        func_ov002_02200850(s, 0x80);
        func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = func_ov002_02200920(s);
        func_ov002_02200a50(s, 5);
    }
}

void func_ov110_02297094(S *s) {
    if (func_ov002_02200908(s, 0)) {
        func_ov002_02200a60(s, 2);
        func_ov110_02296300(s);
    }
    func_ov002_02200840(s, 4, 0, 0);
    s->unk_9c = func_ov002_02200920(s);
}

void func_ov110_022970cc(S *s) {
    s32 v = func_ov002_02200908(s, 0);
    func_ov002_02200840(s, 6, 0, 0);
    s->unk_98 = func_ov002_02200920(s);
    if (v) {
        func_ov110_02296c9c(s);
        func_ov002_022008e0(s, 2, 0, 1, 0x30);
        func_ov002_02200850(s, 0x80);
        func_ov110_02294d78(s, 0x80);
        func_020020b8(4);
        func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = func_ov002_02200920(s);
        func_ov002_02200a50(s, 3);
    }
}

void func_ov110_0229714c(S *s) {
    func_ov110_02296c8c(s);
    func_ov094_022937a0(s->unk_138);
    func_ov094_02293764(s->unk_138, s->unk_b0);
    func_ov110_02295c3c(s);
    func_ov094_02293d2c(s->unk_b98);
    func_ov094_022941f8(s->unk_b98, 0xf);
    func_ov002_022008e0(s, 8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(s, 6, 0, 0);
    func_ov002_02200a50(s, 2);
    func_ov110_02294d78(s, 1);
    func_ov110_02294d78(s, 2);
    s->unk_98 = func_ov002_02200920(s);
}
}

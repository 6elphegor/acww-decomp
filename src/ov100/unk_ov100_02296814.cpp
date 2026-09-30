#include "types.h"

class Unk_ov100_02296e70_Vt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov100_02296814 {
    /* 0x0000 */ u8 pad_00[0xcc];
    /* 0x00cc */ u8 unk_cc[0xa60];
    /* 0x0b2c */ u8 unk_b2c[0x28];
    /* 0x0b54 */ u8 unk_b54[0x15e0];
    /* 0x2134 */ u8 unk_2134[0xc0];
    /* 0x21f4 */ u8 unk_21f4[0x18];
    /* 0x220c */ Unk_ov100_02296e70_Vt unk_220c;
    /* 0x2210 */ u8 pad_2210[0x60];
    /* 0x2270 */ u8 unk_2270[0x2f9];
    /* 0x2569 */ u8 unk_2569[0x18f];
    /* 0x26f8 */ s32 unk_26f8;
    /* 0x26fc */ s32 unk_26fc;
    /* 0x2700 */ s32 unk_2700;
    /* 0x2704 */ u8 pad_2704[8];
    /* 0x270c */ s32 unk_270c;
    /* 0x2710 */ s32 unk_2710;
    /* 0x2714 */ u16 unk_2714[15];
    /* 0x2732 */ u16 unk_2732[15];
    /* 0x2750 */ u8 pad_2750[5];
    /* 0x2755 */ u8 unk_2755;
    /* 0x2756 */ u8 unk_2756;
    /* 0x2757 */ u8 unk_2757;
    /* 0x2758 */ u8 unk_2758;
    /* 0x2759 */ u8 unk_2759;
    /* 0x275a */ u8 pad_275a[3];
    /* 0x275d */ u8 unk_275d;
    /* 0x275e */ u8 pad_275e;
    /* 0x275f */ u8 unk_275f;
};

typedef Unk_ov100_02296814 S;

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern s32 data_021f482c;
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u8 data_ov100_022977d8[];
extern u8 data_ov100_022977fc[];
extern u8 data_ov100_0229781c[];
extern u8 data_ov100_02297834[];
extern u8 data_ov100_0229784c[];
extern u8 data_ov100_02297864[];
extern u8 data_ov100_0229787c[];
extern u8 data_ov100_02297894[];
extern u8 data_ov100_022978ac[];
extern u8 data_ov100_022978c4[];

void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
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
void func_ov094_02292398(s32 a);

void func_ov100_02294d60(S *s, s32 a);
void func_ov100_02294d70(S *s, s32 a);
s32 func_ov100_02294d80(S *s, s32 a);
s32 func_ov100_02294d98(S *s);
void func_ov100_02294e80(S *s);
void func_ov100_02294fac(S *s);
void func_ov100_02294fe8(S *s, s32 a);
void func_ov100_0229502c(S *s, s32 a);
void func_ov100_022950a0(S *s);
s32 func_ov100_022950cc(S *s, s32 a, s32 b);
void func_ov100_02295400(S *s);
void func_ov100_02295454(S *s, s32 a);
void func_ov100_022954a0(S *s, s32 a);
void func_ov100_022954dc(S *s);
void func_ov100_0229551c(S *s);
void func_ov100_02295694(S *s);
void func_ov100_022956fc(S *s);
void func_ov100_022958e4(S *s);
void func_ov100_02295918(S *s);
void func_ov100_0229598c(S *s);
void func_ov100_022959f0(S *s);
s32 func_ov100_02295a90(S *s);
void func_ov100_02295ad4(S *s, s32 a);
void func_ov100_02295b0c(S *s);
u32 func_ov100_02295bd8(S *s, s32 a);
s32 func_ov100_02295c18(S *s, s32 a);
s32 func_ov100_02295c54(S *s, s32 a);
s32 func_ov100_02295fb4(S *s, s32 a);
s32 func_ov100_02296010(S *s, s32 a, s32 b, s32 c);
s32 func_ov100_022960cc(S *s, s32 a);
s32 func_ov100_022960e0(S *s, s32 a);
s32 func_ov100_022960f0(S *s, s32 a);
void func_ov100_022960fc(S *s);
s32 func_ov100_02296108(S *s);
s32 func_ov100_0229613c(S *s);
void func_ov100_0229615c(S *s, s32 a, s32 b);
void func_ov100_02296198(S *s, s32 a, s32 b);
void func_ov100_02296298(S *s, s32 a);
void func_ov100_022962e4(S *s, s32 a);
void func_ov100_02296370(S *s);
void func_ov100_02296390(S *s);
void func_ov100_022963cc(S *s);

static inline BOOL Unk_ov100_02296b58_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov100_02296814(S *s) {
    s32 v = func_ov002_022009c8(s);
    if (func_ov100_022950cc(s, v, 1)) {
        func_ov100_0229598c(s);
        func_ov100_02295694(s);
        func_ov002_022006e4(s->unk_2134, 0);
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
                if (!func_ov100_02295c54(s, s->unk_2759)) {
                    if (func_ov100_02295c18(s, s->unk_2759)) {
                        func_ov100_022954a0(s, s->unk_2759);
                    } else {
                        func_ov100_02295454(s, s->unk_2759);
                    }
                }
            }
        } else if (k & 2) {
            func_ov100_022954a0(s, s->unk_2758);
        } else {
            func_ov100_022958e4(s);
            func_ov002_022006c0(s->unk_2134);
        }
    }
}

void func_ov100_022968d8(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov100_022963cc(s);
        func_ov002_022006e4(s->unk_2134, 1);
    } else {
        s32 v = func_ov002_022009c8(s);
        if (func_ov100_022950cc(s, v, 0)) {
            func_ov100_0229598c(s);
            func_ov100_02295694(s);
            func_ov002_022006e4(s->unk_2134, 0);
        } else {
            if (func_ov100_02295c54(s, s->unk_2759)) goto tail;
            {
                u32 k = data_021f47d8[1];
                if (k & 1) {
                    if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
                        if (!func_ov100_02295c18(s, s->unk_2759)) {
                            func_ov100_022954dc(s);
                        }
                    } else if (func_ov100_022960cc(s, s->unk_2759)) {
                        func_ov100_0229551c(s);
                    }
                } else if (k & 0x800) {
                    if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
                        if (!func_ov100_02295c18(s, s->unk_2759)) {
                            s32 r = func_ov100_022960f0(s, s->unk_2759) ? func_ov100_02296108(s) : func_ov100_0229613c(s);
                            if (r != 0x20) {
                                func_ov100_0229615c(s, s->unk_2759, r);
                                func_ov002_022006e4(s->unk_2134, 1);
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
                if (k & 2) {
                    func_ov100_022956fc(s);
                    func_ov100_02294fac(s);
                    func_ov002_022006e4(s->unk_2134, 0);
                } else if (k & 8) {
                    func_ov100_022956fc(s);
                    func_ov100_02294e80(s);
                    func_ov002_022006e4(s->unk_2134, 0);
                } else {
                    func_ov002_022006c0(s->unk_2134);
                }
            }
        }
    }
}

void func_ov100_02296a58(S *s) {
    func_ov100_02295918(s);
    func_ov100_02295b0c(s);
    s32 x = s->unk_2710 + 8;
    s32 t = func_ov100_02296010(s, s->unk_270c + 8, x, 0);
    if (func_ov100_02294d80(s, 0x200)) {
        if ((func_ov100_022960e0(s, t) && func_ov100_022960f0(s, s->unk_2758))
            || (func_ov100_022960f0(s, t) && func_ov100_022960e0(s, s->unk_2758))) {
            if (func_ov100_02295bd8(s, t) != 0xfff1) {
                t = 0x20;
            }
        }
    }
    if (t != 0x20) {
        if (data_021f4770 == 0) {
            if (func_ov100_02295c54(s, t)) {
                func_ov100_02296198(s, s->unk_2758, x);
            } else {
                s32 r = func_ov100_02295fb4(s, t);
                if (r == 0) {
                    func_ov100_02296198(s, s->unk_2758, x);
                } else {
                    func_ov094_02292398(r);
                    func_ov100_02296370(s);
                }
            }
        } else {
            func_ov100_02295ad4(s, t);
        }
    } else if (data_021f4770 == 0) {
        func_ov100_02296198(s, s->unk_2758, x);
    }
}

void func_ov100_02296b58(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov100_02295400(s);
    } else {
        if (Unk_ov100_02296b58_Both()) {
            s32 t = func_ov002_022014c0(s->unk_2270, data_021ef5f0, data_021ef5ec);
            if (t >= 0) {
                func_ov002_02201aa0(s->unk_2270, t, 1);
                s->unk_275d = s->unk_2569[t];
                func_ov002_02200a58(s, 0x12);
            }
        }
    }
}

void func_ov100_02296be4(S *s) {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 0);
        func_ov002_022006a4(s->unk_2134, 0x3c);
    } else if (func_ov100_02294d80(s, 4) && func_ov100_02295a90(s)) {
        func_ov100_02296298(s, s->unk_2756);
    } else {
        func_ov002_022006c0(s->unk_2134);
    }
}

void func_ov100_02296c3c(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov100_02296390(s);
    } else {
        if (Unk_ov100_02296b58_Both()) {
            s32 x = data_021ef5f0;
            s32 y = data_021ef5ec;
            s32 r = func_ov100_02296010(s, x, y, 1);
            if (r != 0x20) {
                func_ov100_022962e4(s, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x50 && y <= 0x70) {
                if (y >= 0x60) {
                    func_ov100_02294fac(s);
                } else {
                    func_ov100_02294e80(s);
                }
            }
        }
    }
}

void func_ov100_02296cc8(S *s) {
    func_ov094_02292ae0(s->unk_b54);
}

void func_ov100_02296cd8(S *s) {
    s32 h = data_021f482c;
    func_02002654(data_ov100_022977d8, h, 4);
    func_0200261c(data_ov100_022977fc, h, 4, 0x1b9, 0x1b9, 0x238);
    s32 v = func_0206ed50();
    u8 *a = NULL;
    u8 *b = NULL;
    switch (v) {
    case 0x1d:
        a = data_ov100_0229781c;
        b = data_ov100_02297834;
        break;
    case 0x1e:
        a = data_ov100_0229784c;
        b = data_ov100_02297864;
        break;
    case 0x1f:
        a = data_ov100_0229787c;
        b = data_ov100_02297894;
        break;
    case 0x20:
        a = data_ov100_022978ac;
        b = data_ov100_022978c4;
        break;
    }
    if (a != NULL) {
        func_020026c4(a, h, 4, 3, 3, 5);
    }
    if (b != NULL) {
        func_0200261c(b, h, 4, 0x208, 0x208, 0x238);
    }
    func_ov100_0229502c(s, 0);
    func_ov100_02294fe8(s, 0);
}

void func_ov100_02296db4(S *s) {
    func_ov094_02292d1c(s->unk_b54, 0);
}

void func_ov100_02296dc8() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void func_ov100_02296dfc(S *s) {
    func_ov002_02201b58(s->unk_2270);
    func_ov094_02292aa4(s->unk_b54);
    if (func_ov002_0220071c(s->unk_2134)) {
        func_ov100_022959f0(s);
    }
}

void func_ov100_02296e34(S *s) {
    func_ov100_022960fc(s);
    func_ov094_02292acc(s->unk_b54);
    func_ov094_022939a0(s->unk_cc);
    func_ov094_0229462c(s->unk_b2c);
    func_ov100_022950a0(s);
}

void func_ov100_02296e68(S *s) {
    func_ov100_02296dfc(s);
}

void func_ov100_02296e70(S *s) {
    func_ov100_02296e34(s);
    s->unk_220c.vfunc_0c();
}

void func_ov100_02296e8c(S *s) {
    func_ov100_022960fc(s);
    func_ov094_02292a80(s->unk_b54);
    func_ov094_02293998(s->unk_cc);
    func_ov002_02201b04(s->unk_2270);
    func_ov100_022950a0(s);
}

void func_ov100_02296ec0(S *s) {
    s32 i;
    s->unk_26f8 = 0;
    func_ov094_022939c0(s->unk_cc, 1);
    func_ov094_02294644(s->unk_b2c, 2);
    func_ov094_02292d30(s->unk_b54, 6);
    s->unk_2757 = 0x20;
    func_ov002_022027a4(s->unk_21f4);
    s->unk_2755 = 0;
    s->unk_2759 = 0;
    func_ov002_02202310(s->unk_2270, 3, 1, 0);
    s->unk_275f = 0;
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        for (i = 0; i < 15; i++) {
            s->unk_2714[i] = 0xfff1;
        }
        func_ov100_02294d70(s, 0x200);
        break;
    case 0x1f:
        func_02116048(data_021ed210, s->unk_2714, 0x1e);
        break;
    case 0x20:
        func_02116048(data_021ed22e, s->unk_2714, 0x1e);
        break;
    }
    func_02116048(s->unk_2714, s->unk_2732, 0x1e);
    func_0206ec04();
}

void func_ov100_02296fbc(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(6);
        func_ov002_02200a60(s, 5);
        func_ov100_02294d60(s, 1);
        func_ov100_02294d60(s, 2);
    } else {
        func_ov002_02200840(s, 6, 0, 0);
    }
    s->unk_26fc = func_ov002_02200920(s);
}

void func_ov100_0229700c(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(4);
        func_ov100_02294d60(s, 0x80);
        func_ov002_022008c4(s, 8, 0, 0, 0x30);
        func_ov002_02200840(s, 6, 0, 0);
        func_ov002_02200a50(s, 6);
        func_ov100_02296fbc(s);
    } else {
        func_ov002_02200840(s, 4, 0, 0);
        s->unk_2700 = func_ov002_02200920(s);
    }
}

void func_ov100_02297078(S *s) {
    if (func_ov100_02294d98(s)) {
        func_ov002_022006e4(s->unk_2134, 1);
        func_ov100_022956fc(s);
        func_ov092_02291ce4(func_020ed174(s), 0x44, 1);
        func_ov002_022008c4(s, 2, 4, 1, 0x30);
        func_ov002_02200850(s, 0x80);
        func_ov002_02200840(s, 4, 0, 0);
        s->unk_2700 = func_ov002_02200920(s);
        func_ov002_02200a50(s, 5);
    }
}

void func_ov100_022970ec(S *s) {
    if (func_ov002_02200908(s, 0)) {
        func_ov002_02200a60(s, 2);
        func_ov100_02296370(s);
    }
    func_ov002_02200840(s, 4, 0, 0);
    s->unk_2700 = func_ov002_02200920(s);
}
}

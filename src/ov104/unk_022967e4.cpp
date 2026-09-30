#include "types.h"

struct Unk_ov104_022967e4 {
    /* 0x0000 */ u8 pad_00[0xa8];
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ u8 pad_b0[4];
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 pad_b5[2];
    /* 0x00b7 */ u8 unk_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 pad_b9;
    /* 0x00ba */ u8 unk_ba;
    /* 0x00bb */ u8 unk_bb;
    /* 0x00bc */ u8 unk_bc;
    /* 0x00bd */ u8 unk_bd;
    /* 0x00be */ u8 pad_be[0xd40 - 0xbe];
    /* 0x0d40 */ u8 unk_d40[0x1608];
    /* 0x2348 */ u8 unk_2348[0xc0];
    /* 0x2408 */ u8 unk_2408[0x18];
    /* 0x2420 */ u8 unk_2420[0x64];
    /* 0x2484 */ u8 unk_2484[0x2f9];
    /* 0x277d */ u8 unk_277d[7];
    /* 0x2784 */ u8 unk_2784[0x318];
    /* 0x2a9c */ u8 unk_2a9c[0x1380];
    /* 0x3e1c */ u8 unk_3e1c[4];
};

typedef Unk_ov104_022967e4 S;

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

s32 func_0208d534(void *a);
s32 func_0208d4fc(void *a);
void func_0208d644(void *a);
s32 func_0206ef00();
void func_0200402c(s32 a);

s32 func_ov094_02293c1c(void *a);
void func_ov094_02292398();
void func_ov094_02292380();

s32 func_ov002_0220308c(void *a);
s32 func_ov002_0220306c(void *a);
s32 func_ov002_022030f4(void *a, s32 b);
s32 func_ov002_022030b8(void *a, s32 b);
void func_ov002_02202a40(void *a, s32 b, s32 c);
s32 func_ov002_02203f08(void *a);
s32 func_ov002_02203f78(void *a, s32 b);
s32 func_ov002_02203f28(void *a, s32 b);
s32 func_ov002_02203e24(void *a);
s32 func_ov002_02204234(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a60(void *a, s32 b);
void func_ov002_02200a50(void *a, s32 b);
s32 func_ov002_02200a14(void *a, s32 b);
s32 func_ov002_022017a4(void *a);
s32 func_ov002_022017b4(void *a);
s32 func_ov002_02201a28(void *a);
void func_ov002_02202064(void *a, s32 b);
void func_ov002_022006e4(void *a, s32 b);
void func_ov002_022006c0(void *a);
s32 func_ov002_02202718(void *a);
s32 func_ov002_02202928(void *a);
s32 func_ov002_022028fc(void *a);
s32 func_ov002_022028f0(void *a);
void func_ov002_02201aa0(void *a, s32 b, s32 c);
s32 func_ov002_022009d4(void *a);
s32 func_ov002_022009c8(void *a);
s32 func_ov002_022019d0(void *a, s32 b, void *c, u32 d);
void func_ov002_02202b68(void *a);
void func_ov002_02202d00(void *a, s32 b);
s32 func_ov002_022014c0(void *a, s32 b, s32 c);

void func_ov104_02294dfc(S *s, s32 a);
void func_ov104_02294e0c(S *s, s32 a);
u32 func_ov104_02294e1c(S *s, s32 a);
void func_ov104_02295490(S *s);
void func_ov104_022954d8(S *s);
void func_ov104_0229567c(S *s);
s32 func_ov104_022956c4(S *s, s32 a, s32 b);
void func_ov104_02295a78(S *s);
void func_ov104_02295b20(S *s);
void func_ov104_02295b68(S *s, s32 a);
void func_ov104_02295bb0(S *s, s32 a);
void func_ov104_02295c0c(S *s);
void func_ov104_02295c2c(S *s);
void func_ov104_02295c4c(S *s);
void func_ov104_02295c80(S *s);
void func_ov104_02295ce4(S *s);
void func_ov104_02295d48(S *s);
void func_ov104_02295d98(S *s);
void func_ov104_02295e0c(S *s);
void func_ov104_02295edc(S *s, s32 a);
void func_ov104_02295f18(S *s, s32 a);
void func_ov104_02295f94(S *s);
void func_ov104_02295fbc(S *s);
void func_ov104_02295fe8(S *s);
void func_ov104_02296054(S *s);
void func_ov104_0229617c(S *s, s32 a);
void func_ov104_022961b8(S *s);
void func_ov104_022961dc(S *s, s32 a);
void func_ov104_0229622c(S *s);
s32 func_ov104_02296250(S *s, s32 a);
s32 func_ov104_02296290(S *s, s32 a);
s32 func_ov104_02296408(S *s, s32 a);
s32 func_ov104_02296450(S *s, s32 a, s32 b, s32 c);
s32 func_ov104_022964f0(S *s, s32 a);
s32 func_ov104_02296504(S *s, s32 a);
s32 func_ov104_02296514(S *s, s32 a);
s32 func_ov104_02296534(S *s);
s32 func_ov104_02296568(S *s);
void func_ov104_02296588(S *s, s32 a, s32 b);
void func_ov104_022959a8(S *s, s32 a, s32 b);
void func_ov104_022965c0(S *s, s32 a, s32 b);
void func_ov104_02296604(S *s, s32 a, s32 b);
void func_ov104_02296668(S *s, s32 a);
void func_ov104_02296790(S *s);
void func_ov104_02297af4(S *s);

static inline BOOL Unk_ov104_02296fdc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov104_022967e4(S *s) {
    func_ov104_02295e0c(s);
    func_ov104_0229622c(s);
    func_ov002_02200a58(s, 0);
}

void func_ov104_02296800(S *s) {
    if (func_ov094_02293c1c(s->unk_d40)) {
        s->unk_b4 = 0;
        func_ov104_02296790(s);
    }
}

void func_ov104_02296828(S *s) {
    if (func_ov002_0220308c(s->unk_3e1c)) {
        if (func_0208d534(s->unk_2420)) {
            s32 a = func_ov002_0220306c(s->unk_3e1c);
            s32 b = func_ov002_022030f4(s->unk_3e1c, -1);
            s32 c = func_ov002_022030b8(s->unk_3e1c, -1);
            func_ov002_02202a40(s->unk_2420, a + b, a + c);
        }
    } else {
        func_ov104_02295e0c(s);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov104_02296894(S *s) {
    if (func_ov002_02203f08(s->unk_2a9c)) {
        if (func_0208d534(s->unk_2420)) {
            s32 a = func_ov002_02203f78(s->unk_2a9c, 1);
            s32 b = func_ov002_02203f28(s->unk_2a9c, 1);
            func_ov002_02202a40(s->unk_2420, a, b);
        }
    } else {
        func_ov104_02295e0c(s);
        func_ov002_02200a50(s, 9);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov104_022968fc(S *s) {
    if (func_ov002_02204234(s->unk_2784, 0)) {
        func_ov002_02200a58(s, s->unk_bb);
        func_0208d644(s->unk_2420);
    }
}

void func_ov104_02296930(S *s) {
    if (func_ov002_022017a4(s->unk_2484)) {
        func_ov104_02295b20(s);
    }
}

void func_ov104_02296950(S *s) {
    if (func_ov002_02201a28(s->unk_2484)) {
        func_ov002_02202064(s->unk_2484, 0);
        func_ov002_022006e4(s->unk_2348, 1);
        if (func_0208d534(s->unk_2420)) {
            func_ov104_02295c4c(s);
        }
        func_ov002_02200a58(s, 0x18);
    }
}

void func_ov104_022969a0(S *s) {
    if (func_ov002_022017b4(s->unk_2484)) {
        if (func_0206ef00()) {
            func_ov104_02295c80(s);
            func_ov002_02200a58(s, 0xb);
        } else {
            func_ov002_02200a58(s, 6);
        }
    }
}

void func_ov104_022969dc(S *s) {
    if (func_ov002_02202718(s->unk_2408)) {
        func_ov104_02295f18(s, s->unk_b7);
        func_ov104_02296790(s);
        func_ov094_02292398();
    } else {
        func_ov104_02295f94(s);
    }
}

void func_ov104_02296a14(S *s) {
    if (func_0208d4fc(s->unk_2420)) {
        func_ov002_02200a58(s, s->unk_bb);
    }
    if (func_ov002_02202928(s->unk_2420)) {
        if (func_ov104_02294e1c(s, 0x40)) {
            func_ov104_02294dfc(s, 0x40);
            func_ov094_02292380();
        }
        func_ov104_02295fbc(s);
    }
}

void func_ov104_02296a64(S *s) {
    if (func_ov002_022028fc(s->unk_2420) == 0) {
        func_ov104_02295edc(s, s->unk_ba);
        func_ov104_02294e0c(s, 0x40);
        func_ov002_02200a58(s, 0x14);
        func_ov104_02296054(s);
    } else {
        func_ov002_02200a58(s, 7);
    }
}

void func_ov104_02296aac(S *s) {
    if (func_ov002_02202928(s->unk_2420) == 0) {
        u32 a = s->unk_ba;
        if (s->unk_b8 == a) {
            func_ov104_02296408(s, a);
            func_ov104_02296054(s);
            func_ov002_02200a58(s, 7);
            func_ov094_02292398();
        } else {
            func_ov104_02296604(s, a, 4);
        }
    } else {
        func_ov104_02295fbc(s);
    }
}

void func_ov104_02296b00(S *s) {
    if (func_0208d4fc(s->unk_2420)) {
        func_ov002_02200a58(s, s->unk_bb);
    }
    func_ov104_02295fbc(s);
}

void func_ov104_02296b2c(S *s) {
    if (func_ov002_02202928(s->unk_2420)) {
        func_ov104_02296668(s, s->unk_b8);
        func_ov002_02200a58(s, 0x11);
    }
}

void func_ov104_02296b5c(S *s) {
    if (func_0208d4fc(s->unk_2420)) {
        func_ov104_02295c2c(s);
        func_ov002_02200a58(s, 7);
    }
}

void func_ov104_02296b84(S *s) {
    if (func_0208d4fc(s->unk_2420)) {
        if (s->unk_b8 == 0x1f) {
            func_ov104_022954d8(s);
        } else {
            func_ov104_02295490(s);
        }
    }
}

void func_ov104_02296bb8(S *s) {
    if (func_ov002_022028f0(s->unk_2420) == 0) {
        func_ov002_02200a58(s, s->unk_bb);
        if (s->unk_bb == 7) {
            func_ov104_022961dc(s, s->unk_b8);
        }
        func_ov104_02297af4(s);
    }
    func_ov104_02295fbc(s);
}

void func_ov104_02296c00(S *s) {
    if (func_0208d4fc(s->unk_2420)) {
        u32 r;
        s->unk_bc = s->unk_277d[s->unk_bd];
        r = 1;
        if (s->unk_bc == 2) {
            r = 0;
            func_0200402c(0x24);
        }
        func_ov002_02201aa0(s->unk_2484, s->unk_bd, r);
        func_ov002_02200a58(s, 0x17);
    }
}

void func_ov104_02296c64(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov104_02295a78(s);
    } else {
        s32 v = func_ov002_022009c8(s);
        u8 f = (u8)func_ov104_02294e1c(s, 0x8000);
        if (func_ov002_022019d0(s->unk_2484, v, &s->unk_bd, f)) {
            func_ov104_02295d48(s);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov002_02202b68(s->unk_2420);
                func_ov002_02200a58(s, 0xc);
            } else if (k & 2) {
                func_ov104_02295ce4(s);
            }
        }
    }
}

void func_ov104_02296cf0(S *s) {
    if (func_0208d4fc(s->unk_2420)) {
        func_ov104_0229567c(s);
    }
}

void func_ov104_02296d10(S *s) {
    if (func_0208d534(s->unk_2420) == 0) {
        s32 a = func_ov002_02203f78(s->unk_2a9c, 1);
        s32 b = func_ov002_02203f28(s->unk_2a9c, 1);
        func_ov002_02202a40(s->unk_2420, a, b);
        func_ov002_02202d00(s->unk_2420, 1);
    }
    if (func_ov002_022009d4(s)) {
        func_ov104_02295e0c(s);
        func_ov002_02200a58(s, 5);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) || (k & 2)) {
            func_ov002_02202b68(s->unk_2420);
            func_ov002_02200a58(s, 10);
        }
    }
}

void func_ov104_02296da4(S *s) {
    if (func_ov104_022956c4(s, func_ov002_022009c8(s), 1)) {
        func_ov104_02296054(s);
        func_ov104_02295d98(s);
        func_ov002_022006e4(s->unk_2348, 0);
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            if (func_ov104_02296290(s, s->unk_b8) == 0) {
                if (func_ov104_02296250(s, s->unk_b8)) {
                    func_ov104_02295bb0(s, s->unk_b8);
                } else {
                    func_ov104_02295b68(s, s->unk_b8);
                }
            }
        } else if (k & 2) {
            func_ov104_02295bb0(s, s->unk_b7);
        } else {
            func_ov104_02295fbc(s);
            func_ov002_022006c0(s->unk_2348);
        }
    }
}

void func_ov104_02296e48(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov104_022967e4(s);
        func_ov002_022006e4(s->unk_2348, 1);
    } else {
        s32 v = func_ov002_022009c8(s);
        if (func_ov104_022956c4(s, v, 0)) {
            func_ov104_02296054(s);
            func_ov104_02295d98(s);
            func_ov002_022006e4(s->unk_2348, 0);
        } else {
            if (func_ov104_02296290(s, s->unk_b8) != 0) goto tail;
            {
                u32 k = data_021f47d8[1];
                if (k & 1) {
                    if (func_ov104_02296514(s, s->unk_b8) || func_ov104_02296504(s, s->unk_b8)) {
                        if (func_ov104_02296250(s, s->unk_b8) == 0) {
                            func_ov104_022959a8(s, s->unk_b8, 0);
                        }
                    } else if (func_ov104_022964f0(s, s->unk_b8)) {
                        func_ov104_02295c0c(s);
                    }
                } else if (k & 0x800) {
                    if (func_ov104_02296514(s, s->unk_b8) || func_ov104_02296504(s, s->unk_b8)) {
                        if (func_ov104_02296250(s, s->unk_b8) == 0) {
                            s32 r = func_ov104_02296514(s, s->unk_b8) ? func_ov104_02296534(s) : func_ov104_02296568(s);
                            if (r != 0x21) {
                                func_ov104_02296588(s, s->unk_b8, r);
                                func_ov002_022006e4(s->unk_2348, 1);
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
                    func_ov104_02295e0c(s);
                    func_ov104_02295490(s);
                    func_ov002_022006e4(s->unk_2348, 0);
                } else if (k & 8) {
                    func_ov104_02295e0c(s);
                    func_ov104_022954d8(s);
                    func_ov002_022006e4(s->unk_2348, 0);
                } else {
                    func_ov002_022006c0(s->unk_2348);
                }
            }
        }
    }
}

void func_ov104_02296fdc(S *s) {
    if (func_ov002_022017b4(s->unk_2484)) {
        if (func_ov002_02200a14(s, 1)) {
            func_ov104_02295a78(s);
        } else {
            if (Unk_ov104_02296fdc_Both()) {
                s32 t = func_ov002_022014c0(s->unk_2484, data_021ef5f0, data_021ef5ec);
                if (t >= 0) {
                    if (func_ov104_02294e1c(s, 0x8000) == 0 || t != 0) {
                        u32 r;
                        s->unk_bc = s->unk_277d[t];
                        r = 1;
                        if (s->unk_bc == 2) {
                            r = 0;
                            func_0200402c(0x24);
                        }
                        func_ov002_02201aa0(s->unk_2484, t, r);
                        func_ov002_02200a58(s, 0x17);
                    }
                }
            }
        }
    }
}

void func_ov104_02297098(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov002_02200a58(s, 9);
    } else {
        if (func_ov002_02203e24(s->unk_2a9c)) {
            func_ov104_0229567c(s);
        }
    }
}

void func_ov104_022970cc(S *s) {
    s32 p, t;
    func_ov104_02295fe8(s);
    func_ov104_022961b8(s);
    p = s->unk_a8 + 8;
    t = func_ov104_02296450(s, p, s->unk_ac + 0x18, 0);
    if ((func_ov104_02296514(s, t) && func_ov104_02296504(s, s->unk_b7))
        || (func_ov104_02296504(s, t) && func_ov104_02296514(s, s->unk_b7))) {
        if (func_ov104_02296250(s, t) == 0) {
            t = 0x21;
        }
    }
    if (t != 0x21) {
        if (data_021f4770 == 0) {
            if (func_ov104_02296290(s, t) != 0 || func_ov104_02296408(s, t) == 0) {
                func_ov104_022965c0(s, s->unk_b7, p);
            } else {
                func_ov094_02292398();
                func_ov104_02296790(s);
            }
        } else {
            func_ov104_0229617c(s, t);
        }
    } else if (data_021f4770 == 0) {
        func_ov104_022965c0(s, s->unk_b7, p);
    }
}
}

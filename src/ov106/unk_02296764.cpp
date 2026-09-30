#include "types.h"

struct Unk_ov106_02296764 {
    /* 0x0000 */ u8 pad_00[0xa0];
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ u8 pad_a4[4];
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 pad_b5[2];
    /* 0x00b7 */ u8 unk_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 pad_b9;
    /* 0x00ba */ u8 unk_ba;
    /* 0x00bb */ u8 unk_bb;
    /* 0x00bc */ u8 unk_bc;
    /* 0x00bd */ u8 unk_bd;
    /* 0x00be */ u8 pad_be[0x2160 - 0xbe];
    /* 0x2160 */ u8 unk_2160[0xc0];
    /* 0x2220 */ u8 unk_2220[0x18];
    /* 0x2238 */ u8 unk_2238[0x64];
    /* 0x229c */ u8 unk_229c[0x2f9];
    /* 0x2595 */ u8 unk_2595[7];
    /* 0x259c */ u8 unk_259c[0x318];
    /* 0x28b4 */ u8 unk_28b4[0x1380];
    /* 0x3c34 */ u8 unk_3c34[4];
};

typedef Unk_ov106_02296764 S;

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
s32 func_0206e61c();
void func_0200402c(s32 a);

void func_ov094_02292398();
void func_ov094_02292380();

s32 func_ov002_0220418c(void *a);
s32 func_ov002_022008fc(void *a, s32 b);
s32 func_ov002_02200920(void *a);
void func_ov002_02200874(void *a, s32 b, s32 c);
void func_ov002_02203328(void *a);
void func_ov002_02203044(void *a);
void func_ov002_02202a40(void *a, s32 b, s32 c);
s32 func_ov002_02203f08(void *a);
s32 func_ov002_02203f78(void *a, s32 b);
s32 func_ov002_02203f28(void *a, s32 b);
s32 func_ov002_02203e24(void *a);
s32 func_ov002_02204234(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
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

void func_ov106_02294dfc(S *s, s32 a);
void func_ov106_02294e0c(S *s, s32 a);
u32 func_ov106_02294e1c(S *s, s32 a);
void func_ov106_02294e30(S *s);
void func_ov106_02294ed0(S *s);
void func_ov106_02294f10(S *s);
s32 func_ov106_02294f58(S *s, s32 a, s32 b);
void func_ov106_02295250(S *s, s32 a, s32 b);
void func_ov106_02295320(S *s);
void func_ov106_022953c8(S *s);
void func_ov106_02295410(S *s, s32 a);
void func_ov106_02295458(S *s, s32 a);
void func_ov106_022954b4(S *s);
void func_ov106_022954d4(S *s);
void func_ov106_022954f4(S *s);
void func_ov106_02295514(S *s);
void func_ov106_02295548(S *s);
void func_ov106_022955ac(S *s);
void func_ov106_02295610(S *s);
void func_ov106_02295694(S *s);
void func_ov106_02295708(S *s);
void func_ov106_022957d8(S *s, s32 a);
void func_ov106_02295818(S *s, s32 a);
void func_ov106_0229589c(S *s);
void func_ov106_022958c4(S *s);
void func_ov106_022958f0(S *s);
void func_ov106_02295960(S *s);
void func_ov106_02295a88(S *s, s32 a);
void func_ov106_02295ac4(S *s);
void func_ov106_02295ae0(S *s, s32 a);
s32 func_ov106_02295b48(S *s, s32 a);
s32 func_ov106_02295b88(S *s, s32 a);
s32 func_ov106_02295d54(S *s, s32 a);
s32 func_ov106_02295d9c(S *s, s32 a, s32 b, s32 c);
s32 func_ov106_02295e3c(S *s, s32 a);
s32 func_ov106_02295e48(S *s, s32 a);
s32 func_ov106_02295e58(S *s, s32 a);
s32 func_ov106_02295f40(S *s);
void func_ov106_02295f60(S *s, s32 a, s32 b);
void func_ov106_02295f98(S *s, s32 a, s32 b);
void func_ov106_02295fcc(S *s, s32 a, s32 b);
void func_ov106_02296030(S *s, s32 a);
void func_ov106_022961f0(S *s);
void func_ov106_02296244(S *s);
void func_ov106_02297a44(S *s);

static inline BOOL Unk_ov106_02296ee4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov106_02296764(S *s) {
    s32 a = func_ov002_0220418c(s->unk_259c);
    a &= func_ov002_022008fc(s, -1);
    s->unk_a0 = func_ov002_02200920(s);
    if (a) {
        func_ov002_02200a58(s, 0x1b);
        func_ov002_02200874(s, 0, 0);
        func_ov002_02203328(s->unk_3c34);
        func_ov002_02203044(s->unk_3c34);
    }
}

void func_ov106_022967c4(S *s) {
    if (func_ov002_02204234(s->unk_259c, 1)) {
        func_ov002_02200a58(s, s->unk_bb);
        func_0208d644(s->unk_2238);
    }
}

void func_ov106_022967f8(S *s) {
    if (func_ov002_022017a4(s->unk_229c)) {
        func_ov106_022953c8(s);
    }
}

void func_ov106_02296818(S *s) {
    if (func_ov002_02201a28(s->unk_229c)) {
        func_ov002_02202064(s->unk_229c, 0);
        func_ov002_022006e4(s->unk_2160, 1);
        if (func_0208d534(s->unk_2238)) {
            func_ov106_02295514(s);
        }
        func_ov002_02200a58(s, 0x18);
    }
}

void func_ov106_02296868(S *s) {
    if (func_ov002_022017b4(s->unk_229c)) {
        if (func_0206ef00()) {
            func_ov106_02295548(s);
            func_ov002_02200a58(s, 0xb);
        } else {
            func_ov002_02200a58(s, 6);
        }
    }
}

void func_ov106_022968a4(S *s) {
    if (func_ov002_02202718(s->unk_2220)) {
        func_ov106_02295818(s, s->unk_b7);
        func_ov106_022961f0(s);
        func_ov094_02292398();
    } else {
        func_ov106_0229589c(s);
    }
}

void func_ov106_022968dc(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        func_ov002_02200a58(s, s->unk_bb);
    }
    if (func_ov002_02202928(s->unk_2238)) {
        if (func_ov106_02294e1c(s, 0x40)) {
            func_ov106_02294dfc(s, 0x40);
            func_ov094_02292380();
        }
        func_ov106_022958c4(s);
    }
}

void func_ov106_0229692c(S *s) {
    if (func_ov002_022028fc(s->unk_2238) == 0) {
        func_ov106_022957d8(s, s->unk_ba);
        func_ov106_02294e0c(s, 0x40);
        func_ov002_02200a58(s, 0x14);
        func_ov106_02295960(s);
    } else {
        func_ov002_02200a58(s, 7);
    }
}

void func_ov106_02296974(S *s) {
    if (func_ov002_02202928(s->unk_2238) == 0) {
        u32 a = s->unk_ba;
        if (s->unk_b8 == a) {
            func_ov106_02295d54(s, a);
            func_ov106_02295960(s);
            func_ov002_02200a58(s, 7);
            func_ov094_02292398();
        } else {
            func_ov106_02295fcc(s, a, 4);
        }
    } else {
        func_ov106_022958c4(s);
    }
}

void func_ov106_022969c8(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        func_ov002_02200a58(s, s->unk_bb);
    }
    func_ov106_022958c4(s);
}

void func_ov106_022969f4(S *s) {
    if (func_ov002_02202928(s->unk_2238)) {
        func_ov106_02296030(s, s->unk_b8);
        func_ov002_02200a58(s, 0x11);
    }
}

void func_ov106_02296a24(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        func_ov106_022954f4(s);
        func_ov002_02200a58(s, 7);
    }
}

void func_ov106_02296a4c(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        if (s->unk_b8 == 0x1f) {
            func_ov106_02294e30(s);
        } else {
            func_ov106_022954b4(s);
        }
    }
}

void func_ov106_02296a80(S *s) {
    if (func_ov002_022028f0(s->unk_2238) == 0) {
        func_ov002_02200a58(s, s->unk_bb);
        if (s->unk_bb == 7) {
            func_ov106_02295ae0(s, s->unk_b8);
        }
        func_ov106_02297a44(s);
    }
    func_ov106_022958c4(s);
}

void func_ov106_02296ac8(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        u32 r;
        s->unk_bc = s->unk_2595[s->unk_bd];
        r = 1;
        if (s->unk_bc == 2) {
            r = 0;
            func_0200402c(0x24);
        }
        func_ov002_02201aa0(s->unk_229c, s->unk_bd, r);
        func_ov002_02200a58(s, 0x17);
    }
}

void func_ov106_02296b2c(S *s) {
    if (func_0206e61c()) {
        func_ov106_02295320(s);
    } else if (func_ov002_022009d4(s)) {
        func_ov106_02295320(s);
    } else {
        s32 v = func_ov002_022009c8(s);
        u8 f = (u8)func_ov106_02294e1c(s, 0x10000);
        if (func_ov002_022019d0(s->unk_229c, v, &s->unk_bd, f)) {
            func_ov106_02295610(s);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov002_02202b68(s->unk_2238);
                func_ov002_02200a58(s, 0xc);
            } else if (k & 2) {
                func_ov106_022955ac(s);
            }
        }
    }
}

void func_ov106_02296bc8(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        func_ov106_02294f10(s);
    }
}

void func_ov106_02296be8(S *s) {
    if (func_0206e61c()) {
        func_ov106_02294ed0(s);
    } else {
        if (func_0208d534(s->unk_2238) == 0) {
            s32 a = func_ov002_02203f78(s->unk_28b4, 1);
            s32 b = func_ov002_02203f28(s->unk_28b4, 1);
            func_ov002_02202a40(s->unk_2238, a, b);
            func_ov002_02202d00(s->unk_2238, 1);
        }
        if (func_ov002_022009d4(s)) {
            func_ov106_02295708(s);
            func_ov002_02200a58(s, 5);
        } else {
            u32 k = data_021f47d8[1];
            if ((k & 1) || (k & 2)) {
                func_ov002_02202b68(s->unk_2238);
                func_ov002_02200a58(s, 10);
            }
        }
    }
}

void func_ov106_02296c8c(S *s) {
    if (func_0206e61c()) {
        func_ov106_02295818(s, s->unk_b7);
        func_ov106_02295708(s);
        func_ov106_02294e30(s);
        func_ov002_022006e4(s->unk_2160, 0);
    } else {
        s32 v = func_ov002_022009c8(s);
        if (func_ov106_02294f58(s, v, 1)) {
            func_ov106_02295960(s);
            func_ov106_02295694(s);
            func_ov002_022006e4(s->unk_2160, 0);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                if (func_ov106_02295e58(s, s->unk_b8)) {
                    if (func_ov106_02295e48(s, s->unk_b7)) {
                        if (func_ov106_02295b48(s, s->unk_b8) == 0) return;
                    }
                }
                if (func_ov106_02295b88(s, s->unk_b8) == 0) {
                    if (func_ov106_02295b48(s, s->unk_b8)) {
                        func_ov106_02295458(s, s->unk_b8);
                    } else {
                        func_ov106_02295410(s, s->unk_b8);
                    }
                }
            } else if (k & 2) {
                func_ov106_02295458(s, s->unk_b7);
            } else {
                func_ov106_022958c4(s);
                func_ov002_022006c0(s->unk_2160);
            }
        }
    }
}

void func_ov106_02296d90(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov106_02296244(s);
        func_ov002_022006e4(s->unk_2160, 1);
    } else {
        s32 v = func_ov002_022009c8(s);
        if (func_ov106_02294f58(s, v, 0)) {
            func_ov106_02295960(s);
            func_ov106_02295694(s);
            func_ov002_022006e4(s->unk_2160, 0);
        } else {
            if (func_ov106_02295b88(s, s->unk_b8) != 0) goto tail;
            {
                u32 k = data_021f47d8[1];
                if (k & 1) {
                    if (func_ov106_02295e58(s, s->unk_b8) || func_ov106_02295e48(s, s->unk_b8)) {
                        if (func_ov106_02295b48(s, s->unk_b8) == 0) {
                            func_ov106_02295250(s, s->unk_b8, 0);
                        }
                    } else if (func_ov106_02295e3c(s, s->unk_b8)) {
                        func_ov106_022954d4(s);
                    }
                } else if (k & 0x800) {
                    if (func_ov106_02295e48(s, s->unk_b8)) {
                        if (func_ov106_02295b48(s, s->unk_b8) == 0) {
                            s32 r = func_ov106_02295f40(s);
                            if (r != 0x20) {
                                func_ov106_02295f60(s, s->unk_b8, r);
                                func_ov002_022006e4(s->unk_2160, 1);
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
                    func_ov106_02295708(s);
                    func_ov106_02294e30(s);
                    func_ov002_022006e4(s->unk_2160, 0);
                } else {
                    func_ov002_022006c0(s->unk_2160);
                }
            }
        }
    }
}

void func_ov106_02296ee4(S *s) {
    if (func_ov002_022017b4(s->unk_229c)) {
        if (func_0206e61c()) {
            func_ov106_02295320(s);
        } else if (func_ov002_02200a14(s, 1)) {
            func_ov106_02295320(s);
        } else {
            if (Unk_ov106_02296ee4_Both()) {
                s32 t = func_ov002_022014c0(s->unk_229c, data_021ef5f0, data_021ef5ec);
                if (t >= 0) {
                    if (func_ov106_02294e1c(s, 0x10000) == 0 || t != 0) {
                        u32 r;
                        s->unk_bc = s->unk_2595[t];
                        r = 1;
                        if (s->unk_bc == 2) {
                            r = 0;
                            func_0200402c(0x24);
                        }
                        func_ov002_02201aa0(s->unk_229c, t, r);
                        func_ov002_02200a58(s, 0x17);
                    }
                }
            }
        }
    }
}

void func_ov106_02296fb0(S *s) {
    if (func_0206e61c()) {
        func_ov106_02294ed0(s);
    } else if (func_ov002_02200a14(s, 1)) {
        func_ov002_02200a58(s, 9);
    } else {
        if (func_ov002_02203e24(s->unk_28b4)) {
            func_ov106_02294f10(s);
        }
    }
}

void func_ov106_02296ff8(S *s) {
    s32 p, t;
    if (func_0206e61c()) {
        func_ov106_02295818(s, s->unk_b7);
        func_ov106_02294e30(s);
        func_ov002_022006e4(s->unk_2160, 0);
    } else {
        func_ov106_022958f0(s);
        func_ov106_02295ac4(s);
        p = s->unk_ac + 8;
        t = func_ov106_02295d9c(s, p, s->unk_b0 + 0x18, 0);
        if (t != 0x20) {
            if (data_021f4770 == 0) {
                if (func_ov106_02295e58(s, s->unk_b7) && func_ov106_02295e48(s, t)) {
                    func_ov106_02295fcc(s, s->unk_b7, 4);
                } else if (func_ov106_02295e48(s, s->unk_b7) && func_ov106_02295e58(s, t)
                           && func_ov106_02295b48(s, t) == 0) {
                    func_ov106_02295fcc(s, s->unk_b7, 4);
                } else if (func_ov106_02295b88(s, t) != 0 || func_ov106_02295d54(s, t) == 0) {
                    func_ov106_02295f98(s, s->unk_b7, p);
                } else {
                    func_ov094_02292398();
                    func_ov106_022961f0(s);
                }
            } else {
                if (func_ov106_02295e58(s, s->unk_b7) && func_ov106_02295e48(s, t)) {
                } else {
                    func_ov106_02295a88(s, t);
                }
            }
        } else if (data_021f4770 == 0) {
            func_ov106_02295f98(s, s->unk_b7, p);
        }
    }
}
}

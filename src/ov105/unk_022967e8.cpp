#include "types.h"

struct Unk_ov105_022967e8 {
    /* 0x0000 */ u8 pad_00[0x29c];
    /* 0x029c */ u8 unk_29c;
    /* 0x029d */ u8 pad_29d[2];
    /* 0x029f */ u8 unk_29f;
    /* 0x02a0 */ u8 unk_2a0;
    /* 0x02a1 */ u8 pad_2a1;
    /* 0x02a2 */ u8 unk_2a2;
    /* 0x02a3 */ u8 pad_2a3;
    /* 0x02a4 */ u8 unk_2a4;
    /* 0x02a5 */ u8 unk_2a5;
    /* 0x02a6 */ u8 unk_2a6;
    /* 0x02a7 */ u8 unk_2a7;
    /* 0x02a8 */ u8 unk_2a8;
    /* 0x02a9 */ u8 pad_2a9[0xd44 - 0x2a9];
    /* 0x0d44 */ u8 unk_d44[0x234c - 0xd44];
    /* 0x234c */ u8 unk_234c[0x240c - 0x234c];
    /* 0x240c */ u8 unk_240c[0x2424 - 0x240c];
    /* 0x2424 */ u8 unk_2424[0x2488 - 0x2424];
    /* 0x2488 */ u8 unk_2488[0x2781 - 0x2488];
    /* 0x2781 */ u8 unk_2781[7];
    /* 0x2788 */ u8 unk_2788[0x2aa0 - 0x2788];
    /* 0x2aa0 */ u8 unk_2aa0[0x728c - 0x2aa0];
    /* 0x728c */ u8 unk_728c[0x10];
};

typedef Unk_ov105_022967e8 S;

extern "C" {
extern u16 data_021f47d8[];

s32 func_0208d534(void *a);
s32 func_0208d4fc(void *a);
void func_0208d644(void *a);
s32 func_0206ef00();
void func_0200402c(s32 a);

s32 func_ov094_02293c1c(void *a);
s32 func_ov094_02292398(...);
void func_ov094_02292380();

s32 func_ov002_0220308c(void *a);
s32 func_ov002_0220306c(void *a);
s32 func_ov002_022030f4(void *a, s32 b);
s32 func_ov002_022030b8(void *a, s32 b);
void func_ov002_02202a40(void *a, s32 b, s32 c);
void func_ov002_02200a60(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a50(void *a, s32 b);
s32 func_ov002_02203f08(void *a);
s32 func_ov002_02203f78(void *a, s32 b);
s32 func_ov002_02203f28(void *a, s32 b);
s32 func_ov002_02204234(void *a, s32 b);
s32 func_ov002_022017a4(void *a);
s32 func_ov002_02201a28(void *a);
void func_ov002_02202064(void *a, s32 b);
void func_ov002_022006e4(void *a, s32 b);
void func_ov002_022006c0(void *a);
s32 func_ov002_022017b4(void *a);
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

void func_ov105_022965cc(S *s);
void func_ov105_02294de8(S *s, s32 a);
u32 func_ov105_02294df8(S *s, s32 a);
void func_ov105_02294dd8(S *s, s32 a);
void func_ov105_02294ea4(S *s);
s32 func_ov105_02294e0c(S *s);
void func_ov105_02295a78(S *s);
void func_ov105_02295714(S *s);
void func_ov105_02295874(S *s);
void func_ov105_022958a8(S *s);
void func_ov105_02295c0c(S *s);
void func_ov105_02295b8c(S *s, s32 a);
void func_ov105_02295c34(S *s);
void func_ov105_02295b4c(S *s, s32 a);
void func_ov105_02295ce8(S *s);
void func_ov105_02296108(S *s);
void func_ov105_02296328(S *s, s32 a, s32 b);
void func_ov105_022963c0(S *s, s32 a);
void func_ov105_02295854(S *s);
s32 func_ov105_02296208(S *s, s32 a);
void func_ov105_02295120(S *s);
s32 func_ov105_022961f4(S *s, s32 a);
void func_ov105_02295814(S *s);
void func_ov105_02295834(S *s);
void func_ov105_02295e6c(S *s, s32 a);
void func_ov105_02297d18(S *s);
void func_ov105_02295668(S *s);
void func_ov105_02295974(S *s);
void func_ov105_0229590c(S *s);
void func_ov105_022951c8(S *s);
s32 func_ov105_02295210(S *s, s32 a, s32 b);
void func_ov105_02295a00(S *s);
s32 func_ov105_02296224(S *s, s32 a);
s32 func_ov105_02296214(S *s, s32 a);
s32 func_ov105_02295f20(S *s, s32 a);
s32 func_ov105_02295ee0(S *s, s32 a);
void func_ov105_022957ac(S *s, s32 a);
void func_ov105_02295760(S *s, s32 a);
void func_ov105_02296628(S *s);
void func_ov105_02295594(S *s, s32 a, s32 b);
s32 func_ov105_02296244(S *s);
s32 func_ov105_0229628c(S *s);
void func_ov105_022962ac(S *s, s32 a, s32 b);

void func_ov105_022967e8(S *s) {
    if (func_ov094_02293c1c(s->unk_d44)) {
        func_ov105_02294de8(s, 0x1000);
        s->unk_29c = 0;
        func_ov105_022965cc(s);
    }
}

void func_ov105_02296820(S *s) {
    if (func_ov002_0220308c(s->unk_728c)) {
        if (func_0208d534(s->unk_2424)) {
            s32 a = func_ov002_0220306c(s->unk_728c);
            s32 b = func_ov002_022030f4(s->unk_728c, -1);
            s32 c = func_ov002_022030b8(s->unk_728c, -1);
            func_ov002_02202a40(s->unk_2424, a + b, a + c);
        }
    } else {
        func_ov105_02295a78(s);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov105_0229688c(S *s) {
    if (func_ov002_02203f08(s->unk_2aa0)) {
        if (func_0208d534(s->unk_2424)) {
            s32 a = func_ov002_02203f78(s->unk_2aa0, 1);
            s32 b = func_ov002_02203f28(s->unk_2aa0, 1);
            func_ov002_02202a40(s->unk_2424, a, b);
        }
    } else {
        func_ov105_02295a78(s);
        func_ov002_02200a50(s, 9);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov105_022968f4(S *s) {
    if (func_ov002_02204234(s->unk_2788, 0)) {
        func_ov002_02200a58(s, s->unk_2a5);
        func_0208d644(s->unk_2424);
    }
}

void func_ov105_0229692c(S *s) {
    if (func_ov002_022017a4(s->unk_2488)) {
        func_ov105_02295714(s);
    }
}

void func_ov105_0229694c(S *s) {
    if (func_ov002_02201a28(s->unk_2488)) {
        func_ov002_02202064(s->unk_2488, 0);
        func_ov002_022006e4(s->unk_234c, 1);
        if (func_0208d534(s->unk_2424)) {
            func_ov105_02295874(s);
        }
        func_ov002_02200a58(s, 0x18);
    }
}

void func_ov105_0229699c(S *s) {
    if (func_ov002_022017b4(s->unk_2488)) {
        if (func_0206ef00()) {
            func_ov105_022958a8(s);
            func_ov002_02200a58(s, 0xb);
        } else {
            func_ov002_02200a58(s, 6);
        }
    }
}

void func_ov105_022969d8(S *s) {
    if (func_ov002_02202718(s->unk_240c)) {
        if (func_ov105_02294df8(s, 0x2000)) {
            func_ov105_02294dd8(s, 0x2000);
            func_ov105_02295c0c(s);
        } else {
            func_ov105_02295b8c(s, s->unk_29f);
            func_ov105_022965cc(s);
            func_ov094_02292398();
        }
    } else {
        func_ov105_02295c0c(s);
    }
}

void func_ov105_02296a34(S *s) {
    if (func_0208d4fc(s->unk_2424)) {
        func_ov002_02200a58(s, s->unk_2a5);
    }
    if (func_ov002_02202928(s->unk_2424)) {
        if (func_ov105_02294df8(s, 0x40)) {
            func_ov105_02294dd8(s, 0x40);
            func_ov094_02292380();
        }
        func_ov105_02295c34(s);
    }
}

void func_ov105_02296a88(S *s) {
    if (func_ov002_022028fc(s->unk_2424) == 0) {
        func_ov105_02295b4c(s, s->unk_2a4);
        func_ov105_02294de8(s, 0x40);
        func_ov002_02200a58(s, 0x14);
        func_ov105_02295ce8(s);
    } else {
        func_ov002_02200a58(s, 7);
    }
}

void func_ov105_02296ad0(S *s) {
    if (func_ov002_02202928(s->unk_2424) == 0) {
        u32 a = s->unk_2a4;
        if (s->unk_2a2 == a) {
            func_ov105_02296108(s);
            func_ov105_02295ce8(s);
            func_ov002_02200a58(s, 7);
            func_ov094_02292398();
        } else {
            func_ov105_02296328(s, a, 4);
        }
    } else {
        func_ov105_02295c34(s);
    }
}

void func_ov105_02296b28(S *s) {
    if (func_0208d4fc(s->unk_2424)) {
        func_ov002_02200a58(s, s->unk_2a5);
    }
    func_ov105_02295c34(s);
}

void func_ov105_02296b58(S *s) {
    if (func_ov002_02202928(s->unk_2424)) {
        func_ov105_022963c0(s, s->unk_2a2);
        func_ov002_02200a58(s, 0x11);
    }
}

void func_ov105_02296b88(S *s) {
    if (func_0208d4fc(s->unk_2424)) {
        func_ov105_02295854(s);
        if (s->unk_29c == 1) {
            func_ov002_02200a58(s, 8);
        } else {
            func_ov002_02200a58(s, 7);
        }
    }
}

void func_ov105_02296bc8(S *s) {
    if (func_0208d4fc(s->unk_2424)) {
        if (func_ov105_02296208(s, s->unk_2a2)) {
            func_ov105_02295120(s);
        } else if (func_ov105_022961f4(s, s->unk_2a2)) {
            s32 v = s->unk_2a2 - 0x3e;
            if (v == s->unk_2a8) {
                func_ov105_02295814(s);
            } else {
                s->unk_2a8 = v;
                func_ov105_02294ea4(s);
            }
        } else {
            func_ov105_02295814(s);
        }
    }
}

void func_ov105_02296c38(S *s) {
    if (func_ov002_022028f0(s->unk_2424) == 0) {
        func_ov002_02200a58(s, s->unk_2a5);
        if (s->unk_2a5 == 7) {
            func_ov105_02295e6c(s, s->unk_2a2);
        }
        func_ov105_02297d18(s);
    }
    func_ov105_02295c34(s);
}

void func_ov105_02296c84(S *s) {
    if (func_0208d4fc(s->unk_2424)) {
        s32 r;
        s->unk_2a6 = s->unk_2781[s->unk_2a7];
        r = 1;
        if (s->unk_2a6 == 2) {
            r = 0;
            func_0200402c(0x24);
        }
        func_ov002_02201aa0(s->unk_2488, s->unk_2a7, r);
        func_ov002_02200a58(s, 0x17);
    }
}

void func_ov105_02296ce8(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov105_02295668(s);
    } else {
        s32 r = func_ov002_022009c8(s);
        u8 t = (u8)func_ov105_02294df8(s, 0x800);
        if (func_ov002_022019d0(s->unk_2488, r, &s->unk_2a7, t)) {
            func_ov105_02295974(s);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov002_02202b68(s->unk_2424);
                func_ov002_02200a58(s, 0xc);
            } else if (k & 2) {
                func_ov105_0229590c(s);
            }
        }
    }
}

void func_ov105_02296d78(S *s) {
    if (func_0208d4fc(s->unk_2424)) {
        func_ov105_022951c8(s);
    }
}

void func_ov105_02296d98(S *s) {
    if (func_0208d534(s->unk_2424) == 0) {
        s32 a = func_ov002_02203f78(s->unk_2aa0, 1);
        s32 b = func_ov002_02203f28(s->unk_2aa0, 1);
        func_ov002_02202a40(s->unk_2424, a, b);
        func_ov002_02202d00(s->unk_2424, 1);
    }
    if (func_ov002_022009d4(s)) {
        func_ov105_02295a78(s);
        func_ov002_02200a58(s, 5);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) || (k & 2)) {
            func_ov002_02202b68(s->unk_2424);
            func_ov002_02200a58(s, 0xa);
        }
    }
}

void func_ov105_02296e2c(S *s) {
    s32 r = func_ov002_022009c8(s);
    if (func_ov105_02295210(s, r, 1)) {
        func_ov105_02295ce8(s);
        func_ov105_02295a00(s);
        func_ov002_022006e4(s->unk_234c, 0);
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            if (func_ov105_02296224(s, s->unk_2a2) || func_ov105_02296214(s, s->unk_2a2)) {
                if (!func_ov105_02295f20(s, s->unk_2a2)) {
                    if (func_ov105_02295ee0(s, s->unk_2a2)) {
                        func_ov105_022957ac(s, s->unk_2a2);
                    } else {
                        func_ov105_02295760(s, s->unk_2a2);
                    }
                }
            } else if (func_ov105_022961f4(s, s->unk_2a2)) {
                func_ov105_02295834(s);
            }
        } else if (k & 2) {
            if (func_ov105_02296214(s, s->unk_29f)) {
                u32 a = s->unk_2a0;
                if (a != s->unk_2a8) {
                    func_ov105_02296328(s, (u8)(a + 0x3e), 4);
                    return;
                }
            }
            if (func_0208d534(s->unk_2424) == 1) {
                func_ov105_02296328(s, s->unk_29f, 4);
            } else {
                func_ov105_022957ac(s, s->unk_29f);
            }
        } else {
            if (func_ov105_02294e0c(s) == 0) {
                func_ov105_02295c34(s);
                func_ov002_022006c0(s->unk_234c);
            }
        }
    }
}

void func_ov105_02296f60(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov105_02296628(s);
        func_ov002_022006e4(s->unk_234c, 1);
    } else {
        s32 r = func_ov002_022009c8(s);
        if (func_ov105_02295210(s, r, 0)) {
            func_ov105_02295ce8(s);
            func_ov105_02295a00(s);
            func_ov002_022006e4(s->unk_234c, 0);
        } else {
            u32 k;
            if (func_ov105_02295f20(s, s->unk_2a2)) goto other;
            k = data_021f47d8[1];
            if (k & 1) {
                if (func_ov105_02296224(s, s->unk_2a2) || func_ov105_02296214(s, s->unk_2a2)) {
                    if (!func_ov105_02295ee0(s, s->unk_2a2)) {
                        func_ov105_02295594(s, s->unk_2a2, 0);
                    }
                } else if (func_ov105_02296208(s, s->unk_2a2) || func_ov105_022961f4(s, s->unk_2a2)) {
                    func_ov105_02295834(s);
                }
            } else if (k & 0x800) {
                if (func_ov105_02296224(s, s->unk_2a2) || func_ov105_02296214(s, s->unk_2a2)) {
                    if (!func_ov105_02295ee0(s, s->unk_2a2)) {
                        s32 t;
                        if (func_ov105_02296224(s, s->unk_2a2)) {
                            t = func_ov105_02296244(s);
                        } else {
                            t = func_ov105_0229628c(s);
                        }
                        if (t != 0x41) {
                            func_ov105_022962ac(s, s->unk_2a2, t);
                            func_ov002_022006e4(s->unk_234c, 1);
                            func_ov105_02294de8(s, 0x1000);
                        }
                    }
                }
            } else {
                goto other;
            }
            return;
other:
            k = data_021f47d8[1];
            if ((k & 8) || (k & 2)) {
                func_ov105_02295a78(s);
                func_ov105_02295120(s);
                func_ov002_022006e4(s->unk_234c, 0);
            } else if (func_ov105_02294e0c(s) == 0) {
                func_ov002_022006c0(s->unk_234c);
            }
        }
    }
}
}

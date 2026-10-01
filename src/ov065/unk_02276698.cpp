// mwcc-flags: -O4,p
#include "types.h"

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
extern char data_ov065_0228c8b8[];

#define g data_ov065_02290814

extern "C" {
u64 func_01ffa6b4(void);
u64 func_02132ef8(u64 a, u64 b);
void func_02115e64(u32 v, void *dst, u32 n);
void func_02115fb4(void *dst, s32 v, u32 n);
s32 func_02128930(void *, void *, u32);
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
    func_02115e64(z, &addr, 8);
    addr.family = 2;
    addr.ip = ip;
    addr.port = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    u32 c = (u8)name[0];
    if ((c == 0xfe && (u8)name[1] == 0xfd) || c == 0x5c) {
        if (g->unk_10) {
            func_ov065_0228758c(g->unk_10, name, arg, &addr);
        }
    } else if (func_02128930(name, data_ov065_0228e16c, 6) == 0) {
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
                    u64 el = ((func_01ffa6b4() - *(u64 *)c->unk_1c0) << 6) / 0x82ea;
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
                if ((((func_01ffa6b4() - *(u64 *)c->unk_1b4) << 6) / 0x82ea) >= (u64)r5) {
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
                if ((u64)r5 < (((func_01ffa6b4() - *(u64 *)c->unk_ec) << 6) / 0x82ea)) {
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
    func_ov065_02271e00(5, data_ov065_0228c8b8, 0);
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
    func_02115fb4(g->unk_2ec, 0, 0x40);
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
}

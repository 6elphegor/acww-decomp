#include "types.h"

// Scene object for ov102 (vtable 0x02297520, Unk_ov102_02297520 : Unk_ov002_022044e4). Sub-object offsets
// are the same as ov100.  Functions here are plain extern "C" state handlers on the scene struct.
struct Unk_ov102_02297520 {
    /* 0x0000 */ u8 pad_00[0x8c];
    /* 0x008c */ u8 unk_08c;
    /* 0x008d */ u8 pad_08d[0x94 - 0x8d];
    /* 0x0094 */ u8 unk_094[0x2134 - 0x94];
    /* 0x2134 */ u8 unk_2134[0x21f4 - 0x2134];
    /* 0x21f4 */ u8 unk_21f4[0x220c - 0x21f4];
    /* 0x220c */ u8 unk_220c[0x2270 - 0x220c];
    /* 0x2270 */ u8 unk_2270[0x2404 - 0x2270];
    /* 0x2404 */ s32 unk_2404;
    /* 0x2408 */ s32 unk_2408;
    /* 0x240c */ s32 unk_240c;
    /* 0x2410 */ s32 unk_2410;
    /* 0x2414 */ u8 pad_2414[0x24cb - 0x2414];
    /* 0x24cb */ u8 unk_24cb;
    /* 0x24cc */ u8 unk_24cc;
    /* 0x24cd */ u8 unk_24cd;
    /* 0x24ce */ u8 unk_24ce;
    /* 0x24cf */ u8 unk_24cf;
    /* 0x24d0 */ u8 unk_24d0;
    /* 0x24d1 */ u8 unk_24d1;
    /* 0x24d2 */ u8 unk_24d2;
    /* 0x24d3 */ u8 unk_24d3;
    /* 0x24d4 */ u8 unk_24d4;
    /* 0x24d5 */ u8 unk_24d5;
    /* 0x24d6 */ u8 unk_24d6;
};

typedef Unk_ov102_02297520 S;

extern "C" {
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u16 data_021f47d8[];

s32 func_02098ffc();
BOOL func_0206e61c();
BOOL func_0206ef0c();
void func_020b87d0(void *p);
s32 func_0208d4fc(void *p);
s32 func_0208d534(void *p);
s32 func_0208d644(void *p);

void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022006e4(void *p, s32 a);
void func_ov002_02200980(void *p);
u32 func_ov002_022009c8(void *p);
BOOL func_ov002_022009d4(void *p);
void func_ov002_02200a58(void *p, s32 a);
void func_ov002_02200a60(void *p, s32 a);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
void func_ov002_022026f4(void *p, s32 a, s32 b);
s32 func_ov002_02202718(void *p);
s32 func_ov002_022028f0(void *p);
s32 func_ov002_022028fc(void *p);
s32 func_ov002_02202928(void *p);
s32 func_ov002_02204234(void *p, s32 a);

s32 func_ov094_02292380();
s32 func_ov094_0229238c();
s32 func_ov094_02292398();

void func_ov102_02294d48(S *s, u32 m);
void func_ov102_02294d58(S *s, u32 m);
BOOL func_ov102_02294d68(S *s, u32 m);
BOOL func_ov102_02294d80(S *s);
void func_ov102_02294dd8(S *s);
void func_ov102_02294f20(S *s, u32 a);
BOOL func_ov102_02295020(S *s, u32 a, u32 b);
void func_ov102_02295470(S *s, u32 a);
void func_ov102_022954bc(S *s, u32 a);
void func_ov102_022954f8(S *s);
void func_ov102_02295518(S *s);
void func_ov102_02295538(S *s);
void func_ov102_02295558(S *s);
void func_ov102_02295578(S *s);
void func_ov102_02295610(S *s);
void func_ov102_0229568c(S *s);
void func_ov102_022956e4(S *s, u32 a);
void func_ov102_02295720(S *s, u32 a);
void func_ov102_02295750(S *s, u8 a);
void func_ov102_022957c8(S *s);
void func_ov102_022957f8(S *s);
void func_ov102_02295840(S *s);
void func_ov102_022958b4(S *s);
void func_ov102_02295a50(S *s, u32 a);
void func_ov102_02295a9c(S *s);
BOOL func_ov102_02295b34(S *s, u32 a);
BOOL func_ov102_02295b70(S *s, u32 a);
s32 func_ov102_02295c38(S *s, u32 a);
s32 func_ov102_02295ca8(S *s, u32 a);
u16 *func_ov102_02295d18(S *s);
u32 func_ov102_02295d48(S *s, u32 a);
void func_ov102_02295de0(S *s);
void func_ov102_02297078(S *s);

// in-range functions (forward declarations)
u32 func_ov102_02295eb0(S *s, u32 v);
u32 func_ov102_02295ec0(S *s, u32 v);
BOOL func_ov102_02295ef8(S *s, u32 v);
BOOL func_ov102_02295f04(S *s, u32 v);
BOOL func_ov102_02295f14(S *s, u32 v);
BOOL func_ov102_02295f24(S *s, u32 v);
u32 func_ov102_02295f3c(S *s);
u32 func_ov102_02295f6c(S *s);
void func_ov102_02295f8c(S *s, u8 a, u32 b);
void func_ov102_0229600c(S *s, u32 a, u32 b);
void func_ov102_022960a8(S *s, u8 a);
void func_ov102_02296200(S *s);
void func_ov102_02296220(S *s);
void func_ov102_0229625c(S *s);
}

extern "C" {

u32 func_ov102_02295eb0(S *s, u32 v) {
    if (v <= 0xe) {
        return (u8)v;
    }
    return 0x25;
}

u32 func_ov102_02295ec0(S *s, u32 v) {
    if (func_ov102_02295f24(s, v)) {
        return (u8)v;
    }
    if (func_ov102_02295f14(s, v)) {
        return func_ov102_02295d48(s, v);
    }
    return 0;
}

BOOL func_ov102_02295ef8(S *s, u32 v) {
    if (v == 0x24) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov102_02295f04(S *s, u32 v) {
    if (v >= 0x1e && v <= 0x23) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov102_02295f14(S *s, u32 v) {
    if (v >= 0xf && v <= 0x1d) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov102_02295f24(S *s, u32 v) {
    if (v <= 0xe) {
        return TRUE;
    }
    return FALSE;
}

void func_ov102_02295f30(S *s) {
    func_020b87d0(s->unk_094);
}

u32 func_ov102_02295f3c(S *s) {
    u16 *p = func_ov102_02295d18(s);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (p[i] == 0xfff1) {
            return (u8)(i + 0xf);
        }
    }
    return 0x25;
}

u32 func_ov102_02295f6c(S *s) {
    s32 r = func_02098ffc();
    if (r == -1) {
        return 0x25;
    }
    return (u8)r;
}

void func_ov102_02295f8c(S *s, u8 a, u32 b) {
    func_ov102_02295750(s, a);
    s->unk_240c = func_ov102_02295ca8(s, a);
    s->unk_2410 = func_ov102_02295c38(s, a);
    func_ov102_0229600c(s, b, 4);
}

void func_ov102_02295fc8(S *s, u32 a, s32 c) {
    u32 r = 0x25;
    if (c >= 0x6c) {
        if (func_ov102_02295f14(s, a)) {
            r = func_ov102_02295f6c(s);
        }
    } else {
        if (func_ov102_02295f24(s, a)) {
            r = func_ov102_02295f3c(s);
        }
    }
    if (r != 0x25) {
        a = r;
    }
    func_ov102_0229600c(s, a, 4);
}

void func_ov102_0229600c(S *s, u32 a, u32 b) {
    s->unk_24ce = a;
    func_ov002_022026f4(s->unk_21f4, s->unk_240c, s->unk_2410);
    s32 t = func_ov102_02295c38(s, a);
    if (func_ov102_02295f04(s, a)) {
        t -= 8;
    }
    s32 u = func_ov102_02295ca8(s, a);
    func_ov002_022026c4(s->unk_21f4, u, t, b);
    func_ov002_02202718(s->unk_21f4);
    func_ov102_022957c8(s);
    if (func_ov102_02295f04(s, a)) {
        func_ov102_02294d58(s, 0x200);
    } else {
        func_ov102_02294d48(s, 0x200);
    }
    func_ov002_02200a58(s, 0xd);
}

void func_ov102_022960a8(S *s, u8 a) {
    s->unk_24ce = a;
    s->unk_24d0 = a;
    s->unk_24cf = s->unk_24d6;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov102_02295750(s, a);
    if (s->unk_24cb == 1) {
        s->unk_24d3 = 4;
    }
    func_ov102_022957f8(s);
    func_ov094_02292380();
}

void func_ov102_02296110(S *s, u8 a) {
    s->unk_24ce = a;
    s->unk_24d0 = a;
    s->unk_24cf = s->unk_24d6;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov102_02295750(s, a);
    if (s->unk_24cb == 1) {
        func_ov002_02200a58(s, 2);
    }
    func_ov102_02295840(s);
    func_ov094_02292380();
}

void func_ov102_02296174(S *s, u32 a) {
    s->unk_24cc = a;
    func_ov002_02200a58(s, 1);
    u32 r6 = data_021ef5f0;
    u32 r7 = data_021ef5ec;
    s->unk_2404 = func_ov102_02295ca8(s, s->unk_24cc) - r6;
    s->unk_2408 = func_ov102_02295c38(s, s->unk_24cc) - r7;
    s->unk_24cd = a;
    func_ov002_022006b8(s->unk_2134);
    if (func_ov102_02295b70(s, a)) {
        func_ov102_02294d48(s, 4);
    } else {
        func_ov102_02294d58(s, 4);
        func_ov094_0229238c();
    }
}

void func_ov102_02296200(S *s) {
    if (func_0206ef0c()) {
        func_ov102_0229625c(s);
    } else {
        func_ov102_02296220(s);
    }
}

void func_ov102_02296220(S *s) {
    s->unk_24cd = 0x25;
    func_ov102_0229568c(s);
    func_ov002_02200980(s);
    func_ov102_022958b4(s);
    func_ov002_02200a58(s, 3);
    func_ov102_02295a50(s, s->unk_24d1);
}

void func_ov102_0229625c(S *s) {
    func_ov102_02295610(s);
    func_ov102_02295a9c(s);
    func_ov002_02200a58(s, 0);
}

void func_ov102_02296278(S *s) {
    if (s->unk_24d5 != 0) {
        s->unk_24d5--;
    } else {
        s->unk_08c = 4;
        func_ov002_02200a60(s, 1);
        func_ov002_022006e4(s->unk_2134, 1);
        func_ov102_02295610(s);
    }
}

void func_ov102_022962b8(S *s) {
    if (func_ov002_02204234(s->unk_2270, 1)) {
        func_ov002_02200a58(s, s->unk_24d3);
        func_0208d644(s->unk_220c);
    }
}

void func_ov102_022962f0(S *s) {
    if (func_ov002_02202718(s->unk_21f4)) {
        if (func_ov102_02294d68(s, 0x200)) {
            func_ov102_02294d48(s, 0x200);
            func_ov102_022957c8(s);
        } else {
            func_ov102_02295720(s, s->unk_24ce);
            func_ov102_02296200(s);
            func_ov094_02292398();
        }
    } else {
        func_ov102_022957c8(s);
    }
}

void func_ov102_0229634c(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_24d3);
    }
    if (func_ov002_02202928(s->unk_220c)) {
        if (func_ov102_02294d68(s, 0x40)) {
            func_ov102_02294d48(s, 0x40);
            func_ov094_02292380();
        }
        func_ov102_022957f8(s);
    }
}

void func_ov102_022963a0(S *s) {
    if (!func_ov002_022028fc(s->unk_220c)) {
        func_ov102_022956e4(s, s->unk_24d2);
        func_ov102_02294d58(s, 0x40);
        func_ov002_02200a58(s, 0xc);
        func_ov102_022958b4(s);
    } else {
        func_ov002_02200a58(s, 3);
    }
}

void func_ov102_022963e8(S *s) {
    if (!func_ov002_02202928(s->unk_220c)) {
        u32 a = s->unk_24d2;
        if (s->unk_24d1 == a) {
            func_ov102_02295de0(s);
            func_ov102_022958b4(s);
            func_ov002_02200a58(s, 3);
            func_ov094_02292398();
        } else {
            func_ov102_0229600c(s, a, 4);
        }
    } else {
        func_ov102_022957f8(s);
    }
}

void func_ov102_02296440(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_24d3);
    }
    func_ov102_022957f8(s);
}

void func_ov102_02296470(S *s) {
    if (func_ov002_02202928(s->unk_220c)) {
        func_ov102_022960a8(s, s->unk_24d1);
        func_ov002_02200a58(s, 9);
    }
}

void func_ov102_022964a0(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov102_02295558(s);
        if (s->unk_24cb == 1) {
            func_ov002_02200a58(s, 4);
        } else {
            func_ov002_02200a58(s, 3);
        }
    }
}

void func_ov102_022964e0(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        if (func_ov102_02295f04(s, s->unk_24d1)) {
            u32 v = (u8)(s->unk_24d1 - 0x1e);
            if (v == s->unk_24d6) {
                func_ov102_02295518(s);
            } else {
                s->unk_24d6 = v;
                func_ov102_02294dd8(s);
            }
        } else if (s->unk_24d1 == 0x24) {
            func_ov102_02294f20(s, 1);
        } else {
            func_ov102_02295518(s);
        }
    }
}

void func_ov102_02296550(S *s) {
    if (!func_ov002_022028f0(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_24d3);
        if ((u8)(s->unk_24d3 + 0xfd) <= 1) {
            func_ov102_02295a50(s, s->unk_24d1);
        }
        func_ov102_02297078(s);
    }
    func_ov102_022957f8(s);
}

void func_ov102_022965a0(S *s) {
    if (func_0206e61c()) {
        func_ov102_02295720(s, s->unk_24ce);
        func_ov102_02295610(s);
        func_ov002_022006e4(s->unk_2134, 0);
        func_ov102_02294f20(s, 0);
    } else {
        u32 v = func_ov002_022009c8(s);
        if (func_ov102_02295020(s, v, 1)) {
            func_ov102_022958b4(s);
            func_ov102_02295578(s);
            func_ov002_022006e4(s->unk_2134, 0);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                if (func_ov102_02295f24(s, s->unk_24d1) || func_ov102_02295f14(s, s->unk_24d1)) {
                    if (!func_ov102_02295b70(s, s->unk_24d1)) {
                        if (func_ov102_02295b34(s, s->unk_24d1)) {
                            func_ov102_022954bc(s, s->unk_24d1);
                        } else {
                            func_ov102_02295470(s, s->unk_24d1);
                        }
                    }
                } else if (func_ov102_02295f04(s, s->unk_24d1)) {
                    func_ov102_02295538(s);
                }
            } else if (k & 2) {
                u32 t;
                if (func_ov102_02295f14(s, s->unk_24ce) && (t = s->unk_24cf, t != s->unk_24d6)) {
                    func_ov102_0229600c(s, (u8)(t + 0x1e), 4);
                } else if (func_0208d534(s->unk_220c) == 1) {
                    func_ov102_0229600c(s, s->unk_24ce, 4);
                } else {
                    func_ov102_022954bc(s, s->unk_24ce);
                }
            } else {
                if (!func_ov102_02294d80(s)) {
                    func_ov102_022957f8(s);
                    func_ov002_022006c0(s->unk_2134);
                }
            }
        }
    }
}

void func_ov102_02296704(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov102_0229625c(s);
        func_ov002_022006e4(s->unk_2134, 1);
    } else {
        u32 v = func_ov002_022009c8(s);
        if (func_ov102_02295020(s, v, 0)) {
            func_ov102_022958b4(s);
            func_ov102_02295578(s);
            func_ov002_022006e4(s->unk_2134, 0);
        } else {
            if (func_ov102_02295b70(s, s->unk_24d1)) goto tail;
            {
                u32 k = data_021f47d8[1];
                if (k & 1) {
                    if (func_ov102_02295f24(s, s->unk_24d1) || func_ov102_02295f14(s, s->unk_24d1)) {
                        if (!func_ov102_02295b34(s, s->unk_24d1)) {
                            func_ov102_022954f8(s);
                        }
                    } else if (func_ov102_02295ef8(s, s->unk_24d1)) {
                        func_ov102_02295538(s);
                    } else if (func_ov102_02295f04(s, s->unk_24d1)) {
                        func_ov102_02295538(s);
                    }
                } else if (k & 0x800) {
                    if (func_ov102_02295f24(s, s->unk_24d1) || func_ov102_02295f14(s, s->unk_24d1)) {
                        if (!func_ov102_02295b34(s, s->unk_24d1)) {
                            u32 r = func_ov102_02295f24(s, s->unk_24d1) ? func_ov102_02295f3c(s) : func_ov102_02295f6c(s);
                            if (r != 0x25) {
                                func_ov102_02295f8c(s, s->unk_24d1, r);
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
                if ((k & 8) || (k & 2)) {
                    func_ov102_02295610(s);
                    func_ov102_02294f20(s, 1);
                    func_ov002_022006e4(s->unk_2134, 0);
                } else if (!func_ov102_02294d80(s)) {
                    func_ov002_022006c0(s->unk_2134);
                }
            }
        }
    }
}

}

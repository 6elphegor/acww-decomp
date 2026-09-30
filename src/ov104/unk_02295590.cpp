#include "types.h"

struct Unk_ov104_02295590_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov104_02295590 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xa8 - 0x8e];
    s32 unk_0a8;
    s32 unk_0ac;
    u8 pad_0b0[0xb8 - 0xb0];
    u8 unk_0b8;
    u8 unk_0b9;
    u8 unk_0ba;
    u8 unk_0bb;
    u8 unk_0bc;
    u8 unk_0bd;
    u8 pad_0be[0xd40 - 0xbe];
    u8 unk_d40[0x2348 - 0xd40];
    u8 unk_2348[0x2420 - 0x2348];
    u8 unk_2420[0x2484 - 0x2420];
    u8 unk_2484[0x2778 - 0x2484];
    u8 unk_2778[0x2a9c - 0x2778];
    u8 unk_2a9c[0x3494 - 0x2a9c];
    u8 unk_3494[0xf4 * 10];
};

typedef Unk_ov104_02295590 S;

extern "C" {
BOOL func_0206ef00();
void func_0200402c(u32 v);
void func_0208e13c(void *p, s32 v);
s32 func_0208d538(void *p, s32 v);
void func_02065e70(void *p, u32 v);
s32 func_02065578(u32 v);
u32 func_020655d0(u32 v);

void func_ov094_02293c58(void *p);

void func_ov002_02200a50(void *p, s32 s);
void func_ov002_02200a58(void *p, s32 s);
void func_ov002_02200a60(void *p, s32 s);
void func_ov002_022006e4(void *p, s32 a);
BOOL func_ov002_0220125c(void *p);
BOOL func_ov002_0220126c(void *p);
BOOL func_ov002_0220127c(void *p);
BOOL func_ov002_0220128c(void *p);
void func_ov002_022016e4(void *p, s32 a);
void func_ov002_02201700(void *p, s32 a, s32 b);
void func_ov002_0220160c(void *p, void *q, s32 a);
u32 func_ov002_02201a70(void *p, s32 a);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 a);
void func_ov002_02202064(void *p, s32 a);
void func_ov002_02202098(void *p, s32 a);
void func_ov002_02202200(void *p, void *q, s32 a);
void func_ov002_0220229c(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a78(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202d00(void *p, s32 a);

void func_ov104_02294dfc(S *s, u32 a);
void func_ov104_02294e0c(S *s, u32 a);
BOOL func_ov104_02294e1c(S *s, u32 a);
s32 func_ov104_022962ec(S *s, u32 a);
s32 func_ov104_0229633c(S *s, u32 a);
u32 func_ov104_0229638c(S *s, u32 a);
void func_ov104_022963cc(S *s, u32 a, void *p);
BOOL func_ov104_022964f0(S *s, u32 a);
BOOL func_ov104_02296504(S *s, u32 a);
BOOL func_ov104_02296514(S *s, u32 a);
void func_ov104_02296790(S *s);

void func_ov104_02295590(S *s);
void func_ov104_022955c8(S *s);
void func_ov104_02295604(S *s);
void func_ov104_0229560c(S *s);
void func_ov104_0229567c(S *s);
void func_ov104_022956a0(S *s);
BOOL func_ov104_022956c4(S *s, s32 a, s32 b);
void func_ov104_02295748(S *s, s32 a);
void func_ov104_022957ac(S *s, s32 a, s32 b);
void func_ov104_02295884(S *s, s32 a, s32 b);
void func_ov104_02295958(S *s);
void func_ov104_022959a8(S *s, u32 a, s32 b);
void func_ov104_02295a78(S *s);
void func_ov104_02295aa4(S *s, s32 a);
void func_ov104_02295b20(S *s);
void func_ov104_02295b68(S *s, u32 a);
void func_ov104_02295bb0(S *s, u32 a);
void func_ov104_02295bec(S *s);
void func_ov104_02295c0c(S *s);
void func_ov104_02295c2c(S *s);
void func_ov104_02295c4c(S *s);
void func_ov104_02295c80(S *s);
void func_ov104_02295ce4(S *s);
void func_ov104_02295d48(S *s);
void func_ov104_02295d98(S *s);
void func_ov104_02295e0c(S *s);
s32 func_ov104_02295e30(S *s);
s32 func_ov104_02295e40(S *s);
void func_ov104_02295e84(S *s);
void func_ov104_02295f3c(S *s, u32 a);

void func_ov104_02295590(S *s) {
    u8 id;
    s32 i = 0;
    for (id = 0xb; id <= 0x14; i++, id++) {
        func_ov104_022963cc(s, id, s->unk_3494 + i * 0xf4);
    }
}

void func_ov104_022955c8(S *s) {
    u8 id;
    s32 i = 0;
    for (id = 0xb; id <= 0x14; i++, id++) {
        func_02065e70(s->unk_3494 + i * 0xf4, func_ov104_0229638c(s, id));
    }
}

void func_ov104_02295604(S *s) {
    func_ov104_02295958(s);
}

void func_ov104_0229560c(S *s) {
    u32 t = s->unk_0b9;
    func_ov104_02295f3c(s, t);
    s->unk_0a8 = func_ov104_0229633c(s, t);
    s->unk_0ac = func_ov104_022962ec(s, t);
    if (func_0206ef00()) {
        s->unk_0a8 = s->unk_0a8 - 2;
        s->unk_0ac = s->unk_0ac - 2;
    }
    func_ov002_02200a58(s, 0x1c);
    func_ov094_02293c58(s->unk_d40);
}

void func_ov104_0229567c(S *s) {
    func_ov002_02200a58(s, 0x1a);
    func_0208e13c(s->unk_2a9c, 2);
    func_0200402c(0x29);
}

void func_ov104_022956a0(S *s) {
    func_ov002_02200a50(s, 4);
    func_ov002_02200a60(s, 1);
    func_ov104_02294e0c(s, 0x100);
}

BOOL func_ov104_022956c4(S *s, s32 a, s32 b) {
    u32 old = s->unk_0b8;
    func_ov104_02294dfc(s, 0x30);
    if (a == 0) return FALSE;
    if (func_ov104_02296514(s, s->unk_0b8)) {
        func_ov104_02295884(s, a, b);
    } else if (func_ov104_02296504(s, s->unk_0b8)) {
        func_ov104_022957ac(s, a, b);
    } else if (func_ov104_022964f0(s, s->unk_0b8)) {
        func_ov104_02295748(s, a);
    }
    if (old != s->unk_0b8) return TRUE;
    return FALSE;
}

void func_ov104_02295748(S *s, s32 a) {
    if (func_ov002_0220126c((void *)a)) {
        s->unk_0b8 = 0x20;
    } else if (func_ov002_0220125c((void *)a)) {
        s->unk_0b8 = 0x1f;
    }
    if (func_ov002_0220128c((void *)a)) {
        func_ov002_02202c40(s->unk_2420);
        if (s->unk_0b8 == 0x20) {
            s->unk_0b8 = 0x1d;
        } else {
            s->unk_0b8 = 0x13;
        }
    }
}

void func_ov104_022957ac(S *s, s32 a, s32 b) {
    s32 r4 = s->unk_0b8 - 0x15;
    s32 r6 = 0;
    while (r4 >= 2) {
        r6++;
        r4 -= 2;
    }
    if (func_ov002_0220126c((void *)a)) {
        if (r4 > 0) s->unk_0b8 = s->unk_0b8 - 1;
    } else if (func_ov002_0220125c((void *)a)) {
        if (r4 < 1) {
            s->unk_0b8 = s->unk_0b8 + 1;
        } else {
            s->unk_0b8 = r6 * 2 + 0xb;
            return;
        }
    }
    if (func_ov104_02296504(s, s->unk_0b8)) {
        if (func_ov104_02294e1c(s, 0x30) == 0) {
            if (func_ov002_0220128c((void *)a)) {
                if (r6 > 0) s->unk_0b8 = s->unk_0b8 - 2;
            } else if (func_ov002_0220127c((void *)a)) {
                if (r6 < 4) {
                    s->unk_0b8 = s->unk_0b8 + 2;
                } else if (b == 0) {
                    s->unk_0b8 = 0x20;
                    func_ov002_02202ca0(s->unk_2420);
                }
            }
        }
    }
}

void func_ov104_02295884(S *s, s32 a, s32 b) {
    s32 r4 = s->unk_0b8 - 0xb;
    s32 r6 = r4 >> 1;
    if (func_ov002_0220126c((void *)a)) {
        if ((r4 & 1) > 0) {
            s->unk_0b8 = s->unk_0b8 - 1;
        } else {
            s->unk_0b8 = r6 * 2 + 0x16;
            return;
        }
    } else if (func_ov002_0220125c((void *)a)) {
        if ((r4 & 1) < 1) s->unk_0b8 = s->unk_0b8 + 1;
    }
    if (func_ov104_02296514(s, s->unk_0b8)) {
        if (func_ov104_02294e1c(s, 0x30) == 0) {
            if (func_ov002_0220128c((void *)a)) {
                if (r6 > 0) s->unk_0b8 = s->unk_0b8 - 2;
            } else if (func_ov002_0220127c((void *)a)) {
                if (r6 < 4) {
                    s->unk_0b8 = s->unk_0b8 + 2;
                } else if (b == 0) {
                    s->unk_0b8 = 0x1f;
                    func_ov002_02202ca0(s->unk_2420);
                }
            }
        }
    }
}

void func_ov104_02295958(S *s) {
    func_ov104_02294e0c(s, 0x8000);
    func_ov002_022016e4(s->unk_2778, 4);
    func_ov002_02201700(s->unk_2778, 0x1a, 4);
    func_ov002_02201700(s->unk_2778, 0x15, 2);
    func_ov002_02201700(s->unk_2778, 0x19, 4);
    func_ov104_02295aa4(s, 0);
}

void func_ov104_022959a8(S *s, u32 a, s32 b) {
    u32 r7;
    s32 r5;
    func_ov104_02294dfc(s, 0x8000);
    s->unk_0b9 = a;
    func_ov002_022016e4(s->unk_2778, 4);
    r7 = func_ov104_0229638c(s, a);
    if (func_0206ef00()) {
        func_ov002_02201700(s->unk_2778, 0, 0);
    }
    r5 = func_02065578(r7);
    if (r5 != 0) {
        if (r5 == 7) {
            func_ov002_02201700(s->unk_2778, 0x17, 1);
        } else {
            func_ov002_02201700(s->unk_2778, 0x14, 1);
        }
    }
    if (func_020655d0(r7) == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            func_ov002_02201700(s->unk_2778, 0x15, 3);
        }
    }
    func_ov002_02201700(s->unk_2778, 2, 4);
    func_ov104_02295e0c(s);
    if (b == 0) {
        func_ov002_022006e4(s->unk_2348, 1);
    }
    func_ov104_02295aa4(s, b);
}

void func_ov104_02295a78(S *s) {
    s->unk_0bc = 4;
    func_ov104_02295c4c(s);
    func_ov002_02202064(s->unk_2484, 0);
    func_ov002_02200a58(s, 0x18);
}

void func_ov104_02295aa4(S *s, s32 a) {
    s32 r6, r2;
    func_ov002_0220160c(s->unk_2484, s->unk_2778, func_ov104_02294e1c(s, 0x8000));
    r6 = func_ov104_0229633c(s, s->unk_0b9);
    r2 = func_ov104_022962ec(s, s->unk_0b9);
    if (a != 0) {
        func_ov002_02202200(s->unk_2484, s->unk_2348, r2);
    } else {
        func_ov002_0220229c(s->unk_2484, r6, r2);
    }
    func_ov002_02202098(s->unk_2484, 0);
    func_ov002_02200a58(s, 0x16);
}

void func_ov104_02295b20(S *s) {
    switch (s->unk_0bc) {
    case 0: func_ov104_02295bec(s); break;
    case 1: func_ov104_022956a0(s); break;
    case 2: func_ov104_0229560c(s); break;
    case 3: func_ov104_02295604(s); break;
    case 4:
    default: func_ov104_02296790(s); break;
    }
}

void func_ov104_02295b68(S *s, u32 a) {
    func_ov002_022006e4(s->unk_2348, 1);
    s->unk_0bb = s->unk_08d;
    s->unk_0ba = a;
    func_ov002_02202d00(s->unk_2420, 6);
    func_ov002_02200a58(s, 0x13);
}

void func_ov104_02295bb0(S *s, u32 a) {
    func_ov002_022006e4(s->unk_2348, 1);
    s->unk_0ba = a;
    func_ov002_02202d00(s->unk_2420, 5);
    func_ov002_02200a58(s, 0x12);
}

void func_ov104_02295bec(S *s) {
    func_ov002_02202d00(s->unk_2420, 4);
    func_ov002_02200a58(s, 0x10);
}

void func_ov104_02295c0c(S *s) {
    func_ov002_02202b68(s->unk_2420);
    func_ov002_02200a58(s, 0xe);
}

void func_ov104_02295c2c(S *s) {
    func_ov002_02202a78(s->unk_2420);
    ((Unk_ov104_02295590_Vt *)s->unk_2420)->vfunc_0c();
}

void func_ov104_02295c4c(S *s) {
    s32 r4 = func_ov104_02295e40(s);
    func_ov002_02202a40(s->unk_2420, r4, func_ov104_02295e30(s));
    func_ov002_02202d00(s->unk_2420, 1);
}

void func_ov104_02295c80(S *s) {
    s32 r4;
    if (func_ov104_02294e1c(s, 0x8000)) {
        s->unk_0bd = 1;
    } else {
        s->unk_0bd = 0;
    }
    r4 = func_ov002_022014a4(s->unk_2484);
    func_ov002_02202a40(s->unk_2420, r4, func_ov002_02201498(s->unk_2484, s->unk_0bd));
    func_ov002_02202d00(s->unk_2420, 7);
}

void func_ov104_02295ce4(S *s) {
    s32 r4;
    s->unk_0bc = 4;
    s->unk_0bd = func_ov002_02201a70(s->unk_2484, 1);
    r4 = func_ov002_022014a4(s->unk_2484);
    func_ov002_02202a40(s->unk_2420, r4, func_ov002_02201498(s->unk_2484, s->unk_0bd));
    func_0208d538(s->unk_2420, 8);
    func_ov002_02200a58(s, 0x17);
}

void func_ov104_02295d48(S *s) {
    s32 r4 = func_ov002_022014a4(s->unk_2484);
    func_ov002_02202a18(s->unk_2420, r4, func_ov002_02201498(s->unk_2484, s->unk_0bd), 2);
    s->unk_0bb = s->unk_08d;
    func_ov002_02200a58(s, 0xd);
}

void func_ov104_02295d98(S *s) {
    s32 r5;
    if (func_ov104_02294e1c(s, 8)) {
        r5 = func_ov104_02295e40(s);
        func_ov002_02202a40(s->unk_2420, r5, func_ov104_02295e30(s));
        func_ov104_02294dfc(s, 8);
    } else {
        r5 = func_ov104_02295e40(s);
        func_ov002_022029e8(s->unk_2420, r5, func_ov104_02295e30(s), 3, 1);
        s->unk_0bb = s->unk_08d;
        func_ov002_02200a58(s, 0xd);
    }
}

void func_ov104_02295e0c(S *s) {
    func_ov002_02202d00(s->unk_2420, 0);
    ((Unk_ov104_02295590_Vt *)s->unk_2420)->vfunc_0c();
}

s32 func_ov104_02295e30(S *s) {
    return func_ov104_022962ec(s, s->unk_0b8);
}

s32 func_ov104_02295e40(S *s) {
    s32 r4 = func_ov104_0229633c(s, s->unk_0b8);
    if (func_ov104_02294e1c(s, 0x20)) {
        r4 += 0x100;
    } else if (func_ov104_02294e1c(s, 0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

void func_ov104_02295e84(S *s) {
    s32 r4 = func_ov104_02295e40(s);
    func_ov002_02202a40(s->unk_2420, r4, func_ov104_02295e30(s));
    if (func_ov104_022964f0(s, s->unk_0b8)) {
        func_ov002_02202d00(s->unk_2420, 7);
    } else {
        func_ov002_02202d00(s->unk_2420, 1);
    }
    func_ov104_02295c2c(s);
}

}

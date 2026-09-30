#include "types.h"

struct Unk_ov068_02268608_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02268214_Flags {
    u16 f0_1 : 2;
    u16 f2_3 : 2;
    u16 f4_5 : 2;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
    u16 f9 : 1;
    u16 f10 : 1;
    u16 f11_15 : 5;
};

class Unk_ov068_02268214 {
public:
    /* 0x000 */ u8 pad_000[0x5c];
    /* 0x05c */ s32 unk_5c;
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u8 pad_068[8];
    /* 0x070 */ s32 unk_70;
    /* 0x074 */ u8 pad_074[0x34];
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 pad_0ac[0x130 - 0xac];
    /* 0x130 */ u8 unk_130[0x204 - 0x130];
    /* 0x204 */ s32 unk_204[3];
    /* 0x210 */ u8 pad_210[0x220 - 0x210];
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ u8 pad_224[4];
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[0x23a - 0x22c];
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[4];
    /* 0x240 */ u16 unk_240;
    /* 0x242 */ u8 pad_242[2];
    /* 0x244 */ u16 unk_244;
    /* 0x246 */ u8 pad_246[4];
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 pad_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253;
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 pad_256[0x268 - 0x256];
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ u8 pad_274[8];
    /* 0x27c */ s16 unk_27c[2];
    /* 0x280 */ u8 unk_280;
    /* 0x281 */ u8 pad_281[0x2ec - 0x281];
    /* 0x2ec */ s32 unk_2ec;
    /* 0x2f0 */ s32 unk_2f0;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u8 unk_304[0x324 - 0x304];
    /* 0x324 */ u8 unk_324[0x368 - 0x324];
    /* 0x368 */ s32 unk_368;
    /* 0x36c */ s32 unk_36c;
    /* 0x370 */ u8 pad_370[4];
    /* 0x374 */ union {
        u16 unk_374;
        Unk_ov068_02268214_Flags fl_374;
    };
    /* 0x376 */ u8 pad_376[0x398 - 0x376];
    /* 0x398 */ s32 unk_398;
    /* 0x39c */ s32 unk_39c;

    BOOL func_ov068_022685ec();
    void func_ov068_02268608();
    void func_ov068_0226867c();
    void func_ov068_02268740();
    void func_ov068_02268214();
    void func_ov068_022687c0();
    void func_ov068_022687e8(s32 *p);
    BOOL func_ov068_02268a30(s16 *out, s32 *dist, s32 *pos);
    void func_ov068_02268864(s16 *p, s32 a, s32 b, u8 thr, s32 sc);
};

extern "C" {
extern s32 data_020c7c1c;
extern u8 *data_021c47c4;

s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffd070(Unk_ov068_02268608_Vec *out, void *a, void *b);
void func_02090330(s32 a, void *v, s32 b, void *h);
void func_02003e70(void *a, s32 b, s32 c, s32 d);
void func_ov003_02220db0(void *a, s32 b);
void *func_0209c0ac(void *);
void func_02106054(void *, s32, s32);
s32 func_02002bdc(void *, void *);
s32 func_02063b8c(s32);
s32 func_02133150(s32 a, s32 b);
void func_ov003_0222e328(void *v, s32 a);
s32 func_ov003_0221d0c8(void *a, void *b);
s32 func_ov003_0221d118(void *a, void *b, s32 c);
s32 func_ov003_0222d1dc(s32 a);
s32 func_ov003_0222dec8(s32 a, void *b);
void func_0204ee10(s32 *x, s32 *y, void *pos);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
s32 func_020494bc(void *cell);
s32 func_020e9650(void *a, void *b);
void func_ov068_022689c8(s32 code, s32 *v);
void *func_ov003_0222ead4(void *self);
s32 func_ov003_02212d28(void *o, s32 st);
s32 func_ov003_022135c4(void *o, s32 a);
s32 func_020e96a4(void *a, void *b);
s32 func_020e7b98(s32 x, s32 z);
s32 func_020e780c(s32 a, s32 b);
BOOL func_0204bd14(u16 *p);
s32 func_02031218(s32 x, s32 y);
s32 func_020af608(void *tbl, s32 a, s32 b, s32 c);
void func_020af3fc();
void func_020339bc(void *o, void *pos, s32 a, s32 b);
s32 func_02033914(void *o, s32 f);
void func_02033988(void *o);
void func_0204edd8(void *out, void *in);
u16 *func_0204eba0(void *grid, void *pos, u32 z);
extern u8 data_021ed2e6[];
}

#define FX32_CONST(x) ((s32)((x) > 0 ? (x) * 4096.0f + 0.5f : (x) * 4096.0f - 0.5f))

BOOL Unk_ov068_02268214::func_ov068_022685ec() {
    unk_374 |= 0x10;
    unk_374 &= ~0x20;
    return TRUE;
}

void Unk_ov068_02268214::func_ov068_02268608() {
    Unk_ov068_02268608_Vec v;
    u16 h;
    v.x = unk_5c;
    v.y = unk_60;
    v.z = unk_64;
    v.y = data_020c7c1c + 0x100;
    h = func_01ffc5a4(unk_268, 0x1000);
    func_02090330(0x3f, &v, 0, &h);
    func_02003e70(unk_324, 0x821, 0x7f, 0);
    func_ov003_02220db0(&unk_5c, 0x5000);
}

void Unk_ov068_02268214::func_ov068_0226867c() {
    Unk_ov068_02268608_Vec v;
    u16 h;
    func_01ffd070(&v, &unk_5c, unk_304);
    v.y = v.y + (unk_268 - 0x400);
    h = func_01ffc5a4(unk_268, 0x1000);
    func_02090330(0x3e, &v, 0, &h);
    func_02003e70(unk_324, 0x81f, 0x7f, 0);
}

extern "C" s32 func_ov068_022686e8(s32 v) {
    if (v < 0x99a) {
        return 3;
    }
    if (v < 0xb33) {
        return 2;
    }
    if (v < 0xccd) {
        return 1;
    }
    if (v < 0xe66) {
        return 0;
    }
    if (v < 0x1000) {
        return 1;
    }
    if (v < 0x119a) {
        return 2;
    }
    return 3;
}

void Unk_ov068_02268214::func_ov068_02268740() {
    if ((unk_270 & 1) != 0) {
        unk_a8 = 0;
    } else {
        unk_a8 = unk_a8 + 0x6d;
        if (unk_a8 > 0x200) {
            unk_a8 = 0x200;
        }
    }
    unk_60 = unk_60 - unk_a8;
    if (fl_374.f6 == 0 && fl_374.f10 == 0) {
        unk_5c = unk_5c + unk_2ec;
        unk_64 = unk_64 + unk_2f0;
    }
}

void Unk_ov068_02268214::func_ov068_022687c0() {
    func_02106054(func_0209c0ac(unk_130), 0, 0x1f);
    unk_251 = 0x12;
}

void Unk_ov068_02268214::func_ov068_022687e8(s32 *p) {
    if (*p > 0 && unk_24a == 0 && unk_254 >= unk_255) {
        unk_240 = func_02002bdc(p, unk_204);
        unk_244 = (func_02063b8c(4) + 7) * 20;
        unk_251 = 7;
        unk_24a = 1;
        unk_220 = unk_228;
    }
}

extern "C" void func_ov068_022689c8(s32 code, s32 *v) {
    if (code == 1 || code == 4) {
        v[0] += func_01ffc5a4(-0x1000, 0x10000);
        v[1] = func_01ffc5a4(0x10000, 0x10000);
        v[2] += func_01ffc5a4(-0x4000, 0x10000);
    } else {
        v[1] = func_01ffc5a4(0x9000, 0x10000);
        v[2] += func_01ffc5a4(0x3000, 0x10000);
    }
}

void Unk_ov068_02268214::func_ov068_02268864(s16 *p, s32 a, s32 b, u8 thr, s32 sc) {
    u32 flag = unk_24b;
    u32 rnd = (u8)func_02063b8c(100);
    s32 *d = unk_204;
    s32 vec[3];
    if (unk_24f % b == 0 && rnd > thr) {
        if (flag == 0) {
            flag = 1;
        } else {
            flag = 0;
        }
        unk_24b = flag;
    }
    if (rnd > unk_252) {
        if (flag != 0) {
            *p = *p + a;
        } else {
            *p = *p - a;
        }
    }
    func_ov003_0222e328(vec, *p);
    unk_23a = *p;
    if (unk_24a != 0) {
        float f = 1.25f;
        if (unk_24d == 10 || unk_24d == 0x33) {
            f = 1.5f;
        }
        d[0] += func_01ffcb0c(func_01ffcb0c(FX32_CONST(f), sc), vec[0]);
        d[2] += func_01ffcb0c(func_01ffcb0c(FX32_CONST(f), sc), vec[2]);
    } else {
        d[0] += func_01ffcb0c(sc, vec[0]);
        d[2] += func_01ffcb0c(sc, vec[2]);
    }
}

BOOL Unk_ov068_02268214::func_ov068_02268a30(s16 *out, s32 *dist, s32 *pos) {
    u32 x;
    void *p = unk_204;
    u32 t = *(u8 *)&unk_24d;
    BOOL ok;
    if (t == 0x33) {
        if (func_ov003_0221d0c8(pos, p) != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (func_ov003_0221d118(pos, p, func_ov003_0222d1dc((s8)t)) != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    if (ok != 0) {
    s32 gx = 0;
    s32 gy = 0;
    func_0204ee10(&gx, &gy, pos);
    x = gx;
    u32 y = gy;
    s32 hx = (s32)x >> 4;
    s32 hy = (s32)y >> 4;
    u16 *cell = func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    if ((u8)(t + 0xfe) <= 1) {
        if (func_ov003_0222dec8((s8)t, cell) == 0) {
            return FALSE;
        }
    }
    if (t != 0x33) {
        func_ov068_022689c8((s8)func_020494bc(cell), pos);
    } else {
        pos[0] += 0x1000;
        pos[1] = func_01ffc5a4(0xb000, 0x10000);
        pos[2] += 0x1000;
    }
    *out = func_02002bdc(p, pos);
    *out = *out - unk_23a;
    if (*out > 0x38e) {
        *out = 0x38e;
    } else if (*out < -0x38e) {
        *out = -0x38e;
    }
    *dist = func_020e9650(pos, p);
    return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov068_02268214_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0xfc && *p <= 0xfd) {
        r = TRUE;
    }
    return r;
}

void Unk_ov068_02268214::func_ov068_02268214() {
    u8 *grid = data_021c47c4;
    s32 sx, sy;
    u16 cell;
    u32 objA[16];
    u32 objB[16];
    u32 objC[4];
    s32 d, t;
    unk_26c = unk_268;
    s32 a = unk_2f0;
    s32 sum = func_01ffcb0c(unk_2ec, unk_2ec) + func_01ffcb0c(a, a);
    if (unk_39c == 0 && unk_398 == 0 && sum > 0 && unk_268 >= 0xa00 && fl_374.f6 != 0) {
        u8 *o = (u8 *)func_ov003_0222ead4(this);
        if (o != 0 && *(s32 *)(o + 0x268) >= 0xa00) {
            d = func_020e96a4(&unk_5c, o + 0x5c);
            t = func_01ffc5a4(0, 0x64000) + 0x400;
            func_0204ee10(&sx, &sy, o + 0x5c);
            cell = 0xfff1;
            if (grid != 0) {
                u32 x = sx;
                u32 y = sy;
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *c = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (c != 0) {
                    cell = *c;
                }
            }
            if (func_0204bd14(&cell) == 0 && o != 0 && d < t + (unk_268 + *(s32 *)(o + 0x268)) &&
                *(s32 *)(o + 0x39c) == 0 && *(s32 *)(o + 0x398) == 0) {
                s32 r = func_02031218(sx, sy);
                switch (r) {
                case 0:
                case 1:
                    s32 lv;
                    lv = func_ov068_022686e8(func_01ffc5a4(unk_268, *(s32 *)(o + 0x268)));
                    s32 res = func_020af608(data_021ed2e6, unk_268, *(s32 *)(o + 0x268), lv);
                    if (res != -1) {
                        Unk_ov068_02268214_Flags &of = *(Unk_ov068_02268214_Flags *)(o + 0x374);
                        of.f0_1 = res;
                        fl_374.f0_1 = of.f0_1;
                        of.f2_3 = lv;
                        fl_374.f2_3 = of.f2_3;
                        of.f8 = 1;
                        fl_374.f8 = of.f8;
                        func_ov003_02212d28(this, 8);
                        func_ov003_02212d28(o, 7);
                        if (lv == 0) {
                            func_020af3fc();
                        }
                        return;
                    }
                }
            }
        }
    }
    func_ov068_02268740();
    func_020339bc(objA, &unk_5c, 0, 0);
    if (func_02033914(objA, 0) < 0) {
        func_ov003_02212d28(this, 1);
        func_02033988(objA);
        return;
    }
    func_020339bc(objB, &unk_5c, 1, 0);
    if (objB[12] == 1) {
        switch (objB[13]) {
        case 0x16:
        case 0x17:
            func_ov003_02212d28(this, 5);
            func_02033988(objB);
            func_02033988(objA);
            return;
        }
    }
    func_02033988(objB);
    if (grid != 0) {
        func_0204edd8(objC, &unk_5c);
        u16 *c = func_0204eba0(grid, &unk_5c, 0);
        if (c != 0 && Unk_ov068_02268214_InRange(c) != 0) {
            if (func_020e9650(objC, &unk_5c) < 0x1000) {
                u8 *o = (u8 *)func_ov003_0222ead4(this);
                if (o != 0 && *(s32 *)(o + 0x39c) == 0 && *(s32 *)(o + 0x398) == 4) {
                    if (func_020e9650(o + 0x5c, &unk_5c) > *(s32 *)(o + 0x268) + unk_268) {
                        if (func_ov003_02212d28(this, 4) != 0) {
                            func_02033988(objA);
                            return;
                        }
                    }
                } else {
                    if (func_ov003_02212d28(this, 4) != 0) {
                        func_02033988(objA);
                        return;
                    }
                }
            }
        }
    }
    unk_368 = unk_2ec;
    unk_36c = unk_64 - unk_70;
    if (unk_39c == 0 && unk_398 == 0 && fl_374.f6 == 0) {
        s32 v36c = unk_36c;
        u32 n;
        s32 ang;
        u32 i;
        s32 m = func_01ffcb0c(unk_368, unk_368) + func_01ffcb0c(v36c, v36c);
        if (m >= func_01ffc5a4(0x12c000, 0x2710000)) {
            n = unk_280;
            if (n != 0) {
                ang = func_020e7b98(unk_368, unk_36c);
                for (i = 0; i < n; i++) {
                    if (func_020e780c((s16)(unk_27c[i] + 0x8000), ang) < 0x1000) {
                        if (func_ov003_022135c4(this, 1) != 0) {
                            func_02033988(objA);
                            return;
                        }
                    }
                }
            }
        }
    }
    func_02033988(objA);
}

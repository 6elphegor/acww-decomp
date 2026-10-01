// mwcc-version: 1.2/base
#include "types.h"

#define func_02033914 _ZN12Unk_0203389c13func_02033914Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define func_020af608 _ZN12Unk_020af53c13func_020af608Ejjj

struct Unk_ov068_022678c4_Ent {
    u32 a, b, c, d;
};

struct Unk_ov068_022678c4_V {
    s32 x, y, z;
    Unk_ov068_022678c4_V(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov068_022678c4_Vv {
    s32 x, y, z;
};

struct Unk_ov068_022678c4_Src {
    u8 pad_00[0x268];
    s32 unk_268;
};

struct Unk_ov068_022678c4_Rec {
    u8 pad_00[0x8e];
    u16 unk_8e;
};

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
};

extern "C" {
void *func_0209750c();
void func_0203d67c(void *p);
BOOL func_0203d704(void *p, s32 a);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_0201bc28(void *p, void *q);
void func_0201bda8(void *p, u16 *q);
u32 func_020ae02c(void *p);
u32 func_020e7518(void *p);
void func_020ed188(void *p);
void func_02034d70(u32 a);
void func_02034d84(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_0203a844();
BOOL func_020951b8(s32 a);
void *func_020947f0(s32 a);
void func_02094b0c(void *v, u32 a, u32 b);
void func_02094f48(s32 a, s32 b);
void func_020a02d0();
BOOL func_020a0304();
BOOL func_020a0318();
void func_02097ff4(void *p, s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_ov003_02212ebc(void *p);
s32 func_ov003_02212d28(void *o, s32 st);
extern u16 data_020c6cc8;
extern u32 data_021ed104;
extern u32 data_021f4880[];
extern const char *data_ov068_0226fd68[];
extern const char *data_ov068_0226fd78[];
extern u8 *data_021c47c4;
extern s16 data_02135f44[];
void *func_ov003_0222ead4(void *self);
u8 *func_020af3f4();
void func_0204edd8(void *, void *);
void func_02003e70(void *, s32, s32, s32);
void func_0204ee10(s32 *, s32 *, void *);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
u16 func_0204b10c(u32);
void func_0204eb30(void *m, u16 *v, s32 x, s32 y, s32 z);
void func_ov003_02212e50(void *);
s32 func_ov003_022135c4(void *o, s32 a);
void func_020339bc(void *, void *, s32, s32);
s32 func_02033988(void *o);
void func_020e9960(void *, void *, void *);
void func_020e94f8(void *);
void func_020e9888(void *, s32);
s32 func_020e9650(void *, void *);
void func_020e7820(void *, s32, s32, s32);
s32 func_020e9688(void *);
Unk_ov068_022678c4_Rec *func_02095204(s32);
extern s32 data_020c7c1c;
void func_01ffd070(Unk_ov068_02268608_Vec *out, void *a, void *b);
void func_02090330(s32 a, void *v, s32 b, void *h);
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
s32 func_020494bc(void *cell);
s32 func_020e96a4(void *a, void *b);
s32 func_020e7b98(s32 x, s32 z);
s32 func_020e780c(s32 a, s32 b);
BOOL func_0204bd14(u16 *p);
s32 func_02031218(s32 x, s32 y);
s32 func_020af608(void *tbl, s32 a, s32 b, s32 c);
void func_020af3fc();
s32 func_02033914(void *o, s32 f);
u16 *func_0204eba0(void *grid, void *pos, u32 z);
extern u8 data_021ed2e6[];
s32 _ZN18Unk_ov068_0226821419func_ov068_02268608Ev(void *);
void _ZN18Unk_ov068_0226821419func_ov068_0226867cEv(void *);
void _ZN18Unk_ov068_0226821419func_ov068_02268740Ev(void *);
s32 func_ov068_022686e8(s32 v);
}

class Unk_ov068_02267584 {
public:
    void func_ov068_02267584();
    BOOL func_ov068_02267614();
    void func_ov068_02267668();
    BOOL func_ov068_022676f8();
    void func_ov068_0226775c();
    BOOL func_ov068_022677cc();
    void func_ov068_02267814();

    u8 pad_00[0x5c];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0xa8 - 0x68];
    s32 unk_a8;
    u8 pad_ac[0x268 - 0xac];
    s32 unk_268;
    s32 unk_26c;
    u8 pad_270[0x304 - 0x270];
    s32 unk_304;
    s32 unk_308;
    s32 unk_30c;
    s32 unk_310;
    s32 unk_314;
    u8 pad_318[0x374 - 0x318];
    u16 unk_374;
    u16 pad_376;
    s32 unk_378;
    s32 unk_37c;
    s32 unk_380;
    u8 pad_384[0x392 - 0x384];
    s16 unk_392;
    u8 unk_394;
    u8 unk_395;
};

class Unk_ov068_022678c4 {
public:
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0x50];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ u8 pad_6c[4];
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 pad_74[0x34];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u8 pad_ac[0x268 - 0xac];
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ s32 unk_274;
    /* 0x278 */ u8 pad_278[0x2ec - 0x278];
    /* 0x2ec */ s32 unk_2ec;
    /* 0x2f0 */ s32 unk_2f0;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u32 unk_304;
    /* 0x308 */ s32 unk_308;
    /* 0x30c */ u32 unk_30c;
    /* 0x310 */ s32 unk_310;
    /* 0x314 */ s32 unk_314;
    /* 0x318 */ u8 pad_318[0x324 - 0x318];
    /* 0x324 */ u8 unk_324[0x364 - 0x324];
    /* 0x364 */ u8 unk_364;
    /* 0x365 */ u8 pad_365[0x374 - 0x365];
    /* 0x374 */ u16 unk_374_lo : 2;
    u16 unk_374_b2 : 2;
    u16 unk_374_b4 : 1;
    u16 unk_374_b5 : 1;
    /* 0x376 */ u8 pad_376[2];
    /* 0x378 */ s32 unk_378;
    /* 0x37c */ s32 unk_37c;
    /* 0x380 */ s32 unk_380;
    /* 0x384 */ s32 unk_384[3];
    /* 0x390 */ u8 pad_390[2];
    /* 0x392 */ u16 unk_392;
    /* 0x394 */ u8 pad_394;
    /* 0x395 */ u8 unk_395;
    /* 0x396 */ u16 unk_396;

    s32 func_ov068_022678c4();
    void func_ov068_022679bc();
    s32 func_ov068_02267aa0();
    void func_ov068_02267b38();
    s32 func_ov068_02267bf0();
    void func_ov068_02267c58();
    s32 func_ov068_02267d08();
    void func_ov068_02267d70();
    s32 func_ov068_02267e04();
    void func_ov068_02267e5c();
    s32 func_ov068_02267e74();
    void func_ov068_02267ec4();
    s32 func_ov068_02267f8c();
    void func_ov068_02268008();
    s32 func_ov068_022680f0();
};

#define FX32_CONST(x) ((s32)((x) > 0 ? (x) * 4096.0f + 0.5f : (x) * 4096.0f - 0.5f))

static inline BOOL Unk_ov068_02268214_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0xfc && *p <= 0xfd) {
        r = TRUE;
    }
    return r;
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

void Unk_ov068_02268214::func_ov068_0226867c() {
    Unk_ov068_02268608_Vec v;
    u16 h;
    func_01ffd070(&v, &unk_5c, unk_304);
    v.y = v.y + (unk_268 - 0x400);
    h = func_01ffc5a4(unk_268, 0x1000);
    func_02090330(0x3e, &v, 0, &h);
    func_02003e70(unk_324, 0x81f, 0x7f, 0);
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

BOOL Unk_ov068_02268214::func_ov068_022685ec() {
    unk_374 |= 0x10;
    unk_374 &= ~0x20;
    return TRUE;
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

s32 Unk_ov068_022678c4::func_ov068_022680f0() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    unk_26c = 0;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_60 = 0;
    unk_a8 = 0;
    unk_2ec = func_01ffcb0c(unk_2ec, 0x119a);
    unk_2f0 = func_01ffcb0c(unk_2f0, 0x119a);
    unk_364 = 0;
    Unk_ov068_022678c4_V v(unk_2ec, 0, unk_2f0);
    s32 d = func_020e9688(&v);
    if (d < 0x2b8) {
        if (d == 0) {
            Unk_ov068_022678c4_Rec *r = func_02095204(4);
            if (r) {
                s32 a = (r->unk_8e >> 4) * 2;
                unk_2ec = func_01ffcb0c(0x2b8, data_02135f44[a]);
                unk_2f0 = func_01ffcb0c(0x2b8, data_02135f44[a + 1]);
                unk_5c = unk_68 + unk_2ec;
                unk_64 = unk_70 + unk_2f0;
            }
        } else {
            s32 r = func_01ffc5a4(0x2b8, d);
            unk_2ec = func_01ffcb0c(unk_2ec, r);
            unk_2f0 = func_01ffcb0c(unk_2f0, r);
        }
    }
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02268008() {
    u32 buf[17];
    s32 lim;
    s32 t = unk_268;
    t = t + (t >> 1);
    func_020e7820(&unk_26c, t, 0xcc, t);
    unk_5c += unk_2ec;
    unk_64 += unk_2f0;
    if (unk_364 < 0xc) {
        unk_a8 = unk_a8 + 1;
        unk_60 -= 0x100;
        unk_364 = unk_364 + 1;
    } else {
        unk_a8 = unk_a8 + (func_01ffc5a4(0, 0x2710000) + 0xe9);
        unk_60 = unk_60 - unk_a8;
    }
    if (unk_274 & 2) {
        func_020339bc(buf, &unk_5c, 0, 0);
        lim = (s32)buf[15] - unk_268 - 0x200;
        if (unk_60 < lim) {
            _ZN18Unk_ov068_0226821419func_ov068_02268608Ev(this);
            unk_60 = lim;
            func_ov003_02212d28(this, 2);
        }
        func_02033988(buf);
    }
}

s32 Unk_ov068_022678c4::func_ov068_02267f8c() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    unk_392 = 0;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    u32 *g = data_021f4880;
    unk_304 = g[0];
    unk_308 = g[1];
    unk_30c = g[2];
    unk_a8 = 0;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267ec4() {
    u32 buf[16];
    s32 t = unk_268;
    t = t + (t >> 1);
    func_020e7820(&unk_26c, t, 0x200, t);
    func_020339bc(buf, &unk_5c, 0, 0);
    s32 *p = (s32 *)&buf[9];
    unk_5c += p[0] >> 5;
    unk_64 += p[2] >> 5;
    unk_268 = func_01ffcb0c(unk_268, 0xfd7);
    unk_308 = func_01ffcb0c(0x100, data_02135f44[(unk_392 >> 4) * 2]);
    unk_392 = (s16)unk_392 + 0x400;
    if (unk_268 < 0x80) {
        unk_268 = 0;
        func_020ed188(this);
    }
    _ZN18Unk_ov068_0226821419func_ov068_02268740Ev(this);
    unk_60 = (s32)buf[15] - unk_268 - 0x200;
    func_02033988(buf);
}

s32 Unk_ov068_022678c4::func_ov068_02267e74() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    _ZN18Unk_ov068_0226821419func_ov068_0226867cEv(this);
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267e5c() {
    unk_26c = unk_268;
    func_020ed188(this);
}

s32 Unk_ov068_022678c4::func_ov068_02267e04() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    func_0204edd8(unk_384, &unk_5c);
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267d70() {
    unk_26c = unk_268;
    s32 v[3];
    func_020e9960(v, unk_384, &unk_5c);
    func_020e94f8(v);
    func_020e9888(v, 0x80);
    unk_5c += v[0];
    unk_64 += v[2];
    _ZN18Unk_ov068_0226821419func_ov068_02268740Ev(this);
    s32 d = func_020e9650(&unk_5c, unk_384);
    s32 lim = 0;
    if (d < 0x1000) {
        lim = -((0x1000 - d) / 5);
    }
    if (unk_60 < lim) {
        unk_60 = lim;
        if (d < 0x333) {
            func_ov003_022135c4(this, 1);
        }
    }
}

s32 Unk_ov068_022678c4::func_ov068_02267d08() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_378 = unk_5c;
    unk_37c = unk_60;
    unk_380 = unk_64;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267c58() {
    unk_2f0 += func_01ffc5a4(0, 0x3e8000) + 0x158;
    unk_5c += unk_2ec;
    unk_64 += unk_2f0;
    s32 d = unk_64 - unk_380;
    if (d < 0) {
        d = -d;
    }
    unk_60 = -func_01ffcb0c(d, 0x3d7);
    static s32 thr = func_01ffc5a4(0, 0x64000) + 0x3000;
    if (d >= thr) {
        func_ov003_02212d28(this, 6);
    }
}

s32 Unk_ov068_022678c4::func_ov068_02267bf0() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_392 = 0;
    unk_2f0 >>= 1;
    _ZN18Unk_ov068_0226821419func_ov068_02268608Ev(this);
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267b38() {
    u32 buf[16];
    func_020339bc(buf, &unk_5c, 0, 0);
    s32 *p = (s32 *)&buf[9];
    unk_5c += p[0] >> 5;
    unk_64 += p[2] >> 5;
    unk_268 = func_01ffcb0c(unk_268, 0xf85);
    unk_308 = func_01ffcb0c(0x100, data_02135f44[(unk_392 >> 4) * 2]);
    unk_392 = (s16)unk_392 + 0x400;
    if (unk_268 < 0x100) {
        unk_268 = 0;
        func_020ed188(this);
    }
    s32 lim = (s32)buf[15] - unk_268 - 0x200;
    unk_60 -= 0x400;
    if (unk_60 < lim) {
        unk_60 = lim;
    }
    func_02033988(buf);
}

s32 Unk_ov068_022678c4::func_ov068_02267aa0() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    func_0204edd8(&unk_378, &unk_5c);
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_310 = func_01ffc5a4(unk_378 - unk_5c, 0x10000);
    unk_314 = func_01ffc5a4(unk_380 - unk_64, 0x10000);
    unk_395 = 0;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_022679bc() {
    unk_26c = unk_268;
    unk_5c += unk_310;
    unk_60 = 0;
    unk_64 += unk_314;
    if (unk_395++ >= 0x10) {
        unk_5c = unk_378;
        unk_60 = unk_37c;
        unk_64 = unk_380;
        void *g = data_021c47c4;
        if (g) {
            s32 x, y;
            func_0204ee10(&x, &y, &unk_5c);
            s32 tx = *(volatile s32 *)&x;
            s32 ty = *(volatile s32 *)&y;
            s32 hx = tx >> 4;
            s32 hy = ty >> 4;
            u16 *c = (u16 *)func_0204ebd8(g, hx, hy, tx - (hx << 4), ty - (hy << 4), 0);
            if (c) {
                unk_396 = *c;
            }
            u16 v = func_0204b10c(unk_374_lo);
            func_0204eb30(g, &v, x, y, 0);
        }
        func_ov003_02212e50(&unk_396);
        func_ov003_02212d28(this, 9);
    }
}

s32 Unk_ov068_022678c4::func_ov068_022678c4() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    Unk_ov068_022678c4_Src *o = (Unk_ov068_022678c4_Src *)func_ov003_0222ead4(this);
    func_0204edd8(&unk_378, (u8 *)o + 0x5c);
    unk_37c += ((o->unk_268 * 2 - (o->unk_268 >> 3)) - (unk_268 >> 3)) - 0x400;
    unk_a8 = -(func_01ffc5a4(0, 0x3e8000) + 0x8f2);
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_310 = func_01ffc5a4(unk_378 - unk_5c, 0x10000);
    unk_314 = func_01ffc5a4(unk_380 - unk_64, 0x10000);
    unk_395 = 0;
    func_02003e70(unk_324, 0x81e, 0x7f, 0);
    return 1;
}

void Unk_ov068_02267584::func_ov068_02267814() {
    unk_26c = unk_268;
    unk_5c += unk_310;
    unk_64 += unk_314;
    unk_a8 += func_01ffc5a4(0, 0x2710000) + 0xdf;
    unk_60 -= unk_a8;
    if (unk_a8 >= 0) {
        s32 t = unk_37c - 0x200;
        if (unk_60 < t) {
            unk_60 = t;
            func_ov003_02212d28(this, 0xa);
        }
    }
    if (unk_395++ >= 0x10) {
        unk_5c = unk_378;
        unk_64 = unk_380;
    }
}

BOOL Unk_ov068_02267584::func_ov068_022677cc() {
    unk_374 &= ~0x10;
    unk_374 |= 0x20;
    unk_392 = 0;
    unk_a8 = func_01ffc5a4(unk_37c - unk_60, 0x1333);
    return TRUE;
}

void Unk_ov068_02267584::func_ov068_0226775c() {
    unk_26c = unk_268;
    unk_5c += unk_310;
    unk_64 += unk_314;
    unk_60 += unk_a8;
    if (unk_60 > unk_37c) {
        unk_60 = unk_37c;
    }
    if (unk_395++ >= 0x10) {
        unk_60 = unk_37c;
        func_ov003_02212d28(this, 0xb);
    }
}

BOOL Unk_ov068_02267584::func_ov068_022676f8() {
    unk_374 &= ~0x10;
    unk_374 |= 0x20;
    func_ov003_02212ebc(&unk_5c);
    unk_304 = data_021f4880[0];
    unk_308 = data_021f4880[1];
    unk_30c = data_021f4880[2];
    unk_392 = 0;
    unk_394 = 0xc;
    return TRUE;
}

void Unk_ov068_02267584::func_ov068_02267668() {
    s32 a;
    unk_26c = unk_268;
    a = data_02135f44[((u16)unk_392 >> 4) * 2 + 1];
    unk_304 = -func_01ffcb0c(0x100, a);
    unk_30c = func_01ffcb0c(0x100, a);
    unk_392 = unk_392 + 0x3800;
    if (unk_394 != 0) {
        unk_394--;
    }
    if (unk_394 == 0) {
        _ZN18Unk_ov068_0226821419func_ov068_0226867cEv(this);
        func_020ed188(this);
    }
}

BOOL Unk_ov068_02267584::func_ov068_02267614() {
    unk_374 &= ~0x10;
    unk_374 |= 0x20;
    unk_304 = data_021f4880[0];
    unk_308 = data_021f4880[1];
    unk_30c = data_021f4880[2];
    unk_392 = 0;
    unk_394 = 0xc;
    return TRUE;
}

void Unk_ov068_02267584::func_ov068_02267584() {
    s32 a;
    unk_26c = unk_268;
    a = data_02135f44[((u16)unk_392 >> 4) * 2 + 1];
    unk_304 = func_01ffcb0c(0x100, a);
    unk_30c = -func_01ffcb0c(0x100, a);
    unk_392 = unk_392 + 0x5000;
    if (unk_394 != 0) {
        unk_394--;
    }
    if (unk_394 == 0) {
        _ZN18Unk_ov068_0226821419func_ov068_0226867cEv(this);
        func_020ed188(this);
    }
}


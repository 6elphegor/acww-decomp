#include "types.h"

struct Unk_02070790_Game {
    u8 pad[0x64];
    s32 unk_64;
};

struct Unk_02070b68_Rec {
    Unk_02070b68_Rec();
    ~Unk_02070b68_Rec();
    long long unk_000[0x40];
    u16 unk_200;
    u8 unk_202[8];
    u16 unk_20a;
    u8 unk_20c[8];
    s8 unk_214;
    u8 unk_215;
    u8 unk_216[16];
    u8 unk_226;
};

struct Unk_02070e4c_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
    u32 f : 3;
};

static inline BOOL Unk_02070fbc_In(volatile u16 *p, u32 lo, u32 hi) {
    u32 v = *p;
    u32 w = *p;
    BOOL r = FALSE;
    if (w >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

struct Unk_02004b60 {
    u16 v;
    Unk_02004b60() : v(0xfff1) {}
    ~Unk_02004b60();
};

struct Unk_020707ec_Grid {
    u8 *cells;
    s32 w;
    s32 h;
};

struct Unk_020707ec_Rooms {
    u8 pad[0x44];
};

class Unk_0206022c;
class Unk_02060a90;
extern "C" {
extern Unk_02070790_Game *data_020cbb18;
extern u8 data_021dfd8c[];
extern u8 data_021ed2d4[];
extern u8 data_021e6e4c[];
extern Unk_0206022c data_021e58a8;

BOOL func_02072e44(void *p);
void *func_02097520(s32 a);
void *func_020986d4(void *p);
s32 func_02071c88(void *p, s32 i);
Unk_020707ec_Grid *func_0204da0c(void);
Unk_020707ec_Grid *func_0204d528(s32 i);
u16 *func_02037558(void *cell, s32 x, s32 y, s32 z);
BOOL func_02037590(void *cell, u16 *t, s32 x, s32 y, s32 v);
s32 func_02133150(s32 a, s32 b);
void *func_020706c4(s32 t, s32 i);
void func_0207116c(s32 t, s32 i);
void func_020728d4(void *g);
void func_020728a4(void *g, void *p, s32 n);
void func_02072824(void *g, s32 a, s32 n);
void *func_0207bf60(void *a, s32 x);
s32 func_020805c4(void *p);
s32 func_020030b4(s32 p);
u8 *func_0207f968(void *p);
s32 func_0207e268(void *p);
s32 func_0209a610(s32 p);
s32 func_0209b354(s32 p);
s32 func_02063b8c(s32 n);
void func_020ad8e8(void *tbl, s32 i, u16 *out);
void func_02061478(u16 *dst, u16 *src);
s32 func_02071b00(void *p, s32 i);
s32 func_02071e04(s32 p);
s32 func_02071ee8(s32 p);
}

class Unk_02060a90 {
public:
    u8 pad[0x448];
    void func_020607e0(u16 *src, u32 flag);
    void func_02060808(u16 *src, u32 flag);
    u16 *func_02060834(s32 *out);
    u16 *func_02060850(s32 *out);
};

class Unk_0206022c {
public:
    Unk_02060a90 *func_0206052c(s32 idx);
};


extern "C" {
s32 func_02070e20(s32 t);
s32 func_020707b4(s32 a, s32 b);
BOOL func_02070b68(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_02070fbc(s32 a, s32 b);
void func_020707ec(s32 p);

s32 func_02070790(s32 x) { return func_020707b4(2, x); }
s32 func_0207079c(s32 x) { return func_020707b4(1, x); }
s32 func_020707a8(s32 x) { return func_020707b4(0, x); }

s32 func_020707b4(s32 a, s32 b) {
    if (func_02072e44(data_020cbb18)) {
        void *p = func_02097520(a);
        if (p) {
            return func_02071c88(func_020986d4(p), b);
        }
    }
    return 0;
}

s32 func_02070e20(s32 t) {
    Unk_02070790_Game *g = data_020cbb18;
    if (func_02072e44(g) && t == 9) {
        return g->unk_64;
    }
    return t;
}

BOOL func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_02070e4c_Bits bits;
    s32 ta = func_02070e20(a);
    s32 tc = func_02070e20(c);
    if (tc == 7) {
        return FALSE;
    }
    Unk_02070b68_Rec *r4 = (Unk_02070b68_Rec *)func_020706c4(ta, b);
    Unk_02070b68_Rec *r6 = (Unk_02070b68_Rec *)func_020706c4(tc, d);
    *r6 = *r4;
    func_0207116c(tc, d);
    if (*(u8 *)&e) {
        if (func_02072e44(data_020cbb18)) {
            bits.a = ta;
            bits.b = b;
            bits.c = tc;
            bits.d = d;
            bits.e = 0;
            bits.f = 0;
            Unk_02070790_Game *g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, &bits, 4);
            func_02072824(g, 0x15, 4);
        }
    }
    return TRUE;
}

BOOL func_02070b68(u32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_02070e4c_Bits bits;
    s32 ta = func_02070e20(a);
    s32 tc = func_02070e20(c);
    if (ta == 7 || tc == 7) {
        return FALSE;
    }
    Unk_02070b68_Rec *r5 = (Unk_02070b68_Rec *)func_020706c4(ta, b);
    Unk_02070b68_Rec *r4 = (Unk_02070b68_Rec *)func_020706c4(tc, d);
    static Unk_02070b68_Rec tmp;
    tmp = *r4;
    *r4 = *r5;
    *r5 = tmp;
    func_0207116c(ta, b);
    func_0207116c(tc, d);
    if (*(u8 *)&e) {
        if (func_02072e44(data_020cbb18)) {
            bits.a = ta;
            bits.b = b;
            bits.c = tc;
            bits.d = d;
            bits.e = 1;
            bits.f = 0;
            Unk_02070790_Game *g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, &bits, 4);
            func_02072824(g, 0x15, 4);
        }
    }
    return TRUE;
}

BOOL func_02070fbc(s32 a, s32 b) {
    void *p = func_0207bf60(data_021dfd8c, a);
    if (p != NULL) {
        if (func_020030b4(func_020805c4(p)) != 0) {
            u32 r6;
            s32 mode;
            r6 = *func_0207f968(p);
            mode = func_0209b354(func_0209a610(func_0207e268(p)));
            u32 rnd = func_02063b8c(100);
            s32 fa = 0;
            s32 fb = 0;
            s32 fc = 0;
            u32 i;
            u32 j;
            u16 bufw[2];
            if (mode == 3) {
                if (rnd < 15) {
                    fa = 1;
                    fb = 1;
                } else if (rnd < 20) {
                    fa = 1;
                } else if (rnd < 30) {
                    fc = 1;
                }
            } else {
                if (rnd < 10) {
                    fa = 1;
                    fb = 1;
                } else if (rnd < 15) {
                    fc = 1;
                }
            }
            if (fc) {
                *(volatile u16 *)&bufw[0] = 0xfff1;
                BOOL z = FALSE;
                for (i = 0; i < 6; i++) {
                    func_020ad8e8(data_021ed2d4, i, &bufw[0]);
                    BOOL in1 = z;
                    u32 v = *(volatile u16 *)&bufw[0];
                    u32 w = *(volatile u16 *)&bufw[0];
                    if (w >= 0x1380 && w <= 0x139f) {
                        in1 = TRUE;
                    }
                    if (in1) break;
                    if (v >= 0x3e24 && v <= 0x3ea3) break;
                }
                {
                    BOOL in1 = FALSE;
                    u32 v = *(volatile u16 *)&bufw[0];
                    u32 w = *(volatile u16 *)&bufw[0];
                    if (w >= 0x1380 && w <= 0x139f) {
                        in1 = TRUE;
                    }
                    if (in1 || (v >= 0x3e24 && v <= 0x3ea3)) {
                        func_02061478(&bufw[1], &bufw[0]);
                    }
                }
            }
            if (fa) {
                s32 cnt = 0;
                j = 0;
                do {
                    s32 x = func_02071ee8(func_02071e04(func_02071b00(data_021e6e4c, (u8)j)));
                    if (fb) {
                        if (x == r6) cnt++;
                    } else {
                        if (x != r6) cnt++;
                    }
                    j++;
                } while (j < 8);
                if (cnt > 0) {
                    s32 pick = func_02063b8c(cnt);
                    s32 k = 0;
                    j = 0;
                    goto test2;
                loop2:
                    {
                        s32 x = func_02071ee8(func_02071e04(func_02071b00(data_021e6e4c, (u8)j)));
                        if (fb) {
                            if (x == r6) {
                                if (pick == k) goto done;
                                k++;
                            }
                        } else {
                            if (x != r6) {
                                if (pick == k) goto done;
                                k++;
                            }
                        }
                    }
                    j++;
                test2:
                    if (j < 8) goto loop2;
                done:
                    return func_02070e4c(4, j & 7, 6, (u8)a, b);
                }
            }
        }
    }
    return FALSE;
}

static inline s32 Unk_020707ec_K(u16 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return (s32)(v - lo) >> 2;
    }
    return -1;
}

static inline s32 Unk_020707ec_K2(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    if (r) {
        return (s32)(v - lo);
    }
    return -1;
}

static inline s32 Unk_020707ec_K3(BOOL f, u16 v) {
    if (f) {
        return (s32)(v - 0x1188);
    }
    return -1;
}

static inline BOOL Unk_020707ec_In(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

void func_020707ec(s32 p) {
    static Unk_02004b60 t;
    s32 i, j;
    s32 m;
    s32 idx;
    s32 y2;
    s32 x2;
    u8 *cells;
    u8 *cell;
    Unk_020707ec_Grid *g = func_0204da0c();
    if (g != NULL) {
        s32 x, y;
        for (y = 1; y < g->h - 1; y++) {
            for (x = 1; x < g->w - 1; x++) {
                if ((u32)x < (u32)g->w && (u32)y < (u32)g->h && g->cells != NULL) {
                    cell = g->cells + (y * g->w + x) * 0x28;
                } else {
                    cell = NULL;
                }
                if (cell != NULL) {
                    i = 0;
                    do {
                        j = 0;
                        do {
                            u16 *v = func_02037558(cell, j, i, 0);
                            if (v != NULL) {
                                BOOL in = FALSE;
                                if (*v >= 0xa7 && *v <= 0xc6) {
                                    in = TRUE;
                                }
                                if (in) {
                                    if (p == (s32)(*v - 0xa7) / 8) {
                                        func_02037590(cell, &t.v, j, i, 0);
                                    }
                                }
                            }
                            j++;
                        } while (j < 16);
                        i++;
                    } while (i < 16);
                }
            }
        }
    }
    m = 0;
    do {
        Unk_020707ec_Grid *g2 = func_0204d528(m);
        if (g2 != NULL) {
            if ((u8 *)g2->w > (u8 *)0 && (u8 *)g2->h > (u8 *)0 && g2->cells != NULL) {
                cells = g2->cells;
            } else {
                cells = NULL;
            }
            if (cells != NULL) {
                y2 = 0;
                do {
                    x2 = 0;
                    do {
                        u16 *v = func_02037558(cells, x2, y2, 0);
                        if (v != NULL) {
                            BOOL f = FALSE;
                            u16 val = *v;
                            if (val >= 0x3d84 && val <= 0x3e03) {
                                f = TRUE;
                            }
                            if (f) {
                                idx = ((Unk_020707ec_K(val, 0x3d84, 0x3e03) >> 3) & 3);
 if (idx == p) {
                                    func_02037590(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x3ea4 && val <= 0x3f23) {
                                idx = ((Unk_020707ec_K(val, 0x3ea4, 0x3f23) >> 3) & 3);
 if (idx == p) {
                                    func_02037590(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x3f24 && val <= 0x3fa3) {
                                idx = ((Unk_020707ec_K(val, 0x3f24, 0x3fa3) >> 3) & 3);
 if (idx == p) {
                                    func_02037590(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x4224 && val <= 0x42a3) {
                                idx = ((Unk_020707ec_K(val, 0x4224, 0x42a3) >> 3) & 3);
 if (idx == p) {
                                    func_02037590(cells, &t.v, x2, y2, 0);
                                }
                            }
                        }
                        x2++;
                    } while (x2 < 16);
                    y2++;
                } while (y2 < 16);
            }
        }
        Unk_02060a90 *e = data_021e58a8.func_0206052c(m);
        if (e != NULL) {
            u16 tmp[2];
            u16 *pv1 = e->func_02060850(NULL);
            BOOL f1 = FALSE;
            u16 v1 = *pv1;
            if (v1 >= 0x1188 && v1 <= 0x11a7) {
                f1 = TRUE;
            }
            if (f1) {
                u16 *pv2 = e->func_02060850(NULL);
                BOOL f2 = FALSE;
                u16 v2 = *pv2;
                if (v2 >= 0x1188 && v2 <= 0x11a7) {
                    f2 = TRUE;
                }
                idx = ((Unk_020707ec_K3(f2, v2) >> 3) & 3);
 if (idx == p) {
                    tmp[0] = 0x113e;
                    e->func_02060808(&tmp[0], 0);
                }
            }
            u16 *pv3 = e->func_02060834(NULL);
            BOOL f3 = FALSE;
            u16 v3 = *pv3;
            if (v3 >= 0x1188 && v3 <= 0x11a7) {
                f3 = TRUE;
            }
            if (f3) {
                u16 *pv4 = e->func_02060834(NULL);
                BOOL f4 = FALSE;
                u16 v4 = *pv4;
                if (v4 >= 0x1188 && v4 <= 0x11a7) {
                    f4 = TRUE;
                }
                idx = ((Unk_020707ec_K3(f4, v4) >> 3) & 3);
 if (idx == p) {
                    tmp[1] = 0x1182;
                    e->func_020607e0(&tmp[1], 0);
                }
            }
        }
        m++;
    } while (m < 5);
}
}

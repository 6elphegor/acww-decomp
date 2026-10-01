#pragma opt_loop_invariants off
#include "types.h"

static inline BOOL Unk_0207d774_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

namespace Unk_0207d67c_Ns {
extern "C" s32 func_0207d674(void);
}

static inline BOOL Unk_0207dd24_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline BOOL Unk_0207dd24_Check(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}
extern "C" void *func_0204ebd8(void *m, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
static inline u16 *Unk_0207de6c_Cell(void *m, s32 x, s32 y) {
    s32 hx = x >> 4, hy = y >> 4;
    return (u16 *)func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
}
extern "C" {
s32 func_0207d674(s32 a, s32 b, s32 c);
s32 func_0203c338(s32 a, s32 b, s32 c);
s32 func_0203c318(void);
s32 func_0203c304(void);
s32 func_0203c31c(void);
s32 func_0203c314(void);
s32 func_0203c2f4(void);
s32 func_02098750(void);
s32 func_02097edc(s32 a);
s32 func_0209ccd0(void);
u16 *func_0209872c(u32 a);
s32 func_020b8fe8(void);
u16 *func_02098744(u32 a);
u16 *func_02098714(u32 a);
u16 *func_020986fc(u32 a);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_02079fd8(u32 a);
s32 func_0207bb7c(void *p);
void *func_0207bd3c(void *p, void *q, u32 n);
void *func_0207aa8c(void *p, u32 n);
void func_02133ef8(void *p, u32 n);
void *func_020805c4(void *a);
s32 func_020030b4(void *a);
s32 func_02002fc8(void *a, u32 b);
s32 func_02098778(u32 a, u32 b, u32 c);
void *func_020947f0(u32 n);
void func_0204ee10(s32 *x, s32 *y, void *pos);
void *func_0204ebd8(void *m, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
extern u8 data_021dfd8c[];
extern u8 data_020e416c[];
extern void *data_021c47c4;
}

extern "C" {

BOOL func_0207d67c(void) {
    if (Unk_0207d67c_Ns::func_0207d674() == 0) {
        s32 h = (u32)func_0203c318() >> 1;
        if (func_0203c304() >= h) return TRUE;
        return FALSE;
    }
    return FALSE;
}

s32 func_0207d6a4(void) { return func_0203c31c(); }

BOOL func_0207d6ac(s32 a, s32 b, s32 c) {
    if (func_0207d6a4() == 0) {
        if (func_0207d674(a, b, c) == 0) {
            s32 h = (u32)func_0203c314() >> 1;
            if (func_0203c2f4() >= h) return TRUE;
            return FALSE;
        }
    }
    return FALSE;
}

BOOL func_0207d6e8(s32 a, s32 b) {
    if (b >= 0x6e) return TRUE;
    return FALSE;
}

BOOL func_0207d6f4(s32 a, s32 b) {
    if (b >= 0x46 && b < 0x6e) return TRUE;
    return FALSE;
}

BOOL func_0207d704(s32 a, s32 b) {
    if (b <= -0x1e) return TRUE;
    return FALSE;
}

BOOL func_0207d714(s32 a, s32 b) {
    if (b <= -0x50) return TRUE;
    return FALSE;
}

BOOL func_0207d724(void) {
    s32 t = func_02097edc(func_02098750());
    BOOL r = FALSE;
    s32 m = -1;
    if (t == m) r = TRUE;
    return r;
}

BOOL func_0207d744(void) {
    if (func_0209ccd0() == 3) return TRUE;
    return FALSE;
}

BOOL func_0207d75c(void) {
    if (func_0209ccd0() == 0) return TRUE;
    return FALSE;
}

BOOL func_0207d774(u32 a) {
    BOOL r = Unk_0207d774_R(func_0209872c(a), 0x12a8, 0x12af);
    if (r) return TRUE;
    return FALSE;
}

BOOL func_0207d7a8(void) {
    if (func_020b8fe8() == 2) return TRUE;
    return FALSE;
}

BOOL func_0207d7c0(void) {
    if (func_020b8fe8() == 1) return TRUE;
    return FALSE;
}

BOOL func_0207d7d8(u32 a) {
    u16 *p = func_02098744(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1380, 0x139f)) {
        if (*p < 0x13a0 || *p > 0x13a7) k = FALSE;
    }
    return k;
}
s32 func_0207d674(s32 a, s32 b, s32 c) { return func_0203c338(a, b, c); }

BOOL func_0207d820(u32 a) {
    BOOL k2 = TRUE;
    BOOL k1 = k2;
    if (!Unk_0207d774_R(func_02098744(a), 0x137c, 0x137c)) {
        if (!Unk_0207d774_R(func_02098714(a), 0x1408, 0x1428)) k1 = FALSE;
    }
    if (!k1) {
        if (!Unk_0207d774_R(func_020986fc(a), 0x1471, 0x1491)) k2 = FALSE;
    }
    return k2;
}

BOOL func_0207d89c(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x1406;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x1406;
    }
    return r;
}

BOOL func_0207d8e8(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13e4;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13e4;
    }
    return r;
}

BOOL func_0207d934(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13e3;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13e3;
    }
    return r;
}

BOOL func_0207d980(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13f5;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13f5;
    }
    return r;
}

BOOL func_0207d9cc(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13ea;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13ea;
    }
    return r;
}

BOOL func_0207da18(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13e6;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13e6;
    }
    return r;
}

BOOL func_0207da64(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x1405;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x1405;
    }
    return r;
}

BOOL func_0207dab0(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13bc;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13bc;
    }
    return r;
}

BOOL func_0207dafc(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13a8;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13a8;
    }
    return r;
}

BOOL func_0207db48(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13b2;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13b2;
    }
    return r;
}

BOOL func_0207db94(u32 a) {
    u16 *p = func_02098714(a);
    BOOL r;
    u16 g[2];
    if (func_0204b2d4(p)) {
        g[0] = 0x13c1;
        s32 x = func_0204b25c(p);
        r = x == func_0204b25c(&g[0]);
    } else {
        r = *p == 0x13c1;
    }
    return r;
}

BOOL func_0207dbe0(u32 a) {
    u16 *p = func_02098744(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1378, 0x1378)) {
        if (*p < 0x1379 || *p > 0x1379) k = FALSE;
    }
    return k;
}

BOOL func_0207dc1c(u32 a) {
    u16 *p = func_02098744(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1374, 0x1374)) {
        if (*p < 0x1375 || *p > 0x1375) k = FALSE;
    }
    return k;
}

BOOL func_0207dc58(u32 a) {
    u16 *p = func_02098744(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x136b, 0x1372)) {
        if (*p < 0x1373 || *p > 0x1373) k = FALSE;
    }
    return k;
}

BOOL func_0207dc98(u32 a) {
    u16 *p = func_02098744(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1376, 0x1376)) {
        if (*p < 0x1377 || *p > 0x1377) k = FALSE;
    }
    return k;
}

BOOL func_0207dcd4(s32 a, s32 b, s32 c) {
    if (c == 2 || c == 4) return TRUE;
    return FALSE;
}

BOOL func_0207dce4(s32 a, s32 b, s32 c) {
    if (c == 1) return TRUE;
    return FALSE;
}

BOOL func_0207dcf0(u32 a) {
    if (func_02079fd8(a) != 0xb) return TRUE;
    return FALSE;
}

BOOL func_0207dd08(void) {
    BOOL r = FALSE;
    if (func_0207bb7c(data_021dfd8c) <= 4) r = TRUE;
    return r;
}

s32 func_0207df10(u32 a, u32 b, u32 c) { return func_02098778(a, b, c); }

s32 func_0207dd24(void) {
    void *tb = func_020947f0(4);
    if (Unk_0207dd24_IsZero(*data_020e416c) && tb) {
        void *m = data_021c47c4;
        if (m) {
            s32 cnt = 0;
            s32 xy[2];
            xy[0] = 0;
            xy[1] = 0;
            func_0204ee10(&xy[0], &xy[1], tb);
            s32 x, y, hx, hy;
            for (y = xy[1] - 1; y <= xy[1] + 1; y++) {
                for (x = xy[0] - 1; x <= xy[0] + 1; x++) {
                    hx = x >> 4;
                    hy = y >> 4;
                    u16 *c = (u16 *)func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                    if (c) {
                        if (Unk_0207dd24_Check(c)) {
                            cnt++;
                            if (cnt >= 2) return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_0207de6c(void) {
    void *tb = func_020947f0(4);
    if (Unk_0207dd24_IsZero(*data_020e416c) && tb) {
        void *m = data_021c47c4;
        if (m) {
            s32 cnt = 0;
            s32 xy[2];
            xy[0] = 0;
            xy[1] = 0;
            func_0204ee10(&xy[0], &xy[1], tb);
            s32 x, y;
            for (y = xy[1] - 1; y <= xy[1] + 1; y++) {
                for (x = xy[0] - 1; x <= xy[0] + 1; x++) {
                    u16 *c = Unk_0207de6c_Cell(m, x, y);
                    if (c) {
                        BOOL r = FALSE;
                        if (*c >= 0x21 && *c <= 0x24) r = TRUE;
                        if (r) {
                            cnt++;
                            if (cnt >= 3) return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void func_0207df18(u32 a, u32 b) {
    u32 v;
    func_02133ef8(&v, 4);
    v = (u32)func_020805c4((void *)a);
    void *r = func_0207bd3c(data_021dfd8c, &v, 1);
    if (r) {
        if (func_020030b4(func_020805c4(r))) {
            func_02002fc8(func_020805c4(r), b);
        }
    }
}

void func_0207df64(u32 a, u32 b) {
    void *r = func_0207aa8c(data_021dfd8c, a);
    if (r) {
        if (func_020030b4(func_020805c4(r))) {
            func_02002fc8(func_020805c4(r), b);
        }
    }
}
}

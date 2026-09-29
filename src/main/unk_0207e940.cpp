#include "types.h"

class Unk_0207e940;

typedef BOOL (Unk_0207e940::*Unk_0207ed1c_Fn)(u16 *);

struct Unk_0207efac_Item {
    u16 v;
    Unk_0207efac_Item() {}
};

extern "C" {
void *func_0207e268(void *);
void *func_0209a60c(void);
void *func_0209a610(void *);
void *func_0209a940(void);
s32 func_0204be70(u16 *);
s32 func_0209ad68(void *);
s32 func_0209ac64(void *);
u32 func_0209a938(void *);
u32 func_0209a8e0(void *);
s32 func_02052c54(u16 *);
s32 func_0207bcfc(u32 mask, s32 n, s32 max);
s32 func_02063b8c(s32);
s32 func_02039dec(u16);
s32 func_0209b2f8(u8 *, s32);
s32 func_0204b2d4(u16 *);
s32 func_0207f8ec(void *, u16 *);
void func_02061168(u16 *, u16 *, s32);
void *func_0207fc1c(void *);
void *func_020805c4(void *);
s32 func_020030b4(void *);
void *func_02002ff8(void *);
s32 func_020815b4(void *);
s32 func_0209b354(void *);
s32 func_0209b2e4(void *);
void *func_0204da0c(void);
void func_0204d9ec(void *, u32, u32, u16 *);
s32 func_02081038(u8 *);
s32 func_0208104c(u8 *);
void *func_0207f854(void *, void *);
void func_02080b80(void *, void *, s32);
s32 func_02094218(void *);
s32 func_02080c0c(void *);
void func_02080bdc(void *, void *);
void func_02080c20(void *, void *, s32);
s32 func_02080cb8(void *);
void func_02080c7c(void *, void *);
extern Unk_0207ed1c_Fn data_021cc934[5];
extern u8 data_0213a740[];
}

static inline BOOL Unk_0207e940_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

class Unk_0207e940 {
public:
    u8 unk_000[0x6ac];
    u16 unk_6ac[10];
    u8 unk_6c0[0x14];
    u8 unk_6d4[0x14];
    u8 unk_6e8[2];
    u8 unk_6ea[8];
    u8 unk_6f2;

    BOOL func_0207e940(u16 *item, s32 mode, s32 type, u8 a, u8 b);
    s32 func_0207eadc(u16 *item);
    s32 func_0207eb70(s32 mode, s32 type, u8 a, u8 c);
    s32 func_0207ec54(s32 type, s32 lo, s32 hi);
    BOOL func_0207ecd4(u16 *p, s32 type);
    Unk_0207ed1c_Fn func_0207ed1c(s32 type);
    BOOL func_0207ed68(u16 *item);
    BOOL func_0207edbc(u16 *p);
    BOOL func_0207ede4(u16 *p);
    BOOL func_0207ee0c(u16 *p);
    BOOL func_0207ee34(u16 *p);
    s32 func_0207ee5c(s32 lo, s32 hi);
    s32 func_0207eec8(s32 lo, s32 hi);
    BOOL func_0207ef34(s32 *lo, s32 *hi, s32 mode, s32 type, u8 flag);
    u16 *func_0207efa0();
    Unk_0207efac_Item func_0207efac(s32 idx);
    s32 func_0207eff8(u16 *p);
    BOOL func_0207f040(s32 idx);
    s32 func_0207f04c();
    BOOL func_0207f07c(s32 *o1, s32 *o2);
    void func_0207f118();
    void func_0207f158(u8 *p);
    u8 *func_0207f170();
    s32 func_0207f17c();
    s32 func_0207f18c();
    u8 *func_0207f19c();
    void func_0207f1a8(void *a, s32 n, void *c);
    BOOL func_0207f1cc(void *a, void *c);
    void func_0207f20c(void *a, s32 n, void *c);
    void func_0207f230(void *a, void *c);
};

extern "C" {
BOOL func_0207ec10(u16 *p);
BOOL func_0207ec38(u16 *p);
}

BOOL Unk_0207e940::func_0207e940(u16 *item, s32 mode, s32 type, u8 a, u8 b) {
    s32 lo, hi;
    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
        if (mode == 2) {
            lo = 0;
            hi = 0;
            if (func_0207ef34(&lo, &hi, mode, type, a)) {
                s32 range = hi - lo;
                s32 idx = func_0207eadc(item);
                s32 slot = 0;
                if (idx >= 0) {
                    slot = lo + idx % range;
                }
                if (func_0207f040(slot)) {
                    u16 *p = unk_6ac + slot;
                    if (*p == 0xfff1) {
                        *p = *item;
                        return TRUE;
                    }
                    BOOL occupied = func_0207ecd4(p, type);
                    if (b) {
                        void *v10;
                        void *v14;
                        func_0207e268(this);
                        v10 = func_0209a60c();
                        v14 = func_0209a940();
                        func_0204be70(item);
                        func_0204be70(p);
                        if (type == 2) {
                            s32 lim = 0x18;
                            if (func_0209ad68(v14) != 0 && func_0209ac64(v14) == 2 &&
                                func_0209a938(v10) >= 2 && func_0209a8e0(v10) < 0x18) {
                                lim = func_0209a8e0(v10);
                            }
                            if (lim < 0x18) {
                                if (lim == func_02052c54(item)) {
                                    func_0207ec10(p);
                                    *p = *item;
                                    return TRUE;
                                } else if (occupied) {
                                    if (lim == func_02052c54(p)) {
                                        func_0207ec10(item);
                                        goto fail;
                                    } else {
                                        func_0207ec10(p);
                                        *p = *item;
                                        return TRUE;
                                    }
                                } else {
                                    func_0207ec10(p);
                                    *p = *item;
                                    return TRUE;
                                }
                            } else {
                                func_0207ec10(p);
                                *p = *item;
                                return TRUE;
                            }
                        } else {
                            func_0207ec10(p);
                            *p = *item;
                            return TRUE;
                        }
                    } else {
                        if (occupied) {
                            func_0207ec10(item);
                            goto fail;
                        } else {
                            func_0207ec10(p);
                            *p = *item;
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
fail:
    return FALSE;
}

s32 Unk_0207e940::func_0207eadc(u16 *item) {
    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
        s32 want = func_02052c54(item);
        if ((u32)want < 0x18) {
            u16 tmp = 0xfff1;
            u32 i;
            for (i = 0; i < 0x34; i++) {
                tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
                if (want == func_02052c54(&tmp)) {
                    s32 r;
                    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
                        r = (*item - 0x450c) >> 2;
                    } else {
                        r = -1;
                    }
                    return r - i;
                }
            }
        }
    }
    return -1;
}

s32 Unk_0207e940::func_0207eb70(s32 mode, s32 type, u8 a, u8 c) {
    s32 lo = 0, hi = 0;
    s32 r;
    if (func_0207ef34(&lo, &hi, mode, type, a)) {
        r = func_0207eec8(lo, hi);
        if (r == -1) {
            r = func_0207ec54(type, lo, hi);
            if (r == -1 && c) {
                r = func_0207ee5c(lo, hi);
            }
            if (r != -1) {
                func_0207ec10(unk_6ac + r);
            }
        }
        if (r != -1) {
            unk_6ac[r] = 0xfff1;
        }
        return r;
    } else {
        return -1;
    }
}

BOOL func_0207ec10(u16 *p) {
    if (func_02063b8c(2) == 0) {
        if (func_02039dec(*p) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL func_0207ec38(u16 *p) {
    if (func_02039dec(*p) != 0) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_0207e940::func_0207ec54(s32 type, s32 lo, s32 hi) {
    s32 res;
    if (func_0207f040(lo)) {
        u16 *p = unk_6ac + lo;
        u16 mask = 0;
        s32 cnt = 0;
        for (; lo < hi; p++, lo++) {
            if (func_0207f040(lo) && *p != 0xfff1 && !func_0207ecd4(p, type)) {
                mask |= 1 << lo;
                cnt++;
            }
        }
        res = func_0207bcfc(mask, cnt, 10);
    } else {
        res = -1;
    }
    return res;
}

BOOL Unk_0207e940::func_0207ecd4(u16 *p, s32 type) {
    Unk_0207ed1c_Fn f = func_0207ed1c(type);
    BOOL r = TRUE;
    if (f) {
        if (!(this->*f)(p)) {
            r = FALSE;
        }
    }
    return r;
}

Unk_0207ed1c_Fn Unk_0207e940::func_0207ed1c(s32 type) {
    u8 k = 3;
    u32 idx = func_0209b2f8(&k, type);
    if (k == 0 && idx < 5) {
        return data_021cc934[idx];
    }
    return *(Unk_0207ed1c_Fn *)data_0213a740;
}

BOOL Unk_0207e940::func_0207ed68(u16 *item) {
    BOOL r = FALSE;
    BOOL ok = FALSE;
    if (func_0204b2d4(item)) {
        if (!Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
            ok = TRUE;
        }
    }
    if (ok) {
        if (func_0207f8ec(this, item) > 0) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_0207e940::func_0207edbc(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x11a8 && *p <= 0x12a7) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0207e940::func_0207ede4(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0207e940::func_0207ee0c(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x12e8 && *p <= 0x131f) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0207e940::func_0207ee34(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x12b0 && *p <= 0x12e7) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_0207e940::func_0207ee5c(s32 lo, s32 hi) {
    s32 res;
    if (func_0207f040(lo)) {
        u16 *p = unk_6ac + lo;
        s32 min = 99999;
        volatile s32 best = -1;
        for (; lo < hi; p++, lo++) {
            if (func_0207f040(lo) && *p != 0xfff1) {
                s32 v = func_0204be70(p);
                if (v <= min) {
                    best = lo;
                    min = v;
                }
            }
        }
        res = best;
    } else {
        res = -1;
    }
    return res;
}

s32 Unk_0207e940::func_0207eec8(s32 lo, s32 hi) {
    s32 res;
    if (func_0207f040(lo)) {
        u16 *p = unk_6ac + lo;
        u16 mask = 0;
        s32 cnt = 0;
        for (; lo < hi; p++, lo++) {
            if (func_0207f040(lo) && *p == 0xfff1) {
                mask |= 1 << lo;
                cnt++;
            }
        }
        res = func_0207bcfc(mask, cnt, 10);
    } else {
        res = -1;
    }
    return res;
}

BOOL Unk_0207e940::func_0207ef34(s32 *lo, s32 *hi, s32 mode, s32 type, u8 flag) {
    BOOL r = FALSE;
    switch (mode) {
    case 0:
        *lo = 5;
        *hi = 10;
        r = TRUE;
        break;
    case 1:
        *lo = 1;
        *hi = 5;
        if (type == 2 || (type == 8 && flag)) {
            *lo = 3;
        }
        r = TRUE;
        break;
    case 2:
        *lo = 0;
        if (type == 2 || (type == 8 && flag)) {
            *hi = 3;
        } else {
            *hi = 1;
        }
        r = TRUE;
        break;
    }
    return r;
}

u16 *Unk_0207e940::func_0207efa0() {
    return unk_6ac;
}

Unk_0207efac_Item Unk_0207e940::func_0207efac(s32 idx) {
    Unk_0207efac_Item out;
    out.v = 0xfff1;
    if (func_0207f040(idx)) {
        out.v = unk_6ac[idx];
        if (out.v != 0xfff1) {
            u16 tmp;
            func_02061168(&tmp, &out.v, 1);
            out.v = tmp;
        }
    }
    return out;
}

s32 Unk_0207e940::func_0207eff8(u16 *pp) {
    volatile u16 *p = pp;
    s32 idx = -1;
    BOOL f = FALSE;
    u32 v = *p;
    if (v >= 0xf000 && v <= 0xf02f) {
        f = TRUE;
    }
    if (f) {
        if (v >= 0xf000 && v <= 0xf02f) {
            idx = (*p - 0xf000) >> 2;
        } else {
            idx = -1;
        }
        if (idx >= 3) {
            idx -= 2;
        }
    }
    return idx;
}

BOOL Unk_0207e940::func_0207f040(s32 idx) {
    if ((u32)idx < 10) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_0207f04c_Bits {
    u8 v : 5;
};

s32 Unk_0207e940::func_0207f04c() {
    Unk_0207f04c_Bits *b = (Unk_0207f04c_Bits *)func_0207fc1c(this);
    s32 r = 0;
    if (b) {
        r = (s32)b->v >> 2;
        if (r < 0 || r >= 5) {
            r = 0;
        }
    }
    return 0x1010 + r;
}

BOOL Unk_0207e940::func_0207f07c(s32 *o1, s32 *o2) {
    void *t;
    BOOL r = FALSE;
    if (func_020030b4(func_020805c4(this)) != 0) {
        if (func_020815b4(func_02002ff8(func_020805c4(this))) != 0) {
            t = func_0209a610(func_0207e268(this));
            if (func_0209b354(t) == 2 ||
                ((func_0209b354(t) == 8 || func_0209b354(t) == 9 || func_0209b354(t) == 10 ||
                  func_0209b354(t) == 11) &&
                 func_0209b2e4(t) != 0)) {
                *o1 = 3;
                *o2 = unk_6f2 % 10;
            } else {
                *o1 = 2;
                *o2 = unk_6f2;
            }
            r = TRUE;
        }
    }
    return r;
}

void Unk_0207e940::func_0207f118() {
    void *r4 = func_0204da0c();
    if (r4 != 0) {
        if (func_0207f17c() != 0) {
            u8 *r2 = func_0207f170();
            u16 v = 0x500a;
            func_0204d9ec(r4, r2[0], r2[1], &v);
        }
    }
}

void Unk_0207e940::func_0207f158(u8 *p) {
    unk_6e8[0] = p[0];
    unk_6e8[1] = p[1];
}

u8 *Unk_0207e940::func_0207f170() {
    return unk_6e8;
}

s32 Unk_0207e940::func_0207f17c() {
    return func_02081038(unk_6e8);
}

s32 Unk_0207e940::func_0207f18c() {
    return func_0208104c(unk_6e8);
}

u8 *Unk_0207e940::func_0207f19c() {
    return unk_6d4;
}

void Unk_0207e940::func_0207f1a8(void *a, s32 n, void *c) {
    void *o = func_0207f854(this, c);
    if (o) {
        func_02080b80(o, a, n);
    }
}

BOOL Unk_0207e940::func_0207f1cc(void *a, void *c) {
    void *o = func_0207f854(this, c);
    BOOL r = FALSE;
    if (o) {
        if (func_02094218(c)) {
            if (func_02080c0c(o)) {
                func_02080bdc(o, a);
                r = TRUE;
            }
        }
    }
    return r;
}

void Unk_0207e940::func_0207f20c(void *a, s32 n, void *c) {
    void *o = func_0207f854(this, c);
    if (o) {
        func_02080c20(o, a, n);
    }
}

void Unk_0207e940::func_0207f230(void *a, void *c) {
    void *o = func_0207f854(this, c);
    if (o) {
        if (func_02094218(c)) {
            if (func_02080cb8(o)) {
                func_02080c7c(o, a);
            }
        }
    }
}

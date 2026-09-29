#include "types.h"

extern "C" {
void *func_020815b4(u32);
BOOL func_02002fec(s32);
void *func_020805c4(void *);
BOOL func_020030b4(void *);
BOOL func_02094218(void *);
BOOL func_0207f854(void *, void *);
s32 func_02080dd8();
s32 func_02063b8c(s32);
s32 func_0207a484(void *);
BOOL func_0207e114(void *);
void *func_02115fb4(void *, s32, s32);
void func_020a7c3c(void *);
void func_02002fc8(void *, void *);
void func_020a77f8(void *, void *);
void func_02094030(void *);
void func_02093fd8(void *);
s32 func_02093f9c(void *);
void func_02093fc0(void *);
void func_02094018(void *);
BOOL func_020b51b8(u32);
s32 func_020b51e8(u32);
void func_0207fc50(void *, s32);
void func_02080718(void *);
void func_02078d58(void *);
void func_020793c0(void *);
void func_02099790(void *);
void func_020997fc(void *);
void func_020793dc(void *);
void func_02078d64(void *);
void func_02078d68(void *);
void func_020793e0(void *);
void func_02099828(void *);
void func_020807c8(void *);
void func_02080860(void *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(void *));
s32 memcmp(const void *, const void *, u32);
u8 *func_0207e310(void *);
s32 func_02078510(void *);
s32 func_0207856c(void *);
void *func_0209750c();
void *func_0209888c(void *);
BOOL func_02098044(void *, s32);
s32 func_0207bb48(s32, u32 *);
void *func_0207bd3c(u8 *, void **, s32);
s32 func_0207bfb4(u8 *, u16 *);
BOOL func_0207c014(u32);
u8 *func_0207bf60(u8 *, s32);
s32 func_0207bcfc(u32, s32, s32);
s32 func_0207bf18(u8 *, s32);
struct Unk_0207be2c_Vt { virtual void vfunc_00(); virtual void vfunc_04(); virtual void vfunc_08(); virtual void *vfunc_0c(); };
BOOL func_0207bef0(u8 *, u8 *, s32);
BOOL func_0207bf84(u8 *, s32);
void *__cxa_vec_ctor(void *, s32, s32, void (*)(void *), void (*)(void *));
BOOL func_0207c318(void *);
void func_0207c190(void *, s32);
}

extern "C" {

BOOL func_0207bab0(u32 *bits) {
    s32 i;
    for (i = 0; i < 150; i++) {
        u8 *p = (u8 *)func_020815b4((u8)i);
        if (p != NULL && p[0x4b] < 2) {
            if (!func_0207bb48((u8)i, bits)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

void func_0207baf0(s32 unused, u32 *bits, s32 n) {
    if (func_02002fec(n)) {
        bits[n >> 5] &= ~(1 << (n & 0x1f));
    }
}

void func_0207bb1c(u32 *bits, s32 n) {
    if (func_02002fec(n)) {
        bits[n >> 5] |= 1 << (n & 0x1f);
    }
}

BOOL func_0207bb48(s32 n, u32 *bits) {
    if (func_02002fec(n)) {
        if ((bits[n >> 5] >> (n & 0x1f)) & 1) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 func_0207bb84(u8 *base);
s32 func_0207bb7c(u8 *base) {
    return func_0207bb84(base);
}

s32 func_0207bb84(u8 *base) {
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        if (func_020030b4(func_020805c4(base))) {
            cnt++;
        }
        base += 0x700;
    }
    return cnt;
}


void *func_0207bbb8(u8 *base, void *x) {
    u8 *best = NULL;
    s32 bestv;
    s32 i;
    u8 *p;
    if (func_02094218(x)) {
        p = base;
        bestv = -128;
        for (i = 0; i < 8; i++) {
            if (func_020030b4(func_020805c4(p)) && func_0207f854(p, x)) {
                s32 v = func_02080dd8();
                if (best == NULL) {
                    best = p;
                    bestv = v;
                } else if (v > bestv) {
                    best = p;
                    bestv = v;
                } else if (v == bestv) {
                    if (func_02063b8c(10) & 1) {
                        best = p;
                    }
                }
            }
            p += 0x700;
        }
    }
    if (best == NULL) {
        best = (u8 *)func_0207bd3c(base, 0, 0);
    }
    return best;
}


void *func_0207bc44(u8 *base, void **arr, s32 n) {
    u8 mask = 0;
    s32 idx;
    s32 i;
    u8 m2;
    s32 cnt;
    u8 *p;
    for (i = 0; i < n; arr++, i++) {
        if (*arr != NULL) {
            idx = func_0207bfb4(base, (u16 *)*arr);
            if (func_0207c014(idx)) {
                mask |= 1 << idx;
            }
        }
    }
    idx = (s32)func_0207a484(base);
    if (func_0207c014(idx)) {
        mask |= 1 << idx;
    }
    p = base;
    m2 = 0;
    cnt = 0;
    for (i = 0; i < 8; i++) {
        void *r = func_020805c4(p);
        if (((mask >> i) & 1) == 0 && func_020030b4(r) && func_0207e114(p)) {
            m2 |= 1 << i;
            cnt++;
        }
        p += 0x700;
    }
    return func_0207bf60(base, func_0207bcfc(m2, cnt, 8));
}


s32 func_0207bcfc(u32 mask, s32 cnt, s32 n) {
    if (cnt > 0) {
        s32 k = func_02063b8c(cnt);
        s32 i;
        for (i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                if (k == 0) {
                    return i;
                }
                k--;
            }
        }
    }
    return -1;
}

void *func_0207bd3c(u8 *base, void **arr, s32 n) {
    s32 cnt = 0;
    u8 *result = NULL;
    volatile s32 zero;
    u8 flags[8];
    s32 i;
    s32 j;
    s32 idx;
    func_02115fb4(flags, 0, 8);
    for (i = 0; i < 8; i++) {
        if (func_0207bf84(base, i)) {
            flags[i] = 1;
            cnt++;
        }
    }
    zero = 0;
    for (j = 0; j < n; j++) {
        void **q = arr + j;
        if (*q != NULL) {
            idx = func_0207bfb4(base, (u16 *)*q);
            if (func_0207c014(idx)) {
                flags[idx] = zero;
                if (func_020030b4(*q)) {
                    cnt--;
                }
            }
        }
    }
    if (cnt > 0) {
        s32 k = func_02063b8c(cnt);
        for (i = 0; i < 8; i++) {
            if (flags[i] == 1) {
                if (k == 0) {
                    result = base + i * 0x700;
                    break;
                }
                k--;
            }
        }
    }
    return result;
}


void func_0207bde8(void *self) {
    func_0207fc50(self, 8);
}

void *func_0207bdf4(void *self, u32 x) {
    void *r = NULL;
    u32 c = (u8)x;
    if (func_020b51b8(c)) {
        s32 t = func_020b51e8(c);
        if (func_0207c014(t)) {
            r = func_0207bf60((u8 *)self, t);
        }
    }
    return r;
}

u8 *func_0207be2c(u8 *base, u8 *a1, s32 a2, void *a3) {
    u8 *result;
    u8 *p;
    s32 n;
    s32 i;
    void *t;
    u32 objA[7];
    u32 objB[7];
    p = func_0207bf60(base, 0);
    func_02094030(objA);
    func_02093fd8(objB);
    result = NULL;
    n = func_0207bf18(a1, a2);
    if (n > 0 && n <= 8) {
        for (i = 0; i < 8; i++) {
            if (func_020030b4(func_020805c4(p)) && (a3 == NULL || func_0207f854(p, a3))) {
                func_020a7c3c(objA);
                func_02002fc8(func_020805c4(p), objA);
                func_020a77f8(objB, objA);
                t = ((Unk_0207be2c_Vt *)objB)->vfunc_0c();
                {
                    s32 m = func_0207bf18((u8 *)t, func_02093f9c(objB));
                    if (m == n && func_0207bef0((u8 *)t, a1, m)) {
                        result = p;
                        break;
                    }
                }
            }
            p += 0x700;
        }
    }
    func_02093fc0(objB);
    func_02094018(objA);
    return result;
}


BOOL func_0207bef0(u8 *a, u8 *b, s32 n) {
    s32 i;
    for (i = 0; i < n; i++, a++, b++) {
        if (*a != *b) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 func_0207bf18(u8 *s, s32 n) {
    s += n - 1;
    for (; n > 0; n--, s--) {
        if (*s != 0 && *s != 0x85) {
            return n;
        }
    }
    return 0;
}

u8 *func_0207bf38(u8 *base, u16 *x) {
    u8 *r = NULL;
    s32 idx = func_0207bfb4(base, x);
    if (func_0207c014(idx)) {
        r = base + idx * 0x700;
    }
    return r;
}

u8 *func_0207bf60(u8 *base, s32 idx) {
    u8 *r = NULL;
    if (func_0207c014(idx)) {
        r = base + idx * 0x700;
    }
    return r;
}

BOOL func_0207bf84(u8 *base, s32 idx) {
    BOOL r = FALSE;
    if (func_0207c014(idx)) {
        r = func_020030b4(func_020805c4(base + idx * 0x700));
    }
    return r;
}

s32 func_0207bfb4(u8 *base, u16 *p) {
    s32 result = -1;
    if (func_020030b4(p)) {
        s32 i;
        for (i = 0; i < 8; i++) {
            u16 *q = (u16 *)func_020805c4(base + i * 0x700);
            if (p[0] == q[0] && memcmp(p + 1, q + 1, 8) == 0 && ((u8 *)p)[0xb] == ((u8 *)q)[0xb]) {
                result = i;
                break;
            }
        }
    }
    return result;
}

BOOL func_0207c014(u32 n) {
    if (n < 8) {
        return TRUE;
    }
    return FALSE;
}

void func_0207c020(u8 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        func_02080718(self + i * 0x700);
    }
    func_02078d58(self + 0x3800);
    func_020793c0(self + 0x381c);
    func_02099790(self + 0x3830);
    self[0x38c0] = 1;
    self[0x38c1] = 1;
    self[0x38c2] = 0;
    self[0x38c3] = 0;
    *(s32 *)(self + 0x38c4) = 0;
    *(s32 *)(self + 0x38c8) = 0;
    *(s32 *)(self + 0x38cc) = 0;
    *(s32 *)(self + 0x38d0) = 0;
    *(s8 *)(self + 0x38e9) = -1;
    *(s8 *)(self + 0x38e8) = -1;
    func_02115fb4(self + 0x38ec, 0, 2);
    func_02115fb4(self + 0x38d4, 0, 0x14);
}

u8 *func_0207c0dc(u8 *self) {
    func_020997fc(self + 0x3830);
    func_020793dc(self + 0x381c);
    func_02078d64(self + 0x3800);
    __cxa_vec_cleanup(self, 8, 0x700, func_020807c8);
    return self;
}

u8 *func_0207c120(u8 *self) {
    __cxa_vec_ctor(self, 8, 0x700, func_02080860, func_020807c8);
    func_02078d68(self + 0x3800);
    func_020793e0(self + 0x381c);
    func_02099828(self + 0x3830);
    *(s32 *)(self + 0x38c4) = 0;
    *(s32 *)(self + 0x38c8) = 0;
    *(s32 *)(self + 0x38cc) = 0;
    *(s32 *)(self + 0x38d0) = 0;
    return self;
}


void func_0207c190(void *self, s32 d) {
    if (func_020030b4(func_020805c4(self))) {
        u8 *q = func_0207e310(self);
        s32 v = d + q[0x1e];
        if (v < 0) {
            v = 0;
        } else if (v > 0x20) {
            v = 0x20;
        }
        q[0x1e] = v;
    }
}

void func_0207c1c8(void *self) {
    if (func_020030b4(func_020805c4(self))) {
        func_02078510(func_0207e310(self));
    }
}

void func_0207c1e8(void *self) {
    if (func_020030b4(func_020805c4(self))) {
        u8 *q = func_0207e310(self);
        q[0x1e] = q[0x1e] >> 1;
    }
}

void func_0207c20c(void *self) {
    if (func_020030b4(func_020805c4(self))) {
        u8 *q = func_0207e310(self);
        q[0x1e] = 0;
    }
}

BOOL func_0207c22c(void *self, void *x) {
    BOOL r;
    BOOL ok;
    if (x == NULL) {
        x = func_0209750c();
    }
    r = FALSE;
    ok = FALSE;
    if (x != NULL && func_02094218(func_0209888c(x)) && !func_02098044(x, 1) && func_020030b4(func_020805c4(self)) && func_0207e310(self)[0x1e] == 0x20) {
        ok = TRUE;
    }
    if (ok && func_0207c318(self)) {
        r = TRUE;
    }
    return r;
}

void func_0207c298(void *self, void *x) {
    if (func_020030b4(func_020805c4(self))) {
        s32 v = 0;
        if (x == NULL) {
            x = func_0209750c();
        }
        if (x != NULL && func_02094218(func_0209888c(x)) && !func_02098044(x, 1) && func_0207c318(self) && func_0207f854(self, func_0209888c(x))) {
            s32 t = func_02080dd8();
            s32 k = func_02063b8c(3);
            v = ((t + 0x100) >> 7) * k;
        }
        func_0207c190(self, v);
    }
}

BOOL func_0207c318(void *self) {
    if (func_020030b4(func_020805c4(self))) {
        void *q = func_0207e310(self);
        if (q != NULL) {
            if (!func_0207856c(q) || func_0207856c(q) == 1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void func_0207c354(void *self, void *x) {
    if (func_020030b4(func_020805c4(self))) {
        u8 *q = func_0207e310(self);
        q[0x1e] = 0;
        if (x == NULL) {
            x = func_0209750c();
        }
        if (x != NULL && func_02094218(func_0209888c(x)) && !func_02098044(x, 1) && func_0207f854(self, func_0209888c(x))) {
            s32 t = func_02080dd8();
            s32 v = ((t + 0x100) >> 7) * (func_02063b8c(10) + 1);
            if (v < 0) {
                v = 0;
            } else if (v > 0x20) {
                v = 0x20;
            }
            q[0x1e] = v;
        }
    }
}

}

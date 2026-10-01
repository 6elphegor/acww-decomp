#include "types.h"

class Unk_02002fc8 {
public:
    u32 func_020030b4();
};

class Unk_020cbb18 {
public:
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
    u32 func_02072e88(s32 i);
};
extern Unk_020cbb18 *data_020cbb18;
extern s32 data_020cbff8[4];
extern u8 data_021cc9ac[];

struct Unk_0207ac60_Elem {
    u8 unk_00;
    u8 unk_01;
    Unk_0207ac60_Elem();
    ~Unk_0207ac60_Elem();
};

struct Unk_0207ae84_Mgr {
    u8 pad_00[0x38cc];
    union {
        struct { u32 unk_38cc; u32 unk_38d0; };
        s64 unk_38cc_64;
    };
};

struct Unk_0207ae28_Buf {
    u32 v[2];
};

extern "C" {
u8 *func_020783f8();
u8 *func_02078578(u8 *p);
s32 func_0209ad80(u8 *p);
s32 func_0207a8b8(u8 *self, u8 *p, u8 *r);
s32 func_0207a914(u8 *self, u8 *p, u8 *r);
u32 func_0207aae4(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best);
BOOL func_0207aacc(s32 a, s32 b);
BOOL func_0207aad8(s32 a, s32 b);
u32 func_0207ac2c(u8 *self, s32 a, s32 b);

Unk_02002fc8 *func_020805c4(u8 *p);
s32 func_0207bb7c(u8 *self);
s32 func_0209ad34(s32 v);
s32 func_0207e310(u8 *p);
u8 *func_0209750c();
s32 func_0209ad68(void *p);
s32 func_0209ac64(void *p);
u8 *func_0209865c(u8 *p);
u8 *func_02099db4(u8 *p, s32 i);
void *func_0209a4f0(void *p);

u16 *func_0209a4e4(void *p, s32 i);
s32 func_02128930(void *a, void *b, u32 n);
void *func_0209978c(u8 *p);
u16 *func_02099788(u8 *p);
s32 func_02099ed4(u8 *a, u16 *b);
u8 *func_0207e268(u8 *p);
void *func_0209a60c(u8 *p);
void *func_0209a940(void *p);
s32 func_020783d8(u8 *a, u32 b);
s32 func_0207bfb4(u8 *self, Unk_02002fc8 *p);
BOOL func_0207c014(s32 i);
u32 func_0207bf84(u8 *self, s32 i);
u8 *func_0207bf60(u8 *self, s32 i);
s32 func_020789cc(u8 *p, s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 func_02078c6c(u8 *p, s32 a, s32 b, s32 c);
void *func_0204da0c(u8 *self);
s32 func_0208104c(Unk_0207ac60_Elem *e);
void func_02081018(Unk_0207ac60_Elem *e, s32 *xy);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0207f17c(u8 *p);
s32 func_0207adf0(Unk_0207ac60_Elem *arr, s32 n, u32 k);
u16 func_0204b1b4(s32 i);
BOOL func_0204d9fc(void *g, u16 *v, u32 a, u32 b);
void func_0207f158(u8 *p, Unk_0207ac60_Elem *e);
BOOL func_02081038(Unk_0207ac60_Elem *e);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
void func_02081054();
void func_0209cffc(Unk_0207ae28_Buf *a, u8 *b, u32 c, u32 d, u32 e);
void func_0209d498(Unk_0207ae28_Buf *a);
s32 func_0209d3d0(Unk_0207ae28_Buf *a, u8 *b, u32 n);
s32 func_0209d3a4(u8 *b, Unk_0207ae28_Buf *a);
void func_0207e684(u8 *p);
void func_0209cf88(u8 *p);
void func_02116048(void *dst, void *src, u32 n);
void func_0207a550(u8 *self, Unk_0207ae28_Buf *b);
void func_0207afe0(u8 *self, Unk_0207ae28_Buf *b);
void func_0207b04c(u8 *self, u8 *x);
s32 func_0207a484(u8 *self);
void func_0207b238(u8 *self, Unk_0207ae28_Buf *b);

void func_0207b590(u8 *self, Unk_0207ae28_Buf *b);
void func_0207ae28(u8 *self);
void func_0207a80c();
BOOL func_0207a834(u8 *self);
s32 func_0207aa78(u32 a);
u32 func_0207aa8c(u8 *self, u8 *p);
u32 func_0207aaac(u8 *self, u8 *p);
void func_0207ab90(u8 *self, u8 *a, u8 *b, s32 c);
s32 func_0207abd8(u8 *self, u8 *p1, u8 *p2);
void func_0207ac60(u8 *self);
void func_0207add0();
void func_0207ae84(u8 *self, s32 flag);
void func_0207af34(u8 *self);
void func_0207af88(u8 *self);
void func_0207a4c4(u8 *self, s32 f);
void func_0207a104(u8 *self);
void func_02079bb4(u8 *self);
s32 func_02079a0c(u8 *self);
void func_0207c8e0(u8 *p, Unk_0207ae28_Buf *b);
void *func_0209a610(void *p);
void *func_0209b2e4();
s32 func_0209b044(void *p, s32 i);
void func_0207e4b4(u8 *p, s32 a, void *b);
s32 func_0207ca18(u8 *p, u8 *x);
s32 func_0207c9bc(u8 *p, u8 *x);
s32 func_0207c828(u8 *p, u8 *a, u8 *b, u8 *x);
void *func_0209ab18(void *p);
void func_0207ccd0(u8 *p, u8 *x);
BOOL func_0207cd48(u8 *p);
u32 func_0207bcfc(u32 m, s32 c, s32 n);
s32 func_0207b208(u8 *self);
s32 func_0207b168(u8 *self);
s32 func_0207b084(u8 *self);
BOOL func_0207b0f0(u8 *self, u8 *x);

}

void func_0207a80c() {
    u8 *p = func_020783f8();
    for (s32 i = 0; i < 8; i++) {
        func_0209ad80(func_02078578(p));
        p += 0x2c;
    }
}

BOOL func_0207a834(u8 *self) {
    if (data_020cbb18->func_02072e44()) {
        return FALSE;
    }
    u8 *p = self;
    s32 n = func_0207bb7c(self);
    s32 c5 = 0;
    s32 c4 = c5;
    s32 i = c5;
    u8 *zero = (u8 *)c5;
    do {
        if (func_020805c4(p)->func_020030b4()) {
            s32 r = func_0207a8b8(self, p, zero);
            if (r == 0x16) {
                c5++;
            } else if (func_0209ad34(r) != 1) {
                c4++;
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
    if (n >= c4 && ((n - c4) >> 1) < c5) {
        return TRUE;
    }
    return FALSE;
}

s32 func_0207a8b8(u8 *self, u8 *p, u8 *r5) {
    u8 *q = (u8 *)func_0207e310(p);
    s32 r7 = 0x16;
    if (r5 == NULL) {
        r5 = func_0209750c();
    }
    if (q != NULL && r5 != NULL) {
        s32 r = func_0207a914(self, p, r5);
        if ((u32)r < 0x16) {
            r7 = r;
        } else if (func_0209ad68(func_02078578(q))) {
            r7 = func_0209ac64(func_02078578(q));
        }
    }
    return r7;
}

s32 func_0207a914(u8 *self, u8 *p, u8 *r4) {
    u16 *r5 = (u16 *)func_020805c4(p);
    s32 result = 0x16;
    if (r4 == NULL) {
        r4 = func_0209750c();
    }
    if (r4 != NULL) {
        r4 = func_0209865c(r4);
        u8 *a = func_02099db4(r4, 0);
        u8 *b = func_02099db4(r4, 1);
        u32 *r4u = (u32 *)(r4 + 0x88);
        if (func_0209ad68(func_0209a4f0(a))) {
            u16 *r7 = func_0209a4e4(a, 0);
            if (r7[0] == r5[0] && func_02128930(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = func_0209ac64(func_0209a4f0(a));
                goto end;
            }
        }
        if (func_0209ad68(func_0209a4f0(b))) {
            u16 *r7 = func_0209a4e4(b, 0);
            if (r7[0] == r5[0] && func_02128930(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = func_0209ac64(func_0209a4f0(b));
                goto end;
            }
        }
        if (func_0209ad68(func_0209978c(self + 0x3830))) {
            u16 *r7 = func_02099788(self + 0x3830);
            if (r7[0] == r5[0] && func_02128930(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = func_0209ac64(func_0209978c(self + 0x3830));
                goto end;
            }
        }
        if (func_02099ed4((u8 *)r4u, r5)) {
            r4u += 3;
            result = func_0209ac64(r4u);
        } else if (func_0209ad68(func_0209a940(func_0209a60c(func_0207e268(p))))) {
            result = func_0209ac64(func_0209a940(func_0209a60c(func_0207e268(p))));
        }
    }
end:
    return result;
}

s32 func_0207aa78(u32 a) {
    return func_020783d8(func_020783f8(), a);
}

u32 func_0207aa8c(u8 *self, u8 *p) {
    BOOL (*fn)(s32, s32) = func_0207aacc;
    return func_0207aae4(self, p, &fn, 0x7fffffff);
}

u32 func_0207aaac(u8 *self, u8 *p) {
    BOOL (*fn)(s32, s32) = func_0207aad8;
    return func_0207aae4(self, p, &fn, (s32)0x80000000);
}

BOOL func_0207aacc(s32 a, s32 b) {
    if (b < a) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207aad8(s32 a, s32 b) {
    if (b > a) {
        return TRUE;
    }
    return FALSE;
}

u32 func_0207aae4(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best) {
    s32 r6 = func_0207bfb4(self, func_020805c4(p));
    u8 *r7 = NULL;
    if (func_020805c4(p)->func_020030b4() && func_0207c014(r6)) {
        for (s32 i = 0; i < 8; i++) {
            if (i != r6 && func_0207bf84(self, i)) {
                s32 v = func_020789cc(self + 0x3800, r6, i);
                if ((*cmp)(best, v)) {
                    r7 = func_0207bf60(self, i);
                    best = v;
                } else if (best == v) {
                    if (r7 == NULL || (func_02063b8c(4) & 1) == 1) {
                        r7 = func_0207bf60(self, i);
                    }
                }
            }
        }
    }
    return (u32)r7;
}

void func_0207ab90(u8 *self, u8 *a, u8 *b, s32 c) {
    if (!data_020cbb18->func_02072e44()) {
        s32 x = func_0207bfb4(self, (Unk_02002fc8 *)a);
        s32 y = func_0207bfb4(self, (Unk_02002fc8 *)b);
        func_02078c6c(self + 0x3800, x, y, c);
    }
}

s32 func_0207abd8(u8 *self, u8 *p1, u8 *p2) {
    s32 a = func_0207bfb4(self, func_020805c4(p1));
    s32 b = func_0207bfb4(self, func_020805c4(p2));
    if (a != b && func_0207c014(a) && func_0207c014(b)) {
        return func_0207ac2c(self, a, b);
    }
    return 4;
}

u32 func_0207ac2c(u8 *self, s32 a, s32 b) {
    s32 v = func_020789cc(self + 0x3800, a, b);
    u32 r = 4;
    for (s32 i = 0; i < 4; i++) {
        if (v >= data_020cbff8[i]) {
            r = i;
            break;
        }
    }
    return r;
}

void func_0207ac60(u8 *self) {
    s32 n;
    void *g = func_0204da0c(self);
    static Unk_0207ac60_Elem arr[30];
    if (g != NULL) {
        n = 0;
        s32 *d = (s32 *)((u8 *)g + 0xc);
        s32 w = d[0];
        s32 h = d[1];
        s32 xy[2];
        s32 i;
        xy[0] = 0;
        xy[1] = 0;
        for (i = 0; i < 30; i++) {
            func_0208104c(&arr[i]);
        }
        for (xy[1] = 0; xy[1] < h; xy[1]++) {
            for (xy[0] = 0; xy[0] < w; xy[0]++) {
                struct Q { s32 x, y; };
                struct L { static inline u16 *Cell(void *g, const Q &q) { s32 x = q.x; s32 y = q.y; s32 hx = x >> 4, hy = y >> 4; return func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0); } };
                u16 *t = L::Cell(g, *(Q *)xy);
                if (t != NULL && *t == 0x500a) {
                    func_02081018(&arr[n], xy);
                    n++;
                }
            }
        }
        if (n > 0) {
            u16 v = 0xfff1;
            u8 *p = self;
            for (i = 0; i < 8; i++) {
                if (func_020805c4(p)->func_020030b4() && !func_0207f17c(p)) {
                    s32 idx = func_0207adf0(arr, 30, func_02063b8c(n));
                    v = func_0204b1b4(i);
                    Unk_0207ac60_Elem *e = &arr[idx];
                    if (func_0204d9fc(g, &v, arr[idx].unk_00, e->unk_01)) {
                        func_0207f158(p, e);
                    }
                    func_0208104c(e);
                    n--;
                    if (n <= 0) {
                        break;
                    }
                }
                p += 0x700;
            }
        }
    }
}

void func_0207add0() {
    __cxa_vec_cleanup(data_021cc9ac, 0x1e, 2, func_02081054);
}

s32 func_0207adf0(Unk_0207ac60_Elem *p, s32 n, u32 k) {
    s32 i = 0;
    s32 res = -1;
    for (; i < n; p++, i++) {
        if (func_02081038(p)) {
            if (k == 0) {
                res = i;
                break;
            }
            k--;
        }
    }
    return res;
}

void func_0207ae28(u8 *self) {
    Unk_0207ae28_Buf a;
    Unk_0207ae28_Buf b;
    func_0209cffc(&a, self + 0x38ee, 0, 0, 0);
    b.v[0] = 0;
    b.v[1] = 0;
    func_0209d498(&b);
    if (func_0209d3d0(&b, (u8 *)&a, 0x38)) {
        u8 *p = self;
        for (s32 i = 0; i < 8; i++) {
            func_0207e684(p);
            p += 0x700;
        }
        func_0209cf88(self + 0x38ee);
    }
}

void func_0207ae84(u8 *self, s32 flag) {
    Unk_0207ae28_Buf b;
    b.v[0] = 0;
    b.v[1] = 0;
    func_0209d498(&b);
    if (func_0209d3d0(&b, self + 0x38c4, 0x3f) == -1) {
        func_02116048(&b, self + 0x38c4, 8);
        Unk_0207ae84_Mgr *m = (Unk_0207ae84_Mgr *)self;
        if (m->unk_38cc_64 != 0) {
            func_02116048(&b, &m->unk_38cc, 8);
        }
    }
    func_0207a550(self, &b);
    func_0207afe0(self, &b);
    func_0207b238(self, &b);
    func_0207b04c(self, (u8 *)&b);
    func_0207b590(self, &b);
    func_0207ae28(self);
    func_0207a4c4(self, flag);
    func_0207a104(self);
    if (flag == 0) {
        func_02079bb4(self);
    }
    func_02079a0c(self);
}

void func_0207af34(u8 *self) {
    if (!data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        Unk_0207ae28_Buf b;
        b.v[0] = 0;
        b.v[1] = 0;
        func_0209d498(&b);
        s32 i = 0;
        u8 *p = self;
        Unk_0207ae28_Buf *pb = &b;
        for (; i < 8; i++) {
            if (func_020805c4(p)->func_020030b4()) {
                func_0207c8e0(p, pb);
            }
            p += 0x700;
        }
    }
}

void func_0207af88(u8 *self) {
    u8 *p = self;
    s32 i = 0;
    s32 idx = i;
    do {
        if (func_020805c4(p)->func_020030b4()) {
            void *r6 = func_0209a610(func_0207e268(p));
            void *r7 = func_0209b2e4();
            s32 r1 = func_0209b044(r6, idx);
            if (r1 != 0xc) {
                func_0207e4b4(p, r1, r7);
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
}

void func_0207afe0(u8 *self, Unk_0207ae28_Buf *x) {
    u8 *p = self;
    s32 i = 0;
    do {
        if (func_020805c4(p)->func_020030b4()) {
            func_0207ca18(p, (u8 *)x);
            func_0207c9bc(p, (u8 *)x);
            if (func_0207c828(p, self + 0x38c4, self + 0x38cc, (u8 *)x) != 0xc) {
                func_0209ab18(func_0209a60c(func_0207e268(p)));
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
}

void func_0207b04c(u8 *self, u8 *x) {
    if (func_0207b0f0(self, x)) {
        s32 r = func_0207b084(self);
        if (r != -1) {
            func_0207ccd0(self + r * 0x700, x);
        }
    }
}

s32 func_0207b084(u8 *self) {
    u8 *p = self;
    s32 sp4 = func_0207a484(self);
    u32 mask = 0;
    s32 cnt = 0;
    s32 r4 = 0;
    for (; r4 < 8; r4++) {
        if (r4 != *(s8 *)(self + 0x38e9) && r4 != sp4 && func_020805c4(p)->func_020030b4() && func_0207cd48(p)) {
            mask |= 1 << r4;
            mask = (u8)mask;
            cnt++;
        }
        p += 0x700;
    }
    return func_0207bcfc(mask, cnt, 8);
}

BOOL func_0207b0f0(u8 *self, u8 *x) {
    if (func_0207bb7c(self) == 8) {
        s32 r6 = func_0207b208(self);
        s32 r0 = func_0207b168(self);
        if (r6 == -1 && r0 == -1) {
            if (func_0209d3d0((Unk_0207ae28_Buf *)x, self + 0x38c4, 0x3f) == 1) {
                s32 n = func_0209d3a4(self + 0x38c4, (Unk_0207ae28_Buf *)x);
                if (n > 0) {
                    BOOL t;
                    if (n >= 4) {
                        t = TRUE;
                    } else if (func_02063b8c(4 - n) == 0) {
                        t = TRUE;
                    } else {
                        t = FALSE;
                    }
                    if (t) {
                        return TRUE;
                    }
                    return FALSE;
                }
            }
        }
    }
    return FALSE;
}

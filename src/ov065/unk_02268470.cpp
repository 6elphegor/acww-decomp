// mwcc-flags: -O4,p
#include "types.h"
#pragma opt_strength_reduction off

// Big-number helpers (little-endian arrays of u16 digits).


struct Unk_ov065_02268c64_Msg {
    u8 unk_00[2];
    u16 unk_02;
};

struct Unk_ov065_022905a8 {
    u8 unk_0000[0x2140];
    u8 unk_2140[0x30];
    u16 unk_2170;
    u8 unk_2172[0xee];
    u32 unk_2260;
    u32 unk_2264;
    u8 unk_2268[3];
    u8 unk_226b;
    u8 unk_226c[0x14];
    u16 unk_2280;
    u16 unk_2282;
    u8 unk_2284[0x74];
    u16 unk_22f8;
};

extern "C" {
extern Unk_ov065_022905a8 *data_ov065_022905a8;
s32 func_ov065_0226989c(s32 a);
s32 func_ov065_02269944(s32 a, void *b, u32 c, u32 d);
s32 func_ov065_02269128(void *);
s32 func_ov065_02269550(void *);
s32 func_0211fcbc(void *cb, void *buf, u32 a, u32 b, u32 c);
s32 func_0212035c(void *cb);
extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);

void func_02116048(const void *src, void *dst, u32 n);
void *func_02115fb4(void *dst, s32 v, u32 n);
void func_021289b4(void *dst, const void *src, u32 n);
u64 func_02132ef8(u64 a, u64 b);

s32 func_ov065_02268be8(u16 *a, s32 n);
s32 func_ov065_02268c20(u16 *a, s32 n);
void func_ov065_02268658(u16 *q, u16 *a, u16 *b, u16 *r, s32 n, u16 *tmp);
void func_ov065_02268808(u16 *dst, u16 *a, s32 n);
void func_ov065_022688f0(u16 *dst, u16 *a, u32 m, s32 n);
void func_ov065_02268950(u16 *dst, u16 *a, u16 *b, s32 n);
void func_ov065_022689c0(u16 *a, u32 v, s32 i, s32 n);
s32 func_ov065_022689e4(u16 *a, u16 *b, s32 n);
void func_ov065_02268a7c(u16 *dst, u16 *a, u16 *b, s32 n);
void func_ov065_02268b28(u16 *dst, u16 *src, u32 c, s32 n);
void func_ov065_02268b6c(u16 *dst, u16 *a, u16 *b, s32 n);

void func_ov065_02268470(u16 *res, u16 *a, u16 *b, s32 n, u16 *tmp)
{
    u16 *b0 = tmp;
    u16 *b1 = tmp + n;
    u16 *b2 = b1 + n;
    u16 *b3 = b2 + n;
    u16 *b4 = b3 + n;
    u16 *b5 = b4 + n;
    u16 *b6 = b5 + n;
    func_02116048(a, b0, n * 2);
    func_02116048(b, b2, n * 2);
    b2[n] = 1;
    while (func_ov065_02268be8(b0, n) > 0) {
        func_ov065_02268658(b1, b2, b0, b5, n, b6);
        func_02116048(b0, b2, n * 2);
        func_02116048(b5, b0, n * 2);
        func_ov065_02268950(b5, b1, b3, n);
        func_ov065_02268a7c(b5, b4, b5, n);
        func_02116048(b3, b4, n * 2);
        func_02116048(b5, b3, n * 2);
    }
    func_ov065_02268b6c(b4, b4, b, n);
    func_ov065_02268658(0, b4, b, res, n, b6);
}

void func_ov065_02268540(u16 *out, u16 *base, u16 *exp, s32 n, u16 *mod)
{
    u16 *t0 = (u16 *)data_ov065_0228ebc8(n * 8);
    if (t0 != 0) {
        u16 *t1 = t0 + n;
        s32 i;
        func_02115fb4(out + 1, 0, (n - 1) * 2);
        out[0] = 1;
        i = (n - func_ov065_02268c20(exp, n)) * 16;
        while (i < (u32)(n * 16)) {
            if (((0x8000u >> (i & 15)) & exp[n - (i >> 4) - 1]) != 0) {
                func_02116048(base, out, n * 2);
                i++;
                break;
            }
            i++;
        }
        for (; i < (u32)(n * 16); i++) {
            func_ov065_02268808(t0, out, n);
            func_02116048(t0, out, n * 2);
            if (mod != 0) {
                func_ov065_02268658(0, out, mod, out, n, t1);
            }
            if (((0x8000u >> (i & 15)) & exp[n - (i >> 4) - 1]) != 0) {
                func_ov065_02268950(t0, out, base, n);
                func_02116048(t0, out, n * 2);
                if (mod != 0) {
                    func_ov065_02268658(0, out, mod, out, n, t1);
                }
            }
        }
        data_ov065_0228ebd0(t0);
    }
}

void func_ov065_02268658(u16 *q, u16 *a, u16 *b, u16 *r, s32 n, u16 *tmp)
{
    s32 k;
    u64 d;
    u16 *t1 = tmp + n;
    u16 *t2 = t1 + n;
    s32 la;
    s32 lb;
    func_02115fb4(t1, 0, n * 4);
    la = func_ov065_02268c20(a, n);
    lb = func_ov065_02268c20(b, n);
    if (la > 0 && lb > 0) {
        k = lb + (n - la) - 1;
        if (k >= n) {
            func_02116048(a, t2, n * 2);
        } else {
            func_02116048(a, t1 + k, la * 2);
            u16 *bp;
            if (lb > 2) {
                bp = b + lb;
                d = (u64)bp[-3] + (((u64)bp[-1] << 32) + ((u64)bp[-2] << 16));
            } else if (lb > 1) {
                bp = b + lb;
                d = ((u64)bp[-1] << 32) + ((u64)bp[-2] << 16);
            } else {
                bp = b + lb;
                d = (u64)bp[-1] << 32;
            }
            if (k < n) {
                u32 cs = (n * 2 - 1) * 2;
                u16 *rp = t2 + lb;
                do {
                    u32 qq;
                    func_021289b4(t1 + 1, t1, cs);
                    qq = func_02132ef8((u64)rp[-3] + (((u64)rp[-2] << 16) + (((u64)rp[0] << 48) + ((u64)rp[-1] << 32))), d);
                    if (qq > 0xffff) {
                        qq = 0xffff;
                    }
                    for (;;) {
                        func_ov065_022688f0(tmp, b, (u16)qq, n);
                        if (func_ov065_022689e4(t2, tmp, n) >= 0) {
                            break;
                        }
                        qq--;
                    }
                    func_ov065_02268a7c(t2, t2, tmp, n);
                    t1[0] = qq;
                    k++;
                } while (k < n);
            }
        }
    }
    if (q != 0) {
        func_02116048(t1, q, n * 2);
    }
    if (r != 0) {
        func_02116048(t2, r, n * 2);
    }
}

void func_ov065_02268808(u16 *dst, u16 *a, s32 n)
{
    s32 l = func_ov065_02268c20(a, n);
    u16 *pi;
    u16 *pa;
    s32 i, j, k;
    if (l * 2 < n) {
        func_02115fb4(dst + l * 2, 0, (n - l * 2) * 2);
    }
    s32 j1 = 0;
    if (l > 0) {
        s32 i1 = j1;
        u16 *pa1 = a;
        do {
            if (i1 >= n) {
                break;
            }
            u32 t = *pa1 * *pa1;
            dst[i1] = t;
            if (i1 == n - 1) {
                break;
            }
            dst[i1 + 1] = t >> 16;
            i1 += 2;
            pa1++;
            j1++;
        } while (j1 < l);
    }
    i = 0;
    if (l > 0) {
        pi = a;
        do {
            j = i + 1;
            pa = a + j;
            for (; j < l && (k = i + j) < n; j++) {
                u32 t = *pa * *pi;
                if (t <= 0x7fff8000) {
                    func_ov065_022689c0(dst, t * 2, k, n);
                } else {
                    func_ov065_022689c0(dst, t, k, n);
                    func_ov065_022689c0(dst, t, k, n);
                }
                pa++;
            }
            pi++;
            i++;
        } while (i < l);
    }
}

void func_ov065_022688f0(u16 *dst, u16 *a, u32 m, s32 n)
{
    s32 l = func_ov065_02268c20(a, n);
    u32 c = 0;
    u16 *p;
    s32 i = c;
    if (i < l) {
        p = dst;
        do {
            u32 t = c + m * *a;
            *p = t;
            c = t >> 16;
            a++;
            p++;
            i++;
        } while (i < l);
    }
    if (i < n) {
        dst[i++] = c;
    }
    func_02115fb4(dst + i, 0, (n - i) * 2);
}

void func_ov065_02268950(u16 *dst, u16 *a, u16 *b, s32 n)
{
    s32 la, lb, i, j;
    u16 *pa;
    func_02115fb4(dst, 0, n * 2);
    la = func_ov065_02268c20(a, n);
    lb = func_ov065_02268c20(b, n);
    for (i = 0; i < lb; i++) {
        j = 0;
        pa = a;
        for (; j < la && j < n - i; j++) {
            func_ov065_022689c0(dst, *pa * *b, i + j, n);
            pa++;
        }
        b++;
    }
}

void func_ov065_022689c0(u16 *a, u32 v, s32 i, s32 n)
{
    u16 *p = a + i;
    while (v != 0 && i < n) {
        u32 t = v + *p;
        *p = t;
        v = t >> 16;
        p++;
        i++;
    }
}

s32 func_ov065_022689e4(u16 *a, u16 *b, s32 n)
{
    s32 i;
    u16 *pb;
    u16 *pa;
    i = n - 1;
    if (i >= 0) {
        pb = b + i;
        pa = a + i;
        do {
            u32 y = *pb;
            u32 x = *pa;
            if (x > y) {
                return 1;
            }
            if (x < y) {
                return -1;
            }
            pb--;
            pa--;
            i--;
        } while (i >= 0);
    }
    return 0;
}

void func_ov065_02268a24(u16 *dst, u16 *src, u32 v, s32 n)
{
    s32 i = 0;
    u16 *p;
    u16 *d;
    if (i < n) {
        p = src;
        d = dst;
        do {
            u32 t = *p - v;
            *d = t;
            v = (t >> 16) & 1;
            if (v == 0) {
                break;
            }
            p++;
            d++;
            i++;
        } while (i < n);
    }
    if (dst != src) {
        i++;
        if (i < n) {
            u16 *ps2 = src + i;
            u16 *pd2 = dst + i;
            do {
                *pd2 = *ps2;
                ps2++;
                pd2++;
                i++;
            } while (i < n);
        }
    }
}

void func_ov065_02268a7c(u16 *dst, u16 *a, u16 *b, s32 n)
{
    s32 la = func_ov065_02268c20(a, n);
    s32 lb = func_ov065_02268c20(b, n);
    s32 m = la;
    if (m < lb) {
        m = lb;
    }
    if (m != n) {
        m++;
    }
    s32 c = 0;
    s32 i = c;
    u16 *pb = b;
    u16 *pa = a;
    u16 *pd = dst;
    while (i < m || (i < n && c != 0)) {
        s32 t = *pa - *pb + c;
        *pd = t;
        c = t >> 16;
        pb++;
        pa++;
        pd++;
        i++;
    }
    if (dst != a && dst != b) {
        func_02115fb4(dst + i, 0, (n - i) * 2);
    }
}

void func_ov065_02268b00(u16 *a, s32 n)
{
    s32 i = 0;
    u16 *p;
    if (i < n) {
    p = a;
    do {
        *p = ~*p;
        p++;
        i++;
    } while (i < n);
    }
    func_ov065_02268b28(a, a, 1, n);
}

void func_ov065_02268b28(u16 *dst, u16 *src, u32 c, s32 n)
{
    s32 i = 0;
    u16 *ps;
    u16 *pd;
    if (i < n) {
        ps = src;
        pd = dst;
        do {
            c += *ps;
            *pd = c;
            c >>= 16;
            if (c == 0) {
                break;
            }
            ps++;
            pd++;
            i++;
        } while (i < n);
    }
    if (dst != src) {
        i++;
        if (i < n) {
            u16 *ps2 = src + i;
            u16 *pd2 = dst + i;
            do {
                *pd2 = *ps2;
                ps2++;
                pd2++;
                i++;
            } while (i < n);
        }
    }
}

void func_ov065_02268b6c(u16 *dst, u16 *a, u16 *b, s32 n)
{
    s32 la = func_ov065_02268c20(a, n);
    s32 lb = func_ov065_02268c20(b, n);
    s32 m = la;
    if (m < lb) {
        m = lb;
    }
    if (m != n) {
        m++;
    }
    u32 c = 0;
    s32 i = c;
    u16 *pb;
    u16 *pa;
    u16 *pd;
    if (i < m) {
        pb = b;
        pa = a;
        pd = dst;
        do {
            u32 t = *pa + *pb + c;
            *pd = t;
            c = t >> 16;
            pb++;
            pa++;
            pd++;
            i++;
        } while (i < m);
    }
    if (dst != a && dst != b) {
        func_02115fb4(dst + i, 0, (n - i) * 2);
    }
}

s32 func_ov065_02268be8(u16 *a, s32 n)
{
    if ((a[n - 1] & 0x8000) != 0) {
        return -1;
    }
    if (func_ov065_02268c20(a, n) != 0) {
        return 1;
    }
    return 0;
}

s32 func_ov065_02268c20(u16 *a, s32 n)
{
    while (n != 0 && a[n - 1] == 0) {
        n--;
    }
    return n;
}

void func_ov065_02268c64(Unk_ov065_02268c64_Msg *m)
{
    if (m->unk_02 == 0) {
        data_ov065_022905a8->unk_226b = 0;
        data_ov065_022905a8->unk_2282 = 0;
        switch (data_ov065_022905a8->unk_2260) {
        case 5:
        case 6:
            func_ov065_0226989c(3);
            func_ov065_02269944(1, 0, 0, 0x8e1);
            break;
        case 7:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, 0, 0, 0x8e7);
            break;
        case 8: {
            u32 old;
            u32 w;
            u32 x;
            u32 y;
            u16 xs;
            s32 r;
            old = data_ov065_022905a8->unk_22f8;
            data_ov065_022905a8->unk_22f8 = 0;
            if (old == 0x12) {
                Unk_ov065_022905a8 *g = data_ov065_022905a8;
                if ((g->unk_2170 & 0x24) != 0x24) {
                    x = 0;
                    g->unk_2170 |= 0x24;
                    w = data_ov065_022905a8->unk_2264;
                    if ((w & 0xc0000) == 0xc0000) {
                        x = 1;
                    }
                    xs = x;
                    if ((w & 0x30000) == 0x30000) {
                        y = 0;
                    } else {
                        y = 1;
                    }
                    r = func_0211fcbc((void *)func_ov065_02269128, data_ov065_022905a8->unk_2140, 0, y, xs);
                    if (r == 2) {
                        break;
                    }
                    if (r != 3 && r == 8) {
                        func_ov065_0226989c(0xc);
                        func_ov065_02269944(1, data_ov065_022905a8->unk_2140, old, 0x905);
                    } else {
                        func_ov065_0226989c(0xb);
                        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, old, 0x90c);
                    }
                    break;
                }
            }
            func_ov065_0226989c(3);
            func_ov065_02269944(1, data_ov065_022905a8->unk_2140, old, 0x913);
            break;
        }
        case 9:
        case 12:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 1, 0x91b);
            break;
        case 10:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 0, 0x922);
            break;
        case 13: {
            s32 r = func_0212035c((void *)func_ov065_02269550);
            if (r == 2) {
                break;
            }
            if (r != 3 && r == 8) {
                func_ov065_0226989c(0xc);
                func_ov065_02269944(1, 0, 0, 0x930);
            } else {
                func_ov065_0226989c(0xb);
                func_ov065_02269944(7, 0, 0, 0x939);
            }
            break;
        }
        default:
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, 0, data_ov065_022905a8->unk_2260, 0x93f);
            break;
        }
    } else {
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x946);
    }
}

#pragma thumb off
asm u32 func_ov065_02268c38(u32 v)
{
    mov r1, r0
    mov r0, #0
    mov r3, #1
loop:
    clz r2, r1
    rsbs r2, r2, #0x1f
    bxlo lr
    bic r1, r1, r3, lsl r2
    add r0, r0, #1
    b loop
}

asm u32 func_ov065_02268c5c(u32 v)
{
    clz r0, r0
    bx lr
}
#pragma thumb reset
}

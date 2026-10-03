// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p -str reuse
#include "types.h"
#pragma opt_strength_reduction off

namespace Unk_ov065_02268470_Ns {
extern "C" {

extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);

void MI_CpuCopy8(const void *src, void *dst, u32 n);
void *MI_CpuFill8(void *dst, s32 v, u32 n);
void func_021289b4(void *dst, const void *src, u32 n);

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

s32 func_ov065_02268c20(u16 *a, s32 n)
{
    while (n != 0 && a[n - 1] == 0) {
        n--;
    }
    return n;
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
        MI_CpuFill8(dst + i, 0, (n - i) * 2);
    }
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
        MI_CpuFill8(dst + i, 0, (n - i) * 2);
    }
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

void func_ov065_02268950(u16 *dst, u16 *a, u16 *b, s32 n)
{
    s32 la, lb, i, j;
    u16 *pa;
    MI_CpuFill8(dst, 0, n * 2);
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
    MI_CpuFill8(dst + i, 0, (n - i) * 2);
}

void func_ov065_02268808(u16 *dst, u16 *a, s32 n)
{
    s32 l = func_ov065_02268c20(a, n);
    u16 *pi;
    u16 *pa;
    s32 i, j, k;
    if (l * 2 < n) {
        MI_CpuFill8(dst + l * 2, 0, (n - l * 2) * 2);
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

void func_ov065_02268658(u16 *q, u16 *a, u16 *b, u16 *r, s32 n, u16 *tmp)
{
    s32 k;
    u64 d;
    u16 *t1 = tmp + n;
    u16 *t2 = t1 + n;
    s32 la;
    s32 lb;
    MI_CpuFill8(t1, 0, n * 4);
    la = func_ov065_02268c20(a, n);
    lb = func_ov065_02268c20(b, n);
    if (la > 0 && lb > 0) {
        k = lb + (n - la) - 1;
        if (k >= n) {
            MI_CpuCopy8(a, t2, n * 2);
        } else {
            MI_CpuCopy8(a, t1 + k, la * 2);
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
                    qq = ((u64)rp[-3] + (((u64)rp[-2] << 16) + (((u64)rp[0] << 48) + ((u64)rp[-1] << 32)))) / d;
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
        MI_CpuCopy8(t1, q, n * 2);
    }
    if (r != 0) {
        MI_CpuCopy8(t2, r, n * 2);
    }
}

void func_ov065_02268540(u16 *out, u16 *base, u16 *exp, s32 n, u16 *mod)
{
    u16 *t0 = (u16 *)data_ov065_0228ebc8(n * 8);
    if (t0 != 0) {
        u16 *t1 = t0 + n;
        s32 i;
        MI_CpuFill8(out + 1, 0, (n - 1) * 2);
        out[0] = 1;
        i = (n - func_ov065_02268c20(exp, n)) * 16;
        while (i < (u32)(n * 16)) {
            if (((0x8000u >> (i & 15)) & exp[n - (i >> 4) - 1]) != 0) {
                MI_CpuCopy8(base, out, n * 2);
                i++;
                break;
            }
            i++;
        }
        for (; i < (u32)(n * 16); i++) {
            func_ov065_02268808(t0, out, n);
            MI_CpuCopy8(t0, out, n * 2);
            if (mod != 0) {
                func_ov065_02268658(0, out, mod, out, n, t1);
            }
            if (((0x8000u >> (i & 15)) & exp[n - (i >> 4) - 1]) != 0) {
                func_ov065_02268950(t0, out, base, n);
                MI_CpuCopy8(t0, out, n * 2);
                if (mod != 0) {
                    func_ov065_02268658(0, out, mod, out, n, t1);
                }
            }
        }
        data_ov065_0228ebd0(t0);
    }
}

void func_ov065_02268470(u16 *res, u16 *a, u16 *b, s32 n, u16 *tmp)
{
    u16 *b0 = tmp;
    u16 *b1 = tmp + n;
    u16 *b2 = b1 + n;
    u16 *b3 = b2 + n;
    u16 *b4 = b3 + n;
    u16 *b5 = b4 + n;
    u16 *b6 = b5 + n;
    MI_CpuCopy8(a, b0, n * 2);
    MI_CpuCopy8(b, b2, n * 2);
    b2[n] = 1;
    while (func_ov065_02268be8(b0, n) > 0) {
        func_ov065_02268658(b1, b2, b0, b5, n, b6);
        MI_CpuCopy8(b0, b2, n * 2);
        MI_CpuCopy8(b5, b0, n * 2);
        func_ov065_02268950(b5, b1, b3, n);
        func_ov065_02268a7c(b5, b4, b5, n);
        MI_CpuCopy8(b3, b4, n * 2);
        MI_CpuCopy8(b5, b3, n * 2);
    }
    func_ov065_02268b6c(b4, b4, b, n);
    func_ov065_02268658(0, b4, b, res, n, b6);
}

}
}

namespace Unk_ov065_02267ac0_Ns {
extern "C" {

extern u8 *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(u8 *);

void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, s32, u32);
void func_021289b4(void *, void *, u32);

u32 func_ov065_02268c20(u16 *, u32);
void func_ov065_02268470(u16 *, u16 *, u16 *, u32, u16 *);
void func_ov065_02268950(u16 *, u16 *, u16 *, u32);
void func_ov065_02268a24(u16 *, u16 *, u32, u32);
void func_ov065_02268658(u16 *, u16 *, u16 *, u16 *, u32, u16 *);
void func_ov065_022683a8(u16 *, u16 *, u32, u32, u32, u16 *, u16 *, u16 *, u16 *);
void func_ov065_02268808(u16 *, u16 *, u32);

void func_ov065_02268b6c(u16 *, u16 *, u16 *, u32);
s32 func_ov065_022689e4(u16 *, u16 *, u32);
void func_ov065_02268a7c(u16 *, u16 *, u16 *, u32);

#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define F0(b, c, d) ((((c) ^ (d)) & (b)) ^ (d))
#define F1(b, c, d) (((b) ^ (c)) ^ (d))
#define F2(b, c, d) (((b) & ((c) | (d))) | ((c) & (d)))
#define R0(a, b, c, d, e, x) e += ROL(a, 5) + F0(b, c, d) + (x) + 0x5a827999; b = ROL(b, 30);
#define R1(a, b, c, d, e, x) e += ROL(a, 5) + F1(b, c, d) + (x) + 0x6ed9eba1; b = ROL(b, 30);
#define R2(a, b, c, d, e, x) e += ROL(a, 5) + F2(b, c, d) + (x) + 0x8f1bbcdc; b = ROL(b, 30);
#define R3(a, b, c, d, e, x) e += ROL(a, 5) + F1(b, c, d) + (x) + 0xca62c1d6; b = ROL(b, 30);
#define X(k) func_ov065_02268100((k), w)

void func_ov065_022680a4(u32 *dst, u8 *src, u32 n);
u32 func_ov065_02268100(s32 i, u32 *w);

void func_ov065_022683a8(u16 *a, u16 *b, u32 mode, u32 n, u32 k, u16 *m, u16 *t1, u16 *t2, u16 *t3) {
    MI_CpuCopy8(a, (s32)b, n * 2);
    if (mode == 1) {
        func_ov065_02268808(a, b, n);
    } else if (mode != 0) {
        func_ov065_02268950(a, b, (u16 *)mode, n);
    }
    func_ov065_02268950(t2, a, t1, k);
    MI_CpuFill8(t2 + k, 0, (n - k) * 2);
    func_ov065_02268950(t3, t2, m, n);
    func_ov065_02268b6c(a, a, t3, n);
    func_021289b4(a, a + k, (n - k) * 2);
    MI_CpuFill8(a + n - k, 0, k * 2);
    switch (func_ov065_022689e4(a, m, n)) {
    case 0:
        MI_CpuFill8(a, 0, n * 2);
        break;
    case 1:
        func_ov065_02268a7c(a, a, m, n);
        break;
    }
}

void func_ov065_0226824c(u16 *x, u16 *y, u16 *z, u32 n, u16 *m) {
    u32 bytes = n * 22;
    u16 *buf = (u16 *)data_ov065_0228ebc8(bytes);
    u16 *p1, *p2, *p3, *p4, *p5, *p6;
    u32 k;
    s32 i;
    s32 bound;
    if (buf == 0) return;
    MI_CpuFill8(buf, 0, bytes);
    p1 = buf + n;
    p2 = p1 + n;
    p3 = p2 + n;
    p4 = p3 + n;
    p5 = p4 + n;
    p6 = p5 + n;
    k = func_ov065_02268c20(m, n);
    buf[k] = 1;
    func_ov065_02268470(p1, buf, m, n, p2);
    func_ov065_02268950(p3, buf, p1, n);
    func_ov065_02268a24(p1, p3, 1, n);
    func_ov065_02268658(p1, p1, m, 0, n, p6);
    func_ov065_02268950(p2, y, buf, n);
    func_ov065_02268658(0, p2, m, p2, n, p6);
    func_ov065_02268658(0, buf, m, x, n, p6);
    i = 0;
    bound = k << 4;
    for (; (u32)i < (u32)bound; i++) {
        func_ov065_022683a8(x, p5, 1, n, k, m, p1, p3, p4);
        if ((0x8000u >> (i & 15)) & z[k - (i >> 4) - 1]) {
            func_ov065_022683a8(x, p5, (u32)p2, n, k, m, p1, p3, p4);
        }
    }
    func_ov065_022683a8(x, p5, 0, n, k, m, p1, p3, p4);
    data_ov065_0228ebd0((u8 *)buf);
}

void func_ov065_02268210(u16 *dst, u8 *src, s32 n, u32 m) {
    MI_CpuFill8(dst, 0, m * 2);
    src += n - 1;
    while (n > 1) {
        *dst = src[0] + (src[-1] << 8);
        dst++;
        src -= 2;
        n -= 2;
    }
    if (n > 0) *dst = *src;
}

void func_ov065_022681e0(u8 *dst, u16 *src, s32 n) {
    dst += n - 1;
    while (n > 1) {
        *dst-- = *src;
        *dst-- = *src++ >> 8;
        n -= 2;
    }
    if (n > 0) *dst = *src;
}

void func_ov065_0226818c(u8 *st, u8 *key, s32 keylen) {
    u8 *s;
    s32 i;
    u8 j;
    u8 k;
    u8 z = 0;
    st[0] = 0;
    st[1] = 0;
    s = st + 2;
    for (i = 0; i < 256; i++) s[i] = i;
    k = 0;
    j = 0;
    for (i = 0; i < 256; i++) {
        u8 a = s[i];
        j = j + (a + key[k]);
        u8 b = s[j];
        s[i] = b;
        s[j] = a;
        k = k + 1;
        if (k >= keylen) k = z;
    }
}

void func_ov065_0226813c(u8 *st, u8 *buf, s32 n) {
    s32 i;
    u8 x;
    u8 y;
    u8 *s;
    x = st[0];
    y = st[1];
    s = st + 2;
    for (i = 0; i < n; i++) {
        x = x + 1;
        u8 a = s[x];
        y = y + a;
        u8 b = s[y];
        s[x] = b;
        s[y] = a;
        buf[i] ^= s[(u8)(a + b)];
    }
    st[0] = x;
    st[1] = y;
}

u32 func_ov065_02268100(s32 i, u32 *w) {
    u32 a = w[i];
    u32 b = w[(i + 2) & 15];
    u32 c = w[(i + 13) & 15];
    u32 d = w[i ^ 8];
    a ^= b ^ (c ^ d);
    w[i] = (a << 1) | (a >> 31);
    return w[i];
}

void func_ov065_022680d4(u8 *dst, u32 *src, u32 n) {
    u32 i = 0;
    u32 cnt = n >> 2;
    for (; i < cnt; i++) {
        u32 v = *src++;
        dst[0] = v >> 24;
        dst[1] = v >> 16;
        dst[2] = v >> 8;
        u8 *t = dst + 3;
        dst += 4;
        *t = v;
    }
}

void func_ov065_022680a4(u32 *dst, u8 *src, u32 n) {
    u32 i;
    for (i = 0; i < n; i += 4) {
        u32 b3 = src[i + 3];
        u32 b2 = src[i + 2];
        u32 b0 = src[i];
        u32 b1 = src[i + 1];
        *dst++ = b3 | ((b2 << 8) | ((b0 << 24) | (b1 << 16)));
    }
}

void func_ov065_02267ac0(u32 *ctx, u8 *data) {
    u32 a, b, c, d, e;
    u32 w[16];
    s32 i, j;
    u32 *p;
    a = ctx[0];
    b = ctx[1];
    c = ctx[2];
    d = ctx[3];
    e = ctx[4];
    func_ov065_022680a4(w, data, 0x40);
    i = 0;
    {
        for (j = 0, p = w; j < 3; j++) {
            R0(a, b, c, d, e, *p);
            R0(e, a, b, c, d, w[i + 1]);
            R0(d, e, a, b, c, w[i + 2]);
            R0(c, d, e, a, b, w[i + 3]);
            R0(b, c, d, e, a, w[i + 4]);
            p += 5;
            i += 5;
        }
    }
    R0(a, b, c, d, e, w[15]);
    i = 0;
    R0(e, a, b, c, d, X(i));
    R0(d, e, a, b, c, X(i + 1));
    R0(c, d, e, a, b, X(i + 2));
    R0(b, c, d, e, a, X(i + 3));
    i = 4;
    {
        for (j = 0; j < 4; j++) {
            R1(a, b, c, d, e, X(i));
            R1(e, a, b, c, d, X(i + 1));
            i = (i + 2) & 15;
            R1(d, e, a, b, c, X(i));
            R1(c, d, e, a, b, X(i + 1));
            R1(b, c, d, e, a, X(i + 2));
            i += 3;
        }
    }
    {
        for (j = 0; j < 4; j++) {
            R2(a, b, c, d, e, X(i));
            R2(e, a, b, c, d, X(i + 1));
            R2(d, e, a, b, c, X(i + 2));
            i = (i + 3) & 15;
            R2(c, d, e, a, b, X(i));
            R2(b, c, d, e, a, X(i + 1));
            i += 2;
        }
    }
    {
        for (j = 0; j < 4; j++) {
            R3(a, b, c, d, e, X(i));
            R3(e, a, b, c, d, X(i + 1));
            R3(d, e, a, b, c, X(i + 2));
            R3(c, d, e, a, b, X(i + 3));
            i = (i + 4) & 15;
            R3(b, c, d, e, a, X(i));
            i += 1;
        }
    }
    ctx[0] += a;
    ctx[1] += b;
    ctx[2] += c;
    ctx[3] += d;
    ctx[4] += e;
}

}
}

namespace Unk_ov065_022671a0_Ns {
struct Unk_ov065_022679f8_Sha1 {
    u32 st[5];
    u32 hi;
    u32 lo;
    u8 buf[64];
};

extern "C" {

void MI_CpuFill8(void *dst, s32 v, s32 n);
void MI_CpuCopy8(const void *src, void *dst, s32 n);
void func_ov065_022680d4(void *dst, const void *src, s32 n);
void func_ov065_02267ac0(Unk_ov065_022679f8_Sha1 *ctx, const u8 *block);
void func_ov065_022679f8(Unk_ov065_022679f8_Sha1 *ctx, const u8 *data, u32 n);

u8 data_ov065_0228b630[0x40] = {0x80};

void func_ov065_02267a84(Unk_ov065_022679f8_Sha1 *ctx)
{
    MI_CpuFill8(ctx, 0, 0x5c);
    ctx->st[0] = 0x67452301;
    ctx->st[1] = 0xefcdab89;
    ctx->st[2] = 0x98badcfe;
    ctx->st[3] = 0x10325476;
    ctx->st[4] = 0xc3d2e1f0;
}

void func_ov065_022679f8(Unk_ov065_022679f8_Sha1 *ctx, const u8 *data, u32 n)
{
    u32 idx = (ctx->lo >> 3) & 0x3f;
    u32 bits = n << 3;
    u32 part;
    u32 i;
    ctx->lo += bits;
    if (ctx->lo < bits) {
        ctx->hi++;
    }
    ctx->hi += n >> 29;
    part = 64 - idx;
    if (n >= part) {
        MI_CpuCopy8(data, ctx->buf + idx, part);
        idx = 0;
        func_ov065_02267ac0(ctx, ctx->buf);
        for (i = part; i + 63 < n; i += 64) {
            func_ov065_02267ac0(ctx, data + i);
        }
    } else {
        i = 0;
    }
    MI_CpuCopy8(data + i, ctx->buf + idx, n - i);
}

void func_ov065_022679a4(Unk_ov065_022679f8_Sha1 *ctx, void *out)
{
    u32 idx;
    func_ov065_022680d4(out, &ctx->hi, 8);
    idx = (ctx->lo >> 3) & 0x3f;
    if ((s32)idx < 0x38) {
        idx = 0x38 - idx;
    } else {
        idx = 0x78 - idx;
    }
    func_ov065_022679f8(ctx, data_ov065_0228b630, idx);
    func_ov065_022679f8(ctx, (u8 *)out, 8);
    func_ov065_022680d4(out, ctx, 0x14);
}

void func_ov065_0226797c(Unk_ov065_022679f8_Sha1 *ctx, void *out)
{
    func_ov065_022679f8(ctx, (data_ov065_0228b630 + 1), 0x2c);
    func_ov065_022680d4(out, ctx, 0x14);
}

void func_ov065_0226796c(void *dst, const void *src, s32 n)
{
    MI_CpuCopy8(src, dst, n);
}

void func_ov065_0226795c(void *dst, const void *src, s32 n)
{
    MI_CpuCopy8(src, dst, n);
}

}
}

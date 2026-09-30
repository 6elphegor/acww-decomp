// mwcc-flags: -O4,p
#include "types.h"

// ov065_014: SHA-1 block, RC4, bignum helpers, 0x02267ac0..0x022683a8

extern "C" {

extern u8 *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(u8 *);

void func_02115fb4(void *, s32, u32);
void func_02116048(void *, s32, u32);
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

void func_ov065_02267ac0(u32 *ctx, u8 *data) {
    u32 a, b, c, d, e;
    u32 w[16];
    s32 i, j;
    a = ctx[0];
    b = ctx[1];
    c = ctx[2];
    d = ctx[3];
    e = ctx[4];
    func_ov065_022680a4(w, data, 0x40);
    i = 0;
    {
        for (j = 0; j < 3; j++) {
            R0(a, b, c, d, e, w[i]);
            R0(e, a, b, c, d, w[i + 1]);
            R0(d, e, a, b, c, w[i + 2]);
            R0(c, d, e, a, b, w[i + 3]);
            R0(b, c, d, e, a, w[i + 4]);
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

u32 func_ov065_02268100(s32 i, u32 *w) {
    u32 a = w[i];
    u32 b = w[(i + 2) & 15];
    u32 c = w[(i + 13) & 15];
    u32 d = w[i ^ 8];
    a ^= b ^ (c ^ d);
    w[i] = (a << 1) | (a >> 31);
    return w[i];
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

void func_ov065_022681e0(u8 *dst, u16 *src, s32 n) {
    dst += n - 1;
    while (n > 1) {
        *dst-- = *src;
        *dst-- = *src++ >> 8;
        n -= 2;
    }
    if (n > 0) *dst = *src;
}

void func_ov065_02268210(u16 *dst, u8 *src, s32 n, u32 m) {
    func_02115fb4(dst, 0, m * 2);
    src += n - 1;
    while (n > 1) {
        *dst = src[0] + (src[-1] << 8);
        dst++;
        src -= 2;
        n -= 2;
    }
    if (n > 0) *dst = *src;
}

void func_ov065_0226824c(u16 *x, u16 *y, u16 *z, u32 n, u16 *m) {
    u32 bytes = n * 22;
    u16 *buf = (u16 *)data_ov065_0228ebc8(bytes);
    u16 *p1, *p2, *p3, *p4, *p5, *p6;
    u32 k;
    s32 i;
    s32 bound;
    if (buf == 0) return;
    func_02115fb4(buf, 0, bytes);
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

void func_ov065_022683a8(u16 *a, u16 *b, u32 mode, u32 n, u32 k, u16 *m, u16 *t1, u16 *t2, u16 *t3) {
    func_02116048(a, (s32)b, n * 2);
    if (mode == 1) {
        func_ov065_02268808(a, b, n);
    } else if (mode != 0) {
        func_ov065_02268950(a, b, (u16 *)mode, n);
    }
    func_ov065_02268950(t2, a, t1, k);
    func_02115fb4(t2 + k, 0, (n - k) * 2);
    func_ov065_02268950(t3, t2, m, n);
    func_ov065_02268b6c(a, a, t3, n);
    func_021289b4(a, a + k, (n - k) * 2);
    func_02115fb4(a + n - k, 0, k * 2);
    switch (func_ov065_022689e4(a, m, n)) {
    case 0:
        func_02115fb4(a, 0, n * 2);
        break;
    case 1:
        func_ov065_02268a7c(a, a, m, n);
        break;
    }
}

}

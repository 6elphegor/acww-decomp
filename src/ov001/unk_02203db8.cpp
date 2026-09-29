// mwcc-flags: -O4,p
#include "types.h"

#define F(x, y, z) (((x) & (y)) | ((~(x)) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~(z))))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~(z))))
#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define STEP(f, a, b, c, d, x, s, ac) { (a) += f(b, c, d) + (x) + (ac); (a) = ROL(a, s); (a) += (b); }

extern "C" {
extern void (*data_ov001_0222c85c)(void *);
extern void *(*data_ov001_0222c854)(u32);
void *func_0212899c(void *p, s32 v, u32 n);
u64 func_01ffa6b4();
u64 func_02132ef8(u64 a, u64 b);

s32 func_ov001_02203db8(char *buf, u32 v);
void func_ov001_02203e84(void *p, s32 c, u32 n);
void func_ov001_02203e9c(u8 *dst, u8 *src, u32 n);
void func_ov001_02203eb8(u32 *dst, u8 *src, u32 n);
void func_ov001_02203ee8(u8 *dst, u32 *src, u32 n);
void func_ov001_02204850(void *ctx);
void func_ov001_022047d0(void *ctx, void *p, u32 n);
void func_ov001_02204774(void *out, void *ctx);

s32 func_ov001_02203db8(char *buf, u32 v) {
    char *p = buf;
    s32 b = (u8)v;
    s32 i, hi, lo;
    hi = (b & 0xf0) >> 4;
    i = 0;
    lo = b & 0xf;
    do {
        if (hi <= 9) {
            *p = hi + 0x30;
            p++;
        } else {
            *p = hi + 0x37;
            p++;
        }
        hi = lo;
        i++;
    } while (i < 2);
    *p = 0;
    return p - buf;
}

void func_ov001_02203df4(void *p) {
    data_ov001_0222c85c(p);
}

void *func_ov001_02203e08(u32 n, u32 m) {
    u32 size = n * m;
    void *p = data_ov001_0222c854(size);
    if (p != NULL) {
        func_0212899c(p, 0, size);
    }
    return p;
}

u64 func_ov001_02203e34(s32 a, s32 b) {
    return func_02132ef8(func_01ffa6b4() << 6, 0x82ea);
}

void func_ov001_02203e58(void *out, void *p, u32 n) {
    u32 ctx[22];
    func_ov001_02204850(ctx);
    func_ov001_022047d0(ctx, p, n);
    func_ov001_02204774(out, ctx);
}

void func_ov001_02203e84(void *p, s32 c, u32 n) {
    s8 *q = (s8 *)p;
    u32 i;
    for (i = 0; i < n; i++) {
        *q = (s8)c;
        q++;
    }
}

void func_ov001_02203e9c(u8 *dst, u8 *src, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        dst[i] = src[i];
    }
}

void func_ov001_02203eb8(u32 *dst, u8 *src, u32 n) {
    u32 i;
    for (i = 0; i < n; i += 4) {
        *dst++ = ((u32)src[i]) | ((u32)src[i + 1] << 8) | ((u32)src[i + 2] << 16) | ((u32)src[i + 3] << 24);
    }
}

void func_ov001_02203ee8(u8 *dst, u32 *src, u32 n) {
    u32 i;
    for (i = 0; i < n; i += 4) {
        dst[i] = *src;
        dst[i + 1] = *src >> 8;
        dst[i + 2] = *src >> 16;
        dst[i + 3] = *src >> 24;
        src++;
    }
}

void func_ov001_02203f18(u32 *state, u8 *block) {
    u32 a = state[0], b = state[1], c = state[2], d = state[3];
    u32 x[16];
    func_ov001_02203eb8(x, block, 64);
    STEP(F, a, b, c, d, x[0], 7, 0xd76aa478u);
    STEP(F, d, a, b, c, x[1], 12, 0xe8c7b756u);
    STEP(F, c, d, a, b, x[2], 17, 0x242070dbu);
    STEP(F, b, c, d, a, x[3], 22, 0xc1bdceeeu);
    STEP(F, a, b, c, d, x[4], 7, 0xf57c0fafu);
    STEP(F, d, a, b, c, x[5], 12, 0x4787c62au);
    STEP(F, c, d, a, b, x[6], 17, 0xa8304613u);
    STEP(F, b, c, d, a, x[7], 22, 0xfd469501u);
    STEP(F, a, b, c, d, x[8], 7, 0x698098d8u);
    STEP(F, d, a, b, c, x[9], 12, 0x8b44f7afu);
    STEP(F, c, d, a, b, x[10], 17, 0xffff5bb1u);
    STEP(F, b, c, d, a, x[11], 22, 0x895cd7beu);
    STEP(F, a, b, c, d, x[12], 7, 0x6b901122u);
    STEP(F, d, a, b, c, x[13], 12, 0xfd987193u);
    STEP(F, c, d, a, b, x[14], 17, 0xa679438eu);
    STEP(F, b, c, d, a, x[15], 22, 0x49b40821u);
    STEP(G, a, b, c, d, x[1], 5, 0xf61e2562u);
    STEP(G, d, a, b, c, x[6], 9, 0xc040b340u);
    STEP(G, c, d, a, b, x[11], 14, 0x265e5a51u);
    STEP(G, b, c, d, a, x[0], 20, 0xe9b6c7aau);
    STEP(G, a, b, c, d, x[5], 5, 0xd62f105du);
    STEP(G, d, a, b, c, x[10], 9, 0x02441453u);
    STEP(G, c, d, a, b, x[15], 14, 0xd8a1e681u);
    STEP(G, b, c, d, a, x[4], 20, 0xe7d3fbc8u);
    STEP(G, a, b, c, d, x[9], 5, 0x21e1cde6u);
    STEP(G, d, a, b, c, x[14], 9, 0xc33707d6u);
    STEP(G, c, d, a, b, x[3], 14, 0xf4d50d87u);
    STEP(G, b, c, d, a, x[8], 20, 0x455a14edu);
    STEP(G, a, b, c, d, x[13], 5, 0xa9e3e905u);
    STEP(G, d, a, b, c, x[2], 9, 0xfcefa3f8u);
    STEP(G, c, d, a, b, x[7], 14, 0x676f02d9u);
    STEP(G, b, c, d, a, x[12], 20, 0x8d2a4c8au);
    STEP(H, a, b, c, d, x[5], 4, 0xfffa3942u);
    STEP(H, d, a, b, c, x[8], 11, 0x8771f681u);
    STEP(H, c, d, a, b, x[11], 16, 0x6d9d6122u);
    STEP(H, b, c, d, a, x[14], 23, 0xfde5380cu);
    STEP(H, a, b, c, d, x[1], 4, 0xa4beea44u);
    STEP(H, d, a, b, c, x[4], 11, 0x4bdecfa9u);
    STEP(H, c, d, a, b, x[7], 16, 0xf6bb4b60u);
    STEP(H, b, c, d, a, x[10], 23, 0xbebfbc70u);
    STEP(H, a, b, c, d, x[13], 4, 0x289b7ec6u);
    STEP(H, d, a, b, c, x[0], 11, 0xeaa127fau);
    STEP(H, c, d, a, b, x[3], 16, 0xd4ef3085u);
    STEP(H, b, c, d, a, x[6], 23, 0x04881d05u);
    STEP(H, a, b, c, d, x[9], 4, 0xd9d4d039u);
    STEP(H, d, a, b, c, x[12], 11, 0xe6db99e5u);
    STEP(H, c, d, a, b, x[15], 16, 0x1fa27cf8u);
    STEP(H, b, c, d, a, x[2], 23, 0xc4ac5665u);
    STEP(I, a, b, c, d, x[0], 6, 0xf4292244u);
    STEP(I, d, a, b, c, x[7], 10, 0x432aff97u);
    STEP(I, c, d, a, b, x[14], 15, 0xab9423a7u);
    STEP(I, b, c, d, a, x[5], 21, 0xfc93a039u);
    STEP(I, a, b, c, d, x[12], 6, 0x655b59c3u);
    STEP(I, d, a, b, c, x[3], 10, 0x8f0ccc92u);
    STEP(I, c, d, a, b, x[10], 15, 0xffeff47du);
    STEP(I, b, c, d, a, x[1], 21, 0x85845dd1u);
    STEP(I, a, b, c, d, x[8], 6, 0x6fa87e4fu);
    STEP(I, d, a, b, c, x[15], 10, 0xfe2ce6e0u);
    STEP(I, c, d, a, b, x[6], 15, 0xa3014314u);
    STEP(I, b, c, d, a, x[13], 21, 0x4e0811a1u);
    STEP(I, a, b, c, d, x[4], 6, 0xf7537e82u);
    STEP(I, d, a, b, c, x[11], 10, 0xbd3af235u);
    STEP(I, c, d, a, b, x[2], 15, 0x2ad7d2bbu);
    STEP(I, b, c, d, a, x[9], 21, 0xeb86d391u);
    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    func_ov001_02203e84(x, 0, 64);
}
}

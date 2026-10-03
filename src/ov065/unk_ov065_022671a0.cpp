// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_022672a0_Tbl {
    u8 pad_000[0x7e8];
    void **unk_7e8;
    s32 unk_7ec;
};

struct Unk_ov065_022672ec_Ptr {
    u8 pad_00[0xc];
    Unk_ov065_022672a0_Tbl *unk_0c;
};

struct Unk_ov065_022672ec_Root {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_ov065_0226733c_Ent {
    u8 unk_00[0x20];
    u8 pad_20[0x30];
    u32 unk_50;
    u32 unk_54;
    u16 unk_58;
    u8 unk_5a;
    u8 pad_5b;
};

struct Unk_ov065_02267480_Md5 {
    u32 st[4];
    u32 lo;
    u32 hi;
    u8 buf[64];
};

struct Unk_ov065_022679f8_Sha1 {
    u32 st[5];
    u32 hi;
    u32 lo;
    u8 buf[64];
};

extern u32 data_021fcc2c[];

extern "C" {

u64 OS_GetTick(void);
void MI_CpuFill8(void *dst, s32 v, s32 n);
void MI_CpuCopy8(const void *src, void *dst, s32 n);
s32 strcmp(const void *a, const void *b);
s32 memcmp(const void *a, const void *b, u32 n);
void RTC_GetDate(void *);
void RTC_GetTime(void *);
u32 RTC_ConvertDateTimeToSecond(void *, void *);
void func_ov065_0226795c(void *dst, const void *src, s32 n);
void func_ov065_0226796c(void *dst, const void *src, s32 n);

u8 data_ov065_0228b4b0[0x40] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x01, 0x06, 0x0b, 0x00, 0x05, 0x0a, 0x0f, 0x04, 0x09, 0x0e, 0x03, 0x08, 0x0d, 0x02, 0x07, 0x0c, 0x05, 0x08, 0x0b, 0x0e, 0x01, 0x04, 0x07, 0x0a, 0x0d, 0x00, 0x03, 0x06, 0x09, 0x0c, 0x0f, 0x02, 0x00, 0x07, 0x0e, 0x05, 0x0c, 0x03, 0x0a, 0x01, 0x08, 0x0f, 0x06, 0x0d, 0x04, 0x0b, 0x02, 0x09};
u8 data_ov065_0228b4f0[0x40] = {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
u32 data_ov065_0228b530[0x40] = {0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee, 0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501, 0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be, 0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821, 0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa, 0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8, 0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed, 0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a, 0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c, 0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70, 0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05, 0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665, 0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039, 0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1, 0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1, 0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391};
Unk_ov065_0226733c_Ent data_ov065_02290438[4] = {0};

void func_ov065_0226742c(Unk_ov065_02267480_Md5 *ctx, void *out);
void func_ov065_02267480(Unk_ov065_02267480_Md5 *ctx, const u8 *data, u32 n);
void func_ov065_0226750c(Unk_ov065_02267480_Md5 *ctx);
void func_ov065_02267540(Unk_ov065_02267480_Md5 *ctx, const u8 *block);

#define Unk_ov065_02267540_ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define Unk_ov065_02267540_F(b, c, d) ((d) ^ ((b) & ((c) ^ (d))))
#define Unk_ov065_02267540_G(b, c, d) (((b) & (d)) | ((c) & ~(d)))
#define Unk_ov065_02267540_H(b, c, d) ((b) ^ (c) ^ (d))
#define Unk_ov065_02267540_I(b, c, d) ((c) ^ ((b) | ~(d)))
#define Unk_ov065_02267540_STEP(f, a, b, c, d, k, sh) \
    a += f(b, c, d) + DoorLight[data_ov065_0228b4b0[k]] + data_ov065_0228b530[k]; \
    a = b + Unk_ov065_02267540_ROL(a, sh);

void func_ov065_02267540(Unk_ov065_02267480_Md5 *ctx, const u8 *block)
{
    u32 a = ctx->st[0];
    u32 b = ctx->st[1];
    u32 c = ctx->st[2];
    u32 d = ctx->st[3];
    u32 DoorLight[16];
    s32 t;
    s32 i;
    func_ov065_0226795c(DoorLight, block, 0x40);
    t = 0;
    for (i = 0; i < 4; i++) {
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_F, a, b, c, d, t + 0, 7)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_F, d, a, b, c, t + 1, 12)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_F, c, d, a, b, t + 2, 17)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_F, b, c, d, a, t + 3, 22)
        t += 4;
    }
    for (i = 0; i < 4; i++) {
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_G, a, b, c, d, t + 0, 5)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_G, d, a, b, c, t + 1, 9)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_G, c, d, a, b, t + 2, 14)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_G, b, c, d, a, t + 3, 20)
        t += 4;
    }
    for (i = 0; i < 4; i++) {
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_H, a, b, c, d, t + 0, 4)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_H, d, a, b, c, t + 1, 11)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_H, c, d, a, b, t + 2, 16)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_H, b, c, d, a, t + 3, 23)
        t += 4;
    }
    for (i = 0; i < 4; i++) {
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_I, a, b, c, d, t + 0, 6)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_I, d, a, b, c, t + 1, 10)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_I, c, d, a, b, t + 2, 15)
        Unk_ov065_02267540_STEP(Unk_ov065_02267540_I, b, c, d, a, t + 3, 21)
        t += 4;
    }
    ctx->st[0] += a;
    ctx->st[1] += b;
    ctx->st[2] += c;
    ctx->st[3] += d;
}

void func_ov065_0226750c(Unk_ov065_02267480_Md5 *ctx)
{
    MI_CpuFill8(ctx, 0, 0x58);
    ctx->st[0] = 0x67452301;
    ctx->st[1] = 0xefcdab89;
    ctx->st[2] = 0x98badcfe;
    ctx->st[3] = 0x10325476;
}

void func_ov065_02267480(Unk_ov065_02267480_Md5 *ctx, const u8 *data, u32 n)
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
        func_ov065_02267540(ctx, ctx->buf);
        for (i = part; i + 63 < n; i += 64) {
            func_ov065_02267540(ctx, data + i);
        }
    } else {
        i = 0;
    }
    MI_CpuCopy8(data + i, ctx->buf + idx, n - i);
}

void func_ov065_0226742c(Unk_ov065_02267480_Md5 *ctx, void *out)
{
    u32 idx;
    func_ov065_0226796c(out, &ctx->lo, 8);
    idx = (ctx->lo >> 3) & 0x3f;
    if ((s32)idx < 0x38) {
        idx = 0x38 - idx;
    } else {
        idx = 0x78 - idx;
    }
    func_ov065_02267480(ctx, data_ov065_0228b4f0, idx);
    func_ov065_02267480(ctx, (u8 *)out, 8);
    func_ov065_0226796c(out, ctx, 0x10);
}

Unk_ov065_0226733c_Ent *func_ov065_022673dc(const void *p)
{
    s32 i = 0;
    Unk_ov065_0226733c_Ent *e = data_ov065_02290438;
    for (; i < 4; e++, i++) {
        if (e->unk_5a != 0 && memcmp(e, p, 0x20) == 0) {
            e->unk_50 = (u32)(OS_GetTick() >> 16);
            return e;
        }
    }
    return 0;
}

Unk_ov065_0226733c_Ent *func_ov065_02267394(u32 a, u32 b)
{
    s32 i = 0;
    Unk_ov065_0226733c_Ent *e = data_ov065_02290438;
    for (; i < 4; e++, i++) {
        if (e->unk_5a != 0 && e->unk_54 == a && e->unk_58 == b) {
            e->unk_50 = (u32)(OS_GetTick() >> 16);
            return e;
        }
    }
    return 0;
}

Unk_ov065_0226733c_Ent *func_ov065_0226733c(const void *src)
{
    Unk_ov065_0226733c_Ent *pick;
    u32 tick;
    s32 i;
    u32 best;
    Unk_ov065_0226733c_Ent *e;
    tick = (u32)(OS_GetTick() >> 16);
    best = 0;
    pick = data_ov065_02290438;
    i = 0;
    e = pick;
    for (; i < 4; e++, i++) {
        u32 age;
        if (e->unk_5a == 0) {
            pick = e;
            break;
        }
        age = tick - e->unk_50;
        if (age > best) {
            best = age;
            pick = e;
        }
    }
    MI_CpuCopy8(src, pick, 0x20);
    pick->unk_50 = tick;
    pick->unk_5a = 1;
    return pick;
}

u32 func_ov065_02267314(void)
{
    u32 a[4];
    u32 b[3];
    RTC_GetDate(a);
    RTC_GetTime(b);
    return RTC_ConvertDateTimeToSecond(a, b) + 0x386d4380;
}

void func_ov065_022672ec(void *a, s32 b)
{
    Unk_ov065_022672ec_Ptr *q = *(Unk_ov065_022672ec_Ptr **)((u8 *)((Unk_ov065_022672ec_Root *)data_021fcc2c)->unk_04 + 0xa4);
    if (q != 0) {
        Unk_ov065_022672a0_Tbl *t = q->unk_0c;
        if (t != 0) {
            t->unk_7e8 = (void **)a;
            t->unk_7ec = b;
        }
    }
}

void *func_ov065_022672a0(Unk_ov065_022672a0_Tbl *o, const void *name)
{
    s32 i = 0;
    s32 n = o->unk_7ec;
    void **p;
    void **arr;
    if (n > 0) {
        p = arr = o->unk_7e8;
        do {
            if (strcmp(**(void ***)p, name) == 0) {
                return arr[i];
            }
            p++;
            i++;
        } while (i < n);
    }
    return 0;
}

s32 func_ov065_02267250(u8 **pp)
{
    u8 *p = *pp;
    u32 b = *p++;
    u32 len = b;
    if (b & 0x80) {
        s32 n = b & 0x7f;
        len = 0;
        while (n-- != 0) {
            if (len & 0xff000000) {
                return -1;
            }
            len = (len << 8) + *p++;
        }
    }
    *pp = p;
    return len;
}

void func_ov065_02267208(char *p, const char *src, s32 n)
{
    char *dst = p;
    if (*p != 0) {
        do {
            p++;
        } while (*p != 0);
        if (p - dst >= 0xff) {
            return;
        }
        *p++ = ',';
        *p++ = ' ';
    }
    while (n-- != 0 && p - dst < 0xff) {
        *p++ = *src++;
    }
    *p = 0;
}

u32 func_ov065_022671a0(const u8 *p, s32 mode)
{
    u32 a = p[1] + p[0] * 10 - 0x210;
    u32 y;
    p += 2;
    if (mode == 0x17) {
        if (a < 0x32) {
            y = a + 0x7d0;
        } else {
            y = a + 0x76c;
        }
    } else {
        y = a * 100 + (p[1] + p[0] * 10 - 0x210);
        p += 2;
    }
    return (y << 16) + ((p[1] + p[0] * 10 - 0x210) << 8) + (p[3] + p[2] * 10 - 0x210);
}

}

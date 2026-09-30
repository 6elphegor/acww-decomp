// mwcc-flags: -O4,p
#include "types.h"

// ov065_013: date parse, string helpers, ASN.1 length, MD5/SHA1 (0x022671a0..0x02267a84)

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
extern Unk_ov065_0226733c_Ent data_ov065_02290438[4];
extern u8 data_ov065_0228b4b0[];
extern u8 data_ov065_0228b4f0[];
extern u32 data_ov065_0228b530[];
extern u8 data_ov065_0228b630[];
extern u8 data_ov065_0228b631[];

extern "C" {

u64 func_01ffa6b4(void);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_02116048(const void *src, void *dst, s32 n);
s32 func_0212a190(const void *a, const void *b);
s32 func_02128930(const void *a, const void *b, u32 n);
void func_0211d3a0(void *);
void func_0211d2e0(void *);
u32 func_0211d558(void *, void *);
void func_ov065_022680d4(void *dst, const void *src, s32 n);
void func_ov065_02267ac0(Unk_ov065_022679f8_Sha1 *ctx, const u8 *block);

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

void *func_ov065_022672a0(Unk_ov065_022672a0_Tbl *o, const void *name)
{
    s32 i = 0;
    s32 n = o->unk_7ec;
    void **p;
    void **arr;
    if (n > 0) {
        p = arr = o->unk_7e8;
        do {
            if (func_0212a190(**(void ***)p, name) == 0) {
                return arr[i];
            }
            p++;
            i++;
        } while (i < n);
    }
    return 0;
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

u32 func_ov065_02267314(void)
{
    u32 a[4];
    u32 b[3];
    func_0211d3a0(a);
    func_0211d2e0(b);
    return func_0211d558(a, b) + 0x386d4380;
}

Unk_ov065_0226733c_Ent *func_ov065_0226733c(const void *src)
{
    Unk_ov065_0226733c_Ent *pick;
    u32 tick;
    s32 i;
    u32 best;
    Unk_ov065_0226733c_Ent *e;
    tick = (u32)(func_01ffa6b4() >> 16);
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
    func_02116048(src, pick, 0x20);
    pick->unk_50 = tick;
    pick->unk_5a = 1;
    return pick;
}

Unk_ov065_0226733c_Ent *func_ov065_02267394(u32 a, u32 b)
{
    s32 i = 0;
    Unk_ov065_0226733c_Ent *e = data_ov065_02290438;
    for (; i < 4; e++, i++) {
        if (e->unk_5a != 0 && e->unk_54 == a && e->unk_58 == b) {
            e->unk_50 = (u32)(func_01ffa6b4() >> 16);
            return e;
        }
    }
    return 0;
}

Unk_ov065_0226733c_Ent *func_ov065_022673dc(const void *p)
{
    s32 i = 0;
    Unk_ov065_0226733c_Ent *e = data_ov065_02290438;
    for (; i < 4; e++, i++) {
        if (e->unk_5a != 0 && func_02128930(e, p, 0x20) == 0) {
            e->unk_50 = (u32)(func_01ffa6b4() >> 16);
            return e;
        }
    }
    return 0;
}

void func_ov065_0226742c(Unk_ov065_02267480_Md5 *ctx, void *out);
void func_ov065_02267480(Unk_ov065_02267480_Md5 *ctx, const u8 *data, u32 n);
void func_ov065_0226750c(Unk_ov065_02267480_Md5 *ctx);
void func_ov065_02267540(Unk_ov065_02267480_Md5 *ctx, const u8 *block);
void func_ov065_0226795c(void *dst, const void *src, s32 n);
void func_ov065_0226796c(void *dst, const void *src, s32 n);

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
        func_02116048(data, ctx->buf + idx, part);
        idx = 0;
        func_ov065_02267540(ctx, ctx->buf);
        for (i = part; i + 63 < n; i += 64) {
            func_ov065_02267540(ctx, data + i);
        }
    } else {
        i = 0;
    }
    func_02116048(data + i, ctx->buf + idx, n - i);
}

void func_ov065_0226750c(Unk_ov065_02267480_Md5 *ctx)
{
    func_02115fb4(ctx, 0, 0x58);
    ctx->st[0] = 0x67452301;
    ctx->st[1] = 0xefcdab89;
    ctx->st[2] = 0x98badcfe;
    ctx->st[3] = 0x10325476;
}

#define Unk_ov065_02267540_ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define Unk_ov065_02267540_F(b, c, d) ((d) ^ ((b) & ((c) ^ (d))))
#define Unk_ov065_02267540_G(b, c, d) (((b) & (d)) | ((c) & ~(d)))
#define Unk_ov065_02267540_H(b, c, d) ((b) ^ (c) ^ (d))
#define Unk_ov065_02267540_I(b, c, d) ((c) ^ ((b) | ~(d)))
#define Unk_ov065_02267540_STEP(f, a, b, c, d, k, sh) \
    a += f(b, c, d) + X[data_ov065_0228b4b0[k]] + data_ov065_0228b530[k]; \
    a = b + Unk_ov065_02267540_ROL(a, sh);

void func_ov065_02267540(Unk_ov065_02267480_Md5 *ctx, const u8 *block)
{
    u32 a = ctx->st[0];
    u32 b = ctx->st[1];
    u32 c = ctx->st[2];
    u32 d = ctx->st[3];
    u32 X[16];
    s32 t;
    s32 i;
    func_ov065_0226795c(X, block, 0x40);
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

void func_ov065_0226795c(void *dst, const void *src, s32 n)
{
    func_02116048(src, dst, n);
}

void func_ov065_0226796c(void *dst, const void *src, s32 n)
{
    func_02116048(src, dst, n);
}

void func_ov065_022679f8(Unk_ov065_022679f8_Sha1 *ctx, const u8 *data, u32 n);

void func_ov065_0226797c(Unk_ov065_022679f8_Sha1 *ctx, void *out)
{
    func_ov065_022679f8(ctx, data_ov065_0228b631, 0x2c);
    func_ov065_022680d4(out, ctx, 0x14);
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
        func_02116048(data, ctx->buf + idx, part);
        idx = 0;
        func_ov065_02267ac0(ctx, ctx->buf);
        for (i = part; i + 63 < n; i += 64) {
            func_ov065_02267ac0(ctx, data + i);
        }
    } else {
        i = 0;
    }
    func_02116048(data + i, ctx->buf + idx, n - i);
}

void func_ov065_02267a84(Unk_ov065_022679f8_Sha1 *ctx)
{
    func_02115fb4(ctx, 0, 0x5c);
    ctx->st[0] = 0x67452301;
    ctx->st[1] = 0xefcdab89;
    ctx->st[2] = 0x98badcfe;
    ctx->st[3] = 0x10325476;
    ctx->st[4] = 0xc3d2e1f0;
}

}

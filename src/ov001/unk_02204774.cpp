// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
void *func_ov001_02203e84(void *p, s32 v, u32 n);
void *func_ov001_02203e9c(void *d, const void *s, u32 n);
void *func_ov001_02203ee8(void *d, const void *s, u32 n);
void func_ov001_02203f18(void *ctx, const void *block);
extern u8 data_ov001_0222a55c[];
extern u32 data_ov001_02227334[];
extern u32 data_ov001_02227734[];
extern u32 data_ov001_02227b34[];
extern u32 data_ov001_02227f34[];
extern u32 data_ov001_02228334[];
extern u32 data_ov001_02228734[];
extern u32 data_ov001_02228b34[];
extern u32 data_ov001_02228f34[];
extern u32 data_ov001_02229334[];
extern u32 data_ov001_02229734[];

struct Unk_ov001_02204774_Ctx {
    u32 state[4];
    u32 count[2];
    u8 buffer[64];
};

void func_ov001_022047d0(Unk_ov001_02204774_Ctx *ctx, const u8 *data, u32 len);

void func_ov001_02204774(u8 *out, Unk_ov001_02204774_Ctx *ctx)
{
    u8 bits[8];
    u32 idx;
    u32 pad;
    func_ov001_02203ee8(bits, &ctx->count[0], 8);
    idx = (ctx->count[0] >> 3) & 0x3f;
    if (idx < 0x38) {
        pad = 0x38 - idx;
    } else {
        pad = 0x78 - idx;
    }
    func_ov001_022047d0(ctx, data_ov001_0222a55c, pad);
    func_ov001_022047d0(ctx, bits, 8);
    func_ov001_02203ee8(out, ctx, 0x10);
    func_ov001_02203e84(ctx, 0, 0x58);
}

void func_ov001_022047d0(Unk_ov001_02204774_Ctx *ctx, const u8 *data, u32 len)
{
    u32 i;
    u32 idx;
    idx = (ctx->count[0] >> 3) & 0x3f;
    ctx->count[0] += len << 3;
    if (ctx->count[0] < (len << 3)) {
        ctx->count[1]++;
    }
    ctx->count[1] += len >> 29;
    i = 64 - idx;
    if (len >= i) {
        func_ov001_02203e9c(&ctx->buffer[idx], data, i);
        func_ov001_02203f18(ctx, ctx->buffer);
        if (i + 63 < len) {
            do {
                func_ov001_02203f18(ctx, &data[i]);
                i += 64;
            } while (i + 63 < len);
        }
        idx = 0;
    } else {
        i = 0;
    }
    func_ov001_02203e9c(&ctx->buffer[idx], &data[i], len - i);
}

void func_ov001_02204850(Unk_ov001_02204774_Ctx *ctx)
{
    ctx->count[0] = ctx->count[1] = 0;
    ctx->state[0] = 0x67452301;
    ctx->state[1] = 0xefcdab89;
    ctx->state[2] = 0x98badcfe;
    ctx->state[3] = 0x10325476;
}

#define GETU32(p) (((u32)(p)[0] << 24) ^ ((u32)(p)[1] << 16) ^ ((u32)(p)[2] << 8) ^ ((u32)(p)[3]))
#define PUTU32(p, v) { (p)[0] = (u8)((v) >> 24); (p)[1] = (u8)((v) >> 16); (p)[2] = (u8)((v) >> 8); (p)[3] = (u8)(v); }

void func_ov001_0220487c(const u32 *rk, s32 Nr, const u8 *ct, u8 *pt)
{
    u32 s0, s1, s2, s3, t0, t1, t2, t3;
    s32 r;
    s0 = GETU32(ct) ^ rk[0];
    s1 = GETU32(ct + 4) ^ rk[1];
    s2 = GETU32(ct + 8) ^ rk[2];
    s3 = GETU32(ct + 12) ^ rk[3];
    r = Nr >> 1;
    for (;;) {
        t0 = data_ov001_02229334[s0 >> 24] ^ data_ov001_02229734[(s3 >> 16) & 0xff] ^ data_ov001_02227334[(s2 >> 8) & 0xff] ^ data_ov001_02227734[s1 & 0xff] ^ rk[4];
        t1 = data_ov001_02229334[s1 >> 24] ^ data_ov001_02229734[(s0 >> 16) & 0xff] ^ data_ov001_02227334[(s3 >> 8) & 0xff] ^ data_ov001_02227734[s2 & 0xff] ^ rk[5];
        t2 = data_ov001_02229334[s2 >> 24] ^ data_ov001_02229734[(s1 >> 16) & 0xff] ^ data_ov001_02227334[(s0 >> 8) & 0xff] ^ data_ov001_02227734[s3 & 0xff] ^ rk[6];
        t3 = data_ov001_02229334[s3 >> 24] ^ data_ov001_02229734[(s2 >> 16) & 0xff] ^ data_ov001_02227334[(s1 >> 8) & 0xff] ^ data_ov001_02227734[s0 & 0xff] ^ rk[7];
        rk += 8;
        if (--r == 0) break;
        s0 = data_ov001_02229334[t0 >> 24] ^ data_ov001_02229734[(t3 >> 16) & 0xff] ^ data_ov001_02227334[(t2 >> 8) & 0xff] ^ data_ov001_02227734[t1 & 0xff] ^ rk[0];
        s1 = data_ov001_02229334[t1 >> 24] ^ data_ov001_02229734[(t0 >> 16) & 0xff] ^ data_ov001_02227334[(t3 >> 8) & 0xff] ^ data_ov001_02227734[t2 & 0xff] ^ rk[1];
        s2 = data_ov001_02229334[t2 >> 24] ^ data_ov001_02229734[(t1 >> 16) & 0xff] ^ data_ov001_02227334[(t0 >> 8) & 0xff] ^ data_ov001_02227734[t3 & 0xff] ^ rk[2];
        s3 = data_ov001_02229334[t3 >> 24] ^ data_ov001_02229734[(t2 >> 16) & 0xff] ^ data_ov001_02227334[(t1 >> 8) & 0xff] ^ data_ov001_02227734[t0 & 0xff] ^ rk[3];
    }
    s0 = (data_ov001_02227b34[t0 >> 24] & 0xff000000) ^ (data_ov001_02227b34[(t3 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02227b34[(t2 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02227b34[t1 & 0xff] & 0x000000ff) ^ rk[0];
    PUTU32(pt, s0);
    s1 = (data_ov001_02227b34[t1 >> 24] & 0xff000000) ^ (data_ov001_02227b34[(t0 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02227b34[(t3 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02227b34[t2 & 0xff] & 0x000000ff) ^ rk[1];
    PUTU32(pt + 4, s1);
    s2 = (data_ov001_02227b34[t2 >> 24] & 0xff000000) ^ (data_ov001_02227b34[(t1 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02227b34[(t0 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02227b34[t3 & 0xff] & 0x000000ff) ^ rk[2];
    PUTU32(pt + 8, s2);
    s3 = (data_ov001_02227b34[t3 >> 24] & 0xff000000) ^ (data_ov001_02227b34[(t2 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02227b34[(t1 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02227b34[t0 & 0xff] & 0x000000ff) ^ rk[3];
    PUTU32(pt + 12, s3);
}

void func_ov001_02204ca4(const u32 *rk, s32 Nr, const u8 *ct, u8 *pt)
{
    u32 s0, s1, s2, s3, t0, t1, t2, t3;
    s32 r;
    s0 = GETU32(ct) ^ rk[0];
    s1 = GETU32(ct + 4) ^ rk[1];
    s2 = GETU32(ct + 8) ^ rk[2];
    s3 = GETU32(ct + 12) ^ rk[3];
    r = Nr >> 1;
    for (;;) {
        t0 = data_ov001_02227f34[s0 >> 24] ^ data_ov001_02228334[(s1 >> 16) & 0xff] ^ data_ov001_02228734[(s2 >> 8) & 0xff] ^ data_ov001_02228b34[s3 & 0xff] ^ rk[4];
        t1 = data_ov001_02227f34[s1 >> 24] ^ data_ov001_02228334[(s2 >> 16) & 0xff] ^ data_ov001_02228734[(s3 >> 8) & 0xff] ^ data_ov001_02228b34[s0 & 0xff] ^ rk[5];
        t2 = data_ov001_02227f34[s2 >> 24] ^ data_ov001_02228334[(s3 >> 16) & 0xff] ^ data_ov001_02228734[(s0 >> 8) & 0xff] ^ data_ov001_02228b34[s1 & 0xff] ^ rk[6];
        t3 = data_ov001_02227f34[s3 >> 24] ^ data_ov001_02228334[(s0 >> 16) & 0xff] ^ data_ov001_02228734[(s1 >> 8) & 0xff] ^ data_ov001_02228b34[s2 & 0xff] ^ rk[7];
        rk += 8;
        if (--r == 0) break;
        s0 = data_ov001_02227f34[t0 >> 24] ^ data_ov001_02228334[(t1 >> 16) & 0xff] ^ data_ov001_02228734[(t2 >> 8) & 0xff] ^ data_ov001_02228b34[t3 & 0xff] ^ rk[0];
        s1 = data_ov001_02227f34[t1 >> 24] ^ data_ov001_02228334[(t2 >> 16) & 0xff] ^ data_ov001_02228734[(t3 >> 8) & 0xff] ^ data_ov001_02228b34[t0 & 0xff] ^ rk[1];
        s2 = data_ov001_02227f34[t2 >> 24] ^ data_ov001_02228334[(t3 >> 16) & 0xff] ^ data_ov001_02228734[(t0 >> 8) & 0xff] ^ data_ov001_02228b34[t1 & 0xff] ^ rk[2];
        s3 = data_ov001_02227f34[t3 >> 24] ^ data_ov001_02228334[(t0 >> 16) & 0xff] ^ data_ov001_02228734[(t1 >> 8) & 0xff] ^ data_ov001_02228b34[t2 & 0xff] ^ rk[3];
    }
    s0 = (data_ov001_02228f34[t0 >> 24] & 0xff000000) ^ (data_ov001_02228f34[(t1 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02228f34[(t2 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02228f34[t3 & 0xff] & 0x000000ff) ^ rk[0];
    PUTU32(pt, s0);
    s1 = (data_ov001_02228f34[t1 >> 24] & 0xff000000) ^ (data_ov001_02228f34[(t2 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02228f34[(t3 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02228f34[t0 & 0xff] & 0x000000ff) ^ rk[1];
    PUTU32(pt + 4, s1);
    s2 = (data_ov001_02228f34[t2 >> 24] & 0xff000000) ^ (data_ov001_02228f34[(t3 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02228f34[(t0 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02228f34[t1 & 0xff] & 0x000000ff) ^ rk[2];
    PUTU32(pt + 8, s2);
    s3 = (data_ov001_02228f34[t3 >> 24] & 0xff000000) ^ (data_ov001_02228f34[(t0 >> 16) & 0xff] & 0x00ff0000) ^ (data_ov001_02228f34[(t1 >> 8) & 0xff] & 0x0000ff00) ^ (data_ov001_02228f34[t2 & 0xff] & 0x000000ff) ^ rk[3];
    PUTU32(pt + 12, s3);
}
}

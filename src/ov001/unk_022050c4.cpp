// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u32 data_ov001_0222730c[];
extern u32 data_ov001_02228f34[];
extern u32 data_ov001_02229334[];
extern u32 data_ov001_02229734[];
extern u32 data_ov001_02227334[];
extern u32 data_ov001_02227734[];
extern s32 data_ov001_0222c8c8;
extern s32 data_ov001_0222c888;
extern s32 data_ov001_0222a538;

s32 func_ov001_02205288(u32 *rk, const u8 *key, s32 bits);
s32 func_ov001_0220487c(u32 *rk, s32 nr, const u8 *in, u8 *out);
s32 func_ov001_02204ca4(u32 *rk, s32 nr, const u8 *in, u8 *out);
s32 func_ov001_022059fc();
s32 func_ov001_02206cdc();
s32 func_ov001_02203b1c();
void func_02128a00(void *dst, const void *src, u32 n);
s32 func_02128930(const void *a, const void *b, u32 n);
void func_ov001_02205570(const u8 *a, const u8 *b, u8 *c);
}

#define Te4 data_ov001_02228f34
#define Td0 data_ov001_02229334
#define Td1 data_ov001_02229734
#define Td2 data_ov001_02227334
#define Td3 data_ov001_02227734
#define rcon data_ov001_0222730c

#define GETU32(p) (((u32)(p)[0] << 24) ^ ((u32)(p)[1] << 16) ^ ((u32)(p)[2] << 8) ^ ((u32)(p)[3]))

extern "C" {

s32 func_ov001_022050c4(u32 *rk, const u8 *key, s32 bits)
{
    s32 Nr, i, j;
    u32 temp;
    Nr = func_ov001_02205288(rk, key, bits);
    for (i = 0, j = 4 * Nr; i < j; i += 4, j -= 4) {
        temp = rk[i]; rk[i] = rk[j]; rk[j] = temp;
        temp = rk[i + 1]; rk[i + 1] = rk[j + 1]; rk[j + 1] = temp;
        temp = rk[i + 2]; rk[i + 2] = rk[j + 2]; rk[j + 2] = temp;
        temp = rk[i + 3]; rk[i + 3] = rk[j + 3]; rk[j + 3] = temp;
    }
    for (i = 1; i < Nr; i++) {
        rk += 4;
        rk[0] = Td0[Te4[(rk[0] >> 24)] & 0xff] ^ Td1[Te4[(rk[0] >> 16) & 0xff] & 0xff] ^
                Td2[Te4[(rk[0] >> 8) & 0xff] & 0xff] ^ Td3[Te4[(rk[0]) & 0xff] & 0xff];
        rk[1] = Td0[Te4[(rk[1] >> 24)] & 0xff] ^ Td1[Te4[(rk[1] >> 16) & 0xff] & 0xff] ^
                Td2[Te4[(rk[1] >> 8) & 0xff] & 0xff] ^ Td3[Te4[(rk[1]) & 0xff] & 0xff];
        rk[2] = Td0[Te4[(rk[2] >> 24)] & 0xff] ^ Td1[Te4[(rk[2] >> 16) & 0xff] & 0xff] ^
                Td2[Te4[(rk[2] >> 8) & 0xff] & 0xff] ^ Td3[Te4[(rk[2]) & 0xff] & 0xff];
        rk[3] = Td0[Te4[(rk[3] >> 24)] & 0xff] ^ Td1[Te4[(rk[3] >> 16) & 0xff] & 0xff] ^
                Td2[Te4[(rk[3] >> 8) & 0xff] & 0xff] ^ Td3[Te4[(rk[3]) & 0xff] & 0xff];
    }
    return Nr;
}

s32 func_ov001_02205288(u32 *rk, const u8 *cipherKey, s32 keyBits)
{
    s32 i = 0;
    u32 temp;
    const u32 *rp;

    rk[0] = GETU32(cipherKey);
    rk[1] = GETU32(cipherKey + 4);
    rk[2] = GETU32(cipherKey + 8);
    rk[3] = GETU32(cipherKey + 12);
    if (keyBits == 128) {
        rp = rcon;
        for (;;) {
            temp = rk[3];
            rk[4] = rk[0] ^ (Te4[(temp >> 16) & 0xff] & 0xff000000) ^
                    (Te4[(temp >> 8) & 0xff] & 0x00ff0000) ^
                    (Te4[(temp) & 0xff] & 0x0000ff00) ^
                    (Te4[(temp >> 24)] & 0x000000ff) ^ *rp;
            rk[5] = rk[1] ^ rk[4];
            rk[6] = rk[2] ^ rk[5];
            rk[7] = rk[3] ^ rk[6];
            rp++;
            if (++i == 10) {
                return 10;
            }
            rk += 4;
        }
    }
    rk[4] = GETU32(cipherKey + 16);
    rk[5] = GETU32(cipherKey + 20);
    if (keyBits == 192) {
        rp = rcon;
        for (;;) {
            temp = rk[5];
            rk[6] = rk[0] ^ (Te4[(temp >> 16) & 0xff] & 0xff000000) ^
                    (Te4[(temp >> 8) & 0xff] & 0x00ff0000) ^
                    (Te4[(temp) & 0xff] & 0x0000ff00) ^
                    (Te4[(temp >> 24)] & 0x000000ff) ^ *rp;
            rk[7] = rk[1] ^ rk[6];
            rk[8] = rk[2] ^ rk[7];
            rk[9] = rk[3] ^ rk[8];
            rp++;
            if (++i == 8) {
                return 12;
            }
            rk[10] = rk[4] ^ rk[9];
            rk[11] = rk[5] ^ rk[10];
            rk += 6;
        }
    }
    rk[6] = GETU32(cipherKey + 24);
    rk[7] = GETU32(cipherKey + 28);
    if (keyBits == 256) {
        rp = rcon;
        for (;;) {
            temp = rk[7];
            rk[8] = rk[0] ^ (Te4[(temp >> 16) & 0xff] & 0xff000000) ^
                    (Te4[(temp >> 8) & 0xff] & 0x00ff0000) ^
                    (Te4[(temp) & 0xff] & 0x0000ff00) ^
                    (Te4[(temp >> 24)] & 0x000000ff) ^ *rp;
            rk[9] = rk[1] ^ rk[8];
            rk[10] = rk[2] ^ rk[9];
            rk[11] = rk[3] ^ rk[10];
            rp++;
            if (++i == 7) {
                return 14;
            }
            temp = rk[11];
            rk[12] = rk[4] ^ (Te4[(temp >> 24)] & 0xff000000) ^
                     (Te4[(temp >> 16) & 0xff] & 0x00ff0000) ^
                     (Te4[(temp >> 8) & 0xff] & 0x0000ff00) ^
                     (Te4[(temp) & 0xff] & 0x000000ff);
            rk[13] = rk[5] ^ rk[12];
            rk[14] = rk[6] ^ rk[13];
            rk[15] = rk[7] ^ rk[14];
            rk += 8;
        }
    }
    return 0;
}

void func_ov001_02205570(const u8 *a, const u8 *b, u8 *c)
{
    c[0] = a[0] ^ b[0];
    c[1] = a[1] ^ b[1];
    c[2] = a[2] ^ b[2];
    c[3] = a[3] ^ b[3];
    c[4] = a[4] ^ b[4];
    c[5] = a[5] ^ b[5];
    c[6] = a[6] ^ b[6];
    c[7] = a[7] ^ b[7];
}

void func_ov001_022059bc()
{
    s32 r = func_ov001_022059fc();
    data_ov001_0222c8c8 = r;
    func_ov001_02206cdc();
    if (r == 1) {
        data_ov001_0222c888 = 6;
    } else {
        data_ov001_0222c888 = 7;
    }
    data_ov001_0222a538 = -1;
    func_ov001_02203b1c();
}

struct Unk_ov001_022055bc_Blk { u8 b[8]; };

s32 func_ov001_022055bc(u8 *out, const u8 *in, u32 inlen, const u8 *key, s32 keylen)
{
    s32 i, j, n, nr;
    s32 ok = 1;
    u64 tb;
    Unk_ov001_022055bc_Blk iv;
    Unk_ov001_022055bc_Blk a;
    Unk_ov001_022055bc_Blk b;
    u32 rk[81];
    u64 t;
    *(u32 *)&iv.b[0] = 0xa6a6a6a6;
    *(u32 *)&iv.b[4] = 0xa6a6a6a6;
    if ((inlen & 7) != 0 || (keylen & 7) != 0) {
        return 0;
    }
    n = (inlen - 1) >> 3;
    if (n < 2) {
        return 0;
    }
    nr = func_ov001_022050c4(rk, key, keylen << 3);
    a = *(const Unk_ov001_022055bc_Blk *)in;
    in += 8;
    func_02128a00(out, in, inlen - 1);
    for (j = 5; j >= 0; j--) {
        for (i = n; i > 0; i--) {
            t = (u64)n * j + i;
            tb = ((t & 0x00000000000000ffULL) << 56) | ((t & 0x000000000000ff00ULL) << 40) |
                 ((t & 0x0000000000ff0000ULL) << 24) | ((t & 0x00000000ff000000ULL) << 8) |
                 ((t & 0x000000ff00000000ULL) >> 8) | ((t & 0x0000ff0000000000ULL) >> 24) |
                 ((t & 0x00ff000000000000ULL) >> 40) | ((t & 0xff00000000000000ULL) >> 56);
            func_ov001_02205570(a.b, (u8 *)&tb, a.b);
            u8 *p = out + (i - 1) * 8;
            b = *(Unk_ov001_022055bc_Blk *)p;
            func_ov001_0220487c(rk, nr, a.b, a.b);
            *(Unk_ov001_022055bc_Blk *)p = b;
        }
    }
    if (func_02128930(&iv, &a, 8) != 0) ok = 0;
    return ok;
}

s32 func_ov001_022057b0(u8 *out, const u8 *in, u32 inlen, const u8 *key, s32 keylen)
{
    s32 i, j, n, nr;
    u64 tb;
    Unk_ov001_022055bc_Blk iv;
    Unk_ov001_022055bc_Blk a;
    Unk_ov001_022055bc_Blk b;
    u32 rk[81];
    u64 t;
    *(u32 *)&iv.b[0] = 0xa6a6a6a6;
    *(u32 *)&iv.b[4] = 0xa6a6a6a6;
    if ((inlen & 7) != 0 || (keylen & 7) != 0) {
        return 0;
    }
    n = inlen >> 3;
    if (n < 2) {
        return 0;
    }
    nr = func_ov001_02205288(rk, key, keylen << 3);
    func_02128a00(out + 8, in, inlen);
    a = iv;
    for (j = 0; j < 6; j++) {
        for (i = 1; i <= n; i++) {
            u8 *p = out + ((u32)i << 3);
            b = *(Unk_ov001_022055bc_Blk *)p;
            func_ov001_02204ca4(rk, nr, a.b, a.b);
            t = (u64)n * j + i;
            tb = ((t & 0x00000000000000ffULL) << 56) | ((t & 0x000000000000ff00ULL) << 40) |
                 ((t & 0x0000000000ff0000ULL) << 24) | ((t & 0x00000000ff000000ULL) << 8) |
                 ((t & 0x000000ff00000000ULL) >> 8) | ((t & 0x0000ff0000000000ULL) >> 24) |
                 ((t & 0x00ff000000000000ULL) >> 40) | ((t & 0xff00000000000000ULL) >> 56);
            func_ov001_02205570(a.b, (u8 *)&tb, a.b);
            *(Unk_ov001_022055bc_Blk *)p = b;
        }
    }
    *(Unk_ov001_022055bc_Blk *)out = a;
    return 1;
}

}

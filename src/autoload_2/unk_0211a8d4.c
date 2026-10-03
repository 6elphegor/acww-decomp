// mwcc-flags: -nothumb -O4,p
// NitroSDK MATH MD5 block transform (func_0211a8d4), autoload_2 0x0211a8d4-0x0211acbc. ARM code, mwcc 1.2/base -O4,p.
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;

typedef struct {
    u32 a, b, c, d;           // 0x00
    u64 total;                // 0x10 (byte count)
    u8 buffer[64];            // 0x18
} MD5Context;

typedef struct {
    u32 h[5];                 // 0x00
    u32 totalLo;              // 0x14 (bit count)
    u32 totalHi;              // 0x18
    s32 blockLen;             // 0x1c
    u8 block[64];             // 0x20
    u32 reserved[2];          // 0x60 (not touched by any function in this unit; fixes the stack frame size of HMAC)
} SHA1Context;

typedef void (*SHA1Compress)(SHA1Context *ctx, const void *data, u32 len);

extern const u32 data_0213c0c8[64]; // MD5 K table
extern const u32 data_0213c008[48]; // MD5 message index table (rounds 2-4)
extern const u8 data_0213c004[1];   // MD5 padding byte 0x80
extern SHA1Compress data_0213c1c8;  // SHA1 block function pointer

extern void func_02115e64(u32 data, void *dest, u32 size); // MI_CpuFill32
extern void func_02115fb4(void *dest, u32 data, u32 size); // MI_CpuFill8
extern void func_02116048(const void *src, void *dest, u32 size); // MI_CpuCopy8

void func_0211b3a8(SHA1Context *ctx);
void func_0211b24c(SHA1Context *ctx, const void *data, u32 len);
void func_0211b040(SHA1Context *ctx, u8 *hash, ...);
void func_0211aeb4(u8 *out, const u8 *data, u32 dataLen, const u8 *key, s32 keyLen);
void func_0211ae74(MD5Context *ctx);
void func_0211ad80(MD5Context *ctx, const void *data, u32 len);
void func_0211acbc(u8 *out, MD5Context *ctx);
void func_0211a8d4(MD5Context *ctx);

// MD5 round steps as static inline functions (FF/GG/HH/II), the a + f + x + t order; real argument-order rotation
static inline u32 RotL(u32 x, int n) { return (x << n) | (x >> (32 - n)); }
static inline u32 FF(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) { a = a + ((b & c) | (~b & d)) + x + t; return b + RotL(a, s); }
static inline u32 GG(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) { a = a + ((b & d) | (c & ~d)) + x + t; return b + RotL(a, s); }
static inline u32 HH(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) { a = a + (b ^ c ^ d) + x + t; return b + RotL(a, s); }
static inline u32 II(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) { a = a + (c ^ (b | ~d)) + x + t; return b + RotL(a, s); }
// MD5 block transform (MATH_MD5 ProcessBlock): round 1 reads the block through p, rounds 2-4 through the index table
void func_0211a8d4(MD5Context *ctx) {
    const u32 *p;
    s32 i;
    const u32 *t;
    u32 a = ctx->a;
    u32 b = ctx->b;
    u32 c = ctx->c;
    u32 d = ctx->d;
    const u32 *x = (const u32 *)ctx->buffer;
    const u32 *k = data_0213c0c8;
    p = x;
    for (i = 0; i < 4; i++) {
        a = FF(a, b, c, d, *p++, *k++, 7);
        d = FF(d, a, b, c, *p++, *k++, 12);
        c = FF(c, d, a, b, *p++, *k++, 17);
        b = FF(b, c, d, a, *p++, *k++, 22);
    }
    t = data_0213c008;
    for (i = 0; i < 4; i++) {
        a = GG(a, b, c, d, x[*t++], *k++, 5);
        d = GG(d, a, b, c, x[*t++], *k++, 9);
        c = GG(c, d, a, b, x[*t++], *k++, 14);
        b = GG(b, c, d, a, x[*t++], *k++, 20);
    }
    for (i = 0; i < 4; i++) {
        a = HH(a, b, c, d, x[*t++], *k++, 4);
        d = HH(d, a, b, c, x[*t++], *k++, 11);
        c = HH(c, d, a, b, x[*t++], *k++, 16);
        b = HH(b, c, d, a, x[*t++], *k++, 23);
    }
    for (i = 0; i < 4; i++) {
        a = II(a, b, c, d, x[*t++], *k++, 6);
        d = II(d, a, b, c, x[*t++], *k++, 10);
        c = II(c, d, a, b, x[*t++], *k++, 15);
        b = II(b, c, d, a, x[*t++], *k++, 21);
    }
    ctx->a += a;
    ctx->b += b;
    ctx->c += c;
    ctx->d += d;
}

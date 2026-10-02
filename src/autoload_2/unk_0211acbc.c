// mwcc-flags: -nothumb -O4,p
// NitroSDK MATH library (MD5, SHA-1, HMAC-SHA1), autoload_2 0x0211a8d4-0x0211b40c. ARM code, mwcc 1.2/base.
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
// UNMATCHED func_0211acbc (MD5GetHash), best C: only differs in register allocation (idx in r1 instead of r3, one mov r1,#0 placed later).
// Types/externs as in S010a/unit.c.
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_02115fb4(dest, 0, size);
}
void func_0211acbc(u8 *out, MD5Context *ctx) {
    u64 t = ctx->total << 3;
    u32 idx;
    u32 room;
    func_0211ad80(ctx, data_0213c004, 1);
    idx = (u32)(ctx->total & 63);
    room = 64 - idx;
    if (room < 8) {
        MI_CpuClear8(ctx->buffer + idx, room);
        func_0211a8d4(ctx);
        idx = 0;
        room = 64;
    }
    if (room > 8) {
        MI_CpuClear8(ctx->buffer + idx, room - 8);
    }
    *(u32 *)(ctx->buffer + 56) = (u32)t;
    *(u32 *)(ctx->buffer + 60) = (u32)(t >> 32);
    func_0211a8d4(ctx);
    func_02116048(ctx, out, 16);
    MI_CpuClear8(ctx, 88);
}
// UNMATCHED func_0211a8d4 (MD5 block transform), best C: 0x3e0 bytes vs original 0x3e8, registers/scheduling differ.
// Types/externs as in S010a/unit.c (MD5Context etc).
#define F(x, y, z) (((x) & (y)) | (~(x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & ~(z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | ~(z)))
#define ROTL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define STEP(f, a, b, c, d, x, k, s) \
    (a) = (a) + f(b, c, d) + (x) + (k); \
    (a) = (b) + ROTL(a, s);

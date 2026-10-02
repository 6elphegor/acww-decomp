// mwcc-flags: -nothumb -O4,p
// NitroSDK (LZ compression helpers + SND command wrappers): autoload_2 0x021163b0-0x02116c0c.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *func_02117230(u32 n);
extern void func_021171e8(void *p);
extern u32 func_02117518(u32 a, u32 b, u32 c);
extern void func_02117548(u32 a);

extern void func_021158e4(u32 v);
extern void func_021159a8(u32 dmaNo);

void func_0211665c(u32 cmd, u32 a, u32 b, u32 c, u32 d);
void func_02116714(u32 a, u32 b, u32 c, u32 d);
void func_021166e0(u32 a, u32 b, u32 c, u32 d, u32 e);

u32 func_021163e0(const u8 *startp, const u8 *nextp, u32 remainSize, u16 *offp);

typedef struct {
    u8 *destp;
    int destCount;
    u16 u8_;
    u8 u10;
    u8 b0b;
    u8 b0c;
    u8 b0d;
    u8 b0e;
} UncompContextLZ;

// SND command wrapper: tail calls, highest address first
void func_02116bf4(u32 a, u32 b) { func_02116714(a, 6, b, 2); }

void func_02116bdc(u32 a, u32 b) { func_02116714(a, 4, b, 1); }

void func_02116ba8(u32 a, u32 b, u32 c) { func_0211665c(10, a, b, c, 0); }

void func_02116b7c(u32 a, u32 b) { func_0211665c(11, a, b, 0, 0); }

void func_02116b54(u32 a, u32 b, u32 c) { func_021166e0(a, b, 10, c, 2); }

void func_02116b2c(u32 a, u32 b, u32 c) { func_021166e0(a, b, 12, c, 2); }

void func_02116b04(u32 a, u32 b, u32 c) { func_021166e0(a, b, 9, c, 1); }

void func_02116ad0(u32 a, u32 b, u32 c) { func_0211665c(9, a, b, c, 0); }

void func_02116a9c(u32 a, u32 b, u32 c, u32 d) { func_0211665c(12, a, b, c, d); }

void func_02116a2c(u32 a, u32 b, u32 c, u32 d) {
    int i;
    u32 m = c;
    for (i = 0; i < 8 && m != 0; i++, m >>= 1) {
        if (m & 1) func_02117548(i);
    }
    func_0211665c(13, a, b, c, d);
}

void func_021169e0(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g) {
    func_0211665c(17, c, d, (a << 31) | (b << 30) | (e << 29) | (f << 28) | (g << 27), 0);
}

void func_0211699c(u32 a, u32 b, u32 c, u32 d, u32 e) {
    u32 x = func_02117518(a, d, e);
    func_0211665c(18, a, b, c, x);
}

void func_02116968(u32 a, u32 b, u32 c) { func_0211665c(8, a, b, c, 0); }

void func_0211693c(u32 a, u32 b) { func_0211665c(26, a, b, 0, 0); }

void func_02116910(u32 a, u32 b) { func_0211665c(27, a, b, 0, 0); }

void func_021168dc(u32 a, u32 b, u32 c) { func_0211665c(20, a, b, c, 0); }

void func_021168b0(u32 a, u32 b) { func_0211665c(21, a, b, 0, 0); }

void func_02116858(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7, u32 a8, u32 a9) {
    func_0211665c(14, a0 | (a8 << 16), a2, a5 | ((a6 << 24) | (a7 << 22)), a4 | (((a3 << 26) | (a1 << 24)) | (a9 << 16)));
}

void func_0211682c(u32 a, u32 b) { func_0211665c(30, a, b, 0, 0); }

void func_02116800(u32 a, u32 b) { func_0211665c(31, a, b, 0, 0); }

void func_021167d4(u32 a, u32 b) { func_0211665c(32, a, b, 0, 0); }

void func_021167a8(u32 a) { func_0211665c(23, a, 0, 0, 0); }

void func_02116774(u32 a, u32 b, u32 c, u32 d) { func_0211665c(25, a, b, c, d); }

void func_02116748(u32 a) { func_0211665c(33, a, 0, 0, 0); }

void func_02116714(u32 a, u32 b, u32 c, u32 d) { func_0211665c(6, a, b, c, d); }

void func_021166e0(u32 a, u32 b, u32 c, u32 d, u32 e) { func_0211665c(7, a | (e << 24), b, c, d); }

void func_021166b4(u32 a) { func_0211665c(22, a, 0, 0, 0); }

void func_0211665c(u32 cmd, u32 a, u32 b, u32 c, u32 d) {
    u32 *p = (u32 *)func_02117230(1);
    if (p == 0) return;
    p[1] = cmd;
    p[2] = a;
    p[3] = b;
    p[4] = c;
    p[5] = d;
    func_021171e8(p);
}

void func_02116638(void) {
    func_021158e4(3);
    func_021159a8(0);
}

// MI_CompressLZ
u32 func_021164ec(const u8 *srcp, u32 size, u8 *dstp) {
    const u8 *src0 = srcp;
    u32 LZDstCount;
    u8 LZCompFlags;
    u8 i;
    u32 dstMax;
    u8 *LZCompFlagsp;
    u16 lastOffset;
    u32 lastLength;

    *(u32 *)dstp = (size << 8) | 0x10;
    dstp += 4;
    LZDstCount = 4;
    dstMax = size;
    while (size > 0) {
        LZCompFlags = 0;
        LZCompFlagsp = dstp++;
        LZDstCount++;
        for (i = 0; i < 8; i++) {
            LZCompFlags <<= 1;
            if (size > 0) {
                lastLength = func_021163e0(src0, srcp, size, &lastOffset);
                if (lastLength != 0) {
                    LZCompFlags |= 1;
                    if (LZDstCount + 2 >= dstMax) return 0;
                    *dstp++ = (u8)(((lastLength - 3) << 4) | ((lastOffset - 1) >> 8));
                    *dstp++ = (u8)(lastOffset - 1);
                    srcp += lastLength;
                    size -= lastLength;
                    LZDstCount += 2;
                } else {
                    *dstp++ = *srcp++;
                    size--;
                    LZDstCount++;
                    if (LZDstCount >= dstMax) return 0;
                }
            }
        }
        *LZCompFlagsp = LZCompFlags;
    }
    i = 0;
    while (((LZDstCount + i) & 3) != 0) {
        *dstp++ = 0;
        i++;
    }
    return LZDstCount;
}

u32 func_021163e0(const u8 *startp, const u8 *nextp, u32 remainSize, u16 *offp) {
    const u8 *searchp;
    const u8 *headp;
    const u8 *searchHeadp;
    u16 maxOffset;
    u32 maxLength = 2;
    u8 tmpLength;

    if (remainSize < 3) return 0;
    searchp = nextp - 4096;
    if (searchp < startp) searchp = startp;
    while (nextp - searchp >= 2) {
        headp = nextp;
        while (*headp != searchp[0] || headp[1] != searchp[1] || headp[2] != searchp[2]) {
            searchp++;
            if (nextp - searchp < 2) goto done;
        }
        searchHeadp = searchp + 3;
        headp += 3;
        tmpLength = 3;
        while (*headp == *searchHeadp) {
            tmpLength++;
            headp++;
            searchHeadp++;
            if (tmpLength == 18) break;
            if ((u32)(headp - nextp) >= remainSize) break;
        }
        if (tmpLength > maxLength) {
            maxLength = tmpLength;
            maxOffset = (u16)(nextp - searchp);
            if (tmpLength == 18) break;
        }
        searchp++;
    }
done:
    if (maxLength < 3) return 0;
    *offp = maxOffset;
    return maxLength;
}

// MI_InitUncompContextLZ
void func_021163b0(UncompContextLZ *ctx, u8 *dest, const u32 *src) {
    ctx->destp = dest;
    ctx->destCount = (int)(*src >> 8);
    ctx->b0b = 0;
    ctx->b0c = 0;
    ctx->b0d = 0;
    ctx->b0e = 0;
    ctx->u8_ = 0;
    ctx->u10 = 0;
}


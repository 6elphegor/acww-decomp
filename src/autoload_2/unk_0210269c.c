// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d CharCanvas clear (OBJ 1D mapping area clear, whole-canvas clear): autoload_2 0x0210269c-0x021028e0. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct CharWidths { s8 left; u8 glyphWidth; s8 charWidth; } CharWidths;
typedef struct GlyphBlock { u8 cellWidth; u8 cellHeight; u16 cellSize; u8 baseLine; u8 maxCharWidth; u8 bpp; u8 flags; } GlyphBlock;
typedef struct FontInfo {           // NNSG2dFontInformation
    u8 fontType;                    // 0x00
    s8 linefeed;                    // 0x01
    u16 alterCharIndex;             // 0x02
    CharWidths defaultWidth;        // 0x04
    u8 encoding;                    // 0x07
    GlyphBlock *pGlyph;             // 0x08
    void *pWidth;                   // 0x0c
    void *pMap;                     // 0x10
} FontInfo;
typedef struct Font {
    FontInfo *info;                 // 0x00
    u32 (*getChar)(const void **);  // 0x04
    u16 hasLeft;                    // 0x08
    u16 stride;                     // 0x0a
} Font;
typedef struct Glyph {
    CharWidths *pWidths;
    u8 *pBitmap;
} Glyph;

struct CharCanvas;
typedef struct BitReader { u8 *p; s8 left; u8 cur; } BitReader;
typedef struct BlitArgs {
    u8 *dst;        // 0x00  destination tile (8x8)
    u8 *src;        // 0x04  source glyph bitmap
    s32 x;          // 0x08
    s32 y;          // 0x0c
    s32 w;          // 0x10
    s32 h;          // 0x14
    s32 rowStep;    // 0x18  source row step in bits
    s32 pixBits;    // 0x1c  source bits per pixel
    s32 mode;       // 0x20  destination bits per pixel
    u32 colorOfs;   // 0x24
} BlitArgs;
typedef s32 (*DrawGlyphFunc)(struct CharCanvas *, Font *, s32, s32, s32, Glyph *);
typedef void (*ClearFunc)(struct CharCanvas *, u32);
typedef void (*ClearAreaFunc)(struct CharCanvas *, u32, s32, s32, s32, s32);
typedef struct CharCanvas {         // NNSG2dCharCanvas
    u8 *charBase;                   // 0x00
    s32 areaWidth;                  // 0x04  (tiles)
    s32 areaHeight;                 // 0x08  (tiles)
    u8 colorMode;                   // 0x0c  (4 or 8 bpp)
    u32 param;                      // 0x10
    DrawGlyphFunc drawGlyph;        // 0x14
    ClearFunc clear;                // 0x18
    ClearAreaFunc clearArea;        // 0x1c
} CharCanvas;

extern void MIi_CpuClearFast(u32 data, void *dest, u32 size);   // MIi_CpuFillFast(data, dest, size)
extern u32 NNSi_G2dBitReaderRead(BitReader *r, u32 nbits);   // bit reader: get n bits

void ClearChar(u8 *base, u32 x, u32 y, u32 w, u32 h, u32 clr, s32 mode);
void ClearContinuous(CharCanvas *cc, u32 clr);
void ClearAreaLine(CharCanvas *cc, u32 clr, s32 x, s32 y, s32 w, s32 h);

// NNS_G2dCharCanvasClear: fill the whole canvas with the color (color index replicated over 32 bits)
void ClearContinuous(CharCanvas *cc, u32 clr) {
    volatile u32 data;
    u32 size;
    if (cc->colorMode == 4) {
        clr |= clr << 4;
        clr |= clr << 8;
        clr |= clr << 16;
    } else {
        clr |= clr << 8;
        clr |= clr << 16;
    }
    data = clr;
    size = cc->areaWidth * cc->areaHeight;
    size = size * (cc->colorMode * 64 / 8);
    MIi_CpuClearFast(data, cc->charBase, size);
}

// NNS_G2dCharCanvasClearArea (OBJ 1D char layout): clear a pixel rectangle tile by tile
void ClearAreaLine(CharCanvas *cc, u32 clr, s32 x, s32 y, s32 w, s32 h) {
    s32 yy, xe, ye, ye8;
    u8 *rowPtr;
    s32 x0, mode, tileBytes, rowStride;
    s32 xx, xe8, top, left, hIn, wIn;
    u8 *p;
    mode = cc->colorMode;
    xe = x + w;
    ye = y + h;
    if (mode == 4) {
        clr |= clr << 4;
        clr |= clr << 8;
        clr |= clr << 16;
    } else {
        clr |= clr << 8;
        clr |= clr << 16;
    }
    yy = y & ~7;
    x0 = x & ~7;
    tileBytes = mode * 64 / 8;
    xe8 = (xe + 7) & ~7;
    ye8 = (ye + 7) & ~7;
    rowPtr = cc->charBase + tileBytes * ((yy / 8) * cc->param + x0 / 8);
    rowStride = cc->param * tileBytes;
    for (; yy < ye8; yy += 8) {
        top = yy < y ? y - yy : 0;
        hIn = ((ye - yy) > 8 ? 8 : (ye - yy)) - top;
        p = rowPtr;
        for (xx = x0; xx < xe8; xx += 8) {
            left = xx < x ? x - xx : 0;
            wIn = ((xe - xx) > 8 ? 8 : (xe - xx)) - left;
            ClearChar(p, left, top, wIn, hIn, clr, mode);
            p += tileBytes;
        }
        rowPtr += rowStride;
    }
}


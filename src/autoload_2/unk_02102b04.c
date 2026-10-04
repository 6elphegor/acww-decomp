// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d CharCanvas: draw a glyph on a BG canvas (characters in rows of `param`). autoload_2
// 0x02102b04-0x02102cbc. ARM, mwcc 1.2/base, -O4,p. The order of the local declarations decides mwcc's register
// assignment; it was found by search, so it does not follow the code.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

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
typedef struct Font { FontInfo *info; } Font;   // NNSG2dFont (partial)
typedef struct Glyph {
    CharWidths *pWidths;
    u8 *pBitmap;
} Glyph;
typedef struct BlitArgs {
    u8 *dst;        // 0x00  destination tile (8x8)
    const u8 *src;  // 0x04  source glyph bitmap
    s32 x;          // 0x08
    s32 y;          // 0x0c
    s32 w;          // 0x10
    s32 h;          // 0x14
    s32 rowStep;    // 0x18  source row step in bits
    s32 pixBits;    // 0x1c  source bits per pixel
    s32 mode;       // 0x20  destination bits per pixel
    u32 colorOfs;   // 0x24
} BlitArgs;
typedef struct CharCanvas {         // NNSG2dCharCanvas
    u8 *charBase;                   // 0x00
    s32 areaWidth;                  // 0x04  (tiles)
    s32 areaHeight;                 // 0x08  (tiles)
    u8 colorMode;                   // 0x0c  (4 or 8 bpp)
    u32 param;                      // 0x10  (characters per row)
} CharCanvas;

extern void LetterChar(BlitArgs *a);

// The canvas's drawGlyph for the BG canvas: blits the glyph character by character, the clipped area walked in
// rows of `param` characters.
void DrawGlyphLine(CharCanvas *cc, Font *font, s32 x, s32 y, s32 clr, Glyph *glyph)
{
    s32 xx;
    s32 gw;
    BlitArgs args;
    s32 xEnd;
    s32 yEnd;
    s32 yy;
    s32 cw;
    s32 areaW;
    s32 areaH;
    const GlyphBlock *pGlyph;
    s32 cy0;
    s32 cx0;
    s32 ch;
    s32 cx1;
    u8 *charBase;
    u8 *dst;
    s32 gh;
    s32 tileBytes;
    s32 rowSkip;
    s32 cy1;
    tileBytes = cc->colorMode * 64 / 8;
    gw = glyph->pWidths->glyphWidth;
    pGlyph = font->info->pGlyph;
    areaW = cc->areaWidth;
    areaH = cc->areaHeight;
    charBase = cc->charBase;
    gh = pGlyph->cellHeight;
    if (gw == 0) return;
    if (x + gw < 0) return;
    if (y + gh < 0) return;
    cx0 = (x <= 0) ? 0 : (u32)x >> 3;
    cy0 = (y <= 0) ? 0 : (u32)y >> 3;
    cx1 = (u32)(x + gw + 7) >> 3;
    if ((u32)cx1 >= (u32)areaW) cx1 = areaW;
    cy1 = (u32)(y + gh + 7) >> 3;
    if ((u32)cy1 >= (u32)areaH) cy1 = areaH;
    cw = cx1 - cx0;
    ch = cy1 - cy0;
    if (cw < 0) return;
    if (ch < 0) return;
    dst = charBase + tileBytes * (cc->param * cy0 + cx0);
    rowSkip = (cc->param - cw) * tileBytes;
    if (x >= 0) x &= 7;
    if (y >= 0) y &= 7;
    args.src = glyph->pBitmap;
    args.w = gw;
    args.h = gh;
    args.colorOfs = clr - 1;
    args.pixBits = font->info->pGlyph->bpp;
    args.mode = cc->colorMode;
    args.rowStep = args.pixBits * font->info->pGlyph->cellWidth;
    xEnd = x - cw * 8;
    yEnd = y - ch * 8;
    for (yy = y; yy > yEnd; yy -= 8) {
        args.y = yy;
        for (xx = x; xx > xEnd; xx -= 8) {
            args.dst = dst;
            args.x = xx;
            LetterChar(&args);
            dst += tileBytes;
        }
        dst += rowSkip;
    }
}

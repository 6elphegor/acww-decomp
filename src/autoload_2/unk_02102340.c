// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d CharCanvas init / draw char: autoload_2 0x02102340-0x02102480. ARM, mwcc 1.2/base, -O4,p.
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

extern u32 NNS_G2dFontFindGlyphIndex(Font *font, u32 c);
extern CharWidths *NNS_G2dFontGetCharWidthsFromIndex(Font *font, u32 idx);
extern void MIi_CpuClearFast(u32 data, void *dest, u32 size);   // MIi_CpuFillFast(data, dest, size)
extern u32 NNSi_G2dBitReaderRead(BitReader *r, u32 nbits);   // bit reader: get n bits

void DrawGlyphLine(CharCanvas *cc, Font *font, s32 x, s32 y, s32 clr, Glyph *glyph);
void ClearContinuous(CharCanvas *cc, u32 clr);
void ClearAreaLine(CharCanvas *cc, u32 clr, s32 x, s32 y, s32 w, s32 h);
void InitCharCanvas(CharCanvas *cc, u8 *charBase, s32 w, s32 h, s32 mode, DrawGlyphFunc dg, ClearFunc cl, ClearAreaFunc ca, u32 param);

// NNSi_G2dCharCanvasInitCommon (stores size, color mode, base and the draw/clear callbacks)
void InitCharCanvas(CharCanvas *cc, u8 *charBase, s32 w, s32 h, s32 mode, DrawGlyphFunc dg, ClearFunc cl, ClearAreaFunc ca, u32 param) {
    cc->areaWidth = w;
    cc->areaHeight = h;
    cc->colorMode = mode;
    cc->charBase = charBase;
    cc->drawGlyph = dg;
    cc->clear = cl;
    cc->clearArea = ca;
    cc->param = param;
}

// NNS_G2dCharCanvasDrawChar: look the glyph up in the font, call cc->drawGlyph, return the character advance
s32 NNS_G2dCharCanvasDrawChar(CharCanvas *cc, Font *font, s32 x, s32 y, s32 clr, u16 ch) {
    Glyph glyph;
    u32 idx = NNS_G2dFontFindGlyphIndex(font, ch);
    GlyphBlock *g;
    if (idx == 0xffff) idx = font->info->alterCharIndex;
    glyph.pWidths = NNS_G2dFontGetCharWidthsFromIndex(font, idx);
    g = font->info->pGlyph;
    glyph.pBitmap = (u8 *)(idx * g->cellSize + ((u8 *)g + 8));
    cc->drawGlyph(cc, font, x + glyph.pWidths->left, y, clr, &glyph);
    if (font->hasLeft != 0) return glyph.pWidths->left + glyph.pWidths->glyphWidth;
    return glyph.pWidths->charWidth;
}

// NNS_G2dCharCanvasInitForOBJ1D (plugs the OBJ 1D mapping draw/clear functions into NNSi_G2dCharCanvasInitCommon;
// the `param` is the area width in characters)
void NNS_G2dCharCanvasInitForBG(CharCanvas *cc, u8 *charBase, s32 w, s32 h, s32 mode) {
    InitCharCanvas(cc, charBase, w, h, mode, (DrawGlyphFunc)DrawGlyphLine, ClearContinuous, ClearAreaLine, w);
}


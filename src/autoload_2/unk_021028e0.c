// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d CharCanvas: draw a glyph on an OBJ (1D mapping) canvas. autoload_2 0x021028e0-0x02102b04.
// ARM, mwcc 1.2/base, -O4,p. The order of the local declarations decides mwcc's register and stack-slot assignment;
// it was found by search, so it does not follow the code.
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
typedef struct ObjShift { u8 w; u8 h; } ObjShift;
typedef union CanvasParam { u32 u; ObjShift s; } CanvasParam;   // OBJ size of the canvas (NNS_G2dCharCanvasInitForOBJ1D)
typedef struct CharCanvas {         // NNSG2dCharCanvas
    u8 *charBase;                   // 0x00
    s32 areaWidth;                  // 0x04  (tiles)
    s32 areaHeight;                 // 0x08  (tiles)
    u8 colorMode;                   // 0x0c  (4 or 8 bpp)
    CanvasParam param;              // 0x10
} CharCanvas;

extern void LetterChar(BlitArgs *a);
extern u32 GetCharIndex1D(u32 x, u32 y, s32 w, s32 h, s32 sw, s32 sh);

// The canvas's drawGlyph for the OBJ 1D canvas: blits the glyph character by character; each character's address
// comes from GetCharIndex1D (the OBJ layout of NNS_G2dArrangeOBJ1D).
void DrawGlyph1D(CharCanvas *cc, Font *font, s32 x, s32 y, s32 clr, Glyph *glyph)
{
    s32 yEnd;
    s32 cx1;
    s32 cy0;
    s32 aw;
    s32 gw;
    s32 cw;
    s32 areaH;
    s32 ch;
    s32 gh;
    s32 yy;
    s32 cx0;
    s32 cy;
    s32 xx;
    s32 xEnd;
    s32 cx;
    s32 areaW;
    u8 *charBase;
    const GlyphBlock *pGlyph;
    s32 tileBytes;
    s32 ah;
    s32 objH;
    s32 objW;
    CanvasParam param;
    BlitArgs args;
    s32 cy1;
    tileBytes = cc->colorMode * 64 / 8;
    gw = glyph->pWidths->glyphWidth;
    pGlyph = font->info->pGlyph;
    aw = cc->areaWidth;
    ah = cc->areaHeight;
    gh = pGlyph->cellHeight;
    if (gw == 0) return;
    if (x + gw < 0) return;
    if (y + gh < 0) return;
    cx0 = (x <= 0) ? 0 : (u32)x >> 3;
    cy0 = (y <= 0) ? 0 : (u32)y >> 3;
    cx1 = (u32)(x + gw + 7) >> 3;
    cy1 = (u32)(y + gh + 7) >> 3;
    if ((u32)cx1 >= (u32)aw) cx1 = aw;
    if ((u32)cy1 >= (u32)ah) cy1 = ah;
    cw = cx1 - cx0;
    ch = cy1 - cy0;
    if (cw < 0) return;
    if (ch < 0) return;
    charBase = cc->charBase;
    if (x >= 0) x &= 7;
    if (y >= 0) y &= 7;
    xEnd = x - cw * 8;
    yEnd = y - ch * 8;
    args.src = glyph->pBitmap;
    args.colorOfs = clr - 1;
    args.h = gh;
    args.w = gw;
    args.pixBits = font->info->pGlyph->bpp;
    args.mode = cc->colorMode;
    args.rowStep = args.pixBits * font->info->pGlyph->cellWidth;
    param = cc->param;
    areaW = cc->areaWidth;
    areaH = cc->areaHeight;
    objW = param.s.w;
    objH = param.s.h;
    cy = cy0;
    for (yy = y; yy > yEnd; yy -= 8) {
        args.y = yy;
        cx = cx0;
        for (xx = x; xx > xEnd; xx -= 8) {
            const u32 idx = GetCharIndex1D(cx, cy, areaW, areaH, objW, objH);
            args.x = xx;
            args.dst = charBase + idx * tileBytes;
            LetterChar(&args);
            cx++;
        }
        cy++;
    }
}

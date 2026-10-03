// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) code: gfd palette VRAM frame manager + g2d font (NNSG2dFont): autoload_2 0x02101818-0x02101de8.
// ARM code, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

// ---- gfd frame palette VRAM manager state (data_021f5cb4)
typedef struct FrmPlttMan {
    u32 head;   // 0x00
    u32 tail;   // 0x04
    u32 size;   // 0x08
} FrmPlttMan;
extern FrmPlttMan data_021f5cb4;
extern u32 (*data_0213bc18)(u32, BOOL, u32);   // gfd default palette alloc function
extern u32 (*data_0213bc1c)(u32);              // gfd default palette free function

// ---- g2d binary file header / block header
typedef struct BinHeader {
    u32 signature;  // 0x00
    u16 byteOrder;  // 0x04
    u16 version;    // 0x06
    u32 fileSize;   // 0x08
    u16 headerSize; // 0x0c
    u16 dataBlocks; // 0x0e
} BinHeader;
typedef struct BinBlock { u32 kind; u32 size; } BinBlock;

// ---- g2d font
typedef struct CharWidths { s8 left; u8 glyphWidth; s8 charWidth; } CharWidths;
typedef struct FontWidth {          // NNSG2dFontWidth block
    u16 indexBegin;                 // 0x00
    u16 indexEnd;                   // 0x02
    struct FontWidth *next;         // 0x04
    CharWidths widths[1];           // 0x08
} FontWidth;
typedef struct CodeMapPair { u16 code; u16 index; } CodeMapPair;
typedef struct FontCodeMap {        // NNSG2dFontCodeMap
    u16 ccodeBegin;                 // 0x00
    u16 ccodeEnd;                   // 0x02
    u16 mappingMethod;              // 0x04
    u16 reserved;                   // 0x06
    struct FontCodeMap *next;       // 0x08
    u16 mapInfo[1];                 // 0x0c
} FontCodeMap;
typedef struct FontInfo {           // NNSG2dFontInformation
    u8 fontType;                    // 0x00
    s8 linefeed;                    // 0x01
    u16 alterCharIndex;             // 0x02
    CharWidths defaultWidth;        // 0x04
    u8 encoding;                    // 0x07
    void *pGlyph;                   // 0x08
    FontWidth *pWidth;              // 0x0c
    FontCodeMap *pMap;              // 0x10
} FontInfo;
typedef struct Font {
    FontInfo *info;                 // 0x00
    u32 (*getChar)(const void **);  // 0x04  character splitter
    u16 hasLeft;                    // 0x08
    u16 stride;                     // 0x0a
} Font;
typedef struct TextRect { s32 width; s32 height; } TextRect;

void func_02101818(void);
u32 func_02101834(u32 key);
u32 func_0210183c(u32 szByte, BOOL b4pltt, u32 opt);
extern s32 func_021035d4(void *file, Font *font);
extern u32 NNSi_G2dSplitCharUTF16(const void **);

static inline BOOL AllocHead(u32 szByte, BOOL b4pltt, u32 *pAddr) {
    u32 total, pad, head;
    head = data_021f5cb4.head;
    pad = b4pltt ? ((8 - (head & 7)) & 7) : ((16 - (head & 15)) & 15);
    total = szByte + pad;
    if (data_021f5cb4.tail - head >= total) {
        u32 end = head + total;
        if (b4pltt && end > 0x10000) {
            head = 0;
        } else {
            *pAddr = head + pad;
            data_021f5cb4.head += total;
            head = 1;
        }
    } else {
        head = 0;
    }
    return head;
}
static inline BOOL AllocTail(u32 szByte, BOOL b4pltt, u32 *pAddr) {
    u32 total, pad, tail, start;
    tail = data_021f5cb4.tail;
    if (tail >= szByte && (start = tail - szByte, pad = b4pltt ? (start & 7) : (start & 15), total = szByte + pad, tail - data_021f5cb4.head >= total)) {
        if (b4pltt && tail > 0x10000) {
            tail = 0;
        } else {
            data_021f5cb4.tail -= total;
            *pAddr = data_021f5cb4.tail;
            tail = 1;
        }
    } else {
        tail = 0;
    }
    return tail;
}

s32 func_02101b44(Font *font, s32 hSpace, const void *txt, const void **next);
CharWidths *func_02101c08(Font *font, u32 idx);
u32 func_02101c6c(Font *font, u32 c);
u32 func_02101d10(FontCodeMap *map, u32 c);

// NNSi_G2dGetGlyphIndex (code map lookup)
u32 func_02101d10(FontCodeMap *m, u32 c) {
    u16 index = 0xffff;
    switch (m->mappingMethod) {
    case 0:
        index = (u16)(m->mapInfo[0] + (c - m->ccodeBegin));
        break;
    case 1:
        index = m->mapInfo[c - m->ccodeBegin];
        break;
    case 2: {
        u16 *p = m->mapInfo;
        u32 n = *p;
        CodeMapPair *lo, *hi;
        p++;
        lo = (CodeMapPair *)p;
        hi = lo + (n - 1);
        while (lo <= hi) {
            CodeMapPair *mid = lo + (hi - lo) / 2;
            if (mid->code < c) lo = mid + 1;
            else if (c < mid->code) hi = mid - 1;
            else { index = mid->index; break; }
        }
        break;
    }
    }
    return index;
}

// NNS_G2dFontInit* (font file init: width-table stride from the file, character splitter = NNSi_G2dSplitCharUTF16)
void func_02101ccc(Font *font, void *file) {
    font->hasLeft = (u16)(func_021035d4(file, font) - 1);
    font->stride = font->hasLeft != 0 ? 2 : 3;
    font->getChar = NNSi_G2dSplitCharUTF16;
}

// NNS_G2dFontGetGlyphIndexFromCharCode
u32 func_02101c6c(Font *font, u32 c) {
    FontCodeMap *m = font->info->pMap;
    while (m != 0) {
        if (m->ccodeBegin <= c && c <= m->ccodeEnd) return func_02101d10(m, c);
        m = m->next;
    }
    return 0xffff;
}

// NNS_G2dFontGetCharWidthsFromIndex
CharWidths *func_02101c08(Font *font, u32 idx) {
    FontWidth *w = font->info->pWidth;
    while (w != 0) {
        if (w->indexBegin <= idx && idx <= w->indexEnd)
            return (CharWidths *)((u8 *)w->widths + (idx - w->indexBegin) * font->stride);
        w = w->next;
    }
    return &font->info->defaultWidth;
}

// NNSi_G2dFontGetLineWidth (static helper of NNS_G2dFontGetTextRect/GetTextWidth: width of one text line, start of the next line in *next)
s32 func_02101b44(Font *font, s32 hSpace, const void *txtIn, const void **next) {
    const void *txt = txtIn;
    s32 width;
    u32 (*getChar)(const void **);
    u32 c;
    getChar = font->getChar;
    width = 0;
    c = getChar(&txt);
    while (c != 0) {
        u32 idx;
        CharWidths *cw;
        s32 w;
        if (c == 10) break;
        idx = func_02101c6c(font, c);
        if (idx == 0xffff) idx = font->info->alterCharIndex;
        cw = func_02101c08(font, idx);
        if (font->hasLeft != 0) w = cw->left + cw->glyphWidth;
        else w = cw->charWidth;
        width += hSpace + w;
        c = getChar(&txt);
    }
    if (next != 0) *next = (c == 10) ? txt : 0;
    if (width > 0) width -= hSpace;
    return width;
}

// NNS_G2dFontGetTextHeight(font, vSpace, txt): number of lines * (vSpace + linefeed) - vSpace
s32 func_02101acc(Font *font, s32 vSpace, const void *txtIn) {
    const void *txt = txtIn;
    TextRect rect = {0, 0};
    s32 lines = 1;
    u32 (*getChar)(const void **) = font->getChar;
    u32 c = getChar(&txt);
    while (c != 0) {
        if (c == 10) lines++;
        c = getChar(&txt);
    }
    return lines * (vSpace + font->info->linefeed) - vSpace;
}

// NNS_G2dFontGetTextRect
TextRect func_02101a30(Font *font, s32 hSpace, s32 vSpace, const void *txt) {
    TextRect rect = {0, 0};
    s32 lines = 1;
    while (txt != 0) {
        s32 w = func_02101b44(font, hSpace, txt, &txt);
        if (w > rect.width) rect.width = w;
        lines++;
    }
    rect.height = (lines - 1) * (vSpace + font->info->linefeed) - vSpace;
    return rect;
}

// NNS_G2dFindBinaryBlock
void *func_021019d0(BinHeader *h, u32 kind) {
    BinBlock *b = (BinBlock *)((u8 *)h + h->headerSize);
    u16 i;
    for (i = 0; i < h->dataBlocks; i++) {
        if (b->kind == kind) return b;
        b = (BinBlock *)((u8 *)b + b->size);
    }
    return 0;
}

// NNS_GfdInitFrmPlttVramManager
void func_0210197c(u32 szByte, BOOL useAsDefault) {
    data_021f5cb4.size = szByte;
    func_02101818();
    if (useAsDefault) {
        data_0213bc18 = func_0210183c;
        data_0213bc1c = func_02101834;
    }
}

// NNS_GfdAllocFrmPlttVram
u32 func_0210183c(u32 szByte, BOOL b4pltt, u32 opt) {
    u32 addr = 0;
    BOOL result;
    if (szByte == 0) szByte = 8;
    else szByte = (szByte + 7) & ~7;
    if (szByte >= 0x7fff8) return 0;
    if (opt == 1) result = AllocHead(szByte, b4pltt, &addr);
    else result = AllocTail(szByte, b4pltt, &addr);
    if (result) return ((szByte >> 3) << 16) | ((addr >> 3) & 0xffff);
    return 0;
}

// NNS_GfdDefaultFuncFreePlttVram (always returns 0)
u32 func_02101834(u32 key) {
    return 0;
}

// NNS_GfdResetFrmPlttVramState
void func_02101818(void) {
    data_021f5cb4.head = 0;
    data_021f5cb4.tail = data_021f5cb4.size;
}


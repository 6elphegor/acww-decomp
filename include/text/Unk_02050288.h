#ifndef TEXT_UNK_02050288_H
#define TEXT_UNK_02050288_H

#include "types.h"

struct GameFontHeader {
    /* 0x00 */ u32 unk_00; // glyph count
    /* 0x04 */ u16 unk_04; // cell width
    /* 0x06 */ u16 unk_06; // cell height
};

struct GameFontGlyph {
    /* 0x00 */ u16 unk_00; // character code
    /* 0x02 */ u8 unk_02;  // width
    /* 0x03 */ u8 unk_03;
};

struct GameFontDesc {
    /* 0x00 */ GameFontHeader *unk_00;
    /* 0x04 */ GameFontGlyph *unk_04;
    /* 0x08 */ u8 *unk_08; // 1bpp glyph bitmaps
    /* 0x0c */ GameFontDesc *unk_0c; // secondary font, for glyph indices with bit 31 set
    /* 0x10 */ u8 unk_10;
};

// A byte buffer interface; callers use fixed-size implementations on the stack
class StrBuf {
public:
    virtual ~StrBuf();
    virtual u32 size();
    virtual u8 *data();
};

// A nested aggregate: a flat struct { u32 a, b; } is copied with interleaved loads and stores instead
struct Unk_02050288_08 {
    u32 unk_00[2];
};

// Text drawn into the 4bpp tile buffer gTextTileBuffer with one of the fonts, then copied to VRAM
class TextLabel {
public:
    TextLabel(s32 arg1, s32 arg2, s32 arg3);
    TextLabel(u32 arg1, s32 arg2, s32 arg3);
    virtual ~TextLabel();
    virtual void draw() = 0; // draws the text
    virtual u32 measureWidth() = 0;  // text width in pixels

    u32 drawGlyph();
    void drawLetterSpacing();
    void drawUnderline(u32 x);
    void clear();
    BOOL isInHighlightA();
    BOOL isInHighlightB();
    u8 getFgColor();
    u8 getBgColor();
    void flushRow();
    void drawChar(u32 c);
    void beginRow();
    void render();
    void clearTileBuffer();
    void endMeasure();
    void measureChar(u32 c);
    void beginMeasure();
    u32 getWidthInTiles();
    void setHighlights(u8 arg1, u8 arg2, u32 arg3, u32 arg4, u8 arg5, u8 arg6, u32 arg7, u32 arg8);
    void setHighlight(u8 arg1, u8 arg2, u32 arg3, u32 arg4);
    void alignRight();
    void alignCenter();
    void requestClear(s32 arg1);
    void requestRedraw();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02050288_08 unk_08;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ GameFontDesc *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
    /* 0x3a */ u8 unk_3a;
    /* 0x3b */ u8 unk_3b;
    /* 0x3c */ u8 unk_3c;
    /* 0x3d */ u8 unk_3d;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u32 unk_48;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 unk_6c;
    /* 0x70 */ u32 unk_70;
    /* 0x74 */ u8 unk_74;
    /* 0x75 */ u8 unk_75;
    /* 0x78 */ u32 unk_78;
};

#endif

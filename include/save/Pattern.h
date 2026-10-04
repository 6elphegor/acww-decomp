#ifndef SAVE_PATTERN_H
#define SAVE_PATTERN_H

#include "types.h"
#include "save/EncodedName8.h"
#include "save/PatternOrder.h"
#include "save/Unk_020942c8.h"

// Design (pattern) records: PatternInfo (author/title/taste/palette, 0x28), Pattern (32x32 4bpp pixels + info, 0x228)
// and the pattern sets of the player (PlayerPatterns), the Able Sisters and the town flag. All methods are defined in
// src/main/unk_02070560.cpp (0x02071c5c..0x020720f8).

class EncodedString16Buf;

class PatternInfo : public Unk_020942c8 {
public:
    PatternInfo();
    ~PatternInfo();
    /* 0x16 */ EncodedTitle16 title;
    /* 0x26 */ struct {
        u8 lo : 4;
        u8 hi : 4;
    } tastePalette;
    // 0x27: padding (size 0x28). Not a member: the implicit copy of PatternInfo in unk_02070560 copies only the
    // named members.

    void setTaste(u32 v);
    u8 getTaste();
    void setTitleRaw(u8 *src);
    void setTitleEncoded(EncodedString16Buf *o);
    void setTitle(void *x);
    void getTitleRaw(u8 *dst);
    void getTitleEncoded(EncodedString16Buf *o);
    void getTitle(void *x);
    Unk_020942c8 *getAuthor();
    void setAuthor(Unk_020942c8 *src);
    void setAuthorToCurrentPlayer();
    void setPalette(u32 v);
    u8 getPalette();
    void getPaletteData();
    BOOL infoEquals(PatternInfo *o);
};

class Pattern {
public:
    Pattern();
    ~Pattern();
    /* 0x000 */ long long pixels[0x40];
    /* 0x200 */ PatternInfo info;

    PatternInfo *getInfo();
    void fill(u32 v);
    void setPixels(void *dst);
    u8 *getPixels();
    BOOL equals(Pattern *o);
};

class TownFlagPattern {
public:
    /* 0x0 */ Pattern pixels;
    TownFlagPattern();
    ~TownFlagPattern();
};

class AbleSistersPatterns {
public:
    AbleSistersPatterns();
    ~AbleSistersPatterns();
    /* 0x0 */ Pattern patterns[8];

    Pattern *getPattern(u8 i);
    void initDefaultPatterns();
};

class PlayerPatterns {
public:
    PlayerPatterns();
    ~PlayerPatterns();
    /* 0x0000 */ Pattern patterns[8];
    /* 0x1140 */ PatternOrder patternOrder;

    PatternOrder *getPatternOrder();
    Pattern *getPatternByOrder(u32 i);
    Pattern *getPattern(u8 i);
    void replaceAuthorTown(Unk_020942c8 *a, Unk_020942c8 *b);
    void initDefaultPatterns(Unk_020942c8 *a);
};

#endif

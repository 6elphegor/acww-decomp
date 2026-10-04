#ifndef UI_LETTERLAYOUT_H
#define UI_LETTERLAYOUT_H

#include "types.h"
#include "ui/LetterTextLine.h"

// 0x208-byte letter text layout (greeting and signature lines, 4 body lines, recipient name, body line starts).
// Defined in src/main/unk_0206cbdc.cpp.
class LetterLayout {
public:
    LetterLayout() {}
    void redrawAll();
    void freeAllLabels();
    s32 getBodyLineOfPos(s32 v);
    s32 getBodyLineCount();
    u8 *getBodyLineStarts();
    void highlightBodyRange(u32 a, u32 b, u32 c);

    /* 0x000 */ LetterTextLine greetingLine;
    /* 0x04c */ LetterTextLine signatureLine;
    /* 0x098 */ LetterTextLine bodyLines[4];
    /* 0x1c8 */ u8 recipientName[0x28];
    /* 0x1f0 */ s32 bodyLineStarts[5];
    /* 0x204 */ s32 bodyLineCount;
};

#endif

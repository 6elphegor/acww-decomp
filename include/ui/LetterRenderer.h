#ifndef UI_LETTERRENDERER_H
#define UI_LETTERRENDERER_H

#include "types.h"
#include "ui/LetterLayout.h"

struct Unk_0206d1d4_Src;

// 0x210-byte letter renderer: LetterLayout plus the recipient name metrics. Defined in src/main/unk_0206cbdc.cpp; the
// constructor/destructor (0x0206d438 / 0x0206d40c) are in src/main/unk_0206d3f4.cpp.
class LetterRenderer : public LetterLayout {
public:
    LetterRenderer();
    ~LetterRenderer();
    void highlightGreeting(u32 a, u32 b);
    void setSignature(u8 *data);
    void setBody(u8 *src, BOOL flag);
    void setGreeting(Unk_0206d1d4_Src *src, u8 *out);
    void loadRecipientName(void *src);
    s32 getRecipientNameLength();
    void show(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void redraw();
    void release();
    void setLayer(s32 v);
    void loadLetterScreen(u32 v);

    /* 0x208 */ s32 recipientNameLength;
    /* 0x20c */ s32 recipientNameWidth;
};

#endif

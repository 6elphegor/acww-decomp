#ifndef UI_LETTERRENDERER_H
#define UI_LETTERRENDERER_H

#include "types.h"
#include "ui/LetterLayout.h"

struct LetterView;

// 0x210-byte letter renderer: LetterLayout plus the recipient name metrics. Defined in src/main/unk_0206cbdc.cpp; the
// constructor/destructor (0x0206d438 / 0x0206d40c) are in src/main/unk_0206d3f4.cpp. highlightGreeting takes a third
// argument its DS symbol (_ZN14LetterRenderer17highlightGreetingEjj) doesn't show.
class LetterRenderer : public LetterLayout {
public:
    LetterRenderer();
    ~LetterRenderer();
    void setSignature(u8 *data);
    void setBody(u8 *src, BOOL flag);
    void setGreeting(LetterView *src, u8 *out);
    void loadRecipientName(void *src);
    s32 getRecipientNameLength();
    void show(LetterView *src, u32 a, u32 b, s32 c);
    void redraw();
    void release();
    void setLayer(s32 v);
    void loadLetterScreen(u32 v);
    void highlightGreeting(u32 a, u32 b, u32 c);

    /* 0x208 */ s32 recipientNameLength;
    /* 0x20c */ s32 recipientNameWidth;
};

#endif

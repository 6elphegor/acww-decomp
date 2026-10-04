#ifndef TALK_MSGTEXTLABEL_H
#define TALK_MSGTEXTLABEL_H

#include "types.h"
#include "text/Unk_02050288.h"

class MsgProcessor;

// TextLabel driven by a message processor (0x84 bytes). Defined in src/main/unk_020a6974.cpp.
class MsgTextLabel : public TextLabel {
public:
    MsgTextLabel(s32 arg1, s32 arg2, s32 arg3);
    MsgTextLabel(u32 arg1, s32 arg2, s32 arg3);
    virtual ~MsgTextLabel();
    virtual void draw();
    virtual u32 measureWidth();

    void onTag(u8 *p);
    void onChar(u32 c);
    void onEnd();
    void onBegin();
    void setProcessor(MsgProcessor *v);

    /* 0x7c */ u32 mode;
    /* 0x80 */ MsgProcessor *processor;
};

#endif

#ifndef TALK_TALKTAGSCANNER_H
#define TALK_TALKTAGSCANNER_H

#include "types.h"
#include "talk/MsgWalker.h"
#include "talk/MsgTag.h"

class TalkWindowState;

// Scans the text of a chosen choice entry for the tag 0x0a00 and reports its argument to the window's request
// (TalkMsgRequest::onScannedTag). Built on the stack by TalkWindowState::scanMessageTags. Defined in
// src/main/unk_02065e88.cpp.
class TalkTagScanner : public MsgWalker {
public:
    TalkTagScanner(TalkWindowState *owner);
    virtual ~TalkTagScanner();
    virtual void onTag(u8 *p);

    void reportTag();
    void resetScan();
    void scan(u8 *p);

    /* 0x24 */ TalkWindowState *window;
    /* 0x28 */ u32 unk_28;  // (cleared, tested: never set)
    /* 0x2c */ MsgTag tag;
};

#endif

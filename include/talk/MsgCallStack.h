#ifndef TALK_MSGCALLSTACK_H
#define TALK_MSGCALLSTACK_H

#include "types.h"

// Fixed-size stack of text cursors: MsgParser::pushText saves the cursor of the text it leaves here, popText
// returns to it. Members defined in src/main/unk_020a8c9c.cpp.
class MsgCallStack {
public:
    MsgCallStack();
    ~MsgCallStack();
    BOOL isEmpty();
    void push(u8 *const &value);
    u8 **top();
    void pop();

    /* 0x00 */ u8 *entries[6];
    /* 0x18 */ u32 depth;
};

#endif // TALK_MSGCALLSTACK_H

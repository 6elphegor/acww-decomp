#ifndef TALK_MSGPARSER_H
#define TALK_MSGPARSER_H

#include "types.h"

// Message script interpreter root (text cursor plus a call stack for nested texts). Defined in unk_020a6974.cpp.
class MsgParser {
public:
    MsgParser();
    virtual ~MsgParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    void popText();
    void pushText(u8 *p);
    void begin(u8 *p);
    BOOL step(u32 arg);
    BOOL isLeadByte(u32 c);
    void unreadTag(u8 *p);
    void skip(s32 n);
    void processTag();
    void reset();

    /* 0x04 */ u8 *cursor;
    /* 0x08 */ u8 callStack[0x1c];
};

#endif

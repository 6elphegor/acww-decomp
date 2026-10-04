#ifndef TALK_MSGRUNNER_H
#define TALK_MSGRUNNER_H

#include "types.h"

class MsgWalker;

// Steps a MsgWalker through message text up to a stop position (0xc bytes).
// Defined in src/main/unk_020a6974.cpp (0x020a84e0..0x020a853c).
class MsgRunner {
public:
    MsgRunner(MsgWalker *obj);
    void start(u8 *p);
    BOOL advance();
    void reset();

    /* 0x00 */ MsgWalker *walker;
    /* 0x04 */ u8 *text;
    /* 0x08 */ u8 *stopPos;
};

#endif

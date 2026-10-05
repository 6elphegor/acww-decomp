#ifndef TALK_MSGWALKER_H
#define TALK_MSGWALKER_H

#include "types.h"
#include "talk/MsgParser.h"

// Message parser that walks text without drawing it (MsgRunner's stepper). Vtable _ZTV9MsgWalker 0x020e2b44; the inline
// destructor's D1/D0 are at 0x020a6974 / 0x020a698c. Defined in main, unk_020a6974.cpp (run 0x020a82ec,
// canContinue 0x020a8328).
class MsgWalker : public MsgParser {
public:
    MsgWalker() {}
    virtual ~MsgWalker() {}
    virtual BOOL canContinue();
    u8 *run(BOOL arg);
};

#endif

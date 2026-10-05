#ifndef TALK_MSGSTRINGATTR_H
#define TALK_MSGSTRINGATTR_H

#include "types.h"

// Text attribute record of a MsgString (vtable 0x020e2a00, 0xc bytes): form plus two attribute bytes.
// Defined in src/main/unk_020a6974.cpp (0x020a8b1c..0x020a8b68).
class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 form;
    /* 0x08 */ u8 attrA;
    /* 0x09 */ u8 attrB;
};

#endif

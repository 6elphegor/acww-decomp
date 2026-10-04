#ifndef TALK_ENCODEDSTRING_H
#define TALK_ENCODEDSTRING_H

#include "types.h"
#include "talk/EncodedStringBase.h"
#include "talk/MsgStringAttr.h"

class MsgString;

// 0x10-byte game-encoded string buffer with a text attribute record; capacity()/data() come from the sized
// subclasses (EncodedString16Buf, ...). Vtable _ZTV13EncodedString 0x020e2a58. Defined in main, unk_020a6974.cpp
// (0x020a77f8..0x020a7940).
class EncodedString : public EncodedStringBase {
public:
    EncodedString();                            // C2 0x020a791c
    virtual ~EncodedString();                   // D2 0x020a78ac, D0 0x020a78d0, D1 0x020a78f8
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);         // 0x020a77f8

    /* 0x04 */ MsgStringAttr attr;
};

#endif

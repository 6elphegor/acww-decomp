#ifndef TALK_MSGSTRING9_H
#define TALK_MSGSTRING9_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 9-byte buffer (0x1c bytes): the speaker name of a TalkMsgRequest. The text starts at 0x12 (tail
// padding of MsgString's attribute record). Defined in src/main/unk_02065e88.cpp.
class MsgString9 : public MsgString {
public:
    MsgString9();
    virtual ~MsgString9();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[9];
};

#endif

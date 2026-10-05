#ifndef TALK_MSGSTRING9B_H
#define TALK_MSGSTRING9B_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 9-byte buffer (0x1c bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_02093ff0.cpp.
class MsgString9B : public MsgString {
public:
    MsgString9B();
    virtual ~MsgString9B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[9];
};

#endif

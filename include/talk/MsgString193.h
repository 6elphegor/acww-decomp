#ifndef TALK_MSGSTRING193_H
#define TALK_MSGSTRING193_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0xc1-byte buffer (0xd4 bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_020742f4.cpp.
class MsgString193 : public MsgString {
public:
    MsgString193();
    virtual ~MsgString193();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0xc1];
};

#endif

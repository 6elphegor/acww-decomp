#ifndef TALK_MSGSTRING17_H
#define TALK_MSGSTRING17_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x11-byte buffer (0x24 bytes, vtable 0x020e05b8). The text starts at 0x12 (tail padding of
// MsgString). Defined in src/main/unk_02077ac4.cpp.
class MsgString17 : public MsgString {
public:
    MsgString17();                              // C1 0x020811b0
    virtual ~MsgString17();                     // D0 0x02081178, D1 0x02081198
    virtual u32 capacity();                     // 0x02081174
    virtual u8 *data();                         // 0x02081170

    /* 0x12 */ u8 text[0x11];
};

#endif

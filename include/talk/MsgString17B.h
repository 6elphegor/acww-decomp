#ifndef TALK_MSGSTRING17B_H
#define TALK_MSGSTRING17B_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x11-byte buffer (0x24 bytes, vtable 0x020e0600). The text starts at 0x12 (tail padding of
// MsgString). Defined in src/main/unk_02077ac4.cpp.
class MsgString17B : public MsgString {
public:
    MsgString17B();                             // C1 0x02081100
    virtual ~MsgString17B();                    // D0 0x020810c8, D1 0x020810e8
    virtual u32 capacity();                     // 0x020810c4
    virtual u8 *data();                         // 0x020810c0

    /* 0x12 */ u8 text[0x11];
};

#endif

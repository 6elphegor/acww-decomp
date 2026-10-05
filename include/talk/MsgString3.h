#ifndef TALK_MSGSTRING3_H
#define TALK_MSGSTRING3_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 3-byte buffer (0x18 bytes, vtable 0x020e0ed4); the text starts at 0x12 (tail padding of MsgString).
// Defined in src/main/unk_02089fbc.cpp (0x0208d05c..0x0208d09c).
class MsgString3 : public MsgString {
public:
    MsgString3();
    virtual ~MsgString3();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[3];
};

#endif

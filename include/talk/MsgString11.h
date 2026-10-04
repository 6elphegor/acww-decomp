#ifndef TALK_MSGSTRING11_H
#define TALK_MSGSTRING11_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0xb-byte buffer (0x20 bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_02077ac4.cpp.
class MsgString11 : public MsgString {
public:
    MsgString11();
    virtual ~MsgString11();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0xb];
};

#endif

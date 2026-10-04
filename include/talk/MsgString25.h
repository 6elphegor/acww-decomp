#ifndef TALK_MSGSTRING25_H
#define TALK_MSGSTRING25_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x19-byte buffer (0x2c bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_020b2c50.cpp.
class MsgString25 : public MsgString {
public:
    MsgString25();
    virtual ~MsgString25();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0x19];
};

#endif

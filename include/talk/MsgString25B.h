#ifndef TALK_MSGSTRING25B_H
#define TALK_MSGSTRING25B_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x19-byte buffer (0x2c bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_0206cb7c.cpp.
class MsgString25B : public MsgString {
public:
    MsgString25B();
    virtual ~MsgString25B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0x19];
};

#endif

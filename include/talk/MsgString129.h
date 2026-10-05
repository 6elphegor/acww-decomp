#ifndef TALK_MSGSTRING129_H
#define TALK_MSGSTRING129_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x81-byte buffer (0x94 bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_0206cabc.cpp.
class MsgString129 : public MsgString {
public:
    MsgString129();
    virtual ~MsgString129();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0x81];
};

#endif

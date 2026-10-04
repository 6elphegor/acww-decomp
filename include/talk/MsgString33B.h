#ifndef TALK_MSGSTRING33B_H
#define TALK_MSGSTRING33B_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x21-byte buffer (0x34 bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_0206cabc.cpp.
class MsgString33B : public MsgString {
public:
    MsgString33B();
    virtual ~MsgString33B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0x21];
};

#endif

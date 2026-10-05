#ifndef TALK_MSGSTRING513_H
#define TALK_MSGSTRING513_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString with a 0x201-byte buffer (0x214 bytes). The text starts at 0x12: the derived member reuses the tail
// padding of MsgString's attribute record. Defined in src/main/unk_0206c768.cpp.
class MsgString513 : public MsgString {
public:
    MsgString513();
    virtual ~MsgString513();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0x201];
};

#endif

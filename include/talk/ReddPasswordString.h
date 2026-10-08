#ifndef TALK_REDDPASSWORDSTRING_H
#define TALK_REDDPASSWORDSTRING_H

#include "types.h"
#include "talk/MsgString.h"

// MsgString holding Redd's password prompt / answer text (0x21-byte buffer at 0x12, the tail padding of MsgString's
// attribute record). Defined in src/main/unk_020ac750.cpp (which still declares the class itself: switch it to this
// header).
class ReddPasswordString : public MsgString {
public:
    ReddPasswordString();
    virtual ~ReddPasswordString();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[0x21];
};

#endif

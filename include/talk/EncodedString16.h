#ifndef TALK_ENCODEDSTRING16_H
#define TALK_ENCODEDSTRING16_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 16-byte buffer (0x20 bytes). The text starts at 0x0e, in the tail padding of
// EncodedString's attribute record. Defined in src/main/unk_02077ac4.cpp.
class EncodedString16 : public EncodedString {
public:
    EncodedString16();
    virtual ~EncodedString16();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x10];
};

#endif

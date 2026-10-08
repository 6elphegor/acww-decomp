#ifndef TALK_ENCODEDSTRING16B_H
#define TALK_ENCODEDSTRING16B_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 16-byte buffer (0x20 bytes; a second class of EncodedString16's shape). The text starts at
// 0x0e, in the tail padding of EncodedString's attribute record. Defined in src/main/unk_02077ac4.cpp.
class EncodedString16B : public EncodedString {
public:
    EncodedString16B();
    virtual ~EncodedString16B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x10];
};

#endif

#ifndef TALK_ENCODEDSTRING8_H
#define TALK_ENCODEDSTRING8_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with an 8-byte buffer (0x18 bytes; text at 0x0e). Defined in src/main/unk_02093f8c.cpp.
class EncodedString8 : public EncodedString {
public:
    EncodedString8();
    virtual ~EncodedString8();
    virtual u32 capacity();
    virtual u8 *data();

    void copyTo(void *dst, u32 n);

    /* 0x0e */ u8 text[8];
};

#endif

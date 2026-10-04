#ifndef TALK_ENCODEDSTRING41_H
#define TALK_ENCODEDSTRING41_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 41-byte buffer (0x38 bytes; text at 0x0e). Defined in src/main/unk_0206f834.cpp
// (getLength in unk_0206f804.cpp).
class EncodedString41 : public EncodedString {
public:
    EncodedString41();
    virtual ~EncodedString41();
    virtual u32 capacity();
    virtual u8 *data();

    s32 getLength();

    /* 0x0e */ u8 text[0x29];
};

#endif

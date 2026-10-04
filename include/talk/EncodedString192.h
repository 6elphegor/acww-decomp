#ifndef TALK_ENCODEDSTRING192_H
#define TALK_ENCODEDSTRING192_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 0xb2-byte buffer (0xc0 bytes; text at 0x0e). Defined in src/main/unk_020742f4.cpp.
class EncodedString192 : public EncodedString {
public:
    EncodedString192();
    virtual ~EncodedString192();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 bytes[0xb2];
};

#endif

#ifndef TALK_ENCODEDSTRING128_H
#define TALK_ENCODEDSTRING128_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 0x82-byte buffer (0x90 bytes; text at 0x0e). Defined in src/main/unk_02065330.cpp.
class EncodedString128 : public EncodedString {
public:
    EncodedString128();
    virtual ~EncodedString128();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x82];
};

#endif

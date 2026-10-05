#ifndef TALK_ENCODEDSTRING512_H
#define TALK_ENCODEDSTRING512_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 512-byte buffer (0x210 bytes; text at 0x0e). Defined in src/main/unk_0206c768.cpp.
class EncodedString512 : public EncodedString {
public:
    EncodedString512();
    virtual ~EncodedString512();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x200];
};

#endif

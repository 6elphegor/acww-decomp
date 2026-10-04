#ifndef TALK_ENCODEDSTRING16BUF_H
#define TALK_ENCODEDSTRING16BUF_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 16-byte buffer (0x20 bytes; text at 0x0e). Defined in src/main/unk_02062498.cpp
// (and its twin unk_02062530.cpp).
class EncodedString16Buf : public EncodedString {
public:
    EncodedString16Buf();
    EncodedString16Buf(u8 *src);
    virtual ~EncodedString16Buf();
    virtual u32 capacity();
    virtual u8 *data();
    BOOL copyTo(u8 *out, s32 n);

    /* 0x0e */ u8 text[16];
};

#endif

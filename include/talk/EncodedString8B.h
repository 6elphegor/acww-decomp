#ifndef TALK_ENCODEDSTRING8B_H
#define TALK_ENCODEDSTRING8B_H

#include "types.h"
#include "talk/EncodedString.h"

// Second 8-character EncodedString (0x18 bytes; text at 0x0e; the static instances in ov139/ov146 are 0x18). Defined
// in src/main/unk_020637e4.cpp, which keeps its own declaration (text[14]; vtable emission order).
class EncodedString8B : public EncodedString {
public:
    EncodedString8B();
    virtual ~EncodedString8B();
    virtual u32 capacity();
    virtual u8 *data();
    void copyBytesTo(void *p, u32 n);

    /* 0x0e */ u8 text[10];
};

#endif

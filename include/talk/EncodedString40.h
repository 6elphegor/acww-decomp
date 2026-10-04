#ifndef TALK_ENCODEDSTRING40_H
#define TALK_ENCODEDSTRING40_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 40-byte buffer (0x38 bytes; text at 0x0e). Inline ctor/dtor; the D1/D0 copies and
// capacity/data are emitted in src/main/unk_0206cbdc.cpp.
class EncodedString40 : public EncodedString {
public:
    EncodedString40() {}
    virtual ~EncodedString40() {}
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x28];
};

#endif

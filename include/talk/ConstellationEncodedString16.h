#ifndef TALK_CONSTELLATIONENCODEDSTRING16_H
#define TALK_CONSTELLATIONENCODEDSTRING16_H

#include "types.h"
#include "talk/EncodedString.h"

// Encoded constellation name (capacity 0x10; 0x20 bytes, text at 0x0e). Defined in src/main/unk_020b0774.cpp.
class ConstellationEncodedString16 : public EncodedString {
public:
    ConstellationEncodedString16();
    virtual ~ConstellationEncodedString16();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x10];
};

#endif

#ifndef TALK_ENCODEDSTRING10_H
#define TALK_ENCODEDSTRING10_H

#include "types.h"
#include "talk/EncodedString.h"

// EncodedString with a 10-byte buffer (0x18 bytes). The text starts at 0x0e, in the tail padding of
// EncodedString's attribute record. Defined in src/main/unk_02077ac4.cpp, which keeps its own declaration (vtable
// emission order).
class EncodedString10 : public EncodedString {
public:
    EncodedString10();
    virtual ~EncodedString10();
    virtual u32 capacity();
    virtual u8 *data();
    void copyTo(void *dst, s32 n);

    /* 0x0e */ u8 bytes[0xa];
};

#endif

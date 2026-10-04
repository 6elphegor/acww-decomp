#ifndef TALK_ENCODEDSTRINGBASE_H
#define TALK_ENCODEDSTRINGBASE_H

#include "types.h"

// Abstract base of the game-encoded string buffers (EncodedString, EncodedStringBaseRef). Vtable
// _ZTV17EncodedStringBase; the out-of-line dtor copy lives in unk_02038474.cpp.
class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
};

#endif

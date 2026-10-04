#ifndef TALK_MSGSTRING_H
#define TALK_MSGSTRING_H

#include "types.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"

class EncodedString;

// Abstract message string (0x14 bytes): MsgStringBase plus length and text attributes; the sized subclasses
// (MsgString9C, MsgString33, ...) supply capacity() and data(). Defined in src/main/unk_020a6974.cpp.
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL appendRange(u8 *start, u8 *end);
    BOOL assignRange(u8 *start, u8 *end);
    BOOL equals(MsgString *other);
    u8 appendString(MsgString *other);
    u8 append(u8 *str);
    u8 setLine(u8 *str);
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    u8 copy(MsgString *other);
    u8 set(u8 *str);
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

#endif

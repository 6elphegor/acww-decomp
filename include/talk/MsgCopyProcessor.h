#ifndef TALK_MSGCOPYPROCESSOR_H
#define TALK_MSGCOPYPROCESSOR_H

#include "types.h"
#include "talk/MsgProcessor.h"

class MsgString;

// Message processor that copies the expanded text into a MsgString (vtable 0x020e2ae0, ctor 0x020a7db0).
// Defined in src/main/unk_020a6974.cpp.
class MsgCopyProcessor : public MsgProcessor {
public:
    MsgCopyProcessor();
    virtual ~MsgCopyProcessor();
    virtual void onEnd();
    u8 getResult();
    void finish();
    void beginCopy(MsgString *s, u8 *str, u32 mode, u8 flag);

    /* 0x2c */ MsgString *dest;
    /* 0x30 */ u8 *srcText;
    /* 0x34 */ u32 copyMode;
    /* 0x38 */ u8 result;
};

#endif

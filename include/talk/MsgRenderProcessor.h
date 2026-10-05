#ifndef TALK_MSGRENDERPROCESSOR_H
#define TALK_MSGRENDERPROCESSOR_H

#include "types.h"
#include "talk/MsgProcessor.h"

// Message processor that renders the text (vtable 0x020e2aa0, ctor 0x020a8204).
// Defined in src/main/unk_020a6974.cpp.
class MsgRenderProcessor : public MsgProcessor {
public:
    MsgRenderProcessor();
    virtual ~MsgRenderProcessor();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    /* 0x2c */ u32 altTextEnd;
};

#endif

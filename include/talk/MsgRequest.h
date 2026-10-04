#ifndef TALK_MSGREQUEST_H
#define TALK_MSGREQUEST_H

#include "types.h"

// Message request base (0x20 bytes): BMG file name plus message index; vfunc_08 at 0x020a7118.
// Defined in src/main/unk_020a6974.cpp. Slot 0x0c (pure) returns the message directory; it is named vfunc_s0c (alias
// labels of the subclasses' vfunc_0c symbols) so that TalkMsgRequest users that also derive from ProcBase do not
// override ProcBase::vfunc_0c with it.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    virtual const char *vfunc_s0c() = 0;    // 0x0c message directory ("/script/ENG/...")
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

#endif

#ifndef TALK_MSGREQUEST_H
#define TALK_MSGREQUEST_H

#include "types.h"

// Message request base (0x20 bytes): BMG file name plus message index; vfunc_08 at 0x020a7118.
// Defined in src/main/unk_020a6974.cpp (which keeps its own copy: it also declares the pure slot vfunc_0c, whose
// overrides return different types per subclass). Units that name slot 0x08 vfunc_s08 keep their own copies too.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

#endif

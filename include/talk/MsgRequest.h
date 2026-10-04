#ifndef TALK_MSGREQUEST_H
#define TALK_MSGREQUEST_H

#include "types.h"

// Message request base (0x20 bytes): BMG file name plus message index; resetMsg at 0x020a7118.
// Defined in src/main/unk_020a6974.cpp. Slot 0x0c (pure) returns the message directory.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void resetMsg();
    virtual const char *getMsgDir() = 0;    // 0x0c message directory ("/script/ENG/...")
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

#endif

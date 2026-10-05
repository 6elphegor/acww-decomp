#ifndef TALK_MAILMSGREQUEST_H
#define TALK_MAILMSGREQUEST_H

// Message request for mail texts (vtable 0x020d94b8): folder/part select the BMG, the result goes to dest.
// Defined in src/main/unk_0203cbc0.cpp.
#include "types.h"
#include "talk/MsgRequest.h"

class MsgString;

class MailMsgRequest : public MsgRequest {
public:
    MailMsgRequest();
    virtual ~MailMsgRequest();
    virtual const char *getMsgDir();    // 0x0c
    u32 *getNamePosOut();
    MsgString *getDest();
    void setNamePosOut(u32 *v);
    void setDest(MsgString *v);
    void setPart(u32 v);
    void setFolder(u32 v);
    u32 getPartDir();
    BOOL isAppendPart();

    /* 0x20 */ u32 folder;
    /* 0x24 */ u32 part;
    /* 0x28 */ MsgString *dest;
    /* 0x2c */ u32 *namePosOut;
};

#endif // TALK_MAILMSGREQUEST_H

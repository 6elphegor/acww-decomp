#ifndef TALK_MAILTEXTBUILDER_H
#define TALK_MAILTEXTBUILDER_H

#include "types.h"
#include "game/Unk_0203ce24_Elem.h"

// Mail text builder singleton gMailTextBuilder at 0x021c3280: a MailTextExpander at +0, a BmgReader512 at +0x5c,
// the output buffer and 11 MsgString33 slots. Defined in unk_0203cbc0.cpp.
class MailMsgRequest;

class MailTextBuilder {
public:
    MailTextBuilder();
    ~MailTextBuilder();
    BOOL load(MailMsgRequest *p);
    void reset();

    /* 0x000 */ u8 expander[0x5c];
    /* 0x05c */ u8 reader[0x2a4];
    /* 0x300 */ u8 output[0x200];
    /* 0x500 */ s32 namePos;
    /* 0x504 */ Unk_0203ce24_Elem slots[11];
};

#endif

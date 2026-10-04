#ifndef TALK_CHATBALLOONTEXT_H
#define TALK_CHATBALLOONTEXT_H

#include "types.h"
#include "talk/MsgString.h"

// 0x34-byte 0x21-character message string of a chat balloon (vtable _ZTV15ChatBalloonText 0x020d9174).
// Defined in main, unk_02038474.cpp (data 0x02039ac4, capacity 0x02039ac8, D0 0x02039acc, D1 0x02039aec, C1 0x02039b04).
class ChatBalloonText : public MsgString {
public:
    ChatBalloonText();
    virtual ~ChatBalloonText();
    virtual u32 capacity();
    virtual u8 *data();
    /* 0x14 */ u8 text[0x20];
};

#endif

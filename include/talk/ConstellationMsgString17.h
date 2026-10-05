#ifndef TALK_CONSTELLATIONMSGSTRING17_H
#define TALK_CONSTELLATIONMSGSTRING17_H

// 0x24-byte message string holding a constellation name (capacity 0x11; vtable 0x020e2f6c). Defined in
// src/main/unk_020b0774.cpp. (The text starts in MsgString's tail padding at 0x12.)
#include "types.h"
#include "talk/MsgString.h"

class ConstellationMsgString17 : public MsgString {
public:
    ConstellationMsgString17();
    virtual ~ConstellationMsgString17();
    virtual u32 capacity();
    virtual u8 *data();
    /* 0x12 */ u8 text[0x11];
};

#endif

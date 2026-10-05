#ifndef TALK_BMGMSGATTR_H
#define TALK_BMGMSGATTR_H

#include "types.h"

// 0xc-byte BMG message attribute record (text offset + 8 attribute bytes). Its ctor/dtor are still the C
// functions BmgMsgAttr_Init / BmgMsgAttr_Fini in unk_020a6914.cpp.
struct BmgMsgAttr {
    BmgMsgAttr();
    ~BmgMsgAttr();

    /* 0x00 */ u32 textOffset;
    /* 0x04 */ u8 windowStyle;
    /* 0x05 */ u8 friendshipDelta;
    /* 0x06 */ u8 startEvent;
    /* 0x07 */ u8 endEvent;
    /* 0x08 */ u8 nextMsg;
    /* 0x09 */ u8 msgSe;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

#endif

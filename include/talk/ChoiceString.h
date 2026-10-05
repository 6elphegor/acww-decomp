#ifndef TALK_CHOICESTRING_H
#define TALK_CHOICESTRING_H

// 0x34-byte message string (0x20 bytes of text) of a menu choice, loadable from a BMG file (vtable 0x020e2c78).
// Defined in src/main/unk_020a8c9c.cpp.
#include "types.h"
#include "talk/MsgString.h"

struct BmgMsgAttr;

class ChoiceString : public MsgString {
public:
    ChoiceString();
    virtual ~ChoiceString();
    virtual u32 capacity();
    virtual u8 *data();

    BOOL loadFromBmg(const char *path, void *entry, BmgMsgAttr *out);

    /* 0x12 */ u8 unk_14[0x20];
};

#endif

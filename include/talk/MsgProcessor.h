#ifndef TALK_MSGPROCESSOR_H
#define TALK_MSGPROCESSOR_H

#include "types.h"
#include "talk/MsgParser.h"

class MsgTextLabel;

// 0x2c-byte message parser that renders into a MsgTextLabel (vtable _ZTV12MsgProcessor 0x020e2ac0).
// Defined in main, unk_020a6974.cpp (0x020a8224..0x020a82ec).
class MsgProcessor : public MsgParser {
public:
    MsgProcessor(u8 flag);                  // C2 0x020a82c4
    virtual ~MsgProcessor();                // D2 0x020a8274, D0 0x020a828c, D1 0x020a82ac

    void clearStopAtNewline();              // 0x020a8224
    void setStopAtNewline();                // 0x020a822c
    void clearLabel();                      // 0x020a8234
    void setLabel(MsgTextLabel *p);         // 0x020a823c
    u32 run(u8 *p);                         // 0x020a8240

    /* 0x24 */ MsgTextLabel *label;
    /* 0x28 */ u8 stopAtNewline;
};

#endif

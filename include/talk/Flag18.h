#ifndef TALK_FLAG18_H
#define TALK_FLAG18_H

#include "types.h"

// View of the block at gMsgQuery + 0x40 (flag byte at +0x18), used by the BMG message units unk_020a6974 and
// unk_020a8ba0.
struct Flag18 {
    /* 0x00 */ u8 pad[0x18];
    /* 0x18 */ u8 flag;
};

#endif

#ifndef SYS_UNK_020B83B0_H
#define SYS_UNK_020B83B0_H

#include "types.h"

// Base of the prioritised task-list entries (e.g. VramTask); inline constructor only.
class Unk_020b83b0 {
public:
    /* 0x0 */ u32 unk_04;
    /* 0x4 */ u32 next;
    /* 0x8 */ u8 priority;

    Unk_020b83b0() : unk_04(0), next(0), priority(0xff) {}
};

#endif

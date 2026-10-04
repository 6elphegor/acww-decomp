#ifndef SYS_PRIONODE_H
#define SYS_PRIONODE_H

// Priority-ordered list node of the task / sound lists (u16 priority key at +0xc); see src/autoload_2/unk_020ed4bc.cpp.
#include "types.h"

struct PrioNode {
    /* 0x00 */ PrioNode *unk_00;
    /* 0x04 */ PrioNode *unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ u16 unk_0c;
};

#endif // SYS_PRIONODE_H

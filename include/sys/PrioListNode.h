#ifndef SYS_PRIOLISTNODE_H
#define SYS_PRIOLISTNODE_H

#include "types.h"

// Node of the u8-priority lists (PrioList_Insert; e.g. the VRAM queue sVramQueueTex): prev/next links and the sort
// key. Base of VramTask; inline constructor only.
class PrioListNode {
public:
    /* 0x0 */ u32 prev;
    /* 0x4 */ u32 next;
    /* 0x8 */ u8 priority;

    PrioListNode() : prev(0), next(0), priority(0xff) {}
};

#endif

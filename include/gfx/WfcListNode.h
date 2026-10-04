#ifndef GFX_WFCLISTNODE_H
#define GFX_WFCLISTNODE_H

#include "types.h"

// Doubly linked list node of the ov001 (Wi-Fi setup) VRAM block lists (src/ov001/unk_ov001_022266b0.cpp, unk_ov001_02226994.cpp).
struct WfcListNode {
    /* 0x0 */ WfcListNode *prev;
    /* 0x4 */ WfcListNode *next;
};

#endif

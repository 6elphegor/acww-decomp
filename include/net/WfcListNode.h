#ifndef NET_WFCLISTNODE_H
#define NET_WFCLISTNODE_H

#include "types.h"

// ov001 Wi-Fi setup doubly linked list node (unk_ov001_022266b0.cpp, unk_ov001_02226994.cpp).
struct WfcListNode {
    /* 0x0 */ WfcListNode *prev;
    /* 0x4 */ WfcListNode *next;
};

#endif

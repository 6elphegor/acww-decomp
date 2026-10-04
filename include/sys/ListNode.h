#ifndef SYS_LISTNODE_H
#define SYS_LISTNODE_H

#include "types.h"

// Intrusive doubly linked list node and head/tail list of the in-house ARM helpers (autoload_2 0x020e7500) and
// the task-system units (unk_020ed4bc, 020ed81c, 020edd58, 020ee98c). No defining TU (plain data).
struct ListNode {
    /* 0x0 */ ListNode *prev;
    /* 0x4 */ ListNode *next;
};

struct List {
    /* 0x0 */ ListNode *head;
    /* 0x4 */ ListNode *tail;
};

#endif

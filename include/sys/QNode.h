#ifndef SYS_QNODE_H
#define SYS_QNODE_H

#include "types.h"

class ProcBase;

// Priority queue node of the task lists (execute / create / draw / delete); ProcBase embeds two.
// Inserted with Task_InsertByPriority and the list helpers List_PushFront / List_PushBack / List_Remove (src/autoload_2/unk_020e7500.cpp).
struct QNode {
    /* 0x00 */ QNode *prev;
    /* 0x04 */ QNode *next;
    /* 0x08 */ ProcBase *owner;
    /* 0x0c */ u16 priority;
    /* 0x0e */ u16 pendingPriority;
};

// Task list head (gTaskExecuteList, gTaskCreateList, gTaskDrawList, gTaskDeleteList).
struct QList {
    /* 0x00 */ QNode *head;
    /* 0x04 */ QNode *tail;
};

#endif // SYS_QNODE_H

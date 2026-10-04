#ifndef ACTOR_UNK_02002F14_NODE_H
#define ACTOR_UNK_02002F14_NODE_H

#include "types.h"

// Actor list node (Actor::listNode at +0x50); see src/main/unk_02002b1c.cpp.

struct Unk_02002f14_Node {
    /* 0x00 */ void *prev;
    /* 0x04 */ void *next;
    /* 0x08 */ void *owner;
};

#endif

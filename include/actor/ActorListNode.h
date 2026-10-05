#ifndef ACTOR_ACTORLISTNODE_H
#define ACTOR_ACTORLISTNODE_H

#include "types.h"

// Actor list node (Actor::listNode at +0x50); see src/main/unk_02002b1c.cpp.

struct ActorListNode {
    /* 0x00 */ void *prev;
    /* 0x04 */ void *next;
    /* 0x08 */ void *owner;
};

#endif

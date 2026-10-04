#ifndef ACTOR_UNK_0203E5D0_NODE_H
#define ACTOR_UNK_0203E5D0_NODE_H

#include "types.h"

// Character list node (Unk_0203e5d0_List in src/main/unk_0203e7d0.cpp / unk_0203e438.cpp).

class Character;

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *next;
    /* 0x08 */ u32 charId;
    /* 0x0c */ Character *owner;
};

#endif

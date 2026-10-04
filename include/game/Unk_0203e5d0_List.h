#ifndef GAME_UNK_0203E5D0_LIST_H
#define GAME_UNK_0203E5D0_LIST_H

#include "types.h"

// Character list head (gCharacterList; src/main/unk_0203e7d0.cpp, unk_0203e438.cpp).

struct Unk_0203e5d0_Node;

struct Unk_0203e5d0_List {
    /* 0x00 */ Unk_0203e5d0_Node *head;
    /* 0x04 */ u32 tail;
    Unk_0203e5d0_List() {
        head = 0;
        tail = 0;
    }
};

#endif

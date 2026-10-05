#ifndef GAME_CHARACTERLIST_H
#define GAME_CHARACTERLIST_H

#include "types.h"

// Character list head (gCharacterList; src/main/unk_0203e7d0.cpp, unk_0203e438.cpp).

struct CharacterListNode;

struct CharacterList {
    /* 0x00 */ CharacterListNode *head;
    /* 0x04 */ u32 tail;
    CharacterList() {
        head = 0;
        tail = 0;
    }
};

#endif

#ifndef TALK_TALKREQUESTLIST_H
#define TALK_TALKREQUESTLIST_H

#include "types.h"

// Talk request list head (sTalkRequestList; PrioList_Insert / List_Remove; src/main/unk_0203eb78.cpp,
// unk_0203ecec.cpp). src/main/unk_0203d4d8.cpp still declares its own copy with the same layout and an inline ctor.

struct TalkRequestEntry;

struct TalkRequestList {
    /* 0x00 */ TalkRequestEntry *head;
    /* 0x04 */ TalkRequestEntry *tail;
};

#endif

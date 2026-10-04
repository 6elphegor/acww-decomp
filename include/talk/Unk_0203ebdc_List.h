#ifndef TALK_UNK_0203EBDC_LIST_H
#define TALK_UNK_0203EBDC_LIST_H

#include "types.h"

// Talk request list head (src/main/unk_0203eb78.cpp, unk_0203ecec.cpp).

struct TalkRequestEntry;

struct Unk_0203ebdc_List {
    /* 0x00 */ TalkRequestEntry *head;
};

#endif

#ifndef NNSYS_FND_LIST_H
#define NNSYS_FND_LIST_H

#include "types.h"

// NitroSystem foundation list (NNSFndList, list.c: src/autoload_2/unk_02100234.c): an object is linked through the
// NNSFndLink at offset `offset` inside it.
typedef struct NNSFndLink {
    void *prev;
    void *next;
} NNSFndLink;

typedef struct NNSFndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
} NNSFndList;

#endif

#ifndef SYS_FNDLIST_H
#define SYS_FNDLIST_H

#include "types.h"

// NNS foundation intrusive list header (NNSFndList: head, tail, count, link offset), used by the sound units
// (unk_020ed81c, unk_020ed8cc, unk_020edd58, unk_020ede18, unk_020ee98c, unk_020f30fc).
struct FndList {
    /* 0x0 */ void *head;
    /* 0x4 */ void *tail;
    /* 0x8 */ u16 num;
    /* 0xa */ u16 offset;
};

#endif

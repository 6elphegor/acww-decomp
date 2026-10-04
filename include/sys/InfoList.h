#ifndef SYS_INFOLIST_H
#define SYS_INFOLIST_H

#include "types.h"

// Task-system info list: InfoList -> InfoNode chain, each node pointing at a NodeInfo record.
// Used by the autoload_2 task units (unk_020ed4bc, 020ed81c, 020edd58, 020ee98c). No defining TU (plain data).
struct NodeInfo {
    /* 0x0 */ u8 pad0[4];
    /* 0x4 */ u32 unk_04;
    /* 0x8 */ u8 pad1[4];
    /* 0xc */ u16 unk_0c;
};

struct InfoNode {
    /* 0x0 */ InfoNode *unk_00;
    /* 0x4 */ InfoNode *unk_04;
    /* 0x8 */ NodeInfo *unk_08;
};

struct InfoList {
    /* 0x0 */ InfoNode *head;
};

#endif

#ifndef SYS_TREENODE_H
#define SYS_TREENODE_H

#include "types.h"

class ProcBase;

// Intrusive tree node (parent / first child / sibling links) of the process tree; ProcBase embeds one.
// Linked and walked by the helpers in src/autoload_2/unk_020e7500.cpp (func_020e7af4 / 020e7a7c / 020e7b68 / 020e7b80)
// and src/itcm/unk_01ffcfc0.cpp (func_01ffcfc0 / 01ffcffc).
struct TreeNode {
    /* 0x00 */ TreeNode *parent;
    /* 0x04 */ TreeNode *child; // first child
    /* 0x08 */ TreeNode *prev; // previous sibling
    /* 0x0c */ TreeNode *next; // next sibling
    /* 0x10 */ ProcBase *owner;
};

#endif // SYS_TREENODE_H

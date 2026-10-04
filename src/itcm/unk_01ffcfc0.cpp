// mwcc-flags: -nothumb -O4,p
// I004c: itcm 0x01ffcfc0-0x01ffd0b4 (4 ARM functions): tree-node search helpers and two vector helpers. mwcc 1.2/base, C++, ARM, -O4,p.
// The range ends at 0x01ffd0b4 where the ptmf constants (data in .text, 0x01ffd0b4-0x01ffd0e4) begin.
#include "types.h"
#include "gfx/VecFx32.h"
#include "sys/TreeNode.h"



extern "C" {
TreeNode *TreeNode_GetNextSkipChildren(TreeNode *n);
}

// game copy of the SDK VEC_Add (the SDK one is at 0x01ffca8c)
extern "C" void Vec_Add(VecFx32 *out, VecFx32 *a, VecFx32 *b) {
    s32 ax = a->x, bx = b->x, az = a->z, bz = b->z, ay = a->y, by = b->y;
    out->x = ax + bx;
    out->y = ay + by;
    out->z = az + bz;
}

// squared distance in fx32 (s64 >> 12)
extern "C" s64 Vec_DistSq(VecFx32 *a, VecFx32 *b) {
    s64 s = (s64)(a->x - b->x) * (a->x - b->x);
    s += (s64)(a->y - b->y) * (a->y - b->y);
    s += (s64)(a->z - b->z) * (a->z - b->z);
    return s >> 12;
}

extern "C" TreeNode *TreeNode_GetNextPreOrder(TreeNode *n) {
    TreeNode *r = n->child;
    if (r == 0) {
        r = TreeNode_GetNextSkipChildren(n);
    }
    return r;
}

extern "C" TreeNode *TreeNode_GetNextSkipChildren(TreeNode *n) {
    if (n->next != 0) {
        return n->next;
    }
    for (TreeNode *p = n->parent; p != 0; p = p->parent) {
        if (p->next != 0) {
            return p->next;
        }
    }
    return 0;
}


// mwcc-flags: -nothumb -O4,p
// I004c: itcm 0x01ffcfc0-0x01ffd0b4 (4 ARM functions): tree-node search helpers and two vector helpers. mwcc 1.2/base, C++, ARM, -O4,p.
// The range ends at 0x01ffd0b4 where the ptmf constants (data in .text, 0x01ffd0b4-0x01ffd0e4) begin.
#include "types.h"

struct TreeNode {
    /* 0x00 */ TreeNode *unk_00; // parent
    /* 0x04 */ TreeNode *unk_04;
    /* 0x08 */ TreeNode *unk_08;
    /* 0x0c */ TreeNode *unk_0c;
    /* 0x10 */ void *unk_10;
};

struct Vec3 {
    s32 x, y, z;
};

extern "C" {
TreeNode *func_01ffcfc0(TreeNode *n);
}

// VEC_Add
extern "C" void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b) {
    s32 ax = a->x, bx = b->x, az = a->z, bz = b->z, ay = a->y, by = b->y;
    out->x = ax + bx;
    out->y = ay + by;
    out->z = az + bz;
}

// squared distance in fx32 (s64 >> 12)
extern "C" s64 func_01ffd028(Vec3 *a, Vec3 *b) {
    s64 s = (s64)(a->x - b->x) * (a->x - b->x);
    s += (s64)(a->y - b->y) * (a->y - b->y);
    s += (s64)(a->z - b->z) * (a->z - b->z);
    return s >> 12;
}

extern "C" TreeNode *func_01ffcffc(TreeNode *n) {
    TreeNode *r = n->unk_04;
    if (r == 0) {
        r = func_01ffcfc0(n);
    }
    return r;
}

extern "C" TreeNode *func_01ffcfc0(TreeNode *n) {
    if (n->unk_0c != 0) {
        return n->unk_0c;
    }
    for (TreeNode *p = n->unk_00; p != 0; p = p->unk_00) {
        if (p->unk_0c != 0) {
            return p->unk_0c;
        }
    }
    return 0;
}


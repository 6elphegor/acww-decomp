// mwcc-flags: -nothumb -O4,p
// G001a: in-house ARM helpers of the game, autoload_2 0x020e7500-0x020e8558. mwcc 1.2/base, C++, ARM, -O4,p.
// Approach helpers (step a value towards a target), intrusive list / tree nodes, atan2, LCG random, touch panel
// and key sampling, 4x3 matrix helpers. No class with a vtable in this range.
#include "types.h"

struct ListNode {
    ListNode *prev;
    ListNode *next;
};
struct List {
    ListNode *head;
    ListNode *tail;
};
struct TreeNode {
    TreeNode *parent;
    TreeNode *child;
    TreeNode *prev;
    TreeNode *next;
};
struct Tree {
    TreeNode *root;
};
struct VecFx32 {
    s32 x, y, z;
};
struct MtxFx43 {
    s32 m[4][3];
};
struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
};
struct TPCalibrateParam {
    s16 x0, xDotSize, y0, yDotSize;
};
struct PadState {
    u16 cur;
    u16 trig;
    s16 dir;
};

extern "C" {
s32 func_02133150(s32, s32); // _s32_div_f (called by the compiler for the s16 division)
s32 func_01ffc5a4(s32, s32); // FX_Div
s32 func_01ffc854(const VecFx32 *v); // VEC_Mag
void func_01ffca8c(const VecFx32 *a, const VecFx32 *b, VecFx32 *dst); // VEC_Add
void func_01ffb87c(MtxFx43 *m, s32 sin, s32 cos); // MTX_RotX43_ (Thumb)
void func_01ffb860(MtxFx43 *m, s32 sin, s32 cos); // MTX_RotY43_ (Thumb)
void func_01ffb840(MtxFx43 *m, s32 sin, s32 cos); // MTX_RotZ43_ (Thumb)
void func_01ffb828(MtxFx43 *m, s32 x, s32 y, s32 z); // MTX_Scale43_ (Thumb)
void func_01ffb94c(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab); // MTX_Concat43
void func_020e9960(VecFx32 *out, const VecFx32 *a, const VecFx32 *b); // out = a - b
s32 func_020e9688(const VecFx32 *v); // length in the XZ plane
void func_020e9888(VecFx32 *v, s32 s); // scale
u16 func_0211ba58(void); // TP_GetLatestIndexInAuto
void func_0211b6b8(TPData *dst, const TPData *src); // TP_GetCalibratedPoint
void func_0211bed0(void); // TP_Init
BOOL func_0211be24(TPCalibrateParam *p); // TP_GetUserInfo
void func_0211bcdc(const TPCalibrateParam *p); // TP_SetCalibrateParam
void func_0211ba68(u32, u32);
void func_0211b6a0(u32); // TP_WaitBusy
u32 func_0211b68c(u32); // TP_CheckError
void func_0211bbc8(u32, u32, TPData *, u32); // TP_RequestAutoSamplingStartAsync
void func_0206d49c(void); // Thumb, in main: fatal stop

extern u16 data_0213a748[]; // atan table (.data of autoload_2)
extern const s16 data_02135914[]; // direction (angle) by D-pad bits, const s16[16] at the start of .rodata
extern const s16 data_02135f44[]; // FX_SinCosTable_
extern s32 data_021f4768;
extern s32 data_021f476c;
extern u8 data_021f4770; // touch state of the previous frame
extern u8 data_021f4774; // touch edge
extern u16 data_021f4778; // touch x
extern u16 data_021f477c; // touch y
extern TPData data_021f4780;
extern TPData data_021f4788[9]; // auto-sampling buffer
extern u8 data_021f47d0;
extern u16 data_021f47d4; // keys of the previous frame
extern PadState data_021f47d8;

BOOL func_020e7930(List *list, ListNode *node);
void func_020e7b68(TreeNode *n);
u32 func_020e7fa8(u32 *seed);
void func_020e82bc(MtxFx43 *m, s32 angle);
void func_020e8300(MtxFx43 *m, s32 angle);
void func_020e8344(MtxFx43 *m, s32 angle);
void func_020e8388(MtxFx43 *m, s32 x, s32 y, s32 z);
}

// FX_Mul of the SDK
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

// PAD_Read / PAD_DetectFold of the SDK (REG_KEYINPUT 0x04000130, shared work X/Y/fold word 0x027fffa8)
static inline u16 PAD_Read(void) {
    return (u16)(((*(vu16 *)0x04000130 | *(vu16 *)0x027fffa8) ^ 0x2fff) & 0x2fff);
}
static inline BOOL PAD_DetectFold(void) {
    return (*(vu16 *)0x027fffa8 & 0x8000) >> 15;
}

#define FX_SinIdx(a) data_02135f44[((a) >> 4) * 2]
#define FX_CosIdx(a) data_02135f44[((a) >> 4) * 2 + 1]

extern "C" void func_020e8528(MtxFx43 *m, s32 x, s32 y, s32 z) {
    MtxFx43 t;
    func_020e8388(&t, x, y, z);
    func_01ffb94c(&t, m, m);
}

extern "C" void func_020e84f8(MtxFx43 *m, s32 x, s32 y, s32 z) {
    MtxFx43 t;
    func_01ffb828(&t, x, y, z);
    func_01ffb94c(&t, m, m);
}

extern "C" void func_020e8464(MtxFx43 *m, s32 z, s32 y, s32 x) {
    MtxFx43 t;
    if (x != 0) {
        func_020e82bc(&t, x);
        func_01ffb94c(&t, m, m);
    }
    if (y != 0) {
        func_020e8300(&t, y);
        func_01ffb94c(&t, m, m);
    }
    if (z != 0) {
        func_020e8344(&t, z);
        func_01ffb94c(&t, m, m);
    }
}

extern "C" void func_020e8434(MtxFx43 *m, s32 angle) {
    MtxFx43 t;
    func_020e8344(&t, angle);
    func_01ffb94c(&t, m, m);
}

extern "C" void func_020e8404(MtxFx43 *m, s32 angle) {
    MtxFx43 t;
    func_020e8300(&t, angle);
    func_01ffb94c(&t, m, m);
}

extern "C" void func_020e83d4(MtxFx43 *m, s32 angle) {
    MtxFx43 t;
    func_020e82bc(&t, angle);
    func_01ffb94c(&t, m, m);
}

extern "C" void func_020e8388(MtxFx43 *m, s32 x, s32 y, s32 z) {
    m->m[0][0] = 0x1000;
    m->m[0][1] = 0;
    m->m[0][2] = 0;
    m->m[1][0] = 0;
    m->m[1][1] = 0x1000;
    m->m[1][2] = 0;
    m->m[2][0] = 0;
    m->m[2][1] = 0;
    m->m[2][2] = 0x1000;
    m->m[3][0] = x;
    m->m[3][1] = y;
    m->m[3][2] = z;
}

extern "C" void func_020e8344(MtxFx43 *m, s32 angle) {
    func_01ffb840(m, FX_SinIdx((u16)angle), FX_CosIdx((u16)angle));
}

extern "C" void func_020e8300(MtxFx43 *m, s32 angle) {
    func_01ffb860(m, FX_SinIdx((u16)angle), FX_CosIdx((u16)angle));
}

extern "C" void func_020e82bc(MtxFx43 *m, s32 angle) {
    func_01ffb87c(m, FX_SinIdx((u16)angle), FX_CosIdx((u16)angle));
}

extern "C" void func_020e82b8(void) {
}

extern "C" void func_020e8208(void) {
    u32 keys;

    if (PAD_DetectFold()) {
        keys = 0;
    } else {
        keys = PAD_Read();
    }
    data_021f47d0 = 0;
    data_021f47d8.trig = keys & (keys ^ data_021f47d4);
    data_021f47d4 = keys;
    data_021f47d8.cur = keys;
    data_021f47d8.dir = data_02135914[(keys & 0xf0) >> 4];
}

extern "C" void func_020e814c(void) {
    TPCalibrateParam calib;

    func_0211bed0();
    func_0211be24(&calib);
    func_0211bcdc(&calib);
    func_0211ba68(3, 30);
    func_0211b6a0(8);
    if (func_0211b68c(8) != 0) func_0206d49c();
    func_0211bbc8(0, 4, data_021f4788, 9);
    func_0211b6a0(2);
    if (func_0211b68c(2) != 0) func_0206d49c();
    data_021f4770 = 0;
    data_021f4774 = 0;
    data_021f4778 = 0xff;
    data_021f477c = 0xff;
}

extern "C" void func_020e7fd4(void) {
    TPData buf[4];
    s32 idx;
    s32 i;
    BOOL touched;

    idx = func_0211ba58();
    touched = FALSE;
    for (i = 0; i < 4; i++) {
        s32 j = idx - 4 + i;
        if (j < 0) j += 9;
        if (data_021f4788[j].touch != 0) touched = TRUE;
        if (data_021f4788[j].validity != 0) {
            buf[i].touch = 0;
        } else {
            buf[i] = data_021f4788[j];
        }
    }
    if (buf[3].touch != 0 && buf[2].touch != 0 && buf[1].touch != 0) {
        func_0211b6b8(&data_021f4780, &buf[2]);
    } else if (buf[0].touch != 0 && buf[1].touch != 0 && buf[2].touch != 0) {
        func_0211b6b8(&data_021f4780, &buf[1]);
    } else if (!touched) {
        data_021f4780.touch = 0;
        data_021f4780.x = 0xff;
        data_021f4780.y = 0xff;
        data_021f4780.validity = 0;
    }
    data_021f4774 = data_021f4780.touch ^ data_021f4770;
    data_021f4770 = data_021f4780.touch;
    data_021f4778 = data_021f4780.x;
    data_021f477c = data_021f4780.y;
}

extern "C" void func_020e7fcc(u32 *seed, u32 v) {
    *seed = v;
}

extern "C" u32 func_020e7fa8(u32 *seed) {
    *seed = *seed * 0x0019660d + 0x3c6ef35f;
    return *seed;
}

extern "C" u32 func_020e7f90(u32 *seed, u32 n) {
    return (u32)(((u64)n * func_020e7fa8(seed)) >> 32);
}

extern "C" s32 func_020e7e6c(VecFx32 *p, VecFx32 *target, s32 ratio, s32 max, s32 min) {
    VecFx32 d;
    s32 len;
    s32 step;

    if (p->x == target->x && p->z == target->z) return 0;
    func_020e9960(&d, target, p);
    len = func_01ffc854(&d);
    if (len < min) {
        *p = *target;
        return 0;
    }
    step = FX_Mul(len, ratio);
    if (step == 0) {
        *p = *target;
        return 0;
    }
    if (step > max) {
        step = max;
    } else if (step < min) {
        step = min;
    }
    func_020e9888(&d, func_01ffc5a4(step, len));
    func_01ffca8c(p, &d, p);
    return len - step;
}

extern "C" s32 func_020e7d4c(VecFx32 *p, VecFx32 *target, s32 ratio, s32 max, s32 min) {
    VecFx32 d;
    s32 len;
    s32 step;

    if (p->x == target->x && p->z == target->z) return 0;
    func_020e9960(&d, target, p);
    len = func_020e9688(&d);
    if (len < min) {
        p->x = target->x;
        p->z = target->z;
        return 0;
    }
    step = FX_Mul(len, ratio);
    if (step == 0) {
        p->x = target->x;
        p->z = target->z;
        return 0;
    }
    if (step > max) {
        step = max;
    } else if (step < min) {
        step = min;
    }
    func_020e9888(&d, func_01ffc5a4(step, len));
    p->x += d.x;
    p->z += d.z;
    return len - step;
}

extern "C" void func_020e7d2c(void) {
    data_021f4768 = 0;
    data_021f476c = 0;
}

extern "C" s16 func_020e7b98(s32 x, s32 y) {
    s32 r;
    if (x == 0) {
        r = y >= 0 ? 0 : 0x8000;
    } else if (y == 0) {
        r = x >= 0 ? 0x4000 : 0xc000;
    } else if (x >= 0) {
        if (y >= 0) {
            if (y >= x) {
                r = data_0213a748[func_01ffc5a4(x, y) >> 2];
            } else {
                r = 0x4000 - data_0213a748[func_01ffc5a4(y, x) >> 2];
            }
        } else {
            y = -y;
            if (y < x) {
                r = data_0213a748[func_01ffc5a4(y, x) >> 2] + 0x4000;
            } else {
                r = 0x8000 - data_0213a748[func_01ffc5a4(x, y) >> 2];
            }
        }
    } else {
        if (y < 0) {
            if (y <= x) {
                r = data_0213a748[func_01ffc5a4(-x, -y) >> 2] + 0x8000;
            } else {
                r = 0xc000 - data_0213a748[func_01ffc5a4(-y, -x) >> 2];
            }
        } else {
            x = -x;
            if (y < x) {
                r = data_0213a748[func_01ffc5a4(y, x) >> 2] + 0xc000;
            } else {
                r = -data_0213a748[func_01ffc5a4(x, y) >> 2];
            }
        }
    }
    return r;
}

extern "C" TreeNode *func_020e7b80(TreeNode *n) {
    func_020e7b68(n);
    return n;
}

extern "C" void func_020e7b68(TreeNode *n) {
    n->parent = NULL;
    n->child = NULL;
    n->prev = NULL;
    n->next = NULL;
}

extern "C" BOOL func_020e7af4(Tree *tree, TreeNode *node, TreeNode *parent) {
    if (node != NULL) {
        if (parent != NULL) {
            TreeNode *c;
            node->parent = parent;
            c = parent->child;
            if (c == NULL) {
                parent->child = node;
            } else {
                while (c->next != NULL) c = c->next;
                c->next = node;
                node->prev = c;
            }
        } else {
            if (tree->root != NULL) return FALSE;
            tree->root = node;
        }
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_020e7a7c(Tree *tree, TreeNode *node) {
    if (node != NULL) {
        if (node->child != NULL) return FALSE;
        if (node->prev != NULL) {
            node->prev->next = node->next;
        } else if (node->parent != NULL) {
            node->parent->child = node->next;
        } else {
            tree->root = NULL;
        }
        if (node->next != NULL) {
            node->next->prev = node->prev;
        }
        node->prev = NULL;
        node->next = NULL;
        node->parent = NULL;
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_020e7a10(List *list, ListNode *node, ListNode *after) {
    if (after == NULL) {
        return func_020e7930(list, node);
    }
    if (node != NULL) {
        node->next = after->next;
        node->prev = after;
        after->next = node;
        if (node->next != NULL) {
            node->next->prev = node;
        } else {
            list->tail = node;
        }
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_020e79a0(List *list, ListNode *node) {
    if (node != NULL) {
        if (node->prev != NULL) {
            node->prev->next = node->next;
        } else if (node == list->head) {
            list->head = node->next;
        }
        if (node->next != NULL) {
            node->next->prev = node->prev;
        } else if (node == list->tail) {
            list->tail = node->prev;
        }
        node->prev = NULL;
        node->next = NULL;
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_020e7968(List *list, ListNode *node) {
    if (node != NULL) {
        if (list->tail != NULL) {
            list->tail->next = node;
            node->prev = list->tail;
        } else {
            list->head = node;
        }
        list->tail = node;
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_020e7930(List *list, ListNode *node) {
    if (node != NULL) {
        if (list->head != NULL) {
            list->head->prev = node;
            node->next = list->head;
        } else {
            list->tail = node;
        }
        list->head = node;
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" s32 func_020e7870(s32 *p, s32 target, s32 ratio, s32 max, s32 min) {
    s32 cur = *p;
    s32 d;
    if (cur != target) {
        d = FX_Mul(target - cur, ratio);
        if (d >= min || d <= -min) {
            if (d > max) d = max;
            if (d < -max) d = -max;
            *p += d;
        } else if (d > 0) {
            if (d < min) {
                *p = cur + min;
                if (*p > target) *p = target;
            }
        } else {
            s32 n = -min;
            if (d > n) {
                *p = cur + n;
                if (*p < target) *p = target;
            }
        }
    }
    d = target - *p;
    return d < 0 ? -d : d;
}

extern "C" void func_020e7820(s32 *p, s32 target, s32 ratio, s32 max) {
    s32 d;
    if (*p == target) return;
    d = FX_Mul(target - *p, ratio);
    if (d > max) {
        d = max;
    } else if (d < -max) {
        d = -max;
    }
    *p += d;
}

extern "C" s32 func_020e780c(s32 a, s32 b) {
    s16 d = a - b;
    return d < 0 ? -d : d;
}

extern "C" BOOL func_020e77cc(s32 v, s32 a, s32 b) {
    if (a < b) {
        BOOL r = FALSE;
        do {
            if (v < a) break;
            if (v <= b) r = TRUE;
        } while (0);
        return r;
    } else {
        BOOL r = FALSE;
        do {
            if (v < b) break;
            if (v <= a) r = TRUE;
        } while (0);
        return r;
    }
}

extern "C" void func_020e7754(s16 *p, s16 target, s16 div, s16 max) {
    s16 d = (s16)(target - *p) / div;
    if (d > max) {
        *p += max;
        return;
    }
    if (d < -max) {
        *p -= max;
    } else {
        *p += d;
    }
}

extern "C" BOOL func_020e76f8(u8 *p, s16 target, s16 step) {
    if (step != 0) {
        s16 v;
        if (*p > target) step = -step;
        v = *p + step;
        if (step * (v - target) >= 0) {
            *p = target;
            return TRUE;
        }
        *p = v;
    } else if (*p == target) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020e769c(s16 *p, s16 target, s16 step) {
    if (step != 0) {
        if (*p > target) step = -step;
        *p += step;
        if (step * (*p - target) >= 0) {
            *p = target;
            return TRUE;
        }
    } else if (*p == target) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020e761c(s32 *p, s32 target, s32 step) {
    if (step != 0) {
        if (*p > target) step = -step;
        *p += step;
        if ((s64)step * (*p - target) >= 0) {
            *p = target;
            return TRUE;
        }
    } else if (*p == target) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020e759c(s32 *p, s32 target, s32 step) {
    if (step != 0) {
        if (*p > target) step = -step;
        *p += step;
        if ((s64)step * (*p - target) >= 0) {
            *p = target;
            return TRUE;
        }
    } else if (*p == target) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020e7530(s16 *p, s16 target, s16 step) {
    if (step != 0) {
        if ((s16)(*p - target) > 0) step = -step;
        *p += step;
        if (step * (s16)(*p - target) >= 0) {
            *p = target;
            return TRUE;
        }
    } else if (*p == target) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 func_020e7518(u8 *p) {
    if (*p != 0) (*p)--;
    return *p;
}

extern "C" u16 func_020e7500(u16 *p) {
    if (*p != 0) (*p)--;
    return *p;
}


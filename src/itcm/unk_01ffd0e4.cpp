// mwcc-flags: -nothumb -O4,p
// I004d: itcm 0x01ffd0e4-0x01ffd50c (10 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: nothing but the functions is defined.
// Two wrappers that call the pointer-to-member dispatcher ProcBase_RunPhase with the ptmf constants stored in .text at
// 0x01ffd0b4-0x01ffd0e4 (data_01ffd0b4.. are extern here, the unit ends before them), a scene-object update step
// (func_01ffd1b4), six members of the library base class ProcBase (symbols.txt names are C++-mangled;
// defined as extern "C" functions that carry the mangled identifier verbatim and take the object first) and the dispatcher.
#include "types.h"
#include "sys/TreeNode.h"
#include "sys/QNode.h"
#include "sys/ProcBase.h"

class Heap;
class ProcBase;



struct FlagView {
    u8 pad_00[0x13];
    u8 procFlags;
};



typedef BOOL (ProcBase::*PmfBool)();
typedef void (ProcBase::*PmfStatus)(s32);

extern "C" {
// pointer-to-member constants inside .text (0x01ffd0b4-0x01ffd0e4): {vtable offset, 1}
extern PmfStatus data_01ffd0b4;
extern PmfBool data_01ffd0bc;
extern PmfBool data_01ffd0c4;
extern PmfBool data_01ffd0cc;
extern PmfBool data_01ffd0d4;
extern PmfStatus data_01ffd0dc;
extern u32 gTaskPhase;
extern QList gTaskExecuteList, gTaskCreateList, gTaskDrawList, gTaskDeleteList;

void func_020e7968(QList *l, QNode *n);
void func_020e79a0(QList *l, QNode *n);
void func_020e7930(QList *l, QNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
void ProcBase_RequestDelete(ProcBase *p);
ProcBase *ProcBase_GetParent(ProcBase *p);
s32 ProcBase_RunPhase(ProcBase *p, PmfBool a, PmfBool b, PmfStatus c);
}

static inline BOOL isOne(u32 v) {
    return v == 1;
}

static inline BOOL isTwo(u32 v) {
    return v == 2;
}

static inline BOOL testBit(u8 *p, u32 m) {
    return (*p & m) != 0;
}

static inline BOOL changed(QNode *q) {
    return q->pendingPriority != q->priority;
}

extern "C" s32 ProcBase_RunPhase(ProcBase *p, PmfBool a, PmfBool b, PmfStatus c) {
    BOOL r = (p->*b)();
    s32 status;
    if (r != 0) {
        r = (p->*a)();
        if (r == -1) {
            status = 3;
        } else if (r == 1) {
            status = 2;
        } else {
            status = 1;
        }
    } else {
        status = 0;
    }
    (p->*c)(status);
    return r;
}

extern "C" BOOL _ZN8ProcBase9onExecuteEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase10preExecuteEv(ProcBase *self) {
    if (self->deletePending != 0 || (self->procFlags & 2) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase8vfunc_20Ev(ProcBase *self) {
}

extern "C" BOOL _ZN8ProcBase6onDrawEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase7preDrawEv(ProcBase *self) {
    if (self->deletePending != 0 || (self->procFlags & 8) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase8postDrawEv(ProcBase *self) {
}

extern "C" BOOL func_01ffd1b4(ProcBase *self) {
    if (self->deletePending != 0) {
        self->deletePending = 0;
        if (isOne(self->state)) {
            func_020e79a0(&gTaskExecuteList, &self->executeNode);
            func_020e79a0(&gTaskDrawList, &self->drawNode);
        } else {
            func_020e79a0(&gTaskCreateList, &self->executeNode);
        }
        func_020e7930(&gTaskDeleteList, &self->executeNode);
        self->state = 2;
        for (TreeNode *c = self->treeNode.child; c != NULL; c = c->next) {
            ProcBase_RequestDelete(c->owner);
        }
    } else {
        ProcBase *parent = ProcBase_GetParent(self);
        if (parent != NULL) {
            if ((parent->procFlags & 1) != 0 || (parent->procFlags & 2) != 0) {
                self->procFlags |= 2;
            } else if (*(const u8 *)&self->procFlags & 2) {
                self->procFlags &= ~2;
            }
            if ((parent->procFlags & 4) != 0 || (parent->procFlags & 8) != 0) {
                self->procFlags |= 8;
            } else if (*(const u8 *)&self->procFlags & 8) {
                self->procFlags &= ~8;
            }
        }
        if (isOne(self->state)) {
            QNode *q = &self->executeNode;
            if (changed(q)) {
                func_020e79a0(&gTaskExecuteList, &self->executeNode);
                q = &self->executeNode;
                q->priority = q->pendingPriority;
                Task_InsertByPriority(&gTaskExecuteList, q);
            }
            q = &self->drawNode;
            if (changed(q)) {
                func_020e79a0(&gTaskDrawList, &self->drawNode);
                q = &self->drawNode;
                q->priority = q->pendingPriority;
                Task_InsertByPriority(&gTaskDrawList, q);
            }
        } else if (!isTwo(self->state)) {
            if (self->createRetry != 0) {
                self->createRetry = 0;
                func_020e7968(&gTaskCreateList, &self->executeNode);
            } else if (self->activatePending != 0) {
                self->activatePending = 0;
                Task_InsertByPriority(&gTaskExecuteList, &self->executeNode);
                Task_InsertByPriority(&gTaskDrawList, &self->drawNode);
                self->state = 1;
            }
        }
    }
    return TRUE;
}

extern "C" s32 func_01ffd14c(ProcBase *p) {
    return ProcBase_RunPhase(p, data_01ffd0cc, data_01ffd0d4, data_01ffd0b4);
}

extern "C" s32 func_01ffd0e4(ProcBase *p) {
    return ProcBase_RunPhase(p, data_01ffd0bc, data_01ffd0c4, data_01ffd0dc);
}


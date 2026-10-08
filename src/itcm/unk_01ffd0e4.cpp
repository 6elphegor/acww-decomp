// mwcc-flags: -nothumb -O4,p
// I004d: itcm 0x01ffd0e4-0x01ffd50c (10 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: nothing but the functions is defined.
// Two wrappers that call the pointer-to-member dispatcher ProcBase_RunPhase with the ptmf constants stored in .text at
// 0x01ffd0b4-0x01ffd0e4 (data_01ffd0b4.. are extern here, the unit ends before them), a scene-object update step
// (ProcBase::taskConnect), six members of the library base class ProcBase (symbols.txt names are C++-mangled;
// defined as extern "C" functions that carry the mangled identifier verbatim and take the object first) and the dispatcher.
#include "types.h"
#include "sys/TreeNode.h"
#include "sys/QNode.h"
#include "sys/ProcBase.h"
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/itcm/unk_01ffd0e4.h"

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

void List_PushBack(QList *l, QNode *n);
void List_Remove(QList *l, QNode *n);
void List_PushFront(QList *l, QNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
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

BOOL ProcBase::onExecute() {
    return TRUE;
}

BOOL ProcBase::preExecute() {
    if (deletePending != 0 || (procFlags & 2) != 0) {
        return FALSE;
    }
    return TRUE;
}

// The post hooks are empty (`bx lr`; the DS returned the object pointer still in r0). Their result is never used: the
// phase dispatcher calls them through a void member pointer and the overrides only pass the base's result on. They keep
// the symbol names without parameters (_ZN8ProcBase11postExecuteEv, _ZN8ProcBase8postDrawEv) that the ROM's vtable
// (gap data) and modern/gen/provides.ld refer to, so they stay extern "C" functions with these names.
extern "C" BOOL _ZN8ProcBase11postExecuteEv(ProcBase *self) {
    return TRUE;
}

BOOL ProcBase::onDraw() {
    return TRUE;
}

BOOL ProcBase::preDraw() {
    if (deletePending != 0 || (procFlags & 8) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase8postDrawEv(ProcBase *self) {
    return TRUE;
}

void ProcBase::taskConnect() {
    if (deletePending != 0) {
        deletePending = 0;
        if (isOne(state)) {
            List_Remove(&gTaskExecuteList, &executeNode);
            List_Remove(&gTaskDrawList, &drawNode);
        } else {
            List_Remove(&gTaskCreateList, &executeNode);
        }
        List_PushFront(&gTaskDeleteList, &executeNode);
        state = 2;
        for (TreeNode *c = treeNode.child; c != NULL; c = c->next) {
            ProcBase_RequestDelete(c->owner);
        }
    } else {
        ProcBase *parent = ProcBase_GetParent(this);
        if (parent != NULL) {
            if ((parent->procFlags & 1) != 0 || (parent->procFlags & 2) != 0) {
                procFlags |= 2;
            } else if (procFlags & 2) {
                procFlags &= ~2;
            }
            if ((parent->procFlags & 4) != 0 || (parent->procFlags & 8) != 0) {
                procFlags |= 8;
            } else if (procFlags & 8) {
                procFlags &= ~8;
            }
        }
        if (isOne(state)) {
            QNode *q = &executeNode;
            if (changed(q)) {
                List_Remove(&gTaskExecuteList, &executeNode);
                q = &executeNode;
                q->priority = q->pendingPriority;
                Task_InsertByPriority(&gTaskExecuteList, q);
            }
            q = &drawNode;
            if (changed(q)) {
                List_Remove(&gTaskDrawList, &drawNode);
                q = &drawNode;
                q->priority = q->pendingPriority;
                Task_InsertByPriority(&gTaskDrawList, q);
            }
        } else if (!isTwo(state)) {
            if (createRetry != 0) {
                createRetry = 0;
                List_PushBack(&gTaskCreateList, &executeNode);
            } else if (activatePending != 0) {
                activatePending = 0;
                Task_InsertByPriority(&gTaskExecuteList, &executeNode);
                Task_InsertByPriority(&gTaskDrawList, &drawNode);
                state = 1;
            }
        }
    }
}

// the execute phase: onExecute / preExecute / postExecute (the member pointers in .text)
void ProcBase::taskExecute() {
    ProcBase_RunPhase(this, data_01ffd0cc, data_01ffd0d4, data_01ffd0b4);
}

// the draw phase: onDraw / preDraw / postDraw
void ProcBase::taskDraw() {
    ProcBase_RunPhase(this, data_01ffd0bc, data_01ffd0c4, data_01ffd0dc);
}


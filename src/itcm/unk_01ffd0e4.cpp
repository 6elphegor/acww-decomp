// mwcc-flags: -nothumb -O4,p
// I004d: itcm 0x01ffd0e4-0x01ffd50c (10 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: nothing but the functions is defined.
// Two wrappers that call the pointer-to-member dispatcher ProcBase_RunPhase with member-function pointers (constants in
// .text at 0x01ffd0b4-0x01ffd0e4 on the DS; the compiler's here), a scene-object update step (ProcBase::taskConnect),
// six members of the library base class ProcBase and the dispatcher.
#include "types.h"
#include "sys/TreeNode.h"
#include "sys/QNode.h"
#include "sys/ProcBase.h"
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/itcm/unk_01ffd0e4.h"

extern "C" {
extern u32 gTaskPhase;
extern QList gTaskExecuteList, gTaskCreateList, gTaskDrawList, gTaskDeleteList;

void List_PushBack(QList *l, QNode *n);
void List_Remove(QList *l, QNode *n);
void List_PushFront(QList *l, QNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
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

extern "C" s32 ProcBase_RunPhase(ProcBase *p, ProcPhaseFn a, ProcPhaseFn b, ProcPhasePostFn c) {
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
// phase dispatcher calls them through a void member pointer and the overrides only pass the base's result on.
BOOL ProcBase::postExecute(u32) {
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

BOOL ProcBase::postDraw(s32) {
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

// the execute phase: onExecute / preExecute / postExecute
void ProcBase::taskExecute() {
    ProcBase_RunPhase(this, &ProcBase::onExecute, &ProcBase::preExecute,
                      reinterpret_cast<ProcPhasePostFn>(&ProcBase::postExecute));
}

// the draw phase: onDraw / preDraw / postDraw
void ProcBase::taskDraw() {
    ProcBase_RunPhase(this, &ProcBase::onDraw, &ProcBase::preDraw,
                      reinterpret_cast<ProcPhasePostFn>(&ProcBase::postDraw));
}


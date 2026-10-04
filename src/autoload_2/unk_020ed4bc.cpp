// mwcc-flags: -nothumb -O4,p
// RC_020ed4bc: autoload_2 0x020ed4bc-0x020ed7e4 (10 functions) + .rodata 0x02135964-0x0213597c + .data 0x0213b1a4-0x0213b200
// + bss 0x021f5994-0x021f59e4 (autoload_3) + main .init 0x020c5fa4-0x020c6080 / .ctor 0x020d1f4c-0x020d1f50 (its __sinit).
// mwcc 1.2/base, C++, ARM, -O4,p. REAL-CLASS shape: the task manager ("LoopProc").
// Five task lists, one per phase (CONNECT, CREATE, EXECUTE, DRAW, DELETE), each holding a pointer to a member function of the
// library base class ProcBase that the phase runner calls on every object of the list. The lists are file-scope objects
// with a constructor taking the member pointer: mwcc builds them in the __sinit (main .init 0x020c5fa4) from the member-pointer
// constants it emits in .data (0x0213b1c8-0x0213b1f4), in DEFINITION order CONNECT, CREATE, EXECUTE, DRAW, DELETE (the __sinit's
// store order). The member functions are in ITCM (func_01ffd1b4 / 01ffd14c / 01ffd0e4) and in the ProcBase file
// (func_020ecb78 / 020ecaf4): aliases.txt gives them their C++ names.
// File extent: the .data run 0x0213b1a4-0x0213b200 (phase word, then the 8-byte strings and member-pointer constants; the
// ProcBase vtable before it ends the previous file, the 4-byte gSndPanTrackMask after it starts the next) and the bss run
// 0x021f5994-0x021f59e4 (next-node pointer, the 12-byte CONNECT list, the four 16-byte lists; gProfileTable starts the next file).
// The text starts at 0x020ed4bc (the previous file ends with ProcBase's C2 at 0x020ed378) and stops before 0x020ed7e4:
// 0x020ed7e4 / 0x020ed81c / 0x020ed8cc are the command-sequence object (Unk_Seq), one class whose last method lies in the next
// unit (unk_020ed8cc.cpp); whether Unk_Seq ends this file or starts the next one is not decided by any data, so it is left out.
#include "types.h"
#include "sys/TaskList.h"
#include "sys/ProcBase.h"
#include "sys/ListNode.h"

typedef void (ProcBase::*TaskFn)();



// second view of a priority node (the inserted node's key is read through it inside the loop)
struct PrioNodeB { void *a, *b, *c; u16 priority; };





extern "C" {
void *func_01ffcffc(void *);
BOOL List_PushBack(List *list, ListNode *node);
BOOL List_InsertAfter(List *list, ListNode *node, ListNode *after);
void Task_RunDrawPhase(void);
void Task_RunAllPhases(void);

extern QNode *gTaskCurrentNode;
extern s32 gTaskPhase;
extern char data_0213b1a8[];
extern char data_0213b1b0[];
extern char data_0213b1b8[];
extern char data_0213b1c0[];
extern char data_0213b1d8[];
extern char data_0213b1f8[];
extern const char *const sTaskPhaseNames[];
extern TaskTree gProcTree;
extern TaskList gTaskExecuteList;
extern TaskList gTaskCreateList;
extern TaskList gTaskDrawList;
extern TaskList gTaskDeleteList;
}

// File-scope objects. Their DEFINITION order is the original's creation order, which fixes both the __sinit (the five lists in the
// order CONNECT, CREATE, EXECUTE, DRAW, DELETE; each list's member-pointer constant is created right before it) and the size-sorted
// .data / .bss / .rodata order (mwcc heapsorts a file's objects by size over the reverse creation order; solved with
// realclass2_work/task/srch2.py on the model of linkprep.py, which reproduces this compiler's order exactly). Keep the order.
// the node to visit next (a callback may delete its own node)
QNode *gTaskCurrentNode;
// the phase being run: 0 NULL, 1 CONNECT, 2 CREATE, 3 EXECUTE, 4 DELETE, 5 DRAW
s32 gTaskPhase = 1;
char data_0213b1b0[] = "NULL";
char data_0213b1f8[] = "CONNECT";
char data_0213b1c0[] = "CREATE";
char data_0213b1a8[] = "DRAW";
// phase names, indexed by the phase number
const char *const sTaskPhaseNames[] = {data_0213b1b0, data_0213b1f8, data_0213b1c0, data_0213b1d8, data_0213b1b8, data_0213b1a8};
char data_0213b1d8[] = "EXECUTE";
TaskTree gProcTree(&ProcBase::taskConnect);
TaskList gTaskCreateList(&ProcBase::taskCreate);
TaskList gTaskExecuteList(&ProcBase::taskExecute);
TaskList gTaskDrawList(&ProcBase::taskDraw);
TaskList gTaskDeleteList(&ProcBase::taskDelete);
char data_0213b1b8[] = "DELETE";

BOOL TaskTree::run() {
    TreeNode *n;
    if (fn == 0) return TRUE;
    n = head;
    while (n != NULL) {
        TreeNode *cur = n;
        n = (TreeNode *)func_01ffcffc(cur);
        (cur->owner->*fn)();
    }
    return TRUE;
}

extern "C" const char *Task_GetPhaseName(u32 a) {
    return sTaskPhaseNames[a];
}

extern "C" void Task_RunAllPhases(void) {
    gTaskPhase = 4;
    gTaskDeleteList.run();
    gTaskPhase = 2;
    gTaskCreateList.run();
    gTaskPhase = 3;
    gTaskExecuteList.run();
    gTaskPhase = 5;
    gTaskDrawList.run();
    gTaskPhase = 1;
    gProcTree.run();
    gTaskPhase = 0;
}

extern "C" void Task_RunDrawPhase(void) {
    gTaskPhase = 5;
    gTaskDrawList.run();
    gTaskPhase = 0;
}

extern "C" void Task_RunFrame(s32 v) {
    if (v != 0) {
        Task_RunDrawPhase();
    } else {
        Task_RunAllPhases();
    }
}

extern "C" BOOL Task_InsertByPriority(List *list, QNode *node) {
    QNode *prev = (QNode *)list->head;
    QNode *next;
    if (node == NULL) return FALSE;
    if (prev == NULL) return List_PushBack(list, (ListNode *)node);
    if (prev->priority > node->priority) return List_InsertAfter(list, (ListNode *)node, NULL);
    while ((next = prev->next) != NULL && next->priority <= ((PrioNodeB *)node)->priority) prev = next;
    return List_InsertAfter(list, (ListNode *)node, (ListNode *)prev);
}

BOOL TaskList::run() {
    QNode *n;
    if (fn == 0) return TRUE;
    n = head;
    gTaskCurrentNode = n;
    if (n != NULL) {
        do {
            QNode *next = n->next;
            (n->owner->*fn)();
            gTaskCurrentNode = next;
            n = next;
        } while (n != NULL);
    }
    return TRUE;
}

extern "C" void *ProcList_FindById(QList *list, u32 id) {
    QNode *n = list->head;
    while (n != NULL) {
        BOOL ne = (n->owner->id != id);
        if (ne == 0) return n;
        n = n->next;
    }
    return NULL;
}

extern "C" void *ProcList_FindByProfile(QList *list, u32 id, QNode *p) {
    QNode *n;
    if (p != NULL) {
        n = p->next;
    } else {
        n = list->head;
    }
    while (n != NULL) {
        BOOL ne = (n->owner->profile != id);
        if (ne == 0) return n;
        n = n->next;
    }
    return NULL;
}

// mwcc-flags: -nothumb -O4,p
// G004a: autoload_2 0x020ed4bc-0x020ed5c0 (3 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined,
// every function is extern "C" under its symbols.txt name. Task manager ("LoopProc"): find a task node by id (two key
// fields) in a linked list, and the phase runner that walks one task list and calls the node object's pointer-to-member
// callback (data_021f5994 holds the node to visit next, so a callback may delete its own node).
#include "types.h"

struct NodeInfo {
    u8 pad0[4];
    u32 unk_04;
    u8 pad1[4];
    u16 unk_0c;
};
struct InfoNode {
    InfoNode *unk_00;
    InfoNode *unk_04;
    NodeInfo *unk_08;
};
struct InfoList {
    InfoNode *head;
};

class Unk_Task {
public:
    virtual void vfunc_00();
};
typedef void (Unk_Task::*TaskFn)();

struct TaskNode {
    TaskNode *unk_00;
    TaskNode *unk_04;
    Unk_Task *unk_08;
};
struct TaskList {
    TaskNode *unk_00;
    u32 unk_04;
    TaskFn unk_08;
};

extern "C" {
extern TaskNode *data_021f5994;

}

// PROTOS-BEGIN
extern "C" {
}

extern "C" BOOL func_020ed54c(TaskList *l) {
    TaskNode *n;
    if (l->unk_08 == 0) return TRUE;
    n = l->unk_00;
    data_021f5994 = n;
    if (n != NULL) {
        do {
            TaskNode *next = n->unk_04;
            (n->unk_08->*l->unk_08)();
            data_021f5994 = next;
            n = next;
        } while (n != NULL);
    }
    return TRUE;
}

extern "C" void *func_020ed508(InfoList *list, u32 id) {
    InfoNode *n = list->head;
    while (n != NULL) {
        BOOL ne = (n->unk_08->unk_04 != id);
        if (ne == 0) return n;
        n = n->unk_04;
    }
    return NULL;
}

// PROTOS-END

extern "C" void *func_020ed4bc(InfoList *list, u32 id, InfoNode *p) {
    InfoNode *n;
    if (p != NULL) {
        n = p->unk_04;
    } else {
        n = list->head;
    }
    while (n != NULL) {
        BOOL ne = (n->unk_08->unk_0c != id);
        if (ne == 0) return n;
        n = n->unk_04;
    }
    return NULL;
}


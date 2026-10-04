#ifndef SYS_TASKLIST_H
#define SYS_TASKLIST_H

#include "types.h"

// Task manager ("LoopProc") phase lists: each list holds a pointer to a ProcBase member function that the phase runner
// calls on every node. Defined in src/autoload_2/unk_020ed4bc.cpp (gTask*List, gProcTree, TaskList::run, TaskTree::run).
class ProcBase;
typedef void (ProcBase::*TaskFn)();

struct TaskNode {
    /* 0x00 */ TaskNode *unk_00;
    /* 0x04 */ TaskNode *unk_04;
    /* 0x08 */ ProcBase *unk_08;
};

// a phase's task list (EXECUTE, CREATE, DRAW, DELETE)
class TaskList {
public:
    TaskList(TaskFn f) : head(0), tail(0), fn(f) {}
    BOOL run();                       // 0x020ed54c

    /* 0x00 */ TaskNode *head;
    /* 0x04 */ u32 tail;
    /* 0x08 */ TaskFn fn;
};

struct TaskNode10 {
    /* 0x00 */ u8 pad[0x10];
    /* 0x10 */ ProcBase *unk_10;
};

// the CONNECT list (another node layout, no tail)
class TaskTree {
public:
    TaskTree(TaskFn f) : head(0), fn(f) {}
    BOOL run();                       // 0x020ed764

    /* 0x00 */ TaskNode10 *head;
    /* 0x04 */ TaskFn fn;
};
typedef TaskTree TaskList4;

#endif

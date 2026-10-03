// mwcc-flags: -nothumb -O4,p
// RC_020ed4bc: autoload_2 0x020ed4bc-0x020ed7e4 (10 functions) + .rodata 0x02135964-0x0213597c + .data 0x0213b1a4-0x0213b200
// + bss 0x021f5994-0x021f59e4 (autoload_3) + main .init 0x020c5fa4-0x020c6080 / .ctor 0x020d1f4c-0x020d1f50 (its __sinit).
// mwcc 1.2/base, C++, ARM, -O4,p. REAL-CLASS shape (pipeline_wip/realclass_work/PLAN.md #7): the task manager ("LoopProc").
// Five task lists, one per phase (CONNECT, CREATE, EXECUTE, DRAW, DELETE), each holding a pointer to a member function of the
// library base class Unk_020d8c7c_Base that the phase runner calls on every object of the list. The lists are file-scope objects
// with a constructor taking the member pointer: mwcc builds them in the __sinit (main .init 0x020c5fa4) from the member-pointer
// constants it emits in .data (0x0213b1c8-0x0213b1f4), in DEFINITION order CONNECT, CREATE, EXECUTE, DRAW, DELETE (the __sinit's
// store order). The member functions are in ITCM (func_01ffd1b4 / 01ffd14c / 01ffd0e4) and in the Unk_020d8c7c_Base file
// (func_020ecb78 / 020ecaf4): aliases.txt gives them their C++ names.
// File extent: the .data run 0x0213b1a4-0x0213b200 (phase word, then the 8-byte strings and member-pointer constants; the
// Unk_020d8c7c_Base vtable before it ends the previous file, the 4-byte data_0213b200 after it starts the next) and the bss run
// 0x021f5994-0x021f59e4 (next-node pointer, the 12-byte CONNECT list, the four 16-byte lists; data_021f59e4 starts the next file).
// The text starts at 0x020ed4bc (the previous file ends with Unk_020d8c7c_Base's C2 at 0x020ed378) and stops before 0x020ed7e4:
// 0x020ed7e4 / 0x020ed81c / 0x020ed8cc are the command-sequence object (Unk_Seq), one class whose last method lies in the next
// unit (unk_020ed8cc.cpp); whether Unk_Seq ends this file or starts the next one is not decided by any data, so it is left out.
#include "types.h"

// library base class (include/Unk_020d8c7c.h) plus the five task callbacks (non-virtual members, not in the header yet)
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();

    void taskConnect();  // itcm func_01ffd1b4
    void taskExecute();  // itcm func_01ffd14c
    void taskDraw();     // itcm func_01ffd0e4
    void taskCreate();   // func_020ecb78
    void taskDelete();   // func_020ecaf4
};
typedef void (Unk_020d8c7c_Base::*TaskFn)();

struct ListNode {
    ListNode *prev;
    ListNode *next;
};
struct List {
    ListNode *head;
    ListNode *tail;
};

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

struct PrioNode {
    PrioNode *unk_00;
    PrioNode *unk_04;
    void *unk_08;
    u16 unk_0c;
};
// second view of a priority node (the inserted node's key is read through it inside the loop)
struct PrioNodeB { void *a, *b, *c; u16 unk_0c; };

struct TaskNode {
    TaskNode *unk_00;
    TaskNode *unk_04;
    Unk_020d8c7c_Base *unk_08;
};

// a phase's task list (EXECUTE, CREATE, DRAW, DELETE)
class TaskList {
public:
    TaskList(TaskFn f) : head(0), count(0), fn(f) {}
    BOOL run();                       // 0x020ed54c

    /* 0x00 */ TaskNode *head;
    /* 0x04 */ u32 count;
    /* 0x08 */ TaskFn fn;
};

struct TaskNode10 {
    u8 pad[0x10];
    Unk_020d8c7c_Base *unk_10;
};

// the CONNECT list (another node layout, no count)
class TaskList0 {
public:
    TaskList0(TaskFn f) : head(0), fn(f) {}
    BOOL run();                       // 0x020ed764

    /* 0x00 */ TaskNode10 *head;
    /* 0x04 */ TaskFn fn;
};

extern "C" {
void *func_01ffcffc(void *);
BOOL func_020e7968(List *list, ListNode *node);
BOOL func_020e7a10(List *list, ListNode *node, ListNode *after);
void func_020ed67c(void);
void func_020ed6b8(void);

extern TaskNode *data_021f5994;
extern s32 data_0213b1a4;
extern char data_0213b1a8[];
extern char data_0213b1b0[];
extern char data_0213b1b8[];
extern char data_0213b1c0[];
extern char data_0213b1d8[];
extern char data_0213b1f8[];
extern const char *const data_02135964[];
extern TaskList0 data_021f5998;
extern TaskList data_021f59a4;
extern TaskList data_021f59b4;
extern TaskList data_021f59c4;
extern TaskList data_021f59d4;
}

// File-scope objects. Their DEFINITION order is the original's creation order, which fixes both the __sinit (the five lists in the
// order CONNECT, CREATE, EXECUTE, DRAW, DELETE; each list's member-pointer constant is created right before it) and the size-sorted
// .data / .bss / .rodata order (mwcc heapsorts a file's objects by size over the reverse creation order; solved with
// realclass2_work/task/srch2.py on the model of linkprep.py, which reproduces this compiler's order exactly). Keep the order.
// the node to visit next (a callback may delete its own node)
TaskNode *data_021f5994;
// the phase being run: 0 NULL, 1 CONNECT, 2 CREATE, 3 EXECUTE, 4 DELETE, 5 DRAW
s32 data_0213b1a4 = 1;
char data_0213b1b0[] = "NULL";
char data_0213b1f8[] = "CONNECT";
char data_0213b1c0[] = "CREATE";
char data_0213b1a8[] = "DRAW";
// phase names, indexed by the phase number
const char *const data_02135964[] = {data_0213b1b0, data_0213b1f8, data_0213b1c0, data_0213b1d8, data_0213b1b8, data_0213b1a8};
char data_0213b1d8[] = "EXECUTE";
TaskList0 data_021f5998(&Unk_020d8c7c_Base::taskConnect);
TaskList data_021f59b4(&Unk_020d8c7c_Base::taskCreate);
TaskList data_021f59a4(&Unk_020d8c7c_Base::taskExecute);
TaskList data_021f59c4(&Unk_020d8c7c_Base::taskDraw);
TaskList data_021f59d4(&Unk_020d8c7c_Base::taskDelete);
char data_0213b1b8[] = "DELETE";

BOOL TaskList0::run() {
    TaskNode10 *n;
    if (fn == 0) return TRUE;
    n = head;
    while (n != NULL) {
        TaskNode10 *cur = n;
        n = (TaskNode10 *)func_01ffcffc(cur);
        (cur->unk_10->*fn)();
    }
    return TRUE;
}

extern "C" const char *func_020ed754(u32 a) {
    return data_02135964[a];
}

extern "C" void func_020ed6b8(void) {
    data_0213b1a4 = 4;
    data_021f59d4.run();
    data_0213b1a4 = 2;
    data_021f59b4.run();
    data_0213b1a4 = 3;
    data_021f59a4.run();
    data_0213b1a4 = 5;
    data_021f59c4.run();
    data_0213b1a4 = 1;
    data_021f5998.run();
    data_0213b1a4 = 0;
}

extern "C" void func_020ed67c(void) {
    data_0213b1a4 = 5;
    data_021f59c4.run();
    data_0213b1a4 = 0;
}

extern "C" void func_020ed64c(s32 v) {
    if (v != 0) {
        func_020ed67c();
    } else {
        func_020ed6b8();
    }
}

extern "C" BOOL func_020ed5c0(List *list, PrioNode *node) {
    PrioNode *prev = (PrioNode *)list->head;
    PrioNode *next;
    if (node == NULL) return FALSE;
    if (prev == NULL) return func_020e7968(list, (ListNode *)node);
    if (prev->unk_0c > node->unk_0c) return func_020e7a10(list, (ListNode *)node, NULL);
    while ((next = prev->unk_04) != NULL && next->unk_0c <= ((PrioNodeB *)node)->unk_0c) prev = next;
    return func_020e7a10(list, (ListNode *)node, (ListNode *)prev);
}

BOOL TaskList::run() {
    TaskNode *n;
    if (fn == 0) return TRUE;
    n = head;
    data_021f5994 = n;
    if (n != NULL) {
        do {
            TaskNode *next = n->unk_04;
            (n->unk_08->*fn)();
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

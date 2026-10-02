// mwcc-flags: -nothumb -O4,p
// G004b: autoload_2 0x020ed64c-0x020ed81c (6 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined,
// every function is extern "C" under its symbols.txt name. Task manager ("LoopProc"): run the phases (data_0213b1a4 holds
// the running phase number 0 NULL, 1 CONNECT, 2 CREATE, 3 EXECUTE, 4 DELETE, 5 DRAW; one task list each, the phase names
// are the string table data_02135964), then the step function of a command-sequence object (Unk_Seq, below).
#include "types.h"

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
struct TaskNode10 {
    u8 pad[0x10];
    Unk_Task *unk_10;
};
struct TaskList4 {
    TaskNode10 *unk_00;
    TaskFn unk_04;
};
struct TaskList {
    TaskNode *unk_00;
    u32 unk_04;
    TaskFn unk_08;
};

class Unk_Seq {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual s32 vfunc_08(void *p);
    virtual void vfunc_0c(void *p);

    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ void **unk_08;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ s16 unk_12;
};

extern "C" {
extern s32 data_0213b1a4;
extern TaskList data_021f59c4;
extern TaskList data_021f59d4;
extern TaskList data_021f59b4;
extern TaskList data_021f59a4;
extern TaskList4 data_021f5998;
extern const char *const data_02135964[];
void *func_01ffcffc(void *);

}
extern "C" {
BOOL func_020ed54c(TaskList *l);
s16 func_020ed81c(Unk_Seq *o, s32 loop);
}

// PROTOS-BEGIN
extern "C" {
void func_020ed67c(void);
void func_020ed6b8(void);
BOOL func_020ed764(TaskList4 *l);
}

extern "C" BOOL func_020ed7e4(Unk_Seq *o) {
    if (o->unk_04 == 1) {
        o->unk_04 = func_020ed81c(o, 0);
    }
    if (o->unk_04 == 1) return FALSE;
    return TRUE;
}

extern "C" BOOL func_020ed764(TaskList4 *l) {
    TaskNode10 *n;
    if (l->unk_04 == 0) return TRUE;
    n = l->unk_00;
    while (n != NULL) {
        TaskNode10 *cur = n;
        n = (TaskNode10 *)func_01ffcffc(cur);
        (cur->unk_10->*l->unk_04)();
    }
    return TRUE;
}

extern "C" const char *func_020ed754(u32 a) {
    return data_02135964[a];
}

extern "C" void func_020ed6b8(void) {
    data_0213b1a4 = 4;
    func_020ed54c(&data_021f59d4);
    data_0213b1a4 = 2;
    func_020ed54c(&data_021f59b4);
    data_0213b1a4 = 3;
    func_020ed54c(&data_021f59a4);
    data_0213b1a4 = 5;
    func_020ed54c(&data_021f59c4);
    data_0213b1a4 = 1;
    func_020ed764(&data_021f5998);
    data_0213b1a4 = 0;
}

extern "C" void func_020ed67c(void) {
    data_0213b1a4 = 5;
    func_020ed54c(&data_021f59c4);
    data_0213b1a4 = 0;
}

// PROTOS-END

extern "C" void func_020ed64c(s32 v) {
    if (v != 0) {
        func_020ed67c();
    } else {
        func_020ed6b8();
    }
}


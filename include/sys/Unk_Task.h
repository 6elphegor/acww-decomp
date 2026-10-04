#ifndef SYS_UNK_TASK_H
#define SYS_UNK_TASK_H

#include "types.h"

// Opaque polymorphic task object the task lists call through pointers to member functions (TaskFn).
// Only declared; used by src/autoload_2/unk_020ed81c.cpp, unk_020edd58.cpp, unk_020ee98c.cpp.
class Unk_Task {
public:
    virtual void vfunc_00();
};

#endif // SYS_UNK_TASK_H

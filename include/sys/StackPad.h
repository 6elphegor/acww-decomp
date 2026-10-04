#ifndef SYS_STACKPAD_H
#define SYS_STACKPAD_H

#include "types.h"

// Dummy locals with an empty inline constructor and destructor that a few functions declare and never touch: they
// only reserve stack space (frame layout) in the original code. One type per size.
struct StackPad4 {
    /* 0x00 */ s32 v[1];
    StackPad4() {}
    ~StackPad4() {}
};

struct StackPad8 {
    /* 0x00 */ s32 v[2];
    StackPad8() {}
    ~StackPad8() {}
};

#endif // SYS_STACKPAD_H

// mwcc-flags: -nothumb -O4,p
// RC_020ed7e4 (companion of RC_020ed4bc): autoload_2 0x020ed7e4-0x020ed81c (1 function), code unchanged from G004b
// (src/autoload_2/unk_020ed64c.cpp). PARTIAL: the step function of the command-sequence object Unk_Seq, whose other methods are
// func_020ed81c (unk_020ed81c.cpp) and func_020ed8cc (unk_020ed8cc.cpp); extern "C" under its symbols.txt name, nothing defined
// but the function. Needed only because RC_020ed4bc (the task manager) ends at 0x020ed7e4 and replaces unk_020ed64c.cpp.
#include "types.h"

class Unk_Seq {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual s32 vfunc_08(void *p);
    virtual void vfunc_0c(void *p);

    /* 0x04 */ s16 state;
    /* 0x06 */ s16 cmdIndex;
    /* 0x08 */ void **cmds;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ s16 unk_12;
};

extern "C" {
s16 func_020ed81c(Unk_Seq *o, s32 loop);
}

extern "C" BOOL func_020ed7e4(Unk_Seq *o) {
    if (o->state == 1) {
        o->state = func_020ed81c(o, 0);
    }
    if (o->state == 1) return FALSE;
    return TRUE;
}

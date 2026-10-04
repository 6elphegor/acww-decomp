#ifndef SYS_UNK_SEQ_H
#define SYS_UNK_SEQ_H

#include "types.h"

// Command-sequence object: runs a list of commands (cmds) through its virtuals. Its non-virtual helpers are
// CmdSeq_Run (src/autoload_2/unk_020ed81c.cpp), CmdSeq_Poll (unk_020ed7e4.cpp) and CmdSeq_Undo (unk_020ed8cc.cpp).
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

#endif // SYS_UNK_SEQ_H

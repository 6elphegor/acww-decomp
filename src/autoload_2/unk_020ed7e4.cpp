// mwcc-flags: -nothumb -O4,p
// RC_020ed7e4 (companion of RC_020ed4bc): autoload_2 0x020ed7e4-0x020ed81c (1 function), code unchanged from G004b
// (src/autoload_2/unk_020ed64c.cpp). PARTIAL: the step function of the command-sequence object CmdSeq, whose other methods are
// CmdSeq_Run (unk_020ed81c.cpp) and CmdSeq_Undo (unk_020ed8cc.cpp); extern "C" under its symbols.txt name, nothing defined
// but the function. Needed only because RC_020ed4bc (the task manager) ends at 0x020ed7e4 and replaces unk_020ed64c.cpp.
#include "types.h"
#include "sys/CmdSeq.h"


extern "C" {
s16 CmdSeq_Run(CmdSeq *o, s32 loop);
}

extern "C" BOOL CmdSeq_Poll(CmdSeq *o) {
    if (o->state == 1) {
        o->state = CmdSeq_Run(o, 0);
    }
    if (o->state == 1) return FALSE;
    return TRUE;
}

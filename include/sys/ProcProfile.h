#ifndef SYS_PROCPROFILE_H
#define SYS_PROCPROFILE_H

#include "types.h"

// 8-byte process profile (the s<Name>Profile data objects of GameProc-based processes; gProfileTable entries): factory
// and execute/draw priorities. Proc_Create (src/autoload_2/unk_020ec848.cpp) calls the factory, ProcBase_StartCreate
// reads the priorities. The 0x18-byte actor profile (actor/ActorProfile.h) starts with the same three fields.
struct ProcProfile {
    /* 0x00 */ void *(*create)();
    /* 0x04 */ u16 executePriority;
    /* 0x06 */ u16 drawPriority;
};

#endif

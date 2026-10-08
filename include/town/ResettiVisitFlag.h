#ifndef TOWN_RESETTIVISITFLAG_H
#define TOWN_RESETTIVISITFLAG_H

#include "types.h"

// Mr. Resetti's pending visit (TownSessionState+0x30). Defined in src/main/unk_02085940.cpp.
class ResettiVisitFlag {
public:
    void set(u32 v);
    BOOL isSet();
    void clear();
    void destruct();
    void construct();

    u8 isPending;
};

#endif

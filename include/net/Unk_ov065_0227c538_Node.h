#ifndef NET_UNK_OV065_0227C538_NODE_H
#define NET_UNK_OV065_0227C538_NODE_H

#include "types.h"
#include "net/GsGpProfile.h"
#include "net/GsGpCallbackPair.h"

// Mixed GsGpProfile / GsGpOperation view (the same pointer is used as a profile in GsGp_ClearProfileCb and as an
// operation in the connection loop) still used by src/ov065/unk_ov065_0227c6f0.cpp and unk_ov065_0227bd20.cpp; the N06
// units use GsGpProfile / GsGpOperation instead. Also a two-word point.

struct Unk_ov065_0227c538_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ GsGpBuddyStatusInfo *unk_08;
    /* 0x0c */ s32 infoCache;
    /* 0x10 */ char *authSig;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 result;
    /* 0x20 */ Unk_ov065_0227c538_Node *next;
};

struct Unk_ov065_0227c564_Z {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
};

#endif

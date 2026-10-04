#ifndef NET_UNK_OV065_0227F324_REC_H
#define NET_UNK_OV065_0227F324_REC_H

#include "types.h"

// GP profile info cache record, its 0xf0-byte copy view and the owning profile
// (src/ov065/unk_ov065_0227e160.cpp, src/ov065/unk_ov065_0227f2a4.cpp).

struct Unk_ov065_0227f324_Rec {
    /* 0x00 */ char *stringFields[6];
    /* 0x18 */ u8 pad_18[0xc8 - 0x18];
    /* 0xc8 */ char *aimName;
    /* 0xcc */ u8 pad_cc[0xf0 - 0xcc];
};

struct Unk_ov065_0227f324_Copy {
    /* 0x00 */ s64 v[30];
};

struct Unk_ov065_0227f324_Owner {
    /* 0x0 */ u8 pad_00[0xc];
    /* 0xc */ Unk_ov065_0227f324_Rec *infoCache;
};

#endif

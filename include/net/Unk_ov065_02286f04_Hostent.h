#ifndef NET_UNK_OV065_02286F04_HOSTENT_H
#define NET_UNK_OV065_02286F04_HOSTENT_H

#include "types.h"

// hostent (ov065_063); used by unk_ov065_02285778.cpp and unk_ov065_02286934.cpp.

struct Unk_ov065_02286f04_Hostent {
    /* 0x00 */ char *name;
    /* 0x04 */ char **aliases;
    /* 0x08 */ s16 addrtype;
    /* 0x0a */ s16 length;
    /* 0x0c */ u32 **addr_list;
};

#endif

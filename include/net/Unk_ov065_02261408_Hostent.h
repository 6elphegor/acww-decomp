#ifndef NET_UNK_OV065_02261408_HOSTENT_H
#define NET_UNK_OV065_02261408_HOSTENT_H

#include "types.h"

// hostent-style result of Sock_GetHostByName (sHostent, src/ov065/unk_ov065_0225fdf0.cpp).

struct Unk_ov065_02261408_Hostent {
    /* 0x0 */ char *hostName;
    /* 0x4 */ char **aliases;
    /* 0x8 */ s16 addrType;
    /* 0xa */ s16 addrLength;
    /* 0xc */ char **addrList;
};

#endif

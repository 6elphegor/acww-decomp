#ifndef NET_UNK_OV065_02288538_CIPHER_H
#define NET_UNK_OV065_02288538_CIPHER_H

#include "types.h"

// RC4-like stream cipher state (ov065_066 GameSpy transport); used by unk_ov065_02288510.cpp and
// unk_ov065_02288c78.cpp.

struct Unk_ov065_02288538_Cipher {
    /* 0x00 */ u8 s[0x100];
    /* 0x100 */ u8 i;
    /* 0x101 */ u8 j;
    /* 0x102 */ u8 k;
    /* 0x103 */ u8 l;
    /* 0x104 */ u8 m;
};

#endif

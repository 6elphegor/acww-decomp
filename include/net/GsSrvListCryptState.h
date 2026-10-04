#ifndef NET_GSSRVLISTCRYPTSTATE_H
#define NET_GSSRVLISTCRYPTSTATE_H

#include "types.h"

// Stream cipher state of the GameSpy master server list (GsSrvListCrypt_*: 256-byte permutation and index bytes,
// keyed by the list challenge and the secret key); used by unk_ov065_02288510.cpp and unk_ov065_02288c78.cpp.

struct GsSrvListCryptState {
    /* 0x00 */ u8 s[0x100];
    /* 0x100 */ u8 i;
    /* 0x101 */ u8 j;
    /* 0x102 */ u8 k;
    /* 0x103 */ u8 l;
    /* 0x104 */ u8 m;
};

#endif

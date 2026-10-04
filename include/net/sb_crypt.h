#ifndef NET_SB_CRYPT_H
#define NET_SB_CRYPT_H

#include "types.h"

// GameSpy serverbrowsing sb_crypt.h GOACryptState: stream cipher of the master server list (256-byte card
// permutation and index bytes, keyed by the list challenge and the secret key); used by unk_ov065_02288510.cpp
// and unk_ov065_02288c78.cpp.

struct GOACryptState {
    /* 0x00 */ u8 cards[0x100];
    /* 0x100 */ u8 rotor;
    /* 0x101 */ u8 ratchet;
    /* 0x102 */ u8 avalanche;
    /* 0x103 */ u8 last_plain;
    /* 0x104 */ u8 last_cipher;
};

#endif

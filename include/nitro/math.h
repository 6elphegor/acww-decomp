#ifndef NITRO_MATH_H
#define NITRO_MATH_H

#include "types.h"

// NitroSDK math/rand.h: state of the 64-bit linear congruential generator behind MATH_InitRand32 / MATH_Rand32
// (x = x * mul + add with mul 0x5d588b656c078965, add 0x269ec3; the result is the high word). Name and fields as in
// pret pokeheartgold (include/unk_02037C94.h).
// The ov065 IP stack's sIpRandState (net/IpStackConfig.h IpRandState and its signed views) has this layout and these
// constants. It folds into this type once ov065 is free (GameSpy rename batches).
typedef struct MATHRandContext32 {
    /* 0x00 */ u64 x;
    /* 0x08 */ u64 mul;
    /* 0x10 */ u64 add;
} MATHRandContext32;

#endif

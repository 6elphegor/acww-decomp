#ifndef PLAYER_UNK_0205DFA4_H
#define PLAYER_UNK_0205DFA4_H

#include "types.h"
#include "player/Unk_0205dfa4_Base.h"

// Held-item model (HeldItemModel_GetModel): an opaque 0x9c-byte base followed by the animation-frame counter.
// Used in src/main/unk_02004558.cpp (+ _extra.cpp) and src/main/unk_020119cc.cpp, which named the two bases
// Unk_0205dfa4_Base / Unk_0205dfa4_Sub (same layouts, kept as typedefs).

struct Unk_0205dfa4 : Unk_0205dfa4_Base, Unk_0205dfa4_Sub {
};


#endif

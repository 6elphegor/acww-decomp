#ifndef SAVE_ENCODEDNAME8_H
#define SAVE_ENCODEDNAME8_H

#include "types.h"

// Fixed-size encoded-text buffers copied as whole structs: EncodedName8 (town / player name, 8 chars; player id
// record Unk_020942c8) and EncodedTitle16 (design title, 16 chars; PatternInfo.title). Used by src/main/unk_02070560.cpp.

struct EncodedTitle16 {
    u8 b[16];
};

struct EncodedName8 {
    u8 b[8];
};

#endif

#include "types.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "talk/EncodedStringBase.h"
#include "talk/MsgString.h"
#include "talk/EncodedString.h"
#include "talk/EncodedString8.h"
#include "proto/main/unk_02093f8c.h"

extern "C" const s32 data_020d03cc;
extern "C" const s32 data_020d03d0;
extern "C" const s32 data_020d03d4;

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

EncodedString8::EncodedString8() {}

EncodedString8::~EncodedString8() {}

u32 EncodedString8::capacity() { return 8; }

void EncodedString8::copyTo(void *dst, u32 n) { MI_CpuCopy8(text, dst, n); }

u8 *EncodedString8::data() { return text; }

// Declarations for data defined further down (definition order sets the data layout)
extern const s32 data_020d03d4;
extern const s32 data_020d03d0;
extern const s32 data_020d03cc;

const s32 data_020d03d4 = 0x7ffc;

const s32 data_020d03d0 = 0x7fff;

// Constants shared with other files (loaded through their addresses; defined after the code here, where a visible const would be folded).
// Owned here by position: it lies between the data of the neighbouring files in link order and fits this file's
// size order (linkprep check); the original file is this one or another file between those neighbours.
const s32 data_020d03cc = 0x7ffd;

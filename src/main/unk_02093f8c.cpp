#include "uptr.h"
#include "types.h"
#include "gfx/VecFx32.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "save/TownId.h"
#include "talk/EncodedStringBase.h"
#include "player/PlayerId.h"
#include "gfx/EffectSlot.h"
#include "gfx/EffectSplEmitter.h"
#include "talk/MsgString.h"
#include "game/GroundInfo.h"
#include "talk/EncodedString.h"
#include "talk/MsgString9B.h"
#include "talk/EncodedString8.h"
#include "proto/autoload_2/unk_020e92f4.h"
#include "proto/autoload_2/unk_02128030.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_0208f268.h"
#include "proto/main/unk_02090268.h"
#include "proto/main/unk_02093ff0.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02097444.h"

extern "C" const s32 data_020d03cc;
extern "C" const s32 data_020d03d0;
extern "C" const s32 data_020d03d4;

extern "C" {
extern EffectSlot gEffectManager[];
}

extern "C" {
extern EffectScratchSlot data_021d0830;
}

extern "C" {
extern VecFx32 gVec3Zero;
}

extern "C" {
extern uptr sEffectDefaultTrackedCbs[];
}

extern "C" {
extern uptr sEffectDefaultOneShotCbs[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 func_02090424(void *, s32, s32);
}

extern "C" {
s32 func_020904f0(void *, s32, s32, s32, s32, s32, s32);
}

extern "C" {
s32 func_02090538(void *);
}

extern "C" {
}

extern "C" {
}

extern "C" {
void VEC_Add(void *, void *, void *);
}

extern "C" {
s32 MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
s32 MI_CpuFill8(void *dst, u32 v, u32 n);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

 // extern "C"

// ---------------------------------------------------------------------------------------------------------------------
// Message buffers (see unk_0206c714.cpp for the bases)

class MsgString;

extern "C" BOOL EncodedString_SetRaw(void *, const void *, s32);

// ---------------------------------------------------------------------------------------------------------------------
// Record with a 10-byte header (id + 8 bytes), a u16 at +0xa, 8 bytes at +0xc and an s8 at +0x14

extern "C" {
extern TownId gSaveTownId;
}

extern "C" {
extern u8 gSavePlayers[];
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 func_02002cf8(u32, u32, u32, u32, u32);
}

extern "C" {
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 FieldPos_ToUnit(s32 *, s32 *, void *);
}

extern "C" {
s32 Area_PlaceItem(s32, s32, s32, s32, s32);
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

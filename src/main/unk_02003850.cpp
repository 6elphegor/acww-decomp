#include "types.h"
#include "snd/TvSound.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/main/unk_02003850.h"

// The TV sound objects: TvSound's derived classes (TvSoundProgram0..10, TvSoundWeather: src/autoload_2/unk_020f5b9c.cpp,
// unk_020f6850.cpp) are built here by their inline constructors (the base's vtable, then the class's). Their members
// follow the base's (from its tail at 0xd on the DS), so an object's size is its DS size with the base's growth:
// 0x10 -> 0x18, 0x18 -> 0x20 on 64-bit hosts.
#define TVSOUND_SIZE(dsSize) \
    ((((dsSize) - 0x10 + sizeof(TvSound)) + __alignof__(TvSound) - 1) & ~(__alignof__(TvSound) - 1))

struct TvSoundVtableView {
    const void *vtable;
};
extern const u32 data_0213bac4[];  // TvSound's vtable (its address point)
extern const u32 data_0213b9e4[];
extern const u32 data_0213ba04[];
extern const u32 data_0213ba24[];
extern const u32 data_0213ba44[];
extern const u32 data_0213bb64[];
extern const u32 data_0213ba64[];
extern const u32 data_0213bae4[];
extern const u32 data_0213bb04[];
extern const u32 data_0213bb24[];
extern const u32 data_0213ba84[];
extern const u32 data_0213bb44[];
extern const u32 data_0213baa4[];

extern const u32 sTvSoundSizes[12];
const u32 sTvSoundSizes[12] = {
    TVSOUND_SIZE(0x10), TVSOUND_SIZE(0x10), TVSOUND_SIZE(0x10), TVSOUND_SIZE(0x10), TVSOUND_SIZE(0x14), TVSOUND_SIZE(0x10),
    TVSOUND_SIZE(0x10), TVSOUND_SIZE(0x18), TVSOUND_SIZE(0x14), TVSOUND_SIZE(0x10), TVSOUND_SIZE(0x14), TVSOUND_SIZE(0x10),
};

#define MK(sz, vt) { TvSoundVtableView *o = (TvSoundVtableView *)Heap_Alloc(heap, TVSOUND_SIZE(sz)); if (o) { o->vtable = data_0213bac4; o->vtable = vt; } return (TvSound *)o; }

extern "C" TvSound *TvSound_Create(Heap *heap, s32 type) {
    switch (type) {
    case 0: MK(0x10, data_0213b9e4)
    case 1: MK(0x10, data_0213ba04)
    case 2: MK(0x10, data_0213ba24)
    case 3: MK(0x10, data_0213ba44)
    case 4: MK(0x14, data_0213bb64)
    case 5: MK(0x10, data_0213ba64)
    case 6: MK(0x10, data_0213bae4)
    case 7: MK(0x18, data_0213bb04)
    case 8: MK(0x14, data_0213bb24)
    case 9: MK(0x10, data_0213ba84)
    case 10: MK(0x14, data_0213bb44)
    case 0xff: MK(0x10, data_0213baa4)
    default: MK(0x10, data_0213b9e4)
    }
}

extern "C" u32 TvSound_GetMaxSize() {
    u32 m = 0;
    for (const u32 *p = sTvSoundSizes; p < sTvSoundSizes + 12; p++) {
        if (*p > m) {
            m = *p;
        }
    }
    return (m + 3) & ~3;
}

#include "types.h"

extern "C" {
void *Heap_Alloc(u32 heap, u32 size);
}

class TvSound {
public:
    virtual void reset();
    virtual void release();
    virtual void vfunc_08(s32 a, void *b);
    virtual void turnOn(s32 a);
    virtual void turnOff();
};

struct Unk_02003878_Obj {
    void *unk_00;
};
extern u32 data_0213bac4[];
extern u32 data_0213b9e4[];
extern u32 data_0213ba04[];
extern u32 data_0213ba24[];
extern u32 data_0213ba44[];
extern u32 data_0213bb64[];
extern u32 data_0213ba64[];
extern u32 data_0213bae4[];
extern u32 data_0213bb04[];
extern u32 data_0213bb24[];
extern u32 data_0213ba84[];
extern u32 data_0213bb44[];
extern u32 data_0213baa4[];

extern u32 data_020c6190[];
extern const u32 sTvSoundSizes[];
const u32 sTvSoundSizes[] = {0x10, 0x10, 0x10, 0x10, 0x14, 0x10, 0x10, 0x18, 0x14, 0x10, 0x14, 0x10};

#define MK(sz, vt) { Unk_02003878_Obj *o = (Unk_02003878_Obj *)Heap_Alloc(heap, sz); if (o) { o->unk_00 = data_0213bac4; o->unk_00 = vt; } return (TvSound *)o; }

extern "C" TvSound *TvSound_Create(u32 heap, s32 type) {
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
    for (const u32 *p = sTvSoundSizes; p < (const u32 *)data_020c6190; p++) {
        if (*p > m) {
            m = *p;
        }
    }
    return (m + 3) & ~3;
}

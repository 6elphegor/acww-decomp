#include "types.h"
#include "town/Unk_0204e858_Grid.h"
#include "sys/OverlaySlot.h"
#include "town/MapBlockEntry.h"

inline void *operator new(unsigned long, void *p) {
    return p;
}






OverlaySlot sOverlaySlots[12];

static inline TownBlockCell *Unk_0204e858_GetCell(Unk_0204e858_Grid *g, u32 x, u32 y) {
    if (x < g->width && y < g->height && g->blocks != NULL) {
        return &g->blocks[y * g->width + x];
    }
    return NULL;
}

static inline BOOL Unk_0204e8b0_Bit(u16 *m, u32 x, u32 y) {
    BOOL r = FALSE;
    if (x >= 16 || y >= 16) {
    } else {
        r = TRUE;
    }
    if (r) {
        if (x < 16) {
            u32 v = m[y];
            r = TRUE;
            if ((v & (r << x)) != 0) {
                return r;
            }
        }
        r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

namespace Unk_0204eba0_Ns {
extern "C" u16 *BlockMap_GetItemPtr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
}

namespace Unk_0204eee4_Ns {
extern "C" s32 OverlayMgr_UnloadSlot(OverlaySlot *e);
}

extern "C" {
void FieldPos_ToBlockUnit2(s32 *a, s32 *c, Unk_0204e858_Vec *v);
}

extern "C" {
void FieldPos_ToBlockUnit(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v);
}

extern "C" {
void FieldUnit_FromBlockUnit(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
void FieldPos_FromUnitCenter(Unk_0204e858_Vec *v, s32 x, s32 z);
}

extern "C" {
BOOL FishTable_IsLateMonth(u8 v);
}

extern "C" {
void *Heap_AllocTail(void *heap, u32 size);
}

extern "C" {
void Fatal_Trap();
}

extern "C" {
void OverlayMgr_UnloadSlot(OverlaySlot *e);
}

extern "C" {
void OverlayMgr_LoadSlot(OverlaySlot *e, u32 id);
}

extern "C" {
void OverlayMgr_UnloadOverlay(u32 id);
}

extern "C" {
void OverlayMgr_LoadOverlay(u32 id);
}

extern "C" {
void OverlayMgr_GetInfo(void *p, u32 id);
}

extern "C" {
void File_UnloadOverlay(u32 id);
}

extern "C" {
void File_LoadOverlay(u32 id);
}

extern "C" {
void *FS_LoadOverlayInfo(void *p, s32 v, u32 n);
}

extern "C" {
void FS_GetOverlayFileID(void *a, void *b);
}

extern "C" {
s32 MapBlock_ClearBuried(TownBlockCell *c, s32 a, s32 b);
}

extern "C" {
s32 MapBlock_SetBuried(TownBlockCell *c, s32 a, s32 b);
}

extern "C" {
s32 MapBlock_HasAnyAttr(TownBlockCell *c, s32 a);
}

extern "C" {
s32 MapBlock_HasAllAttr(TownBlockCell *c, s32 a);
}

extern "C" {
s32 MapBlock_GetAttr(TownBlockCell *c);
}

extern "C" {
s32 MapBlock_FindItemInRange(TownBlockCell *c, s32 a, s32 b, s32 d, s32 e, s32 f);
}

extern "C" {
s32 MapBlock_GetItemPtr(TownBlockCell *c, s32 a, s32 b, u8 d);
}

extern "C" {
void *MapBlock_SetItem(TownBlockCell *c, s32 a, s32 b, s32 d, u8 e);
}

extern "C" {
void Clock_GetDayMonth(void *p);
}

extern "C" {
void Clock_GetMinuteHour(void *p);
}

extern "C" {
u8 FishTable_GetPeriod(u8 r);
}

extern "C" {
u32 FishTable_GetHourSlot(u32 r);
}

extern "C" {
void FishTable_Pick(void *a, void *b, s32 c, u32 d, u32 e);
}

extern "C" {
s32 BlockMap_IsBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
}

extern "C" {
s32 BlockMap_ClearBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
}

extern "C" {
s32 BlockMap_SetBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
}

extern "C" {
void *BlockMap_SetItem(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d);
}
// prototypes
extern "C" u32 FishTable_GetHourSlot(u32 r);
extern "C" BOOL FishTable_IsLateMonth(u8 v);
extern "C" u8 FishTable_GetPeriod(u8 x);
extern "C" s32 Fish_GetWaterKind(s32 r);
extern "C" void OverlayMgr_GetInfo(void *p, u32 id);
extern "C" void OverlayMgr_LoadOverlay(u32 id);
extern "C" void OverlayMgr_UnloadOverlay(u32 id);
extern "C" void OverlayMgr_LoadSlot(OverlaySlot *e, u32 id);
extern "C" void OverlayMgr_UnloadSlot(OverlaySlot *e);
extern "C" void OverlayMgr_Acquire(u32 id);
extern "C" void OverlayMgr_Release(u32 id);
extern "C" void OverlayMgr_Init();


extern "C" u32 FishTable_GetHourSlot(u32 r) {
    u32 v = 0;
    if ((r >= 4 && r < 9) || (r >= 16 && r < 21)) {
        v = 0;
    } else if (r >= 9 && r < 16) {
        v = 1;
    } else if ((r >= 21 && r <= 24) || r < 4) {
        v = 2;
    } else if (r >= 4) {
    }
    return v;
}

extern "C" BOOL FishTable_IsLateMonth(u8 v) {
    if (v > 15) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 FishTable_GetPeriod(u8 x) {
    u8 t[4];
    if (x >= 1 && x <= 7) {
        return x;
    }
    if (x == 8) {
        Clock_GetDayMonth(&t[0]);
        if (FishTable_IsLateMonth(t[0]) != 0) {
            x = x + 1;
        }
        return x;
    }
    if (x == 9) {
        Clock_GetDayMonth(&t[2]);
        if (FishTable_IsLateMonth(t[2]) == 0) {
            return x + 1;
        }
        return x + 2;
    }
    if (x >= 10 && x <= 12) {
        return x + 2;
    }
    return 1;
}

extern "C" s32 Fish_GetWaterKind(s32 r) {
    if (r < 0 || r >= 0x38) {
        return 0;
    }
    if (r >= 0x23) {
        return 3;
    }
    if (r >= 9 && r <= 11) {
        return 2;
    }
    return 1;
}

extern "C" void OverlayMgr_GetInfo(void *p, u32 id) {
    FS_LoadOverlayInfo(p, 0, id);
}

extern "C" void OverlayMgr_LoadOverlay(u32 id) {
    File_LoadOverlay(id);
}

extern "C" void OverlayMgr_UnloadOverlay(u32 id) {
    File_UnloadOverlay(id);
}

extern "C" void OverlayMgr_LoadSlot(OverlaySlot *e, u32 id) {
    u32 buf[11];
    OverlayMgr_GetInfo(buf, id);
    OverlayMgr_LoadOverlay(id);
    e->overlayId = id;
    e->refCount = 1;
    e->unk_02 = 0;
    e->ramStart = buf[1];
    e->ramSize = buf[2] + buf[3];
}

extern "C" void OverlayMgr_UnloadSlot(OverlaySlot *e) {
    u32 buf[11];
    u32 id = e->overlayId;
    OverlayMgr_UnloadOverlay(id);
    OverlayMgr_GetInfo(buf, id);
    e->overlayId = 0xff;
    e->refCount = 0;
    e->unk_02 = 0;
    e->ramStart = 0;
    e->ramSize = 0;
}

extern "C" void OverlayMgr_Acquire(u32 id) {
    OverlaySlot *free = NULL;
    s32 i;
    u32 lo, hi;
    u8 buf[8];
    u32 info[11];
    for (i = 0; (u32)i < 12; i++) {
        OverlaySlot *e = &sOverlaySlots[i];
        if (e->overlayId == id) {
            e->refCount++;
            return;
        }
        if (((volatile OverlaySlot *)e)->overlayId == 0xff && free == NULL) {
            free = e;
        }
    }
    OverlayMgr_GetInfo(info, id);
    FS_GetOverlayFileID(buf, info);
    for (i = 0, lo = info[1], hi = lo + (info[2] + info[3]); (u32)i < 12; i++) {
        OverlaySlot *e = &sOverlaySlots[i];
        if (e->overlayId != id && ((volatile OverlaySlot *)e)->overlayId != 0xff && e->ramStart + e->ramSize > lo && hi > e->ramStart) {
            if (e->refCount == 0) {
                OverlayMgr_UnloadSlot(e);
                if (free == NULL) {
                    free = e;
                }
            } else {
                Fatal_Trap();
            }
        }
    }
    if (free != NULL) {
        OverlayMgr_LoadSlot(free, id);
    }
}

extern "C" void OverlayMgr_Release(u32 id) {
    OverlaySlot *e = NULL;
    for (s32 i = 0; (u32)i < 12; i++) {
        OverlaySlot *c = &sOverlaySlots[i];
        if (c->overlayId == id) {
            e = c;
            if (c->refCount != 0) {
                c->refCount--;
            }
        }
    }
    if (e == NULL) {
        Fatal_Trap();
    }
    if (e->refCount == 0) {
        Unk_0204eee4_Ns::OverlayMgr_UnloadSlot(e);
    }
}

extern "C" void OverlayMgr_Init() {
    for (s32 i = 0; (u32)i < 12; i++) {
        sOverlaySlots[i].overlayId = 0xff;
        sOverlaySlots[i].refCount = 0;
        sOverlaySlots[i].unk_02 = 0;
        sOverlaySlots[i].ramStart = 0;
        sOverlaySlots[i].ramSize = 0;
    }
}


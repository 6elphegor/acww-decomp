#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "npc/NpcResPool.h"
#include "town/Unk_02082e80_Grid.h"
#include "npc/SpNpcAnimHeapRefSlot.h"
#include "npc/VillagerAnimHeapRefSlot.h"
#include "npc/NpcBodyAnimSlot.h"
#include "npc/VillagerAnimHeapRefPool.h"
#include "npc/NpcSpawner.h"
#include "npc/NpcBodyAnimPool.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_020821c4.h"
#include "proto/main/unk_02082d74.h"
#include "proto/main/unk_020850e0.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02097444.h"

extern "C" {
}

extern "C" {
NpcBodyAnimPool *NpcBodyAnimPool_Get();
}

extern "C" {
extern VillagerAnimHeapRefPool sVillagerAnimHeapRefPool;
}

extern "C" {
extern NpcBodyAnimPool sNpcBodyAnimPool;
}





extern "C" {
extern u8 gFieldSceneKind;
}

extern "C" {
extern CommManager *gCommManager;
}

extern "C" {
extern Unk_02082e80_Grid *gSceneBlockMap;
}

extern "C" {
extern u8 sPeteVisitTable[], sDateVisitorTable[], sDateVisitorChecks[], sVisitorSpawnTable[];
}

extern "C" {
extern s32 sNpcBodyAnimLayerIdBases[];
}

extern "C" {
extern s32 sVisitorSpawnTableCount;
}

extern "C" {
extern u8 data_021ed315, gSaveBlancaFace;
}

extern "C" {
}

extern "C" {
void FieldPos_SnapToUnitCenter(void *g, void *v);
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
void func_02086af0(void *a, void *b, u16 *c, void *d);
}

extern "C" {
void func_020868cc(void *a, void *b);
}

extern "C" {
void func_02086ec4(void *a, void *b);
}

extern "C" {
s32 func_02086e60(void *a);
}

extern "C" {
void func_02086fb8(void *a, void *b);
}

extern "C" {
s32 func_02086fd0(void *a);
}

extern "C" {
}

extern "C" {
}

extern "C" {
void *func_02098698();
}

extern "C" {
s32 func_02087838(void *a, s32 b);
}

extern "C" {
s32 func_0209ea50(void *a);
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
}

extern "C" {
}

extern "C" {
void Clock_GetDateTime(void *p);
}

extern "C" {
}

extern "C" {
s32 func_0208723c(void *p);
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 MapBlock_HasAnyAttr(void *c, s32 v);
}

extern "C" {
s32 MapBlock_HasAllAttr(void *c, s32 v);
}

extern "C" {
s32 Ground_IsSandAboveSea(s32 x, s32 y);
}

extern "C" {
void FieldUnit_FromBlockUnit(s32 *o1, s32 *o2, s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
void FieldPos_FromUnitCenter(void *a, s32 x, s32 y);
}

static inline BOOL Unk_02083058_IsA() { return gFieldSceneKind == 0 ? TRUE : FALSE; }

static inline TownBlockCell *Unk_02082e80_GetCell(Unk_02082e80_Grid *g, u32 x, u32 y) {
    if (x < g->size[0] && y < g->size[1] && g->blocks != NULL) {
        return &g->blocks[y * g->size[0] + x];
    }
    return NULL;
}

NpcResSlot::NpcResSlot() { inUse = 0; }

NpcResSlot::~NpcResSlot() {}

NpcResPool::NpcResPool(s32 n) { numSlots = n; }

NpcResPool::~NpcResPool() {}


extern "C" {
}

extern "C" {
}


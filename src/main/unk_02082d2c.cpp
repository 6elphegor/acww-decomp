#include "types.h"
#include "Unk_020d8c7c.h"

// Element payload types (defined elsewhere)
struct Unk_020829b0_Y {
    u32 unk_00;
    Unk_020829b0_Y();
    ~Unk_020829b0_Y();
    void SpNpcAnimHeapRef_Assign();
};
struct Unk_02082af0_X {
    u32 unk_00;
    Unk_02082af0_X();
    ~Unk_02082af0_X();
    void VillagerAnimHeapRef_Assign();
};
struct Unk_02082c54_Z {
    Unk_02082c54_Z();
    ~Unk_02082c54_Z();
    void AnimSlotRef_Assign();
};

struct NpcResSlot {
    u8 inUse;
    NpcResSlot();
    ~NpcResSlot();
};

struct Unk_020829b0_Y_dummy;
struct SpNpcAnimHeapRefSlot : public NpcResSlot {
    Unk_020829b0_Y heapRef;
    SpNpcAnimHeapRefSlot();
    ~SpNpcAnimHeapRefSlot();
    void assign();
};

struct VillagerAnimHeapRefSlot : public NpcResSlot {
    Unk_02082af0_X heapRef;
    void assign(u32 x);
};

struct NpcBodyAnimSlot : public NpcResSlot {
    Unk_02082c54_Z layers[3];
    void assignLayer(s32 a, s32 i);
};

class NpcResPool {
public:
    NpcResPool(s32 n);
    virtual ~NpcResPool();
    virtual void occupySlot(u32 i) = 0;
    virtual void releaseSlot(u32 i);
    virtual u8 *getSlot(u32 i) = 0;
    s32 findFreeSlot();
    void clearAllSlots();

    /* 0x04 */ s32 numSlots;
};

class VillagerAnimHeapRefPool : public NpcResPool {
public:
    VillagerAnimHeapRefPool();
    virtual ~VillagerAnimHeapRefPool();
    virtual void occupySlot(u32 i);
    virtual u8 *getSlot(u32 i);
    Unk_02082af0_X *getHeapRef(u32 i);

    /* 0x08 */ VillagerAnimHeapRefSlot slots[8];
};

class NpcBodyAnimPool : public NpcResPool {
public:
    NpcBodyAnimPool();
    virtual ~NpcBodyAnimPool();
    virtual u8 *getSlot(u32 i);
    virtual void occupySlot(u32 i);
    Unk_02082c54_Z *getLayer(u32 i, u32 off);

    /* 0x08 */ NpcBodyAnimSlot slots[5];
};

extern "C" {
VillagerAnimHeapRefPool *VillagerAnimHeapRefPool_Get();
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

struct Unk_02082d74_M {
    ~Unk_02082d74_M();
};

class NpcSpawner : public GameProc {
public:
    virtual ~NpcSpawner();
    /* 0x50 */ Unk_02082d74_M freeUnitMap;
};

struct CommManager { u8 pad_00[0x64]; s32 myAid; BOOL isSlotActive(s32 i); };

struct Unk_02082e80_Cell { u8 pad_00[0x28]; };
struct Unk_02082e80_Grid {
    Unk_02082e80_Cell *blocks;
    u32 size[2];
};
struct Unk_02082e80_Pos {
    s32 x, y;
    Unk_02082e80_Pos() { x = 0; y = 0; }
};

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
void AnimSlotRef_Assign(void *p);
}

extern "C" {
void FieldPos_SnapToUnitCenter(void *g, void *v);
}

extern "C" {
void *TownSessionState_Get();
}

extern "C" {
void *TownSessionState_GetVisitorFlags(void *p);
}

extern "C" {
void *TownSessionState_GetVisitorPos(void *p);
}

extern "C" {
void *TownSessionState_GetPeteFall(void *p);
}

extern "C" {
void *TownSessionState_GetKatieState(void *p);
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
s32 Random_GlobalBelow(s32 a);
}

extern "C" {
s32 PlayerData_GetCurrent();
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
s32 Visitor_IsNookJobActive();
}

extern "C" {
s32 Visitor_IsTaxiActive();
}

extern "C" {
s32 Visitor_FindActiveEventEntry(void *tbl, s32 x);
}

extern "C" {
s32 VisitorTable_FindByProfile(void *a, void *b, s32 c);
}

extern "C" {
s32 VisitorTable_FindByNpc(void *a, void *b, s32 c);
}

extern "C" {
void Clock_GetDateTime(void *p);
}

extern "C" {
s32 Event_IsActive(s32 a, void *p);
}

extern "C" {
s32 func_0208723c(void *p);
}

extern "C" {
s32 LostChild_IsKaitlinDue();
}

extern "C" {
s32 LostChild_IsKatieDue();
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

static inline Unk_02082e80_Cell *Unk_02082e80_GetCell(Unk_02082e80_Grid *g, u32 x, u32 y) {
    if (x < g->size[0] && y < g->size[1] && g->blocks != NULL) {
        return &g->blocks[y * g->size[0] + x];
    }
    return NULL;
}

NpcResSlot::NpcResSlot() { inUse = 0; }

NpcResSlot::~NpcResSlot() {}

NpcResPool::NpcResPool(s32 n) { numSlots = n; }

NpcResPool::~NpcResPool() {}

struct Unk_02082dd0_V { s32 x, y, z; };

extern "C" {
BOOL Visitor_FindBlanca(BOOL flag);
}

extern "C" {
BOOL Visitor_FindKaitlin(BOOL flag);
}


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
    void func_0205c384();
};

struct Unk_02082d68 {
    u8 unk_00;
    Unk_02082d68();
    ~Unk_02082d68();
};

struct Unk_020829b0_Y_dummy;
struct Unk_020829b0 : public Unk_02082d68 {
    Unk_020829b0_Y unk_04;
    Unk_020829b0();
    ~Unk_020829b0();
    void func_020829b0();
};

struct Unk_02082af0 : public Unk_02082d68 {
    Unk_02082af0_X unk_04;
    void func_02082af0(u32 x);
};

struct Unk_02082c54 : public Unk_02082d68 {
    Unk_02082c54_Z unk_01[3];
    void func_02082c54(s32 a, s32 i);
};

class Unk_020e085c {
public:
    Unk_020e085c(s32 n);
    virtual ~Unk_020e085c();
    virtual void vfunc_08(u32 i) = 0;
    virtual void vfunc_0c(u32 i);
    virtual u8 *vfunc_10(u32 i) = 0;
    s32 func_02082cb0();
    void func_02082d04();

    /* 0x04 */ s32 unk_04;
};

class Unk_020e0798 : public Unk_020e085c {
public:
    Unk_020e0798();
    virtual ~Unk_020e0798();
    virtual void vfunc_08(u32 i);
    virtual u8 *vfunc_10(u32 i);
    Unk_02082af0_X *func_020829f4(u32 i);

    /* 0x08 */ Unk_02082af0 unk_08[8];
};

class Unk_020e0840 : public Unk_020e085c {
public:
    Unk_020e0840();
    virtual ~Unk_020e0840();
    virtual u8 *vfunc_10(u32 i);
    virtual void vfunc_08(u32 i);
    Unk_02082c54_Z *func_02082b34(u32 i, u32 off);

    /* 0x08 */ Unk_02082c54 unk_08[5];
};

extern "C" {
Unk_020e0798 *func_02082a50();
}

extern "C" {
Unk_020e0840 *func_02082bb4();
}

extern "C" {
extern Unk_020e0798 data_021cd3d4;
}

extern "C" {
extern Unk_020e0840 data_021cd360;
}

struct Unk_02082d74_M {
    ~Unk_02082d74_M();
};

class NpcSpawner : public GameProc {
public:
    virtual ~NpcSpawner();
    /* 0x50 */ Unk_02082d74_M unk_50;
};

struct CommManager { u8 pad_00[0x64]; s32 unk_64; BOOL isSlotActive(s32 i); };

struct Unk_02082e80_Cell { u8 pad_00[0x28]; };
struct Unk_02082e80_Grid {
    Unk_02082e80_Cell *unk_00;
    u32 unk_04[2];
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
extern s32 data_020cf1bc[];
}

extern "C" {
extern s32 sVisitorSpawnTableCount;
}

extern "C" {
extern u8 data_021ed315, gSaveGameStats;
}

extern "C" {
void func_0205c384(void *p);
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
s32 func_02063b8c(s32 a);
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
s32 func_02083ba4();
}

extern "C" {
s32 func_02083b84();
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
    if (x < g->unk_04[0] && y < g->unk_04[1] && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04[0] + x];
    }
    return NULL;
}

Unk_02082d68::Unk_02082d68() { unk_00 = 0; }

Unk_02082d68::~Unk_02082d68() {}

Unk_020e085c::Unk_020e085c(s32 n) { unk_04 = n; }

Unk_020e085c::~Unk_020e085c() {}

struct Unk_02082dd0_V { s32 x, y, z; };

extern "C" {
BOOL Visitor_FindBlanca(BOOL flag);
}

extern "C" {
BOOL Visitor_FindKaitlin(BOOL flag);
}


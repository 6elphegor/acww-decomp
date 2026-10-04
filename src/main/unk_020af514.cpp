// mwcc-flags: -str reuse
#include "types.h"
#include "game/Vec3.h"
#include "town/TownBlockCell.h"
#include "town/SceneMapInfo.h"
#include "game/SceneInfo.h"

extern "C" {
u32 GroundSeason_IsSnowPhase(u32);
void Clock_GetDateTime(void *);
void DateTime_SubDays(void *, u32);
s32 Date_DaysBetween(void *, void *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
void *TownBlockMap_Get();
void BlockMap_SetItemAtUnit(void *, void *, u32, u32, u32);
void *MapBlock_GetItemPtr(void *, u32, u32, u32);
BOOL Item_IsSnowman(void *);
u32 Item_GetSnowmanIndex(void *);
void FieldUnit_FromBlockUnit(u32 *, u32 *, u32, u32, u32, u32);
}

struct Bits;
struct DateTmp {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};
union DateTmpU {
    DateTmp t;
    u32 w[2];
};

class SnowmanRecord {
public:
    SnowmanRecord();
    ~SnowmanRecord();
    s32 getDaysSinceBuilt();
    u32 getRank();
    s32 getBodySize();
    s32 getHeadSize();
    void build(u32 a, u32 b, u32 c);
    BOOL isUsed();
    void clear();

    u16 a0 : 7;
    u16 a1 : 4;
    u16 a2 : 5;
    u16 b0 : 7;
    u16 b1 : 7;
    u16 b2 : 2;
    u8 c4;
    u8 c5;
};

extern "C" {
struct Data021e5890 {
    u8 pad[0x14];
    u8 pad14 : 2;
    u8 f14 : 6;
};
extern Data021e5890 data_021e5890;
BOOL Snowman_RemoveFromTown(u32 idx);
}

class SnowmanRecords {
public:
    SnowmanRecords();
    ~SnowmanRecords();
    void markUnplaced(u32 idx);
    BOOL isFull();
    BOOL getInfo(u32 idx, u32 *a, u32 *b, u32 *c, u8 *d, u8 *e, u8 *f);
    s32 add(u32 a, u32 b, u32 c);
    BOOL remove(u32 idx);
    void clearAll();
    void updateDaily();

    SnowmanRecord e[3];
};


struct Grid {
    TownBlockCell *cells;
    u32 w;
    u32 h;
};

extern "C" {
extern void *gActorDefaultParent;
void GameProc_CreateChild(u32, void *, u32, u32);
u64 OS_GetTick();
}

class SceneSpawnGroup;

typedef BOOL (*EntryFn)(SceneSpawnGroup *, u8 *, u32, u32);
extern "C" EntryFn sSceneSpawnGroupHandlers[];
extern "C" BOOL SceneSpawnGroup_SpawnActors(SceneSpawnGroup *, u8 *, u32, u32);
extern "C" BOOL _ZN15SceneSpawnGroup21spawnPlayersAndCameraEPhjj(SceneSpawnGroup *, u8 *, u32, u32);
extern "C" BOOL _ZN15SceneSpawnGroup11createProcsEPhy(SceneSpawnGroup *, u8 *, u32, u32);


struct EntryPair {
    u16 a;
    u16 b;
};


// one of the 2 rollable loose snowballs of gLooseSnowballs
class LooseSnowball {
public:
    LooseSnowball();
    ~LooseSnowball();

    void *posX;
    void *posY;
    void *posZ;
    u32 radius;
};

class LooseSnowballs {
public:
    ~LooseSnowballs();
    void reset();

    LooseSnowball items[2];
};


struct Vec3s {
    s16 x, y, z;
};

inline void SetVec(Vec3 *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

class Unk_020b4948;
extern "C" BOOL SceneWarp_HasNoPos(Unk_020b4948 *);
extern "C" u32 SceneWarp_GetSpawnParam(Unk_020b4948 *);
extern "C" s32 SceneWarp_GetAngle(Unk_020b4948 *);
extern "C" Vec3 *SceneWarp_GetPos(Unk_020b4948 *);

extern "C" {
Unk_020b4948 *Scene_GetWarpRequest();
u32 Scene_GetCurrent();
BOOL Scene_InUnk6Or7();
BOOL Scene_InTown();
BOOL _ZN11CommManager11isLocalSlotEj(void *, ...);
void _ZN11CommManager12isSlotActiveEi(void *, u32);
s32 PlayerSession_GetDataIndex(u32);
BOOL PlayerDataArray_IsUsed(void *, s32);
u32 PlayerSession_FindFreeGfxSlot();
void PlayerSession_SetGfxSlot(u32, u32);
void PlayerActor_Spawn(u32, Vec3 *, Vec3s *, u32);
void Vec_RotateY(Vec3 *, s32);
void func_01ffd070(Vec3 *, Vec3 *, Vec3 *);

struct Data020cbb18 {
    u8 pad[0x64];
    u32 myAid;
};
extern Data020cbb18 *gCommManager;
extern u8 gSavePlayers[];
}

class ScenePlayerSpawn {
public:
    BOOL getSpawn(u32 i, BOOL mode, Vec3 *pos, Vec3s *rot, u32 *out);
    inline void get(Vec3 *pos, Vec3s *r, u32 *out) {
        Vec3s *q = &rot;
        SetVec(pos, x << 12 >> 4, y << 12 >> 4, z << 12 >> 4);
        r->x = q->x;
        r->y = q->y;
        r->z = q->z;
        *out = spawnParam;
    }

    u16 unk_00;
    s16 x;
    s16 y;
    s16 z;
    Vec3s rot;
    u16 unk_0e;
    u32 spawnParam;
};


BOOL ScenePlayerSpawn::getSpawn(u32 i, BOOL mode, Vec3 *pos, Vec3s *rot_, u32 *out) {
    if (mode) {
        s32 idx = PlayerSession_GetDataIndex(i);
        if (idx < 4 && PlayerDataArray_IsUsed(gSavePlayers, PlayerSession_GetDataIndex(i))) {
            if (!_ZN11CommManager11isLocalSlotEj(gCommManager, i) || SceneWarp_HasNoPos(Scene_GetWarpRequest())) {
                (this + idx)->get(pos, rot_, out);
            } else {
                Vec3 *v = SceneWarp_GetPos(Scene_GetWarpRequest());
                pos->x = v->x;
                pos->y = v->y;
                pos->z = v->z;
                s32 t = SceneWarp_GetAngle(Scene_GetWarpRequest());
                rot_->x = 0;
                rot_->y = t;
                rot_->z = 0;
                *out = SceneWarp_GetSpawnParam(Scene_GetWarpRequest());
            }
            return TRUE;
        }
    } else {
        if (_ZN11CommManager11isLocalSlotEj(gCommManager)) {
            if (SceneWarp_HasNoPos(Scene_GetWarpRequest())) {
                get(pos, rot_, out);
            } else {
                Vec3 v;
                v.x = 0;
                v.y = 0;
                v.z = 0;
                if (!Scene_InTown() && SceneWarp_GetSpawnParam(Scene_GetWarpRequest()) == 0x800000) {
                    i &= 3;
                    v.x = (i << 10) - 0x800;
                    v.y = 0;
                    v.z = 0;
                    Vec_RotateY(&v, SceneWarp_GetAngle(Scene_GetWarpRequest()));
                }
                Vec3 t;
                func_01ffd070(&t, SceneWarp_GetPos(Scene_GetWarpRequest()), &v);
                pos->x = t.x;
                pos->y = t.y;
                pos->z = t.z;
                s32 u = SceneWarp_GetAngle(Scene_GetWarpRequest());
                rot_->x = 0;
                rot_->y = u;
                rot_->z = 0;
                *out = SceneWarp_GetSpawnParam(Scene_GetWarpRequest());
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SceneSpawnGroup::spawnPlayersAndCamera(u8 *idx, u32 lo, u32 hi) {
    ScenePlayerSpawn *items = (ScenePlayerSpawn *)list;
    if (items != NULL && Scene_GetCurrent() != 0xd && Scene_GetCurrent() != 0xe && Scene_GetCurrent() != 0x2f) {
        if (Scene_InUnk6Or7()) {
            _ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid);
            for (u32 i = 0; i < 4; i++) {
                Vec3s rot;
                u32 v;
                Vec3 pos;
                if (items->getSpawn(i, TRUE, &pos, &rot, &v)) {
                    PlayerActor_Spawn(i, &pos, &rot, v);
                }
            }
        } else {
            for (u32 i = 0; i < 4; i++) {
                Vec3s rot;
                u32 v;
                Vec3 pos;
                if (items->getSpawn(i, FALSE, &pos, &rot, &v)) {
                    PlayerSession_SetGfxSlot(i, PlayerSession_FindFreeGfxSlot());
                    PlayerActor_Spawn(i, &pos, &rot, v);
                }
            }
        }
    }
    GameProc_CreateChild(0xb, gActorDefaultParent, 0, 0);
    return TRUE;
}

BOOL SceneSpawnGroup::createProcs(u8 *idx, u64 start) {
    u32 i = idx != NULL ? *idx : 0;
    EntryPair *p = (EntryPair *)list + i;
    BOOL ok = TRUE;
    for (;;) {
        GameProc_CreateChild(p->a, gActorDefaultParent, p->b, 0);
        p++;
        i = (u8)(i + 1);
        if (idx != NULL) {
            (*idx)++;
        }
        if (i >= count) {
            break;
        }
        if (idx != NULL) {
            u32 ms = ((OS_GetTick() - start) * 64) / 0x82ea;
            if (ms > 0x28) {
                ok = FALSE;
                break;
            }
        }
    }
    if (ok) {
        return TRUE;
    }
    return FALSE;
}

BOOL SceneSpawnList::run(u8 *entryIdx, u8 *subIdx, u64 start) {
    s32 i = entryIdx != NULL ? *entryIdx : 0;
    SceneSpawnGroup *e = groups + i;
    BOOL result = TRUE;
    for (; i < count;) {
        BOOL r = result;
        EntryFn f = sSceneSpawnGroupHandlers[e->kind];
        if (f != NULL) {
            r = f(e, subIdx, (u32)start, (u32)(start >> 32));
        }
        if (r) {
            e++;
            i++;
            if (subIdx != NULL) {
                *subIdx = 0;
            }
            if (entryIdx != NULL) {
                (*entryIdx)++;
            }
            if (i >= count) {
                break;
            }
            if (entryIdx != NULL) {
                u32 ms = ((OS_GetTick() - start) * 64) / 0x82ea;
                if (ms > 0x28) {
                    result = FALSE;
                    break;
                }
            }
        } else {
            result = FALSE;
            break;
        }
    }
    if (result) {
        return TRUE;
    }
    return FALSE;
}

void SceneMapInfo::createMapModule() {
    GameProc_CreateChild(0xc, gActorDefaultParent, moduleParam, 0);
}

void SceneInfo::createSceneMapModule() {
    mapInfo->createMapModule();
}

BOOL SceneInfo::runSpawnList(u8 *entryIdx, u8 *subIdx, u64 start) {
    return spawnList->run(entryIdx, subIdx, start);
}

LooseSnowball::LooseSnowball() {
    posX = NULL;
    posY = NULL;
    posZ = NULL;
    radius = 0x800;
}

LooseSnowball::~LooseSnowball() {}

LooseSnowballs::~LooseSnowballs() {}

SnowmanRecord::SnowmanRecord() {}

SnowmanRecord::~SnowmanRecord() {}

void SnowmanRecord::clear() {
    a0 = 0;
    a1 = 0;
    a2 = 0;
    b0 = 0;
    b1 = 0;
    b2 = 0;
    c5 = 0;
}

BOOL SnowmanRecord::isUsed() {
    if (b0 != 0 && b1 != 0) {
        return TRUE;
    }
    return FALSE;
}

void SnowmanRecord::build(u32 x, u32 y, u32 z) {
    b0 = x >> 7;
    b1 = y >> 7;
    b2 = z;
    c4 = 0;
    DateTmp d;
    ((u32 *)&d)[0] = 0;
    ((u32 *)&d)[1] = 0;
    Clock_GetDateTime(&d);
    if (d.b2 < 6) {
        DateTime_SubDays(&d, 1);
    }
    a0 = d.b5;
    a1 = d.b4;
    a2 = d.b3;
    c5 = 1;
}

s32 SnowmanRecord::getHeadSize() {
    s32 t = b0 << 7;
    if (t == 0) {
        t = 0x1000;
    }
    s32 u = 0x1000;
    if (c4 == 1) {
        u = FX_Div(0x3000, 0x4000);
    } else if (c4 == 2) {
        u = FX_Div(u, 0x2000);
    }
    if (u > 0x1000) {
        u = 0x1000;
    }
    return func_01ffcb0c(t, u);
}

s32 SnowmanRecord::getBodySize() {
    s32 t = b1 << 7;
    if (t == 0) {
        t = 0x1000;
    }
    s32 u = 0x1000;
    if (c4 == 1) {
        u = FX_Div(0x3000, 0x4000);
    } else if (c4 == 2) {
        u = FX_Div(u, 0x2000);
    }
    if (u > 0x1000) {
        u = 0x1000;
    }
    return func_01ffcb0c(t, u);
}

u32 SnowmanRecord::getRank() {
    return b2;
}

s32 SnowmanRecord::getDaysSinceBuilt() {
    DateTmp d;
    ((u32 *)&d)[0] = 0;
    ((u32 *)&d)[1] = 0;
    u8 e[4];
    u8 f[4];
    Clock_GetDateTime(&d);
    if (d.b2 < 6) {
        DateTime_SubDays(&d, 1);
    }
    e[2] = d.b5;
    e[1] = d.b4;
    e[0] = d.b3;
    f[2] = a0;
    f[1] = a1;
    f[0] = a2;
    return Date_DaysBetween(e, f);
}

SnowmanRecords::SnowmanRecords() {}

SnowmanRecords::~SnowmanRecords() {}

extern "C" BOOL Snowman_FindInTown(u32 *a, u32 *b, u32 idx) {
    TownBlockCell *cell;
    Grid *g = (Grid *)TownBlockMap_Get();
    for (s32 y = 1; y <= 4; y++) {
        for (s32 x = 1; x <= 4; x++) {
            if ((u32)x < g->w && (u32)y < g->h && g->cells != NULL) {
                cell = &g->cells[y * g->w + x];
            } else {
                cell = NULL;
            }
            if (cell != NULL) {
                for (s32 j = 0; j < 16; j++) {
                    for (s32 i = 0; i < 16; i++) {
                        void *o = MapBlock_GetItemPtr(cell, i, j, 0);
                        if (o != NULL && Item_IsSnowman(o) && idx == Item_GetSnowmanIndex(o)) {
                            FieldUnit_FromBlockUnit(a, b, x, y, i, j);
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL Snowman_RemoveFromTown(u32 idx) {
    u32 a, b;
    if (Snowman_FindInTown(&a, &b, idx)) {
        void *p = TownBlockMap_Get();
        u16 h = 0xfff1;
        BlockMap_SetItemAtUnit(p, &h, a, b, 0);
        return TRUE;
    } else {
        return TRUE;
    }
}

void SnowmanRecords::updateDaily() {
    BOOL flag = FALSE;
    u32 v = GroundSeason_IsSnowPhase(data_021e5890.f14);
    for (u32 i = 0; i < 3; i++) {
        if (v == 0) {
            if (Snowman_RemoveFromTown(i)) {
                e[i].clear();
            }
        } else {
            SnowmanRecord *r = &e[i];
            if (r->isUsed()) {
                s32 n = r->getDaysSinceBuilt();
                BOOL x = r->c5 ? TRUE : flag;
                if (!x) {
                    if (n != 0) {
                        r->clear();
                    }
                } else if (n >= 3 || n < 0) {
                    if (Snowman_RemoveFromTown(i)) {
                        r->clear();
                    }
                } else {
                    r->c4 = n;
                }
            }
        }
    }
}

void SnowmanRecords::clearAll() {
    u32 i = 0;
    do {
        e[i].clear();
        i++;
    } while (i < 3);
}

BOOL SnowmanRecords::remove(u32 idx) {
    if (idx < 3) {
        SnowmanRecord *r = &e[idx];
        if (r->isUsed()) {
            r->clear();
            return TRUE;
        }
    }
    return FALSE;
}

s32 SnowmanRecords::add(u32 a, u32 b, u32 c) {
    for (u32 i = 0; i < 3; i++) {
        SnowmanRecord *r = &e[i];
        if (!r->isUsed()) {
            r->build(a, b, c);
            return i;
        }
    }
    return -1;
}

BOOL SnowmanRecords::getInfo(u32 idx, u32 *a, u32 *b, u32 *c, u8 *d, u8 *ee, u8 *f) {
    if (idx < 3) {
        SnowmanRecord *r = &e[idx];
        if (r->isUsed()) {
            if (a != NULL) {
                *a = r->getHeadSize();
            }
            if (b != NULL) {
                *b = r->getBodySize();
            }
            if (c != NULL) {
                *c = r->getRank();
            }
            if (d != NULL) {
                *d = r->a0;
            }
            if (ee != NULL) {
                *ee = r->a1;
            }
            if (f != NULL) {
                *f = r->a2;
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SnowmanRecords::isFull() {
    for (u32 i = 0; i < 3; i++) {
        if (!e[i].isUsed()) {
            return FALSE;
        }
    }
    return TRUE;
}

void SnowmanRecords::markUnplaced(u32 idx) {
    if (idx < 3) {
        if (e[idx].isUsed()) {
            e[idx].c5 = 0;
        }
    }
}

void LooseSnowballs::reset() {
    for (u32 i = 0; i < 2; i++) {
        items[i].posX = NULL;
        items[i].posY = NULL;
        items[i].posZ = NULL;
        items[i].radius = 0x800;
    }
}

EntryFn sSceneSpawnGroupHandlers[3] = {SceneSpawnGroup_SpawnActors, _ZN15SceneSpawnGroup21spawnPlayersAndCameraEPhjj, _ZN15SceneSpawnGroup11createProcsEPhy};

LooseSnowballs gLooseSnowballs;

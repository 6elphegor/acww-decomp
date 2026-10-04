// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "net/CommManager.h"
#include "field/Snowball.h"
#include "town/Unk_0204e858_Grid.h"

// TU27 of ov003: free functions (spawn-position search over a 4x4 pool of 16x16 bitmaps, object slot table)
struct UnitMaskChunk {
    u16 bits[16];
    u16 cnt;
    UnitMaskChunk() {}
    ~UnitMaskChunk() {}
};

struct UnitMaskPool {
    UnitMaskChunk c[4][4];
};

struct LooseSnowballsView {
    VecFx32 a;
    u32 pad_0c;
    VecFx32 b;
};

struct SnowballSpawnLocals {
    u8 snowmanDate[3];
    u8 pad;
    u32 dateTime[2];
};

// ---- externs ----
// other modules' methods are reached through their real mangled symbols (object first)
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define LooseSnowballs_reset _ZN14LooseSnowballs5resetEv
#define SnowmanRecords_isFull _ZN14SnowmanRecords6isFullEv
#define SnowmanRecords_getInfo _ZN14SnowmanRecords7getInfoEjPjS0_S0_PhS1_S1_

extern "C" {
extern Unk_0204e858_Grid *gSceneBlockMap;
extern CommManager *gCommManager;
extern u8 data_021ed2e6[];

BOOL CommManager_isSlotActive(void *, u32);
s32 CommSyncVar_SetVar(s32 a, s32 b, s32 c, s32 d);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
void FieldPos_FromBlockUnitCenter(VecFx32 *out, s32 a, s32 b, s32 c, s32 d);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL Ground_IsFreeGrassOffPath(s32 a, s32 b);
BOOL Ground_IsFreeGrass(s32 a, s32 b);
s32 Random_GlobalBelow(s32 n);
void *MapBlock_GetItemPtr(void *c, u32 i, u32 j, s32 k);
void MapBlock_SetItem(void *c, u16 *p, u32 a, u32 b, u32 d);
BOOL Item_IsSnowman(u16 *p);
s32 Item_GetSnowmanIndex(u16 *p);
s32 SnowmanRecords_getInfo(void *o, s32 i, void *a, void *b, void *c, void *d, void *e, void *f);
s32 Actor_spawn(u32 a, u32 b, void *c, u32 d, void *e);
LooseSnowballsView *LooseSnowballs_Get();
void LooseSnowballs_reset();
s32 GroundSeason_IsSnow();
s32 Scene_InTown();
BOOL SnowmanRecords_isFull(void *o);
void Clock_GetDateTime(void *);
void DateTime_SubDays(void *, s32);
BOOL Snowball_IsInBallState(void *p);
BOOL Snowball_TryPush(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);

void UnitMaskPool_Mark(UnitMaskPool *pool, s32 x, s32 y);
s32 UnitMaskPool_CountFreeChunks(UnitMaskPool *pool);
void UnitMaskPool_Clear(UnitMaskPool *pool);
BOOL UnitMaskPool_PickRandom(UnitMaskPool *pool, s32 *ox, s32 *oy);
void UnitMaskChunk_Mark(UnitMaskChunk *c, s32 x, s32 y);
BOOL UnitMaskChunk_IsMarked(UnitMaskChunk *c, s32 x, s32 y);
BOOL UnitMaskChunk_PickRandom(UnitMaskChunk *c, s32 *ox, s32 *oy);
void UnitMaskChunk_Clear(UnitMaskChunk *c);
Snowball *Snowball_FindByParam(u32 id);
BOOL Snowball_FindSpawnPos(void *a, void *b, s32 c, s32 d);
}

// the eight actor slots
extern "C" {
Snowball *sSnowballs[8];
}

// ---- functions ----

extern "C" void SnowballSpawner_SpawnLooseBalls(void *self) {
    if (CommManager_isSlotActive(gCommManager, gCommManager->myAid) != 0 || GroundSeason_IsSnow() == 0) {
        LooseSnowballs_Get();
        LooseSnowballs_reset();
        return;
    }
    struct {
        SnowballSpawnLocals l;
        s32 p[3];
        VecFx32 A, B;
    } f;
    u32 i;
    for (i = 0; i < 3; i++) {
        f.l.dateTime[0] = 0;
        f.l.dateTime[1] = 0;
        Clock_GetDateTime(f.l.dateTime);
        if (((u8 *)&f.l)[6] < 6) {
            DateTime_SubDays(f.l.dateTime, 1);
        }
        if (SnowmanRecords_getInfo(data_021ed2e6, i, &f.p[0], &f.p[1], &f.p[2], &f.l.snowmanDate[0], &f.l.snowmanDate[1], &f.l.snowmanDate[2]) != 0) {
            if (f.l.snowmanDate[0] == ((u8 *)&f.l)[9] && f.l.snowmanDate[1] == ((u8 *)&f.l)[8] && f.l.snowmanDate[2] == ((u8 *)&f.l)[7]) {
                LooseSnowballs_Get();
                LooseSnowballs_reset();
                return;
            }
        }
    }
    if (Scene_InTown() != 0) {
        if (SnowmanRecords_isFull(data_021ed2e6) == 0) {
            if (LooseSnowballs_Get()->a.x != 0) {
                LooseSnowballsView *s = LooseSnowballs_Get();
                f.A.x = s->a.x;
                f.A.y = s->a.y;
                f.A.z = s->a.z;
            } else {
                Snowball_FindSpawnPos(self, &f.A, 0, 1);
            }
            if (LooseSnowballs_Get()->b.x != 0) {
                LooseSnowballsView *s = LooseSnowballs_Get();
                VecFx32 *pv = &s->b;
                f.B.x = pv->x;
                f.B.y = pv->y;
                f.B.z = pv->z;
            } else {
                Snowball_FindSpawnPos(self, &f.B, (s32)&f.A, 1);
            }
            if (Actor_spawn(0xbd, 0, &f.A, 0, self)) {
                LooseSnowballsView *s = LooseSnowballs_Get();
                s->a.x = f.A.x;
                s->a.y = f.A.y;
                s->a.z = f.A.z;
            }
            if (Actor_spawn(0xbd, 1, &f.B, 0, self)) {
                LooseSnowballsView *s = LooseSnowballs_Get();
                s->b.x = f.B.x;
                s->b.y = f.B.y;
                s->b.z = f.B.z;
            }
        }
    }
}

extern "C" void SnowballSpawner_SpawnSnowmen(void *self) {
    Unk_0204e858_Grid *g = gSceneBlockMap;
    u32 by, bx;
    s32 lx, n;
    TownBlockCell *cell;
    for (by = 1; by <= 4; by++) {
        for (bx = 1; bx <= 4; bx++) {
            if (bx < g->width && by < g->height && g->blocks != 0) {
                cell = &g->blocks[by * g->width + bx];
            } else {
                cell = 0;
            }
            if (cell != 0) {
                s32 ly;
                for (ly = 0; ly < 16; ly++) {
                    for (lx = 0; lx < 16; lx++) {
                        u16 *t = (u16 *)MapBlock_GetItemPtr(cell, lx, ly, 0);
                        if (t != 0) {
                            if (Item_IsSnowman(t)) {
                                s32 v = Item_GetSnowmanIndex(t);
                                if (SnowmanRecords_getInfo(data_021ed2e6, v, 0, 0, 0, 0, 0, 0) == 0) {
                                    u16 tmp[1];
                                    tmp[0] = 0xfff1;
                                    MapBlock_SetItem(cell, tmp, lx, ly, 0);
                                } else {
                                    n = v * 2 + 2;
                                    VecFx32 loc;
                                    FieldPos_FromBlockUnitCenter(&loc, bx, by, lx, ly);
                                    Actor_spawn(0xbd, n, &loc, 0, self);
                                    Actor_spawn(0xbd, n + 1, &loc, 0, self);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" BOOL Snowball_Register(Snowball *p) {
    Snowball **s = &sSnowballs[p->param & 7];
    if (*s != 0) {
        return FALSE;
    }
    *s = p;
    return TRUE;
}

extern "C" BOOL Snowball_Unregister(Snowball *p) {
    Snowball **s = &sSnowballs[p->param & 7];
    if (*s == p) {
        *s = 0;
        return TRUE;
    }
    return FALSE;
}

extern "C" Snowball *Snowball_FindByParam(u32 id) {
    u32 i;
    for (i = 0; i < 8; i++) {
        Snowball *p = sSnowballs[i];
        if (p != 0 && id == p->param) {
            return p;
        }
    }
    return 0;
}

extern "C" BOOL Snowball_TryPushAny(void *self, s32 a, s32 b, s32 c, s32 d) {
    u32 i;
    for (i = 0; i < 8; i++) {
        if (sSnowballs[i] != 0) {
            if (Snowball_TryPush(sSnowballs[i], (s32)self, a, b, c, d)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" void *Snowball_GetLooseBall(u32 id) {
    Snowball *o = Snowball_FindByParam(id & 1);
    if (o != 0) {
        if (o->talkAct == 0) {
            if (o->snowballState == 0) {
                BOOL bit;
                if (o->snowballFlags.e) {
                    bit = TRUE;
                } else {
                    bit = FALSE;
                }
                if (bit == 0) {
                    if (o->collider.hitThisFrame == 0) {
                        return o;
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" void *Snowball_FindOtherInBallState(void *self) {
    u32 i;
    for (i = 0; i < 8; i++) {
        Snowball *p = sSnowballs[i];
        if (p != 0 && p != self && Snowball_IsInBallState(p)) {
            return p;
        }
    }
    return 0;
}

extern "C" void UnitMaskChunk_Clear(UnitMaskChunk *c) {
    u32 i;
    for (i = 0; i < 16; i++) {
        c->bits[i] = 0;
    }
    c->cnt = 0x100;
}

extern "C" void UnitMaskChunk_Mark(UnitMaskChunk *c, s32 x, s32 y) {
    u8 ux = x & 15;
    u8 uy = y & 15;
    if (!UnitMaskChunk_IsMarked(c, x, y)) {
        c->bits[uy] |= 1 << ux;
        c->cnt--;
    }
}

extern "C" BOOL UnitMaskChunk_IsMarked(UnitMaskChunk *c, s32 x, s32 y) {
    s32 v = c->bits[(u8)(y & 15)];
    if ((v >> (u8)(x & 15)) & 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL UnitMaskChunk_PickRandom(UnitMaskChunk *c, s32 *ox, s32 *oy) {
    if (c->cnt != 0) {
        s32 r = Random_GlobalBelow(c->cnt);
        s32 n = 0;
        u32 i, j;
        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                if (!UnitMaskChunk_IsMarked(c, j, i)) {
                    if (r == n) {
                        *ox = j;
                        *oy = i;
                        return TRUE;
                    }
                    n++;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void UnitMaskPool_Clear(UnitMaskPool *pool) {
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            UnitMaskChunk_Clear(&pool->c[i][j]);
        }
    }
}

extern "C" s32 UnitMaskPool_CountFreeChunks(UnitMaskPool *pool) {
    s32 n = 0;
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (pool->c[i][j].cnt != 0) {
                n++;
            }
        }
    }
    return n;
}

extern "C" void UnitMaskPool_Mark(UnitMaskPool *pool, s32 x, s32 y) {
    UnitMaskChunk_Mark(&pool->c[((y - 16) >> 4) & 3][((x - 16) >> 4) & 3], x & 15, y & 15);
}

extern "C" BOOL UnitMaskPool_PickRandom(UnitMaskPool *pool, s32 *ox, s32 *oy) {
    s32 cnt = UnitMaskPool_CountFreeChunks(pool);
    if (cnt != 0) {
        s32 r = Random_GlobalBelow(cnt);
        s32 n = 0;
        u32 i, j;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                UnitMaskChunk *c = &pool->c[i][j];
                if (c->cnt != 0) {
                    if (r == n) {
                        s32 px, py;
                        if (UnitMaskChunk_PickRandom(c, &px, &py)) {
                            *ox = ((j + 1) << 4) + px;
                            *oy = ((i + 1) << 4) + py;
                            return TRUE;
                        }
                        return FALSE;
                    }
                    n++;
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL Snowball_FindSpawnPos(void *a, void *b, s32 c, s32 d) {
    Unk_0204e858_Grid *g = gSceneBlockMap;
    static UnitMaskPool pool;
    UnitMaskPool_Clear(&pool);
    u32 by, bx, ly, lx, k;
    for (by = 1; by < 6; by++) {
        for (bx = 1; bx < 6; bx++) {
            for (ly = 0; ly < 16; ly++) {
                for (lx = 0; lx < 16; lx++) {
                    s32 x, y;
                    FieldUnit_FromBlockUnit(&x, &y, bx, by, lx, ly);
                    if (!Ground_IsFreeGrassOffPath(x, y) || !Ground_IsFreeGrass(x, y + 1) || !Ground_IsFreeGrass(x, y + 2)) {
                        UnitMaskPool_Mark(&pool, x, y);
                    } else if (d != 0) {
                        s32 ex = *(volatile s32 *)&x;
                        s32 ey = *(volatile s32 *)&y;
                        s32 hx = ex >> 4;
                        s32 hy = ey >> 4;
                        u16 *cell = BlockMap_GetItemPtr(g, hx, hy, ex - (hx << 4), ey - (hy << 4), 0);
                        if (cell != 0 && *cell != 0xfff1) {
                            UnitMaskPool_Mark(&pool, x, y);
                        }
                    }
                }
            }
        }
    }
    if (c != 0) {
        s32 px, py;
        FieldPos_ToUnit(&px, &py, (void *)c);
        s32 yy, xx;
        for (yy = py - 7; yy <= py + 7; yy++) {
            for (xx = px - 7; xx <= px + 7; xx++) {
                UnitMaskPool_Mark(&pool, xx, yy);
            }
        }
    }
    s32 ox, oy;
    if (UnitMaskPool_PickRandom(&pool, &ox, &oy)) {
        FieldPos_FromUnitCenter(b, ox, oy);
        return TRUE;
    } else if (d != 0) {
        return Snowball_FindSpawnPos(a, b, c, 0);
    }
    return FALSE;
}

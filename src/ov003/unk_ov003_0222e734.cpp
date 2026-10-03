// mwcc-version: 1.2/base
#include "types.h"

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

struct Unk_ov003_0222e734_Cell {
    u8 pad_00[0x24];
    u16 *unk_24;
};

struct Unk_ov003_0222e734_Grid {
    Unk_ov003_0222e734_Cell *cells;
    u32 w, h;
};

struct Unk_ov003_0222eb10_Fl {
    u16 a : 2;
    u16 b : 2;
    u16 c : 1;
    u16 d : 1;
    u16 e : 1;
    u16 f : 1;
    u16 g : 1;
    u16 h : 1;
    u16 i : 1;
};

struct Unk_ov003_0222eb10_Obj {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[0x2e4 - 0xc];
    u8 unk_2e4;
    u8 pad_2e5[0x374 - 0x2e5];
    Unk_ov003_0222eb10_Fl unk_374;
    u8 pad_376[0x398 - 0x376];
    s32 unk_398;
    s32 unk_39c;
};

struct Unk_ov003_0222ed20_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0222ed20_Sess {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_0222ed20_St {
    Unk_ov003_0222ed20_V3 a;
    u32 pad_0c;
    Unk_ov003_0222ed20_V3 b;
};

struct Unk_ov003_0222ed20_Loc {
    u8 k[3];
    u8 pad;
    u32 w[2];
};

// ---- externs ----
// other modules' methods are reached through their real mangled symbols (object first)
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020af514 _ZN12Unk_020af51413func_020af514Ev
#define func_020af564 _ZN12Unk_020af53c13func_020af564Ev
#define func_020af590 _ZN12Unk_020af53c13func_020af590EjPjS0_S0_PhS1_S1_

extern "C" {
extern Unk_ov003_0222e734_Grid *gSceneBlockMap;
extern Unk_ov003_0222ed20_Sess *gCommManager;
extern u8 data_021ed2e6[];

BOOL CommManager_isSlotActive(void *, u32);
s32 CommSyncVar_SetVar(s32 a, s32 b, s32 c, s32 d);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
void FieldPos_FromBlockUnitCenter(Unk_ov003_0222ed20_V3 *out, s32 a, s32 b, s32 c, s32 d);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_02031130(s32 a, s32 b);
BOOL func_020310f8(s32 a, s32 b);
s32 func_02063b8c(s32 n);
void *MapBlock_GetItemPtr(void *c, u32 i, u32 j, s32 k);
void MapBlock_SetItem(void *c, u16 *p, u32 a, u32 b, u32 d);
BOOL Item_IsSnowman(u16 *p);
s32 Item_GetSnowmanIndex(u16 *p);
s32 func_020af590(void *o, s32 i, void *a, void *b, void *c, void *d, void *e, void *f);
s32 Actor_spawn(u32 a, u32 b, void *c, u32 d, void *e);
Unk_ov003_0222ed20_St *func_020af3f4();
void func_020af514();
s32 func_020b50bc();
s32 func_020b5184();
BOOL func_020af564(void *o);
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
Unk_ov003_0222eb10_Obj *Snowball_FindByParam(u32 id);
BOOL Snowball_FindSpawnPos(void *a, void *b, s32 c, s32 d);
}

// the eight actor slots
extern "C" {
Unk_ov003_0222eb10_Obj *sSnowballs[8];
}

// ---- functions ----

extern "C" void SnowballSpawner_SpawnLooseBalls(void *self) {
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) != 0 || func_020b50bc() == 0) {
        func_020af3f4();
        func_020af514();
        return;
    }
    struct {
        Unk_ov003_0222ed20_Loc l;
        s32 p[3];
        Unk_ov003_0222ed20_V3 LampLights, LightLevel;
    } f;
    u32 i;
    for (i = 0; i < 3; i++) {
        f.l.w[0] = 0;
        f.l.w[1] = 0;
        Clock_GetDateTime(f.l.w);
        if (((u8 *)&f.l)[6] < 6) {
            DateTime_SubDays(f.l.w, 1);
        }
        if (func_020af590(data_021ed2e6, i, &f.p[0], &f.p[1], &f.p[2], &f.l.k[0], &f.l.k[1], &f.l.k[2]) != 0) {
            if (f.l.k[0] == ((u8 *)&f.l)[9] && f.l.k[1] == ((u8 *)&f.l)[8] && f.l.k[2] == ((u8 *)&f.l)[7]) {
                func_020af3f4();
                func_020af514();
                return;
            }
        }
    }
    if (func_020b5184() != 0) {
        if (func_020af564(data_021ed2e6) == 0) {
            if (func_020af3f4()->a.x != 0) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                f.LampLights.x = s->a.x;
                f.LampLights.y = s->a.y;
                f.LampLights.z = s->a.z;
            } else {
                Snowball_FindSpawnPos(self, &f.LampLights, 0, 1);
            }
            if (func_020af3f4()->b.x != 0) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                Unk_ov003_0222ed20_V3 *pv = &s->b;
                f.LightLevel.x = pv->x;
                f.LightLevel.y = pv->y;
                f.LightLevel.z = pv->z;
            } else {
                Snowball_FindSpawnPos(self, &f.LightLevel, (s32)&f.LampLights, 1);
            }
            if (Actor_spawn(0xbd, 0, &f.LampLights, 0, self)) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                s->a.x = f.LampLights.x;
                s->a.y = f.LampLights.y;
                s->a.z = f.LampLights.z;
            }
            if (Actor_spawn(0xbd, 1, &f.LightLevel, 0, self)) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                s->b.x = f.LightLevel.x;
                s->b.y = f.LightLevel.y;
                s->b.z = f.LightLevel.z;
            }
        }
    }
}

extern "C" void SnowballSpawner_SpawnSnowmen(void *self) {
    Unk_ov003_0222e734_Grid *g = gSceneBlockMap;
    u32 by, bx;
    s32 lx, n;
    Unk_ov003_0222e734_Cell *cell;
    for (by = 1; by <= 4; by++) {
        for (bx = 1; bx <= 4; bx++) {
            if (bx < g->w && by < g->h && g->cells != 0) {
                cell = &g->cells[by * g->w + bx];
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
                                if (func_020af590(data_021ed2e6, v, 0, 0, 0, 0, 0, 0) == 0) {
                                    u16 tmp[1];
                                    tmp[0] = 0xfff1;
                                    MapBlock_SetItem(cell, tmp, lx, ly, 0);
                                } else {
                                    n = v * 2 + 2;
                                    Unk_ov003_0222ed20_V3 loc;
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

extern "C" BOOL Snowball_Register(Unk_ov003_0222eb10_Obj *p) {
    Unk_ov003_0222eb10_Obj **s = &sSnowballs[p->unk_08 & 7];
    if (*s != 0) {
        return FALSE;
    }
    *s = p;
    return TRUE;
}

extern "C" BOOL Snowball_Unregister(Unk_ov003_0222eb10_Obj *p) {
    Unk_ov003_0222eb10_Obj **s = &sSnowballs[p->unk_08 & 7];
    if (*s == p) {
        *s = 0;
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov003_0222eb10_Obj *Snowball_FindByParam(u32 id) {
    u32 i;
    for (i = 0; i < 8; i++) {
        Unk_ov003_0222eb10_Obj *p = sSnowballs[i];
        if (p != 0 && id == p->unk_08) {
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
    Unk_ov003_0222eb10_Obj *o = Snowball_FindByParam(id & 1);
    if (o != 0) {
        if (o->unk_39c == 0) {
            if (o->unk_398 == 0) {
                BOOL bit;
                if (o->unk_374.e) {
                    bit = TRUE;
                } else {
                    bit = FALSE;
                }
                if (bit == 0) {
                    if (o->unk_2e4 == 0) {
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
        Unk_ov003_0222eb10_Obj *p = sSnowballs[i];
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
        s32 r = func_02063b8c(c->cnt);
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
        s32 r = func_02063b8c(cnt);
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
    Unk_ov003_0222e734_Grid *g = gSceneBlockMap;
    static UnitMaskPool pool;
    UnitMaskPool_Clear(&pool);
    u32 by, bx, ly, lx, k;
    for (by = 1; by < 6; by++) {
        for (bx = 1; bx < 6; bx++) {
            for (ly = 0; ly < 16; ly++) {
                for (lx = 0; lx < 16; lx++) {
                    s32 x, y;
                    FieldUnit_FromBlockUnit(&x, &y, bx, by, lx, ly);
                    if (!func_02031130(x, y) || !func_020310f8(x, y + 1) || !func_020310f8(x, y + 2)) {
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

// I004a: itcm 0x01ffcb2c-0x01ffcc60 (7 Thumb functions): map-grid lookups, a vector helper, a callback list walker.
// NO mwcc-flags line: Thumb with the default -O4,s (with -O4,p Ground_GetUnitAttr and TownBlockMap_IsBuried differ).
#include "types.h"
#include "gfx/VecFx32.h"
#include "town/TownBlockCell.h"
#include "gfx/Camera.h"
#include "gfx/HBlankTask.h"
#include "nitro/io_access.h"
#include "proto/itcm/unk_01ffcb2c.h"
#include "proto/itcm/unk_01ffcfc0.h"

struct Chunk {
    /* 0x00 */ u8 *attrs;
    /* 0x04 */ u8 *walkLinks;
};

// CollisionMap (src/main/unk_0202fa70.cpp) by its members: the block references are pointers
struct Grid {
    Chunk blocks[6][6];
    void *shapeQuery;
    u32 numBlocksX;
    u32 numBlocksZ;
};


struct CellGrid {
    /* 0x00 */ TownBlockCell *cells;
    /* 0x04 */ s32 w;
};

struct Kind {
    u8 cmd;
};

struct Obj {
    /* 0x00 */ Kind *c;
    /* 0x04 */ u8 *pRenderObj;
};

extern "C" {
extern Grid *gCurCollisionMap;
extern HBlankTask *sHBlankListHead;
}

static inline Chunk *At(s32 x, s32 z) {
    Grid *g = gCurCollisionMap;
    if (x >= 0 && z >= 0 && (u32)x < g->numBlocksX && (u32)z < g->numBlocksZ) {
        return &g->blocks[z][x];
    }
    return 0;
}

extern "C" void HBlank_Handler(void) {
    if (IO_R((vu16 *)0x04000006) < 192) {
        HBlankTask *n = sHBlankListHead;
        if (n != 0) {
            do {
                if (n->param != 0) {
                    n->param();
                }
                n = n->next;
            } while (n != 0);
        }
    }
}

extern "C" BOOL func_01ffcc10(void *a, Obj *o) {
    if ((o->c->cmd & 0x1f) != 6) {
        return TRUE;
    }
    if (*(u32 *)(o->pRenderObj + 0x34) == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL TownBlockMap_IsBuried(CellGrid *g, s32 x, s32 z) {
    s32 cx = x >> 4;
    s32 cz = z >> 4;
    u16 row = g->cells[cx + cz * g->w].buriedFlags[z - (cz << 4)];
    if ((row & (1 << (x - (cx << 4)))) == 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" void Camera_GetLookAtPoint(VecFx32 *out, Camera *c) {
    VecFx32 t;
    Camera_GetLookAtOffset(&t, c);
    Vec_Add(out, (VecFx32 *)&c->currentFocus, &t);
}

extern "C" void Camera_GetLookAtOffset(VecFx32 *out, Camera *c) {
    Vec_Add(out, (VecFx32 *)&c->currentOffset, (VecFx32 *)&c->unk_84);
}

extern "C" Chunk *CollisionMap_GetBlockRef(s32 x, s32 z) {
    Chunk *p = At(x, z);
    if (p != 0) {
        return p;
    }
    return 0;
}

extern "C" u32 Ground_GetUnitAttr(s32 x, s32 y) {
    Chunk *c = CollisionMap_GetBlockRef(x >> 4, y >> 4);
    u32 v;
    if (c != 0) {
        v = c->attrs[(x & 15) + ((y & 15) << 4)];
    } else {
        v = 21;
    }
    return v;
}


// I004a: itcm 0x01ffcb2c-0x01ffcc60 (7 Thumb functions): map-grid lookups, a vector helper, a callback list walker.
// NO mwcc-flags line: Thumb with the default -O4,s (with -O4,p func_01ffcb2c and func_01ffcbd8 differ).
#include "types.h"
#include "game/Vec3.h"
#include "town/TownBlockCell.h"
#include "gfx/Unk_020d93b8.h"
#include "gfx/HBlankTask.h"

struct Chunk {
    /* 0x00 */ u8 *attrs;
    /* 0x04 */ u8 *walkLinks;
};

struct Grid {
    /* 0x000 */ u8 pad_00[0x124];
    /* 0x124 */ u32 numBlocksX;
    /* 0x128 */ u32 numBlocksZ;
};


struct CellGrid {
    /* 0x00 */ Cell *cells;
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
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
Chunk *func_01ffcb5c(s32 x, s32 z);
void Camera_GetLookAtOffset(Vec3 *out, Unk_020d93b8 *c);
}

static inline Chunk *At(s32 x, s32 z) {
    Grid *g = gCurCollisionMap;
    if (x >= 0 && z >= 0 && (u32)x < g->numBlocksX && (u32)z < g->numBlocksZ) {
        return (Chunk *)((u8 *)g + z * 0x30 + x * 8);
    }
    return 0;
}

extern "C" void HBlank_Handler(void) {
    if (*(vu16 *)0x04000006 < 192) {
        HBlankTask *n = sHBlankListHead;
        if (n != 0) {
            do {
                // HBlankTask::param holds the H-blank callback (HBlank_Add / HBlank_Replace pass it as an s32)
                if (n->param != 0) {
                    ((void (*)(void))n->param)();
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

extern "C" BOOL func_01ffcbd8(CellGrid *g, s32 x, s32 z) {
    s32 cx = x >> 4;
    s32 cz = z >> 4;
    u16 row = g->cells[cx + cz * g->w].buriedFlags[z - (cz << 4)];
    if ((row & (1 << (x - (cx << 4)))) == 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" void Camera_GetLookAtPoint(Vec3 *out, Unk_020d93b8 *c) {
    Vec3 t;
    Camera_GetLookAtOffset(&t, c);
    func_01ffd070(out, (Vec3 *)&c->currentFocus, &t);
}

extern "C" void Camera_GetLookAtOffset(Vec3 *out, Unk_020d93b8 *c) {
    func_01ffd070(out, (Vec3 *)&c->currentOffset, (Vec3 *)&c->unk_84);
}

extern "C" Chunk *func_01ffcb5c(s32 x, s32 z) {
    Chunk *p = At(x, z);
    if (p != 0) {
        return p;
    }
    return 0;
}

extern "C" u32 func_01ffcb2c(s32 x, s32 y) {
    Chunk *c = func_01ffcb5c(x >> 4, y >> 4);
    u32 v;
    if (c != 0) {
        v = c->attrs[(x & 15) + ((y & 15) << 4)];
    } else {
        v = 21;
    }
    return v;
}


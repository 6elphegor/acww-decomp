// I004a: itcm 0x01ffcb2c-0x01ffcc60 (7 Thumb functions): map-grid lookups, a vector helper, a callback list walker.
// NO mwcc-flags line: Thumb with the default -O4,s (with -O4,p func_01ffcb2c and func_01ffcbd8 differ).
#include "types.h"

struct Chunk {
    /* 0x00 */ u8 *unk_00;
    /* 0x04 */ u8 *unk_04;
};

struct Grid {
    /* 0x000 */ u8 pad_00[0x124];
    /* 0x124 */ u32 unk_124;
    /* 0x128 */ u32 unk_128;
};

struct Vec3 {
    s32 x, y, z;
};

struct Cam {
    /* 0x00 */ u8 pad_00[0x84];
    /* 0x84 */ Vec3 unk_84;
    /* 0x90 */ u8 pad_90[0x150 - 0x90];
    /* 0x150 */ Vec3 unk_150;
    /* 0x15c */ Vec3 unk_15c;
};

struct Cell {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ u16 *unk_24;
};

struct CellGrid {
    /* 0x00 */ Cell *unk_00;
    /* 0x04 */ s32 unk_04;
};

struct Node {
    /* 0x00 */ u8 pad_00[0x0c];
    /* 0x0c */ void (*unk_0c)(void);
    /* 0x10 */ u8 pad_10[0x08];
    /* 0x18 */ Node *unk_18;
};

struct Kind {
    u8 unk_00;
};

struct Obj {
    /* 0x00 */ Kind *unk_00;
    /* 0x04 */ u8 *unk_04;
};

extern "C" {
extern Grid *gCurCollisionMap;
extern Node *sHBlankListHead;
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
Chunk *func_01ffcb5c(s32 x, s32 z);
void Camera_GetLookAtOffset(Vec3 *out, Cam *c);
}

static inline Chunk *At(s32 x, s32 z) {
    Grid *g = gCurCollisionMap;
    if (x >= 0 && z >= 0 && (u32)x < g->unk_124 && (u32)z < g->unk_128) {
        return (Chunk *)((u8 *)g + z * 0x30 + x * 8);
    }
    return 0;
}

extern "C" void HBlank_Handler(void) {
    if (*(vu16 *)0x04000006 < 192) {
        Node *n = sHBlankListHead;
        if (n != 0) {
            do {
                if (n->unk_0c != 0) {
                    n->unk_0c();
                }
                n = n->unk_18;
            } while (n != 0);
        }
    }
}

extern "C" BOOL func_01ffcc10(void *a, Obj *o) {
    if ((o->unk_00->unk_00 & 0x1f) != 6) {
        return TRUE;
    }
    if (*(u32 *)(o->unk_04 + 0x34) == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_01ffcbd8(CellGrid *g, s32 x, s32 z) {
    s32 cx = x >> 4;
    s32 cz = z >> 4;
    u16 row = g->unk_00[cx + cz * g->unk_04].unk_24[z - (cz << 4)];
    if ((row & (1 << (x - (cx << 4)))) == 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" void Camera_GetLookAtPoint(Vec3 *out, Cam *c) {
    Vec3 t;
    Camera_GetLookAtOffset(&t, c);
    func_01ffd070(out, &c->unk_15c, &t);
}

extern "C" void Camera_GetLookAtOffset(Vec3 *out, Cam *c) {
    func_01ffd070(out, &c->unk_150, &c->unk_84);
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
        v = c->unk_00[(x & 15) + ((y & 15) << 4)];
    } else {
        v = 21;
    }
    return v;
}


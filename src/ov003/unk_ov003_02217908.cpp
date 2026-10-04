// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_02003a6c_Vec.h"
#include "snd/Unk_02003c30.h"
#include "snd/Unk_02003c40.h"
#include "gfx/Unk_ov003_02215c7c_Blk.h"
#include "field/Unk_ov003_02217910_V3D.h"
#include "gfx/Model.h"

// TU17 of ov003: ground helper free functions 0x02217908..0x02217b10 and the six colour constants of its header




typedef Unk_02003a6c_Vec Unk_ov003_02217910_V3;




struct Unk_ov003_02217970_Rec {
    u8 found;
    s32 posX;
    s32 posY;
    s32 posZ;
    s32 distance;
    s32 kind;
};

struct Unk_ov003_022179b8_Ent {
    s32 kind;
    s32 x;
    s32 z;
};

struct Unk_ov003_02217a9c_Cell {
    u8 pad_00[0x20];
    void *bgModel;
    u8 pad_24[4];
};

struct Unk_ov003_02217a9c_Grid {
    Unk_ov003_02217a9c_Cell *cells;
    u32 w;
    u32 h;
};

struct Unk_ov003_02217a84_Sub {
    u8 pad_00[0x10];
    void *bgObjects;
};

// 4-byte colour constructors (unreferenced except by __sinit)
struct Unk_ov003_02235460_Col {
    u8 r, g, b, a;
    Unk_ov003_02235460_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

extern "C" {
extern void *gSceneBlockMap;
extern void *gCamera;
extern s32 data_020c8cbc;
extern u8 data_0213b91c[];
extern u8 data_0213b938[];

s32 Vec_DistXZ(Unk_ov003_02217910_V3 *a, Unk_ov003_02217910_V3 *b);
s32 BgMgt_GetCount();
}
Unk_ov003_022179b8_Ent BgMgt_GetEntry(u8 *obj, s32 i);
extern "C" {
}

extern "C" {
Unk_ov003_02235460_Col data_ov003_02235460(31, 20, 20, 31);
Unk_ov003_02235460_Col data_ov003_02235474(20, 20, 31, 31);
Unk_ov003_02235460_Col data_ov003_02235470(31, 31, 20, 31);
Unk_ov003_02235460_Col data_ov003_0223546c(20, 31, 20, 31);
Unk_ov003_02235460_Col data_ov003_02235468(20, 31, 31, 31);
Unk_ov003_02235460_Col data_ov003_02235464(20, 24, 24, 31);
// Data order: this unit is placed object by object (see object_order.txt).
}

// ---- functions ----
extern "C" {
void FieldGround_ResetSoundSrc(Unk_ov003_02217970_Rec *r);
s32 FieldGround_ConsiderSoundSrc(Unk_ov003_02217970_Rec *r, s32 d, Unk_ov003_02217910_V3 *p, s32 k);
void *FieldGround_GetBlockBgObjects(Unk_ov003_02217970_Rec *r, u32 x, u32 y);
void *FieldGround_GetBlockAcre(Unk_ov003_02217970_Rec *r, u32 x, u32 y);
}

extern "C" BOOL FieldGround_DrawBackdrop(Model *p) {
    if (gCamera != 0) {
        p->drawScaled(0);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL FieldGround_ReleaseBackdrop(Model *p) {
    p->clearResource();
    return TRUE;
}

extern "C" void *FieldGround_GetBlockAcre(Unk_ov003_02217970_Rec *r, u32 x, u32 y) {
    Unk_ov003_02217a9c_Grid *g = (Unk_ov003_02217a9c_Grid *)gSceneBlockMap;
    if (g != 0) {
        Unk_ov003_02217a9c_Cell *c;
        if (x < g->w && y < g->h && g->cells != 0) {
            c = &g->cells[y * g->w + x];
        } else {
            c = 0;
        }
        if (c != 0) {
            return c->bgModel;
        }
    }
    return 0;
}

extern "C" void *FieldGround_GetBlockBgObjects(Unk_ov003_02217970_Rec *r, u32 x, u32 y) {
    Unk_ov003_02217a84_Sub *s = (Unk_ov003_02217a84_Sub *)FieldGround_GetBlockAcre(r, x, y);
    if (s != 0) {
        return s->bgObjects;
    }
    return 0;
}

extern "C" Unk_ov003_02217970_Rec *FieldGround_FindSoundSrc(Unk_ov003_02217970_Rec *out, Unk_ov003_02217910_V3 *pos) {
    u8 *obj;
    u32 n;
    FieldGround_ResetSoundSrc(out);
    s32 cx = pos->x >> 17;
    s32 cz = pos->z >> 17;
    s32 dy, dx;
    for (dy = -1; dy <= 1; dy++) {
        for (dx = -1; dx <= 1; dx++) {
            Unk_ov003_02217910_V3D base;
            s32 xx = cx + dx;
            base.x = xx << 17;
            base.z = (cz + dy) << 17;
            obj = (u8 *)FieldGround_GetBlockBgObjects(out, xx, cz + dy);
            if (obj != 0) {
                u32 i;
                n = BgMgt_GetCount();
                for (i = 0; i < n; i++) {
                    Unk_ov003_022179b8_Ent e = BgMgt_GetEntry(obj, i);
                    switch (e.kind) {
                    case 5:
                    case 15:
                    case 17:
                    case 18: {
                        Unk_ov003_02217910_V3 p;
                        p.x = base.x + e.x;
                        p.y = 0;
                        p.z = base.z + e.z;
                        FieldGround_ConsiderSoundSrc(out, Vec_DistXZ(&p, pos), &p, e.kind);
                    }
                    }
                }
            }
        }
    }
    return out;
}

extern "C" BOOL FieldGround_ConsiderSoundSrc(Unk_ov003_02217970_Rec *r, s32 d, Unk_ov003_02217910_V3 *p, s32 k) {
    if (d < r->distance) {
        r->posX = p->x;
        r->posY = p->y;
        r->posZ = p->z;
        r->distance = d;
        r->kind = k;
        r->found = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" void FieldGround_EndSoundSrc() {
}

extern "C" void FieldGround_ResetSoundSrc(Unk_ov003_02217970_Rec *r) {
    r->found = 0;
    r->posX = 0;
    r->posY = 0;
    r->posZ = 0;
    r->kind = 0x11;
    r->distance = data_020c8cbc << 3;
}

extern "C" s32 *FieldGround_GetSoundSrcPos(Unk_ov003_02217970_Rec *r) {
    if (r->found != 0) {
        return &r->posX;
    }
    return 0;
}

extern "C" s32 FieldGround_GetSoundSrcKind(Unk_ov003_02217970_Rec *r) {
    return r->kind;
}

extern "C" void FieldGround_InitEnvChannel(void *volatile *p) {
    *p = data_0213b91c;
    *p = data_0213b938;
}

extern "C" void FieldGround_DestroyEnvChannel() {
}

extern "C" void FieldGround_ResetEnvChannel(Unk_02003c30 *p) {
    p->callReset();
}

extern "C" void FieldGround_PlayEnvSe(Unk_02003c40 *p, Unk_ov003_02217910_V3 *v, void *a) {
    Unk_ov003_02217910_V3 t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    p->callUpdateRelative(&t);
    p->callRequest(a);
}

extern "C" void FieldGround_ReleaseEnvChannel(Unk_02003c30 *p) {
    p->callRelease();
}

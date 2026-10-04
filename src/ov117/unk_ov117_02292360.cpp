#include "types.h"
#include "town/TownMapMarkers.h"
#include "game/StrBSizeData.h"
#include "npc/VillagerDataItemView.h"
#include "room/HouseData.h"



inline void *operator new(unsigned long, void *p) {
    return p;
}

struct TownMapAcreImage {
    u8 b[0x200];
    TownMapAcreImage();
    ~TownMapAcreImage();
};

struct TownMapImage {
    TownMapAcreImage tile[16];
    TownMapMarkers icons;
    TownMapImage();
};

struct Unk_ov117_02292b54_Cell {
    u8 pad_00[0x28];
};

struct Unk_ov117_02292b54_Grid {
    Unk_ov117_02292b54_Cell *cells;
    u32 w;
    u32 h;
};

static inline Unk_ov117_02292b54_Cell *Unk_ov117_02292b54_GetCell(Unk_ov117_02292b54_Grid *g, u32 x, u32 y) {
    if (x < g->w && y < g->h && g->cells != NULL) {
        return &g->cells[y * g->w + x];
    }
    return NULL;
}


extern "C" {
TownMapImage *sTownMapImage;
extern u8 gSaveHouse[];
extern u8 gSaveVillagers[];

void Mem_Free(void *p);
void *Mem_Alloc(u32 n);
void MI_CpuCopy8(void *a, void *b, u32 n);
void CollisionMap_Select(s32 a);
Unk_ov117_02292b54_Grid *TownBlockMap_Get();
s32 BlockMap_FindItemAnyAttr(void *m, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g, s32 h);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
u16 *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void *StrBSize_Get(u16 *t);
u32 MapBlock_GetAttr(void *c);
s32 Ground_FindTerrainMarker(s32 *a, s32 *b, s32 c, s32 d);
BOOL Ground_GetMapColors(u8 *out, s32 a, s32 b);
void *SaveVillagers_Get(void *, s32);
BOOL HousePos_IsValid(void *p);
u16 Item_MakeNeighborHouse(u32 x);

void TownMapImage_FinishGlobal(void *a, TownMapMarkers *b);
void TownMapImage_BuildMarkersGlobal(u32 i);
void TownMapImage_DrawRowGlobal(u32 i);
void TownMapImage_AllocGlobal();
void TownMapImage_Build(void *a, TownMapMarkers *b);
TownMapMarkers *TownMapImage_GetMarkers(TownMapImage *o);
void TownMapImage_CopyPixels(void *o, void *a);
u8 *TownMapImage_GetAcre(u8 *o, u32 x, u32 y);
void TownMapImage_BuildMarkers(TownMapImage *o, u32 sel);
void TownMapImage_DrawAcreRow(TownMapImage *o, u32 i);
void TownMapImage_DrawAcre(u8 *buf, s32 bx, s32 by);
void TownMapMarkers_AddLandmarks(TownMapMarkers *s);
void TownMapMarkers_AddHouses(TownMapMarkers *s);
void TownMapMarkers_Copy(TownMapMarkers *s, TownMapMarkers *d);
void TownMapMarkers_AddNookShop(TownMapMarkers *s);
void TownMapMarkers_AddTownHall(TownMapMarkers *s);
void TownMapMarkers_AddAbleSisters(TownMapMarkers *s);
void TownMapMarkers_AddGateHouse(TownMapMarkers *s);
void TownMapMarkers_AddMuseum(TownMapMarkers *s);
void TownMapMarkers_AddPlayerHouse(TownMapMarkers *s);
void TownMapMarkers_AddVillagerHouses(TownMapMarkers *s);
void TownMapMarkers_AddTerrainMarkers(TownMapMarkers *s);
u8 TownMapMarkers_GetKind(TownMapMarkers *s, u32 i);
TownMapMarker *TownMapMarkers_Get(TownMapMarkers *s, u32 i);
void TownMapMarkers_Set(TownMapMarkers *s, s32 i, s32 x, s32 y, u8 z);
void TownMapMarkers_Clear(TownMapMarkers *self);

}

TownMapMarkers::TownMapMarkers() {
    TownMapMarker *e = this->e;
    do {
        e->x = 0;
        e->y = 0;
        e++;
    } while (e != this->e + 17);
    TownMapMarkers_Clear(this);
}

TownMapMarkers::~TownMapMarkers() {
}

extern "C" void TownMapMarkers_Clear(TownMapMarkers *self) {
    u32 i;
    for (i = 0; i < 17; i++) {
        self->e[i].x = -1;
        self->e[i].y = -1;
        self->e[i].z = 0;
    }
}

extern "C" void TownMapMarkers_Set(TownMapMarkers *s, s32 i, s32 x, s32 y, u8 z) {
    if (i < 17) {
        s->e[i].x = x;
        s->e[i].y = y;
        s->e[i].z = z;
    }
}

extern "C" TownMapMarker *TownMapMarkers_Get(TownMapMarkers *s, u32 i) {
    if (i < 17) {
        s32 m = -1;
        if (s->e[i].x != m) {
            s = (TownMapMarkers *)((u8 *)s + i * 6);
            if (*(s16 *)((u8 *)s + 2) != m) return (TownMapMarker *)s;
        }
        return NULL;
    }
    return NULL;
}

extern "C" u8 TownMapMarkers_GetKind(TownMapMarkers *s, u32 i) {
    if (i < 17) {
        return s->e[i].z;
    }
    return s->e[0].z;
}

extern "C" void TownMapMarkers_AddTerrainMarkers(TownMapMarkers *s) {
    s32 x, y;
    s32 n;
    Unk_ov117_02292b54_Grid *g;
    CollisionMap_Select(1);
    n = 0;
    g = TownBlockMap_Get();
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (MapBlock_GetAttr(Unk_ov117_02292b54_GetCell(g, x, y)) & 4) {
                s32 px, py;
                s32 t = Ground_FindTerrainMarker(&px, &py, x, y);
                if (t != 4) {
                    px = px << 1;
                    py = py << 1;
                    px += 1;
                    py += 1;
                    switch (t) {
                    case 0:
                        px += 1;
                        py += 3;
                        break;
                    case 1:
                        px += 3;
                        py += 1;
                        break;
                    case 2:
                        py += 4;
                        break;
                    case 3:
                        px += 2;
                        py += 4;
                        break;
                    }
                    TownMapMarkers_Set(s, n, px, py, t);
                    n++;
                }
            }
        }
    }
    CollisionMap_Select(0);
}

extern "C" void TownMapMarkers_AddVillagerHouses(TownMapMarkers *s) {
    s32 i;
    s32 zero = 0;
    for (i = 0; i < 8; i++) {
        void *p = SaveVillagers_Get(gSaveVillagers, i);
        if (HousePos_IsValid(((VillagerDataItemView *)p)->getHousePos())) {
            u16 t = Item_MakeNeighborHouse(i);
            s32 bx = ((VillagerDataItemView *)p)->getHousePos()[0];
            s32 by = ((VillagerDataItemView *)p)->getHousePos()[1];
            s32 o1, o2, o3, o4;
            s32 x = bx << 1;
            s32 y = by << 1;
            x += 1;
            y += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                y = y + (o2 >> 11);
            }
            TownMapMarkers_Set(s, i + 3, x, y, zero);
        }
    }
}

extern "C" void TownMapMarkers_AddPlayerHouse(TownMapMarkers *s) {
    Unk_ov117_02292b54_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        ((HouseData *)gSaveHouse)->getLevel();
        u16 t[2];
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        t[0] = 0x5014;
        t[1] = 0x501a;
        if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &t[0], &t[1], 1, 0)) {
            FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
            u16 *cell;
            s32 bx = *(volatile s32 *)&x;
            s32 bz = *(volatile s32 *)&z;
            s32 hx = bx >> 4;
            s32 hz = bz >> 4;
            cell = BlockMap_GetItemPtr(g, hx, hz, bx - (hx << 4), bz - (hz << 4), 0);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(cell);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            TownMapMarkers_Set(s, 11, x, z, 0);
        }
    }
}

extern "C" void TownMapMarkers_AddMuseum(TownMapMarkers *s) {
    Unk_ov117_02292b54_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        u16 t = 0x5011;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &t, &t, 0x800, 0)) {
            FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            TownMapMarkers_Set(s, 13, x, z, 0);
        }
    }
}

extern "C" void TownMapMarkers_AddGateHouse(TownMapMarkers *s) {
    Unk_ov117_02292b54_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        u16 t = 0x500b;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &t, &t, 0, 0)) {
            FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            TownMapMarkers_Set(s, 16, x, z, 0);
        }
    }
}

extern "C" void TownMapMarkers_AddAbleSisters(TownMapMarkers *s) {
    Unk_ov117_02292b54_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        u16 t = 0x500c;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &t, &t, 2, 0)) {
            FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            TownMapMarkers_Set(s, 15, x, z, 0);
        }
    }
}

extern "C" void TownMapMarkers_AddTownHall(TownMapMarkers *s) {
    Unk_ov117_02292b54_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        u16 t = 0x5000;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &t, &t, 0x200, 0)) {
            FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            TownMapMarkers_Set(s, 12, x, z, 0);
        }
    }
}

extern "C" void TownMapMarkers_AddNookShop(TownMapMarkers *s) {
    Unk_ov117_02292b54_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        u16 t[2];
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        t[0] = 0x500d;
        t[1] = 0x5010;
        if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &t[0], &t[1], 2, 0)) {
            FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
            u16 *cell;
            s32 bx = *(volatile s32 *)&x;
            s32 bz = *(volatile s32 *)&z;
            s32 hx = bx >> 4;
            s32 hz = bz >> 4;
            cell = BlockMap_GetItemPtr(g, hx, hz, bx - (hx << 4), bz - (hz << 4), 0);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(cell);
            if (h) {
                ((StrBSizeData *)h)->getSolidBounds(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            TownMapMarkers_Set(s, 14, x, z, 0);
        }
    }
}

extern "C" void TownMapMarkers_Copy(TownMapMarkers *s, TownMapMarkers *d) {
    u32 i;
    for (i = 0; i < 17; i++) {
        d->e[i].x = s->e[i].x;
        d->e[i].y = s->e[i].y;
        d->e[i].z = s->e[i].z;
    }
}

extern "C" void TownMapMarkers_AddHouses(TownMapMarkers *s) {
    TownMapMarkers_AddVillagerHouses(s);
}

extern "C" void TownMapMarkers_AddLandmarks(TownMapMarkers *s) {
    TownMapMarkers_AddTerrainMarkers(s);
    TownMapMarkers_AddTownHall(s);
    TownMapMarkers_AddGateHouse(s);
    TownMapMarkers_AddPlayerHouse(s);
    TownMapMarkers_AddMuseum(s);
    TownMapMarkers_AddAbleSisters(s);
    TownMapMarkers_AddNookShop(s);
}

TownMapAcreImage::TownMapAcreImage() {
    for (s32 i = 0; (u32)i < 0x200; i++) {
        b[i] = 0;
    }
}

TownMapAcreImage::~TownMapAcreImage() {
}

extern "C" void TownMapImage_DrawAcre(u8 *buf, s32 bx, s32 by) {
    u32 bx16, by16, n; u8 v; u32 ex, ey, i, j, k, l; BOOL ev, od;
    CollisionMap_Select(1);
    bx16 = (bx << 4) + 0x10;
    by16 = (by << 4) + 0x10;
    n = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    u8 out[4];
                    ex = (i << 3) + k;
                    ey = (j << 3) + l;
                    if ((ey & 1) == 0) ev = TRUE; else ev = FALSE;
                    if ((ex & 1) == 0) od = TRUE; else od = FALSE;
                    v = 0;
                    if (Ground_GetMapColors(out, bx16 + (ey >> 1), by16 + (ex >> 1))) {
                        if (ev) {
                            u8 t = (od ? out[0] : out[2]) & 0xf;
                            v = t;
                        } else {
                            u8 t = (od ? out[1] : out[3]) & 0xf;
                            v = (u8)(t << 4);
                        }
                    }
                    buf[n++ >> 1] |= v;
                }
            }
        }
    }
    CollisionMap_Select(0);
}

TownMapImage::TownMapImage() {
}

extern "C" void TownMapImage_DrawAcreRow(TownMapImage *o, u32 i) {
    u32 n = 0;
    u32 k = i & 3;
    for (; n < 4; n++) {
        u8 *p = TownMapImage_GetAcre((u8 *)o, n, k);
        TownMapImage_DrawAcre(p, n, k);
    }
}

extern "C" void TownMapImage_BuildMarkers(TownMapImage *o, u32 sel) {
    if (sel == 0) {
        TownMapMarkers_AddHouses((TownMapMarkers *)((u8 *)o + 0x2000));
    } else {
        TownMapMarkers_AddLandmarks((TownMapMarkers *)((u8 *)o + 0x2000));
    }
}

extern "C" u8 *TownMapImage_GetAcre(u8 *o, u32 x, u32 y) {
    if (x < 4 && y < 4) {
        o += (x + y * 4) << 9;
    }
    return o;
}

extern "C" void TownMapImage_CopyPixels(void *o, void *a) {
    MI_CpuCopy8(o, a, 0x2000);
}

extern "C" TownMapMarkers *TownMapImage_GetMarkers(TownMapImage *o) {
    return (TownMapMarkers *)((u8 *)o + 0x2000);
}

extern "C" void TownMapImage_Build(void *a, TownMapMarkers *b) {
    TownMapImage_AllocGlobal();
    TownMapImage_DrawRowGlobal(0);
    TownMapImage_DrawRowGlobal(1);
    TownMapImage_DrawRowGlobal(2);
    TownMapImage_DrawRowGlobal(3);
    TownMapImage_BuildMarkersGlobal(0);
    TownMapImage_BuildMarkersGlobal(1);
    TownMapImage_FinishGlobal(a, b);
}

extern "C" void TownMapImage_AllocGlobal() {
    if (sTownMapImage == NULL) {
        sTownMapImage = (TownMapImage *)Mem_Alloc(0x2066);
        if (sTownMapImage != NULL) {
            new (sTownMapImage) TownMapImage();
        }
    }
}

extern "C" void TownMapImage_DrawRowGlobal(u32 i) {
    if (sTownMapImage != NULL) {
        TownMapImage_DrawAcreRow(sTownMapImage, i);
    }
}

extern "C" void TownMapImage_BuildMarkersGlobal(u32 i) {
    if (sTownMapImage != NULL) {
        TownMapImage_BuildMarkers(sTownMapImage, i);
    }
}

extern "C" void TownMapImage_FinishGlobal(void *a, TownMapMarkers *b) {
    if (sTownMapImage != NULL) {
        TownMapImage_CopyPixels(sTownMapImage, a);
        if (b != NULL) {
            TownMapMarkers_Copy(TownMapImage_GetMarkers(sTownMapImage), b);
        }
        Mem_Free(sTownMapImage);
        sTownMapImage = NULL;
    }
}


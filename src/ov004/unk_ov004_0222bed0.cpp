#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- real symbol names of main-module methods

#define func_02003e50 _ZN12Unk_02003c3013func_02003e50Ev
#define func_02003e80 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec
#define func_02003ecc _ZN12Unk_02003c3013func_02003eccEv
#define Model_drawShapesDirect _ZN5Model16drawShapesDirectEPi
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define func_02133150 _s32_div_f

#define Unk_c788_call _ZN13RoomItemIcons13drawItemModelEtRK22Unk_ov004_0222c570_VecS2_sss
#define Unk_c7e0_call _ZN13RoomItemIcons14setupIconModelEjRK22Unk_ov004_0222c570_VecS2_sss

// ---------------------------------------------------------------- helper types
struct Unk_ov004_0222c570_Vec {
    s32 x, y, z;
    Unk_ov004_0222c570_Vec() {}
    Unk_ov004_0222c570_Vec(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov004_0222c570_Vec(const Unk_ov004_0222c570_Vec &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov004_0222bf34_P2 {
    s32 a, b;
    Unk_ov004_0222bf34_P2() {}
    Unk_ov004_0222bf34_P2(s32 x, s32 y) {
        a = x;
        b = y;
    }
    Unk_ov004_0222bf34_P2(const Unk_ov004_0222bf34_P2 &o) {
        a = o.a;
        b = o.b;
    }
};

typedef Unk_ov004_0222c570_Vec Unk_ov004_0222bf34_V3;
typedef Unk_ov004_0222bf34_P2 Unk_ov004_P2;
typedef Unk_ov004_0222bf34_V3 Unk_ov004_V3;

struct Unk_ov004_0222c570_Mtx {
    s64 v[6];
};

// Effect entry, 0x94 bytes, 15 of them at sRoomItemDrops (5 groups of 3)
struct Unk_ov004_0222bff4_Entry {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ Unk_ov004_P2 unk_10;
    /* 0x18 */ Unk_ov004_V3 unk_18;
    /* 0x24 */ Unk_ov004_V3 unk_24;
    /* 0x30 */ Unk_ov004_V3 unk_30;
    /* 0x3c */ Unk_ov004_V3 unk_3c;
    /* 0x48 */ s16 unk_48;
    /* 0x4a */ s16 unk_4a;
    /* 0x4c */ u8 unk_4c[0x40];
    /* 0x8c */ s8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91[3];
};

typedef Unk_ov004_0222bff4_Entry Unk_ov004_Entry;

// the same 0x94-byte object as the global array element; its constructor and destructor (0x0222c9d0 / 0x0222c9bc) belong to the next unit
class Unk_ov004_0222c9d0 {
public:
    Unk_ov004_0222c9d0();
    ~Unk_ov004_0222c9d0();

    u8 pad[0x94];
};

// the 15 effect entries as one object: its implicit destructor is func_ov004_0222c9a0 (__cxa_vec_cleanup), its implicit constructor is inlined in the __sinit
struct RoomItemDropList {
    Unk_ov004_0222c9d0 unk_00[15];
};

struct Unk_0209d498_Time {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

struct Unk_ov004_0222c570_Global {
    u8 pad_00[0x5c];
    Unk_ov004_0222c570_Vec unk_5c;
};

struct Unk_ov004_0222c570_Comm {
    u8 pad_00[0x64];
    s32 unk_64;
};

class Unk_020dbd44 {
public:
    Unk_020dbd44();
    ~Unk_020dbd44();
    u32 pad[4];
};

struct Unk_ov004_0222c880_Model {
    u8 pad_00[0x5c];
    void *unk_5c;
    u8 pad_60[4];
    Unk_ov004_0222c570_Mtx unk_64;
};

class RoomItemIcons : public GameProc {
public:
    RoomItemIcons() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    BOOL loadIconModels();
    void drawGridItems(void *grid);
    Unk_ov004_0222c880_Model *setupIconModel(u32 idx, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz);
    void drawIconModel(Unk_ov004_0222c880_Model *model, Unk_ov004_0222c570_Mtx m);
    void drawItemModel(u16 id, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz);

    /* 0x050 */ void *unk_50[0x49];
    /* 0x174 */ Unk_020dbd44 unk_174;
};

// ---------------------------------------------------------------- externs
extern "C" {
extern s32 gSceneBlockMap;
extern void *gCamera;
extern Unk_ov004_0222c570_Comm *gCommManager;
extern u8 data_021f47e0[];
extern u8 gCameraLookAt[];

void *func_02095204(u32 a);
s32 CommManager_isOnline(void *g);
void ModelSet_Release(void *p);
s32 ModelSet_Load(void *p, void *a, s32 b);
void *ModelSet_Find(void *p, u32 a);
u32 Item_GetIconModelName(s32 a, s32 b);
void Town_GetEnvironmentRank();
void FieldPos_FromUnitCenter(Unk_ov004_V3 *out, s32 a, s32 b);
s32 FtrMgr_GetSurfaceHeight(s32 a, s32 b);
void func_02003e50(void *p);
void func_02003e80(void *p, void *v);
void func_02003ecc(void *p);
s32 func_02003e70(void *p, u32 a, u32 b, u32 c);
void VEC_Add(void *a, void *b, void *c);
void FieldPos_SnapToUnitCenter(void *a, void *b);
u16 *BlockMap_GetItemPtrAtPos(void *g, void *v, s32 z);
s32 FtrMgr_GetSurfaceHeightAtPos(void *p);
s32 Item_GetInfoUnk07(u16 *p);
u32 WorldCurve_ToCurved(void *a, void *b);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
void func_020e8464(void *m, s32 x, s32 y, s32 z);
void func_020e84f8(void *m, s32 x, s32 y, s32 z);
void Model_drawShapesDirect(void *p, s32 a);
u16 SceneLights_GetRoomColor();
void NNS_G3dMdlSetMdlEmi(void *p, s32 a, u32 b);
void PendingUnit_ApplyAt(void *p, u32 a);
void Scene_InTown(void);
void BlockMap_SetItemAtUnit(void *grid, u16 *v, s32 x, s32 y, s32 z);
s32 func_02133150(s32 a, s32 b);
u32 Scene_GetCurrent(void);
void Snd_PlaySe(s32 a);

// the manager's methods called as plain functions with the object first (the symbols.txt names)
void Unk_c788_call(s32 mgr, u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s32 d, s32 e);
void Unk_c7e0_call(s32 mgr, u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s32 d, s32 e);

void ItemDropList_Release(Unk_ov004_Entry *e);
void ItemDropList_Draw(Unk_ov004_Entry *e);
void ItemDropList_Update(Unk_ov004_Entry *e);
void ItemDropList_Init(Unk_ov004_Entry *e);
void ItemDrop_Clear(Unk_ov004_Entry *e);
void ItemDrop_Settle(Unk_ov004_Entry *e);
void ItemDrop_Update(Unk_ov004_Entry *e);
void ItemDrop_SetTrajectory(Unk_ov004_Entry *e, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, u32 v);
void ItemDrop_Init(Unk_ov004_Entry *e, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 unused, s32 s16v, u32 u8v);
s32 ItemDropList_Add(void *base, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 s16v, u32 u8v);
s32 ItemDrop_Start(s32 idx, u32 v, Unk_ov004_V3 *a, Unk_ov004_V3 *b, u32 f);
}

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 a;
    u16 b;
};

extern "C" RoomItemIcons *RoomItemIcons_Create();

extern "C" Unk_ov004_SceneEntry sRoomItemIconsProfile = { (void *(*)())RoomItemIcons_Create, 0x8b, 0xd2 };
extern "C" {
RoomItemIcons *sRoomItemIcons;
RoomItemDropList sRoomItemDrops;
}

// ---------------------------------------------------------------- functions (descending address order)
extern "C" RoomItemIcons *RoomItemIcons_Create() {
    return new RoomItemIcons;
}

BOOL RoomItemIcons::loadIconModels() {
    BOOL r = FALSE;
    void *d = (void *)"/fg/icon/icon.nsbmd";
    if (ModelSet_Load(&unk_174, d ? d : d, r)) {
        s32 i;
        for (i = 0; i < 0x49; i++) {
            unk_50[i] = ModelSet_Find(&unk_174, Item_GetIconModelName(i, r));
        }
        r = TRUE;
    }
    return r;
}

BOOL RoomItemIcons::vfunc_00() {
    BOOL r = FALSE;
    if (loadIconModels()) {
        Town_GetEnvironmentRank();
        sRoomItemIcons = this;
        ItemDropList_Init((Unk_ov004_Entry *)&sRoomItemDrops);
        r = TRUE;
    }
    return r;
}

BOOL RoomItemIcons::onExecute() {
    ItemDropList_Update((Unk_ov004_Entry *)&sRoomItemDrops);
    return TRUE;
}

void RoomItemIcons::drawIconModel(Unk_ov004_0222c880_Model *model, Unk_ov004_0222c570_Mtx m) {
    if (model != NULL) {
        volatile u16 tmp[2];
        model->unk_64 = m;
        Model_drawShapesDirect(model, 0);
        tmp[0] = SceneLights_GetRoomColor();
        tmp[1] = tmp[0];
        NNS_G3dMdlSetMdlEmi(model->unk_5c, 0, tmp[1]);
    }
}

Unk_ov004_0222c880_Model *RoomItemIcons::setupIconModel(u32 idx, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz) {
    Unk_ov004_0222c880_Model *model = (Unk_ov004_0222c880_Model *)unk_50[idx];
    Unk_ov004_0222c570_Mtx m;
    s32 t[3];
    u32 r = WorldCurve_ToCurved(t, (void *)&pos);
    func_020e8388(data_021f47e0, t[0], t[1], t[2]);
    func_020e8434(data_021f47e0, r);
    func_020e8464(data_021f47e0, rx, ry, rz);
    func_020e84f8(data_021f47e0, scale.x, scale.y, scale.z);
    m = *(Unk_ov004_0222c570_Mtx *)data_021f47e0;
    drawIconModel(model, m);
    return model;
}

void RoomItemIcons::drawItemModel(u16 id, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz) {
    volatile u16 v = 0xfff1;
    v = id;
    Unk_ov004_0222c570_Vec p = pos;
    Unk_ov004_0222c570_Vec q = scale;
    setupIconModel(Item_GetInfoUnk07((u16 *)&v), p, q, rx, ry, rz);
}

void RoomItemIcons::drawGridItems(void *grid) {
    if (gCamera == NULL) {
        return;
    }
    Unk_ov004_0222c570_Vec c;
    Unk_ov004_0222c570_Vec d;
    Unk_ov004_0222c570_Vec a;
    Unk_ov004_0222c570_Vec b;
    Unk_ov004_0222c570_Vec out;
    Unk_ov004_0222c570_Vec e1;
    Unk_ov004_0222c570_Vec sc;
    Unk_ov004_0222c570_Vec e2;
    s32 hi = 8;
    s32 j, i;
    a.x = ((Unk_ov004_0222c570_Vec *)gCameraLookAt)->x;
    a.y = ((Unk_ov004_0222c570_Vec *)gCameraLookAt)->y;
    a.z = ((Unk_ov004_0222c570_Vec *)gCameraLookAt)->z;
    FieldPos_SnapToUnitCenter(&out, &a);
    b.x = out.x + 0x10000;
    b.y = 0;
    b.z = out.z + 0x10000;
    for (i = hi; i >= -8; i--) {
        FieldPos_SnapToUnitCenter(&c, &b);
        u32 r = WorldCurve_ToCurved(&d, &c);
        func_020e8388(data_021f47e0, d.x, d.y, d.z);
        func_020e8434(data_021f47e0, r);
        for (j = hi; j >= -8; j--) {
            u16 *p = BlockMap_GetItemPtrAtPos(grid, &c, 0);
            if (p != NULL && (s32)(*p & 0xf000) >> 12 == 1) {
                s32 z = c.z;
                s32 y = c.y + FtrMgr_GetSurfaceHeightAtPos(&c);
                e1.x = c.x;
                e1.y = y;
                e1.z = z;
                sc.z = sc.y = sc.x = 0x1000;
                drawItemModel(*p, e1, sc, 0, 0, 0);
            }
            p = BlockMap_GetItemPtrAtPos(grid, &c, 1);
            if (p != NULL && (s32)(*p & 0xf000) >> 12 == 1) {
                s32 z = c.z;
                s32 y = c.y + FtrMgr_GetSurfaceHeightAtPos(&c);
                e2.x = c.x;
                e2.y = y;
                e2.z = z;
                sc.z = sc.y = sc.x = 0x1000;
                drawItemModel(*p, e2, sc, 0, 0, 0);
            }
            c.x -= 0x2000;
        }
        b.z -= 0x2000;
    }
}

BOOL RoomItemIcons::onDraw() {
    void *a = (void *)gSceneBlockMap;
    void *b = gCamera;
    if (a != NULL && b != NULL) {
        drawGridItems(a);
        ItemDropList_Draw((Unk_ov004_Entry *)&sRoomItemDrops);
    }
    return TRUE;
}

BOOL RoomItemIcons::vfunc_0c() {
    ModelSet_Release(&unk_174);
    ItemDropList_Release((Unk_ov004_Entry *)&sRoomItemDrops);
    return TRUE;
}

extern "C" BOOL ItemDrop_StartFromLocalPlayer(u16 *p, Unk_ov004_0222c570_Vec *v) {
    void *g = (void *)gSceneBlockMap;
    Unk_ov004_0222c570_Global *o = (Unk_ov004_0222c570_Global *)func_02095204(4);
    BOOL r = FALSE;
    if (g != NULL && o != NULL) {
        Unk_ov004_0222c570_Comm *c = gCommManager;
        s32 a;
        if (CommManager_isOnline(c)) {
            a = c->unk_64;
        } else {
            a = 0;
        }
        Unk_ov004_0222c570_Vec *pv = &o->unk_5c;
        Unk_ov004_0222c570_Vec pos;
        pos.x = o->unk_5c.x;
        pos.y = pv->y;
        pos.z = pv->z;
        Unk_ov004_0222c570_Vec q;
        q.x = v->x;
        q.y = v->y;
        q.z = v->z;
        if (ItemDrop_Start(a, *p, &pos, &q, 0)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" void RoomItemIcons_DrawIcon(u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s16 d, s16 e) {
    if (sRoomItemIcons != 0) {
        Unk_ov004_V3 la;
        Unk_ov004_V3 lb;
        la = *a;
        lb = *b;
        Unk_c7e0_call((s32)sRoomItemIcons, id, &la, &lb, c, d, e);
    }
}

extern "C" void RoomItemIcons_DrawItem(u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s16 d, s16 e) {
    if (sRoomItemIcons != 0) {
        Unk_ov004_V3 la;
        Unk_ov004_V3 lb;
        la = *a;
        lb = *b;
        Unk_c788_call((s32)sRoomItemIcons, id, &la, &lb, c, d, e);
    }
}

extern "C" void Room_SetItemAtUnit(s32 x, s32 y, u16 v, s32 z) {
    Scene_InTown();
    if (gSceneBlockMap != 0) {
        volatile u16 buf = 0xfff1;
        buf = v;
        BlockMap_SetItemAtUnit((void *)gSceneBlockMap, (u16 *)&buf, x, y, z);
    }
}

extern "C" void ItemDrop_Settle(Unk_ov004_Entry *e) {
    if (e->unk_8f != 0) {
        e->unk_8f = 0;
        Unk_ov004_P2 v;
        v.a = e->unk_10.a;
        v.b = e->unk_10.b;
        PendingUnit_ApplyAt(&v, e->unk_90);
    }
}

extern "C" void ItemDrop_Init(Unk_ov004_Entry *e, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 unused, s32 s16v, u32 u8v) {
    e->unk_00 = idx;
    e->unk_04 = 1;
    e->unk_0c = flag;
    e->unk_10.a = p->a;
    e->unk_10.b = p->b;
    e->unk_18.x = b->x;
    e->unk_18.y = b->y;
    e->unk_18.z = b->z;
    e->unk_48 = *(s16 *)&s16v;
    e->unk_4a = 0;
    e->unk_8e = 1;
    e->unk_8f = 1;
    e->unk_90 = *(u8 *)&u8v;
    e->unk_8d = 0;
    e->unk_8c = 0;
    if (flag == 0) {
        Unk_ov004_V3 la;
        Unk_ov004_V3 lb;
        Unk_ov004_P2 pp;
        la = *a;
        lb = *b;
        pp = *p;
        ItemDrop_SetTrajectory(e, &pp, &la, &lb, *(u16 *)&idv);
    }
}

extern "C" void ItemDrop_Clear(Unk_ov004_Entry *e) {
    ItemDrop_Settle(e);
    e->unk_04 = 0;
    e->unk_0c = 1;
    e->unk_08 = 0xfff1;
    e->unk_0a = 0xfff1;
}

extern "C" void ItemDrop_SetTrajectory(Unk_ov004_Entry *e, Unk_ov004_P2 *p, Unk_ov004_V3 *from, Unk_ov004_V3 *to, u32 v32) {
    volatile u16 id = 0xfff1;
    Unk_ov004_V3 t;
    FieldPos_FromUnitCenter(&t, p->a, p->b);
    if (to->y == 0) {
        s32 z = func_02133150(to->z - from->z, 9);
        e->unk_30.x = func_02133150(to->x - from->x, 9);
        e->unk_30.y = 0x1000;
        e->unk_30.z = z;
    } else {
        s32 z = func_02133150(to->z - from->z, 12);
        e->unk_30.x = func_02133150(to->x - from->x, 12);
        e->unk_30.y = 0x1800;
        e->unk_30.z = z;
    }
    u16 v = *(u16 *)&v32;
    e->unk_08 = v;
    e->unk_0a = v;
    e->unk_24.x = from->x;
    e->unk_24.y = from->y;
    e->unk_24.z = from->z;
    e->unk_3c = Unk_ov004_V3(0, 0x1000, 0);
    id = v;
    u32 k = (id & 0xf000) >> 12;
    if (k == 3) goto zero;
    if (k == 4) {
    zero:
        e->unk_8e = 0;
    } else {
        func_02003e70(e->unk_4c, 0x75, 0x7f, 0);
    }
}

extern "C" void ItemDrop_Update(Unk_ov004_Entry *e) {
    e->unk_3c.x = e->unk_3c.x + 0x19a;
    if (e->unk_3c.x >= 0x1000) e->unk_3c.x = 0x1000;
    e->unk_3c.z = e->unk_3c.x;
    e->unk_30.y = e->unk_30.y - 0x400;
    VEC_Add(&e->unk_24, &e->unk_30, &e->unk_24);
    if (e->unk_30.y < 0 && e->unk_24.y < e->unk_18.y) {
        if (e->unk_8c < 2) {
            volatile u16 id = 0xfff1;
            id = e->unk_0a;
            BOOL in = FALSE;
            u16 v1 = id;
            u16 v2 = id;
            if (v2 >= 0x1492 && v1 <= 0x14fd) in = TRUE;
            if (in) func_02003e70(e->unk_4c, 0x70, 0x7f, 0);
        }
        e->unk_24.y = e->unk_18.y;
        if (e->unk_8c == 0) {
            e->unk_8c = 1;
            e->unk_30.y = 0x600;
            e->unk_30.x = (e->unk_30.x * 0x4cd) >> 12;
            e->unk_30.z = (e->unk_30.z * 0x4cd) >> 12;
        } else {
            e->unk_30.x = 0;
            e->unk_30.y = 0;
            e->unk_30.z = 0;
            ItemDrop_Clear(e);
        }
    }
}

extern "C" void ItemDropList_Init(Unk_ov004_Entry *e) {
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        e->unk_04 = 0;
        e->unk_08 = 0xfff1;
        e->unk_0a = 0xfff1;
        func_02003ecc(e->unk_4c);
    }
}

extern "C" void ItemDropList_Update(Unk_ov004_Entry *e) {
    volatile u16 id = 0xfff1;
    s32 i;
    Unk_ov004_V3 v;
    for (i = 0; i < 15; e++, i++) {
        if (e->unk_04 == 2) {
            e->unk_8d = e->unk_8d + 1;
            id = e->unk_08;
            if (e->unk_0c == 0) ItemDrop_Update(e);
            v.x = e->unk_24.x;
            v.y = e->unk_24.y;
            v.z = e->unk_24.z;
            func_02003e80(e->unk_4c, &v);
        }
    }
}

extern "C" void ItemDropList_Draw(Unk_ov004_Entry *e) {
    volatile u16 id = 0xfff1;
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        id = e->unk_08;
        if (e->unk_04 != 0 && id != 0xfff1) {
            Unk_ov004_V3 *q = &e->unk_3c;
            Unk_ov004_V3 v;
            s32 r = WorldCurve_ToCurved(&v, &e->unk_24);
            func_020e8388(data_021f47e0, v.x, v.y, v.z);
            func_020e8434(data_021f47e0, r);
            func_020e84f8(data_021f47e0, e->unk_3c.x, q->y, q->z);
            u32 idc = id;
            u32 t = (id & 0xf000) >> 12;
            if (t == 1 || t == 3 || t == 4) {
                Unk_ov004_V3 pos;
                Unk_ov004_V3 sc;
                Unk_ov004_V3 *pv = &e->unk_24;
                pos.x = e->unk_24.x;
                pos.y = pv->y;
                pos.z = pv->z;
                sc.x = 0x1000;
                sc.y = 0x1000;
                sc.z = 0x1000;
                Unk_c788_call((s32)sRoomItemIcons, idc, &pos, &sc, 0, 0, 0);
            }
        }
    }
}

extern "C" void ItemDropList_Release(Unk_ov004_Entry *e) {
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        if (e->unk_04 != 0) ItemDrop_Clear(e);
        func_02003e50(e->unk_4c);
    }
}

extern "C" s32 ItemDropList_Add(void *base, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 s16v, u32 u8v) {
    s32 g = gSceneBlockMap;
    if (g == 0) return 0;
    Unk_ov004_Entry *e = (Unk_ov004_Entry *)base + idx * 3;
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 3; e++, i++) {
        if (e->unk_04 == 0) {
            Unk_ov004_V3 la;
            Unk_ov004_V3 lb;
            Unk_ov004_P2 pp;
            la = *a;
            lb = *b;
            pp = *p;
            ItemDrop_Init(e, idx, &pp, &la, &lb, flag, *(u16 *)&idv, g, *(s16 *)&s16v, *(u8 *)&u8v);
            e->unk_04 = 2;
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" s32 ItemDrop_StartToUnit(s32 idx, u32 v, Unk_ov004_P2 *p, Unk_ov004_V3 *b, u32 f) {
    Unk_ov004_P2 pair;
    Unk_ov004_V3 t;
    Unk_ov004_V3 lb;
    Unk_ov004_V3 lc;
    FieldPos_FromUnitCenter(&t, p->a, p->b);
    if (*(u8 *)&f != 0) {
        t.y = FtrMgr_GetSurfaceHeight(p->a, p->b);
    }
    lb = *b;
    lc = t;
    pair = *p;
    return ItemDropList_Add(&sRoomItemDrops, idx, &pair, &lb, &lc, 0, v, 0, *(u8 *)&f);
}

extern "C" s32 ItemDrop_Start(s32 idx, u32 v, Unk_ov004_V3 *a, Unk_ov004_V3 *b, u32 f) {
    Unk_ov004_V3 la;
    Unk_ov004_V3 lb;
    Unk_ov004_P2 pp;
    la = *a;
    lb = *b;
    pp.a = 0;
    pp.b = 0;
    return ItemDropList_Add(&sRoomItemDrops, idx, &pp, &la, &lb, 0, v, 0, *(u8 *)&f);
}


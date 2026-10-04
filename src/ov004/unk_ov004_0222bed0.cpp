#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "room/RoomItemDrop.h"
#include "gfx/ModelSet.h"
#include "gfx/Model.h"
#include "actor/Actor.h"
#include "sys/ProcProfile.h"
#include "net/CommManager.h"

// ---------------------------------------------------------------- real symbol names of main-module methods

#define SndSeEmitter_callStop _ZN12SndSeEmitter8callStopEv
#define SndSeEmitter_callUpdateRelative _ZN12SndSeEmitter18callUpdateRelativeEP7VecFx32
#define SndSeEmitter_callInit _ZN12SndSeEmitter8callInitEv
#define Model_drawShapesDirect _ZN5Model16drawShapesDirectEPi
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define func_02133150 _s32_div_f

#define Unk_c788_call _ZN13RoomItemIcons13drawItemModelEtRK11VecFx32CopyS2_sss
#define Unk_c7e0_call _ZN13RoomItemIcons14setupIconModelEjRK11VecFx32CopyS2_sss


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


struct Unk_ov004_0222c570_Mtx {
    s64 v[6];
};



// the 15 item drops as one object: its implicit destructor is func_ov004_0222c9a0 (__cxa_vec_cleanup), its implicit constructor is inlined in the __sinit
struct RoomItemDropList {
    RoomItemDrop drops[15];
};



class RoomItemIcons : public GameProc {
public:
    RoomItemIcons() {}
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    BOOL loadIconModels();
    void drawGridItems(void *grid);
    Model *setupIconModel(u32 idx, const VecFx32Copy &pos, const VecFx32Copy &scale, s16 rx, s16 ry, s16 rz);
    void drawIconModel(Model *model, Unk_ov004_0222c570_Mtx m);
    void drawItemModel(u16 id, const VecFx32Copy &pos, const VecFx32Copy &scale, s16 rx, s16 ry, s16 rz);

    /* 0x050 */ void *iconModels[0x49];
    /* 0x174 */ ModelSet modelSet;
};

// ---------------------------------------------------------------- externs
extern "C" {
extern s32 gSceneBlockMap;
extern void *gCamera;
extern CommManager *gCommManager;
extern u8 data_021f47e0[];
extern u8 gCameraLookAt[];

void *PlayerActor_GetActor(u32 a);
s32 CommManager_isOnline(void *g);
void ModelSet_Release(void *p);
s32 ModelSet_Load(void *p, void *a, s32 b);
void *ModelSet_Find(void *p, u32 a);
u32 Item_GetIconModelName(s32 a, s32 b);
void Town_GetEnvironmentRank();
void FieldPos_FromUnitCenter(VecFx32Copy *out, s32 a, s32 b);
s32 FtrMgr_GetSurfaceHeight(s32 a, s32 b);
void SndSeEmitter_callStop(void *p);
void SndSeEmitter_callUpdateRelative(void *p, void *v);
void SndSeEmitter_callInit(void *p);
s32 Snd_SeEmitterPlayOneShot(void *p, u32 a, u32 b, u32 c);
void VEC_Add(void *a, void *b, void *c);
void FieldPos_SnapToUnitCenter(void *a, void *b);
u16 *BlockMap_GetItemPtrAtPos(void *g, void *v, s32 z);
s32 FtrMgr_GetSurfaceHeightAtPos(void *p);
s32 Item_GetInfoUnk07(u16 *p);
u32 WorldCurve_ToCurved(void *a, void *b);
void Mtx43_SetTranslate(void *m, s32 a, s32 b, s32 c);
void Mtx43_RotateX(void *m, s32 a);
void Mtx43_RotateXYZ(void *m, s32 x, s32 y, s32 z);
void Mtx43_Scale(void *m, s32 x, s32 y, s32 z);
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
void Unk_c788_call(s32 mgr, u32 id, VecFx32Copy *a, VecFx32Copy *b, s32 c, s32 d, s32 e);
void Unk_c7e0_call(s32 mgr, u32 id, VecFx32Copy *a, VecFx32Copy *b, s32 c, s32 d, s32 e);

void ItemDropList_Release(RoomItemDrop *e);
void ItemDropList_Draw(RoomItemDrop *e);
void ItemDropList_Update(RoomItemDrop *e);
void ItemDropList_Init(RoomItemDrop *e);
void ItemDrop_Clear(RoomItemDrop *e);
void ItemDrop_Settle(RoomItemDrop *e);
void ItemDrop_Update(RoomItemDrop *e);
void ItemDrop_SetTrajectory(RoomItemDrop *e, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *a, VecFx32Copy *b, u32 v);
void ItemDrop_Init(RoomItemDrop *e, s32 idx, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *a, VecFx32Copy *b, s32 flag, u32 idv, s32 unused, s32 s16v, u32 u8v);
s32 ItemDropList_Add(void *base, s32 idx, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *a, VecFx32Copy *b, s32 flag, u32 idv, s32 s16v, u32 u8v);
s32 ItemDrop_Start(s32 idx, u32 v, VecFx32Copy *a, VecFx32Copy *b, u32 f);
}


extern "C" RoomItemIcons *RoomItemIcons_Create();

extern "C" ProcProfile sRoomItemIconsProfile = { (void *(*)())RoomItemIcons_Create, 0x8b, 0xd2 };
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
    if (ModelSet_Load(&modelSet, d ? d : d, r)) {
        s32 i;
        for (i = 0; i < 0x49; i++) {
            iconModels[i] = ModelSet_Find(&modelSet, Item_GetIconModelName(i, r));
        }
        r = TRUE;
    }
    return r;
}

BOOL RoomItemIcons::onCreate() {
    BOOL r = FALSE;
    if (loadIconModels()) {
        Town_GetEnvironmentRank();
        sRoomItemIcons = this;
        ItemDropList_Init(sRoomItemDrops.drops);
        r = TRUE;
    }
    return r;
}

BOOL RoomItemIcons::onExecute() {
    ItemDropList_Update(sRoomItemDrops.drops);
    return TRUE;
}

void RoomItemIcons::drawIconModel(Model *model, Unk_ov004_0222c570_Mtx m) {
    if (model != NULL) {
        volatile u16 tmp[2];
        *(Unk_ov004_0222c570_Mtx *)&model->mtx = m; // s64 copy of the Mtx43
        Model_drawShapesDirect(model, 0);
        tmp[0] = SceneLights_GetRoomColor();
        tmp[1] = tmp[0];
        NNS_G3dMdlSetMdlEmi(model->resMdl, 0, tmp[1]);
    }
}

Model *RoomItemIcons::setupIconModel(u32 idx, const VecFx32Copy &pos, const VecFx32Copy &scale, s16 rx, s16 ry, s16 rz) {
    Model *model = (Model *)iconModels[idx];
    Unk_ov004_0222c570_Mtx m;
    s32 t[3];
    u32 r = WorldCurve_ToCurved(t, (void *)&pos);
    Mtx43_SetTranslate(data_021f47e0, t[0], t[1], t[2]);
    Mtx43_RotateX(data_021f47e0, r);
    Mtx43_RotateXYZ(data_021f47e0, rx, ry, rz);
    Mtx43_Scale(data_021f47e0, scale.x, scale.y, scale.z);
    m = *(Unk_ov004_0222c570_Mtx *)data_021f47e0;
    drawIconModel(model, m);
    return model;
}

void RoomItemIcons::drawItemModel(u16 id, const VecFx32Copy &pos, const VecFx32Copy &scale, s16 rx, s16 ry, s16 rz) {
    volatile u16 v = 0xfff1;
    v = id;
    VecFx32Copy p = pos;
    VecFx32Copy q = scale;
    setupIconModel(Item_GetInfoUnk07((u16 *)&v), p, q, rx, ry, rz);
}

void RoomItemIcons::drawGridItems(void *grid) {
    if (gCamera == NULL) {
        return;
    }
    VecFx32Copy c;
    VecFx32Copy d;
    VecFx32Copy a;
    VecFx32Copy b;
    VecFx32Copy out;
    VecFx32Copy e1;
    VecFx32Copy sc;
    VecFx32Copy e2;
    s32 hi = 8;
    s32 j, i;
    a.x = ((VecFx32Copy *)gCameraLookAt)->x;
    a.y = ((VecFx32Copy *)gCameraLookAt)->y;
    a.z = ((VecFx32Copy *)gCameraLookAt)->z;
    FieldPos_SnapToUnitCenter(&out, &a);
    b.x = out.x + 0x10000;
    b.y = 0;
    b.z = out.z + 0x10000;
    for (i = hi; i >= -8; i--) {
        FieldPos_SnapToUnitCenter(&c, &b);
        u32 r = WorldCurve_ToCurved(&d, &c);
        Mtx43_SetTranslate(data_021f47e0, d.x, d.y, d.z);
        Mtx43_RotateX(data_021f47e0, r);
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
        ItemDropList_Draw(sRoomItemDrops.drops);
    }
    return TRUE;
}

BOOL RoomItemIcons::onDelete() {
    ModelSet_Release(&modelSet);
    ItemDropList_Release(sRoomItemDrops.drops);
    return TRUE;
}

extern "C" BOOL ItemDrop_StartFromLocalPlayer(u16 *p, VecFx32Copy *v) {
    void *g = (void *)gSceneBlockMap;
    Actor *o = (Actor *)PlayerActor_GetActor(4);
    BOOL r = FALSE;
    if (g != NULL && o != NULL) {
        CommManager *c = gCommManager;
        s32 a;
        if (CommManager_isOnline(c)) {
            a = c->myAid;
        } else {
            a = 0;
        }
        VecFx32Copy *pv = (VecFx32Copy *)&o->position;
        VecFx32Copy pos;
        pos.x = o->position.x;
        pos.y = pv->y;
        pos.z = pv->z;
        VecFx32Copy q;
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

extern "C" void RoomItemIcons_DrawIcon(u32 id, VecFx32Copy *a, VecFx32Copy *b, s32 c, s16 d, s16 e) {
    if (sRoomItemIcons != 0) {
        VecFx32Copy la;
        VecFx32Copy lb;
        la = *a;
        lb = *b;
        Unk_c7e0_call((s32)sRoomItemIcons, id, &la, &lb, c, d, e);
    }
}

extern "C" void RoomItemIcons_DrawItem(u32 id, VecFx32Copy *a, VecFx32Copy *b, s32 c, s16 d, s16 e) {
    if (sRoomItemIcons != 0) {
        VecFx32Copy la;
        VecFx32Copy lb;
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

extern "C" void ItemDrop_Settle(RoomItemDrop *e) {
    if (e->needsSettle != 0) {
        e->needsSettle = 0;
        Unk_ov004_0222bf34_P2 v;
        v.a = e->unitX;
        v.b = e->unitZ;
        PendingUnit_ApplyAt(&v, e->onFtrSurface);
    }
}

extern "C" void ItemDrop_Init(RoomItemDrop *e, s32 idx, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *a, VecFx32Copy *b, s32 flag, u32 idv, s32 unused, s32 s16v, u32 u8v) {
    e->group = idx;
    e->state = 1;
    e->isStill = flag;
    e->unitX = p->a;
    e->unitZ = p->b;
    e->landPos.x = b->x;
    e->landPos.y = b->y;
    e->landPos.z = b->z;
    e->unk_48 = *(s16 *)&s16v;
    e->unk_4a = 0;
    e->unk_8e = 1;
    e->needsSettle = 1;
    e->onFtrSurface = *(u8 *)&u8v;
    e->frameCount = 0;
    e->bounceCount = 0;
    if (flag == 0) {
        VecFx32Copy la;
        VecFx32Copy lb;
        Unk_ov004_0222bf34_P2 pp;
        la = *a;
        lb = *b;
        pp = *p;
        ItemDrop_SetTrajectory(e, &pp, &la, &lb, *(u16 *)&idv);
    }
}

extern "C" void ItemDrop_Clear(RoomItemDrop *e) {
    ItemDrop_Settle(e);
    e->state = 0;
    e->isStill = 1;
    e->item = 0xfff1;
    e->landItem = 0xfff1;
}

extern "C" void ItemDrop_SetTrajectory(RoomItemDrop *e, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *from, VecFx32Copy *to, u32 v32) {
    volatile u16 id = 0xfff1;
    VecFx32Copy t;
    FieldPos_FromUnitCenter(&t, p->a, p->b);
    if (to->y == 0) {
        s32 z = func_02133150(to->z - from->z, 9);
        e->velocity.x = func_02133150(to->x - from->x, 9);
        e->velocity.y = 0x1000;
        e->velocity.z = z;
    } else {
        s32 z = func_02133150(to->z - from->z, 12);
        e->velocity.x = func_02133150(to->x - from->x, 12);
        e->velocity.y = 0x1800;
        e->velocity.z = z;
    }
    u16 v = *(u16 *)&v32;
    e->item = v;
    e->landItem = v;
    e->pos.x = from->x;
    e->pos.y = from->y;
    e->pos.z = from->z;
    *(VecFx32Copy *)&e->scale = VecFx32Copy(0, 0x1000, 0);
    id = v;
    u32 k = (id & 0xf000) >> 12;
    if (k == 3) goto zero;
    if (k == 4) {
    zero:
        e->unk_8e = 0;
    } else {
        Snd_SeEmitterPlayOneShot(e->seEmitter, 0x75, 0x7f, 0);
    }
}

extern "C" void ItemDrop_Update(RoomItemDrop *e) {
    e->scale.x = e->scale.x + 0x19a;
    if (e->scale.x >= 0x1000) e->scale.x = 0x1000;
    e->scale.z = e->scale.x;
    e->velocity.y = e->velocity.y - 0x400;
    VEC_Add(&e->pos, &e->velocity, &e->pos);
    if (e->velocity.y < 0 && e->pos.y < e->landPos.y) {
        if (e->bounceCount < 2) {
            volatile u16 id = 0xfff1;
            id = e->landItem;
            BOOL in = FALSE;
            u16 v1 = id;
            u16 v2 = id;
            if (v2 >= 0x1492 && v1 <= 0x14fd) in = TRUE;
            if (in) Snd_SeEmitterPlayOneShot(e->seEmitter, 0x70, 0x7f, 0);
        }
        e->pos.y = e->landPos.y;
        if (e->bounceCount == 0) {
            e->bounceCount = 1;
            e->velocity.y = 0x600;
            e->velocity.x = (e->velocity.x * 0x4cd) >> 12;
            e->velocity.z = (e->velocity.z * 0x4cd) >> 12;
        } else {
            e->velocity.x = 0;
            e->velocity.y = 0;
            e->velocity.z = 0;
            ItemDrop_Clear(e);
        }
    }
}

extern "C" void ItemDropList_Init(RoomItemDrop *e) {
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        e->state = 0;
        e->item = 0xfff1;
        e->landItem = 0xfff1;
        SndSeEmitter_callInit(e->seEmitter);
    }
}

extern "C" void ItemDropList_Update(RoomItemDrop *e) {
    volatile u16 id = 0xfff1;
    s32 i;
    VecFx32Copy v;
    for (i = 0; i < 15; e++, i++) {
        if (e->state == 2) {
            e->frameCount = e->frameCount + 1;
            id = e->item;
            if (e->isStill == 0) ItemDrop_Update(e);
            v.x = e->pos.x;
            v.y = e->pos.y;
            v.z = e->pos.z;
            SndSeEmitter_callUpdateRelative(e->seEmitter, &v);
        }
    }
}

extern "C" void ItemDropList_Draw(RoomItemDrop *e) {
    volatile u16 id = 0xfff1;
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        id = e->item;
        if (e->state != 0 && id != 0xfff1) {
            VecFx32Copy *q = (VecFx32Copy *)&e->scale;
            VecFx32Copy v;
            s32 r = WorldCurve_ToCurved(&v, &e->pos);
            Mtx43_SetTranslate(data_021f47e0, v.x, v.y, v.z);
            Mtx43_RotateX(data_021f47e0, r);
            Mtx43_Scale(data_021f47e0, e->scale.x, q->y, q->z);
            u32 idc = id;
            u32 t = (id & 0xf000) >> 12;
            if (t == 1 || t == 3 || t == 4) {
                VecFx32Copy pos;
                VecFx32Copy sc;
                VecFx32Copy *pv = (VecFx32Copy *)&e->pos;
                pos.x = e->pos.x;
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

extern "C" void ItemDropList_Release(RoomItemDrop *e) {
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        if (e->state != 0) ItemDrop_Clear(e);
        SndSeEmitter_callStop(e->seEmitter);
    }
}

extern "C" s32 ItemDropList_Add(void *base, s32 idx, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *a, VecFx32Copy *b, s32 flag, u32 idv, s32 s16v, u32 u8v) {
    s32 g = gSceneBlockMap;
    if (g == 0) return 0;
    RoomItemDrop *e = (RoomItemDrop *)base + idx * 3;
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 3; e++, i++) {
        if (e->state == 0) {
            VecFx32Copy la;
            VecFx32Copy lb;
            Unk_ov004_0222bf34_P2 pp;
            la = *a;
            lb = *b;
            pp = *p;
            ItemDrop_Init(e, idx, &pp, &la, &lb, flag, *(u16 *)&idv, g, *(s16 *)&s16v, *(u8 *)&u8v);
            e->state = 2;
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" s32 ItemDrop_StartToUnit(s32 idx, u32 v, Unk_ov004_0222bf34_P2 *p, VecFx32Copy *b, u32 f) {
    Unk_ov004_0222bf34_P2 pair;
    VecFx32Copy t;
    VecFx32Copy lb;
    VecFx32Copy lc;
    FieldPos_FromUnitCenter(&t, p->a, p->b);
    if (*(u8 *)&f != 0) {
        t.y = FtrMgr_GetSurfaceHeight(p->a, p->b);
    }
    lb = *b;
    lc = t;
    pair = *p;
    return ItemDropList_Add(&sRoomItemDrops, idx, &pair, &lb, &lc, 0, v, 0, *(u8 *)&f);
}

extern "C" s32 ItemDrop_Start(s32 idx, u32 v, VecFx32Copy *a, VecFx32Copy *b, u32 f) {
    VecFx32Copy la;
    VecFx32Copy lb;
    Unk_ov004_0222bf34_P2 pp;
    la = *a;
    lb = *b;
    pp.a = 0;
    pp.b = 0;
    return ItemDropList_Add(&sRoomItemDrops, idx, &pp, &la, &lb, 0, v, 0, *(u8 *)&f);
}


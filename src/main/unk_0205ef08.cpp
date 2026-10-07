#include "types.h"
#include "gfx/VecFx32.h"
#include "gfx/Mtx43.h"
#include "game/GroundInfo.h"
#include "player/FishBobberStates.h"
#include "net/CommManager.h"
#include "sys/Heap.h"
#define PROTO_LOCAL_sFishBobberPool  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/main/unk_0203ecec.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_0205ef08.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_02090268.h"
#include "proto/main/unk_020a427c.h"
#include "proto/ov003/unk_ov003_0221ffb8.h"




extern "C" {
extern CommManager *gCommManager;
extern s16 data_02135f44[];
extern u8 sFishBobberPool[];

#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll(void *p);
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust(void *p);
BOOL func_020729cc(void *p, s32 h);
BOOL SceneId_IsTown(u32 v);
void *TownBlockMap_Get();
void *HouseRoomMaps_GetForScene(u32 v);
void BlockMap_SetItemAtUnit(void *o, u16 *v, s32 a, s32 b, s32 c);
void BlockMap_SetBuriedAtUnit(void *o, s32 a, s32 b);
void BlockMap_ClearBuriedAtUnit(void *o, s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 Math_ApproachS32(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
void Vec_ShiftRightTo(VecFx32 *out, VecFx32 *in, s32 n);
void VEC_Add(VecFx32 *a, VecFx32 *b, VecFx32 *out);
void VEC_Subtract(VecFx32 *a, VecFx32 *b, VecFx32 *out);
s32 Vec_DistXZ(VecFx32 *a, VecFx32 *b);
void Vec_ShiftRight(VecFx32 *v, s32 n);
void Mtx43_SetTranslate(Mtx43 *m, s32 x, s32 y, s32 z);
void *func_0205fd94(u8 *tbl, u32 idx);
s32 func_0205fbb8(void *p);
void func_0205553c(void *e, s32 a);
void GroundInfo_Destruct(void *p);
}


struct PlayerPalettePool {
    u32 buffers[4];
    PlayerPalettePool();
    ~PlayerPalettePool();
};

PlayerPalettePool sPlayerPalettePool;
char sPlayerPalettePathBuf[0x14];


extern "C" BOOL Fishing_StepArc(VecFx32 *a, s32 k, VecFx32 *b, s32 *c, u8 flag)
{
    s32 m, n, d, r1, r2;
    if (flag) {
        m = 0xccd;
        n = 5;
    } else {
        m = 0xccd;
        n = 0xa;
    }
    d = _s32_div_f(0x1000, n);
    r1 = Math_ApproachS32(&b->x, a->x, d, m, 0x19a);
    r2 = r1 + Math_ApproachS32(&b->z, a->z, d, m, 0x19a);
    if (*c < 0 && flag) {
        Math_ApproachS32(&b->y, a->y, d, 0xccd, 0x52);
    } else {
        b->y += *c;
        *c -= k;
    }
    return r2 == 0 ? TRUE : FALSE;
}

extern "C" BOOL ItemSync_Apply(u8 *p)
{
    struct {
        u8 t[2];
        u16 h[2];
    } l;
    void *o;
    BOOL r6;
    s32 x, y;
    u16 id = NetBuf_ReadU16(p);
    CommRecord_UnpackSource(p + 2, &l.t[0], &l.t[1]);
    r6 = l.t[1] ? TRUE : FALSE;
    x = *(s8 *)(p + 3);
    y = *(s8 *)(p + 4);
    if (SceneId_IsTown(l.t[0])) {
        o = TownBlockMap_Get();
        if (o != 0) {
            l.h[0] = id;
            BlockMap_SetItemAtUnit(o, &l.h[0], x, y, 0);
            if (r6) {
                BlockMap_SetBuriedAtUnit(o, x, y);
            } else {
                BlockMap_ClearBuriedAtUnit(o, x, y);
            }
            return TRUE;
        }
    } else {
        o = HouseRoomMaps_GetForScene(l.t[0]);
        if (o != 0) {
            l.h[1] = id;
            BlockMap_SetItemAtUnit(o, &l.h[1], x, y, 0);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void ItemSync_ApplyAndBroadcast(u8 *p)
{
    if (ItemSync_Apply(p)) {
        if (((CommManager *)((void *)gCommManager))->isOnline()) {
            void *q = (void *)gCommManager;
            ((CommManager *)(q))->beginRecord();
            ((CommManager *)(q))->writeRecord((u8 *)(p), 5);
            ((CommManager *)(q))->endRecord(0x12, 4);
        }
    }
}

extern "C" void ItemSync_SetAtUnit(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    u8 buf[5];
    NetBuf_WriteU16(buf, d);
    CommRecord_PackSource(buf + 2, c, e ? 1 : 0);
    buf[3] = a;
    buf[4] = b;
    if (NetArea_IsLocalOwner()) {
        ItemSync_ApplyAndBroadcast(buf);
    } else {
        void *q = (void *)gCommManager;
        ((CommManager *)(q))->beginRecord();
        ((CommManager *)(q))->writeRecord((u8 *)(buf), 5);
        ((CommManager *)(q))->endRecord(0x13, 6);
    }
}

extern "C" void PlayerPalettePool_Create(void *parent)
{
    PlayerPaletteHeap_Create(parent);
    PlayerPalettePool_AllocBuffers(sPlayerPalettePool.buffers);
    if (gPlayerPaletteHeap) {
        ((Heap *)(gPlayerPaletteHeap))->adjust();
    }
}

extern "C" void PlayerPalettePool_Destroy()
{
    PlayerPalettePool_FreeBuffers(sPlayerPalettePool.buffers);
    PlayerPaletteHeap_Destroy();
}

char *PlayerPalette_GetPath(u32 x)
{
    Str_SPrintf(sPlayerPalettePathBuf, "/PPal/%d/%d.nsbtx", x >> 5, x);
    return sPlayerPalettePathBuf;
}

extern "C" s32 PlayerPalette_GetSkinSize()
{
    return 0xe4;
}

extern "C" s32 PlayerPalette_GetHairSize()
{
    return 0xd4;
}

extern "C" s32 PlayerPalette_GetSlotSize()
{
    s32 a = PlayerPalette_GetSkinSize();
    return a + PlayerPalette_GetHairSize();
}

PlayerPalettePool::PlayerPalettePool() {}

PlayerPalettePool::~PlayerPalettePool() {}

extern "C" void PlayerPalettePool_AllocBuffers(u32 *out)
{
    void *h = gPlayerPaletteHeap;
    u32 n = gCommManager->memberCount;
    u32 i;
    for (i = 0; i < n; i++) {
        out[i] = (u32)Heap_AllocAligned(h, PlayerPalette_GetSlotSize(), 4);
    }
}

extern "C" void PlayerPalettePool_FreeBuffers(u32 *a)
{
    s32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        a[i] = z;
    }
    if (gPlayerPaletteHeap) {
        ((Heap *)(gPlayerPaletteHeap))->freeAll();
    }
}

extern "C" s32 PlayerPalettePool_GetBuffer(u32 *a, u32 i)
{
    return a[i];
}

extern "C" void PlayerPaletteRef_Init(u8 *p)
{
    *p = 4;
}

extern "C" void PlayerPaletteRef_Destruct()
{
}

extern "C" void PlayerPaletteRef_Assign(u8 *p, u8 v)
{
    PlayerPaletteRef_SetSlot(p, v);
}

extern "C" void PlayerPaletteRef_SetSlot(u8 *p, u8 v)
{
    *p = v;
}

extern "C" s32 PlayerPaletteRef_GetSkin(u8 *p)
{
    return PlayerPalettePool_GetBuffer(sPlayerPalettePool.buffers, *p);
}

extern "C" s32 PlayerPaletteRef_GetHair(u8 *p)
{
    s32 a = PlayerPaletteRef_GetSkin(p);
    return a + PlayerPalette_GetSkinSize();
}

extern "C" void PlayerPaletteRef_LoadSkin(u32 x, u32 y) {
    u32 dst = PlayerPaletteRef_GetSkin((u8 *)x);
    void *path = (void *)PlayerPalette_GetPath(y);
    File_LoadToBuffer(path, (void *)dst, PlayerPalette_GetSkinSize());
}

extern "C" void PlayerPaletteRef_LoadHair(u32 x, u32 y) {
    u32 dst = PlayerPaletteRef_GetHair((u8 *)x);
    void *path = (void *)PlayerPalette_GetPath(y);
    File_LoadToBuffer(path, (void *)dst, PlayerPalette_GetHairSize());
}


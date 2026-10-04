#include "types.h"
#include "game/Unk_0205f6b4_Obj.h"
#include "gfx/Unk_0205f7f4_Mtx.h"

struct Unk_0205f1e8_Vec {
    s32 x, y, z;
};


class GroundInfo {
public:
    u8 pad_00[0x24];
    s32 flowDir, flowDirY, flowDirZ;
    s32 waterKind;
    u8 pad_34[8];
    s32 waterSurfaceY;
    GroundInfo() {}
    GroundInfo *initAtPos(Unk_0205f1e8_Vec *v, s32 a, s32 b);
    ~GroundInfo();
};


extern "C" {
extern void *gPlayerPaletteHeap;
extern u8 *gCommManager;
extern s16 data_02135f44[];
extern u8 sFishBobberPool[];

s32 PlayerPaletteRef_GetSkin(u8 *p);
s32 File_LoadToBuffer(void *path, void *dst, u32 size);
s32 PlayerPaletteRef_GetHair(u8 *p);
char *PlayerPalette_GetPath(u32 x);
s32 PlayerPalette_GetSkinSize();
s32 PlayerPalette_GetHairSize();
s32 PlayerPalette_GetSlotSize();
void PlayerPaletteRef_SetSlot(u8 *p, u8 v);
s32 PlayerPalettePool_GetBuffer(u32 *a, u32 i);
void func_020e885c(void *p);
void func_020e877c(void *p);
void *Heap_AllocAligned(void *h, s32 size, s32 align);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 PlayerPaletteHeap_Destroy();
s32 PlayerPaletteHeap_Create();
void PlayerPalettePool_FreeBuffers(u32 *a);
void PlayerPalettePool_AllocBuffers(u32 *a);
void NetBuf_WriteU16(void *p, s32 v);
void CommRecord_PackSource(void *p, s32 a, u8 b);
BOOL NetArea_IsLocalOwner();
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *q, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
BOOL func_020729cc(void *p, s32 h);
u16 NetBuf_ReadU16();
void CommRecord_UnpackSource(void *p, u8 *a, u8 *b);
BOOL SceneId_IsTown(u32 v);
void *TownBlockMap_Get();
void *HouseRoomMaps_GetForScene(u32 v);
void BlockMap_SetItemAtUnit(void *o, u16 *v, s32 a, s32 b, s32 c);
void BlockMap_SetBuriedAtUnit(void *o, s32 a, s32 b);
void BlockMap_ClearBuriedAtUnit(void *o, s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020e7870(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 Effect_Create(s32 kind, Unk_0205f1e8_Vec *v, void *a, s32 b);
s32 Effect_SetPosition(s32 h, Unk_0205f1e8_Vec *v, void *a, s32 b);
s32 Effect_End(s32 h);
void func_020e9790(Unk_0205f1e8_Vec *out, Unk_0205f1e8_Vec *in, s32 n);
void VEC_Add(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, Unk_0205f1e8_Vec *out);
void VEC_Subtract(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, Unk_0205f1e8_Vec *out);
s32 func_020e9650(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b);
void func_020e9768(Unk_0205f1e8_Vec *v, s32 n);
void func_020e8388(Unk_0205f7f4_Mtx *m, s32 x, s32 y, s32 z);
void FieldFish_StartCastSplash();
void *func_0205fd94(u8 *tbl, u32 idx);
void WorldCurve_FromCurved(void *p, Unk_0205f1e8_Vec *v);
void WorldCurve_ToCurved(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b);
s32 func_0205fbb8(void *p);
void func_0205553c(void *e, s32 a);
void GroundInfo_Destruct(void *p);
}

class FishBobberStates {
public:
    void updateCastSwing();
    void func_0205f92c(s32 state);
    void updateAct09();
    void updateEscape();
    void updateReelIn();
    void updateHooked();
    void updateBite();
    void updateFloat();
    void updateCast();
    void updateCastFail();
    void updateHeld();
    void updateIdle();

    u8 pad_00[8];
    Unk_0205f1e8_Vec pos;
    s32 gravity;
    s32 ySpeed;
    Unk_0205f1e8_Vec targetPos;
    u8 *ownerActor;
    s32 fish;
    s32 stateTimer;
    s32 effect;
    u8 justLanded;
    s32 ownerAid;
};

struct PlayerPalettePool {
    u32 unk_00[4];
    PlayerPalettePool();
    ~PlayerPalettePool();
};

PlayerPalettePool sPlayerPalettePool;
char sPlayerPalettePathBuf[0x14];

extern "C" BOOL ItemSync_Apply(u8 *p);

extern "C" BOOL Fishing_StepArc(Unk_0205f1e8_Vec *a, s32 k, Unk_0205f1e8_Vec *b, s32 *c, u8 flag)
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
    r1 = func_020e7870(&b->x, a->x, d, m, 0x19a);
    r2 = r1 + func_020e7870(&b->z, a->z, d, m, 0x19a);
    if (*c < 0 && flag) {
        func_020e7870(&b->y, a->y, d, 0xccd, 0x52);
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
    u16 id = NetBuf_ReadU16();
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
        if (_ZN11CommManager8isOnlineEv((void *)gCommManager)) {
            void *q = (void *)gCommManager;
            _ZN11CommManager11beginRecordEv(q);
            _ZN11CommManager11writeRecordEPhj(q, p, 5);
            _ZN11CommManager9endRecordEjj(q, 0x12, 4);
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
        _ZN11CommManager11beginRecordEv(q);
        _ZN11CommManager11writeRecordEPhj(q, buf, 5);
        _ZN11CommManager9endRecordEjj(q, 0x13, 6);
    }
}

extern "C" void PlayerPalettePool_Create()
{
    PlayerPaletteHeap_Create();
    PlayerPalettePool_AllocBuffers(sPlayerPalettePool.unk_00);
    if (gPlayerPaletteHeap) {
        func_020e877c(gPlayerPaletteHeap);
    }
}

extern "C" void PlayerPalettePool_Destroy()
{
    PlayerPalettePool_FreeBuffers(sPlayerPalettePool.unk_00);
    PlayerPaletteHeap_Destroy();
}

char *PlayerPalette_GetPath(u32 x)
{
    func_020639e8(sPlayerPalettePathBuf, "/PPal/%d/%d.nsbtx", x >> 5, x);
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
    u32 n = gCommManager[0x6c];
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
        func_020e885c(gPlayerPaletteHeap);
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
    return PlayerPalettePool_GetBuffer(sPlayerPalettePool.unk_00, *p);
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


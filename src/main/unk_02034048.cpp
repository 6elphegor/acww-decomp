#include "types.h"
#include "game/Unk_02034250_Id.h"

// 2-byte element (0xfff1 = none), constructed by __sinit; destructor is in another unit (0x02004b60)
class ItemId {
public:
    u16 id;

    ItemId() { id = 0xfff1; }
    ~ItemId();
};


extern "C" {
extern u8 gFieldSceneKind;
extern void *gCommManager;
extern u8 gSavePlayers[];
extern u8 gSaveHouse[];

void *RoomShell_GetPrevCarpet();
void *RoomShell_GetPrevWallpaper();
void *RoomShell_SetCarpet(u16 *id, s32 a, s32 b);
void *RoomShell_SetWallpaper(u16 *id, s32 a, s32 b);
s32 Item_SetDesign(u16 *out, s32 a, s32 b);
BOOL PlayerData_GetCurrent();
u32 _ZN10PlayerData11getPlayerIdEv();
u32 PlayerDataArray_FindById(void *a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
s32 Scene_GetCurrent();
BOOL SceneId_IsHouseRoom(s32 a);
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *q, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
void *_ZN9HouseData15getRoomForSceneEi(void *a, s32 b);
void _ZN9HouseRoom12setWallpaperEPtj(void *a, void *b, s32 c);
void _ZN9HouseRoom9setCarpetEPtj(void *a, void *b, s32 c);

BOOL RoomWallFloor_SetSceneCarpet(u32 i, u16 *v);
BOOL RoomWallFloor_SetSceneWallpaper(u32 i, u16 *v);
void RoomWallFloor_Send(u16 *id, s32 a, s32 b, s32 c);
void RoomWallFloor_MakeDesignItem(u16 *out, s32 a);
void *RoomWallFloor_SetCarpet(u16 *id, s32 a, s32 b, s32 c);
void *RoomWallFloor_SetWallpaper(u16 *id, s32 a, s32 b, s32 c);
void RoomWallFloor_Set(u16 *a, s32 b, s32 c, s32 d, u8 e);
}

extern ItemId sRoomWallFloorNoItem;
extern ItemId sSceneWallpapers[0x33];
extern ItemId sSceneCarpets[0x33];

static inline BOOL Unk_020341c0_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }


struct RoomWallFloorPacket {
    u16 item;
    u16 id : 6;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
};

extern "C" void RoomWallFloor_MakeDesignItem(u16 *out, s32 a) {
    u32 x = a & 7;
    u32 y = 0;
    if (PlayerData_GetCurrent()) {
        y = PlayerDataArray_FindById(gSavePlayers, _ZN10PlayerData11getPlayerIdEv()) & 3;
    }
    Item_SetDesign(out, y, x);
}

extern "C" void RoomWallFloor_Send(u16 *id, s32 a, s32 b, s32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        Unk_02034320_Pkt pkt;
        pkt.a = *id;
        pkt.b = (pkt.b & ~0x3f) | (Scene_GetCurrent() & 0x3f);
        pkt.b = (pkt.b & ~0x40) | ((b & 1) << 6);
        pkt.b = (pkt.b & ~0x80) | (((u16)a & 1) << 7);
        pkt.b = (pkt.b & ~0x100) | ((c & 1) << 8);
        void *obj = gCommManager;
        _ZN11CommManager11beginRecordEv(obj);
        _ZN11CommManager11writeRecordEPhj(obj, &pkt, 4);
        _ZN11CommManager9endRecordEjj(obj, 0x14, 4);
    }
}

extern "C" void *RoomWallFloor_SetWallpaper(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        r = RoomShell_SetWallpaper(&t, a, b);
        if (c != 0) {
            RoomWallFloor_Send(&t, a, 1, b);
        }
        return r;
    }
    return &sRoomWallFloorNoItem.id;
}

extern "C" void *RoomWallFloor_SetWallpaperDesign(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    RoomWallFloor_MakeDesignItem(&id, a);
    return RoomWallFloor_SetWallpaper(&id, b, c, d);
}

extern "C" void *RoomWallFloor_SetCarpet(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        r = RoomShell_SetCarpet(&t, a, b);
        if (c != 0) {
            RoomWallFloor_Send(&t, a, 0, b);
        }
        return r;
    }
    return &sRoomWallFloorNoItem.id;
}

extern "C" void *RoomWallFloor_SetCarpetDesign(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    RoomWallFloor_MakeDesignItem(&id, a);
    return RoomWallFloor_SetCarpet(&id, b, c, d);
}

extern "C" BOOL RoomWallFloor_RestoreWallpaper(s32 a) {
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        RoomWallFloor_SetWallpaper((u16 *)RoomShell_GetPrevWallpaper(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL RoomWallFloor_RestoreCarpet(s32 a) {
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        RoomWallFloor_SetCarpet((u16 *)RoomShell_GetPrevCarpet(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void RoomWallFloor_Set(u16 *a, s32 b, s32 c, s32 d, u8 e)
{
    if (c != 0) {
        RoomWallFloor_SetWallpaper(a, b, d, e);
    } else {
        RoomWallFloor_SetCarpet(a, b, d, e);
    }
}

extern "C" void RoomWallFloor_ClearScenes()
{
    u32 i;
    for (i = 0; i < 0x33; i++) {
        sSceneCarpets[i].id = 0xfff1;
        sSceneWallpapers[i].id = sSceneCarpets[i].id;
    }
}

extern "C" BOOL RoomWallFloor_SetSceneWallpaper(u32 i, u16 *v)
{
    if (i < 0x33) {
        sSceneWallpapers[i].id = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *RoomWallFloor_GetSceneWallpaper(u32 i)
{
    if (i < 0x33) {
        return &sSceneWallpapers[i].id;
    }
    return &sRoomWallFloorNoItem.id;
}

extern "C" BOOL RoomWallFloor_SetSceneCarpet(u32 i, u16 *v)
{
    if (i < 0x33) {
        sSceneCarpets[i].id = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *RoomWallFloor_GetSceneCarpet(u32 i)
{
    if (i < 0x33) {
        return &sSceneCarpets[i].id;
    }
    return &sRoomWallFloorNoItem.id;
}

extern "C" void RoomWallFloor_ApplyRecv(RoomWallFloorPacket *p)
{
    u16 tmp = p->item;
    u8 id = p->id;
    u32 f7 = p->f7;
    BOOL f6;
    if (p->f6 != 0) {
        f6 = TRUE;
    } else {
        f6 = FALSE;
    }
    s32 f8;
    if (p->f8 != 0) {
        f8 = 1;
    } else {
        f8 = 0;
    }
    if (p->id == Scene_GetCurrent()) {
        RoomWallFloor_Set(&tmp, f7, f6, f8, 0);
    } else if (SceneId_IsHouseRoom(id)) {
        void *r = _ZN9HouseData15getRoomForSceneEi(gSaveHouse, id);
        if (r != NULL) {
            if (f6) {
                _ZN9HouseRoom12setWallpaperEPtj(r, &tmp, f7);
                RoomWallFloor_SetSceneWallpaper(id, &tmp);
            } else {
                _ZN9HouseRoom9setCarpetEPtj(r, &tmp, f7);
                RoomWallFloor_SetSceneCarpet(id, &tmp);
            }
        }
    } else if (f6) {
        RoomWallFloor_SetSceneWallpaper(id, &tmp);
    } else {
        RoomWallFloor_SetSceneCarpet(id, &tmp);
    }
}

ItemId sRoomWallFloorNoItem;
ItemId sSceneWallpapers[0x33];
ItemId sSceneCarpets[0x33];

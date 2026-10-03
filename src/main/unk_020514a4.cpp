#include "types.h"

extern "C" {
void *__cxa_vec_ctor(void *p, u32 n, u32 sz, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);
}

// 16 x u16 bit matrix
class FtrSwitchGrid {
public:
    u16 unk_00[16];
    FtrSwitchGrid();
    ~FtrSwitchGrid();
    void set(u32 x, u32 y, u32 set);
    BOOL test(u32 x, u32 y);
    void reset();
};

// small 4-slot table
struct Unk_0205276c_Slot {
    u8 lo : 4;
    u8 hi : 4;
};

class GyroidBeatTable {
public:
    Unk_0205276c_Slot unk_00[4];
    u8 unk_04[1];
    u8 unk_05[2];
    GyroidBeatTable();
    ~GyroidBeatTable();
    BOOL set(u32 x, u32 y, u32 val);
    BOOL remove(u32 x, u32 y);
    s32 get(u32 x, u32 y);
    void clear();
};

class RoomFtrState {
public:
    FtrSwitchGrid unk_00[2];
    GyroidBeatTable unk_40;
    RoomFtrState();
    ~RoomFtrState();
    BOOL removeGyroidBeat(u32 a, u32 b);
    BOOL setGyroidBeat(u32 a, u32 b, u32 c);
    s32 getGyroidBeat(u32 a, u32 b);
    void setSwitch(u32 x, u32 y, u32 idx, u8 v);
    BOOL getSwitch(u32 x, u32 y, u32 idx);
    void reset();
};

struct Unk_02052ab4_Vec {
    s32 x, y, z;
};

class SpotReservation {
public:
    u8 unk_00;
    s32 unk_04, unk_08, unk_0c;
    u8 unk_10;
    SpotReservation();
    ~SpotReservation();
    BOOL release();
    BOOL set(u32 tag, Unk_02052ab4_Vec *p);
    void clear();
};

class SpotReservationTable {
public:
    SpotReservation unk_00[4];
    ~SpotReservationTable();
    BOOL tryReserve(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
    BOOL isFree(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
    BOOL release(s32 idx);
    BOOL set(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
};

struct Unk_02051d24_Obj {
    virtual s32 v00(); virtual s32 v04(); virtual s32 v08(); virtual s32 v0c();
    virtual s32 v10(); virtual s32 v14(); virtual s32 v18(); virtual s32 v1c();
    virtual s32 v20(); virtual s32 v24(); virtual s32 v28(); virtual s32 v2c();
    virtual s32 v30(); virtual s32 v34(); virtual s32 v38(); virtual s32 v3c();
    virtual s32 v40(); virtual s32 v44(); virtual s32 v48(); virtual s32 v4c();
    virtual s32 v50(); virtual s32 v54(); virtual s32 v58(); virtual s32 v5c();
    virtual s32 v60(); virtual s32 v64(); virtual s32 v68(); virtual s32 v6c();
    virtual s32 vfunc_70(s32 a, u32 b);
    virtual s32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
};

struct Unk_02052134_W { u32 a:1, b:4, c:4, d:1, e:1, f:16; };
struct Unk_020520a8_W { u32 a:4, b:4, c:16; };
struct Unk_020520d0_W { u32 a:4, b:4, h:4, i:1, j:1, k:1, c:16; };
struct Unk_0205218c_B { u8 a:6, b:1, c:1; };
struct Unk_02051fcc_W { u16 a:6, b:1, c:4, d:4; };
struct Unk_020521fc_W { u32 a:6, b:1, c:1, d:4, e:4, f:5, g:8, n:1, o:1, p:1; };
struct Unk_0205242c_Item {
    s16 a, b;
    Unk_0205242c_Item() { a = 0; b = 0; }
    Unk_0205242c_Item(s16 x, s16 y) { a = x; b = y; }
};
struct Unk_0205242c_Ent { Unk_0205242c_Item *rows[4]; u8 count; };
struct Unk_0205242c_Self { s32 a; s32 b; };
struct Unk_02051f68_V { s32 x, y, z; };
struct Unk_02051a50_Bits {
    u32 x : 4;
    u32 y : 4;
    u32 g : 4;
    u32 d : 1;
    u32 e : 1;
    u32 f : 1;
    u32 item : 16;
    u32 pad : 1;
};

extern u8 gFieldSceneKind;
extern void *gCommManager;
extern void *gSceneBlockMap;
extern u8 gSaveHouse[];
extern const Unk_0205242c_Ent sFtrFootprint1x1;
extern const Unk_0205242c_Ent sFtrFootprint2x1;
extern const Unk_0205242c_Ent sFtrFootprint2x2;

inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" {
BOOL _ZN8FtrActor11findOwnTileEPiS0_ii(s32 a, s32 *x, s32 *y, s32 z, s32 w);
s32 FtrActor_GetLayer(s32 a);
void *FtrActorGrid_GetInstance();
Unk_02051d24_Obj *_ZN12FtrActorGrid8getActorEiii(void *self, s32 a, s32 b, s32 c);
void FtrActor_GetFtrIndex(void *p);
s32 _ZN8FtrActor9isPreviewEv(void *p);
s32 FtrActor_PredIsStereo(void *p);
s32 _ZN9FtrSwitch4isOnEv(void *p);
s32 FtrMgr_CountSwitchedOn(void (*f)());
void _ZN8FtrActor8isGyroidEv();
void *FtrMgr_SwitchOffRandom(void (*f)(), s32 a);

s32 _ZN11CommManager8isOnlineEv(void *p);
s32 _ZN11CommManager7isMyAidEj(void *p, s32 v);
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *d, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
u32 Scene_GetCurrent();
s32 NetArea_IsLocalOwner();
void *BlockMap_GetItemPtr(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void *BlockMap_GetForArea(s32 a);
s32 BlockMap_SetItemAtUnit(void *p, void *b, s32 c, s32 d, s32 e);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
s32 Item_GetFurnitureIndex(void *p);
s32 Item_GetFurnitureDirection(void *p);
s32 FtrInfo_GetUnk05(s32 a);
void _ZN9HouseData11setRoomFlagEjj(void *p, s32 a, s32 b);
s32 _ZN9HouseData7getRoomEi(void *p, s32 a);
RoomFtrState *_ZN9HouseRoom13func_0206086cEv();
void HouseRoom_ClearSongForScene(s32 a);
void HouseRoom_SetSongForScene(s32 a, u16 *p);
s32 SceneId_IsHouseRoom(u32 id);
s32 SceneId_GetHouseRoom(u32 id);
s32 SceneId_IsVillagerHouse(u32 id);
s32 SceneId_GetVillagerHouse(u32 id);
s32 SceneId_IsNookShop(u32 id);
s32 SceneId_GetNookShop(u32 id);

u32 SpotSync_GetReserveResult();
void SpotSync_RequestReserve(s32 *p);
void SpotSync_Release(void *p);
void FtrSync_RequestToggleGyroidAt(s32 a, s32 b, s32 c, s32 d);
void FtrSync_SendRoomLight(s32 a, s32 b, s32 c);
void FtrSync_ApplyRoomLight(s32 a, s32 b);
void FtrSync_SetTopItem(s32 a, s32 b, s32 c, u16 *d, u8 f);
void FtrSync_PlaceFurniture(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, u16 *h, u8 i);
void FtrSync_RemoveFurniture(s32 a, s32 b, s32 c, s32 d, s32 e, u16 *f, s32 g, u8 h);
s32 FtrSync_RequestActAt(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g);
s32 FtrSync_ChangeActAt(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g);
s32 FtrSync_SendState(u32 a, u32 b, u32 c, u32 d, u8 e, u8 f, s32 g);
s32 FtrSync_ChangeAct(s32 a, s32 b, u8 c, u8 d);
void FtrSync_ToggleGyroidAt(u8 a, s32 b, s32 c, u8 d, u8 e);
s32 FtrSync_ApplyState(u8 a, s32 b, s32 c, s32 d, u8 e, bool f, bool g, bool h, u8 i);
Unk_0205242c_Item *FtrFootprint_GetTileOffset(Unk_0205242c_Self *p, u32 idx);
s32 FtrFootprint_GetTileCount(Unk_0205242c_Self *p);
void FtrFootprint_Destruct(Unk_0205242c_Self *p);
Unk_0205242c_Self *FtrFootprint_Init(Unk_0205242c_Self *p, u16 *q);
s32 RoomFtrState_RemoveGyroidBeat(s32 a, s32 b, u32 c);
s32 RoomFtrState_SetGyroidBeat(s32 a, s32 b, s32 c, u32 d);
s32 RoomFtrState_SetSwitch(s32 a, s32 b, s32 c, u8 d, u8 e);
RoomFtrState *RoomFtrState_GetForScene(u32 id);
BOOL RoomFtrState_ResetScene(u32 v);
BOOL RoomFtrState_ResetVillagerHouse(u32 idx);
void RoomFtrState_ResetAll();
}

extern "C" {
extern u8 data_020d0c08;
}

// ---- globals, in the order the original __sinit builds them ----
RoomFtrState sVillagerHouseFtrStates[8];
RoomFtrState sNookShopFtrStates[6];
RoomFtrState sScene10FtrState;
SpotReservationTable sSpotReservations;

extern Unk_0205242c_Item data_021c4e3c[2];
extern Unk_0205242c_Item data_021c4e44[2];
extern Unk_0205242c_Item data_021c4e54[2];
extern Unk_0205242c_Item data_021c4e4c[2];
extern Unk_0205242c_Item data_021c4e8c[4];
extern const Unk_0205242c_Ent *sFtrFootprintTables[3];
extern s32 sSpotReserveResult;

extern "C" {
long long func_01ffd028(void *a, void *b);
}

SpotReservation::SpotReservation() { clear(); }

SpotReservation::~SpotReservation() {}

SpotReservationTable::~SpotReservationTable() {}

void SpotReservation::clear() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
}

BOOL SpotReservation::set(u32 tag, Unk_02052ab4_Vec *p) {
    unk_00 = 1;
    unk_04 = p->x;
    unk_08 = p->y;
    unk_0c = p->z;
    unk_10 = tag;
    return TRUE;
}

BOOL SpotReservation::release() {
    unk_00 = 0;
    return TRUE;
}

BOOL SpotReservationTable::set(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (idx < 4) return unk_00[idx].set(tag, p);
    return TRUE;
}

BOOL SpotReservationTable::release(s32 idx) {
    if (idx < 4) return unk_00[idx].release();
    return FALSE;
}

BOOL SpotReservationTable::isFree(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (idx < 4) {
        for (u32 i = 0; i < 4; i++) {
            SpotReservation *e = &unk_00[i];
            if ((s32)i != idx && e->unk_00 != 0 && tag == e->unk_10) {
                if (func_01ffd028(&e->unk_04, p) < 0x2400) return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL SpotReservationTable::tryReserve(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (isFree(idx, tag, p)) return set(idx, tag, p);
    return FALSE;
}

FtrSwitchGrid::FtrSwitchGrid() { reset(); }

FtrSwitchGrid::~FtrSwitchGrid() {}

void FtrSwitchGrid::reset() {
    for (u32 i = 0; i < 16; i++) unk_00[i] = 0xffff;
}

BOOL FtrSwitchGrid::test(u32 x, u32 y) {
    x &= 0xf; y &= 0xf;
    s32 v = unk_00[y];
    if ((v >> x) & 1) return TRUE;
    return FALSE;
}

void FtrSwitchGrid::set(u32 x, u32 y, u32 set) {
    s32 xx = x & 0xf;
    s32 yy = y & 0xf;
    if (set) unk_00[yy] |= 1 << xx;
    else unk_00[yy] &= ~(1 << xx);
}

GyroidBeatTable::GyroidBeatTable() { clear(); }

GyroidBeatTable::~GyroidBeatTable() {}

void GyroidBeatTable::clear() {
    for (u32 i = 0; i < 4; i++) {
        unk_00[i].lo = 0;
        unk_00[i].hi = 0;
    }
    unk_04[0] = 0;
    for (u32 j = 0; j < 2; j++) unk_05[j] = 0;
}

s32 GyroidBeatTable::get(u32 x, u32 y) {
    for (u32 i = 0; i < 4; i++) {
        if ((unk_04[i >> 3] >> (i & 7)) & 1) {
            if (x == unk_00[i].lo && y == unk_00[i].hi) {
                return (unk_05[i >> 1] >> ((i & 1) << 2)) & 0xf;
            }
        }
    }
    return -1;
}

BOOL GyroidBeatTable::remove(u32 x, u32 y) {
    for (u32 i = 0; i < 4; i++) {
        if ((unk_04[i >> 3] >> (i & 7)) & 1) {
            if (x == unk_00[i].lo && y == unk_00[i].hi) {
                unk_00[i].lo = 0;
                unk_00[i].hi = 0;
                unk_04[i >> 3] &= ~(1 << (i & 7));
                unk_05[i >> 1] &= ~(0xf << ((i & 1) << 2));
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL GyroidBeatTable::set(u32 x, u32 y, u32 val) {
    if (val >= 16) return FALSE;
    if (get(x, y) == -1) {
        for (u32 i = 0; i < 4; i++) {
            if (!((unk_04[i >> 3] >> (i & 7)) & 1)) {
                u32 sh = (i & 1) << 2;
                unk_00[i].lo = (u8)x;
                unk_00[i].hi = (u8)y;
                unk_05[i >> 1] &= ~(0xf << sh);
                { u32 t = *(volatile u8 *)&unk_05[i >> 1]; t |= (val <<= sh); unk_05[i >> 1] = t; }
                unk_04[i >> 3] |= 1 << (i & 7);
                return TRUE;
            }
        }
    } else {
        for (u32 i = 0; i < 4; i++) {
            if ((unk_04[i >> 3] >> (i & 7)) & 1) {
                if (x == unk_00[i].lo && y == unk_00[i].hi) {
                    u32 sh = (i & 1) << 2;
                    unk_05[i >> 1] &= ~(0xf << sh);
                    { u32 t = *(volatile u8 *)&unk_05[i >> 1]; t |= (val <<= sh); unk_05[i >> 1] = t; }
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

RoomFtrState::RoomFtrState() { reset(); }

RoomFtrState::~RoomFtrState() {}

void RoomFtrState::reset() {
    for (u32 i = 0; i < 2; i++) unk_00[i].reset();
    unk_40.clear();
}

BOOL RoomFtrState::getSwitch(u32 x, u32 y, u32 idx) { return unk_00[idx].test(x, y); }

void RoomFtrState::setSwitch(u32 x, u32 y, u32 idx, u8 v) { unk_00[idx].set(x, y, v); }

extern "C" void RoomFtrState_ResetAll() {
    for (u32 i = 0; i < 8; i++) sVillagerHouseFtrStates[i].reset();
    for (u32 i = 0; i < 6; i++) sNookShopFtrStates[i].reset();
    sScene10FtrState.reset();
}

extern "C" BOOL RoomFtrState_ResetScene(u32 v) {
    RoomFtrState *p = RoomFtrState_GetForScene(v);
    if (p) {
        p->reset();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL RoomFtrState_ResetVillagerHouse(u32 idx) { return RoomFtrState_ResetScene((u8)(data_020d0c08 + idx)); }

s32 RoomFtrState::getGyroidBeat(u32 a, u32 b) { return unk_40.get(a, b); }

BOOL RoomFtrState::setGyroidBeat(u32 a, u32 b, u32 c) { return unk_40.set(a, b, c); }

BOOL RoomFtrState::removeGyroidBeat(u32 a, u32 b) { return unk_40.remove(a, b); }

// ---- 0x020514a4..0x020525a8 ----

extern "C" RoomFtrState *RoomFtrState_GetForScene(u32 id) {
    if (SceneId_IsHouseRoom(id)) {
        if (_ZN9HouseData7getRoomEi(gSaveHouse, SceneId_GetHouseRoom(id))) {
            return _ZN9HouseRoom13func_0206086cEv();
        }
    } else if (SceneId_IsVillagerHouse(id)) {
        return &sVillagerHouseFtrStates[SceneId_GetVillagerHouse(id)];
    } else if (SceneId_IsNookShop(id)) {
        return &sNookShopFtrStates[SceneId_GetNookShop(id)];
    } else if (id == 10) {
        return &sScene10FtrState;
    }
    return 0;
}

extern "C" s32 RoomFtrState_GetSwitch(s32 a, s32 b, s32 c, u32 d) {
    RoomFtrState *r = RoomFtrState_GetForScene(d);
    if (r) return r->getSwitch(a, b, c);
    return 0;
}

extern "C" s32 RoomFtrState_SetSwitch(s32 a, s32 b, s32 c, u8 d, u8 e) {
    RoomFtrState *r = RoomFtrState_GetForScene(e);
    if (r) {
        r->setSwitch(a, b, c, d);
    }
}

extern "C" s32 RoomFtrState_GetGyroidBeat(s32 a, s32 b, u32 c) {
    RoomFtrState *r = RoomFtrState_GetForScene(c);
    if (r) return r->getGyroidBeat(a, b);
    return -1;
}

extern "C" s32 RoomFtrState_SetGyroidBeat(s32 a, s32 b, s32 c, u32 d) {
    RoomFtrState *r = RoomFtrState_GetForScene(d);
    if (r) return r->setGyroidBeat(a, b, c);
    return 0;
}

extern "C" s32 RoomFtrState_RemoveGyroidBeat(s32 a, s32 b, u32 c) {
    RoomFtrState *r = RoomFtrState_GetForScene(c);
    if (r) return r->removeGyroidBeat(a, b);
    return 0;
}

extern "C" Unk_0205242c_Self *FtrFootprint_Init(Unk_0205242c_Self *p, u16 *q) {
    p->a = -1;
    s32 r = Item_GetFurnitureIndex(q);
    s32 m = -1;
    if (r != m) {
        p->a = FtrInfo_GetUnk05(r);
        p->b = Item_GetFurnitureDirection(q);
    }
    return p;
}

extern "C" void FtrFootprint_Destruct(Unk_0205242c_Self *) {}

extern "C" s32 FtrFootprint_GetTileCount(Unk_0205242c_Self *p) {
    if (p->a < 3) {
        return sFtrFootprintTables[p->a]->count;
    }
    return 0;
}

extern "C" Unk_0205242c_Item *FtrFootprint_GetTileOffset(Unk_0205242c_Self *p, u32 idx) {
    if (p->a < 3 && idx < FtrFootprint_GetTileCount(p)) {
        return &sFtrFootprintTables[p->a]->rows[p->b][idx & 3];
    }
    static Unk_0205242c_Item dflt;
    return &dflt;
}

Unk_0205242c_Item data_021c4e34(0, 0);
Unk_0205242c_Item data_021c4e3c[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(1, 0) };
const Unk_0205242c_Ent *sFtrFootprintTables[3] = { &sFtrFootprint1x1, &sFtrFootprint2x1, &sFtrFootprint2x2 };
extern const Unk_0205242c_Ent sFtrFootprint2x2 = { { data_021c4e8c, data_021c4e8c, data_021c4e8c, data_021c4e8c }, 4 };
extern const Unk_0205242c_Ent sFtrFootprint2x1 = { { data_021c4e3c, data_021c4e44, data_021c4e54, data_021c4e4c }, 2 };
extern const Unk_0205242c_Ent sFtrFootprint1x1 = { { &data_021c4e34, &data_021c4e34, &data_021c4e34, &data_021c4e34 }, 1 };
Unk_0205242c_Item data_021c4e44[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(0, -1) };
Unk_0205242c_Item data_021c4e54[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(-1, 0) };
s32 sSpotReserveResult;
Unk_0205242c_Item data_021c4e4c[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(0, 1) };
Unk_0205242c_Item data_021c4e8c[4] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(1, 0), Unk_0205242c_Item(0, 1), Unk_0205242c_Item(1, 1) };

extern "C" s32 FtrSync_ApplyState(u8 a, s32 b, s32 c, s32 d, u8 e, bool f, bool g, bool h, volatile u8 i) {
    if (IsOne(gFieldSceneKind) && a == Scene_GetCurrent()) {
        Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), b, c, d);
        if (o) {
            return o->vfunc_70(e, i);
        }
    }
    void *t = BlockMap_GetForArea(a);
    if (t) {
        s32 hb = b >> 4;
        s32 hc = c >> 4;
        u16 *p = (u16 *)BlockMap_GetItemPtr(t, hb, hc, b - (hb << 4), c - (hc << 4), 0);
        if (p && Range(p, 0x45dc, 0x47d7)) {
            if (f) {
                RoomFtrState_SetGyroidBeat(b, c, (u8)(i & 0xf), a);
            } else {
                RoomFtrState_RemoveGyroidBeat(b, c, a);
            }
        }
    }
    RoomFtrState_SetSwitch(b, c, d, f, a);
    if (g) {
        if (f) {
            u32 t = i;
            u16 v = t < 0x46 ? (u16)(t + 0x1323) : 0x1323;
            HouseRoom_SetSongForScene(a, &v);
        } else if (!h) {
            HouseRoom_ClearSongForScene(a);
        }
    }
    return 1;
}

extern "C" s32 FtrSync_OnStateRecord(u32 *pp) {
    Unk_020521fc_W *p = (Unk_020521fc_W *)pp;
    if (p->n == 1) {
        FtrSync_ApplyState(p->a, p->d, p->e, (u8)p->b, p->f, p->c, p->o, p->p, p->g);
        u32 w = *pp;
        w &= 0xdfffffff;
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, &w, 4);
        _ZN11CommManager9endRecordEjj(g, 0x18, 4);
    } else {
        FtrSync_ApplyState(p->a, p->d, p->e, (u8)p->b, p->f, p->c, p->o, p->p, p->g);
    }
}

extern "C" s32 FtrSync_OnRoomLightRecord(Unk_0205218c_B *p) {
    u32 a = p->a;
    BOOL b = p->b ? 1 : 0;
    if (p->c == 1) {
        _ZN9HouseData11setRoomFlagEjj(gSaveHouse, a, b);
        Unk_0205218c_B t;
        t = *p;
        t.c = 0;
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, &t, 1);
        _ZN11CommManager9endRecordEjj(g, 0x19, 4);
    } else {
        _ZN9HouseData11setRoomFlagEjj(gSaveHouse, a, b);
    }
}

extern "C" s32 FtrSync_OnRemoveRecord(s32 a, Unk_02052134_W *w) {
    u16 t = w->f;
    BOOL e = w->e ? 1 : 0;
    BOOL d = w->d ? 1 : 0;
    FtrSync_RemoveFurniture(a, w->b, w->c, (u8)w->a, e, &t, d, 0);
}

extern "C" s32 FtrSync_OnPlaceRecord(s32 a, Unk_020520d0_W *w) {
    u16 t = w->c;
    BOOL j = w->j ? 1 : 0;
    BOOL k = w->k ? 1 : 0;
    FtrSync_PlaceFurniture(a, w->a, w->b, (u8)w->i, j, k, (u8)w->h, &t, 0);
}

extern "C" s32 FtrSync_OnTopItemRecord(s32 a, Unk_020520a8_W *w) {
    u16 t = w->c;
    FtrSync_SetTopItem(a, w->a, w->b, &t, 0);
}

extern "C" void FtrSync_ToggleGyroidAt(u8 a, s32 b, s32 c, u8 d, u8 e) {
    if (a == Scene_GetCurrent() && IsOne(gFieldSceneKind)) {
        {
            Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), b, c, d);
            if (o) {
                if (_ZN9FtrSwitch4isOnEv((u8 *)o + 0x73c) == 0) {
                    if ((u32)FtrMgr_CountSwitchedOn(_ZN8FtrActor8isGyroidEv) >= 4) {
                        void *r = FtrMgr_SwitchOffRandom(_ZN8FtrActor8isGyroidEv, 0);
                        if (r) {
                            FtrSync_ChangeAct((s32)r, 0, 0xff, e);
                        }
                    }
                    FtrSync_ChangeActAt(b, c, d, 1, 0xff, e, 1);
                } else {
                    FtrSync_ChangeActAt(b, c, d, 0, 0xff, e, 1);
                }
            }
        }
    }
}

extern "C" void FtrSync_OnToggleRecord(Unk_02051fcc_W *p) {
    FtrSync_ToggleGyroidAt(p->a, p->c, p->d, p->b, 1);
}

extern "C" s32 SpotSync_OnReserveRequest(u8 *p, s32 q) {
    Unk_02051f68_V v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    v.x = p[0] << 9;
    v.z = p[1] << 9;
    if (sSpotReservations.tryReserve(q, p[2], (Unk_02052ab4_Vec *)&v)) {
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager9endRecordEjj(g, 0x1f, q);
    } else {
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager9endRecordEjj(g, 0x20, q);
    }
}

extern "C" void SpotSync_OnReserveReply(s32 x) {
    if (x) sSpotReserveResult = 1;
    else sSpotReserveResult = 2;
}

extern "C" s32 SpotSync_OnRelease(s32 x) {
    return sSpotReservations.release(x);
}

extern "C" s32 FtrSync_SendState(u32 a, u32 b, u32 c, u32 d, u8 e, u8 f, s32 g) {
    u32 w;
    u32 r5 = (g != 4) ? 1 : 0;
    Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), a, b, c);
    if (!o) return 0;
    if (_ZN11CommManager8isOnlineEv(gCommManager) && o && !_ZN8FtrActor9isPreviewEv(o)) {
        u32 t = o->vfunc_74(d);
        w = (w & ~0x3f) | (Scene_GetCurrent() & 0x3f);
        c = c & 1;
        w = (w & ~0x40) | (c << 6);
        t = t & 1;
        w = (w & ~0x80) | (t << 7);
        a = a & 0xf;
        w = (w & 0xfffff0ff) | (a << 8);
        b = b & 0xf;
        w = (w & 0xffff0fff) | (b << 12);
        d = d & 0x1f;
        w = (w & 0xffe0ffff) | (d << 16);
        w = (w & 0xe01fffff) | ((e & 0xff) << 21);
        w = (w & 0x7fffffff) | ((f & 1) << 31);
        r5 = r5 & 1;
        w = (w & 0xdfffffff) | (r5 << 29);
        w = (w & 0xbfffffff) | ((FtrActor_PredIsStereo(o) & 1) << 30);
        void *g2 = gCommManager;
        _ZN11CommManager11beginRecordEv(g2);
        _ZN11CommManager11writeRecordEPhj(g2, &w, 4);
        _ZN11CommManager9endRecordEjj(g2, 0x18, g);
    }
    return 1;
}

extern "C" s32 FtrSync_ChangeAct(s32 a, s32 b, u8 c, u8 d) {
    s32 x, y;
    if (IsOne(gFieldSceneKind)) {
        if (_ZN8FtrActor11findOwnTileEPiS0_ii(a, &x, &y, 0, 0)) {
            return FtrSync_ChangeActAt(x, y, FtrActor_GetLayer(a), b, c, d, 1);
        }
    }
    return 0;
}

extern "C" s32 FtrSync_ChangeActAt(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g) {
    if (!IsOne(gFieldSceneKind)) return 0;
    Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), a, b, c);
    if (!o) return 0;
    o->vfunc_70(d, e);
    if (g) {
        return FtrSync_SendState(a, b, c, d, o->vfunc_78(), f, 4);
    }
    return 1;
}

extern "C" s32 FtrSync_RequestAct(s32 a, s32 b, u8 c, u8 d) {
    s32 x, y;
    if (IsOne(gFieldSceneKind)) {
        if (_ZN8FtrActor11findOwnTileEPiS0_ii(a, &x, &y, 0, 0)) {
            return FtrSync_RequestActAt(x, y, FtrActor_GetLayer(a), b, c, d, 1);
        }
    }
    return 0;
}

extern "C" s32 FtrSync_RequestActAt(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g) {
    void *s = gCommManager;
    u8 *p;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0) {
        return FtrSync_ChangeActAt(a, b, c, d, e, f, g);
    }
    if (!(gFieldSceneKind == 1 ? TRUE : FALSE)) {
        return 0;
    }
    p = (u8 *)_ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), a, b, c);
    if (p == NULL) {
        return 0;
    }
    if (g != 0) {
        if (FtrSync_SendState(a, b, c, d, e, f, 0) != 0) {
            p[0x779] = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}

extern "C" void FtrSync_PlaceFurniture(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, u16 *h, u8 i) {
    void *o;
    u16 loc[3];
    Unk_0205242c_Self pk;
    Unk_02051a50_Bits bits;
    s32 x, y;
    s32 off;
    u32 idx;
    loc[0] = *h;
    if ((gFieldSceneKind == 1 ? TRUE : FALSE) && a == Scene_GetCurrent()) {
        o = gSceneBlockMap;
    } else {
        o = BlockMap_GetForArea(a);
    }
    if (o == NULL) {
        return;
    }
    FtrFootprint_Init(&pk, h);
    off = 0;
    for (idx = 0; idx < FtrFootprint_GetTileCount(&pk); idx++) {
        u16 *src;
        x = b + *(s16 *)((u8 *)FtrFootprint_GetTileOffset(&pk, idx) + off);
        y = c + ((s16 *)FtrFootprint_GetTileOffset(&pk, idx))[1];
        if (idx == 0) {
            src = &loc[0];
        } else {
            loc[2] = 0xf031;
            src = &loc[2];
        }
        loc[1] = *src;
        if (BlockMap_SetItemAtUnit(o, &loc[1], x, y, d) == 0) {
            FtrFootprint_Destruct(&pk);
            return;
        }
        ((s32 (*)(s32, s32, s32, s32, s32))RoomFtrState_SetSwitch)(x, y, d, e, a);
        if (f != 0 && e != 0 && idx == 0) {
            RoomFtrState_SetGyroidBeat(x, y, g, a);
        }
    }
    if (_ZN11CommManager8isOnlineEv(gCommManager) != 0 && i != 0) {
        void *t;
        bits.x = b;
        bits.y = c;
        bits.g = g & 0xf;
        bits.d = d;
        bits.e = e;
        bits.f = f;
        bits.item = loc[0];
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &bits, 4);
        _ZN11CommManager9endRecordEjj(t, 0x1c, 4);
    }
    FtrFootprint_Destruct(&pk);
}

extern "C" void FtrSync_RemoveFurniture(s32 a, s32 b, s32 c, s32 d, s32 e, u16 *f, s32 g, u8 h) {
    void *o;
    u32 idx;
    s32 x, y;
    BOOL k;
    u16 loc[3];
    Unk_0205242c_Self pk;
    u32 bits;
    loc[0] = *f;
    if ((gFieldSceneKind == 1 ? TRUE : FALSE) && a == Scene_GetCurrent()) {
        o = gSceneBlockMap;
    } else {
        o = BlockMap_GetForArea(a);
    }
    if (o == NULL) {
        return;
    }
    FtrFootprint_Init(&pk, f);
    k = FALSE;
    if (*f >= 0x45dc && *f <= 0x47d7) {
        k = TRUE;
    }
    for (idx = 0; idx < FtrFootprint_GetTileCount(&pk); idx++) {
        x = b + ((s16 *)FtrFootprint_GetTileOffset(&pk, idx))[0];
        y = c + ((s16 *)FtrFootprint_GetTileOffset(&pk, idx))[1];
        loc[1] = 0xfff1;
        if (BlockMap_SetItemAtUnit(o, &loc[1], x, y, d) == 0 ? TRUE : FALSE) {
            FtrFootprint_Destruct(&pk);
            return;
        }
        if (g != 0 && d == 0) {
            loc[2] = 0xfff1;
            if (BlockMap_SetItemAtUnit(o, &loc[2], x, y, 1) == 0 ? TRUE : FALSE) {
                FtrFootprint_Destruct(&pk);
                return;
            }
        }
        ((s32 (*)(s32, s32, s32, s32, s32))RoomFtrState_SetSwitch)(x, y, d, e, a);
        if (g != 0 && d == 0) {
            ((s32 (*)(s32, s32, s32, s32, s32))RoomFtrState_SetSwitch)(x, y, 1, e, a);
        }
        if (k != 0 && e != 0) {
            RoomFtrState_RemoveGyroidBeat(x, y, a);
        }
    }
    if (_ZN11CommManager8isOnlineEv(gCommManager) != 0 && h != 0) {
        void *t;
        bits = (bits & ~1) | (d & 1);
        bits = (bits & ~0x1e) | ((b & 0xf) << 1);
        bits = (bits & 0xfffffe1f) | ((c & 0xf) << 5);
        bits = (bits & 0xfffffdff) | ((g & 1) << 9);
        bits = (bits & 0xfffffbff) | ((e & 1) << 10);
        bits = (bits & 0xf80007ff) | ((loc[0] & 0xffff) << 11);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &bits, 4);
        _ZN11CommManager9endRecordEjj(t, 0x1b, 4);
    }
    FtrFootprint_Destruct(&pk);
}

extern "C" void FtrSync_SetTopItem(s32 a, s32 b, s32 c, u16 *d, u8 f) {
    void *o;
    if ((gFieldSceneKind == 1 ? TRUE : FALSE) && a == Scene_GetCurrent()) {
        o = gSceneBlockMap;
    } else {
        o = BlockMap_GetForArea(a);
    }
    if (o != NULL && BlockMap_SetItemAtUnit(o, d, b, c, 1) != 0 && f != 0 && _ZN11CommManager8isOnlineEv(gCommManager) != 0) {
        u32 bits;
        void *t;
        bits = (bits & ~0xf) | (b & 0xf);
        bits = (bits & ~0xf0) | ((c & 0xf) << 4);
        bits = (bits & 0xff0000ff) | ((*d & 0xffff) << 8);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &bits, 4);
        _ZN11CommManager9endRecordEjj(t, 0x1a, 4);
    }
}

extern "C" void FtrSync_SendRoomLight(s32 a, s32 b, s32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) != 0) {
        volatile u8 bits;
        BOOL f;
        void *t;
        bits = (bits & ~0x3f) | (a & 0x3f);
        bits = (bits & ~0x40) | ((b & 1) << 6);
        f = TRUE;
        if (c == 4) {
            f = FALSE;
        }
        bits = (bits & ~0x80) | ((f & 1) << 7);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, (void *)&bits, 1);
        _ZN11CommManager9endRecordEjj(t, 0x19, c);
    }
}

extern "C" void FtrSync_ApplyRoomLight(s32 a, s32 b) {
    _ZN9HouseData11setRoomFlagEjj(gSaveHouse, a, b);
    FtrSync_SendRoomLight(a, b, 4);
}

extern "C" void FtrSync_SetRoomLight(s32 a, s32 b) {
    void *s = gCommManager;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0) {
        FtrSync_ApplyRoomLight(a, b);
    } else {
        FtrSync_SendRoomLight(a, b, 0);
    }
}

extern "C" void FtrSync_RequestToggleGyroidAt(s32 a, s32 b, s32 c, s32 d) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0 || NetArea_IsLocalOwner() != 0) {
        ((void (*)(s32, s32, s32, s32, s32))FtrSync_ToggleGyroidAt)(a, b, c, d, 1);
    } else {
        volatile u16 bits;
        void *t;
        u8 *q = (u8 *)_ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), b, c, d);
        if (q != NULL) {
            q[0x779] = 1;
        }
        bits = (bits & ~0x3f) | (a & 0x3f);
        bits = (bits & ~0x40) | ((d & 1) << 6);
        bits = (bits & ~0x780) | (((u16)b & 0xf) << 7);
        bits = (bits & ~0x7800) | (((u16)c & 0xf) << 11);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, (void *)&bits, 2);
        _ZN11CommManager9endRecordEjj(t, 0x1d, 6);
    }
}

extern "C" void FtrSync_RequestToggleGyroid(s32 a, s32 b, s32 c) {
    s32 x, y;
    FieldPos_ToUnit(&x, &y, b);
    FtrSync_RequestToggleGyroidAt(a, x, y, c);
}

extern "C" void SpotSync_RequestReserve(s32 *p) {
    void *s;
    u8 buf[3];
    sSpotReserveResult = 0;
    s = gCommManager;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0) {
        if (sSpotReservations.tryReserve(0, Scene_GetCurrent(), (Unk_02052ab4_Vec *)p) != 0) {
            sSpotReserveResult = 1;
        } else {
            sSpotReserveResult = 2;
        }
    } else {
        void *t;
        buf[0] = p[0] >> 9;
        buf[1] = p[2] >> 9;
        buf[2] = Scene_GetCurrent();
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, buf, 3);
        _ZN11CommManager9endRecordEjj(t, 0x1e, 0);
    }
}

extern "C" u32 SpotSync_GetReserveResult() {
    return sSpotReserveResult;
}

extern "C" void SpotSync_RequestStandUpSpot(s32 *p) { SpotSync_RequestReserve(p); }

extern "C" u32 SpotSync_GetStandUpSpotResult() { return SpotSync_GetReserveResult(); }

extern "C" void SpotSync_Release(void *arg) {
    void *s;
    sSpotReserveResult = 0;
    s = gCommManager;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0 || _ZN11CommManager7isMyAidEj(s, 4) != 0) {
        sSpotReservations.release((s32)arg);
    } else {
        void *t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager9endRecordEjj(t, 0x21, 0);
    }
}


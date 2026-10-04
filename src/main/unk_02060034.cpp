#include "types.h"

inline void *operator new(unsigned long, void *p) {
    return p;
}

class RoomItemGrid {
public:
    u16 items[0x100];
    RoomItemGrid();
    ~RoomItemGrid();
    RoomItemGrid *getGrid();
    void clear();
};

class RoomFtrState {
public:
    u8 switchGrids[0x48];
    RoomFtrState();
    ~RoomFtrState();
    void reset();
};

struct MapBlockEntry {
    u32 acreId;
    u32 layers[2];
    u32 buried;
    MapBlockEntry();
};

class SongSet {
public:
    u8 bits[12];
    SongSet();
    ~SongSet();
    void clear();
};

class HouseRoom {
public:
    RoomItemGrid layers[2];
    RoomFtrState ftrState;
    u16 wallpaper;
    u16 carpet;
    u16 song;
    u8 unk_44e_0 : 1;
    u8 unk_44e_1 : 1;
    HouseRoom();
    ~HouseRoom();
    void func_02060878_dummy();
    MapBlockEntry *buildBlockEntry(void *heap);
    void reset(s32 i);
    void setSong(u16 *src);
    u16 *getSong();
    void setCarpet(u16 *src, u32 flag);
    void setWallpaper(u16 *src, u32 flag);
    u16 *getCarpet(s32 *out);
    u16 *getWallpaper(s32 *out);
    RoomFtrState *func_0206086c();
};

struct Unk_0206022c_Bits {
    u32 a : 3;
    u32 b : 3;
    u32 c : 4;
    u32 d : 4;
    u32 e : 4;
    u32 f : 6;
    u32 cnt : 8;
};

class HouseData {
public:
    HouseRoom rooms[5];
    s32 debt;
    SongSet songs;
    Unk_0206022c_Bits status;

    HouseData();
    ~HouseData();
    BOOL hasRoomFlags();
    BOOL setRoomFlag(u32 x, u32 set);
    BOOL orderUpgrade(u32 v);
    s32 isUpgradePaidOff();
    void startLoan();
    void setDebt(s32 v);
    s32 getDebt();
    void addRoachesForDays(s32 v);
    void setRoachCount(u8 v);
    u8 getRoachCount();
    u16 getRoomAcreId(s32 x);
    BOOL orderRoofPaint(u32 v);
    u8 getRoofColor();
    BOOL requestLevelUp();
    u32 getLevel();
    BOOL isUpgradePending();
    MapBlockEntry *buildRoomBlockEntry(s32 idx, void *heap);
    HouseRoom *getRoom(s32 idx);
    HouseRoom *getRoomForScene(s32 x);
    void resetDebt();
    void applyPendingWork();
    void reset();
};

extern "C" {
extern HouseData gSaveHouse;
extern u8 gSaveSongSet[];
extern u8 gSaveData[];
extern void *gInsectSpawnTables[];
extern u8 gSaveData[];
s32 SceneId_GetHouseRoom(u32 x);
s32 SceneId_IsHouseRoom(u32 x);
s32 _ZN8SaveData8testFlagEj(void *p, s32 v);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_BindBg();
void *TownBlockMap_Get();
u16 Item_MakePlayerHouse(s32 x);
MapBlockEntry *MapBlockEntry_NewArray(s32 n, void *heap);
BOOL BlockMap_FindItemAnyAttr(void *g, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 filter, s32 h);
void FieldUnit_FromBlockUnit(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
void *BlockMap_SetItemAtUnit(void *g, u16 *a, s32 x, s32 z, u8 d);
void OS_GetOwnerInfo(u8 *buf);
void RoomFtrState_SetSwitch(s32 a, s32 b, s32 c, s32 d, s32 e);
u32 HouseData_GetRoomFlagMask(u32 x);
BOOL HouseData_IsValidRoomIndex(s32 i);
u16 func_020603c8();
BOOL PlayerHouse_ReplaceStructure(s32 x);
}

extern "C" {
s32 Scene_GetCurrent();
void *__cxa_vec_cleanup(void *arr, u32 n, u32 sz, void (*dtor)(void *));
void *__cxa_vec_ctor(void *arr, u32 n, u32 sz, void (*ctor)(void *), void (*dtor)(void *));
void _ZN6ItemIdD1Ev(void *p);
void _ZN6ItemIdC1Ev(void *p);
void *Clock_GetTimeSeed();
s32 Random_SetSeed(void *a, void *b);
void SongSet_ClearBit(u8 *bits, u32 i);
void SongSet_SetBit(u8 *bits, u32 i);
BOOL SongSet_TestBit(u8 *bits, u32 i);
BOOL HouseRoom_SetCurrentSong(u16 *p);
BOOL HouseRoom_SetSongForScene(s32 a, u16 *p);
}


class Unk_020601cc_Dflt {
public:
    u16 item;
    inline Unk_020601cc_Dflt() { item = 0xfff1; }
    ~Unk_020601cc_Dflt();
};

extern const u16 data_020cb550[7];
extern const s32 sHouseLoanAmounts[7];
extern const u16 sHouseRoomAcreIds[7][5];

const u16 data_020cb550[7] = {0x1003, 0x1003, 0x1003, 0x1008, 0x1008, 0x1008, 0x1008};
const s32 sHouseLoanAmounts[7] = {0x4d58, 0x1d4c0, 0x48c10, 0x91ff0, 0xb1bc0, 0xcf080, 0xe7720};
const u16 sHouseRoomAcreIds[7][5] = {
    {0x1002, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1004, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1005, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1006, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1009, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x100b, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x100d, 0x100e, 0x100c, 0x100a, 0x1007}
};


struct Unk_02060654_Pad {
    s32 v[6];
    Unk_02060654_Pad() {}
    ~Unk_02060654_Pad() {}
};

struct Unk_020608b8_W {
    u16 v;
    Unk_020608b8_W(u16 x) { v = x; }
    ~Unk_020608b8_W();
};

static inline s32 Unk_02060044_Idx(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        return id - 0x1323;
    }
    return -1;
}

extern "C" void *_ZN12RoomItemGridC1Ev(void *p) {
    __cxa_vec_ctor(p, 0x100, 2, _ZN6ItemIdC1Ev, _ZN6ItemIdD1Ev);
    return p;
}

extern "C" void *_ZN12RoomItemGridD1Ev(void *p) {
    __cxa_vec_cleanup(p, 0x100, 2, _ZN6ItemIdD1Ev);
    return p;
}

void RoomItemGrid::clear() {
    u16 *p = items;
    for (s32 i = 0; i < 0x100; i++) {
        *p++ = 0xfff1;
    }
}

RoomItemGrid *RoomItemGrid::getGrid() { return this; }

HouseRoom::HouseRoom() { u16 v = 0xfff1;
    wallpaper = v;
    carpet = v;
    song = v; }

HouseRoom::~HouseRoom() {}

void HouseRoom::reset(s32 i) {
    RoomItemGrid *p = &layers[0];
    s32 j = 0;
    for (; j < 2; p++, j++) {
        p->clear();
    }
    ftrState.reset();
    static Unk_020608b8_W t1[5] = { Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e) };
    wallpaper = t1[i].v;
    static Unk_020608b8_W t2[5] = { Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182) };
    carpet = t2[i].v;
    song = 0xfff1;
    if (i == 0) {
        RoomItemGrid *a = layers[0].getGrid();
        RoomItemGrid *b = layers[1].getGrid();
        if (a) {
            a->items[0xa6] = 0x3808;
            a->items[0xa9] = 0x374c;
        }
        if (b) {
            b->items[0xa6] = 0x382c;
            RoomFtrState_SetSwitch(6, 10, 1, 0, 1);
        }
    }
}

MapBlockEntry *HouseRoom::buildBlockEntry(void *heap) {
    MapBlockEntry *p = MapBlockEntry_NewArray(1, heap);
    if (p) {
        new (p) MapBlockEntry;
    }
    if (p) {
        for (s32 i = 0; i < 2; i++) {
            p->layers[i] = (u32)layers[i].getGrid();
        }
        p->buried = 0;
    }
    return p;
}

RoomFtrState *HouseRoom::func_0206086c() { return &ftrState; }

u16 *HouseRoom::getWallpaper(s32 *out) {
    if (out) *out = unk_44e_0;
    return &wallpaper;
}

u16 *HouseRoom::getCarpet(s32 *out) {
    if (out) *out = unk_44e_1;
    return &carpet;
}

void HouseRoom::setWallpaper(u16 *src, u32 flag) {
    wallpaper = *src;
    unk_44e_0 = flag;
}

void HouseRoom::setCarpet(u16 *src, u32 flag) {
    carpet = *src;
    unk_44e_1 = flag;
}

u16 *HouseRoom::getSong() { return &song; }

void HouseRoom::setSong(u16 *src) { song = *src; }

HouseData::HouseData() {}

HouseData::~HouseData() {}

void HouseData::reset() {
    HouseRoom *p = &rooms[0];
    s32 i = 0;
    u8 buf[0x50];
    for (; i < 5; p++, i++) {
        p->reset(i);
    }
    status.a = 0;
    songs.clear();
    OS_GetOwnerInfo(buf);
    status.d = buf[1];
    status.c = status.d;
    status.e = 0;
}

extern "C" BOOL PlayerHouse_ReplaceStructure(s32 x) {
    void *g = TownBlockMap_Get();
    u16 arr[3];
    s32 ox, oz, a, b, c, d;
    Unk_02060654_Pad pad;
    arr[1] = 0x5014;
    arr[2] = 0x501a;
    if (BlockMap_FindItemAnyAttr(g, &a, &b, &c, &d, &arr[1], &arr[2], 1, 0)) {
        FieldUnit_FromBlockUnit(&ox, &oz, a, b, c, d);
        arr[0] = Item_MakePlayerHouse(x);
        if (BlockMap_SetItemAtUnit(g, arr, ox, oz, 0)) return TRUE;
    }
    return FALSE;
}

void HouseData::applyPendingWork() {
    if (status.c != status.d) {
        status.c = status.d;
    }
    u32 b = status.b;
    if (b != getLevel()) {
        if (PlayerHouse_ReplaceStructure(b)) {
            status.a = status.b;
            status.d = status.e;
            status.c = status.d;
            HouseRoomMaps_UpdateAll();
            HouseRoomMaps_BindBg();
            _ZN8SaveData7setFlagEj(gSaveData, 13);
        }
    }
}

void HouseData::resetDebt() {
    debt = 0x4d58;
    status.cnt = 0;
}

extern "C" BOOL HouseData_IsValidRoomIndex(s32 i) {
    if (i >= 0 && i < 5) return TRUE;
    return FALSE;
}

HouseRoom *HouseData::getRoomForScene(s32 x) {
    if (SceneId_IsHouseRoom(x)) {
        return getRoom(SceneId_GetHouseRoom(x));
    }
    return NULL;
}

HouseRoom *HouseData::getRoom(s32 idx) {
    HouseRoom *r = NULL;
    if (HouseData_IsValidRoomIndex(idx)) {
        r = &rooms[idx];
    }
    return r;
}

MapBlockEntry *HouseData::buildRoomBlockEntry(s32 idx, void *heap) {
    MapBlockEntry *p = NULL;
    HouseRoom *e = getRoom(idx);
    if (e) {
        p = e->buildBlockEntry(heap);
        if (p) {
            p->acreId = getRoomAcreId(idx);
        }
    }
    return p;
}

BOOL HouseData::isUpgradePending() {
    if (status.b != getLevel()) return TRUE;
    return FALSE;
}

u32 HouseData::getLevel() { return status.a; }

BOOL HouseData::requestLevelUp() {
    if (status.b == getLevel()) {
        if ((s32)getLevel() < 6) {
            status.b = (u8)(getLevel() + 1);
            return TRUE;
        }
    }
    return FALSE;
}

u8 HouseData::getRoofColor() { return (u8)(status.c & 0xf); }

BOOL HouseData::orderRoofPaint(u32 v) {
    status.d = (u8)(v & 0xf);
    return TRUE;
}

u16 HouseData::getRoomAcreId(s32 x) {
    if (x != -1) {
        s32 m = gSaveHouse.getLevel();
        if (m < 7) return sHouseRoomAcreIds[m][x];
        return 0x1002;
    }
    return 0x1002;
}

extern "C" u16 func_020603c8() {
    s32 m = gSaveHouse.getLevel();
    if (m < 7) return data_020cb550[m];
    return 0x1003;
}

u8 HouseData::getRoachCount() { return status.cnt; }

void HouseData::setRoachCount(u8 v) { status.cnt = v; }

void HouseData::addRoachesForDays(s32 v) {
    if (v >= 7) {
        s32 t = status.cnt + (v - 6);
        if (t > 10) t = 10;
        status.cnt = t;
    }
}

s32 HouseData::getDebt() { return debt; }

void HouseData::setDebt(s32 v) {
    if (v < 0) {
        debt = 0;
    } else {
        debt = v;
    }
}

void HouseData::startLoan() {
    if (getDebt() == 0) {
        u32 m = getLevel();
        if (m < 7) {
            setDebt(sHouseLoanAmounts[m]);
        }
    }
}

s32 HouseData::isUpgradePaidOff() {
    if (status.b == getLevel()) {
        if (getDebt() == 0) {
            return _ZN8SaveData8testFlagEj(gSaveData, 13);
        }
    }
    return 0;
}

BOOL HouseData::orderUpgrade(u32 v) {
    if (requestLevelUp()) {
        status.e = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 HouseData_GetRoomFlagMask(u32 x) {
    s32 r = SceneId_GetHouseRoom(x);
    u8 m = 0;
    if (r != -1) {
        m = 1 << r;
    }
    return m;
}

BOOL HouseData::setRoomFlag(u32 x, u32 set) {
    u32 m = HouseData_GetRoomFlagMask(x);
    if (m) {
        if (set) {
            status.f = status.f | m;
        } else {
            status.f = status.f & ~m;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL HouseData::hasRoomFlags() {
    if (status.f != 0) return TRUE;
    return FALSE;
}

extern "C" u16 *HouseRoom_GetCurrentSong()
{
    HouseRoom *r = gSaveHouse.getRoomForScene(Scene_GetCurrent());
    if (r != 0) {
        return r->getSong();
    }
    static Unk_020601cc_Dflt dflt;
    return &dflt.item;
}

extern "C" BOOL HouseRoom_SetSongForScene(s32 a, u16 *p)
{
    HouseRoom *r = gSaveHouse.getRoomForScene(a);
    if (r != 0) {
        r->setSong(p);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL HouseRoom_SetCurrentSong(u16 *p)
{
    return HouseRoom_SetSongForScene(Scene_GetCurrent(), p);
}

extern "C" BOOL HouseRoom_ClearSongForScene(s32 a)
{
    u16 v = 0xfff1;
    return HouseRoom_SetSongForScene(a, &v);
}

extern "C" BOOL HouseRoom_ClearCurrentSong()
{
    u16 v = 0xfff1;
    return HouseRoom_SetCurrentSong(&v);
}

SongSet::SongSet() {}

SongSet::~SongSet() {}

extern "C" BOOL SongSet_TestBit(u8 *bits, u32 i)
{
    if (i < 0x46) {
        if ((bits[i >> 3] >> (i & 7)) & 1) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL SongSet_HasSong(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        return SongSet_TestBit(gSaveSongSet, Unk_02060044_Idx(id));
    }
    return FALSE;
}

extern "C" void SongSet_SetBit(u8 *bits, u32 i)
{
    if (i < 0x46) {
        bits[i >> 3] |= 1 << (i & 7);
    }
}

extern "C" void SongSet_AddSong(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        SongSet_SetBit(gSaveSongSet, Unk_02060044_Idx(id));
    }
}

extern "C" void SongSet_ClearBit(u8 *bits, u32 i)
{
    if (i < 0x46) {
        bits[i >> 3] &= ~(1 << (i & 7));
    }
}

extern "C" void SongSet_RemoveSong(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        SongSet_ClearBit(gSaveSongSet, Unk_02060044_Idx(id));
    }
}

void SongSet::clear()
{
    u32 i = 0;
    s32 z = 0;
    for (; i < 9; i++) {
        bits[i] = z;
    }
}


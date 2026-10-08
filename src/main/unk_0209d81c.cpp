#include "types.h"
#include "save/SaveData.h"
#include "save/TownId.h"
#include "game/ReddShop.h"
#include "player/PlayerData.h"
#include "player/PlayerSpNpcRecord.h"
#include "room/HouseData.h"
#include "save/BbsBoard.h"
#include "save/BlancaFaceRecord.h"
#include "save/ContestRecord.h"
#include "save/LostChildRecord.h"
#include "save/Pattern.h"
#include "save/SaveRecord4.h"
#include "town/TownBlockMap.h"
#define PROTO_LOCAL_LostAndFound_InitRandom  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Melody_ResetToDefault  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_SaveData_InitCurrentPlayer  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_SaveData_InitNew  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownExchange_InitNop  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownId_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownId_InitWithName  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gCurrentHeap  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sFallbackTownName  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_020407fc.h"
#include "proto/main/unk_020850e0.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02093ff0.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_02097d1c.h"
#include "proto/main/unk_0209c4a8.h"
#include "proto/main/unk_0209d81c.h"
#include "proto/main/unk_020af3f4.h"
#include "proto/main/unk_020b0e60.h"

extern "C" {
void SaveData_SyncClockOffset(SaveData *p);
void SaveData_InitNew(u8 *p);
void SaveData_InitCurrentPlayer(u8 *p);
void LostAndFound_InitRandom(void *);
void TownState_InitNew(void *);
void Town_ClearBorderTrees(void *);
void HouseRoomMaps_BindBg(void);
void HouseRoomMaps_UpdateAll(void);
void *TownBlockMap_Get(void);
void TownMap_Generate(void *, u32);
void _ZN7TownMap18updateGroundSeasonEv(void *);
void FengShui_UpdateHouse(void);
void HappyRoomDate_Reset(void *);
void _ZN15ItemClassOrders12randomizeAllEv(void *);
void TownId_InitWithName(void *, const void *);
void TownId_Destruct(void *);
void Melody_ResetToDefault(void *);
void VillagerStates_SetBirthdayVisitor(s32);
void SaveVillagers_UpdateAllRoomInfo(void *);
void SaveVillagers_AssignErrands(void *);
void VillagerStates_ResetErrands(void);
void SaveVillagers_PlaceMissingHouses(void *);
void SaveVillagers_DailyUpdate(void *, s32);
void SaveVillagers_UpdateOutdoor(void *, s32);
void SaveVillagers_InitNewTown(void *);
void ReddLastSale_Clear(void *);
void _ZN12TurnipMarket4initEv(void *);
void _ZN16ResettiVisitFlag5clearEv(void *);
void TownExchange_InitNop(void *);
s32 ClockOffset_Clear(void *p);
void Clock_GetDate(void *p);
void Clock_Init(void);
void AbleShop_InitNew(void *);
void NookShop_InitNew(void *);
void _ZN14LooseSnowballs5resetEv(void *self);
void Weather_RerollRainSlantAlt();
void Weather_RerollRainSlantAlt2();
void Weather_InitNew(void *);
extern u32 gCurrentHeap;
extern u8 gSaveData[];
extern u32 sSndOutputModeTable[];
}

u8 sFallbackTownName[8] = {0x13, 0x1b, 0x30, 0x1b, 0x0e, 0x29, 0x28, 0x1f};



void SaveData::setupNoSave() {
    ClockOffset_Clear(&clockOffset);
    Clock_Init();
    TownMap_Generate(&townMap, gCurrentHeap);
    SaveData_RefreshTownBlockMap(this);
    TownId_InitWithName(&townId, sFallbackTownName);
    SaveData_InitNew((u8 *)this);
    _ZN14LooseSnowballs5resetEv(LooseSnowballs_Get());
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 0);
    ((SaveRecord4 *)(&footer))->clearState();
    Weather_RerollRainSlantAlt();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag((u8 *)TownSessionState_Get()));
}

void SaveData::setupLoaded() {
    SaveData_RefreshTownBlockMap(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    SaveVillagers_DailyUpdate(&villagers, 1);
    SaveVillagers_PlaceMissingHouses(&villagers);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    Weather_RerollRainSlantAlt2();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag((u8 *)TownSessionState_Get()));
    s32 z, i;
    u8 *p = gSaveData;
    i = 0;
    z = i;
    p += 0xc;
    for (; i < 4; i++) {
        void *x = PlayerData_GetResident(p, i);
        if (x) PlayerData_SetStungFace(x, z);
    }
}

void SaveData::setupMode05() {
    void *a = PlayerData_GetCurrent();
    SaveData_RefreshTownBlockMap(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    SaveData_InitCurrentPlayer((u8 *)this);
    ((PlayerData *)(a))->setFlag(1);
    ((PlayerData *)(a))->setFlag(0x23);
    ((PlayerData *)(a))->clearFlag(9);
    SaveVillagers_DailyUpdate(&villagers, 0);
    SaveVillagers_PlaceMissingHouses(&villagers);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&villagers);
    _ZN14LooseSnowballs5resetEv(LooseSnowballs_Get());
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    RoomEntry_Reset();
    ((PlayerData *)(a))->setSkyShotHits(0);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag((u8 *)TownSessionState_Get()));
    SaveVillagers_UpdateAllRoomInfo(&villagers);
}

void SaveData::setupMode06() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&townMap, gCurrentHeap);
    SaveData_RefreshTownBlockMap(this);
    ((SaveRecord4 *)(&unk_15fc5))->setDateToday((void *)(0));
    SaveData_InitCurrentPlayer((u8 *)this);
    SaveData_InitNew((u8 *)this);
    _ZN14LooseSnowballs5resetEv(LooseSnowballs_Get());
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    RoomEntry_Reset();
    ((PlayerData *)(a))->setFlag(1);
    ((PlayerData *)(a))->setFlag(0x23);
    ((PlayerData *)(a))->clearFlag(9);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag((u8 *)TownSessionState_Get()));
    SaveVillagers_UpdateAllRoomInfo(&villagers);
}

void SaveData_InitCurrentPlayer(u8 *p) {
    void *r4 = PlayerData_GetCurrent();
    TownId l;
    l = *(TownId *)PlayerId_GetTownId(((PlayerData *)(r4))->getPlayerId());
    Clock_GetDate(((PlayerData *)(r4))->getDayUpdateDate());
    ((TownId *)(((PlayerData *)(r4))->getPlayerId()))->setTown((TownId *)(p + 2));
    void *r5 = ((PlayerData *)(r4))->getPatterns();
    ((PlayerPatterns *)(r5))->replaceAuthorTown((Unk_020942c8 *)(((PlayerData *)(r4))->getPlayerId()), (Unk_020942c8 *)(&l));
    ((PlayerData *)(r4))->clearFlag(0x24);
    ((PlayerData *)(r4))->clearFlag(0x25);
    ((PlayerData *)(r4))->clearFlag(0x26);
    ((PlayerSpNpcRecord *)(((PlayerData *)(r4))->getSpNpcRecord()))->resetAcornCount();
    ((PlayerData *)(r4))->clearFlag(0xf);
    ((PlayerSpNpcRecord *)(((PlayerData *)(r4))->getSpNpcRecord()))->clearFestivalGift();
    ((LostChildRecord *)(((PlayerData *)(r4))->getLostChildRecord()))->clear();
    ((PlayerData *)(r4))->resetForNewTown();
    TownId_Destruct(&l);
}

void SaveData_InitNew(u8 *p) {
    p[0] = 0x8a;
    ((SaveRecord4 *)(p + 0x15fdc))->setStateValid();
    SaveVillagers_InitNewTown(p + 0x8a3c);
    SaveVillagers_PlaceMissingHouses(p + 0x8a3c);
    VillagerStates_ResetErrands();
    if (PlayerData_GetCurrent()) {
        SaveVillagers_AssignErrands(p + 0x8a3c);
    }
    TownStyleRecord_InitNew(p + 0x1592c);
    ((HouseData *)(p + 0xe558))->resetDebt();
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    ((AbleSistersPatterns *)(p + 0xfafc))->initDefaultPatterns();
    FengShui_UpdateHouse();
    _ZN15ItemClassOrders12randomizeAllEv(p + 0x15fbc);
    ((BbsBoard *)(p + 0x11488))->reset();
    NookShop_InitNew(p + 0x15db4);
    AbleShop_InitNew(p + 0x15f84);
    ((ReddShop *)(p + 0x15f70))->reset();
    TownState_InitNew(p + 0x15e54);
    Weather_InitNew(p + 0x15f66);
    EventWeekSlots_InitNew(p + 0x15e18);
    ((BlancaFaceRecord *)(p + 0x15700))->init();
    _ZN12TurnipMarket4initEv(p + 0x15f4c);
    ReddLastSale_Clear(p + 0x15f34);
    GulliverQuest_Init(p + 0xe556);
    ((ContestRecord *)(p + 0x15efc))->resetToday();
    HappyRoomDate_Reset(p + 0x15fb0);
    Melody_ResetToDefault(p + 0x15fa8);
    LostAndFound_InitRandom(p + 0x15ec0);
    RoostGuestRoll_Init(p + 0xe557);
    TownExchange_InitNop(p + 0x10c3c);
}

void SaveData_RefreshTownBlockMap(void *) {
    if (TownBlockMap_Get()) {
        ((TownBlockMap *)(TownBlockMap_Get()))->updateAcreIds();
        ((TownBlockMap *)(TownBlockMap_Get()))->bindBg();
        Town_ClearBorderTrees(TownBlockMap_Get());
    }
}


#include "types.h"
#include "save/SaveData.h"
#include "save/TownId.h"

extern "C" {
void SaveData_SyncClockOffset(void *);
void SaveData_RefreshTownBlockMap(void *);
void SaveData_InitNew(u8 *p);
void SaveData_InitCurrentPlayer(u8 *p);
void LostAndFound_InitRandom(void *);
void EventWeekSlots_InitNew(void *);
void TownState_InitNew(void *);
void Town_ClearBorderTrees(void *);
void HouseRoomMaps_BindBg(void);
void HouseRoomMaps_UpdateAll(void);
void *TownBlockMap_Get(void);
void _ZN12TownBlockMap6bindBgEv(void *);
void _ZN12TownBlockMap13updateAcreIdsEv(void *);
void TownMap_Generate(void *, u32);
void _ZN7TownMap18updateGroundSeasonEv(void *);
void FengShui_UpdateHouse(void);
void HappyRoomDate_Reset(void *);
void _ZN9HouseData9resetDebtEv(void *);
void _ZN15ItemClassOrders12randomizeAllEv(void *);
void TownId_InitWithName(void *, const void *);
void TownId_Destruct(void *);
void Melody_ResetToDefault(void *);
void _ZN19AbleSistersPatterns19initDefaultPatternsEv(void *);
void _ZN14PlayerPatterns17replaceAuthorTownEP12Unk_020942c8S1_(void *, void *, void *);
void _ZN8BbsBoard5resetEv(void *);
void VillagerStates_SetBirthdayVisitor(s32);
void SaveVillagers_UpdateAllRoomInfo(void *);
void SaveVillagers_AssignErrands(void *);
void VillagerStates_ResetErrands(void);
void SaveVillagers_PlaceMissingHouses(void *);
void SaveVillagers_DailyUpdate(void *, s32);
void SaveVillagers_UpdateOutdoor(void *, s32);
void SaveVillagers_InitNewTown(void *);
void TownSessionState_Get(void);
void *TownSessionState_GetResettiFlag();
void _ZN13ContestRecord10resetTodayEv(void *);
void RoostGuestRoll_Init(void *);
void GulliverQuest_Init(void *);
void ReddLastSale_Clear(void *);
void _ZN12TurnipMarket4initEv(void *);
void _ZN16ResettiVisitFlag5clearEv(void *);
void _ZN16BlancaFaceRecord4initEv(void *);
void _ZN15LostChildRecord5clearEv(void *);
void _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(void *);
void _ZN17PlayerSpNpcRecord15resetAcornCountEv(void *);
void TownExchange_InitNop(void *);
void _ZN6TownId7setTownEPS_(void *, void *);
void *PlayerId_GetTownId(void);
void *PlayerData_GetCurrent(void);
void *PlayerData_GetResident(void *, s32);
void _ZN12Unk_02097ff49clearFlagEj(void *, s32);
void _ZN12Unk_02097ff47setFlagEj(void *, s32);
void _ZN12Unk_02097ff414setSkyShotHitsEj(void *, s32);
void *_ZN12Unk_02097ff416getDayUpdateDateEv(void *);
void _ZN12Unk_02097ff415resetForNewTownEv(void *);
void *_ZN10PlayerData14getSpNpcRecordEv(void *);
void *_ZN10PlayerData18getLostChildRecordEv(void *);
void *_ZN10PlayerData11getPatternsEv(void *);
void PlayerData_SetStungFace(void *, s32);
void *_ZN10PlayerData11getPlayerIdEv(void *);
void RoomEntry_Reset();
s32 ClockOffset_Clear(void *p);
void Clock_GetDate(void *p);
void Clock_Init(void);
void _ZN11SaveRecord412setDateTodayEPv(void *, s32);
void _ZN11SaveRecord410clearStateEv(void *);
void _ZN11SaveRecord413setStateValidEv(void *);
void _ZN8ReddShop5resetEv(void *);
void AbleShop_InitNew(void *);
void NookShop_InitNew(void *);
void LooseSnowballs_Get();
void _ZN14LooseSnowballs5resetEv();
void TownStyleRecord_InitNew(void *);
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
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 0);
    _ZN11SaveRecord410clearStateEv(&footer);
    Weather_RerollRainSlantAlt();
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
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
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
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
    _ZN12Unk_02097ff47setFlagEj(a, 1);
    _ZN12Unk_02097ff47setFlagEj(a, 0x23);
    _ZN12Unk_02097ff49clearFlagEj(a, 9);
    SaveVillagers_DailyUpdate(&villagers, 0);
    SaveVillagers_PlaceMissingHouses(&villagers);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&villagers);
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    RoomEntry_Reset();
    _ZN12Unk_02097ff414setSkyShotHitsEj(a, 0);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
    SaveVillagers_UpdateAllRoomInfo(&villagers);
}

void SaveData::setupMode06() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&townMap, gCurrentHeap);
    SaveData_RefreshTownBlockMap(this);
    _ZN11SaveRecord412setDateTodayEPv(&unk_15fc5, 0);
    SaveData_InitCurrentPlayer((u8 *)this);
    SaveData_InitNew((u8 *)this);
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    RoomEntry_Reset();
    _ZN12Unk_02097ff47setFlagEj(a, 1);
    _ZN12Unk_02097ff47setFlagEj(a, 0x23);
    _ZN12Unk_02097ff49clearFlagEj(a, 9);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
    SaveVillagers_UpdateAllRoomInfo(&villagers);
}

void SaveData_InitCurrentPlayer(u8 *p) {
    void *r4 = PlayerData_GetCurrent();
    TownId l;
    _ZN10PlayerData11getPlayerIdEv(r4);
    l = *(TownId *)PlayerId_GetTownId();
    Clock_GetDate(_ZN12Unk_02097ff416getDayUpdateDateEv(r4));
    _ZN6TownId7setTownEPS_(_ZN10PlayerData11getPlayerIdEv(r4), p + 2);
    void *r5 = _ZN10PlayerData11getPatternsEv(r4);
    _ZN14PlayerPatterns17replaceAuthorTownEP12Unk_020942c8S1_(r5, _ZN10PlayerData11getPlayerIdEv(r4), &l);
    _ZN12Unk_02097ff49clearFlagEj(r4, 0x24);
    _ZN12Unk_02097ff49clearFlagEj(r4, 0x25);
    _ZN12Unk_02097ff49clearFlagEj(r4, 0x26);
    _ZN17PlayerSpNpcRecord15resetAcornCountEv(_ZN10PlayerData14getSpNpcRecordEv(r4));
    _ZN12Unk_02097ff49clearFlagEj(r4, 0xf);
    _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(_ZN10PlayerData14getSpNpcRecordEv(r4));
    _ZN15LostChildRecord5clearEv(_ZN10PlayerData18getLostChildRecordEv(r4));
    _ZN12Unk_02097ff415resetForNewTownEv(r4);
    TownId_Destruct(&l);
}

void SaveData_InitNew(u8 *p) {
    p[0] = 0x8a;
    _ZN11SaveRecord413setStateValidEv(p + 0x15fdc);
    SaveVillagers_InitNewTown(p + 0x8a3c);
    SaveVillagers_PlaceMissingHouses(p + 0x8a3c);
    VillagerStates_ResetErrands();
    if (PlayerData_GetCurrent()) {
        SaveVillagers_AssignErrands(p + 0x8a3c);
    }
    TownStyleRecord_InitNew(p + 0x1592c);
    _ZN9HouseData9resetDebtEv(p + 0xe558);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    _ZN19AbleSistersPatterns19initDefaultPatternsEv(p + 0xfafc);
    FengShui_UpdateHouse();
    _ZN15ItemClassOrders12randomizeAllEv(p + 0x15fbc);
    _ZN8BbsBoard5resetEv(p + 0x11488);
    NookShop_InitNew(p + 0x15db4);
    AbleShop_InitNew(p + 0x15f84);
    _ZN8ReddShop5resetEv(p + 0x15f70);
    TownState_InitNew(p + 0x15e54);
    Weather_InitNew(p + 0x15f66);
    EventWeekSlots_InitNew(p + 0x15e18);
    _ZN16BlancaFaceRecord4initEv(p + 0x15700);
    _ZN12TurnipMarket4initEv(p + 0x15f4c);
    ReddLastSale_Clear(p + 0x15f34);
    GulliverQuest_Init(p + 0xe556);
    _ZN13ContestRecord10resetTodayEv(p + 0x15efc);
    HappyRoomDate_Reset(p + 0x15fb0);
    Melody_ResetToDefault(p + 0x15fa8);
    LostAndFound_InitRandom(p + 0x15ec0);
    RoostGuestRoll_Init(p + 0xe557);
    TownExchange_InitNop(p + 0x10c3c);
}

void SaveData_RefreshTownBlockMap(void *) {
    if (TownBlockMap_Get()) {
        _ZN12TownBlockMap13updateAcreIdsEv(TownBlockMap_Get());
        _ZN12TownBlockMap6bindBgEv(TownBlockMap_Get());
        Town_ClearBorderTrees(TownBlockMap_Get());
    }
}


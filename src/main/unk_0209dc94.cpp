#include "types.h"
#include "save/SaveData.h"


extern "C" {
void SaveData_SyncClockOffset(void *);
void SaveData_RefreshTownBlockMap(void *);
void SaveData_InitNew(u8 *p);
void SaveData_InitCurrentPlayer(u8 *p);
void *PlayerData_GetCurrent();
void _ZN12Unk_02097ff47setFlagEj(void *, s32);
void _ZN12Unk_02097ff49clearFlagEj(void *, s32);
void RoomEntry_Reset();
void Clock_Init();
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_BindBg();
void LooseSnowballs_Get();
void _ZN14LooseSnowballs5resetEv();
void VillagerStates_SetBirthdayVisitor(s32);
void TownSessionState_Get();
void *TownSessionState_GetResettiFlag();
void _ZN16ResettiVisitFlag5clearEv(void *);
void _ZN16ResettiVisitFlag3setEj(void *, u32);
void SaveVillagers_UpdateAllRoomInfo(void *);
void SaveVillagers_UpdateOutdoor(void *, s32);
void SaveVillagers_DailyUpdate(void *, s32);
void SaveVillagers_PlaceMissingHouses(void *);
void VillagerStates_ResetErrands();
void SaveVillagers_AssignErrands(void *);
void _ZN7TownMap18updateGroundSeasonEv(void *);
void TownMap_Generate(void *, u32);
void _ZN11SaveRecord412setDateTodayEPv(void *, s32);
s32 _ZN11SaveRecord412isStateValidEv(void *);
s32 Scene_GetCurrent();
void _ZN12Unk_02097ff414setSkyShotHitsEj(void *, s32);
void HappyRoom_SendWelcomeLetter();
s32 PlayerOptions_IsStereo();
void Snd_SetOutputMode(void *);
void LostChild_LoadFromTown();
void BottleLetter_WashUpThrownBottle();
void Constellation_ImportExchanged();
void LetterDelivery_DeliverReceivedLetter();
void GameStart_Clear();
void Weather_RerollRainSlantAlt3();
void Sky_RequestBirds();
void _ZN12TurnipMarket12spoilOnResetEv(void *);
void SaveVillagers_PickPlayerBirthdayVisitor(void *, s32);
s32 VillagerStates_GetBirthdayVisitor();
s32 _ZN12Unk_02097ff48testFlagEj(void *, s32);
void _ZN10PlayerData14getSpNpcRecordEv(void *);
void _ZN17PlayerSpNpcRecord13addResetCountEv();
void _ZN12Unk_02097ff425sendForeignVillagerLetterEv(void *);
void *_ZN10PlayerData11getPlayerIdEv(void *);
void _ZN6TownId7setTownEPS_(void *, void *);
void *_ZN10PlayerData11getPatternsEv(void *);
void _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(void *, void *);
void _ZN13PlayerMailbox5clearEv(void *);
void ChestStorage_Clear(void *);
void _ZN10MuseumData22releasePlayerDonationsEj(void *, s32);
void Pattern_RemovePlayerItems(s32);
void ReddPassword_ForgetResident(u32);
void *SaveManager_GetLetterStorage();
void _ZN13LetterStorage5clearEv(void *);
void MI_CpuFill8(void *, s32, u32);
void __cxa_vec_cleanup(void *, u32, u32, void (*)(void *));
void ChestStorage_Destruct(void *);
void _ZN13PlayerMailboxD1Ev(void *);
void TownId_Clear(void *);
void PlayerDataArray_ResetAll(void *);
void AbleShop_Reset(void *);
void ReddShop_Reset(void *);
void _ZN7TownMap5clearEv(void *);
void _ZN8BbsBoard5clearEv(void *);
void _ZN9HouseData5resetEv(void *);
void TownState_Reset(void *);
void Weather_SetDateToday(void *);
void NookShop_Clear(void *);
void _ZN16BlancaFaceRecord5resetEv(void *);
void _ZN12TurnipMarket5clearEv(void *);
void _ZN12ReddLastSale5clearEv(void *);
void GulliverQuest_Clear(void *);
void _ZN13ContestRecord5clearEv(void *);
void _ZN12LetterOutbox5clearEv(void *);
void LostAndFound_Clear(void *);
void RecycleBin_Clear(void *);
void ConstellationStore_Clear(void *);
void _ZN18BottleLetterRecord11clearRecordEv(void *);
void ReceivedLetter_Clear(void *);
void HappyRoomDate_SetToday(void *);
void _ZN11SaveRecord49resetDateEv(void *);
void _ZN14SnowmanRecords8clearAllEv(void *);
void EventWeekSlots_Reset(void *);
void _ZN15LostChildRecord5clearEv(void *);
void _ZN14RoostGuestRoll5clearEv(void *);
void TownExchange_Clear(void *);
void PlayerDataArray_Destruct(void *);
void SaveVillagers_Clear(void *);
void TownId_Destruct(void *);
void RecycleBin_Destruct(void *);
void LostAndFound_Destruct(void *);
void EventWeekSlots_Destruct(void *);
void TownState_Destruct(void *);
void _ZN7TownMapD1Ev(void *);
void HappyRoomDate_Destruct(void *);
void _ZN9HouseDataD1Ev(void *);
void _ZN15ItemClassOrdersD2Ev(void *);
void _ZN10MuseumData8destructEv(void *);
void _ZN19AbleSistersPatternsD1Ev(void *);
void _ZN8BbsBoardD1Ev(void *);
void SaveVillagers_Destruct(void *);
void _ZN13ContestRecord8destructEv(void *);
void RoostGuestRoll_Destruct(void *);
void GulliverQuest_Destruct(void *);
void _ZN12ReddLastSaleD1Ev(void *);
void TurnipMarket_Destruct(void *);
void _ZN16BlancaFaceRecord8destructEv(void *);
void LostChildRecord_Destruct(void *);
void _ZN19ReceivedLetterBlockD1Ev(void *);
void _ZN18TownExchangeRecordD1Ev(void *);
void BottleLetterRecord_Destruct(void *);
void _ZN12LetterOutboxD1Ev(void *);
void SaveData_DestructDateRecord(void *);
void _ZN11SaveRecord48destructEv(void *);
void _ZN8ReddShopD1Ev(void *);
void AbleShop_Destruct(void *);
void _ZN12Unk_020aec00C1Ev(void *);
void _ZN14SnowmanRecordsD1Ev(void *);
void _ZN18ConstellationStoreD1Ev(void *);
void _ZN15TownStyleRecordC2Ev(void *);
void Weather_Destruct(void *);
extern u32 gCurrentHeap;
extern u8 gSaveData[];
extern const u32 sSndOutputModeTable[2];
}

const u32 sSndOutputModeTable[2] = {1, 0};


SaveData::~SaveData() {
    _ZN11SaveRecord48destructEv(&footer);
    LostChildRecord_Destruct(&lostChild);
    SaveData_DestructDateRecord(&unk_15fc5);
    _ZN15ItemClassOrdersD2Ev(&itemClassOrders);
    HappyRoomDate_Destruct(&happyRoomDate);
    _ZN14SnowmanRecordsD1Ev(&snowmen);
    AbleShop_Destruct(&ableShop);
    _ZN8ReddShopD1Ev(&reddShop);
    Weather_Destruct(&weather);
    TurnipMarket_Destruct(&turnipMarket);
    _ZN12ReddLastSaleD1Ev(&reddLastSale);
    _ZN13ContestRecord8destructEv(&contestRecord);
    RecycleBin_Destruct(&recycleBin);
    LostAndFound_Destruct(&lostAndFound);
    TownState_Destruct(&townState);
    EventWeekSlots_Destruct(&eventWeekSlots);
    _ZN12Unk_020aec00C1Ev(&nookShop);
    _ZN10MuseumData8destructEv(&museum);
    _ZN19ReceivedLetterBlockD1Ev(&receivedLetters);
    BottleLetterRecord_Destruct(&bottleLetter);
    _ZN15TownStyleRecordC2Ev(&townStyle);
    _ZN16BlancaFaceRecord8destructEv(&blancaFace);
    __cxa_vec_cleanup(&dressers, 4, 0xb4, ChestStorage_Destruct);
    _ZN18ConstellationStoreD1Ev(&constellations);
    _ZN12LetterOutboxD1Ev(&letterOutbox);
    __cxa_vec_cleanup(&mailboxes, 4, 0x98c, _ZN13PlayerMailboxD1Ev);
    _ZN8BbsBoardD1Ev(&bbsBoard);
    _ZN18TownExchangeRecordD1Ev(&townExchange);
    _ZN19AbleSistersPatternsD1Ev(&ableSistersPatterns);
    _ZN9HouseDataD1Ev(&house);
    RoostGuestRoll_Destruct(&roostGuestRoll);
    GulliverQuest_Destruct(&gulliverQuest);
    _ZN7TownMapD1Ev(&townMap);
    SaveVillagers_Destruct(&villagers);
    PlayerDataArray_Destruct(&players);
    TownId_Destruct(&townId);
}

BOOL SaveData::isValid() {
    if (marker == 0x8a) {
        if (_ZN11SaveRecord412isStateValidEv(&footer) != 0) return TRUE;
    }
    return FALSE;
}

BOOL SaveData::testFlag(u32 n) {
    s32 w = n >> 5;
    u32 b = n & 0x1f;
    BOOL r;
    if (w < 1) {
        r = TRUE;
        if (((r << b) & flags[w]) != 0) goto end;
    }
    r = FALSE;
end:
    return r;
}

void SaveData::setFlag(u32 n) {
    s32 w = n >> 5;
    u32 b = n & 0x1f;
    if (w < 1) {
        u32 m = 1 << b;
        *(volatile u32 *)&flags[w] = m | *(volatile u32 *)&flags[w];
    }
}

void SaveData::clearFlag(u32 n) {
    s32 w = n >> 5;
    u32 b = n & 0x1f;
    if (w < 1) {
        u32 m = ~(1 << b);
        *(volatile u32 *)&flags[w] = m & *(volatile u32 *)&flags[w];
    }
}

void SaveData::clear() {
    MI_CpuFill8(this, 0, 0x15fe0);
}

void SaveData::reset() {
    clear();
    s32 i;
    for (i = 0; i < 4; i++) resetPlayer(i);
    TownId_Clear(&townId);
    PlayerDataArray_ResetAll(&players);
    SaveVillagers_Clear(&villagers);
    AbleShop_Reset(&ableShop);
    ReddShop_Reset(&reddShop);
    _ZN7TownMap5clearEv(&townMap);
    _ZN8BbsBoard5clearEv(&bbsBoard);
    _ZN9HouseData5resetEv(&house);
    TownState_Reset(&townState);
    Weather_SetDateToday(&weather);
    NookShop_Clear(&nookShop);
    _ZN16BlancaFaceRecord5resetEv(&blancaFace);
    _ZN12TurnipMarket5clearEv(&turnipMarket);
    _ZN12ReddLastSale5clearEv(&reddLastSale);
    GulliverQuest_Clear(&gulliverQuest);
    _ZN13ContestRecord5clearEv(&contestRecord);
    _ZN12LetterOutbox5clearEv(&letterOutbox);
    LostAndFound_Clear(&lostAndFound);
    RecycleBin_Clear(&recycleBin);
    ConstellationStore_Clear(&constellations);
    _ZN18BottleLetterRecord11clearRecordEv(&bottleLetter);
    ReceivedLetter_Clear(&receivedLetters);
    HappyRoomDate_SetToday(&happyRoomDate);
    _ZN11SaveRecord49resetDateEv(&unk_15fc5);
    _ZN14SnowmanRecords8clearAllEv(&snowmen);
    EventWeekSlots_Reset(&eventWeekSlots);
    _ZN15LostChildRecord5clearEv(&lostChild);
    _ZN14RoostGuestRoll5clearEv(&roostGuestRoll);
    TownExchange_Clear(&townExchange);
}

void SaveData::resetPlayer(s32 i) {
    _ZN13PlayerMailbox5clearEv(&mailboxes[i]);
    ChestStorage_Clear(&dressers[i]);
    _ZN10MuseumData22releasePlayerDonationsEj(&museum, i);
    Pattern_RemovePlayerItems(i);
    ReddPassword_ForgetResident((u8)i);
    u8 *r = (u8 *)SaveManager_GetLetterStorage();
    if (r) _ZN13LetterStorage5clearEv(r + i * 0x477c);
}

void SaveData::setupNewTown() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&townMap, gCurrentHeap);
    SaveData_RefreshTownBlockMap(this);
    _ZN11SaveRecord412setDateTodayEPv(&unk_15fc5, 0);
    _ZN6TownId7setTownEPS_(_ZN10PlayerData11getPlayerIdEv(a), &townId);
    void *t = _ZN10PlayerData11getPatternsEv(a);
    _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(t, _ZN10PlayerData11getPlayerIdEv(a));
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

void SaveData::setupNewResident() {
    void *a = PlayerData_GetCurrent();
    SaveData_RefreshTownBlockMap(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    _ZN6TownId7setTownEPS_(_ZN10PlayerData11getPlayerIdEv(a), &townId);
    void *t = _ZN10PlayerData11getPatternsEv(a);
    _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(t, _ZN10PlayerData11getPlayerIdEv(a));
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

void SaveData::setupContinue() {
    void *a = PlayerData_GetCurrent();
    if (Scene_GetCurrent() != 6) {
        SaveData_RefreshTownBlockMap(this);
        HouseRoomMaps_UpdateAll();
        HouseRoomMaps_BindBg();
        Clock_Init();
        SaveVillagers_DailyUpdate(&villagers, 0);
    }
    SaveVillagers_PlaceMissingHouses(&villagers);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&villagers);
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    RoomEntry_Reset();
    HappyRoom_SendWelcomeLetter();
    Snd_SetOutputMode((void *)sSndOutputModeTable[PlayerOptions_IsStereo()]);
    LostChild_LoadFromTown();
    BottleLetter_WashUpThrownBottle();
    Constellation_ImportExchanged();
    LetterDelivery_DeliverReceivedLetter();
    GameStart_Clear();
    Weather_RerollRainSlantAlt3();
    Sky_RequestBirds();
    _ZN12TurnipMarket12spoilOnResetEv(&turnipMarket);
    SaveVillagers_PickPlayerBirthdayVisitor(&villagers, 0);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    if (Scene_GetCurrent() == 6) {
        if (VillagerStates_GetBirthdayVisitor() == -1) {
            if (_ZN12Unk_02097ff48testFlagEj(a, 0x23) == 0) {
                if (_ZN12Unk_02097ff48testFlagEj(a, 2) != 0) {
                    _ZN10PlayerData14getSpNpcRecordEv(a);
                    _ZN17PlayerSpNpcRecord13addResetCountEv();
                    TownSessionState_Get();
                    _ZN16ResettiVisitFlag3setEj(TownSessionState_GetResettiFlag(), 1);
                }
            }
        }
    }
    _ZN12Unk_02097ff47setFlagEj(a, 2);
    _ZN12Unk_02097ff425sendForeignVillagerLetterEv(a);
    if (Scene_GetCurrent() != 6) {
        SaveVillagers_UpdateAllRoomInfo(&villagers);
    }
}


#include "types.h"

struct Unk_0209da44_E98c { u8 b[0x98c]; };
struct Unk_0209da44_Eb4 { u8 b[0xb4]; };

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
void func_020b8eb0();
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
void _ZN12Unk_0208620c13func_0208620cEv(void *);
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
void func_02086230(void *);
void func_02086290(void *);
void _ZN12ReddLastSaleD1Ev(void *);
void func_020868c4(void *);
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

struct SaveData {
    u8 unk_00;
    u8 unk_01;
    u8 f_2[10];
    u8 f_c[0x8a30];
    u8 f_8a3c[0x38f4];
    u8 f_c330[0x2226];
    u8 f_e556[0x1];
    u8 f_e557[0x1];
    u8 f_e558[0x15a4];
    u8 f_fafc[0x1140];
    u8 f_10c3c[0x84c];
    u8 f_11488[0xb84];
    Unk_0209da44_E98c f_1200c[4];
    u8 f_1463c[0x990];
    u8 f_14fcc[0x464];
    Unk_0209da44_Eb4 f_15430[4];
    u8 f_15700[0x22c];
    u8 f_1592c[0x230];
    u8 f_15b5c[0xfc];
    u8 f_15c58[0xf8];
    u8 f_15d50[0x64];
    u8 f_15db4[0x64];
    u8 f_15e18[0x3c];
    u8 f_15e54[0x6c];
    u8 f_15ec0[0x1e];
    u8 f_15ede[0x1e];
    u8 f_15efc[0x38];
    u8 f_15f34[0x18];
    u8 f_15f4c[0x1a];
    u8 f_15f66[0xa];
    u8 f_15f70[0x14];
    u8 f_15f84[0x12];
    u8 f_15f96[0x1a];
    u8 f_15fb0[0x4];
    u8 f_15fb4[0x8];
    u8 f_15fbc[0x9];
    u8 f_15fc5[0x5];
    u8 f_15fca[0xe];
    u32 f_15fd8[1];
    u8 f_15fdc[0x4];

    void setupContinue();
    void setupNewResident();
    void setupNewTown();
    void resetPlayer(s32 i);
    void reset();
    void clear();
    void clearFlag(u32 n);
    void setFlag(u32 n);
    BOOL testFlag(u32 n);
    BOOL isValid();
    ~SaveData();
};

SaveData::~SaveData() {
    _ZN11SaveRecord48destructEv(&f_15fdc);
    LostChildRecord_Destruct(&f_15fca);
    SaveData_DestructDateRecord(&f_15fc5);
    _ZN15ItemClassOrdersD2Ev(&f_15fbc);
    HappyRoomDate_Destruct(&f_15fb0);
    _ZN14SnowmanRecordsD1Ev(&f_15f96);
    AbleShop_Destruct(&f_15f84);
    _ZN8ReddShopD1Ev(&f_15f70);
    Weather_Destruct(&f_15f66);
    func_020868c4(&f_15f4c);
    _ZN12ReddLastSaleD1Ev(&f_15f34);
    _ZN13ContestRecord8destructEv(&f_15efc);
    RecycleBin_Destruct(&f_15ede);
    LostAndFound_Destruct(&f_15ec0);
    TownState_Destruct(&f_15e54);
    EventWeekSlots_Destruct(&f_15e18);
    _ZN12Unk_020aec00C1Ev(&f_15db4);
    _ZN10MuseumData8destructEv(&f_15d50);
    _ZN19ReceivedLetterBlockD1Ev(&f_15c58);
    BottleLetterRecord_Destruct(&f_15b5c);
    _ZN15TownStyleRecordC2Ev(&f_1592c);
    _ZN16BlancaFaceRecord8destructEv(&f_15700);
    __cxa_vec_cleanup(&f_15430, 4, 0xb4, ChestStorage_Destruct);
    _ZN18ConstellationStoreD1Ev(&f_14fcc);
    _ZN12LetterOutboxD1Ev(&f_1463c);
    __cxa_vec_cleanup(&f_1200c, 4, 0x98c, _ZN13PlayerMailboxD1Ev);
    _ZN8BbsBoardD1Ev(&f_11488);
    _ZN18TownExchangeRecordD1Ev(&f_10c3c);
    _ZN19AbleSistersPatternsD1Ev(&f_fafc);
    _ZN9HouseDataD1Ev(&f_e558);
    func_02086230(&f_e557);
    func_02086290(&f_e556);
    _ZN7TownMapD1Ev(&f_c330);
    SaveVillagers_Destruct(&f_8a3c);
    PlayerDataArray_Destruct(&f_c);
    TownId_Destruct(&f_2);
}

BOOL SaveData::isValid() {
    if (unk_00 == 0x8a) {
        if (_ZN11SaveRecord412isStateValidEv(&f_15fdc) != 0) return TRUE;
    }
    return FALSE;
}

BOOL SaveData::testFlag(u32 n) {
    s32 w = n >> 5;
    u32 b = n & 0x1f;
    BOOL r;
    if (w < 1) {
        r = TRUE;
        if (((r << b) & f_15fd8[w]) != 0) goto end;
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
        *(volatile u32 *)&f_15fd8[w] = m | *(volatile u32 *)&f_15fd8[w];
    }
}

void SaveData::clearFlag(u32 n) {
    s32 w = n >> 5;
    u32 b = n & 0x1f;
    if (w < 1) {
        u32 m = ~(1 << b);
        *(volatile u32 *)&f_15fd8[w] = m & *(volatile u32 *)&f_15fd8[w];
    }
}

void SaveData::clear() {
    MI_CpuFill8(this, 0, 0x15fe0);
}

void SaveData::reset() {
    clear();
    s32 i;
    for (i = 0; i < 4; i++) resetPlayer(i);
    TownId_Clear(&f_2);
    PlayerDataArray_ResetAll(&f_c);
    SaveVillagers_Clear(&f_8a3c);
    AbleShop_Reset(&f_15f84);
    ReddShop_Reset(&f_15f70);
    _ZN7TownMap5clearEv(&f_c330);
    _ZN8BbsBoard5clearEv(&f_11488);
    _ZN9HouseData5resetEv(&f_e558);
    TownState_Reset(&f_15e54);
    Weather_SetDateToday(&f_15f66);
    NookShop_Clear(&f_15db4);
    _ZN16BlancaFaceRecord5resetEv(&f_15700);
    _ZN12TurnipMarket5clearEv(&f_15f4c);
    _ZN12ReddLastSale5clearEv(&f_15f34);
    GulliverQuest_Clear(&f_e556);
    _ZN13ContestRecord5clearEv(&f_15efc);
    _ZN12LetterOutbox5clearEv(&f_1463c);
    LostAndFound_Clear(&f_15ec0);
    RecycleBin_Clear(&f_15ede);
    ConstellationStore_Clear(&f_14fcc);
    _ZN18BottleLetterRecord11clearRecordEv(&f_15b5c);
    ReceivedLetter_Clear(&f_15c58);
    HappyRoomDate_SetToday(&f_15fb0);
    _ZN11SaveRecord49resetDateEv(&f_15fc5);
    _ZN14SnowmanRecords8clearAllEv(&f_15f96);
    EventWeekSlots_Reset(&f_15e18);
    _ZN15LostChildRecord5clearEv(&f_15fca);
    _ZN12Unk_0208620c13func_0208620cEv(&f_e557);
    TownExchange_Clear(&f_10c3c);
}

void SaveData::resetPlayer(s32 i) {
    _ZN13PlayerMailbox5clearEv(&f_1200c[i]);
    ChestStorage_Clear(&f_15430[i]);
    _ZN10MuseumData22releasePlayerDonationsEj(&f_15d50, i);
    Pattern_RemovePlayerItems(i);
    ReddPassword_ForgetResident((u8)i);
    u8 *r = (u8 *)SaveManager_GetLetterStorage();
    if (r) _ZN13LetterStorage5clearEv(r + i * 0x477c);
}

void SaveData::setupNewTown() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&f_c330, gCurrentHeap);
    SaveData_RefreshTownBlockMap(this);
    _ZN11SaveRecord412setDateTodayEPv(&f_15fc5, 0);
    _ZN6TownId7setTownEPS_(_ZN10PlayerData11getPlayerIdEv(a), &f_2);
    void *t = _ZN10PlayerData11getPatternsEv(a);
    _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(t, _ZN10PlayerData11getPlayerIdEv(a));
    SaveData_InitNew((u8 *)this);
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&f_c330);
    RoomEntry_Reset();
    _ZN12Unk_02097ff47setFlagEj(a, 1);
    _ZN12Unk_02097ff47setFlagEj(a, 0x23);
    _ZN12Unk_02097ff49clearFlagEj(a, 9);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
    SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
}

void SaveData::setupNewResident() {
    void *a = PlayerData_GetCurrent();
    SaveData_RefreshTownBlockMap(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    _ZN6TownId7setTownEPS_(_ZN10PlayerData11getPlayerIdEv(a), &f_2);
    void *t = _ZN10PlayerData11getPatternsEv(a);
    _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(t, _ZN10PlayerData11getPlayerIdEv(a));
    _ZN12Unk_02097ff47setFlagEj(a, 1);
    _ZN12Unk_02097ff47setFlagEj(a, 0x23);
    _ZN12Unk_02097ff49clearFlagEj(a, 9);
    SaveVillagers_DailyUpdate(&f_8a3c, 0);
    SaveVillagers_PlaceMissingHouses(&f_8a3c);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&f_8a3c);
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&f_c330);
    RoomEntry_Reset();
    _ZN12Unk_02097ff414setSkyShotHitsEj(a, 0);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
    SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
}

void SaveData::setupContinue() {
    void *a = PlayerData_GetCurrent();
    if (Scene_GetCurrent() != 6) {
        SaveData_RefreshTownBlockMap(this);
        HouseRoomMaps_UpdateAll();
        HouseRoomMaps_BindBg();
        Clock_Init();
        SaveVillagers_DailyUpdate(&f_8a3c, 0);
    }
    SaveVillagers_PlaceMissingHouses(&f_8a3c);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&f_8a3c);
    LooseSnowballs_Get();
    _ZN14LooseSnowballs5resetEv();
    _ZN7TownMap18updateGroundSeasonEv(&f_c330);
    RoomEntry_Reset();
    HappyRoom_SendWelcomeLetter();
    Snd_SetOutputMode((void *)sSndOutputModeTable[PlayerOptions_IsStereo()]);
    LostChild_LoadFromTown();
    BottleLetter_WashUpThrownBottle();
    Constellation_ImportExchanged();
    LetterDelivery_DeliverReceivedLetter();
    GameStart_Clear();
    func_020b8eb0();
    Sky_RequestBirds();
    _ZN12TurnipMarket12spoilOnResetEv(&f_15f4c);
    SaveVillagers_PickPlayerBirthdayVisitor(&f_8a3c, 0);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
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
        SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
    }
}


#include "types.h"
#include "save/SaveData.h"
#include "game/ReddShop.h"
#include "game/Unk_020aec00.h"
#include "item/BottleLetterRecord.h"
#include "item/LetterOutbox.h"
#include "item/LetterStorage.h"
#include "item/PlayerMailbox.h"
#include "item/ReceivedLetterBlock.h"
#include "player/PlayerData.h"
#include "player/PlayerSpNpcRecord.h"
#include "room/HouseData.h"
#include "save/BbsBoard.h"
#include "save/BlancaFaceRecord.h"
#include "save/ContestRecord.h"
#include "save/LostChildRecord.h"
#include "save/MuseumData.h"
#include "save/Pattern.h"
#include "save/SaveRecord4.h"
#include "save/TownExchangeRecord.h"
#include "save/TownId.h"
#define PROTO_LOCAL_BottleLetterRecord_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_ChestStorage_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_ConstellationStore_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_EventWeekSlots_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_EventWeekSlots_Reset  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_GulliverQuest_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_LostAndFound_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_LostAndFound_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_RecycleBin_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_RecycleBin_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_RoostGuestRoll_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_SaveData_DestructDateRecord  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownId_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownId_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownState_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TurnipMarket_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Weather_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gCurrentHeap  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_02039c08.h"
#include "proto/main/unk_0203c92c.h"
#include "proto/main/unk_02070560.h"
#include "proto/main/unk_020850e0.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_0208eeac.h"
#include "proto/main/unk_0208f0b0.h"
#include "proto/main/unk_02095cdc.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_0209c4a8.h"
#include "proto/main/unk_0209d81c.h"
#include "proto/main/unk_0209dc94.h"
#include "proto/main/unk_0209eb94.h"
#include "proto/main/unk_020af3f4.h"
#include "proto/main/unk_020afeb4.h"
#include "proto/main/unk_020c00c0.h"


extern "C" {
void SaveData_SyncClockOffset(void *);
void Clock_Init();
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_BindBg();
void _ZN14LooseSnowballs5resetEv(void *);
void VillagerStates_SetBirthdayVisitor(s32);
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
s32 Scene_GetCurrent();
void HappyRoom_SendWelcomeLetter();
void Weather_RerollRainSlantAlt3();
void Sky_RequestBirds();
void _ZN12TurnipMarket12spoilOnResetEv(void *);
void SaveVillagers_PickPlayerBirthdayVisitor(void *, s32);
s32 VillagerStates_GetBirthdayVisitor();
void ChestStorage_Clear(void *);
void ReddPassword_ForgetResident(u32);
void MI_CpuFill8(void *, s32, u32);
void __cxa_vec_cleanup(void *, u32, u32, void (*)(void *));
void _ZN13PlayerMailboxD1Ev(void *);
void TownId_Clear(void *);
void AbleShop_Reset(void *);
void ReddShop_Reset(void *);
void _ZN7TownMap5clearEv(void *);
void TownState_Reset(void *);
void NookShop_Clear(void *);
void _ZN12TurnipMarket5clearEv(void *);
void _ZN12ReddLastSale5clearEv(void *);
void LostAndFound_Clear(void *);
void RecycleBin_Clear(void *);
void ConstellationStore_Clear(void *);
void HappyRoomDate_SetToday(void *);
void _ZN14SnowmanRecords8clearAllEv(void *);
void EventWeekSlots_Reset(void *);
void _ZN14RoostGuestRoll5clearEv(void *);
void SaveVillagers_Clear(void *);
void TownId_Destruct(void *);
void RecycleBin_Destruct(void *);
void LostAndFound_Destruct(void *);
void EventWeekSlots_Destruct(void *);
void TownState_Destruct(void *);
void _ZN7TownMapD1Ev(void *);
void HappyRoomDate_Destruct(void *);
void _ZN15ItemClassOrdersD2Ev(void *);
void SaveVillagers_Destruct(void *);
void RoostGuestRoll_Destruct(void *);
void GulliverQuest_Destruct(void *);
void _ZN12ReddLastSaleD1Ev(void *);
void TurnipMarket_Destruct(void *);
void BottleLetterRecord_Destruct(void *);
void SaveData_DestructDateRecord(void *);
void AbleShop_Destruct(void *);
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
    ((SaveRecord4 *)(&footer))->destruct();
    LostChildRecord_Destruct(&lostChild);
    SaveData_DestructDateRecord(&unk_15fc5);
    _ZN15ItemClassOrdersD2Ev(&itemClassOrders);
    HappyRoomDate_Destruct(&happyRoomDate);
    _ZN14SnowmanRecordsD1Ev(&snowmen);
    AbleShop_Destruct(&ableShop);
    ((ReddShop *)(&reddShop))->~ReddShop();
    Weather_Destruct(&weather);
    TurnipMarket_Destruct(&turnipMarket);
    _ZN12ReddLastSaleD1Ev(&reddLastSale);
    ((ContestRecord *)(&contestRecord))->destruct();
    RecycleBin_Destruct(&recycleBin);
    LostAndFound_Destruct(&lostAndFound);
    TownState_Destruct(&townState);
    EventWeekSlots_Destruct(&eventWeekSlots);
    new (&nookShop) Unk_020aec00();
    ((MuseumData *)(&museum))->destruct();
    ((ReceivedLetterBlock *)(&receivedLetters))->~ReceivedLetterBlock();
    BottleLetterRecord_Destruct(&bottleLetter);
    _ZN15TownStyleRecordC2Ev(&townStyle);
    ((BlancaFaceRecord *)(&blancaFace))->destruct();
    __cxa_vec_cleanup(&dressers, 4, 0xb4, ChestStorage_Destruct);
    _ZN18ConstellationStoreD1Ev(&constellations);
    ((LetterOutbox *)(&letterOutbox))->~LetterOutbox();
    __cxa_vec_cleanup(&mailboxes, 4, 0x98c, _ZN13PlayerMailboxD1Ev);
    ((BbsBoard *)(&bbsBoard))->~BbsBoard();
    ((TownExchangeRecord *)(&townExchange))->~TownExchangeRecord();
    ((AbleSistersPatterns *)(&ableSistersPatterns))->~AbleSistersPatterns();
    ((HouseData *)(&house))->~HouseData();
    RoostGuestRoll_Destruct(&roostGuestRoll);
    GulliverQuest_Destruct(&gulliverQuest);
    _ZN7TownMapD1Ev(&townMap);
    SaveVillagers_Destruct(&villagers);
    PlayerDataArray_Destruct(&players);
    TownId_Destruct(&townId);
}

BOOL SaveData::isValid() {
    if (marker == 0x8a) {
        if (((SaveRecord4 *)(&footer))->isStateValid() != 0) return TRUE;
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
    ((BbsBoard *)(&bbsBoard))->clear();
    ((HouseData *)(&house))->reset();
    TownState_Reset(&townState);
    Weather_SetDateToday(&weather);
    NookShop_Clear(&nookShop);
    ((BlancaFaceRecord *)(&blancaFace))->reset();
    _ZN12TurnipMarket5clearEv(&turnipMarket);
    _ZN12ReddLastSale5clearEv(&reddLastSale);
    GulliverQuest_Clear(&gulliverQuest);
    ((ContestRecord *)(&contestRecord))->clear();
    ((LetterOutbox *)(&letterOutbox))->clear();
    LostAndFound_Clear(&lostAndFound);
    RecycleBin_Clear(&recycleBin);
    ConstellationStore_Clear(&constellations);
    ((BottleLetterRecord *)(&bottleLetter))->clearRecord();
    ReceivedLetter_Clear(&receivedLetters);
    HappyRoomDate_SetToday(&happyRoomDate);
    ((SaveRecord4 *)(&unk_15fc5))->resetDate();
    _ZN14SnowmanRecords8clearAllEv(&snowmen);
    EventWeekSlots_Reset(&eventWeekSlots);
    ((LostChildRecord *)(&lostChild))->clear();
    _ZN14RoostGuestRoll5clearEv(&roostGuestRoll);
    TownExchange_Clear(&townExchange);
}

void SaveData::resetPlayer(s32 i) {
    ((PlayerMailbox *)(&mailboxes[i]))->clear();
    ChestStorage_Clear(&dressers[i]);
    ((MuseumData *)(&museum))->releasePlayerDonations(i);
    Pattern_RemovePlayerItems(i);
    ReddPassword_ForgetResident((u8)i);
    u8 *r = (u8 *)SaveManager_GetLetterStorage();
    if (r) ((LetterStorage *)(r + i * 0x477c))->clear();
}

void SaveData::setupNewTown() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&townMap, gCurrentHeap);
    SaveData_RefreshTownBlockMap(this);
    ((SaveRecord4 *)(&unk_15fc5))->setDateToday((void *)(0));
    ((TownId *)(((PlayerData *)(a))->getPlayerId()))->setTown((TownId *)(&townId));
    void *t = ((PlayerData *)(a))->getPatterns();
    ((PlayerPatterns *)(t))->initDefaultPatterns((Unk_020942c8 *)(((PlayerData *)(a))->getPlayerId()));
    SaveData_InitNew((u8 *)this);
    _ZN14LooseSnowballs5resetEv(LooseSnowballs_Get());
    _ZN7TownMap18updateGroundSeasonEv(&townMap);
    RoomEntry_Reset();
    ((PlayerData *)(a))->setFlag(1);
    ((PlayerData *)(a))->setFlag(0x23);
    ((PlayerData *)(a))->clearFlag(9);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&villagers, 1);
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag(TownSessionState_Get()));
    SaveVillagers_UpdateAllRoomInfo(&villagers);
}

void SaveData::setupNewResident() {
    void *a = PlayerData_GetCurrent();
    SaveData_RefreshTownBlockMap(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    ((TownId *)(((PlayerData *)(a))->getPlayerId()))->setTown((TownId *)(&townId));
    void *t = ((PlayerData *)(a))->getPatterns();
    ((PlayerPatterns *)(t))->initDefaultPatterns((Unk_020942c8 *)(((PlayerData *)(a))->getPlayerId()));
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
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag(TownSessionState_Get()));
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
    _ZN14LooseSnowballs5resetEv(LooseSnowballs_Get());
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
            if (((PlayerData *)(a))->testFlag(0x23) == 0) {
                if (((PlayerData *)(a))->testFlag(2) != 0) {
                    ((PlayerSpNpcRecord *)(((PlayerData *)(a))->getSpNpcRecord()))->addResetCount();
                    _ZN16ResettiVisitFlag3setEj(TownSessionState_GetResettiFlag(TownSessionState_Get()), 1);
                }
            }
        }
    }
    ((PlayerData *)(a))->setFlag(2);
    ((PlayerData *)(a))->sendForeignVillagerLetter();
    if (Scene_GetCurrent() != 6) {
        SaveVillagers_UpdateAllRoomInfo(&villagers);
    }
}


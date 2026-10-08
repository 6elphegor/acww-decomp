#include "uptr.h"
#include "types.h"
#include "save/SaveData.h"
#include "save/VillagerData.h"
#include "player/PlayerData.h"
#include "item/BottleLetterRecord.h"
#include "game/NookShop.h"
#include "game/ReddShop.h"
#include "item/LetterOutbox.h"
#include "item/ReceivedLetterBlock.h"
#include "room/HouseData.h"
#include "save/BbsBoard.h"
#include "save/BlancaFaceRecord.h"
#include "save/ContestRecord.h"
#include "save/MuseumData.h"
#include "save/Pattern.h"
#include "save/SaveRecord4.h"
#include "save/TownExchangeRecord.h"
#include "town/TownMap.h"
#include "town/TownStyleRecord.h"
#include "save/SnowmanRecords.h"
#include "game/ConstellationStore.h"
#include "game/ReddLastSale.h"
#include "item/ItemClassOrders.h"
#include "item/PlayerMailbox.h"
#include "sys/ClockOffset.h"
#include "proto/main/unk_02039b6c.h"
#include "proto/main/unk_02039c08.h"
#include "proto/main/unk_0204c318.h"
#include "proto/main/unk_020407fc.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02096c10.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_0209d70c.h"
#include "proto/main/unk_0209e394.h"
#include "proto/main/unk_020c00c0.h"

// (not in the shared headers yet: their units' file-local types)
extern "C" {
void ClockOffset_Clear(ClockOffset *t);
s32 ClockOffset_CalcMinutes(void *unused, u64 *b);
s32 ClockOffset_CalcSeconds(void *unused, u8 *b);
void Clock_Init();
void MI_CpuCopy8(const void *src, void *dst, u32 size);
void HappyRoomDate_Construct();
u8 *SaveVillagers_Construct(u8 *self);
void *AbleShop_Construct(void *p);
}

static_assert(sizeof(((SaveData *)0)->players) == 4 * sizeof(PlayerData), "SaveData::players: PlayerData[4]");
static_assert(sizeof(((SaveData *)0)->villagers) == sizeof(SaveVillagers), "SaveData::villagers: SaveVillagers");
static_assert(sizeof(((SaveData *)0)->mailboxes[0]) == sizeof(PlayerMailbox), "SaveData::mailboxes: PlayerMailbox");
static_assert(sizeof(((SaveData *)0)->letterOutbox) == sizeof(LetterOutbox), "SaveData::letterOutbox");
static_assert(sizeof(((SaveData *)0)->bottleLetter) == sizeof(BottleLetterRecord), "SaveData::bottleLetter");
static_assert(sizeof(TownMap) <= sizeof(((SaveData *)0)->townMap), "TownMap");
static_assert(sizeof(ConstellationStore) <= sizeof(((SaveData *)0)->constellations), "ConstellationStore");
static_assert(sizeof(TownStyleRecord) <= sizeof(((SaveData *)0)->townStyle), "TownStyleRecord");
static_assert(sizeof(ReddLastSale) <= sizeof(((SaveData *)0)->reddLastSale), "ReddLastSale");
static_assert(sizeof(SnowmanRecords) <= sizeof(((SaveData *)0)->snowmen), "SnowmanRecords");
static_assert(sizeof(ItemClassOrders) <= sizeof(((SaveData *)0)->itemClassOrders), "ItemClassOrders");
static_assert(sizeof(ClockOffset) <= sizeof(((SaveData *)0)->clockOffset), "ClockOffset");

// The members are still byte blocks (include/save/SaveData.h): each record is constructed in its block. Most of
// the constructors are empty (some are plain functions that take no object).
inline SaveData::SaveData() {
    TownId_Construct();
    PlayerDataArray_Construct(players);
    SaveVillagers_Construct(villagers);
    new (townMap) TownMap();
    GulliverQuest_Construct();
    RoostGuestRoll_Construct();
    new (house) HouseData();
    new (ableSistersPatterns) AbleSistersPatterns();
    new (townExchange) TownExchangeRecord();
    new (bbsBoard) BbsBoard();
    for (s32 i = 0; i < 4; i++) {
        new (mailboxes[i]) PlayerMailbox();
    }
    new (letterOutbox) LetterOutbox();
    new (constellations) ConstellationStore();
    for (s32 i = 0; i < 4; i++) {
        ChestStorage_Construct();  // (dressers[i])
    }
    ((BlancaFaceRecord *)blancaFace)->construct();
    new (townStyle) TownStyleRecord();
    BottleLetterRecord_Construct((Letter *)bottleLetter);
    new (receivedLetters) ReceivedLetterBlock();
    ((MuseumData *)museum)->construct();
    new (nookShop) NookShop();
    EventWeekSlots_Construct(eventWeekSlots);
    TownState_Construct();
    LostAndFound_Construct();
    RecycleBin_Construct();
    ((ContestRecord *)contestRecord)->construct();
    new (reddLastSale) ReddLastSale();
    TurnipMarket_Construct();
    Weather_Construct();
    new (reddShop) ReddShop();
    AbleShop_Construct(ableShop);
    new (snowmen) SnowmanRecords();
    HappyRoomDate_Construct();
    new (itemClassOrders) ItemClassOrders();
    SaveData_ConstructDateRecord();
    LostChildRecord_Construct(lostChild);
    footer.construct();
}

SaveData gSaveData;

typedef void (SaveData::*Unk_0209d70c_Fn)();

// Data order: this unit is placed object by object (see object_order.txt).

extern "C" void SaveData_SyncClockOffset(SaveData *p) {
    ClockOffset *offset = (ClockOffset *)p->clockOffset;
    u64 a;
    u64 b;
    u64 c;
    ClockOffset_Clear(offset);
    a = 0;
    MenuCtrl_GetDateTime(&a);
    MI_CpuCopy8(&a, &b, 8);
    s32 minutes = ClockOffset_CalcMinutes(offset, &b);
    MI_CpuCopy8(&a, &c, 8);
    u16 seconds = ClockOffset_CalcSeconds(offset, (u8 *)&c);
    offset->minutes = minutes;
    offset->seconds = seconds;
    Clock_Init();
}

extern "C" void SaveData_Setup(SaveData *p, u32 idx) {
    static Unk_0209d70c_Fn tbl[7] = {&SaveData::setupNewTown, &SaveData::setupNewResident,
                                     &SaveData::setupContinue, &SaveData::setupNoSave,
                                     &SaveData::setupLoaded, &SaveData::setupMode05,
                                     &SaveData::setupMode06};
    (p->*tbl[idx])();
}


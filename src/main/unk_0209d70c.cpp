#include "uptr.h"
#include "types.h"
#include "save/SaveData.h"
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
#define PROTO_LOCAL_BottleLetterRecord_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_GulliverQuest_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_LostAndFound_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_RecycleBin_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_RoostGuestRoll_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_SaveData_ConstructDateRecord  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownId_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownState_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TurnipMarket_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Weather_Construct  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_02039c08.h"
#include "proto/main/unk_020407fc.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_0209d70c.h"

extern "C" {
s32 ClockOffset_Clear(void *p);
u32 ClockOffset_CalcMinutes(void *p, void *q);
u16 ClockOffset_CalcSeconds(void *p, void *q);
void Clock_Init(void);
void MI_CpuCopy8(void *src, void *dst, u32 size);
}

extern "C" void _ZN7TownMapC1Ev(void *);
extern "C" void _ZN15ItemClassOrdersC2Ev(void *);
extern "C" void _ZN12ReddLastSaleC1Ev(void *);
extern "C" void _ZN13PlayerMailboxC1Ev(void *);
extern "C" void _ZN13PlayerMailboxD1Ev(void *);
extern "C" void _ZN14SnowmanRecordsC1Ev(void *);
extern "C" void _ZN18ConstellationStoreC2Ev(void *);
extern "C" void _ZN15TownStyleRecordD2Ev(void *);
extern "C" void RecycleBin_Construct(void *);
extern "C" void LostAndFound_Construct(void *);
extern "C" void TownState_Construct(void *);
extern "C" void HappyRoomDate_Construct(void *);
extern "C" void TownId_Construct(void *);
extern "C" void SaveVillagers_Construct(void *);
extern "C" void RoostGuestRoll_Construct(void *);
extern "C" void GulliverQuest_Construct(void *);
extern "C" void TurnipMarket_Construct(void *);
extern "C" void BottleLetterRecord_Construct(void *);
extern "C" void SaveData_ConstructDateRecord(void *);
extern "C" void AbleShop_Construct(void *);
extern "C" void Weather_Construct(void *);
extern "C" void *__cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);

class SaveData;
extern SaveData gSaveData;


inline SaveData::SaveData() {
    u8 *p = (u8 *)this;
    TownId_Construct((void *)0x021d7352);
    PlayerDataArray_Construct((void *)0x021d735c);
    SaveVillagers_Construct(HOST_AT_A(p, SaveData, 0x8a3c, villagers[0], 0));
    _ZN7TownMapC1Ev(HOST_AT_A(p, SaveData, 0xc330, townMap[0], 0));
    GulliverQuest_Construct(HOST_AT_A(p, SaveData, 0xe556, gulliverQuest[0], 0));
    RoostGuestRoll_Construct(HOST_AT_A(p, SaveData, 0xe557, roostGuestRoll[0], 0));
    new (HOST_AT_A(p, SaveData, 0xe558, house[0], 0)) HouseData();
    new (HOST_AT_A(p, SaveData, 0xfafc, ableSistersPatterns[0], 0)) AbleSistersPatterns();
    new (HOST_AT_A(p, SaveData, 0x10c3c, townExchange[0], 0)) TownExchangeRecord();
    new (HOST_AT_A(p, SaveData, 0x11488, bbsBoard[0], 0)) BbsBoard();
    __cxa_vec_ctor(HOST_AT_A(p, SaveData, 0x1200c, mailboxes[0], 0), 4, 0x98c, (void *)_ZN13PlayerMailboxC1Ev, (void *)_ZN13PlayerMailboxD1Ev);
    new (HOST_AT_A(p, SaveData, 0x1463c, letterOutbox[0], 0)) LetterOutbox();
    _ZN18ConstellationStoreC2Ev(HOST_AT_A(p, SaveData, 0x14fcc, constellations[0], 0));
    __cxa_vec_ctor(HOST_AT_A(p, SaveData, 0x15430, dressers[0], 0), 4, 0xb4, (void *)ChestStorage_Construct, (void *)ChestStorage_Destruct);
    ((BlancaFaceRecord *)(HOST_AT_A(p, SaveData, 0x15700, blancaFace[0], 0)))->construct();
    _ZN15TownStyleRecordD2Ev(HOST_AT_A(p, SaveData, 0x1592c, townStyle[0], 0));
    BottleLetterRecord_Construct(HOST_AT_A(p, SaveData, 0x15b5c, bottleLetter[0], 0));
    new (HOST_AT_A(p, SaveData, 0x15c58, receivedLetters[0], 0)) ReceivedLetterBlock();
    ((MuseumData *)(HOST_AT_A(p, SaveData, 0x15d50, museum[0], 0)))->construct();
    new (HOST_AT_A(p, SaveData, 0x15db4, nookShop[0], 0)) NookShop();
    EventWeekSlots_Construct(HOST_AT_A(p, SaveData, 0x15e18, eventWeekSlots[0], 0));
    TownState_Construct(HOST_AT_A(p, SaveData, 0x15e54, townState[0], 0));
    LostAndFound_Construct(HOST_AT_A(p, SaveData, 0x15ec0, lostAndFound[0], 0));
    RecycleBin_Construct(HOST_AT_A(p, SaveData, 0x15ede, recycleBin[0], 0));
    ((ContestRecord *)(HOST_AT_A(p, SaveData, 0x15efc, contestRecord[0], 0)))->construct();
    _ZN12ReddLastSaleC1Ev(HOST_AT_A(p, SaveData, 0x15f34, reddLastSale[0], 0));
    TurnipMarket_Construct(HOST_AT_A(p, SaveData, 0x15f4c, turnipMarket[0], 0));
    Weather_Construct(HOST_AT_A(p, SaveData, 0x15f66, weather[0], 0));
    new (HOST_AT_A(p, SaveData, 0x15f70, reddShop[0], 0)) ReddShop();
    AbleShop_Construct(HOST_AT_A(p, SaveData, 0x15f84, ableShop[0], 0));
    _ZN14SnowmanRecordsC1Ev(HOST_AT_A(p, SaveData, 0x15f96, snowmen[0], 0));
    HappyRoomDate_Construct(HOST_AT_A(p, SaveData, 0x15fb0, happyRoomDate[0], 0));
    _ZN15ItemClassOrdersC2Ev(HOST_AT_A(p, SaveData, 0x15fbc, itemClassOrders[0], 0));
    SaveData_ConstructDateRecord(HOST_AT_A(p, SaveData, 0x15fc5, unk_15fc5[0], 0));
    LostChildRecord_Construct(HOST_AT_A(p, SaveData, 0x15fca, lostChild[0], 0));
    ((SaveRecord4 *)(HOST_AT_A(p, SaveData, 0x15fdc, footer[0], 0)))->construct();
}

SaveData gSaveData;

typedef void (SaveData::*Unk_0209d70c_Fn)();

// Data order: this unit is placed object by object (see object_order.txt).

extern "C" void SaveData_SyncClockOffset(u8 *p) {
    u32 a[2];
    u32 b[2];
    u32 c[2];
    ClockOffset_Clear(p + 0x15fb4);
    a[0] = 0;
    a[1] = 0;
    MenuCtrl_GetDateTime(a);
    MI_CpuCopy8(a, b, 8);
    u32 r4 = ClockOffset_CalcMinutes(p + 0x15fb4, b);
    MI_CpuCopy8(a, c, 8);
    u16 r0 = ClockOffset_CalcSeconds(p + 0x15fb4, c);
    *(u32 *)(p + 0x15fb4) = r4;
    *(u16 *)(p + 0x15fb8) = r0;
    Clock_Init();
}

extern "C" void SaveData_Setup(SaveData *p, u32 idx) {
    static Unk_0209d70c_Fn tbl[7] = {&SaveData::setupNewTown, &SaveData::setupNewResident,
                                     &SaveData::setupContinue, &SaveData::setupNoSave,
                                     &SaveData::setupLoaded, &SaveData::setupMode05,
                                     &SaveData::setupMode06};
    (p->*tbl[idx])();
}


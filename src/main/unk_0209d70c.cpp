#include "types.h"
#include "save/SaveData.h"

extern "C" {
s32 ClockOffset_Clear(void *p);
u32 ClockOffset_CalcMinutes(void *p, void *q);
u16 ClockOffset_CalcSeconds(void *p, void *q);
void Clock_Init(void);
void MenuCtrl_GetDateTime(void *);
void MI_CpuCopy8(void *src, void *dst, u32 size);
}

extern "C" void _ZN7TownMapC1Ev(void *);
extern "C" void _ZN9HouseDataC1Ev(void *);
extern "C" void _ZN15ItemClassOrdersC2Ev(void *);
extern "C" void _ZN10MuseumData9constructEv(void *);
extern "C" void _ZN19AbleSistersPatternsC1Ev(void *);
extern "C" void _ZN8BbsBoardC1Ev(void *);
extern "C" void _ZN13ContestRecord9constructEv(void *);
extern "C" void _ZN12ReddLastSaleC1Ev(void *);
extern "C" void _ZN16BlancaFaceRecord9constructEv(void *);
extern "C" void _ZN19ReceivedLetterBlockC1Ev(void *);
extern "C" void _ZN18TownExchangeRecordC1Ev(void *);
extern "C" void _ZN12LetterOutboxC1Ev(void *);
extern "C" void _ZN13PlayerMailboxC1Ev(void *);
extern "C" void _ZN13PlayerMailboxD1Ev(void *);
extern "C" void _ZN11SaveRecord49constructEv(void *);
extern "C" void _ZN14SnowmanRecordsC1Ev(void *);
extern "C" void _ZN18ConstellationStoreC2Ev(void *);
extern "C" void _ZN15TownStyleRecordD2Ev(void *);
extern "C" void _ZN8ReddShopC1Ev(void *);
extern "C" void _ZN8NookShopC1Ev(void *);
extern "C" void RecycleBin_Construct(void *);
extern "C" void LostAndFound_Construct(void *);
extern "C" void ChestStorage_Destruct(void *);
extern "C" void ChestStorage_Construct(void *);
extern "C" void EventWeekSlots_Construct(void *);
extern "C" void TownState_Construct(void *);
extern "C" void HappyRoomDate_Construct(void *);
extern "C" void TownId_Construct(void *);
extern "C" void SaveVillagers_Construct(void *);
extern "C" void RoostGuestRoll_Construct(void *);
extern "C" void GulliverQuest_Construct(void *);
extern "C" void TurnipMarket_Construct(void *);
extern "C" void LostChildRecord_Construct(void *);
extern "C" void BottleLetterRecord_Construct(void *);
extern "C" void PlayerDataArray_Construct(void *);
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
    SaveVillagers_Construct(p + 0x8a3c);
    _ZN7TownMapC1Ev(p + 0xc330);
    GulliverQuest_Construct(p + 0xe556);
    RoostGuestRoll_Construct(p + 0xe557);
    _ZN9HouseDataC1Ev(p + 0xe558);
    _ZN19AbleSistersPatternsC1Ev(p + 0xfafc);
    _ZN18TownExchangeRecordC1Ev(p + 0x10c3c);
    _ZN8BbsBoardC1Ev(p + 0x11488);
    __cxa_vec_ctor(p + 0x1200c, 4, 0x98c, (void *)_ZN13PlayerMailboxC1Ev, (void *)_ZN13PlayerMailboxD1Ev);
    _ZN12LetterOutboxC1Ev(p + 0x1463c);
    _ZN18ConstellationStoreC2Ev(p + 0x14fcc);
    __cxa_vec_ctor(p + 0x15430, 4, 0xb4, (void *)ChestStorage_Construct, (void *)ChestStorage_Destruct);
    _ZN16BlancaFaceRecord9constructEv(p + 0x15700);
    _ZN15TownStyleRecordD2Ev(p + 0x1592c);
    BottleLetterRecord_Construct(p + 0x15b5c);
    _ZN19ReceivedLetterBlockC1Ev(p + 0x15c58);
    _ZN10MuseumData9constructEv(p + 0x15d50);
    _ZN8NookShopC1Ev(p + 0x15db4);
    EventWeekSlots_Construct(p + 0x15e18);
    TownState_Construct(p + 0x15e54);
    LostAndFound_Construct(p + 0x15ec0);
    RecycleBin_Construct(p + 0x15ede);
    _ZN13ContestRecord9constructEv(p + 0x15efc);
    _ZN12ReddLastSaleC1Ev(p + 0x15f34);
    TurnipMarket_Construct(p + 0x15f4c);
    Weather_Construct(p + 0x15f66);
    _ZN8ReddShopC1Ev(p + 0x15f70);
    AbleShop_Construct(p + 0x15f84);
    _ZN14SnowmanRecordsC1Ev(p + 0x15f96);
    HappyRoomDate_Construct(p + 0x15fb0);
    _ZN15ItemClassOrdersC2Ev(p + 0x15fbc);
    SaveData_ConstructDateRecord(p + 0x15fc5);
    LostChildRecord_Construct(p + 0x15fca);
    _ZN11SaveRecord49constructEv(p + 0x15fdc);
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


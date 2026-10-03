#include "types.h"

extern "C" {
void SaveData_SyncClockOffset(void *);
void func_0209d81c(void *);
void SaveData_InitNew(u8 *p);
void func_0209d994(u8 *p);
void func_02039cf4(void *);
void func_02040864(void *);
void TownState_InitNew(void *);
void Town_ClearBorderTrees(void *);
void HouseRoomMaps_BindBg(void);
void HouseRoomMaps_UpdateAll(void);
void *TownBlockMap_Get(void);
void _ZN12TownBlockMap6bindBgEv(void *);
void _ZN12TownBlockMap13updateAcreIdsEv(void *);
void TownMap_Generate(void *, u32);
void _ZN7TownMap13func_0204df30Ev(void *);
void func_0205b470(void);
void func_0205b648(void *);
void _ZN9HouseData13func_0206058cEv(void *);
void _ZN12Unk_0206357813func_02063578Ev(void *);
void func_02063904(void *, const void *);
void func_020639b8(void *);
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
void func_0208f200(void *);
void _ZN6TownId13func_02094094EPS_(void *, void *);
void *func_0209409c(void);
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
void func_0209c80c();
s32 ClockOffset_Clear(void *p);
void Clock_GetDate(void *p);
void Clock_Init(void);
void _ZN11SaveRecord412setDateTodayEPv(void *, s32);
void _ZN11SaveRecord410clearStateEv(void *);
void _ZN11SaveRecord413setStateValidEv(void *);
void _ZN8ReddShop5resetEv(void *);
void AbleShop_InitNew(void *);
void NookShop_InitNew(void *);
void func_020af3f4();
void _ZN12Unk_020af51413func_020af514Ev();
void func_020b23a8(void *);
void func_020b8e90();
void func_020b8ea0();
void Weather_InitNew(void *);
extern u32 gCurrentHeap;
extern u8 gSaveData[];
extern u32 data_020d0704[];
}

u8 data_020e2384[8] = {0x13, 0x1b, 0x30, 0x1b, 0x0e, 0x29, 0x28, 0x1f};

struct Unk_0209da44_E98c { u8 b[0x98c]; };
struct Unk_0209da44_Eb4 { u8 b[0xb4]; };

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

    void func_0209da44();
    void func_0209dae8();
    void func_0209db94();
    void func_0209dc0c();
};

struct Unk_0209d994_Buf {
    u16 h;
    u8 b[8];
};

void SaveData::func_0209dc0c() {
    ClockOffset_Clear(&f_15fb4);
    Clock_Init();
    TownMap_Generate(&f_c330, gCurrentHeap);
    func_0209d81c(this);
    func_02063904(&f_2, data_020e2384);
    SaveData_InitNew((u8 *)this);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 0);
    _ZN11SaveRecord410clearStateEv(&f_15fdc);
    func_020b8e90();
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
}

void SaveData::func_0209db94() {
    func_0209d81c(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    SaveVillagers_DailyUpdate(&f_8a3c, 1);
    SaveVillagers_PlaceMissingHouses(&f_8a3c);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    func_020b8ea0();
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

void SaveData::func_0209dae8() {
    void *a = PlayerData_GetCurrent();
    func_0209d81c(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    func_0209d994((u8 *)this);
    _ZN12Unk_02097ff47setFlagEj(a, 1);
    _ZN12Unk_02097ff47setFlagEj(a, 0x23);
    _ZN12Unk_02097ff49clearFlagEj(a, 9);
    SaveVillagers_DailyUpdate(&f_8a3c, 0);
    SaveVillagers_PlaceMissingHouses(&f_8a3c);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&f_8a3c);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    _ZN12Unk_02097ff414setSkyShotHitsEj(a, 0);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
    SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
}

void SaveData::func_0209da44() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&f_c330, gCurrentHeap);
    func_0209d81c(this);
    _ZN11SaveRecord412setDateTodayEPv(&f_15fc5, 0);
    func_0209d994((u8 *)this);
    SaveData_InitNew((u8 *)this);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    _ZN12Unk_02097ff47setFlagEj(a, 1);
    _ZN12Unk_02097ff47setFlagEj(a, 0x23);
    _ZN12Unk_02097ff49clearFlagEj(a, 9);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    TownSessionState_Get();
    _ZN16ResettiVisitFlag5clearEv(TownSessionState_GetResettiFlag());
    SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
}

void func_0209d994(u8 *p) {
    void *r4 = PlayerData_GetCurrent();
    Unk_0209d994_Buf l;
    _ZN10PlayerData11getPlayerIdEv(r4);
    l = *(Unk_0209d994_Buf *)func_0209409c();
    Clock_GetDate(_ZN12Unk_02097ff416getDayUpdateDateEv(r4));
    _ZN6TownId13func_02094094EPS_(_ZN10PlayerData11getPlayerIdEv(r4), p + 2);
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
    func_020639b8(&l);
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
    func_020b23a8(p + 0x1592c);
    _ZN9HouseData13func_0206058cEv(p + 0xe558);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    _ZN19AbleSistersPatterns19initDefaultPatternsEv(p + 0xfafc);
    func_0205b470();
    _ZN12Unk_0206357813func_02063578Ev(p + 0x15fbc);
    _ZN8BbsBoard5resetEv(p + 0x11488);
    NookShop_InitNew(p + 0x15db4);
    AbleShop_InitNew(p + 0x15f84);
    _ZN8ReddShop5resetEv(p + 0x15f70);
    TownState_InitNew(p + 0x15e54);
    Weather_InitNew(p + 0x15f66);
    func_02040864(p + 0x15e18);
    _ZN16BlancaFaceRecord4initEv(p + 0x15700);
    _ZN12TurnipMarket4initEv(p + 0x15f4c);
    ReddLastSale_Clear(p + 0x15f34);
    GulliverQuest_Init(p + 0xe556);
    _ZN13ContestRecord10resetTodayEv(p + 0x15efc);
    func_0205b648(p + 0x15fb0);
    Melody_ResetToDefault(p + 0x15fa8);
    func_02039cf4(p + 0x15ec0);
    RoostGuestRoll_Init(p + 0xe557);
    func_0208f200(p + 0x10c3c);
}

void func_0209d81c(void *) {
    if (TownBlockMap_Get()) {
        _ZN12TownBlockMap13updateAcreIdsEv(TownBlockMap_Get());
        _ZN12TownBlockMap6bindBgEv(TownBlockMap_Get());
        Town_ClearBorderTrees(TownBlockMap_Get());
    }
}


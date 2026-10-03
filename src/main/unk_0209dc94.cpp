#include "types.h"

struct Unk_0209da44_E98c { u8 b[0x98c]; };
struct Unk_0209da44_Eb4 { u8 b[0xb4]; };

extern "C" {
void SaveData_SyncClockOffset(void *);
void func_0209d81c(void *);
void SaveData_InitNew(u8 *p);
void func_0209d994(u8 *p);
void *PlayerData_GetCurrent();
void _ZN12Unk_02097ff413func_0209801cEj(void *, s32);
void _ZN12Unk_02097ff413func_02097ff4Ej(void *, s32);
void func_0209c80c();
void Clock_Init();
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_BindBg();
void func_020af3f4();
void _ZN12Unk_020af51413func_020af514Ev();
void VillagerStates_SetBirthdayVisitor(s32);
void func_020850e0();
void *func_0208517c();
void _ZN12Unk_02086f1413func_02086f28Ev(void *);
void _ZN12Unk_02086f1413func_02086f14Ej(void *, u32);
void SaveVillagers_UpdateAllRoomInfo(void *);
void SaveVillagers_UpdateOutdoor(void *, s32);
void SaveVillagers_DailyUpdate(void *, s32);
void SaveVillagers_PlaceMissingHouses(void *);
void VillagerStates_ResetErrands();
void SaveVillagers_AssignErrands(void *);
void _ZN7TownMap13func_0204df30Ev(void *);
void TownMap_Generate(void *, u32);
void _ZN11SaveRecord412setDateTodayEPv(void *, s32);
s32 _ZN11SaveRecord412isStateValidEv(void *);
s32 func_020b50e8();
void _ZN12Unk_02097ff413func_020981acEj(void *, s32);
void func_020599b0();
s32 func_0203cb70();
void Snd_SetOutputMode(void *);
void LostChild_LoadFromTown();
void BottleLetter_WashUpThrownBottle();
void func_020b00c4();
void LetterDelivery_DeliverReceivedLetter();
void GameStart_Clear();
void func_020b8eb0();
void Sky_RequestBirds();
void _ZN12TurnipMarket12spoilOnResetEv(void *);
void SaveVillagers_PickPlayerBirthdayVisitor(void *, s32);
s32 VillagerStates_GetBirthdayVisitor();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
void _ZN10PlayerData13func_0209868cEv(void *);
void _ZN12Unk_02087ad813func_02087be0Ev();
void _ZN12Unk_02097ff413func_02098074Ev(void *);
void *_ZN10PlayerData11getPlayerIdEv(void *);
void _ZN6TownId13func_02094094EPS_(void *, void *);
void *_ZN10PlayerData13func_020986d4Ev(void *);
void _ZN14PlayerPatterns13func_02071d08EP12Unk_020942c8(void *, void *);
void _ZN12Unk_020970b813func_02097090Ev(void *);
void func_02039d78(void *);
void _ZN10MuseumData22releasePlayerDonationsEj(void *, s32);
void func_020707ec(s32);
void ReddPassword_ForgetResident(u32);
void *SaveManager_GetLetterStorage();
void _ZN13LetterStorage13func_02096f68Ev(void *);
void MI_CpuFill8(void *, s32, u32);
void __cxa_vec_cleanup(void *, u32, u32, void (*)(void *));
void func_02039d8c(void *);
void _ZN12Unk_020970b8D1Ev(void *);
void func_020639a0(void *);
void func_020977ac(void *);
void AbleShop_Reset(void *);
void ReddShop_Reset(void *);
void _ZN7TownMap5clearEv(void *);
void _ZN8BbsBoard5clearEv(void *);
void _ZN9HouseData13func_020606d8Ev(void *);
void TownState_Reset(void *);
void Weather_SetDateToday(void *);
void NookShop_Clear(void *);
void _ZN16BlancaFaceRecord5resetEv(void *);
void _ZN12TurnipMarket5clearEv(void *);
void _ZN12ReddLastSale5clearEv(void *);
void GulliverQuest_Clear(void *);
void _ZN12Unk_020858105clearEv(void *);
void _ZN12Unk_0209702013func_02096fd4Ev(void *);
void func_02039d58(void *);
void func_02039bec(void *);
void func_020b09c0(void *);
void _ZN12Unk_02096e7813func_02096f30Ev(void *);
void func_0208f088(void *);
void func_0205b650(void *);
void _ZN11SaveRecord49resetDateEv(void *);
void _ZN12Unk_020af53c13func_020af674Ev(void *);
void func_0204085c(void *);
void _ZN15LostChildRecord5clearEv(void *);
void _ZN12Unk_0208620c13func_0208620cEv(void *);
void func_0208f1dc(void *);
void PlayerDataArray_Destruct(void *);
void SaveVillagers_Clear(void *);
void func_020639b8(void *);
void func_02039c00(void *);
void func_02039d6c(void *);
void func_020408fc(void *);
void func_0204c504(void *);
void _ZN7TownMapD1Ev(void *);
void func_0205b67c(void *);
void _ZN9HouseDataD1Ev(void *);
void _ZN12Unk_02063578D2Ev(void *);
void _ZN10MuseumData13func_0207054cEv(void *);
void _ZN19AbleSistersPatternsD1Ev(void *);
void _ZN8BbsBoardD1Ev(void *);
void SaveVillagers_Destruct(void *);
void _ZN12Unk_020858108destructEv(void *);
void func_02086230(void *);
void func_02086290(void *);
void _ZN12ReddLastSaleD1Ev(void *);
void func_020868c4(void *);
void _ZN16BlancaFaceRecord8destructEv(void *);
void LostChildRecord_Destruct(void *);
void _ZN12Unk_0208f0a0D1Ev(void *);
void _ZN12Unk_0208f238D1Ev(void *);
void func_02096f48(void *);
void _ZN12Unk_02097020D1Ev(void *);
void func_0209eb04(void *);
void _ZN11SaveRecord413func_0209eb8cEv(void *);
void _ZN8ReddShopD1Ev(void *);
void AbleShop_Destruct(void *);
void _ZN12Unk_020aec00C1Ev(void *);
void _ZN12Unk_020af53cD1Ev(void *);
void _ZN12Unk_020b09f0D1Ev(void *);
void _ZN12Unk_020b246cC2Ev(void *);
void func_020c031c(void *);
extern u32 gCurrentHeap;
extern u8 gSaveData[];
extern const u32 data_020d0704[2];
}

const u32 data_020d0704[2] = {1, 0};

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

    void func_0209dc94();
    void func_0209ddb0();
    void func_0209de74();
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
    _ZN11SaveRecord413func_0209eb8cEv(&f_15fdc);
    LostChildRecord_Destruct(&f_15fca);
    func_0209eb04(&f_15fc5);
    _ZN12Unk_02063578D2Ev(&f_15fbc);
    func_0205b67c(&f_15fb0);
    _ZN12Unk_020af53cD1Ev(&f_15f96);
    AbleShop_Destruct(&f_15f84);
    _ZN8ReddShopD1Ev(&f_15f70);
    func_020c031c(&f_15f66);
    func_020868c4(&f_15f4c);
    _ZN12ReddLastSaleD1Ev(&f_15f34);
    _ZN12Unk_020858108destructEv(&f_15efc);
    func_02039c00(&f_15ede);
    func_02039d6c(&f_15ec0);
    func_0204c504(&f_15e54);
    func_020408fc(&f_15e18);
    _ZN12Unk_020aec00C1Ev(&f_15db4);
    _ZN10MuseumData13func_0207054cEv(&f_15d50);
    _ZN12Unk_0208f0a0D1Ev(&f_15c58);
    func_02096f48(&f_15b5c);
    _ZN12Unk_020b246cC2Ev(&f_1592c);
    _ZN16BlancaFaceRecord8destructEv(&f_15700);
    __cxa_vec_cleanup(&f_15430, 4, 0xb4, func_02039d8c);
    _ZN12Unk_020b09f0D1Ev(&f_14fcc);
    _ZN12Unk_02097020D1Ev(&f_1463c);
    __cxa_vec_cleanup(&f_1200c, 4, 0x98c, _ZN12Unk_020970b8D1Ev);
    _ZN8BbsBoardD1Ev(&f_11488);
    _ZN12Unk_0208f238D1Ev(&f_10c3c);
    _ZN19AbleSistersPatternsD1Ev(&f_fafc);
    _ZN9HouseDataD1Ev(&f_e558);
    func_02086230(&f_e557);
    func_02086290(&f_e556);
    _ZN7TownMapD1Ev(&f_c330);
    SaveVillagers_Destruct(&f_8a3c);
    PlayerDataArray_Destruct(&f_c);
    func_020639b8(&f_2);
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
    func_020639a0(&f_2);
    func_020977ac(&f_c);
    SaveVillagers_Clear(&f_8a3c);
    AbleShop_Reset(&f_15f84);
    ReddShop_Reset(&f_15f70);
    _ZN7TownMap5clearEv(&f_c330);
    _ZN8BbsBoard5clearEv(&f_11488);
    _ZN9HouseData13func_020606d8Ev(&f_e558);
    TownState_Reset(&f_15e54);
    Weather_SetDateToday(&f_15f66);
    NookShop_Clear(&f_15db4);
    _ZN16BlancaFaceRecord5resetEv(&f_15700);
    _ZN12TurnipMarket5clearEv(&f_15f4c);
    _ZN12ReddLastSale5clearEv(&f_15f34);
    GulliverQuest_Clear(&f_e556);
    _ZN12Unk_020858105clearEv(&f_15efc);
    _ZN12Unk_0209702013func_02096fd4Ev(&f_1463c);
    func_02039d58(&f_15ec0);
    func_02039bec(&f_15ede);
    func_020b09c0(&f_14fcc);
    _ZN12Unk_02096e7813func_02096f30Ev(&f_15b5c);
    func_0208f088(&f_15c58);
    func_0205b650(&f_15fb0);
    _ZN11SaveRecord49resetDateEv(&f_15fc5);
    _ZN12Unk_020af53c13func_020af674Ev(&f_15f96);
    func_0204085c(&f_15e18);
    _ZN15LostChildRecord5clearEv(&f_15fca);
    _ZN12Unk_0208620c13func_0208620cEv(&f_e557);
    func_0208f1dc(&f_10c3c);
}

void SaveData::resetPlayer(s32 i) {
    _ZN12Unk_020970b813func_02097090Ev(&f_1200c[i]);
    func_02039d78(&f_15430[i]);
    _ZN10MuseumData22releasePlayerDonationsEj(&f_15d50, i);
    func_020707ec(i);
    ReddPassword_ForgetResident((u8)i);
    u8 *r = (u8 *)SaveManager_GetLetterStorage();
    if (r) _ZN13LetterStorage13func_02096f68Ev(r + i * 0x477c);
}

void SaveData::func_0209de74() {
    void *a = PlayerData_GetCurrent();
    SaveData_SyncClockOffset(this);
    TownMap_Generate(&f_c330, gCurrentHeap);
    func_0209d81c(this);
    _ZN11SaveRecord412setDateTodayEPv(&f_15fc5, 0);
    _ZN6TownId13func_02094094EPS_(_ZN10PlayerData11getPlayerIdEv(a), &f_2);
    void *t = _ZN10PlayerData13func_020986d4Ev(a);
    _ZN14PlayerPatterns13func_02071d08EP12Unk_020942c8(t, _ZN10PlayerData11getPlayerIdEv(a));
    SaveData_InitNew((u8 *)this);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    _ZN12Unk_02097ff413func_0209801cEj(a, 1);
    _ZN12Unk_02097ff413func_0209801cEj(a, 0x23);
    _ZN12Unk_02097ff413func_02097ff4Ej(a, 9);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    func_020850e0();
    _ZN12Unk_02086f1413func_02086f28Ev(func_0208517c());
    SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
}

void SaveData::func_0209ddb0() {
    void *a = PlayerData_GetCurrent();
    func_0209d81c(this);
    HouseRoomMaps_UpdateAll();
    HouseRoomMaps_BindBg();
    Clock_Init();
    _ZN6TownId13func_02094094EPS_(_ZN10PlayerData11getPlayerIdEv(a), &f_2);
    void *t = _ZN10PlayerData13func_020986d4Ev(a);
    _ZN14PlayerPatterns13func_02071d08EP12Unk_020942c8(t, _ZN10PlayerData11getPlayerIdEv(a));
    _ZN12Unk_02097ff413func_0209801cEj(a, 1);
    _ZN12Unk_02097ff413func_0209801cEj(a, 0x23);
    _ZN12Unk_02097ff413func_02097ff4Ej(a, 9);
    SaveVillagers_DailyUpdate(&f_8a3c, 0);
    SaveVillagers_PlaceMissingHouses(&f_8a3c);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&f_8a3c);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    _ZN12Unk_02097ff413func_020981acEj(a, 0);
    VillagerStates_SetBirthdayVisitor(-1);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    func_020850e0();
    _ZN12Unk_02086f1413func_02086f28Ev(func_0208517c());
    SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
}

void SaveData::func_0209dc94() {
    void *a = PlayerData_GetCurrent();
    if (func_020b50e8() != 6) {
        func_0209d81c(this);
        HouseRoomMaps_UpdateAll();
        HouseRoomMaps_BindBg();
        Clock_Init();
        SaveVillagers_DailyUpdate(&f_8a3c, 0);
    }
    SaveVillagers_PlaceMissingHouses(&f_8a3c);
    VillagerStates_ResetErrands();
    SaveVillagers_AssignErrands(&f_8a3c);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    func_020599b0();
    Snd_SetOutputMode((void *)data_020d0704[func_0203cb70()]);
    LostChild_LoadFromTown();
    BottleLetter_WashUpThrownBottle();
    func_020b00c4();
    LetterDelivery_DeliverReceivedLetter();
    GameStart_Clear();
    func_020b8eb0();
    Sky_RequestBirds();
    _ZN12TurnipMarket12spoilOnResetEv(&f_15f4c);
    SaveVillagers_PickPlayerBirthdayVisitor(&f_8a3c, 0);
    SaveVillagers_UpdateOutdoor(&f_8a3c, 1);
    if (func_020b50e8() == 6) {
        if (VillagerStates_GetBirthdayVisitor() == -1) {
            if (_ZN12Unk_02097ff413func_02098044Ej(a, 0x23) == 0) {
                if (_ZN12Unk_02097ff413func_02098044Ej(a, 2) != 0) {
                    _ZN10PlayerData13func_0209868cEv(a);
                    _ZN12Unk_02087ad813func_02087be0Ev();
                    func_020850e0();
                    _ZN12Unk_02086f1413func_02086f14Ej(func_0208517c(), 1);
                }
            }
        }
    }
    _ZN12Unk_02097ff413func_0209801cEj(a, 2);
    _ZN12Unk_02097ff413func_02098074Ev(a);
    if (func_020b50e8() != 6) {
        SaveVillagers_UpdateAllRoomInfo(&f_8a3c);
    }
}


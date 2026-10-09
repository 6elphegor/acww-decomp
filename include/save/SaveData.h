#ifndef SAVE_SAVEDATA_H
#define SAVE_SAVEDATA_H

#include "types.h"
#include "game/WeatherRecord.h"
#include "save/SaveRecord4.h"
#include "town/TownState.h"

// Game-wide save state (0x15fe0 bytes, one global gSaveData at 0x021d7350 constructed by __sinit): every
// data_021d73xx..gSaveFooter label of symbols.txt is a member of it. gSaveData and the constructor are in
// src/main/unk_0209d70c.cpp; the setup modes 05/06/Loaded/NoSave in src/main/unk_0209d81c.cpp; the destructor and the
// other members in src/main/unk_0209dc94.cpp. Most sub-records are still byte blocks their classes are constructed in
// (the classes have constructors or are declared by other units as views).


struct SaveData {
    SaveData();
    ~SaveData();
    void setupMode06();
    void setupMode05();
    void setupLoaded();
    void setupNoSave();
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

    /* 0x00000 */ u8 marker; // 0x8a when valid
    /* 0x00001 */ u8 unk_01;
    /* 0x00002 */ u8 townId[0xa];
    /* 0x0000c */ u8 players[0x8a30];
    /* 0x08a3c */ u8 villagers[0x38f4];
    /* 0x0c330 */ u8 townMap[0x2226]; // TownMap
    /* 0x0e556 */ u8 gulliverQuest[0x1];
    /* 0x0e557 */ u8 roostGuestRoll[0x1];
    /* 0x0e558 */ u8 house[0x15a4]; // HouseData, with the learned songs (HouseData::songs, 0x0faec)
    /* 0x0fafc */ u8 ableSistersPatterns[0x1140];
    /* 0x10c3c */ u8 townExchange[0x84c]; // TownExchangeRecord
    /* 0x11488 */ u8 bbsBoard[0xb80]; // BbsBoard
    /* 0x12008 */ s32 donationTotal; // Donation_GetTotal / Donation_SetTotal (capped at 999999999)
    /* 0x1200c */ u8 mailboxes[4][0x98c]; // PlayerMailbox
    /* 0x1463c */ u8 letterOutbox[0x990];
    /* 0x14fcc */ u8 constellations[0x464];
    /* 0x15430 */ u8 dressers[4][0xb4]; // ChestStorage
    /* 0x15700 */ u8 blancaFace[0x22c];
    /* 0x1592c */ u8 townStyle[0x230];
    /* 0x15b5c */ u8 bottleLetter[0xfc];
    /* 0x15c58 */ u8 receivedLetters[0xf8];
    /* 0x15d50 */ u8 museum[0x64];
    /* 0x15db4 */ u8 nookShop[0x64]; // NookShop
    /* 0x15e18 */ u8 eventWeekSlots[0x8];
    /* 0x15e20 */ u8 unk_15e20[0x4];
    /* 0x15e24 */ u8 unk_15e24[0x30];
    /* 0x15e54 */ TownState townState; // with the bulletin board's used notices / slogans and the town events
    /* 0x15ec0 */ u8 lostAndFound[0x1e];
    /* 0x15ede */ u8 recycleBin[0x1e];
    /* 0x15efc */ u8 contestRecord[0x38];
    /* 0x15f34 */ u8 reddLastSale[0x18];
    /* 0x15f4c */ u8 turnipMarket[0x1a];
    /* 0x15f66 */ WeatherRecord weather;
    /* 0x15f6e */ u8 unk_15f6e[0x2];
    /* 0x15f70 */ u8 reddShop[0x14]; // ReddShop
    /* 0x15f84 */ u8 ableShop[0x12];
    /* 0x15f96 */ u8 snowmen[0x12];
    /* 0x15fa8 */ s64 townTune; // the packed melody (Melody_SetPacked)
    /* 0x15fb0 */ u8 happyRoomDate[0x4];
    /* 0x15fb4 */ u8 clockOffset[0x8];
    /* 0x15fbc */ u8 itemClassOrders[0x9];
    /* 0x15fc5 */ u8 unk_15fc5[0x5];
    /* 0x15fca */ u8 lostChild[0xe];
    /* 0x15fd8 */ u32 flags[1]; // testFlag / setFlag / clearFlag bits
    /* 0x15fdc */ SaveRecord4 footer;
};

// The save image: the same bytes on every host (members are plain data; records with behaviour are constructed in
// their blocks and checked against them where they are defined).
static_assert(sizeof(SaveData) == 0x15fe0 && __alignof__(SaveData) == 4, "SaveData: DS save layout");
static_assert(__builtin_offsetof(SaveData, players) == 0xc, "SaveData::players");
static_assert(__builtin_offsetof(SaveData, villagers) == 0x8a3c, "SaveData::villagers");
static_assert(__builtin_offsetof(SaveData, townMap) == 0xc330, "SaveData::townMap");
static_assert(__builtin_offsetof(SaveData, house) == 0xe558, "SaveData::house");
static_assert(__builtin_offsetof(SaveData, mailboxes) == 0x1200c, "SaveData::mailboxes");
static_assert(__builtin_offsetof(SaveData, letterOutbox) == 0x1463c, "SaveData::letterOutbox");
static_assert(__builtin_offsetof(SaveData, townState) == 0x15e54, "SaveData::townState");
static_assert(__builtin_offsetof(SaveData, lostAndFound) == 0x15ec0, "SaveData::lostAndFound");
static_assert(__builtin_offsetof(SaveData, weather) == 0x15f66, "SaveData::weather");
static_assert(__builtin_offsetof(SaveData, townTune) == 0x15fa8, "SaveData::townTune");
static_assert(__builtin_offsetof(SaveData, flags) == 0x15fd8, "SaveData::flags");
static_assert(__builtin_offsetof(SaveData, footer) == 0x15fdc, "SaveData::footer");

#endif // SAVE_SAVEDATA_H

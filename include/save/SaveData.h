#ifndef SAVE_SAVEDATA_H
#define SAVE_SAVEDATA_H

#include "types.h"
#include "save/Unk_0209da44_E98c.h"

// Game-wide save state (0x15fe0 bytes, one global gSaveData at 0x021d7350 constructed by __sinit): every
// data_021d73xx..gSaveFooter label of symbols.txt is a member of it. gSaveData and the constructor are in
// src/main/unk_0209d70c.cpp; the setup modes 05/06/Loaded/NoSave in src/main/unk_0209d81c.cpp; the destructor and the
// other members in src/main/unk_0209dc94.cpp. The sub-records are still opaque byte blocks (their classes are
// constructed through their mangled symbols).


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
    /* 0x0c330 */ u8 townMap[0x2210];
    /* 0x0e540 */ u8 unk_e540[0x16];
    /* 0x0e556 */ u8 unk_e556[0x1];
    /* 0x0e557 */ u8 unk_e557[0x1];
    /* 0x0e558 */ u8 house[0x1594];
    /* 0x0faec */ u8 songSet[0x10];
    /* 0x0fafc */ u8 ableSistersPatterns[0x1140];
    /* 0x10c3c */ u8 townExchange[0x84c]; // TownExchangeRecord
    /* 0x11488 */ u8 bbsBoard[0xb78];
    /* 0x12000 */ u8 unk_12000[0xc];
    /* 0x1200c */ Unk_0209da44_E98c mailboxes[4];
    /* 0x1463c */ u8 letterOutbox[0x990];
    /* 0x14fcc */ u8 constellations[0x464];
    /* 0x15430 */ Unk_0209da44_Eb4 dressers[4];
    /* 0x15700 */ u8 blancaFace[0x22c];
    /* 0x1592c */ u8 townStyle[0x230];
    /* 0x15b5c */ u8 bottleLetter[0xfc];
    /* 0x15c58 */ u8 receivedLetters[0xf8];
    /* 0x15d50 */ u8 museum[0x64];
    /* 0x15db4 */ u8 nookShop[0x4c];
    /* 0x15e00 */ u8 unk_15e00[0x18];
    /* 0x15e18 */ u8 eventWeekSlots[0x8];
    /* 0x15e20 */ u8 unk_15e20[0x4];
    /* 0x15e24 */ u8 unk_15e24[0x30];
    /* 0x15e54 */ u8 townState[0xc];
    /* 0x15e60 */ u8 unk_15e60[0x18];
    /* 0x15e78 */ u8 townEvents[0x30];
    /* 0x15ea8 */ u8 townEventDate[0x14];
    /* 0x15ebc */ u8 unk_15ebc[0x4];
    /* 0x15ec0 */ u8 lostAndFound[0x1e];
    /* 0x15ede */ u8 recycleBin[0x1e];
    /* 0x15efc */ u8 contestRecord[0x38];
    /* 0x15f34 */ u8 reddLastSale[0x18];
    /* 0x15f4c */ u8 unk_15f4c[0x1a];
    /* 0x15f66 */ u8 weather[0xa];
    /* 0x15f70 */ u8 reddShop[0x10];
    /* 0x15f80 */ u8 unk_15f80[0x4];
    /* 0x15f84 */ u8 ableShop[0x12];
    /* 0x15f96 */ u8 snowmen[0x12];
    /* 0x15fa8 */ u8 townTune[0x8];
    /* 0x15fb0 */ u8 happyRoomDate[0x4];
    /* 0x15fb4 */ u8 clockOffset[0x8];
    /* 0x15fbc */ u8 itemClassOrders[0x9];
    /* 0x15fc5 */ u8 unk_15fc5[0x5];
    /* 0x15fca */ u8 lostChild[0xe];
    /* 0x15fd8 */ u32 flags[1]; // testFlag / setFlag / clearFlag bits
    /* 0x15fdc */ u8 footer[0x4];
};

#endif // SAVE_SAVEDATA_H

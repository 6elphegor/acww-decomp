#ifndef SAVE_VILLAGERDATA_H
#define SAVE_VILLAGERDATA_H

#include "types.h"
#include "npc/VillagerId.h"
#include "save/TownId.h"

class LetterView;

// A villager's save record (0x700 bytes; eight in SaveVillagers) and its memories of the players (0x68 bytes each).
// Methods defined in src/main/unk_02077ac4.cpp. The members are kept as the DS bytes (copied and cleared as blocks;
// the save image).
struct VillagerMemory {
    u8 player[0x16];
    u8 nickname[8];
    u8 compliment[0x10];
    u8 greeting[0x10];
    u8 unk_3e[0x14];
    u16 receivedItem;
    s8 friendship;
    u8 impression;
    u8 unk_56[2];
    u32 usedTopicMask;
    s64 townTune;
    struct {
        u16 f0 : 1;
        u16 f1 : 1;
        u16 f2 : 1;
        u16 f3 : 1;
        u16 f4 : 1;
        u16 f5 : 1;
        u16 f6 : 1;
        u16 f7 : 1;
        u16 talkStreak : 3;
        u16 f11 : 1;
        u16 f12 : 1;
        u16 f13 : 1;
        u16 f14 : 1;
        u16 f15 : 1;
    } flags;
    u8 unk_66[2];

    BOOL hasFortuneGreeting();
    void clearFortuneGreeting();
    void setFortuneGreeting();
    BOOL isFleaMarketVisited();
    void clearFleaMarketVisited();
    void setFleaMarketVisited();
    BOOL isNewYearLetterSent();
    void clearNewYearLetterSent();
    void setNewYearLetterSent();
    BOOL isBirthdayLetterSent();
    void clearBirthdayLetterSent();
    void setBirthdayLetterSent();
    BOOL isPartyGreeted();
    void clearPartyGreeted();
    void setPartyGreeted();
    BOOL isPartyGiftReceived();
    void clearPartyGiftReceived();
    void setPartyGiftReceived();
    BOOL isTalkedToday();
    void clearTalkedToday();
    void setTalkedToday();
    BOOL isGiftGiven();
    void setGiftGiven();
    s32 pickUnusedTopic();
    void setImpression(s32 v);
    u32 getImpression();
    void setTownTune(long long *src);
    BOOL hasTownTune();
    u16 *getReceivedItem();
    void setReceivedItem(u16 *p);
    void setGreeting(void *src, s32 n);
    void getGreetingEncoded(void *out);
    void getGreeting(void *out);
    BOOL hasGreeting();
    void setCompliment(void *src, s32 n);
    void getComplimentEncoded(void *out);
    void getCompliment(void *out);
    BOOL hasCompliment();
    void setNickname(void *src, s32 n);
    void setNicknameFromMsg(void *out);
    void getNicknameEncoded(void *out);
    void getNickname(void *out);
    void setLetterReceived();
    BOOL isLetterReceived();
    s32 addFriendship(s32 d);
    void setFriendship(s8 v);
    s32 getFriendship();
};

struct VillagerData {
    VillagerMemory memories[8];
    u32 pattern[0x228 / 4];
    u32 letter[0xf4 / 4];
    u32 planBlock[0x50 / 4];
    u16 furniture[10];
    VillagerId villagerId;
    u16 receivedItems[4];
    TownId movedFromTown;
    u8 catchphrase[0xa];
    u32 housePos;
    u16 shirt;
    u8 wallpaper;
    u8 carpet;
    u8 moveInKind;
    u8 furnitureTasteIndex;
    u8 roomLayout;
    u8 pad_6f3;
    u8 umbrella;
    u8 pad_6f5;
    TownId letterTown;

    s32 receiveLetterFrom(LetterView *letter);
    // profile: letter, catchphrase, shirt, umbrella (src/main/unk_02077ac4.cpp)
    void getCatchphraseEncoded(void *p);
    void getCatchphrase(void *p, void *q);
    void clearCatchphrase();
    void *getInfo28();
    s32 findFreeSlot(s32 n);  // the first of n villagers from this one without a villager
    void setUmbrella(u16 *p);
    void setShirt(u16 *p);
    u16 *getShirt();
    BOOL hasLetterSenderMemory();
    s32 findLetterSenderMemory();
    void updateMemoriesFromPlayers();
    void sendNewYearLetters(void *a);
    void sendBirthdayLetters(void *a);
    void replyToLetter(void *a, void *b);
    BOOL hasLetterFrom(u16 *p);
    void *getLetter();
    void *getPattern();
    VillagerId *getVillagerId();
    void setup(u32 id, u32 a, u32 b, u8 c);
    void copyFrom(void *src);
    void clear();
    ~VillagerData();
    VillagerData();
};

// Villager save block (gSaveVillagers, SaveData::villagers: 0x38f4 bytes)
struct SaveVillagers {
      VillagerData villagers[8];
      u32 relations[7];
      u32 outdoorSchedule[41];
      u8 nicknameDate[4];       // 0x38c0 SaveVillagers_SetNicknameDate / IsNicknameCooldownOver
      u32 lastMoveDate[2];
      u32 lastMoveOutDate[2];
      u32 speciesHistory[5];
      s8 lastMovedOutSpecies;
      s8 lastMovedInIndex;
      s8 lastSickIndex;
      u8 unk_38eb[3];           // 0x38ec: the town tune request bits (SaveVillagersTuneView)
      u8 furnitureDropDate[4];  // 0x38ee (Clock_GetDate)
      u8 pad_38f2[2];
};

static_assert(sizeof(VillagerMemory) == 0x68, "VillagerMemory: DS save layout");
static_assert(sizeof(VillagerData) == 0x700 && __alignof__(VillagerData) == 4, "VillagerData: DS save layout");
static_assert(__builtin_offsetof(VillagerData, pattern) == 0x340, "VillagerData::pattern");
static_assert(__builtin_offsetof(VillagerData, letter) == 0x568, "VillagerData::letter");
static_assert(__builtin_offsetof(VillagerData, villagerId) == 0x6c0, "VillagerData::villagerId");
static_assert(__builtin_offsetof(VillagerData, catchphrase) == 0x6de, "VillagerData::catchphrase");
static_assert(__builtin_offsetof(VillagerData, shirt) == 0x6ec, "VillagerData::shirt");
static_assert(__builtin_offsetof(VillagerData, umbrella) == 0x6f4, "VillagerData::umbrella");
static_assert(__builtin_offsetof(VillagerData, letterTown) == 0x6f6, "VillagerData::letterTown");
static_assert(__builtin_offsetof(SaveVillagers, nicknameDate) == 0x38c0, "SaveVillagers::nicknameDate");
static_assert(__builtin_offsetof(SaveVillagers, furnitureDropDate) == 0x38ee, "SaveVillagers::furnitureDropDate");
static_assert(sizeof(SaveVillagers) == 0x38f4, "SaveVillagers: SaveData::villagers");

#endif

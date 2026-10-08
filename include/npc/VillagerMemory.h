#ifndef NPC_VILLAGERMEMORY_H
#define NPC_VILLAGERMEMORY_H

#include "types.h"

// A villager's memory of one player (0x68 bytes): the player, nickname, compliment, greeting, last received item,
// friendship, impression, town tune and flags. Defined in src/main/unk_02077ac4.cpp (which still keeps its own copy of
// the struct: switch it to this header).
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

#endif

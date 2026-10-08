#ifndef NPC_VILLAGERDATAPROFILEVIEW_H
#define NPC_VILLAGERDATAPROFILEVIEW_H

#include "types.h"

// A view of a villager's save data (VillagerData) at its profile members: letter, catchphrase, shirt, umbrella.
// Defined in src/main/unk_02077ac4.cpp (which still keeps its own copy of the struct: switch it to this header).
struct VillagerDataProfileView {
    u8 unk_000[0x568];
    u8 letter[0x6c0 - 0x568];
    u8 unk_6c0[0x1e];
    u8 catchphrase[0x6ec - 0x6de];
    u16 shirt;
    u8 unk_6ee[6];
    u8 umbrella;

    void getCatchphraseEncoded(void *p);
    void getCatchphrase(void *p, void *q);
    void clearCatchphrase();
    void *getInfo28();
    s32 findFreeSlot(s32 n);
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
};

#endif

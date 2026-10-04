#ifndef PLAYER_UNK_02097FF4_H
#define PLAYER_UNK_02097FF4_H

#include "types.h"

// Per-player data view (bank, emotions, flags, birthday, counters), 0x2274 bytes.
// Methods defined in src/main/unk_02097d1c.cpp.

class Unk_02097ff4 {
public:
    /* 0x0000 */ u8 unk_00[0x21e4];
    /* 0x21e4 */ u8 bank[8];
    /* 0x21ec */ u8 emotions[0x10];
    /* 0x21fc */ u32 flags[2];
    /* 0x2204 */ u8 dayUpdateDate[0x10];
    /* 0x2214 */ u16 inventoryBackground;
    /* 0x2216 */ u8 unk_2216[2];
    /* 0x2218 */ u8 birthday;
    /* 0x2219 */ u8 unk_2219;
    /* 0x221a */ u8 unk_221a[0x37];
    /* 0x2251 */ u8 arbeitTalkCount;
    /* 0x2252 */ u8 skyShotHits;
    /* 0x2253 */ u8 birthdayTalkYear;
    /* 0x2254 */ u8 unk_2254[8];
    /* 0x225c */ u8 foreignVillagerRecord[10];
    /* 0x2266 */ u8 unk_2266[12];
    /* 0x2272 */ u16 unk_2272;

    void clearFlag(u32 bit);
    void setFlag(u32 bit);
    BOOL testFlag(u32 bit);
    void sendForeignVillagerLetter();
    void *getForeignVillagerRecord();
    void func_02098188(u32 idx, u32 v);
    u32 func_02098198(u32 idx);
    void setSkyShotHits(u32 v);
    u32 getSkyShotHits();
    void advanceArbeitTalkCount();
    u32 getArbeitTalkCount();
    u32 getBirthdayTalkYear();
    void setBirthdayTalkYear(u32 v);
    void clearBirthday();
    void setBirthday(u32 a, u32 b);
    void *getBirthday();
    void *getEmotions();
    void *getBankAccount();
    u8 *getDayUpdateDate();
    s32 findUnusedSlot(s32 n);
    BOOL getOtherResidentName(void *p);
    s32 pickOtherResident();
    void func_020983c0(u16 *p);
    void *func_020983cc();
    void resetForNewTown();
    void func_020984a8();
};

#endif // PLAYER_UNK_02097FF4_H

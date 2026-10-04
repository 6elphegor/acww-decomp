#ifndef PLAYER_PLAYERDATA_H
#define PLAYER_PLAYERDATA_H

#include "types.h"
#include "item/ItemId.h"
#include "item/Letter.h"
#include "save/Pattern.h"
#include "game/NibblePair.h"

// One player's save record (0x228c bytes; gSavePlayers holds four, gGuestPlayers three): patterns, inventory, catalog,
// letters, errands, friend list, appearance, ... Defined in src/main/unk_02097d1c.cpp (0x02097ff4..0x02098668).
class PlayerId;

struct Unk_0209865c_Tri {
    u8 lo : 3;
    u8 mid : 3;
    u8 hi : 2;
};

struct Unk_0209865c_Bits {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

// inventory block (PlayerInventory): 10 letters, letter defaults, 15 pockets
struct Unk_0209865c_Grp {
    Letter a[10];
    u8 gap[0x52];
    ItemId b[15];
};

class PlayerData : public PlayerPatterns {
public:
    PlayerData();
    ~PlayerData();

    /* 0x1148 */ Unk_0209865c_Grp inventory;
    /* 0x1b40 */ u8 wallet[8];
    /* 0x1b48 */ u8 catalog[0x123];
    /* 0x1c6b */ u8 options[1];
    /* 0x1c6c */ u8 futureLetter[0xf8];
    /* 0x1d64 */ u8 errands[0xac];
    /* 0x1e10 */ u8 wifiUserData[0x50];
    /* 0x1e60 */ u8 friendList[0x384];
    /* 0x21e4 */ u8 bank[8];
    /* 0x21ec */ u8 emotions[4];
    /* 0x21f0 */ u8 dailyTalkFlags[0x18];
    /* 0x2208 */ u8 nookPoints[2];
    /* 0x220a */ u16 heldItem;
    /* 0x220c */ u16 shirt;
    /* 0x220e */ u16 hat;
    /* 0x2210 */ u16 faceItem;
    /* 0x2212 */ u16 bed;
    /* 0x2214 */ u16 inventoryBackground;
    /* 0x2216 */ s16 lastPlayDate;
    /* 0x2218 */ u8 birthday[2];
    /* 0x221a */ u8 spNpcRecord[0x11];
    /* 0x222b */ u8 dramaRecord[5];
    /* 0x2230 */ u8 lostChildRecord[0xc];
    /* 0x223c */ NibblePair faceHair;
    /* 0x223d */ Unk_0209865c_Tri hairColorTanFortune;
    /* 0x223e */ u8 motherLetterState[0x15];
    /* 0x2253 */ u8 birthdayTalkYear;
    /* 0x2254 */ u8 unk_2254[8];
    /* 0x225c */ u8 foreignVillagerRecord[0x1a];
    /* 0x2276 */ u8 id[0x16];

    void *getErrands();
    void *getOptions();
    void *getFriendList();
    void *getWifiUserData();
    void *getSpNpcRecord();
    void *getDailyTalkFlags();
    void *getLostChildRecord();
    void *getDramaRecord();
    void *getNookPoints();
    void *getCatalog();
    void getPatterns();
    void setBed(u16 *v);
    u16 *getBed();
    void setFaceItem(u16 *v);
    u16 *getFaceItem();
    void setHat(u16 *v);
    u16 *getHat();
    void setShirt(u16 *v);
    u16 *getShirt();
    void setHeldItem(u16 *v);
    u16 *getHeldItem();
    void *getInventory();
    void setFortune(u8 v);
    u32 getFortune();
    void setLastPlayDate(Unk_0209865c_Bits v);
    s32 getLastPlayDate();
    void setTan(u8 v);
    u32 getTan();
    void setHairColor(u8 v);
    u32 getHairColor();
    void setHairStyle(u8 v);
    u32 getHairStyle();
    void setFaceType(u8 v);
    u32 getFaceType();
    void getIndex();
    void setupNew(u32 p1, u32 p2, u32 p3, u32 s0, u8 s1, u8 s2, u8 s3, u8 s4, u8 s5, u32 s6, u16 *s7);
    BOOL isUsed();
    void reset();
    void fillZero();
    PlayerId *getPlayerId();
};

#endif

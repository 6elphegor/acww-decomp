#include "types.h"

class PlayerInventory;
class Unk_02097ff4;
class PlayerData;

extern "C" {
s32 Item_GetPrice(u16 *p);
BOOL _ZN12Unk_0206555413func_02065578Ev(void *p);
void func_02065c94(void *p);
void func_02065388(void *p);
s32 Date_DaysBetween(void *a, void *b);
void func_02097318(s32 v);
void func_02097214(s32 v);
void func_02097110(s32 v);
void _ZN17PlayerSpNpcRecord20sendInsuranceLettersEv(void *p);
void PlayerSpNpcRecord_SendMissingLetter(void *p);
void _ZN20PlayerDailyTalkFlags8clearAllEv(void *p);
void _ZN17PlayerSpNpcRecord19resetFireworksGivenEv(void *p);
void _ZN15LostChildRecord5clearEv(void *p);
void _ZN8SaveData9clearFlagEj(void *p, s32 v);
extern u8 gSaveData[];
extern u8 data_020e1e20[];
extern u8 gSavePlayers[];
void *_ZN12Unk_020dd38cC2Ev(void *p);
void _ZN12Unk_020dd38cD1Ev(void *p);
void *_ZN11MsgString33C1Ev(void *p);
void _ZN11MsgString33D1Ev(void *p);
void MailText_SetSlot(s32 a, void *b);
void _ZN9MsgString5clearEv(void *p);
void _ZN10VillagerId7getNameEj(void *a, void *b);
s32 TopicWord_PickRandom(s32 *p, s32 i);
void String_LoadResolveAltText(void *a, u8 *b, s32 c);
void func_020638d0(void *a, void *b);
s32 Villager_SendLetter4(const char *a, s32 b, s32 c, void *d, void *e, void *f);
s32 func_020977d0(void *a, void *b);
void *PlayerErrands_GetSlot(void *a, s32 b);
void PlayerErrandSlot_Clear(void *p);
void HouseVisitInvite_Clear(void *p);
void func_0203c42c(void *a, void *b, s32 c, s32 d);
void *_ZN18SickVillagerRecord15getParcelErrandEv(void *p);
void ParcelErrand_Clear(void *p);
BOOL Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
void ItemPick_FromRange(void *a, s32 b, s32 c, s32 d, s32 e, void *f, s32 g, s32 h, s32 i, s32 j);
void _ZN12ItemPickSpec3setEii(void *a, s32 b, s32 c);
void func_02063388(void *a);
void _ZN8PlayerId13func_020941b4EPvtaP6TownId(void *, u32, u32, u32, u32);
void _ZN8PlayerId13func_02094294Ev(void *);
void _ZN8PlayerIdC1Ev(void *);
void _ZN8PlayerIdC1EPv(void *);
void _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(void *, void *);
void NookPoints_Init(void *);
void Catalog_Init(void *);
void _ZN12FutureLetter17clearFutureLetterEv(void *);
void _ZN17MotherLetterState5clearEv(void *);
void PlayerWifiData_Create(void *);
void FriendList_Clear(void *);
void func_02087c80(void *);
void func_020877cc(void *);
void func_02097418(void *);
void EmotionSlots_Clear(void *);
void MI_CpuFill8(void *, s32, u32);
void Catalog_Clear(void *);
void PlayerErrands_Clear(void *);
void NookPoints_Reset(void *);
void func_02096e20(void *);
void LostChildRecord_Destruct(void *);
void func_020877d8(void *);
void PlayerSpNpcRecord_Destruct(void *);
void NookPoints_Destroy(void *);
void PlayerDailyTalkFlags_Destruct(void *);
void func_02097420(void *);
void FriendList_Destruct(void *);
void PlayerWifiData_Destruct(void *);
void _ZN13PlayerErrandsD1Ev(void *);
void FutureLetter_Destruct(void *);
void func_0203ca88(void *);
void Catalog_Destruct(void *);
void Catalog_Construct(void *);
void func_0203ca8c(void *);
void FutureLetter_Construct(void *);
void _ZN13PlayerErrandsC1Ev(void *);
void PlayerWifiData_Construct(void *);
void FriendList_Construct(void *);
void func_02097424(void *);
void PlayerDailyTalkFlags_Construct(void *);
void NookPoints_Create(void *);
void PlayerSpNpcRecord_Construct(void *);
void func_020877dc(void *);
void LostChildRecord_Construct(void *);
void func_02096e24(void *);
s32 PlayerErrands_GetDeliveryRecipientName(void *, void *, void *);
u16 *func_02097f6c(void *, u32);
s32 func_02097e98(void *, s32);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
void PocketMatches_Init(void *);
BOOL func_020030b4(void *);
void VillagerId_Copy(void *, void *);
void VillagerId_Clear(void *);
void VillagerId_Destruct(void *);
void VillagerId_Construct(void *);
void func_02063990(void *, void *);
BOOL func_02063954(void *);
void func_020639a0(void *);
void func_020639b8(void *);
void func_020639bc(void *);
s32 func_02063b8c(s32);
void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);
void func_02063388(void *);
extern u32 data_020d0538[];
void _ZN12Unk_02098d20C1Ev(void *);
void _ZN12Unk_02098d20D1Ev(void *);
void *PlayerData_GetCurrent();
void func_02097ac4(void *p, s32 a, s32 b);
void *_ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *a, void *b);
BOOL _ZN12Unk_02098d2013func_02098e0cEv(void *p);
void _ZN12Unk_02098d2013func_02098e30Ev(void *p);
s32 func_02094048(...);
BOOL _ZN8PlayerId13func_02094218Ev(...);
void *Clock_GetDate(...);
void *_ZN10PlayerData11getPlayerIdEv(...);
}
class PlayerInventory {
public:
    u8 unk_00[0x988];
    u8 unk_988[0x52];
    u16 unk_9da[15];
    u32 unk_9f8;
    u32 unk_9fc;

    s32 getTotalBells(BOOL flag);
    s32 getBellsSpace(s32 n);
    s32 getPocketBells();
    void *getUnk988();
    void *getEmptyLetter();
    s32 findEmptyLetter();
    void *getLetter(s32 idx);
    BOOL isPocketFlagsClear(s32 idx);
    u32 getPocketFlags(s32 idx);
    s32 findEmptyPocket();
    void setPocketFlags(s32 idx, u32 val);
    BOOL setPocket(u16 *p, s32 idx, u32 val);
    u16 *getPocket(s32 idx);
    void clear();
};

class PlayerPatterns {
public:
    PlayerPatterns();
    ~PlayerPatterns();
    u8 unk_00[0x1148];
};

class Letter {
public:
    Letter();
    ~Letter();
    u8 unk_00[0xf4];
};

class ItemId {
public:
    ItemId();
    ~ItemId();
    u16 unk_00;
};

struct Unk_0209865c_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

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

struct Unk_0209865c_Grp {
    Letter a[10];
    u8 gap[0x52];
    ItemId b[15];
};

class PlayerData : public PlayerPatterns {
public:
    PlayerData();
    ~PlayerData();

    /* 0x1148 */ Unk_0209865c_Grp unk_1148;
    /* 0x1b40 */ u8 unk_1b40[8];
    /* 0x1b48 */ u8 unk_1b48[0x123];
    /* 0x1c6b */ u8 unk_1c6b[1];
    /* 0x1c6c */ u8 unk_1c6c[0xf8];
    /* 0x1d64 */ u8 unk_1d64[0xac];
    /* 0x1e10 */ u8 unk_1e10[0x50];
    /* 0x1e60 */ u8 unk_1e60[0x384];
    /* 0x21e4 */ u8 unk_21e4[8];
    /* 0x21ec */ u8 unk_21ec[4];
    /* 0x21f0 */ u8 unk_21f0[0x18];
    /* 0x2208 */ u8 unk_2208[2];
    /* 0x220a */ u16 unk_220a;
    /* 0x220c */ u16 unk_220c;
    /* 0x220e */ u16 unk_220e;
    /* 0x2210 */ u16 unk_2210;
    /* 0x2212 */ u16 unk_2212;
    /* 0x2214 */ u16 unk_2214;
    /* 0x2216 */ s16 unk_2216;
    /* 0x2218 */ u8 unk_2218[2];
    /* 0x221a */ u8 unk_221a[0x11];
    /* 0x222b */ u8 unk_222b[5];
    /* 0x2230 */ u8 unk_2230[0xc];
    /* 0x223c */ Unk_0209865c_Nib unk_223c;
    /* 0x223d */ Unk_0209865c_Tri unk_223d;
    /* 0x223e */ u8 unk_223e[0x15];
    /* 0x2253 */ u8 unk_2253;
    /* 0x2254 */ u8 unk_2254[8];
    /* 0x225c */ u8 unk_225c[0x1a];
    /* 0x2276 */ u8 unk_2276[0x16];

    void *getErrands();
    void *func_02098668();
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
    void *getBed();
    void setFaceItem(u16 *v);
    void *getFaceItem();
    void setHat(u16 *v);
    void *getHat();
    void setShirt(u16 *v);
    void *getShirt();
    void setHeldItem(u16 *v);
    void *getHeldItem();
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
    void *getPlayerId();
};

class Unk_02097ff4 {
public:
    u8 unk_00[0x21e4];
    u8 unk_21e4[8];
    u8 unk_21ec[0x10];
    u32 unk_21fc[2];
    u8 unk_2204[0x10];
    u16 unk_2214;
    u8 unk_2216[2];
    u8 unk_2218;
    u8 unk_2219;
    u8 unk_221a[0x37];
    u8 unk_2251;
    u8 unk_2252;
    u8 unk_2253;
    u8 unk_2254[8];
    u8 unk_225c[10];
    u8 unk_2266[12];
    u16 unk_2272;

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

extern "C" {
BOOL Letter_IsValidIndex(s32 i);
void PlayerData_SetStungFace(void *p, u32 flag);
BOOL Pocket_IsValidIndex(s32 i);
extern u8 gSaveData[];
extern u8 gSavePlayers[];
}

struct Unk_020981f8_Pos { u8 a, b, c, d; };
struct Unk_020984a8_Obj { u32 pad[2]; Unk_020984a8_Obj(){} ~Unk_020984a8_Obj(){} };

PlayerData::PlayerData() {
    Catalog_Construct(&unk_1b48);
    func_0203ca8c(&unk_1c6b);
    FutureLetter_Construct(&unk_1c6c);
    _ZN13PlayerErrandsC1Ev(&unk_1d64);
    PlayerWifiData_Construct(&unk_1e10);
    FriendList_Construct(&unk_1e60);
    func_02097424(&unk_21e4);
    PlayerDailyTalkFlags_Construct(&unk_21f0);
    NookPoints_Create(&unk_2208);
    unk_220a = 0xfff1;
    unk_220c = 0xfff1;
    unk_220e = 0xfff1;
    unk_2210 = 0xfff1;
    unk_2212 = 0xfff1;
    unk_2214 = 0xfff1;
    PlayerSpNpcRecord_Construct(&unk_221a);
    func_020877dc(&unk_222b);
    LostChildRecord_Construct(&unk_2230);
    func_02096e24(&unk_223e);
    _ZN12Unk_02098d20C1Ev(&unk_225c);
    _ZN8PlayerIdC1EPv(&unk_2276);
}

PlayerData::~PlayerData() {
    _ZN8PlayerIdC1Ev(&unk_2276);
    _ZN12Unk_02098d20D1Ev(&unk_225c);
    func_02096e20(&unk_223e);
    LostChildRecord_Destruct(&unk_2230);
    func_020877d8(&unk_222b);
    PlayerSpNpcRecord_Destruct(&unk_221a);
    NookPoints_Destroy(&unk_2208);
    PlayerDailyTalkFlags_Destruct(&unk_21f0);
    func_02097420(&unk_21e4);
    FriendList_Destruct(&unk_1e60);
    PlayerWifiData_Destruct(&unk_1e10);
    _ZN13PlayerErrandsD1Ev(&unk_1d64);
    FutureLetter_Destruct(&unk_1c6c);
    func_0203ca88(&unk_1c6b);
    Catalog_Destruct(&unk_1b48);
}

void PlayerData::fillZero() { MI_CpuFill8(this, 0, 0x228c); }

void PlayerData::reset() {
    fillZero();
    _ZN8PlayerId13func_02094294Ev(&unk_2276);
    ((PlayerInventory *)&unk_1148)->clear();
    Catalog_Clear(&unk_1b48);
    PlayerErrands_Clear(&unk_1d64);
    unk_220a = 0xfff1;
    NookPoints_Reset(&unk_2208);
    unk_2212 = 0xfff1;
    unk_2253 = 0xff;
    MI_CpuFill8(&unk_2254, 0xff, 8);
    _ZN12Unk_02098d2013func_02098e30Ev(&unk_225c);
}

BOOL PlayerData::isUsed() { _ZN8PlayerId13func_02094218Ev(&unk_2276); }

void PlayerData::setupNew(u32 p1, u32 p2, u32 p3, u32 s0, u8 s1, u8 s2, u8 s3, u8 s4, u8 s5, u32 s6, u16 *s7) {
    Unk_0209865c_Bits bits;
    _ZN8PlayerId13func_020941b4EPvtaP6TownId(&unk_2276, p1, p2, p3, s0);
    setFaceType(s1);
    setHairStyle(s2);
    setHairColor(s3);
    setTan(s4);
    setFortune(0);
    PlayerData_SetStungFace(this, s5);
    ((PlayerInventory *)&unk_1148)->clear();
    func_02097ac4(&unk_1148, s6, 1);
    unk_220a = *s7;
    _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(this, &unk_2276);
    NookPoints_Init(&unk_2208);
    Catalog_Init(&unk_1b48);
    _ZN12FutureLetter17clearFutureLetterEv(&unk_1c6c);
    _ZN17MotherLetterState5clearEv(&unk_223e);
    PlayerWifiData_Create(&unk_1e10);
    FriendList_Clear(&unk_1e60);
    unk_2212 = 0x3884;
    bits.a = 0;
    bits.b = 1;
    bits.c = 1;
    setLastPlayDate(bits);
    ((Unk_02097ff4 *)this)->clearBirthday();
    unk_220c = 0x11a8;
    func_02087c80(&unk_221a);
    unk_2210 = 0xfff1;
    unk_220e = 0xfff1;
    unk_2214 = 0x11fa;
    func_020877cc(&unk_222b);
    func_02097418(&unk_21e4);
    EmotionSlots_Clear(&unk_21ec);
    ((Unk_02097ff4 *)this)->getDayUpdateDate();
    Clock_GetDate();
    MI_CpuFill8(&unk_2254, 0xff, 8);
}

void *PlayerData::getPlayerId() { return &unk_2276; }

void PlayerData::getIndex() { func_02094048(getPlayerId()); }

u32 PlayerData::getFaceType() { return unk_223c.lo; }

void PlayerData::setFaceType(u8 v) { unk_223c.lo = v; }

u32 PlayerData::getHairStyle() { return unk_223c.hi; }

void PlayerData::setHairStyle(u8 v) { unk_223c.hi = v; }

u32 PlayerData::getHairColor() { return unk_223d.lo; }

void PlayerData::setHairColor(u8 v) { unk_223d.lo = v; }

u32 PlayerData::getTan() { return unk_223d.mid; }

void PlayerData::setTan(u8 v) { unk_223d.mid = v; }

s32 PlayerData::getLastPlayDate() { return unk_2216; }

void PlayerData::setLastPlayDate(Unk_0209865c_Bits v) { unk_2216 = *(u16 *)&v; }

u32 PlayerData::getFortune() { return unk_223d.hi; }

void PlayerData::setFortune(u8 v) { unk_223d.hi = v; }

extern "C" void PlayerData_HasStungFace(void *p) { ((Unk_02097ff4 *)p)->testFlag(0); }

extern "C" void PlayerData_SetStungFace(void *p, u32 flag) {
    if (flag) {
        ((Unk_02097ff4 *)p)->setFlag(0);
    } else {
        ((Unk_02097ff4 *)p)->clearFlag(0);
    }
}

void *PlayerData::getInventory() { return &unk_1148; }

void *PlayerData::getHeldItem() { return &unk_220a; }

void PlayerData::setHeldItem(u16 *v) { unk_220a = *v; }

void *PlayerData::getShirt() { return &unk_220c; }

void PlayerData::setShirt(u16 *v) { unk_220c = *v; }

void *PlayerData::getHat() { return &unk_220e; }

void PlayerData::setHat(u16 *v) { unk_220e = *v; }

void *PlayerData::getFaceItem() { return &unk_2210; }

void PlayerData::setFaceItem(u16 *v) { unk_2210 = *v; }

void *PlayerData::getBed() { return &unk_2212; }

void PlayerData::setBed(u16 *v) { unk_2212 = *v; }

void PlayerData::getPatterns() {}

void *PlayerData::getCatalog() { return &unk_1b48; }

void *PlayerData::getNookPoints() { return &unk_2208; }

void *PlayerData::getDramaRecord() { return &unk_222b; }

void *PlayerData::getLostChildRecord() { return &unk_2230; }

void *PlayerData::getDailyTalkFlags() { return &unk_21f0; }

void *PlayerData::getSpNpcRecord() { return &unk_221a; }

void *PlayerData::getWifiUserData() { return &unk_1e10; }

void *PlayerData::getFriendList() { return &unk_1e60; }

void *PlayerData::func_02098668() { return &unk_1c6b; }

void *PlayerData::getErrands() { return &unk_1d64; }

void Unk_02097ff4::func_020984a8()
{
    if (((PlayerData *)this)->isUsed()) {
        volatile u16 v0;
        u16 v1, v2, v3, v4, v5;
        PlayerInventory *in;
        u16 *p;
        s32 i;
        s32 r;
        BOOL t;
        u32 k = 1;
        s32 z28 = 0, z2c = 0, z40 = 0, z44 = 0, z3c = 0, z34 = 0, z38 = 0, z30 = 0, z4c = 0, z48 = 0, z20 = 0;
        v0 = 0xfff1;
        ParcelErrand_Clear(_ZN18SickVillagerRecord15getParcelErrandEv(((PlayerData *)this)->getErrands()));
        in = (PlayerInventory *)((PlayerData *)this)->getInventory();
        p = in->getPocket(0);
        i = 0;
        z28 = 0;
        for (; i < 15; p++, i++) {
            BOOL ok = z20;
            u32 c = *p;
            if (c >= 0x155f && c <= 0x1560) ok = TRUE;
            if (ok && in->getPocketFlags(i) == 2) {
                v0 = 0xfff1;
                if (Item_IsFurniture(p)) {
                    v5 = 0x1560;
                    s32 a = Item_GetFurnitureIndex(p);
                    s32 b = Item_GetFurnitureIndex(&v5);
                    r = (a == b) ? k : z28;
                } else {
                    r = (*p == 0x1560) ? k : z2c;
                }
                if (r) {
                    ItemPick_FromRange(&v1, 0x1100, 0x44, z30, z30, this, k, 10, z30, k);
                    v0 = v1;
                    if (v0 == 0xfff1) {
                        Unk_020984a8_Obj o5c;
                        _ZN12ItemPickSpec3setEii(&o5c, 4, z34);
                        ItemPick_One(&v2, &o5c, z38, z38, k, k, z38);
                        v0 = v2;
                        func_02063388(&o5c);
                    }
                } else {
                    ItemPick_FromRange(&v3, 0x1144, 0x44, z3c, z3c, this, k, 10, z3c, k);
                    v0 = v3;
                    if (v0 == 0xfff1) {
                        Unk_020984a8_Obj o64;
                        _ZN12ItemPickSpec3setEii(&o64, 3, z40);
                        ItemPick_One(&v4, &o64, z44, z44, k, k, z44);
                        v0 = v4;
                        func_02063388(&o64);
                    }
                }
                in->setPocket((u16 *)&v0, i, z48);
                if (v0 != 0xfff1) {
                    func_0203c42c(((PlayerData *)this)->getCatalog(), (u16 *)&v0, z4c, k);
                }
            }
        }
    }
}

void Unk_02097ff4::resetForNewTown()
{
    if (((PlayerData *)this)->isUsed()) {
        PlayerInventory *r7 = (PlayerInventory *)((PlayerData *)this)->getInventory();
        u16 *r5 = r7->getPocket(0);
        PlayerErrandSlot_Clear(PlayerErrands_GetSlot(((PlayerData *)this)->getErrands(), 0));
        PlayerErrandSlot_Clear(PlayerErrands_GetSlot(((PlayerData *)this)->getErrands(), 1));
        HouseVisitInvite_Clear((u8 *)((PlayerData *)this)->getErrands() + 0x88);
        s32 i = 0;
        s32 z = i;
        BOOL zz = i;
        for (; i < 15; r5++, i++) {
            if (r7->getPocketFlags(i) == 2) {
                BOOL ok = zz;
                u32 c = *r5;
                if (c >= 0x11a8 && c <= 0x12a7) ok = TRUE;
                if (ok) {
                    r7->setPocket(r5, i, 1);
                    func_0203c42c(((PlayerData *)this)->getCatalog(), r5, z, 1);
                }
            }
        }
        u8 *e = (u8 *)r7->getLetter(0);
        for (i = 0; i < 10; i++) {
            if ((u8)(_ZN12Unk_0206555413func_02065578Ev(e) + 0xf9) <= 1) {
                func_02065c94(e);
            }
            e += 0xf4;
        }
    }
}

void *Unk_02097ff4::func_020983cc()
{
    return &unk_2214;
}

void Unk_02097ff4::func_020983c0(u16 *p)
{
    unk_2214 = *p;
}

s32 Unk_02097ff4::pickOtherResident()
{
    return func_020977d0(gSavePlayers, ((PlayerData *)this)->getPlayerId());
}

BOOL Unk_02097ff4::getOtherResidentName(void *q)
{
    ((PlayerData *)this)->getPlayerId();
    BOOL r = FALSE;
    if (func_02094048() != -1) {
        if (pickOtherResident()) {
            _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(), q);
            r = TRUE;
        }
    }
    return r;
}

s32 Unk_02097ff4::findUnusedSlot(s32 n)
{
    Unk_02097ff4 *p = this;
    s32 i = 0;
    s32 r = -1;
    for (; i < n; i++) {
        if (!((PlayerData *)p)->isUsed()) {
            r = i;
            break;
        }
        p = (Unk_02097ff4 *)((u8 *)p + 0x228c);
    }
    return r;
}

u8 *Unk_02097ff4::getDayUpdateDate()
{
    return unk_2204;
}

void *Unk_02097ff4::getBankAccount()
{
    return unk_21e4;
}

void *Unk_02097ff4::getEmotions()
{
    return unk_21ec;
}

void *Unk_02097ff4::getBirthday()
{
    return &unk_2218;
}

void Unk_02097ff4::setBirthday(u32 a, u32 b)
{
    unk_2219 = a;
    unk_2218 = b;
}

void Unk_02097ff4::clearBirthday()
{
    *(u16 *)&unk_2218 = 0;
}

void Unk_02097ff4::setBirthdayTalkYear(u32 v)
{
    unk_2253 = v;
}

u32 Unk_02097ff4::getBirthdayTalkYear()
{
    return unk_2253;
}

extern "C" void PlayerData_UpdateDay()
{
    u8 *g = gSaveData;
    Unk_02097ff4 *p = (Unk_02097ff4 *)PlayerData_GetCurrent();
    if (p) {
        Unk_020981f8_Pos loc;
        Clock_GetDate(&loc);
        u8 *q = p->getDayUpdateDate();
        s32 r4 = Date_DaysBetween(&loc, q);
        s32 t = (loc.b - q[1]) + (loc.c - q[2]) * 12;
        func_02097318(t);
        func_02097214(r4);
        func_02097110(r4);
        _ZN17PlayerSpNpcRecord20sendInsuranceLettersEv(((PlayerData *)p)->getSpNpcRecord());
        PlayerSpNpcRecord_SendMissingLetter(((PlayerData *)p)->getSpNpcRecord());
        if (r4) {
            p->func_020984a8();
        }
        if (loc.c != p->getBirthdayTalkYear()) {
            p->setBirthdayTalkYear(0xff);
        }
        if (r4) {
            _ZN20PlayerDailyTalkFlags8clearAllEv(((PlayerData *)p)->getDailyTalkFlags());
            ((PlayerData *)p)->setFortune(0);
            _ZN17PlayerSpNpcRecord19resetFireworksGivenEv(((PlayerData *)p)->getSpNpcRecord());
            _ZN8SaveData9clearFlagEj(gSaveData, 16);
        }
        if (r4 < 0) {
            _ZN15LostChildRecord5clearEv(((PlayerData *)p)->getLostChildRecord());
            _ZN15LostChildRecord5clearEv(g + 0x15fca);
        }
        Clock_GetDate(p->getDayUpdateDate());
    }
}

u32 Unk_02097ff4::getArbeitTalkCount()
{
    return unk_2251;
}

void Unk_02097ff4::advanceArbeitTalkCount()
{
    unk_2251 += 1;
    if (unk_2251 == 1) {
        unk_2251 = 2;
    }
    if (unk_2251 > 10) {
        unk_2251 = 10;
    }
}

u32 Unk_02097ff4::getSkyShotHits()
{
    return unk_2252;
}

void Unk_02097ff4::setSkyShotHits(u32 v)
{
    unk_2252 = v;
}

u32 Unk_02097ff4::func_02098198(u32 idx)
{
    if (idx < 8) {
        return unk_2254[idx];
    }
    return 0xff;
}

void Unk_02097ff4::func_02098188(u32 idx, u32 v)
{
    if (idx < 8) {
        unk_2254[idx] = v;
    }
}

void *Unk_02097ff4::getForeignVillagerRecord()
{
    return unk_225c;
}

void Unk_02097ff4::sendForeignVillagerLetter()
{
    void *r8 = ((PlayerData *)this)->getPlayerId();
    if (_ZN8PlayerId13func_02094218Ev()) {
        if (_ZN12Unk_02098d2013func_02098e0cEv(unk_225c)) {
            u8 *r7 = unk_2266;
            s32 a;
            u8 *l10 = (u8 *)&unk_2272;
            u8 o20[0x1c];
            u8 o3c[0x1c];
            u8 o58[0x34];
            s32 b, t;
            u8 c;
            _ZN12Unk_020e1c64C1Ev(o20);
            _ZN12Unk_020dd38cC2Ev(o3c);
            _ZN11MsgString33C1Ev(o58);
            a = 0;
            b = 10;
            t = 0;
            if (unk_2272 != 0xfff1) {
                a = 10;
                b = 5;
            }
            _ZN8PlayerId13func_020940d0EP9MsgString(r8, o20);
            MailText_SetSlot(0, o20);
            _ZN9MsgString5clearEv(o20);
            _ZN10VillagerId7getNameEj(r7, o20);
            MailText_SetSlot(1, o20);
            s32 i;
            for (i = 0; i < 6; i++) {
                s32 r = TopicWord_PickRandom(&t, i);
                _ZN9MsgString5clearEv(o58);
                c = t;
                String_LoadResolveAltText(o58, &c, r);
                MailText_SetSlot(i + 2, o58);
            }
            func_020638d0(unk_225c, o3c);
            MailText_SetSlot(8, o3c);
            if (Villager_SendLetter4("re_foreign", a, b, r8, r7, l10)) {
                _ZN12Unk_02098d2013func_02098e30Ev(unk_225c);
            }
            _ZN11MsgString33D1Ev(o58);
            _ZN12Unk_020dd38cD1Ev(o3c);
            _ZN12Unk_020e1c64D1Ev(o20);
        }
    }
}

BOOL Unk_02097ff4::testFlag(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    BOOL r;
    if (idx < 2) {
        r = TRUE;
        if (((1 << b) & unk_21fc[idx]) != 0) {
            goto end;
        }
    }
    r = FALSE;
end:
    return r;
}

void Unk_02097ff4::setFlag(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    if (idx < 2) {
        u32 *q = unk_21fc;
        u32 m = 1 << b;
        *(volatile u32 *)&q[idx] = m | *(volatile u32 *)&q[idx];
    }
}

void Unk_02097ff4::clearFlag(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    if (idx < 2) {
        u32 *q = unk_21fc;
        u32 m = ~(1 << b);
        *(volatile u32 *)&q[idx] = m & *(volatile u32 *)&q[idx];
    }
}

void PlayerInventory::clear()
{
    s32 i;
    for (i = 0; i < 10; i++) {
        func_02065c94(unk_00 + i * 0xf4);
    }
    func_02065388(unk_988);
    for (i = 0; i < 15; i++) {
        unk_9da[i] = 0xfff1;
    }
    func_02097ac4(this, 0, 1);
}

extern "C" BOOL Pocket_IsValidIndex(s32 i)
{
    if (i >= 0 && i < 15) {
        return TRUE;
    }
    return FALSE;
}

u16 *PlayerInventory::getPocket(s32 idx)
{
    u16 *r = 0;
    if (Pocket_IsValidIndex(idx) == 1) {
        r = &unk_9da[idx];
    }
    return r;
}

BOOL PlayerInventory::setPocket(u16 *p, s32 idx, u32 val)
{
    BOOL r = FALSE;
    if (Pocket_IsValidIndex(idx) == 1) {
        unk_9da[idx] = *p;
        setPocketFlags(idx, val);
        r = TRUE;
    }
    return r;
}

void PlayerInventory::setPocketFlags(s32 idx, u32 val)
{
    s32 sh = idx << 1;
    u32 *p = &unk_9fc;
    *p = *p & ~(3 << sh);
    *p = *p | (val << sh);
}

s32 PlayerInventory::findEmptyPocket()
{
    u16 *p = getPocket(0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (p[i] == 0xfff1) {
            return i;
        }
    }
    return -1;
}

u32 PlayerInventory::getPocketFlags(s32 idx)
{
    s32 sh = idx << 1;
    if (Pocket_IsValidIndex(idx) == 1) {
        return (unk_9fc >> sh) & 3;
    }
    return 0;
}

BOOL PlayerInventory::isPocketFlagsClear(s32 idx)
{
    if (getPocketFlags(idx) == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Letter_IsValidIndex(s32 i)
{
    if (i >= 0 && i < 10) {
        return TRUE;
    }
    return FALSE;
}

void *PlayerInventory::getLetter(s32 idx)
{
    u8 *r = 0;
    if (Letter_IsValidIndex(idx) == 1) {
        r = unk_00 + idx * 0xf4;
    }
    return r;
}

s32 PlayerInventory::findEmptyLetter()
{
    u8 *p = (u8 *)getLetter(0);
    s32 i;
    for (i = 0; i < 10; i++) {
        if (!_ZN12Unk_0206555413func_02065578Ev(p)) {
            return i;
        }
        p += 0xf4;
    }
    return -1;
}

void *PlayerInventory::getEmptyLetter()
{
    s32 i = findEmptyLetter();
    if (Letter_IsValidIndex(i) == 1) {
        return getLetter(i);
    }
    return 0;
}

void *PlayerInventory::getUnk988()
{
    return unk_988;
}

s32 PlayerInventory::getPocketBells()
{
    u16 *p = getPocket(0);
    s32 r = 0;
    s32 i;
    u32 z = 0;
    BOOL zz = z;
    for (i = 0; i < 15; p++, i++) {
        BOOL ok = zz;
        u32 c = *p;
        if (c >= 0x1492 && c <= 0x14fd) ok = TRUE;
        if (ok) {
            if (getPocketFlags(i) == 0) {
                r += Item_GetPrice(p);
            }
        }
    }
    return r;
}

s32 PlayerInventory::getBellsSpace(s32 n)
{
    u16 v;
    u16 *p = getPocket(0);
    v = 0x14fd;
    s32 w = Item_GetPrice(&v);
    s32 s = n * w;
    s32 i;
    for (i = 0; i < 15; p++, i++) {
        u32 c = *p;
        if (c == 0xfff1) {
            s += w;
        } else if (c >= 0x1492 && c <= 0x14fd) {
            if (getPocketFlags(i) == 0) {
                s += w - Item_GetPrice(p);
            }
        }
    }
    return s;
}

s32 PlayerInventory::getTotalBells(BOOL flag)
{
    s32 r = unk_9f8;
    if (flag) {
        r += getPocketBells();
    }
    return r;
}


#include "talk/MsgString33.h"
#include "talk/MsgString9B.h"
#include "talk/MsgString9C.h"
#include "types.h"
#include "player/PlayerData.h"
#include "item/ItemId.h"
#include "item/Letter.h"
#include "save/Pattern.h"
#include "player/PlayerData.h"
#include "player/PlayerInventory.h"
#include "item/ItemPickSpec.h"
#include "item/FutureLetter.h"
#include "item/LetterView.h"
#include "npc/VillagerId.h"
#include "player/PlayerId.h"
#include "player/PlayerSpNpcRecord.h"
#include "save/LostChildRecord.h"
#include "save/MotherLetterState.h"
#include "save/SaveData.h"
#include "talk/MsgString.h"
#define PROTO_LOCAL_Catalog_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Catalog_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_DramaRecord_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_DramaRecord_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_EmotionSlots_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_FutureLetter_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_FutureLetter_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_HouseVisitInvite_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_MotherLetterState_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_MotherLetterState_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerBank_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerBank_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerDailyTalkFlags_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerDailyTalkFlags_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerDataArray_GetRandomOther  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerData_UpdateDay  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerErrands_Clear  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerInventory_SetWallet  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerOptions_ConstructInPlayer  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerOptions_DestructInPlayer  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerSpNpcRecord_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerSpNpcRecord_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerSpNpcRecord_InitNop  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerSpNpcRecord_SendMissingLetter  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerWifiData_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerWifiData_Create  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerWifiData_Destruct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_String_LoadResolveAltText  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownId_GetNameString  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_020030d8.h"
#include "proto/main/unk_0203c23c.h"
#include "proto/main/unk_0203cbc0.h"
#include "proto/main/unk_0206269c.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02093ff0.h"
#include "proto/main/unk_02097110.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_02097d1c.h"
#include "proto/main/unk_02098e90.h"

class PlayerData;

extern "C" {
s32 Item_GetPrice(u16 *p);
void Letter_Clear(void *p);
void LetterDefaults_Init(void *p);
s32 Date_DaysBetween(void *a, void *b);
void PlayerSpNpcRecord_SendMissingLetter(void *p);
void _ZN20PlayerDailyTalkFlags8clearAllEv(void *p);
extern u8 gSaveData[];
extern u8 data_020e1e20[];
extern u8 gSavePlayers[];
void *_ZN11MsgString9CC2Ev(void *p);
void String_LoadResolveAltText(void *a, u8 *b, s32 c);
void TownId_GetNameString(void *a, void *b);
s32 Villager_SendLetter4(const char *a, s32 b, s32 c, void *d, void *e, void *f);
s32 PlayerDataArray_GetRandomOther(void *a, void *b);
void HouseVisitInvite_Clear(void *p);
void *_ZN18SickVillagerRecord15getParcelErrandEv(void *p);
BOOL Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
void _ZN12ItemPickSpec3setEii(void *a, s32 b, s32 c);
void ItemPickSpec_Destruct(void *a);
void NookPoints_Init(void *);
void Catalog_Init(void *);
void PlayerWifiData_Create(void *);
void FriendList_Clear(void *);
void PlayerSpNpcRecord_InitNop(void *);
void PlayerBank_Clear(void *);
void EmotionSlots_Clear(void *);
void MI_CpuFill8(void *, s32, u32);
void Catalog_Clear(void *);
void PlayerErrands_Clear(void *);
void NookPoints_Reset(void *);
void MotherLetterState_Destruct(void *);
void DramaRecord_Destruct(void *);
void PlayerSpNpcRecord_Destruct(void *);
void NookPoints_Destroy(void *);
void PlayerDailyTalkFlags_Destruct(void *);
void PlayerBank_Destruct(void *);
void PlayerWifiData_Destruct(void *);
void _ZN13PlayerErrandsD1Ev(void *);
void FutureLetter_Destruct(void *);
void PlayerOptions_DestructInPlayer(void *);
void Catalog_Destruct(void *);
void Catalog_Construct(void *);
void PlayerOptions_ConstructInPlayer(void *);
void FutureLetter_Construct(void *);
void _ZN13PlayerErrandsC1Ev(void *);
void PlayerWifiData_Construct(void *);
void PlayerBank_Construct(void *);
void PlayerDailyTalkFlags_Construct(void *);
void NookPoints_Create(void *);
void PlayerSpNpcRecord_Construct(void *);
void DramaRecord_Construct(void *);
void MotherLetterState_Construct(void *);
u16 *func_02097f6c(void *, u32);
s32 func_02097e98(void *, s32);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
void PocketMatches_Init(void *);
BOOL func_020030b4(void *);
void ItemPickSpec_Destruct(void *);
extern u32 sForeignLetterPresentKinds[];
void _ZN21ForeignVillagerRecordC1Ev(void *);
void _ZN21ForeignVillagerRecordD1Ev(void *);
void PlayerInventory_SetWallet(void *p, s32 a, s32 b);
BOOL _ZN21ForeignVillagerRecord5isSetEv(void *p);
void _ZN21ForeignVillagerRecord5clearEv(void *p);
void Clock_GetDate(void *out);
}










extern "C" {
extern u8 gSaveData[];
extern u8 gSavePlayers[];
}

struct Unk_020981f8_Pos { u8 a, b, c, d; };

PlayerData::PlayerData() {
    Catalog_Construct(&catalog);
    PlayerOptions_ConstructInPlayer(&options);
    FutureLetter_Construct(&futureLetter);
    _ZN13PlayerErrandsC1Ev(&errands);
    PlayerWifiData_Construct(&wifiUserData);
    FriendList_Construct(&friendList);
    PlayerBank_Construct(&bank);
    PlayerDailyTalkFlags_Construct(&dailyTalkFlags);
    NookPoints_Create(&nookPoints);
    heldItem = 0xfff1;
    shirt = 0xfff1;
    hat = 0xfff1;
    faceItem = 0xfff1;
    bed = 0xfff1;
    inventoryBackground = 0xfff1;
    PlayerSpNpcRecord_Construct(&spNpcRecord);
    DramaRecord_Construct(&dramaRecord);
    LostChildRecord_Construct(&lostChildRecord);
    MotherLetterState_Construct(&motherLetterState);
    _ZN21ForeignVillagerRecordC1Ev(&foreignVillagerRecord);
    new (&id) PlayerId();
}

PlayerData::~PlayerData() {
    new (&id) PlayerId();
    _ZN21ForeignVillagerRecordD1Ev(&foreignVillagerRecord);
    MotherLetterState_Destruct(&motherLetterState);
    LostChildRecord_Destruct(&lostChildRecord);
    DramaRecord_Destruct(&dramaRecord);
    PlayerSpNpcRecord_Destruct(&spNpcRecord);
    NookPoints_Destroy(&nookPoints);
    PlayerDailyTalkFlags_Destruct(&dailyTalkFlags);
    PlayerBank_Destruct(&bank);
    FriendList_Destruct(&friendList);
    PlayerWifiData_Destruct(&wifiUserData);
    _ZN13PlayerErrandsD1Ev(&errands);
    FutureLetter_Destruct(&futureLetter);
    PlayerOptions_DestructInPlayer(&options);
    Catalog_Destruct(&catalog);
}

void PlayerData::fillZero() { MI_CpuFill8(this, 0, 0x228c); }

void PlayerData::reset() {
    fillZero();
    ((PlayerId *)(&id))->clear();
    ((PlayerInventory *)&inventory)->clear();
    Catalog_Clear(&catalog);
    PlayerErrands_Clear(&errands);
    heldItem = 0xfff1;
    NookPoints_Reset(&nookPoints);
    bed = 0xfff1;
    birthdayTalkYear = 0xff;
    MI_CpuFill8(&birthdayNoticeDays, 0xff, 8);
    _ZN21ForeignVillagerRecord5clearEv(&foreignVillagerRecord);
}

BOOL PlayerData::isUsed() { return ((PlayerId *)(&id))->isValid(); }

void PlayerData::setupNew(void *name, u32 p2, u32 p3, TownId *town, u8 s1, u8 s2, u8 s3, u8 s4, u8 s5, u32 s6, u16 *s7) {
    Unk_0209865c_Bits bits;
    ((PlayerId *)(&id))->set(name, p2, p3, town);
    setFaceType(s1);
    setHairStyle(s2);
    setHairColor(s3);
    setTan(s4);
    setFortune(0);
    PlayerData_SetStungFace(this, s5);
    ((PlayerInventory *)&inventory)->clear();
    PlayerInventory_SetWallet(&inventory, s6, 1);
    heldItem = *s7;
    ((PlayerPatterns *)(this))->initDefaultPatterns((Unk_020942c8 *)(&id));
    NookPoints_Init(&nookPoints);
    Catalog_Init(&catalog);
    ((FutureLetter *)(&futureLetter))->clearFutureLetter();
    ((MotherLetterState *)(&motherLetterState))->clear();
    PlayerWifiData_Create(&wifiUserData);
    FriendList_Clear(&friendList);
    bed = 0x3884;
    bits.a = 0;
    bits.b = 1;
    bits.c = 1;
    setLastPlayDate(bits);
    clearBirthday();
    shirt = 0x11a8;
    PlayerSpNpcRecord_InitNop(&spNpcRecord);
    faceItem = 0xfff1;
    hat = 0xfff1;
    inventoryBackground = 0x11fa;
    DramaRecord_Clear(&dramaRecord);
    PlayerBank_Clear(&bank);
    EmotionSlots_Clear(&emotions);
    Clock_GetDate(getDayUpdateDate());
    MI_CpuFill8(&birthdayNoticeDays, 0xff, 8);
}

PlayerId *PlayerData::getPlayerId() { return (PlayerId *)&id; }

s32 PlayerData::getIndex() { return PlayerId_FindResidentIndex(getPlayerId()); }

u32 PlayerData::getFaceType() { return faceHair.lo; }

void PlayerData::setFaceType(u8 v) { faceHair.lo = v; }

u32 PlayerData::getHairStyle() { return faceHair.hi; }

void PlayerData::setHairStyle(u8 v) { faceHair.hi = v; }

u32 PlayerData::getHairColor() { return hairColorTanFortune.lo; }

void PlayerData::setHairColor(u8 v) { hairColorTanFortune.lo = v; }

u32 PlayerData::getTan() { return hairColorTanFortune.mid; }

void PlayerData::setTan(u8 v) { hairColorTanFortune.mid = v; }

s32 PlayerData::getLastPlayDate() { return lastPlayDate; }

void PlayerData::setLastPlayDate(Unk_0209865c_Bits v) { lastPlayDate = *(u16 *)&v; }

u32 PlayerData::getFortune() { return hairColorTanFortune.hi; }

void PlayerData::setFortune(u8 v) { hairColorTanFortune.hi = v; }

extern "C" BOOL PlayerData_HasStungFace(void *p) { return ((PlayerData *)p)->testFlag(0); }

extern "C" void PlayerData_SetStungFace(void *p, u32 flag) {
    if (flag) {
        ((PlayerData *)p)->setFlag(0);
    } else {
        ((PlayerData *)p)->clearFlag(0);
    }
}

void *PlayerData::getInventory() { return &inventory; }

u16 *PlayerData::getHeldItem() { return &heldItem; }

void PlayerData::setHeldItem(u16 *v) { heldItem = *v; }

u16 *PlayerData::getShirt() { return &shirt; }

void PlayerData::setShirt(u16 *v) { shirt = *v; }

u16 *PlayerData::getHat() { return &hat; }

void PlayerData::setHat(u16 *v) { hat = *v; }

u16 *PlayerData::getFaceItem() { return &faceItem; }

void PlayerData::setFaceItem(u16 *v) { faceItem = *v; }

u16 *PlayerData::getBed() { return &bed; }

void PlayerData::setBed(u16 *v) { bed = *v; }

void *PlayerData::getPatterns() { return this; }

void *PlayerData::getCatalog() { return &catalog; }

void *PlayerData::getNookPoints() { return &nookPoints; }

void *PlayerData::getDramaRecord() { return &dramaRecord; }

void *PlayerData::getLostChildRecord() { return &lostChildRecord; }

void *PlayerData::getDailyTalkFlags() { return &dailyTalkFlags; }

void *PlayerData::getSpNpcRecord() { return &spNpcRecord; }

void *PlayerData::getWifiUserData() { return &wifiUserData; }

void *PlayerData::getFriendList() { return &friendList; }

void *PlayerData::getOptions() { return &options; }

void *PlayerData::getErrands() { return &errands; }

void PlayerData::rerollFlaggedPocketItems()
{
    if (isUsed()) {
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
        ParcelErrand_Clear(_ZN18SickVillagerRecord15getParcelErrandEv(getErrands()));
        in = (PlayerInventory *)getInventory();
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
                        ItemPickSpec o5c;
                        o5c.set(4, z34);
                        ItemPick_One(&v2, &o5c, z38, z38, k, k, z38);
                        v0 = v2;
                    }
                } else {
                    ItemPick_FromRange(&v3, 0x1144, 0x44, z3c, z3c, this, k, 10, z3c, k);
                    v0 = v3;
                    if (v0 == 0xfff1) {
                        ItemPickSpec o64;
                        o64.set(3, z40);
                        ItemPick_One(&v4, &o64, z44, z44, k, k, z44);
                        v0 = v4;
                    }
                }
                in->setPocket((u16 *)&v0, i, z48);
                if (v0 != 0xfff1) {
                    Catalog_SetItem(getCatalog(), (u16 *)&v0, z4c, k);
                }
            }
        }
    }
}

void PlayerData::resetForNewTown()
{
    if (isUsed()) {
        PlayerInventory *r7 = (PlayerInventory *)getInventory();
        u16 *r5 = r7->getPocket(0);
        PlayerErrandSlot_Clear(PlayerErrands_GetSlot(getErrands(), 0));
        PlayerErrandSlot_Clear(PlayerErrands_GetSlot(getErrands(), 1));
        HouseVisitInvite_Clear((u8 *)getErrands() + 0x88);
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
                    Catalog_SetItem(getCatalog(), r5, z, 1);
                }
            }
        }
        u8 *e = (u8 *)r7->getLetter(0);
        for (i = 0; i < 10; i++) {
            if ((u8)(((LetterView *)(e))->getState() + 0xf9) <= 1) {
                Letter_Clear(e);
            }
            e += 0xf4;
        }
    }
}

void *PlayerData::getInventoryBackground()
{
    return &inventoryBackground;
}

void PlayerData::setInventoryBackground(u16 *p)
{
    inventoryBackground = *p;
}

s32 PlayerData::pickOtherResident()
{
    return PlayerDataArray_GetRandomOther(gSavePlayers, getPlayerId());
}

BOOL PlayerData::getOtherResidentName(void *q)
{
    void *id = getPlayerId();
    BOOL r = FALSE;
    if (PlayerId_FindResidentIndex(id) != -1) {
        s32 o;
        if ((o = pickOtherResident()) != 0) {
            ((PlayerId *)(((PlayerData *)((void *)o))->getPlayerId()))->getNameString((MsgString *)(q));
            r = TRUE;
        }
    }
    return r;
}

s32 PlayerData::findUnusedSlot(s32 n)
{
    PlayerData *p = this;
    s32 i = 0;
    s32 r = -1;
    for (; i < n; i++) {
        if (!((PlayerData *)p)->isUsed()) {
            r = i;
            break;
        }
        p = (PlayerData *)((u8 *)p + 0x228c);
    }
    return r;
}

u8 *PlayerData::getDayUpdateDate()
{
    return dayUpdateDate;
}

PlayerBank *PlayerData::getBankAccount()
{
    return (PlayerBank *)bank;
}

u8 *PlayerData::getEmotions()
{
    return emotions;
}

u8 *PlayerData::getBirthday()
{
    return birthday;
}

void PlayerData::setBirthday(u32 a, u32 b)
{
    birthday[1] = a;
    birthday[0] = b;
}

void PlayerData::clearBirthday()
{
    *(u16 *)birthday = 0;
}

void PlayerData::setBirthdayTalkYear(u32 v)
{
    birthdayTalkYear = v;
}

u32 PlayerData::getBirthdayTalkYear()
{
    return birthdayTalkYear;
}

extern "C" void PlayerData_UpdateDay()
{
    u8 *g = gSaveData;
    PlayerData *p = PlayerData_GetCurrent();
    if (p) {
        Unk_020981f8_Pos loc;
        Clock_GetDate(&loc);
        u8 *q = p->getDayUpdateDate();
        s32 r4 = Date_DaysBetween(&loc, q);
        s32 t = (loc.b - q[1]) + (loc.c - q[2]) * 12;
        PlayerBank_PayInterest(t);
        PlayerBank_SendMilestoneLetter(r4);
        PlayerBank_SendDonationLetter(r4);
        ((PlayerSpNpcRecord *)(((PlayerData *)p)->getSpNpcRecord()))->sendInsuranceLetters();
        PlayerSpNpcRecord_SendMissingLetter(((PlayerData *)p)->getSpNpcRecord());
        if (r4) {
            p->rerollFlaggedPocketItems();
        }
        if (loc.c != p->getBirthdayTalkYear()) {
            p->setBirthdayTalkYear(0xff);
        }
        if (r4) {
            _ZN20PlayerDailyTalkFlags8clearAllEv(((PlayerData *)p)->getDailyTalkFlags());
            ((PlayerData *)p)->setFortune(0);
            ((PlayerSpNpcRecord *)(((PlayerData *)p)->getSpNpcRecord()))->resetFireworksGiven();
            ((SaveData *)(gSaveData))->clearFlag(16);
        }
        if (r4 < 0) {
            ((LostChildRecord *)(((PlayerData *)p)->getLostChildRecord()))->clear();
            ((LostChildRecord *)(g + 0x15fca))->clear();
        }
        Clock_GetDate(p->getDayUpdateDate());
    }
}

u32 PlayerData::getArbeitTalkCount()
{
    return arbeitTalkCount;
}

void PlayerData::advanceArbeitTalkCount()
{
    arbeitTalkCount += 1;
    if (arbeitTalkCount == 1) {
        arbeitTalkCount = 2;
    }
    if (arbeitTalkCount > 10) {
        arbeitTalkCount = 10;
    }
}

u32 PlayerData::getSkyShotHits()
{
    return skyShotHits;
}

void PlayerData::setSkyShotHits(u32 v)
{
    skyShotHits = v;
}

u32 PlayerData::getBirthdayNoticeDay(u32 idx)
{
    if (idx < 8) {
        return birthdayNoticeDays[idx];
    }
    return 0xff;
}

void PlayerData::setBirthdayNoticeDay(u32 idx, u32 v)
{
    if (idx < 8) {
        birthdayNoticeDays[idx] = v;
    }
}

void *PlayerData::getForeignVillagerRecord()
{
    return foreignVillagerRecord;
}

void PlayerData::sendForeignVillagerLetter()
{
    void *r8 = getPlayerId();
    if (((PlayerId *)(r8))->isValid()) {
        if (_ZN21ForeignVillagerRecord5isSetEv(foreignVillagerRecord)) {
            u8 *r7 = foreignVillagerRecord + 0xa;
            s32 a;
            u8 *l10 = foreignVillagerRecord + 0x16;
            u8 o20[HOST_SIZED(0x1c, MsgString9B) / 1] HOST_ALIGN8;
            u8 o3c[HOST_SIZED(0x1c, MsgString9C) / 1] HOST_ALIGN8;
            u8 o58[HOST_SIZED(0x34, MsgString33) / 1] HOST_ALIGN8;
            s32 b, t;
            u8 c;
            new (o20) MsgString9B();
            _ZN11MsgString9CC2Ev(o3c);
            new (o58) MsgString33();
            a = 0;
            b = 10;
            t = 0;
            if (*(u16 *)(foreignVillagerRecord + 0x16) != 0xfff1) {
                a = 10;
                b = 5;
            }
            ((PlayerId *)(r8))->getNameString((MsgString *)(o20));
            MailText_SetSlot(0, o20);
            ((MsgString *)(o20))->clear();
            ((VillagerId *)(r7))->getName((MsgString *)o20);
            MailText_SetSlot(1, o20);
            s32 i;
            for (i = 0; i < 6; i++) {
                s32 r = TopicWord_PickRandom(&t, i);
                ((MsgString *)(o58))->clear();
                c = t;
                String_LoadResolveAltText(o58, &c, r);
                MailText_SetSlot(i + 2, o58);
            }
            TownId_GetNameString(foreignVillagerRecord, o3c);
            MailText_SetSlot(8, o3c);
            if (Villager_SendLetter4("re_foreign", a, b, r8, r7, l10)) {
                _ZN21ForeignVillagerRecord5clearEv(foreignVillagerRecord);
            }
            ((MsgString33 *)(o58))->MsgString33::~MsgString33();
            ((MsgString9C *)(o3c))->MsgString9C::~MsgString9C();
            ((MsgString9B *)(o20))->MsgString9B::~MsgString9B();
        }
    }
}

BOOL PlayerData::testFlag(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    BOOL r;
    if (idx < 2) {
        r = TRUE;
        if (((1 << b) & flags[idx]) != 0) {
            goto end;
        }
    }
    r = FALSE;
end:
    return r;
}

void PlayerData::setFlag(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    if (idx < 2) {
        u32 *q = flags;
        u32 m = 1 << b;
        *(volatile u32 *)&q[idx] = m | *(volatile u32 *)&q[idx];
    }
}

void PlayerData::clearFlag(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    if (idx < 2) {
        u32 *q = flags;
        u32 m = ~(1 << b);
        *(volatile u32 *)&q[idx] = m & *(volatile u32 *)&q[idx];
    }
}

void PlayerInventory::clear()
{
    s32 i;
    for (i = 0; i < 10; i++) {
        Letter_Clear(letters + i * 0xf4);
    }
    LetterDefaults_Init(letterDefaults);
    for (i = 0; i < 15; i++) {
        pockets[i] = 0xfff1;
    }
    PlayerInventory_SetWallet(this, 0, 1);
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
        r = &pockets[idx];
    }
    return r;
}

BOOL PlayerInventory::setPocket(u16 *p, s32 idx, u32 val)
{
    BOOL r = FALSE;
    if (Pocket_IsValidIndex(idx) == 1) {
        pockets[idx] = *p;
        setPocketFlags(idx, val);
        r = TRUE;
    }
    return r;
}

void PlayerInventory::setPocketFlags(s32 idx, u32 val)
{
    s32 sh = idx << 1;
    u32 *p = &pocketFlags;
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
        return (pocketFlags >> sh) & 3;
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
        r = letters + idx * 0xf4;
    }
    return r;
}

s32 PlayerInventory::findEmptyLetter()
{
    u8 *p = (u8 *)getLetter(0);
    s32 i;
    for (i = 0; i < 10; i++) {
        if (!((LetterView *)(p))->getState()) {
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
    return letterDefaults;
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
    s32 r = wallet;
    if (flag) {
        r += getPocketBells();
    }
    return r;
}


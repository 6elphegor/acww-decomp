#include "types.h"
#include "player/Unk_02097ff4.h"
#include "item/ItemId.h"
#include "item/Letter.h"
#include "save/Pattern.h"
#include "player/PlayerData.h"

class PlayerInventory;
class Unk_02097ff4;
class PlayerData;

extern "C" {
s32 Item_GetPrice(u16 *p);
BOOL _ZN10LetterView8getStateEv(void *p);
void Letter_Clear(void *p);
void LetterDefaults_Init(void *p);
s32 Date_DaysBetween(void *a, void *b);
void PlayerBank_PayInterest(s32 v);
void PlayerBank_SendMilestoneLetter(s32 v);
void PlayerBank_SendDonationLetter(s32 v);
void _ZN17PlayerSpNpcRecord20sendInsuranceLettersEv(void *p);
void PlayerSpNpcRecord_SendMissingLetter(void *p);
void _ZN20PlayerDailyTalkFlags8clearAllEv(void *p);
void _ZN17PlayerSpNpcRecord19resetFireworksGivenEv(void *p);
void _ZN15LostChildRecord5clearEv(void *p);
void _ZN8SaveData9clearFlagEj(void *p, s32 v);
extern u8 gSaveData[];
extern u8 data_020e1e20[];
extern u8 gSavePlayers[];
void *_ZN11MsgString9CC2Ev(void *p);
void _ZN11MsgString9CD1Ev(void *p);
void *_ZN11MsgString33C1Ev(void *p);
void _ZN11MsgString33D1Ev(void *p);
void MailText_SetSlot(s32 a, void *b);
void _ZN9MsgString5clearEv(void *p);
void _ZN10VillagerId7getNameEj(void *a, void *b);
s32 TopicWord_PickRandom(s32 *p, s32 i);
void String_LoadResolveAltText(void *a, u8 *b, s32 c);
void TownId_GetNameString(void *a, void *b);
s32 Villager_SendLetter4(const char *a, s32 b, s32 c, void *d, void *e, void *f);
s32 PlayerDataArray_GetRandomOther(void *a, void *b);
void *PlayerErrands_GetSlot(void *a, s32 b);
void PlayerErrandSlot_Clear(void *p);
void HouseVisitInvite_Clear(void *p);
void Catalog_SetItem(void *a, void *b, s32 c, s32 d);
void *_ZN18SickVillagerRecord15getParcelErrandEv(void *p);
void ParcelErrand_Clear(void *p);
BOOL Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
void ItemPick_FromRange(void *a, s32 b, s32 c, s32 d, s32 e, void *f, s32 g, s32 h, s32 i, s32 j);
void _ZN12ItemPickSpec3setEii(void *a, s32 b, s32 c);
void ItemPickSpec_Destruct(void *a);
void _ZN8PlayerId3setEPvtaP6TownId(void *, u32, u32, u32, u32);
void _ZN8PlayerId5clearEv(void *);
void _ZN8PlayerIdC1Ev(void *);
void _ZN8PlayerIdC1EPv(void *);
void _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(void *, void *);
void NookPoints_Init(void *);
void Catalog_Init(void *);
void _ZN12FutureLetter17clearFutureLetterEv(void *);
void _ZN17MotherLetterState5clearEv(void *);
void PlayerWifiData_Create(void *);
void FriendList_Clear(void *);
void PlayerSpNpcRecord_InitNop(void *);
void DramaRecord_Clear(void *);
void PlayerBank_Clear(void *);
void EmotionSlots_Clear(void *);
void MI_CpuFill8(void *, s32, u32);
void Catalog_Clear(void *);
void PlayerErrands_Clear(void *);
void NookPoints_Reset(void *);
void func_02096e20(void *);
void LostChildRecord_Destruct(void *);
void DramaRecord_Destruct(void *);
void PlayerSpNpcRecord_Destruct(void *);
void NookPoints_Destroy(void *);
void PlayerDailyTalkFlags_Destruct(void *);
void PlayerBank_Destruct(void *);
void FriendList_Destruct(void *);
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
void FriendList_Construct(void *);
void PlayerBank_Construct(void *);
void PlayerDailyTalkFlags_Construct(void *);
void NookPoints_Create(void *);
void PlayerSpNpcRecord_Construct(void *);
void DramaRecord_Construct(void *);
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
void TownId_Assign(void *, void *);
BOOL TownId_IsValid(void *);
void TownId_Clear(void *);
void TownId_Destruct(void *);
void TownId_Construct(void *);
s32 Random_GlobalBelow(s32);
void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);
void ItemPickSpec_Destruct(void *);
extern u32 sForeignLetterPresentKinds[];
void _ZN21ForeignVillagerRecordC1Ev(void *);
void _ZN21ForeignVillagerRecordD1Ev(void *);
void *PlayerData_GetCurrent();
void PlayerInventory_SetWallet(void *p, s32 a, s32 b);
void *_ZN11MsgString9BC1Ev(void *p);
void _ZN11MsgString9BD1Ev(void *p);
void _ZN8PlayerId13getNameStringEP9MsgString(void *a, void *b);
BOOL _ZN21ForeignVillagerRecord5isSetEv(void *p);
void _ZN21ForeignVillagerRecord5clearEv(void *p);
s32 PlayerId_FindResidentIndex(...);
BOOL _ZN8PlayerId7isValidEv(...);
void *Clock_GetDate(...);
void *_ZN10PlayerData11getPlayerIdEv(...);
}
class PlayerInventory {
public:
    u8 letters[0x988];
    u8 letterDefaults[0x52];
    u16 pockets[15];
    u32 wallet;
    u32 pocketFlags;

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
    func_02096e24(&motherLetterState);
    _ZN21ForeignVillagerRecordC1Ev(&foreignVillagerRecord);
    _ZN8PlayerIdC1EPv(&id);
}

PlayerData::~PlayerData() {
    _ZN8PlayerIdC1Ev(&id);
    _ZN21ForeignVillagerRecordD1Ev(&foreignVillagerRecord);
    func_02096e20(&motherLetterState);
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
    _ZN8PlayerId5clearEv(&id);
    ((PlayerInventory *)&inventory)->clear();
    Catalog_Clear(&catalog);
    PlayerErrands_Clear(&errands);
    heldItem = 0xfff1;
    NookPoints_Reset(&nookPoints);
    bed = 0xfff1;
    birthdayTalkYear = 0xff;
    MI_CpuFill8(&unk_2254, 0xff, 8);
    _ZN21ForeignVillagerRecord5clearEv(&foreignVillagerRecord);
}

BOOL PlayerData::isUsed() { _ZN8PlayerId7isValidEv(&id); }

void PlayerData::setupNew(u32 p1, u32 p2, u32 p3, u32 s0, u8 s1, u8 s2, u8 s3, u8 s4, u8 s5, u32 s6, u16 *s7) {
    Unk_0209865c_Bits bits;
    _ZN8PlayerId3setEPvtaP6TownId(&id, p1, p2, p3, s0);
    setFaceType(s1);
    setHairStyle(s2);
    setHairColor(s3);
    setTan(s4);
    setFortune(0);
    PlayerData_SetStungFace(this, s5);
    ((PlayerInventory *)&inventory)->clear();
    PlayerInventory_SetWallet(&inventory, s6, 1);
    heldItem = *s7;
    _ZN14PlayerPatterns19initDefaultPatternsEP12Unk_020942c8(this, &id);
    NookPoints_Init(&nookPoints);
    Catalog_Init(&catalog);
    _ZN12FutureLetter17clearFutureLetterEv(&futureLetter);
    _ZN17MotherLetterState5clearEv(&motherLetterState);
    PlayerWifiData_Create(&wifiUserData);
    FriendList_Clear(&friendList);
    bed = 0x3884;
    bits.a = 0;
    bits.b = 1;
    bits.c = 1;
    setLastPlayDate(bits);
    ((Unk_02097ff4 *)this)->clearBirthday();
    shirt = 0x11a8;
    PlayerSpNpcRecord_InitNop(&spNpcRecord);
    faceItem = 0xfff1;
    hat = 0xfff1;
    inventoryBackground = 0x11fa;
    DramaRecord_Clear(&dramaRecord);
    PlayerBank_Clear(&bank);
    EmotionSlots_Clear(&emotions);
    ((Unk_02097ff4 *)this)->getDayUpdateDate();
    Clock_GetDate();
    MI_CpuFill8(&unk_2254, 0xff, 8);
}

PlayerId *PlayerData::getPlayerId() { return (PlayerId *)&id; }

void PlayerData::getIndex() { PlayerId_FindResidentIndex(getPlayerId()); }

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

extern "C" void PlayerData_HasStungFace(void *p) { ((Unk_02097ff4 *)p)->testFlag(0); }

extern "C" void PlayerData_SetStungFace(void *p, u32 flag) {
    if (flag) {
        ((Unk_02097ff4 *)p)->setFlag(0);
    } else {
        ((Unk_02097ff4 *)p)->clearFlag(0);
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

void PlayerData::getPatterns() {}

void *PlayerData::getCatalog() { return &catalog; }

void *PlayerData::getNookPoints() { return &nookPoints; }

void *PlayerData::getDramaRecord() { return &dramaRecord; }

void *PlayerData::getLostChildRecord() { return &lostChildRecord; }

void *PlayerData::getDailyTalkFlags() { return &dailyTalkFlags; }

void *PlayerData::getSpNpcRecord() { return &spNpcRecord; }

void *PlayerData::getWifiUserData() { return &wifiUserData; }

void *PlayerData::getFriendList() { return &friendList; }

void *PlayerData::func_02098668() { return &options; }

void *PlayerData::getErrands() { return &errands; }

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
                        ItemPickSpec_Destruct(&o5c);
                    }
                } else {
                    ItemPick_FromRange(&v3, 0x1144, 0x44, z3c, z3c, this, k, 10, z3c, k);
                    v0 = v3;
                    if (v0 == 0xfff1) {
                        Unk_020984a8_Obj o64;
                        _ZN12ItemPickSpec3setEii(&o64, 3, z40);
                        ItemPick_One(&v4, &o64, z44, z44, k, k, z44);
                        v0 = v4;
                        ItemPickSpec_Destruct(&o64);
                    }
                }
                in->setPocket((u16 *)&v0, i, z48);
                if (v0 != 0xfff1) {
                    Catalog_SetItem(((PlayerData *)this)->getCatalog(), (u16 *)&v0, z4c, k);
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
                    Catalog_SetItem(((PlayerData *)this)->getCatalog(), r5, z, 1);
                }
            }
        }
        u8 *e = (u8 *)r7->getLetter(0);
        for (i = 0; i < 10; i++) {
            if ((u8)(_ZN10LetterView8getStateEv(e) + 0xf9) <= 1) {
                Letter_Clear(e);
            }
            e += 0xf4;
        }
    }
}

void *Unk_02097ff4::func_020983cc()
{
    return &inventoryBackground;
}

void Unk_02097ff4::func_020983c0(u16 *p)
{
    inventoryBackground = *p;
}

s32 Unk_02097ff4::pickOtherResident()
{
    return PlayerDataArray_GetRandomOther(gSavePlayers, ((PlayerData *)this)->getPlayerId());
}

BOOL Unk_02097ff4::getOtherResidentName(void *q)
{
    ((PlayerData *)this)->getPlayerId();
    BOOL r = FALSE;
    if (PlayerId_FindResidentIndex() != -1) {
        if (pickOtherResident()) {
            _ZN8PlayerId13getNameStringEP9MsgString(_ZN10PlayerData11getPlayerIdEv(), q);
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
    return dayUpdateDate;
}

void *Unk_02097ff4::getBankAccount()
{
    return bank;
}

void *Unk_02097ff4::getEmotions()
{
    return emotions;
}

void *Unk_02097ff4::getBirthday()
{
    return &birthday;
}

void Unk_02097ff4::setBirthday(u32 a, u32 b)
{
    unk_2219 = a;
    birthday = b;
}

void Unk_02097ff4::clearBirthday()
{
    *(u16 *)&birthday = 0;
}

void Unk_02097ff4::setBirthdayTalkYear(u32 v)
{
    birthdayTalkYear = v;
}

u32 Unk_02097ff4::getBirthdayTalkYear()
{
    return birthdayTalkYear;
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
        PlayerBank_PayInterest(t);
        PlayerBank_SendMilestoneLetter(r4);
        PlayerBank_SendDonationLetter(r4);
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
    return arbeitTalkCount;
}

void Unk_02097ff4::advanceArbeitTalkCount()
{
    arbeitTalkCount += 1;
    if (arbeitTalkCount == 1) {
        arbeitTalkCount = 2;
    }
    if (arbeitTalkCount > 10) {
        arbeitTalkCount = 10;
    }
}

u32 Unk_02097ff4::getSkyShotHits()
{
    return skyShotHits;
}

void Unk_02097ff4::setSkyShotHits(u32 v)
{
    skyShotHits = v;
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
    return foreignVillagerRecord;
}

void Unk_02097ff4::sendForeignVillagerLetter()
{
    void *r8 = ((PlayerData *)this)->getPlayerId();
    if (_ZN8PlayerId7isValidEv()) {
        if (_ZN21ForeignVillagerRecord5isSetEv(foreignVillagerRecord)) {
            u8 *r7 = unk_2266;
            s32 a;
            u8 *l10 = (u8 *)&unk_2272;
            u8 o20[0x1c];
            u8 o3c[0x1c];
            u8 o58[0x34];
            s32 b, t;
            u8 c;
            _ZN11MsgString9BC1Ev(o20);
            _ZN11MsgString9CC2Ev(o3c);
            _ZN11MsgString33C1Ev(o58);
            a = 0;
            b = 10;
            t = 0;
            if (unk_2272 != 0xfff1) {
                a = 10;
                b = 5;
            }
            _ZN8PlayerId13getNameStringEP9MsgString(r8, o20);
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
            TownId_GetNameString(foreignVillagerRecord, o3c);
            MailText_SetSlot(8, o3c);
            if (Villager_SendLetter4("re_foreign", a, b, r8, r7, l10)) {
                _ZN21ForeignVillagerRecord5clearEv(foreignVillagerRecord);
            }
            _ZN11MsgString33D1Ev(o58);
            _ZN11MsgString9CD1Ev(o3c);
            _ZN11MsgString9BD1Ev(o20);
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
        if (((1 << b) & flags[idx]) != 0) {
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
        u32 *q = flags;
        u32 m = 1 << b;
        *(volatile u32 *)&q[idx] = m | *(volatile u32 *)&q[idx];
    }
}

void Unk_02097ff4::clearFlag(u32 bit)
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
        if (!_ZN10LetterView8getStateEv(p)) {
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


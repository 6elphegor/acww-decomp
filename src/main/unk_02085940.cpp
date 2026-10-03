#include "types.h"
#pragma opt_loop_invariants off
#define LB(o) (((u8 *)&l)[o])
extern "C" {
void _ZN8PlayerId13func_02094294Ev(void *p);
void Clock_GetDate(u8 *p);
void _ZN8PlayerIdC1Ev(void *p);
void _ZN8PlayerIdC1EPv(void *p);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
void _ZN11MsgString25C1Ev(void *p);
void _ZN11MsgString25D1Ev(void *p);
void _ZN8ItemNameC1EPt(void *p, u16 *v);
void _ZN8ItemNameD1Ev(void *p);
void _ZN8SaveData9clearFlagEj(void *, u32);
s32 _ZN8SaveData8testFlagEj(void *, s32);
void String_FormatFixedPoint(void *a, s32 b, s32 c);
void String_FormatNumber(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(void *p);
void Bbs_PostMsgToday(u32 a, u32 b);
void MailText_SetSlot(s32 i, void *x);
void MailText_SetSlotMonth(s32 i, s32 x);
void MailText_SetSlotDayOrdinal(s32 i, s32 x);
void _ZN10VillagerId7getNameEj(void *a, void *b);
s32 _ZN10VillagerId7isValidEv(void *p);
s32 _ZN8PlayerId13func_02094218Ev(void *p);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *a, void *b);
s32 func_02063b8c(u32 n);
void DateTime_Make(void *a, void *b, u32 c, u32 d, u32 e);
void Clock_GetDateTime(void *p);
void DateTime_SubDays(void *p, s32 v);
s32 DateTime_Compare(void *a, void *b, s32 c);
s32 DateTime_DiffDays(void *a, void *b);
s32 Event_GetDaysSinceStart(s32 a);
void *PlayerData_GetResident(void *, s32);
s32 _ZN10PlayerData6isUsedEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
s32 _ZN17PlayerSpNpcRecord24hasEnteredFishingTourneyEv(void *p);
s32 _ZN17PlayerSpNpcRecord16hasEnteredBugOffEv(void *p);
u16 *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN17PlayerSpNpcRecord15hasFestivalGiftEv(void *p);
void _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(void *p);
void Letter_ComposeFromMail(void *obj, void *b, void *fmt, void *s, void *s2, void *p);
void _ZN12Unk_0206555410setPresentEtj(void *obj, u32 v, s32 w);
s32 LetterDelivery_PutInAddresseeMailbox(void *obj);
void _ZN6LetterC1Ev(void *p);
void _ZN6LetterD1Ev(void *p);
s32 memcmp(void *a, void *b, u32 n);
s32 _ZN8PlayerId13func_020941e8EPS_(void *a, void *b);
s32 Clock_GetWeekday();
s32 func_020e77cc(u32 v, u32 lo, u32 hi);
s32 NookShop_GetLevel(void *p);
void _ZN14RoostGuestRoll4rollEv(void *);
void *MI_CpuFill8(void *d, s32 v, u32 n);
void MI_CpuCopy8(void *, void *, u32);
s32 Date_GetWeekday(s32 a, s32 b, s32 c);
s32 MenuCtrl_IsClockMovedForward();
s32 MenuCtrl_IsClockMovedBack();
s32 func_02063b74(s32 a);
void *TownBlockMap_Get();
void FieldUnit_FromBlockUnit(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
void FieldPos_SnapToUnitCenter(void *a, void *b);
void _ZN17VisitorSpawnFlags16rollGulliverSpotEv(void *);
extern u8 gSaveData[];
void func_02063990(void *p);
s32 func_020639a0(void *p);
s32 func_020639b8(void *p);
s32 FieldPos_ToUnit(s32 *x, s32 *y, s32 v);
s32 TownMap_IsUnitWalkable();
u16 *BlockMap_GetItemPtr(void *map, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
s32 Item_IsMarker(u16 *p);
s32 Item_IsTreeStage0(u16 *p);
s32 _ZN7Pattern4fillEj(void *p, s32 v);
void *_ZN7Pattern7getInfoEv(void *p);
void *_ZN7PatternD1Ev(void *p);
void *_ZN7PatternC1Ev(void *p);
s32 _ZN11PatternInfo10setPaletteEj(void *p, s32 v);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData18getLostChildRecordEv();
s32 _ZN12Unk_02097ff49clearFlagEj(void *p, s32 v);
extern void *gSceneBlockMap;
extern u8 data_021ed31a[];
extern u32 sKatieSpotRows[];
extern u8 data_021c47c4_dummy[];
void *func_020639bc(void *);
s32 _ZN11CommManager8isOnlineEv(void *);
BOOL _ZN12Unk_02097ff48testFlagEj(void *, s32);
void *_ZN10PlayerData14getDramaRecordEv(void *);
s32 Date_GetNthWeekdayDay(u8 a, u32 b, u32 c, u32 d);
void DateTime_AddDays(void *, s32);
s32 _ZN10MuseumData10isCompleteEv(void *);
BOOL LetterDelivery_QueueOutgoing(void *a, s32 b);
void _ZN12ItemPickSpec3setEii(void *, s32, s32);
void func_02063388(void *);
void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);
s32 LetterPaper_PickRandom(s32, s32);
s32 func_02087e14(void *);
s32 func_02087e50(void *);
s32 func_02087e0c(void *);
s32 func_02087e30(void *);
extern void *gCommManager;
extern const u8 data_020cf288[];
extern const u8 data_020cf328[];
extern u8 data_021ed0a0[];
extern u8 data_020e0c54[];
extern u8 data_020e0c4c[];
extern u8 data_020e0c44[];
extern s32 gGfxMainOnTop;
}
#include "types.h"

struct Unk_02085810_Rec {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

struct Unk_02085810_Base {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 unk_15;
};

extern u8 gSaveData[];

extern u32 sContestResultBbsFiles[4];

struct Unk_02085df0_Rec {
    u32 unk_00[7];
    Unk_02085df0_Rec() { _ZN12Unk_020e1c64C1Ev(this); }
    ~Unk_02085df0_Rec() { _ZN12Unk_020e1c64D1Ev(this); }
};

struct Unk_02085df0_Num {
    u32 unk_00[11];
    Unk_02085df0_Num() { _ZN11MsgString25C1Ev(this); }
    ~Unk_02085df0_Num() { _ZN11MsgString25D1Ev(this); }
};

struct Unk_02085df0_Str {
    u32 unk_00[9];
    Unk_02085df0_Str(u16 *v) { _ZN8ItemNameC1EPt(this, v); }
    ~Unk_02085df0_Str() { _ZN8ItemNameD1Ev(this); }
};

extern u8 gSavePlayers[];

extern u8 data_020e0c48[];

extern u8 data_020e0c50[];

extern void *sContestResultMailFiles[4];

struct Unk_020859b4_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_020859b4_Loc {
    /* 0x00 */ u8 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u8 unk_06[3];
    /* 0x0c */ u32 unk_0c[2];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
};

struct Unk_020859b4_Buf {
    u32 unk_00[0x3d];
    Unk_020859b4_Buf() { _ZN6LetterC1Ev(this); }
    ~Unk_020859b4_Buf() { _ZN6LetterD1Ev(this); }
};

class ContestRecord {
public:
    u32 getSize();
    void setSize(s32 v);
    void setVotedVillager(Unk_02085810_Rec *src);
    Unk_02085810_Rec *getVotedVillager();
    void clearVotedVillager();
    Unk_02085810_Rec *getHolderVillager();
    void setHolderVillager(Unk_02085810_Rec *src);
    void setHolderPlayer(Unk_02085810_Base *src);
    void setKind(u32 v);
    void resetToday();
    void clear();
    void postResultNotice();
    void sendResultLetters();
    void func_020858ac();
    ContestRecord *destruct();
    ContestRecord *construct();

    /* 0x00 */ Unk_02085810_Base unk_00;
    /* 0x16 */ Unk_02085810_Rec unk_16;
    /* 0x22 */ Unk_02085810_Rec unk_22;
    /* 0x2e */ u16 unk_2e;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u8 unk_34;
    /* 0x35 */ u8 unk_35;
    /* 0x36 */ u8 unk_36;
    /* 0x37 */ u8 unk_37;
};

class RoostGuestRoll {
public:
    BOOL hasLateGuest();
    u32 getAfternoonGuest();
    u32 getNoonGuest();
    BOOL hasMorningGuest();
    void roll();
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 3;
    u8 unk_00_2 : 3;
    u8 unk_00_3 : 1;
};

extern u8 data_021ed104[];

struct Unk_02086340_T {
    u32 w0, w1;
};

struct Unk_020868cc_Vec3 {
    s32 x, y, z;
};

struct Unk_020868e4_Ctx {
    s32 unk_00;
    s32 v[2];
};

// ---- bitfield byte objects ----
struct Unk_0208620c {
    u8 a : 1;
    u8 b : 3;
    u8 c : 3;
    u8 d : 1;
    void func_0208620c();
};

struct GulliverQuest {
    u8 cnt : 3;
    u8 flag : 1;
    void start();
    BOOL isStarted();
    void addPart();
    s32 getPartCount();
};

extern "C" void GulliverQuest_Clear(void *p);

// ---- 0x18-byte record ----
struct Unk_02086328_B8 {
    u8 b[8];
};

struct ReddLastSale {
    u16 unk_00;
    Unk_02086328_B8 unk_02;
    u16 unk_0a;
    Unk_02086328_B8 unk_0c;
    s8 unk_14;
    u8 unk_15;
    u16 unk_16;
    void copyItemFrom(const ReddLastSale *o);
    void setItem(const ReddLastSale *o);
    void setBuyer(const ReddLastSale *o);
    void clear();
    ReddLastSale();
    ~ReddLastSale();
};

// ---- generator object ----
struct TurnipMarket {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05, unk_06, unk_07;
    u16 unk_08;
    u8 unk_0a[14];
    u8 unk_18;
    void setPurchaseDate(void *src);
    void checkTurnipExpiry();
    void setWeekDate(void *src);
    void updateDay(s32 d);
    void spoilOnReset();
    u16 getPrice();
    void generateWeek(s32 flag);
    s32 rollPeakPrice();
    void generateSmallSpike();
    u8 calcHighPrice();
    u8 calcMidPrice();
    u8 calcLowPrice();
    void fillDecreasing(s32 i, s32 n);
    u8 calcPrice(s32 k, s32 z);
    void init();
    void clear();
};

// ---- position pair ----
struct VisitorPos {
    s32 x, z;
    void getPos(Unk_020868cc_Vec3 *out) const;
    void setPos(s32 a, s32 b);
    BOOL pickRandomPos();
    BOOL pickFreeInAcre(Unk_020868cc_Vec3 *out, s32 *pos, void *ctx);
    s32 countFreeInAcre(s32 *pos, void *ctx);
};

// ---- tail ----
struct Unk_02086af0 {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 c : 2;
    u8 d : 2;
    u8 e : 2;
    void getGulliverSpawn(void *v, u16 *out, Unk_020868cc_Vec3 *p);
};

struct Unk_02086af0_Off {
    s32 x, z;
};

extern const Unk_02086af0_Off sGulliverSpotOffsets[];

extern const s16 sGulliverRepairedAngles[];

extern GulliverQuest data_021e58a6;

struct Unk_02086ec4_Vec3 {
    s32 x, y, z;
};

// 0x02086e60 record (also used by the free functions below)
class Unk_02086e60;

// ---- 0x02086b7c: random-flags byte
class VisitorSpawnFlags {
public:
    void setVisitorSpawned();
    void clearVisitorSpawned();
    BOOL isVisitorSpawned();
    void rollGulliverSpot();
    void clear();
    void func_02086bfc();
    void func_02086c00();

    u8 unk_00_0 : 1;
    u8 unk_00_1 : 1;
    u8 unk_00_2 : 2;
    u8 unk_00_4 : 2;
};

// ---- 0x02086c04: 12-byte position record with flag byte at +8
class PeteFallState {
public:
    BOOL pickFallPos(s32 px, s32 flip);
    s16 getFacing();
    void setVisitorActive();
    void clearVisitorActive();
    BOOL isVisitorActive();
    void unmarkFallPos();
    void markFallPos();
    BOOL hasFallPos();
    void getPos(Unk_02086ec4_Vec3 *out);
    void setPos(Unk_02086ec4_Vec3 *v);
    void clear();
    void func_02086ee8();
    void func_02086eec();

    s32 unk_00;
    s32 unk_04;
    u8 unk_08_0 : 1;
    u8 unk_08_1 : 1;
    u8 unk_08_2 : 2;
};

struct Unk_02086c04_Map {
    u32 pad[3];
    s32 w, h;
};

struct Unk_02086c04_Pair {
    s32 a, b;
};

// ---- 0x02086ef0: s16 + byte
class TownTravelState {
public:
    s16 getAngle();
    void setAngle(s32 v);
    u8 getMode();
    void setMode(u32 v);
    void clearMode();
    void func_02086f0c();
    void func_02086f10();

    s16 unk_00;
    u8 unk_02;
};

// ---- 0x02086f14: three bytes
class ResettiVisitFlag {
public:
    void set(u32 v);
    BOOL isSet();
    void clear();
    void func_02086f30();
    void func_02086f34();
    BOOL isPastClosingTime();
    void setClosingTimeToday();

    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

struct Unk_02086f38_Buf {
    s32 a, b;
};

// ---- 0x02086f84: 2 words + byte
class Unk_02086f84 {
public:
    void func_02086f80();
    void clearClosingTime();
    void func_02086f8c();
    void func_02086f90();
    void clearFollowing();
    void setFollowing();
    BOOL isFollowing();
    void getPos(Unk_02086ec4_Vec3 *out);
    void setPos(Unk_02086ec4_Vec3 *v);
    void pickKatiePos();

    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
};

// ---- 0x02087210
class KatieVisitState {
public:
    void clear();
    void func_0208721c();
    void func_02087220();

    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
};

// ---- 0x02087224: big singleton (gSaveData)
class BlancaFaceRecord {
public:
    u16 func_02087224();
    void func_02087230(u32 v);
    BOOL isBlancaDue();
    u8 getConcept();
    void setConcept(u32 v);
    u8 getState();
    void setState(u32 v);
    void *getPattern();
    void resetPattern();
    void init();
    void reset();
    BlancaFaceRecord *destruct();
    BlancaFaceRecord *construct();

    u32 unk_00[0x228 / 4];
    u16 unk_228;
    u8 unk_22a;
    u8 unk_22b;
};

// ---- 0x020872fc: flag byte at +0xa
class LostChildRecord {
public:
    void clearEscorting();
    void setEscorting();
    BOOL isEscorting();
    void setKaitlinRole(u8 v);
    BOOL isKaitlinRole();
    void setDaysLeft(u8 v);
    u32 getDaysLeft();
    void setTownId();
    void getTownId();
    void clear();

    u32 unk_00[2];
    u16 unk_08;
    u8 unk_0a_0 : 4;
    u8 unk_0a_4 : 1;
    u8 unk_0a_5 : 1;
};

struct Unk_020874e8_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

struct Unk_02087650_E {
    u8 a;
    u8 b;
    u8 pad[2];
    u32 c;
};

struct Unk_02087650_S {
    union {
        u32 z[2];
        struct {
            u8 pad[3];
            u8 c, b, a;
            u8 pad2[2];
        };
    };
};

class PlayerDailyTalkFlags {
public:
    void clear(u32 i);
    void set(u32 i);
    BOOL test(u32 i);
    void setDate(u8 *src);
    void clearAll();
    void stampToday();

    u8 unk_00[3];
    u32 unk_04[2];
};

class PlayerSpNpcRecord {
public:
    void sendInsuranceLetters();
    BOOL sendInsuranceLetter(s32 idx, u16 *v);
    void addInsuranceClaim();
    u32 getInsuranceClaims();
    void clearFestivalGift();
    void setFestivalGift();
    u32 hasFestivalGift();
    void resetAcornCount();
    void resetFireworksGiven();
    void addFireworksGiven();
    u32 getFireworksGiven();
    void setEnteredBugOff(s32 v);
    u32 hasEnteredBugOff();
    void setEnteredFishingTourney(s32 v);
    u32 hasEnteredFishingTourney();
    void addStyleScore(u32 v);
    u32 getStyleScore();
    void addResetCount();
    u32 getResetCount();
    void advanceAcornPrizeStep();
    u32 getAcornPrizeStep();
    void addAcornsDelivered(s32 v);
    u32 getAcornsDelivered();
    void addHaircutCount(u32 v);
    u32 getHaircutCount();
    void setCafeVisits(u32 v);
    u32 getCafeVisits();
    void setSableTalkCount(u32 v);
    u32 getSableTalkCount();
    void stampArbeitDate();
    u8 *getArbeitDate();

    u8 unk_00[8];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    union {
        u8 unk_10;
        struct {
            u8 unk_10_0 : 1;
            u8 unk_10_1 : 1;
            u8 unk_10_2 : 4;
            u8 unk_10_6 : 1;
            u8 unk_10_7 : 1;
        };
    };
};

extern "C" BOOL func_02087650(s32 lim, s32 b, s32 c, Unk_020874e8_Bits *out);

extern "C" u8 *func_0208779c(u8 *p);

extern "C" void func_020877c0(void *a, void *b);

enum Unk_020874e8_K { UNK_020874E8_K = 0x15db4 };

struct Unk_02087a20_L {
    u8 a;
    u8 b;
    u16 h;
    u8 c[3];
    u8 pad;
};

extern "C" BOOL Cell_HitTest(void *p, s32 a, s32 b, s32 c, s32 d);

// extern declarations
extern "C" {
extern char data_020e0c58[];
extern char data_020e0c64[];
extern char data_020e0c70[];
extern char data_020e0c7c[];
extern char data_020e0c88[];
extern char data_020e0c98[];
s32 VillagerId_Clear(Unk_02085810_Rec *p);
void _ZN8PlayerId13func_02094294Ev(void *p);
void Clock_GetDate(u8 *p);
void VillagerId_Destruct(Unk_02085810_Rec *p);
void VillagerId_Construct(Unk_02085810_Rec *p);
void _ZN8PlayerIdC1Ev(void *p);
void _ZN8PlayerIdC1EPv(void *p);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
void _ZN11MsgString25C1Ev(void *p);
void _ZN11MsgString25D1Ev(void *p);
void _ZN8ItemNameC1EPt(void *p, u16 *v);
void _ZN8ItemNameD1Ev(void *p);
void _ZN8SaveData9clearFlagEj(void *, u32);
s32 _ZN8SaveData8testFlagEj(void *, s32);
void String_FormatFixedPoint(void *a, s32 b, s32 c);
void String_FormatNumber(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(void *p);
void Bbs_PostMsgToday(u32 a, u32 b);
void MailText_SetSlot(s32 i, void *x);
void MailText_SetSlotMonth(s32 i, s32 x);
void MailText_SetSlotDayOrdinal(s32 i, s32 x);
void _ZN10VillagerId7getNameEj(void *a, void *b);
s32 _ZN10VillagerId7isValidEv(void *p);
s32 _ZN8PlayerId13func_02094218Ev(void *p);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *a, void *b);
s32 func_02063b8c(u32 n);
void DateTime_Make(void *a, void *b, u32 c, u32 d, u32 e);
void Clock_GetDateTime(void *p);
void DateTime_SubDays(void *p, s32 v);
s32 DateTime_Compare(void *a, void *b, s32 c);
s32 DateTime_DiffDays(void *a, void *b);
s32 Event_GetDaysSinceStart(s32 a);
void *PlayerData_GetResident(void *, s32);
s32 _ZN10PlayerData6isUsedEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
s32 _ZN17PlayerSpNpcRecord24hasEnteredFishingTourneyEv(void *p);
s32 _ZN17PlayerSpNpcRecord16hasEnteredBugOffEv(void *p);
u16 *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN17PlayerSpNpcRecord15hasFestivalGiftEv(void *p);
void _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(void *p);
void Letter_ComposeFromMail(void *obj, void *b, void *fmt, void *s, void *s2, void *p);
void _ZN12Unk_0206555410setPresentEtj(void *obj, u32 v, s32 w);
s32 LetterDelivery_PutInAddresseeMailbox(void *obj);
void _ZN6LetterC1Ev(void *p);
void _ZN6LetterD1Ev(void *p);
s32 memcmp(void *a, void *b, u32 n);
s32 _ZN8PlayerId13func_020941e8EPS_(void *a, void *b);
s32 Clock_GetWeekday();
s32 func_020e77cc(u32 v, u32 lo, u32 hi);
s32 NookShop_GetLevel(void *p);
void _ZN14RoostGuestRoll4rollEv(void *);
void *MI_CpuFill8(void *d, s32 v, u32 n);
void MI_CpuCopy8(void *, void *, u32);
s32 Date_GetWeekday(s32 a, s32 b, s32 c);
s32 MenuCtrl_IsClockMovedForward();
s32 MenuCtrl_IsClockMovedBack();
s32 func_02063b74(s32 a);
void *TownBlockMap_Get();
void FieldUnit_FromBlockUnit(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
s32 FieldPos_FromUnitCenter(Unk_020868cc_Vec3 *out, s32 x, s32 z);
void FieldPos_SnapToUnitCenter(void *a, void *b);
void _ZN17VisitorSpawnFlags16rollGulliverSpotEv(void *);
extern u8 gSaveData[];
void func_02063990(void *p);
s32 func_020639a0(void *p);
s32 func_020639b8(void *p);
s32 FieldPos_ToUnit(s32 *x, s32 *y, s32 v);
s32 TownMap_IsUnitWalkable();
u16 *BlockMap_GetItemPtr(void *map, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
s32 Item_IsMarker(u16 *p);
s32 Item_IsTreeStage0(u16 *p);
s32 _ZN7Pattern4fillEj(void *p, s32 v);
void *_ZN7Pattern7getInfoEv(void *p);
void *_ZN7PatternD1Ev(void *p);
void *_ZN7PatternC1Ev(void *p);
s32 _ZN11PatternInfo10setPaletteEj(void *p, s32 v);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData18getLostChildRecordEv();
s32 _ZN12Unk_02097ff49clearFlagEj(void *p, s32 v);
extern void *gSceneBlockMap;
extern u8 data_021ed31a[];
extern u32 sKatieSpotRows[];
extern u8 data_021c47c4_dummy[];
void *func_020639bc(void *);
s32 _ZN11CommManager8isOnlineEv(void *);
BOOL _ZN12Unk_02097ff48testFlagEj(void *, s32);
void *_ZN10PlayerData14getDramaRecordEv(void *);
s32 Date_GetNthWeekdayDay(u8 a, u32 b, u32 c, u32 d);
void DateTime_AddDays(void *, s32);
s32 _ZN10MuseumData10isCompleteEv(void *);
BOOL LetterDelivery_QueueOutgoing(void *a, s32 b);
void _ZN12ItemPickSpec3setEii(void *, s32, s32);
void func_02063388(void *);
void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);
s32 LetterPaper_PickRandom(s32, s32);
s32 func_02087e14(void *);
s32 func_02087e50(void *);
s32 func_02087e0c(void *);
s32 func_02087e30(void *);
extern void *gCommManager;
extern const u8 data_020cf288[];
extern const u8 data_020cf328[];
extern u8 data_021ed0a0[];
extern u8 data_020e0c54[];
extern u8 data_020e0c4c[];
extern u8 data_020e0c44[];
extern s32 gGfxMainOnTop;
}

// own functions
extern "C" {
void RoostGuestRoll_Init(void *p);
void func_02086230();
void func_02086234();
void func_02086290();
void func_02086294();
void ReddLastSale_GetBuyer();
void func_020868c4();
void func_020868c8();
void func_02086ae8();
void func_02086aec();
void GulliverQuest_Init(void *p);
void GulliverQuest_Clear(void *p);
void VisitorPos_Clear(void *p);
void ReddLastSale_Clear(ReddLastSale *p);
s32 Field_PickRandomInLine(s32 *out, BOOL (*cb)(s32, s32, void *), s32 arg, s32 cur, s32 limit, void *m, u16 *buf, s32 n);
BOOL Field_IsClearSpotXY(s32 x, s32 y, void *map);
BOOL Field_IsClearSpotYX(s32 x, s32 y, void *map);
BOOL Field_IsClearSpot(s32 x, s32 y, void *map);
void LostChild_LoadFromTown();
void LostChild_SaveToTown();
BOOL LostChild_IsKaitlinDue();
BOOL LostChild_IsKatieDue();
void LostChild_AdvanceDays(s32 n);
void *LostChildRecord_Destruct(void *p);
void *LostChildRecord_Construct(void *p);
BOOL func_020874e8(s32 a, s32 b, s32 c, Unk_020874e8_Bits *d);
BOOL func_02087650(s32 lim, s32 b, s32 c, Unk_020874e8_Bits *out);
void func_020877a0(s32 a, void *b);
void func_020877cc(void *a);
void func_020877d8();
void func_020877dc();
void PlayerDailyTalkFlags_Destruct();
void PlayerDailyTalkFlags_Construct();
void PlayerSpNpcRecord_SendMissingLetter();
void PlayerSpNpcRecord_GetInsuranceDate();
void func_02087c80();
void PlayerSpNpcRecord_Destruct();
void PlayerSpNpcRecord_Construct();
BOOL Oam_UseBufferA(s32 t);
s32 Oam_AllocAffine(u8 *self, s32 *cnt, s32 *v);
s32 Cell_HitTestList(void *p, s32 n, s32 c, s32 d, s32 e, s32 f);
BOOL Cell_HitTest(void *p, s32 a, s32 b, s32 c, s32 d);
u8 *func_0208779c(u8 *p);
void func_020877c0(void *a, void *b);
}

namespace Ns_02086204 {
extern "C" {
u32 _ZN8PlayerId13func_02094294Ev(void *p);
s32 func_02063b8c(s32 a);
}
}

namespace Ns_02086b7c {
extern "C" {
void *MI_CpuCopy8(void *dst, const void *src, u32 n);
s32 func_02063b8c(s32 n);
void FieldPos_FromUnitCenter(Unk_02086ec4_Vec3 *out, s32 x, s32 y);
s32 FieldUnit_FromBlockUnit(s32 *x, s32 *y, s32 a, s32 b, s32 c, s32 d);
s32 func_020e77cc(s32 a, s32 b, s32 c);
}
}

namespace Ns_020874d8 {
extern "C" {
void _ZN12Unk_02097ff49clearFlagEj(void *, s32);
void MI_CpuCopy8(void *, void *, s32);
void MI_CpuFill8(void *, s32, s32);
void Clock_GetDate(void *);
s32 func_02063b8c(s32);
u32 _ZN10PlayerData11getPlayerIdEv(void *);
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}
}

// ---- 0x0208709c: walkability test
static inline BOOL Unk_0208709c_Chk(u16 *p) {
    BOOL f9 = TRUE;
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE;
    BOOL f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (f1 == 0) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (f2 == 0) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (f3 == 0) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (f4 == 0) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (f5 == 0) {
        if (v != 0x69) f6 = FALSE;
    }
    if (f6 == 0) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (f7 == 0) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (f8 == 0) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

static inline u16 *Unk_0208709c_Cell(void *map, s32 x, s32 y) {
    s32 hx = x >> 4;
    s32 hy = y >> 4;
    s32 lx = x - (hx << 4);
    s32 ly = y - (hy << 4);
    return BlockMap_GetItemPtr(map, hx, hy, lx, ly, 0);
}

static inline BOOL Unk_0208709c_In(u16 *p) {
    BOOL f = FALSE;
    if (*p >= 0x5000 && *p <= 0x5021) f = TRUE;
    return f;
}

extern "C" BOOL Cell_HitTest(void *p, s32 a, s32 b, s32 c, s32 d) {
    s32 r7 = func_02087e14(p) - c;
    if (r7 > a) return FALSE;
    if (r7 + (c * 2 + func_02087e50(p)) < a) return FALSE;
    s32 t = func_02087e0c(p) - d;
    if (t > b) return FALSE;
    if (t + (d * 2 + func_02087e30(p)) >= b) return TRUE;
    return FALSE;
}

extern "C" s32 Cell_HitTestList(void *p, s32 n, s32 c, s32 d, s32 e, s32 f) {
    s32 i;
    for (i = 0; i < n; p = (u8 *)p + 8, i++) {
        if (Cell_HitTest(p, c, d, e, f)) {
            return i;
        }
    }
    return -1;
}

extern "C" s32 Oam_AllocAffine(u8 *self, s32 *cnt, s32 *v) {
    volatile s32 *vv = v;
    s32 a = (u32)(vv[0] << 12) >> 16;
    s32 b = (u32)(vv[1] << 12) >> 16;
    s32 c = (u32)(vv[2] << 12) >> 16;
    s32 d = (u32)(vv[3] << 12) >> 16;
    s32 i, n;
    i = 0;
    n = *cnt;
    for (; i < n; i += 4) {
        u16 *e = (u16 *)(self + i * 8);
        if (a == e[3] && b == e[7] && c == e[11] && d == e[15]) {
            return i >> 2;
        }
    }
    if (n < 128) {
        u16 *e = (u16 *)(self + n * 8);
        e[3] = v[0] >> 4;
        e[7] = v[1] >> 4;
        e[11] = v[2] >> 4;
        e[15] = v[3] >> 4;
        s32 r = *cnt >> 2;
        *cnt += 4;
        return r;
    }
    return -1;
}

extern "C" BOOL Oam_UseBufferA(s32 t) {
    switch (t) {
    case 0:
        return TRUE;
    case 1:
        return FALSE;
    case 2:
        if (gGfxMainOnTop == 1) return TRUE;
        return FALSE;
    case 3:
        if (gGfxMainOnTop == 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" void PlayerSpNpcRecord_Construct() {}

extern "C" void PlayerSpNpcRecord_Destruct() {}

extern "C" void func_02087c80() {}

u8 *PlayerSpNpcRecord::getArbeitDate() { return unk_00 + 4; }

void PlayerSpNpcRecord::stampArbeitDate() {
    u8 tmp[3];
    Ns_020874d8::Clock_GetDate(tmp);
    unk_00[6] = tmp[2];
    unk_00[5] = tmp[1];
    unk_00[4] = tmp[0];
}

u32 PlayerSpNpcRecord::getSableTalkCount() { return unk_08; }

void PlayerSpNpcRecord::setSableTalkCount(u32 v) { unk_08 = v; }

u32 PlayerSpNpcRecord::getCafeVisits() { return unk_09; }

void PlayerSpNpcRecord::setCafeVisits(u32 v) {
    unk_09 = v;
    if (unk_09 > 15) unk_09 = 15;
}

u32 PlayerSpNpcRecord::getHaircutCount() { return unk_0a; }

void PlayerSpNpcRecord::addHaircutCount(u32 v) {
    unk_0a = unk_0a + v;
    if (unk_0a > 16) unk_0a = 16;
}

u32 PlayerSpNpcRecord::getAcornsDelivered() { return unk_0b; }

void PlayerSpNpcRecord::addAcornsDelivered(s32 v) {
    s32 t = unk_0b;
    t = t + v;
    if (t > 255) t = 255;
    unk_0b = t;
}

u32 PlayerSpNpcRecord::getAcornPrizeStep() { return unk_0c; }

void PlayerSpNpcRecord::advanceAcornPrizeStep() {
    unk_0c = unk_0c + 1;
    if (unk_0c > 12) unk_0c = 12;
}

u32 PlayerSpNpcRecord::getResetCount() { return unk_0d; }

void PlayerSpNpcRecord::addResetCount() {
    unk_0d = unk_0d + 1;
    if (unk_0d > 6) unk_0d = 6;
}

u32 PlayerSpNpcRecord::getStyleScore() { return unk_0e; }

void PlayerSpNpcRecord::addStyleScore(u32 v) {
    unk_0e = unk_0e + v;
    if (unk_0e > 100) unk_0e = 100;
}

u32 PlayerSpNpcRecord::hasEnteredFishingTourney() { return unk_10_0; }

void PlayerSpNpcRecord::setEnteredFishingTourney(s32 v) { unk_10 = (unk_10 & ~1) | (v & 1); }

u32 PlayerSpNpcRecord::hasEnteredBugOff() { return unk_10_1; }

void PlayerSpNpcRecord::setEnteredBugOff(s32 v) { unk_10 = (unk_10 & ~2) | ((v & 1) << 1); }

u32 PlayerSpNpcRecord::getFireworksGiven() { return unk_10_2; }

void PlayerSpNpcRecord::addFireworksGiven() {
    unk_10_2 = unk_10_2 + 1;
    if (unk_10_2 > 10) {
        unk_10_2 = 10;
    }
}

void PlayerSpNpcRecord::resetFireworksGiven() { unk_10_2 = 0; }

void PlayerSpNpcRecord::resetAcornCount() { unk_0b = 0; unk_0c = 0; }

u32 PlayerSpNpcRecord::hasFestivalGift() { return unk_10_6; }

void PlayerSpNpcRecord::setFestivalGift() { unk_10_6 = 1; }

void PlayerSpNpcRecord::clearFestivalGift() { unk_10_6 = 0; }

extern "C" void PlayerSpNpcRecord_GetInsuranceDate() {}

void PlayerDailyTalkFlags::stampToday() {
    u8 tmp[3];
    Ns_020874d8::Clock_GetDate(tmp);
    unk_00[2] = tmp[2];
    unk_00[1] = tmp[1];
    unk_00[0] = tmp[0];
}

u32 PlayerSpNpcRecord::getInsuranceClaims() { return unk_0f; }

void PlayerSpNpcRecord::addInsuranceClaim() {
    unk_0f = unk_0f + 1;
    if (unk_0f >= 0xff) unk_0f = 0xff;
}

extern "C" void PlayerSpNpcRecord_SendMissingLetter() {
    u8 big[0xf4];
    Unk_02087a20_L l;
    u8 obj[8];
    void *r4 = PlayerData_GetCurrent();
    if (r4 != NULL && _ZN12Unk_02097ff48testFlagEj(r4, 0x36)) {
        _ZN6LetterC1Ev(big);
        l.a = 0;
        l.a = Ns_020874d8::func_02063b8c(3);
        Ns_020874d8::Clock_GetDate(l.c);
        l.b = LetterPaper_PickRandom(3, l.c[1]);
        Ns_020874d8::Letter_ComposeFromMail(big, &l, "sp_npc_missing", data_020e0c44, &l.b, Ns_020874d8::_ZN10PlayerData11getPlayerIdEv(r4));
        _ZN12ItemPickSpec3setEii(obj, 0, 0x1b);
        ItemPick_One(&l.h, obj, 0, 0, 1, 1, 0);
        _ZN12Unk_0206555410setPresentEtj(big, l.h, 1);
        func_02063388(obj);
        if (LetterDelivery_QueueOutgoing(big, 0)) {
            Ns_020874d8::_ZN12Unk_02097ff49clearFlagEj(r4, 0x36);
        }
        _ZN6LetterD1Ev(big);
    }
}

BOOL PlayerSpNpcRecord::sendInsuranceLetter(s32 idx, u16 *v) {
    u32 big[0x3d];
    u8 c;
    BOOL r;
    _ZN6LetterC1Ev(big);
    c = 0;
    void *o = PlayerData_GetCurrent();
    c = idx;
    Ns_020874d8::Letter_ComposeFromMail(big, &c, "sp_npc_insurance", data_020e0c4c, data_020e0c54, Ns_020874d8::_ZN10PlayerData11getPlayerIdEv(o));
    _ZN12Unk_0206555410setPresentEtj(big, *v, 1);
    if (LetterDelivery_QueueOutgoing(big, 0)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    _ZN6LetterD1Ev(big);
    return r;
}

void PlayerSpNpcRecord::sendInsuranceLetters() {
    u32 bufA[11];
    u32 bufB[8];
    u16 h[3];
    s32 r6;
    _ZN11MsgString25C1Ev(bufA);
    void *obj = PlayerData_GetCurrent();
    _ZN12Unk_020e1c64C1Ev(bufB);
    PlayerSpNpcRecord *r7 = (PlayerSpNpcRecord *)_ZN10PlayerData14getSpNpcRecordEv(obj);
    if (_ZN12Unk_02097ff48testFlagEj(obj, 0x17)) {
        if (_ZN12Unk_02097ff48testFlagEj(obj, 0x19)) {
            h[0] = 0x1492;
            s32 r = Ns_020874d8::func_02063b8c(2);
            if (sendInsuranceLetter(r, &h[0])) {
                Ns_020874d8::_ZN12Unk_02097ff49clearFlagEj(obj, 0x19);
            }
        }
        if (_ZN12Unk_02097ff48testFlagEj(obj, 0x1a)) {
            h[1] = 0x1492;
            s32 r = Ns_020874d8::func_02063b8c(2);
            if (sendInsuranceLetter(r + 2, &h[1])) {
                Ns_020874d8::_ZN12Unk_02097ff49clearFlagEj(obj, 0x1a);
            }
        }
    }
    if (_ZN12Unk_02097ff48testFlagEj(obj, 0x18)) {
        if (r7->getInsuranceClaims() >= 1) {
            String_FormatNumber(bufA, r7->getInsuranceClaims(), 10, 0, 0, 0);
            MailText_SetSlot(3, bufA);
            r6 = Ns_020874d8::func_02063b8c(2) + 4;
            u32 cnt = r7->getInsuranceClaims();
            if (cnt >= 10) {
                cnt = 10;
                r6 = 6;
            }
            String_FormatNumber(bufA, cnt * 100, 10, 0, 0, 0);
            MailText_SetSlot(4, bufA);
            h[2] = cnt + 0x1491;
            if (sendInsuranceLetter(r6, &h[2])) {
                unk_0f = 0;
            }
        }
    }
    _ZN12Unk_020e1c64D1Ev(bufB);
    _ZN11MsgString25D1Ev(bufA);
}

extern "C" void PlayerDailyTalkFlags_Construct() {}

extern "C" void PlayerDailyTalkFlags_Destruct() {}

void PlayerDailyTalkFlags::clearAll() {
    Ns_020874d8::MI_CpuFill8(unk_04, 0, 8);
}

void PlayerDailyTalkFlags::setDate(u8 *src) {
    unk_00[2] = src[2];
    unk_00[1] = src[1];
    unk_00[0] = src[0];
}

BOOL PlayerDailyTalkFlags::test(u32 i) {
    BOOL r;
    s32 w = i >> 5;
    u32 b = i & 0x1f;
    if (w < 2) {
        r = TRUE;
        if (((r << b) & unk_04[w]) != 0) {
            goto out;
        }
    }
    r = FALSE;
out:
    return r;
}

void PlayerDailyTalkFlags::set(u32 i) {
    u8 tmp[3];
    s32 w = i >> 5;
    u32 b = i & 0x1f;
    if (w < 2) {
        unk_04[w] = *(volatile u32 *)&unk_04[w] | (1 << b);
    }
    Ns_020874d8::Clock_GetDate(tmp);
    setDate(tmp);
}

void PlayerDailyTalkFlags::clear(u32 i) {
    s32 w = i >> 5;
    u32 b = i & 0x1f;
    if (w < 2) {
        unk_04[w] = ~(1 << b) & *(volatile u32 *)&unk_04[w];
    }
}

extern "C" void func_020877dc() {}

extern "C" void func_020877d8() {}

extern "C" void func_020877cc(void *a) {
    Ns_020874d8::MI_CpuFill8(a, 0xff, 1);
}

extern "C" void func_020877c0(void *a, void *b) {
    Ns_020874d8::MI_CpuCopy8(a, b, 1);
}

extern "C" void func_020877a0(s32 a, void *b) {
    Ns_020874d8::Clock_GetDate((void *)(a + 1));
    Ns_020874d8::MI_CpuCopy8(b, (void *)a, 1);
}

extern "C" u8 *func_0208779c(u8 *p) {
    return p + 1;
}

extern "C" BOOL func_02087650(s32 lim, s32 b, s32 c, Unk_020874e8_Bits *out) {
    Unk_02087650_S s1, s2;
    s32 r4, r7, r6;
    u32 x4, x8, xc;
    s32 j;
    s32 v;
    Unk_02087650_E *t1;
    const u8 *t2;
    u32 *t3;
    s1.z[0] = 0;
    s1.z[1] = 0;
    s1.a = lim;
    s1.b = b;
    s1.c = c;
    r4 = lim - 1;
    goto test4;
loop4:
    if (r4 >= 0) {
        r7 = 0;
        goto test7;
    loop7:
        r6 = 0;
        t1 = (Unk_02087650_E *)(data_020cf288 + r7 * 0x28);
        t2 = data_020cf328 + r7 * 0x8c;
        goto test6;
    loop6:
        Unk_02087650_E *e;
        e = &t1[r6];
        x8 = t1[r6].a;
        if (x8 != 0) {
            x4 = e->b;
            xc = e->c;
        retry:
            s32 r;
            r = Date_GetNthWeekdayDay(r4, x8, xc, x4);
            if (r == -1) {
                x4 = (u8)(x4 - 1);
                goto retry;
            }
            s2.z[0] = 0;
            s2.z[1] = 0;
            s2.a = r4;
            s2.b = x8;
            s2.c = r;
            j = 0;
            t3 = (u32 *)(t2 + r6 * 0x1c);
            for (; j < 7; j++) {
                v = t3[j];
                if (v == 0) continue;
                s32 t = DateTime_DiffDays(&s1, &s2);
                if (t == 0) {
                    t = -DateTime_DiffDays(&s2, &s1);
                }
                if (t + v > 0 && t <= 0) {
                    out->a = r7;
                    out->b = r6;
                    out->c = j;
                    return TRUE;
                }
                DateTime_AddDays(&s2, v);
            }
        }
        r6++;
    test6:
        if (r6 < 5) goto loop6;
        r7++;
    test7:
        if (r7 < 4) goto loop7;
    }
    r4++;
test4:
    if (r4 <= lim) goto loop4;
    return FALSE;
}

extern "C" BOOL func_020874e8(s32 a, s32 b, s32 c, Unk_020874e8_Bits *d) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        return FALSE;
    }
    void *o = PlayerData_GetCurrent();
    if (_ZN12Unk_02097ff48testFlagEj(o, 1)) {
        return FALSE;
    }
    if (!func_02087650(a, b, c, d)) {
        return FALSE;
    }
    Unk_020874e8_Bits t;
    func_020877c0(_ZN10PlayerData14getDramaRecordEv(o), &t);
    u8 *p = func_0208779c((u8 *)_ZN10PlayerData14getDramaRecordEv(o));
    if (d->a == t.a && d->b == t.b && d->c == t.c) {
        if ((p[2] == a && p[1] == b && p[0] == c) || (p[2] == 0 && p[1] == 0 && p[0] == 0)) {
            return TRUE;
        }
        return FALSE;
    }
    if (d->c == 0) {
        switch (d->a) {
        case 0:
            if (_ZN12Unk_02097ff48testFlagEj(o, 6)) {
                return TRUE;
            }
            break;
        case 2:
            if (((PlayerSpNpcRecord *)_ZN10PlayerData14getSpNpcRecordEv(o))->getSableTalkCount() == 0xf) {
                return TRUE;
            }
            break;
        case 3:
            Unk_020874e8_K k = UNK_020874E8_K;
            if (NookShop_GetLevel((u8 *)((u32)gSaveData + k)) == 3) {
                return TRUE;
            }
            break;
        case 1:
            if (_ZN12Unk_02097ff48testFlagEj(o, 8) || _ZN10MuseumData10isCompleteEv(data_021ed0a0)) {
                return TRUE;
            }
            break;
        }
    } else {
        u8 v = d->c - 1;
        if (d->a == t.a && d->b == t.b && v == t.c) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *LostChildRecord_Construct(void *p) {
    func_020639bc(p);
    return p;
}

extern "C" void *LostChildRecord_Destruct(void *p) {
    func_020639b8(p);
    return p;
}

extern "C" void LostChild_AdvanceDays(s32 n) {
    if (n >= 1) {
        u8 *const g = gSaveData;
        s32 v = ((LostChildRecord *)data_021ed31a)->getDaysLeft() - n;
        if (v < 0) v = 0;
        if (v <= 0) {
            ((LostChildRecord *)(g + 0x15fca))->clear();
        } else {
            ((LostChildRecord *)(g + 0x15fca))->setDaysLeft((u8)v);
        }
        LostChild_LoadFromTown();
    }
}

extern "C" BOOL LostChild_IsKatieDue() {
    if (PlayerData_GetCurrent() != 0) {
        LostChildRecord *p = (LostChildRecord *)_ZN10PlayerData18getLostChildRecordEv();
        if (p->isKaitlinRole() == 0) {
            if (Ns_02086b7c::func_020e77cc(p->getDaysLeft(), 1, 7) != 0) return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL LostChild_IsKaitlinDue() {
    if (PlayerData_GetCurrent() != 0) {
        LostChildRecord *p = (LostChildRecord *)_ZN10PlayerData18getLostChildRecordEv();
        if (p->isKaitlinRole() == 1) {
            if (Ns_02086b7c::func_020e77cc(p->getDaysLeft(), 1, 7) != 0) return TRUE;
        }
    }
    return FALSE;
}

extern "C" void LostChild_SaveToTown() {
    u8 *const g = gSaveData;
    if (PlayerData_GetCurrent() != 0 && g != 0) {
        Ns_02086b7c::MI_CpuCopy8(_ZN10PlayerData18getLostChildRecordEv(), g + 0x15fca, 12);
    }
}

extern "C" void LostChild_LoadFromTown() {
    u8 *const g = gSaveData;
    void *a = PlayerData_GetCurrent();
    if (a != 0 && g != 0) {
        void *b = _ZN10PlayerData18getLostChildRecordEv();
        Ns_02086b7c::MI_CpuCopy8(g + 0x15fca, b, 12);
        if (Ns_02086b7c::func_020e77cc(((LostChildRecord *)(g + 0x15fca))->getDaysLeft(), 1, 7) == 0) _ZN12Unk_02097ff49clearFlagEj(a, 0x33);
    }
}

void LostChildRecord::clear() {
    func_020639a0(this);
    unk_0a_0 = 0;
    unk_0a_4 = 0;
    unk_0a_5 = 0;
}

void LostChildRecord::getTownId() {}

void LostChildRecord::setTownId() { func_02063990(this); }

u32 LostChildRecord::getDaysLeft() { return unk_0a_0; }

void LostChildRecord::setDaysLeft(u8 v) { unk_0a_0 = v; }

BOOL LostChildRecord::isKaitlinRole() { return unk_0a_4; }

void LostChildRecord::setKaitlinRole(u8 v) { unk_0a_4 = v; }

BOOL LostChildRecord::isEscorting() {
    if (unk_0a_5) return TRUE;
    return FALSE;
}

void LostChildRecord::setEscorting() { unk_0a_5 = 1; }

void LostChildRecord::clearEscorting() { unk_0a_5 = 0; }

BlancaFaceRecord *BlancaFaceRecord::construct() {
    _ZN7PatternC1Ev(this);
    return this;
}

BlancaFaceRecord *BlancaFaceRecord::destruct() {
    _ZN7PatternD1Ev(this);
    return this;
}

void BlancaFaceRecord::reset() {
    unk_22a = 0;
    resetPattern();
}

void BlancaFaceRecord::init() { reset(); }

void BlancaFaceRecord::resetPattern() {
    _ZN7Pattern4fillEj(getPattern(), 0xf);
    _ZN11PatternInfo10setPaletteEj(_ZN7Pattern7getInfoEv(getPattern()), 0);
}

void *BlancaFaceRecord::getPattern() {}

void BlancaFaceRecord::setState(u32 v) { unk_22a = v; }

u8 BlancaFaceRecord::getState() { return unk_22a; }

void BlancaFaceRecord::setConcept(u32 v) { unk_22b = v; }

u8 BlancaFaceRecord::getConcept() { return unk_22b; }

BOOL BlancaFaceRecord::isBlancaDue() {
    if (_ZN8SaveData8testFlagEj(gSaveData, 0x13) == 0 && unk_22a == 2) return TRUE;
    return FALSE;
}

void BlancaFaceRecord::func_02087230(u32 v) { unk_228 = v; }

u16 BlancaFaceRecord::func_02087224() { return unk_228; }

void KatieVisitState::func_02087220() {}

void KatieVisitState::func_0208721c() {}

void KatieVisitState::clear() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
}

extern "C" BOOL Field_IsClearSpot(s32 x, s32 y, void *map) {
    if (map == 0) goto fail;
    if (TownMap_IsUnitWalkable() == 0) goto fail;
    for (s32 i = 1; i <= 2; i++) {
        s32 ty = y + i;
        s32 hx = x >> 4;
        s32 hy = ty >> 4;
        s32 lx = x - (hx << 4);
        u16 *p = BlockMap_GetItemPtr(map, hx, hy, lx, ty - (hy << 4), 0);
        if (p == 0 || Unk_0208709c_In(p) || Item_IsMarker(p) != 0 || (Item_IsTreeStage0(p) == 0 && Unk_0208709c_Chk(p))) {
            return FALSE;
        }
        p = Unk_0208709c_Cell(map, x, y - i);
        if (p == 0 || Unk_0208709c_In(p)) {
            return FALSE;
        }
    }
    return TRUE;
fail:
    return FALSE;
}

void Unk_02086f84::pickKatiePos() {
    void *map = TownBlockMap_Get();
    if (map != 0) {
        s32 cnt = 0;
        s32 bx = 0, by = 0;
        u32 *tbl = sKatieSpotRows;
        s32 x, y;
        MI_CpuFill8(tbl, 0, 0x80);
        Ns_02086b7c::FieldUnit_FromBlockUnit(&bx, &by, 2, 2, 0, 0);
        y = 0;
        do {
            x = 0;
            do {
                if (Field_IsClearSpot(bx + x, by + y, map) != 0) {
                    tbl[0] |= 1 << x;
                    cnt++;
                }
                x++;
            } while (x < 32);
            tbl++;
            y++;
        } while (y < 32);
        if (cnt > 0) {
            s32 x2, y2; s32 r = Ns_02086b7c::func_02063b8c(cnt);
            tbl = sKatieSpotRows;
            y2 = 0;
            goto testy2;
loopy2:
            x2 = 0;
            goto testx2;
loopx2:
            if (((tbl[0] >> x2) & 1) != 0) {
                if (r == 0) {
                    Unk_02086ec4_Vec3 v;
                    Ns_02086b7c::FieldPos_FromUnitCenter(&v, bx + x2, by + y2);
                    setPos(&v);
                    goto after;
                }
                r--;
            }
            x2++;
testx2:
            if (x2 < 32) goto loopx2;
after:
            if (x2 < 32) goto end;
            tbl++;
            y2++;
testy2:
            if (y2 < 32) goto loopy2;
        }
    }
end:
    unk_08 = 0;
}

void Unk_02086f84::setPos(Unk_02086ec4_Vec3 *v) {
    unk_00 = v->x;
    unk_04 = v->z;
}

void Unk_02086f84::getPos(Unk_02086ec4_Vec3 *out) {
    out->x = unk_00;
    out->z = unk_04;
}

BOOL Unk_02086f84::isFollowing() {
    if (unk_08 != 0) return TRUE;
    return FALSE;
}

void Unk_02086f84::setFollowing() { unk_08 = 1; }

void Unk_02086f84::clearFollowing() { unk_08 = 0; }

void Unk_02086f84::func_02086f90() {
    unk_00 = 0;
    unk_04 = 0;
}

void Unk_02086f84::func_02086f8c() {}

void Unk_02086f84::clearClosingTime() {
    unk_00 = 0;
    unk_04 = 0;
}

void Unk_02086f84::func_02086f80() {}

void ResettiVisitFlag::setClosingTimeToday() {
    Clock_GetDateTime(this);
    unk_02 = 0x17;
    unk_01 = 0;
    unk_00 = 0;
}

BOOL ResettiVisitFlag::isPastClosingTime() {
    Unk_02086f38_Buf buf;
    buf.a = 0;
    buf.b = 0;
    Clock_GetDateTime(&buf);
    s32 t = DateTime_Compare(this, &buf, 0x3f);
    BOOL r = FALSE;
    if (t == -1) r = TRUE;
    return r;
}

void ResettiVisitFlag::func_02086f34() {}

void ResettiVisitFlag::func_02086f30() {}

void ResettiVisitFlag::clear() { unk_00 = 0; }

BOOL ResettiVisitFlag::isSet() {
    if (unk_00 != 0) return TRUE;
    return FALSE;
}

void ResettiVisitFlag::set(u32 v) { unk_00 = v; }

void TownTravelState::func_02086f10() {}

void TownTravelState::func_02086f0c() {}

void TownTravelState::clearMode() { unk_02 = 0; }

void TownTravelState::setMode(u32 v) { unk_02 = v; }

u8 TownTravelState::getMode() { return unk_02; }

void TownTravelState::setAngle(s32 v) { unk_00 = v; }

s16 TownTravelState::getAngle() { return unk_00; }

void PeteFallState::func_02086eec() {}

void PeteFallState::func_02086ee8() {}

void PeteFallState::clear() { MI_CpuFill8(this, 0, 12); }

void PeteFallState::setPos(Unk_02086ec4_Vec3 *v) {
    unk_00 = v->x;
    unk_04 = v->z;
}

void PeteFallState::getPos(Unk_02086ec4_Vec3 *out) {
    out->x = unk_00;
    out->z = unk_04;
}

BOOL PeteFallState::hasFallPos() {
    if (unk_08_0) return TRUE;
    return FALSE;
}

void PeteFallState::markFallPos() { unk_08_0 = 1; }

void PeteFallState::unmarkFallPos() { unk_08_0 = 0; }

BOOL PeteFallState::isVisitorActive() {
    if (unk_08_1) return TRUE;
    return FALSE;
}

void PeteFallState::clearVisitorActive() { unk_08_1 = 0; }

void PeteFallState::setVisitorActive() { unk_08_1 = 1; }

s16 PeteFallState::getFacing() { return (s16)(unk_08_2 << 14); }

extern "C" BOOL Field_IsClearSpotYX(s32 x, s32 y, void *map) { return Field_IsClearSpot(y, x, map); }

extern "C" BOOL Field_IsClearSpotXY(s32 x, s32 y, void *map) { return Field_IsClearSpot(x, y, map); }

extern "C" s32 Field_PickRandomInLine(s32 *out, BOOL (*cb)(s32, s32, void *), s32 arg, s32 cur, s32 limit, void *m, u16 *buf, s32 n) {
    s32 r, bit = 0, i = 0, cnt = 0, bi, ii, k;
    if (cur > limit) {
        s32 t = cur;
        cur = limit;
        limit = t;
    }
    MI_CpuFill8(buf, 0, n * 2);
    k = cur;
    goto test1;
loop1:
    if (cb(arg, k, m) != 0) {
        buf[i] |= 1 << bit;
        cnt++;
    }
    bit++;
    if (bit >= 16) {
        bit = 0;
        i++;
    }
    if (i >= n) goto done1;
    k++;
test1:
    if (k <= limit) goto loop1;
done1:
    if (cnt > 0) {
        r = Ns_02086b7c::func_02063b8c(cnt);
        bi = 0; ii = 0;
        goto test2;
loop2:
        if (((buf[ii] >> bi) & 1) != 0) {
            if (r == 0) {
                *out = cur;
                return 1;
            }
            r--;
        }
        bi++;
        if (bi >= 16) {
            bi = 0;
            ii++;
        }
        if (ii >= n) goto fail;
        cur++;
test2:
        if (cur <= limit) goto loop2;
    }
fail:
    return 0;
}

BOOL PeteFallState::pickFallPos(s32 px, s32 flip) {
    s32 dir;
    Unk_02086c04_Map *map = (Unk_02086c04_Map *)gSceneBlockMap;
    if (map == 0) {
        unmarkFallPos();
        return FALSE;
    }
    s32 f1, f2, w, h;
    Unk_02086c04_Pair *sel = 0;
    s32 sx = 0, sy = 0;
    s32 *dims = &map->w;
    w = dims[0];
    h = dims[1];
    Unk_02086c04_Pair p1, p2;
    u16 buf1[4], buf2[4];
    Unk_02086ec4_Vec3 v;
    s32 a, b, c, d;
    s32 y;
    p1.a = 0;
    p1.b = 0;
    p2.a = 0;
    p2.b = 0;
    if (flip != 0) dir = -1; else dir = 1;
    FieldPos_ToUnit(&sx, &sy, px);
    a = sx + dir * 8 - flip;
    y = sy + 5;
    b = a;
    c = sy + 4;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    goto test;
loop:
    if (y < h) {
        p1.b = y;
        f1 = Field_PickRandomInLine(&p1.a, Field_IsClearSpotYX, y, a, sx, map, buf1, 4);
        if (a > 0 && a < w - 1) a += dir;
        y++;
    }
    if (b >= 0 && b < w) {
        p2.a = b;
        f2 = Field_PickRandomInLine(&p2.b, Field_IsClearSpotXY, b, sy, c, map, buf2, 4);
        b += dir;
        if (c < h - 1) c++;
    }
    if (f1 != 0) {
        if (f2 != 0) {
            if (Ns_02086b7c::func_02063b8c(10) & 1) {
                sel = &p2;
                goto done;
            }
        }
        sel = &p1;
        goto done;
    } else if (f2 != 0) {
        sel = &p2;
        goto done;
    }
test:
    if (y < h) goto loop;
    if (b < 0) goto done;
    if (b < w) goto loop;
done:
    if (sel != 0) {
        Ns_02086b7c::FieldPos_FromUnitCenter(&v, sel->a, sel->b);
        setPos(&v);
        unk_08_2 = Ns_02086b7c::func_02063b8c(4);
        markFallPos();
        return TRUE;
    }
    unmarkFallPos();
    return FALSE;
}

void VisitorSpawnFlags::func_02086c00() {}

void VisitorSpawnFlags::func_02086bfc() {}

void VisitorSpawnFlags::clear() { MI_CpuFill8(this, 0, 1); }

void VisitorSpawnFlags::rollGulliverSpot() {
    unk_00_2 = Ns_02086b7c::func_02063b8c(3);
    unk_00_4 = Ns_02086b7c::func_02063b8c(4);
    unk_00_1 = 1;
}

BOOL VisitorSpawnFlags::isVisitorSpawned() {
    if (unk_00_0) return TRUE;
    return FALSE;
}

void VisitorSpawnFlags::clearVisitorSpawned() { unk_00_0 = 0; }

void VisitorSpawnFlags::setVisitorSpawned() { unk_00_0 = 1; }

void Unk_02086af0::getGulliverSpawn(void *v, u16 *out, Unk_020868cc_Vec3 *p) {
    if (f1 == 0) _ZN17VisitorSpawnFlags16rollGulliverSpotEv(this);
    Unk_020868cc_Vec3 t;
    const Unk_02086af0_Off *tb = sGulliverSpotOffsets;
    const Unk_02086af0_Off *e = &tb[c];
    s32 z = p->z + e->z;
    s32 x = p->x + tb[c].x;
    t.x = x;
    t.y = 0;
    t.z = z;
    FieldPos_SnapToUnitCenter(v, &t);
    if (data_021e58a6.getPartCount() >= 5) {
        *out = sGulliverRepairedAngles[c];
    } else if (data_021e58a6.isStarted()) {
        *out = 0;
    } else {
        *out = d << 14;
    }
}

extern "C" void func_02086aec() {}

extern "C" void func_02086ae8() {}

extern "C" void VisitorPos_Clear(void *p) {
    MI_CpuFill8(p, 0, 8);
}

s32 VisitorPos::countFreeInAcre(s32 *pos, void *ctx) {
    s32 bx = 0, by = 0;
    s32 n = 0;
    s32 x, y;
    FieldUnit_FromBlockUnit(&bx, &by, pos[0], pos[1], 0, 0);
    s32 xe = bx + 16;
    s32 ye = by + 16;
    for (y = by; y < ye; y++) {
        for (x = bx; x < xe; x++) {
            if (Field_IsClearSpot(x, y, ctx)) n++;
        }
    }
    return n;
}

BOOL VisitorPos::pickFreeInAcre(Unk_020868cc_Vec3 *out, s32 *pos, void *ctx) {
    s32 n = 0;
    s32 bx = 0, by = 0;
    u16 arr[16];
    s32 x, y;
    MI_CpuFill8(arr, 0, 0x20);
    FieldUnit_FromBlockUnit(&bx, &by, pos[0], pos[1], 0, 0);
    for (y = 0; y < 16; y++) {
        u16 *pp;
        for (x = 0, pp = &arr[y]; x < 16; x++) {
            if (Field_IsClearSpot(bx + x, by + y, ctx)) {
                *pp |= 1 << x;
                n++;
            }
        }
    }
    if (n > 0) {
        s32 r = Ns_02086204::func_02063b8c(n);
        for (x = 0; x < 16; x++) {
            u16 *qq;
            for (y = 0, qq = &arr[x]; y < 16; y++) {
                if ((*qq >> y) & 1) {
                    if (r == 0) {
                        FieldPos_FromUnitCenter(out, bx + y, by + x);
                        return TRUE;
                    }
                    r--;
                }
            }
        }
    }
    return FALSE;
}

BOOL VisitorPos::pickRandomPos() {
    u8 buf[4];
    s32 xy[2];
    Unk_020868cc_Vec3 out;
    s32 n;
    Unk_020868e4_Ctx *o = (Unk_020868e4_Ctx *)TownBlockMap_Get();
    if (o != NULL) {
        n = 0;
        xy[0] = 0;
        xy[1] = 0;
        s32 *s = o->v;
        s32 w = s[0];
        s32 h = s[1];
        MI_CpuFill8(buf, 0, 4);
        for (xy[1] = 1; xy[1] < h - 1; xy[1]++) {
            for (xy[0] = 1; xy[0] < w - 1; xy[0]++) {
                if (countFreeInAcre(xy, o)) {
                    buf[xy[1] - 1] |= 1 << (xy[0] - 1);
                    n++;
                }
            }
        }
        if (n > 0) {
            s32 r = Ns_02086204::func_02063b8c(n);
            for (xy[1] = 1; xy[1] < h - 1; xy[1]++) {
                for (xy[0] = 1; xy[0] < w - 1; xy[0]++) {
                    if ((buf[xy[1] - 1] >> (xy[0] - 1)) & 1) {
                        if (r == 0) {
                            pickFreeInAcre(&out, xy, o);
                            setPos(out.x, out.z);
                            return TRUE;
                        }
                        r--;
                    }
                }
            }
        }
    }
    return FALSE;
}

void VisitorPos::setPos(s32 a, s32 b) {
    x = a;
    z = b;
}

void VisitorPos::getPos(Unk_020868cc_Vec3 *out) const {
    out->x = x;
    out->z = z;
    out->y = 0;
}

extern "C" void func_020868c8() {}

extern "C" void func_020868c4() {}

void TurnipMarket::clear() {
    unk_18 = 0xff;
    unk_08 = 0;
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
    unk_04 = 1;
    unk_05 = 1;
    unk_06 = 0;
    unk_07 = 0;
}

void TurnipMarket::init() {
    Unk_02086340_T t;
    generateWeek(0);
    t.w0 = 0;
    t.w1 = 0;
    Clock_GetDateTime(&t);
    setWeekDate(&t);
    setPurchaseDate(&t);
}

u8 TurnipMarket::calcPrice(s32 k, s32 z) {
    s32 t = func_02063b74(z);
    return (u8)((unk_0a[0] * (k + t)) >> 12);
}

void TurnipMarket::fillDecreasing(s32 i, s32 n) {
    s32 k = 0xca4;
    for (; i < n; k -= 0x66, i++) {
        unk_0a[i] = calcPrice(k, 0x29);
    }
}

u8 TurnipMarket::calcLowPrice() {
    return calcPrice(0x666, 0x68f);
}

u8 TurnipMarket::calcMidPrice() {
    return calcPrice(0xccd, 0x9c3);
}

u8 TurnipMarket::calcHighPrice() {
    return calcPrice(0x1666, 0x9c3);
}

void TurnipMarket::generateSmallSpike() {
    s32 n = Ns_02086204::func_02063b8c(6) + 7;
    fillDecreasing(2, n - 3);
    unk_0a[n - 3] = calcMidPrice();
    unk_0a[n - 2] = calcMidPrice();
    unk_0a[n] = calcPrice(0x1b33, 0x4f6);
    unk_0a[n - 1] = calcPrice(0x168f, 0x4a4);
    unk_0a[n + 1] = calcPrice(0x168f, 0x4a4);
    fillDecreasing(n + 2, 0xe);
}

s32 TurnipMarket::rollPeakPrice() {
    s32 t = func_02063b74(0x419a);
    unk_08 = (unk_0a[0] * (t + 0x2000)) >> 12;
    return 0;
}

void TurnipMarket::generateWeek(s32 flag) {
    if (unk_18 != 0xff) {
        s32 r = Ns_02086204::func_02063b8c(0x65);
        switch (unk_18) {
        case 0:
            if (r < 0x1e) unk_18 = 1;
            else if (r < 0x41) unk_18 = 3;
            else if (r < 0x50) unk_18 = 2;
            break;
        case 1:
            if (r < 0x14) unk_18 = 3;
            else if (r < 0x41) unk_18 = 0;
            else if (r < 0x55) unk_18 = 2;
            break;
        case 2:
            if (r < 0x2d) unk_18 = 1;
            else if (r < 0x46) unk_18 = 3;
            else if (r < 0x5f) unk_18 = 0;
            break;
        case 3:
            if (r < 0x19) unk_18 = 1;
            else if (r < 0x46) unk_18 = 0;
            else if (r < 0x55) unk_18 = 2;
            break;
        }
        if (flag != 0) unk_18 = 2;
    } else {
        unk_18 = Ns_02086204::func_02063b8c(4);
    }
    unk_08 = 0;
    MI_CpuFill8(&unk_0a[0], 0, 0xe);
    unk_0a[0] = Ns_02086204::func_02063b8c(0x15) + 0x5a;
    unk_0a[1] = unk_0a[0];
    switch (unk_18) {
    case 0:
        unk_0a[2] = calcMidPrice();
        unk_0a[3] = calcLowPrice();
        unk_0a[4] = calcLowPrice();
        unk_0a[5] = calcLowPrice();
        unk_0a[6] = calcMidPrice();
        unk_0a[7] = calcMidPrice();
        unk_0a[8] = calcMidPrice();
        unk_0a[9] = calcLowPrice();
        unk_0a[10] = calcLowPrice();
        unk_0a[11] = calcMidPrice();
        unk_0a[12] = calcMidPrice();
        unk_0a[13] = calcMidPrice();
        break;
    case 1: {
        s32 n = Ns_02086204::func_02063b8c(4) + 8;
        unk_0a[n] = rollPeakPrice();
        fillDecreasing(2, n - 2);
        unk_0a[n - 1] = calcHighPrice();
        unk_0a[n + 1] = calcHighPrice();
        unk_0a[n - 2] = calcMidPrice();
        unk_0a[n + 2] = calcMidPrice();
        fillDecreasing(n + 3, 0xe);
        break;
    }
    case 2:
        fillDecreasing(2, 0xe);
        break;
    case 3:
        generateSmallSpike();
        break;
    }
}

u16 TurnipMarket::getPrice() {
    Unk_02086340_T t;
    s32 i = 0;
    t.w0 = 0;
    t.w1 = 0;
    Clock_GetDateTime(&t);
    if (((u8 *)&t)[2] >= 12) i++;
    s32 k = Clock_GetWeekday();
    u8 b = unk_0a[k + k + i];
    u16 r = b;
    if (r == 0) {
        u16 v = unk_08;
        if (v != 0) r = v;
    }
    return r;
}

void TurnipMarket::spoilOnReset() {
    Unk_02086340_T t;
    if (MenuCtrl_IsClockMovedForward() != 0 || MenuCtrl_IsClockMovedBack() != 0) {
        t.w0 = 0;
        t.w1 = 0;
        Clock_GetDateTime(&t);
        generateWeek(1);
        setWeekDate(&t);
        setPurchaseDate(&t);
    }
}

void TurnipMarket::updateDay(s32 d) {
    struct {
        Unk_02086340_T a, b;
    } l;
    DateTime_Make(&l.a, this, 6, 0, 0);
    l.b.w0 = 0;
    l.b.w1 = 0;
    Clock_GetDateTime(&l.b);
    if (LB(0xa) < 6) {
        DateTime_SubDays(&l.b, 1);
        LB(0xa) = 6;
        LB(9) = 0;
        LB(8) = 0;
    }
    s32 r = DateTime_Compare(&l.b, &l.a, 0x38);
    checkTurnipExpiry();
    if (r == 1) {
        s32 t = Date_GetWeekday(LB(5), LB(4), LB(3));
        s32 u = Date_GetWeekday(LB(0xd), LB(0xc), LB(0xb));
        if (u < t || DateTime_DiffDays(&l.a, &l.b) >= 7) {
            generateWeek(0);
            setWeekDate(&l.b);
        }
    } else if (d < 0) {
        generateWeek(1);
        setWeekDate(&l.b);
        setPurchaseDate(&l.b);
    }
}

void TurnipMarket::setWeekDate(void *src) {
    Unk_02086340_T t;
    t.w0 = 0;
    t.w1 = 0;
    if (src == NULL) {
        Clock_GetDateTime(&t);
    } else {
        MI_CpuCopy8(src, &t, 8);
    }
    if (((u8 *)&t)[2] < 6) DateTime_SubDays(&t, 1);
    unk_02 = ((u8 *)&t)[5];
    unk_01 = ((u8 *)&t)[4];
    unk_00 = ((u8 *)&t)[3];
}

void TurnipMarket::checkTurnipExpiry() {
    struct {
        Unk_02086340_T a, b;
    } l;
    DateTime_Make(&l.a, &unk_04, 6, 0, 0);
    l.b.w0 = 0;
    l.b.w1 = 0;
    Clock_GetDateTime(&l.b);
    if (LB(0xa) < 6) {
        DateTime_SubDays(&l.b, 1);
        LB(0xa) = 6;
        LB(9) = 0;
        LB(8) = 0;
    }
    if (DateTime_Compare(&l.b, &l.a, 0x38) == 1) {
        if (DateTime_DiffDays(&l.a, &l.b) >= 7) {
            _ZN8SaveData9clearFlagEj(gSaveData, 4);
            setPurchaseDate(&l.b);
        }
    }
}

void TurnipMarket::setPurchaseDate(void *src) {
    Unk_02086340_T t;
    t.w0 = 0;
    t.w1 = 0;
    if (src == NULL) {
        Clock_GetDateTime(&t);
    } else {
        MI_CpuCopy8(src, &t, 8);
    }
    if (((u8 *)&t)[2] < 6) DateTime_SubDays(&t, 1);
    unk_06 = ((u8 *)&t)[5];
    unk_05 = ((u8 *)&t)[4];
    unk_04 = ((u8 *)&t)[3];
}

ReddLastSale::ReddLastSale() {
    _ZN8PlayerIdC1EPv(this);
    unk_16 = 0xfff1;
}

ReddLastSale::~ReddLastSale() {
    _ZN8PlayerIdC1Ev(this);
}

void ReddLastSale::clear() {
    Ns_02086204::_ZN8PlayerId13func_02094294Ev(this);
    unk_16 = 0xfff1;
}

extern "C" void ReddLastSale_Clear(ReddLastSale *p) {
    p->clear();
}

extern "C" void ReddLastSale_GetBuyer() {}

void ReddLastSale::setBuyer(const ReddLastSale *o) {
    unk_00 = o->unk_00;
    unk_02 = o->unk_02;
    unk_0a = o->unk_0a;
    unk_0c = o->unk_0c;
    unk_14 = o->unk_14;
    unk_15 = o->unk_15;
}

void ReddLastSale::setItem(const ReddLastSale *o) {
    unk_16 = o->unk_00;
}

void ReddLastSale::copyItemFrom(const ReddLastSale *o) {
    unk_00 = o->unk_16;
}

extern "C" void func_02086294() {}

extern "C" void func_02086290() {}

extern "C" void GulliverQuest_Clear(void *p) {
    MI_CpuFill8(p, 0, 1);
}

extern "C" void GulliverQuest_Init(void *p) {
    GulliverQuest_Clear(p);
}

s32 GulliverQuest::getPartCount() {
    return cnt;
}

void GulliverQuest::addPart() {
    cnt = cnt + 1;
}

BOOL GulliverQuest::isStarted() {
    if (flag == 1) return TRUE;
    return FALSE;
}

void GulliverQuest::start() {
    flag = 1;
}

extern "C" void func_02086234() {}

extern "C" void func_02086230() {}

void Unk_0208620c::func_0208620c() {
    a = 0;
    b = 0;
    c = 0;
    d = 0;
}

extern "C" void RoostGuestRoll_Init(void *p) {
    _ZN14RoostGuestRoll4rollEv(p);
}

void RoostGuestRoll::roll() {
    u32 a, b, c;
    unk_00_0 = func_02063b8c(2);
    unk_00_3 = 1;
    a = func_02063b8c(100);
    b = func_02063b8c(100);
    c = func_02063b8c(100);
    switch (Clock_GetWeekday()) {
    case 6:
        if (func_020e77cc(a, 0, 0x4a)) unk_00_1 = 0;
        else if (func_020e77cc(a, 0x4b, 0x54)) unk_00_1 = 1;
        else unk_00_1 = 2;
        if (func_020e77cc(b, 0, 0x4a)) unk_00_2 = 0;
        else if (func_020e77cc(b, 0x4b, 0x54)) unk_00_2 = 1;
        else unk_00_2 = 2;
        break;
    case 0:
        if (func_020e77cc(a, 0, 0x31)) unk_00_1 = 0;
        else if (func_020e77cc(a, 0x32, 0x3b)) unk_00_1 = 1;
        else if (func_020e77cc(a, 0x3c, 0x46)) unk_00_1 = 2;
        else unk_00_1 = 4;
        if (func_020e77cc(b, 0, 0x4a)) unk_00_2 = 0;
        else if (func_020e77cc(b, 0x4b, 0x54)) unk_00_2 = 1;
        else if (func_020e77cc(b, 0x55, 0x5e)) unk_00_2 = 2;
        else unk_00_2 = 3;
        break;
    default:
        if (func_020e77cc(a, 0, 0x4a)) unk_00_1 = 0;
        else if (func_020e77cc(a, 0x4b, 0x55)) unk_00_1 = 1;
        else unk_00_1 = 2;
        if (func_020e77cc(b, 0, 0x4a)) unk_00_2 = 0;
        else if (func_020e77cc(b, 0x4b, 0x55)) unk_00_2 = 1;
        else unk_00_2 = 2;
        if (func_020e77cc(c, 0, 0x1d) && NookShop_GetLevel(data_021ed104) == 3) unk_00_3 = 1;
        else unk_00_3 = 0;
        break;
    }
    if (unk_00_1 == unk_00_2) unk_00_2 = 0;
}

BOOL RoostGuestRoll::hasMorningGuest() { if (unk_00_0) return TRUE; return FALSE; }

u32 RoostGuestRoll::getNoonGuest() { return unk_00_1; }

u32 RoostGuestRoll::getAfternoonGuest() { return unk_00_2; }

BOOL RoostGuestRoll::hasLateGuest() { if (unk_00_3) return TRUE; return FALSE; }

void ContestRecord::postResultNotice() {
    if (_ZN8PlayerId13func_02094218Ev(this) == 0 && _ZN10VillagerId7isValidEv(&unk_16) == 0) {
        _ZN8SaveData9clearFlagEj(gSaveData, 0xf);
        return;
    }
    if (unk_37 != 1 && unk_37 != 2 && unk_37 != 3) return;
    if (_ZN8SaveData8testFlagEj(gSaveData, 0xf) == 0) return;
    Unk_02085df0_Rec rec;
    if (_ZN8PlayerId13func_02094218Ev(this) != 0) _ZN8PlayerId13func_020940d0EP9MsgString(this, &rec);
    else _ZN10VillagerId7getNameEj(&unk_16, &rec);
    if ((u8)(unk_37 + 0xff) <= 1) {
        MailText_SetSlotMonth(0, unk_35);
        MailText_SetSlotDayOrdinal(1, unk_34);
        MailText_SetSlot(4, &rec);
        if (unk_30 > 0) {
            Unk_02085df0_Num num;
            if (unk_37 == 1) String_FormatFixedPoint(&num, unk_30, 1);
            else String_FormatNumber(&num, unk_30 >> 12, 3, 0, 0, 0);
            MailText_SetSlot(3, &num);
        }
        BOOL same;
        if (Item_IsFurniture(&unk_2e) != 0) {
            u16 v = 0xfff1;
            u32 a = Item_GetFurnitureIndex(&unk_2e);
            if (a == Item_GetFurnitureIndex(&v)) same = TRUE; else same = FALSE;
        } else {
            if (unk_2e == 0xfff1) same = TRUE; else same = FALSE;
        }
        if (same == 0) {
            Unk_02085df0_Str str(&unk_2e);
            MailText_SetSlot(2, &str);
        }
    } else {
        MailText_SetSlot(0, &rec);
    }
    s32 k;
    if ((u8)(unk_37 + 0xff) <= 1) k = func_02063b8c(3);
    else k = func_02063b8c(2);
    Bbs_PostMsgToday(k, sContestResultBbsFiles[unk_37]);
    _ZN8SaveData9clearFlagEj(gSaveData, 0xf);
}

void ContestRecord::sendResultLetters() {
    if (_ZN8PlayerId13func_02094218Ev(this) == 0 && _ZN10VillagerId7isValidEv(&unk_16) == 0) return;
    if (unk_37 != 1 && unk_37 != 2 && unk_37 != 3) return;
    Unk_020859b4_Loc l;
    Clock_GetDate(l.unk_06);
    if (unk_36 == 0) return;
    if (unk_35 == 0) return;
    if (unk_34 == 0) return;
    DateTime_Make(l.unk_0c, &unk_34, 6, 0, 0);
    l.unk_14 = 0;
    l.unk_18 = 0;
    Clock_GetDateTime(&l.unk_14);
    if (((u8 *)&l.unk_14)[2] < 6) {
        DateTime_SubDays(&l.unk_14, 1);
        ((u8 *)&l.unk_14)[2] = 6;
        ((u8 *)&l.unk_14)[1] = 0;
        ((u8 *)&l.unk_14)[0] = 0;
    }
    s32 r6 = DateTime_Compare(&l.unk_14, l.unk_0c, 0x38);
    if (r6 == 1 && DateTime_DiffDays(l.unk_0c, &l.unk_14) >= 10) goto reset;
    if (r6 == -1 && DateTime_DiffDays(&l.unk_14, l.unk_0c) >= 10) {
    reset:
        clear();
        _ZN8SaveData9clearFlagEj(gSaveData, 0xf);
        return;
    }
    if (unk_37 != 3) {
        if (unk_36 == l.unk_06[2] && unk_35 == l.unk_06[1] && unk_34 == l.unk_06[0]) return;
    } else {
        s32 r4 = Event_GetDaysSinceStart(0xe);
        Clock_GetDateTime(&l.unk_14);
        if (r4 != -1) {
            if (r4 < 7) return;
            if (r4 == 7 && ((u8 *)&l.unk_14)[2] < 6) return;
        }
        if (r6 == 1 && DateTime_DiffDays(l.unk_0c, &l.unk_14) < 1) return;
    }
    if (unk_37 == 3 && _ZN8PlayerId13func_02094218Ev(this) == 0) {
        postResultNotice();
        clear();
        return;
    }
    Unk_02085df0_Num n1;
    Unk_02085df0_Num n2;
    Unk_02085df0_Num n3;
    Unk_020859b4_Buf buf;
    Unk_02085df0_Rec rec;
    s32 i = 0;
    s32 ok, z10, z14, z1c, z20, z24, z2c;
    l.unk_00 = 0;
    z1c = 0; z14 = 0; z20 = 0; z24 = 0; z2c = 0; z10 = 0;
    for (; i < 4; i++) {
        ok = z10;
        void *r4 = PlayerData_GetResident(gSavePlayers, i);
        if (r4 == 0) continue;
        if (_ZN10PlayerData6isUsedEv(r4) == 0) continue;
        void *r7 = _ZN10PlayerData14getSpNpcRecordEv(r4);
        if ((u8)(unk_37 + 0xff) <= 1) {
            MailText_SetSlotMonth(z14, unk_35);
            MailText_SetSlotDayOrdinal(1, unk_34);
            s32 f;
            if (Item_IsFurniture(&unk_2e) != 0) {
                l.unk_04 = 0xfff1;
                u32 t = Item_GetFurnitureIndex(&unk_2e);
                f = (t == Item_GetFurnitureIndex(&l.unk_04)) ? 1 : z1c;
            } else {
                f = (unk_2e == 0xfff1) ? 1 : z20;
            }
            if (f == 0) {
                Unk_02085df0_Str str(&unk_2e);
                MailText_SetSlot(2, &str);
            }
            if (unk_30 > 0) {
                if (unk_37 == 1) String_FormatFixedPoint(&n1, unk_30, 1);
                else String_FormatNumber(&n1, unk_30 >> 12, 3, z24, z24, z24);
                MailText_SetSlot(3, &n1);
            }
            if (unk_37 == 1) ok = _ZN17PlayerSpNpcRecord24hasEnteredFishingTourneyEv(r7);
            else ok = _ZN17PlayerSpNpcRecord16hasEnteredBugOffEv(r7);
        } else {
            u16 *p = _ZN10PlayerData11getPlayerIdEv(r4);
            if ((unk_00.unk_00 == p[0] && memcmp((u8 *)this + 2, p + 1, 8) == 0 && _ZN8PlayerId13func_020941e8EPS_(this, p) != 0) || _ZN17PlayerSpNpcRecord15hasFestivalGiftEv(r7) != 0) {
                l.unk_00 = func_02063b8c(3);
                _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(r4), &rec);
                _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(r7);
                MailText_SetSlot(z2c, &rec);
                ok = 1;
            }
        }
        if (ok == 0) continue;
        if ((u8)(unk_37 + 0xff) <= 1) {
            u16 *q = _ZN10PlayerData11getPlayerIdEv(r4);
            if (unk_00.unk_00 == q[0] && memcmp((u8 *)this + 2, q + 1, 8) == 0 && _ZN8PlayerId13func_020941e8EPS_(this, q) != 0) {
                l.unk_00 = func_02063b8c(3);
            } else {
                l.unk_00 = func_02063b8c(3) + 3;
            }
            _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(r4), &rec);
            MailText_SetSlot(4, &rec);
        }
        u16 *w = _ZN10PlayerData11getPlayerIdEv(r4);
        Letter_ComposeFromMail(&buf, &l, sContestResultMailFiles[unk_37], data_020e0c50, data_020e0c48, w);
        u16 *x = _ZN10PlayerData11getPlayerIdEv(r4);
        if ((unk_00.unk_00 == x[0] && memcmp((u8 *)this + 2, x + 1, 8) == 0 && _ZN8PlayerId13func_020941e8EPS_(this, x) != 0) || unk_37 == 3) {
            l.unk_02 = 0x3878;
            if (unk_37 == 2) l.unk_02 = 0x387c;
            else if (unk_37 == 3) l.unk_02 = 0x3880;
            _ZN12Unk_0206555410setPresentEtj(&buf, l.unk_02, 1);
        }
        LetterDelivery_PutInAddresseeMailbox(&buf);
    }
    postResultNotice();
    clear();
}

ContestRecord *ContestRecord::construct() {
    _ZN8PlayerIdC1EPv(this);
    VillagerId_Construct(&unk_16);
    VillagerId_Construct(&unk_22);
    unk_2e = 0xfff1;
    return this;
}

ContestRecord *ContestRecord::destruct() {
    VillagerId_Destruct(&unk_22);
    VillagerId_Destruct(&unk_16);
    _ZN8PlayerIdC1Ev(this);
    return this;
}

void ContestRecord::clear() {
    _ZN8PlayerId13func_02094294Ev(this);
    VillagerId_Clear(&unk_16);
    VillagerId_Clear(&unk_22);
    unk_2e = 0xfff1;
    unk_30 = 0;
}

// Declarations for data defined further down (definition order sets the data layout)
extern char data_020e0c88[];
extern const s16 sGulliverRepairedAngles[4];
extern const u8 data_020cf288[0xa0];
extern const u8 data_020cf328[0x230];
extern char data_020e0c7c[];
extern u8 data_020e0c4c[4];
extern u32 sKatieSpotRows[0x20];
extern const Unk_02086af0_Off sGulliverSpotOffsets[3];
extern u8 data_020e0c50[4];
extern char data_020e0c58[];
extern char data_020e0c98[];
extern u32 sContestResultBbsFiles[4];
extern void *sContestResultMailFiles[4];
extern char data_020e0c70[];
extern u8 data_020e0c48[4];
extern char data_020e0c64[];
extern u8 data_020e0c54[4];
extern u8 data_020e0c44[4];

char data_020e0c88[] = "ev_gardening";

const s16 sGulliverRepairedAngles[4] = {(s16)0x8000, 0x4000, (s16)0xc000, 0};

const u8 data_020cf288[0xa0] = {
    0x06, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x08, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0b, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x03, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x0c, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x0a, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x09, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
};

const u8 data_020cf328[0x230] = {
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

char data_020e0c7c[] = "bbs_fishing";

u8 data_020e0c4c[4] = {0x7, 0, 0, 0};

u32 sKatieSpotRows[0x20];

const Unk_02086af0_Off sGulliverSpotOffsets[3] = {{0, 0x4000}, {-0x4000, 0}, {0x4000, 0}};

u8 data_020e0c50[4] = {0xf, 0, 0, 0};

char data_020e0c58[] = "ev_insect";

char data_020e0c98[] = "bbs_gardening";

u32 sContestResultBbsFiles[4] = {(u32)data_020e0c7c, (u32)data_020e0c7c, (u32)data_020e0c64, (u32)data_020e0c98};

void *sContestResultMailFiles[4] = {data_020e0c70, data_020e0c70, data_020e0c58, data_020e0c88};

char data_020e0c70[] = "ev_fishing";

u8 data_020e0c48[4] = {0x10, 0, 0, 0};

char data_020e0c64[] = "bbs_insect";

u8 data_020e0c54[4] = {0x1e, 0, 0, 0};

u8 data_020e0c44[4] = {0xd, 0, 0, 0};

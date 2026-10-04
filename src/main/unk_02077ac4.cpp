// mwcc-flags: -str reuse
#include "types.h"
#include "net/CommManager.h"


class VillagerId {
public:
    u32 getName(u32 arg);
    void makeFileName(void *buf, u32 size, u32 arg);
    u32 getGender();
    void set(u32 id, u32 type, void *s);
    u32 isValid();
    u16 townId;
    u8 townName[8];
    u8 personality;
    u8 species;
};



struct HousePos {
    u8 x;
    u8 z;
    HousePos();
    ~HousePos();
};

class VillagerDataItemView;

typedef BOOL (VillagerDataItemView::*Unk_0207ed1c_Fn)(u16 *);

struct Unk_0207efac_Item {
    u16 v;
    Unk_0207efac_Item() {}
};

class VillagerDataItemView {
public:
    u8 unk_000[0x6ac];
    u16 furniture[10];
    u8 unk_6c0[0x14];
    u8 movedFromTown[0x14];
    u8 housePos[2];
    u8 unk_6ea[8];
    u8 roomLayout;

    BOOL tryPlaceFossil(u16 *item, s32 mode, s32 type, u8 a, u8 b);
    s32 getFossilPartIndex(u16 *item);
    s32 freeSlotInRange(s32 mode, s32 type, u8 a, u8 c);
    s32 pickNonTrendSlot(s32 type, s32 lo, s32 hi);
    BOOL matchesTrend(u16 *p, s32 type);
    Unk_0207ed1c_Fn getTrendFilter(s32 type);
    BOOL isTasteFurniture(u16 *item);
    BOOL isShirtItem(u16 *p);
    BOOL isFossilItem(u16 *p);
    BOOL isFishItem(u16 *p);
    BOOL isInsectItem(u16 *p);
    s32 findCheapestSlot(s32 lo, s32 hi);
    s32 pickEmptySlot(s32 lo, s32 hi);
    BOOL getSlotRange(s32 *lo, s32 *hi, s32 mode, s32 type, u8 flag);
    u16 *getFurniture();
    Unk_0207efac_Item getFurnitureAt(s32 idx);
    s32 getSlotFromLayoutCode(u16 *p);
    BOOL isValidFurnitureIndex(s32 idx);
    s32 getInfo28Item();
    BOOL getRoomLayout(s32 *o1, s32 *o2);
    void placeHouseMarker();
    void setHousePos(u8 *p);
    u8 *getHousePos();
    s32 hasHousePos();
    s32 clearHousePos();
    u8 *getMovedFromTownId();
    void setGreetingFor(void *a, s32 n, void *c);
    BOOL getGreetingFor(void *a, void *c);
    void setComplimentFor(void *a, s32 n, void *c);
    void getComplimentFor(void *a, void *c);
};

struct MsgString9B {
    u32 v[7];
    MsgString9B();
    ~MsgString9B();
};

struct Unk_0207f804_Str {
    u32 v[6];
    Unk_0207f804_Str();
    ~Unk_0207f804_Str();
    void func_02094294();
};

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
    long long townTune;
    struct {
        u16 f0 : 1;
        u16 f1 : 1;
        u16 f2 : 1;
        u16 f3 : 1;
        u16 f4 : 1;
        u16 f5 : 1;
        u16 f6 : 1;
        u16 f7 : 1;
        u16 pad8 : 3;
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
    u32 villagerId[3];
    u16 receivedItems[4];
    u8 movedFromTown[0xa];
    u8 catchphrase[0xa];
    u32 housePos;
    u16 shirt;
    u8 pad_6ee[2];
    u8 moveInKind;
    u8 pad_6f1;
    u8 roomLayout;
    u8 pad_6f3;
    u8 umbrella;
    u8 pad_6f5;
    u8 unk_6f6[0xa];

    s32 receiveLetterFrom(u32 id);
    void *getLetter();
    void *getPattern();
    void *getVillagerId();
    void setup(u32 id, u32 a, u32 b, u8 c);
    void copyFrom(void *src);
    void clear();
    ~VillagerData();
    VillagerData();
};

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

      s32 form;
      u8 attrA;
      u8 attrB;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

      MsgStringAttr attr;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

      u32 length;
      MsgStringAttr attr;
};

class MsgString17B : public MsgString {
public:
    MsgString17B();
    virtual ~MsgString17B();
    virtual u32 capacity();
    virtual u8 *data();
      u8 text[0x11];
};

class EncodedString10 : public EncodedString {
public:
    EncodedString10();
    virtual ~EncodedString10();
    virtual u32 capacity();
    virtual u8 *data();
    void copyTo(void *dst, s32 n);
      u8 bytes[0xa];
};

class MsgString17 : public MsgString {
public:
    MsgString17();
    virtual ~MsgString17();
    virtual u32 capacity();
    virtual u8 *data();
      u8 text[0x11];
};

class EncodedString16 : public EncodedString {
public:
    EncodedString16();
    virtual ~EncodedString16();
    virtual u32 capacity();
    virtual u8 *data();
      u8 bytes[0x10];
};

class MsgString11 : public MsgString {
public:
    MsgString11();
    virtual ~MsgString11();
    virtual u32 capacity();
    virtual u8 *data();
      u8 text[0xb];
};

class EncodedString16B : public EncodedString {
public:
    EncodedString16B();
    virtual ~EncodedString16B();
    virtual u32 capacity();
    virtual u8 *data();
      u8 bytes[0x10];
};


struct VillagerState {
    u8 b[0x2c];
    VillagerState();
    ~VillagerState();
};
struct VillagerStateTable {
    VillagerState entries[8];
    u8 unk_160[0x10];
};
struct SpNpcAnimHeapPool {
    void *p[4];
    SpNpcAnimHeapPool();
    ~SpNpcAnimHeapPool();
};
struct VillagerAnimHeapPool {
    void *p[8];
    VillagerAnimHeapPool();
    ~VillagerAnimHeapPool();
};
struct NpcTexPatBufPool {
    void *p[5];
    NpcTexPatBufPool();
    ~NpcTexPatBufPool();
};
struct Unk_020cc148_E {
    s32 k;
    void (*f)(void);
};


// ---- unk_02077a54.cpp
namespace nA {
extern "C" {

typedef u32 Unk_02077a54_Fn;
struct Unk_020781ec_Elem {
    u8 pad_00[0x1d];
    u8 flags;
    u8 pad_1e[0x2c - 0x1e];
};
struct Unk_020781ec_Data {
    Unk_020781ec_Elem entries[8];
    s8 fleaVillager;
    s8 greeter;
    s8 birthdayHost;
    s8 birthdayGuest;
    s8 fleaMarketBuyer;
    u8 pad_165[3];
    s32 idleFrames;
    s8 birthdayVisitor;
};
extern void *gCommManager;
extern void *sSpNpcAnimHeapPool[];
extern void *sVillagerAnimHeapPool[];
extern void *sNpcTexPatBufPool[];
extern void *gSpNpcAnimPoolHeap;
extern void *gVillagerAnimPoolHeap;
extern void *gNpcTexPatBufHeap;
extern u8 gFieldSceneKind;
extern void *gSceneBlockMap;
extern void *gCurrentHeap;
BOOL _ZN11CommManager8isOnlineEv(void *);
void _ZN11CommManager11beginRecordEv(void *);
void _ZN11CommManager11writeRecordEPhj(void *, void *, s32);
void _ZN11CommManager9endRecordEjj(void *, s32, s32);
void CommVillager_PackHeader(u8 *, s32, s32);
void *SpNpcAnimHeapPool_Get(void **, s32);
void *VillagerAnimHeapPool_Get(void **, s32);
void *NpcTexPatBufPool_Get(void **, s32);
void SpNpcAnimHeapPool_Free(void **);
void SpNpcAnimHeapPool_Alloc(void **);
void VillagerAnimHeapPool_Free(void **);
void VillagerAnimHeapPool_Alloc(void **);
void NpcTexPatBufPool_Free(void **);
void NpcTexPatBufPool_Alloc(void **);
void func_020e885c(void *);
void func_020e877c(void *);
void *FrameHeap_Create(s32, void *);
void *Heap_AllocAligned(void *, s32, s32);
void File_LoadToBuffer(void *, void *, s32);
void SpNpcAnimPoolHeap_Destroy();
void SpNpcAnimPoolHeap_Create();
void VillagerAnimPoolHeap_Destroy();
void VillagerAnimPoolHeap_Create();
void NpcTexPatBufHeap_Destroy();
void NpcTexPatBufHeap_Create();
void NpcModelHeap_Destroy();
void NpcModelHeap_Create(void *);
s32 NpcSpawn_GetSpNpcSlotCount();
s32 Town_GetMaxOutdoorVillagers();
s32 Scene_GetCurrent();
s32 Scene_GetMaxCharacters(s32);
s32 Scene_GetMaxPlayers(s32);
void FieldPos_ToUnit(s32 *, s32 *, s32);
void *BlockMap_GetItemPtr(void *, s32, s32, s32, s32, s32);
BOOL _ZN8BlockMap10isWalkableEii(void *, s32, s32);
BOOL Item_IsNormalItem(void *);
BOOL Field_IsUnitOccupied(s32, s32);
s32 Field_FindPlayerAtUnit(s32, s32);
BOOL TownMap_FindBuildingAbove(s32, s32, s32, s32 *, s32 *);
BOOL TownMap_IsUnitWalkable(s32, s32, void *);
BOOL Item_IsFurniture(void *);
BOOL Item_IsTreeStage0(void *);
s32 NpcRegistry_FindAt(s32, s32);
void *PlayerActor_GetBodyPos(s32);
s32 PlayerActor_GetCharacter(s32);
struct Unk_020781ec_Data *VillagerStates_Get();
void *VillagerState_GetTalkRepeat(void *);
s32 TalkRepeat_Reset(void *);
s32 VillagerStateTable_ResetRuntime(void *);
s32 VillagerStateTable_Destroy(void *);
s32 VillagerStateTable_Init(void *);
void *_ZN12VillagerData13getVillagerIdEv(void *);
BOOL _ZN10VillagerId7isValidEv(void *);
s32 Villager_GetResidentStatus(void *);
s32 Villager_PickShownFurniture(void *);
void *Villager_GetMemory(void *, s32);
BOOL VillagerMemory_IsUsed(void *);
void _ZN14VillagerMemory16clearTalkedTodayEv(void *);
void _ZN14VillagerMemory22clearPartyGiftReceivedEv(void *);
void _ZN14VillagerMemory17clearPartyGreetedEv(void *);
void _ZN14VillagerMemory23clearBirthdayLetterSentEv(void *);
void _ZN14VillagerMemory22clearNewYearLetterSentEv(void *);
void _ZN14VillagerMemory22clearFleaMarketVisitedEv(void *);
void _ZN14VillagerMemory20clearFortuneGreetingEv(void *);
void _ZN23VillagerDataProfileView19sendBirthdayLettersEPv(void *, s32);
void _ZN23VillagerDataProfileView18sendNewYearLettersEPv(void *, s32);
void CommSend_VillagerMemoryInit(s32 a, s32 b);
void CommVillager_UnpackHeader(s32 *a, s32 *b, u8 *p);
void CommVillager_PackHeader(u8 *p, s32 a, s32 b);
void *SpNpcAnimHeapRef_GetHeap(s32 *p);
void SpNpcAnimHeapRef_Assign(s32 *p, s32 x);
void SpNpcAnimHeapRef_Deinit();
void SpNpcAnimHeapRef_Init(s32 *p);
void *VillagerAnimHeapRef_GetHeap(s32 *p);
void VillagerAnimHeapRef_Assign(s32 *p, s32 x);
void VillagerAnimHeapRef_Deinit();
void VillagerAnimHeapRef_Init(s32 *p);
void *NpcTexPatBufRef_GetBuffer(s32 *p);
void NpcTexPatBufRef_LoadFile(s32 *p, void *dst);
void NpcTexPatBufRef_Assign(s32 *p, s32 v);
void NpcTexPatBufRef_Set(s32 *p, s32 v);
static inline BOOL Unk_02077d58_IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}
void *SpNpcAnimHeapRef_GetHeap(s32 *p);
void SpNpcAnimHeapRef_Assign(s32 *p, s32 x);
void SpNpcAnimHeapRef_Deinit();
void SpNpcAnimHeapRef_Init(s32 *p);
void *VillagerAnimHeapRef_GetHeap(s32 *p);
void VillagerAnimHeapRef_Assign(s32 *p, s32 x);
void VillagerAnimHeapRef_Deinit();
void VillagerAnimHeapRef_Init(s32 *p);
void *NpcTexPatBufRef_GetBuffer(s32 *p);
void NpcTexPatBufRef_LoadFile(s32 *p, void *dst);
void NpcTexPatBufRef_Assign(s32 *p, s32 v);
void NpcTexPatBufRef_Set(s32 *p, s32 v);
void NpcTexPatBufRef_Deinit();
void NpcTexPatBufRef_Init(s32 *p);
void SpNpcAnimHeapPool_Free(void **p);
void SpNpcAnimHeapPool_Alloc(void **p);
void *SpNpcAnimHeapPool_Get(void **p, s32 i);
void SpNpcAnimHeaps_Create(void *);
void VillagerAnimHeaps_Destroy();
void NpcTexPatBufs_Destroy();
void SpNpcAnimHeaps_Destroy();
void SpNpcAnimHeaps_Create(void *);
void _ZN17SpNpcAnimHeapPoolD1Ev();
void _ZN17SpNpcAnimHeapPoolC1Ev(void **p);
void VillagerAnimHeapPool_Free(void **p);
void VillagerAnimHeapPool_Alloc(void **p);
void *VillagerAnimHeapPool_Get(void **p, s32 i);
void VillagerAnimHeaps_Destroy();
void VillagerAnimHeaps_Create(void *);
void _ZN20VillagerAnimHeapPoolD1Ev();
void _ZN20VillagerAnimHeapPoolC1Ev(void **p);
void NpcTexPatBufPool_Free(void **p);
static inline s32 Unk_02077d58_Count()
{
    s32 t;
    if (Unk_02077d58_IsZero(gFieldSceneKind)) {
        t = Town_GetMaxOutdoorVillagers();
    } else {
        t = Scene_GetMaxCharacters(Scene_GetCurrent());
        t -= Scene_GetMaxPlayers(Scene_GetCurrent());
    }
    return t;
}
void NpcTexPatBufPool_Alloc(void **p);
void *NpcTexPatBufPool_Get(void **p, s32 i);
void NpcTexPatBufs_Create(void *);
void VillagerAnimHeaps_Create(void *);
void SpNpcAnimHeaps_Create(void *);
void NpcTexPatBufs_Destroy();
void NpcTexPatBufs_Create(void *);
void _ZN16NpcTexPatBufPoolD1Ev();
void _ZN16NpcTexPatBufPoolC1Ev(void **p);
s32 func_02077e20();
s32 func_02077e28();
void NpcHeapPools_DestroyAll();
void NpcHeapPools_CreateAll();
BOOL TownMap_FindBuildingAbovePos(s32 a, s32 h, s32 *px, s32 *py);
BOOL TownMap_FindBuildingAbove(s32 x, s32 y, s32 h, s32 *px, s32 *py);
BOOL TownMap_IsPosWalkable(s32 a, void *grid);
static inline BOOL Unk_02077f68_R(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_02077f68_C2(u16 *p)
{
    BOOL k2 = TRUE, k1 = TRUE;
    u32 v = *p;
    if (v != 0x25 && v != 0x5c) k1 = FALSE;
    if (!k1) {
        if (v != 0xc7) k2 = FALSE;
    }
    return k2;
}
static inline BOOL Unk_02077f68_C9(u16 *p)
{
    BOOL h = TRUE, g = TRUE, f = TRUE, e = TRUE, d = TRUE, cc = TRUE, b = TRUE, a = FALSE;
    u32 v = *p;
    if (v <= 5) a = TRUE;
    if (!a) {
        if (v < 6 || v > 11) b = FALSE;
    }
    if (!b) {
        if (v < 12 || v > 17) cc = FALSE;
    }
    if (!cc) {
        if ((v < 18 || v > 25) && v != 0x1c) d = FALSE;
    }
    if (!d) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) e = FALSE;
    }
    if (!e) {
        if (v != 0x1a) f = FALSE;
    }
    if (!f) {
        if (v != 0xa4) g = FALSE;
    }
    if (!g) {
        if (v != 0x1d) h = FALSE;
    }
    return h;
}
BOOL TownMap_IsUnitWalkable(s32 x, s32 y, void *grid);
BOOL Field_IsUnitOccupied(s32 a, s32 b);
s32 Field_FindPlayerAtUnit(s32 x, s32 y);
void SaveVillagers_OnNewDay(u8 *a, s32 b);
void VillagerStates_ResetIdleFrames();
s32 VillagerStates_GetFleaMarketBuyer();
void VillagerStates_SetFleaMarketBuyer(s32 v);
s32 VillagerStates_GetBirthdayVisitor();
s32 VillagerStates_GetBirthdayGuest();
s32 VillagerStates_GetBirthdayHost();
void VillagerStates_SetBirthdayVisitor(s32 v);
void VillagerStates_SetBirthdayGuest(s32 v);
void VillagerStates_SetBirthdayHost(s32 v);
void VillagerStates_ClearFleaVillager();
void VillagerStates_ResetTalkRepeats();
void VillagerStates_ClearUnk1dBit2();
void VillagerStates_ClearUnk1dBit0();
void VillagerStates_ResetRuntime();
void VillagerStates_Destroy();
void VillagerStates_Init();
}
}

// ---- unk_02078384.cpp
namespace nB {
extern "C" {

struct TalkRepeat {
    u16 window;
    u8 grace;
    u8 count;
};
struct Unk_02078614 {
    u8 role;
    u8 presence;
    u32 errand[3];
    u32 trendScores[2];
    u8 mood;
    u8 unk_19;
    u16 moodTimer;
    u8 activity;
    u8 flags;
    u8 talkUrge;
    u32 roomScore;
    u16 roomBonusFlags;
    u16 heldItem;
    TalkRepeat talkRepeat;
};
struct Unk_02078400 {
    Unk_02078614 entries[8];
    s8 fleaVillager;
    s8 greeter;
    s8 birthdayHost;
    s8 birthdayGuest;
    s8 fleaMarketBuyer;
    u32 idleFrames;
    s8 birthdayVisitor;
};
struct Unk_02078738_Pos {
    s32 x;
    s32 y;
    s32 z;
};
struct Unk_02078738_Cell {
    u8 pad_00[0x28];
};
struct Unk_02078738_Grid {
    Unk_02078738_Cell *blocks;
    u32 width;
    u32 height;
};
struct Unk_02078948_Obj {
    Unk_02078948_Obj() {}
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
    u8 pad_04[0x5c - 4];
    s32 position;
    s32 unk_60;
    s32 unk_64;
};
struct Unk_02078864_T {
    s32 v[2];
};
extern u8 gSaveVillagers[];
extern void *gCommManager;
extern Unk_02078400 gVillagerStates;
extern Unk_02078738_Grid *gSceneBlockMap;
extern u8 gFieldSceneKind;
extern u8 sGoodSpeciesPairs[][2];
extern u8 sBadSpeciesPairs[][2];
extern u8 sStarElementCompat[][4];
extern u8 sPersonalityCompat[][6];
BOOL _ZN11CommManager12isSlotActiveEi(void *o, u32 v);
BOOL _ZN11CommManager8isOnlineEv(void *o);
BOOL Scene_InVillagerHouse();
BOOL Scene_InTown();
void _ZN12ErrandRecord5clearEv(void *p);
void _ZN12ErrandRecord13func_0209ada0Ev(void *p);
void _ZN12ErrandRecord4initEv(void *p);
void TrendScores_Clear(void *p);
void TrendScores_Destruct(void *p);
void TrendScores_Construct(void *p);
s32 MI_CpuFill8(void *d, s32 v, s32 n);
void *SaveVillagers_Get(void *t, s32 i);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
BOOL _ZN10VillagerId7isValidEv(void *p);
u32 VillagerId_GetPersonality(void *p);
void *Villager_GetPlan(void *p);
void *VillagerPlanBlock_GetPlan(void *p);
BOOL _ZN12VillagerPlan20isTrendOlderThanWeekEPv(void *a, void *b);
void Clock_GetDateTime(void *p);
void Villager_RecordPlayerActivity(void *o, u32 kind, s32 v);
Unk_02078948_Obj *NpcRegistry_FindVillagerByHandle();
BOOL MapBlock_HasAllAttr(void *cell, s32 v);
void _ZN12VillagerDataD1Ev(void *p);
void _ZN12VillagerDataC1Ev(void *p);
u8 *Villager_GetInfo(void *p);
u32 Villager_GetAnimalKind(void *p);
u32 Villager_GetStarSign(void *p);
BOOL SaveVillagers_IsValidIndex(void *p);
s32 VillagerRelations_PairIndex(void *a, void *p, void *q);
BOOL VillagerRelations_IsValidIndex(void *a, s32 k);
s32 VillagerRelations_AddAt(void *a, s32 k, s32 r);
void VillagerStateTable_ResetRuntime(Unk_02078614 *e);
void VillagerStateTable_Destroy();
Unk_02078614 *VillagerStateTable_GetEntry(Unk_02078400 *m, s32 i);
Unk_02078400 *VillagerStates_Get();
void VillagerStateTable_Init(Unk_02078400 *m);
BOOL VillagerStates_IsValidIndex(s32 i);
s32 TalkRepeat_GetLevel(TalkRepeat *t);
void TalkRepeat_StartWindow(TalkRepeat *t);
void TalkRepeat_Count(TalkRepeat *t);
void TalkRepeat_Tick(TalkRepeat *t, s32 v);
void TalkRepeat_Reset(TalkRepeat *t);
void TalkRepeat_Destruct(TalkRepeat *t);
void TalkRepeat_Construct(TalkRepeat *t);
TalkRepeat *VillagerState_GetTalkRepeat(Unk_02078614 *e);
void VillagerState_ClearHeldItem(Unk_02078614 *e);
void VillagerState_SetHeldItem(Unk_02078614 *e, u16 *p);
u16 *VillagerState_GetHeldItem(Unk_02078614 *e);
void VillagerState_DoubleTalkUrge(Unk_02078614 *e);
void VillagerState_SetUnk1dBit1(Unk_02078614 *e);
void VillagerState_TickMoodTimer(Unk_02078614 *e);
u32 VillagerState_GetMoodTimer(Unk_02078614 *e);
void VillagerState_SetMoodTimer(Unk_02078614 *e, u16 v);
void VillagerState_AddMoodTimer(Unk_02078614 *e, s32 v);
void VillagerState_SetMood(Unk_02078614 *e, u32 v);
u32 VillagerState_GetMood(Unk_02078614 *e);
void VillagerState_SetActivity(Unk_02078614 *e, u32 v);
u32 VillagerState_GetActivity(Unk_02078614 *e);
void *VillagerState_GetErrand(Unk_02078614 *e);
void VillagerState_SetPresence(Unk_02078614 *e, u32 v);
u32 VillagerState_GetPresence(Unk_02078614 *e);
void VillagerState_ResetRole(Unk_02078614 *e);
void VillagerState_SetRole(Unk_02078614 *e, u32 v);
u32 VillagerState_GetRole(Unk_02078614 *e);
void VillagerState_Init(Unk_02078614 *e);
Unk_02078614 *_ZN13VillagerStateD1Ev(Unk_02078614 *e);
Unk_02078614 *_ZN13VillagerStateC1Ev(Unk_02078614 *e);
void VillagerTrend_TickIdle();
void VillagerTrend_NotifyIdle();
void VillagerTrend_NotifyUnk6(Unk_02078738_Pos *p);
BOOL TownMap_HasAttr8AtPos(Unk_02078738_Pos *p);
void VillagerTrend_NotifyUnk5(Unk_02078738_Pos *p);
void VillagerTrend_OnFurnitureBought();
void VillagerTrend_OnClothesBought();
void VillagerTrend_OnItemDug(Unk_02078738_Pos *p);
void VillagerTrend_OnInsectCaught(Unk_02078738_Pos *p);
void VillagerTrend_OnFishCaught(Unk_02078738_Pos *p);
void SaveVillagers_NotifyPlayerActivity(u32 kind, Unk_02078738_Pos *p);
BOOL Villager_IsActorInBox(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1);
void func_020789a8();
void *VillagerTransfer_DestructVillager(void *p);
void *VillagerTransfer_ConstructVillager(void *p);
s32 VillagerRelations_GetScore(void *a, s32 b, s32 c);
s32 Relation_CalcBaseScore(void *a, void *p, void *q);
u32 Relation_GetInfo04Diff(void *a, void *p, void *q);
u32 Relation_GetInfoBonus(void *a, void *p, void *q);
u32 Relation_GetSpeciesScore(void *a, void *p, void *q);
u32 Relation_GetStarElementScore(void *a, void *p, void *q);
s32 Relation_GetPersonalityScore(void *a, void *p, void *q);
s32 VillagerRelations_GetStored(void *a, void *p, void *q);
void VillagerRelations_Add(void *a, void *p, void *q, s32 r);
static inline BOOL Unk_02078384_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
void VillagerStateTable_ResetRuntime(Unk_02078614 *e);
void VillagerStateTable_Destroy();
Unk_02078614 *VillagerStateTable_GetEntry(Unk_02078400 *m, s32 i);
void VillagerStateTable_Init(Unk_02078400 *m);
BOOL VillagerStates_IsValidIndex(s32 i);
s32 TalkRepeat_GetLevel(TalkRepeat *t);
void TalkRepeat_StartWindow(TalkRepeat *t);
void TalkRepeat_Count(TalkRepeat *t);
void TalkRepeat_Tick(TalkRepeat *t, s32 v);
void TalkRepeat_Reset(TalkRepeat *t);
void TalkRepeat_Destruct(TalkRepeat *t);
void TalkRepeat_Construct(TalkRepeat *t);
TalkRepeat *VillagerState_GetTalkRepeat(Unk_02078614 *e);
void VillagerState_ClearHeldItem(Unk_02078614 *e);
void VillagerState_SetHeldItem(Unk_02078614 *e, u16 *p);
u16 *VillagerState_GetHeldItem(Unk_02078614 *e);
void VillagerState_DoubleTalkUrge(Unk_02078614 *e);
void VillagerState_SetUnk1dBit1(Unk_02078614 *e);
void VillagerState_TickMoodTimer(Unk_02078614 *e);
u32 VillagerState_GetMoodTimer(Unk_02078614 *e);
void VillagerState_SetMoodTimer(Unk_02078614 *e, u16 v);
void VillagerState_AddMoodTimer(Unk_02078614 *e, s32 v);
void VillagerState_SetMood(Unk_02078614 *e, u32 v);
u32 VillagerState_GetMood(Unk_02078614 *e);
void VillagerState_SetActivity(Unk_02078614 *e, u32 v);
u32 VillagerState_GetActivity(Unk_02078614 *e);
void *VillagerState_GetErrand(Unk_02078614 *e);
void VillagerState_SetPresence(Unk_02078614 *e, u32 v);
u32 VillagerState_GetPresence(Unk_02078614 *e);
void VillagerState_ResetRole(Unk_02078614 *e);
void VillagerState_SetRole(Unk_02078614 *e, u32 v);
u32 VillagerState_GetRole(Unk_02078614 *e);
void VillagerState_Init(Unk_02078614 *e);
Unk_02078614 *_ZN13VillagerStateD1Ev(Unk_02078614 *e);
Unk_02078614 *_ZN13VillagerStateC1Ev(Unk_02078614 *e);
void VillagerTrend_TickIdle();
void VillagerTrend_NotifyIdle();
void VillagerTrend_NotifyUnk6(Unk_02078738_Pos *p);
static inline Unk_02078738_Cell *Unk_02078738_GetCell(Unk_02078738_Grid *g, u32 x, u32 y) {
    if (x < g->width && y < g->height && g->blocks != NULL) {
        return &g->blocks[y * g->width + x];
    }
    return NULL;
}
BOOL TownMap_HasAttr8AtPos(Unk_02078738_Pos *p);
void VillagerTrend_NotifyUnk5(Unk_02078738_Pos *p);
void VillagerTrend_OnFurnitureBought();
void VillagerTrend_OnClothesBought();
void VillagerTrend_OnItemDug(Unk_02078738_Pos *p);
void VillagerTrend_OnInsectCaught(Unk_02078738_Pos *p);
void VillagerTrend_OnFishCaught(Unk_02078738_Pos *p);
void SaveVillagers_NotifyPlayerActivity(u32 kind, Unk_02078738_Pos *p);
void func_020789a8();
void *VillagerTransfer_DestructVillager(void *p);
void *VillagerTransfer_ConstructVillager(void *p);
s32 VillagerRelations_GetScore(void *a, s32 b, s32 c);
s32 Relation_CalcBaseScore(void *a, void *p, void *q);
u32 Relation_GetInfo04Diff(void *a, void *p, void *q);
u32 Relation_GetInfoBonus(void *a, void *p, void *q);
u32 Relation_GetSpeciesScore(void *a, void *p, void *q);
u32 Relation_GetStarElementScore(void *a, void *p, void *q);
s32 Relation_GetPersonalityScore(void *a, void *p, void *q);
s32 VillagerRelations_GetStored(void *a, void *p, void *q);
void VillagerRelations_Add(void *a, void *p, void *q, s32 r);
Unk_02078400 *VillagerStates_Get();
BOOL Villager_IsActorInBox(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1);
}
}

// ---- unk_02078ca8.cpp
namespace nC {
extern "C" {

struct Unk_02078d6c_Slot { u8 pad[0x2c]; };
struct Unk_02078d6c_Time { u32 lo; u32 hi; };
struct OutdoorSchedule {
    u8 pad[8];
    s8 outdoorSlots[4];
    u32 lastRerollTime;
    u32 lastRerollTimeHi;
};
struct Unk_02079524_Self {
    u8 pad[0x38ec];
    u16 unk_38ec_0 : 1;
    u16 unk_38ec_1 : 1;
    u16 unk_38ec_2 : 3;
};
struct Unk_020794ac_Entry { u8 *entries; u8 count; };
s8 *VillagerStates_Get();
void VillagerState_SetPresence(void *, s32);
void VillagerState_SetRole(void *, s32);
s32 SaveVillagers_IsValidIndex(s32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);
void Clock_GetDateTime(void *);
s32 _ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(s32);
s32 Town_GetMaxOutdoorVillagers();
s32 SaveVillagers_CountImpl(void *);
s32 VillagerStates_GetBirthdayVisitor(void *);
s32 PlayerData_GetCurrent(void *);
s32 _ZN12Unk_02097ff48testFlagEj(s32, s32);
s32 VillagerId_GetPersonality(s32);
s32 Personality_IsAsleep(s32, s32);
s32 Item_GetSaveData();
s32 SaveVillagers_GetUnk3830Index(s32);
s32 Villager_CanGoOutdoors(void *);
s32 Random_GlobalBelow(s32);
s32 DateTime_IsInvalid(void *);
s32 DateTime_Compare(void *, void *, s32);
s32 DateTime_DiffMinutes(void *, void *);
s32 _ZN8PlayerId7isValidEv(s32);
s32 Villager_FindMemory(void *, s32);
s32 Villager_GetWhereabouts(void *);
s32 Insect_GetSpawnTable(s32);
void Villager_ClearTalkedToday(void *);
s32 SaveVillagers_FindIndex(void *, s32);
BOOL VillagerRelations_IsValidIndex(void *a, u32 i);
BOOL OutdoorSchedule_SetOrderEntry(u8 *self, s32 a, s32 v);
BOOL OutdoorSchedule_SetOutdoorSlot(OutdoorSchedule *self, u32 i, s32 v);
s32 VillagerRelations_PairIndex(s32 a, s32 b, s32 c);
void OutdoorSchedule_Apply(OutdoorSchedule *self, u8 *p);
void OutdoorSchedule_Reroll(OutdoorSchedule *self, u8 *p);
void OutdoorSchedule_ApplySleep(OutdoorSchedule *self, u8 *p, s32 x);
void OutdoorSchedule_AddBirthdayVisitor(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void OutdoorSchedule_AssignOutdoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void OutdoorSchedule_AssignIndoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void OutdoorSchedule_AddBirthdayVisitor(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void OutdoorSchedule_AssignOutdoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void OutdoorSchedule_AssignIndoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void OutdoorSchedule_PickRandom(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit);
BOOL OutdoorSchedule_IsRerollDue(OutdoorSchedule *self, void *out);
s32 OutdoorSchedule_FindOutdoorSlotImpl(OutdoorSchedule *self, s32 x);
void OutdoorSchedule_ClearOutdoor(OutdoorSchedule *self);
void OutdoorSchedule_RemoveFromOrder(s8 *p, s32 x);
void OutdoorSchedule_RemoveOutdoor(OutdoorSchedule *self, s32 x);
s32 VillagerFlea_GetMonthlyChance();
void OutdoorSchedule_ClearOrder(void *a, void *b);
void OutdoorSchedule_CopyOrder(void *a, void *b, void *c);
void VillagerRelations_AddAt(s8 *a, s32 i, s32 d);
void VillagerRelations_ResetSlot(u8 *a, s32 x);
s32 VillagerRelations_PairIndex(s32 a, s32 b, s32 c);
BOOL VillagerRelations_IsValidIndex(void *a, u32 i);
void VillagerRelations_Clear(void *p);
void VillagerRelations_Destruct();
void VillagerRelations_Construct();
void OutdoorSchedule_Update(OutdoorSchedule *self, u8 *p, s32 keep);
void OutdoorSchedule_Apply(OutdoorSchedule *self, u8 *p);
void OutdoorSchedule_Reroll(OutdoorSchedule *self, u8 *p);
void OutdoorSchedule_ApplySleep(OutdoorSchedule *self, u8 *p, s32 x);
void OutdoorSchedule_AddBirthdayVisitor(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void OutdoorSchedule_AssignOutdoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void OutdoorSchedule_AssignIndoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void OutdoorSchedule_PickRandom(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit);
BOOL OutdoorSchedule_IsRerollDue(OutdoorSchedule *self, void *out);
void OutdoorSchedule_ForceReroll(OutdoorSchedule *p);
void OutdoorSchedule_InitOrder(s8 *out, u8 *p);
s32 OutdoorSchedule_FindOutdoorSlot(OutdoorSchedule *a, s32 b);
void OutdoorSchedule_Remove(OutdoorSchedule *self, s32 x);
void OutdoorSchedule_RemoveOutdoor(OutdoorSchedule *self, s32 x);
s32 OutdoorSchedule_FindOutdoorSlotImpl(OutdoorSchedule *self, s32 x);
BOOL OutdoorSchedule_SetOutdoorSlot(OutdoorSchedule *self, u32 i, s32 v);
void OutdoorSchedule_ClearOutdoor(OutdoorSchedule *self);
void OutdoorSchedule_RemoveFromOrder(s8 *p, s32 x);
void OutdoorSchedule_AddToOrder(s8 *p, s32 x);
BOOL OutdoorSchedule_SetOrderEntry(u8 *self, s32 a, s32 v);
void OutdoorSchedule_CopyOrder(void *a, void *b, void *c);
void OutdoorSchedule_ClearOrder(void *a, void *b);
void OutdoorSchedule_Clear(OutdoorSchedule *self);
void OutdoorSchedule_Destruct();
void OutdoorSchedule_Construct(OutdoorSchedule *p);
void SaveVillagers_PickFleaVillager(u8 *p, s32 a1);
s32 VillagerFlea_GetMonthlyChance();
void SaveVillagers_ClearTalkedToday(u8 *p);
BOOL SaveVillagers_IsTuneRequester(Unk_02079524_Self *self, s32 u);
void SaveVillagers_SetTuneRequester(Unk_02079524_Self *self, s32 u);
void SaveVillagers_ClearTuneRequester(Unk_02079524_Self *self);
}
}

// ---- unk_020795c4.cpp
namespace nD {
extern "C" {

void VillagerId_ConstructCopy(void *dst, void *src);
void VillagerId_Destruct(void *);
s32 _ZN10VillagerId7isValidEv(void *);
void _ZN8PlayerIdC1ERKS_(void *, void *);
void _ZN8PlayerIdC1Ev(void *);
s32 _ZN8PlayerId7isValidEv(void *);
void *Letter_GetSenderPlayer(void *);
void *Letter_GetRecipientVillager(void *);
void *PlayerDataArray_GetById(void *, void *);
void *_ZN10PlayerData10getErrandsEv(void *);
void Arbeit_OnLetterSent(void *, void *);
void *SaveVillagers_Find(void *, void *);
void _ZN23VillagerDataProfileView13replyToLetterEPvS0_(void *, void *, void *);
s32 _ZN12VillagerData17receiveLetterFromEj(void *, void *);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 Villager_FindMemory(void *, void *);
void MI_CpuCopy8(void *src, void *dst, u32 size);
s32 Date_IsAfterOrEqual(void *, void *);
s32 Date_DaysBetween(void *, void *);
void VillagerStates_SetBirthdayVisitor(s32);
s32 Scene_GetCurrent();
void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff48testFlagEj(void *, s32);
void *_ZN10PlayerData12getInventoryEv(void *);
s32 _ZN15PlayerInventory15findEmptyPocketEv(void *);
void *_ZN10PlayerData11getPlayerIdEv(void *);
u8 *_ZN12Unk_02097ff411getBirthdayEv(void *);
void Clock_GetDateTime(void *);
s32 _ZN12Unk_02097ff419getBirthdayTalkYearEv(void *);
s32 SaveVillagers_IsValidIndex(s32);
void OutdoorSchedule_ForceReroll(void *);
s32 Villager_GetResidentStatus(void *);
void *Villager_GetState(void *);
s32 _ZN14VillagerMemory13getFriendshipEv(void *);
s32 Random_PickSetBit(u32, s32, s32);
s32 VillagerStates_SetFleaMarketBuyer(s32);
s32 _ZN14VillagerMemory19isFleaMarketVisitedEv(void *);
s32 _ZN14VillagerMemory18setFortuneGreetingEv(void *);
s32 VillagerState_GetPresence(void *);
s32 VillagerStates_GetBirthdayHost();
s32 VillagerStates_GetBirthdayGuest();
s32 VillagerState_GetRole(void *);
void VillagerState_ResetRole(void *);
void VillagerState_SetRole(void *, s32);
void VillagerStates_SetBirthdayHost(s32);
void VillagerStates_SetBirthdayGuest(s32);
s32 SaveVillagers_FindBirthdayVillager(void *, void *);
s32 SaveVillagers_PickBirthdayGuest(void *, s32);
s32 Villager_CanAttendParty(void *);
s32 SaveVillagers_GetUnk3830Index(void *);
void _ZN18SickVillagerRecord11resetRecordEv(void *);
s32 EventSchedule_CollectDayAll(void *, void *);
s32 VillagerRelations_GetScore(void *, s32, s32);
void *PlayerData_GetResident(void *, s32);
s32 Villager_GetUpcomingBirthdayDay(void *, s32, void *);
s32 _ZN12Unk_02097ff413func_02098198Ej(void *, s32);
void _ZN12Unk_02097ff413func_02098188Ejj(void *, s32, s32);
s32 Villager_SendBirthdayNoticeLetter(void *, void *);
void VillagerState_SetMood(void *, s32);
void VillagerState_SetMoodTimer(void *, s32);
void RoomScoreEvaluator_Construct(void *);
void RoomScoreEvaluator_Destruct(void *);
s32 HappyRoom_EvaluateVillagerRoom(void *, s32, u16 *, s32 *, s32 *, s32 *);
void SaveVillagers_UpdateRoomInfo(void *, s32);
void SaveVillagers_GiveFortuneGreeting(void *, void *);
void SaveVillagers_DoubleTalkUrges(void *);
s32 _ZN11CommManager8isOnlineEv(void *);
s32 _ZN11CommManager12isSlotActiveEi(void *, s32);
void Villager_HalveTalkUrge(void *);
s32 SaveVillagers_FindBestFriendIndexOf(void *, void *);
s32 SaveVillagers_PickFleaMarketBuyer(void *);
extern u8 gSavePlayers[];
extern CommManager *gCommManager;
struct Unk_020795c4_Buf {
    u32 v[5];
    Unk_020795c4_Buf(void *p) { _ZN8PlayerIdC1ERKS_(this, p); }
    ~Unk_020795c4_Buf() { _ZN8PlayerIdC1Ev(this); }
};
struct Unk_020795c4_Str {
    u16 pad;
    u8 v[12];
    Unk_020795c4_Str(void *p) { VillagerId_ConstructCopy(v, p); }
    ~Unk_020795c4_Str() { VillagerId_Destruct(v); }
};
struct Unk_020796d4_Obj {
    u8 pad_00[0x38c0];
    u8 nicknameDate[4];
};
s32 SaveVillagers_DeliverLetter(void *self, void *p);
BOOL SaveVillagers_AllKnowPlayer(u8 *self, void *p);
void SaveVillagers_SetNicknameDate(Unk_020796d4_Obj *self, void *p);
BOOL SaveVillagers_IsNicknameCooldownOver(Unk_020796d4_Obj *self, void *p);
struct Unk_02079748_B {
    u8 b[8];
};
void SaveVillagers_PickPlayerBirthdayVisitor(u8 *self, void *p);
s32 SaveVillagers_FindBestFriendIndexOf(void *self0, void *p);
void SaveVillagers_PickFleaMarketBuyerNow(void *self);
s32 SaveVillagers_PickFleaMarketBuyer(void *self0);
void SaveVillagers_ApplyBirthdayParty(u8 *self);
void SaveVillagers_UpdateBirthdayParty(u8 *self);
s32 SaveVillagers_FindBirthdayVillager(void *self0, void *p0);
s32 SaveVillagers_PickBirthdayGuest(void *self0, s32 x);
void SaveVillagers_UpdateBirthdayNotices(u8 *self);
void SaveVillagers_ResetMoods(u8 *self);
void SaveVillagers_UpdateAllRoomInfo(void *self);
struct Unk_02079ce8_Obj {
    u8 pad_00[0x20];
    s32 roomScore;
    u16 roomBonusFlags;
};
void SaveVillagers_UpdateRoomInfo(void *self, s32 idx);
void SaveVillagers_ApplyGoodFortune(void *self, void *p);
void SaveVillagers_GiveFortuneGreeting(void *self0, void *p);
void SaveVillagers_ApplyBadFortune(void *self0);
}
}

// ---- unk_02079edc.cpp
namespace nE {
extern "C" {

struct Unk_02079f54_Date {
    u32 v[2];
};
struct Unk_0207a104_Date {
    u8 b[16];
};
struct Unk_0207a550_Rec {
    u8 pad_00[0x20];
    u8 unk_20 : 3;
};
struct Unk_0207a3b8_Item {
    u16 eventId;
    u8 pad_02[10];
};
extern CommManager *gCommManager;
extern u32 sVillagerEventIds[];
extern u16 sMonthlySickRoll[];
extern u8 gSavePlayers[];
extern u8 sErrandKindTaken[];
extern u8 sErrandVillagerDone[];
extern u8 sReservedErrandKinds[];
void *_ZN12VillagerData13getVillagerIdEv(void *p);
void Villager_DoubleTalkUrge(void *p);
void Villager_InitTalkUrge(void *p, void *q);
void Clock_GetDateTime(void *d);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void MI_CpuFill8(void *dst, s32 v, s32 n);
s32 EventSchedule_CollectDayAll(void *buf, void *d);
s32 DateTime_AddDays(void *d, s32 n);
s32 Event_GetState(u32 a, void *d, s32 z);
u32 EventAnnounce_GetCurrentEvent();
void *Villager_GetState(void *p);
s32 VillagerState_GetPresence(void *p);
s32 VillagerState_GetErrand(void *p);
s32 Random_PickSetBit(u32 mask, s32 cnt, s32 n);
u8 *VillagerStates_Get();
s32 Villager_GetResidentStatus(void *p);
void Clock_GetDate(void *d);
s32 Date_IsAfterOrEqual(void *d, void *e);
void _ZN18SickVillagerRecord11resetRecordEv(void *p);
s32 _ZN18SickVillagerRecord11isRecoveredEv(void *p);
s32 _ZN18SickVillagerRecord19isRecentlyRecoveredEP17Unk_020994cc_Date(void *p, void *d);
s32 Date_DaysBetween(void *d, void *e);
s32 DateTime_Make(void *d, void *e, s32 a, s32 b, s32 c);
s32 DateTime_SubDays(void *d, s32 n);
BOOL SaveVillagers_CanSomeoneGetSick(void *p);
s32 SaveVillagers_PickSickVillager(void *p, u32 idx);
void *SaveVillagers_Get(void *p, s32 i);
void _ZN18SickVillagerRecord13startSicknessEP17Unk_020030d8_R256Ph(void *p, void *q, void *d);
void OutdoorSchedule_ForceReroll(void *p);
s32 _ZN18SickVillagerRecord16hasTodaysVisitorEv(void *p);
void *_ZN18SickVillagerRecord10getVisitorEj(void *p, u32 i);
void _ZN8PlayerId5clearEv(void *p);
s32 SaveVillagers_Count(void *p);
s32 Villager_IsFreeOfPlayerErrands(void *p);
s32 Villager_GetUpcomingBirthdayDay(void *p, s32 a, void *d);
u8 *Villager_GetInfo();
s32 Random_GlobalBelow(s32 n);
s32 _ZN18SickVillagerRecord13func_0209978cEv(void *p);
s32 _ZN12ErrandRecord8isActiveEv(s32 p);
s32 _ZN18SickVillagerRecord13getVillagerIdEv(void *p);
s32 SaveVillagers_FindIndex(void *p, s32 i);
s32 Villager_MaybeCopyAblePattern(s32 a, s32 b);
void _ZN23VillagerDataProfileView8setShirtEPt(void *p, void *d);
void Villager_UpdatePlanErrand(void *p);
s32 Villager_GetPlan(void *p);
s32 VillagerPlanBlock_GetErrand(s32 p);
s32 PlanErrand_GetRecord(s32 p);
s32 _ZN12ErrandRecord7getStepEv(s32 p);
s32 PlanErrand_GetPlayer(s32 p);
void Villager_PlaceReceivedItems(void *p);
void *PlayerData_GetResident(void *t, s32 i);
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
BOOL _ZN8PlayerId7isValidEv(s32 p);
void *_ZN10PlayerData10getErrandsEv(void *p);
s32 _ZN12ErrandRecord7getKindEv(void *p);
s32 ErrandRecord_GetTime(void *p);
s32 DateTime_DiffDays(void *p, s32 q);
void HouseVisitInvite_Clear(void *p);
void _ZN12ErrandRecord7setStepEh(void *p, s32 v);
BOOL Villager_SendHouseVisitLetter(u32 a, s32 b, void *c);
BOOL SaveVillagers_ShouldAssignErrands(void *p);
s32 PlayerData_GetCurrent(void *p);
s32 Errand_GetClassIndex(u32 *o, u32 v);
u32 Villager_GetErrandKind(void *b, void *p, s32 a);
s32 Errand_GetClass();
s32 VillagerPlanBlock_GetPlan(s32 p);
s32 _ZN12VillagerPlan8hasTrendEv(s32 p);
s32 _ZN12VillagerPlan13getStateGroupEv(s32 p);
s32 _ZN12VillagerPlan8getStateEv(s32 p);
s32 _ZN12ErrandRecord5startEhPth(s32 a, s32 b, void *c, s32 d);
s32 SaveVillagers_GetUnk3830(void *p);
s32 SaveVillagers_GetUnk3830Index(void *p);
void SaveVillagers_AdvanceSickDay(void *p);
void SaveVillagers_AssignErrands(void *p);
void SaveVillagers_DoubleTalkUrges(u8 *p);
void SaveVillagers_InitTalkUrges(u8 *p, void *q);
s32 VillagerEvent_FindUpcomingIndex(u32 n, void *src);
s32 VillagerEvent_GetTodayIndex();
void SaveVillagers_PickGreeter(u8 *base);
void SaveVillagers_UpdateSickVillager(u8 *b);
void SaveVillagers_AdvanceSickDay(void *pp);
BOOL SaveVillagers_CanSomeoneGetSick(void *p);
s32 SaveVillagers_PickSickVillager(void *pp, u32 idx);
s32 SaveVillagers_GetUnk3830Index(void *p);
s32 SaveVillagers_GetUnk3830(void *p);
void SaveVillagers_DailyVillagerUpdate(u8 *p, s32 q);
void SaveVillagers_UpdatePlayerErrandKind15(s32 unused, s32 q);
void SaveVillagers_UpdateErrands(void *b);
void SaveVillagers_AssignErrands(void *bb);
}
}

// ---- unk_0207a80c.cpp
namespace nF {
extern "C" {

extern CommManager *gCommManager;
extern s32 sRelationLevelThresholds[4];
extern u8 data_021cc9ac[];
struct Unk_0207ae84_Mgr {
    u8 pad_00[0x38cc];
    union {
        struct { u32 unk_38cc; u32 unk_38d0; };
        s64 unk_38cc_64;
    };
};
struct Unk_0207ae28_Buf {
    u32 v[2];
};
u8 *VillagerStates_Get();
u8 *VillagerState_GetErrand(u8 *p);
s32 _ZN12ErrandRecord5clearEv(u8 *p);
s32 Villager_GetErrandKind(u8 *self, u8 *p, u8 *r);
s32 Villager_GetPlayerErrandKind(u8 *self, u8 *p, u8 *r);
u32 SaveVillagers_FindByRelation(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best);
BOOL Relation_IsLower(s32 a, s32 b);
BOOL Relation_IsHigher(s32 a, s32 b);
u32 SaveVillagers_GetRelationLevel(u8 *self, s32 a, s32 b);
VillagerId *_ZN12VillagerData13getVillagerIdEv(u8 *p);
s32 SaveVillagers_Count(u8 *self);
s32 Errand_GetClass(s32 v);
s32 Villager_GetState(u8 *p);
u8 *PlayerData_GetCurrent();
s32 _ZN12ErrandRecord8isActiveEv(void *p);
s32 _ZN12ErrandRecord7getKindEv(void *p);
u8 *_ZN10PlayerData10getErrandsEv(u8 *p);
u8 *PlayerErrands_GetSlot(u8 *p, s32 i);
void *PlayerErrandSlot_GetRecord(void *p);
u16 *PlayerErrandSlot_GetVillager(void *p, s32 i);
s32 memcmp(void *a, void *b, u32 n);
void *_ZN18SickVillagerRecord13func_0209978cEv(u8 *p);
u16 *_ZN18SickVillagerRecord13getVillagerIdEv(u8 *p);
s32 HouseVisitInvite_IsFrom(u8 *a, u16 *b);
u8 *Villager_GetPlan(u8 *p);
void *VillagerPlanBlock_GetErrand(u8 *p);
void *PlanErrand_GetRecord(void *p);
s32 VillagerStateTable_GetEntry(u8 *a, u32 b);
s32 SaveVillagers_FindIndex(u8 *self, VillagerId *p);
BOOL SaveVillagers_IsValidIndex(s32 i);
u32 SaveVillagers_IsOccupied(u8 *self, s32 i);
u8 *SaveVillagers_Get(u8 *self, s32 i);
s32 VillagerRelations_GetScore(u8 *p, s32 a, s32 b);
u32 Random_GlobalBelow(u32 n);
s32 VillagerRelations_Add(u8 *p, s32 a, s32 b, s32 c);
void *TownBlockMap_Get(u8 *self);
s32 HousePos_Clear(HousePos *e);
void HousePos_SetFromUnit(HousePos *e, s32 *xy);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL _ZN20VillagerDataItemView11hasHousePosEv(u8 *p);
s32 HousePos_FindNthValid(HousePos *arr, s32 n, u32 k);
u16 Item_MakeNeighborHouse(s32 i);
BOOL BlockMap_PutStructure(void *g, u16 *v, u32 a, u32 b);
void _ZN20VillagerDataItemView11setHousePosEPh(u8 *p, HousePos *e);
BOOL HousePos_IsValid(HousePos *e);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
void _ZN8HousePosD1Ev();
void DateTime_Make(Unk_0207ae28_Buf *a, u8 *b, u32 c, u32 d, u32 e);
void Clock_GetDateTime(Unk_0207ae28_Buf *a);
s32 DateTime_Compare(Unk_0207ae28_Buf *a, u8 *b, u32 n);
s32 DateTime_DiffDays(u8 *b, Unk_0207ae28_Buf *a);
void Villager_DropRandomFurniture(u8 *p);
void Clock_GetDate(u8 *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
void SaveVillagers_UpdatePlayerErrandKind15(u8 *self, Unk_0207ae28_Buf *b);
void SaveVillagers_UpdatePlanStates(u8 *self, Unk_0207ae28_Buf *b);
void SaveVillagers_TryStartMoveOut(u8 *self, u8 *x);
s32 SaveVillagers_GetUnk3830Index(u8 *self);
void SaveVillagers_ProcessTransfer(u8 *self, Unk_0207ae28_Buf *b);
void SaveVillagers_TryRandomMoveIn(u8 *self, Unk_0207ae28_Buf *b);
void SaveVillagers_DailyFurnitureUpdate(u8 *self);
void VillagerStates_ResetErrands();
BOOL SaveVillagers_ShouldAssignErrands(u8 *self);
s32 VillagerStates_GetEntry(u32 a);
u32 SaveVillagers_FindEnemyOf(u8 *self, u8 *p);
u32 SaveVillagers_FindFriendOf(u8 *self, u8 *p);
void SaveVillagers_AddRelation(u8 *self, u8 *a, u8 *b, s32 c);
s32 SaveVillagers_GetRelationLevelOf(u8 *self, u8 *p1, u8 *p2);
void SaveVillagers_PlaceMissingHouses(u8 *self);
void SaveVillagers_DailyUpdate(u8 *self, s32 flag);
void SaveVillagers_UpdatePlansNow(u8 *self);
void SaveVillagers_RefreshPlanStates(u8 *self);
void SaveVillagers_DailyVillagerUpdate(u8 *self, s32 f);
void SaveVillagers_UpdateSickVillager(u8 *self);
void SaveVillagers_UpdateBirthdayNotices(u8 *self);
s32 SaveVillagers_UpdateBirthdayParty(u8 *self);
void Villager_UpdatePlan(u8 *p, Unk_0207ae28_Buf *b);
void *VillagerPlanBlock_GetPlan(void *p);
void *_ZN12VillagerPlan13func_0209b2e4Ev();
s32 _ZN12VillagerPlan13func_0209b044EPv(void *p, s32 i);
void Villager_PickRoomLayout(u8 *p, s32 a, void *b);
s32 Villager_InitPlanDateA(u8 *p, u8 *x);
s32 Villager_InitPlanDateB(u8 *p, u8 *x);
s32 Villager_UpdatePlanState(u8 *p, u8 *a, u8 *b, u8 *x);
void *PlanErrand_Clear(void *p);
void Villager_StartMovingOut(u8 *p, u8 *x);
BOOL Villager_IsFreeOfPlayerErrands(u8 *p);
u32 Random_PickSetBit(u32 m, s32 c, s32 n);
s32 SaveVillagers_FindMovingOut(u8 *self);
s32 SaveVillagers_FindJustMovedIn(u8 *self);
s32 SaveVillagers_PickMoveOutCandidate(u8 *self);
BOOL SaveVillagers_ShouldStartMoveOut(u8 *self, u8 *x);
void VillagerStates_ResetErrands();
BOOL SaveVillagers_ShouldAssignErrands(u8 *self);
s32 Villager_GetErrandKind(u8 *self, u8 *p, u8 *r5);
s32 Villager_GetPlayerErrandKind(u8 *self, u8 *p, u8 *r4);
s32 VillagerStates_GetEntry(u32 a);
u32 SaveVillagers_FindEnemyOf(u8 *self, u8 *p);
u32 SaveVillagers_FindFriendOf(u8 *self, u8 *p);
BOOL Relation_IsLower(s32 a, s32 b);
BOOL Relation_IsHigher(s32 a, s32 b);
u32 SaveVillagers_FindByRelation(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best);
void SaveVillagers_AddRelation(u8 *self, u8 *a, u8 *b, s32 c);
s32 SaveVillagers_GetRelationLevelOf(u8 *self, u8 *p1, u8 *p2);
u32 SaveVillagers_GetRelationLevel(u8 *self, s32 a, s32 b);
void SaveVillagers_PlaceMissingHouses(u8 *self);
s32 HousePos_FindNthValid(HousePos *p, s32 n, u32 k);
void SaveVillagers_DailyFurnitureUpdate(u8 *self);
void SaveVillagers_DailyUpdate(u8 *self, s32 flag);
void SaveVillagers_UpdatePlansNow(u8 *self);
void SaveVillagers_RefreshPlanStates(u8 *self);
void SaveVillagers_UpdatePlanStates(u8 *self, Unk_0207ae28_Buf *x);
void SaveVillagers_TryStartMoveOut(u8 *self, u8 *x);
s32 SaveVillagers_PickMoveOutCandidate(u8 *self);
BOOL SaveVillagers_ShouldStartMoveOut(u8 *self, u8 *x);
}
}

// ---- unk_0207b168.cpp
namespace nG {
extern "C" {

struct Unk_0207b168_Slot {
    u32 unk_00[0x700 / 4];
};
struct SaveVillagers {
      Unk_0207b168_Slot villagers[8];
      u32 relations[7];
      u32 outdoorSchedule[42];
      u32 lastMoveDate[2];
      u32 lastMoveOutDate[2];
      u32 speciesHistory[5];
      s8 lastMovedOutSpecies;
      s8 lastMovedInIndex;
      s8 lastSickIndex;
      u8 unk_38eb[3];
      u8 furnitureDropDate[0x20];
};
extern u8 data_021e7f8c[];
extern u8 gSaveTownId[];
extern u8 sTransferVillager[];
extern u8 sSpeciesCandidateBits[];
s32 Villager_IsJustMovedIn(void *);
s32 Villager_IsMovingOut(void *);
void *Villager_GetPlan();
void *VillagerPlanBlock_GetPlan(void *);
void *func_0209b010(void *);
s32 DateTime_Compare(void *, void *, s32);
s32 DateTime_DiffDays(void *, void *);
s32 DateTime_IsInvalid(void *);
void Clock_GetDateTime(void *);
void Clock_GetDate(void *);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, const void *, u32);
s32 memcmp(const void *, const void *, u32);
s32 Random_GlobalBelow(s32);
void TownId_Assign(void *, void *);
s32 TownId_IsValid(void *);
void _ZN18TownExchangeRecord11getVillagerEv(void *);
void *func_020789a8();
void *_ZN12VillagerData13getVillagerIdEv(void *);
u8 VillagerId_GetSpecies(void *);
u32 VillagerId_GetPersonality(void *);
void *_ZN20VillagerDataItemView18getMovedFromTownIdEv(void *);
void _ZN20VillagerDataItemView16placeHouseMarkerEv(void *);
void _ZN20VillagerDataItemView13clearHousePosEv(void *);
void _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(void *);
s32 Villager_IsMoreAttachedThan(void *, void *, void *);
s32 SaveVillagers_IsValidIndex(s32);
s32 SaveVillagers_Count(SaveVillagers *);
void SaveVillagers_Clear(void *);
void _ZN12VillagerData5clearEv(void *);
void _ZN12VillagerData8copyFromEPv(void *, void *);
void _ZN12VillagerData5setupEjjjh(void *, u32, s32, s32, s32);
s32 SaveVillagers_FindFreeSlot(SaveVillagers *);
void *SaveVillagers_Get(SaveVillagers *, s32);
s32 SaveVillagers_FindIndex(SaveVillagers *, VillagerId *);
void SpeciesBits_Set(void *, u8);
s32 SpeciesBits_Test(u8, void *);
void SpeciesBits_Clear(SaveVillagers *, void *, u32);
s32 SpeciesBits_AllEligibleSet(void *);
s32 Random_PickSetBit(u32, u32, u32);
void SaveVillagers_RefreshPlanStates(void *);
void Villager_StartMovingIn(void *, void *);
void Villager_SetMoveInKind(void *, u8);
void Villager_PickShownFurniture(void *);
void OutdoorSchedule_AddToOrder(void *, s32);
void VillagerRelations_ResetSlot(void *, s32);
void OutdoorSchedule_Remove(void *, s32);
s32 OutdoorSchedule_FindOutdoorSlot(void *, s32);
void OutdoorSchedule_InitOrder(void *, void *);
s32 VillagerState_GetPresence(void *);
s32 VillagerState_GetRole(void *);
void VillagerState_SetPresence(void *, s32);
void *Villager_GetState(void *);
s32 Personality_IsAsleep(u32, void *);
s32 VillagerInfo_Get(u8);
void OutdoorSchedule_Update(void *, void *, s32);
s32 SaveVillagers_FindMovingOut(SaveVillagers *);
s32 SaveVillagers_FindMovingOutDue(SaveVillagers *, void *);
void SaveVillagers_MoveOut(SaveVillagers *, void *, void *, s32, void *);
void SaveVillagers_MoveIn(SaveVillagers *, void *, s32, void *, u8, void *);
void SaveVillagers_SetLastMovedIn(SaveVillagers *, s8);
void *SaveVillagers_FindBySpecies(SaveVillagers *, u32);
s32 SaveVillagers_PickMoveInSpecies(SaveVillagers *);
s32 SaveVillagers_CanMoveIn(SaveVillagers *, void *);
u32 SaveVillagers_PickRarePersonality(SaveVillagers *, s32);
s32 SaveVillagers_PickNewSpecies(SaveVillagers *, u32, s32);
void SaveVillagers_UpdateHistory(void *, SaveVillagers *);
s32 SaveVillagers_FindJustMovedIn(Unk_0207b168_Slot *p);
s32 SaveVillagers_FindMovingOutDue(SaveVillagers *self, void *name);
s32 SaveVillagers_FindMovingOut(SaveVillagers *self);
struct Unk_0207b238_Id {
    u16 id;
    u8 name[8];
};
void SaveVillagers_ProcessTransfer(SaveVillagers *self, void *arg);
void SaveVillagers_MoveOut(SaveVillagers *self, void *a, void *b, s32 idx, void *out);
void SaveVillagers_MoveIn(SaveVillagers *self, void *a, s32 idx, void *b, u8 c, void *out);
void SaveVillagers_SetLastMovedInById(SaveVillagers *self, VillagerId *o);
void *SaveVillagers_FindBySpecies(SaveVillagers *self, u32 id);
void SaveVillagers_TryRandomMoveIn(SaveVillagers *self, void *out);
s32 SaveVillagers_PickMoveInSpecies(SaveVillagers *self);
s32 SaveVillagers_CanMoveIn(SaveVillagers *self, void *p);
void SaveVillagers_UpdatePlans(SaveVillagers *self);
s32 SaveVillagers_IsOutdoors(SaveVillagers *self, VillagerId *o);
void SaveVillagers_UpdateOutdoor(SaveVillagers *self, s32 x);
void SaveVillagers_InitNewTown(SaveVillagers *self);
u32 SaveVillagers_PickRarePersonality(SaveVillagers *self, s32 mask);
s32 SaveVillagers_PickNewSpecies(SaveVillagers *self, u32 idx, s32 flag);
void SaveVillagers_UpdateHistory(void *bits, SaveVillagers *p0);
void SaveVillagers_SetLastMovedIn(SaveVillagers *self, s8 v);
}
}

// ---- unk_0207bab0.cpp
namespace nH {
extern "C" {

void *VillagerInfo_Get(u32);
BOOL VillagerId_IsValidSpecies(s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
BOOL _ZN10VillagerId7isValidEv(void *);
BOOL _ZN8PlayerId7isValidEv(void *);
BOOL Villager_FindMemory(void *, void *);
s32 _ZN14VillagerMemory13getFriendshipEv();
s32 Random_GlobalBelow(s32);
s32 SaveVillagers_GetUnk3830Index(void *);
BOOL Villager_CanBeTalkPartner(void *);
void *MI_CpuFill8(void *, s32, s32);
void _ZN9MsgString5clearEv(void *);
void _ZN10VillagerId7getNameEj(void *, void *);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *, void *);
void _ZN11MsgString9BC1Ev(void *);
void _ZN14EncodedString8C1Ev(void *);
s32 _ZN14EncodedString88capacityEv(void *);
void _ZN14EncodedString8D1Ev(void *);
void _ZN11MsgString9BD1Ev(void *);
BOOL SceneId_IsVillagerHouse(u32);
s32 SceneId_GetVillagerHouse(u32);
void _ZN23VillagerDataProfileView12findFreeSlotEi(void *, s32);
void _ZN12VillagerData5clearEv(void *);
void VillagerRelations_Clear(void *);
void OutdoorSchedule_Clear(void *);
void _ZN18SickVillagerRecord11resetRecordEv(void *);
void _ZN18SickVillagerRecord14destructRecordEv(void *);
void OutdoorSchedule_Destruct(void *);
void VillagerRelations_Destruct(void *);
void VillagerRelations_Construct(void *);
void OutdoorSchedule_Construct(void *);
void _ZN18SickVillagerRecord15constructRecordEv(void *);
void _ZN12VillagerDataD1Ev(void *);
void _ZN12VillagerDataC1Ev(void *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(void *));
s32 memcmp(const void *, const void *, u32);
u8 *Villager_GetState(void *);
s32 VillagerState_DoubleTalkUrge(void *);
s32 VillagerState_GetMood(void *);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *);
BOOL _ZN12Unk_02097ff48testFlagEj(void *, s32);
s32 SpeciesBits_Test(s32, u32 *);
void *SaveVillagers_PickRandomExcept(u8 *, void **, s32);
s32 SaveVillagers_FindIndex(u8 *, u16 *);
BOOL SaveVillagers_IsValidIndex(u32);
u8 *SaveVillagers_Get(u8 *, s32);
s32 Random_PickSetBit(u32, s32, s32);
s32 Text_TrimmedLength(u8 *, s32);
struct Unk_0207be2c_Vt { virtual void vfunc_00(); virtual void vfunc_04(); virtual void vfunc_08(); virtual void *vfunc_0c(); };
BOOL Mem_Equal(u8 *, u8 *, s32);
BOOL SaveVillagers_IsOccupied(u8 *, s32);
void *__cxa_vec_ctor(void *, s32, s32, void (*)(void *), void (*)(void *));
BOOL Villager_CanSeekPlayer(void *);
void Villager_AddTalkUrge(void *, s32);
BOOL SpeciesBits_AllEligibleSet(u32 *bits);
void SpeciesBits_Clear(s32 unused, u32 *bits, s32 n);
void SpeciesBits_Set(u32 *bits, s32 n);
BOOL SpeciesBits_Test(s32 n, u32 *bits);
s32 SaveVillagers_CountImpl(u8 *base);
s32 SaveVillagers_Count(u8 *base);
s32 SaveVillagers_CountImpl(u8 *base);
void *SaveVillagers_FindBestFriendOf(u8 *base, void *x);
void *SaveVillagers_PickRandomTalkPartner(u8 *base, void **arr, s32 n);
s32 Random_PickSetBit(u32 mask, s32 cnt, s32 n);
void *SaveVillagers_PickRandomExcept(u8 *base, void **arr, s32 n);
void SaveVillagers_FindFreeSlot(void *self);
void *SaveVillagers_GetByHouseRoom(void *self, u32 x);
u8 *SaveVillagers_FindByName(u8 *base, u8 *a1, s32 a2, void *a3);
BOOL Mem_Equal(u8 *a, u8 *b, s32 n);
s32 Text_TrimmedLength(u8 *s, s32 n);
u8 *SaveVillagers_Find(u8 *base, u16 *x);
u8 *SaveVillagers_Get(u8 *base, s32 idx);
BOOL SaveVillagers_IsOccupied(u8 *base, s32 idx);
s32 SaveVillagers_FindIndex(u8 *base, u16 *p);
BOOL SaveVillagers_IsValidIndex(u32 n);
void SaveVillagers_Clear(u8 *self);
u8 *SaveVillagers_Destruct(u8 *self);
u8 *SaveVillagers_Construct(u8 *self);
void Villager_AddTalkUrge(void *self, s32 d);
void Villager_DoubleTalkUrge(void *self);
void Villager_HalveTalkUrge(void *self);
void Villager_ClearTalkUrge(void *self);
BOOL Villager_IsTalkUrgeFull(void *self, void *x);
void Villager_RaiseTalkUrge(void *self, void *x);
BOOL Villager_CanSeekPlayer(void *self);
void Villager_InitTalkUrge(void *self, void *x);
}
}

// ---- unk_0207c3dc.cpp
namespace nI {
extern "C" {

struct Unk_0207c67c {
    u8 pad[0x6ac];
    u16 furniture[10];
    u16 pad2[(0x6ea - 0x6c0) / 2];
    u16 shownFurnitureMask;
};
struct Unk_0207ccd0_Rec {
    u8 pad[0x21];
    u8 unk_21_0 : 1;
};
extern u8 sVillagerLetterPath[];
extern u8 sVillagerLetter4Path[];
extern u8 gSaveTownId[];
extern u8 gSaveVillagers[];
s32 _ZN8PlayerId7isValidEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
void _ZN6LetterC1Ev(void *);
void _ZN6LetterD1Ev(void *);
u32 VillagerId_GetPersonality(void *);
u32 LetterPaper_PickForPersonality(void);
void _ZN10VillagerId12makeFileNameEPvjj(void *, void *, s32, void *);
void Letter_ComposeVillagerMail(void *, u8 *, void *, u8 *, void *, void *, s32);
void Letter_ComposeVillagerMailZ(void *, u8 *, u8 *, u8 *, u8 *, void *, u8 *, void *, void *, s32);
void _ZN10LetterView10setPresentEtj(void *, u32, s32);
s32 LetterDelivery_QueueOutgoing(void *, s32);
u32 Random_GlobalBelow(u32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
void *PlayerData_GetCurrent(void);
void *_ZN10PlayerData11getPlayerIdEv(void *);
s32 _ZN6TownId15getTownRelationEv(void *);
void *Villager_FindMemory(void *, void *);
void *_ZN12Unk_02097ff424getForeignVillagerRecordEv(void *);
void *_ZN14VillagerMemory13getFriendshipEv(void *);
s32 _ZN21ForeignVillagerRecord5offerEPviS0_(void *, void *, void *, void *);
s32 _ZN14VillagerMemory20setFleaMarketVisitedEv(void);
void Clock_GetDateTime(void *);
s32 Personality_IsAsleep(u32, void *);
void _ZN14VillagerMemory16clearTalkedTodayEv(void *);
s32 _ZN20VillagerDataItemView21isValidFurnitureIndexEi(void *);
s32 Item_IsFurniture(void *);
s32 Random_PickSetBit(u32, s32, s32);
s32 Villager_GetResidentStatus(void *);
void *SaveVillagers_GetUnk3830(void *);
void *_ZN18SickVillagerRecord13getVillagerIdEv(void);
s32 memcmp(void *, void *, u32);
void *Villager_GetPlan(void *);
void *VillagerPlanBlock_GetErrand(void *);
void *PlanErrand_GetRecord(void);
s32 _ZN12ErrandRecord8isActiveEv(void *);
s32 _ZN12ErrandRecord8getClassEv(void *);
s32 _ZN12ErrandRecord7getStepEv(void *);
s32 _ZN12ErrandRecord7getKindEv(void *);
s32 PlanErrand_Clear(void *);
void *VillagerPlanBlock_GetPlan(void *);
s32 _ZN12VillagerPlan13func_0209b294Ev(void *);
s32 Villager_NextFurnitureTaste(void *);
s32 _ZN12VillagerPlan13func_0209b2e4Ev(void *);
s32 _ZN12VillagerPlan12isValidStateEv(void *);
s32 _ZN12VillagerPlan8getStateEv(void *);
s32 _ZN12VillagerPlan13func_0209b0c4EPS_(void *, void *);
s32 _ZN12VillagerPlan13func_0209b044EPv(void *, void *);
void Villager_PickRoomLayout(void *, s32, s32);
void MI_CpuCopy8(void *, void *, u32);
s32 Villager_IsMoveTimeReached(void *, void *);
s32 _ZN12VillagerPlan13func_0209b12cEv(void *);
void Villager_UpdateTrendDays(void *, void *);
s32 _ZN12VillagerPlan13func_0209b18cEv(void *);
s32 Trend_IsValid(s32);
void *Villager_GetState(void *);
void *VillagerState_GetErrand(void *);
s32 _ZN12ErrandRecord5clearEv(void *);
s32 PlanState_GetGroup(s32);
void _ZN12ErrandRecord5startEhPth(void *, s32, void *, s32);
void *VillagerPlan_GetStateDate(void *);
void *func_0209b010(void *);
s32 DateTime_IsInvalid(void *);
s32 DateTime_Compare(void *, void *, s32);
void *Villager_GetInfo3a(void *);
s32 DateTime_DiffMinutes(void *, void *);
void DateTime_AddDays(void *, s32);
s32 _ZN12VillagerPlan8hasTrendEv(void *);
s32 _ZN12VillagerPlan20isTrendOlderThanWeekEPv(void *, s32);
s32 _ZN12VillagerPlan15addRandomScoresEPs(void *, void *);
void _ZN12VillagerPlan18applyPendingScoresEPs(void *, void *);
void _ZN12VillagerPlan15addPendingScoreEhi(void *, s32, s32);
void _ZN12VillagerPlan10addTrendOfEPS_Ps(void *, void *, void *);
void *Personality_GetSleepHours(u32);
s32 Villager_UpdatePlan(void *, void *);
void _ZN12VillagerPlan8setStateEj(void *, s32);
s32 Villager_SendLetter(void *a, u32 b, void *c, void *d, u16 *e);
s32 Villager_SendLetter4(void *a, u32 b, void *c, void *d, void *e, u16 *f);
s32 Villager_UpdateVisitorRecord(void *a, void *b);
void Villager_SetFleaMarketVisited(void *a, void *b);
s32 Villager_IsAsleep(void *a, void *b);
void Villager_ClearTalkedToday(u8 *p);
void Villager_HideFurniture(Unk_0207c67c *p, s32 n);
s32 Villager_IsFurnitureShown(Unk_0207c67c *p, s32 n);
void Villager_PickShownFurniture(Unk_0207c67c *p);
s32 Villager_CanGoOutdoors(void *a);
void Villager_UpdatePlanErrand(void *a);
s32 Villager_UpdatePlanState(void *a, void *b, void *c, void *d);
s32 Villager_UpdatePlan(void *a, void *b);
void Villager_InitPlanDateB(void *a, void *b);
void Villager_InitPlanDateA(void *a, void *b);
void Villager_UpdateTrendDays(void *a, void *b);
void Villager_RecordPlayerActivity(void *a, void *b, void *c);
void Villager_ShareTrendWith(void *a, void *b);
s32 Villager_IsMoveTimeReached(void *a, void *b);
void Villager_StartMovingIn(void *a, void *b);
void Villager_StartMovingOut(void *a, void *b);
}
}

// ---- unk_0207cd48.cpp
namespace nJ {
extern "C" {

struct Unk_0207cd94 {
    u8 pad_000[0x6cc];
    u16 receivedItems[4];
    u8 pad_6d4[0x1d];
    u8 furnitureTasteIndex;
};
struct Unk_0207d1bc_Data {
    u32 a;
    u32 b;
    u32 c;
};
struct Unk_0207d164_Entry {
    s8 gender;
    u8 pad_1[3];
    BOOL (*unk_4)(u32, u32, u32);
};
extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];
extern Unk_0207d164_Entry sImpressionRules[];
s32 PlayerData_GetResident(void *, s32);
s32 _ZN10PlayerData11getPlayerIdEv(...);
s32 _ZN8PlayerId7isValidEv(s32);
s32 _ZN10PlayerData10getErrandsEv(s32);
s32 Villager_IsInPlayerErrand(u32, s32);
u8 *VillagerStates_Get();
s32 _ZN12VillagerData13getVillagerIdEv(void *);
s32 SaveVillagers_FindIndex(void *, s32);
s32 _ZN10VillagerId7isValidEv(s32);
s32 Item_GetPrice(u16 *);
s32 Random_GlobalBelow(s32);
s32 Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 VillagerSync_Items(void *, u16 *);
s32 PlayerData_GetCurrent();
s32 Villager_FindMemory(void *, s32);
u32 _ZN14VillagerMemory13getImpressionEv(s32);
s32 String_Load(void *, void *, void *);
s32 _ZN14VillagerMemory13getFriendshipEv(s32);
s32 Villager_GetState(void *);
s32 VillagerState_GetMood(s32);
s32 _ZN14VillagerMemory13setImpressionEi(s32, s32);
s32 _ZN8PlayerId9getGenderEv(s32);
void Clock_GetDateTime(void *);
s32 _ZN6TownId15getTownRelationEv(s32);
s32 PlayerDataArray_CountUsed(void *);
s32 _ZN10PlayerData12getHairStyleEv(u32);
u16 *_ZN10PlayerData11getFaceItemEv();
s32 _ZN10PlayerData12getInventoryEv();
s32 _ZN15PlayerInventory13getTotalBellsEi(s32, s32);
static inline BOOL Unk_0207d3b0_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
BOOL Villager_IsFreeOfPlayerErrands(u32 a);
void Villager_NextFurnitureTaste(Unk_0207cd94 *self);
u32 Villager_GetFurnitureTasteIndex(Unk_0207cd94 *self);
BOOL Villager_IsGreeter(void *self);
void Villager_RemoveFlea(void *self);
BOOL Villager_HasFlea(void *self);
void Villager_GetMostValuableReceivedItem(u16 *out, Unk_0207cd94 *self);
void Villager_PickRandomReceivedItem(u16 *out, Unk_0207cd94 *self);
BOOL Villager_RemoveReceivedItem(Unk_0207cd94 *self, u16 *key);
s32 Villager_FindReceivedItem(Unk_0207cd94 *self, u16 *key);
void Villager_AddReceivedItem(Unk_0207cd94 *self, u16 *val);
void Villager_CompactReceivedItems(Unk_0207cd94 *self);
u16 *Villager_GetReceivedItem(Unk_0207cd94 *self, u32 idx);
void Villager_ClearReceivedItems(Unk_0207cd94 *self);
void Villager_GetImpressionText(void *self, void *out, s32 p);
u32 Villager_UpdateImpression(void *self, s32 r, s32 p);
u32 Impression_Evaluate(u32 a, u32 b, u32 c);
BOOL Villager_IsFreeOfPlayerErrands(u32 a);
void Villager_NextFurnitureTaste(Unk_0207cd94 *self);
u32 Villager_GetFurnitureTasteIndex(Unk_0207cd94 *self);
BOOL Villager_IsGreeter(void *self);
void Villager_RemoveFlea(void *self);
BOOL Villager_HasFlea(void *self);
void Villager_GetMostValuableReceivedItem(u16 *out, Unk_0207cd94 *self);
void Villager_PickRandomReceivedItem(u16 *out, Unk_0207cd94 *self);
BOOL Villager_RemoveReceivedItem(Unk_0207cd94 *self, u16 *key);
s32 Villager_FindReceivedItem(Unk_0207cd94 *self, u16 *key);
void Villager_AddReceivedItem(Unk_0207cd94 *self, u16 *val);
void Villager_CompactReceivedItems(Unk_0207cd94 *self);
u16 *Villager_GetReceivedItem(Unk_0207cd94 *self, u32 idx);
void Villager_ClearReceivedItems(Unk_0207cd94 *self);
void Villager_GetImpressionText(void *self, void *out, s32 p);
u32 Villager_UpdateImpression(void *self, s32 r, s32 p);
u32 Impression_Evaluate(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Always();
BOOL ImpressionCond_Summer();
BOOL ImpressionCond_Autumn();
BOOL ImpressionCond_Winter();
BOOL ImpressionCond_TwoPlusResidents();
BOOL ImpressionCond_FourResidents();
BOOL ImpressionCond_Hair7(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair6(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair5(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair4(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair3(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair2(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair1(u32 a, u32 b, u32 c);
BOOL ImpressionCond_Hair0(u32 a, u32 b, u32 c);
BOOL ImpressionCond_AccessoryHairA(u32 a, u32 b, u32 c);
BOOL ImpressionCond_AccessoryHairB(u32 a, u32 b, u32 c);
BOOL ImpressionCond_AccessoryHairC(u32 a, u32 b, u32 c);
BOOL ImpressionCond_AccessoryHairD(u32 a, u32 b, u32 c);
BOOL ImpressionCond_BellsOver60000();
BOOL ImpressionCond_Bells40000To60000();
BOOL ImpressionCond_Bells20000To40000();
BOOL ImpressionCond_Bells10000To20000();
BOOL ImpressionCond_BellsUpTo1000();
BOOL ImpressionCond_BellsUpTo300();
}
}

// ---- unk_0207d674.cpp
namespace nK {
extern "C" {

static inline BOOL Unk_0207d774_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
namespace Unk_0207d67c_Ns {
extern "C" s32 ImpressionCond_AllFishCaught(void);
}
static inline BOOL Unk_0207dd24_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_0207dd24_Check(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}
void *BlockMap_GetItemPtr(void *m, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
static inline u16 *Unk_0207de6c_Cell(void *m, s32 x, s32 y) {
    s32 hx = x >> 4, hy = y >> 4;
    return (u16 *)BlockMap_GetItemPtr(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
}
s32 ImpressionCond_AllFishCaught(s32 a, s32 b, s32 c);
s32 Catalog_HasAllFish(s32 a, s32 b, s32 c);
s32 Catalog_GetFishTotal(void);
s32 Catalog_CountFish(void);
s32 Catalog_HasAllInsects(void);
s32 Catalog_GetInsectTotal(void);
s32 Catalog_CountInsects(void);
s32 _ZN10PlayerData12getInventoryEv(void);
s32 _ZN15PlayerInventory15findEmptyPocketEv(s32 a);
s32 Clock_GetTimeOfDay(void);
u16 *_ZN10PlayerData8getShirtEv(u32 a);
s32 Weather_GetFallingPrecip(void);
u16 *_ZN10PlayerData11getHeldItemEv(u32 a);
u16 *_ZN10PlayerData6getHatEv(u32 a);
u16 *_ZN10PlayerData11getFaceItemEv(u32 a);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 VillagerEvent_GetTodayIndex(u32 a);
s32 SaveVillagers_Count(void *p);
void *SaveVillagers_PickRandomExcept(void *p, void *q, u32 n);
void *SaveVillagers_FindEnemyOf(void *p, u32 n);
void func_02133ef8(void *p, u32 n);
void *_ZN12VillagerData13getVillagerIdEv(void *a);
s32 _ZN10VillagerId7isValidEv(void *a);
s32 _ZN10VillagerId7getNameEj(void *a, u32 b);
s32 PlayerData_HasStungFace(u32 a, u32 b, u32 c);
void *PlayerActor_GetBodyPos(u32 n);
void FieldPos_ToUnit(s32 *x, s32 *y, void *pos);
void *BlockMap_GetItemPtr(void *m, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
extern u8 gSaveVillagers[];
extern u8 gFieldSceneKind[];
extern void *gSceneBlockMap;
BOOL ImpressionCond_HalfFishCaught(void);
s32 ImpressionCond_AllInsectsCaught(void);
BOOL ImpressionCond_HalfInsectsCaught(s32 a, s32 b, s32 c);
BOOL ImpressionCond_FriendshipVeryHigh(s32 a, s32 b);
BOOL ImpressionCond_FriendshipHigh(s32 a, s32 b);
BOOL ImpressionCond_FriendshipLow(s32 a, s32 b);
BOOL ImpressionCond_FriendshipVeryLow(s32 a, s32 b);
BOOL ImpressionCond_PocketsFull(void);
BOOL ImpressionCond_TimeOfDay3(void);
BOOL ImpressionCond_TimeOfDay0(void);
BOOL ImpressionCond_WearingShirt12a8(u32 a);
BOOL ImpressionCond_Snowing(void);
BOOL ImpressionCond_Raining(void);
BOOL ImpressionCond_HoldingUmbrella(u32 a);
s32 ImpressionCond_AllFishCaught(s32 a, s32 b, s32 c);
BOOL ImpressionCond_FlowerAccessory(u32 a);
BOOL ImpressionCond_WearingHat1406(u32 a);
BOOL ImpressionCond_WearingHat13e4(u32 a);
BOOL ImpressionCond_WearingHat13e3(u32 a);
BOOL ImpressionCond_WearingHat13f5(u32 a);
BOOL ImpressionCond_WearingHat13ea(u32 a);
BOOL ImpressionCond_WearingHat13e6(u32 a);
BOOL ImpressionCond_WearingHat1405(u32 a);
BOOL ImpressionCond_WearingHat13bc(u32 a);
BOOL ImpressionCond_WearingHat13a8(u32 a);
BOOL ImpressionCond_WearingHat13b2(u32 a);
BOOL ImpressionCond_WearingHat13c1(u32 a);
BOOL ImpressionCond_HoldingWateringCan(u32 a);
BOOL ImpressionCond_HoldingRod(u32 a);
BOOL ImpressionCond_HoldingAxe(u32 a);
BOOL ImpressionCond_HoldingNet(u32 a);
BOOL ImpressionCond_Mood2or4(s32 a, s32 b, s32 c);
BOOL ImpressionCond_Mood1(s32 a, s32 b, s32 c);
BOOL ImpressionCond_VillagerEventToday(u32 a);
BOOL ImpressionCond_FewVillagers(void);
s32 ImpressionCond_PlayerFaceFlag(u32 a, u32 b, u32 c);
s32 ImpressionCond_FlowersAround(void);
s32 ImpressionCond_WeedsAround(void);
void Villager_GetRandomOtherName(u32 a, u32 b);
void Villager_GetEnemyName(u32 a, u32 b);
}
}

// ---- unk_0207dfa0.cpp
namespace nL {
extern "C" {

extern CommManager *gCommManager;
struct Unk_0207e268 {
    u8 pad_00[0x65c];
    u8 planBlock[0x50];
    u16 furniture[10];
    u8 pad_6c0[0x2e];
    u8 wallpaper;
    u8 carpet;
    u8 moveInKind;
    u8 pad_6f1;
    u8 roomLayout;
};
extern u8 gSaveVillagers[];
extern u8 data_020e05ac[];
extern u16 sPackedFurnitureItems[];
void *SaveVillagers_FindFriendOf(void *, void *);
VillagerId *_ZN12VillagerData13getVillagerIdEv(void *);
void *PlayerErrands_GetSlot(void *, s32);
void *PlayerErrandSlot_GetRecord(void *);
s32 _ZN12ErrandRecord8isActiveEv(void *);
void *PlayerErrandSlot_GetVillager(void *, s32);
s32 memcmp(void *, void *, s32);
s32 Arbeit_IsLetterRecipient(void *, void *);
s32 HouseVisitInvite_IsFrom(void *, void *);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *);
void *VillagerPlanBlock_GetPlan(void *);
s32 _ZN12VillagerPlan8getStateEv(void *);
s32 _ZN12VillagerPlan13func_0209b2e4Ev(void *);
s32 _ZN12VillagerPlan13getStateGroupEv(void *);
s32 _ZN12VillagerPlan12getTrendNameEi(s32, s32);
s32 VillagerState_GetRole(s32);
s32 VillagerState_GetPresence(s32);
s32 VillagerStates_Get();
s32 VillagerStateTable_GetEntry(s32, s32);
s32 SaveVillagers_FindIndex(void *, void *);
s32 VillagerId_GetSpecies(VillagerId *);
u8 *VillagerInfo_Get(s32);
s32 _ZN20VillagerDataItemView21isValidFurnitureIndexEi(void *, s32);
s32 Villager_IsFurnitureShown(void *, s32);
s32 Villager_HideFurniture(void *, s32);
s32 _ZN20VillagerDataItemView21getSlotFromLayoutCodeEPt(void *, void *);
s32 _ZN20VillagerDataItemView14getFurnitureAtEi(void *, void *, s32);
s32 _ZN20VillagerDataItemView16pickNonTrendSlotEiii(void *, s32, s32, s32);
s32 _ZN20VillagerDataItemView12getSlotRangeEPiS0_iih(void *, s32 *, s32 *, s32, s32, s32);
s32 _ZN20VillagerDataItemView12matchesTrendEPti(void *, void *, s32);
s32 _ZN20VillagerDataItemView15freeSlotInRangeEiihh(void *, s32, s32, s32, s32);
s32 _ZN20VillagerDataItemView14tryPlaceFossilEPtiihh(void *, void *, s32, s32, s32, s32);
s32 Villager_DiscardItemMaybe(void *);
s32 Villager_DiscardItem(void *);
u16 *Villager_GetReceivedItem(void *, s32);
s32 Villager_ClearReceivedItems(void *);
s32 Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 Item_SetFurnitureDirection(u16 *, s32);
s32 Ftr_GetUnk05(u16 *);
s32 RoomFtrState_ResetVillagerHouse(s32);
s32 VillagerPlanBlock_GetErrand(void *);
s32 PlanErrand_MarkReady(s32);
void Item_ToPlacedForm(u16 *, u16 *, s32);
s32 Random_GlobalBelow(s32);
void Villager_GetFriendName(void *a, u32 b);
void Villager_SetMoveInKind(Unk_0207e268 *a, u32 b);
u32 Villager_GetMoveInKind(Unk_0207e268 *a);
BOOL Villager_IsInPlayerErrand(Unk_0207e268 *a, void *b);
BOOL Villager_CanBeTalkPartner(Unk_0207e268 *a);
BOOL Villager_IsJustMovedIn(Unk_0207e268 *a);
BOOL Villager_IsMovingIn(Unk_0207e268 *a);
BOOL Villager_IsMovingOut(Unk_0207e268 *a);
s32 Villager_GetResidentStatus(Unk_0207e268 *a);
s32 Villager_GetTrend(Unk_0207e268 *a, s32 b);
void *Villager_GetPlan(Unk_0207e268 *a);
BOOL func_0207e274();
s32 Villager_GetWhereabouts(Unk_0207e268 *a);
s32 Villager_GetState(Unk_0207e268 *a);
s32 Villager_GetIndex(Unk_0207e268 *a);
s32 Villager_FindOwnIndex(Unk_0207e268 *a);
u32 Villager_GetInfo4d();
void Villager_SetCarpet(Unk_0207e268 *a, u8 b);
void Villager_SetWallpaper(Unk_0207e268 *a, u8 b);
u32 Villager_GetCarpet(Unk_0207e268 *a);
u32 Villager_GetWallpaper(Unk_0207e268 *a);
BOOL Villager_HasShownFurnitureAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
BOOL Villager_RemoveFurnitureAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
s32 Villager_GetFurnitureSlotAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
void Villager_PickRoomLayout(Unk_0207e268 *a, s32 b, s32 c);
void Villager_PlaceReceivedItems(Unk_0207e268 *a);
void Villager_ResolveRoomLayout(Unk_0207e268 *a, u16 *b);
void Villager_GetPackedFurniture(u16 *out, void *a, u16 *in);
void Villager_ClearFurnitureSlots1To2(Unk_0207e268 *a);
void Villager_DropRandomFurniture(Unk_0207e268 *a);
s32 Villager_CountFurniture(Unk_0207e268 *a);
s32 Villager_CountFurnitureLike(Unk_0207e268 *a, u16 *b);
BOOL Villager_PlaceItemInHouse(Unk_0207e268 *a, u16 *b);
static inline BOOL Unk_0207e440_InRange(volatile u16 *p) {
    BOOL r = FALSE;
    u32 v1 = *p;
    u32 v2 = *p;
    if (v2 >= 0xf000 && v1 <= 0xf02f) r = TRUE;
    return r;
}
void Villager_GetFriendName(void *a, u32 b);
void Villager_SetMoveInKind(Unk_0207e268 *a, u32 b);
u32 Villager_GetMoveInKind(Unk_0207e268 *a);
BOOL Villager_IsInPlayerErrand(Unk_0207e268 *a, void *b);
BOOL Villager_CanBeTalkPartner(Unk_0207e268 *a);
BOOL Villager_IsJustMovedIn(Unk_0207e268 *a);
BOOL Villager_IsMovingIn(Unk_0207e268 *a);
BOOL Villager_IsMovingOut(Unk_0207e268 *a);
s32 Villager_GetResidentStatus(Unk_0207e268 *a);
s32 Villager_GetTrend(Unk_0207e268 *a, s32 b);
void *Villager_GetPlan(Unk_0207e268 *a);
BOOL func_0207e274();
s32 Villager_GetWhereabouts(Unk_0207e268 *a);
s32 Villager_GetState(Unk_0207e268 *a);
s32 Villager_GetIndex(Unk_0207e268 *a);
s32 Villager_FindOwnIndex(Unk_0207e268 *a);
u32 Villager_GetInfo4d();
u32 Villager_GetCarpet(Unk_0207e268 *a);
u32 Villager_GetWallpaper(Unk_0207e268 *a);
BOOL Villager_HasShownFurnitureAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
BOOL Villager_RemoveFurnitureAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
s32 Villager_GetFurnitureSlotAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
void Villager_PickRoomLayout(Unk_0207e268 *a, s32 b, s32 c);
void Villager_PlaceReceivedItems(Unk_0207e268 *a);
void Villager_ResolveRoomLayout(Unk_0207e268 *a, u16 *b);
void Villager_GetPackedFurniture(u16 *out, void *a, u16 *in);
void Villager_ClearFurnitureSlots1To2(Unk_0207e268 *a);
struct Unk_0207e684_Tbl {
    s32 v[3];
};
void Villager_DropRandomFurniture(Unk_0207e268 *a);
s32 Villager_CountFurniture(Unk_0207e268 *a);
s32 Villager_CountFurnitureLike(Unk_0207e268 *a, u16 *b);
BOOL Villager_PlaceItemInHouse(Unk_0207e268 *a, u16 *b);
void Villager_SetCarpet(Unk_0207e268 *a, u8 b);
void Villager_SetWallpaper(Unk_0207e268 *a, u8 b);
}
}

// ---- unk_0207e940.cpp
namespace nM {
extern "C" {

void *Villager_GetPlan(void *);
void *VillagerPlanBlock_GetErrand(void);
void *VillagerPlanBlock_GetPlan(void *);
void *PlanErrand_GetRecord(void);
s32 Item_GetPrice(u16 *);
s32 _ZN12ErrandRecord8isActiveEv(void *);
s32 _ZN12ErrandRecord7getKindEv(void *);
u32 PlanErrand_GetStep(void *);
u32 PlanErrand_GetFossilGroup(void *);
s32 Item_GetFossilGroup(u16 *);
s32 Random_PickSetBit(u32 mask, s32 n, s32 max);
s32 Random_GlobalBelow(s32);
s32 RecycleBin_Add(u16);
s32 PlanState_GetGroupIndex(u8 *, s32);
s32 Item_IsFurniture(u16 *);
s32 Villager_GetFurnitureTasteScore(void *, u16 *);
void Item_ToPlacedForm(u16 *, u16 *, s32);
void *_ZN23VillagerDataProfileView9getInfo28Ev(void *);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
void *VillagerId_GetSpecies(void *);
s32 VillagerInfo_Get(void *);
s32 _ZN12VillagerPlan8getStateEv(void *);
s32 _ZN12VillagerPlan13func_0209b2e4Ev(void *);
void *TownBlockMap_Get(void);
void BlockMap_RemoveStructure(void *, u32, u32, u16 *);
s32 HousePos_IsValid(u8 *);
s32 HousePos_Clear(u8 *);
void *Villager_FindMemory(void *, void *);
void _ZN14VillagerMemory11setGreetingEPvi(void *, void *, s32);
s32 _ZN8PlayerId7isValidEv(void *);
s32 _ZN14VillagerMemory11hasGreetingEv(void *);
void _ZN14VillagerMemory11getGreetingEPv(void *, void *);
void _ZN14VillagerMemory13setComplimentEPvi(void *, void *, s32);
s32 _ZN14VillagerMemory13hasComplimentEv(void *);
void _ZN14VillagerMemory13getComplimentEPv(void *, void *);
extern Unk_0207ed1c_Fn sVillagerTrendFilters[5];
extern u8 __ptmf_null[];
static inline BOOL Unk_0207e940_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
BOOL Villager_DiscardItemMaybe(u16 *p);
BOOL Villager_DiscardItem(u16 *p);
BOOL Villager_DiscardItemMaybe(u16 *p);
BOOL Villager_DiscardItem(u16 *p);
struct Unk_0207f04c_Bits {
    u8 v : 5;
};
}
}

// ---- unk_0207f264.cpp
namespace nN {
extern "C" {

struct Unk_0207fb4c_Str {
    u32 v[7];
};
struct Unk_0207f264_Entry {
    u8 b[0x68];
};
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *);
s32 _ZN8PlayerId7isValidEv(void *);
u32 _ZN12VillagerData13getVillagerIdEv(u32);
s32 _ZN10VillagerId7isValidEv(u32);
s32 VillagerId_GetSpecies(u32);
u8 *VillagerInfo_Get(u32);
void _ZN8PlayerId13getNameStringEP9MsgString(void *, void *);
void _ZN14VillagerMemory11getNicknameEPv(void *, void *);
s32 _ZN9MsgString6equalsEPS_(void *, void *);
void _ZN9MsgString5clearEv(void *);
void _ZN14VillagerMemory18setNicknameFromMsgEPv(void *, void *);
void _ZN14VillagerMemory11setNicknameEPvi(void *, u32, u32);
s32 _ZN14VillagerMemory13getFriendshipEv(void *);
s32 VillagerMemory_IsUsed(void *);
s32 VillagerMemory_MatchesPlayer(void *, void *);
u16 *VillagerMemory_GetTownId(void *);
u32 VillagerMemory_GetPlayerId(void *);
s32 memcmp(void *, void *, u32);
void VillagerMemory_InitForPlayer(void *, void *, u32, u32);
u16 *PlayerId_GetTownId();
s32 PlayerDataArray_FindById(u32, u32);
s32 TownId_IsValid(void *);
s32 _ZN14VillagerMemory16isLetterReceivedEv(void *);
void *VillagerMemory_GetTalkDate(void *);
s32 DateTime_Compare(void *, void *, u32);
s32 DateTime_DiffMinutes(void *, void *);
s32 _ZN8PlayerId6equalsEPS_(u32, void *);
void __register_global_object(void *, void *, void *);
void _ZN8PlayerIdC1Ev();
u32 Villager_GetFurnitureTasteIndex();
u8 Furniture_ScoreAttribute(u32, u32, u32);
u32 Date_GetStarSignOf(u8 *);
u32 SaveVillagers_GetUnk3830Index(u32);
u32 Item_GetSaveData();
u32 Villager_GetIndex(u32);
s32 Villager_GetResidentStatus(u32);
u32 _ZN10PlayerData10getErrandsEv(void *);
s32 HouseVisitInvite_IsFrom(void *, u32);
void Clock_GetDateTime(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 EventSchedule_CollectDayAll(void *, void *);
void DateTime_AddDays(void *, u32);
void MI_CpuFill8(void *, u32, u32);
void _ZN15EncodedString106copyToEPvi(void *, void *, u32);
void _ZN15EncodedString10C1Ev(void *);
void StrBuf_ClearAlt(void *);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *, u32);
void _ZN15EncodedString10D1Ev(void *);
extern u16 gSaveTownId[];
extern u8 gSavePlayers[];
extern u32 data_021cc850;
extern u8 data_021cc8fc[];
extern u8 data_021cc868[];
extern u8 sAnimalKindByte2[];
Unk_0207f264_Entry *Villager_FindMemory(u32 a, void *b);
s32 Villager_FindMemoryIndex(Unk_0207f264_Entry *t, void *id);
s32 Villager_FindFreeMemoryIndex(Unk_0207f264_Entry *t);
s32 Villager_CountMemories(Unk_0207f264_Entry *t);
s32 _ZN23VillagerDataProfileView21hasLetterSenderMemoryEv(Unk_0207f264_Entry *t);
s32 Villager_GetMaxFriendship(Unk_0207f264_Entry *t);
s32 Villager_GetMinutesSinceLastTalk(Unk_0207f264_Entry *t, void *o);
s32 Villager_PickMemoryToReplace(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *));
s32 VillagerMemory_IsOtherTown(void *a, u16 *p, void *c);
s32 VillagerMemory_IsFormerResident(u32 a, u16 *p, u32 c);
s32 Villager_PickOtherTownMemoryToReplace(Unk_0207f264_Entry *t);
s32 Villager_PickFormerResidentMemoryToReplace(Unk_0207f264_Entry *t);
s32 Villager_PickMemorySlotForNew(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *Villager_GetMemorySlotForNew(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *Villager_GetMemory(Unk_0207f264_Entry *t, u32 i);
BOOL Villager_IsValidMemoryIndex(Unk_0207f264_Entry *t, u32 i);
u8 *Villager_GetFurnitureTaste(Unk_0207f264_Entry *t, u32 i);
u32 Villager_GetAnimalKind(u32 a);
u8 *Villager_GetBirthday(u32 a);
void Villager_SetCatchphraseEncoded(u32 a, void *b);
void Villagers_ShareNickname(u32 a, u32 b, void *c);
Unk_0207f264_Entry *Villager_SetNicknameFor(u32 a, u32 b, u32 c, void *d);
Unk_0207f264_Entry *Villager_SetNicknameFromMsgFor(u32 a, void *b, void *c);
void Villager_GetNicknameFor(u32 a, void *b, void *c);
BOOL Villager_IsMoreAttachedThan(u32 a, u32 b, void *c);
s32 Villager_CountMemories(Unk_0207f264_Entry *t);
s32 Villager_CollectOtherMemories(Unk_0207f264_Entry *t, Unk_0207f264_Entry **out, void *id, s32 mode);
Unk_0207f264_Entry *Villager_FindOrCreateMemory(Unk_0207f264_Entry *t, void *b);
Unk_0207f264_Entry *Villager_GetMemorySlotForNew(Unk_0207f264_Entry *t);
s32 Villager_PickMemorySlotForNew(Unk_0207f264_Entry *t);
s32 Villager_PickOtherTownMemoryToReplace(Unk_0207f264_Entry *t);
s32 VillagerMemory_IsOtherTown(void *a, u16 *p, void *c);
s32 Villager_PickFormerResidentMemoryToReplace(Unk_0207f264_Entry *t);
s32 VillagerMemory_IsFormerResident(u32 a, u16 *p, u32 c);
s32 Villager_PickMemoryToReplace(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *));
s32 Villager_GetMinutesSinceLastTalk(Unk_0207f264_Entry *t, void *o);
s32 Villager_GetMaxFriendship(Unk_0207f264_Entry *t);
s32 Villager_FindMemoryIndexById(Unk_0207f264_Entry *t, void *id);
s32 Villager_FindFreeMemoryIndex(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *Villager_FindMemory(u32 a, void *b);
Unk_0207f264_Entry *Villager_GetMemory(Unk_0207f264_Entry *t, u32 i);
s32 Villager_FindMemoryIndex(Unk_0207f264_Entry *t, void *id);
BOOL Villager_IsValidMemoryIndex(Unk_0207f264_Entry *t, u32 i);
u8 *Villager_GetInfo3a(u32 a);
u8 Villager_GetFurnitureTasteScore(u32 a, u32 b);
u8 *Villager_GetFurnitureTaste(Unk_0207f264_Entry *t, u32 i);
u8 *Villager_GetInfo(u32 a);
u8 *Villager_GetFashionTaste(u32 a);
u32 Villager_GetInfoByte2(u32 a);
u32 Villager_GetAnimalKind(u32 a);
u32 Villager_GetStarSign(u32 a);
BOOL Villager_CanAttendParty(u32 a);
struct Unk_0207fa50_Rec {
    u16 id;
    u8 pad[10];
};
s32 Villager_GetUpcomingBirthdayDay(u32 a, s32 b, u8 *c);
u8 *Villager_GetBirthday(u32 a);
void Villager_SetCatchphrase(u32 a, void *b, s32 c);
void Villager_SetCatchphraseFromMsg(u32 a, u32 b);
void Villager_SetCatchphraseEncoded(u32 a, void *b);
}
}

// ---- unk_0207fb80.cpp
namespace nO {
extern "C" {

s32 StrBuf_ClearAlt(void *p);
s32 EncodedString_SetRaw(void *dst, void *src, s32 n);
void _ZN15EncodedString10C1Ev(void *p);
void _ZN15EncodedString10D1Ev(void *p);
void _ZN9MsgString5clearEv(void *p);
s32 Villager_HasFlea(void *p);
s32 Random_GlobalBelow(s32 a);
s32 String_Load(void *a, void *b, void *c);
s32 _ZN9MsgString11fromEncodedEP13EncodedStringii(void *a, void *b, s32 c, s32 d);
s32 MI_CpuFill8(void *p, s32 v, s32 n);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
s32 _ZN10VillagerId7isValidEv(void *p);
void *VillagerId_GetSpecies(void *p);
u8 *VillagerInfo_Get(void *p);
void *Letter_GetSenderPlayer(void *p);
void _ZN8PlayerIdC1ERKS_(void *a, void *b);
s32 _ZN8PlayerId7isValidEv(void *p);
s32 Villager_FindMemoryIndex(void *t, void *p);
s32 Villager_GetMemory(void *t, s32 p);
s32 _ZN14VillagerMemory16isLetterReceivedEv();
s32 _ZN8PlayerIdC1Ev(void *p);
void *PlayerData_GetResident(void *a, s32 i);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN6TownId15getTownRelationEv(void *p);
void *Villager_FindMemory(void *t, void *p);
void _ZN11MsgString9CC2Ev(void *p);
void _ZN11MsgString9CD1Ev(void *p);
s32 TownId_IsValid(void *p);
s32 TownId_GetNameString(void *a, void *b);
s32 MailText_SetSlot(s32 a, void *b);
s32 Villager_SendLetterWithPaper(void *a, u32 b, void *c, void *d, void *e, s32 f);
void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff48testFlagEj(void *p, s32 a);
s32 Clock_GetDateTime(void *p);
s32 MI_CpuCopy8(void *a, void *b, s32 n);
s32 Event_GetState(s32 a, void *b, s32 c);
s32 _ZN14VillagerMemory13getFriendshipEv();
s32 _ZN14VillagerMemory19isNewYearLetterSentEv(void *p);
s32 _ZN14VillagerMemory20setNewYearLetterSentEv(void *p);
s32 _ZN14VillagerMemory20isBirthdayLetterSentEv(void *p);
s32 _ZN14VillagerMemory21setBirthdayLetterSentEv(void *p);
void _ZN11MsgString25C1Ev(void *p);
void _ZN11MsgString25D1Ev(void *p);
s32 String_FormatNumber(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *_ZN12Unk_02097ff411getBirthdayEv(void *p);
void _ZN12ItemPickSpec3setEii(void *p, void *a, void *b);
void ItemPickSpec_Destruct(void *p);
s32 ItemPick_One(void *a, void *b, void *c, void *d, s32 e, s32 f, void *g);
s32 MailCheck_GradeLetter(void *p);
void _ZN11MsgString9BC1Ev(void *p);
void _ZN11MsgString9BD1Ev(void *p);
s32 _ZN10LetterView10getPresentEv(void *p);
s32 Letter_GetBodyLength(void *p);
void _ZN11MsgString33C1Ev(void *p);
void _ZN11MsgString33D1Ev(void *p);
void _ZN8PlayerId13getNameStringEP9MsgString(void *a, void *b);
s32 TopicWord_PickRandom(void *a, s32 i);
s32 String_LoadResolveAltText(void *a, void *b, s32 c);
s32 ItemPick_FromRange(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 Villager_SendLetter(void *a, s32 b, void *c, void *d, s32 e);
s32 Villager_SendLetter4(void *a, s32 b, s32 c, void *d, void *e, u16 *f);
s32 _ZN14VillagerMemory13addFriendshipEi(void *a, s32 b);
s32 _ZN8PlayerId6equalsEPS_(void *a, void *b);
s32 memcmp(void *a, void *b, s32 n);
extern u8 gSavePlayers[];
extern u8 gSaveTownId[];
extern void *sBirthdayGiftLists[];
extern void *sLetterReplyGiftLists[];
void Villager_SendByeLetter(void *t, void *p);
void Villager_SendNewYearLetter(void *t, void *p, void *q);
void Villager_SendBirthdayLetter(void *t, void *p, void *q);
void Villager_GetDefaultUmbrella(u16 *out, void *idx);
void Villager_GetDefaultShirt(u16 *out, void *idx);
void Villager_GetUmbrella(u16 *out, VillagerDataProfileView *o);
void Villager_GetDefaultUmbrella(u16 *out, void *idx);
void Villager_GetUmbrella(u16 *out, VillagerDataProfileView *o);
void Villager_GetDefaultShirt(u16 *out, void *idx);
void Villager_SendByeLetter(void *t, void *p);
static inline BOOL Unk_0207ff5c_B(s32 v) {
    if (v) {
        return TRUE;
    }
    return FALSE;
}
void Villager_SendNewYearLetter(void *t, void *p, void *q);
void Villager_SendBirthdayLetter(void *t, void *p, void *q);
}
}

// ---- unk_020804d0.cpp
namespace nP {
extern "C" {

void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void *memset(void *, s32, u32);
void MI_CpuFill8(void *dst, s32 v, u32 n);
void MI_CpuCopy8(void *src, void *dst, u32 n);
u32 Random_GlobalBelow(u32 n);
void _ZN6ItemIdD1Ev();
void _ZN6ItemIdC1Ev();
void VillagerMemory_Destruct();
void VillagerMemory_Construct();
void VillagerMemory_Clear(void *);
void *Letter_GetSenderPlayer(u32);
void _ZN8PlayerIdC1ERKS_(void *, void *);
s32 _ZN8PlayerId7isValidEv(void *);
void _ZN8PlayerIdC1Ev(void *);
void *Villager_FindMemory(void *, void *);
void Letter_Copy(void *, u32);
void TownId_Assign(void *, const void *);
u32 _ZN10LetterView10getPresentEv(u32);
void Item_ToPlacedForm(u16 *, u16 *, s32);
s32 Item_IsFurniture(u16 *);
void Villager_AddReceivedItem(void *, u16 *);
void _ZN10VillagerId3setEjjPv(void *, u32, u32, u32);
void StrBuf_ClearAlt(void *);
void _ZN15EncodedString10C1Ev(void *);
void _ZN15EncodedString10D1Ev(void *);
s32 Villager_GetDefaultCatchphraseEncoded(void *, u32);
void _ZN15EncodedString106copyToEPvi(void *, void *, s32);
void *VillagerInfo_Get(u32);
void Villager_SetWallpaper(void *, u32);
void Villager_SetCarpet(void *, u32);
void *Villager_GetPlan(void *);
void VillagerPlanBlock_RollTrend(void *, void *, u32);
u32 VillagerPlanBlock_GetPlan(void *);
u32 _ZN12VillagerPlan8getStateEv(u32);
void Villager_PickRoomLayout(void *, u32, u32);
void Villager_PickShownFurniture(void *);
void Villager_SetMoveInKind(void *, u32);
void VillagerId_Clear(void *);
void _ZN23VillagerDataProfileView16clearCatchphraseEv(void *);
void TownId_Clear(void *);
void HousePos_Clear(void *);
void VillagerPlanBlock_Clear(void *);
void Letter_Clear(void *);
void Villager_ClearReceivedItems(void *);
void TownId_Destruct(void *);
void _ZN8HousePosD1Ev(void *);
void VillagerId_Destruct(void *);
void VillagerPlanBlock_Destruct(void *);
void _ZN6LetterD1Ev(void *);
void _ZN7PatternD1Ev(void *);
void _ZN7PatternC1Ev(void *);
void _ZN6LetterC1Ev(void *);
void VillagerPlanBlock_Construct(void *);
void VillagerId_Construct(void *);
void TownId_Construct(void *);
void _ZN8HousePosC1Ev(void *);
void _ZN16EncodedString16BC1Ev(void *);
void _ZN16EncodedString16BD1Ev(void *);
void _ZN15EncodedString16C1Ev(void *);
void _ZN15EncodedString16D1Ev(void *);
void EncodedString_SetRaw(void *, void *, s32);
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *, void *, s32, s32);
void _ZN14EncodedString8C1Ev(void *);
void _ZN14EncodedString8D1Ev(void *);
void _ZN14EncodedString86copyToEPvj(void *, void *, s32);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *, void *);
s32 memcmp(void *, void *, u32);
s32 _ZN8PlayerId6equalsEPS_(void *, void *);
extern u8 gSaveTownId[];
struct Unk_020805d0_Rec {
    u8 pad_00[6];
    u16 furniture[10];
    u8 pad_1a[0x12];
    u16 shirt;
    u8 umbrella;
    u8 roomLayout;
    u8 wallpaper;
    u8 carpet;
    u8 trendTable[0x18];
    u8 personality;
};
struct Unk_02080de0 {
    u16 townId;
    u8 townName[8];
};
BOOL VillagerMemory_MatchesPlayer(Unk_02080de0 *a, Unk_02080de0 *b);
}
}

// ---- unk_02080e18.cpp
namespace nQ {
extern "C" {

struct Unk_02080e20_Obj {
    u8 pad[0x64];
    u16 lo : 8;
    u16 lvl : 3;
    u16 hi : 5;
};
extern u8 gSaveTownId[];
extern u8 gSaveTownTune[];
extern u8 sPersonalitySleepHours[][4];
extern u8 sStarSignEndDates[];
extern u8 sFurnitureTasteTextBase[];
extern u8 gSaveVillagers[];
extern u8 sSpNpcInfoTable[];
extern u8 sVillagerInfoTable[];
extern u8 gNpcActorRegistry[];
extern CommManager *gCommManager;
void _ZN14VillagerMemory13addFriendshipEi(void *p, s32 v);
void _ZN14VillagerMemory11setTownTuneEPx(void *p, void *q);
s32 DateTime_IsInvalid();
s32 DateTime_Compare(void *a, void *b, s32 c);
s32 DateTime_DiffDays(void *a, void *b);
void Clock_GetDateTime(void *p);
s32 _ZN8PlayerId7isValidEv(void *p);
void _ZN8PlayerId6setRawEPv(void *self, void *p);
void TownId_Assign(void *src, void *dst);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
void MI_CpuFill8(void *p, u32 v, u32 n);
void *_ZN8PlayerId7getNameEv(void *p);
void _ZN8PlayerId5clearEv(void *p);
void TownId_Destruct(void *p);
void TownId_Construct(void *p);
void _ZN8PlayerIdC1Ev(void *p);
void _ZN8PlayerIdC1EPv(void *p);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);
void _ZN13VillagerStateD1Ev(void *p);
s32 VillagerId_IsValidSpecies(u32 x);
BOOL String_Load(MsgString *buf, u8 *key, const char *name);
u8 *SaveVillagers_Get(void *tbl, u32 idx);
s32 Villager_GetInfoByte2(u8 *p);
u8 *_ZN12VillagerData13getVillagerIdEv(u8 *p);
s32 VillagerId_GetVoiceType(u8 *p);
s32 _ZN10VillagerId7getNameEj(u8 *p, void *q);
s32 SaveVillagers_IsValidIndex(s32 i);
s32 NpcRegistry_GetSlotCount();
s32 _ZN16NpcActorRegistry8getSpNpcEi(void *tbl, s32 i);
s32 _ZN16NpcActorRegistry11getVillagerEi(void *tbl, s32 i);
s32 _ZN16NpcActorRegistry11removeSpNpcEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry8addSpNpcEP8NpcActorPt(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry14removeVillagerEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry11addVillagerEP8NpcActorPt(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry18pickRandomVillagerEPi(void *tbl, void *p);
s32 _ZN16NpcActorRegistry14findVillagerAtEii(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry11findSpNpcAtEii(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry17findSpNpcByHandleEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry20findVillagerByHandleEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry16findSpNpcByIndexEj(void *tbl, void *p);
s32 _ZN16NpcActorRegistry19findVillagerByIndexEj(void *tbl, void *p);
void *VillagerMemory_GetPlayerId(void *p);
u8 *VillagerMemory_GetTownId(u8 *p);
u8 *VillagerMemory_GetTalkDate(u8 *p);
void VillagerMemory_AddStreakFriendship(Unk_02080e20_Obj *p);
BOOL VillagerMemory_UpdateTalkStreak(Unk_02080e20_Obj *self, u8 *p);
void VillagerMemory_RecordTalk(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c);
void VillagerMemory_Clear(u8 *self);
void HousePos_Set(u8 *p, u8 a, u8 b);
void HousePos_Clear(u8 *p);
u8 *Personality_GetSleepHours(u32 idx);
u32 Date_GetStarSign(u32 a, u32 b);
u8 *SpNpc_GetInfo(u16 *p);
void *VillagerMemory_GetPlayerId(void *p);
u8 *VillagerMemory_GetTownId(u8 *p);
void VillagerMemory_AddStreakFriendship(Unk_02080e20_Obj *p);
BOOL VillagerMemory_UpdateTalkStreak(Unk_02080e20_Obj *self, u8 *p);
u8 *VillagerMemory_GetTalkDate(u8 *p);
void VillagerMemory_RecordTalk(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c);
BOOL VillagerMemory_InitForPlayer(u8 *self, void *a, u8 *b, u8 *c);
BOOL VillagerMemory_IsUsed(void *p);
void VillagerMemory_Clear(u8 *self);
u8 *VillagerMemory_Destruct(u8 *self);
u8 *VillagerMemory_Construct(u8 *self);
void HousePos_SetFromUnit(u8 *out, s32 *in);
void HousePos_Set(u8 *p, u8 a, u8 b);
BOOL HousePos_IsValid(u8 *p);
void HousePos_Clear(u8 *p);
void _ZN8HousePosD1Ev();
u8 *_ZN8HousePosC1Ev(u8 *p);
BOOL Personality_IsAsleep(u32 idx, void *buf);
u8 *Personality_GetSleepHours(u32 idx);
u32 Town_GetMaxOutdoorVillagers();
u32 Date_GetStarSignOf(u8 *p);
u32 Date_GetStarSign(u32 a, u32 b);
u8 FurnitureTaste_GetTextIndex(u8 *p);
BOOL Villager_GetDefaultCatchphrase(MsgString *buf, u32 x);
BOOL Villager_GetDefaultCatchphraseEncoded(EncodedString *self, u32 x);
BOOL Villager_GetDefaultCatchphrase(MsgString *buf, u32 x);
s32 SpNpc_GetInfoByte0(u16 *p);
u32 Npc_GetInfoByte2(u16 *p);
u32 Npc_GetVoiceType(u16 *p);
BOOL Npc_GetName(u8 *self, u16 *p);
BOOL Villager_GetSpeciesName(MsgString *buf, u32 x);
u8 *SpNpc_GetInfo(u16 *p);
u8 *VillagerInfo_Get(u32 n);
s32 NpcRegistry_FindVillager(void *a);
s32 NpcRegistry_FindSpNpc(void *a);
}
}

namespace nZ {
extern "C" {
void ImpressionCond_Always(void);
void ImpressionCond_Summer(void);
void ImpressionCond_Autumn(void);
void ImpressionCond_Winter(void);
void ImpressionCond_TwoPlusResidents(void);
void ImpressionCond_FourResidents(void);
void ImpressionCond_Hair7(void);
void ImpressionCond_Hair6(void);
void ImpressionCond_Hair4(void);
void ImpressionCond_Hair3(void);
void ImpressionCond_Hair2(void);
void ImpressionCond_AccessoryHairA(void);
void ImpressionCond_AccessoryHairB(void);
void ImpressionCond_AccessoryHairC(void);
void ImpressionCond_AccessoryHairD(void);
void ImpressionCond_BellsOver60000(void);
void ImpressionCond_Bells40000To60000(void);
void ImpressionCond_Bells20000To40000(void);
void ImpressionCond_Bells10000To20000(void);
void ImpressionCond_BellsUpTo1000(void);
void ImpressionCond_BellsUpTo300(void);
void ImpressionCond_AllFishCaught(void);
void ImpressionCond_HalfFishCaught(void);
void ImpressionCond_AllInsectsCaught(void);
void ImpressionCond_HalfInsectsCaught(void);
void ImpressionCond_FriendshipVeryHigh(void);
void ImpressionCond_FriendshipHigh(void);
void ImpressionCond_FriendshipLow(void);
void ImpressionCond_FriendshipVeryLow(void);
void ImpressionCond_PocketsFull(void);
void ImpressionCond_TimeOfDay3(void);
void ImpressionCond_TimeOfDay0(void);
void ImpressionCond_WearingShirt12a8(void);
void ImpressionCond_Snowing(void);
void ImpressionCond_Raining(void);
void ImpressionCond_HoldingUmbrella(void);
void ImpressionCond_FlowerAccessory(void);
void ImpressionCond_WearingHat1406(void);
void ImpressionCond_WearingHat13e4(void);
void ImpressionCond_WearingHat13e3(void);
void ImpressionCond_WearingHat13f5(void);
void ImpressionCond_WearingHat13ea(void);
void ImpressionCond_WearingHat13e6(void);
void ImpressionCond_WearingHat1405(void);
void ImpressionCond_WearingHat13bc(void);
void ImpressionCond_WearingHat13a8(void);
void ImpressionCond_WearingHat13b2(void);
void ImpressionCond_WearingHat13c1(void);
void ImpressionCond_HoldingWateringCan(void);
void ImpressionCond_HoldingRod(void);
void ImpressionCond_HoldingAxe(void);
void ImpressionCond_HoldingNet(void);
void ImpressionCond_Mood2or4(void);
void ImpressionCond_Mood1(void);
void ImpressionCond_VillagerEventToday(void);
void ImpressionCond_FewVillagers(void);
void ImpressionCond_FlowersAround(void);
void ImpressionCond_WeedsAround(void);
void ImpressionCond_PlayerFaceFlag(void);
}
}

namespace nZ {
extern "C" {
extern const u8 sBadSpeciesPairs[8];
const u8 sBadSpeciesPairs[8] = {
    0x04, 0x1b, 0x09, 0x02, 0x00, 0x0a, 0x04, 0x20,
};
extern const u8 sAnimalKindByte2[36];
const u8 sAnimalKindByte2[36] = {
    0x00, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0x02, 0x01, 0x01, 0x00,
    0x03, 0x03, 0x00, 0x01, 0x02, 0x00, 0x02, 0x00, 0x01, 0x07, 0x04, 0x05, 0x00, 0x02, 0x02, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
VillagerData sTransferVillager;
extern const u32 sLetterReplyGiftLists[3];
const u32 sLetterReplyGiftLists[3] = {
    0x00000000, 0x00000004, 0x00000003,
};
extern const u8 sPersonalityCompat[36];
const u8 sPersonalityCompat[36] = {
    0x28, 0x60, 0x08, 0x08, 0x28, 0x60, 0x60, 0x08, 0x28, 0x28, 0x60, 0x08, 0x08, 0x28, 0x60, 0x60,
    0x08, 0x28, 0x08, 0x28, 0x60, 0x28, 0x08, 0x60, 0x28, 0x60, 0x08, 0x08, 0x60, 0x28, 0x60, 0x08,
    0x28, 0x60, 0x28, 0x08,
};
extern const u16 sMonthlySickRoll[12];
const u16 sMonthlySickRoll[12] = {
    0x0c00, 0x0c00, 0x0800, 0x0c00, 0x0c00, 0x0800, 0x0c00, 0x0c00, 0x0800, 0x0c00, 0x0800, 0x0c00,
};
Unk_0207ed1c_Fn sVillagerTrendFilters[5] = {
    &VillagerDataItemView::isInsectItem, &VillagerDataItemView::isFishItem, &VillagerDataItemView::isFossilItem,
    &VillagerDataItemView::isShirtItem, &VillagerDataItemView::isTasteFurniture,
};
extern const u8 sStarElementCompat[16];
const u8 sStarElementCompat[16] = {
    0x80, 0x00, 0x30, 0x30, 0x00, 0x80, 0x30, 0x30, 0x30, 0x30, 0x80, 0x00, 0x30, 0x30, 0x00, 0x80,
};
extern const u8 sGoodSpeciesPairs[16];
const u8 sGoodSpeciesPairs[16] = {
    0x04, 0x09, 0x0d, 0x0e, 0x1d, 0x15, 0x03, 0x19, 0x05, 0x0a, 0x12, 0x02, 0x13, 0x00, 0x00, 0x00,
};
VillagerStateTable gVillagerStates;
u8 sVillagerLetterPath[0x28];
NpcTexPatBufPool sNpcTexPatBufPool;
extern const u8 sVillagerInfoTable[11700];
const u8 sVillagerInfoTable[11700] = {
    0x8f, 0x9d, 0x74, 0x60, 0x01, 0x00, 0x88, 0x34, 0xb8, 0x37, 0xb8, 0x37, 0x6c, 0x34, 0x24, 0x30,
    0x84, 0x34, 0x44, 0x47, 0x80, 0x34, 0x7c, 0x34, 0xf1, 0xff, 0x02, 0x01, 0x01, 0x05, 0x01, 0x01,
    0x03, 0x01, 0x04, 0x00, 0x04, 0x04, 0x03, 0x09, 0x00, 0x02, 0x08, 0x00, 0x29, 0x00, 0x04, 0x23,
    0x2f, 0x22, 0x23, 0x28, 0x19, 0x0a, 0x14, 0x1e, 0x0f, 0x2d, 0x33, 0x13, 0x33, 0x07, 0x00, 0x08,
    0xcd, 0x08, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x0c, 0x02, 0x01, 0x14, 0x11, 0x8a, 0x99,
    0x69, 0x74, 0x02, 0x00, 0x08, 0x33, 0xf1, 0xff, 0xd4, 0x37, 0xa8, 0x36, 0xb0, 0x36, 0xc8, 0x36,
    0x90, 0x36, 0x10, 0x33, 0x38, 0x37, 0x8c, 0x36, 0x02, 0x02, 0x01, 0x02, 0x01, 0x01, 0x03, 0x03,
    0x04, 0x04, 0x04, 0x07, 0x0a, 0x14, 0x21, 0x02, 0x09, 0x00, 0x1b, 0x00, 0x01, 0x17, 0x39, 0x3a,
    0x19, 0x28, 0x05, 0x1e, 0x14, 0x23, 0x32, 0x0a, 0x33, 0x13, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08,
    0x66, 0x06, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a, 0x01, 0x01, 0x14, 0x11, 0x67, 0x8b, 0x9a, 0x74,
    0x0e, 0x00, 0x40, 0x30, 0x68, 0x30, 0x34, 0x30, 0xf1, 0xff, 0x20, 0x30, 0x50, 0x46, 0x3c, 0x37,
    0x50, 0x35, 0x74, 0x30, 0x4c, 0x36, 0x02, 0x01, 0x01, 0x02, 0x01, 0x05, 0x03, 0x00, 0x04, 0x02,
    0x04, 0x00, 0x0b, 0x09, 0x62, 0x03, 0x01, 0x00, 0xa0, 0x00, 0x0d, 0x17, 0x2b, 0x00, 0x2d, 0x14,
    0x0a, 0x32, 0x1e, 0x23, 0x0f, 0x19, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04,
    0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x04, 0x01, 0x14, 0x17, 0xc2, 0x9e, 0x58, 0x48, 0x4e, 0x00,
    0xc8, 0x30, 0xf4, 0x30, 0xec, 0x30, 0x0c, 0x30, 0xf1, 0xff, 0xe8, 0x30, 0x3c, 0x37, 0x60, 0x36,
    0xd8, 0x37, 0x40, 0x36, 0x00, 0x01, 0x01, 0x06, 0x01, 0x09, 0x03, 0x01, 0x04, 0x01, 0x04, 0x08,
    0x02, 0x10, 0x31, 0x00, 0x04, 0x00, 0xbe, 0x00, 0x0c, 0x20, 0x27, 0x19, 0x0f, 0x0a, 0x28, 0x23,
    0x32, 0x1e, 0x05, 0x14, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06,
    0xcd, 0x04, 0x66, 0x06, 0x04, 0x01, 0x14, 0x12, 0xdd, 0x8e, 0x56, 0x3f, 0x03, 0x00, 0x40, 0x35,
    0xf1, 0xff, 0x18, 0x37, 0x44, 0x37, 0xe0, 0x33, 0x74, 0x36, 0x1c, 0x34, 0xb4, 0x35, 0x3c, 0x34,
    0xe4, 0x33, 0x00, 0x02, 0x01, 0x09, 0x01, 0x04, 0x03, 0x00, 0x04, 0x09, 0x04, 0x03, 0x09, 0x1a,
    0x42, 0x07, 0x04, 0x00, 0x19, 0x00, 0x04, 0x06, 0x1d, 0x28, 0x14, 0x19, 0x28, 0x0f, 0x23, 0x1e,
    0x32, 0x0a, 0x66, 0x06, 0x9a, 0x09, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x66, 0x06,
    0xcd, 0x0c, 0x01, 0x00, 0x03, 0x30, 0xd8, 0x77, 0x63, 0x4e, 0x04, 0x00, 0x50, 0x30, 0x20, 0x30,
    0x24, 0x30, 0x0c, 0x30, 0xc4, 0x37, 0xc0, 0x46, 0xd8, 0x3f, 0xf4, 0x45, 0xa0, 0x43, 0xb0, 0x46,
    0x00, 0x01, 0x01, 0x05, 0x01, 0x06, 0x03, 0x01, 0x04, 0x02, 0x04, 0x02, 0x09, 0x09, 0x63, 0x00,
    0x03, 0x00, 0x4a, 0x00, 0x0a, 0x16, 0x32, 0x33, 0x1e, 0x00, 0x0a, 0x28, 0x1e, 0x14, 0x0f, 0x32,
    0x00, 0x08, 0x33, 0x13, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x05, 0xcd, 0x08,
    0x04, 0x00, 0x03, 0x16, 0xa1, 0x7b, 0x69, 0x7b, 0x05, 0x00, 0x40, 0x30, 0xf1, 0xff, 0xf1, 0xff,
    0x4c, 0x34, 0x70, 0x36, 0x58, 0x46, 0xf8, 0x40, 0x1c, 0x3c, 0x68, 0x36, 0x18, 0x3c, 0x01, 0x07,
    0x02, 0x01, 0x03, 0x00, 0x03, 0x03, 0x04, 0x03, 0x04, 0x00, 0x07, 0x01, 0x04, 0x02, 0x04, 0x00,
    0x11, 0x00, 0x04, 0x04, 0x29, 0x2d, 0x28, 0x0a, 0x32, 0x14, 0x19, 0x00, 0x2d, 0x19, 0x33, 0x07,
    0x9a, 0x11, 0x33, 0x13, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x02, 0x00,
    0x03, 0x04, 0xdf, 0x81, 0x4f, 0x51, 0x06, 0x00, 0x00, 0x30, 0x20, 0x30, 0x30, 0x44, 0x30, 0x44,
    0xf1, 0xff, 0x44, 0x36, 0xec, 0x45, 0x1c, 0x30, 0x18, 0x30, 0x10, 0x30, 0x01, 0x0a, 0x02, 0x02,
    0x01, 0x07, 0x03, 0x00, 0x04, 0x07, 0x04, 0x0b, 0x07, 0x16, 0x25, 0x09, 0x00, 0x00, 0x95, 0x00,
    0x05, 0x13, 0x2d, 0x1e, 0x14, 0x32, 0x28, 0x1e, 0x05, 0x0f, 0x14, 0x1e, 0x66, 0x0a, 0x33, 0x13,
    0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0xcd, 0x0c, 0x02, 0x00, 0x03, 0x15,
    0x49, 0x63, 0xf7, 0x5d, 0x07, 0x00, 0x50, 0x30, 0xf1, 0xff, 0xf1, 0xff, 0xc8, 0x37, 0x4c, 0x35,
    0x28, 0x35, 0x7c, 0x37, 0x3c, 0x37, 0x20, 0x35, 0x24, 0x35, 0x03, 0x00, 0x04, 0x02, 0x00, 0x01,
    0x03, 0x01, 0x00, 0x01, 0x04, 0x07, 0x07, 0x11, 0x46, 0x03, 0x07, 0x00, 0x06, 0x00, 0x08, 0x07,
    0x1e, 0x02, 0x05, 0x23, 0x2d, 0x00, 0x0a, 0x1e, 0x1e, 0x28, 0x33, 0x13, 0x33, 0x13, 0x00, 0x08,
    0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c, 0x01, 0x00, 0x0f, 0x02, 0x5d, 0x74,
    0xcf, 0x60, 0x08, 0x00, 0xf8, 0x34, 0x88, 0x30, 0xec, 0x43, 0x6c, 0x30, 0xf1, 0xff, 0xa8, 0x37,
    0x58, 0x36, 0x1c, 0x30, 0xa8, 0x37, 0x2c, 0x37, 0x01, 0x05, 0x00, 0x01, 0x01, 0x09, 0x03, 0x00,
    0x04, 0x04, 0x04, 0x00, 0x0c, 0x04, 0x67, 0x07, 0x06, 0x00, 0xb0, 0x00, 0x07, 0x10, 0x2b, 0x1f,
    0x05, 0x23, 0x19, 0x32, 0x0a, 0x23, 0x1e, 0x28, 0x00, 0x08, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x11,
    0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x05, 0x00, 0x0f, 0x0a, 0x54, 0x72, 0xd3, 0x67,
    0x09, 0x00, 0xb4, 0x30, 0x10, 0x31, 0xf1, 0xff, 0x44, 0x37, 0xf1, 0xff, 0xa8, 0x35, 0xa8, 0x35,
    0xa8, 0x35, 0xa8, 0x35, 0xa8, 0x35, 0x00, 0x01, 0x01, 0x09, 0x01, 0x06, 0x03, 0x00, 0x04, 0x07,
    0x02, 0x02, 0x03, 0x04, 0x08, 0x04, 0x08, 0x00, 0x6f, 0x00, 0x08, 0x1e, 0x06, 0x25, 0x32, 0x0a,
    0x2d, 0x14, 0x28, 0x1e, 0x23, 0x14, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09,
    0x00, 0x08, 0x9a, 0x11, 0xcd, 0x0c, 0x00, 0x00, 0x0f, 0x1c, 0x4a, 0x74, 0xe3, 0x5f, 0x1f, 0x00,
    0xf1, 0xff, 0xb8, 0x30, 0x24, 0x37, 0xa4, 0x30, 0x28, 0x30, 0xe8, 0x30, 0x20, 0x34, 0xa4, 0x47,
    0x60, 0x36, 0x98, 0x47, 0x01, 0x05, 0x01, 0x03, 0x04, 0x05, 0x03, 0x03, 0x04, 0x04, 0x04, 0x02,
    0x07, 0x0d, 0x2e, 0x09, 0x02, 0x00, 0x5a, 0x00, 0x00, 0x0b, 0x03, 0x17, 0x19, 0x23, 0x14, 0x00,
    0x32, 0x28, 0x0a, 0x1e, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06,
    0xcd, 0x04, 0x66, 0x06, 0x04, 0x00, 0x0f, 0x0b, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0x08, 0x33,
    0x00, 0x33, 0xf1, 0xff, 0xa8, 0x36, 0xf1, 0xff, 0xc0, 0x32, 0x38, 0x37, 0xdc, 0x46, 0xc0, 0x32,
    0x14, 0x33, 0x01, 0x01, 0x01, 0x05, 0x04, 0x05, 0x03, 0x00, 0x04, 0x08, 0x02, 0x01, 0x02, 0x02,
    0x66, 0x07, 0x00, 0x00, 0xe7, 0x00, 0x01, 0x09, 0x25, 0x12, 0x23, 0x28, 0x0a, 0x0f, 0x19, 0x1e,
    0x32, 0x14, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04,
    0x66, 0x06, 0x01, 0x01, 0x0f, 0x09, 0xcb, 0xc0, 0x4c, 0x29, 0x0a, 0x00, 0x40, 0x30, 0x48, 0x37,
    0x2c, 0x30, 0xc8, 0x37, 0x9c, 0x35, 0x6c, 0x35, 0xa4, 0x35, 0x7c, 0x37, 0x6c, 0x35, 0x7c, 0x37,
    0x02, 0x02, 0x04, 0x06, 0x01, 0x07, 0x03, 0x01, 0x04, 0x09, 0x04, 0x04, 0x04, 0x1e, 0x29, 0x06,
    0x05, 0x00, 0x8f, 0x00, 0x1d, 0x1a, 0x35, 0x21, 0x0a, 0x1e, 0x0f, 0x28, 0x1e, 0x14, 0x19, 0x32,
    0x9a, 0x11, 0x00, 0x08, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0xcd, 0x08,
    0x02, 0x00, 0x0d, 0x33, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0xb4, 0x30, 0x24, 0x37, 0x4c, 0x34,
    0xa0, 0x30, 0x38, 0x31, 0x34, 0x34, 0xec, 0x36, 0x64, 0x34, 0x88, 0x47, 0x94, 0x47, 0x01, 0x0c,
    0x02, 0x01, 0x04, 0x05, 0x03, 0x00, 0x04, 0x09, 0x03, 0x03, 0x0a, 0x1d, 0x0a, 0x03, 0x00, 0x00,
    0x3e, 0x00, 0x11, 0x23, 0x19, 0x18, 0x19, 0x32, 0x0a, 0x2d, 0x1e, 0x14, 0x0f, 0x28, 0x66, 0x06,
    0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x00,
    0x0d, 0x1d, 0x70, 0x68, 0xd1, 0x57, 0x0b, 0x00, 0x7c, 0x31, 0x74, 0x31, 0x8c, 0x31, 0x68, 0x31,
    0x6c, 0x31, 0x80, 0x31, 0x88, 0x31, 0x70, 0x31, 0x78, 0x31, 0x84, 0x31, 0x00, 0x02, 0x02, 0x01,
    0x01, 0x05, 0x01, 0x0c, 0x04, 0x0b, 0x04, 0x09, 0x01, 0x01, 0x4a, 0x01, 0x08, 0x00, 0x78, 0x00,
    0x00, 0x20, 0x0a, 0x0a, 0x0a, 0x05, 0x28, 0x1e, 0x23, 0x0a, 0x14, 0x32, 0x66, 0x06, 0x9a, 0x11,
    0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05, 0x9a, 0x11, 0x66, 0x0a, 0x00, 0x00, 0x00, 0x1c,
    0x52, 0x59, 0xd9, 0x7c, 0x0c, 0x00, 0xb4, 0x30, 0xe4, 0x30, 0xec, 0x30, 0xa0, 0x30, 0xcc, 0x30,
    0x3c, 0x35, 0xa4, 0x47, 0x10, 0x30, 0x5c, 0x36, 0x38, 0x37, 0x01, 0x04, 0x03, 0x03, 0x01, 0x0a,
    0x03, 0x00, 0x04, 0x02, 0x04, 0x05, 0x09, 0x19, 0x6b, 0x07, 0x09, 0x00, 0x51, 0x00, 0x0b, 0x0a,
    0x06, 0x03, 0x1e, 0x19, 0x0f, 0x19, 0x23, 0x28, 0x14, 0x0a, 0x00, 0x08, 0x9a, 0x11, 0x33, 0x07,
    0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x09, 0x03, 0x00, 0x00, 0x03, 0x66, 0x5f,
    0xcb, 0x70, 0x0d, 0x00, 0xb4, 0x30, 0x4c, 0x34, 0x44, 0x37, 0x10, 0x31, 0xd4, 0x37, 0xe4, 0x32,
    0x54, 0x37, 0xc0, 0x34, 0xcc, 0x36, 0x80, 0x37, 0x01, 0x0a, 0x02, 0x01, 0x04, 0x01, 0x03, 0x03,
    0x04, 0x07, 0x04, 0x08, 0x02, 0x1b, 0x0c, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x0c, 0x0b, 0x18, 0x30,
    0x00, 0x0a, 0x23, 0x2d, 0x28, 0x14, 0x19, 0x05, 0x33, 0x07, 0x33, 0x07, 0x00, 0x08, 0x9a, 0x11,
    0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x1b, 0x66, 0x50, 0xbd, 0x8d,
    0x0e, 0x00, 0x44, 0x35, 0x88, 0x30, 0x44, 0x37, 0x98, 0x30, 0x7c, 0x30, 0x28, 0x35, 0x80, 0x30,
    0x58, 0x36, 0x90, 0x30, 0x9c, 0x30, 0x01, 0x06, 0x02, 0x02, 0x01, 0x05, 0x03, 0x03, 0x04, 0x01,
    0x04, 0x04, 0x02, 0x03, 0x2d, 0x08, 0x04, 0x00, 0x73, 0x00, 0x18, 0x23, 0x1e, 0x02, 0x19, 0x28,
    0x14, 0x2d, 0x32, 0x19, 0x1e, 0x1e, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x04, 0x9a, 0x11, 0x66, 0x06,
    0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a, 0x05, 0x00, 0x00, 0x36, 0x61, 0x5b, 0xbf, 0x85, 0x0f, 0x00,
    0xf8, 0x34, 0xf1, 0xff, 0x44, 0x37, 0x34, 0x30, 0x2c, 0x30, 0xe0, 0x30, 0xf4, 0x34, 0x38, 0x34,
    0x3c, 0x47, 0x34, 0x34, 0x01, 0x07, 0x00, 0x02, 0x01, 0x01, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00,
    0x0a, 0x08, 0x4e, 0x02, 0x03, 0x00, 0x6b, 0x00, 0x05, 0x0e, 0x18, 0x26, 0x0f, 0x1e, 0x00, 0x32,
    0x28, 0x0a, 0x28, 0x23, 0x66, 0x06, 0x9a, 0x09, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x08,
    0x9a, 0x11, 0xcd, 0x0c, 0x03, 0x00, 0x00, 0x28, 0x70, 0x64, 0xc8, 0x64, 0x10, 0x00, 0xe0, 0x34,
    0xc8, 0x37, 0x8c, 0x31, 0xc0, 0x37, 0xcc, 0x30, 0xd0, 0x34, 0xc8, 0x34, 0xd4, 0x34, 0xe8, 0x34,
    0xcc, 0x34, 0x01, 0x03, 0x01, 0x01, 0x01, 0x0c, 0x03, 0x03, 0x04, 0x01, 0x04, 0x04, 0x06, 0x11,
    0x6f, 0x05, 0x04, 0x00, 0x42, 0x00, 0x0f, 0x20, 0x1f, 0x2f, 0x0a, 0x00, 0x1e, 0x32, 0x19, 0x28,
    0x14, 0x23, 0x00, 0x08, 0x33, 0x03, 0x9a, 0x11, 0x9a, 0x11, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x05,
    0xcd, 0x08, 0x04, 0x00, 0x00, 0x33, 0x71, 0x80, 0xbb, 0x54, 0x11, 0x00, 0xb4, 0x30, 0xb0, 0x30,
    0x24, 0x37, 0xb8, 0x30, 0xa0, 0x30, 0x34, 0x34, 0x78, 0x37, 0x88, 0x36, 0x90, 0x36, 0x78, 0x37,
    0x00, 0x02, 0x01, 0x05, 0x03, 0x03, 0x03, 0x00, 0x04, 0x05, 0x04, 0x09, 0x04, 0x0b, 0x10, 0x05,
    0x03, 0x00, 0x65, 0x00, 0x07, 0x22, 0x18, 0x05, 0x19, 0x32, 0x19, 0x28, 0x14, 0x05, 0x1e, 0x0f,
    0x9a, 0x11, 0x33, 0x07, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a,
    0x00, 0x00, 0x00, 0x23, 0x6d, 0x5e, 0xbe, 0x77, 0x12, 0x00, 0x00, 0x30, 0x60, 0x30, 0x28, 0x37,
    0xe4, 0x30, 0x20, 0x30, 0xdc, 0x46, 0x58, 0x37, 0xa8, 0x37, 0x48, 0x34, 0x60, 0x36, 0x01, 0x04,
    0x01, 0x09, 0x00, 0x01, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00, 0x05, 0x1d, 0x31, 0x05, 0x03, 0x00,
    0xba, 0x00, 0x0f, 0x08, 0x24, 0x17, 0x28, 0x1e, 0x23, 0x23, 0x14, 0x0a, 0x1e, 0x19, 0x66, 0x0a,
    0x00, 0x08, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x09, 0x05, 0x00,
    0x00, 0x03, 0x84, 0x7a, 0xab, 0x5a, 0x13, 0x00, 0x04, 0x31, 0x6c, 0x31, 0xf1, 0xff, 0xa0, 0x30,
    0x30, 0x37, 0xbc, 0x33, 0xc0, 0x33, 0xc8, 0x33, 0xcc, 0x33, 0xd0, 0x33, 0x00, 0x02, 0x01, 0x05,
    0x03, 0x03, 0x03, 0x01, 0x04, 0x00, 0x04, 0x03, 0x01, 0x0c, 0x52, 0x09, 0x07, 0x00, 0x12, 0x00,
    0x12, 0x1e, 0x08, 0x26, 0x00, 0x14, 0x23, 0x19, 0x28, 0x1e, 0x32, 0x0a, 0x66, 0x06, 0x9a, 0x11,
    0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c,
    0x91, 0x66, 0xa9, 0x60, 0x14, 0x00, 0x88, 0x34, 0xf1, 0xff, 0x70, 0x34, 0x34, 0x44, 0xb8, 0x37,
    0x40, 0x37, 0x48, 0x35, 0x18, 0x46, 0x0c, 0x34, 0xfc, 0x37, 0x01, 0x04, 0x01, 0x0b, 0x01, 0x09,
    0x03, 0x03, 0x04, 0x02, 0x04, 0x00, 0x0b, 0x1d, 0x73, 0x06, 0x05, 0x00, 0x2a, 0x00, 0x04, 0x20,
    0x22, 0x22, 0x0f, 0x28, 0x19, 0x0a, 0x14, 0x05, 0x23, 0x2d, 0x00, 0x08, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x02, 0x01, 0x00, 0x19, 0x90, 0x80,
    0xc0, 0x30, 0x15, 0x00, 0x94, 0x35, 0xa8, 0x36, 0xb0, 0x37, 0x88, 0x32, 0xe0, 0x32, 0xb8, 0x32,
    0x74, 0x36, 0xd0, 0x31, 0x60, 0x35, 0xf4, 0x33, 0x01, 0x02, 0x02, 0x01, 0x01, 0x0c, 0x03, 0x00,
    0x04, 0x0b, 0x04, 0x05, 0x08, 0x01, 0x00, 0x01, 0x02, 0x00, 0x1e, 0x00, 0x06, 0x25, 0x3b, 0x3c,
    0x2d, 0x14, 0x0a, 0x23, 0x1e, 0x19, 0x28, 0x19, 0x33, 0x07, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11,
    0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x01, 0x01, 0x00, 0x2d, 0x62, 0x55, 0xc3, 0x86,
    0x54, 0x00, 0x90, 0x31, 0x94, 0x31, 0xa8, 0x31, 0x44, 0x37, 0xc8, 0x37, 0xb4, 0x31, 0x08, 0x35,
    0x9c, 0x31, 0x00, 0x35, 0xac, 0x31, 0x01, 0x0a, 0x01, 0x09, 0x01, 0x05, 0x03, 0x03, 0x04, 0x01,
    0x04, 0x02, 0x09, 0x1e, 0x2e, 0x00, 0x01, 0x00, 0xb3, 0x00, 0x05, 0x00, 0x19, 0x18, 0x0a, 0x14,
    0x05, 0x1e, 0x32, 0x28, 0x23, 0x14, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04,
    0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x05, 0x00, 0x00, 0x03, 0x83, 0x75, 0xa5, 0x63, 0x03, 0x00,
    0x40, 0x31, 0x5c, 0x31, 0x4c, 0x34, 0xf1, 0xff, 0x58, 0x31, 0x48, 0x34, 0x0c, 0x36, 0x38, 0x37,
    0x10, 0x36, 0x68, 0x34, 0x00, 0x01, 0x01, 0x0b, 0x01, 0x06, 0x03, 0x00, 0x04, 0x07, 0x04, 0x01,
    0x08, 0x0d, 0x11, 0x09, 0x07, 0x00, 0xd4, 0x00, 0x07, 0x19, 0x37, 0x38, 0x28, 0x14, 0x1e, 0x23,
    0x19, 0x0a, 0x1e, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06,
    0xcd, 0x04, 0x66, 0x06, 0x04, 0x00, 0x00, 0x39, 0x73, 0xba, 0x65, 0x6e, 0x19, 0x00, 0xb4, 0x30,
    0x34, 0x44, 0xa0, 0x30, 0xdc, 0x30, 0xb0, 0x30, 0xa8, 0x30, 0x38, 0x37, 0xc0, 0x30, 0x38, 0x36,
    0x34, 0x35, 0x02, 0x01, 0x03, 0x00, 0x01, 0x05, 0x03, 0x03, 0x04, 0x0a, 0x04, 0x0b, 0x06, 0x18,
    0x04, 0x05, 0x03, 0x00, 0x60, 0x00, 0x11, 0x11, 0x00, 0x04, 0x2d, 0x19, 0x0f, 0x14, 0x23, 0x1e,
    0x05, 0x0a, 0x33, 0x07, 0x33, 0x07, 0x00, 0x08, 0xcd, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x05,
    0x00, 0x0c, 0x04, 0x00, 0x19, 0x0f, 0x5c, 0xa6, 0x5d, 0xa1, 0x1a, 0x00, 0x40, 0x30, 0x44, 0x37,
    0x04, 0x38, 0x34, 0x30, 0x44, 0x30, 0x38, 0x46, 0x20, 0x34, 0x1c, 0x34, 0x3c, 0x46, 0x20, 0x34,
    0x00, 0x02, 0x01, 0x09, 0x03, 0x03, 0x04, 0x03, 0x04, 0x02, 0x04, 0x08, 0x06, 0x0f, 0x25, 0x00,
    0x09, 0x00, 0x72, 0x00, 0x14, 0x1a, 0x03, 0x03, 0x05, 0x19, 0x1e, 0x23, 0x28, 0x14, 0x14, 0x0a,
    0x66, 0x0a, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a,
    0x03, 0x00, 0x19, 0x35, 0x69, 0xa2, 0x68, 0x8d, 0x1b, 0x00, 0x40, 0x31, 0xc8, 0x37, 0xf1, 0xff,
    0xec, 0x35, 0x60, 0x31, 0x54, 0x36, 0x68, 0x47, 0x64, 0x30, 0x80, 0x46, 0x88, 0x47, 0x00, 0x02,
    0x01, 0x07, 0x01, 0x06, 0x03, 0x00, 0x04, 0x07, 0x04, 0x06, 0x01, 0x02, 0x46, 0x02, 0x04, 0x00,
    0x48, 0x00, 0x17, 0x21, 0x28, 0x34, 0x1e, 0x0a, 0x23, 0x00, 0x2d, 0x14, 0x32, 0x19, 0x66, 0x06,
    0x9a, 0x11, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x01, 0x00,
    0x19, 0x14, 0x65, 0xce, 0x5d, 0x70, 0x1c, 0x00, 0x98, 0x34, 0x2c, 0x33, 0xec, 0x35, 0xf1, 0xff,
    0xdc, 0x33, 0xf0, 0x37, 0x38, 0x37, 0x94, 0x37, 0xfc, 0x37, 0x78, 0x47, 0x00, 0x02, 0x01, 0x01,
    0x01, 0x0c, 0x03, 0x00, 0x04, 0x05, 0x04, 0x0b, 0x06, 0x0b, 0x67, 0x09, 0x00, 0x00, 0x87, 0x00,
    0x09, 0x11, 0x1e, 0x08, 0x14, 0x2d, 0x1e, 0x14, 0x0a, 0x28, 0x00, 0x32, 0x00, 0x08, 0x33, 0x03,
    0x9a, 0x11, 0xcd, 0x08, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0xcd, 0x08, 0x00, 0x00, 0x19, 0x1b,
    0x90, 0xaf, 0x75, 0x4c, 0x4b, 0x00, 0x5c, 0x32, 0xf1, 0xff, 0x30, 0x44, 0xec, 0x43, 0x34, 0x44,
    0x18, 0x35, 0x50, 0x34, 0x54, 0x34, 0x18, 0x47, 0x10, 0x46, 0x01, 0x04, 0x01, 0x0b, 0x03, 0x03,
    0x04, 0x00, 0x04, 0x04, 0x04, 0x02, 0x09, 0x1c, 0x69, 0x01, 0x06, 0x00, 0x80, 0x00, 0x16, 0x24,
    0x31, 0x00, 0x28, 0x19, 0x14, 0x2d, 0x0f, 0x0a, 0x32, 0x1e, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x01, 0x00, 0x19, 0x28, 0x80, 0x80,
    0x80, 0x80, 0x32, 0x00, 0x48, 0x33, 0x2c, 0x33, 0x6c, 0x31, 0x8c, 0x31, 0x00, 0x33, 0x0c, 0x31,
    0xf1, 0xff, 0x44, 0x33, 0x1c, 0x38, 0xf1, 0xff, 0x01, 0x0b, 0x01, 0x0c, 0x04, 0x06, 0x03, 0x01,
    0x04, 0x04, 0x04, 0x07, 0x02, 0x0a, 0x23, 0x05, 0x01, 0x00, 0x95, 0x00, 0x01, 0x16, 0x13, 0x13,
    0x1e, 0x1e, 0x14, 0x23, 0x00, 0x2d, 0x28, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09,
    0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x00, 0x19, 0x07, 0x94, 0x9c, 0x8b, 0x45,
    0x16, 0x00, 0x40, 0x30, 0x34, 0x30, 0x44, 0x37, 0x28, 0x30, 0xf1, 0xff, 0x4c, 0x36, 0x10, 0x30,
    0x64, 0x30, 0x44, 0x33, 0x38, 0x30, 0x01, 0x09, 0x02, 0x02, 0x01, 0x04, 0x03, 0x03, 0x04, 0x03,
    0x04, 0x08, 0x0a, 0x04, 0x21, 0x04, 0x06, 0x00, 0xbe, 0x00, 0x04, 0x0e, 0x27, 0x32, 0x1e, 0x23,
    0x05, 0x32, 0x0a, 0x00, 0x28, 0x14, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a,
    0x66, 0x06, 0x9a, 0x05, 0xcd, 0x08, 0x01, 0x00, 0x0c, 0x28, 0x79, 0xc3, 0x78, 0x4c, 0x17, 0x00,
    0xb4, 0x36, 0xf1, 0xff, 0x88, 0x32, 0x88, 0x32, 0xdc, 0x33, 0xa4, 0x32, 0xa8, 0x32, 0xb8, 0x32,
    0x9c, 0x32, 0x98, 0x46, 0x01, 0x02, 0x00, 0x02, 0x01, 0x0c, 0x03, 0x03, 0x01, 0x0a, 0x04, 0x0b,
    0x0a, 0x0a, 0x42, 0x04, 0x01, 0x00, 0x02, 0x00, 0x0f, 0x16, 0x12, 0x10, 0x2d, 0x19, 0x19, 0x14,
    0x0a, 0x00, 0x0f, 0x1e, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05,
    0x9a, 0x11, 0x66, 0x0a, 0x00, 0x00, 0x0c, 0x35, 0x74, 0xd3, 0x7f, 0x3a, 0x18, 0x00, 0xcc, 0x31,
    0xf1, 0xff, 0xf1, 0xff, 0xc8, 0x37, 0x70, 0x32, 0x54, 0x47, 0xd8, 0x31, 0x50, 0x47, 0x18, 0x45,
    0xd0, 0x31, 0x01, 0x01, 0x00, 0x01, 0x01, 0x0c, 0x03, 0x00, 0x04, 0x0a, 0x04, 0x09, 0x0a, 0x0e,
    0x63, 0x02, 0x09, 0x00, 0x8b, 0x00, 0x07, 0x00, 0x1a, 0x05, 0x0a, 0x1e, 0x32, 0x28, 0x14, 0x2d,
    0x1e, 0x14, 0x00, 0x08, 0x33, 0x03, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06,
    0x9a, 0x09, 0x00, 0x00, 0x0c, 0x25, 0xba, 0xa4, 0x59, 0x49, 0x1d, 0x00, 0xc8, 0x30, 0xf1, 0xff,
    0xf1, 0xff, 0xec, 0x30, 0xdc, 0x30, 0x64, 0x44, 0xa8, 0x37, 0xd0, 0x30, 0x34, 0x37, 0xd4, 0x30,
    0x01, 0x09, 0x02, 0x01, 0x01, 0x01, 0x03, 0x03, 0x04, 0x00, 0x04, 0x04, 0x05, 0x0a, 0x08, 0x00,
    0x02, 0x00, 0xaf, 0x00, 0x00, 0x02, 0x03, 0x04, 0x19, 0x1e, 0x2d, 0x23, 0x23, 0x14, 0x0a, 0x28,
    0x33, 0x07, 0x33, 0x07, 0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a,
    0x04, 0x00, 0x0e, 0x0b, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0x50, 0x30, 0xc8, 0x37, 0xf1, 0xff,
    0x68, 0x30, 0x78, 0x36, 0x40, 0x47, 0x94, 0x44, 0x58, 0x37, 0x3c, 0x37, 0x3c, 0x47, 0x00, 0x01,
    0x02, 0x01, 0x03, 0x03, 0x03, 0x01, 0x04, 0x07, 0x04, 0x02, 0x08, 0x19, 0x03, 0x03, 0x02, 0x00,
    0x2e, 0x00, 0x1c, 0x19, 0x06, 0x20, 0x2d, 0x19, 0x1e, 0x0f, 0x23, 0x28, 0x00, 0x0a, 0x66, 0x06,
    0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x05, 0x00,
    0x0e, 0x20, 0xc3, 0xe5, 0x32, 0x26, 0x1e, 0x00, 0xf1, 0xff, 0x44, 0x37, 0xc4, 0x37, 0x14, 0x30,
    0x24, 0x30, 0x60, 0x36, 0x20, 0x46, 0x20, 0x46, 0x20, 0x46, 0xec, 0x36, 0x01, 0x0a, 0x02, 0x02,
    0x01, 0x0c, 0x03, 0x00, 0x04, 0x04, 0x04, 0x07, 0x06, 0x09, 0x29, 0x04, 0x08, 0x00, 0x25, 0x00,
    0x03, 0x1d, 0x2d, 0x21, 0x14, 0x32, 0x0a, 0x1e, 0x14, 0x28, 0x1e, 0x00, 0x66, 0x0a, 0x00, 0x08,
    0x33, 0x07, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x00, 0x11, 0x38,
    0xb9, 0xdc, 0x34, 0x32, 0x07, 0x00, 0xc8, 0x30, 0x04, 0x38, 0x2c, 0x30, 0x34, 0x30, 0x28, 0x37,
    0xb0, 0x39, 0xb8, 0x3a, 0xb4, 0x3b, 0xa0, 0x3a, 0xbc, 0x3a, 0x01, 0x09, 0x01, 0x03, 0x01, 0x01,
    0x03, 0x01, 0x04, 0x00, 0x04, 0x02, 0x0b, 0x08, 0x46, 0x02, 0x07, 0x00, 0xa8, 0x00, 0x16, 0x1c,
    0x04, 0x04, 0x1e, 0x0a, 0x00, 0x28, 0x32, 0x14, 0x19, 0x19, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x05, 0x00, 0x11, 0x00, 0x60, 0x70,
    0x8d, 0xa3, 0x1f, 0x00, 0x30, 0x31, 0xc8, 0x37, 0x10, 0x31, 0x98, 0x30, 0x28, 0x30, 0x7c, 0x37,
    0x0c, 0x47, 0x38, 0x34, 0x34, 0x34, 0x2c, 0x37, 0x01, 0x01, 0x00, 0x02, 0x01, 0x09, 0x03, 0x01,
    0x04, 0x09, 0x04, 0x06, 0x0c, 0x1b, 0x4a, 0x08, 0x09, 0x00, 0x46, 0x00, 0x0f, 0x22, 0x1b, 0x31,
    0x14, 0x19, 0x0f, 0x28, 0x23, 0x2d, 0x1e, 0x0a, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0xcd, 0x08,
    0x66, 0x0a, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x0c, 0x03, 0x00, 0x04, 0x0a, 0x83, 0x72, 0x86, 0x85,
    0x20, 0x00, 0x40, 0x31, 0xf1, 0xff, 0xf1, 0xff, 0x24, 0x37, 0x5c, 0x31, 0xf1, 0xff, 0x04, 0x47,
    0x3c, 0x34, 0xa4, 0x35, 0x5c, 0x36, 0x01, 0x07, 0x00, 0x01, 0x01, 0x09, 0x03, 0x03, 0x04, 0x02,
    0x04, 0x06, 0x0b, 0x01, 0x6b, 0x01, 0x00, 0x00, 0xa3, 0x00, 0x1f, 0x09, 0x24, 0x06, 0x23, 0x14,
    0x2d, 0x14, 0x28, 0x1e, 0x0f, 0x23, 0x00, 0x08, 0x33, 0x03, 0x9a, 0x11, 0x00, 0x08, 0x9a, 0x11,
    0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x02, 0x00, 0x04, 0x05, 0x65, 0x68, 0x80, 0xb3, 0x21, 0x00,
    0x7c, 0x35, 0xf1, 0xff, 0x80, 0x35, 0xa8, 0x36, 0x48, 0x32, 0x58, 0x32, 0x84, 0x35, 0xec, 0x45,
    0x94, 0x34, 0x58, 0x32, 0x02, 0x01, 0x01, 0x02, 0x01, 0x06, 0x03, 0x00, 0x04, 0x09, 0x04, 0x00,
    0x0b, 0x04, 0x0c, 0x01, 0x09, 0x00, 0x23, 0x00, 0x01, 0x0c, 0x31, 0x36, 0x28, 0x0a, 0x1e, 0x05,
    0x19, 0x14, 0x00, 0x23, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11,
    0x66, 0x06, 0xcd, 0x0c, 0x00, 0x01, 0x04, 0x2e, 0x6b, 0x7d, 0x8f, 0x89, 0x22, 0x00, 0xf1, 0xff,
    0x28, 0x30, 0x48, 0x37, 0x34, 0x31, 0x2c, 0x30, 0x3c, 0x47, 0xe0, 0x3f, 0x5c, 0x36, 0x3c, 0x31,
    0x38, 0x30, 0x02, 0x02, 0x01, 0x01, 0x01, 0x04, 0x03, 0x01, 0x04, 0x07, 0x04, 0x0b, 0x05, 0x0d,
    0x2d, 0x07, 0x04, 0x00, 0x2c, 0x00, 0x16, 0x01, 0x26, 0x04, 0x28, 0x19, 0x23, 0x2d, 0x0a, 0x1e,
    0x32, 0x14, 0x9a, 0x11, 0x00, 0x08, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x11,
    0xcd, 0x08, 0x00, 0x00, 0x04, 0x0d, 0x77, 0x7c, 0x85, 0x88, 0x23, 0x00, 0xf1, 0xff, 0x00, 0x31,
    0x8c, 0x38, 0x6c, 0x31, 0xe0, 0x33, 0xbc, 0x37, 0x64, 0x47, 0xf0, 0x33, 0xf4, 0x36, 0xe4, 0x33,
    0x00, 0x02, 0x01, 0x06, 0x01, 0x09, 0x03, 0x03, 0x04, 0x09, 0x04, 0x01, 0x08, 0x04, 0x4e, 0x06,
    0x03, 0x00, 0xfe, 0x00, 0x03, 0x06, 0x13, 0x08, 0x05, 0x23, 0x00, 0x28, 0x00, 0x19, 0x0a, 0x2d,
    0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a,
    0x00, 0x00, 0x04, 0x1c, 0x77, 0x74, 0x81, 0x94, 0x24, 0x00, 0x78, 0x30, 0x7c, 0x30, 0x68, 0x30,
    0xc8, 0x37, 0x6c, 0x30, 0xac, 0x33, 0x0c, 0x3b, 0x2c, 0x3e, 0x3c, 0x37, 0x90, 0x30, 0x00, 0x01,
    0x01, 0x07, 0x01, 0x06, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00, 0x0a, 0x19, 0x6f, 0x03, 0x06, 0x00,
    0x9c, 0x00, 0x18, 0x04, 0x1d, 0x2d, 0x14, 0x00, 0x0a, 0x2d, 0x23, 0x28, 0x19, 0x1e, 0x00, 0x08,
    0x33, 0x03, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x09, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x09, 0x05, 0x00,
    0x04, 0x31, 0x91, 0x86, 0x66, 0x83, 0x25, 0x00, 0xf1, 0xff, 0x38, 0x31, 0x4c, 0x34, 0x30, 0x44,
    0x4c, 0x34, 0xe8, 0x3f, 0x74, 0x36, 0x74, 0x30, 0x88, 0x35, 0x40, 0x36, 0x01, 0x07, 0x02, 0x01,
    0x01, 0x06, 0x03, 0x01, 0x04, 0x07, 0x04, 0x04, 0x06, 0x0a, 0x10, 0x02, 0x09, 0x00, 0x24, 0x00,
    0x08, 0x17, 0x23, 0x32, 0x14, 0x32, 0x19, 0x0a, 0x28, 0x1e, 0x19, 0x14, 0x33, 0x07, 0x9a, 0x11,
    0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x0c, 0x00, 0x00, 0x04, 0x36,
    0x6b, 0x8c, 0x7e, 0x8b, 0x88, 0x00, 0x5c, 0x32, 0xf1, 0xff, 0xf1, 0xff, 0x20, 0x30, 0xc8, 0x37,
    0x58, 0x37, 0x0c, 0x45, 0x10, 0x45, 0x84, 0x37, 0xf8, 0x37, 0x01, 0x07, 0x01, 0x09, 0x01, 0x0c,
    0x03, 0x01, 0x04, 0x02, 0x04, 0x00, 0x0b, 0x10, 0x06, 0x02, 0x01, 0x00, 0x9a, 0x00, 0x00, 0x01,
    0x35, 0x2d, 0x1e, 0x0f, 0x2d, 0x05, 0x1e, 0x28, 0x0a, 0x00, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x03, 0x00, 0x04, 0x21, 0x90, 0x90,
    0x80, 0x60, 0x26, 0x00, 0x00, 0x30, 0xcc, 0x30, 0x48, 0x32, 0xf1, 0xff, 0xc4, 0x37, 0x08, 0x30,
    0xa8, 0x37, 0xa8, 0x37, 0x38, 0x36, 0x38, 0x36, 0x01, 0x09, 0x02, 0x02, 0x01, 0x05, 0x03, 0x00,
    0x04, 0x09, 0x04, 0x04, 0x02, 0x01, 0x31, 0x07, 0x02, 0x00, 0x1f, 0x00, 0x00, 0x1b, 0x2b, 0x1f,
    0x23, 0x19, 0x00, 0x14, 0x1e, 0x2d, 0x0a, 0x28, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08,
    0x66, 0x06, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x01, 0x00, 0x07, 0x0e, 0xb6, 0xa7, 0x63, 0x40,
    0x27, 0x00, 0x1c, 0x33, 0x2c, 0x33, 0x68, 0x32, 0x24, 0x30, 0xf1, 0xff, 0xe8, 0x33, 0x0c, 0x34,
    0x0c, 0x34, 0x4c, 0x37, 0xb8, 0x47, 0x01, 0x01, 0x00, 0x02, 0x01, 0x06, 0x03, 0x00, 0x04, 0x02,
    0x04, 0x06, 0x01, 0x03, 0x52, 0x04, 0x00, 0x00, 0x20, 0x00, 0x03, 0x25, 0x39, 0x03, 0x14, 0x00,
    0x0a, 0x1e, 0x23, 0x28, 0x14, 0x1e, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x11,
    0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x00, 0x00, 0x07, 0x2c, 0x98, 0x84, 0x64, 0x80, 0x28, 0x00,
    0x50, 0x30, 0x88, 0x30, 0x68, 0x30, 0x54, 0x30, 0xf1, 0xff, 0x74, 0x30, 0x2c, 0x37, 0xb0, 0x47,
    0x74, 0x35, 0xb4, 0x47, 0x01, 0x05, 0x00, 0x01, 0x01, 0x01, 0x03, 0x01, 0x04, 0x00, 0x04, 0x03,
    0x02, 0x17, 0x73, 0x00, 0x06, 0x00, 0x69, 0x00, 0x07, 0x1a, 0x23, 0x27, 0x1e, 0x28, 0x00, 0x14,
    0x0f, 0x14, 0x32, 0x0a, 0x00, 0x08, 0x33, 0x03, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06,
    0x9a, 0x05, 0xcd, 0x08, 0x04, 0x00, 0x07, 0x2e, 0x71, 0x76, 0x86, 0x93, 0x29, 0x00, 0x90, 0x31,
    0xf1, 0xff, 0xb0, 0x31, 0x6c, 0x30, 0xc8, 0x37, 0x3c, 0x37, 0xa8, 0x37, 0x2c, 0x3e, 0x00, 0x3b,
    0x64, 0x36, 0x02, 0x01, 0x01, 0x0a, 0x01, 0x01, 0x03, 0x03, 0x04, 0x01, 0x04, 0x07, 0x04, 0x08,
    0x00, 0x08, 0x06, 0x00, 0x1a, 0x00, 0x08, 0x00, 0x17, 0x18, 0x14, 0x00, 0x0f, 0x23, 0x1e, 0x28,
    0x0a, 0x19, 0x33, 0x07, 0x33, 0x07, 0x00, 0x04, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08,
    0x66, 0x0a, 0x05, 0x01, 0x07, 0x31, 0x6b, 0x92, 0x81, 0x82, 0x2a, 0x00, 0x94, 0x35, 0x8c, 0x35,
    0xe0, 0x32, 0xdc, 0x32, 0xf1, 0xff, 0xbc, 0x33, 0x20, 0x37, 0xf4, 0x33, 0xf4, 0x33, 0xf4, 0x33,
    0x00, 0x02, 0x01, 0x09, 0x01, 0x0a, 0x03, 0x00, 0x04, 0x05, 0x04, 0x0a, 0x06, 0x1b, 0x21, 0x02,
    0x09, 0x00, 0x9a, 0x00, 0x09, 0x22, 0x24, 0x24, 0x28, 0x32, 0x14, 0x05, 0x2d, 0x1e, 0x0a, 0x00,
    0x66, 0x0a, 0x9a, 0x11, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x09,
    0x03, 0x00, 0x07, 0x30, 0x64, 0x61, 0xa8, 0x93, 0x2b, 0x00, 0x50, 0x30, 0xa0, 0x36, 0x2c, 0x33,
    0xc8, 0x37, 0x94, 0x31, 0x94, 0x36, 0x00, 0x35, 0x38, 0x33, 0x40, 0x33, 0x74, 0x36, 0x00, 0x02,
    0x01, 0x0a, 0x01, 0x03, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00, 0x02, 0x0b, 0x42, 0x08, 0x04, 0x00,
    0x21, 0x00, 0x0a, 0x02, 0x17, 0x1f, 0x1e, 0x14, 0x05, 0x28, 0x2d, 0x23, 0x19, 0x32, 0x66, 0x06,
    0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c, 0x04, 0x00,
    0x07, 0x04, 0x6f, 0x6c, 0xb7, 0x6e, 0x2c, 0x00, 0xc8, 0x30, 0xcc, 0x30, 0xf1, 0xff, 0xd4, 0x37,
    0x0c, 0x30, 0x34, 0x34, 0x4c, 0x36, 0x2c, 0x37, 0xe0, 0x30, 0x34, 0x36, 0x00, 0x01, 0x01, 0x05,
    0x01, 0x07, 0x02, 0x01, 0x04, 0x07, 0x04, 0x04, 0x0b, 0x11, 0x63, 0x08, 0x09, 0x00, 0x40, 0x00,
    0x16, 0x19, 0x05, 0x1b, 0x00, 0x14, 0x1e, 0x32, 0x19, 0x2d, 0x28, 0x0a, 0x00, 0x08, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x05, 0x00, 0x07, 0x0a,
    0x81, 0x9e, 0x6f, 0x72, 0x27, 0x00, 0xb4, 0x37, 0xd8, 0x32, 0xd8, 0x32, 0x30, 0x37, 0x6c, 0x31,
    0x28, 0x46, 0xf0, 0x34, 0x14, 0x38, 0x24, 0x46, 0x00, 0x35, 0x02, 0x02, 0x01, 0x04, 0x03, 0x03,
    0x03, 0x00, 0x04, 0x08, 0x04, 0x05, 0x02, 0x13, 0x23, 0x06, 0x09, 0x00, 0x1c, 0x00, 0x17, 0x05,
    0x08, 0x33, 0x14, 0x32, 0x23, 0x19, 0x2d, 0x1e, 0x28, 0x0a, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x04, 0x00, 0x07, 0x34, 0x74, 0x7d,
    0x71, 0x9e, 0x26, 0x00, 0xf1, 0xff, 0xa0, 0x36, 0x90, 0x38, 0xe0, 0x33, 0xec, 0x43, 0x94, 0x36,
    0x14, 0x37, 0x0c, 0x34, 0x98, 0x47, 0xe4, 0x33, 0x00, 0x02, 0x02, 0x01, 0x04, 0x05, 0x03, 0x00,
    0x04, 0x0b, 0x04, 0x02, 0x05, 0x19, 0x51, 0x01, 0x08, 0x00, 0x3c, 0x00, 0x08, 0x03, 0x21, 0x26,
    0x32, 0x28, 0x00, 0x14, 0x23, 0x19, 0x1e, 0x0f, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09,
    0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x00, 0x07, 0x1e, 0x80, 0x80, 0x80, 0x80,
    0x32, 0x00, 0xb4, 0x37, 0x00, 0x36, 0x18, 0x37, 0xb0, 0x37, 0x44, 0x37, 0x64, 0x44, 0x98, 0x36,
    0x6c, 0x44, 0x64, 0x37, 0x68, 0x44, 0x02, 0x01, 0x01, 0x03, 0x01, 0x02, 0x03, 0x03, 0x03, 0x00,
    0x04, 0x00, 0x06, 0x19, 0x4e, 0x02, 0x03, 0x00, 0x6a, 0x00, 0x08, 0x1b, 0x09, 0x35, 0x28, 0x2d,
    0x00, 0x1e, 0x19, 0x23, 0x14, 0x32, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04,
    0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x00, 0x07, 0x1f, 0xd4, 0x8a, 0x3d, 0x65, 0x2d, 0x00,
    0x00, 0x30, 0xf1, 0xff, 0x20, 0x30, 0x60, 0x30, 0xf1, 0xff, 0x3c, 0x36, 0x60, 0x37, 0x08, 0x30,
    0x1c, 0x30, 0x3c, 0x37, 0x01, 0x05, 0x01, 0x03, 0x00, 0x01, 0x03, 0x00, 0x04, 0x02, 0x04, 0x09,
    0x01, 0x14, 0x04, 0x03, 0x01, 0x00, 0x65, 0x00, 0x0c, 0x10, 0x1a, 0x1c, 0x1e, 0x14, 0x14, 0x32,
    0x23, 0x0a, 0x05, 0x28, 0x33, 0x07, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x09, 0x9a, 0x11,
    0x66, 0x06, 0xcd, 0x0c, 0x05, 0x00, 0x01, 0x38, 0xfa, 0x9e, 0x2d, 0x3b, 0x2e, 0x00, 0x48, 0x33,
    0xf1, 0xff, 0xf1, 0xff, 0x2c, 0x33, 0x18, 0x31, 0xf8, 0x45, 0x88, 0x47, 0xac, 0x30, 0xac, 0x46,
    0x6c, 0x37, 0x00, 0x02, 0x02, 0x01, 0x01, 0x0c, 0x03, 0x00, 0x04, 0x03, 0x04, 0x09, 0x07, 0x0e,
    0x25, 0x03, 0x06, 0x00, 0x22, 0x00, 0x00, 0x09, 0x26, 0x12, 0x2d, 0x0a, 0x32, 0x14, 0x05, 0x19,
    0x1e, 0x28, 0x66, 0x0a, 0x00, 0x08, 0x9a, 0x11, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x11,
    0xcd, 0x08, 0x00, 0x00, 0x01, 0x1d, 0xff, 0x8a, 0x37, 0x40, 0x2f, 0x00, 0xcc, 0x32, 0xd8, 0x32,
    0xdc, 0x32, 0xe0, 0x32, 0xd8, 0x32, 0xe4, 0x32, 0xc4, 0x32, 0x4c, 0x37, 0xd8, 0x33, 0xd4, 0x32,
    0x01, 0x04, 0x00, 0x02, 0x01, 0x0c, 0x01, 0x0a, 0x04, 0x00, 0x04, 0x03, 0x0a, 0x03, 0x46, 0x01,
    0x07, 0x00, 0x20, 0x00, 0x09, 0x06, 0x11, 0x11, 0x32, 0x2d, 0x00, 0x19, 0x1e, 0x23, 0x28, 0x05,
    0x66, 0x06, 0x9a, 0x11, 0x00, 0x04, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a,
    0x00, 0x01, 0x01, 0x45, 0xc9, 0x87, 0x4d, 0x63, 0x30, 0x00, 0x90, 0x31, 0xb0, 0x30, 0x10, 0x31,
    0x44, 0x37, 0xf1, 0xff, 0x08, 0x31, 0xc0, 0x30, 0xfc, 0x30, 0x60, 0x36, 0x2c, 0x35, 0x01, 0x01,
    0x01, 0x03, 0x01, 0x0a, 0x03, 0x00, 0x03, 0x03, 0x04, 0x01, 0x0c, 0x08, 0x67, 0x03, 0x06, 0x00,
    0x3c, 0x00, 0x0f, 0x06, 0x1f, 0x18, 0x14, 0x1e, 0x00, 0x0a, 0x2d, 0x23, 0x32, 0x1e, 0x9a, 0x11,
    0x33, 0x03, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09, 0x05, 0x00,
    0x01, 0x04, 0xce, 0x7d, 0x26, 0x8f, 0x8b, 0x00, 0x50, 0x30, 0xec, 0x30, 0xe4, 0x30, 0x0c, 0x30,
    0xcc, 0x30, 0x18, 0x35, 0x4c, 0x36, 0xa4, 0x34, 0x2c, 0x37, 0x18, 0x30, 0x01, 0x06, 0x01, 0x02,
    0x01, 0x09, 0x03, 0x00, 0x04, 0x04, 0x04, 0x00, 0x01, 0x1c, 0x4c, 0x03, 0x04, 0x00, 0xbb, 0x00,
    0x14, 0x01, 0x33, 0x2b, 0x14, 0x05, 0x1e, 0x32, 0x19, 0x14, 0x28, 0x0a, 0x66, 0x06, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x03, 0x00, 0x01, 0x0a,
    0x65, 0x8c, 0x9b, 0x74, 0x31, 0x00, 0x30, 0x31, 0x34, 0x31, 0xf4, 0x30, 0x10, 0x31, 0xc8, 0x37,
    0x88, 0x36, 0x38, 0x37, 0xf0, 0x34, 0x94, 0x36, 0x14, 0x38, 0x02, 0x02, 0x01, 0x04, 0x01, 0x0a,
    0x03, 0x03, 0x04, 0x00, 0x04, 0x04, 0x02, 0x04, 0x29, 0x07, 0x01, 0x00, 0x67, 0x00, 0x11, 0x09,
    0x19, 0x18, 0x14, 0x19, 0x0f, 0x1e, 0x23, 0x32, 0x28, 0x14, 0x66, 0x0a, 0x9a, 0x11, 0x00, 0x04,
    0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0x9a, 0x11, 0x66, 0x0a, 0x03, 0x00, 0x10, 0x0c, 0x80, 0x80,
    0x80, 0x80, 0x32, 0x00, 0x60, 0x32, 0x70, 0x32, 0xf1, 0xff, 0x68, 0x32, 0x6c, 0x32, 0x58, 0x32,
    0x58, 0x32, 0x74, 0x32, 0x74, 0x32, 0xc4, 0x47, 0x02, 0x01, 0x01, 0x0b, 0x03, 0x01, 0x04, 0x06,
    0x04, 0x01, 0x04, 0x09, 0x02, 0x0d, 0x08, 0x09, 0x06, 0x00, 0x10, 0x00, 0x07, 0x21, 0x0f, 0x0f,
    0x14, 0x19, 0x05, 0x19, 0x0a, 0x1e, 0x28, 0x32, 0x9a, 0x11, 0x33, 0x07, 0x9a, 0x11, 0xcd, 0x08,
    0x66, 0x0a, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c, 0x01, 0x01, 0x10, 0x2d, 0x73, 0x79, 0x92, 0x82,
    0x33, 0x00, 0xe0, 0x34, 0x74, 0x31, 0x30, 0x44, 0x8c, 0x31, 0xa8, 0x36, 0xc8, 0x47, 0xd0, 0x34,
    0xdc, 0x34, 0xd8, 0x34, 0xd4, 0x34, 0x00, 0x02, 0x01, 0x0c, 0x03, 0x00, 0x04, 0x05, 0x04, 0x04,
    0x04, 0x07, 0x02, 0x08, 0x4a, 0x09, 0x02, 0x00, 0x91, 0x00, 0x12, 0x23, 0x16, 0x2f, 0x0f, 0x19,
    0x0a, 0x32, 0x2d, 0x23, 0x28, 0x14, 0x66, 0x06, 0x9a, 0x09, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09,
    0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x01, 0x00, 0x10, 0x37, 0x96, 0xa1, 0x7e, 0x4b, 0x34, 0x00,
    0x1c, 0x33, 0xdc, 0x32, 0xb0, 0x37, 0xd8, 0x32, 0xf1, 0xff, 0x4c, 0x37, 0xe8, 0x46, 0xc4, 0x32,
    0xf4, 0x33, 0xc4, 0x32, 0x00, 0x01, 0x01, 0x09, 0x01, 0x07, 0x03, 0x01, 0x04, 0x09, 0x04, 0x05,
    0x06, 0x05, 0x6b, 0x03, 0x07, 0x00, 0x11, 0x00, 0x01, 0x09, 0x11, 0x11, 0x2d, 0x23, 0x19, 0x14,
    0x1e, 0x0a, 0x1e, 0x0f, 0x9a, 0x11, 0x33, 0x03, 0x9a, 0x11, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06,
    0x9a, 0x05, 0xcd, 0x08, 0x02, 0x00, 0x10, 0x1a, 0x75, 0x85, 0xaa, 0x5c, 0x35, 0x00, 0xf1, 0xff,
    0xa8, 0x36, 0x44, 0x32, 0xf1, 0xff, 0x48, 0x32, 0x9c, 0x46, 0x78, 0x35, 0x30, 0x32, 0x78, 0x35,
    0x4c, 0x32, 0x01, 0x0c, 0x02, 0x01, 0x03, 0x03, 0x04, 0x00, 0x04, 0x03, 0x04, 0x02, 0x0a, 0x09,
    0x0c, 0x04, 0x09, 0x00, 0x24, 0x00, 0x14, 0x02, 0x0e, 0x0e, 0x0a, 0x28, 0x14, 0x00, 0x0f, 0x23,
    0x14, 0x1e, 0x9a, 0x11, 0x33, 0x07, 0x00, 0x04, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x9a, 0x11,
    0x66, 0x0a, 0x01, 0x01, 0x10, 0x28, 0x80, 0xa3, 0x82, 0x5b, 0x36, 0x00, 0xb4, 0x37, 0xf1, 0xff,
    0xf1, 0xff, 0x48, 0x32, 0x0c, 0x30, 0x10, 0x36, 0xb0, 0x43, 0x20, 0x36, 0x64, 0x46, 0x90, 0x34,
    0x01, 0x09, 0x02, 0x02, 0x01, 0x0b, 0x03, 0x00, 0x04, 0x03, 0x04, 0x00, 0x08, 0x15, 0x2d, 0x06,
    0x00, 0x00, 0xa1, 0x00, 0x15, 0x06, 0x21, 0x3c, 0x05, 0x19, 0x32, 0x0a, 0x23, 0x14, 0x28, 0x1e,
    0x9a, 0x11, 0x9a, 0x11, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x09,
    0x02, 0x00, 0x10, 0x39, 0x86, 0x6b, 0x91, 0x7e, 0x37, 0x00, 0x08, 0x33, 0xf1, 0xff, 0xf1, 0xff,
    0xb0, 0x36, 0xf1, 0xff, 0x90, 0x36, 0x4c, 0x37, 0x10, 0x33, 0xe0, 0x36, 0x88, 0x36, 0x01, 0x02,
    0x00, 0x02, 0x01, 0x0a, 0x03, 0x01, 0x04, 0x07, 0x04, 0x0b, 0x01, 0x0d, 0x4e, 0x00, 0x06, 0x00,
    0x85, 0x00, 0x16, 0x1c, 0x0f, 0x39, 0x0a, 0x0f, 0x14, 0x23, 0x32, 0x1e, 0x2d, 0x19, 0x66, 0x06,
    0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x0c, 0x04, 0x00,
    0x10, 0x2a, 0x68, 0x9d, 0x97, 0x64, 0x3b, 0x00, 0xb4, 0x37, 0x8c, 0x35, 0xf1, 0xff, 0xf0, 0x30,
    0xf4, 0x30, 0x30, 0x3e, 0xf0, 0x34, 0x68, 0x47, 0x88, 0x3b, 0x34, 0x37, 0x02, 0x02, 0x01, 0x05,
    0x01, 0x06, 0x03, 0x01, 0x04, 0x00, 0x04, 0x09, 0x07, 0x08, 0x08, 0x02, 0x03, 0x00, 0x2b, 0x00,
    0x07, 0x05, 0x2f, 0x1a, 0x2d, 0x1e, 0x1e, 0x19, 0x23, 0x0f, 0x32, 0x28, 0x66, 0x06, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x00, 0x10, 0x0d,
    0x58, 0x6d, 0xb7, 0x84, 0x38, 0x00, 0x50, 0x30, 0x60, 0x30, 0x98, 0x30, 0x6c, 0x30, 0x7c, 0x30,
    0x34, 0x37, 0x70, 0x30, 0x70, 0x37, 0x1c, 0x34, 0x74, 0x3e, 0x01, 0x06, 0x00, 0x01, 0x01, 0x02,
    0x03, 0x03, 0x04, 0x02, 0x04, 0x01, 0x03, 0x06, 0x6f, 0x00, 0x01, 0x00, 0x47, 0x00, 0x0a, 0x0f,
    0x04, 0x07, 0x14, 0x0a, 0x05, 0x28, 0x19, 0x32, 0x2d, 0x1e, 0x00, 0x08, 0x33, 0x03, 0x00, 0x04,
    0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a, 0x03, 0x00, 0x12, 0x00, 0x68, 0x5c,
    0xac, 0x90, 0x39, 0x00, 0x50, 0x30, 0xa4, 0x30, 0xb8, 0x30, 0xb0, 0x30, 0xf1, 0xff, 0x0c, 0x38,
    0xf8, 0x37, 0xbc, 0x33, 0x74, 0x36, 0x90, 0x30, 0x02, 0x02, 0x01, 0x0b, 0x03, 0x00, 0x04, 0x06,
    0x04, 0x00, 0x04, 0x08, 0x08, 0x18, 0x10, 0x07, 0x03, 0x00, 0x72, 0x00, 0x0e, 0x10, 0x35, 0x06,
    0x2d, 0x1e, 0x0a, 0x14, 0x23, 0x28, 0x19, 0x0f, 0x33, 0x07, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11,
    0x9a, 0x09, 0x9a, 0x11, 0x66, 0x06, 0xcd, 0x0c, 0x03, 0x00, 0x12, 0x41, 0xbc, 0x69, 0x3e, 0x9d,
    0x3a, 0x00, 0xf1, 0xff, 0x44, 0x37, 0x8c, 0x30, 0x88, 0x30, 0xf1, 0xff, 0xc8, 0x46, 0xa0, 0x33,
    0xa0, 0x33, 0x64, 0x36, 0x64, 0x36, 0x01, 0x06, 0x01, 0x07, 0x00, 0x01, 0x03, 0x01, 0x03, 0x03,
    0x04, 0x02, 0x09, 0x06, 0x31, 0x02, 0x03, 0x00, 0x1d, 0x00, 0x07, 0x25, 0x33, 0x2c, 0x19, 0x1e,
    0x0f, 0x1e, 0x2d, 0x00, 0x14, 0x28, 0x66, 0x0a, 0x00, 0x08, 0x9a, 0x11, 0xcd, 0x08, 0x9a, 0x11,
    0x66, 0x06, 0x9a, 0x05, 0xcd, 0x08, 0x02, 0x00, 0x1b, 0x2c, 0xc3, 0x7c, 0x39, 0x88, 0x0b, 0x00,
    0x00, 0x30, 0x6c, 0x34, 0xf1, 0xff, 0x48, 0x37, 0x6c, 0x34, 0x88, 0x47, 0x48, 0x35, 0xf1, 0xff,
    0x48, 0x35, 0xd0, 0x47, 0x00, 0x01, 0x01, 0x07, 0x03, 0x00, 0x03, 0x03, 0x04, 0x00, 0x04, 0x07,
    0x09, 0x0b, 0x0a, 0x01, 0x07, 0x00, 0x05, 0x00, 0x03, 0x26, 0x24, 0x24, 0x19, 0x32, 0x1e, 0x23,
    0x1e, 0x2d, 0x14, 0x0a, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06,
    0xcd, 0x04, 0x66, 0x06, 0x02, 0x00, 0x1b, 0x17, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0x08, 0x36,
    0xf1, 0xff, 0xf1, 0xff, 0xe0, 0x32, 0x48, 0x32, 0x5c, 0x35, 0x34, 0x37, 0xf1, 0xff, 0xac, 0x36,
    0xf1, 0xff, 0x02, 0x02, 0x01, 0x09, 0x01, 0x02, 0x03, 0x03, 0x04, 0x09, 0x04, 0x00, 0x09, 0x0c,
    0x6d, 0x01, 0x05, 0x00, 0x6d, 0x00, 0x04, 0x22, 0x0e, 0x0e, 0x19, 0x14, 0x1e, 0x1e, 0x28, 0x05,
    0x0a, 0x32, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04,
    0x66, 0x06, 0x01, 0x01, 0x1b, 0x2f, 0xae, 0xed, 0x28, 0x3d, 0x3b, 0x00, 0xf1, 0xff, 0x9c, 0x35,
    0x24, 0x30, 0x34, 0x30, 0x68, 0x30, 0x38, 0x30, 0x3c, 0x31, 0x0c, 0x38, 0x2c, 0x37, 0xa8, 0x35,
    0x00, 0x01, 0x01, 0x02, 0x01, 0x0c, 0x03, 0x00, 0x04, 0x03, 0x04, 0x09, 0x08, 0x12, 0x52, 0x04,
    0x08, 0x00, 0x90, 0x00, 0x1a, 0x0e, 0x23, 0x32, 0x28, 0x32, 0x23, 0x14, 0x1e, 0x0a, 0x00, 0x23,
    0x9a, 0x11, 0x9a, 0x09, 0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a,
    0x02, 0x00, 0x08, 0x13, 0x6d, 0xa1, 0xa6, 0x4c, 0x3c, 0x00, 0xf1, 0xff, 0x20, 0x30, 0x18, 0x37,
    0x24, 0x30, 0x34, 0x30, 0x74, 0x30, 0x70, 0x3d, 0x38, 0x30, 0x3c, 0x37, 0x64, 0x30, 0x00, 0x01,
    0x01, 0x04, 0x01, 0x09, 0x03, 0x00, 0x04, 0x02, 0x04, 0x03, 0x04, 0x04, 0x73, 0x01, 0x02, 0x00,
    0x08, 0x00, 0x01, 0x12, 0x21, 0x27, 0x19, 0x23, 0x0a, 0x2d, 0x32, 0x14, 0x1e, 0x28, 0x9a, 0x11,
    0x9a, 0x11, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x09, 0x01, 0x00,
    0x16, 0x37, 0x66, 0x7d, 0xde, 0x3f, 0x3d, 0x00, 0xe0, 0x34, 0xa0, 0x31, 0x40, 0x32, 0x40, 0x32,
    0x48, 0x32, 0x38, 0x37, 0xfc, 0x34, 0x54, 0x37, 0xfc, 0x34, 0x00, 0x35, 0x01, 0x04, 0x02, 0x01,
    0x01, 0x0c, 0x03, 0x01, 0x04, 0x03, 0x04, 0x00, 0x07, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00,
    0x02, 0x21, 0x0f, 0x12, 0x0a, 0x1e, 0x0f, 0x28, 0x14, 0x19, 0x23, 0x2d, 0x33, 0x07, 0x33, 0x07,
    0x00, 0x08, 0x9a, 0x11, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x0c, 0x04, 0x00, 0x16, 0x28,
    0x55, 0xa2, 0xcd, 0x3c, 0x3e, 0x00, 0xf1, 0xff, 0xec, 0x30, 0x0c, 0x30, 0x44, 0x37, 0x4c, 0x35,
    0xa8, 0x37, 0xd8, 0x30, 0xd8, 0x30, 0x3c, 0x36, 0x60, 0x36, 0x01, 0x06, 0x02, 0x02, 0x01, 0x07,
    0x03, 0x01, 0x04, 0x07, 0x04, 0x04, 0x01, 0x19, 0x21, 0x08, 0x00, 0x00, 0x2c, 0x00, 0x11, 0x25,
    0x2a, 0x1a, 0x05, 0x28, 0x23, 0x00, 0x0a, 0x32, 0x14, 0x1e, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x04,
    0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a, 0x03, 0x00, 0x16, 0x38, 0x5d, 0xae,
    0xc1, 0x34, 0x3f, 0x00, 0xf1, 0xff, 0x34, 0x30, 0x7c, 0x30, 0x44, 0x30, 0x34, 0x30, 0x3c, 0x37,
    0x74, 0x30, 0x2c, 0x35, 0x80, 0x30, 0x90, 0x30, 0x01, 0x09, 0x00, 0x02, 0x01, 0x04, 0x03, 0x00,
    0x04, 0x07, 0x04, 0x01, 0x0a, 0x05, 0x42, 0x04, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x0f, 0x2e, 0x27,
    0x19, 0x1e, 0x28, 0x0f, 0x0a, 0x14, 0x23, 0x32, 0x9a, 0x11, 0x9a, 0x09, 0x33, 0x07, 0x66, 0x06,
    0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x00, 0x00, 0x16, 0x02, 0x6d, 0x9b, 0x90, 0x68,
    0x65, 0x00, 0x40, 0x31, 0xf1, 0xff, 0xf1, 0xff, 0x24, 0x37, 0x50, 0x31, 0x3c, 0x36, 0xac, 0x33,
    0xf1, 0xff, 0x64, 0x31, 0x94, 0x33, 0x01, 0x05, 0x01, 0x09, 0x03, 0x00, 0x04, 0x06, 0x04, 0x00,
    0x04, 0x09, 0x06, 0x10, 0x25, 0x04, 0x07, 0x00, 0x37, 0x00, 0x01, 0x00, 0x2a, 0x06, 0x19, 0x0f,
    0x32, 0x0a, 0x28, 0x14, 0x1e, 0x23, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04,
    0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x02, 0x01, 0x16, 0x2e, 0x71, 0xc6, 0x56, 0x73, 0x42, 0x00,
    0x78, 0x30, 0x8c, 0x30, 0xb0, 0x30, 0xf1, 0xff, 0x98, 0x30, 0x9c, 0x30, 0x2c, 0x37, 0x8c, 0x36,
    0x40, 0x36, 0x90, 0x30, 0x00, 0x01, 0x01, 0x06, 0x01, 0x05, 0x03, 0x00, 0x03, 0x01, 0x04, 0x05,
    0x07, 0x14, 0x25, 0x08, 0x01, 0x00, 0x72, 0x00, 0x02, 0x19, 0x2c, 0x25, 0x1e, 0x23, 0x0f, 0x0a,
    0x32, 0x19, 0x28, 0x14, 0x9a, 0x11, 0x00, 0x08, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x08,
    0x66, 0x06, 0x9a, 0x09, 0x05, 0x00, 0x15, 0x20, 0x86, 0xb6, 0x71, 0x53, 0x43, 0x00, 0xf8, 0x34,
    0xec, 0x30, 0xe4, 0x30, 0x44, 0x37, 0x4c, 0x35, 0xf4, 0x34, 0x40, 0x36, 0x34, 0x34, 0x3c, 0x36,
    0x5c, 0x36, 0x00, 0x02, 0x01, 0x0c, 0x01, 0x0a, 0x03, 0x03, 0x04, 0x04, 0x04, 0x01, 0x08, 0x13,
    0x46, 0x05, 0x06, 0x00, 0x5a, 0x00, 0x02, 0x25, 0x08, 0x19, 0x28, 0x0a, 0x0f, 0x05, 0x1e, 0x00,
    0x2d, 0x14, 0x9a, 0x11, 0x9a, 0x09, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05,
    0x00, 0x0c, 0x03, 0x00, 0x15, 0x29, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0x30, 0x31, 0x18, 0x31,
    0xd4, 0x37, 0x2c, 0x31, 0x10, 0x31, 0xd8, 0x37, 0x5c, 0x36, 0x0c, 0x31, 0x04, 0x34, 0x1c, 0x31,
    0x01, 0x0b, 0x01, 0x0c, 0x04, 0x06, 0x03, 0x01, 0x04, 0x04, 0x04, 0x07, 0x04, 0x0c, 0x28, 0x00,
    0x04, 0x00, 0xc3, 0x00, 0x02, 0x25, 0x36, 0x37, 0x19, 0x0a, 0x23, 0x2d, 0x1e, 0x32, 0x28, 0x1e,
    0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06,
    0x03, 0x00, 0x15, 0x1c, 0xaa, 0x66, 0xa9, 0x47, 0x40, 0x00, 0x40, 0x35, 0x60, 0x30, 0xf1, 0xff,
    0x60, 0x30, 0x20, 0x30, 0x4c, 0x36, 0xd0, 0x40, 0x3c, 0x46, 0x64, 0x30, 0x2c, 0x37, 0x01, 0x02,
    0x00, 0x01, 0x01, 0x09, 0x03, 0x01, 0x04, 0x04, 0x04, 0x00, 0x0a, 0x0b, 0x63, 0x07, 0x05, 0x00,
    0x8c, 0x00, 0x1f, 0x00, 0x2e, 0x31, 0x19, 0x1e, 0x14, 0x28, 0x32, 0x2d, 0x23, 0x00, 0x00, 0x08,
    0x33, 0x03, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0xcd, 0x08, 0x03, 0x01,
    0x1d, 0x00, 0xa6, 0x79, 0x99, 0x48, 0x41, 0x00, 0x40, 0x30, 0xf1, 0xff, 0xf1, 0xff, 0x60, 0x30,
    0x9c, 0x35, 0x60, 0x3a, 0x7c, 0x37, 0x60, 0x36, 0xb0, 0x3a, 0xa4, 0x35, 0x02, 0x01, 0x01, 0x07,
    0x03, 0x03, 0x04, 0x06, 0x04, 0x07, 0x04, 0x04, 0x0b, 0x0c, 0x04, 0x02, 0x00, 0x00, 0x0f, 0x00,
    0x18, 0x04, 0x08, 0x17, 0x0a, 0x1e, 0x32, 0x1e, 0x00, 0x19, 0x14, 0x28, 0x33, 0x07, 0x33, 0x07,
    0x00, 0x04, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a, 0x05, 0x01, 0x1d, 0x1c,
    0xc1, 0x8d, 0x58, 0x5a, 0x44, 0x00, 0x08, 0x33, 0xb0, 0x36, 0xb0, 0x36, 0xb0, 0x36, 0xb0, 0x36,
    0x38, 0x37, 0x3c, 0x35, 0xb8, 0x36, 0xc0, 0x36, 0x6c, 0x44, 0x01, 0x01, 0x01, 0x0a, 0x01, 0x02,
    0x03, 0x03, 0x04, 0x00, 0x04, 0x04, 0x08, 0x08, 0x67, 0x01, 0x07, 0x00, 0x75, 0x00, 0x17, 0x16,
    0x39, 0x3a, 0x14, 0x32, 0x28, 0x23, 0x1e, 0x00, 0x05, 0x19, 0x00, 0x08, 0x9a, 0x11, 0x00, 0x04,
    0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x01, 0x01, 0x18, 0x0f, 0x80, 0x80,
    0x80, 0x80, 0x32, 0x00, 0xf1, 0xff, 0x88, 0x30, 0x20, 0x30, 0x88, 0x30, 0x20, 0x30, 0x20, 0x38,
    0x20, 0x38, 0x6c, 0x35, 0xc4, 0x36, 0x6c, 0x35, 0x01, 0x06, 0x01, 0x07, 0x01, 0x09, 0x03, 0x01,
    0x04, 0x02, 0x04, 0x07, 0x07, 0x17, 0x23, 0x02, 0x00, 0x00, 0xcb, 0x00, 0x06, 0x1f, 0x2e, 0x20,
    0x0a, 0x05, 0x23, 0x14, 0x1e, 0x0f, 0x19, 0x2d, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09,
    0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x02, 0x00, 0x18, 0x17, 0x27, 0x31, 0xfc, 0xac,
    0x45, 0x00, 0x88, 0x34, 0x04, 0x38, 0x44, 0x37, 0x14, 0x30, 0x0c, 0x30, 0x24, 0x36, 0x2c, 0x36,
    0xac, 0x34, 0x90, 0x34, 0x90, 0x34, 0x01, 0x06, 0x02, 0x01, 0x01, 0x05, 0x03, 0x00, 0x04, 0x0b,
    0x04, 0x07, 0x02, 0x12, 0x08, 0x07, 0x09, 0x00, 0xa1, 0x00, 0x04, 0x25, 0x09, 0x22, 0x14, 0x23,
    0x00, 0x1e, 0x0a, 0x32, 0x28, 0x0a, 0x33, 0x07, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x09,
    0x9a, 0x11, 0x66, 0x06, 0xcd, 0x0c, 0x03, 0x00, 0x0a, 0x20, 0x3d, 0x64, 0xe8, 0x77, 0x46, 0x00,
    0xb4, 0x37, 0xb8, 0x37, 0x20, 0x30, 0xf1, 0xff, 0x6c, 0x34, 0xfc, 0x45, 0x40, 0x37, 0x08, 0x46,
    0x48, 0x35, 0x18, 0x46, 0x01, 0x0b, 0x02, 0x02, 0x01, 0x01, 0x03, 0x03, 0x04, 0x00, 0x04, 0x0b,
    0x0a, 0x11, 0x29, 0x05, 0x00, 0x00, 0xa0, 0x00, 0x15, 0x16, 0x23, 0x22, 0x05, 0x28, 0x1e, 0x19,
    0x2d, 0x28, 0x0a, 0x32, 0x66, 0x0a, 0x00, 0x08, 0x9a, 0x11, 0xcd, 0x08, 0x9a, 0x11, 0x66, 0x06,
    0x9a, 0x05, 0xcd, 0x08, 0x02, 0x00, 0x0a, 0x19, 0x26, 0x3f, 0xf3, 0xa8, 0x47, 0x00, 0x90, 0x31,
    0xf4, 0x30, 0x44, 0x37, 0xa0, 0x31, 0x10, 0x31, 0x90, 0x36, 0x54, 0x37, 0x04, 0x35, 0x88, 0x36,
    0x00, 0x35, 0x01, 0x0c, 0x01, 0x02, 0x01, 0x0a, 0x03, 0x03, 0x04, 0x0b, 0x03, 0x00, 0x0c, 0x1c,
    0x4a, 0x09, 0x07, 0x00, 0x0e, 0x00, 0x1d, 0x05, 0x24, 0x34, 0x0a, 0x14, 0x19, 0x28, 0x05, 0x32,
    0x1e, 0x1e, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08,
    0x66, 0x0a, 0x04, 0x00, 0x0a, 0x45, 0x39, 0x76, 0xd6, 0x7b, 0x48, 0x00, 0x78, 0x30, 0x4c, 0x35,
    0x24, 0x37, 0x88, 0x30, 0x98, 0x30, 0x68, 0x36, 0x1c, 0x37, 0xac, 0x36, 0x90, 0x30, 0x9c, 0x30,
    0x01, 0x06, 0x00, 0x01, 0x01, 0x0a, 0x03, 0x00, 0x04, 0x07, 0x04, 0x04, 0x07, 0x07, 0x6b, 0x07,
    0x03, 0x00, 0x73, 0x00, 0x02, 0x23, 0x1b, 0x1f, 0x23, 0x05, 0x0f, 0x0a, 0x2d, 0x14, 0x1e, 0x28,
    0x00, 0x08, 0x33, 0x03, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x09,
    0x05, 0x00, 0x0a, 0x36, 0x38, 0x5d, 0xf1, 0x7a, 0x24, 0x00, 0xb4, 0x30, 0xf1, 0xff, 0xf1, 0xff,
    0x10, 0x31, 0x98, 0x35, 0x80, 0x37, 0xec, 0x37, 0xd8, 0x34, 0xdc, 0x34, 0x54, 0x37, 0x00, 0x02,
    0x01, 0x05, 0x03, 0x00, 0x03, 0x03, 0x04, 0x01, 0x04, 0x0b, 0x07, 0x05, 0x72, 0x05, 0x09, 0x00,
    0x9b, 0x00, 0x10, 0x07, 0x1f, 0x0a, 0x19, 0x1e, 0x32, 0x28, 0x14, 0x14, 0x19, 0x23, 0x66, 0x06,
    0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x01, 0x00,
    0x0a, 0x2d, 0x4b, 0x68, 0xfa, 0x53, 0x5f, 0x00, 0xf1, 0xff, 0x34, 0x30, 0x10, 0x31, 0xf1, 0xff,
    0x9c, 0x35, 0x2c, 0x37, 0x60, 0x37, 0x38, 0x34, 0x38, 0x30, 0x38, 0x30, 0x00, 0x01, 0x01, 0x02,
    0x01, 0x0c, 0x03, 0x00, 0x04, 0x04, 0x03, 0x00, 0x08, 0x0e, 0x13, 0x01, 0x02, 0x00, 0xd5, 0x00,
    0x00, 0x0e, 0x14, 0x32, 0x32, 0x28, 0x19, 0x23, 0x0a, 0x1e, 0x14, 0x0f, 0x66, 0x06, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x01, 0x00, 0x0a, 0x01,
    0x68, 0xff, 0x48, 0x51, 0x49, 0x00, 0x7c, 0x32, 0x68, 0x32, 0x64, 0x32, 0x6c, 0x32, 0x70, 0x32,
    0x58, 0x32, 0x58, 0x32, 0xd0, 0x31, 0xc8, 0x31, 0x74, 0x32, 0x02, 0x01, 0x01, 0x02, 0x01, 0x07,
    0x03, 0x03, 0x04, 0x06, 0x04, 0x0b, 0x09, 0x14, 0x0c, 0x05, 0x08, 0x00, 0x1b, 0x00, 0x17, 0x20,
    0x0f, 0x0f, 0x1e, 0x1e, 0x00, 0x14, 0x28, 0x2d, 0x32, 0x19, 0x33, 0x07, 0x9a, 0x11, 0x00, 0x08,
    0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x0c, 0x02, 0x01, 0x17, 0x24, 0x4e, 0xff,
    0x74, 0x3f, 0x4a, 0x00, 0x90, 0x31, 0xf1, 0xff, 0x94, 0x31, 0xa0, 0x31, 0xd4, 0x37, 0xac, 0x31,
    0xd8, 0x36, 0x2c, 0x37, 0xa4, 0x31, 0xb4, 0x31, 0x01, 0x0a, 0x03, 0x03, 0x01, 0x01, 0x03, 0x01,
    0x04, 0x04, 0x04, 0x02, 0x06, 0x1a, 0x2d, 0x00, 0x06, 0x00, 0x4f, 0x00, 0x05, 0x24, 0x01, 0x01,
    0x1e, 0x23, 0x14, 0x14, 0x28, 0x00, 0x2d, 0x23, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08,
    0x9a, 0x11, 0x9a, 0x05, 0x9a, 0x11, 0x66, 0x0a, 0x03, 0x01, 0x17, 0x20, 0x56, 0x8f, 0xdd, 0x3e,
    0x4b, 0x00, 0x40, 0x31, 0x8c, 0x30, 0x4c, 0x35, 0x60, 0x30, 0x44, 0x37, 0xa0, 0x33, 0x88, 0x33,
    0x80, 0x36, 0xa0, 0x33, 0x88, 0x33, 0x00, 0x01, 0x01, 0x05, 0x01, 0x0b, 0x03, 0x00, 0x04, 0x00,
    0x04, 0x04, 0x0b, 0x0d, 0x4e, 0x09, 0x03, 0x00, 0xc1, 0x00, 0x02, 0x27, 0x2a, 0x06, 0x1e, 0x19,
    0x19, 0x32, 0x1e, 0x28, 0x00, 0x0f, 0x66, 0x06, 0x9a, 0x09, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x09,
    0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x05, 0x01, 0x1c, 0x1d, 0x4d, 0x71, 0xc5, 0x7d, 0x4c, 0x00,
    0x00, 0x30, 0x0c, 0x30, 0x14, 0x30, 0x20, 0x30, 0x24, 0x30, 0x20, 0x36, 0x08, 0x30, 0x3c, 0x37,
    0x50, 0x35, 0x44, 0x47, 0x00, 0x01, 0x04, 0x00, 0x03, 0x03, 0x03, 0x01, 0x04, 0x02, 0x04, 0x07,
    0x01, 0x0f, 0x6f, 0x02, 0x03, 0x00, 0x2a, 0x00, 0x04, 0x23, 0x22, 0x22, 0x2d, 0x05, 0x1e, 0x14,
    0x28, 0x0f, 0x00, 0x19, 0x00, 0x08, 0x33, 0x03, 0x00, 0x08, 0x9a, 0x11, 0x66, 0x0a, 0x9a, 0x11,
    0x9a, 0x05, 0xcd, 0x08, 0x03, 0x01, 0x1c, 0x19, 0x76, 0x71, 0xb6, 0x63, 0x4d, 0x00, 0x40, 0x31,
    0x9c, 0x35, 0x50, 0x31, 0x70, 0x36, 0x58, 0x31, 0xa0, 0x35, 0x94, 0x33, 0xac, 0x33, 0x2c, 0x45,
    0x28, 0x45, 0x01, 0x06, 0x02, 0x01, 0x01, 0x07, 0x03, 0x03, 0x04, 0x0b, 0x04, 0x09, 0x07, 0x04,
    0x10, 0x04, 0x05, 0x00, 0xd5, 0x00, 0x04, 0x24, 0x1e, 0x2d, 0x0a, 0x23, 0x28, 0x14, 0x0f, 0x19,
    0x1e, 0x2d, 0x33, 0x07, 0x9a, 0x11, 0x00, 0x04, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x9a, 0x11,
    0x66, 0x0a, 0x02, 0x00, 0x1e, 0x20, 0x7a, 0x7c, 0x9e, 0x6c, 0x4e, 0x00, 0x30, 0x31, 0xf1, 0xff,
    0xf1, 0xff, 0x34, 0x30, 0x38, 0x31, 0x2c, 0x35, 0xa8, 0x37, 0x2c, 0x46, 0x34, 0x34, 0x4c, 0x37,
    0x01, 0x02, 0x02, 0x02, 0x01, 0x09, 0x03, 0x00, 0x04, 0x00, 0x04, 0x03, 0x0b, 0x13, 0x31, 0x03,
    0x02, 0x00, 0xac, 0x00, 0x1b, 0x01, 0x3a, 0x09, 0x00, 0x0a, 0x32, 0x1e, 0x14, 0x28, 0x19, 0x14,
    0x66, 0x0a, 0x9a, 0x11, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x09,
    0x05, 0x00, 0x1e, 0x14, 0xc7, 0x63, 0xd9, 0x4d, 0x6e, 0x00, 0x78, 0x30, 0x8c, 0x30, 0x28, 0x37,
    0xf1, 0xff, 0x88, 0x30, 0x1c, 0x37, 0x80, 0x30, 0x84, 0x30, 0x90, 0x30, 0x90, 0x36, 0x01, 0x06,
    0x01, 0x01, 0x01, 0x04, 0x03, 0x00, 0x04, 0x04, 0x04, 0x07, 0x01, 0x08, 0x25, 0x02, 0x08, 0x00,
    0xc2, 0x00, 0x19, 0x09, 0x07, 0x07, 0x23, 0x00, 0x14, 0x32, 0x0a, 0x28, 0x1e, 0x23, 0x66, 0x06,
    0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x01, 0x00,
    0x1e, 0x06, 0x54, 0x5a, 0x53, 0xff, 0x4f, 0x00, 0xf1, 0xff, 0x2c, 0x33, 0xcc, 0x30, 0x24, 0x37,
    0xc8, 0x37, 0x0c, 0x35, 0x54, 0x37, 0x04, 0x47, 0x08, 0x35, 0x5c, 0x47, 0x01, 0x06, 0x00, 0x02,
    0x01, 0x07, 0x03, 0x01, 0x04, 0x01, 0x04, 0x07, 0x01, 0x1b, 0x52, 0x05, 0x03, 0x00, 0x63, 0x00,
    0x0e, 0x0c, 0x0f, 0x1f, 0x14, 0x00, 0x05, 0x1e, 0x19, 0x28, 0x32, 0x0a, 0x66, 0x06, 0x9a, 0x11,
    0x00, 0x08, 0xcd, 0x08, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c, 0x03, 0x00, 0x1f, 0x1d,
    0x6d, 0x68, 0x73, 0xb8, 0x50, 0x00, 0x48, 0x33, 0x2c, 0x33, 0x64, 0x32, 0x6c, 0x32, 0x70, 0x32,
    0xf8, 0x37, 0x88, 0x31, 0xe8, 0x36, 0xd0, 0x31, 0x90, 0x35, 0x01, 0x05, 0x00, 0x02, 0x01, 0x06,
    0x03, 0x03, 0x04, 0x09, 0x04, 0x03, 0x01, 0x05, 0x73, 0x04, 0x02, 0x00, 0x36, 0x00, 0x0f, 0x16,
    0x13, 0x0a, 0x2d, 0x0a, 0x05, 0x28, 0x05, 0x19, 0x23, 0x1e, 0x00, 0x08, 0x9a, 0x11, 0x00, 0x04,
    0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x9a, 0x11, 0x66, 0x0a, 0x01, 0x00, 0x1f, 0x32, 0x79, 0x76,
    0x50, 0xc1, 0x51, 0x00, 0xf1, 0xff, 0xb8, 0x31, 0xbc, 0x31, 0xc4, 0x31, 0x34, 0x44, 0xd8, 0x31,
    0x0c, 0x35, 0xe8, 0x34, 0xd0, 0x31, 0xfc, 0x34, 0x02, 0x01, 0x01, 0x07, 0x01, 0x0c, 0x03, 0x00,
    0x04, 0x02, 0x04, 0x0a, 0x01, 0x1d, 0x00, 0x00, 0x01, 0x00, 0x52, 0x00, 0x14, 0x1a, 0x18, 0x19,
    0x2d, 0x14, 0x19, 0x28, 0x0a, 0x1e, 0x28, 0x32, 0x33, 0x07, 0x9a, 0x11, 0x33, 0x07, 0x66, 0x06,
    0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x25, 0x6e, 0x67, 0x4b, 0xe0,
    0x52, 0x00, 0x30, 0x31, 0x2c, 0x31, 0x34, 0x31, 0xf1, 0xff, 0xf1, 0xff, 0x24, 0x31, 0x50, 0x34,
    0x88, 0x47, 0x20, 0x47, 0x54, 0x34, 0x02, 0x02, 0x01, 0x02, 0x01, 0x07, 0x03, 0x01, 0x04, 0x03,
    0x04, 0x00, 0x04, 0x06, 0x21, 0x06, 0x00, 0x00, 0xb9, 0x00, 0x1d, 0x24, 0x09, 0x30, 0x1e, 0x32,
    0x14, 0x28, 0x0a, 0x1e, 0x23, 0x05, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x08, 0xcd, 0x08, 0x9a, 0x11,
    0x66, 0x06, 0x9a, 0x11, 0xcd, 0x08, 0x02, 0x00, 0x1f, 0x13, 0x58, 0x7c, 0x58, 0xd4, 0x53, 0x00,
    0x78, 0x30, 0xe4, 0x30, 0x7c, 0x30, 0x44, 0x37, 0x8c, 0x30, 0x9c, 0x3b, 0x84, 0x30, 0x84, 0x30,
    0x2c, 0x3e, 0x44, 0x3b, 0x01, 0x06, 0x01, 0x0a, 0x03, 0x03, 0x04, 0x04, 0x04, 0x07, 0x04, 0x01,
    0x0a, 0x10, 0x42, 0x01, 0x05, 0x00, 0x5e, 0x00, 0x02, 0x1b, 0x2e, 0x02, 0x1e, 0x19, 0x0a, 0x23,
    0x2d, 0x1e, 0x28, 0x00, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05,
    0x9a, 0x11, 0x66, 0x0a, 0x05, 0x00, 0x1f, 0x10, 0x56, 0x77, 0x67, 0xcc, 0x09, 0x00, 0x40, 0x35,
    0x44, 0x30, 0x4c, 0x35, 0x7c, 0x30, 0x60, 0x30, 0x48, 0x30, 0x3c, 0x37, 0x34, 0x36, 0x74, 0x30,
    0x64, 0x30, 0x01, 0x06, 0x01, 0x05, 0x01, 0x01, 0x03, 0x01, 0x04, 0x02, 0x04, 0x00, 0x01, 0x17,
    0x42, 0x08, 0x05, 0x00, 0xc4, 0x00, 0x02, 0x06, 0x3d, 0x2e, 0x14, 0x19, 0x00, 0x05, 0x1e, 0x2d,
    0x28, 0x1e, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04,
    0x66, 0x06, 0x05, 0x00, 0x1f, 0x31, 0x84, 0xcc, 0x5b, 0x55, 0x54, 0x00, 0x30, 0x31, 0xf1, 0xff,
    0xf1, 0xff, 0x68, 0x30, 0x2c, 0x31, 0xd4, 0x46, 0x3c, 0x36, 0x4c, 0x37, 0x38, 0x36, 0x2c, 0x35,
    0x01, 0x01, 0x01, 0x09, 0x03, 0x03, 0x03, 0x00, 0x04, 0x03, 0x04, 0x09, 0x07, 0x1a, 0x63, 0x05,
    0x01, 0x00, 0x3b, 0x00, 0x00, 0x03, 0x26, 0x26, 0x19, 0x14, 0x2d, 0x1e, 0x23, 0x0f, 0x1e, 0x28,
    0x00, 0x08, 0x33, 0x03, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x09, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09,
    0x01, 0x00, 0x0b, 0x0e, 0x8a, 0xc9, 0x5a, 0x53, 0x55, 0x00, 0xb4, 0x30, 0xb0, 0x31, 0xf1, 0xff,
    0xa0, 0x31, 0x94, 0x31, 0x64, 0x46, 0x60, 0x46, 0x78, 0x37, 0x18, 0x35, 0x8c, 0x36, 0x01, 0x0a,
    0x02, 0x01, 0x01, 0x0c, 0x03, 0x01, 0x04, 0x00, 0x04, 0x04, 0x07, 0x1c, 0x04, 0x00, 0x02, 0x00,
    0xc6, 0x00, 0x0f, 0x04, 0x1f, 0x01, 0x14, 0x32, 0x1e, 0x0a, 0x2d, 0x00, 0x19, 0x28, 0x33, 0x07,
    0x33, 0x07, 0x00, 0x08, 0x9a, 0x11, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x0c, 0x04, 0x00,
    0x0b, 0x36, 0xad, 0x92, 0x59, 0x68, 0x56, 0x00, 0x40, 0x31, 0xf1, 0xff, 0xf1, 0xff, 0x70, 0x36,
    0xc4, 0x37, 0xf4, 0x33, 0xf4, 0x33, 0x40, 0x34, 0x2c, 0x36, 0x10, 0x34, 0x01, 0x02, 0x02, 0x02,
    0x01, 0x09, 0x03, 0x01, 0x04, 0x04, 0x04, 0x03, 0x04, 0x07, 0x25, 0x06, 0x00, 0x00, 0x3a, 0x00,
    0x15, 0x06, 0x25, 0x30, 0x19, 0x00, 0x2d, 0x23, 0x1e, 0x28, 0x14, 0x0a, 0x9a, 0x11, 0x00, 0x08,
    0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x02, 0x00, 0x0b, 0x11,
    0x8d, 0xd5, 0x50, 0x4e, 0x19, 0x00, 0x7c, 0x31, 0x8c, 0x31, 0x68, 0x31, 0xf1, 0xff, 0x74, 0x31,
    0xe4, 0x36, 0x6c, 0x37, 0x90, 0x36, 0x60, 0x34, 0x88, 0x36, 0x01, 0x03, 0x01, 0x01, 0x01, 0x0a,
    0x03, 0x03, 0x04, 0x08, 0x04, 0x05, 0x0c, 0x1e, 0x20, 0x08, 0x03, 0x00, 0x5b, 0x00, 0x10, 0x10,
    0x08, 0x19, 0x23, 0x00, 0x14, 0x19, 0x32, 0x0a, 0x1e, 0x28, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x00, 0x0b, 0x0d, 0x7c, 0xaa,
    0x66, 0x74, 0x1d, 0x00, 0x40, 0x30, 0x20, 0x30, 0xc8, 0x37, 0x04, 0x38, 0xc4, 0x37, 0x1c, 0x36,
    0x14, 0x37, 0x14, 0x36, 0x68, 0x37, 0x0c, 0x36, 0x01, 0x09, 0x02, 0x01, 0x01, 0x07, 0x03, 0x00,
    0x04, 0x0b, 0x04, 0x02, 0x06, 0x02, 0x62, 0x00, 0x01, 0x00, 0x47, 0x00, 0x0a, 0x0f, 0x1d, 0x2d,
    0x19, 0x23, 0x0a, 0x1e, 0x28, 0x2d, 0x00, 0x14, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09,
    0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x03, 0x00, 0x0b, 0x2b, 0x6a, 0x5b, 0xd4, 0x67,
    0x57, 0x00, 0x40, 0x35, 0x44, 0x37, 0x7c, 0x30, 0x34, 0x30, 0xf0, 0x30, 0xb4, 0x31, 0x9c, 0x31,
    0x1c, 0x34, 0x9c, 0x30, 0xa4, 0x31, 0x01, 0x0a, 0x00, 0x02, 0x01, 0x09, 0x03, 0x00, 0x04, 0x01,
    0x04, 0x09, 0x05, 0x09, 0x46, 0x03, 0x04, 0x00, 0x5b, 0x00, 0x14, 0x04, 0x26, 0x25, 0x19, 0x1e,
    0x00, 0x14, 0x2d, 0x0a, 0x1e, 0x28, 0x66, 0x06, 0x9a, 0x09, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x11,
    0x9a, 0x11, 0x66, 0x06, 0xcd, 0x0c, 0x04, 0x00, 0x06, 0x08, 0x60, 0x53, 0xd4, 0x79, 0x58, 0x00,
    0x60, 0x32, 0xf1, 0xff, 0xf1, 0xff, 0x68, 0x32, 0x6c, 0x32, 0x4c, 0x46, 0x74, 0x32, 0x4c, 0x37,
    0x74, 0x32, 0x74, 0x32, 0x01, 0x0c, 0x00, 0x01, 0x01, 0x0a, 0x03, 0x01, 0x04, 0x02, 0x04, 0x04,
    0x03, 0x0e, 0x67, 0x08, 0x01, 0x00, 0x38, 0x00, 0x08, 0x20, 0x3a, 0x3b, 0x0a, 0x0f, 0x19, 0x14,
    0x23, 0x1e, 0x28, 0x2d, 0x00, 0x08, 0x33, 0x03, 0x00, 0x08, 0x9a, 0x11, 0x66, 0x0a, 0x9a, 0x11,
    0x9a, 0x05, 0xcd, 0x08, 0x04, 0x00, 0x06, 0x25, 0x65, 0x63, 0xcd, 0x6b, 0x59, 0x00, 0xb4, 0x37,
    0xb8, 0x37, 0xf1, 0xff, 0xf1, 0xff, 0x24, 0x30, 0x90, 0x34, 0x88, 0x35, 0x90, 0x34, 0xcc, 0x47,
    0x2c, 0x36, 0x02, 0x01, 0x01, 0x09, 0x03, 0x00, 0x04, 0x06, 0x04, 0x03, 0x04, 0x00, 0x03, 0x01,
    0x08, 0x06, 0x03, 0x00, 0x29, 0x00, 0x03, 0x04, 0x1c, 0x35, 0x05, 0x1e, 0x0a, 0x14, 0x32, 0x14,
    0x19, 0x28, 0x33, 0x07, 0x33, 0x07, 0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08,
    0x66, 0x0a, 0x03, 0x01, 0x06, 0x2e, 0x61, 0x5f, 0xf9, 0x47, 0x5a, 0x00, 0xf1, 0xff, 0xb8, 0x37,
    0x24, 0x30, 0x24, 0x30, 0x6c, 0x34, 0x8c, 0x34, 0x78, 0x34, 0x10, 0x46, 0x24, 0x33, 0x24, 0x33,
    0x02, 0x02, 0x01, 0x0a, 0x01, 0x05, 0x03, 0x00, 0x04, 0x07, 0x04, 0x0b, 0x0b, 0x03, 0x29, 0x09,
    0x08, 0x00, 0xd5, 0x00, 0x1e, 0x16, 0x23, 0x3c, 0x19, 0x2d, 0x0f, 0x1e, 0x28, 0x23, 0x0a, 0x19,
    0x66, 0x0a, 0x00, 0x08, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x09,
    0x01, 0x01, 0x06, 0x07, 0x66, 0x4f, 0xab, 0xa0, 0x5b, 0x00, 0xcc, 0x31, 0xf1, 0xff, 0xf1, 0xff,
    0x64, 0x33, 0x5c, 0x33, 0xb8, 0x33, 0x40, 0x37, 0xbc, 0x32, 0xe8, 0x32, 0xe4, 0x32, 0x02, 0x02,
    0x01, 0x07, 0x01, 0x01, 0x03, 0x01, 0x04, 0x09, 0x04, 0x0b, 0x0a, 0x1c, 0x4a, 0x06, 0x00, 0x00,
    0x8b, 0x00, 0x1a, 0x07, 0x15, 0x15, 0x0a, 0x28, 0x2d, 0x00, 0x14, 0x23, 0x23, 0x1e, 0x9a, 0x11,
    0x9a, 0x11, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c, 0x02, 0x00,
    0x06, 0x2e, 0x69, 0x57, 0xd2, 0x6e, 0x5c, 0x00, 0x40, 0x35, 0xec, 0x30, 0x44, 0x30, 0x88, 0x30,
    0x4c, 0x35, 0x3c, 0x36, 0x10, 0x47, 0x58, 0x35, 0x2c, 0x37, 0x34, 0x36, 0x01, 0x06, 0x01, 0x05,
    0x01, 0x09, 0x03, 0x00, 0x04, 0x04, 0x04, 0x02, 0x0c, 0x10, 0x6b, 0x00, 0x04, 0x00, 0x64, 0x00,
    0x0a, 0x00, 0x08, 0x31, 0x32, 0x23, 0x0f, 0x1e, 0x14, 0x2d, 0x05, 0x0a, 0x00, 0x08, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x04, 0x00, 0x06, 0x23,
    0x63, 0x56, 0xc1, 0x86, 0x5d, 0x00, 0x1c, 0x33, 0xf1, 0xff, 0xec, 0x35, 0xb0, 0x37, 0x00, 0x33,
    0x4c, 0x37, 0xf0, 0x32, 0x20, 0x33, 0xf4, 0x32, 0xec, 0x32, 0x01, 0x05, 0x02, 0x01, 0x01, 0x01,
    0x03, 0x00, 0x04, 0x07, 0x04, 0x04, 0x06, 0x0e, 0x0c, 0x08, 0x04, 0x00, 0x5d, 0x00, 0x1c, 0x19,
    0x12, 0x12, 0x1e, 0x32, 0x14, 0x1e, 0x19, 0x0a, 0x23, 0x28, 0x33, 0x07, 0x33, 0x07, 0x33, 0x07,
    0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x04, 0x00, 0x06, 0x0d, 0x5e, 0x49,
    0xb7, 0xa2, 0x5e, 0x00, 0x40, 0x31, 0x9c, 0x35, 0x70, 0x36, 0x44, 0x37, 0x4c, 0x34, 0xa4, 0x35,
    0x5c, 0x41, 0x64, 0x30, 0x48, 0x34, 0x48, 0x34, 0x01, 0x07, 0x01, 0x05, 0x01, 0x02, 0x03, 0x00,
    0x04, 0x06, 0x04, 0x07, 0x01, 0x09, 0x2d, 0x09, 0x00, 0x00, 0xac, 0x00, 0x18, 0x08, 0x24, 0x1a,
    0x28, 0x14, 0x00, 0x05, 0x1e, 0x2d, 0x0a, 0x19, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x08, 0x9a, 0x11,
    0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0xcd, 0x08, 0x05, 0x01, 0x06, 0x1a, 0x6e, 0x45, 0xc0, 0x8d,
    0x2a, 0x00, 0x88, 0x34, 0xb8, 0x37, 0xf1, 0xff, 0xf1, 0xff, 0xf1, 0xff, 0xf0, 0x42, 0x84, 0x34,
    0x14, 0x34, 0xbc, 0x33, 0x34, 0x3e, 0x00, 0x02, 0x02, 0x02, 0x01, 0x06, 0x03, 0x00, 0x04, 0x09,
    0x04, 0x00, 0x01, 0x15, 0x65, 0x06, 0x09, 0x00, 0x2a, 0x00, 0x04, 0x00, 0x14, 0x35, 0x32, 0x28,
    0x1e, 0x2d, 0x23, 0x05, 0x14, 0x0f, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04,
    0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x01, 0x01, 0x06, 0x3d, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00,
    0x5c, 0x32, 0xf1, 0xff, 0xa0, 0x31, 0xd4, 0x37, 0xa0, 0x31, 0xfc, 0x37, 0xfc, 0x37, 0xc4, 0x47,
    0xc8, 0x47, 0xfc, 0x37, 0x01, 0x0a, 0x01, 0x06, 0x01, 0x05, 0x03, 0x03, 0x04, 0x01, 0x04, 0x07,
    0x0c, 0x19, 0x53, 0x00, 0x06, 0x00, 0x15, 0x00, 0x03, 0x1f, 0x0f, 0x0f, 0x23, 0x19, 0x0f, 0x0a,
    0x2d, 0x14, 0x1e, 0x28, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06,
    0xcd, 0x04, 0x66, 0x06, 0x04, 0x00, 0x06, 0x0f, 0xcd, 0xdc, 0x38, 0x1f, 0x5f, 0x00, 0xb4, 0x37,
    0xf1, 0xff, 0xf1, 0xff, 0x14, 0x30, 0x0c, 0x30, 0x1c, 0x30, 0x24, 0x36, 0x48, 0x35, 0x90, 0x34,
    0x20, 0x47, 0x01, 0x09, 0x02, 0x02, 0x01, 0x0b, 0x03, 0x03, 0x04, 0x03, 0x04, 0x00, 0x05, 0x06,
    0x4e, 0x01, 0x02, 0x00, 0x1e, 0x00, 0x00, 0x03, 0x2f, 0x3c, 0x28, 0x00, 0x32, 0x0f, 0x1e, 0x23,
    0x1e, 0x14, 0x66, 0x06, 0x9a, 0x11, 0x00, 0x04, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x9a, 0x11,
    0x66, 0x0a, 0x01, 0x00, 0x1a, 0x2c, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0x78, 0x30, 0x88, 0x30,
    0x44, 0x37, 0x7c, 0x30, 0x68, 0x30, 0xd8, 0x33, 0x30, 0x46, 0x4c, 0x36, 0xd4, 0x30, 0xe8, 0x30,
    0x01, 0x06, 0x01, 0x09, 0x01, 0x04, 0x03, 0x01, 0x04, 0x01, 0x04, 0x00, 0x01, 0x18, 0x4b, 0x08,
    0x03, 0x00, 0xc0, 0x00, 0x02, 0x13, 0x1a, 0x1d, 0x0a, 0x23, 0x23, 0x28, 0x19, 0x32, 0x14, 0x1e,
    0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06,
    0x03, 0x01, 0x1a, 0x2a, 0x7d, 0x92, 0xa1, 0x50, 0x60, 0x00, 0xf1, 0xff, 0x68, 0x30, 0x18, 0x37,
    0x34, 0x30, 0x04, 0x38, 0x2c, 0x37, 0xa0, 0x3a, 0x38, 0x3b, 0x28, 0x3b, 0xc8, 0x3a, 0x01, 0x06,
    0x00, 0x01, 0x01, 0x09, 0x03, 0x00, 0x04, 0x00, 0x04, 0x03, 0x04, 0x10, 0x6f, 0x07, 0x05, 0x00,
    0x44, 0x00, 0x18, 0x1b, 0x03, 0x12, 0x19, 0x23, 0x0a, 0x32, 0x14, 0x1e, 0x2d, 0x23, 0x00, 0x08,
    0x33, 0x03, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x11, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x09, 0x03, 0x00,
    0x02, 0x15, 0x80, 0x88, 0x9c, 0x5c, 0x61, 0x00, 0x44, 0x35, 0x60, 0x30, 0xf1, 0xff, 0x60, 0x30,
    0xcc, 0x30, 0x58, 0x37, 0x2c, 0x37, 0x3c, 0x36, 0x64, 0x30, 0x28, 0x35, 0x01, 0x09, 0x01, 0x06,
    0x01, 0x0a, 0x03, 0x01, 0x04, 0x02, 0x04, 0x07, 0x03, 0x1c, 0x11, 0x07, 0x01, 0x00, 0x31, 0x00,
    0x05, 0x00, 0x2e, 0x25, 0x1e, 0x14, 0x05, 0x23, 0x19, 0x28, 0x32, 0x0a, 0x33, 0x07, 0x33, 0x07,
    0x00, 0x08, 0x9a, 0x11, 0x66, 0x0a, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x0c, 0x05, 0x00, 0x02, 0x03,
    0x3e, 0x55, 0xe5, 0x88, 0x62, 0x00, 0xe0, 0x34, 0x30, 0x37, 0xc8, 0x37, 0xa4, 0x30, 0x10, 0x31,
    0x48, 0x34, 0x68, 0x47, 0x90, 0x36, 0x68, 0x47, 0x88, 0x36, 0x01, 0x03, 0x01, 0x0a, 0x01, 0x02,
    0x03, 0x03, 0x04, 0x03, 0x01, 0x0c, 0x06, 0x08, 0x31, 0x05, 0x02, 0x00, 0x3e, 0x00, 0x05, 0x11,
    0x1f, 0x1a, 0x28, 0x1e, 0x00, 0x0a, 0x0f, 0x2d, 0x23, 0x14, 0x66, 0x0a, 0x9a, 0x11, 0x00, 0x04,
    0x00, 0x08, 0x9a, 0x11, 0x9a, 0x05, 0x00, 0x08, 0x66, 0x0a, 0x04, 0x00, 0x05, 0x0c, 0x3f, 0x63,
    0xec, 0x72, 0x63, 0x00, 0xe0, 0x34, 0x48, 0x37, 0xc8, 0x37, 0xf1, 0xff, 0x4c, 0x34, 0x58, 0x35,
    0xc4, 0x34, 0xcc, 0x34, 0xc0, 0x34, 0xc8, 0x34, 0x00, 0x02, 0x01, 0x0c, 0x04, 0x06, 0x03, 0x00,
    0x04, 0x01, 0x04, 0x04, 0x07, 0x03, 0x52, 0x08, 0x01, 0x00, 0x2d, 0x00, 0x0a, 0x12, 0x1f, 0x18,
    0x2d, 0x00, 0x28, 0x0a, 0x23, 0x1e, 0x32, 0x1e, 0x66, 0x06, 0x9a, 0x09, 0x33, 0x07, 0x66, 0x06,
    0x9a, 0x11, 0x9a, 0x11, 0x66, 0x06, 0xcd, 0x0c, 0x05, 0x00, 0x05, 0x04, 0x58, 0x66, 0xee, 0x54,
    0x64, 0x00, 0x48, 0x33, 0xbc, 0x31, 0x6c, 0x31, 0x74, 0x31, 0x6c, 0x32, 0x30, 0x34, 0x6c, 0x36,
    0xd4, 0x46, 0x38, 0x34, 0xcc, 0x46, 0x00, 0x02, 0x01, 0x05, 0x01, 0x0c, 0x03, 0x01, 0x04, 0x08,
    0x01, 0x0a, 0x06, 0x03, 0x73, 0x04, 0x03, 0x00, 0x71, 0x00, 0x12, 0x16, 0x0f, 0x2f, 0x32, 0x0a,
    0x0f, 0x28, 0x19, 0x1e, 0x14, 0x00, 0x00, 0x08, 0x9a, 0x11, 0x00, 0x08, 0xcd, 0x08, 0x66, 0x0a,
    0x66, 0x06, 0x9a, 0x11, 0xcd, 0x08, 0x00, 0x00, 0x05, 0x36, 0x2d, 0x5f, 0xf0, 0x84, 0x65, 0x00,
    0x78, 0x30, 0x88, 0x30, 0x28, 0x37, 0x7c, 0x30, 0x98, 0x30, 0x9c, 0x30, 0xa4, 0x36, 0x50, 0x36,
    0x64, 0x44, 0x9c, 0x36, 0x01, 0x01, 0x01, 0x03, 0x01, 0x09, 0x03, 0x03, 0x04, 0x02, 0x04, 0x01,
    0x09, 0x0a, 0x00, 0x08, 0x06, 0x00, 0x39, 0x00, 0x18, 0x21, 0x07, 0x20, 0x0a, 0x23, 0x0f, 0x2d,
    0x05, 0x28, 0x1e, 0x14, 0x9a, 0x11, 0x33, 0x07, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05,
    0x00, 0x08, 0x66, 0x0a, 0x05, 0x00, 0x05, 0x31, 0x3e, 0x7a, 0xde, 0x6a, 0x66, 0x00, 0xe0, 0x34,
    0xec, 0x35, 0xa0, 0x31, 0x2c, 0x33, 0x68, 0x31, 0xec, 0x37, 0x34, 0x35, 0x4c, 0x46, 0x40, 0x46,
    0x48, 0x46, 0x01, 0x04, 0x01, 0x03, 0x01, 0x04, 0x03, 0x00, 0x04, 0x05, 0x04, 0x08, 0x07, 0x13,
    0x21, 0x00, 0x02, 0x00, 0xb1, 0x00, 0x16, 0x22, 0x17, 0x2f, 0x1e, 0x00, 0x0a, 0x28, 0x14, 0x14,
    0x14, 0x05, 0x9a, 0x11, 0x9a, 0x11, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x66, 0x06,
    0x9a, 0x09, 0x04, 0x00, 0x05, 0x25, 0x70, 0x49, 0xff, 0x48, 0x67, 0x00, 0xc8, 0x30, 0xe4, 0x30,
    0x70, 0x36, 0x48, 0x37, 0xc4, 0x43, 0xa8, 0x37, 0xe0, 0x30, 0x54, 0x35, 0x74, 0x30, 0xf0, 0x32,
    0x01, 0x05, 0x01, 0x02, 0x01, 0x04, 0x03, 0x01, 0x04, 0x04, 0x04, 0x07, 0x07, 0x02, 0x42, 0x01,
    0x08, 0x00, 0x1f, 0x00, 0x07, 0x16, 0x3d, 0x1b, 0x14, 0x2d, 0x23, 0x28, 0x05, 0x1e, 0x00, 0x19,
    0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x66, 0x06, 0x9a, 0x05, 0x00, 0x0c,
    0x04, 0x01, 0x05, 0x22, 0x57, 0x7b, 0xd5, 0x59, 0x68, 0x00, 0x94, 0x35, 0x4c, 0x34, 0xd4, 0x37,
    0x8c, 0x31, 0xb0, 0x36, 0xb8, 0x36, 0x10, 0x33, 0x98, 0x37, 0x80, 0x37, 0xc8, 0x36, 0x01, 0x0a,
    0x01, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x01, 0x04, 0x07, 0x07, 0x0f, 0x63, 0x03, 0x06, 0x00,
    0x41, 0x00, 0x17, 0x25, 0x39, 0x18, 0x0a, 0x1e, 0x23, 0x1e, 0x28, 0x14, 0x19, 0x05, 0x00, 0x08,
    0x33, 0x03, 0x00, 0x04, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x11, 0x00, 0x08, 0x66, 0x0a, 0x03, 0x01,
    0x05, 0x26, 0x4b, 0x73, 0xe4, 0x5e, 0x56, 0x00, 0xf1, 0xff, 0xf4, 0x30, 0x10, 0x31, 0xc4, 0x37,
    0x20, 0x30, 0x78, 0x37, 0x38, 0x37, 0x4c, 0x36, 0x74, 0x37, 0x70, 0x37, 0x01, 0x01, 0x00, 0x02,
    0x01, 0x04, 0x03, 0x00, 0x04, 0x09, 0x04, 0x0b, 0x06, 0x13, 0x64, 0x00, 0x01, 0x00, 0x67, 0x00,
    0x14, 0x25, 0x1b, 0x1f, 0x0f, 0x23, 0x19, 0x0a, 0x14, 0x1e, 0x32, 0x05, 0x66, 0x06, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x03, 0x00, 0x05, 0x05,
    0x5b, 0x4e, 0xfd, 0x5a, 0x34, 0x00, 0x40, 0x31, 0xec, 0x35, 0x24, 0x37, 0x58, 0x31, 0x50, 0x31,
    0x9c, 0x47, 0x38, 0x35, 0x58, 0x46, 0x2c, 0x35, 0x34, 0x35, 0x01, 0x09, 0x01, 0x07, 0x01, 0x05,
    0x03, 0x00, 0x04, 0x05, 0x04, 0x06, 0x07, 0x09, 0x04, 0x03, 0x00, 0x00, 0xb4, 0x00, 0x08, 0x20,
    0x2a, 0x34, 0x1e, 0x28, 0x19, 0x0a, 0x19, 0x14, 0x23, 0x2d, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x02, 0x00, 0x05, 0x29, 0x40, 0x67,
    0xe9, 0x70, 0x32, 0x00, 0xf8, 0x34, 0x60, 0x30, 0x44, 0x37, 0xa4, 0x30, 0xb8, 0x30, 0x48, 0x36,
    0x20, 0x34, 0x68, 0x36, 0xc0, 0x30, 0xbc, 0x30, 0x01, 0x05, 0x01, 0x01, 0x01, 0x0a, 0x03, 0x03,
    0x04, 0x02, 0x04, 0x01, 0x05, 0x02, 0x25, 0x01, 0x04, 0x00, 0x51, 0x00, 0x02, 0x22, 0x1b, 0x31,
    0x28, 0x14, 0x1e, 0x19, 0x23, 0x2d, 0x0a, 0x1e, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09,
    0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x05, 0x00, 0x05, 0x21, 0xb5, 0x8e, 0x78, 0x45,
    0x69, 0x00, 0x40, 0x31, 0xf1, 0xff, 0xf1, 0xff, 0x24, 0x37, 0x0c, 0x30, 0x58, 0x46, 0x88, 0x33,
    0x50, 0x46, 0x8c, 0x32, 0xa0, 0x33, 0x02, 0x01, 0x01, 0x02, 0x01, 0x06, 0x03, 0x00, 0x04, 0x06,
    0x04, 0x02, 0x08, 0x16, 0x04, 0x06, 0x08, 0x00, 0x86, 0x00, 0x11, 0x00, 0x34, 0x34, 0x14, 0x19,
    0x2d, 0x1e, 0x28, 0x00, 0x0a, 0x23, 0x33, 0x07, 0x33, 0x07, 0x9a, 0x11, 0x9a, 0x11, 0x9a, 0x09,
    0x00, 0x08, 0x66, 0x06, 0xcd, 0x0c, 0x02, 0x00, 0x13, 0x1b, 0xb3, 0x87, 0x79, 0x4d, 0x6a, 0x00,
    0x04, 0x31, 0x20, 0x30, 0x00, 0x31, 0xf0, 0x30, 0x10, 0x31, 0x58, 0x34, 0x50, 0x34, 0x54, 0x36,
    0x44, 0x46, 0x18, 0x43, 0x02, 0x02, 0x01, 0x05, 0x03, 0x03, 0x03, 0x00, 0x04, 0x00, 0x04, 0x04,
    0x08, 0x1a, 0x25, 0x05, 0x02, 0x00, 0x53, 0x00, 0x01, 0x0f, 0x2f, 0x33, 0x19, 0x28, 0x1e, 0x05,
    0x0a, 0x14, 0x0f, 0x23, 0x66, 0x0a, 0x00, 0x08, 0x00, 0x08, 0xcd, 0x08, 0x9a, 0x11, 0x66, 0x06,
    0x9a, 0x11, 0xcd, 0x08, 0x01, 0x01, 0x13, 0x12, 0x92, 0x75, 0xb5, 0x44, 0x6b, 0x00, 0x40, 0x31,
    0x88, 0x32, 0x60, 0x31, 0xd4, 0x31, 0x88, 0x32, 0x4c, 0x37, 0x60, 0x37, 0xd8, 0x31, 0x50, 0x37,
    0x68, 0x37, 0x01, 0x07, 0x01, 0x01, 0x01, 0x06, 0x03, 0x00, 0x04, 0x04, 0x04, 0x07, 0x0c, 0x13,
    0x46, 0x02, 0x08, 0x00, 0x3f, 0x00, 0x18, 0x23, 0x34, 0x34, 0x05, 0x0f, 0x14, 0x28, 0x1e, 0x0a,
    0x14, 0x23, 0x9a, 0x11, 0x9a, 0x09, 0x00, 0x04, 0x00, 0x08, 0x66, 0x06, 0x9a, 0x05, 0x9a, 0x11,
    0x66, 0x0a, 0x02, 0x00, 0x09, 0x26, 0x8c, 0x79, 0xa6, 0x55, 0x6c, 0x00, 0x30, 0x31, 0x2c, 0x31,
    0x28, 0x30, 0xf1, 0xff, 0x44, 0x37, 0xe8, 0x33, 0x18, 0x35, 0x18, 0x35, 0x14, 0x35, 0x2c, 0x35,
    0x00, 0x01, 0x01, 0x05, 0x01, 0x0b, 0x03, 0x00, 0x04, 0x09, 0x04, 0x03, 0x0b, 0x05, 0x67, 0x02,
    0x05, 0x00, 0x37, 0x00, 0x04, 0x1c, 0x23, 0x30, 0x1e, 0x32, 0x14, 0x28, 0x1e, 0x00, 0x14, 0x14,
    0x00, 0x08, 0x9a, 0x11, 0x33, 0x07, 0x66, 0x06, 0x9a, 0x09, 0x00, 0x08, 0x9a, 0x11, 0x9a, 0x09,
    0x02, 0x00, 0x09, 0x18, 0x8d, 0x70, 0xb0, 0x53, 0x3e, 0x00, 0x40, 0x31, 0xf1, 0xff, 0xf1, 0xff,
    0x50, 0x31, 0x48, 0x37, 0xf4, 0x46, 0xa4, 0x46, 0xfc, 0x43, 0xf8, 0x46, 0x34, 0x35, 0x01, 0x0b,
    0x01, 0x0c, 0x04, 0x06, 0x03, 0x01, 0x04, 0x04, 0x04, 0x07, 0x0b, 0x19, 0x47, 0x01, 0x00, 0x00,
    0x91, 0x00, 0x04, 0x05, 0x24, 0x06, 0x2d, 0x19, 0x32, 0x23, 0x28, 0x1e, 0x14, 0x14, 0x66, 0x06,
    0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x02, 0x00,
    0x09, 0x34, 0x80, 0x80, 0x80, 0x80, 0x32, 0x00, 0x50, 0x30, 0x28, 0x37, 0x68, 0x30, 0x88, 0x30,
    0x18, 0x37, 0x58, 0x30, 0x74, 0x30, 0x68, 0x36, 0xe0, 0x30, 0x20, 0x34, 0x01, 0x0b, 0x01, 0x0c,
    0x04, 0x06, 0x03, 0x01, 0x04, 0x04, 0x04, 0x07, 0x09, 0x11, 0x6f, 0x08, 0x06, 0x00, 0x73, 0x00,
    0x1b, 0x06, 0x23, 0x2e, 0x14, 0x23, 0x0f, 0x32, 0x28, 0x0a, 0x1e, 0x19, 0x66, 0x06, 0x33, 0x03,
    0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x05, 0x00, 0x09, 0x13,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x48, 0x33, 0xf1, 0xff, 0x4c, 0x34, 0xec, 0x33, 0xf1, 0xff,
    0xf4, 0x33, 0x6c, 0x37, 0x54, 0x36, 0xf0, 0x33, 0x48, 0x34, 0x00, 0x02, 0x01, 0x01, 0x03, 0x03,
    0x04, 0x05, 0x04, 0x0a, 0x04, 0x08, 0x06, 0x04, 0x46, 0x05, 0x09, 0x00, 0x0a, 0x00, 0x00, 0x11,
    0x12, 0x1a, 0x14, 0x00, 0x0a, 0x23, 0x14, 0x28, 0x0a, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04,
    0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x01, 0x02, 0x20, 0x0c, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x00, 0xe0, 0x34, 0xf1, 0xff, 0xb8, 0x30, 0x44, 0x37, 0xa0, 0x30, 0xb4, 0x31,
    0xc8, 0x34, 0x94, 0x36, 0xa4, 0x36, 0xcc, 0x34, 0x02, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x00,
    0x04, 0x08, 0x04, 0x04, 0x08, 0x17, 0x02, 0x00, 0x06, 0x00, 0x4f, 0x00, 0x0a, 0x22, 0x17, 0x2f,
    0x14, 0x00, 0x0a, 0x23, 0x2d, 0x28, 0x0a, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09,
    0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x03, 0x02, 0x20, 0x3b, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x00, 0x08, 0x36, 0xf1, 0xff, 0xf1, 0xff, 0x38, 0x31, 0x00, 0x33, 0x14, 0x35, 0x5c, 0x36,
    0x5c, 0x36, 0x24, 0x33, 0x24, 0x33, 0x01, 0x04, 0x01, 0x0b, 0x01, 0x09, 0x03, 0x00, 0x04, 0x00,
    0x04, 0x09, 0x01, 0x13, 0x4b, 0x07, 0x01, 0x00, 0x3f, 0x00, 0x1c, 0x25, 0x0f, 0x3c, 0x14, 0x2d,
    0x0a, 0x23, 0x14, 0x28, 0x0f, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04,
    0x66, 0x06, 0xcd, 0x04, 0x66, 0x06, 0x00, 0x02, 0x20, 0x38, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
    0x50, 0x30, 0x68, 0x30, 0xd4, 0x37, 0xc8, 0x37, 0xcc, 0x30, 0xe8, 0x30, 0x4c, 0x36, 0x40, 0x37,
    0xa8, 0x37, 0xe0, 0x30, 0x00, 0x01, 0x01, 0x06, 0x01, 0x09, 0x03, 0x03, 0x04, 0x02, 0x04, 0x05,
    0x04, 0x01, 0x63, 0x08, 0x06, 0x00, 0xbc, 0x00, 0x14, 0x10, 0x1a, 0x05, 0x14, 0x00, 0x0a, 0x2d,
    0x14, 0x23, 0x0a, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06,
    0xcd, 0x04, 0x66, 0x06, 0x04, 0x02, 0x20, 0x27, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xb4, 0x37,
    0xf1, 0xff, 0xa8, 0x36, 0xec, 0x35, 0x00, 0x36, 0xcc, 0x36, 0x04, 0x36, 0xe8, 0x35, 0x4c, 0x37,
    0xfc, 0x35, 0x01, 0x05, 0x01, 0x04, 0x03, 0x00, 0x04, 0x0b, 0x04, 0x0a, 0x04, 0x04, 0x0c, 0x07,
    0x53, 0x06, 0x00, 0x00, 0x54, 0x00, 0x03, 0x12, 0x38, 0x39, 0x2d, 0x23, 0x0a, 0x28, 0x14, 0x1e,
    0x0a, 0x05, 0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04,
    0x66, 0x06, 0x02, 0x02, 0x20, 0x3a, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x78, 0x30, 0x20, 0x30,
    0x54, 0x30, 0x6c, 0x30, 0x60, 0x30, 0x74, 0x36, 0x68, 0x37, 0x8c, 0x37, 0xbc, 0x34, 0xe8, 0x36,
    0x01, 0x02, 0x01, 0x0a, 0x00, 0x01, 0x03, 0x03, 0x04, 0x01, 0x04, 0x00, 0x03, 0x15, 0x6d, 0x08,
    0x06, 0x00, 0x8a, 0x00, 0x16, 0x0e, 0x3d, 0x18, 0x0a, 0x19, 0x05, 0x23, 0x14, 0x28, 0x2d, 0x00,
    0x66, 0x06, 0x33, 0x03, 0x00, 0x04, 0x9a, 0x09, 0xcd, 0x04, 0x66, 0x06, 0xcd, 0x04, 0x66, 0x06,
    0x05, 0x02, 0x20, 0x40,
};
extern const u16 sPackedFurnitureItems[4];
const u16 sPackedFurnitureItems[4] = {
    0x4a48, 0x4a4c, 0x4a50, 0x0000,
};
VillagerAnimHeapPool sVillagerAnimHeapPool;
extern const u8 sReservedErrandKinds[16];
const u8 sReservedErrandKinds[16] = {
    0x05, 0x06, 0x08, 0x09, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x14, 0x00, 0x00, 0x00,
};
}
}

namespace nQ {
extern "C" u8 *VillagerInfo_Get(u32 n) {
    u8 *r = 0;
    if (VillagerId_IsValidSpecies(n)) r = sVillagerInfoTable + n * 0x4e;
    return r;
}
}

namespace nQ {
extern "C" u8 *SpNpc_GetInfo(u16 *p) {
    u8 *r = 0;
    s32 idx = *p & 0xfff;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t == 13) {
        if (idx < 0x26) r = sSpNpcInfoTable + idx * 3;
    }
    return r;
}
}

namespace nQ {
extern "C" BOOL Villager_GetSpeciesName(MsgString *buf, u32 x) {
    BOOL r = FALSE;
    if (VillagerId_IsValidSpecies(x)) {
        u8 k = x;
        String_Load(buf, &k, (const char *)((u8 *)"st_npc_name"));
        r = TRUE;
    }
    return r;
}
}

namespace nQ {
extern "C" BOOL Npc_GetName(u8 *self, u16 *p) {
    s32 idx = *p & 0xfff;
    BOOL r = FALSE;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = SaveVillagers_Get(gSaveVillagers, idx);
            if (q) r = _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(q), self);
        }
    } else {
        if (idx < 0x26) {
            u8 k = idx;
            String_Load((MsgString *)self, &k, (const char *)((u8 *)"st_spnpc_name"));
            r = TRUE;
        }
    }
    return r;
}
}

namespace nQ {
extern "C" u32 Npc_GetVoiceType(u16 *p) {
    u32 idx = *p & 0xfff;
    u32 r = 5;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = SaveVillagers_Get(gSaveVillagers, idx);
            if (q) r = VillagerId_GetVoiceType(_ZN12VillagerData13getVillagerIdEv(q));
        }
    } else {
        u8 *q = SpNpc_GetInfo(p);
        if (q) r = q[1];
    }
    return r;
}
}

namespace nQ {
extern "C" u32 Npc_GetInfoByte2(u16 *p) {
    u32 idx = *p & 0xfff;
    u32 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = SaveVillagers_Get(gSaveVillagers, idx);
            if (q) r = Villager_GetInfoByte2(q);
        }
    } else {
        u8 *q = SpNpc_GetInfo(p);
        if (q) r = q[2];
    }
    return r;
}
}

namespace nQ {
extern "C" s32 SpNpc_GetInfoByte0(u16 *p) {
    s8 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t == 13) {
        s8 *q = (s8 *)SpNpc_GetInfo(p);
        if (q) r = *q;
    }
    return r;
}
}

namespace nQ {
extern "C" BOOL Villager_GetDefaultCatchphrase(MsgString *buf, u32 x) {
    BOOL r = FALSE;
    if (VillagerId_IsValidSpecies(x)) {
        u8 k = x;
        String_Load(buf, &k, (const char *)((u8 *)"st_npc_habit"));
        r = TRUE;
    }
    return r;
}
}

namespace nQ {
extern "C" BOOL Villager_GetDefaultCatchphraseEncoded(EncodedString *self, u32 x) {
    MsgString11 local;
    BOOL r = FALSE;
    if (Villager_GetDefaultCatchphrase(&local, x)) {
        self->fromMsgString(&local);
        r = TRUE;
    }
    return r;
}
}

namespace nQ {
extern "C" u8 FurnitureTaste_GetTextIndex(u8 *p) {
    u8 r = 0;
    u32 c = p[0];
    switch (c) {
    case 0:
    case 1:
    case 2:
        r = sFurnitureTasteTextBase[c] + p[1] - 1;
        break;
    case 3:
        r = sFurnitureTasteTextBase[c] + p[1];
        break;
    case 4: {
        u32 d = p[1];
        if (d < 12) r = sFurnitureTasteTextBase[c] + d;
        break;
    }
    }
    return r;
}
}

namespace nQ {
extern "C" u32 Date_GetStarSign(u32 a, u32 b) {
    u8 *p = sStarSignEndDates;
    u32 r = 0;
    u8 i;
    for (i = 0; i < 12; p += 2, i++) {
        u32 c = p[0];
        if (a < c || (a == c && b <= p[1])) {
            r = i;
            break;
        }
    }
    return r;
}
}

namespace nQ {
extern "C" u32 Date_GetStarSignOf(u8 *p) {
    return Date_GetStarSign(p[0], p[1]);
}
}

namespace nQ {
extern "C" u32 Town_GetMaxOutdoorVillagers() {
    CommManager *o = gCommManager;
    if (o->isSlotActive(o->myAid)) return 0;
    return 4;
}
}

namespace nQ {
extern "C" u8 *Personality_GetSleepHours(u32 idx) {
    if (idx >= 6) idx = 0;
    return sPersonalitySleepHours[idx];
}
}

namespace nQ {
extern "C" BOOL Personality_IsAsleep(u32 idx, void *buf) {
    u8 *e = Personality_GetSleepHours(idx);
    struct { u32 a; u32 b; } t;
    t.a = 0;
    t.b = 0;
    ((u8 *)&t)[2] = e[0];
    ((u8 *)&t)[1] = e[1];
    if (DateTime_Compare(buf, &t, 6) == 1) {
        s32 c;
        BOOL r;
        ((u8 *)&t)[2] = e[2];
        ((u8 *)&t)[1] = e[3];
        c = DateTime_Compare(buf, &t, 6);
        r = FALSE;
        if (c == -1) r = TRUE;
        return r;
    }
    return FALSE;
}
}

MsgString11::MsgString11() {
    using namespace nQ;}

MsgString11::~MsgString11() {
    using namespace nQ;}

u32 MsgString11::capacity() {
    using namespace nQ; return 0xb; }

u8 *MsgString11::data() {
    using namespace nQ; return (u8 *)this + 0x12; }

EncodedString10::EncodedString10() {
    using namespace nQ;}

EncodedString10::~EncodedString10() {
    using namespace nQ;}

u32 EncodedString10::capacity() {
    using namespace nQ; return 0xa; }

void EncodedString10::copyTo(void *dst, s32 n) {
    using namespace nQ;
    if (n >= 10) n = 10;
    MI_CpuCopy8((u8 *)this + 0xe, dst, n);
}

u8 *EncodedString10::data() {
    using namespace nQ; return (u8 *)this + 0xe; }

MsgString17::MsgString17() {
    using namespace nQ;}

MsgString17::~MsgString17() {
    using namespace nQ;}

u32 MsgString17::capacity() {
    using namespace nQ; return 0x11; }

u8 *MsgString17::data() {
    using namespace nQ; return (u8 *)this + 0x12; }

EncodedString16::EncodedString16() {
    using namespace nQ;}

EncodedString16::~EncodedString16() {
    using namespace nQ;}

u32 EncodedString16::capacity() {
    using namespace nQ; return 0x10; }

u8 *EncodedString16::data() {
    using namespace nQ; return (u8 *)this + 0xe; }

MsgString17B::MsgString17B() {
    using namespace nQ;}

MsgString17B::~MsgString17B() {
    using namespace nQ;}

u32 MsgString17B::capacity() {
    using namespace nQ; return 0x11; }

u8 *MsgString17B::data() {
    using namespace nQ; return (u8 *)this + 0x12; }

EncodedString16B::EncodedString16B() {
    using namespace nQ;}

EncodedString16B::~EncodedString16B() {
    using namespace nQ;}

u32 EncodedString16B::capacity() {
    using namespace nQ; return 0x10; }

u8 *EncodedString16B::data() {
    using namespace nQ; return (u8 *)this + 0xe; }

namespace nQ {
extern "C" u8 *_ZN8HousePosC1Ev(u8 *p) {
    HousePos_Clear(p);
    return p;
}
}

namespace nQ {
extern "C" void _ZN8HousePosD1Ev() {
}
}

namespace nQ {
extern "C" void HousePos_Clear(u8 *p) {
    p[0] = 0xff;
    p[1] = 0xff;
}
}

namespace nQ {
extern "C" BOOL HousePos_IsValid(u8 *p) {
    if (p[0] != 0xff && p[1] != 0xff) return TRUE;
    return FALSE;
}
}

namespace nQ {
extern "C" void HousePos_Set(u8 *p, u8 a, u8 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace nQ {
extern "C" void HousePos_SetFromUnit(u8 *out, s32 *in) {
    HousePos_Set(out, in[0], in[1]);
}
}

namespace nQ {
extern "C" u8 *VillagerMemory_Construct(u8 *self) {
    _ZN8PlayerIdC1EPv(self);
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    TownId_Construct(self + 0x48);
    *(u16 *)(self + 0x52) = 0xfff1;
    VillagerMemory_Clear(self);
    return self;
}
}

namespace nQ {
extern "C" u8 *VillagerMemory_Destruct(u8 *self) {
    TownId_Destruct(self + 0x48);
    _ZN8PlayerIdC1Ev(self);
    return self;
}
}

namespace nQ {
extern "C" void VillagerMemory_Clear(u8 *self) {
    MI_CpuFill8(self, 0, 0x68);
    _ZN8PlayerId5clearEv(self);
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    *(u16 *)(self + 0x52) = 0xfff1;
}
}

namespace nQ {
extern "C" BOOL VillagerMemory_IsUsed(void *p) {
    return _ZN8PlayerId7isValidEv(VillagerMemory_GetPlayerId(p));
}
}

namespace nQ {
extern "C" BOOL VillagerMemory_InitForPlayer(u8 *self, void *a, u8 *b, u8 *c) {
    BOOL r = FALSE;
    if (_ZN8PlayerId7isValidEv(a)) {
        VillagerMemory_Clear(self);
        VillagerMemory_RecordTalk((Unk_02080e20_Obj *)self, a, b, c);
        MI_CpuCopy8(_ZN8PlayerId7getNameEv(a), self + 0x16, 8);
        r = TRUE;
    }
    return r;
}
}

namespace nQ {
extern "C" void VillagerMemory_RecordTalk(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    if (a != 0 && _ZN8PlayerId7isValidEv(a)) _ZN8PlayerId6setRawEPv(self, a);
    if (b == 0) b = gSaveTownId;
    if (c == 0) {
        Clock_GetDateTime(buf);
        c = (u8 *)buf;
    }
    if (VillagerMemory_UpdateTalkStreak(self, c)) VillagerMemory_AddStreakFriendship(self);
    TownId_Assign(VillagerMemory_GetTownId((u8 *)self), b);
    MI_CpuCopy8(c, VillagerMemory_GetTalkDate((u8 *)self), 8);
    _ZN14VillagerMemory11setTownTuneEPx(self, gSaveTownTune);
}
}

namespace nQ {
extern "C" u8 *VillagerMemory_GetTalkDate(u8 *p) {
    return p + 0x40;
}
}

namespace nQ {
extern "C" BOOL VillagerMemory_UpdateTalkStreak(Unk_02080e20_Obj *self, u8 *p) {
    u8 *q = VillagerMemory_GetTalkDate((u8 *)self);
    u16 v = 0;
    BOOL r = 0;
    if (DateTime_IsInvalid() == 0) {
        if (DateTime_Compare(p, q, 0x3f) == 1) {
            s32 t = DateTime_DiffDays(q, p);
            if (t == 0) {
                v = self->lvl;
            } else {
                if (t == 1) v = self->lvl + 1;
                r = TRUE;
            }
        } else {
            r = TRUE;
        }
    } else {
        r = TRUE;
    }
    if (v > 4) v = 4;
    self->lvl = v;
    return r;
}
}

namespace nQ {
extern "C" void VillagerMemory_AddStreakFriendship(Unk_02080e20_Obj *p) {
    s32 v = p->lvl;
    if (v > 4) v = 4;
    _ZN14VillagerMemory13addFriendshipEi(p, (s8)(v + 1));
}
}

namespace nQ {
extern "C" u8 *VillagerMemory_GetTownId(u8 *p) {
    return p + 0x48;
}
}

namespace nQ {
extern "C" void *VillagerMemory_GetPlayerId(void *p) {
    return p;
}
}

namespace nP {
extern "C" BOOL VillagerMemory_MatchesPlayer(Unk_02080de0 *a, Unk_02080de0 *b) {
    if (a->townId == b->townId && memcmp(a->townName, b->townName, 8) == 0 && _ZN8PlayerId6equalsEPS_(a, b) != 0) return TRUE;
    return FALSE;
}
}

s32 VillagerMemory::getFriendship() {
    using namespace nP; return friendship; }

#pragma dont_inline on
void VillagerMemory::setFriendship(s8 v) {
    using namespace nP; friendship = v; }
#pragma dont_inline reset

s32 VillagerMemory::addFriendship(s32 d) {
    using namespace nP;
    s32 t = friendship + d;
    if (t > 0x7f) t = 0x7f;
    else if (t < -0x80) t = -0x80;
    setFriendship(t);
    return (s8)t;
}

BOOL VillagerMemory::isLetterReceived() {
    using namespace nP; if (flags.f0 == 1) return TRUE; return FALSE; }

void VillagerMemory::setLetterReceived() {
    using namespace nP; flags.f0 = 1; }

void VillagerMemory::getNickname(void *out) {
    using namespace nP;
    u32 tmp[7];
    _ZN14EncodedString8C1Ev(tmp);
    getNicknameEncoded(tmp);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(out, tmp, 0, 0);
    _ZN14EncodedString8D1Ev(tmp);
}

void VillagerMemory::getNicknameEncoded(void *out) {
    using namespace nP;
    StrBuf_ClearAlt(out);
    EncodedString_SetRaw(out, nickname, 8);
}

void VillagerMemory::setNicknameFromMsg(void *out) {
    using namespace nP;
    u32 tmp[7];
    _ZN14EncodedString8C1Ev(tmp);
    _ZN13EncodedString13fromMsgStringEP9MsgString(tmp, out);
    _ZN14EncodedString86copyToEPvj(tmp, nickname, 8);
    _ZN14EncodedString8D1Ev(tmp);
}

void VillagerMemory::setNickname(void *src, s32 n) {
    using namespace nP;
    MI_CpuFill8(nickname, 0, 8);
    if (n > 8) n = 8;
    MI_CpuCopy8(src, nickname, n);
}

BOOL VillagerMemory::hasCompliment() {
    using namespace nP; if (flags.f1 == 1) return TRUE; return FALSE; }

void VillagerMemory::getCompliment(void *out) {
    using namespace nP;
    u32 tmp[9];
    _ZN15EncodedString16C1Ev(tmp);
    getComplimentEncoded(tmp);
    EncodedString_SetRaw(tmp, compliment, 0x10);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(out, tmp, 0, 0);
    _ZN15EncodedString16D1Ev(tmp);
}

void VillagerMemory::getComplimentEncoded(void *out) {
    using namespace nP;
    StrBuf_ClearAlt(out);
    EncodedString_SetRaw(out, compliment, 0x10);
}

void VillagerMemory::setCompliment(void *src, s32 n) {
    using namespace nP;
    MI_CpuFill8(compliment, 0, 0x10);
    if (n > 0x10) n = 0x10;
    MI_CpuCopy8(src, compliment, n);
    flags.f1 = 1;
}

BOOL VillagerMemory::hasGreeting() {
    using namespace nP; if (flags.f3 == 1) return TRUE; return FALSE; }

void VillagerMemory::getGreeting(void *out) {
    using namespace nP;
    u32 tmp[9];
    _ZN16EncodedString16BC1Ev(tmp);
    getGreetingEncoded(tmp);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(out, tmp, 0, 0);
    _ZN16EncodedString16BD1Ev(tmp);
}

void VillagerMemory::getGreetingEncoded(void *out) {
    using namespace nP;
    StrBuf_ClearAlt(out);
    EncodedString_SetRaw(out, greeting, 0x10);
}

void VillagerMemory::setGreeting(void *src, s32 n) {
    using namespace nP;
    MI_CpuFill8(greeting, 0, 0x10);
    if (n > 0x10) n = 0x10;
    MI_CpuCopy8(src, greeting, n);
    flags.f3 = 1;
}

void VillagerMemory::setReceivedItem(u16 *p) {
    using namespace nP; receivedItem = *p; }

u16 *VillagerMemory::getReceivedItem() {
    using namespace nP; return &receivedItem; }

BOOL VillagerMemory::hasTownTune() {
    using namespace nP; if (flags.f2 == 1) return TRUE; return FALSE; }

void VillagerMemory::setTownTune(long long *src) {
    using namespace nP;
    flags.f2 = 1;
    townTune = *src;
}

u32 VillagerMemory::getImpression() {
    using namespace nP; return impression; }

void VillagerMemory::setImpression(s32 v) {
    using namespace nP; impression = v; }

s32 VillagerMemory::pickUnusedTopic() {
    using namespace nP;
    u32 cnt = 0, idx = 0;
    s32 i;
    u32 n;
    if (usedTopicMask == -1) usedTopicMask = 0;
    i = 0;
    u32 m = usedTopicMask;
    for (; i < 32; i++) {
        if (((m >> i) & 1) == 0) cnt++;
    }
    n = Random_GlobalBelow(cnt);
    for (i = 0; i < 32; i++) {
        if (((usedTopicMask >> i) & 1) == 0) {
            if (n == 0) {
                idx = i;
                break;
            }
            n--;
        }
    }
    if (cnt == 1) usedTopicMask = 0;
    usedTopicMask = usedTopicMask | (1 << idx);
    return idx;
}

void VillagerMemory::setGiftGiven() {
    using namespace nP; flags.f4 = 1; }

BOOL VillagerMemory::isGiftGiven() {
    using namespace nP; if (flags.f4) return TRUE; return FALSE; }

void VillagerMemory::setTalkedToday() {
    using namespace nP; flags.f6 = 1; }

void VillagerMemory::clearTalkedToday() {
    using namespace nP; flags.f6 = 0; }

BOOL VillagerMemory::isTalkedToday() {
    using namespace nP; if (flags.f6) return TRUE; return FALSE; }

void VillagerMemory::setPartyGiftReceived() {
    using namespace nP; flags.f7 = 1; }

void VillagerMemory::clearPartyGiftReceived() {
    using namespace nP; flags.f7 = 0; }

BOOL VillagerMemory::isPartyGiftReceived() {
    using namespace nP; if (flags.f7) return TRUE; return FALSE; }

void VillagerMemory::setPartyGreeted() {
    using namespace nP; flags.f11 = 1; }

void VillagerMemory::clearPartyGreeted() {
    using namespace nP; flags.f11 = 0; }

BOOL VillagerMemory::isPartyGreeted() {
    using namespace nP; if (flags.f11) return TRUE; return FALSE; }

void VillagerMemory::setBirthdayLetterSent() {
    using namespace nP; flags.f12 = 1; }

void VillagerMemory::clearBirthdayLetterSent() {
    using namespace nP; flags.f12 = 0; }

BOOL VillagerMemory::isBirthdayLetterSent() {
    using namespace nP; if (flags.f12) return TRUE; return FALSE; }

void VillagerMemory::setNewYearLetterSent() {
    using namespace nP; flags.f13 = 1; }

void VillagerMemory::clearNewYearLetterSent() {
    using namespace nP; flags.f13 = 0; }

BOOL VillagerMemory::isNewYearLetterSent() {
    using namespace nP; if (flags.f13) return TRUE; return FALSE; }

void VillagerMemory::setFleaMarketVisited() {
    using namespace nP; flags.f14 = 1; }

void VillagerMemory::clearFleaMarketVisited() {
    using namespace nP; flags.f14 = 0; }

BOOL VillagerMemory::isFleaMarketVisited() {
    using namespace nP; if (flags.f14) return TRUE; return FALSE; }

void VillagerMemory::setFortuneGreeting() {
    using namespace nP; flags.f5 = 1; }

void VillagerMemory::clearFortuneGreeting() {
    using namespace nP; flags.f5 = 0; }

BOOL VillagerMemory::hasFortuneGreeting() {
    using namespace nP; if (flags.f5) return TRUE; return FALSE; }

VillagerData::VillagerData() {
    using namespace nP;
    __cxa_vec_ctor(this, 8, 0x68, (void *(*)(void *))VillagerMemory_Construct, (void *(*)(void *, s32))VillagerMemory_Destruct);
    _ZN7PatternC1Ev(pattern);
    _ZN6LetterC1Ev(letter);
    VillagerPlanBlock_Construct(planBlock);
    __cxa_vec_ctor(furniture, 10, 2, (void *(*)(void *))_ZN6ItemIdC1Ev, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    VillagerId_Construct(villagerId);
    __cxa_vec_ctor(receivedItems, 4, 2, (void *(*)(void *))_ZN6ItemIdC1Ev, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    TownId_Construct(movedFromTown);
    _ZN8HousePosC1Ev(&housePos);
    shirt = 0xfff1;
    TownId_Construct(unk_6f6);
}

VillagerData::~VillagerData() {
    using namespace nP;
    TownId_Destruct(unk_6f6);
    _ZN8HousePosD1Ev(&housePos);
    TownId_Destruct(movedFromTown);
    __cxa_vec_cleanup(receivedItems, 4, 2, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    VillagerId_Destruct(villagerId);
    __cxa_vec_cleanup(furniture, 10, 2, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    VillagerPlanBlock_Destruct(planBlock);
    _ZN6LetterD1Ev(letter);
    _ZN7PatternD1Ev(pattern);
    __cxa_vec_cleanup(this, 8, 0x68, (void *(*)(void *, s32))VillagerMemory_Destruct);
}

void VillagerData::clear() {
    using namespace nP;
    MI_CpuFill8(this, 0, 0x700);
    VillagerId_Clear(villagerId);
    shirt = 0x11a8;
    _ZN23VillagerDataProfileView16clearCatchphraseEv(this);
    for (s32 i = 0; i < 8; i++) VillagerMemory_Clear(&memories[i]);
    TownId_Clear(movedFromTown);
    for (s32 i = 0; i < 10; i++) furniture[i] = 0xfff1;
    HousePos_Clear(&housePos);
    VillagerPlanBlock_Clear(planBlock);
    moveInKind = 3;
    Letter_Clear(letter);
    Villager_ClearReceivedItems(this);
    TownId_Clear(unk_6f6);
}

void VillagerData::copyFrom(void *src) {
    using namespace nP; MI_CpuCopy8(src, this, 0x700); }

void VillagerData::setup(u32 id, u32 a, u32 b, u8 c) {
    using namespace nP;
    Unk_020805d0_Rec *rec = (Unk_020805d0_Rec *)VillagerInfo_Get(id);
    u32 t = 0;
    u32 tmp[7];
    _ZN15EncodedString10C1Ev(tmp);
    if (rec) t = rec->personality;
    _ZN10VillagerId3setEjjPv(villagerId, id, t, b);
    StrBuf_ClearAlt(tmp);
    if (Villager_GetDefaultCatchphraseEncoded(tmp, id)) {
        _ZN15EncodedString106copyToEPvi(tmp, catchphrase, 10);
    }
    if (rec) {
        u32 h = rec->shirt;
        u16 t2;
        if (h < 0x100) t2 = h + 0x11a8;
        else t2 = 0x11a8;
        shirt = t2;
        for (s32 i = 0; i < 10; i++) furniture[i] = rec->furniture[i];
        Villager_SetWallpaper(this, rec->wallpaper);
        Villager_SetCarpet(this, rec->carpet);
        VillagerPlanBlock_RollTrend(Villager_GetPlan(this), rec->trendTable, c);
        Villager_PickRoomLayout(this, _ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(this))), 0);
        roomLayout = rec->roomLayout;
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(this))) == 2) {
            roomLayout = roomLayout % 10;
        }
        Villager_PickShownFurniture(this);
        umbrella = rec->umbrella;
    }
    Villager_SetMoveInKind(this, a);
    _ZN15EncodedString10D1Ev(tmp);
}

void *VillagerData::getVillagerId() {
    using namespace nP; return villagerId; }

void *VillagerData::getPattern() {
    using namespace nP; return pattern; }

void *VillagerData::getLetter() {
    using namespace nP; return letter; }

s32 VillagerData::receiveLetterFrom(u32 id) {
    using namespace nP;
    VillagerMemory *e = 0;
    u32 buf[6];
    volatile u16 v[2];
    void *p = Letter_GetSenderPlayer(id);
    BOOL r = FALSE;
    if (p) {
        _ZN8PlayerIdC1ERKS_(buf, p);
        if (_ZN8PlayerId7isValidEv(buf)) {
            e = (VillagerMemory *)Villager_FindMemory(this, buf);
        }
        _ZN8PlayerIdC1Ev(buf);
    }
    if (e) {
        e->setLetterReceived();
        Letter_Copy(letter, id);
        TownId_Assign(unk_6f6, gSaveTownId);
        v[0] = _ZN10LetterView10getPresentEv(id);
        if (v[0] != 0xfff1) {
            Item_ToPlacedForm((u16 *)&v[1], (u16 *)&v[0], 1);
            if (Item_IsFurniture((u16 *)&v[1]) == 0) {
                BOOL f = FALSE;
                u32 x = v[1];
                u32 y = v[1];
                if (y >= 0x1100 && x <= 0x1143) f = TRUE;
                if (!f) {
                    if (x < 0x1144 || x > 0x1187) goto done;
                }
            }
            Villager_AddReceivedItem(this, (u16 *)&v[0]);
        }
    done:
        r = TRUE;
    }
    return r;
}

BOOL VillagerDataProfileView::hasLetterFrom(u16 *p) {
    using namespace nO;
    u16 o[12];
    void *r6 = Letter_GetSenderPlayer(letter);
    if (_ZN8PlayerId7isValidEv(p) && r6) {
        _ZN8PlayerIdC1ERKS_(o, r6);
        if (p[0] == o[0] && !memcmp(p + 1, o + 1, 8) && _ZN8PlayerId6equalsEPS_(p, o) && Villager_FindMemory(this, p) && _ZN14VillagerMemory16isLetterReceivedEv()) {
            _ZN8PlayerIdC1Ev(o);
            return TRUE;
        }
        _ZN8PlayerIdC1Ev(o);
    }
    return FALSE;
}

void VillagerDataProfileView::replyToLetter(void *p, void *q) {
    using namespace nO;
    void *r;
    u32 v1c;
    u32 x;
    u8 c;
    u16 res, ha, hb, hc, hd;
    u32 v30;
    u32 o[7];
    u32 str80[13];
    u32 t1[2], t3[2], t5[2], t2[2], t4[2], t6[2];
    r = _ZN12VillagerData13getVillagerIdEv(this);
    if (p == 0) return;
    if (_ZN12Unk_02097ff48testFlagEj(p, 1)) return;
    if (!_ZN10VillagerId7isValidEv(r)) return;
    void *r7 = _ZN10PlayerData11getPlayerIdEv(p);
    if (!_ZN8PlayerId7isValidEv(r7)) return;
    void *e = Villager_FindMemory(this, r7);
    s32 k = MailCheck_GradeLetter(q);
    _ZN11MsgString9BC1Ev(o);
    switch (k) {
    case 1: {
        s32 t = Random_GlobalBelow(3);
        Villager_SendLetter(((u8 *)"re_bad"), t, r7, r, 0);
        if (e) {
            _ZN14VillagerMemory13addFriendshipEi(e, -3);
        }
        break;
    }
    case 2: {
        res = 0xfff1;
        _ZN11MsgString33C1Ev(str80);
        v1c = 0;
        v30 = 0;
        _ZN8PlayerId13getNameStringEP9MsgString(r7, o);
        MailText_SetSlot(0, o);
        s32 i;
        for (i = 0; i < 6; i++) {
            x = TopicWord_PickRandom(&v30, i);
            _ZN9MsgString5clearEv(str80);
            c = v30;
            String_LoadResolveAltText(str80, &c, x);
            MailText_SetSlot(i + 2, str80);
        }
        if (_ZN10LetterView10getPresentEv(q) != 0xfff1) {
            s32 w = Letter_GetBodyLength(q);
            if (w <= 0x20) {
                if (Random_GlobalBelow(2) == 0) {
                    _ZN12ItemPickSpec3setEii(t1, (void *)2, 0);
                    t2[0] = t1[0];
                    t2[1] = t1[1];
                    ItemPick_One(&ha, t2, 0, 0, 1, 1, 0);
                    res = ha;
                    ItemPickSpec_Destruct(t2);
                    ItemPickSpec_Destruct(t1);
                } else {
                    ItemPick_FromRange(&hb, 0x1518, 5, 0, 0, 0, 1, 10, 0, 1);
                    res = hb;
                }
            } else if (w <= 0x2f) {
                _ZN12ItemPickSpec3setEii(t3, 0, 0);
                t4[0] = t3[0];
                t4[1] = t3[1];
                ItemPick_One(&hc, t4, 0, 0, 1, 1, 0);
                res = hc;
                ItemPickSpec_Destruct(t4);
                ItemPickSpec_Destruct(t3);
            } else {
                _ZN12ItemPickSpec3setEii(t5, sLetterReplyGiftLists[Random_GlobalBelow(3)], 0);
                t6[0] = t5[0];
                t6[1] = t5[1];
                ItemPick_One(&hd, t6, 0, 0, 1, 1, 0);
                res = hd;
                ItemPickSpec_Destruct(t6);
                ItemPickSpec_Destruct(t5);
            }
            if (res != 0xfff1) {
                v1c = 10;
            }
        }
        Villager_SendLetter4(((u8 *)"re_normal"), v1c, 10, r7, r, &res);
        if (e) {
            if (_ZN10LetterView10getPresentEv(q) != 0xfff1) {
                _ZN14VillagerMemory13addFriendshipEi(e, 5);
            } else {
                _ZN14VillagerMemory13addFriendshipEi(e, 3);
            }
        }
        _ZN11MsgString33D1Ev(str80);
        break;
    }
    }
    _ZN11MsgString9BD1Ev(o);
}

namespace nO {
extern "C" void Villager_SendBirthdayLetter(void *t, void *p, void *q) {
    u16 h[2];
    u32 buf[2];
    u32 o1[2];
    u32 o2[2];
    void *r10 = _ZN12VillagerData13getVillagerIdEv(t);
    if (!p) {
        p = PlayerData_GetCurrent();
    }
    if (_ZN10VillagerId7isValidEv(r10) && p) {
        void *r7 = _ZN10PlayerData11getPlayerIdEv(p);
        if (_ZN8PlayerId7isValidEv(r7) && !_ZN6TownId15getTownRelationEv(r7) && !_ZN12Unk_02097ff48testFlagEj(p, 1)) {
            u32 z = 0;
            buf[0] = z;
            buf[1] = z;
            u8 *r5 = (u8 *)_ZN12Unk_02097ff411getBirthdayEv(p);
            u32 ok = 0;
            if (q == 0) {
                Clock_GetDateTime(buf);
            } else {
                MI_CpuCopy8(q, buf, 8);
            }
            if (r5[1] == ((u8 *)buf)[4] && r5[0] == ((u8 *)buf)[3] && ((u8 *)buf)[2] >= 6) {
                ok = 1;
            }
            if (ok) {
                void *e = Villager_FindMemory(t, r7);
                if (e) {
                    if (_ZN14VillagerMemory13getFriendshipEv() >= 0x40) {
                        if (!_ZN14VillagerMemory20isBirthdayLetterSentEv(e)) {
                            h[0] = 0xfff1;
                            u16 *hp = 0;
                            _ZN12ItemPickSpec3setEii(o1, sBirthdayGiftLists[Random_GlobalBelow(3)], hp);
                            o2[0] = o1[0];
                            o2[1] = o1[1];
                            ItemPick_One(&h[1], o2, hp, hp, 1, 1, hp);
                            h[0] = h[1];
                            ItemPickSpec_Destruct(o2);
                            if (h[0] != 0xfff1) {
                                hp = h;
                            }
                            if (Villager_SendLetterWithPaper(((u8 *)"ev_birth"), (u8)Random_GlobalBelow(3), r7, r10, hp, -1)) {
                                _ZN14VillagerMemory21setBirthdayLetterSentEv(e);
                            }
                            ItemPickSpec_Destruct(o1);
                        }
                    }
                }
            }
        }
    }
}
}

void VillagerDataProfileView::sendBirthdayLetters(void *a) {
    using namespace nO;
    if ((u32)gSavePlayers != 0) {
        s32 i;
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_GetResident(gSavePlayers, i);
            if (p) {
                Villager_SendBirthdayLetter(this, p, a);
            }
        }
    }
}

namespace nO {
extern "C" void Villager_SendNewYearLetter(void *t, void *p, void *q) {
    u32 buf[2];
    u8 buf2[8];
    u32 str[12];
    void *r7 = _ZN12VillagerData13getVillagerIdEv(t);
    if (!p) {
        p = PlayerData_GetCurrent();
    }
    if (_ZN10VillagerId7isValidEv(r7) && p) {
        void *r6 = _ZN10PlayerData11getPlayerIdEv(p);
        if (_ZN8PlayerId7isValidEv(r6) && !_ZN6TownId15getTownRelationEv(r6) && !_ZN12Unk_02097ff48testFlagEj(p, 1)) {
            u32 ok = 0;
            buf[0] = ok;
            buf[1] = ok;
            if (q == 0) {
                Clock_GetDateTime(buf);
            } else {
                MI_CpuCopy8(q, buf, 8);
            }
            MI_CpuCopy8(buf, buf2, 8);
            if (Unk_0207ff5c_B(Event_GetState(0x13, buf2, 0))) {
                if (((u8 *)buf)[2] >= 6) {
                    ok = 1;
                }
            }
            if (ok) {
                void *e = Villager_FindMemory(t, r6);
                if (e) {
                    if (_ZN14VillagerMemory13getFriendshipEv() >= 0x40) {
                        if (!_ZN14VillagerMemory19isNewYearLetterSentEv(e)) {
                            _ZN11MsgString25C1Ev(str);
                            String_FormatNumber(str, ((u8 *)buf)[5] + 0x7d0, 4, 0, 0, 0);
                            MailText_SetSlot(2, str);
                            if (Villager_SendLetterWithPaper(((u8 *)"ev_newyear"), (u8)Random_GlobalBelow(3), r6, r7, 0, 2)) {
                                _ZN14VillagerMemory20setNewYearLetterSentEv(e);
                            }
                            _ZN11MsgString25D1Ev(str);
                        }
                    }
                }
            }
        }
    }
}
}

void VillagerDataProfileView::sendNewYearLetters(void *a) {
    using namespace nO;
    if ((u32)gSavePlayers != 0) {
        s32 i;
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_GetResident(gSavePlayers, i);
            if (p) {
                if (_ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(p))) {
                    Villager_SendNewYearLetter(this, p, a);
                }
            }
        }
    }
}

namespace nO {
extern "C" void Villager_SendByeLetter(void *t, void *p) {
    u32 obj[8];
    void *r6 = _ZN12VillagerData13getVillagerIdEv(t);
    if (_ZN10VillagerId7isValidEv(r6)) {
        if (p) {
            void *q = _ZN10PlayerData11getPlayerIdEv(p);
            if (_ZN8PlayerId7isValidEv(q)) {
                if (!_ZN6TownId15getTownRelationEv(q)) {
                    if (Villager_FindMemory(t, q)) {
                        _ZN11MsgString9CC2Ev(obj);
                        u32 g = (u32)gSaveTownId;
                        if (g != 0) {
                            if (TownId_IsValid((void *)g)) {
                                TownId_GetNameString((void *)g, obj);
                                MailText_SetSlot(2, obj);
                            }
                        }
                        Villager_SendLetterWithPaper(((u8 *)"byebye"), (u8)Random_GlobalBelow(5), q, r6, 0, -1);
                        _ZN11MsgString9CD1Ev(obj);
                    }
                }
            }
        }
    }
}
}

void VillagerDataProfileView::updateMemoriesFromPlayers() {
    using namespace nO;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(this))) {
        if ((u32)gSavePlayers != 0) {
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = PlayerData_GetResident(gSavePlayers, i);
                if (p) {
                    if (_ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(p))) {
                        Villager_SendByeLetter(this, p);
                    }
                }
            }
        }
    }
}

s32 VillagerDataProfileView::findLetterSenderMemory() {
    using namespace nO;
    u32 obj[7];
    void *p = Letter_GetSenderPlayer(letter);
    if (p) {
        _ZN8PlayerIdC1ERKS_(obj, p);
        if (_ZN8PlayerId7isValidEv(obj)) {
            s32 r = Villager_FindMemoryIndex(this, obj);
            if (Villager_GetMemory(this, r)) {
                if (_ZN14VillagerMemory16isLetterReceivedEv()) {
                    _ZN8PlayerIdC1Ev(obj);
                    return r;
                }
            }
        }
        _ZN8PlayerIdC1Ev(obj);
    }
    return -1;
}

BOOL VillagerDataProfileView::hasLetterSenderMemory() {
    using namespace nO;
    s32 t = findLetterSenderMemory();
    BOOL r = FALSE;
    s32 m = -1;
    if (t != m) {
        r = TRUE;
    }
    return r;
}

u16 *VillagerDataProfileView::getShirt() {
    using namespace nO;
    return &shirt;
}

void VillagerDataProfileView::setShirt(u16 *p) {
    using namespace nO;
    shirt = *p;
}

namespace nO {
extern "C" void Villager_GetDefaultShirt(u16 *out, void *idx) {
    *out = 0x11a8;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(idx))) {
        u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(idx)));
        if (p) {
            u32 v = *(u16 *)(p + 0x2c);
            *out = v < 0x100 ? (u16)(0x11a8 + v) : 0x11a8;
        }
    }
}
}

namespace nO {
extern "C" void Villager_GetUmbrella(u16 *out, VillagerDataProfileView *o) {
    u16 r = 0x1380;
    *out = r;
    u32 v = o->umbrella;
    if (v < 0x20) {
        if (v < 0x20) {
            r = v + 0x1380;
        }
        *out = r;
    }
}
}

void VillagerDataProfileView::setUmbrella(u16 *p) {
    using namespace nO;
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1380 && v <= 0x139f) {
        r = TRUE;
    }
    if (r) {
        s32 i;
        if (v >= 0x1380 && v <= 0x139f) {
            i = v - 0x1380;
        } else {
            i = -1;
        }
        umbrella = i;
    }
}

namespace nO {
extern "C" void Villager_GetDefaultUmbrella(u16 *out, void *idx) {
    *out = 0x1380;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(idx))) {
        u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(idx)));
        if (p) {
            u32 v = p[0x2e];
            *out = v < 0x20 ? (u16)(0x1380 + v) : 0x1380;
        }
    }
}
}

s32 VillagerDataProfileView::findFreeSlot(s32 n) {
    using namespace nO;
    VillagerDataProfileView *p = this;
    s32 i;
    for (i = 0; i < n; i++) {
        if (!_ZN10VillagerId7isValidEv(p->letter + (0x6c0 - 0x568))) {
            return i;
        }
        p = (VillagerDataProfileView *)((u8 *)p + 0x700);
    }
    return -1;
}

void *VillagerDataProfileView::getInfo28() {
    using namespace nO;
    u8 *r = 0;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(this))) {
        u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(this)));
        if (p) {
            r = p + 0x28;
        }
    }
    return r;
}

void VillagerDataProfileView::clearCatchphrase() {
    using namespace nO;
    MI_CpuFill8(catchphrase, 0x85, 10);
}

void VillagerDataProfileView::getCatchphrase(void *dst, void *flag) {
    using namespace nO;
    u32 buf[7];
    u8 b;
    _ZN15EncodedString10C1Ev(buf);
    _ZN9MsgString5clearEv(dst);
    if (flag && Villager_HasFlea(this)) {
        b = Random_GlobalBelow(0x10);
        String_Load(dst, &b, ((u8 *)"st_itchy"));
    } else {
        getCatchphraseEncoded(buf);
        _ZN9MsgString11fromEncodedEP13EncodedStringii(dst, buf, 0, 0);
    }
    _ZN15EncodedString10D1Ev(buf);
}

void VillagerDataProfileView::getCatchphraseEncoded(void *p) {
    using namespace nO;
    StrBuf_ClearAlt(p);
    EncodedString_SetRaw(p, catchphrase, 10);
}

namespace nN {
extern "C" void Villager_SetCatchphraseFromMsg(u32 a, u32 b) {
    Unk_0207fb4c_Str s;
    _ZN15EncodedString10C1Ev(&s);
    StrBuf_ClearAlt(&s);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&s, b);
    Villager_SetCatchphraseEncoded(a, &s);
    _ZN15EncodedString10D1Ev(&s);
}
}

namespace nN {
extern "C" void Villager_SetCatchphraseEncoded(u32 a, void *b) {
    _ZN15EncodedString106copyToEPvi(b, (void *)(a + 0x6de), 10);
}
}

namespace nN {
extern "C" void Villager_SetCatchphrase(u32 a, void *b, s32 c) {
    MI_CpuFill8((void *)(a + 0x6de), 0, 10);
    if (c > 10) {
        c = 10;
    }
    MI_CpuCopy8(b, (void *)(a + 0x6de), c);
}
}

namespace nN {
extern "C" u8 *Villager_GetBirthday(u32 a) {
    u8 *r = NULL;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        r = p + 0x26;
    }
    return r;
}
}

namespace nN {
extern "C" s32 Villager_GetUpcomingBirthdayDay(u32 a, s32 b, u8 *c) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) != 0 && Villager_GetIndex(a) != -1) {
        u32 id = Villager_GetIndex(a);
        u32 v[2];
        u32 w[2];
        Unk_0207fa50_Rec recs[7];
        s32 i;
        s32 j;
        s32 n;
        v[0] = 0;
        v[1] = 0;
        if (c == NULL) {
            Clock_GetDateTime(v);
        } else {
            MI_CpuCopy8(c, v, 8);
        }
        for (i = 0; i <= b; i++) {
            Unk_0207fa50_Rec *e = recs;
            MI_CpuCopy8(v, w, 8);
            n = EventSchedule_CollectDayAll(recs, w);
            for (j = 0; j < n; e++, j++) {
                if (e->id == id) {
                    return ((u8 *)v)[5];
                }
            }
            DateTime_AddDays(v, 1);
        }
    }
    return -1;
}
}

namespace nN {
extern "C" BOOL Villager_CanAttendParty(u32 a) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) != 0) {
        u32 r7 = SaveVillagers_GetUnk3830Index(Item_GetSaveData() + 0x8a3c);
        void *r6 = PlayerData_GetCurrent();
        BOOL r = FALSE;
        if (r7 != Villager_GetIndex(a) && Villager_GetResidentStatus(a) == 3 && r6 != NULL) {
            u32 q = _ZN10PlayerData10getErrandsEv(r6);
            u32 u = _ZN12VillagerData13getVillagerIdEv(a);
            if (HouseVisitInvite_IsFrom((void *)(q + 0x88), u) == 0) {
                r = TRUE;
            }
        }
        return r;
    }
    return FALSE;
}
}

namespace nN {
extern "C" u32 Villager_GetStarSign(u32 a) {
    u8 *p = Villager_GetBirthday(a);
    u32 r = 0xc;
    if (p != NULL) {
        r = Date_GetStarSignOf(p);
    }
    return r;
}
}

namespace nN {
extern "C" u32 Villager_GetAnimalKind(u32 a) {
    u32 r = 0x21;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        r = p[0x4c];
    }
    return r;
}
}

namespace nN {
extern "C" u32 Villager_GetInfoByte2(u32 a) {
    u32 i = Villager_GetAnimalKind(a);
    if (i >= 0x21) {
        i = 0;
    }
    return sAnimalKindByte2[i];
}
}

namespace nN {
extern "C" u8 *Villager_GetFashionTaste(u32 a) {
    u8 *r = NULL;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        r = p;
        r += 0x29;
    }
    return r;
}
}

namespace nN {
extern "C" u8 *Villager_GetInfo(u32 a) {
    u8 *r = NULL;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        r = p;
    }
    return r;
}
}

namespace nN {
extern "C" u8 *Villager_GetFurnitureTaste(Unk_0207f264_Entry *t, u32 i) {
    u8 *r = NULL;
    if (i < 6) {
        u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv((u32)t)));
        if (p != NULL) {
            r = p + 0x1a + i * 2;
        }
    }
    return r;
}
}

namespace nN {
extern "C" u8 Villager_GetFurnitureTasteScore(u32 a, u32 b) {
    u8 *p = Villager_GetFurnitureTaste((Unk_0207f264_Entry *)a, Villager_GetFurnitureTasteIndex());
    if (p != NULL) {
        return Furniture_ScoreAttribute(b, p[0], p[1]);
    }
    return 0;
}
}

namespace nN {
extern "C" u8 *Villager_GetInfo3a(u32 a) {
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        return p + 0x3a;
    }
    return NULL;
}
}

namespace nN {
extern "C" BOOL Villager_IsValidMemoryIndex(Unk_0207f264_Entry *t, u32 i) {
    if (i < 8) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nN {
extern "C" s32 Villager_FindMemoryIndex(Unk_0207f264_Entry *t, void *id) {
    s32 i = 0;
    for (; i < 8; i++) {
        if (VillagerMemory_MatchesPlayer(&t[i], id) != 0) {
            return i;
        }
    }
    return -1;
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *Villager_GetMemory(Unk_0207f264_Entry *t, u32 i) {
    Unk_0207f264_Entry *e = NULL;
    if (Villager_IsValidMemoryIndex(t, i)) {
        e = &t[i];
    }
    return e;
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *Villager_FindMemory(u32 a, void *b) {
    return Villager_GetMemory((Unk_0207f264_Entry *)a, Villager_FindMemoryIndex((Unk_0207f264_Entry *)a, b));
}
}

namespace nN {
extern "C" s32 Villager_FindFreeMemoryIndex(Unk_0207f264_Entry *t) {
    static Unk_0207f804_Str s;
    s.func_02094294();
    return Villager_FindMemoryIndex(t, &s);
}
}

namespace nN {
extern "C" s32 Villager_FindMemoryIndexById(Unk_0207f264_Entry *t, void *id) {
    s32 i = 0;
    for (; i < 8; i++) {
        if (_ZN8PlayerId6equalsEPS_(VillagerMemory_GetPlayerId(&t[i]), id) != 0) {
            return i;
        }
    }
    return -1;
}
}

namespace nN {
extern "C" s32 Villager_GetMaxFriendship(Unk_0207f264_Entry *t) {
    s32 best = -0x80;
    s32 i = 0;
    do {
        if (VillagerMemory_IsUsed(t) != 0) {
            s32 v = _ZN14VillagerMemory13getFriendshipEv(t);
            if (v > best) {
                best = v;
            }
        }
        t++;
        i++;
    } while (i < 8);
    return best;
}
}

namespace nN {
extern "C" s32 Villager_GetMinutesSinceLastTalk(Unk_0207f264_Entry *t, void *o) {
    s32 best = 0x7fffffff;
    s32 i = 0;
    for (; i < 8; t++, i++) {
        if (VillagerMemory_IsUsed(t) != 0) {
            void *p = VillagerMemory_GetTalkDate(t);
            s32 r = DateTime_Compare(o, p, 0x3f);
            if (r == 1) {
                s32 d = DateTime_DiffMinutes(p, o);
                if (d < best) {
                    best = d;
                }
            } else if (r == -1) {
                s32 d = DateTime_DiffMinutes(o, p);
                if (d < best) {
                    best = d;
                }
            } else {
                return 0;
            }
        }
    }
    return best;
}
}

namespace nN {
extern "C" s32 Villager_PickMemoryToReplace(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *)) {
    s32 res = -1;
    if (TownId_IsValid(gSaveTownId) != 0) {
        Unk_0207f264_Entry *best = NULL;
        s32 i = 0;
        do {
            if (VillagerMemory_IsUsed(t) != 0) {
                if (cb((void *)VillagerMemory_GetPlayerId(t), gSaveTownId, gSavePlayers) != 0) {
                    if (best != NULL) {
                        if (_ZN14VillagerMemory16isLetterReceivedEv(best) == _ZN14VillagerMemory16isLetterReceivedEv(t)) {
                            if (_ZN14VillagerMemory13getFriendshipEv(best) > _ZN14VillagerMemory13getFriendshipEv(t)) {
                                best = t;
                                res = i;
                            } else if (_ZN14VillagerMemory13getFriendshipEv(best) == _ZN14VillagerMemory13getFriendshipEv(t)) {
                                void *pa = VillagerMemory_GetTalkDate(best);
                                void *pb = VillagerMemory_GetTalkDate(t);
                                if (DateTime_Compare(pa, pb, 0x3f) == 1) {
                                    best = t;
                                    res = i;
                                }
                            }
                        } else if (_ZN14VillagerMemory16isLetterReceivedEv(t) == 0) {
                            best = t;
                            res = i;
                        }
                    } else {
                        best = t;
                        res = i;
                    }
                }
            }
            t++;
            i++;
        } while (i < 8);
    }
    return res;
}
}

namespace nN {
extern "C" s32 VillagerMemory_IsFormerResident(u32 a, u16 *p, u32 c) {
    BOOL r = FALSE;
    u16 *q = PlayerId_GetTownId();
    if (p[0] == q[0] && memcmp(p + 1, q + 1, 8) == 0) {
        if (PlayerDataArray_FindById(c, a) == ~r) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nN {
extern "C" s32 Villager_PickFormerResidentMemoryToReplace(Unk_0207f264_Entry *t) {
    return Villager_PickMemoryToReplace(t, (s32 (*)(void *, void *, void *))VillagerMemory_IsFormerResident);
}
}

namespace nN {
extern "C" s32 VillagerMemory_IsOtherTown(void *a, u16 *p, void *c) {
    u16 *q = PlayerId_GetTownId();
    if (p[0] != q[0] || memcmp(p + 1, q + 1, 8) != 0) {
        return 1;
    }
    return 0;
}
}

namespace nN {
extern "C" s32 Villager_PickOtherTownMemoryToReplace(Unk_0207f264_Entry *t) {
    return Villager_PickMemoryToReplace(t, (s32 (*)(void *, void *, void *))VillagerMemory_IsOtherTown);
}
}

namespace nN {
extern "C" s32 Villager_PickMemorySlotForNew(Unk_0207f264_Entry *t) {
    s32 r = Villager_FindFreeMemoryIndex(t);
    if (r == -1) {
        r = Villager_PickFormerResidentMemoryToReplace(t);
    }
    if (r == -1) {
        r = Villager_PickOtherTownMemoryToReplace(t);
    }
    return r;
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *Villager_GetMemorySlotForNew(Unk_0207f264_Entry *t) {
    return Villager_GetMemory(t, Villager_PickMemorySlotForNew(t));
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *Villager_FindOrCreateMemory(Unk_0207f264_Entry *t, void *b) {
    Unk_0207f264_Entry *e = Villager_FindMemory((u32)t, b);
    if (e == NULL) {
        e = Villager_GetMemorySlotForNew(t);
        if (e != NULL) {
            VillagerMemory_InitForPlayer(e, b, 0, 0);
        }
    }
    return e;
}
}

namespace nN {
extern "C" s32 Villager_CollectOtherMemories(Unk_0207f264_Entry *t, Unk_0207f264_Entry **out, void *id, s32 mode) {
    s32 n = 0;
    if ((u32)gSaveTownId != 0 && _ZN8PlayerId7isValidEv(id) != 0) {
        s32 i = 0;
        do {
            Unk_0207f264_Entry *e = &t[i];
            if (VillagerMemory_IsUsed(e) != 0 && VillagerMemory_MatchesPlayer(e, id) == 0) {
                switch (mode) {
                case 0: {
                    u16 *p = VillagerMemory_GetTownId(e);
                    if (p[0] == gSaveTownId[0] && memcmp(p + 1, (void *)((u8 *)gSaveTownId + 2), 8) == 0) {
                        out[n] = e;
                        n++;
                    }
                    break;
                }
                case 1: {
                    u16 *p = VillagerMemory_GetTownId(e);
                    if (p[0] != gSaveTownId[0] || memcmp(p + 1, (void *)((u8 *)gSaveTownId + 2), 8) != 0) {
                        out[n] = e;
                        n++;
                    }
                    break;
                }
                default:
                    out[n] = e;
                    n++;
                    break;
                }
            }
            i++;
        } while (i < 8);
    }
    return n;
}
}

namespace nN {
extern "C" s32 Villager_CountMemories(Unk_0207f264_Entry *t) {
    s32 n = 0;
    s32 i = 0;
    do {
        if (VillagerMemory_IsUsed(t) != 0) {
            n++;
        }
        t++;
        i++;
    } while (i < 8);
    return n;
}
}

namespace nN {
extern "C" BOOL Villager_IsMoreAttachedThan(u32 a, u32 b, void *c) {
    s32 x, y;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) == 0) {
        return FALSE;
    }
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(b)) == 0) {
        return TRUE;
    }
    x = Villager_CountMemories((Unk_0207f264_Entry *)a);
    y = Villager_CountMemories((Unk_0207f264_Entry *)b);
    if (x > y) {
        return TRUE;
    }
    if (x < y) {
        return FALSE;
    }
    x = _ZN23VillagerDataProfileView21hasLetterSenderMemoryEv((Unk_0207f264_Entry *)a);
    y = _ZN23VillagerDataProfileView21hasLetterSenderMemoryEv((Unk_0207f264_Entry *)b);
    if (x != 0) {
        if (y == 0) {
            return TRUE;
        }
    } else if (y != 0) {
        return FALSE;
    }
    x = Villager_GetMaxFriendship((Unk_0207f264_Entry *)a);
    y = Villager_GetMaxFriendship((Unk_0207f264_Entry *)b);
    if (x > y) {
        return TRUE;
    }
    if (x < y) {
        return FALSE;
    }
    x = Villager_GetMinutesSinceLastTalk((Unk_0207f264_Entry *)a, c);
    y = Villager_GetMinutesSinceLastTalk((Unk_0207f264_Entry *)b, c);
    if (x < y) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nN {
extern "C" void Villager_GetNicknameFor(u32 a, void *b, void *c) {
    Unk_0207f264_Entry *e = Villager_FindMemory(a, c);
    if (e == NULL || _ZN8PlayerId7isValidEv(c) == 0 || _ZN14VillagerMemory13getFriendshipEv(e) <= -10) {
        _ZN8PlayerId13getNameStringEP9MsgString(c, b);
    } else {
        _ZN14VillagerMemory11getNicknameEPv(e, b);
    }
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *Villager_SetNicknameFromMsgFor(u32 a, void *b, void *c) {
    Unk_0207f264_Entry *e = Villager_FindMemory(a, c);
    if (e != NULL) {
        _ZN14VillagerMemory18setNicknameFromMsgEPv(e, b);
    }
    return e;
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *Villager_SetNicknameFor(u32 a, u32 b, u32 c, void *d) {
    Unk_0207f264_Entry *e = Villager_FindMemory(a, d);
    if (e != NULL) {
        _ZN14VillagerMemory11setNicknameEPvi(e, b, c);
    }
    return e;
}
}

namespace nN {
extern "C" void Villagers_ShareNickname(u32 a, u32 b, void *c) {
    Unk_0207f264_Entry *e1, *e2;
    void *t;
    if (c == NULL) {
        c = PlayerData_GetCurrent();
    }
    if (c != NULL) {
        t = _ZN10PlayerData11getPlayerIdEv(c);
        if (_ZN8PlayerId7isValidEv(t) != 0 && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) != 0 && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(b)) != 0) {
            Unk_0207f264_Entry *r6 = NULL, *r7 = NULL;
            e1 = Villager_FindMemory(b, t);
            e2 = Villager_FindMemory(a, t);
            MsgString9B s1;
            MsgString9B s2;
            if (e1 != NULL && e2 != NULL) {
                _ZN8PlayerId13getNameStringEP9MsgString(t, &s2);
                _ZN14VillagerMemory11getNicknameEPv(e1, &s1);
                if (_ZN9MsgString6equalsEPS_(&s2, &s1) == 0) {
                    r7 = e1;
                    r6 = e2;
                } else {
                    _ZN9MsgString5clearEv(&s1);
                    _ZN14VillagerMemory11getNicknameEPv(e2, &s1);
                    if (_ZN9MsgString6equalsEPS_(&s2, &s1) == 0) {
                        r7 = e2;
                        r6 = e1;
                    }
                }
                if (r7 != NULL && r6 != NULL) {
                    _ZN9MsgString5clearEv(&s1);
                    _ZN14VillagerMemory11getNicknameEPv(r7, &s1);
                    _ZN14VillagerMemory18setNicknameFromMsgEPv(r6, &s1);
                }
            }
        }
    }
}
}

void VillagerDataItemView::getComplimentFor(void *a, void *c) {
    using namespace nM;
    void *o = Villager_FindMemory(this, c);
    if (o) {
        if (_ZN8PlayerId7isValidEv(c)) {
            if (_ZN14VillagerMemory13hasComplimentEv(o)) {
                _ZN14VillagerMemory13getComplimentEPv(o, a);
            }
        }
    }
}

void VillagerDataItemView::setComplimentFor(void *a, s32 n, void *c) {
    using namespace nM;
    void *o = Villager_FindMemory(this, c);
    if (o) {
        _ZN14VillagerMemory13setComplimentEPvi(o, a, n);
    }
}

BOOL VillagerDataItemView::getGreetingFor(void *a, void *c) {
    using namespace nM;
    void *o = Villager_FindMemory(this, c);
    BOOL r = FALSE;
    if (o) {
        if (_ZN8PlayerId7isValidEv(c)) {
            if (_ZN14VillagerMemory11hasGreetingEv(o)) {
                _ZN14VillagerMemory11getGreetingEPv(o, a);
                r = TRUE;
            }
        }
    }
    return r;
}

void VillagerDataItemView::setGreetingFor(void *a, s32 n, void *c) {
    using namespace nM;
    void *o = Villager_FindMemory(this, c);
    if (o) {
        _ZN14VillagerMemory11setGreetingEPvi(o, a, n);
    }
}

u8 *VillagerDataItemView::getMovedFromTownId() {
    using namespace nM;
    return movedFromTown;
}

s32 VillagerDataItemView::clearHousePos() {
    using namespace nM;
    return HousePos_Clear(housePos);
}

s32 VillagerDataItemView::hasHousePos() {
    using namespace nM;
    return HousePos_IsValid(housePos);
}

u8 *VillagerDataItemView::getHousePos() {
    using namespace nM;
    return housePos;
}

void VillagerDataItemView::setHousePos(u8 *p) {
    using namespace nM;
    housePos[0] = p[0];
    housePos[1] = p[1];
}

void VillagerDataItemView::placeHouseMarker() {
    using namespace nM;
    void *r4 = TownBlockMap_Get();
    if (r4 != 0) {
        if (hasHousePos() != 0) {
            u8 *r2 = getHousePos();
            u16 v = 0x500a;
            BlockMap_RemoveStructure(r4, r2[0], r2[1], &v);
        }
    }
}

BOOL VillagerDataItemView::getRoomLayout(s32 *o1, s32 *o2) {
    using namespace nM;
    void *t;
    BOOL r = FALSE;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(this)) != 0) {
        if (VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(this))) != 0) {
            t = VillagerPlanBlock_GetPlan(Villager_GetPlan(this));
            if (_ZN12VillagerPlan8getStateEv(t) == 2 ||
                ((_ZN12VillagerPlan8getStateEv(t) == 8 || _ZN12VillagerPlan8getStateEv(t) == 9 || _ZN12VillagerPlan8getStateEv(t) == 10 ||
                  _ZN12VillagerPlan8getStateEv(t) == 11) &&
                 _ZN12VillagerPlan13func_0209b2e4Ev(t) != 0)) {
                *o1 = 3;
                *o2 = roomLayout % 10;
            } else {
                *o1 = 2;
                *o2 = roomLayout;
            }
            r = TRUE;
        }
    }
    return r;
}

s32 VillagerDataItemView::getInfo28Item() {
    using namespace nM;
    Unk_0207f04c_Bits *b = (Unk_0207f04c_Bits *)_ZN23VillagerDataProfileView9getInfo28Ev(this);
    s32 r = 0;
    if (b) {
        r = (s32)b->v >> 2;
        if (r < 0 || r >= 5) {
            r = 0;
        }
    }
    return 0x1010 + r;
}

BOOL VillagerDataItemView::isValidFurnitureIndex(s32 idx) {
    using namespace nM;
    if ((u32)idx < 10) {
        return TRUE;
    }
    return FALSE;
}

s32 VillagerDataItemView::getSlotFromLayoutCode(u16 *pp) {
    using namespace nM;
    volatile u16 *p = pp;
    s32 idx = -1;
    BOOL f = FALSE;
    u32 v = *p;
    if (v >= 0xf000 && v <= 0xf02f) {
        f = TRUE;
    }
    if (f) {
        if (v >= 0xf000 && v <= 0xf02f) {
            idx = (*p - 0xf000) >> 2;
        } else {
            idx = -1;
        }
        if (idx >= 3) {
            idx -= 2;
        }
    }
    return idx;
}

Unk_0207efac_Item VillagerDataItemView::getFurnitureAt(s32 idx) {
    using namespace nM;
    Unk_0207efac_Item out;
    out.v = 0xfff1;
    if (isValidFurnitureIndex(idx)) {
        out.v = furniture[idx];
        if (out.v != 0xfff1) {
            u16 tmp;
            Item_ToPlacedForm(&tmp, &out.v, 1);
            out.v = tmp;
        }
    }
    return out;
}

u16 *VillagerDataItemView::getFurniture() {
    using namespace nM;
    return furniture;
}

BOOL VillagerDataItemView::getSlotRange(s32 *lo, s32 *hi, s32 mode, s32 type, u8 flag) {
    using namespace nM;
    BOOL r = FALSE;
    switch (mode) {
    case 0:
        *lo = 5;
        *hi = 10;
        r = TRUE;
        break;
    case 1:
        *lo = 1;
        *hi = 5;
        if (type == 2 || (type == 8 && flag)) {
            *lo = 3;
        }
        r = TRUE;
        break;
    case 2:
        *lo = 0;
        if (type == 2 || (type == 8 && flag)) {
            *hi = 3;
        } else {
            *hi = 1;
        }
        r = TRUE;
        break;
    }
    return r;
}

s32 VillagerDataItemView::pickEmptySlot(s32 lo, s32 hi) {
    using namespace nM;
    s32 res;
    if (isValidFurnitureIndex(lo)) {
        u16 *p = furniture + lo;
        u16 mask = 0;
        s32 cnt = 0;
        for (; lo < hi; p++, lo++) {
            if (isValidFurnitureIndex(lo) && *p == 0xfff1) {
                mask |= 1 << lo;
                cnt++;
            }
        }
        res = Random_PickSetBit(mask, cnt, 10);
    } else {
        res = -1;
    }
    return res;
}

s32 VillagerDataItemView::findCheapestSlot(s32 lo, s32 hi) {
    using namespace nM;
    s32 res;
    if (isValidFurnitureIndex(lo)) {
        u16 *p = furniture + lo;
        s32 min = 99999;
        volatile s32 best = -1;
        for (; lo < hi; p++, lo++) {
            if (isValidFurnitureIndex(lo) && *p != 0xfff1) {
                s32 v = Item_GetPrice(p);
                if (v <= min) {
                    best = lo;
                    min = v;
                }
            }
        }
        res = best;
    } else {
        res = -1;
    }
    return res;
}

BOOL VillagerDataItemView::isInsectItem(u16 *p) {
    using namespace nM;
    BOOL r = FALSE;
    if (*p >= 0x12b0 && *p <= 0x12e7) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerDataItemView::isFishItem(u16 *p) {
    using namespace nM;
    BOOL r = FALSE;
    if (*p >= 0x12e8 && *p <= 0x131f) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerDataItemView::isFossilItem(u16 *p) {
    using namespace nM;
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerDataItemView::isShirtItem(u16 *p) {
    using namespace nM;
    BOOL r = FALSE;
    if (*p >= 0x11a8 && *p <= 0x12a7) {
        r = TRUE;
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerDataItemView::isTasteFurniture(u16 *item) {
    using namespace nM;
    BOOL r = FALSE;
    BOOL ok = FALSE;
    if (Item_IsFurniture(item)) {
        if (!Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
            ok = TRUE;
        }
    }
    if (ok) {
        if (Villager_GetFurnitureTasteScore(this, item) > 0) {
            r = TRUE;
        }
    }
    return r;
}

Unk_0207ed1c_Fn VillagerDataItemView::getTrendFilter(s32 type) {
    using namespace nM;
    u8 k = 3;
    u32 idx = PlanState_GetGroupIndex(&k, type);
    if (k == 0 && idx < 5) {
        return sVillagerTrendFilters[idx];
    }
    return *(Unk_0207ed1c_Fn *)__ptmf_null;
}

BOOL VillagerDataItemView::matchesTrend(u16 *p, s32 type) {
    using namespace nM;
    Unk_0207ed1c_Fn f = getTrendFilter(type);
    BOOL r = TRUE;
    if (f) {
        if (!(this->*f)(p)) {
            r = FALSE;
        }
    }
    return r;
}

s32 VillagerDataItemView::pickNonTrendSlot(s32 type, s32 lo, s32 hi) {
    using namespace nM;
    s32 res;
    if (isValidFurnitureIndex(lo)) {
        u16 *p = furniture + lo;
        u16 mask = 0;
        s32 cnt = 0;
        for (; lo < hi; p++, lo++) {
            if (isValidFurnitureIndex(lo) && *p != 0xfff1 && !matchesTrend(p, type)) {
                mask |= 1 << lo;
                cnt++;
            }
        }
        res = Random_PickSetBit(mask, cnt, 10);
    } else {
        res = -1;
    }
    return res;
}

namespace nM {
extern "C" BOOL Villager_DiscardItem(u16 *p) {
    if (RecycleBin_Add(*p) != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nM {
extern "C" BOOL Villager_DiscardItemMaybe(u16 *p) {
    if (Random_GlobalBelow(2) == 0) {
        if (RecycleBin_Add(*p) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}
}

s32 VillagerDataItemView::freeSlotInRange(s32 mode, s32 type, u8 a, u8 c) {
    using namespace nM;
    s32 lo = 0, hi = 0;
    s32 r;
    if (getSlotRange(&lo, &hi, mode, type, a)) {
        r = pickEmptySlot(lo, hi);
        if (r == -1) {
            r = pickNonTrendSlot(type, lo, hi);
            if (r == -1 && c) {
                r = findCheapestSlot(lo, hi);
            }
            if (r != -1) {
                Villager_DiscardItemMaybe(furniture + r);
            }
        }
        if (r != -1) {
            furniture[r] = 0xfff1;
        }
        return r;
    } else {
        return -1;
    }
}

s32 VillagerDataItemView::getFossilPartIndex(u16 *item) {
    using namespace nM;
    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
        s32 want = Item_GetFossilGroup(item);
        if ((u32)want < 0x18) {
            u16 tmp = 0xfff1;
            u32 i;
            for (i = 0; i < 0x34; i++) {
                tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
                if (want == Item_GetFossilGroup(&tmp)) {
                    s32 r;
                    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
                        r = (*item - 0x450c) >> 2;
                    } else {
                        r = -1;
                    }
                    return r - i;
                }
            }
        }
    }
    return -1;
}

BOOL VillagerDataItemView::tryPlaceFossil(u16 *item, s32 mode, s32 type, u8 a, u8 b) {
    using namespace nM;
    s32 lo, hi;
    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
        if (mode == 2) {
            lo = 0;
            hi = 0;
            if (getSlotRange(&lo, &hi, mode, type, a)) {
                s32 range = hi - lo;
                s32 idx = getFossilPartIndex(item);
                s32 slot = 0;
                if (idx >= 0) {
                    slot = lo + idx % range;
                }
                if (isValidFurnitureIndex(slot)) {
                    u16 *p = furniture + slot;
                    if (*p == 0xfff1) {
                        *p = *item;
                        return TRUE;
                    }
                    BOOL occupied = matchesTrend(p, type);
                    if (b) {
                        void *v10;
                        void *v14;
                        Villager_GetPlan(this);
                        v10 = VillagerPlanBlock_GetErrand();
                        v14 = PlanErrand_GetRecord();
                        Item_GetPrice(item);
                        Item_GetPrice(p);
                        if (type == 2) {
                            s32 lim = 0x18;
                            if (_ZN12ErrandRecord8isActiveEv(v14) != 0 && _ZN12ErrandRecord7getKindEv(v14) == 2 &&
                                PlanErrand_GetStep(v10) >= 2 && PlanErrand_GetFossilGroup(v10) < 0x18) {
                                lim = PlanErrand_GetFossilGroup(v10);
                            }
                            if (lim < 0x18) {
                                if (lim == Item_GetFossilGroup(item)) {
                                    Villager_DiscardItemMaybe(p);
                                    *p = *item;
                                    return TRUE;
                                } else if (occupied) {
                                    if (lim == Item_GetFossilGroup(p)) {
                                        Villager_DiscardItemMaybe(item);
                                        goto fail;
                                    } else {
                                        Villager_DiscardItemMaybe(p);
                                        *p = *item;
                                        return TRUE;
                                    }
                                } else {
                                    Villager_DiscardItemMaybe(p);
                                    *p = *item;
                                    return TRUE;
                                }
                            } else {
                                Villager_DiscardItemMaybe(p);
                                *p = *item;
                                return TRUE;
                            }
                        } else {
                            Villager_DiscardItemMaybe(p);
                            *p = *item;
                            return TRUE;
                        }
                    } else {
                        if (occupied) {
                            Villager_DiscardItemMaybe(item);
                            goto fail;
                        } else {
                            Villager_DiscardItemMaybe(p);
                            *p = *item;
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
fail:
    return FALSE;
}

namespace nL {
extern "C" BOOL Villager_PlaceItemInHouse(Unk_0207e268 *a, u16 *b) {
    u16 v[1];
    if (*b != 0xfff1) {
        void *r6;
        s32 r7, s8, n, f;
        Item_ToPlacedForm(v, b, 1);
        r6 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
        r7 = _ZN12VillagerPlan8getStateEv(r6);
        s8 = _ZN12VillagerPlan13func_0209b2e4Ev(r6);
        if (Item_IsFurniture(v) != 0) {
            s32 r6 = _ZN20VillagerDataItemView12matchesTrendEPti(a, b, r7);
            n = Ftr_GetUnk05(v);
            f = 0;
            if (*b >= 0x450c && *b <= 0x45db) f = 1;
            if (f != 0 && n == 2) {
                return _ZN20VillagerDataItemView14tryPlaceFossilEPtiihh(a, b, n, r7, s8, r6);
            }
            r6 = _ZN20VillagerDataItemView15freeSlotInRangeEiihh(a, n, r7, s8, r6);
            if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r6) != 0) {
                a->furniture[r6] = *b;
                return TRUE;
            }
            Villager_DiscardItemMaybe(b);
        } else {
            f = 0;
            if (*b >= 0x1100 && *b <= 0x1143) f = 1;
            if (f != 0) {
                Villager_SetWallpaper(a, (u8)((*b >= 0x1100 && *b <= 0x1143) ? *b - 0x1100 : -1));
            } else if (*b >= 0x1144 && *b <= 0x1187) {
                Villager_SetCarpet(a, (u8)((*b >= 0x1144 && *b <= 0x1187) ? *b - 0x1144 : -1));
            }
        }
    }
    return FALSE;
}
}

namespace nL {
extern "C" s32 Villager_CountFurnitureLike(Unk_0207e268 *a, u16 *b) {
    u16 *p = a->furniture;
    s32 cnt = 0;
    s32 i = 0;
    s32 z2 = 0;
    s32 z1 = 0;
    do {
        s32 r;
        if (Item_IsFurniture(p) != 0) {
            s32 t = Item_GetFurnitureIndex(p);
            r = (t == Item_GetFurnitureIndex(b)) ? 1 : z1;
        } else {
            r = (*p == *b) ? 1 : z2;
        }
        if (r != 0) cnt++;
        p++; i++;
    } while (i < 10);
    return cnt;
}
}

namespace nL {
extern "C" s32 Villager_CountFurniture(Unk_0207e268 *a) {
    u16 *p = a->furniture;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (*p != 0xfff1) cnt++;
    }
    return cnt;
}
}

namespace nL {
extern "C" void Villager_DropRandomFurniture(Unk_0207e268 *a) {
    s32 cnt, r6, i;
    s32 s8, sc;
    s32 x, y;
    Unk_0207e684_Tbl tbl;
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (Villager_CountFurniture(a) >= 7) {
            if (Random_GlobalBelow(2) == 0) {
                void *r4 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
                s8 = _ZN12VillagerPlan8getStateEv(r4);
                sc = _ZN12VillagerPlan13func_0209b2e4Ev(r4);
                tbl = *(Unk_0207e684_Tbl *)data_020e05ac;
                s32 *p = tbl.v;
                cnt = 0;
                x = 0;
                y = 0;
                for (r6 = 0; r6 < 3; r6++) {
                    if (_ZN20VillagerDataItemView12getSlotRangeEPiS0_iih(a, &x, &y, r6, s8, sc) != 0) {
                        p[r6] = _ZN20VillagerDataItemView16pickNonTrendSlotEiii(a, s8, x, y);
                        if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, p[r6]) != 0) cnt++;
                    }
                }
                if (cnt > 0) {
                    r6 = Random_GlobalBelow(cnt);
                    if (r6 < 3) {
                        for (i = 0; i < 3; i++) {
                            s32 r7 = tbl.v[i];
                            if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r7) != 0) {
                                if (r6 == 0) {
                                    u16 *q = (u16 *)((u8 *)a + 0x6ac) + r7;
                                    if (*q != 0xfff1) Villager_DiscardItem(q);
                                    *q = 0xfff1;
                                    break;
                                }
                                r6--;
                            }
                        }
                    }
                }
            }
        }
    }
}
}

namespace nL {
extern "C" void Villager_ClearFurnitureSlots1To2(Unk_0207e268 *a) {
    u16 *p = &a->furniture[1];
    s32 i;
    for (i = 0; i < 2; p++, i++) *p = 0xfff1;
}
}

namespace nL {
extern "C" void Villager_GetPackedFurniture(u16 *out, void *a, u16 *in) {
    *out = 0xfff1;
    if (Item_IsFurniture(in) != 0) {
        s32 r = Ftr_GetUnk05(in);
        if (r < 3) *out = sPackedFurnitureItems[r];
    }
}
}

namespace nL {
extern "C" void Villager_ResolveRoomLayout(Unk_0207e268 *a, u16 *b) {
    u16 x, y, z;
    s32 i, idx;
    BOOL r7;
    x = 0xfff1;
    r7 = (Villager_GetResidentStatus(a) != 3) ? 1 : 0;
    i = 0;
    for (i = 0; i < 0x100; b++, i++) {
        BOOL f = FALSE;
        if (*b >= 0xf000 && *b <= 0xf02f) f = TRUE;
        if (f) {
            idx = _ZN20VillagerDataItemView21getSlotFromLayoutCodeEPt(a, b);
            _ZN20VillagerDataItemView14getFurnitureAtEi(&y, a, idx);
            x = y;
            if (r7) {
                if (Item_IsFurniture(&x)) {
                    if (Villager_IsFurnitureShown(a, idx)) {
                        Villager_GetPackedFurniture(&z, a, &x);
                        x = z;
                    } else {
                        x = 0xfff1;
                    }
                }
            }
            if (Item_IsFurniture(&x)) {
                Item_SetFurnitureDirection(&x, *b & 3);
                *b = x;
            } else {
                *b = 0xfff1;
            }
        }
    }
}
}

namespace nL {
extern "C" void Villager_PlaceReceivedItems(Unk_0207e268 *a) {
    if (gCommManager->isSlotActive(gCommManager->myAid) == 0) {
        if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
            u16 *r4 = Villager_GetReceivedItem(a, 0);
            BOOL r6 = FALSE;
            s32 i = 0;
            do {
                if (Villager_PlaceItemInHouse(a, r4) != 0) r6 = TRUE;
                r4++; i++;
            } while (i < 4);
            Villager_ClearReceivedItems(a);
            if (r6 != 0) {
                RoomFtrState_ResetVillagerHouse(Villager_GetIndex(a));
            }
            PlanErrand_MarkReady(VillagerPlanBlock_GetErrand(Villager_GetPlan(a)));
        }
    }
}
}

namespace nL {
extern "C" void Villager_PickRoomLayout(Unk_0207e268 *a, s32 b, s32 c) {
    if (b == 2) {
        a->roomLayout = Random_GlobalBelow(10);
        Villager_ClearFurnitureSlots1To2(a);
    } else {
        a->roomLayout = Random_GlobalBelow(0x28);
        if (c != 0) Villager_ClearFurnitureSlots1To2(a);
    }
}
}

namespace nL {
extern "C" s32 Villager_GetFurnitureSlotAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    if (c != 0) {
        u32 y = b[1];
        u32 x = b[0];
        if (x < 16 && y < 16) {
            s32 i;
            u8 *e = c;
            for (i = 0; i < d; e += 4, i++) {
                if (b[0] == e[2] && b[1] == e[3]) {
                    u16 code = *(u16 *)e;
                    if (Unk_0207e440_InRange(&code)) return _ZN20VillagerDataItemView21getSlotFromLayoutCodeEPt(a, &code);
                }
            }
        }
    }
    return -1;
}
}

namespace nL {
extern "C" BOOL Villager_RemoveFurnitureAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    s32 r4 = Villager_GetFurnitureSlotAt(a, b, c, d);
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r4) != 0) {
        a->furniture[r4] = 0xfff1;
        Villager_HideFurniture(a, r4);
        return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL Villager_HasShownFurnitureAt(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    s32 r4 = Villager_GetFurnitureSlotAt(a, b, c, d);
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r4) != 0) {
        if (a->furniture[r4] != 0xfff1) {
            if (Villager_IsFurnitureShown(a, r4) != 0) return TRUE;
        }
    }
    return FALSE;
}
}

namespace nL {
extern "C" u32 Villager_GetWallpaper(Unk_0207e268 *a) { return a->wallpaper; }
}

namespace nL {
extern "C" u32 Villager_GetCarpet(Unk_0207e268 *a) { return a->carpet; }
}

namespace nL {
extern "C" void Villager_SetWallpaper(Unk_0207e268 *a, u8 b) { a->wallpaper = b; }
}

namespace nL {
extern "C" void Villager_SetCarpet(Unk_0207e268 *a, u8 b) { a->carpet = b; }
}

namespace nL {
extern "C" u32 Villager_GetInfo4d() {
    void *u;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(u)));
    if (p != 0) return p[0x4d];
    return 0;
}
}

namespace nL {
extern "C" s32 Villager_FindOwnIndex(Unk_0207e268 *a) {
    u32 g = (u32)gSaveVillagers;
    s32 r = -1;
    if (g != 0) {
        r = SaveVillagers_FindIndex((void *)g, _ZN12VillagerData13getVillagerIdEv(a));
    }
    return r;
}
}

namespace nL {
extern "C" s32 Villager_GetIndex(Unk_0207e268 *a) { return Villager_FindOwnIndex(a); }
}

namespace nL {
extern "C" s32 Villager_GetState(Unk_0207e268 *a) {
    s32 r4 = VillagerStates_Get();
    return VillagerStateTable_GetEntry(r4, Villager_FindOwnIndex(a));
}
}

namespace nL {
extern "C" s32 Villager_GetWhereabouts(Unk_0207e268 *a) {
    s32 r4 = 0;
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        r4 = Villager_GetState(a);
        if (gCommManager->isSlotActive(gCommManager->myAid) != 0) {
            if (VillagerState_GetPresence(r4) == 2) r4 = 2;
            else r4 = 1;
        } else {
            switch (VillagerState_GetRole(r4)) {
            case 0:
                if (VillagerState_GetPresence(r4) == 2) r4 = 2;
                else r4 = 1;
                break;
            case 2:
                r4 = 3;
                break;
            case 3:
                r4 = 4;
                break;
            case 5:
                r4 = 6;
                break;
            case 6:
                r4 = 7;
                break;
            case 4:
                r4 = 5;
                break;
            case 1:
            default:
                r4 = 0;
                break;
            }
        }
    }
    return r4;
}
}

namespace nL {
extern "C" BOOL func_0207e274() { return TRUE; }
}

namespace nL {
extern "C" void *Villager_GetPlan(Unk_0207e268 *a) { return a->planBlock; }
}

namespace nL {
extern "C" s32 Villager_GetTrend(Unk_0207e268 *a, s32 b) {
    if ((u32)_ZN12VillagerPlan13getStateGroupEv(VillagerPlanBlock_GetPlan(a->planBlock)) <= 1) {
        _ZN12VillagerPlan12getTrendNameEi(b, _ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(a->planBlock)));
    } else {
        _ZN12VillagerPlan12getTrendNameEi(b, 7);
    }
}
}

namespace nL {
extern "C" s32 Villager_GetResidentStatus(Unk_0207e268 *a) {
    if (Villager_IsMovingOut(a) != 0) return 0;
    if (Villager_IsMovingIn(a) != 0) return 1;
    if (Villager_IsJustMovedIn(a) != 0) return 2;
    return 3;
}
}

namespace nL {
extern "C" BOOL Villager_IsMovingOut(Unk_0207e268 *a) {
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(a))) == 9) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL Villager_IsMovingIn(Unk_0207e268 *a) {
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(a))) == 0xa) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL Villager_IsJustMovedIn(Unk_0207e268 *a) {
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(a))) == 0xb) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL Villager_CanBeTalkPartner(Unk_0207e268 *a) {
    void *r4 = _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (Villager_GetResidentStatus(a) == 3) {
            if (Villager_GetWhereabouts(a) != 2) {
                if (Villager_IsInPlayerErrand(a, r4) == 0) return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL Villager_IsInPlayerErrand(Unk_0207e268 *a, void *b) {
    VillagerId *r4 = _ZN12VillagerData13getVillagerIdEv(a);
    if (r4->isValid() != 0) {
        void *r7 = PlayerErrands_GetSlot(b, 0);
        void *s0 = PlayerErrands_GetSlot(b, 1);
        void *s4 = b;
        VillagerId *r5;
        s4 = (u8 *)b + 0x88;
        if (_ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(r7)) != 0) {
            if (((r5 = (VillagerId *)(PlayerErrandSlot_GetVillager(r7, 0))), (r5->townId == r4->townId && memcmp(r5->townName, r4->townName, 8) == 0 && r5->species == r4->species)) || ((r5 = (VillagerId *)(PlayerErrandSlot_GetVillager(r7, 1))), (r5->townId == r4->townId && memcmp(r5->townName, r4->townName, 8) == 0 && r5->species == r4->species))) return TRUE;
        }
        if (_ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(s0)) != 0) {
            if (((r5 = (VillagerId *)(PlayerErrandSlot_GetVillager(s0, 0))), (r5->townId == r4->townId && memcmp(r5->townName, r4->townName, 8) == 0 && r5->species == r4->species)) || ((r5 = (VillagerId *)(PlayerErrandSlot_GetVillager(s0, 1))), (r5->townId == r4->townId && memcmp(r5->townName, r4->townName, 8) == 0 && r5->species == r4->species))) return TRUE;
        }
        if (Arbeit_IsLetterRecipient(b, r4) != 0) return TRUE;
        if (HouseVisitInvite_IsFrom(s4, r4) != 0) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" u32 Villager_GetMoveInKind(Unk_0207e268 *a) { return a->moveInKind; }
}

namespace nL {
extern "C" void Villager_SetMoveInKind(Unk_0207e268 *a, u32 b) { a->moveInKind = b; }
}

namespace nL {
extern "C" void Villager_GetFriendName(void *a, u32 b) {
    void *r = SaveVillagers_FindFriendOf(gSaveVillagers, a);
    if (r != 0) {
        if (_ZN12VillagerData13getVillagerIdEv(r)->isValid() != 0) {
            _ZN12VillagerData13getVillagerIdEv(r)->getName(b);
        }
    }
}
}

namespace nK {
extern "C" void Villager_GetEnemyName(u32 a, u32 b) {
    void *r = SaveVillagers_FindEnemyOf(gSaveVillagers, a);
    if (r) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r))) {
            _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(r), b);
        }
    }
}
}

namespace nK {
extern "C" void Villager_GetRandomOtherName(u32 a, u32 b) {
    u32 v;
    func_02133ef8(&v, 4);
    v = (u32)_ZN12VillagerData13getVillagerIdEv((void *)a);
    void *r = SaveVillagers_PickRandomExcept(gSaveVillagers, &v, 1);
    if (r) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r))) {
            _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(r), b);
        }
    }
}
}

namespace nK {
extern "C" s32 ImpressionCond_PlayerFaceFlag(u32 a, u32 b, u32 c) { return PlayerData_HasStungFace(a, b, c); }
}

namespace nK {
extern "C" s32 ImpressionCond_WeedsAround(void) {
    void *tb = PlayerActor_GetBodyPos(4);
    if (Unk_0207dd24_IsZero(*gFieldSceneKind) && tb) {
        void *m = gSceneBlockMap;
        if (m) {
            s32 cnt = 0;
            s32 xy[2];
            xy[0] = 0;
            xy[1] = 0;
            FieldPos_ToUnit(&xy[0], &xy[1], tb);
            s32 x, y;
            for (y = xy[1] - 1; y <= xy[1] + 1; y++) {
                for (x = xy[0] - 1; x <= xy[0] + 1; x++) {
                    s32 hx, hy;
                    long yy = y;
                    hx = x >> 4;
                    hy = yy >> 4;
                    u16 *c = (u16 *)BlockMap_GetItemPtr(m, hx, hy, x - (hx << 4), yy - (hy << 4), 0);
                    if (c) {
                        BOOL r = FALSE;
                        if (*c >= 0x21 && *c <= 0x24) r = TRUE;
                        if (r) {
                            cnt++;
                            if (cnt >= 3) return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
}

namespace nK {
extern "C" s32 ImpressionCond_FlowersAround(void) {
    void *tb = PlayerActor_GetBodyPos(4);
    if (Unk_0207dd24_IsZero(*gFieldSceneKind) && tb) {
        void *m = gSceneBlockMap;
        if (m) {
            s32 cnt = 0;
            s32 xy[2];
            xy[0] = 0;
            xy[1] = 0;
            FieldPos_ToUnit(&xy[0], &xy[1], tb);
            s32 x, y, hx, hy;
            for (y = xy[1] - 1; y <= xy[1] + 1; y++) {
                for (x = xy[0] - 1; x <= xy[0] + 1; x++) {
                    long yy = y;
                    hx = x >> 4;
                    hy = yy >> 4;
                    u16 *c = (u16 *)BlockMap_GetItemPtr(m, hx, hy, x - (hx << 4), yy - (hy << 4), 0);
                    if (c) {
                        if (Unk_0207dd24_Check(c)) {
                            cnt++;
                            if (cnt >= 2) return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_FewVillagers(void) {
    BOOL r = FALSE;
    if (SaveVillagers_Count(gSaveVillagers) <= 4) r = TRUE;
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_VillagerEventToday(u32 a) {
    if (VillagerEvent_GetTodayIndex(a) != 0xb) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_Mood1(s32 a, s32 b, s32 c) {
    if (c == 1) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_Mood2or4(s32 a, s32 b, s32 c) {
    if (c == 2 || c == 4) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_HoldingNet(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1376, 0x1376)) {
        if (*p < 0x1377 || *p > 0x1377) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_HoldingAxe(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x136b, 0x1372)) {
        if (*p < 0x1373 || *p > 0x1373) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_HoldingRod(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1374, 0x1374)) {
        if (*p < 0x1375 || *p > 0x1375) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_HoldingWateringCan(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1378, 0x1378)) {
        if (*p < 0x1379 || *p > 0x1379) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13c1(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13c1;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13c1;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13b2(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13b2;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13b2;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13a8(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13a8;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13a8;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13bc(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13bc;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13bc;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat1405(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x1405;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x1405;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13e6(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13e6;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13e6;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13ea(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13ea;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13ea;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13f5(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13f5;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13f5;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13e3(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13e3;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13e3;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat13e4(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x13e4;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x13e4;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingHat1406(u32 a) {
    u16 *p = _ZN10PlayerData6getHatEv(a);
    BOOL r;
    u16 g[2];
    if (Item_IsFurniture(p)) {
        g[0] = 0x1406;
        s32 x = Item_GetFurnitureIndex(p);
        r = x == Item_GetFurnitureIndex(&g[0]);
    } else {
        r = *p == 0x1406;
    }
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_FlowerAccessory(u32 a) {
    BOOL k2 = TRUE;
    BOOL k1 = k2;
    if (!Unk_0207d774_R(_ZN10PlayerData11getHeldItemEv(a), 0x137c, 0x137c)) {
        if (!Unk_0207d774_R(_ZN10PlayerData6getHatEv(a), 0x1408, 0x1428)) k1 = FALSE;
    }
    if (!k1) {
        if (!Unk_0207d774_R(_ZN10PlayerData11getFaceItemEv(a), 0x1471, 0x1491)) k2 = FALSE;
    }
    return k2;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_HoldingUmbrella(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1380, 0x139f)) {
        if (*p < 0x13a0 || *p > 0x13a7) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_Raining(void) {
    if (Weather_GetFallingPrecip() == 1) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_Snowing(void) {
    if (Weather_GetFallingPrecip() == 2) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_WearingShirt12a8(u32 a) {
    BOOL r = Unk_0207d774_R(_ZN10PlayerData8getShirtEv(a), 0x12a8, 0x12af);
    if (r) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_TimeOfDay0(void) {
    if (Clock_GetTimeOfDay() == 0) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_TimeOfDay3(void) {
    if (Clock_GetTimeOfDay() == 3) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_PocketsFull(void) {
    s32 t = _ZN15PlayerInventory15findEmptyPocketEv(_ZN10PlayerData12getInventoryEv());
    BOOL r = FALSE;
    s32 m = -1;
    if (t == m) r = TRUE;
    return r;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_FriendshipVeryLow(s32 a, s32 b) {
    if (b <= -0x50) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_FriendshipLow(s32 a, s32 b) {
    if (b <= -0x1e) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_FriendshipHigh(s32 a, s32 b) {
    if (b >= 0x46 && b < 0x6e) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_FriendshipVeryHigh(s32 a, s32 b) {
    if (b >= 0x6e) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL ImpressionCond_HalfInsectsCaught(s32 a, s32 b, s32 c) {
    if (ImpressionCond_AllInsectsCaught() == 0) {
        if (ImpressionCond_AllFishCaught(a, b, c) == 0) {
            s32 h = (u32)Catalog_GetInsectTotal() >> 1;
            if (Catalog_CountInsects() >= h) return TRUE;
            return FALSE;
        }
    }
    return FALSE;
}
}

namespace nK {
extern "C" s32 ImpressionCond_AllInsectsCaught(void) { return Catalog_HasAllInsects(); }
}

namespace nK {
extern "C" BOOL ImpressionCond_HalfFishCaught(void) {
    if (Unk_0207d67c_Ns::ImpressionCond_AllFishCaught() == 0) {
        s32 h = (u32)Catalog_GetFishTotal() >> 1;
        if (Catalog_CountFish() >= h) return TRUE;
        return FALSE;
    }
    return FALSE;
}
}

namespace nK {
extern "C" s32 ImpressionCond_AllFishCaught(s32 a, s32 b, s32 c) { return Catalog_HasAllFish(a, b, c); }
}

namespace nJ {
extern "C" BOOL ImpressionCond_BellsUpTo300() {
    if (_ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1) <= 300) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_BellsUpTo1000() {
    if (_ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1) <= 1000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Bells10000To20000() {
    s32 v = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1);
    if (v >= 10000 && v < 20000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Bells20000To40000() {
    s32 v = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1);
    if (v >= 20000 && v < 40000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Bells40000To60000() {
    s32 v = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1);
    if (v >= 40000 && v < 60000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_BellsOver60000() {
    if (_ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1) >= 60000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_AccessoryHairD(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (ImpressionCond_Hair0(a, b, c) || ImpressionCond_Hair1(a, b, c) || ImpressionCond_Hair4(a, b, c) || ImpressionCond_Hair5(a, b, c) ||
            ImpressionCond_Hair7(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_AccessoryHairC(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (ImpressionCond_Hair2(a, b, c) || ImpressionCond_Hair3(a, b, c) || ImpressionCond_Hair6(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_AccessoryHairB(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (ImpressionCond_Hair2(a, b, c) || ImpressionCond_Hair4(a, b, c) || ImpressionCond_Hair6(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_AccessoryHairA(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (ImpressionCond_Hair0(a, b, c) || ImpressionCond_Hair1(a, b, c) || ImpressionCond_Hair3(a, b, c) || ImpressionCond_Hair5(a, b, c) ||
            ImpressionCond_Hair7(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair0(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 0 || _ZN10PlayerData12getHairStyleEv(a) == 8) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair1(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 1 || _ZN10PlayerData12getHairStyleEv(a) == 9) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair2(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 2 || _ZN10PlayerData12getHairStyleEv(a) == 10) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair3(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 3 || _ZN10PlayerData12getHairStyleEv(a) == 11) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair4(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 4 || _ZN10PlayerData12getHairStyleEv(a) == 12) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair5(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 5 || _ZN10PlayerData12getHairStyleEv(a) == 13) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair6(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 6 || _ZN10PlayerData12getHairStyleEv(a) == 14) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_Hair7(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 7 || _ZN10PlayerData12getHairStyleEv(a) == 15) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL ImpressionCond_FourResidents() {
    if (_ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv()) == 0 && PlayerDataArray_CountUsed(gSavePlayers) == 4) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_TwoPlusResidents() {
    if (_ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv()) == 0 && PlayerDataArray_CountUsed(gSavePlayers) >= 2) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Winter() {
    Unk_0207d1bc_Data d;
    u32 v;
    d.a = 0;
    d.b = 0;
    Clock_GetDateTime(&d);
    v = *(u8 *)&d.b;
    if (v == 12 || (v >= 1 && v <= 2)) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Autumn() {
    Unk_0207d1bc_Data d;
    u32 v;
    d.a = 0;
    d.b = 0;
    Clock_GetDateTime(&d);
    v = *(u8 *)&d.b;
    if (v >= 9 && v <= 11) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Summer() {
    Unk_0207d1bc_Data d;
    u32 v;
    d.a = 0;
    d.b = 0;
    Clock_GetDateTime(&d);
    v = *(u8 *)&d.b;
    if (v >= 6 && v <= 8) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL ImpressionCond_Always() {
    return TRUE;
}
}

namespace nJ {
extern "C" u32 Impression_Evaluate(u32 a, u32 b, u32 c) {
    s32 t = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv());
    Unk_0207d164_Entry *e = sImpressionRules;
    u32 ret = 0x58;
    s32 i;
    for (i = 0; i < 0x58; e++, i++) {
        if (e->gender == 2 || e->gender == t) {
            if (e->unk_4(a, b, c)) {
                ret = (u8)i;
                break;
            }
        }
    }
    return ret;
}
}

namespace nJ {
extern "C" u32 Villager_UpdateImpression(void *self, s32 r, s32 p) {
    u32 ret = 0x58;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        if (p == 0) {
            p = PlayerData_GetCurrent();
        }
        if (p != 0 && r == 0) {
            r = Villager_FindMemory(self, _ZN10PlayerData11getPlayerIdEv(p));
        }
        if (r != 0) {
            ret = _ZN14VillagerMemory13getFriendshipEv(r);
            ret = Impression_Evaluate(p, ret, VillagerState_GetMood(Villager_GetState(self)));
            _ZN14VillagerMemory13setImpressionEi(r, ret);
        }
    }
    return ret;
}
}

namespace nJ {
extern "C" void Villager_GetImpressionText(void *self, void *out, s32 p) {
    s32 r;
    if (p == 0) {
        p = PlayerData_GetCurrent();
    }
    r = 0;
    if (p != 0) {
        r = Villager_FindMemory(self, _ZN10PlayerData11getPlayerIdEv(p));
    }
    if (r != 0) {
        u32 v = _ZN14VillagerMemory13getImpressionEv(r);
        if (v < 0x58) {
            u8 b = v;
            String_Load(out, &b, ((u8 *)"st_impress"));
        }
    }
}
}

namespace nJ {
extern "C" void Villager_ClearReceivedItems(Unk_0207cd94 *self) {
    u16 *p = self->receivedItems;
    s32 i;
    for (i = 0; i < 4; p++, i++) {
        *p = 0xfff1;
    }
}
}

namespace nJ {
extern "C" u16 *Villager_GetReceivedItem(Unk_0207cd94 *self, u32 idx) {
    if (idx < 4) {
        return &self->receivedItems[idx];
    }
    return NULL;
}
}

namespace nJ {
extern "C" void Villager_CompactReceivedItems(Unk_0207cd94 *self) {
    s32 i;
    s32 j;
    for (i = 0; i < 3; i++) {
        if (self->receivedItems[i] == 0xfff1) {
            for (j = i + 1; j < 4; j++) {
                if (self->receivedItems[j] != 0xfff1) {
                    self->receivedItems[i] = self->receivedItems[j];
                    self->receivedItems[j] = 0xfff1;
                    break;
                }
            }
            if (j == 4) {
                break;
            }
        }
    }
}
}

namespace nJ {
extern "C" void Villager_AddReceivedItem(Unk_0207cd94 *self, u16 *val) {
    u16 tmp;
    s32 idx;
    Villager_CompactReceivedItems(self);
    tmp = 0xfff1;
    idx = Villager_FindReceivedItem(self, &tmp);
    if (idx != -1) {
        self->receivedItems[idx] = *val;
    } else {
        s32 i = 0;
        s32 n;
        do {
            n = i + 1;
            self->receivedItems[i] = self->receivedItems[n];
            i = n;
        } while (n < 3);
        self->receivedItems[3] = *val;
    }
    VillagerSync_Items(self, Villager_GetReceivedItem(self, 0));
}
}

namespace nJ {
extern "C" s32 Villager_FindReceivedItem(Unk_0207cd94 *self, u16 *key) {
    u16 *p = Villager_GetReceivedItem(self, 0);
    s32 i;
    BOOL z0 = FALSE;
    BOOL z1 = FALSE;
    for (i = 0; i < 4; p++, i++) {
        BOOL r;
        if (Item_IsFurniture(key)) {
            r = (Item_GetFurnitureIndex(key) == Item_GetFurnitureIndex(p)) ? TRUE : z0;
        } else {
            r = (*key == *p) ? TRUE : z1;
        }
        if (r) {
            return i;
        }
    }
    return -1;
}
}

namespace nJ {
extern "C" BOOL Villager_RemoveReceivedItem(Unk_0207cd94 *self, u16 *key) {
    s32 idx = Villager_FindReceivedItem(self, key);
    if (idx != -1) {
        self->receivedItems[idx] = 0xfff1;
        Villager_CompactReceivedItems(self);
        VillagerSync_Items(self, Villager_GetReceivedItem(self, 0));
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" void Villager_PickRandomReceivedItem(u16 *out, Unk_0207cd94 *self) {
    u16 *p;
    s32 cnt;
    s32 i;
    *out = 0xfff1;
    p = Villager_GetReceivedItem(self, 0);
    cnt = 0;
    for (i = 0; i < 4; i++) {
        if (p[i] != 0xfff1) {
            cnt++;
        }
    }
    if (cnt > 0) {
        cnt = Random_GlobalBelow(cnt);
        for (i = 0; i < 4; p++, i++) {
            if (*p != 0xfff1) {
                if (cnt == 0) {
                    *out = *p;
                    break;
                }
                cnt--;
            }
        }
    }
}
}

namespace nJ {
extern "C" void Villager_GetMostValuableReceivedItem(u16 *out, Unk_0207cd94 *self) {
    u16 *p;
    s32 best;
    s32 i;
    *out = 0xfff1;
    p = Villager_GetReceivedItem(self, 0);
    best = 0;
    for (i = 0; i < 4; p++, i++) {
        if (*p != 0xfff1) {
            s32 r = Item_GetPrice(p);
            if (r >= best) {
                *out = *p;
                best = r;
            }
        }
    }
}
}

namespace nJ {
extern "C" BOOL Villager_HasFlea(void *self) {
    s32 a = *(s8 *)(VillagerStates_Get() + 0x160);
    s32 b = SaveVillagers_FindIndex(gSaveVillagers, _ZN12VillagerData13getVillagerIdEv(self));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) && a != -1 && b == a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" void Villager_RemoveFlea(void *self) {
    if (Villager_HasFlea(self)) {
        *(s8 *)(VillagerStates_Get() + 0x160) = -1;
    }
}
}

namespace nJ {
extern "C" BOOL Villager_IsGreeter(void *self) {
    s32 a = *(s8 *)(VillagerStates_Get() + 0x161);
    s32 b = SaveVillagers_FindIndex(gSaveVillagers, _ZN12VillagerData13getVillagerIdEv(self));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) && b == a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" u32 Villager_GetFurnitureTasteIndex(Unk_0207cd94 *self) {
    return self->furnitureTasteIndex;
}
}

namespace nJ {
extern "C" void Villager_NextFurnitureTaste(Unk_0207cd94 *self) {
    self->furnitureTasteIndex++;
    if (self->furnitureTasteIndex >= 6) {
        self->furnitureTasteIndex = 0;
    }
}
}

namespace nJ {
extern "C" BOOL Villager_IsFreeOfPlayerErrands(u32 a) {
    u8 *g = gSavePlayers;
    s32 i;
    for (i = 0; i < 4; i++) {
        s32 t = PlayerData_GetResident(g, i);
        if (_ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv())) {
            if (Villager_IsInPlayerErrand(a, _ZN10PlayerData10getErrandsEv(t))) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}

namespace nI {
extern "C" void Villager_StartMovingOut(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        Unk_0207ccd0_Rec *r4 = (Unk_0207ccd0_Rec *)VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
        if (_ZN12VillagerPlan8getStateEv(r4) == 2 || (_ZN12VillagerPlan8getStateEv(r4) == 8 && _ZN12VillagerPlan13func_0209b2e4Ev(r4) != 0)) {
            r4->unk_21_0 = 1;
        }
        _ZN12VillagerPlan8setStateEj(r4, 9);
        MI_CpuCopy8(b, func_0209b010(r4), 8);
        PlanErrand_Clear(VillagerPlanBlock_GetErrand(Villager_GetPlan(a)));
    }
}
}

namespace nI {
extern "C" void Villager_StartMovingIn(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        void *r6 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
        _ZN12VillagerPlan8setStateEj(r6, 10);
        MI_CpuCopy8(b, func_0209b010(r6), 8);
        PlanErrand_Clear(VillagerPlanBlock_GetErrand(Villager_GetPlan(a)));
    }
}
}

namespace nI {
extern "C" s32 Villager_IsMoveTimeReached(void *a, void *b) {
    void *r5 = _ZN12VillagerData13getVillagerIdEv(a);
    u8 *r4 = (u8 *)VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(r5) && _ZN12VillagerPlan12isValidStateEv(r4)) {
        u8 *r5b = (u8 *)Personality_GetSleepHours(VillagerId_GetPersonality(r5));
        r4 = (u8 *)func_0209b010(r4);
        if (DateTime_IsInvalid(r4) == 0) {
            u32 tmpw[2];
            tmpw[0] = 0;
            tmpw[1] = 0;
            MI_CpuCopy8(r4, ((u8 *)tmpw), 8);
            ((u8 *)tmpw)[2] = r5b[2];
            ((u8 *)tmpw)[1] = r5b[3];
            if (r4[2] > r5b[2] || (r5b[2] == r4[2] && r5b[3] == r4[1])) DateTime_AddDays(((u8 *)tmpw), 1);
            if (DateTime_Compare(b, ((u8 *)tmpw), 0x3e) == 1) return TRUE;
            return FALSE;
        }
    }
    return FALSE;
}
}

namespace nI {
extern "C" void Villager_ShareTrendWith(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(b))) {
        void *r6 = Villager_GetInfo3a(a);
        if (r6) {
            void *r4 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
            _ZN12VillagerPlan10addTrendOfEPS_Ps(r4, VillagerPlanBlock_GetPlan(Villager_GetPlan(b)), r6);
        }
    }
}
}

namespace nI {
extern "C" void Villager_RecordPlayerActivity(void *a, void *b, void *c) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) _ZN12VillagerPlan15addPendingScoreEhi(VillagerPlanBlock_GetPlan(Villager_GetPlan(a)), (s32)b, (s32)c);
}
}

namespace nI {
extern "C" void Villager_UpdateTrendDays(void *a, void *b) {
    void *r5 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN12VillagerPlan12isValidStateEv(r5) && _ZN12VillagerPlan8hasTrendEv(r5)) {
        void *r6 = VillagerPlan_GetStateDate(r5);
        void *r7 = Villager_GetInfo3a(a);
        s32 r4;
        s32 cnt;
        u32 tmp[2];
        if (DateTime_IsInvalid(r6) == 0 && r7 != 0) {
            s32 d = DateTime_DiffMinutes(r6, b);
            if (d < 0) d = -d;
            cnt = d / 0x5a0;
            if (cnt > 0) {
                if (_ZN12VillagerPlan20isTrendOlderThanWeekEPv(r5, (s32)b)) {
                    tmp[0] = 0;
                    tmp[1] = 0;
                    r4 = cnt;
                    MI_CpuCopy8(func_0209b010(r5), tmp, 8);
                    d = DateTime_DiffMinutes(tmp, r6);
                    if (d < 0) d = -d;
                    if (d / 0x5a0 < 7) {
                        DateTime_AddDays(tmp, 6);
                        d = DateTime_DiffMinutes(tmp, b);
                        if (d < 0) d = -d;
                        r4 = d / 0x5a0;
                    }
                    for (; r4 > 0; ) {
                        if (_ZN12VillagerPlan15addRandomScoresEPs(r5, r7) == 0) break;
                        r4--;
                    }
                    _ZN12VillagerPlan18applyPendingScoresEPs(r5, r7);
                }
                DateTime_AddDays(r6, cnt);
            }
        }
    }
}
}

namespace nI {
extern "C" void Villager_InitPlanDateA(void *a, void *b) {
    void *r4 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN12VillagerPlan12isValidStateEv(r4)) {
        r4 = func_0209b010(r4);
        if (DateTime_IsInvalid(r4) != 0 || DateTime_Compare(b, r4, 0x3f) == -1) MI_CpuCopy8(b, r4, 8);
    }
}
}

namespace nI {
extern "C" void Villager_InitPlanDateB(void *a, void *b) {
    void *r4 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN12VillagerPlan12isValidStateEv(r4)) {
        r4 = VillagerPlan_GetStateDate(r4);
        if (DateTime_IsInvalid(r4) != 0 || DateTime_Compare(b, r4, 0x3f) == -1) MI_CpuCopy8(b, r4, 8);
    }
}
}

namespace nI {
extern "C" s32 Villager_UpdatePlan(void *a, void *b) {
    void *r8 = _ZN12VillagerData13getVillagerIdEv(a);
    void *r6 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    s32 r4 = 12;
    s32 r7 = _ZN12VillagerPlan8getStateEv(r6);
    s32 t;
    if (_ZN10VillagerId7isValidEv(r8) && _ZN12VillagerPlan12isValidStateEv(r6)) {
        t = _ZN12VillagerPlan13func_0209b2e4Ev(r6);
        if (_ZN12VillagerPlan8getStateEv(r6) == 8) {
            if (Villager_IsMoveTimeReached(a, b)) r4 = _ZN12VillagerPlan13func_0209b12cEv(r6);
        } else {
            Villager_UpdateTrendDays(a, b);
            r4 = _ZN12VillagerPlan13func_0209b18cEv(r6);
        }
        if (r4 != 12) {
            if (Trend_IsValid(r7) == 0 || r7 != r4) {
                PlanErrand_Clear(VillagerPlanBlock_GetErrand(Villager_GetPlan(a)));
                void *r6b = VillagerState_GetErrand(Villager_GetState(a));
                _ZN12ErrandRecord5clearEv(r6b);
                if (PlanState_GetGroup(r4) == 0) {
                    u16 v = 0xfff1;
                    _ZN12ErrandRecord5startEhPth(r6b, r4, &v, 0);
                }
                if (Trend_IsValid(r4)) Villager_PickRoomLayout(a, r4, t);
            }
        }
    }
    return r4;
}
}

namespace nI {
extern "C" s32 Villager_UpdatePlanState(void *a, void *b, void *c, void *d) {
    void *r6 = a;
    void *r5 = d;
    void *r8 = _ZN12VillagerData13getVillagerIdEv(a);
    void *r7 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    s32 r4 = 12;
    s32 t = _ZN12VillagerPlan13func_0209b2e4Ev(r7);
    if (_ZN10VillagerId7isValidEv(r8) && _ZN12VillagerPlan12isValidStateEv(r7)) {
        switch (_ZN12VillagerPlan8getStateEv(r7)) {
        case 11:
            r4 = _ZN12VillagerPlan13func_0209b0c4EPS_(r7, r5);
            if (r4 != 12) Villager_PickRoomLayout(r6, r4, t);
            if (r4 != 12) {
                MI_CpuCopy8(r5, b, 8);
                if (*(long long *)c != 0) MI_CpuCopy8(r5, c, 8);
            }
            break;
        case 10:
            r4 = _ZN12VillagerPlan13func_0209b044EPv(r7, r5);
            if (r4 != 12) Villager_PickRoomLayout(r6, r4, t);
            break;
        default:
            r4 = Villager_UpdatePlan(r6, r5);
            break;
        }
    }
    return r4;
}
}

namespace nI {
extern "C" void Villager_UpdatePlanErrand(void *a) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        void *r6 = Villager_GetPlan(a);
        void *r7 = VillagerPlanBlock_GetErrand(r6);
        void *r4 = PlanErrand_GetRecord();
        if (_ZN12ErrandRecord8isActiveEv(r4)) {
            if (_ZN12ErrandRecord8getClassEv(r4) == 0) {
                if (_ZN12ErrandRecord7getStepEv(r4) == 3) {
                    if (_ZN12ErrandRecord7getKindEv(r4) == 4) Villager_NextFurnitureTaste(a);
                    PlanErrand_Clear(r7);
                    _ZN12VillagerPlan13func_0209b294Ev(VillagerPlanBlock_GetPlan(r6));
                }
            }
        }
    }
}
}

namespace nI {
extern "C" s32 Villager_CanGoOutdoors(void *a) {
    u16 *r5 = (u16 *)_ZN12VillagerData13getVillagerIdEv(a);
    s32 r = FALSE;
    if (_ZN10VillagerId7isValidEv(r5) && Villager_GetResidentStatus(a) == 3) {
        SaveVillagers_GetUnk3830(gSaveVillagers);
        u16 *r4 = (u16 *)_ZN18SickVillagerRecord13getVillagerIdEv();
        if (r5[0] == r4[0] && memcmp(r5 + 1, r4 + 1, 8) == 0 && ((u8 *)r5)[0xb] == ((u8 *)r4)[0xb]) {
        } else {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nI {
extern "C" void Villager_PickShownFurniture(Unk_0207c67c *p) {
    u16 *q = p->furniture;
    u32 mask = 0;
    s32 cnt = 0;
    s32 i;
    s32 n, t;
    p->shownFurnitureMask = 0;
    i = 0;
    do {
        if (Item_IsFurniture(q)) {
            mask |= 1 << i;
            mask = (u16)mask;
            cnt++;
        }
        q++;
        t = i + 1;
        i = t;
    } while (t < 10);
    n = cnt;
    if (n > 5) n = 5;
    if (n > 3) n = Random_GlobalBelow(n - 2) + 3;
    if (cnt > 0) {
        for (; n > 0; n--) {
            s32 r = Random_PickSetBit(mask, cnt, 10);
            if (r != -1) {
                p->shownFurnitureMask |= 1 << r;
                mask &= ~(1 << r);
                mask = (u16)mask;
                cnt--;
            }
        }
    }
}
}

namespace nI {
extern "C" s32 Villager_IsFurnitureShown(Unk_0207c67c *p, s32 n) {
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(p)) {
        if ((p->shownFurnitureMask >> n) & 1) return TRUE;
    }
    return FALSE;
}
}

namespace nI {
extern "C" void Villager_HideFurniture(Unk_0207c67c *p, s32 n) {
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(p)) p->shownFurnitureMask &= ~(1 << n);
}
}

namespace nI {
extern "C" void Villager_ClearTalkedToday(u8 *p) {
    s32 i;
    for (i = 0; i < 8; p += 0x68, i++) _ZN14VillagerMemory16clearTalkedTodayEv(p);
}
}

namespace nI {
extern "C" s32 Villager_IsAsleep(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        u32 v[2];
        v[0] = 0;
        v[1] = 0;
        if (b == 0) {
            Clock_GetDateTime(v);
            b = v;
        }
        return Personality_IsAsleep(VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(a)), b);
    }
    return 0;
}
}

namespace nI {
extern "C" void Villager_SetFleaMarketVisited(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN8PlayerId7isValidEv(b) && Villager_FindMemory(a, b)) _ZN14VillagerMemory20setFleaMarketVisitedEv();
}
}

namespace nI {
extern "C" s32 Villager_UpdateVisitorRecord(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        u8 *tbl = gSaveTownId;
        if (b == 0) b = PlayerData_GetCurrent();
        if (b != 0 && (u32)tbl != 0) {
            void *r6;
            if (_ZN8PlayerId7isValidEv(r6 = _ZN10PlayerData11getPlayerIdEv(b)) && _ZN6TownId15getTownRelationEv(r6) == 1) {
                r6 = Villager_FindMemory(a, r6);
                if (r6 != 0) {
                    b = _ZN12Unk_02097ff424getForeignVillagerRecordEv(b);
                    a = _ZN12VillagerData13getVillagerIdEv(a);
                    return _ZN21ForeignVillagerRecord5offerEPviS0_(b, a, _ZN14VillagerMemory13getFriendshipEv(r6), tbl);
                }
            }
        }
    }
    return 0;
}
}

namespace nI {
extern "C" s32 Villager_SendLetter4(void *a, u32 b, void *c, void *d, void *e, u16 *f) {
    u8 buf[5];
    u32 obj[0x3d];
    u32 v1, v2, v3, v4;
    if (_ZN8PlayerId7isValidEv(d) && _ZN10VillagerId7isValidEv(e)) {
        _ZN6LetterC1Ev(obj);
        VillagerId_GetPersonality(e);
        buf[0] = LetterPaper_PickForPersonality();
        v1 = b + Random_GlobalBelow((u32)c);
        v2 = b + Random_GlobalBelow((u32)c);
        v3 = b + Random_GlobalBelow((u32)c);
        v4 = b + Random_GlobalBelow((u32)c);
        _ZN10VillagerId12makeFileNameEPvjj(e, sVillagerLetter4Path, 0x28, a);
        buf[1] = v1;
        buf[2] = v2;
        buf[3] = v3;
        buf[4] = v4;
        Letter_ComposeVillagerMailZ(obj, &buf[1], &buf[2], &buf[3], &buf[4], sVillagerLetter4Path, buf, e, d, 1);
        if (f) {
            u32 v = *f;
            if (v != 0xfff1) _ZN10LetterView10setPresentEtj(obj, v, 1);
        }
        if (LetterDelivery_QueueOutgoing(obj, 0)) {
            _ZN6LetterD1Ev(obj);
            return TRUE;
        }
        _ZN6LetterD1Ev(obj);
    }
    return FALSE;
}
}

namespace nI {
extern "C" s32 Villager_SendLetter(void *a, u32 b, void *c, void *d, u16 *e) {
    u8 buf[2];
    u32 obj[0x3d];
    if (_ZN8PlayerId7isValidEv(c) && _ZN10VillagerId7isValidEv(d)) {
        _ZN6LetterC1Ev(obj);
        VillagerId_GetPersonality(d);
        buf[0] = LetterPaper_PickForPersonality();
        _ZN10VillagerId12makeFileNameEPvjj(d, sVillagerLetterPath, 0x28, a);
        buf[1] = b;
        Letter_ComposeVillagerMail(obj, &buf[1], sVillagerLetterPath, buf, d, c, 1);
        if (e) {
            u32 v = *e;
            if (v != 0xfff1) _ZN10LetterView10setPresentEtj(obj, v, 1);
        }
        if (LetterDelivery_QueueOutgoing(obj, 0)) {
            _ZN6LetterD1Ev(obj);
            return TRUE;
        }
        _ZN6LetterD1Ev(obj);
    }
    return FALSE;
}
}

namespace nH {
extern "C" void Villager_InitTalkUrge(void *self, void *x) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = Villager_GetState(self);
        q[0x1e] = 0;
        if (x == NULL) {
            x = PlayerData_GetCurrent();
        }
        if (x != NULL && _ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(x)) && !_ZN12Unk_02097ff48testFlagEj(x, 1) && Villager_FindMemory(self, _ZN10PlayerData11getPlayerIdEv(x))) {
            s32 t = _ZN14VillagerMemory13getFriendshipEv();
            s32 v = ((t + 0x100) >> 7) * (Random_GlobalBelow(10) + 1);
            if (v < 0) {
                v = 0;
            } else if (v > 0x20) {
                v = 0x20;
            }
            q[0x1e] = v;
        }
    }
}
}

namespace nH {
extern "C" BOOL Villager_CanSeekPlayer(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        void *q = Villager_GetState(self);
        if (q != NULL) {
            if (!VillagerState_GetMood(q) || VillagerState_GetMood(q) == 1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace nH {
extern "C" void Villager_RaiseTalkUrge(void *self, void *x) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        s32 v = 0;
        if (x == NULL) {
            x = PlayerData_GetCurrent();
        }
        if (x != NULL && _ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(x)) && !_ZN12Unk_02097ff48testFlagEj(x, 1) && Villager_CanSeekPlayer(self) && Villager_FindMemory(self, _ZN10PlayerData11getPlayerIdEv(x))) {
            s32 t = _ZN14VillagerMemory13getFriendshipEv();
            s32 k = Random_GlobalBelow(3);
            v = ((t + 0x100) >> 7) * k;
        }
        Villager_AddTalkUrge(self, v);
    }
}
}

namespace nH {
extern "C" BOOL Villager_IsTalkUrgeFull(void *self, void *x) {
    BOOL r;
    BOOL ok;
    if (x == NULL) {
        x = PlayerData_GetCurrent();
    }
    r = FALSE;
    ok = FALSE;
    if (x != NULL && _ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(x)) && !_ZN12Unk_02097ff48testFlagEj(x, 1) && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) && Villager_GetState(self)[0x1e] == 0x20) {
        ok = TRUE;
    }
    if (ok && Villager_CanSeekPlayer(self)) {
        r = TRUE;
    }
    return r;
}
}

namespace nH {
extern "C" void Villager_ClearTalkUrge(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = Villager_GetState(self);
        q[0x1e] = 0;
    }
}
}

namespace nH {
extern "C" void Villager_HalveTalkUrge(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = Villager_GetState(self);
        q[0x1e] = q[0x1e] >> 1;
    }
}
}

namespace nH {
extern "C" void Villager_DoubleTalkUrge(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        VillagerState_DoubleTalkUrge(Villager_GetState(self));
    }
}
}

namespace nH {
extern "C" void Villager_AddTalkUrge(void *self, s32 d) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = Villager_GetState(self);
        s32 v = d + q[0x1e];
        if (v < 0) {
            v = 0;
        } else if (v > 0x20) {
            v = 0x20;
        }
        q[0x1e] = v;
    }
}
}

namespace nH {
extern "C" u8 *SaveVillagers_Construct(u8 *self) {
    __cxa_vec_ctor(self, 8, 0x700, _ZN12VillagerDataC1Ev, _ZN12VillagerDataD1Ev);
    VillagerRelations_Construct(self + 0x3800);
    OutdoorSchedule_Construct(self + 0x381c);
    _ZN18SickVillagerRecord15constructRecordEv(self + 0x3830);
    *(s32 *)(self + 0x38c4) = 0;
    *(s32 *)(self + 0x38c8) = 0;
    *(s32 *)(self + 0x38cc) = 0;
    *(s32 *)(self + 0x38d0) = 0;
    return self;
}
}

namespace nH {
extern "C" u8 *SaveVillagers_Destruct(u8 *self) {
    _ZN18SickVillagerRecord14destructRecordEv(self + 0x3830);
    OutdoorSchedule_Destruct(self + 0x381c);
    VillagerRelations_Destruct(self + 0x3800);
    __cxa_vec_cleanup(self, 8, 0x700, _ZN12VillagerDataD1Ev);
    return self;
}
}

namespace nH {
extern "C" void SaveVillagers_Clear(u8 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        _ZN12VillagerData5clearEv(self + i * 0x700);
    }
    VillagerRelations_Clear(self + 0x3800);
    OutdoorSchedule_Clear(self + 0x381c);
    _ZN18SickVillagerRecord11resetRecordEv(self + 0x3830);
    self[0x38c0] = 1;
    self[0x38c1] = 1;
    self[0x38c2] = 0;
    self[0x38c3] = 0;
    *(s32 *)(self + 0x38c4) = 0;
    *(s32 *)(self + 0x38c8) = 0;
    *(s32 *)(self + 0x38cc) = 0;
    *(s32 *)(self + 0x38d0) = 0;
    *(s8 *)(self + 0x38e9) = -1;
    *(s8 *)(self + 0x38e8) = -1;
    MI_CpuFill8(self + 0x38ec, 0, 2);
    MI_CpuFill8(self + 0x38d4, 0, 0x14);
}
}

namespace nH {
extern "C" BOOL SaveVillagers_IsValidIndex(u32 n) {
    if (n < 8) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nH {
extern "C" s32 SaveVillagers_FindIndex(u8 *base, u16 *p) {
    s32 result = -1;
    if (_ZN10VillagerId7isValidEv(p)) {
        s32 i;
        for (i = 0; i < 8; i++) {
            u16 *q = (u16 *)_ZN12VillagerData13getVillagerIdEv(base + i * 0x700);
            if (p[0] == q[0] && memcmp(p + 1, q + 1, 8) == 0 && ((u8 *)p)[0xb] == ((u8 *)q)[0xb]) {
                result = i;
                break;
            }
        }
    }
    return result;
}
}

namespace nH {
extern "C" BOOL SaveVillagers_IsOccupied(u8 *base, s32 idx) {
    BOOL r = FALSE;
    if (SaveVillagers_IsValidIndex(idx)) {
        r = _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(base + idx * 0x700));
    }
    return r;
}
}

namespace nH {
extern "C" u8 *SaveVillagers_Get(u8 *base, s32 idx) {
    u8 *r = NULL;
    if (SaveVillagers_IsValidIndex(idx)) {
        r = base + idx * 0x700;
    }
    return r;
}
}

namespace nH {
extern "C" u8 *SaveVillagers_Find(u8 *base, u16 *x) {
    u8 *r = NULL;
    s32 idx = SaveVillagers_FindIndex(base, x);
    if (SaveVillagers_IsValidIndex(idx)) {
        r = base + idx * 0x700;
    }
    return r;
}
}

namespace nH {
extern "C" s32 Text_TrimmedLength(u8 *s, s32 n) {
    s += n - 1;
    for (; n > 0; n--, s--) {
        if (*s != 0 && *s != 0x85) {
            return n;
        }
    }
    return 0;
}
}

namespace nH {
extern "C" BOOL Mem_Equal(u8 *a, u8 *b, s32 n) {
    s32 i;
    for (i = 0; i < n; i++, a++, b++) {
        if (*a != *b) {
            return FALSE;
        }
    }
    return TRUE;
}
}

namespace nH {
extern "C" u8 *SaveVillagers_FindByName(u8 *base, u8 *a1, s32 a2, void *a3) {
    u8 *result;
    u8 *p;
    s32 n;
    s32 i;
    void *t;
    u32 objA[7];
    u32 objB[7];
    p = SaveVillagers_Get(base, 0);
    _ZN11MsgString9BC1Ev(objA);
    _ZN14EncodedString8C1Ev(objB);
    result = NULL;
    n = Text_TrimmedLength(a1, a2);
    if (n > 0 && n <= 8) {
        for (i = 0; i < 8; i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) && (a3 == NULL || Villager_FindMemory(p, a3))) {
                _ZN9MsgString5clearEv(objA);
                _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(p), objA);
                _ZN13EncodedString13fromMsgStringEP9MsgString(objB, objA);
                t = ((Unk_0207be2c_Vt *)objB)->vfunc_0c();
                {
                    s32 m = Text_TrimmedLength((u8 *)t, _ZN14EncodedString88capacityEv(objB));
                    if (m == n && Mem_Equal((u8 *)t, a1, m)) {
                        result = p;
                        break;
                    }
                }
            }
            p += 0x700;
        }
    }
    _ZN14EncodedString8D1Ev(objB);
    _ZN11MsgString9BD1Ev(objA);
    return result;
}
}

namespace nH {
extern "C" void *SaveVillagers_GetByHouseRoom(void *self, u32 x) {
    void *r = NULL;
    u32 c = (u8)x;
    if (SceneId_IsVillagerHouse(c)) {
        s32 t = SceneId_GetVillagerHouse(c);
        if (SaveVillagers_IsValidIndex(t)) {
            r = SaveVillagers_Get((u8 *)self, t);
        }
    }
    return r;
}
}

namespace nH {
extern "C" void SaveVillagers_FindFreeSlot(void *self) {
    _ZN23VillagerDataProfileView12findFreeSlotEi(self, 8);
}
}

namespace nH {
extern "C" void *SaveVillagers_PickRandomExcept(u8 *base, void **arr, s32 n) {
    s32 cnt = 0;
    u8 *result = NULL;
    volatile s32 zero;
    u8 flags[8];
    s32 i;
    s32 j;
    s32 idx;
    MI_CpuFill8(flags, 0, 8);
    for (i = 0; i < 8; i++) {
        if (SaveVillagers_IsOccupied(base, i)) {
            flags[i] = 1;
            cnt++;
        }
    }
    zero = 0;
    for (j = 0; j < n; j++) {
        void **q = arr + j;
        if (*q != NULL) {
            idx = SaveVillagers_FindIndex(base, (u16 *)*q);
            if (SaveVillagers_IsValidIndex(idx)) {
                flags[idx] = zero;
                if (_ZN10VillagerId7isValidEv(*q)) {
                    cnt--;
                }
            }
        }
    }
    if (cnt > 0) {
        s32 k = Random_GlobalBelow(cnt);
        for (i = 0; i < 8; i++) {
            if (flags[i] == 1) {
                if (k == 0) {
                    result = base + i * 0x700;
                    break;
                }
                k--;
            }
        }
    }
    return result;
}
}

namespace nH {
extern "C" s32 Random_PickSetBit(u32 mask, s32 cnt, s32 n) {
    if (cnt > 0) {
        s32 k = Random_GlobalBelow(cnt);
        s32 i;
        for (i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                if (k == 0) {
                    return i;
                }
                k--;
            }
        }
    }
    return -1;
}
}

namespace nH {
extern "C" void *SaveVillagers_PickRandomTalkPartner(u8 *base, void **arr, s32 n) {
    u8 mask = 0;
    s32 idx;
    s32 i;
    u8 m2;
    s32 cnt;
    u8 *p;
    for (i = 0; i < n; arr++, i++) {
        if (*arr != NULL) {
            idx = SaveVillagers_FindIndex(base, (u16 *)*arr);
            if (SaveVillagers_IsValidIndex(idx)) {
                mask |= 1 << idx;
            }
        }
    }
    idx = (s32)SaveVillagers_GetUnk3830Index(base);
    if (SaveVillagers_IsValidIndex(idx)) {
        mask |= 1 << idx;
    }
    p = base;
    m2 = 0;
    cnt = 0;
    for (i = 0; i < 8; i++) {
        void *r = _ZN12VillagerData13getVillagerIdEv(p);
        if (((mask >> i) & 1) == 0 && _ZN10VillagerId7isValidEv(r) && Villager_CanBeTalkPartner(p)) {
            m2 |= 1 << i;
            cnt++;
        }
        p += 0x700;
    }
    return SaveVillagers_Get(base, Random_PickSetBit(m2, cnt, 8));
}
}

namespace nH {
extern "C" void *SaveVillagers_FindBestFriendOf(u8 *base, void *x) {
    u8 *best = NULL;
    s32 bestv;
    s32 i;
    u8 *p;
    if (_ZN8PlayerId7isValidEv(x)) {
        p = base;
        bestv = -128;
        for (i = 0; i < 8; i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) && Villager_FindMemory(p, x)) {
                s32 v = _ZN14VillagerMemory13getFriendshipEv();
                if (best == NULL) {
                    best = p;
                    bestv = v;
                } else if (v > bestv) {
                    best = p;
                    bestv = v;
                } else if (v == bestv) {
                    if (Random_GlobalBelow(10) & 1) {
                        best = p;
                    }
                }
            }
            p += 0x700;
        }
    }
    if (best == NULL) {
        best = (u8 *)SaveVillagers_PickRandomExcept(base, 0, 0);
    }
    return best;
}
}

namespace nH {
extern "C" s32 SaveVillagers_CountImpl(u8 *base) {
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(base))) {
            cnt++;
        }
        base += 0x700;
    }
    return cnt;
}
}

namespace nH {
extern "C" s32 SaveVillagers_Count(u8 *base) {
    return SaveVillagers_CountImpl(base);
}
}

namespace nH {
extern "C" BOOL SpeciesBits_Test(s32 n, u32 *bits) {
    if (VillagerId_IsValidSpecies(n)) {
        if ((bits[n >> 5] >> (n & 0x1f)) & 1) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}
}

namespace nH {
extern "C" void SpeciesBits_Set(u32 *bits, s32 n) {
    if (VillagerId_IsValidSpecies(n)) {
        bits[n >> 5] |= 1 << (n & 0x1f);
    }
}
}

namespace nH {
extern "C" void SpeciesBits_Clear(s32 unused, u32 *bits, s32 n) {
    if (VillagerId_IsValidSpecies(n)) {
        bits[n >> 5] &= ~(1 << (n & 0x1f));
    }
}
}

namespace nH {
extern "C" BOOL SpeciesBits_AllEligibleSet(u32 *bits) {
    s32 i;
    for (i = 0; i < 150; i++) {
        u8 *p = (u8 *)VillagerInfo_Get((u8)i);
        if (p != NULL && p[0x4b] < 2) {
            if (!SpeciesBits_Test((u8)i, bits)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}

namespace nG {
extern "C" void SaveVillagers_UpdateHistory(void *bits, SaveVillagers *p0) {
    Unk_0207b168_Slot *p = (Unk_0207b168_Slot *)p0;
    s32 i;
    if (SpeciesBits_AllEligibleSet(bits) != 0) {
        MI_CpuFill8(bits, 0, 0x14);
        for (i = 0; i < 8; p++, i++) {
            void *o = _ZN12VillagerData13getVillagerIdEv(p);
            if (((VillagerId *)o)->isValid() != 0) {
                SpeciesBits_Set(bits, VillagerId_GetSpecies(o));
            }
        }
    }
}
}

namespace nG {
extern "C" s32 SaveVillagers_PickNewSpecies(SaveVillagers *self, u32 idx, s32 flag) {
    s32 cnt = 0;
    void *bits = self->speciesHistory;
    s32 i;
    Unk_0207b168_Slot *p;
    MI_CpuFill8(sSpeciesCandidateBits, 0, 0x14);
    for (i = 0; i < 0x96; i++) {
        if (SpeciesBits_Test(i, bits) == 0) {
            u8 *e = (u8 *)VillagerInfo_Get(i);
            u32 b = e[0x4b];
            if (b < 2) {
                if (flag == 0 || b == 0) {
                    if (e[0x4a] == idx) {
                        SpeciesBits_Set(sSpeciesCandidateBits, i);
                        cnt++;
                    }
                }
            }
        }
    }
    if (cnt > 0) {
        s32 k;
        p = self->villagers;
        for (k = 0; k < 8; p++, k++) {
            void *o = _ZN12VillagerData13getVillagerIdEv(p);
            if (((VillagerId *)o)->isValid() != 0) {
                u8 id = VillagerId_GetSpecies(o);
                if (SpeciesBits_Test(id, sSpeciesCandidateBits) != 0) {
                    SpeciesBits_Clear(self, sSpeciesCandidateBits, id);
                    cnt--;
                    if (cnt == 0) {
                        break;
                    }
                }
            }
        }
    }
    if (cnt > 0) {
        s32 r = Random_GlobalBelow(cnt);
        for (i = 0; i < 0x96; i++) {
            if (SpeciesBits_Test(i, sSpeciesCandidateBits) != 0) {
                if (r == 0) {
                    return i;
                }
                r--;
            }
        }
    }
    return -1;
}
}

namespace nG {
extern "C" u32 SaveVillagers_PickRarePersonality(SaveVillagers *self, s32 mask) {
    Unk_0207b168_Slot *p = self->villagers;
    u8 counts[6];
    u8 best = 0;
    s32 n = 0;
    s32 bc = 9;
    s32 i;
    s32 j;
    u32 r;
    MI_CpuFill8(counts, 0, 6);
    for (i = 0; i < 8; p++, i++) {
        void *o = _ZN12VillagerData13getVillagerIdEv(p);
        if (((VillagerId *)o)->isValid() != 0) {
            if (VillagerId_GetPersonality(o) < 6) {
                u32 t = VillagerId_GetPersonality(o);
                counts[t] = counts[t] + 1;
            }
        }
    }
    for (j = 0; j < 6; j++) {
        if (((mask >> j) & 1) == 0) {
            s32 c = counts[j];
            if (c < bc) {
                best = 1 << j;
                n = 1;
                bc = c;
            } else if (c == bc) {
                best = best | (1 << j);
                n++;
            }
        }
    }
    r = Random_PickSetBit(best, n, 6);
    return r < 6 ? (u8)r : 0;
}
}

namespace nG {
extern "C" void SaveVillagers_InitNewTown(SaveVillagers *self) {
    u8 mask = 0;
    s32 i;
    struct {
        u32 v[2];
    } z;
    SaveVillagers_Clear(self);
    for (i = 0; i < 3; i++) {
        u32 v = SaveVillagers_PickRarePersonality(self, mask);
        if (v < 6) {
            s32 t = SaveVillagers_PickNewSpecies(self, v, 1);
            if (t != -1) {
                _ZN12VillagerData5setupEjjjh(&self->villagers[i], (u8)t, 0, 0, 1);
                SpeciesBits_Set(self->speciesHistory, (u8)t);
                mask = mask | (1 << v);
            }
        }
    }
    Clock_GetDateTime(self->lastMoveDate);
    OutdoorSchedule_InitOrder(self->outdoorSchedule, self);
    Clock_GetDate(self->furnitureDropDate);
    self->lastSickIndex = -1;
}
}

namespace nG {
extern "C" void SaveVillagers_UpdateOutdoor(SaveVillagers *self, s32 x) {
    OutdoorSchedule_Update(self->outdoorSchedule, self, x);
}
}

namespace nG {
extern "C" s32 SaveVillagers_IsOutdoors(SaveVillagers *self, VillagerId *o) {
    s32 t = OutdoorSchedule_FindOutdoorSlot(self->outdoorSchedule, SaveVillagers_FindIndex(self, o));
    s32 r = 0;
    if (t != -1) {
        r = 1;
    }
    return r;
}
}

namespace nG {
extern "C" void SaveVillagers_UpdatePlans(SaveVillagers *self) {
    struct {
        u32 v[2];
    } buf;
    Unk_0207b168_Slot *p = self->villagers;
    s32 i;
    buf.v[0] = 0;
    buf.v[1] = 0;
    Clock_GetDateTime(&buf);
    for (i = 0; i < 8; p++, i++) {
        void *o = _ZN12VillagerData13getVillagerIdEv(p);
        if (((VillagerId *)o)->isValid() != 0) {
            void *q = Villager_GetState(p);
            if (VillagerState_GetPresence(q) == 2 && VillagerState_GetRole(q) == 0 && OutdoorSchedule_FindOutdoorSlot(self->outdoorSchedule, i) == -1
                && Personality_IsAsleep(VillagerId_GetPersonality(o), &buf) == 0) {
                VillagerState_SetPresence(q, 1);
            }
        }
    }
}
}

namespace nG {
extern "C" s32 SaveVillagers_CanMoveIn(SaveVillagers *self, void *p) {
    if (SaveVillagers_Count(self) < 8) {
        if (*(s64 *)self->lastMoveOutDate == 0) {
            if (*(s64 *)self->lastMoveDate == 0 || DateTime_IsInvalid(self->lastMoveDate) != 0) {
                return TRUE;
            }
            if (DateTime_Compare(p, self->lastMoveDate, 0x3f) == 1) {
                if (DateTime_DiffDays(self->lastMoveDate, p) >= 1) {
                    return TRUE;
                }
            }
        } else {
            if (DateTime_Compare(p, self->lastMoveOutDate, 0x3f) == 1) {
                s32 n = DateTime_DiffDays(self->lastMoveOutDate, p);
                if (n > 0) {
                    BOOL t;
                    if (n >= 8) {
                        t = TRUE;
                    } else if (Random_GlobalBelow(8 - n) == 0) {
                        t = TRUE;
                    } else {
                        t = FALSE;
                    }
                    if (t != 0) {
                        return TRUE;
                    }
                    return FALSE;
                }
            }
        }
    }
    return FALSE;
}
}

namespace nG {
extern "C" s32 SaveVillagers_PickMoveInSpecies(SaveVillagers *self) {
    u8 mask = 0;
    s32 i = 0;
    for (; i < 6; i++) {
        u32 v = SaveVillagers_PickRarePersonality(self, mask);
        s32 t;
        if (v >= 6) {
            break;
        }
        t = SaveVillagers_PickNewSpecies(self, v, 0);
        if (t != -1) {
            return t;
        }
        mask = mask | (1 << v);
    }
    return -1;
}
}

namespace nG {
extern "C" void SaveVillagers_TryRandomMoveIn(SaveVillagers *self, void *out) {
    if (SaveVillagers_CanMoveIn(self, out) != 0) {
        s32 x = SaveVillagers_FindFreeSlot(self);
        void *r7 = SaveVillagers_Get(self, x);
        if (r7 != 0) {
            s32 idx;
            _ZN12VillagerData5clearEv(r7);
            SaveVillagers_UpdateHistory(self->speciesHistory, self);
            idx = SaveVillagers_PickMoveInSpecies(self);
            if (idx != -1) {
                _ZN12VillagerData5clearEv(sTransferVillager);
                _ZN12VillagerData5setupEjjjh(sTransferVillager, (u8)idx, 1, 0, 0);
                SaveVillagers_MoveIn(self, r7, x, sTransferVillager, 1, out);
            }
        }
        MI_CpuCopy8(out, self->lastMoveDate, 8);
        if (*(s64 *)self->lastMoveOutDate != 0) {
            MI_CpuCopy8(out, self->lastMoveOutDate, 8);
        }
    }
}
}

namespace nG {
extern "C" void *SaveVillagers_FindBySpecies(SaveVillagers *self, u32 id) {
    Unk_0207b168_Slot *p = self->villagers;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        VillagerId *o = (VillagerId *)_ZN12VillagerData13getVillagerIdEv(p);
        if (o->isValid() != 0 && id == VillagerId_GetSpecies(o)) {
            return p;
        }
    }
    return 0;
}
}

namespace nG {
extern "C" void SaveVillagers_SetLastMovedIn(SaveVillagers *self, s8 v) {
    self->lastMovedInIndex = v;
}
}

namespace nG {
extern "C" void SaveVillagers_SetLastMovedInById(SaveVillagers *self, VillagerId *o) {
    if (o->isValid() != 0) {
        s32 i = SaveVillagers_FindIndex(self, o);
        if (SaveVillagers_IsValidIndex(i) != 0) {
            SaveVillagers_SetLastMovedIn(self, (s8)i);
        }
    }
}
}

namespace nG {
extern "C" void SaveVillagers_MoveIn(SaveVillagers *self, void *a, s32 idx, void *b, u8 c, void *out) {
    SaveVillagers_RefreshPlanStates(self);
    _ZN12VillagerData8copyFromEPv(a, b);
    Villager_StartMovingIn(a, out);
    _ZN20VillagerDataItemView13clearHousePosEv(a);
    Villager_SetMoveInKind(a, c);
    Villager_PickShownFurniture(a);
    OutdoorSchedule_AddToOrder(self->outdoorSchedule, idx);
    VillagerRelations_ResetSlot(self->relations, idx);
    SpeciesBits_Set(self->speciesHistory, VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    MI_CpuCopy8(out, self->lastMoveDate, 8);
    if (*(s64 *)self->lastMoveOutDate != 0) {
        MI_CpuCopy8(out, self->lastMoveOutDate, 8);
    }
    SaveVillagers_SetLastMovedIn(self, (s8)idx);
}
}

namespace nG {
extern "C" void SaveVillagers_MoveOut(SaveVillagers *self, void *a, void *b, s32 idx, void *out) {
    _ZN20VillagerDataItemView16placeHouseMarkerEv(b);
    _ZN20VillagerDataItemView13clearHousePosEv(b);
    TownId_Assign(_ZN20VillagerDataItemView18getMovedFromTownIdEv(b), gSaveTownId);
    self->lastMovedOutSpecies = VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(b));
    OutdoorSchedule_Remove(self->outdoorSchedule, idx);
    VillagerRelations_ResetSlot(self->relations, idx);
    if (a != 0) {
        _ZN12VillagerData8copyFromEPv(a, b);
    }
    _ZN12VillagerData5clearEv(b);
    MI_CpuCopy8(out, self->lastMoveOutDate, 8);
}
}

namespace nG {
extern "C" void SaveVillagers_ProcessTransfer(SaveVillagers *self, void *arg) {
    void *r7;
    s32 idx;
    void *r4;

    _ZN18TownExchangeRecord11getVillagerEv(data_021e7f8c);
    r7 = func_020789a8();
    idx = SaveVillagers_FindMovingOutDue(self, arg);
    r4 = SaveVillagers_Get(self, idx);
    if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(r7))->isValid() == 0) {
        goto nomatch;
    }
    if (TownId_IsValid(_ZN20VillagerDataItemView18getMovedFromTownIdEv(r7)) == 0) {
        goto nomatch;
    }
    {
        Unk_0207b238_Id *g = (Unk_0207b238_Id *)gSaveTownId;
        Unk_0207b238_Id *h = (Unk_0207b238_Id *)_ZN20VillagerDataItemView18getMovedFromTownIdEv(r7);
        if (h->id == g->id && memcmp(h->name, g->name, 8) == 0) {
            if (r4 == 0) {
                return;
            }
            _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
            if (Villager_IsMoreAttachedThan(r7, r4, arg) == 0) {
                SaveVillagers_MoveOut(self, r7, r4, idx, arg);
            } else {
                SaveVillagers_MoveOut(self, 0, r4, idx, arg);
            }
            return;
        }
    }
    if (SaveVillagers_FindBySpecies(self, VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(r7))) == 0
        && self->lastMovedOutSpecies != VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(r7))) {
        if (r4 == 0) {
            s32 x = SaveVillagers_FindFreeSlot(self);
            r4 = (void *)x;
            if (SaveVillagers_IsValidIndex(x) == 0) {
                return;
            }
            SaveVillagers_MoveIn(self, SaveVillagers_Get(self, x), x, r7, 2, arg);
            _ZN12VillagerData5clearEv(r7);
            return;
        }
        _ZN12VillagerData5clearEv(sTransferVillager);
        _ZN12VillagerData8copyFromEPv(sTransferVillager, r7);
        _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
        SaveVillagers_MoveOut(self, r7, r4, idx, arg);
        SaveVillagers_MoveIn(self, r4, idx, sTransferVillager, 2, arg);
        return;
    }
    if (r4 == 0) {
        return;
    }
    _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
    if (Villager_IsMoreAttachedThan(r7, r4, arg) == 0) {
        SaveVillagers_MoveOut(self, r7, r4, idx, arg);
    } else {
        SaveVillagers_MoveOut(self, 0, r4, idx, arg);
    }
    return;
nomatch:
    if (r4 != 0) {
        _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
        SaveVillagers_MoveOut(self, r7, r4, idx, arg);
    }
}
}

namespace nG {
extern "C" s32 SaveVillagers_FindMovingOut(SaveVillagers *self) {
    Unk_0207b168_Slot *p = self->villagers;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (Villager_IsMovingOut(p) != 0) {
            return i;
        }
    }
    return -1;
}
}

namespace nG {
extern "C" s32 SaveVillagers_FindMovingOutDue(SaveVillagers *self, void *name) {
    s32 idx = SaveVillagers_FindMovingOut(self);
    if (SaveVillagers_Get(self, idx) != 0) {
        void *q = VillagerPlanBlock_GetPlan(Villager_GetPlan());
        s32 r = DateTime_Compare(name, func_0209b010(q), 0x3f);
        s32 n = 0;
        if (r == 1) {
            n = DateTime_DiffDays(func_0209b010(q), name);
        } else if (r == -1) {
            n = DateTime_DiffDays(name, func_0209b010(q));
        }
        if (n >= 2) {
            return idx;
        }
    }
    return -1;
}
}

namespace nG {
extern "C" s32 SaveVillagers_FindJustMovedIn(Unk_0207b168_Slot *p) {
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (Villager_IsJustMovedIn(p) != 0) {
            return i;
        }
    }
    return -1;
}
}

namespace nF {
extern "C" BOOL SaveVillagers_ShouldStartMoveOut(u8 *self, u8 *x) {
    if (SaveVillagers_Count(self) == 8) {
        s32 r6 = SaveVillagers_FindMovingOut(self);
        s32 r0 = SaveVillagers_FindJustMovedIn(self);
        if (r6 == -1 && r0 == -1) {
            if (DateTime_Compare((Unk_0207ae28_Buf *)x, self + 0x38c4, 0x3f) == 1) {
                s32 n = DateTime_DiffDays(self + 0x38c4, (Unk_0207ae28_Buf *)x);
                if (n > 0) {
                    BOOL t;
                    if (n >= 4) {
                        t = TRUE;
                    } else if (Random_GlobalBelow(4 - n) == 0) {
                        t = TRUE;
                    } else {
                        t = FALSE;
                    }
                    if (t) {
                        return TRUE;
                    }
                    return FALSE;
                }
            }
        }
    }
    return FALSE;
}
}

namespace nF {
extern "C" s32 SaveVillagers_PickMoveOutCandidate(u8 *self) {
    u8 *p = self;
    s32 sp4 = SaveVillagers_GetUnk3830Index(self);
    u32 mask = 0;
    s32 cnt = 0;
    s32 r4 = 0;
    for (; r4 < 8; r4++) {
        if (r4 != *(s8 *)(self + 0x38e9) && r4 != sp4 && _ZN12VillagerData13getVillagerIdEv(p)->isValid() && Villager_IsFreeOfPlayerErrands(p)) {
            mask |= 1 << r4;
            mask = (u8)mask;
            cnt++;
        }
        p += 0x700;
    }
    return Random_PickSetBit(mask, cnt, 8);
}
}

namespace nF {
extern "C" void SaveVillagers_TryStartMoveOut(u8 *self, u8 *x) {
    if (SaveVillagers_ShouldStartMoveOut(self, x)) {
        s32 r = SaveVillagers_PickMoveOutCandidate(self);
        if (r != -1) {
            Villager_StartMovingOut(self + r * 0x700, x);
        }
    }
}
}

namespace nF {
extern "C" void SaveVillagers_UpdatePlanStates(u8 *self, Unk_0207ae28_Buf *x) {
    u8 *p = self;
    s32 i = 0;
    do {
        if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
            Villager_InitPlanDateA(p, (u8 *)x);
            Villager_InitPlanDateB(p, (u8 *)x);
            if (Villager_UpdatePlanState(p, self + 0x38c4, self + 0x38cc, (u8 *)x) != 0xc) {
                PlanErrand_Clear(VillagerPlanBlock_GetErrand(Villager_GetPlan(p)));
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
}
}

namespace nF {
extern "C" void SaveVillagers_RefreshPlanStates(u8 *self) {
    u8 *p = self;
    s32 i = 0;
    s32 idx = i;
    do {
        if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
            void *r6 = VillagerPlanBlock_GetPlan(Villager_GetPlan(p));
            void *r7 = _ZN12VillagerPlan13func_0209b2e4Ev();
            s32 r1 = _ZN12VillagerPlan13func_0209b044EPv(r6, idx);
            if (r1 != 0xc) {
                Villager_PickRoomLayout(p, r1, r7);
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
}
}

namespace nF {
extern "C" void SaveVillagers_UpdatePlansNow(u8 *self) {
    if (!gCommManager->isSlotActive(gCommManager->myAid)) {
        Unk_0207ae28_Buf b;
        b.v[0] = 0;
        b.v[1] = 0;
        Clock_GetDateTime(&b);
        s32 i = 0;
        u8 *p = self;
        Unk_0207ae28_Buf *pb = &b;
        for (; i < 8; i++) {
            if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
                Villager_UpdatePlan(p, pb);
            }
            p += 0x700;
        }
    }
}
}

namespace nF {
extern "C" void SaveVillagers_DailyUpdate(u8 *self, s32 flag) {
    Unk_0207ae28_Buf b;
    b.v[0] = 0;
    b.v[1] = 0;
    Clock_GetDateTime(&b);
    if (DateTime_Compare(&b, self + 0x38c4, 0x3f) == -1) {
        MI_CpuCopy8(&b, self + 0x38c4, 8);
        Unk_0207ae84_Mgr *m = (Unk_0207ae84_Mgr *)self;
        if (m->unk_38cc_64 != 0) {
            MI_CpuCopy8(&b, &m->unk_38cc, 8);
        }
    }
    SaveVillagers_UpdatePlayerErrandKind15(self, &b);
    SaveVillagers_UpdatePlanStates(self, &b);
    SaveVillagers_ProcessTransfer(self, &b);
    SaveVillagers_TryStartMoveOut(self, (u8 *)&b);
    SaveVillagers_TryRandomMoveIn(self, &b);
    SaveVillagers_DailyFurnitureUpdate(self);
    SaveVillagers_DailyVillagerUpdate(self, flag);
    SaveVillagers_UpdateSickVillager(self);
    if (flag == 0) {
        SaveVillagers_UpdateBirthdayNotices(self);
    }
    SaveVillagers_UpdateBirthdayParty(self);
}
}

namespace nF {
extern "C" void SaveVillagers_DailyFurnitureUpdate(u8 *self) {
    Unk_0207ae28_Buf a;
    Unk_0207ae28_Buf b;
    DateTime_Make(&a, self + 0x38ee, 0, 0, 0);
    b.v[0] = 0;
    b.v[1] = 0;
    Clock_GetDateTime(&b);
    if (DateTime_Compare(&b, (u8 *)&a, 0x38)) {
        u8 *p = self;
        for (s32 i = 0; i < 8; i++) {
            Villager_DropRandomFurniture(p);
            p += 0x700;
        }
        Clock_GetDate(self + 0x38ee);
    }
}
}

namespace nF {
extern "C" s32 HousePos_FindNthValid(HousePos *p, s32 n, u32 k) {
    s32 i = 0;
    s32 res = -1;
    for (; i < n; p++, i++) {
        if (HousePos_IsValid(p)) {
            if (k == 0) {
                res = i;
                break;
            }
            k--;
        }
    }
    return res;
}
}

namespace nZ {
extern "C" {
extern const u32 sVillagerEventIds[11];
const u32 sVillagerEventIds[11] = {
    0x0000000d, 0x0000000c, 0x0000000f, 0x00000009, 0x0000000a, 0x0000000e, 0x00000010, 0x00000011,
    0x00000012, 0x00000013, 0x0000000b,
};
extern const u8 sSpNpcInfoTable[116];
const u8 sSpNpcInfoTable[116] = {
    0x00, 0x00, 0x05, 0x00, 0x02, 0x05, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x08, 0x01,
    0x01, 0x08, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x02, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00,
};
extern const u8 sPersonalitySleepHours[24];
const u8 sPersonalitySleepHours[24] = {
    0x01, 0x1e, 0x08, 0x00, 0x02, 0x00, 0x06, 0x1e, 0x04, 0x1e, 0x0a, 0x00, 0x01, 0x00, 0x05, 0x00,
    0x02, 0x1e, 0x07, 0x00, 0x03, 0x1e, 0x09, 0x00,
};
}
}

namespace nF {
extern "C" void SaveVillagers_PlaceMissingHouses(u8 *self) {
    s32 n;
    void *g = TownBlockMap_Get(self);
    static HousePos arr[30];
    if (g != NULL) {
        n = 0;
        s32 *d = (s32 *)((u8 *)g + 0xc);
        s32 w = d[0];
        s32 h = d[1];
        s32 xy[2];
        s32 i;
        xy[0] = 0;
        xy[1] = 0;
        for (i = 0; i < 30; i++) {
            HousePos_Clear(&arr[i]);
        }
        for (xy[1] = 0; xy[1] < h; xy[1]++) {
            for (xy[0] = 0; xy[0] < w; xy[0]++) {
                struct Q { s32 x, y; };
                struct L { static inline u16 *Cell(void *g, const Q &q) { s32 x = q.x; s32 y = q.y; s32 hx = x >> 4, hy = y >> 4; return BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0); } };
                u16 *t = L::Cell(g, *(Q *)xy);
                if (t != NULL && *t == 0x500a) {
                    HousePos_SetFromUnit(&arr[n], xy);
                    n++;
                }
            }
        }
        if (n > 0) {
            u16 v = 0xfff1;
            u8 *p = self;
            for (i = 0; i < 8; i++) {
                if (_ZN12VillagerData13getVillagerIdEv(p)->isValid() && !_ZN20VillagerDataItemView11hasHousePosEv(p)) {
                    s32 idx = HousePos_FindNthValid(arr, 30, Random_GlobalBelow(n));
                    v = Item_MakeNeighborHouse(i);
                    HousePos *e = &arr[idx];
                    if (BlockMap_PutStructure(g, &v, arr[idx].x, e->z)) {
                        _ZN20VillagerDataItemView11setHousePosEPh(p, e);
                    }
                    HousePos_Clear(e);
                    n--;
                    if (n <= 0) {
                        break;
                    }
                }
                p += 0x700;
            }
        }
    }
}
}

namespace nF {
extern "C" u32 SaveVillagers_GetRelationLevel(u8 *self, s32 a, s32 b) {
    s32 v = VillagerRelations_GetScore(self + 0x3800, a, b);
    u32 r = 4;
    for (s32 i = 0; i < 4; i++) {
        if (v >= sRelationLevelThresholds[i]) {
            r = i;
            break;
        }
    }
    return r;
}
}

namespace nF {
extern "C" s32 SaveVillagers_GetRelationLevelOf(u8 *self, u8 *p1, u8 *p2) {
    s32 a = SaveVillagers_FindIndex(self, _ZN12VillagerData13getVillagerIdEv(p1));
    s32 b = SaveVillagers_FindIndex(self, _ZN12VillagerData13getVillagerIdEv(p2));
    if (a != b && SaveVillagers_IsValidIndex(a) && SaveVillagers_IsValidIndex(b)) {
        return SaveVillagers_GetRelationLevel(self, a, b);
    }
    return 4;
}
}

namespace nF {
extern "C" void SaveVillagers_AddRelation(u8 *self, u8 *a, u8 *b, s32 c) {
    if (!gCommManager->isOnline()) {
        s32 x = SaveVillagers_FindIndex(self, (VillagerId *)a);
        s32 y = SaveVillagers_FindIndex(self, (VillagerId *)b);
        VillagerRelations_Add(self + 0x3800, x, y, c);
    }
}
}

namespace nF {
extern "C" u32 SaveVillagers_FindByRelation(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best) {
    s32 r6 = SaveVillagers_FindIndex(self, _ZN12VillagerData13getVillagerIdEv(p));
    u8 *r7 = NULL;
    if (_ZN12VillagerData13getVillagerIdEv(p)->isValid() && SaveVillagers_IsValidIndex(r6)) {
        for (s32 i = 0; i < 8; i++) {
            if (i != r6 && SaveVillagers_IsOccupied(self, i)) {
                s32 v = VillagerRelations_GetScore(self + 0x3800, r6, i);
                if ((*cmp)(best, v)) {
                    r7 = SaveVillagers_Get(self, i);
                    best = v;
                } else if (best == v) {
                    if (r7 == NULL || (Random_GlobalBelow(4) & 1) == 1) {
                        r7 = SaveVillagers_Get(self, i);
                    }
                }
            }
        }
    }
    return (u32)r7;
}
}

namespace nF {
extern "C" BOOL Relation_IsHigher(s32 a, s32 b) {
    if (b > a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nF {
extern "C" BOOL Relation_IsLower(s32 a, s32 b) {
    if (b < a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nF {
extern "C" u32 SaveVillagers_FindFriendOf(u8 *self, u8 *p) {
    BOOL (*fn)(s32, s32) = Relation_IsHigher;
    return SaveVillagers_FindByRelation(self, p, &fn, (s32)0x80000000);
}
}

namespace nF {
extern "C" u32 SaveVillagers_FindEnemyOf(u8 *self, u8 *p) {
    BOOL (*fn)(s32, s32) = Relation_IsLower;
    return SaveVillagers_FindByRelation(self, p, &fn, 0x7fffffff);
}
}

namespace nF {
extern "C" s32 VillagerStates_GetEntry(u32 a) {
    return VillagerStateTable_GetEntry(VillagerStates_Get(), a);
}
}

namespace nF {
extern "C" s32 Villager_GetPlayerErrandKind(u8 *self, u8 *p, u8 *r4) {
    u16 *r5 = (u16 *)_ZN12VillagerData13getVillagerIdEv(p);
    s32 result = 0x16;
    if (r4 == NULL) {
        r4 = PlayerData_GetCurrent();
    }
    if (r4 != NULL) {
        r4 = _ZN10PlayerData10getErrandsEv(r4);
        u8 *a = PlayerErrands_GetSlot(r4, 0);
        u8 *b = PlayerErrands_GetSlot(r4, 1);
        u32 *r4u = (u32 *)(r4 + 0x88);
        if (_ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(a))) {
            u16 *r7 = PlayerErrandSlot_GetVillager(a, 0);
            if (r7[0] == r5[0] && memcmp(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = _ZN12ErrandRecord7getKindEv(PlayerErrandSlot_GetRecord(a));
                goto end;
            }
        }
        if (_ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(b))) {
            u16 *r7 = PlayerErrandSlot_GetVillager(b, 0);
            if (r7[0] == r5[0] && memcmp(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = _ZN12ErrandRecord7getKindEv(PlayerErrandSlot_GetRecord(b));
                goto end;
            }
        }
        if (_ZN12ErrandRecord8isActiveEv(_ZN18SickVillagerRecord13func_0209978cEv(self + 0x3830))) {
            u16 *r7 = _ZN18SickVillagerRecord13getVillagerIdEv(self + 0x3830);
            if (r7[0] == r5[0] && memcmp(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = _ZN12ErrandRecord7getKindEv(_ZN18SickVillagerRecord13func_0209978cEv(self + 0x3830));
                goto end;
            }
        }
        if (HouseVisitInvite_IsFrom((u8 *)r4u, r5)) {
            r4u += 3;
            result = _ZN12ErrandRecord7getKindEv(r4u);
        } else if (_ZN12ErrandRecord8isActiveEv(PlanErrand_GetRecord(VillagerPlanBlock_GetErrand(Villager_GetPlan(p))))) {
            result = _ZN12ErrandRecord7getKindEv(PlanErrand_GetRecord(VillagerPlanBlock_GetErrand(Villager_GetPlan(p))));
        }
    }
end:
    return result;
}
}

namespace nF {
extern "C" s32 Villager_GetErrandKind(u8 *self, u8 *p, u8 *r5) {
    u8 *q = (u8 *)Villager_GetState(p);
    s32 r7 = 0x16;
    if (r5 == NULL) {
        r5 = PlayerData_GetCurrent();
    }
    if (q != NULL && r5 != NULL) {
        s32 r = Villager_GetPlayerErrandKind(self, p, r5);
        if ((u32)r < 0x16) {
            r7 = r;
        } else if (_ZN12ErrandRecord8isActiveEv(VillagerState_GetErrand(q))) {
            r7 = _ZN12ErrandRecord7getKindEv(VillagerState_GetErrand(q));
        }
    }
    return r7;
}
}

namespace nF {
extern "C" BOOL SaveVillagers_ShouldAssignErrands(u8 *self) {
    if (gCommManager->isOnline()) {
        return FALSE;
    }
    u8 *p = self;
    s32 n = SaveVillagers_Count(self);
    s32 c5 = 0;
    s32 c4 = c5;
    s32 i = c5;
    u8 *zero = (u8 *)c5;
    do {
        if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
            s32 r = Villager_GetErrandKind(self, p, zero);
            if (r == 0x16) {
                c5++;
            } else if (Errand_GetClass(r) != 1) {
                c4++;
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
    if (n >= c4 && ((n - c4) >> 1) < c5) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nF {
extern "C" void VillagerStates_ResetErrands() {
    u8 *p = VillagerStates_Get();
    for (s32 i = 0; i < 8; i++) {
        _ZN12ErrandRecord5clearEv(VillagerState_GetErrand(p));
        p += 0x2c;
    }
}
}

namespace nE {
extern "C" void SaveVillagers_AssignErrands(void *bb) {
    u8 *b = (u8 *)bb;
    s32 a = PlayerData_GetCurrent(b);
    s32 r5 = 0x11;
    s32 r4 = 8;
    if (a != 0) {
        u16 v[2];
        u32 idx = 0;
        s32 self = SaveVillagers_GetUnk3830Index(b);
        s32 i;
        MI_CpuFill8(sErrandKindTaken, 0, r5);
        MI_CpuFill8(sErrandVillagerDone, 0, r4);
        for (i = 0; i < 13; i++) {
            if (Errand_GetClassIndex(&idx, sReservedErrandKinds[i])) {
                sErrandKindTaken[idx] = 1;
                r5--;
            }
        }
        for (i = 0; i < 8; i++) {
            u8 *p = b + i * 0x700;
            if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid() && Villager_GetResidentStatus(p) == 3 && i != self) {
                u32 t = Villager_GetErrandKind(b, p, a);
                if (t < 0x16) {
                    if (Errand_GetClass() == 1) {
                        if (Errand_GetClassIndex(&idx, t)) {
                            sErrandVillagerDone[i] = 1;
                            r4--;
                            sErrandKindTaken[idx] = 1;
                            r5--;
                        }
                    }
                }
            } else {
                sErrandVillagerDone[i] = 1;
                r4--;
            }
        }
        s32 zero = 0;
        for (i = 0; i < 8; i++) {
            u8 *p2;
            u8 *flag = &sErrandVillagerDone[i];
            if (*flag == 0) {
                p2 = b + i * 0x700;
                s32 e = VillagerPlanBlock_GetPlan(Villager_GetPlan(p2));
                if (_ZN12VillagerPlan8hasTrendEv(e)) {
                    if (_ZN12VillagerPlan13getStateGroupEv(e) == 0) {
                        s32 x = VillagerState_GetErrand(Villager_GetState(p2));
                        v[0] = 0xfff1;
                        _ZN12ErrandRecord5startEhPth(x, _ZN12VillagerPlan8getStateEv(e), v, zero);
                        *flag = 1;
                        r4--;
                    }
                }
            }
        }
        while (r4 > 0 && r5 > 0) {
            u8 *g;
            s32 m;
            s32 k2;
            u8 *f;
            s32 k;
            s32 x;
            s32 j;
            k = Random_GlobalBelow(r4);
            for (j = 0; j < 8; j++) {
                f = &sErrandVillagerDone[j];
                if (*f == 0) {
                    if (k == 0) {
                        x = VillagerState_GetErrand(Villager_GetState(b + j * 0x700));
                        k2 = Random_GlobalBelow(r5);
                        for (m = 0; m < 17; m++) {
                            g = &sErrandKindTaken[m];
                            if (*g == 0) {
                                if (k2 == 0) {
                                    v[1] = 0xfff1;
                                    _ZN12ErrandRecord5startEhPth(x, (u8)(m + 5), &v[1], 0);
                                    *g = 1;
                                    r5--;
                                    break;
                                }
                                k2--;
                            }
                        }
                        *f = 1;
                        r4--;
                        break;
                    }
                    k--;
                }
            }
        }
    }
}
}

namespace nE {
extern "C" void SaveVillagers_UpdateErrands(void *b) {
    if (SaveVillagers_ShouldAssignErrands(b)) SaveVillagers_AssignErrands(b);
}
}

namespace nE {
extern "C" void SaveVillagers_UpdatePlayerErrandKind15(s32 unused, s32 q) {
    s32 i;
    for (i = 0; i < 4; i++) {
        void *e = PlayerData_GetResident(gSavePlayers, i);
        if (_ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(e))) {
            u8 *r4 = (u8 *)_ZN10PlayerData10getErrandsEv(e) + 0x88;
            u8 *r6 = r4 + 0xc;
            if (_ZN12ErrandRecord8isActiveEv((s32)r6)) {
                if (_ZN12ErrandRecord7getKindEv(r6) == 0x15) {
                    if (((VillagerId *)r4)->isValid()) {
                        u8 *r7 = r4 + 0x18;
                        if (_ZN12ErrandRecord7getStepEv((s32)r6) == 0) {
                            if (DateTime_DiffDays((void *)ErrandRecord_GetTime(r6), q) < 0) HouseVisitInvite_Clear(r4);
                        } else if (((Unk_0207a550_Rec *)r4)->unk_20 != 0) {
                            r7 = (u8 *)DateTime_DiffDays(r7, q);
                            _ZN12ErrandRecord7setStepEh(r6, 4);
                            if (r7) {
                                u32 bits = ((Unk_0207a550_Rec *)r4)->unk_20;
                                if (Villager_SendHouseVisitLetter(bits, _ZN10PlayerData11getPlayerIdEv(e), r4)) HouseVisitInvite_Clear(r4);
                            }
                        } else {
                            HouseVisitInvite_Clear(r4);
                        }
                    }
                }
            }
        }
    }
}
}

namespace nE {
extern "C" void SaveVillagers_DailyVillagerUpdate(u8 *p, s32 q) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
            if (q == 0) {
                if (Villager_MaybeCopyAblePattern(i, 0)) {
                    u16 v = 0x12a8;
                    _ZN23VillagerDataProfileView8setShirtEPt(p, &v);
                }
            }
            Villager_UpdatePlanErrand(p);
            s32 a = VillagerPlanBlock_GetErrand(Villager_GetPlan(p));
            s32 c = PlanErrand_GetRecord(a);
            if (_ZN12ErrandRecord8isActiveEv(c)) {
                if (_ZN12ErrandRecord7getStepEv(c) == 0) {
                    _ZN8PlayerId5clearEv((void *)PlanErrand_GetPlayer(a));
                }
            }
            Villager_PlaceReceivedItems(p);
        }
        p += 0x700;
    }
}
}

namespace nE {
extern "C" s32 SaveVillagers_GetUnk3830(void *p) {
    return (s32)((u8 *)p + 0x3830);
}
}

namespace nE {
extern "C" s32 SaveVillagers_GetUnk3830Index(void *p) {
    if (_ZN12ErrandRecord8isActiveEv(_ZN18SickVillagerRecord13func_0209978cEv((void *)SaveVillagers_GetUnk3830(p)))) {
        return SaveVillagers_FindIndex(p, _ZN18SickVillagerRecord13getVillagerIdEv((void *)SaveVillagers_GetUnk3830(p)));
    }
    return -1;
}
}

namespace nE {
extern "C" s32 SaveVillagers_PickSickVillager(void *pp, u32 idx) {
    u8 *b = (u8 *)pp;
    if (idx >= 12) return -1;
    u8 mask = 0;
    Unk_02079f54_Date d;
    d.v[0] = 0;
    d.v[1] = 0;
    u8 *p = b;
    s32 cnt = 0;
    s32 i;
    Clock_GetDateTime(&d);
    for (i = 0; i < 8; i++) {
        if (i != *(s8 *)(b + 0x38ea)) {
            if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
                if (Villager_GetResidentStatus(p) == 3) {
                    if (Villager_IsFreeOfPlayerErrands(p)) {
                        if (Villager_GetUpcomingBirthdayDay(p, 15, &d) == -1) {
                            mask |= 1 << i;
                            cnt++;
                        }
                    }
                }
            }
        }
        p += 0x700;
    }
    s32 r4 = Random_PickSetBit(mask, cnt, 8);
    if (SaveVillagers_Get(b, r4)) {
        u8 *q = Villager_GetInfo();
        if (!(Random_GlobalBelow(sMonthlySickRoll[idx]) >= q[3] + 0x80)) return r4;
    }
    return -1;
}
}

namespace nE {
extern "C" BOOL SaveVillagers_CanSomeoneGetSick(void *p) {
    if (SaveVillagers_Count(p) >= 7) return TRUE;
    return FALSE;
}
}

namespace nE {
extern "C" void SaveVillagers_AdvanceSickDay(void *pp) {
    u8 *b = (u8 *)pp;
    u32 c = b[0x38be];
    void *r = NULL;
    if (_ZN18SickVillagerRecord16hasTodaysVisitorEv(b + 0x3830) || b[0x38b9]) {
        if (c == 0) c = 5;
        else if ((u8)c < 5) c--;
        b[0x38be] = c;
        r = _ZN18SickVillagerRecord10getVisitorEj(b + 0x3830, b[0x38be]);
    } else {
        u8 n = c + 1;
        if (n < 5) {
            b[0x38be] = n;
            r = _ZN18SickVillagerRecord10getVisitorEj(b + 0x3830, b[0x38be]);
        } else if ((u8)c < 5) {
            r = _ZN18SickVillagerRecord10getVisitorEj(b + 0x3830, (u8)c);
        }
    }
    if (r) _ZN8PlayerId5clearEv(r);
}
}

namespace nE {
extern "C" void SaveVillagers_UpdateSickVillager(u8 *b) {
    Unk_0207a104_Date d;
    s32 r4, r6, r7;
    s32 v1, flag;
    s32 sel;
    sel = SaveVillagers_GetUnk3830Index(b);
    Clock_GetDate(&d);
    if (sel != -1) {
        if (Date_IsAfterOrEqual(&d, b + 0x38b6) == 0) {
            _ZN18SickVillagerRecord11resetRecordEv(b + 0x3830);
            return;
        }
        if (_ZN18SickVillagerRecord11isRecoveredEv(b + 0x3830)) {
            if (_ZN18SickVillagerRecord19isRecentlyRecoveredEP17Unk_020994cc_Date(b + 0x3830, &d) == 0) _ZN18SickVillagerRecord11resetRecordEv(b + 0x3830);
            return;
        }
        r7 = Date_DaysBetween(&d, b + 0x38ba);
        if (r7 == 0) return;
        v1 = 0;
        r4 = 0;
        flag = 0;
        if (b[0x38b9] == 0) {
            if (Date_DaysBetween(&d, b + 0x38b6) >= 10) {
                s32 t = Date_DaysBetween(b + 0x38ba, b + 0x38b6);
                if (t >= 0 && t < 10) v1 = 9 - t;
                flag = 1;
            }
        }
        if (r7 < 0) r6 = -r7; else r6 = r7;
        if (v1 > r6) v1 = r7;
        while (v1 > 0) {
            SaveVillagers_AdvanceSickDay(b);
            v1--;
            r6--;
            r4++;
        }
        if (flag) b[0x38b9] = 1;
        while (r6 > 0) {
            SaveVillagers_AdvanceSickDay(b);
            r6--;
            r4++;
            if (_ZN18SickVillagerRecord11isRecoveredEv(b + 0x3830)) break;
        }
        if (_ZN18SickVillagerRecord11isRecoveredEv(b + 0x3830)) {
            if (r6 >= 3 && r7 > 0) {
                _ZN18SickVillagerRecord11resetRecordEv(b + 0x3830);
                return;
            }
            if (r4 > 0) {
                DateTime_Make(d.b + 4, b + 0x38ba, 0, 0, 0);
                if (r7 > 0) {
                    DateTime_AddDays(d.b + 4, r4);
                    b[0x38bc] = d.b[9];
                    b[0x38bb] = d.b[8];
                    b[0x38ba] = d.b[7];
                } else if (r6 > 0) {
                    _ZN18SickVillagerRecord11resetRecordEv(b + 0x3830);
                } else {
                    DateTime_SubDays(d.b + 4, r4);
                    b[0x38bc] = d.b[9];
                    b[0x38bb] = d.b[8];
                    b[0x38ba] = d.b[7];
                }
            }
        } else {
            MI_CpuCopy8(&d, b + 0x38ba, 4);
        }
    } else {
        if (SaveVillagers_CanSomeoneGetSick(b)) {
            r4 = SaveVillagers_PickSickVillager(b, (u8)(d.b[1] - 1));
            if (r4 != -1) {
                void *q = SaveVillagers_Get(b, r4);
                if (q) {
                    if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(q))->isValid()) {
                        _ZN18SickVillagerRecord13startSicknessEP17Unk_020030d8_R256Ph(b + 0x3830, _ZN12VillagerData13getVillagerIdEv(q), &d);
                        b[0x38ea] = r4;
                        OutdoorSchedule_ForceReroll(b + 0x381c);
                    }
                }
            }
        }
    }
}
}

namespace nE {
extern "C" void SaveVillagers_PickGreeter(u8 *base) {
    u8 *p = base;
    u8 mask = 0;
    s32 cnt = 0;
    s32 res = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
            if (VillagerState_GetPresence(Villager_GetState(p)) == 0) {
                mask |= 1 << i;
                cnt++;
            }
        }
        p += 0x700;
    }
    s32 r = Random_PickSetBit(mask, cnt, 8);
    if (r != -1) {
        res = (u8)r;
    } else {
        u8 *p2;
        u8 m2;
        s32 c2;
        s32 j;
        m2 = 0;
        c2 = 0;
        p2 = base;
        j = 0;
        for (; j < 8; j++) {
            if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p2))->isValid()) {
                if (Villager_GetResidentStatus(p2) == 3) {
                    if (j != SaveVillagers_GetUnk3830Index(base)) {
                        m2 |= 1 << j;
                        c2++;
                    }
                }
            }
            p2 += 0x700;
        }
        r = Random_PickSetBit(m2, c2, 8);
        if (r != -1) res = (u8)r;
    }
    VillagerStates_Get()[0x161] = res;
}
}

namespace nE {
extern "C" s32 VillagerEvent_GetTodayIndex() {
    Unk_02079f54_Date a;
    Unk_02079f54_Date b;
    u32 *t = sVillagerEventIds;
    s32 i;
    a.v[0] = 0;
    a.v[1] = 0;
    Clock_GetDateTime(&a);
    for (i = 0; i < 11; i++) {
        u32 v = *t;
        BOOL f;
        MI_CpuCopy8(&a, &b, 8);
        if (Event_GetState(v, &b, 0)) f = TRUE; else f = FALSE;
        if (f) {
            if (v == EventAnnounce_GetCurrentEvent()) return i;
        }
        t++;
    }
    return 11;
}
}

namespace nE {
extern "C" s32 VillagerEvent_FindUpcomingIndex(u32 n, void *src) {
    Unk_02079f54_Date a;
    Unk_02079f54_Date b;
    Unk_0207a3b8_Item buf[7];
    u32 i;
    a.v[0] = 0;
    a.v[1] = 0;
    if (src == NULL) {
        Clock_GetDateTime(&a);
    } else {
        MI_CpuCopy8(src, &a, 8);
    }
    for (i = 0; i <= n; i++) {
        s32 cnt, k;
        Unk_0207a3b8_Item *e;
        e = buf;
        MI_CpuCopy8(&a, &b, 8);
        cnt = EventSchedule_CollectDayAll(buf, &b);
        for (k = 0; k < cnt; k++) {
            s32 j;
            u32 *t = sVillagerEventIds;
            for (j = 0; j < 11; j++) {
                if (e->eventId == *t) return j;
                t++;
            }
            e++;
        }
        DateTime_AddDays(&a, 1);
    }
    return 11;
}
}

namespace nE {
extern "C" void SaveVillagers_InitTalkUrges(u8 *p, void *q) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
            Villager_InitTalkUrge(p, q);
        }
        p += 0x700;
    }
}
}

namespace nE {
extern "C" void SaveVillagers_DoubleTalkUrges(u8 *p) {
    s32 i;
    if (gCommManager->isSlotActive(gCommManager->myAid) == 0) {
        for (i = 0; i < 8; i++) {
            if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
                Villager_DoubleTalkUrge(p);
            }
            p += 0x700;
        }
    }
}
}

namespace nD {
extern "C" void SaveVillagers_ApplyBadFortune(void *self0) {
    u8 *self = (u8 *)self0;
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid) == 0) {
        s32 i;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) != 0) {
                Villager_HalveTalkUrge(self);
            }
        }
    }
}
}

namespace nD {
extern "C" void SaveVillagers_GiveFortuneGreeting(void *self0, void *p) {
    u8 *self = (u8 *)self0;
    if (_ZN8PlayerId7isValidEv(p) != 0) {
        u8 *s = self;
        u8 mask = 0;
        s32 cnt = 0;
        s32 i;
        for (i = 0; i < 8; s += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
                if (VillagerState_GetPresence(Villager_GetState(s)) == 0) {
                    if (Villager_FindMemory(s, p) != 0) {
                        mask |= (1 << i);
                        cnt++;
                    }
                }
            }
        }
        s32 r4 = Random_PickSetBit(mask, cnt, 8);
        if (SaveVillagers_IsValidIndex(r4) == 0) {
            mask = 0;
            cnt = 0;
            s = self;
            for (i = 0; i < 8; s += 0x700, i++) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
                    if (Villager_GetResidentStatus(s) == 3) {
                        if (i != SaveVillagers_GetUnk3830Index(self)) {
                            if (Villager_FindMemory(s, p) != 0) {
                                mask |= (1 << i);
                                cnt++;
                            }
                        }
                    }
                }
            }
            r4 = Random_PickSetBit(mask, cnt, 8);
        }
        void *o = SaveVillagers_Get(self, r4);
        if (o != NULL) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                void *q = (void *)Villager_FindMemory(o, p);
                if (q != NULL) {
                    _ZN14VillagerMemory18setFortuneGreetingEv(q);
                }
            }
        }
    }
}
}

namespace nD {
extern "C" void SaveVillagers_ApplyGoodFortune(void *self, void *p) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        SaveVillagers_GiveFortuneGreeting(self, p);
    }
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid) == 0) {
        SaveVillagers_DoubleTalkUrges(self);
    }
}
}

namespace nD {
extern "C" void SaveVillagers_UpdateRoomInfo(void *self, s32 idx) {
    void *o = SaveVillagers_Get(self, idx);
    if (o != NULL) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
            s32 v5 = 5;
            s32 z1 = 0;
            s32 z2 = 0;
            u16 h = 0;
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                Unk_02079ce8_Obj *r5 = (Unk_02079ce8_Obj *)Villager_GetState(o);
                if (r5 != NULL) {
                    u32 x[4];
                    RoomScoreEvaluator_Construct(x);
                    h = 0;
                    r5->roomScore = HappyRoom_EvaluateVillagerRoom(x, idx, &h, &v5, &z1, &z2);
                    r5->roomBonusFlags = h;
                    RoomScoreEvaluator_Destruct(x);
                }
            }
        }
    }
}
}

namespace nD {
extern "C" void SaveVillagers_UpdateAllRoomInfo(void *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        SaveVillagers_UpdateRoomInfo(self, i);
    }
}
}

namespace nD {
extern "C" void SaveVillagers_ResetMoods(u8 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *s = self + i * 0x700;
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
            VillagerState_SetMood(Villager_GetState(s), 0);
            VillagerState_SetMoodTimer(Villager_GetState(s), 0);
        }
    }
}
}

namespace nD {
extern "C" void SaveVillagers_UpdateBirthdayNotices(u8 *self) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    Clock_GetDateTime(buf);
    s32 i = 0;
    for (; i < 8; self += 0x700, i++) {
        void *o = _ZN12VillagerData13getVillagerIdEv(self);
        if (_ZN10VillagerId7isValidEv(o) != 0) {
            if (Villager_GetResidentStatus(self) == 3) {
                s32 j;
                for (j = 0; j < 4; j++) {
                    void *r7 = PlayerData_GetResident(gSavePlayers, j);
                    if (r7 != NULL) {
                        void *a = _ZN10PlayerData11getPlayerIdEv(r7);
                        if (_ZN8PlayerId7isValidEv(a) != 0) {
                            if (_ZN12Unk_02097ff48testFlagEj(r7, 1) == 0) {
                                s32 t = Villager_GetUpcomingBirthdayDay(self, 7, buf);
                                if (t != -1) {
                                    s32 c = _ZN12Unk_02097ff413func_02098198Ej(r7, i);
                                    if (c != t) {
                                        if (Villager_SendBirthdayNoticeLetter(a, o) != 0) {
                                            _ZN12Unk_02097ff413func_02098188Ejj(r7, i, (u8)t);
                                        }
                                    }
                                } else {
                                    _ZN12Unk_02097ff413func_02098188Ejj(r7, i, 0xff);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
}

namespace nD {
extern "C" s32 SaveVillagers_PickBirthdayGuest(void *self0, s32 x) {
    u8 *self = (u8 *)self0;
    u8 *s = self;
    s32 best = -100000;
    s32 cnt, i;
    u8 mask;
    mask = 0;
    cnt = 0;
    for (i = 0; i < 8; s += 0x700, i++) {
        if (i != x && Villager_CanAttendParty(s) != 0) {
            s32 v = VillagerRelations_GetScore(self + 0x3800, x, i);
            if (v > best) {
                best = v;
                mask = (u8)(1 << i);
                cnt = 1;
            } else if (v == best) {
                mask |= (1 << i);
                cnt++;
            }
        }
    }
    return Random_PickSetBit(mask, cnt, 8);
}
}

namespace nD {
extern "C" s32 SaveVillagers_FindBirthdayVillager(void *self0, void *p0) {
    u8 *self = (u8 *)self0;
    u8 *p = (u8 *)p0;
    struct { u8 v[8]; } b;
    u8 out[0x54];
    void *r0 = PlayerData_GetCurrent();
    if (r0 != NULL && _ZN12Unk_02097ff48testFlagEj(r0, 1) == 0 && p[2] >= 6) {
        MI_CpuCopy8(p, &b, 8);
        s32 n = EventSchedule_CollectDayAll(out, &b);
        u32 i;
        for (i = 0; (s32)i < 8; self += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) != 0) {
                if (Villager_GetResidentStatus(self) == 3) {
                    u8 *e = out;
                    s32 j;
                    for (j = 0; j < n; e += 12, j++) {
                        if (*(u16 *)e == i) {
                            return i;
                        }
                    }
                }
            }
        }
    }
    return -1;
}
}

namespace nD {
extern "C" void SaveVillagers_UpdateBirthdayParty(u8 *self) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    s32 r6 = VillagerStates_GetBirthdayHost();
    Clock_GetDateTime(buf);
    s32 r4 = SaveVillagers_FindBirthdayVillager(self, buf);
    if (r4 == -1) {
        VillagerStates_SetBirthdayHost(-1);
        VillagerStates_SetBirthdayGuest(-1);
    } else if (r4 == r6) {
        void *o = SaveVillagers_Get(self, VillagerStates_GetBirthdayGuest());
        if (o == NULL || Villager_CanAttendParty(o) == 0) {
            VillagerStates_SetBirthdayGuest((s8)SaveVillagers_PickBirthdayGuest(self, r6));
        }
    } else if (r4 != r6) {
        r6 = SaveVillagers_PickBirthdayGuest(self, r4);
        VillagerStates_SetBirthdayHost((s8)r4);
        VillagerStates_SetBirthdayGuest((s8)r6);
        if (r4 == SaveVillagers_GetUnk3830Index(self)) {
            _ZN18SickVillagerRecord11resetRecordEv(self + 0x3830);
        }
    }
}
}

namespace nD {
extern "C" void SaveVillagers_ApplyBirthdayParty(u8 *self) {
    s32 r7 = VillagerStates_GetBirthdayHost();
    s32 w = VillagerStates_GetBirthdayGuest();
    u8 *s = self;
    s32 i;
    for (i = 0; i < 8; s += 0x700, i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
            if (VillagerState_GetRole(Villager_GetState(s)) == 3) {
                VillagerState_ResetRole(Villager_GetState(s));
            }
        }
    }
    if (r7 != -1) {
        void *o = SaveVillagers_Get(self, r7);
        if (o != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
            VillagerState_SetRole(Villager_GetState(o), 0);
            o = SaveVillagers_Get(self, w);
            if (o != NULL) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                    VillagerState_SetRole(Villager_GetState(o), 3);
                }
            }
        } else {
            VillagerStates_SetBirthdayHost(-1);
            VillagerStates_SetBirthdayGuest(-1);
        }
    }
}
}

namespace nD {
extern "C" s32 SaveVillagers_PickFleaMarketBuyer(void *self0) {
    u8 *self = (u8 *)self0;
    void *r0 = PlayerData_GetCurrent();
    void *p;
    if (r0 != NULL) {
        p = _ZN10PlayerData11getPlayerIdEv(r0);
    } else {
        p = NULL;
    }
    if (p != NULL && _ZN8PlayerId7isValidEv(p) != 0) {
        u8 mask = 0;
        s32 cnt = 0;
        s32 i;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) != 0) {
                if (Villager_FindMemory(self, p) != 0) {
                    if (_ZN14VillagerMemory19isFleaMarketVisitedEv((void *)Villager_FindMemory(self, p)) == 0) {
                        if (VillagerState_GetPresence(Villager_GetState(self)) == 0) {
                            mask |= (1 << i);
                            cnt++;
                        }
                    }
                }
            }
        }
        return Random_PickSetBit(mask, cnt, 8);
    }
    return -1;
}
}

namespace nD {
extern "C" void SaveVillagers_PickFleaMarketBuyerNow(void *self) {
    VillagerStates_SetFleaMarketBuyer((s8)SaveVillagers_PickFleaMarketBuyer(self));
}
}

namespace nD {
extern "C" s32 SaveVillagers_FindBestFriendIndexOf(void *self0, void *p) {
    u8 *self = (u8 *)self0;
    if (_ZN8PlayerId7isValidEv(p) != 0) {
        s32 best = -128;
        s32 cnt, i;
        u8 mask;
        mask = 0;
        cnt = 0;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) != 0) {
                if (Villager_GetResidentStatus(self) == 3) {
                    void *o = (void *)Villager_FindMemory(self, p);
                    if (o != NULL) {
                        s32 v = _ZN14VillagerMemory13getFriendshipEv(o);
                        if (v == best) {
                            mask |= (1 << i);
                            cnt++;
                        } else if (v > best) {
                            best = v;
                            mask = (u8)(1 << i);
                            cnt = 1;
                        }
                    }
                }
            }
        }
        return Random_PickSetBit(mask, cnt, 8);
    }
    return -1;
}
}

namespace nD {
extern "C" void SaveVillagers_PickPlayerBirthdayVisitor(u8 *self, void *p) {
    VillagerStates_SetBirthdayVisitor(-1);
    if (Scene_GetCurrent() == 6) {
        if (p == NULL) {
            p = PlayerData_GetCurrent();
        }
        if (p != NULL) {
            if (_ZN12Unk_02097ff48testFlagEj(p, 1) == 0) {
                if (_ZN15PlayerInventory15findEmptyPocketEv(_ZN10PlayerData12getInventoryEv(p)) != -1) {
                    void *a = _ZN10PlayerData11getPlayerIdEv(p);
                    u8 *r4 = _ZN12Unk_02097ff411getBirthdayEv(p);
                    if (*(u16 *)r4 != 0) {
                        if (_ZN8PlayerId7isValidEv(a) != 0) {
                            Unk_02079748_B bb;
                            *(u32 *)&bb.b[0] = 0;
                            *(u32 *)&bb.b[4] = 0;
                            Clock_GetDateTime(&bb);
                            u32 r7 = bb.b[5];
                            s32 tt = _ZN12Unk_02097ff419getBirthdayTalkYearEv(p);
                            if (tt != r7) {
                                if (r4[1] == bb.b[4]) {
                                    if (r4[0] == bb.b[3]) {
                                        if (bb.b[2] >= 6) {
                                            s32 s = SaveVillagers_FindBestFriendIndexOf(self, a);
                                            if (SaveVillagers_IsValidIndex(s) != 0) {
                                                OutdoorSchedule_ForceReroll(self + 0x381c);
                                            }
                                            VillagerStates_SetBirthdayVisitor((s8)s);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
}

namespace nD {
extern "C" BOOL SaveVillagers_IsNicknameCooldownOver(Unk_020796d4_Obj *self, void *p) {
    BOOL r = TRUE;
    if (self->nicknameDate[3] != 0) {
        if (Date_IsAfterOrEqual(p, self->nicknameDate) != 0) {
            if (Date_DaysBetween(p, self->nicknameDate) < 14) {
                r = FALSE;
            }
        } else {
            if (Date_DaysBetween(self->nicknameDate, p) < 14) {
                r = FALSE;
            }
        }
    }
    return r;
}
}

namespace nD {
extern "C" void SaveVillagers_SetNicknameDate(Unk_020796d4_Obj *self, void *p) {
    MI_CpuCopy8(p, self->nicknameDate, 4);
    self->nicknameDate[3] = 1;
}
}

namespace nD {
extern "C" BOOL SaveVillagers_AllKnowPlayer(u8 *self, void *p) {
    if (_ZN8PlayerId7isValidEv(p) != 0) {
        u8 *s = (u8 *)SaveVillagers_Get(self, 0);
        u32 i;
        for (i = 0; (s32)i < 8; s += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
                if (Villager_FindMemory(s, p) == 0) {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}
}

namespace nD {
extern "C" s32 SaveVillagers_DeliverLetter(void *self, void *p) {
    if (p != NULL) {
        void *t = Letter_GetSenderPlayer(p);
        if (t != NULL) {
            Unk_020795c4_Buf b(t);
            if (_ZN8PlayerId7isValidEv(&b) != 0) {
                void *q = PlayerDataArray_GetById(gSavePlayers, &b);
                void *name = Letter_GetRecipientVillager(p);
                if (q != NULL) {
                    Arbeit_OnLetterSent(_ZN10PlayerData10getErrandsEv(q), p);
                }
                if (name != NULL) {
                    Unk_020795c4_Str s(name);
                    if (_ZN10VillagerId7isValidEv(s.v) != 0) {
                        void *o = SaveVillagers_Find(self, s.v);
                        if (o != NULL) {
                            _ZN23VillagerDataProfileView13replyToLetterEPvS0_(o, q, p);
                            return _ZN12VillagerData17receiveLetterFromEj(o, p);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
}

namespace nC {
extern "C" void SaveVillagers_ClearTuneRequester(Unk_02079524_Self *self) {
    self->unk_38ec_1 = 0;
    self->unk_38ec_2 = 0;
}
}

namespace nC {
extern "C" void SaveVillagers_SetTuneRequester(Unk_02079524_Self *self, s32 u) {
    s32 r = SaveVillagers_FindIndex(self, u);
    if (SaveVillagers_IsValidIndex(r)) {
        u16 *h = (u16 *)((u8 *)self + 0x38ec);
        u32 t;
        u32 v;
        *h = *h | 2;
        t = *h;
        t &= ~0x1c;
        v = (u8)r;
        v &= 7;
        t |= v << 2;
        *h = t;
    }
}
}

namespace nC {
extern "C" BOOL SaveVillagers_IsTuneRequester(Unk_02079524_Self *self, s32 u) {
    s32 r;
    if (self->unk_38ec_1) {
        r = SaveVillagers_FindIndex(self, u);
        if (SaveVillagers_IsValidIndex(r) && self->unk_38ec_2 == r) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" void SaveVillagers_ClearTalkedToday(u8 *p) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p))) {
            Villager_ClearTalkedToday(p);
        }
        p += 0x700;
    }
}
}

namespace nC {
extern "C" s32 VillagerFlea_GetMonthlyChance() {
    Unk_02078d6c_Time t;
    Unk_020794ac_Entry *e;
    u8 *q;
    s32 prev, i, n;
    t.lo = 0;
    t.hi = 0;
    Clock_GetDateTime(&t);
    e = (Unk_020794ac_Entry *)Insect_GetSpawnTable(((u8 *)&t)[4] - 1);
    if (e) {
        q = e->entries;
        prev = 0;
        i = 0;
        n = e->count;
        for (; i < n; i++) {
            if (q[0] == 0x30) {
                return q[1] - prev;
            }
            prev = q[1];
            q += 2;
        }
    }
    return 0;
}
}

namespace nC {
extern "C" void SaveVillagers_PickFleaVillager(u8 *p, s32 a1) {
    s32 mask, n, i, r, j, lim, bit;
    VillagerStates_Get()[0x160] = -1;
    if (a1) {
        if (_ZN8PlayerId7isValidEv(a1)) {
            lim = VillagerFlea_GetMonthlyChance();
            mask = 0;
            n = 0;
            for (i = 0; i < 8; i++) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) && Villager_FindMemory(p, a1) && !Villager_GetWhereabouts(p)) {
                    mask |= 1 << i;
                    mask = (u8)mask;
                    n++;
                }
                p += 0x700;
            }
            while (n > 0) {
                r = Random_GlobalBelow(n);
                n--;
                for (j = 0; j < 8; j++) {
                    bit = (mask >> j) & 1;
                    if (bit) {
                        if (r == 0) {
                            if (Random_GlobalBelow(100) < lim) {
                                VillagerStates_Get()[0x160] = j;
                                n = 0;
                            }
                            mask &= ~(1 << j);
                            mask = (u8)mask;
                            break;
                        }
                        r--;
                    }
                }
            }
        }
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_Construct(OutdoorSchedule *p) {
    p->lastRerollTime = 0;
    p->lastRerollTimeHi = 0;
}
}

namespace nC {
extern "C" void OutdoorSchedule_Destruct() {}
}

namespace nC {
extern "C" void OutdoorSchedule_Clear(OutdoorSchedule *self) {
    OutdoorSchedule_ClearOrder(self, self);
    OutdoorSchedule_ClearOutdoor(self);
    self->lastRerollTime = 0;
    self->lastRerollTimeHi = 0;
}
}

namespace nC {
extern "C" void OutdoorSchedule_ClearOrder(void *a, void *b) {
    MI_CpuFill8(b, 0xff, 8);
}
}

namespace nC {
extern "C" void OutdoorSchedule_CopyOrder(void *a, void *b, void *c) {
    MI_CpuCopy8(c, b, 8);
}
}

namespace nC {
extern "C" BOOL OutdoorSchedule_SetOrderEntry(u8 *self, s32 a, s32 v) {
    BOOL r = FALSE;
    if (SaveVillagers_IsValidIndex(a)) {
        self[a] = v;
        r = TRUE;
    }
    return r;
}
}

namespace nC {
extern "C" void OutdoorSchedule_AddToOrder(s8 *p, s32 x) {
    s32 i;
    s32 m1;
    if (SaveVillagers_IsValidIndex(x)) {
        i = 0;
        m1 = ~i;
        for (; i < 8; p++, i++) {
            if (*p == m1) {
                *p = x;
                break;
            }
        }
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_RemoveFromOrder(s8 *p, s32 x) {
    s32 i;
    s32 n;
    if (SaveVillagers_IsValidIndex(x)) {
        for (i = 0; i < 8; i++) {
            if (x == p[i]) {
                for (; i < 7; i = n) {
                    n = i + 1;
                    p[i] = p[n];
                }
                p[7] = ~0;
                break;
            }
        }
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_ClearOutdoor(OutdoorSchedule *self) {
    MI_CpuFill8(self->outdoorSlots, 0xff, 4);
}
}

namespace nC {
extern "C" BOOL OutdoorSchedule_SetOutdoorSlot(OutdoorSchedule *self, u32 i, s32 v) {
    if (i < 4) {
        self->outdoorSlots[i] = v;
        return TRUE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" s32 OutdoorSchedule_FindOutdoorSlotImpl(OutdoorSchedule *self, s32 x) {
    s32 i;
    if (SaveVillagers_IsValidIndex(x)) {
        for (i = 0; i < 4; i++) {
            if (x == self->outdoorSlots[i]) {
                return i;
            }
        }
    }
    return ~0;
}
}

namespace nC {
extern "C" void OutdoorSchedule_RemoveOutdoor(OutdoorSchedule *self, s32 x) {
    u32 i = OutdoorSchedule_FindOutdoorSlotImpl(self, x);
    s32 n;
    if (i < 4) {
        for (n = i; n < 3; n = i) {
            i = n + 1;
            self->outdoorSlots[n] = self->outdoorSlots[i];
        }
        self->outdoorSlots[3] = ~0;
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_Remove(OutdoorSchedule *self, s32 x) {
    OutdoorSchedule_RemoveFromOrder((s8 *)self, x);
    OutdoorSchedule_RemoveOutdoor(self, x);
}
}

namespace nC {
extern "C" s32 OutdoorSchedule_FindOutdoorSlot(OutdoorSchedule *a, s32 b) {
    return OutdoorSchedule_FindOutdoorSlotImpl(a, b);
}
}

namespace nC {
extern "C" void OutdoorSchedule_InitOrder(s8 *out, u8 *p) {
    s32 i;
    s32 m1;
    i = 0;
    m1 = ~i;
    for (; i < 8; i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p))) {
            out[i] = i;
        } else {
            out[i] = m1;
        }
        p += 0x700;
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_ForceReroll(OutdoorSchedule *p) {
    p->lastRerollTime = 0;
    p->lastRerollTimeHi = 0;
}
}

namespace nC {
extern "C" BOOL OutdoorSchedule_IsRerollDue(OutdoorSchedule *self, void *out) {
    s32 r;
    s32 c;
    if (*(u64 *)&self->lastRerollTime == 0 || DateTime_IsInvalid(&self->lastRerollTime)) {
        return TRUE;
    }
    r = 0;
    c = DateTime_Compare(out, &self->lastRerollTime, 0x3e);
    if (c == ~r) {
        r = DateTime_DiffMinutes(out, &self->lastRerollTime);
    } else if (c == 1) {
        r = DateTime_DiffMinutes(&self->lastRerollTime, out);
    }
    if (r >= 0x3c) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" void OutdoorSchedule_PickRandom(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit) {
    u8 mask = 0;
    s32 n = mask;
    s8 *q1;
    s32 v;
    s32 id;
    s32 i;
    s32 bit;
    s32 r;
    s8 *q2;
    s32 j;
    id = SaveVillagers_GetUnk3830Index(Item_GetSaveData() + 0x8a3c);
    q1 = list;
    for (i = 0; i < 8; q1++, i++) {
        v = *q1;
        if (SaveVillagers_IsValidIndex(v) && v != id) {
            v = v * 0x700;
            if (Villager_CanGoOutdoors(players + v)) {
                mask |= 1 << i;
                mask = (u8)mask;
                n++;
                if (n >= 6) goto done;
            }
        }
    }
done:
    while (n > 0 && *cnt < limit) {
        r = Random_GlobalBelow(n);
        q2 = list;
        for (j = 0; j < 8; q2++, j++) {
            v = *q2;
            bit = mask;
            bit >>= j;
            bit &= 1;
            if (bit) {
                if (r == 0) {
                    out[*cnt] = v;
                    *cnt = *cnt + 1;
                    *q2 = ~0;
                    mask &= ~(1 << j);
                    mask = (u8)mask;
                    break;
                }
                r--;
            }
        }
        n--;
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_AssignIndoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots) {
    s32 i;
    s32 v;
    Unk_02078d6c_Slot *e;
    s32 z = 0;
    s32 m1 = ~z;
    for (i = 0; i < 8; list++, i++) {
        v = *list;
        if (SaveVillagers_IsValidIndex(v) && OutdoorSchedule_SetOrderEntry((u8 *)self, *cnt, v)) {
            *cnt = *cnt + 1;
            e = slots + v;
            VillagerState_SetPresence(e, 1);
            VillagerState_SetRole(e, z);
            *list = m1;
        }
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_AssignOutdoor(OutdoorSchedule *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n) {
    s32 i;
    s32 v;
    Unk_02078d6c_Slot *e;
    s32 z = 0;
    for (i = 0; i < n; list++, i++) {
        v = *list;
        if (OutdoorSchedule_SetOrderEntry((u8 *)self, *cnt, v)) {
            *cnt = *cnt + 1;
            e = slots + v;
            VillagerState_SetPresence(e, z);
            VillagerState_SetRole(e, 1);
            OutdoorSchedule_SetOutdoorSlot(self, i, v);
        }
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_AddBirthdayVisitor(OutdoorSchedule *self, s8 *out, s32 *cnt, s8 *list, u8 *players) {
    s32 id = VillagerStates_GetBirthdayVisitor(self);
    s32 i;
    s32 v;
    s32 z = 0;
    s32 m1;
    if (SaveVillagers_IsValidIndex(id)) {
        i = 0;
        m1 = ~i;
        for (; i < 8; list++, i++) {
            v = *list;
            if (SaveVillagers_IsValidIndex(v) && v == id) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(players + v * 0x700))) {
                    out[*cnt] = v;
                    *cnt = *cnt + 1;
                }
                *list = m1;
            }
        }
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_ApplySleep(OutdoorSchedule *self, u8 *p, s32 x) {
    Unk_02078d6c_Slot *s;
    s32 i;
    s32 z = 0;
    s32 r;
    BOOL v;
    s32 t;
    s32 o = PlayerData_GetCurrent(self);
    if (o) {
        r = _ZN12Unk_02097ff48testFlagEj(o, 1);
    } else {
        r = 0;
    }
    if (r) {
        v = TRUE;
    } else {
        v = FALSE;
    }
    s = (Unk_02078d6c_Slot *)(u8 *)VillagerStates_Get();
    for (i = 0; i < 8; i++) {
        t = _ZN12VillagerData13getVillagerIdEv(p);
        if (_ZN10VillagerId7isValidEv(t)) {
            if (!v) {
                if (Personality_IsAsleep(VillagerId_GetPersonality(t), x)) {
                    VillagerState_SetPresence(s, 2);
                    VillagerState_SetRole(s, z);
                }
            }
        } else {
            VillagerState_SetPresence(s, 3);
            VillagerState_SetRole(s, 7);
        }
        p += 0x700;
        s++;
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_Reroll(OutdoorSchedule *self, u8 *p) {
    s8 l1[8];
    s8 l2[8];
    s32 a, c, n, b, i;
    Unk_02078d6c_Slot *slots;
    slots = (Unk_02078d6c_Slot *)(u8 *)VillagerStates_Get();
    a = 0;
    b = Town_GetMaxOutdoorVillagers();
    n = SaveVillagers_CountImpl(p);
    c = 0;
    for (i = 0; i < 8; i++) {
        VillagerState_SetPresence(&slots[i], 3);
    }
    OutdoorSchedule_CopyOrder(self, l1, self);
    OutdoorSchedule_ClearOrder(self, self);
    OutdoorSchedule_ClearOrder(self, l2);
    n = n * 3;
    if (b > (n >> 2)) {
        b = n >> 2;
    }
    OutdoorSchedule_ClearOutdoor(self);
    OutdoorSchedule_AddBirthdayVisitor(self, l2, &a, l1, p);
    OutdoorSchedule_PickRandom(self, l2, &a, l1, p, b);
    OutdoorSchedule_AssignIndoor(self, l1, &c, slots);
    OutdoorSchedule_AssignOutdoor(self, l2, &c, slots, a);
}
}

namespace nC {
extern "C" void OutdoorSchedule_Apply(OutdoorSchedule *self, u8 *p) {
    Unk_02078d6c_Slot *s = (Unk_02078d6c_Slot *)(u8 *)VillagerStates_Get();
    s32 i;
    s32 z0 = 0;
    s32 z1 = 0;
    for (i = 0; i < 8; i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p))) {
            if (OutdoorSchedule_FindOutdoorSlotImpl(self, i) != ~0) {
                VillagerState_SetPresence(s, z1);
                VillagerState_SetRole(s, 1);
            } else {
                VillagerState_SetPresence(s, 1);
                VillagerState_SetRole(s, z0);
            }
        } else {
            VillagerState_SetPresence(s, 3);
            VillagerState_SetRole(s, 7);
        }
        p += 0x700;
        s++;
    }
}
}

namespace nC {
extern "C" void OutdoorSchedule_Update(OutdoorSchedule *self, u8 *p, s32 keep) {
    Unk_02078d6c_Time t;
    Unk_02078d6c_Slot *slots;
    s32 i;
    t.lo = 0;
    t.hi = 0;
    slots = (Unk_02078d6c_Slot *)(u8 *)VillagerStates_Get();
    for (i = 0; i < 8; i++) {
        VillagerState_SetPresence(&slots[i], 3);
    }
    Clock_GetDateTime(&t);
    if (OutdoorSchedule_IsRerollDue(self, &t)) {
        OutdoorSchedule_Reroll(self, p);
        if (keep) {
            MI_CpuCopy8(&t, &self->lastRerollTime, 8);
        }
    } else {
        OutdoorSchedule_Apply(self, p);
    }
    OutdoorSchedule_ApplySleep(self, p, (s32)&t);
}
}

namespace nC {
extern "C" void VillagerRelations_Construct() {}
}

namespace nC {
extern "C" void VillagerRelations_Destruct() {}
}

namespace nC {
extern "C" void VillagerRelations_Clear(void *p) {
    MI_CpuFill8(p, 0, 0x1c);
}
}

namespace nC {
extern "C" BOOL VillagerRelations_IsValidIndex(void *a, u32 i) {
    if (i < 0x1c) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" s32 VillagerRelations_PairIndex(s32 a, s32 b, s32 c) {
    s32 r = 0;
    s32 lo = b;
    s32 i;
    if (b > c) {
        lo = c;
        c = b;
    }
    for (i = 0; i < lo; i++) {
        r += 7 - i;
    }
    return r + (c - lo - 1);
}
}

namespace nC {
extern "C" void VillagerRelations_ResetSlot(u8 *a, s32 x) {
    s32 i;
    s32 t;
    if (SaveVillagers_IsValidIndex(x)) {
        for (i = 0; i < 8; i++) {
            if (i != x) {
                t = VillagerRelations_PairIndex((s32)a, x, i);
                if (VillagerRelations_IsValidIndex(a, t)) {
                    a[t] = 0;
                }
            }
        }
    }
}
}

namespace nC {
extern "C" void VillagerRelations_AddAt(s8 *a, s32 i, s32 d) {
    if (VillagerRelations_IsValidIndex(a, i)) {
        s32 t = d + a[i];
        s8 *p = &a[i];
        if (t > 127) {
            t = 127;
        } else if (t < -128) {
            t = -128;
        }
        *p = t;
    }
}
}

namespace nB {
extern "C" void VillagerRelations_Add(void *a, void *p, void *q, s32 r) {
    if (SaveVillagers_IsValidIndex(p) && SaveVillagers_IsValidIndex(q)) {
        VillagerRelations_AddAt(a, VillagerRelations_PairIndex(a, p, q), r);
    }
}
}

namespace nB {
extern "C" s32 VillagerRelations_GetStored(void *a, void *p, void *q) {
    s32 r = 0x80000000;
    if (SaveVillagers_IsValidIndex(p) && SaveVillagers_IsValidIndex(q)) {
        s32 k = VillagerRelations_PairIndex(a, p, q);
        if (VillagerRelations_IsValidIndex(a, k)) {
            r = ((s8 *)a)[k];
        }
    }
    return r;
}
}

namespace nB {
extern "C" s32 Relation_GetPersonalityScore(void *a, void *p, void *q) {
    s32 r = 0;
    if (_ZN10VillagerId7isValidEv(p) && _ZN10VillagerId7isValidEv(q)) {
        u32 x = VillagerId_GetPersonality(p);
        u32 y = VillagerId_GetPersonality(q);
        r = sPersonalityCompat[x][y];
    }
    return r;
}
}

namespace nB {
extern "C" u32 Relation_GetStarElementScore(void *a, void *p, void *q) {
    u8 x = Villager_GetStarSign(p) & 3;
    u8 y = Villager_GetStarSign(q) & 3;
    return sStarElementCompat[x][y];
}
}

namespace nB {
extern "C" u32 Relation_GetSpeciesScore(void *a, void *p, void *q) {
    u32 x = Villager_GetAnimalKind(p);
    u32 y = Villager_GetAnimalKind(q);
    u8 (*t)[2];
    s32 i;
    if (x == y) {
        return 0x40;
    }
    t = sGoodSpeciesPairs;
    for (i = 0; i < 7; t++, i++) {
        u32 a0 = (*t)[0];
        if ((a0 == x && (*t)[1] == y) || ((*t)[1] == x && a0 == y)) {
            return 0x80;
        }
    }
    t = sBadSpeciesPairs;
    for (i = 0; i < 4; t++, i++) {
        u32 a0 = (*t)[0];
        if ((a0 == x && (*t)[1] == y) || ((*t)[1] == x && a0 == y)) {
            return 0;
        }
    }
    return 0x20;
}
}

namespace nB {
extern "C" u32 Relation_GetInfoBonus(void *a, void *p, void *q) {
    u8 *x = Villager_GetInfo(p);
    u8 *y = Villager_GetInfo(q);
    u32 r = 0;
    if (x != NULL && y != NULL) {
        r = 0x3f;
    }
    return r;
}
}

namespace nB {
extern "C" u32 Relation_GetInfo04Diff(void *a, void *p, void *q) {
    u8 *x = Villager_GetInfo(p);
    u8 *y = Villager_GetInfo(q);
    u32 r = 0;
    if (x != NULL && y != NULL) {
        u32 yb = y[4];
        u32 xb = x[4];
        if (xb > yb) {
            r = xb - yb;
        } else {
            r = yb - xb;
        }
    }
    return r;
}
}

namespace nB {
extern "C" s32 Relation_CalcBaseScore(void *a, void *p, void *q) {
    s32 r = 0;
    if (p != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) && q != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(q))) {
        void *x = _ZN12VillagerData13getVillagerIdEv(p);
        void *y = _ZN12VillagerData13getVillagerIdEv(q);
        r = Relation_GetPersonalityScore(a, x, y);
        r += Relation_GetStarElementScore(a, p, q);
        r += Relation_GetSpeciesScore(a, p, q);
        r += Relation_GetInfoBonus(a, p, q);
        if (r < 200) {
            r -= Relation_GetInfo04Diff(a, p, q);
            if (r < 0) {
                r = -r;
            }
        }
    }
    return r;
}
}

namespace nB {
extern "C" s32 VillagerRelations_GetScore(void *a, s32 b, s32 c) {
    void *d = gSaveVillagers;
    void *r5 = SaveVillagers_Get(d, b);
    void *r4 = SaveVillagers_Get(d, c);
    s32 r = 0;
    if (r5 != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r5)) && r4 != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r4))) {
        r = VillagerRelations_GetStored(a, (void *)b, (void *)c);
        s32 t = Relation_CalcBaseScore(a, r5, r4);
        r = r * 5;
        r = t + (r >> 1);
    }
    return r;
}
}

namespace nB {
extern "C" void *VillagerTransfer_ConstructVillager(void *p) {
    _ZN12VillagerDataC1Ev(p);
    return p;
}
}

namespace nB {
extern "C" void *VillagerTransfer_DestructVillager(void *p) {
    _ZN12VillagerDataD1Ev(p);
    return p;
}
}

namespace nB {
extern "C" void func_020789a8() {}
}

namespace nB {
extern "C" BOOL Villager_IsActorInBox(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1) {
    Unk_02078948_Obj *o = NpcRegistry_FindVillagerByHandle();
    if (o != NULL && o->vfunc_a8()) {
        s32 *pos = &o->position;
        BOOL result = FALSE;
        BOOL b = FALSE;
        BOOL a = FALSE;
        if (o->position > x0 && o->position < x1) {
            a = TRUE;
        }
        if (a) {
            if (pos[2] > z0) {
                b = TRUE;
            }
        }
        if (b) {
            if (pos[2] < z1) {
                result = TRUE;
            }
        }
        return result;
    }
    return FALSE;
}
}

namespace nB {
extern "C" void SaveVillagers_NotifyPlayerActivity(u32 kind, Unk_02078738_Pos *p) {
    if ((u32)gSaveVillagers != 0) {
        s32 b[4];
        Unk_02078864_T t;
        s32 z1;
        u16 h;
        s32 i;
        b[0] = 0;
        t.v[0] = 0;
        t.v[1] = 0;
        b[1] = 0;
        b[2] = 0;
        z1 = 0;
        h = 0xfff1;
        if (p != NULL) {
            b[0] = p->x - 0x10000;
            b[1] = p->x + 0x10000;
            b[2] = p->z - 0x1a000;
            z1 = p->z + 0xa000;
        }
        Clock_GetDateTime(&t);
        for (i = 0; i < 8; i++) {
            void *o;
            b[3] = 1;
            o = SaveVillagers_Get(gSaveVillagers, i);
            if (o != NULL) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o))) {
                    if (_ZN12VillagerPlan20isTrendOlderThanWeekEPv(VillagerPlanBlock_GetPlan(Villager_GetPlan(o)), &t)) {
                        if (p != NULL) {
                            h = (i & 0xfff) | 0xe000;
                            if (Villager_IsActorInBox(&h, b[0], b[1], b[2], z1)) {
                                b[3] = 2;
                            }
                        }
                        Villager_RecordPlayerActivity(o, kind, b[3]);
                    }
                }
            }
        }
        VillagerStates_Get()->idleFrames = 0;
    }
}
}

namespace nB {
extern "C" void VillagerTrend_OnFishCaught(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(1, p);
    }
}
}

namespace nB {
extern "C" void VillagerTrend_OnInsectCaught(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(0, p);
    }
}
}

namespace nB {
extern "C" void VillagerTrend_OnItemDug(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(2, p);
    }
}
}

namespace nB {
extern "C" void VillagerTrend_OnClothesBought() {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(3, NULL);
    }
}
}

namespace nB {
extern "C" void VillagerTrend_OnFurnitureBought() {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(4, NULL);
    }
}
}

namespace nB {
extern "C" void VillagerTrend_NotifyUnk5(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(5, p);
    }
}
}

namespace nB {
extern "C" BOOL TownMap_HasAttr8AtPos(Unk_02078738_Pos *p) {
    Unk_02078738_Grid *g = gSceneBlockMap;
    if (g != NULL) {
        Unk_02078738_Cell *c = Unk_02078738_GetCell(g, p->x >> 17, p->z >> 17);
        if (c != NULL) {
            if (MapBlock_HasAllAttr(c, 8)) {
                return TRUE;
            }
        }
        return FALSE;
    }
    return FALSE;
}
}

namespace nB {
extern "C" void VillagerTrend_NotifyUnk6(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        if (TownMap_HasAttr8AtPos(p)) {
            SaveVillagers_NotifyPlayerActivity(6, p);
        }
    }
}
}

namespace nB {
extern "C" void VillagerTrend_NotifyIdle() {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        SaveVillagers_NotifyPlayerActivity(7, NULL);
    }
}
}

namespace nB {
extern "C" void VillagerTrend_TickIdle() {
    if (Scene_InTown()) {
        if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
            if (VillagerStates_Get()->idleFrames > 0x4b0) {
                VillagerTrend_NotifyIdle();
            }
            VillagerStates_Get()->idleFrames++;
        }
    }
}
}

namespace nB {
extern "C" Unk_02078614 *_ZN13VillagerStateC1Ev(Unk_02078614 *e) {
    _ZN12ErrandRecord4initEv(e->errand);
    TrendScores_Construct(e->trendScores);
    e->heldItem = 0xfff1;
    TalkRepeat_Construct(&e->talkRepeat);
    return e;
}
}

namespace nB {
extern "C" Unk_02078614 *_ZN13VillagerStateD1Ev(Unk_02078614 *e) {
    TalkRepeat_Destruct(&e->talkRepeat);
    TrendScores_Destruct(e->trendScores);
    _ZN12ErrandRecord13func_0209ada0Ev(e->errand);
    return e;
}
}

namespace nB {
extern "C" void VillagerState_Init(Unk_02078614 *e) {
    MI_CpuFill8(e, 0, 0x2c);
    e->role = 0;
    e->presence = 3;
    _ZN12ErrandRecord5clearEv(e->errand);
    TrendScores_Clear(e->trendScores);
    e->mood = 5;
    e->activity = 0xc;
    e->roomScore = 0;
    e->roomBonusFlags = 0;
    VillagerState_ClearHeldItem(e);
}
}

namespace nB {
extern "C" u32 VillagerState_GetRole(Unk_02078614 *e) {
    Unk_02078948_Obj *o = (Unk_02078948_Obj *)gCommManager;
    if (_ZN11CommManager12isSlotActiveEi(o, o->unk_64) && e->role != 7) {
        return 0;
    }
    return e->role;
}
}

namespace nB {
extern "C" void VillagerState_SetRole(Unk_02078614 *e, u32 v) { e->role = v; }
}

namespace nB {
extern "C" void VillagerState_ResetRole(Unk_02078614 *e) {
    switch (e->role) {
    case 0:
    case 1:
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if (VillagerState_GetPresence(e) == 0) {
            e->role = 1;
        } else {
            e->role = 0;
        }
        break;
    }
}
}

namespace nB {
extern "C" u32 VillagerState_GetPresence(Unk_02078614 *e) {
    Unk_02078948_Obj *o = (Unk_02078948_Obj *)gCommManager;
    if (_ZN11CommManager12isSlotActiveEi(o, o->unk_64) && e->presence == 0) {
        return 1;
    }
    return e->presence;
}
}

namespace nB {
extern "C" void VillagerState_SetPresence(Unk_02078614 *e, u32 v) { e->presence = v; }
}

namespace nB {
extern "C" void *VillagerState_GetErrand(Unk_02078614 *e) { return e->errand; }
}

namespace nB {
extern "C" u32 VillagerState_GetActivity(Unk_02078614 *e) { return e->activity; }
}

namespace nB {
extern "C" void VillagerState_SetActivity(Unk_02078614 *e, u32 v) { e->activity = v; }
}

namespace nB {
extern "C" u32 VillagerState_GetMood(Unk_02078614 *e) { return e->mood; }
}

namespace nB {
extern "C" void VillagerState_SetMood(Unk_02078614 *e, u32 v) { e->mood = v; }
}

namespace nB {
extern "C" void VillagerState_AddMoodTimer(Unk_02078614 *e, s32 v) {
    s32 s = e->moodTimer + v;
    if (s >= 0xffff) {
        e->moodTimer = 0xffff;
        return;
    }
    e->moodTimer = s;
}
}

namespace nB {
extern "C" void VillagerState_SetMoodTimer(Unk_02078614 *e, u16 v) { e->moodTimer = v; }
}

namespace nB {
extern "C" u32 VillagerState_GetMoodTimer(Unk_02078614 *e) { return e->moodTimer; }
}

namespace nB {
extern "C" void VillagerState_TickMoodTimer(Unk_02078614 *e) {
    if (e->moodTimer != 0) {
        e->moodTimer = e->moodTimer - 1;
    }
}
}

namespace nB {
extern "C" void VillagerState_SetUnk1dBit1(Unk_02078614 *e) {
    if (!Scene_InVillagerHouse()) {
        e->flags |= 2;
    }
}
}

namespace nB {
extern "C" void VillagerState_DoubleTalkUrge(Unk_02078614 *e) {
    s32 v = e->talkUrge << 1;
    if (v > 32) {
        v = 32;
    }
    e->talkUrge = v;
}
}

namespace nB {
extern "C" u16 *VillagerState_GetHeldItem(Unk_02078614 *e) { return &e->heldItem; }
}

namespace nB {
extern "C" void VillagerState_SetHeldItem(Unk_02078614 *e, u16 *p) { e->heldItem = *p; }
}

namespace nB {
extern "C" void VillagerState_ClearHeldItem(Unk_02078614 *e) { e->heldItem = 0xfff1; }
}

namespace nB {
extern "C" TalkRepeat *VillagerState_GetTalkRepeat(Unk_02078614 *e) { return &e->talkRepeat; }
}

namespace nB {
extern "C" void TalkRepeat_Construct(TalkRepeat *t) {}
}

namespace nB {
extern "C" void TalkRepeat_Destruct(TalkRepeat *t) {}
}

namespace nB {
extern "C" void TalkRepeat_Reset(TalkRepeat *t) {
    t->grace = 0;
    t->window = 0;
    t->count = 0;
}
}

namespace nB {
extern "C" void TalkRepeat_Tick(TalkRepeat *t, s32 v) {
    if (v == 0) {
        if (t->grace != 0) {
            t->grace = t->grace - 1;
        } else if (t->window != 0) {
            t->window = t->window - 1;
        }
        if (t->window == 0) {
            t->count = 0;
        }
    }
}
}

namespace nB {
extern "C" void TalkRepeat_Count(TalkRepeat *t) {
    if (t->grace != 0) {
        t->count = t->count + 1;
    }
}
}

namespace nB {
extern "C" void TalkRepeat_StartWindow(TalkRepeat *t) {
    t->grace = 40;
    t->window = 0x4b0;
}
}

namespace nB {
extern "C" s32 TalkRepeat_GetLevel(TalkRepeat *t) {
    if (Unk_02078384_IsZero(gFieldSceneKind)) {
        u32 v = t->count;
        if (v >= 10) {
            return 2;
        }
        if (v >= 7) {
            return 1;
        }
    }
    return 0;
}
}

namespace nB {
extern "C" BOOL VillagerStates_IsValidIndex(s32 i) {
    if (i >= 0 && i < 8) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nB {
extern "C" void VillagerStateTable_Init(Unk_02078400 *m) {
    s32 i;
    for (i = 0; i < 8; i++) {
        VillagerState_Init(&m->entries[i]);
    }
    m->fleaVillager = -1;
    m->greeter = 0;
    m->birthdayHost = -1;
    m->birthdayGuest = -1;
    m->fleaMarketBuyer = -1;
    m->idleFrames = 0;
    m->birthdayVisitor = -1;
}
}

namespace nB {
extern "C" Unk_02078400 *VillagerStates_Get() { return &gVillagerStates; }
}

namespace nB {
extern "C" Unk_02078614 *VillagerStateTable_GetEntry(Unk_02078400 *m, s32 i) {
    Unk_02078614 *r = NULL;
    if (VillagerStates_IsValidIndex(i)) {
        r = &m->entries[i];
    }
    return r;
}
}

namespace nB {
extern "C" void VillagerStateTable_Destroy() {}
}

namespace nB {
extern "C" void VillagerStateTable_ResetRuntime(Unk_02078614 *e) {
    s32 i = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 z3 = 0;
    for (; i < 8; e++, i++) {
        VillagerState_SetRole(e, z1);
        e->flags &= ~1;
        VillagerState_SetMood(e, z2);
        VillagerState_SetMoodTimer(e, z3);
        e->flags &= ~4;
        TalkRepeat_Reset(VillagerState_GetTalkRepeat(e));
    }
}
}

namespace nA {
extern "C" void VillagerStates_Init() {
    VillagerStateTable_Init(VillagerStates_Get());
}
}

namespace nA {
extern "C" void VillagerStates_Destroy() {
    VillagerStateTable_Destroy(VillagerStates_Get());
}
}

namespace nA {
extern "C" void VillagerStates_ResetRuntime() {
    VillagerStateTable_ResetRuntime(VillagerStates_Get());
}
}

namespace nA {
extern "C" void VillagerStates_ClearUnk1dBit0() {
    Unk_020781ec_Elem *e = VillagerStates_Get()->entries;
    s32 i;
    for (i = 0; i < 8; e++, i++) {
        e->flags &= ~1;
    }
}
}

namespace nA {
extern "C" void VillagerStates_ClearUnk1dBit2() {
    Unk_020781ec_Elem *e = VillagerStates_Get()->entries;
    s32 i;
    for (i = 0; i < 8; e++, i++) {
        e->flags &= ~4;
    }
}
}

namespace nA {
extern "C" void VillagerStates_ResetTalkRepeats() {
    u8 *p = (u8 *)VillagerStates_Get();
    s32 i;
    for (i = 0; i < 8; p += 0x2c, i++) {
        TalkRepeat_Reset(VillagerState_GetTalkRepeat(p));
    }
}
}

namespace nA {
extern "C" void VillagerStates_ClearFleaVillager() {
    VillagerStates_Get()->fleaVillager = -1;
}
}

namespace nA {
extern "C" void VillagerStates_SetBirthdayHost(s32 v) {
    VillagerStates_Get()->birthdayHost = v;
}
}

namespace nA {
extern "C" s32 VillagerStates_GetBirthdayHost() {
    return VillagerStates_Get()->birthdayHost;
}
}

namespace nA {
extern "C" void VillagerStates_SetBirthdayGuest(s32 v) {
    VillagerStates_Get()->birthdayGuest = v;
}
}

namespace nA {
extern "C" s32 VillagerStates_GetBirthdayGuest() {
    return VillagerStates_Get()->birthdayGuest;
}
}

namespace nA {
extern "C" void VillagerStates_SetBirthdayVisitor(s32 v) {
    VillagerStates_Get()->birthdayVisitor = v;
}
}

namespace nA {
extern "C" s32 VillagerStates_GetBirthdayVisitor() {
    return VillagerStates_Get()->birthdayVisitor;
}
}

namespace nA {
extern "C" void VillagerStates_SetFleaMarketBuyer(s32 v) {
    VillagerStates_Get()->fleaMarketBuyer = v;
}
}

namespace nA {
extern "C" s32 VillagerStates_GetFleaMarketBuyer() {
    return VillagerStates_Get()->fleaMarketBuyer;
}
}

namespace nA {
extern "C" void VillagerStates_ResetIdleFrames() {
    VillagerStates_Get()->idleFrames = 0;
}
}

namespace nA {
extern "C" void SaveVillagers_OnNewDay(u8 *a, s32 b) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 8; a += 0x700, i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
            s32 j;
            u8 *e;
            if (Villager_GetResidentStatus(a) == 3) {
                Villager_PickShownFurniture(a);
            }
            e = (u8 *)Villager_GetMemory(a, z1);
            for (j = z2; j < 8; e += 0x68, j++) {
                if (VillagerMemory_IsUsed(e)) {
                    _ZN14VillagerMemory16clearTalkedTodayEv(e);
                    _ZN14VillagerMemory22clearPartyGiftReceivedEv(e);
                    _ZN14VillagerMemory17clearPartyGreetedEv(e);
                    _ZN14VillagerMemory23clearBirthdayLetterSentEv(e);
                    _ZN14VillagerMemory22clearNewYearLetterSentEv(e);
                    _ZN14VillagerMemory22clearFleaMarketVisitedEv(e);
                    _ZN14VillagerMemory20clearFortuneGreetingEv(e);
                }
            }
            _ZN23VillagerDataProfileView19sendBirthdayLettersEPv(a, b);
            _ZN23VillagerDataProfileView18sendNewYearLettersEPv(a, b);
        }
    }
}
}

namespace nA {
extern "C" s32 Field_FindPlayerAtUnit(s32 x, s32 y) {
    s32 result = 0;
    s32 ax = 0;
    s32 ay = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = PlayerActor_GetBodyPos(i);
        if (o != 0) {
            FieldPos_ToUnit(&ax, &ay, (s32)o);
            if (ax == x && ay == y) {
                result = PlayerActor_GetCharacter(i);
                break;
            }
        }
    }
    return result;
}
}

namespace nA {
extern "C" BOOL Field_IsUnitOccupied(s32 a, s32 b) {
    BOOL r = Field_FindPlayerAtUnit(a, b);
    if (r == 0) {
        r = NpcRegistry_FindAt(a, b);
    }
    return r;
}
}

namespace nA {
extern "C" BOOL TownMap_IsUnitWalkable(s32 x, s32 y, void *grid) {
    BOOL result = FALSE;
    if (grid == 0) {
        grid = gSceneBlockMap;
    }
    if (grid != 0 && _ZN8BlockMap10isWalkableEii(grid, x, y)) {
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = (u16 *)BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            u32 v = *c;
            if (v == 0xfff1) goto yes;
            if (Item_IsNormalItem(c)) goto yes;
            if (Unk_02077f68_R(c, 0xa7, 0xc6)) goto yes;
            if (Unk_02077d58_IsZero(gFieldSceneKind)) {
                if (Item_IsFurniture(c)) goto yes;
            }
            if (Item_IsTreeStage0(c)) goto yes;
            if (Unk_02077f68_C2(c)) goto yes;
            if (Unk_02077f68_C9(c)) {
            yes:
                if (!Field_IsUnitOccupied(x, y)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}
}

namespace nA {
extern "C" BOOL TownMap_IsPosWalkable(s32 a, void *grid) {
    s32 x = 0;
    s32 y = 0;
    FieldPos_ToUnit(&x, &y, a);
    return TownMap_IsUnitWalkable(x, y, grid);
}
}

namespace nA {
extern "C" BOOL TownMap_FindBuildingAbove(s32 x, s32 y, s32 h, s32 *px, s32 *py) {
    s32 i;
    void *grid = gSceneBlockMap;
    if (grid != 0 && h >= 0) {
        for (i = 0; i <= h; i++) {
            s32 hx, hy, yy;
            long xx;  
            u16 *c;
            yy = y - (i + 1);
            xx = x;
            hx = xx >> 4;
            hy = yy >> 4;
            c = (u16 *)BlockMap_GetItemPtr(grid, hx, hy, xx - (hx << 4), yy - (hy << 4), 0);
            if (c != 0) {
                BOOL r = FALSE;
                u32 v = *c;
                if (v >= 0x5000 && v <= 0x5021) {
                    r = TRUE;
                }
                if (r) {
                    if (px != 0 && py != 0) {
                        *px = x;
                        y -= i + 1;  
                        *py = y;
                    }
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}
}

namespace nA {
extern "C" BOOL TownMap_FindBuildingAbovePos(s32 a, s32 h, s32 *px, s32 *py) {
    s32 x = 0;
    s32 y = 0;
    FieldPos_ToUnit(&x, &y, a);
    return TownMap_FindBuildingAbove(x, y, h, px, py);
}
}

namespace nA {
extern "C" void NpcHeapPools_CreateAll() {
    NpcModelHeap_Create(gCurrentHeap);
    NpcTexPatBufs_Create(gCurrentHeap);
    VillagerAnimHeaps_Create(gCurrentHeap);
    SpNpcAnimHeaps_Create(gCurrentHeap);
}
}

namespace nA {
extern "C" void NpcHeapPools_DestroyAll() {
    NpcModelHeap_Destroy();
    NpcTexPatBufs_Destroy();
    VillagerAnimHeaps_Destroy();
    SpNpcAnimHeaps_Destroy();
}
}

namespace nA {
extern "C" s32 func_02077e28() {
    return 0x2bcc;
}
}

namespace nA {
extern "C" s32 func_02077e20() {
    return 0x31ec;
}
}

namespace nA {
extern "C" void _ZN16NpcTexPatBufPoolC1Ev(void **p) {
    s32 i;
    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }
}
}

namespace nA {
extern "C" void _ZN16NpcTexPatBufPoolD1Ev() {}
}

namespace nA {
extern "C" void NpcTexPatBufs_Create(void *) {
    NpcTexPatBufHeap_Create();
    NpcTexPatBufPool_Alloc(sNpcTexPatBufPool);
    if (gNpcTexPatBufHeap != 0) {
        func_020e877c(gNpcTexPatBufHeap);
    }
}
}

namespace nA {
extern "C" void NpcTexPatBufs_Destroy() {
    NpcTexPatBufPool_Free(sNpcTexPatBufPool);
    NpcTexPatBufHeap_Destroy();
}
}

namespace nA {
extern "C" void *NpcTexPatBufPool_Get(void **p, s32 i) {
    return p[i];
}
}

namespace nA {
extern "C" void NpcTexPatBufPool_Alloc(void **p) {
    void *heap = gNpcTexPatBufHeap;
    s32 t = Unk_02077d58_Count();
    s32 n = t + NpcSpawn_GetSpNpcSlotCount();
    s32 i;
    for (i = 0; i < n; i++) {
        p[i] = Heap_AllocAligned(heap, 0x2f88, 4);
    }
}
}

namespace nA {
extern "C" void NpcTexPatBufPool_Free(void **p) {
    void *heap = gNpcTexPatBufHeap;
    s32 i;
    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }
    if (heap != 0) {
        func_020e885c(heap);
    }
}
}

namespace nA {
extern "C" void _ZN20VillagerAnimHeapPoolC1Ev(void **p) {
    s32 i;
    for (i = 0; i < 8; i++) {
        p[i] = 0;
    }
}
}

namespace nA {
extern "C" void _ZN20VillagerAnimHeapPoolD1Ev() {}
}

namespace nA {
extern "C" void VillagerAnimHeaps_Create(void *) {
    VillagerAnimPoolHeap_Create();
    VillagerAnimHeapPool_Alloc(sVillagerAnimHeapPool);
    if (gVillagerAnimPoolHeap != 0) {
        func_020e877c(gVillagerAnimPoolHeap);
    }
}
}

namespace nA {
extern "C" void VillagerAnimHeaps_Destroy() {
    VillagerAnimHeapPool_Free(sVillagerAnimHeapPool);
    VillagerAnimPoolHeap_Destroy();
}
}

namespace nA {
extern "C" void *VillagerAnimHeapPool_Get(void **p, s32 i) {
    return p[i];
}
}

namespace nA {
extern "C" void VillagerAnimHeapPool_Alloc(void **p) {
    void *heap = gVillagerAnimPoolHeap;
    s32 i;
    for (i = 0; i < 8; i++) {
        p[i] = FrameHeap_Create(0x7ac, heap);
    }
}
}

namespace nA {
extern "C" void VillagerAnimHeapPool_Free(void **p) {
    void *heap = gVillagerAnimPoolHeap;
    s32 i;
    s32 z = 0;
    for (i = 0; i < 8; i++) {
        if (p[i] != 0) {
            func_020e885c(p[i]);
            p[i] = (void *)z;
        }
    }
    if (heap != 0) {
        func_020e885c(heap);
    }
}
}

namespace nA {
extern "C" void _ZN17SpNpcAnimHeapPoolC1Ev(void **p) {
    s32 i;
    for (i = 0; i < 4; i++) {
        p[i] = 0;
    }
}
}

namespace nA {
extern "C" void _ZN17SpNpcAnimHeapPoolD1Ev() {}
}

namespace nA {
extern "C" void SpNpcAnimHeaps_Create(void *) {
    SpNpcAnimPoolHeap_Create();
    SpNpcAnimHeapPool_Alloc(sSpNpcAnimHeapPool);
    if (gSpNpcAnimPoolHeap != 0) {
        func_020e877c(gSpNpcAnimPoolHeap);
    }
}
}

namespace nA {
extern "C" void SpNpcAnimHeaps_Destroy() {
    SpNpcAnimHeapPool_Free(sSpNpcAnimHeapPool);
    SpNpcAnimPoolHeap_Destroy();
}
}

namespace nA {
extern "C" void *SpNpcAnimHeapPool_Get(void **p, s32 i) {
    return p[i];
}
}

namespace nA {
extern "C" void SpNpcAnimHeapPool_Alloc(void **p) {
    void *heap = gSpNpcAnimPoolHeap;
    s32 n = NpcSpawn_GetSpNpcSlotCount();
    s32 i;
    for (i = 0; i < n; i++) {
        p[i] = FrameHeap_Create(0x7ac, heap);
    }
}
}

namespace nA {
extern "C" void SpNpcAnimHeapPool_Free(void **p) {
    void *heap = gSpNpcAnimPoolHeap;
    s32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        if (p[i] != 0) {
            func_020e885c(p[i]);
            p[i] = (void *)z;
        }
    }
    if (heap != 0) {
        func_020e885c(heap);
    }
}
}

namespace nA {
extern "C" void NpcTexPatBufRef_Init(s32 *p) {
    *p = 5;
}
}

namespace nA {
extern "C" void NpcTexPatBufRef_Deinit() {}
}

namespace nA {
extern "C" void NpcTexPatBufRef_Assign(s32 *p, s32 v) {
    NpcTexPatBufRef_Set(p, v);
}
}

namespace nA {
extern "C" void NpcTexPatBufRef_Set(s32 *p, s32 v) {
    *p = v;
}
}

namespace nA {
extern "C" void NpcTexPatBufRef_LoadFile(s32 *p, void *dst) {
    void *t = NpcTexPatBufPool_Get(sNpcTexPatBufPool, *p);
    File_LoadToBuffer(dst, t, 0x2f88);
}
}

namespace nA {
extern "C" void *NpcTexPatBufRef_GetBuffer(s32 *p) {
    return NpcTexPatBufPool_Get(sNpcTexPatBufPool, *p);
}
}

namespace nA {
extern "C" void VillagerAnimHeapRef_Init(s32 *p) {
    *p = 8;
}
}

namespace nA {
extern "C" void VillagerAnimHeapRef_Deinit() {}
}

namespace nA {
extern "C" void VillagerAnimHeapRef_Assign(s32 *p, s32 x) {
    func_020e885c(VillagerAnimHeapPool_Get(sVillagerAnimHeapPool, x));
    *p = x;
}
}

namespace nA {
extern "C" void *VillagerAnimHeapRef_GetHeap(s32 *p) {
    return VillagerAnimHeapPool_Get(sVillagerAnimHeapPool, *p);
}
}

namespace nA {
extern "C" void SpNpcAnimHeapRef_Init(s32 *p) {
    *p = 4;
}
}

namespace nA {
extern "C" void SpNpcAnimHeapRef_Deinit() {}
}

namespace nA {
extern "C" void SpNpcAnimHeapRef_Assign(s32 *p, s32 x) {
    func_020e885c(SpNpcAnimHeapPool_Get(sSpNpcAnimHeapPool, x));
    *p = x;
}
}

namespace nA {
extern "C" void *SpNpcAnimHeapRef_GetHeap(s32 *p) {
    return SpNpcAnimHeapPool_Get(sSpNpcAnimHeapPool, *p);
}
}

namespace nZ {
extern "C" {
extern const Unk_020cc148_E sImpressionRules[0x58];
const Unk_020cc148_E sImpressionRules[0x58] = {
    {2, ImpressionCond_PlayerFaceFlag},
    {2, ImpressionCond_WeedsAround},
    {0, ImpressionCond_FlowersAround},
    {1, ImpressionCond_FlowersAround},
    {0, ImpressionCond_FewVillagers},
    {1, ImpressionCond_FewVillagers},
    {0, ImpressionCond_VillagerEventToday},
    {1, ImpressionCond_VillagerEventToday},
    {0, ImpressionCond_Mood1},
    {1, ImpressionCond_Mood1},
    {0, ImpressionCond_Mood2or4},
    {1, ImpressionCond_Mood2or4},
    {2, ImpressionCond_HoldingNet},
    {2, ImpressionCond_HoldingAxe},
    {2, ImpressionCond_HoldingRod},
    {2, ImpressionCond_HoldingWateringCan},
    {2, ImpressionCond_WearingHat13c1},
    {2, ImpressionCond_WearingHat13b2},
    {2, ImpressionCond_WearingHat13a8},
    {2, ImpressionCond_WearingHat13bc},
    {2, ImpressionCond_WearingHat1405},
    {2, ImpressionCond_WearingHat13e6},
    {2, ImpressionCond_WearingHat13ea},
    {2, ImpressionCond_WearingHat13f5},
    {2, ImpressionCond_WearingHat13e3},
    {2, ImpressionCond_WearingHat13e4},
    {2, ImpressionCond_WearingHat1406},
    {1, ImpressionCond_FlowerAccessory},
    {0, ImpressionCond_FlowerAccessory},
    {1, ImpressionCond_HoldingUmbrella},
    {0, ImpressionCond_HoldingUmbrella},
    {1, ImpressionCond_Raining},
    {0, ImpressionCond_Raining},
    {1, ImpressionCond_Snowing},
    {0, ImpressionCond_Snowing},
    {1, ImpressionCond_WearingShirt12a8},
    {0, ImpressionCond_WearingShirt12a8},
    {1, ImpressionCond_TimeOfDay0},
    {0, ImpressionCond_TimeOfDay0},
    {1, ImpressionCond_TimeOfDay3},
    {0, ImpressionCond_TimeOfDay3},
    {2, ImpressionCond_PocketsFull},
    {1, ImpressionCond_FriendshipVeryLow},
    {0, ImpressionCond_FriendshipVeryLow},
    {1, ImpressionCond_FriendshipLow},
    {0, ImpressionCond_FriendshipLow},
    {1, ImpressionCond_FriendshipHigh},
    {0, ImpressionCond_FriendshipHigh},
    {1, ImpressionCond_FriendshipVeryHigh},
    {0, ImpressionCond_FriendshipVeryHigh},
    {1, ImpressionCond_HalfInsectsCaught},
    {1, ImpressionCond_AllInsectsCaught},
    {1, ImpressionCond_HalfFishCaught},
    {1, ImpressionCond_AllFishCaught},
    {0, ImpressionCond_HalfInsectsCaught},
    {0, ImpressionCond_AllInsectsCaught},
    {0, ImpressionCond_HalfFishCaught},
    {0, ImpressionCond_AllFishCaught},
    {2, ImpressionCond_BellsUpTo300},
    {2, ImpressionCond_BellsUpTo1000},
    {2, ImpressionCond_Bells10000To20000},
    {2, ImpressionCond_Bells20000To40000},
    {2, ImpressionCond_Bells40000To60000},
    {2, ImpressionCond_BellsOver60000},
    {1, ImpressionCond_AccessoryHairD},
    {1, ImpressionCond_AccessoryHairC},
    {0, ImpressionCond_AccessoryHairB},
    {0, ImpressionCond_AccessoryHairA},
    {1, ImpressionCond_Hair3},
    {1, ImpressionCond_Hair4},
    {1, ImpressionCond_Hair2},
    {1, ImpressionCond_Hair6},
    {1, ImpressionCond_Hair7},
    {0, ImpressionCond_Hair3},
    {0, ImpressionCond_Hair6},
    {0, ImpressionCond_Hair2},
    {0, ImpressionCond_Hair7},
    {0, ImpressionCond_Hair4},
    {2, ImpressionCond_FourResidents},
    {2, ImpressionCond_TwoPlusResidents},
    {1, ImpressionCond_Winter},
    {0, ImpressionCond_Winter},
    {1, ImpressionCond_Autumn},
    {0, ImpressionCond_Autumn},
    {1, ImpressionCond_Summer},
    {0, ImpressionCond_Summer},
    {1, ImpressionCond_Always},
    {0, ImpressionCond_Always},
};
extern const u32 sBirthdayGiftLists[3];
const u32 sBirthdayGiftLists[3] = {
    0x00000000, 0x00000004, 0x00000003,
};
s32 data_020e05ac[3] = {-1, -1, -1};
extern const u8 sStarSignEndDates[24];
const u8 sStarSignEndDates[24] = {
    0x01, 0x13, 0x02, 0x12, 0x03, 0x14, 0x04, 0x13, 0x05, 0x14, 0x06, 0x15, 0x07, 0x16, 0x08, 0x16,
    0x09, 0x16, 0x0a, 0x17, 0x0b, 0x16, 0x0c, 0x15,
};
u8 sErrandKindTaken[0x14];
SpNpcAnimHeapPool sSpNpcAnimHeapPool;
extern const u8 sFurnitureTasteTextBase[8];
const u8 sFurnitureTasteTextBase[8] = {
    0x00, 0x02, 0x0e, 0x10, 0x14, 0x00, 0x00, 0x00,
};
u8 sVillagerLetter4Path[0x28];
extern const u32 sRelationLevelThresholds[4];
const u32 sRelationLevelThresholds[4] = {
    0x00000190, 0x0000010e, 0x00000032, 0xffffffc4,
};
u8 sErrandVillagerDone[8];
u8 sSpeciesCandidateBits[0x14];
}
}

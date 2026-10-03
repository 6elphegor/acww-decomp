// mwcc-flags: -str reuse
#include "types.h"


class VillagerId {
public:
    u32 getName(u32 arg);
    void makeFileName(void *buf, u32 size, u32 arg);
    u32 getGender();
    void set(u32 id, u32 type, void *s);
    u32 isValid();
    u16 unk_00;
    u8 unk_02[8];
    u8 unk_0a;
    u8 unk_0b;
};

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    u32 isSlotActive(s32 i);
    BOOL isOnline();
};


struct Unk_0207ac60_Elem {
    u8 unk_00;
    u8 unk_01;
    Unk_0207ac60_Elem();
    ~Unk_0207ac60_Elem();
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
    u16 unk_6ac[10];
    u8 unk_6c0[0x14];
    u8 unk_6d4[0x14];
    u8 unk_6e8[2];
    u8 unk_6ea[8];
    u8 unk_6f2;

    BOOL func_0207e940(u16 *item, s32 mode, s32 type, u8 a, u8 b);
    s32 func_0207eadc(u16 *item);
    s32 func_0207eb70(s32 mode, s32 type, u8 a, u8 c);
    s32 func_0207ec54(s32 type, s32 lo, s32 hi);
    BOOL func_0207ecd4(u16 *p, s32 type);
    Unk_0207ed1c_Fn func_0207ed1c(s32 type);
    BOOL func_0207ed68(u16 *item);
    BOOL func_0207edbc(u16 *p);
    BOOL func_0207ede4(u16 *p);
    BOOL func_0207ee0c(u16 *p);
    BOOL func_0207ee34(u16 *p);
    s32 func_0207ee5c(s32 lo, s32 hi);
    s32 func_0207eec8(s32 lo, s32 hi);
    BOOL func_0207ef34(s32 *lo, s32 *hi, s32 mode, s32 type, u8 flag);
    u16 *getFurniture();
    Unk_0207efac_Item getFurnitureAt(s32 idx);
    s32 func_0207eff8(u16 *p);
    BOOL isValidFurnitureIndex(s32 idx);
    s32 func_0207f04c();
    BOOL func_0207f07c(s32 *o1, s32 *o2);
    void placeHouseMarker();
    void setHousePos(u8 *p);
    u8 *getHousePos();
    s32 hasHousePos();
    s32 clearHousePos();
    u8 *getMovedFromTownId();
    void func_0207f1a8(void *a, s32 n, void *c);
    BOOL getGreetingFor(void *a, void *c);
    void func_0207f20c(void *a, s32 n, void *c);
    void getComplimentFor(void *a, void *c);
};

struct Unk_020e1c64 {
    u32 v[7];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct Unk_0207f804_Str {
    u32 v[6];
    Unk_0207f804_Str();
    ~Unk_0207f804_Str();
    void func_02094294();
};

struct VillagerDataProfileView {
    u8 unk_000[0x568];
    u8 unk_568[0x6c0 - 0x568];
    u8 unk_6c0[0x1e];
    u8 unk_6de[0x6ec - 0x6de];
    u16 unk_6ec;
    u8 unk_6ee[6];
    u8 unk_6f4;

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
    void func_0207ff14(void *a);
    void func_02080078(void *a);
    void func_020801fc(void *a, void *b);
    BOOL func_02080450(u16 *p);
};

struct VillagerMemory {
    u8 unk_00[0x16];
    u8 unk_16[8];
    u8 unk_1e[0x10];
    u8 unk_2e[0x10];
    u8 unk_3e[0x14];
    u16 unk_52;
    s8 unk_54;
    u8 unk_55;
    u8 unk_56[2];
    u32 unk_58;
    long long unk_5c;
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
    } unk_64;
    u8 unk_66[2];

    BOOL func_0208091c();
    void func_02080930();
    void func_02080940();
    BOOL func_02080950();
    void func_02080964();
    void func_02080978();
    BOOL func_0208098c();
    void func_020809a0();
    void func_020809b4();
    BOOL func_020809c8();
    void func_020809dc();
    void func_020809f0();
    BOOL func_02080a04();
    void func_02080a18();
    void func_02080a2c();
    BOOL func_02080a40();
    void func_02080a54();
    void func_02080a64();
    BOOL func_02080a74();
    void func_02080a88();
    void func_02080a98();
    BOOL isGiftGiven();
    void setGiftGiven();
    s32 pickUnusedTopic();
    void setImpression(s32 v);
    u32 getImpression();
    void setTime(long long *src);
    BOOL hasTime();
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
    VillagerMemory unk_000[8];
    u32 unk_340[0x228 / 4];
    u32 unk_568[0xf4 / 4];
    u32 unk_65c[0x50 / 4];
    u16 unk_6ac[10];
    u32 unk_6c0[3];
    u16 unk_6cc[4];
    u8 unk_6d4[0xa];
    u8 unk_6de[0xa];
    u32 unk_6e8;
    u16 unk_6ec;
    u8 pad_6ee[2];
    u8 unk_6f0;
    u8 pad_6f1;
    u8 unk_6f2;
    u8 pad_6f3;
    u8 unk_6f4;
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

      s32 unk_04;
      u8 unk_08;
      u8 unk_09;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromMsgString(MsgString *src);

      MsgStringAttr unk_04;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

      u32 unk_04;
      MsgStringAttr unk_08;
};

class MsgString17B : public MsgString {
public:
    MsgString17B();
    virtual ~MsgString17B();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
      u8 unk_12[0x11];
};

class EncodedString10 : public EncodedString {
public:
    EncodedString10();
    virtual ~EncodedString10();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void copyTo(void *dst, s32 n);
      u8 unk_0e[0xa];
};

class MsgString17 : public MsgString {
public:
    MsgString17();
    virtual ~MsgString17();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
      u8 unk_12[0x11];
};

class EncodedString16 : public EncodedString {
public:
    EncodedString16();
    virtual ~EncodedString16();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
      u8 unk_0e[0x10];
};

class MsgString11 : public MsgString {
public:
    MsgString11();
    virtual ~MsgString11();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
      u8 unk_12[0xb];
};

class EncodedString16B : public EncodedString {
public:
    EncodedString16B();
    virtual ~EncodedString16B();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
      u8 unk_0e[0x10];
};


struct Unk_021cc9e8_Elem {
    u8 b[0x2c];
    Unk_021cc9e8_Elem();
    ~Unk_021cc9e8_Elem();
};
struct Unk_021cc9e8 {
    Unk_021cc9e8_Elem unk_00[8];
    u8 unk_160[0x10];
};
struct Unk_021cc8b0 {
    void *p[4];
    Unk_021cc8b0();
    ~Unk_021cc8b0();
};
struct Unk_021cc914 {
    void *p[8];
    Unk_021cc914();
    ~Unk_021cc914();
};
struct Unk_021cc8e8 {
    void *p[5];
    Unk_021cc8e8();
    ~Unk_021cc8e8();
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
    u8 unk_1d;
    u8 pad_1e[0x2c - 0x1e];
};
struct Unk_020781ec_Data {
    Unk_020781ec_Elem unk_00[8];
    s8 unk_160;
    s8 unk_161;
    s8 unk_162;
    s8 unk_163;
    s8 unk_164;
    u8 pad_165[3];
    s32 unk_168;
    s8 unk_16c;
};
extern void *gCommManager;
extern void *data_021cc8b0[];
extern void *data_021cc914[];
extern void *data_021cc8e8[];
extern void *data_021c61a4;
extern void *data_021c61a8;
extern void *data_021c61ac;
extern u8 data_020e416c;
extern void *gSceneBlockMap;
extern void *gCurrentHeap;
BOOL _ZN11CommManager8isOnlineEv(void *);
void _ZN11CommManager11beginRecordEv(void *);
void _ZN11CommManager11writeRecordEPhj(void *, void *, s32);
void _ZN11CommManager9endRecordEjj(void *, s32, s32);
void func_02077ab4(u8 *, s32, s32);
void *func_02077c0c(void **, s32);
void *func_02077cd4(void **, s32);
void *func_02077dc4(void **, s32);
void func_02077b98(void **);
void func_02077bd4(void **);
void func_02077c68(void **);
void func_02077ca4(void **);
void func_02077d30(void **);
void func_02077d58(void **);
void func_020e885c(void *);
void func_020e877c(void *);
void *FrameHeap_Create(s32, void *);
void *Heap_AllocAligned(void *, s32, s32);
void File_LoadToBuffer(void *, void *, s32);
void func_0205b944();
void func_0205b960();
void func_0205b9a4();
void func_0205b9c0();
void func_0205ba00();
void func_0205ba1c();
void func_0205b8a0();
void func_0205b8c0(void *);
s32 func_02084fbc();
s32 func_020812f4();
s32 func_020b50e8();
s32 func_020b491c(s32);
s32 func_020b4928(s32);
void FieldPos_ToUnit(s32 *, s32 *, s32);
void *BlockMap_GetItemPtr(void *, s32, s32, s32, s32, s32);
BOOL _ZN8BlockMap13func_0204e418Eii(void *, s32, s32);
BOOL Item_IsNormalItem(void *);
BOOL func_020780e4(s32, s32);
s32 func_02078104(s32, s32);
BOOL func_02077eb0(s32, s32, s32, s32 *, s32 *);
BOOL func_02077f68(s32, s32, void *);
BOOL Item_IsFurniture(void *);
BOOL Item_IsTreeStage0(void *);
s32 NpcRegistry_FindAt(s32, s32);
void *func_020947f0(s32);
s32 func_020951ec(s32);
struct Unk_020781ec_Data *func_020783f8();
void *func_020784f4(void *);
s32 func_020784e0(void *);
s32 func_02078384(void *);
s32 func_020783d4(void *);
s32 func_02078400(void *);
void *_ZN12VillagerData13getVillagerIdEv(void *);
BOOL _ZN10VillagerId7isValidEv(void *);
s32 Villager_GetResidentStatus(void *);
s32 Villager_PickShownFurniture(void *);
void *Villager_GetMemory(void *, s32);
BOOL func_02080f94(void *);
void _ZN14VillagerMemory13func_02080a88Ev(void *);
void _ZN14VillagerMemory13func_02080a54Ev(void *);
void _ZN14VillagerMemory13func_02080a18Ev(void *);
void _ZN14VillagerMemory13func_020809dcEv(void *);
void _ZN14VillagerMemory13func_020809a0Ev(void *);
void _ZN14VillagerMemory13func_02080964Ev(void *);
void _ZN14VillagerMemory13func_02080930Ev(void *);
void _ZN23VillagerDataProfileView13func_02080078EPv(void *, s32);
void _ZN23VillagerDataProfileView13func_0207ff14EPv(void *, s32);
void func_02077a54(s32 a, s32 b);
void func_02077a9c(s32 *a, s32 *b, u8 *p);
void func_02077ab4(u8 *p, s32 a, s32 b);
void *func_02077ac4(s32 *p);
void func_02077ad8(s32 *p, s32 x);
void func_02077af8();
void func_02077afc(s32 *p);
void *func_02077b04(s32 *p);
void func_02077b18(s32 *p, s32 x);
void func_02077b38();
void func_02077b3c(s32 *p);
void *func_02077b44(s32 *p);
void func_02077b58(s32 *p, void *dst);
void func_02077b84(s32 *p, s32 v);
void func_02077b80(s32 *p, s32 v);
static inline BOOL Unk_02077d58_IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}
void *func_02077ac4(s32 *p);
void func_02077ad8(s32 *p, s32 x);
void func_02077af8();
void func_02077afc(s32 *p);
void *func_02077b04(s32 *p);
void func_02077b18(s32 *p, s32 x);
void func_02077b38();
void func_02077b3c(s32 *p);
void *func_02077b44(s32 *p);
void func_02077b58(s32 *p, void *dst);
void func_02077b84(s32 *p, s32 v);
void func_02077b80(s32 *p, s32 v);
void func_02077b8c();
void func_02077b90(s32 *p);
void func_02077b98(void **p);
void func_02077bd4(void **p);
void *func_02077c0c(void **p, s32 i);
void func_02077c2c(void *);
void func_02077cdc();
void func_02077dcc();
void func_02077c14();
void func_02077c2c(void *);
void _ZN12Unk_021cc8b0D1Ev();
void _ZN12Unk_021cc8b0C1Ev(void **p);
void func_02077c68(void **p);
void func_02077ca4(void **p);
void *func_02077cd4(void **p, s32 i);
void func_02077cdc();
void func_02077cf4(void *);
void _ZN12Unk_021cc914D1Ev();
void _ZN12Unk_021cc914C1Ev(void **p);
void func_02077d30(void **p);
static inline s32 Unk_02077d58_Count()
{
    s32 t;
    if (Unk_02077d58_IsZero(data_020e416c)) {
        t = func_020812f4();
    } else {
        t = func_020b491c(func_020b50e8());
        t -= func_020b4928(func_020b50e8());
    }
    return t;
}
void func_02077d58(void **p);
void *func_02077dc4(void **p, s32 i);
void func_02077de4(void *);
void func_02077cf4(void *);
void func_02077c2c(void *);
void func_02077dcc();
void func_02077de4(void *);
void _ZN12Unk_021cc8e8D1Ev();
void _ZN12Unk_021cc8e8C1Ev(void **p);
s32 func_02077e20();
s32 func_02077e28();
void func_02077e30();
void func_02077e4c();
BOOL func_02077e7c(s32 a, s32 h, s32 *px, s32 *py);
BOOL func_02077eb0(s32 x, s32 y, s32 h, s32 *px, s32 *py);
BOOL func_02077f40(s32 a, void *grid);
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
BOOL func_02077f68(s32 x, s32 y, void *grid);
BOOL func_020780e4(s32 a, s32 b);
s32 func_02078104(s32 x, s32 y);
void func_02078150(u8 *a, s32 b);
void func_020781ec();
s32 func_02078204();
void func_0207821c(s32 v);
s32 func_02078234();
s32 func_02078264();
s32 func_02078294();
void func_0207824c(s32 v);
void func_0207827c(s32 v);
void func_020782ac(s32 v);
void func_020782c4();
void func_020782e0();
void func_02078308();
void func_02078328();
void func_02078348();
void func_0207835c();
void func_02078370();
}
}

// ---- unk_02078384.cpp
namespace nB {
extern "C" {

struct Unk_020784f4 {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
};
struct Unk_02078614 {
    u8 unk_00;
    u8 unk_01;
    u32 unk_04[3];
    u32 unk_10[2];
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u32 unk_20;
    u16 unk_24;
    u16 unk_26;
    Unk_020784f4 unk_28;
};
struct Unk_02078400 {
    Unk_02078614 unk_00[8];
    s8 unk_160;
    s8 unk_161;
    s8 unk_162;
    s8 unk_163;
    s8 unk_164;
    u32 unk_168;
    s8 unk_16c;
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
    Unk_02078738_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
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
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
};
struct Unk_02078864_T {
    s32 v[2];
};
extern u8 data_021dfd8c[];
extern void *gCommManager;
extern Unk_02078400 data_021cc9e8;
extern Unk_02078738_Grid *gSceneBlockMap;
extern u8 data_020e416c;
extern u8 data_020cbfe8[][2];
extern u8 data_020cbfb8[][2];
extern u8 data_020cc008[][4];
extern u8 data_020cc084[][6];
BOOL _ZN11CommManager12isSlotActiveEi(void *o, u32 v);
BOOL _ZN11CommManager8isOnlineEv(void *o);
BOOL func_020b51a4();
BOOL func_020b5184();
void _ZN12Unk_0209ada413func_0209ad80Ev(void *p);
void _ZN12Unk_0209ada413func_0209ada0Ev(void *p);
void _ZN12Unk_0209ada413func_0209ada4Ev(void *p);
void func_0209b550(void *p);
void func_0209b55c(void *p);
void func_0209b560(void *p);
s32 MI_CpuFill8(void *d, s32 v, s32 n);
void *SaveVillagers_Get(void *t, s32 i);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
BOOL _ZN10VillagerId7isValidEv(void *p);
u32 VillagerId_GetPersonality(void *p);
void *Villager_GetPlan(void *p);
void *func_0209a610(void *p);
BOOL _ZN12Unk_0209b3bc13func_0209b1e4EPv(void *a, void *b);
void Clock_GetDateTime(void *p);
void func_0207cb68(void *o, u32 kind, s32 v);
Unk_02078948_Obj *NpcRegistry_FindVillagerByHandle();
BOOL MapBlock_HasAllAttr(void *cell, s32 v);
void _ZN12VillagerDataD1Ev(void *p);
void _ZN12VillagerDataC1Ev(void *p);
u8 *func_0207f948(void *p);
u32 Villager_GetAnimalKind(void *p);
u32 func_0207f9c4(void *p);
BOOL SaveVillagers_IsValidIndex(void *p);
s32 func_02078d1c(void *a, void *p, void *q);
BOOL func_02078d4c(void *a, s32 k);
s32 func_02078ca8(void *a, s32 k, s32 r);
void func_02078384(Unk_02078614 *e);
void func_020783d4();
Unk_02078614 *func_020783d8(Unk_02078400 *m, s32 i);
Unk_02078400 *func_020783f8();
void func_02078400(Unk_02078400 *m);
BOOL func_0207845c(s32 i);
s32 func_0207846c(Unk_020784f4 *t);
void func_02078498(Unk_020784f4 *t);
void func_020784a8(Unk_020784f4 *t);
void func_020784b8(Unk_020784f4 *t, s32 v);
void func_020784e0(Unk_020784f4 *t);
void func_020784ec(Unk_020784f4 *t);
void func_020784f0(Unk_020784f4 *t);
Unk_020784f4 *func_020784f4(Unk_02078614 *e);
void func_020784f8(Unk_02078614 *e);
void func_02078504(Unk_02078614 *e, u16 *p);
u16 *func_0207850c(Unk_02078614 *e);
void func_02078510(Unk_02078614 *e);
void func_02078520(Unk_02078614 *e);
void func_0207853c(Unk_02078614 *e);
u32 func_02078548(Unk_02078614 *e);
void func_0207854c(Unk_02078614 *e, u16 v);
void func_02078550(Unk_02078614 *e, s32 v);
void func_02078568(Unk_02078614 *e, u32 v);
u32 func_0207856c(Unk_02078614 *e);
void func_02078570(Unk_02078614 *e, u32 v);
u32 func_02078574(Unk_02078614 *e);
void *func_02078578(Unk_02078614 *e);
void func_0207857c(Unk_02078614 *e, u32 v);
u32 func_02078580(Unk_02078614 *e);
void func_020785a8(Unk_02078614 *e);
void func_020785e8(Unk_02078614 *e, u32 v);
u32 func_020785ec(Unk_02078614 *e);
void func_02078614(Unk_02078614 *e);
Unk_02078614 *_ZN17Unk_021cc9e8_ElemD1Ev(Unk_02078614 *e);
Unk_02078614 *_ZN17Unk_021cc9e8_ElemC1Ev(Unk_02078614 *e);
void func_0207869c();
void func_020786e8();
void func_0207870c(Unk_02078738_Pos *p);
BOOL func_02078738(Unk_02078738_Pos *p);
void func_0207878c(Unk_02078738_Pos *p);
void func_020787b0();
void func_020787d4();
void func_020787f8(Unk_02078738_Pos *p);
void func_0207881c(Unk_02078738_Pos *p);
void func_02078840(Unk_02078738_Pos *p);
void func_02078864(u32 kind, Unk_02078738_Pos *p);
BOOL func_02078948(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1);
void func_020789a8();
void *func_020789ac(void *p);
void *func_020789bc(void *p);
s32 func_020789cc(void *a, s32 b, s32 c);
s32 func_02078a3c(void *a, void *p, void *q);
u32 func_02078acc(void *a, void *p, void *q);
u32 func_02078b04(void *a, void *p, void *q);
u32 func_02078b30(void *a, void *p, void *q);
u32 func_02078bb0(void *a, void *p, void *q);
s32 func_02078be4(void *a, void *p, void *q);
s32 func_02078c24(void *a, void *p, void *q);
void func_02078c6c(void *a, void *p, void *q, s32 r);
static inline BOOL Unk_02078384_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
void func_02078384(Unk_02078614 *e);
void func_020783d4();
Unk_02078614 *func_020783d8(Unk_02078400 *m, s32 i);
void func_02078400(Unk_02078400 *m);
BOOL func_0207845c(s32 i);
s32 func_0207846c(Unk_020784f4 *t);
void func_02078498(Unk_020784f4 *t);
void func_020784a8(Unk_020784f4 *t);
void func_020784b8(Unk_020784f4 *t, s32 v);
void func_020784e0(Unk_020784f4 *t);
void func_020784ec(Unk_020784f4 *t);
void func_020784f0(Unk_020784f4 *t);
Unk_020784f4 *func_020784f4(Unk_02078614 *e);
void func_020784f8(Unk_02078614 *e);
void func_02078504(Unk_02078614 *e, u16 *p);
u16 *func_0207850c(Unk_02078614 *e);
void func_02078510(Unk_02078614 *e);
void func_02078520(Unk_02078614 *e);
void func_0207853c(Unk_02078614 *e);
u32 func_02078548(Unk_02078614 *e);
void func_0207854c(Unk_02078614 *e, u16 v);
void func_02078550(Unk_02078614 *e, s32 v);
void func_02078568(Unk_02078614 *e, u32 v);
u32 func_0207856c(Unk_02078614 *e);
void func_02078570(Unk_02078614 *e, u32 v);
u32 func_02078574(Unk_02078614 *e);
void *func_02078578(Unk_02078614 *e);
void func_0207857c(Unk_02078614 *e, u32 v);
u32 func_02078580(Unk_02078614 *e);
void func_020785a8(Unk_02078614 *e);
void func_020785e8(Unk_02078614 *e, u32 v);
u32 func_020785ec(Unk_02078614 *e);
void func_02078614(Unk_02078614 *e);
Unk_02078614 *_ZN17Unk_021cc9e8_ElemD1Ev(Unk_02078614 *e);
Unk_02078614 *_ZN17Unk_021cc9e8_ElemC1Ev(Unk_02078614 *e);
void func_0207869c();
void func_020786e8();
void func_0207870c(Unk_02078738_Pos *p);
static inline Unk_02078738_Cell *Unk_02078738_GetCell(Unk_02078738_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04 && y < g->unk_08 && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04 + x];
    }
    return NULL;
}
BOOL func_02078738(Unk_02078738_Pos *p);
void func_0207878c(Unk_02078738_Pos *p);
void func_020787b0();
void func_020787d4();
void func_020787f8(Unk_02078738_Pos *p);
void func_0207881c(Unk_02078738_Pos *p);
void func_02078840(Unk_02078738_Pos *p);
void func_02078864(u32 kind, Unk_02078738_Pos *p);
void func_020789a8();
void *func_020789ac(void *p);
void *func_020789bc(void *p);
s32 func_020789cc(void *a, s32 b, s32 c);
s32 func_02078a3c(void *a, void *p, void *q);
u32 func_02078acc(void *a, void *p, void *q);
u32 func_02078b04(void *a, void *p, void *q);
u32 func_02078b30(void *a, void *p, void *q);
u32 func_02078bb0(void *a, void *p, void *q);
s32 func_02078be4(void *a, void *p, void *q);
s32 func_02078c24(void *a, void *p, void *q);
void func_02078c6c(void *a, void *p, void *q, s32 r);
Unk_02078400 *func_020783f8();
BOOL func_02078948(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1);
}
}

// ---- unk_02078ca8.cpp
namespace nC {
extern "C" {

struct Unk_02078d6c_Slot { u8 pad[0x2c]; };
struct Unk_02078d6c_Time { u32 lo; u32 hi; };
struct Unk_02078d6c_Self {
    u8 pad[8];
    s8 unk_08[4];
    u32 unk_0c;
    u32 unk_10;
};
struct Unk_02079524_Self {
    u8 pad[0x38ec];
    u16 unk_38ec_0 : 1;
    u16 unk_38ec_1 : 1;
    u16 unk_38ec_2 : 3;
};
struct Unk_020794ac_Entry { u8 *unk_00; u8 unk_04; };
s8 *func_020783f8();
void func_0207857c(void *, s32);
void func_020785e8(void *, s32);
s32 SaveVillagers_IsValidIndex(s32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);
void Clock_GetDateTime(void *);
s32 _ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(s32);
s32 func_020812f4();
s32 SaveVillagers_CountImpl(void *);
s32 func_02078234(void *);
s32 PlayerData_GetCurrent(void *);
s32 _ZN12Unk_02097ff413func_02098044Ej(s32, s32);
s32 VillagerId_GetPersonality(s32);
s32 func_02081288(s32, s32);
s32 func_0204bdb8();
s32 SaveVillagers_GetUnk3830Index(s32);
s32 func_0207c764(void *);
s32 func_02063b8c(s32);
s32 DateTime_IsInvalid(void *);
s32 DateTime_Compare(void *, void *, s32);
s32 DateTime_DiffMinutes(void *, void *);
s32 _ZN8PlayerId13func_02094218Ev(s32);
s32 Villager_FindMemory(void *, s32);
s32 func_0207e278(void *);
s32 func_02060e24(s32);
void func_0207c65c(void *);
s32 SaveVillagers_FindIndex(void *, s32);
BOOL func_02078d4c(void *a, u32 i);
BOOL func_02079380(u8 *self, s32 a, s32 v);
BOOL func_020792ec(Unk_02078d6c_Self *self, u32 i, s32 v);
s32 func_02078d1c(s32 a, s32 b, s32 c);
void func_02078de0(Unk_02078d6c_Self *self, u8 *p);
void func_02078e60(Unk_02078d6c_Self *self, u8 *p);
void func_02078f0c(Unk_02078d6c_Self *self, u8 *p, s32 x);
void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void func_020790d4(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit);
BOOL func_020791c0(Unk_02078d6c_Self *self, void *out);
s32 func_020792b8(Unk_02078d6c_Self *self, s32 x);
void func_020792fc(Unk_02078d6c_Self *self);
void func_0207930c(s8 *p, s32 x);
void func_0207928c(Unk_02078d6c_Self *self, s32 x);
s32 func_020794ac();
void func_020793b0(void *a, void *b);
void func_020793a4(void *a, void *b, void *c);
void func_02078ca8(s8 *a, s32 i, s32 d);
void func_02078cd8(u8 *a, s32 x);
s32 func_02078d1c(s32 a, s32 b, s32 c);
BOOL func_02078d4c(void *a, u32 i);
void func_02078d58(void *p);
void func_02078d64();
void func_02078d68();
void func_02078d6c(Unk_02078d6c_Self *self, u8 *p, s32 keep);
void func_02078de0(Unk_02078d6c_Self *self, u8 *p);
void func_02078e60(Unk_02078d6c_Self *self, u8 *p);
void func_02078f0c(Unk_02078d6c_Self *self, u8 *p, s32 x);
void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void func_020790d4(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit);
BOOL func_020791c0(Unk_02078d6c_Self *self, void *out);
void func_02079228(Unk_02078d6c_Self *p);
void func_02079230(s8 *out, u8 *p);
s32 func_02079268(Unk_02078d6c_Self *a, s32 b);
void func_02079270(Unk_02078d6c_Self *self, s32 x);
void func_0207928c(Unk_02078d6c_Self *self, s32 x);
s32 func_020792b8(Unk_02078d6c_Self *self, s32 x);
BOOL func_020792ec(Unk_02078d6c_Self *self, u32 i, s32 v);
void func_020792fc(Unk_02078d6c_Self *self);
void func_0207930c(s8 *p, s32 x);
void func_0207934c(s8 *p, s32 x);
BOOL func_02079380(u8 *self, s32 a, s32 v);
void func_020793a4(void *a, void *b, void *c);
void func_020793b0(void *a, void *b);
void func_020793c0(Unk_02078d6c_Self *self);
void func_020793dc();
void func_020793e0(Unk_02078d6c_Self *p);
void func_020793e8(u8 *p, s32 a1);
s32 func_020794ac();
void func_020794f4(u8 *p);
BOOL func_02079524(Unk_02079524_Self *self, s32 u);
void func_02079568(Unk_02079524_Self *self, s32 u);
void func_020795a8(Unk_02079524_Self *self);
}
}

// ---- unk_020795c4.cpp
namespace nD {
extern "C" {

void func_02003110(void *dst, void *src);
void func_02003100(void *);
s32 _ZN10VillagerId7isValidEv(void *);
void _ZN8PlayerIdC1ERKS_(void *, void *);
void _ZN8PlayerIdC1Ev(void *);
s32 _ZN8PlayerId13func_02094218Ev(void *);
void *func_02065634(void *);
void *func_0206561c(void *);
void *func_0209788c(void *, void *);
void *_ZN10PlayerData13func_0209865cEv(void *);
void func_020999c0(void *, void *);
void *SaveVillagers_Find(void *, void *);
void _ZN23VillagerDataProfileView13func_020801fcEPvS0_(void *, void *, void *);
s32 _ZN12VillagerData17receiveLetterFromEj(void *, void *);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 Villager_FindMemory(void *, void *);
void MI_CpuCopy8(void *src, void *dst, u32 size);
s32 Date_IsAfterOrEqual(void *, void *);
s32 Date_DaysBetween(void *, void *);
void func_0207824c(s32);
s32 func_020b50e8();
void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
void *_ZN10PlayerData13func_02098750Ev(void *);
s32 _ZN15PlayerInventory15findEmptyPocketEv(void *);
void *_ZN10PlayerData11getPlayerIdEv(void *);
u8 *_ZN12Unk_02097ff413func_02098308Ev(void *);
void Clock_GetDateTime(void *);
s32 _ZN12Unk_02097ff413func_020982d0Ev(void *);
s32 SaveVillagers_IsValidIndex(s32);
void func_02079228(void *);
s32 Villager_GetResidentStatus(void *);
void *func_0207e310(void *);
s32 _ZN14VillagerMemory13getFriendshipEv(void *);
s32 Random_PickSetBit(u32, s32, s32);
s32 func_0207821c(s32);
s32 _ZN14VillagerMemory13func_02080950Ev(void *);
s32 _ZN14VillagerMemory13func_02080940Ev(void *);
s32 func_02078580(void *);
s32 func_02078294();
s32 func_02078264();
s32 func_020785ec(void *);
void func_020785a8(void *);
void func_020785e8(void *, s32);
void func_020782ac(s32);
void func_0207827c(s32);
s32 func_02079ab0(void *, void *);
s32 func_02079b34(void *, s32);
s32 func_0207f9e0(void *);
s32 SaveVillagers_GetUnk3830Index(void *);
void _ZN12Unk_020994cc13func_02099790Ev(void *);
s32 EventSchedule_CollectDayAll(void *, void *);
s32 func_020789cc(void *, s32, s32);
void *PlayerData_GetResident(void *, s32);
s32 func_0207fa50(void *, s32, void *);
s32 _ZN12Unk_02097ff413func_02098198Ej(void *, s32);
void _ZN12Unk_02097ff413func_02098188Ejj(void *, s32, s32);
s32 func_0205989c(void *, void *);
void func_02078568(void *, s32);
void func_0207854c(void *, s32);
void func_0205b124(void *);
void func_0205b120(void *);
s32 func_0205af28(void *, s32, u16 *, s32 *, s32 *, s32 *);
void func_02079ce8(void *, s32);
void func_02079da0(void *, void *);
void func_02079edc(void *);
s32 _ZN11CommManager8isOnlineEv(void *);
s32 _ZN11CommManager12isSlotActiveEi(void *, s32);
void func_0207c1e8(void *);
s32 func_0207980c(void *, void *);
s32 func_020798b8(void *);
extern u8 data_021d735c[];
extern CommManager *gCommManager;
struct Unk_020795c4_Buf {
    u32 v[5];
    Unk_020795c4_Buf(void *p) { _ZN8PlayerIdC1ERKS_(this, p); }
    ~Unk_020795c4_Buf() { _ZN8PlayerIdC1Ev(this); }
};
struct Unk_020795c4_Str {
    u16 pad;
    u8 v[12];
    Unk_020795c4_Str(void *p) { func_02003110(v, p); }
    ~Unk_020795c4_Str() { func_02003100(v); }
};
struct Unk_020796d4_Obj {
    u8 pad_00[0x38c0];
    u8 unk_38c0[4];
};
s32 func_020795c4(void *self, void *p);
BOOL func_02079678(u8 *self, void *p);
void func_020796d4(Unk_020796d4_Obj *self, void *p);
BOOL func_020796f8(Unk_020796d4_Obj *self, void *p);
struct Unk_02079748_B {
    u8 b[8];
};
void func_02079748(u8 *self, void *p);
s32 func_0207980c(void *self0, void *p);
void func_020798a0(void *self);
s32 func_020798b8(void *self0);
void func_02079954(u8 *self);
void func_02079a0c(u8 *self);
s32 func_02079ab0(void *self0, void *p0);
s32 func_02079b34(void *self0, s32 x);
void func_02079bb4(u8 *self);
void func_02079c7c(u8 *self);
void func_02079cc8(void *self);
struct Unk_02079ce8_Obj {
    u8 pad_00[0x20];
    s32 unk_20;
    u16 unk_24;
};
void func_02079ce8(void *self, s32 idx);
void func_02079d64(void *self, void *p);
void func_02079da0(void *self0, void *p);
void func_02079e9c(void *self0);
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
    u16 unk_00;
    u8 pad_02[10];
};
extern CommManager *gCommManager;
extern u32 data_020cc0a8[];
extern u16 data_020cc048[];
extern u8 data_021d735c[];
extern u8 data_021cc8c0[];
extern u8 data_021cc854[];
extern u8 data_020cbfd8[];
void *_ZN12VillagerData13getVillagerIdEv(void *p);
void func_0207c1c8(void *p);
void func_0207c354(void *p, void *q);
void Clock_GetDateTime(void *d);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void MI_CpuFill8(void *dst, s32 v, s32 n);
s32 EventSchedule_CollectDayAll(void *buf, void *d);
s32 DateTime_AddDays(void *d, s32 n);
s32 Event_GetState(u32 a, void *d, s32 z);
u32 func_02040c70();
void *func_0207e310(void *p);
s32 func_02078580(void *p);
s32 func_02078578(void *p);
s32 Random_PickSetBit(u32 mask, s32 cnt, s32 n);
u8 *func_020783f8();
s32 Villager_GetResidentStatus(void *p);
void Clock_GetDate(void *d);
s32 Date_IsAfterOrEqual(void *d, void *e);
void _ZN12Unk_020994cc13func_02099790Ev(void *p);
s32 _ZN12Unk_020994cc13func_02099668Ev(void *p);
s32 _ZN12Unk_020994cc13func_02099624EP17Unk_020994cc_Date(void *p, void *d);
s32 Date_DaysBetween(void *d, void *e);
s32 DateTime_Make(void *d, void *e, s32 a, s32 b, s32 c);
s32 DateTime_SubDays(void *d, s32 n);
BOOL func_0207a3a0(void *p);
s32 func_0207a3b8(void *p, u32 idx);
void *SaveVillagers_Get(void *p, s32 i);
void _ZN12Unk_020994cc13func_02099724EP17Unk_020030d8_R256Ph(void *p, void *q, void *d);
void func_02079228(void *p);
s32 _ZN12Unk_020994cc13func_02099690Ev(void *p);
void *_ZN12Unk_020994cc13func_02099710Ej(void *p, u32 i);
void _ZN8PlayerId13func_02094294Ev(void *p);
s32 SaveVillagers_Count(void *p);
s32 func_0207cd48(void *p);
s32 func_0207fa50(void *p, s32 a, void *d);
u8 *func_0207f948();
s32 func_02063b8c(s32 n);
s32 _ZN12Unk_020994cc13func_0209978cEv(void *p);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(s32 p);
s32 _ZN12Unk_020994cc13func_02099788Ev(void *p);
s32 SaveVillagers_FindIndex(void *p, s32 i);
s32 func_02070fbc(s32 a, s32 b);
void _ZN23VillagerDataProfileView8setShirtEPt(void *p, void *d);
void func_0207c7bc(void *p);
s32 Villager_GetPlan(void *p);
s32 func_0209a60c(s32 p);
s32 func_0209a940(s32 p);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(s32 p);
s32 func_0209a92c(s32 p);
void func_0207e4f4(void *p);
void *PlayerData_GetResident(void *t, s32 i);
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
BOOL _ZN8PlayerId13func_02094218Ev(s32 p);
void *_ZN10PlayerData13func_0209865cEv(void *p);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *p);
s32 func_0209ac44(void *p);
s32 DateTime_DiffDays(void *p, s32 q);
void func_02099f1c(void *p);
void _ZN12Unk_0209ada413func_0209abb4Eh(void *p, s32 v);
BOOL func_020594dc(u32 a, s32 b, void *c);
BOOL func_0207a834(void *p);
s32 PlayerData_GetCurrent(void *p);
s32 func_0209acf8(u32 *o, u32 v);
u32 func_0207a8b8(void *b, void *p, s32 a);
s32 func_0209ad34();
s32 func_0209a610(s32 p);
s32 _ZN12Unk_0209b3bc13func_0209b3a4Ev(s32 p);
s32 _ZN12Unk_0209b3bc13func_0209b328Ev(s32 p);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(s32 p);
s32 _ZN12Unk_0209ada413func_0209ad54EhPth(s32 a, s32 b, void *c, s32 d);
s32 SaveVillagers_GetUnk3830(void *p);
s32 SaveVillagers_GetUnk3830Index(void *p);
void func_0207a310(void *p);
void func_0207a63c(void *p);
void func_02079edc(u8 *p);
void func_02079f1c(u8 *p, void *q);
s32 func_02079f54(u32 n, void *src);
s32 func_02079fd8();
void func_0207a038(u8 *base);
void func_0207a104(u8 *b);
void func_0207a310(void *pp);
BOOL func_0207a3a0(void *p);
s32 func_0207a3b8(void *pp, u32 idx);
s32 SaveVillagers_GetUnk3830Index(void *p);
s32 SaveVillagers_GetUnk3830(void *p);
void func_0207a4c4(u8 *p, s32 q);
void func_0207a550(s32 unused, s32 q);
void func_0207a624(void *b);
void func_0207a63c(void *bb);
}
}

// ---- unk_0207a80c.cpp
namespace nF {
extern "C" {

extern CommManager *gCommManager;
extern s32 data_020cbff8[4];
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
u8 *func_020783f8();
u8 *func_02078578(u8 *p);
s32 _ZN12Unk_0209ada413func_0209ad80Ev(u8 *p);
s32 func_0207a8b8(u8 *self, u8 *p, u8 *r);
s32 func_0207a914(u8 *self, u8 *p, u8 *r);
u32 func_0207aae4(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best);
BOOL func_0207aacc(s32 a, s32 b);
BOOL func_0207aad8(s32 a, s32 b);
u32 func_0207ac2c(u8 *self, s32 a, s32 b);
VillagerId *_ZN12VillagerData13getVillagerIdEv(u8 *p);
s32 SaveVillagers_Count(u8 *self);
s32 func_0209ad34(s32 v);
s32 func_0207e310(u8 *p);
u8 *PlayerData_GetCurrent();
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *p);
u8 *_ZN10PlayerData13func_0209865cEv(u8 *p);
u8 *func_02099db4(u8 *p, s32 i);
void *func_0209a4f0(void *p);
u16 *func_0209a4e4(void *p, s32 i);
s32 memcmp(void *a, void *b, u32 n);
void *_ZN12Unk_020994cc13func_0209978cEv(u8 *p);
u16 *_ZN12Unk_020994cc13func_02099788Ev(u8 *p);
s32 func_02099ed4(u8 *a, u16 *b);
u8 *Villager_GetPlan(u8 *p);
void *func_0209a60c(u8 *p);
void *func_0209a940(void *p);
s32 func_020783d8(u8 *a, u32 b);
s32 SaveVillagers_FindIndex(u8 *self, VillagerId *p);
BOOL SaveVillagers_IsValidIndex(s32 i);
u32 SaveVillagers_IsOccupied(u8 *self, s32 i);
u8 *SaveVillagers_Get(u8 *self, s32 i);
s32 func_020789cc(u8 *p, s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 func_02078c6c(u8 *p, s32 a, s32 b, s32 c);
void *TownBlockMap_Get(u8 *self);
s32 func_0208104c(Unk_0207ac60_Elem *e);
void func_02081018(Unk_0207ac60_Elem *e, s32 *xy);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL _ZN20VillagerDataItemView11hasHousePosEv(u8 *p);
s32 func_0207adf0(Unk_0207ac60_Elem *arr, s32 n, u32 k);
u16 Item_MakeNeighborHouse(s32 i);
BOOL BlockMap_PutStructure(void *g, u16 *v, u32 a, u32 b);
void _ZN20VillagerDataItemView11setHousePosEPh(u8 *p, Unk_0207ac60_Elem *e);
BOOL func_02081038(Unk_0207ac60_Elem *e);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
void _ZN17Unk_0207ac60_ElemD1Ev();
void DateTime_Make(Unk_0207ae28_Buf *a, u8 *b, u32 c, u32 d, u32 e);
void Clock_GetDateTime(Unk_0207ae28_Buf *a);
s32 DateTime_Compare(Unk_0207ae28_Buf *a, u8 *b, u32 n);
s32 DateTime_DiffDays(u8 *b, Unk_0207ae28_Buf *a);
void func_0207e684(u8 *p);
void Clock_GetDate(u8 *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
void func_0207a550(u8 *self, Unk_0207ae28_Buf *b);
void func_0207afe0(u8 *self, Unk_0207ae28_Buf *b);
void func_0207b04c(u8 *self, u8 *x);
s32 SaveVillagers_GetUnk3830Index(u8 *self);
void SaveVillagers_ProcessTransfer(u8 *self, Unk_0207ae28_Buf *b);
void SaveVillagers_TryRandomMoveIn(u8 *self, Unk_0207ae28_Buf *b);
void func_0207ae28(u8 *self);
void func_0207a80c();
BOOL func_0207a834(u8 *self);
s32 func_0207aa78(u32 a);
u32 SaveVillagers_FindEnemyOf(u8 *self, u8 *p);
u32 SaveVillagers_FindFriendOf(u8 *self, u8 *p);
void func_0207ab90(u8 *self, u8 *a, u8 *b, s32 c);
s32 func_0207abd8(u8 *self, u8 *p1, u8 *p2);
void func_0207ac60(u8 *self);
void func_0207ae84(u8 *self, s32 flag);
void func_0207af34(u8 *self);
void func_0207af88(u8 *self);
void func_0207a4c4(u8 *self, s32 f);
void func_0207a104(u8 *self);
void func_02079bb4(u8 *self);
s32 func_02079a0c(u8 *self);
void func_0207c8e0(u8 *p, Unk_0207ae28_Buf *b);
void *func_0209a610(void *p);
void *_ZN12Unk_0209b3bc13func_0209b2e4Ev();
s32 _ZN12Unk_0209b3bc13func_0209b044EPv(void *p, s32 i);
void func_0207e4b4(u8 *p, s32 a, void *b);
s32 func_0207ca18(u8 *p, u8 *x);
s32 func_0207c9bc(u8 *p, u8 *x);
s32 func_0207c828(u8 *p, u8 *a, u8 *b, u8 *x);
void *func_0209ab18(void *p);
void func_0207ccd0(u8 *p, u8 *x);
BOOL func_0207cd48(u8 *p);
u32 Random_PickSetBit(u32 m, s32 c, s32 n);
s32 SaveVillagers_FindMovingOut(u8 *self);
s32 SaveVillagers_FindJustMovedIn(u8 *self);
s32 func_0207b084(u8 *self);
BOOL func_0207b0f0(u8 *self, u8 *x);
void func_0207a80c();
BOOL func_0207a834(u8 *self);
s32 func_0207a8b8(u8 *self, u8 *p, u8 *r5);
s32 func_0207a914(u8 *self, u8 *p, u8 *r4);
s32 func_0207aa78(u32 a);
u32 SaveVillagers_FindEnemyOf(u8 *self, u8 *p);
u32 SaveVillagers_FindFriendOf(u8 *self, u8 *p);
BOOL func_0207aacc(s32 a, s32 b);
BOOL func_0207aad8(s32 a, s32 b);
u32 func_0207aae4(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best);
void func_0207ab90(u8 *self, u8 *a, u8 *b, s32 c);
s32 func_0207abd8(u8 *self, u8 *p1, u8 *p2);
u32 func_0207ac2c(u8 *self, s32 a, s32 b);
void func_0207ac60(u8 *self);
s32 func_0207adf0(Unk_0207ac60_Elem *p, s32 n, u32 k);
void func_0207ae28(u8 *self);
void func_0207ae84(u8 *self, s32 flag);
void func_0207af34(u8 *self);
void func_0207af88(u8 *self);
void func_0207afe0(u8 *self, Unk_0207ae28_Buf *x);
void func_0207b04c(u8 *self, u8 *x);
s32 func_0207b084(u8 *self);
BOOL func_0207b0f0(u8 *self, u8 *x);
}
}

// ---- unk_0207b168.cpp
namespace nG {
extern "C" {

struct Unk_0207b168_Slot {
    u32 unk_00[0x700 / 4];
};
struct Unk_0207b168 {
      Unk_0207b168_Slot unk_0000[8];
      u32 unk_3800[7];
      u32 unk_381c[42];
      u32 unk_38c4[2];
      u32 unk_38cc[2];
      u32 unk_38d4[5];
      s8 unk_38e8;
      s8 unk_38e9;
      s8 unk_38ea;
      u8 unk_38eb[3];
      u8 unk_38ee[0x20];
};
extern u8 data_021e7f8c[];
extern u8 data_021d7352[];
extern u8 data_021ccb58[];
extern u8 data_021cc8d4[];
s32 Villager_IsJustMovedIn(void *);
s32 Villager_IsMovingOut(void *);
void *Villager_GetPlan();
void *func_0209a610(void *);
void *func_0209b010(void *);
s32 DateTime_Compare(void *, void *, s32);
s32 DateTime_DiffDays(void *, void *);
s32 DateTime_IsInvalid(void *);
void Clock_GetDateTime(void *);
void Clock_GetDate(void *);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, const void *, u32);
s32 memcmp(const void *, const void *, u32);
s32 func_02063b8c(s32);
void func_02063990(void *, void *);
s32 func_02063954(void *);
void _ZN12Unk_0208f23813func_0208f148Ev(void *);
void *func_020789a8();
void *_ZN12VillagerData13getVillagerIdEv(void *);
u8 VillagerId_GetSpecies(void *);
u32 VillagerId_GetPersonality(void *);
void *_ZN20VillagerDataItemView18getMovedFromTownIdEv(void *);
void _ZN20VillagerDataItemView16placeHouseMarkerEv(void *);
void _ZN20VillagerDataItemView13clearHousePosEv(void *);
void _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(void *);
s32 func_0207f3d0(void *, void *, void *);
s32 SaveVillagers_IsValidIndex(s32);
s32 SaveVillagers_Count(Unk_0207b168 *);
void SaveVillagers_Clear(void *);
void _ZN12VillagerData5clearEv(void *);
void _ZN12VillagerData8copyFromEPv(void *, void *);
void _ZN12VillagerData5setupEjjjh(void *, u32, s32, s32, s32);
s32 SaveVillagers_FindFreeSlot(Unk_0207b168 *);
void *SaveVillagers_Get(Unk_0207b168 *, s32);
s32 SaveVillagers_FindIndex(Unk_0207b168 *, VillagerId *);
void SpeciesBits_Set(void *, u8);
s32 SpeciesBits_Test(u8, void *);
void SpeciesBits_Clear(Unk_0207b168 *, void *, u32);
s32 SpeciesBits_AllEligibleSet(void *);
s32 Random_PickSetBit(u32, u32, u32);
void func_0207af88(void *);
void func_0207cc88(void *, void *);
void func_0207dfdc(void *, u8);
void Villager_PickShownFurniture(void *);
void func_0207934c(void *, s32);
void func_02078cd8(void *, s32);
void func_02079270(void *, s32);
s32 func_02079268(void *, s32);
void func_02079230(void *, void *);
s32 func_02078580(void *);
s32 func_020785ec(void *);
void func_0207857c(void *, s32);
void *func_0207e310(void *);
s32 func_02081288(u32, void *);
s32 VillagerInfo_Get(u8);
void func_02078d6c(void *, void *, s32);
s32 SaveVillagers_FindMovingOut(Unk_0207b168 *);
s32 SaveVillagers_FindMovingOutDue(Unk_0207b168 *, void *);
void SaveVillagers_MoveOut(Unk_0207b168 *, void *, void *, s32, void *);
void SaveVillagers_MoveIn(Unk_0207b168 *, void *, s32, void *, u8, void *);
void SaveVillagers_SetLastMovedIn(Unk_0207b168 *, s8);
void *SaveVillagers_FindBySpecies(Unk_0207b168 *, u32);
s32 SaveVillagers_PickMoveInSpecies(Unk_0207b168 *);
s32 SaveVillagers_CanMoveIn(Unk_0207b168 *, void *);
u32 SaveVillagers_PickRarePersonality(Unk_0207b168 *, s32);
s32 SaveVillagers_PickNewSpecies(Unk_0207b168 *, u32, s32);
void SaveVillagers_UpdateHistory(void *, Unk_0207b168 *);
s32 SaveVillagers_FindJustMovedIn(Unk_0207b168_Slot *p);
s32 SaveVillagers_FindMovingOutDue(Unk_0207b168 *self, void *name);
s32 SaveVillagers_FindMovingOut(Unk_0207b168 *self);
struct Unk_0207b238_Id {
    u16 id;
    u8 name[8];
};
void SaveVillagers_ProcessTransfer(Unk_0207b168 *self, void *arg);
void SaveVillagers_MoveOut(Unk_0207b168 *self, void *a, void *b, s32 idx, void *out);
void SaveVillagers_MoveIn(Unk_0207b168 *self, void *a, s32 idx, void *b, u8 c, void *out);
void SaveVillagers_SetLastMovedInById(Unk_0207b168 *self, VillagerId *o);
void *SaveVillagers_FindBySpecies(Unk_0207b168 *self, u32 id);
void SaveVillagers_TryRandomMoveIn(Unk_0207b168 *self, void *out);
s32 SaveVillagers_PickMoveInSpecies(Unk_0207b168 *self);
s32 SaveVillagers_CanMoveIn(Unk_0207b168 *self, void *p);
void SaveVillagers_UpdatePlans(Unk_0207b168 *self);
s32 func_0207b7d4(Unk_0207b168 *self, VillagerId *o);
void func_0207b7fc(Unk_0207b168 *self, s32 x);
void SaveVillagers_InitNewTown(Unk_0207b168 *self);
u32 SaveVillagers_PickRarePersonality(Unk_0207b168 *self, s32 mask);
s32 SaveVillagers_PickNewSpecies(Unk_0207b168 *self, u32 idx, s32 flag);
void SaveVillagers_UpdateHistory(void *bits, Unk_0207b168 *p0);
void SaveVillagers_SetLastMovedIn(Unk_0207b168 *self, s8 v);
}
}

// ---- unk_0207bab0.cpp
namespace nH {
extern "C" {

void *VillagerInfo_Get(u32);
BOOL VillagerId_IsValidSpecies(s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
BOOL _ZN10VillagerId7isValidEv(void *);
BOOL _ZN8PlayerId13func_02094218Ev(void *);
BOOL Villager_FindMemory(void *, void *);
s32 _ZN14VillagerMemory13getFriendshipEv();
s32 func_02063b8c(s32);
s32 SaveVillagers_GetUnk3830Index(void *);
BOOL func_0207e114(void *);
void *MI_CpuFill8(void *, s32, s32);
void _ZN9MsgString5clearEv(void *);
void _ZN10VillagerId7getNameEj(void *, void *);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *, void *);
void _ZN12Unk_020e1c64C1Ev(void *);
void _ZN12Unk_020e1c4cC1Ev(void *);
s32 _ZN12Unk_020e1c4c8vfunc_08Ev(void *);
void _ZN12Unk_020e1c4cD1Ev(void *);
void _ZN12Unk_020e1c64D1Ev(void *);
BOOL func_020b51b8(u32);
s32 func_020b51e8(u32);
void _ZN23VillagerDataProfileView12findFreeSlotEi(void *, s32);
void _ZN12VillagerData5clearEv(void *);
void func_02078d58(void *);
void func_020793c0(void *);
void _ZN12Unk_020994cc13func_02099790Ev(void *);
void _ZN12Unk_020994cc13func_020997fcEv(void *);
void func_020793dc(void *);
void func_02078d64(void *);
void func_02078d68(void *);
void func_020793e0(void *);
void _ZN12Unk_020994cc13func_02099828Ev(void *);
void _ZN12VillagerDataD1Ev(void *);
void _ZN12VillagerDataC1Ev(void *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(void *));
s32 memcmp(const void *, const void *, u32);
u8 *func_0207e310(void *);
s32 func_02078510(void *);
s32 func_0207856c(void *);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *);
BOOL _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
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
BOOL func_0207c318(void *);
void func_0207c190(void *, s32);
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
void *func_0207bdf4(void *self, u32 x);
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
void func_0207c190(void *self, s32 d);
void func_0207c1c8(void *self);
void func_0207c1e8(void *self);
void func_0207c20c(void *self);
BOOL func_0207c22c(void *self, void *x);
void func_0207c298(void *self, void *x);
BOOL func_0207c318(void *self);
void func_0207c354(void *self, void *x);
}
}

// ---- unk_0207c3dc.cpp
namespace nI {
extern "C" {

struct Unk_0207c67c {
    u8 pad[0x6ac];
    u16 unk_6ac[10];
    u16 pad2[(0x6ea - 0x6c0) / 2];
    u16 unk_6ea;
};
struct Unk_0207ccd0_Rec {
    u8 pad[0x21];
    u8 unk_21_0 : 1;
};
extern u8 data_021cc984[];
extern u8 data_021cc95c[];
extern u8 data_021d7352[];
extern u8 data_021dfd8c[];
s32 _ZN8PlayerId13func_02094218Ev(void *);
s32 _ZN10VillagerId7isValidEv(void *);
void _ZN6LetterC1Ev(void *);
void _ZN6LetterD1Ev(void *);
u32 VillagerId_GetPersonality(void *);
u32 func_020966b0(void);
void _ZN10VillagerId12makeFileNameEPvjj(void *, void *, s32, void *);
void func_02065920(void *, u8 *, void *, u8 *, void *, void *, s32);
void func_020658a8(void *, u8 *, u8 *, u8 *, u8 *, void *, u8 *, void *, void *, s32);
void _ZN12Unk_0206555413func_02065588Etj(void *, u32, s32);
s32 func_02096a50(void *, s32);
u32 func_02063b8c(u32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
void *PlayerData_GetCurrent(void);
void *_ZN10PlayerData11getPlayerIdEv(void *);
s32 _ZN6TownId13func_02094058Ev(void *);
void *Villager_FindMemory(void *, void *);
void *_ZN12Unk_02097ff413func_0209817cEv(void *);
void *_ZN14VillagerMemory13getFriendshipEv(void *);
s32 _ZN12Unk_02098d2013func_02098d20EPviS0_(void *, void *, void *, void *);
s32 _ZN14VillagerMemory13func_02080978Ev(void);
void Clock_GetDateTime(void *);
s32 func_02081288(u32, void *);
void _ZN14VillagerMemory13func_02080a88Ev(void *);
s32 _ZN20VillagerDataItemView21isValidFurnitureIndexEi(void *);
s32 Item_IsFurniture(void *);
s32 Random_PickSetBit(u32, s32, s32);
s32 Villager_GetResidentStatus(void *);
void *SaveVillagers_GetUnk3830(void *);
void *_ZN12Unk_020994cc13func_02099788Ev(void);
s32 memcmp(void *, void *, u32);
void *Villager_GetPlan(void *);
void *func_0209a60c(void *);
void *func_0209a940(void);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ad28Ev(void *);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
s32 func_0209ab18(void *);
void *func_0209a610(void *);
s32 _ZN12Unk_0209b3bc13func_0209b294Ev(void *);
s32 func_0207cd94(void *);
s32 _ZN12Unk_0209b3bc13func_0209b2e4Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b394Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b0c4EPS_(void *, void *);
s32 _ZN12Unk_0209b3bc13func_0209b044EPv(void *, void *);
void func_0207e4b4(void *, s32, s32);
void MI_CpuCopy8(void *, void *, u32);
s32 func_0207cbe8(void *, void *);
s32 _ZN12Unk_0209b3bc13func_0209b12cEv(void *);
void func_0207ca74(void *, void *);
s32 _ZN12Unk_0209b3bc13func_0209b18cEv(void *);
s32 func_0209b3b0(s32);
void *func_0207e310(void *);
void *func_02078578(void *);
s32 _ZN12Unk_0209ada413func_0209ad80Ev(void *);
s32 func_0209b334(s32);
void _ZN12Unk_0209ada413func_0209ad54EhPth(void *, s32, void *, s32);
void *func_0209b00c(void *);
void *func_0209b010(void *);
s32 DateTime_IsInvalid(void *);
s32 DateTime_Compare(void *, void *, s32);
void *Villager_GetInfo3a(void *);
s32 DateTime_DiffMinutes(void *, void *);
void DateTime_AddDays(void *, s32);
s32 _ZN12Unk_0209b3bc13func_0209b3a4Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b1e4EPv(void *, s32);
s32 _ZN12Unk_0209b3bc13func_0209af4cEPs(void *, void *);
void _ZN12Unk_0209b3bc13func_0209afa4EPs(void *, void *);
void _ZN12Unk_0209b3bc13func_0209af0cEhi(void *, s32, s32);
void _ZN12Unk_0209b3bc13func_0209aed4EPS_Ps(void *, void *, void *);
void *func_020812e0(u32);
s32 func_0207c8e0(void *, void *);
void _ZN12Unk_0209b3bc13func_0209b350Ej(void *, s32);
s32 Villager_SendLetter(void *a, u32 b, void *c, void *d, u16 *e);
s32 Villager_SendLetter4(void *a, u32 b, void *c, void *d, void *e, u16 *f);
s32 func_0207c55c(void *a, void *b);
void func_0207c5e0(void *a, void *b);
s32 func_0207c618(void *a, void *b);
void func_0207c65c(u8 *p);
void Villager_HideFurniture(Unk_0207c67c *p, s32 n);
s32 Villager_IsFurnitureShown(Unk_0207c67c *p, s32 n);
void Villager_PickShownFurniture(Unk_0207c67c *p);
s32 func_0207c764(void *a);
void func_0207c7bc(void *a);
s32 func_0207c828(void *a, void *b, void *c, void *d);
s32 func_0207c8e0(void *a, void *b);
void func_0207c9bc(void *a, void *b);
void func_0207ca18(void *a, void *b);
void func_0207ca74(void *a, void *b);
void func_0207cb68(void *a, void *b, void *c);
void func_0207cb94(void *a, void *b);
s32 func_0207cbe8(void *a, void *b);
void func_0207cc88(void *a, void *b);
void func_0207ccd0(void *a, void *b);
}
}

// ---- unk_0207cd48.cpp
namespace nJ {
extern "C" {

struct Unk_0207cd94 {
    u8 pad_000[0x6cc];
    u16 unk_6cc[4];
    u8 pad_6d4[0x1d];
    u8 unk_6f1;
};
struct Unk_0207d1bc_Data {
    u32 a;
    u32 b;
    u32 c;
};
struct Unk_0207d164_Entry {
    s8 unk_0;
    u8 pad_1[3];
    BOOL (*unk_4)(u32, u32, u32);
};
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern Unk_0207d164_Entry data_020cc148[];
s32 PlayerData_GetResident(void *, s32);
s32 _ZN10PlayerData11getPlayerIdEv(...);
s32 _ZN8PlayerId13func_02094218Ev(s32);
s32 _ZN10PlayerData13func_0209865cEv(s32);
s32 func_0207dff4(u32, s32);
u8 *func_020783f8();
s32 _ZN12VillagerData13getVillagerIdEv(void *);
s32 SaveVillagers_FindIndex(void *, s32);
s32 _ZN10VillagerId7isValidEv(s32);
s32 Item_GetPrice(u16 *);
s32 func_02063b8c(s32);
s32 Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 func_02077380(void *, u16 *);
s32 PlayerData_GetCurrent();
s32 Villager_FindMemory(void *, s32);
u32 _ZN14VillagerMemory13getImpressionEv(s32);
s32 String_Load(void *, void *, void *);
s32 _ZN14VillagerMemory13getFriendshipEv(s32);
s32 func_0207e310(void *);
s32 func_0207856c(s32);
s32 _ZN14VillagerMemory13setImpressionEi(s32, s32);
s32 _ZN8PlayerId9getGenderEv(s32);
void Clock_GetDateTime(void *);
s32 _ZN6TownId13func_02094058Ev(s32);
s32 func_020978a4(void *);
s32 _ZN10PlayerData12getHairStyleEv(u32);
u16 *_ZN10PlayerData11getFaceItemEv();
s32 _ZN10PlayerData13func_02098750Ev();
s32 _ZN15PlayerInventory13getTotalBellsEi(s32, s32);
static inline BOOL Unk_0207d3b0_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
BOOL func_0207cd48(u32 a);
void func_0207cd94(Unk_0207cd94 *self);
u32 func_0207cdb0(Unk_0207cd94 *self);
BOOL func_0207cdbc(void *self);
void func_0207ce00(void *self);
BOOL func_0207ce24(void *self);
void func_0207ce70(u16 *out, Unk_0207cd94 *self);
void func_0207ceb4(u16 *out, Unk_0207cd94 *self);
BOOL func_0207cf10(Unk_0207cd94 *self, u16 *key);
s32 func_0207cf54(Unk_0207cd94 *self, u16 *key);
void func_0207cfb8(Unk_0207cd94 *self, u16 *val);
void func_0207d028(Unk_0207cd94 *self);
u16 *func_0207d074(Unk_0207cd94 *self, u32 idx);
void func_0207d08c(Unk_0207cd94 *self);
void Villager_GetImpressionText(void *self, void *out, s32 p);
u32 func_0207d0f4(void *self, s32 r, s32 p);
u32 func_0207d164(u32 a, u32 b, u32 c);
BOOL func_0207cd48(u32 a);
void func_0207cd94(Unk_0207cd94 *self);
u32 func_0207cdb0(Unk_0207cd94 *self);
BOOL func_0207cdbc(void *self);
void func_0207ce00(void *self);
BOOL func_0207ce24(void *self);
void func_0207ce70(u16 *out, Unk_0207cd94 *self);
void func_0207ceb4(u16 *out, Unk_0207cd94 *self);
BOOL func_0207cf10(Unk_0207cd94 *self, u16 *key);
s32 func_0207cf54(Unk_0207cd94 *self, u16 *key);
void func_0207cfb8(Unk_0207cd94 *self, u16 *val);
void func_0207d028(Unk_0207cd94 *self);
u16 *func_0207d074(Unk_0207cd94 *self, u32 idx);
void func_0207d08c(Unk_0207cd94 *self);
void Villager_GetImpressionText(void *self, void *out, s32 p);
u32 func_0207d0f4(void *self, s32 r, s32 p);
u32 func_0207d164(u32 a, u32 b, u32 c);
BOOL func_0207d1b8();
BOOL func_0207d1bc();
BOOL func_0207d1e4();
BOOL func_0207d20c();
BOOL func_0207d238();
BOOL func_0207d264();
BOOL func_0207d290(u32 a, u32 b, u32 c);
BOOL func_0207d2b4(u32 a, u32 b, u32 c);
BOOL func_0207d2d8(u32 a, u32 b, u32 c);
BOOL func_0207d2fc(u32 a, u32 b, u32 c);
BOOL func_0207d320(u32 a, u32 b, u32 c);
BOOL func_0207d344(u32 a, u32 b, u32 c);
BOOL func_0207d368(u32 a, u32 b, u32 c);
BOOL func_0207d38c(u32 a, u32 b, u32 c);
BOOL func_0207d3b0(u32 a, u32 b, u32 c);
BOOL func_0207d430(u32 a, u32 b, u32 c);
BOOL func_0207d494(u32 a, u32 b, u32 c);
BOOL func_0207d4f8(u32 a, u32 b, u32 c);
BOOL func_0207d578();
BOOL func_0207d59c();
BOOL func_0207d5cc();
BOOL func_0207d5fc();
BOOL func_0207d62c();
BOOL func_0207d650();
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
extern "C" s32 func_0207d674(void);
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
s32 func_0207d674(s32 a, s32 b, s32 c);
s32 func_0203c338(s32 a, s32 b, s32 c);
s32 func_0203c318(void);
s32 func_0203c304(void);
s32 func_0203c31c(void);
s32 func_0203c314(void);
s32 func_0203c2f4(void);
s32 _ZN10PlayerData13func_02098750Ev(void);
s32 _ZN15PlayerInventory15findEmptyPocketEv(s32 a);
s32 Clock_GetTimeOfDay(void);
u16 *_ZN10PlayerData8getShirtEv(u32 a);
s32 func_020b8fe8(void);
u16 *_ZN10PlayerData11getHeldItemEv(u32 a);
u16 *_ZN10PlayerData6getHatEv(u32 a);
u16 *_ZN10PlayerData11getFaceItemEv(u32 a);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 func_02079fd8(u32 a);
s32 SaveVillagers_Count(void *p);
void *SaveVillagers_PickRandomExcept(void *p, void *q, u32 n);
void *SaveVillagers_FindEnemyOf(void *p, u32 n);
void func_02133ef8(void *p, u32 n);
void *_ZN12VillagerData13getVillagerIdEv(void *a);
s32 _ZN10VillagerId7isValidEv(void *a);
s32 _ZN10VillagerId7getNameEj(void *a, u32 b);
s32 func_02098778(u32 a, u32 b, u32 c);
void *func_020947f0(u32 n);
void FieldPos_ToUnit(s32 *x, s32 *y, void *pos);
void *BlockMap_GetItemPtr(void *m, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
extern u8 data_021dfd8c[];
extern u8 data_020e416c[];
extern void *gSceneBlockMap;
BOOL func_0207d67c(void);
s32 func_0207d6a4(void);
BOOL func_0207d6ac(s32 a, s32 b, s32 c);
BOOL func_0207d6e8(s32 a, s32 b);
BOOL func_0207d6f4(s32 a, s32 b);
BOOL func_0207d704(s32 a, s32 b);
BOOL func_0207d714(s32 a, s32 b);
BOOL func_0207d724(void);
BOOL func_0207d744(void);
BOOL func_0207d75c(void);
BOOL func_0207d774(u32 a);
BOOL func_0207d7a8(void);
BOOL func_0207d7c0(void);
BOOL func_0207d7d8(u32 a);
s32 func_0207d674(s32 a, s32 b, s32 c);
BOOL func_0207d820(u32 a);
BOOL func_0207d89c(u32 a);
BOOL func_0207d8e8(u32 a);
BOOL func_0207d934(u32 a);
BOOL func_0207d980(u32 a);
BOOL func_0207d9cc(u32 a);
BOOL func_0207da18(u32 a);
BOOL func_0207da64(u32 a);
BOOL func_0207dab0(u32 a);
BOOL func_0207dafc(u32 a);
BOOL func_0207db48(u32 a);
BOOL func_0207db94(u32 a);
BOOL func_0207dbe0(u32 a);
BOOL func_0207dc1c(u32 a);
BOOL func_0207dc58(u32 a);
BOOL func_0207dc98(u32 a);
BOOL func_0207dcd4(s32 a, s32 b, s32 c);
BOOL func_0207dce4(s32 a, s32 b, s32 c);
BOOL func_0207dcf0(u32 a);
BOOL func_0207dd08(void);
s32 func_0207df10(u32 a, u32 b, u32 c);
s32 func_0207dd24(void);
s32 func_0207de6c(void);
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
    u8 unk_65c[0x50];
    u16 unk_6ac[10];
    u8 pad_6c0[0x2e];
    u8 unk_6ee;
    u8 unk_6ef;
    u8 unk_6f0;
    u8 pad_6f1;
    u8 unk_6f2;
};
extern u8 data_021dfd8c[];
extern u8 data_020e05ac[];
extern u16 data_020cbfb0[];
void *SaveVillagers_FindFriendOf(void *, void *);
VillagerId *_ZN12VillagerData13getVillagerIdEv(void *);
void *func_02099db4(void *, s32);
void *func_0209a4f0(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
void *func_0209a4e4(void *, s32);
s32 memcmp(void *, void *, s32);
s32 func_02099868(void *, void *);
s32 func_02099ed4(void *, void *);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *);
void *func_0209a610(void *);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b2e4Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b328Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b014Ei(s32, s32);
s32 func_020785ec(s32);
s32 func_02078580(s32);
s32 func_020783f8();
s32 func_020783d8(s32, s32);
s32 SaveVillagers_FindIndex(void *, void *);
s32 VillagerId_GetSpecies(VillagerId *);
u8 *VillagerInfo_Get(s32);
s32 _ZN20VillagerDataItemView21isValidFurnitureIndexEi(void *, s32);
s32 Villager_IsFurnitureShown(void *, s32);
s32 Villager_HideFurniture(void *, s32);
s32 _ZN20VillagerDataItemView13func_0207eff8EPt(void *, void *);
s32 _ZN20VillagerDataItemView14getFurnitureAtEi(void *, void *, s32);
s32 _ZN20VillagerDataItemView13func_0207ec54Eiii(void *, s32, s32, s32);
s32 _ZN20VillagerDataItemView13func_0207ef34EPiS0_iih(void *, s32 *, s32 *, s32, s32, s32);
s32 _ZN20VillagerDataItemView13func_0207ecd4EPti(void *, void *, s32);
s32 _ZN20VillagerDataItemView13func_0207eb70Eiihh(void *, s32, s32, s32, s32);
s32 _ZN20VillagerDataItemView13func_0207e940EPtiihh(void *, void *, s32, s32, s32, s32);
s32 func_0207ec10(void *);
s32 func_0207ec38(void *);
u16 *func_0207d074(void *, s32);
s32 func_0207d08c(void *);
s32 Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 Item_SetFurnitureDirection(u16 *, s32);
s32 Ftr_GetUnk05(u16 *);
s32 func_02052648(s32);
s32 func_0209a60c(void *);
s32 func_0209a9bc(s32);
void Item_ToPlacedForm(u16 *, u16 *, s32);
s32 func_02063b8c(s32);
void Villager_GetFriendName(void *a, u32 b);
void func_0207dfdc(Unk_0207e268 *a, u32 b);
u32 func_0207dfe8(Unk_0207e268 *a);
BOOL func_0207dff4(Unk_0207e268 *a, void *b);
BOOL func_0207e114(Unk_0207e268 *a);
BOOL Villager_IsJustMovedIn(Unk_0207e268 *a);
BOOL func_0207e190(Unk_0207e268 *a);
BOOL Villager_IsMovingOut(Unk_0207e268 *a);
s32 Villager_GetResidentStatus(Unk_0207e268 *a);
s32 Villager_GetTrend(Unk_0207e268 *a, s32 b);
void *Villager_GetPlan(Unk_0207e268 *a);
BOOL func_0207e274();
s32 func_0207e278(Unk_0207e268 *a);
s32 func_0207e310(Unk_0207e268 *a);
s32 func_0207e334(Unk_0207e268 *a);
s32 func_0207e33c(Unk_0207e268 *a);
u32 func_0207e364();
void func_0207e388(Unk_0207e268 *a, u8 b);
void func_0207e394(Unk_0207e268 *a, u8 b);
u32 func_0207e3a0(Unk_0207e268 *a);
u32 func_0207e3ac(Unk_0207e268 *a);
BOOL func_0207e3b8(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
BOOL func_0207e400(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
s32 func_0207e440(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
void func_0207e4b4(Unk_0207e268 *a, s32 b, s32 c);
void func_0207e4f4(Unk_0207e268 *a);
void func_0207e568(Unk_0207e268 *a, u16 *b);
void func_0207e630(u16 *out, void *a, u16 *in);
void func_0207e668(Unk_0207e268 *a);
void func_0207e684(Unk_0207e268 *a);
s32 func_0207e77c(Unk_0207e268 *a);
s32 func_0207e7a8(Unk_0207e268 *a, u16 *b);
BOOL func_0207e80c(Unk_0207e268 *a, u16 *b);
static inline BOOL Unk_0207e440_InRange(volatile u16 *p) {
    BOOL r = FALSE;
    u32 v1 = *p;
    u32 v2 = *p;
    if (v2 >= 0xf000 && v1 <= 0xf02f) r = TRUE;
    return r;
}
void Villager_GetFriendName(void *a, u32 b);
void func_0207dfdc(Unk_0207e268 *a, u32 b);
u32 func_0207dfe8(Unk_0207e268 *a);
BOOL func_0207dff4(Unk_0207e268 *a, void *b);
BOOL func_0207e114(Unk_0207e268 *a);
BOOL Villager_IsJustMovedIn(Unk_0207e268 *a);
BOOL func_0207e190(Unk_0207e268 *a);
BOOL Villager_IsMovingOut(Unk_0207e268 *a);
s32 Villager_GetResidentStatus(Unk_0207e268 *a);
s32 Villager_GetTrend(Unk_0207e268 *a, s32 b);
void *Villager_GetPlan(Unk_0207e268 *a);
BOOL func_0207e274();
s32 func_0207e278(Unk_0207e268 *a);
s32 func_0207e310(Unk_0207e268 *a);
s32 func_0207e334(Unk_0207e268 *a);
s32 func_0207e33c(Unk_0207e268 *a);
u32 func_0207e364();
u32 func_0207e3a0(Unk_0207e268 *a);
u32 func_0207e3ac(Unk_0207e268 *a);
BOOL func_0207e3b8(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
BOOL func_0207e400(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
s32 func_0207e440(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
void func_0207e4b4(Unk_0207e268 *a, s32 b, s32 c);
void func_0207e4f4(Unk_0207e268 *a);
void func_0207e568(Unk_0207e268 *a, u16 *b);
void func_0207e630(u16 *out, void *a, u16 *in);
void func_0207e668(Unk_0207e268 *a);
struct Unk_0207e684_Tbl {
    s32 v[3];
};
void func_0207e684(Unk_0207e268 *a);
s32 func_0207e77c(Unk_0207e268 *a);
s32 func_0207e7a8(Unk_0207e268 *a, u16 *b);
BOOL func_0207e80c(Unk_0207e268 *a, u16 *b);
void func_0207e388(Unk_0207e268 *a, u8 b);
void func_0207e394(Unk_0207e268 *a, u8 b);
}
}

// ---- unk_0207e940.cpp
namespace nM {
extern "C" {

void *Villager_GetPlan(void *);
void *func_0209a60c(void);
void *func_0209a610(void *);
void *func_0209a940(void);
s32 Item_GetPrice(u16 *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
u32 func_0209a938(void *);
u32 func_0209a8e0(void *);
s32 Item_GetFossilGroup(u16 *);
s32 Random_PickSetBit(u32 mask, s32 n, s32 max);
s32 func_02063b8c(s32);
s32 func_02039dec(u16);
s32 func_0209b2f8(u8 *, s32);
s32 Item_IsFurniture(u16 *);
s32 func_0207f8ec(void *, u16 *);
void Item_ToPlacedForm(u16 *, u16 *, s32);
void *_ZN23VillagerDataProfileView9getInfo28Ev(void *);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
void *VillagerId_GetSpecies(void *);
s32 VillagerInfo_Get(void *);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *);
s32 _ZN12Unk_0209b3bc13func_0209b2e4Ev(void *);
void *TownBlockMap_Get(void);
void BlockMap_RemoveStructure(void *, u32, u32, u16 *);
s32 func_02081038(u8 *);
s32 func_0208104c(u8 *);
void *Villager_FindMemory(void *, void *);
void _ZN14VillagerMemory11setGreetingEPvi(void *, void *, s32);
s32 _ZN8PlayerId13func_02094218Ev(void *);
s32 _ZN14VillagerMemory11hasGreetingEv(void *);
void _ZN14VillagerMemory11getGreetingEPv(void *, void *);
void _ZN14VillagerMemory13setComplimentEPvi(void *, void *, s32);
s32 _ZN14VillagerMemory13hasComplimentEv(void *);
void _ZN14VillagerMemory13getComplimentEPv(void *, void *);
extern Unk_0207ed1c_Fn data_021cc934[5];
extern u8 __ptmf_null[];
static inline BOOL Unk_0207e940_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
BOOL func_0207ec10(u16 *p);
BOOL func_0207ec38(u16 *p);
BOOL func_0207ec10(u16 *p);
BOOL func_0207ec38(u16 *p);
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
s32 _ZN8PlayerId13func_02094218Ev(void *);
u32 _ZN12VillagerData13getVillagerIdEv(u32);
s32 _ZN10VillagerId7isValidEv(u32);
s32 VillagerId_GetSpecies(u32);
u8 *VillagerInfo_Get(u32);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *, void *);
void _ZN14VillagerMemory11getNicknameEPv(void *, void *);
s32 _ZN9MsgString6equalsEPS_(void *, void *);
void _ZN9MsgString5clearEv(void *);
void _ZN14VillagerMemory18setNicknameFromMsgEPv(void *, void *);
void _ZN14VillagerMemory11setNicknameEPvi(void *, u32, u32);
s32 _ZN14VillagerMemory13getFriendshipEv(void *);
s32 func_02080f94(void *);
s32 VillagerMemory_MatchesPlayer(void *, void *);
u16 *func_02080e1c(void *);
u32 func_02080e18(void *);
s32 memcmp(void *, void *, u32);
void VillagerMemory_InitForPlayer(void *, void *, u32, u32);
u16 *func_0209409c();
s32 func_02097740(u32, u32);
s32 func_02063954(void *);
s32 _ZN14VillagerMemory16isLetterReceivedEv(void *);
void *func_02080ec8(void *);
s32 DateTime_Compare(void *, void *, u32);
s32 DateTime_DiffMinutes(void *, void *);
s32 _ZN8PlayerId13func_020941e8EPS_(u32, void *);
void __register_global_object(void *, void *, void *);
void _ZN8PlayerIdC1Ev();
u32 func_0207cdb0();
u8 func_0209a6e4(u32, u32, u32);
u32 func_02081318(u8 *);
u32 SaveVillagers_GetUnk3830Index(u32);
u32 func_0204bdb8();
u32 func_0207e334(u32);
s32 Villager_GetResidentStatus(u32);
u32 _ZN10PlayerData13func_0209865cEv(void *);
s32 func_02099ed4(void *, u32);
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
extern u16 data_021d7352[];
extern u8 data_021d735c[];
extern u32 data_021cc850;
extern u8 data_021cc8fc[];
extern u8 data_021cc868[];
extern u8 data_020cc060[];
Unk_0207f264_Entry *Villager_FindMemory(u32 a, void *b);
s32 Villager_FindMemoryIndex(Unk_0207f264_Entry *t, void *id);
s32 func_0207f804(Unk_0207f264_Entry *t);
s32 func_0207f480(Unk_0207f264_Entry *t);
s32 _ZN23VillagerDataProfileView21hasLetterSenderMemoryEv(Unk_0207f264_Entry *t);
s32 func_0207f79c(Unk_0207f264_Entry *t);
s32 func_0207f728(Unk_0207f264_Entry *t, void *o);
s32 func_0207f660(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *));
s32 func_0207f5e0(void *a, u16 *p, void *c);
s32 func_0207f61c(u32 a, u16 *p, u32 c);
s32 func_0207f5d0(Unk_0207f264_Entry *t);
s32 func_0207f60c(Unk_0207f264_Entry *t);
s32 func_0207f5a4(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *func_0207f58c(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *Villager_GetMemory(Unk_0207f264_Entry *t, u32 i);
BOOL func_0207f8c0(Unk_0207f264_Entry *t, u32 i);
u8 *func_0207f91c(Unk_0207f264_Entry *t, u32 i);
u32 Villager_GetAnimalKind(u32 a);
u8 *func_0207fae4(u32 a);
void func_0207fb34(u32 a, void *b);
void func_0207f264(u32 a, u32 b, void *c);
Unk_0207f264_Entry *func_0207f344(u32 a, u32 b, u32 c, void *d);
Unk_0207f264_Entry *func_0207f368(u32 a, void *b, void *c);
void Villager_GetNicknameFor(u32 a, void *b, void *c);
BOOL func_0207f3d0(u32 a, u32 b, void *c);
s32 func_0207f480(Unk_0207f264_Entry *t);
s32 func_0207f4a4(Unk_0207f264_Entry *t, Unk_0207f264_Entry **out, void *id, s32 mode);
Unk_0207f264_Entry *func_0207f55c(Unk_0207f264_Entry *t, void *b);
Unk_0207f264_Entry *func_0207f58c(Unk_0207f264_Entry *t);
s32 func_0207f5a4(Unk_0207f264_Entry *t);
s32 func_0207f5d0(Unk_0207f264_Entry *t);
s32 func_0207f5e0(void *a, u16 *p, void *c);
s32 func_0207f60c(Unk_0207f264_Entry *t);
s32 func_0207f61c(u32 a, u16 *p, u32 c);
s32 func_0207f660(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *));
s32 func_0207f728(Unk_0207f264_Entry *t, void *o);
s32 func_0207f79c(Unk_0207f264_Entry *t);
s32 func_0207f7cc(Unk_0207f264_Entry *t, void *id);
s32 func_0207f804(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *Villager_FindMemory(u32 a, void *b);
Unk_0207f264_Entry *Villager_GetMemory(Unk_0207f264_Entry *t, u32 i);
s32 Villager_FindMemoryIndex(Unk_0207f264_Entry *t, void *id);
BOOL func_0207f8c0(Unk_0207f264_Entry *t, u32 i);
u8 *Villager_GetInfo3a(u32 a);
u8 func_0207f8ec(u32 a, u32 b);
u8 *func_0207f91c(Unk_0207f264_Entry *t, u32 i);
u8 *func_0207f948(u32 a);
u8 *func_0207f968(u32 a);
u32 func_0207f988(u32 a);
u32 Villager_GetAnimalKind(u32 a);
u32 func_0207f9c4(u32 a);
BOOL func_0207f9e0(u32 a);
struct Unk_0207fa50_Rec {
    u16 id;
    u8 pad[10];
};
s32 func_0207fa50(u32 a, s32 b, u8 *c);
u8 *func_0207fae4(u32 a);
void func_0207fb04(u32 a, void *b, s32 c);
void func_0207fb4c(u32 a, u32 b);
void func_0207fb34(u32 a, void *b);
}
}

// ---- unk_0207fb80.cpp
namespace nO {
extern "C" {

s32 StrBuf_ClearAlt(void *p);
s32 func_020a78a4(void *dst, void *src, s32 n);
void _ZN15EncodedString10C1Ev(void *p);
void _ZN15EncodedString10D1Ev(void *p);
void _ZN9MsgString5clearEv(void *p);
s32 func_0207ce24(void *p);
s32 func_02063b8c(s32 a);
s32 String_Load(void *a, void *b, void *c);
s32 _ZN9MsgString11fromEncodedEP13EncodedStringii(void *a, void *b, s32 c, s32 d);
s32 MI_CpuFill8(void *p, s32 v, s32 n);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
s32 _ZN10VillagerId7isValidEv(void *p);
void *VillagerId_GetSpecies(void *p);
u8 *VillagerInfo_Get(void *p);
void *func_02065634(void *p);
void _ZN8PlayerIdC1ERKS_(void *a, void *b);
s32 _ZN8PlayerId13func_02094218Ev(void *p);
s32 Villager_FindMemoryIndex(void *t, void *p);
s32 Villager_GetMemory(void *t, s32 p);
s32 _ZN14VillagerMemory16isLetterReceivedEv();
s32 _ZN8PlayerIdC1Ev(void *p);
void *PlayerData_GetResident(void *a, s32 i);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN6TownId13func_02094058Ev(void *p);
void *Villager_FindMemory(void *t, void *p);
void _ZN12Unk_020dd38cC2Ev(void *p);
void _ZN12Unk_020dd38cD1Ev(void *p);
s32 func_02063954(void *p);
s32 func_020638d0(void *a, void *b);
s32 MailText_SetSlot(s32 a, void *b);
s32 func_02059900(void *a, u32 b, void *c, void *d, void *e, s32 f);
void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *p, s32 a);
s32 Clock_GetDateTime(void *p);
s32 MI_CpuCopy8(void *a, void *b, s32 n);
s32 Event_GetState(s32 a, void *b, s32 c);
s32 _ZN14VillagerMemory13getFriendshipEv();
s32 _ZN14VillagerMemory13func_0208098cEv(void *p);
s32 _ZN14VillagerMemory13func_020809b4Ev(void *p);
s32 _ZN14VillagerMemory13func_020809c8Ev(void *p);
s32 _ZN14VillagerMemory13func_020809f0Ev(void *p);
void _ZN11MsgString25C1Ev(void *p);
void _ZN11MsgString25D1Ev(void *p);
s32 String_FormatNumber(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *_ZN12Unk_02097ff413func_02098308Ev(void *p);
void _ZN12ItemPickSpec3setEii(void *p, void *a, void *b);
void func_02063388(void *p);
s32 ItemPick_One(void *a, void *b, void *c, void *d, s32 e, s32 f, void *g);
s32 func_0206c884(void *p);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
s32 _ZN12Unk_0206555413func_020655d0Ev(void *p);
s32 func_0206c878(void *p);
void _ZN11MsgString33C1Ev(void *p);
void _ZN11MsgString33D1Ev(void *p);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *a, void *b);
s32 func_0209b570(void *a, s32 i);
s32 String_LoadResolveAltText(void *a, void *b, s32 c);
s32 ItemPick_FromRange(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 Villager_SendLetter(void *a, s32 b, void *c, void *d, s32 e);
s32 Villager_SendLetter4(void *a, s32 b, s32 c, void *d, void *e, u16 *f);
s32 _ZN14VillagerMemory13addFriendshipEi(void *a, s32 b);
s32 _ZN8PlayerId13func_020941e8EPS_(void *a, void *b);
s32 memcmp(void *a, void *b, s32 n);
extern u8 data_021d735c[];
extern u8 data_021d7352[];
extern void *data_020cbfc0[];
extern void *data_020cbfcc[];
void func_0207fe78(void *t, void *p);
void func_0207ff5c(void *t, void *p, void *q);
void func_020800b0(void *t, void *p, void *q);
void Villager_GetDefaultUmbrella(u16 *out, void *idx);
void func_0207fd3c(u16 *out, void *idx);
void Villager_GetUmbrella(u16 *out, VillagerDataProfileView *o);
void Villager_GetDefaultUmbrella(u16 *out, void *idx);
void Villager_GetUmbrella(u16 *out, VillagerDataProfileView *o);
void func_0207fd3c(u16 *out, void *idx);
void func_0207fe78(void *t, void *p);
static inline BOOL Unk_0207ff5c_B(s32 v) {
    if (v) {
        return TRUE;
    }
    return FALSE;
}
void func_0207ff5c(void *t, void *p, void *q);
void func_020800b0(void *t, void *p, void *q);
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
u32 func_02063b8c(u32 n);
void _ZN6ItemIdD1Ev();
void _ZN6ItemIdC1Ev();
void VillagerMemory_Destruct();
void VillagerMemory_Construct();
void VillagerMemory_Clear(void *);
void *func_02065634(u32);
void _ZN8PlayerIdC1ERKS_(void *, void *);
s32 _ZN8PlayerId13func_02094218Ev(void *);
void _ZN8PlayerIdC1Ev(void *);
void *Villager_FindMemory(void *, void *);
void func_02065e70(void *, u32);
void func_02063990(void *, const void *);
u32 _ZN12Unk_0206555413func_020655d0Ev(u32);
void Item_ToPlacedForm(u16 *, u16 *, s32);
s32 Item_IsFurniture(u16 *);
void func_0207cfb8(void *, u16 *);
void _ZN10VillagerId3setEjjPv(void *, u32, u32, u32);
void StrBuf_ClearAlt(void *);
void _ZN15EncodedString10C1Ev(void *);
void _ZN15EncodedString10D1Ev(void *);
s32 Villager_GetDefaultCatchphraseEncoded(void *, u32);
void _ZN15EncodedString106copyToEPvi(void *, void *, s32);
void *VillagerInfo_Get(u32);
void func_0207e394(void *, u32);
void func_0207e388(void *, u32);
void *Villager_GetPlan(void *);
void func_0209a614(void *, void *, u32);
u32 func_0209a610(void *);
u32 _ZN12Unk_0209b3bc13func_0209b354Ev(u32);
void func_0207e4b4(void *, u32, u32);
void Villager_PickShownFurniture(void *);
void func_0207dfdc(void *, u32);
void func_020030e8(void *);
void _ZN23VillagerDataProfileView16clearCatchphraseEv(void *);
void func_020639a0(void *);
void func_0208104c(void *);
void func_0209a628(void *);
void func_02065c94(void *);
void func_0207d08c(void *);
void func_020639b8(void *);
void _ZN17Unk_0207ac60_ElemD1Ev(void *);
void func_02003100(void *);
void func_0209a640(void *);
void _ZN6LetterD1Ev(void *);
void _ZN7PatternD1Ev(void *);
void _ZN7PatternC1Ev(void *);
void _ZN6LetterC1Ev(void *);
void func_0209a658(void *);
void func_02003130(void *);
void func_020639bc(void *);
void _ZN17Unk_0207ac60_ElemC1Ev(void *);
void _ZN16EncodedString16BC1Ev(void *);
void _ZN16EncodedString16BD1Ev(void *);
void _ZN15EncodedString16C1Ev(void *);
void _ZN15EncodedString16D1Ev(void *);
void func_020a78a4(void *, void *, s32);
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *, void *, s32, s32);
void _ZN12Unk_020e1c4cC1Ev(void *);
void _ZN12Unk_020e1c4cD1Ev(void *);
void _ZN12Unk_020e1c4c13func_02093f90EPvj(void *, void *, s32);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *, void *);
s32 memcmp(void *, void *, u32);
s32 _ZN8PlayerId13func_020941e8EPS_(void *, void *);
extern u8 data_021d7352[];
struct Unk_020805d0_Rec {
    u8 pad_00[6];
    u16 unk_06[10];
    u8 pad_1a[0x12];
    u16 unk_2c;
    u8 unk_2e;
    u8 unk_2f;
    u8 unk_30;
    u8 unk_31;
    u8 unk_32[0x18];
    u8 unk_4a;
};
struct Unk_02080de0 {
    u16 unk_00;
    u8 unk_02[8];
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
extern u8 data_021d7352[];
extern u8 data_021ed2f8[];
extern u8 data_020cc030[][4];
extern u8 data_020cc018[];
extern u8 data_020cbfa8[];
extern u8 data_021dfd8c[];
extern u8 sSpNpcInfoTable[];
extern u8 sVillagerInfoTable[];
extern u8 gNpcActorRegistry[];
extern CommManager *gCommManager;
void _ZN14VillagerMemory13addFriendshipEi(void *p, s32 v);
void _ZN14VillagerMemory7setTimeEPx(void *p, void *q);
s32 DateTime_IsInvalid();
s32 DateTime_Compare(void *a, void *b, s32 c);
s32 DateTime_DiffDays(void *a, void *b);
void Clock_GetDateTime(void *p);
s32 _ZN8PlayerId13func_02094218Ev(void *p);
void _ZN8PlayerId13func_020942b8EPv(void *self, void *p);
void func_02063990(void *src, void *dst);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
void MI_CpuFill8(void *p, u32 v, u32 n);
void *_ZN8PlayerId13func_02094104Ev(void *p);
void _ZN8PlayerId13func_02094294Ev(void *p);
void func_020639b8(void *p);
void func_020639bc(void *p);
void _ZN8PlayerIdC1Ev(void *p);
void _ZN8PlayerIdC1EPv(void *p);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);
void _ZN17Unk_021cc9e8_ElemD1Ev(void *p);
s32 VillagerId_IsValidSpecies(u32 x);
BOOL String_Load(MsgString *buf, u8 *key, const char *name);
u8 *SaveVillagers_Get(void *tbl, u32 idx);
s32 func_0207f988(u8 *p);
u8 *_ZN12VillagerData13getVillagerIdEv(u8 *p);
s32 VillagerId_GetVoiceType(u8 *p);
s32 _ZN10VillagerId7getNameEj(u8 *p, void *q);
s32 SaveVillagers_IsValidIndex(s32 i);
s32 NpcRegistry_GetSlotCount();
s32 _ZN16NpcActorRegistry8getSpNpcEi(void *tbl, s32 i);
s32 _ZN16NpcActorRegistry11getVillagerEi(void *tbl, s32 i);
s32 _ZN16NpcActorRegistry11removeSpNpcEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry8addSpNpcEP16Unk_02081974_ObjPt(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry14removeVillagerEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry11addVillagerEP16Unk_02081974_ObjPt(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry18pickRandomVillagerEPi(void *tbl, void *p);
s32 _ZN16NpcActorRegistry14findVillagerAtEii(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry11findSpNpcAtEii(void *tbl, void *p, void *q);
s32 _ZN16NpcActorRegistry17findSpNpcByHandleEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry20findVillagerByHandleEPt(void *tbl, void *p);
s32 _ZN16NpcActorRegistry16findSpNpcByIndexEj(void *tbl, void *p);
s32 _ZN16NpcActorRegistry19findVillagerByIndexEj(void *tbl, void *p);
void *func_02080e18(void *p);
u8 *func_02080e1c(u8 *p);
u8 *func_02080ec8(u8 *p);
void func_02080e20(Unk_02080e20_Obj *p);
BOOL func_02080e40(Unk_02080e20_Obj *self, u8 *p);
void func_02080ecc(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c);
void VillagerMemory_Clear(u8 *self);
void func_02081030(u8 *p, u8 a, u8 b);
void func_0208104c(u8 *p);
u8 *func_020812e0(u32 idx);
u32 func_02081328(u32 a, u32 b);
u8 *SpNpc_GetInfo(u16 *p);
void *func_02080e18(void *p);
u8 *func_02080e1c(u8 *p);
void func_02080e20(Unk_02080e20_Obj *p);
BOOL func_02080e40(Unk_02080e20_Obj *self, u8 *p);
u8 *func_02080ec8(u8 *p);
void func_02080ecc(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c);
BOOL VillagerMemory_InitForPlayer(u8 *self, void *a, u8 *b, u8 *c);
BOOL func_02080f94(void *p);
void VillagerMemory_Clear(u8 *self);
u8 *VillagerMemory_Destruct(u8 *self);
u8 *VillagerMemory_Construct(u8 *self);
void func_02081018(u8 *out, s32 *in);
void func_02081030(u8 *p, u8 a, u8 b);
BOOL func_02081038(u8 *p);
void func_0208104c(u8 *p);
void _ZN17Unk_0207ac60_ElemD1Ev();
u8 *_ZN17Unk_0207ac60_ElemC1Ev(u8 *p);
BOOL func_02081288(u32 idx, void *buf);
u8 *func_020812e0(u32 idx);
u32 func_020812f4();
u32 func_02081318(u8 *p);
u32 func_02081328(u32 a, u32 b);
u8 func_02081364(u8 *p);
BOOL Villager_GetDefaultCatchphrase(MsgString *buf, u32 x);
BOOL Villager_GetDefaultCatchphraseEncoded(EncodedString *self, u32 x);
BOOL Villager_GetDefaultCatchphrase(MsgString *buf, u32 x);
s32 SpNpc_GetInfoByte0(u16 *p);
u32 func_02081450(u16 *p);
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
void func_0207d1b8(void);
void func_0207d1bc(void);
void func_0207d1e4(void);
void func_0207d20c(void);
void func_0207d238(void);
void func_0207d264(void);
void func_0207d290(void);
void func_0207d2b4(void);
void func_0207d2fc(void);
void func_0207d320(void);
void func_0207d344(void);
void func_0207d3b0(void);
void func_0207d430(void);
void func_0207d494(void);
void func_0207d4f8(void);
void func_0207d578(void);
void func_0207d59c(void);
void func_0207d5cc(void);
void func_0207d5fc(void);
void func_0207d62c(void);
void func_0207d650(void);
void func_0207d674(void);
void func_0207d67c(void);
void func_0207d6a4(void);
void func_0207d6ac(void);
void func_0207d6e8(void);
void func_0207d6f4(void);
void func_0207d704(void);
void func_0207d714(void);
void func_0207d724(void);
void func_0207d744(void);
void func_0207d75c(void);
void func_0207d774(void);
void func_0207d7a8(void);
void func_0207d7c0(void);
void func_0207d7d8(void);
void func_0207d820(void);
void func_0207d89c(void);
void func_0207d8e8(void);
void func_0207d934(void);
void func_0207d980(void);
void func_0207d9cc(void);
void func_0207da18(void);
void func_0207da64(void);
void func_0207dab0(void);
void func_0207dafc(void);
void func_0207db48(void);
void func_0207db94(void);
void func_0207dbe0(void);
void func_0207dc1c(void);
void func_0207dc58(void);
void func_0207dc98(void);
void func_0207dcd4(void);
void func_0207dce4(void);
void func_0207dcf0(void);
void func_0207dd08(void);
void func_0207dd24(void);
void func_0207de6c(void);
void func_0207df10(void);
}
}

namespace nZ {
extern "C" {
extern const u8 data_020cbfb8[8];
const u8 data_020cbfb8[8] = {
    0x04, 0x1b, 0x09, 0x02, 0x00, 0x0a, 0x04, 0x20,
};
extern const u8 data_020cc060[36];
const u8 data_020cc060[36] = {
    0x00, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0x02, 0x01, 0x01, 0x00,
    0x03, 0x03, 0x00, 0x01, 0x02, 0x00, 0x02, 0x00, 0x01, 0x07, 0x04, 0x05, 0x00, 0x02, 0x02, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
VillagerData data_021ccb58;
extern const u32 data_020cbfcc[3];
const u32 data_020cbfcc[3] = {
    0x00000000, 0x00000004, 0x00000003,
};
extern const u8 data_020cc084[36];
const u8 data_020cc084[36] = {
    0x28, 0x60, 0x08, 0x08, 0x28, 0x60, 0x60, 0x08, 0x28, 0x28, 0x60, 0x08, 0x08, 0x28, 0x60, 0x60,
    0x08, 0x28, 0x08, 0x28, 0x60, 0x28, 0x08, 0x60, 0x28, 0x60, 0x08, 0x08, 0x60, 0x28, 0x60, 0x08,
    0x28, 0x60, 0x28, 0x08,
};
extern const u16 data_020cc048[12];
const u16 data_020cc048[12] = {
    0x0c00, 0x0c00, 0x0800, 0x0c00, 0x0c00, 0x0800, 0x0c00, 0x0c00, 0x0800, 0x0c00, 0x0800, 0x0c00,
};
Unk_0207ed1c_Fn data_021cc934[5] = {
    &VillagerDataItemView::func_0207ee34, &VillagerDataItemView::func_0207ee0c, &VillagerDataItemView::func_0207ede4,
    &VillagerDataItemView::func_0207edbc, &VillagerDataItemView::func_0207ed68,
};
extern const u8 data_020cc008[16];
const u8 data_020cc008[16] = {
    0x80, 0x00, 0x30, 0x30, 0x00, 0x80, 0x30, 0x30, 0x30, 0x30, 0x80, 0x00, 0x30, 0x30, 0x00, 0x80,
};
extern const u8 data_020cbfe8[16];
const u8 data_020cbfe8[16] = {
    0x04, 0x09, 0x0d, 0x0e, 0x1d, 0x15, 0x03, 0x19, 0x05, 0x0a, 0x12, 0x02, 0x13, 0x00, 0x00, 0x00,
};
Unk_021cc9e8 data_021cc9e8;
u8 data_021cc984[0x28];
Unk_021cc8e8 data_021cc8e8;
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
extern const u16 data_020cbfb0[4];
const u16 data_020cbfb0[4] = {
    0x4a48, 0x4a4c, 0x4a50, 0x0000,
};
Unk_021cc914 data_021cc914;
extern const u8 data_020cbfd8[16];
const u8 data_020cbfd8[16] = {
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
            u8 *q = SaveVillagers_Get(data_021dfd8c, idx);
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
            u8 *q = SaveVillagers_Get(data_021dfd8c, idx);
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
extern "C" u32 func_02081450(u16 *p) {
    u32 idx = *p & 0xfff;
    u32 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = SaveVillagers_Get(data_021dfd8c, idx);
            if (q) r = func_0207f988(q);
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
extern "C" u8 func_02081364(u8 *p) {
    u8 r = 0;
    u32 c = p[0];
    switch (c) {
    case 0:
    case 1:
    case 2:
        r = data_020cbfa8[c] + p[1] - 1;
        break;
    case 3:
        r = data_020cbfa8[c] + p[1];
        break;
    case 4: {
        u32 d = p[1];
        if (d < 12) r = data_020cbfa8[c] + d;
        break;
    }
    }
    return r;
}
}

namespace nQ {
extern "C" u32 func_02081328(u32 a, u32 b) {
    u8 *p = data_020cc018;
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
extern "C" u32 func_02081318(u8 *p) {
    return func_02081328(p[0], p[1]);
}
}

namespace nQ {
extern "C" u32 func_020812f4() {
    CommManager *o = gCommManager;
    if (o->isSlotActive(o->unk_64)) return 0;
    return 4;
}
}

namespace nQ {
extern "C" u8 *func_020812e0(u32 idx) {
    if (idx >= 6) idx = 0;
    return data_020cc030[idx];
}
}

namespace nQ {
extern "C" BOOL func_02081288(u32 idx, void *buf) {
    u8 *e = func_020812e0(idx);
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

u32 MsgString11::vfunc_08() {
    using namespace nQ; return 0xb; }

u8 *MsgString11::vfunc_0c() {
    using namespace nQ; return (u8 *)this + 0x12; }

EncodedString10::EncodedString10() {
    using namespace nQ;}

EncodedString10::~EncodedString10() {
    using namespace nQ;}

u32 EncodedString10::vfunc_08() {
    using namespace nQ; return 0xa; }

void EncodedString10::copyTo(void *dst, s32 n) {
    using namespace nQ;
    if (n >= 10) n = 10;
    MI_CpuCopy8((u8 *)this + 0xe, dst, n);
}

u8 *EncodedString10::vfunc_0c() {
    using namespace nQ; return (u8 *)this + 0xe; }

MsgString17::MsgString17() {
    using namespace nQ;}

MsgString17::~MsgString17() {
    using namespace nQ;}

u32 MsgString17::vfunc_08() {
    using namespace nQ; return 0x11; }

u8 *MsgString17::vfunc_0c() {
    using namespace nQ; return (u8 *)this + 0x12; }

EncodedString16::EncodedString16() {
    using namespace nQ;}

EncodedString16::~EncodedString16() {
    using namespace nQ;}

u32 EncodedString16::vfunc_08() {
    using namespace nQ; return 0x10; }

u8 *EncodedString16::vfunc_0c() {
    using namespace nQ; return (u8 *)this + 0xe; }

MsgString17B::MsgString17B() {
    using namespace nQ;}

MsgString17B::~MsgString17B() {
    using namespace nQ;}

u32 MsgString17B::vfunc_08() {
    using namespace nQ; return 0x11; }

u8 *MsgString17B::vfunc_0c() {
    using namespace nQ; return (u8 *)this + 0x12; }

EncodedString16B::EncodedString16B() {
    using namespace nQ;}

EncodedString16B::~EncodedString16B() {
    using namespace nQ;}

u32 EncodedString16B::vfunc_08() {
    using namespace nQ; return 0x10; }

u8 *EncodedString16B::vfunc_0c() {
    using namespace nQ; return (u8 *)this + 0xe; }

namespace nQ {
extern "C" u8 *_ZN17Unk_0207ac60_ElemC1Ev(u8 *p) {
    func_0208104c(p);
    return p;
}
}

namespace nQ {
extern "C" void _ZN17Unk_0207ac60_ElemD1Ev() {
}
}

namespace nQ {
extern "C" void func_0208104c(u8 *p) {
    p[0] = 0xff;
    p[1] = 0xff;
}
}

namespace nQ {
extern "C" BOOL func_02081038(u8 *p) {
    if (p[0] != 0xff && p[1] != 0xff) return TRUE;
    return FALSE;
}
}

namespace nQ {
extern "C" void func_02081030(u8 *p, u8 a, u8 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace nQ {
extern "C" void func_02081018(u8 *out, s32 *in) {
    func_02081030(out, in[0], in[1]);
}
}

namespace nQ {
extern "C" u8 *VillagerMemory_Construct(u8 *self) {
    _ZN8PlayerIdC1EPv(self);
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    func_020639bc(self + 0x48);
    *(u16 *)(self + 0x52) = 0xfff1;
    VillagerMemory_Clear(self);
    return self;
}
}

namespace nQ {
extern "C" u8 *VillagerMemory_Destruct(u8 *self) {
    func_020639b8(self + 0x48);
    _ZN8PlayerIdC1Ev(self);
    return self;
}
}

namespace nQ {
extern "C" void VillagerMemory_Clear(u8 *self) {
    MI_CpuFill8(self, 0, 0x68);
    _ZN8PlayerId13func_02094294Ev(self);
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    *(u16 *)(self + 0x52) = 0xfff1;
}
}

namespace nQ {
extern "C" BOOL func_02080f94(void *p) {
    return _ZN8PlayerId13func_02094218Ev(func_02080e18(p));
}
}

namespace nQ {
extern "C" BOOL VillagerMemory_InitForPlayer(u8 *self, void *a, u8 *b, u8 *c) {
    BOOL r = FALSE;
    if (_ZN8PlayerId13func_02094218Ev(a)) {
        VillagerMemory_Clear(self);
        func_02080ecc((Unk_02080e20_Obj *)self, a, b, c);
        MI_CpuCopy8(_ZN8PlayerId13func_02094104Ev(a), self + 0x16, 8);
        r = TRUE;
    }
    return r;
}
}

namespace nQ {
extern "C" void func_02080ecc(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    if (a != 0 && _ZN8PlayerId13func_02094218Ev(a)) _ZN8PlayerId13func_020942b8EPv(self, a);
    if (b == 0) b = data_021d7352;
    if (c == 0) {
        Clock_GetDateTime(buf);
        c = (u8 *)buf;
    }
    if (func_02080e40(self, c)) func_02080e20(self);
    func_02063990(func_02080e1c((u8 *)self), b);
    MI_CpuCopy8(c, func_02080ec8((u8 *)self), 8);
    _ZN14VillagerMemory7setTimeEPx(self, data_021ed2f8);
}
}

namespace nQ {
extern "C" u8 *func_02080ec8(u8 *p) {
    return p + 0x40;
}
}

namespace nQ {
extern "C" BOOL func_02080e40(Unk_02080e20_Obj *self, u8 *p) {
    u8 *q = func_02080ec8((u8 *)self);
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
extern "C" void func_02080e20(Unk_02080e20_Obj *p) {
    s32 v = p->lvl;
    if (v > 4) v = 4;
    _ZN14VillagerMemory13addFriendshipEi(p, (s8)(v + 1));
}
}

namespace nQ {
extern "C" u8 *func_02080e1c(u8 *p) {
    return p + 0x48;
}
}

namespace nQ {
extern "C" void *func_02080e18(void *p) {
    return p;
}
}

namespace nP {
extern "C" BOOL VillagerMemory_MatchesPlayer(Unk_02080de0 *a, Unk_02080de0 *b) {
    if (a->unk_00 == b->unk_00 && memcmp(a->unk_02, b->unk_02, 8) == 0 && _ZN8PlayerId13func_020941e8EPS_(a, b) != 0) return TRUE;
    return FALSE;
}
}

s32 VillagerMemory::getFriendship() {
    using namespace nP; return unk_54; }

#pragma dont_inline on
void VillagerMemory::setFriendship(s8 v) {
    using namespace nP; unk_54 = v; }
#pragma dont_inline reset

s32 VillagerMemory::addFriendship(s32 d) {
    using namespace nP;
    s32 t = unk_54 + d;
    if (t > 0x7f) t = 0x7f;
    else if (t < -0x80) t = -0x80;
    setFriendship(t);
    return (s8)t;
}

BOOL VillagerMemory::isLetterReceived() {
    using namespace nP; if (unk_64.f0 == 1) return TRUE; return FALSE; }

void VillagerMemory::setLetterReceived() {
    using namespace nP; unk_64.f0 = 1; }

void VillagerMemory::getNickname(void *out) {
    using namespace nP;
    u32 tmp[7];
    _ZN12Unk_020e1c4cC1Ev(tmp);
    getNicknameEncoded(tmp);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(out, tmp, 0, 0);
    _ZN12Unk_020e1c4cD1Ev(tmp);
}

void VillagerMemory::getNicknameEncoded(void *out) {
    using namespace nP;
    StrBuf_ClearAlt(out);
    func_020a78a4(out, unk_16, 8);
}

void VillagerMemory::setNicknameFromMsg(void *out) {
    using namespace nP;
    u32 tmp[7];
    _ZN12Unk_020e1c4cC1Ev(tmp);
    _ZN13EncodedString13fromMsgStringEP9MsgString(tmp, out);
    _ZN12Unk_020e1c4c13func_02093f90EPvj(tmp, unk_16, 8);
    _ZN12Unk_020e1c4cD1Ev(tmp);
}

void VillagerMemory::setNickname(void *src, s32 n) {
    using namespace nP;
    MI_CpuFill8(unk_16, 0, 8);
    if (n > 8) n = 8;
    MI_CpuCopy8(src, unk_16, n);
}

BOOL VillagerMemory::hasCompliment() {
    using namespace nP; if (unk_64.f1 == 1) return TRUE; return FALSE; }

void VillagerMemory::getCompliment(void *out) {
    using namespace nP;
    u32 tmp[9];
    _ZN15EncodedString16C1Ev(tmp);
    getComplimentEncoded(tmp);
    func_020a78a4(tmp, unk_1e, 0x10);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(out, tmp, 0, 0);
    _ZN15EncodedString16D1Ev(tmp);
}

void VillagerMemory::getComplimentEncoded(void *out) {
    using namespace nP;
    StrBuf_ClearAlt(out);
    func_020a78a4(out, unk_1e, 0x10);
}

void VillagerMemory::setCompliment(void *src, s32 n) {
    using namespace nP;
    MI_CpuFill8(unk_1e, 0, 0x10);
    if (n > 0x10) n = 0x10;
    MI_CpuCopy8(src, unk_1e, n);
    unk_64.f1 = 1;
}

BOOL VillagerMemory::hasGreeting() {
    using namespace nP; if (unk_64.f3 == 1) return TRUE; return FALSE; }

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
    func_020a78a4(out, unk_2e, 0x10);
}

void VillagerMemory::setGreeting(void *src, s32 n) {
    using namespace nP;
    MI_CpuFill8(unk_2e, 0, 0x10);
    if (n > 0x10) n = 0x10;
    MI_CpuCopy8(src, unk_2e, n);
    unk_64.f3 = 1;
}

void VillagerMemory::setReceivedItem(u16 *p) {
    using namespace nP; unk_52 = *p; }

u16 *VillagerMemory::getReceivedItem() {
    using namespace nP; return &unk_52; }

BOOL VillagerMemory::hasTime() {
    using namespace nP; if (unk_64.f2 == 1) return TRUE; return FALSE; }

void VillagerMemory::setTime(long long *src) {
    using namespace nP;
    unk_64.f2 = 1;
    unk_5c = *src;
}

u32 VillagerMemory::getImpression() {
    using namespace nP; return unk_55; }

void VillagerMemory::setImpression(s32 v) {
    using namespace nP; unk_55 = v; }

s32 VillagerMemory::pickUnusedTopic() {
    using namespace nP;
    u32 cnt = 0, idx = 0;
    s32 i;
    u32 n;
    if (unk_58 == -1) unk_58 = 0;
    i = 0;
    u32 m = unk_58;
    for (; i < 32; i++) {
        if (((m >> i) & 1) == 0) cnt++;
    }
    n = func_02063b8c(cnt);
    for (i = 0; i < 32; i++) {
        if (((unk_58 >> i) & 1) == 0) {
            if (n == 0) {
                idx = i;
                break;
            }
            n--;
        }
    }
    if (cnt == 1) unk_58 = 0;
    unk_58 = unk_58 | (1 << idx);
    return idx;
}

void VillagerMemory::setGiftGiven() {
    using namespace nP; unk_64.f4 = 1; }

BOOL VillagerMemory::isGiftGiven() {
    using namespace nP; if (unk_64.f4) return TRUE; return FALSE; }

void VillagerMemory::func_02080a98() {
    using namespace nP; unk_64.f6 = 1; }

void VillagerMemory::func_02080a88() {
    using namespace nP; unk_64.f6 = 0; }

BOOL VillagerMemory::func_02080a74() {
    using namespace nP; if (unk_64.f6) return TRUE; return FALSE; }

void VillagerMemory::func_02080a64() {
    using namespace nP; unk_64.f7 = 1; }

void VillagerMemory::func_02080a54() {
    using namespace nP; unk_64.f7 = 0; }

BOOL VillagerMemory::func_02080a40() {
    using namespace nP; if (unk_64.f7) return TRUE; return FALSE; }

void VillagerMemory::func_02080a2c() {
    using namespace nP; unk_64.f11 = 1; }

void VillagerMemory::func_02080a18() {
    using namespace nP; unk_64.f11 = 0; }

BOOL VillagerMemory::func_02080a04() {
    using namespace nP; if (unk_64.f11) return TRUE; return FALSE; }

void VillagerMemory::func_020809f0() {
    using namespace nP; unk_64.f12 = 1; }

void VillagerMemory::func_020809dc() {
    using namespace nP; unk_64.f12 = 0; }

BOOL VillagerMemory::func_020809c8() {
    using namespace nP; if (unk_64.f12) return TRUE; return FALSE; }

void VillagerMemory::func_020809b4() {
    using namespace nP; unk_64.f13 = 1; }

void VillagerMemory::func_020809a0() {
    using namespace nP; unk_64.f13 = 0; }

BOOL VillagerMemory::func_0208098c() {
    using namespace nP; if (unk_64.f13) return TRUE; return FALSE; }

void VillagerMemory::func_02080978() {
    using namespace nP; unk_64.f14 = 1; }

void VillagerMemory::func_02080964() {
    using namespace nP; unk_64.f14 = 0; }

BOOL VillagerMemory::func_02080950() {
    using namespace nP; if (unk_64.f14) return TRUE; return FALSE; }

void VillagerMemory::func_02080940() {
    using namespace nP; unk_64.f5 = 1; }

void VillagerMemory::func_02080930() {
    using namespace nP; unk_64.f5 = 0; }

BOOL VillagerMemory::func_0208091c() {
    using namespace nP; if (unk_64.f5) return TRUE; return FALSE; }

VillagerData::VillagerData() {
    using namespace nP;
    __cxa_vec_ctor(this, 8, 0x68, (void *(*)(void *))VillagerMemory_Construct, (void *(*)(void *, s32))VillagerMemory_Destruct);
    _ZN7PatternC1Ev(unk_340);
    _ZN6LetterC1Ev(unk_568);
    func_0209a658(unk_65c);
    __cxa_vec_ctor(unk_6ac, 10, 2, (void *(*)(void *))_ZN6ItemIdC1Ev, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    func_02003130(unk_6c0);
    __cxa_vec_ctor(unk_6cc, 4, 2, (void *(*)(void *))_ZN6ItemIdC1Ev, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    func_020639bc(unk_6d4);
    _ZN17Unk_0207ac60_ElemC1Ev(&unk_6e8);
    unk_6ec = 0xfff1;
    func_020639bc(unk_6f6);
}

VillagerData::~VillagerData() {
    using namespace nP;
    func_020639b8(unk_6f6);
    _ZN17Unk_0207ac60_ElemD1Ev(&unk_6e8);
    func_020639b8(unk_6d4);
    __cxa_vec_cleanup(unk_6cc, 4, 2, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    func_02003100(unk_6c0);
    __cxa_vec_cleanup(unk_6ac, 10, 2, (void *(*)(void *, s32))_ZN6ItemIdD1Ev);
    func_0209a640(unk_65c);
    _ZN6LetterD1Ev(unk_568);
    _ZN7PatternD1Ev(unk_340);
    __cxa_vec_cleanup(this, 8, 0x68, (void *(*)(void *, s32))VillagerMemory_Destruct);
}

void VillagerData::clear() {
    using namespace nP;
    MI_CpuFill8(this, 0, 0x700);
    func_020030e8(unk_6c0);
    unk_6ec = 0x11a8;
    _ZN23VillagerDataProfileView16clearCatchphraseEv(this);
    for (s32 i = 0; i < 8; i++) VillagerMemory_Clear(&unk_000[i]);
    func_020639a0(unk_6d4);
    for (s32 i = 0; i < 10; i++) unk_6ac[i] = 0xfff1;
    func_0208104c(&unk_6e8);
    func_0209a628(unk_65c);
    unk_6f0 = 3;
    func_02065c94(unk_568);
    func_0207d08c(this);
    func_020639a0(unk_6f6);
}

void VillagerData::copyFrom(void *src) {
    using namespace nP; MI_CpuCopy8(src, this, 0x700); }

void VillagerData::setup(u32 id, u32 a, u32 b, u8 c) {
    using namespace nP;
    Unk_020805d0_Rec *rec = (Unk_020805d0_Rec *)VillagerInfo_Get(id);
    u32 t = 0;
    u32 tmp[7];
    _ZN15EncodedString10C1Ev(tmp);
    if (rec) t = rec->unk_4a;
    _ZN10VillagerId3setEjjPv(unk_6c0, id, t, b);
    StrBuf_ClearAlt(tmp);
    if (Villager_GetDefaultCatchphraseEncoded(tmp, id)) {
        _ZN15EncodedString106copyToEPvi(tmp, unk_6de, 10);
    }
    if (rec) {
        u32 h = rec->unk_2c;
        u16 t2;
        if (h < 0x100) t2 = h + 0x11a8;
        else t2 = 0x11a8;
        unk_6ec = t2;
        for (s32 i = 0; i < 10; i++) unk_6ac[i] = rec->unk_06[i];
        func_0207e394(this, rec->unk_30);
        func_0207e388(this, rec->unk_31);
        func_0209a614(Villager_GetPlan(this), rec->unk_32, c);
        func_0207e4b4(this, _ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(Villager_GetPlan(this))), 0);
        unk_6f2 = rec->unk_2f;
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(Villager_GetPlan(this))) == 2) {
            unk_6f2 = unk_6f2 % 10;
        }
        Villager_PickShownFurniture(this);
        unk_6f4 = rec->unk_2e;
    }
    func_0207dfdc(this, a);
    _ZN15EncodedString10D1Ev(tmp);
}

void *VillagerData::getVillagerId() {
    using namespace nP; return unk_6c0; }

void *VillagerData::getPattern() {
    using namespace nP; return unk_340; }

void *VillagerData::getLetter() {
    using namespace nP; return unk_568; }

s32 VillagerData::receiveLetterFrom(u32 id) {
    using namespace nP;
    VillagerMemory *e = 0;
    u32 buf[6];
    volatile u16 v[2];
    void *p = func_02065634(id);
    BOOL r = FALSE;
    if (p) {
        _ZN8PlayerIdC1ERKS_(buf, p);
        if (_ZN8PlayerId13func_02094218Ev(buf)) {
            e = (VillagerMemory *)Villager_FindMemory(this, buf);
        }
        _ZN8PlayerIdC1Ev(buf);
    }
    if (e) {
        e->setLetterReceived();
        func_02065e70(unk_568, id);
        func_02063990(unk_6f6, data_021d7352);
        v[0] = _ZN12Unk_0206555413func_020655d0Ev(id);
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
            func_0207cfb8(this, (u16 *)&v[0]);
        }
    done:
        r = TRUE;
    }
    return r;
}

BOOL VillagerDataProfileView::func_02080450(u16 *p) {
    using namespace nO;
    u16 o[12];
    void *r6 = func_02065634(unk_568);
    if (_ZN8PlayerId13func_02094218Ev(p) && r6) {
        _ZN8PlayerIdC1ERKS_(o, r6);
        if (p[0] == o[0] && !memcmp(p + 1, o + 1, 8) && _ZN8PlayerId13func_020941e8EPS_(p, o) && Villager_FindMemory(this, p) && _ZN14VillagerMemory16isLetterReceivedEv()) {
            _ZN8PlayerIdC1Ev(o);
            return TRUE;
        }
        _ZN8PlayerIdC1Ev(o);
    }
    return FALSE;
}

void VillagerDataProfileView::func_020801fc(void *p, void *q) {
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
    if (_ZN12Unk_02097ff413func_02098044Ej(p, 1)) return;
    if (!_ZN10VillagerId7isValidEv(r)) return;
    void *r7 = _ZN10PlayerData11getPlayerIdEv(p);
    if (!_ZN8PlayerId13func_02094218Ev(r7)) return;
    void *e = Villager_FindMemory(this, r7);
    s32 k = func_0206c884(q);
    _ZN12Unk_020e1c64C1Ev(o);
    switch (k) {
    case 1: {
        s32 t = func_02063b8c(3);
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
        _ZN8PlayerId13func_020940d0EP9MsgString(r7, o);
        MailText_SetSlot(0, o);
        s32 i;
        for (i = 0; i < 6; i++) {
            x = func_0209b570(&v30, i);
            _ZN9MsgString5clearEv(str80);
            c = v30;
            String_LoadResolveAltText(str80, &c, x);
            MailText_SetSlot(i + 2, str80);
        }
        if (_ZN12Unk_0206555413func_020655d0Ev(q) != 0xfff1) {
            s32 w = func_0206c878(q);
            if (w <= 0x20) {
                if (func_02063b8c(2) == 0) {
                    _ZN12ItemPickSpec3setEii(t1, (void *)2, 0);
                    t2[0] = t1[0];
                    t2[1] = t1[1];
                    ItemPick_One(&ha, t2, 0, 0, 1, 1, 0);
                    res = ha;
                    func_02063388(t2);
                    func_02063388(t1);
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
                func_02063388(t4);
                func_02063388(t3);
            } else {
                _ZN12ItemPickSpec3setEii(t5, data_020cbfcc[func_02063b8c(3)], 0);
                t6[0] = t5[0];
                t6[1] = t5[1];
                ItemPick_One(&hd, t6, 0, 0, 1, 1, 0);
                res = hd;
                func_02063388(t6);
                func_02063388(t5);
            }
            if (res != 0xfff1) {
                v1c = 10;
            }
        }
        Villager_SendLetter4(((u8 *)"re_normal"), v1c, 10, r7, r, &res);
        if (e) {
            if (_ZN12Unk_0206555413func_020655d0Ev(q) != 0xfff1) {
                _ZN14VillagerMemory13addFriendshipEi(e, 5);
            } else {
                _ZN14VillagerMemory13addFriendshipEi(e, 3);
            }
        }
        _ZN11MsgString33D1Ev(str80);
        break;
    }
    }
    _ZN12Unk_020e1c64D1Ev(o);
}

namespace nO {
extern "C" void func_020800b0(void *t, void *p, void *q) {
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
        if (_ZN8PlayerId13func_02094218Ev(r7) && !_ZN6TownId13func_02094058Ev(r7) && !_ZN12Unk_02097ff413func_02098044Ej(p, 1)) {
            u32 z = 0;
            buf[0] = z;
            buf[1] = z;
            u8 *r5 = (u8 *)_ZN12Unk_02097ff413func_02098308Ev(p);
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
                        if (!_ZN14VillagerMemory13func_020809c8Ev(e)) {
                            h[0] = 0xfff1;
                            u16 *hp = 0;
                            _ZN12ItemPickSpec3setEii(o1, data_020cbfc0[func_02063b8c(3)], hp);
                            o2[0] = o1[0];
                            o2[1] = o1[1];
                            ItemPick_One(&h[1], o2, hp, hp, 1, 1, hp);
                            h[0] = h[1];
                            func_02063388(o2);
                            if (h[0] != 0xfff1) {
                                hp = h;
                            }
                            if (func_02059900(((u8 *)"ev_birth"), (u8)func_02063b8c(3), r7, r10, hp, -1)) {
                                _ZN14VillagerMemory13func_020809f0Ev(e);
                            }
                            func_02063388(o1);
                        }
                    }
                }
            }
        }
    }
}
}

void VillagerDataProfileView::func_02080078(void *a) {
    using namespace nO;
    if ((u32)data_021d735c != 0) {
        s32 i;
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_GetResident(data_021d735c, i);
            if (p) {
                func_020800b0(this, p, a);
            }
        }
    }
}

namespace nO {
extern "C" void func_0207ff5c(void *t, void *p, void *q) {
    u32 buf[2];
    u8 buf2[8];
    u32 str[12];
    void *r7 = _ZN12VillagerData13getVillagerIdEv(t);
    if (!p) {
        p = PlayerData_GetCurrent();
    }
    if (_ZN10VillagerId7isValidEv(r7) && p) {
        void *r6 = _ZN10PlayerData11getPlayerIdEv(p);
        if (_ZN8PlayerId13func_02094218Ev(r6) && !_ZN6TownId13func_02094058Ev(r6) && !_ZN12Unk_02097ff413func_02098044Ej(p, 1)) {
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
                        if (!_ZN14VillagerMemory13func_0208098cEv(e)) {
                            _ZN11MsgString25C1Ev(str);
                            String_FormatNumber(str, ((u8 *)buf)[5] + 0x7d0, 4, 0, 0, 0);
                            MailText_SetSlot(2, str);
                            if (func_02059900(((u8 *)"ev_newyear"), (u8)func_02063b8c(3), r6, r7, 0, 2)) {
                                _ZN14VillagerMemory13func_020809b4Ev(e);
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

void VillagerDataProfileView::func_0207ff14(void *a) {
    using namespace nO;
    if ((u32)data_021d735c != 0) {
        s32 i;
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_GetResident(data_021d735c, i);
            if (p) {
                if (_ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv(p))) {
                    func_0207ff5c(this, p, a);
                }
            }
        }
    }
}

namespace nO {
extern "C" void func_0207fe78(void *t, void *p) {
    u32 obj[8];
    void *r6 = _ZN12VillagerData13getVillagerIdEv(t);
    if (_ZN10VillagerId7isValidEv(r6)) {
        if (p) {
            void *q = _ZN10PlayerData11getPlayerIdEv(p);
            if (_ZN8PlayerId13func_02094218Ev(q)) {
                if (!_ZN6TownId13func_02094058Ev(q)) {
                    if (Villager_FindMemory(t, q)) {
                        _ZN12Unk_020dd38cC2Ev(obj);
                        u32 g = (u32)data_021d7352;
                        if (g != 0) {
                            if (func_02063954((void *)g)) {
                                func_020638d0((void *)g, obj);
                                MailText_SetSlot(2, obj);
                            }
                        }
                        func_02059900(((u8 *)"byebye"), (u8)func_02063b8c(5), q, r6, 0, -1);
                        _ZN12Unk_020dd38cD1Ev(obj);
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
        if ((u32)data_021d735c != 0) {
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = PlayerData_GetResident(data_021d735c, i);
                if (p) {
                    if (_ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv(p))) {
                        func_0207fe78(this, p);
                    }
                }
            }
        }
    }
}

s32 VillagerDataProfileView::findLetterSenderMemory() {
    using namespace nO;
    u32 obj[7];
    void *p = func_02065634(unk_568);
    if (p) {
        _ZN8PlayerIdC1ERKS_(obj, p);
        if (_ZN8PlayerId13func_02094218Ev(obj)) {
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
    return &unk_6ec;
}

void VillagerDataProfileView::setShirt(u16 *p) {
    using namespace nO;
    unk_6ec = *p;
}

namespace nO {
extern "C" void func_0207fd3c(u16 *out, void *idx) {
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
    u32 v = o->unk_6f4;
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
        unk_6f4 = i;
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
        if (!_ZN10VillagerId7isValidEv(p->unk_568 + (0x6c0 - 0x568))) {
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
    MI_CpuFill8(unk_6de, 0x85, 10);
}

void VillagerDataProfileView::getCatchphrase(void *dst, void *flag) {
    using namespace nO;
    u32 buf[7];
    u8 b;
    _ZN15EncodedString10C1Ev(buf);
    _ZN9MsgString5clearEv(dst);
    if (flag && func_0207ce24(this)) {
        b = func_02063b8c(0x10);
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
    func_020a78a4(p, unk_6de, 10);
}

namespace nN {
extern "C" void func_0207fb4c(u32 a, u32 b) {
    Unk_0207fb4c_Str s;
    _ZN15EncodedString10C1Ev(&s);
    StrBuf_ClearAlt(&s);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&s, b);
    func_0207fb34(a, &s);
    _ZN15EncodedString10D1Ev(&s);
}
}

namespace nN {
extern "C" void func_0207fb34(u32 a, void *b) {
    _ZN15EncodedString106copyToEPvi(b, (void *)(a + 0x6de), 10);
}
}

namespace nN {
extern "C" void func_0207fb04(u32 a, void *b, s32 c) {
    MI_CpuFill8((void *)(a + 0x6de), 0, 10);
    if (c > 10) {
        c = 10;
    }
    MI_CpuCopy8(b, (void *)(a + 0x6de), c);
}
}

namespace nN {
extern "C" u8 *func_0207fae4(u32 a) {
    u8 *r = NULL;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        r = p + 0x26;
    }
    return r;
}
}

namespace nN {
extern "C" s32 func_0207fa50(u32 a, s32 b, u8 *c) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) != 0 && func_0207e334(a) != -1) {
        u32 id = func_0207e334(a);
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
extern "C" BOOL func_0207f9e0(u32 a) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) != 0) {
        u32 r7 = SaveVillagers_GetUnk3830Index(func_0204bdb8() + 0x8a3c);
        void *r6 = PlayerData_GetCurrent();
        BOOL r = FALSE;
        if (r7 != func_0207e334(a) && Villager_GetResidentStatus(a) == 3 && r6 != NULL) {
            u32 q = _ZN10PlayerData13func_0209865cEv(r6);
            u32 u = _ZN12VillagerData13getVillagerIdEv(a);
            if (func_02099ed4((void *)(q + 0x88), u) == 0) {
                r = TRUE;
            }
        }
        return r;
    }
    return FALSE;
}
}

namespace nN {
extern "C" u32 func_0207f9c4(u32 a) {
    u8 *p = func_0207fae4(a);
    u32 r = 0xc;
    if (p != NULL) {
        r = func_02081318(p);
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
extern "C" u32 func_0207f988(u32 a) {
    u32 i = Villager_GetAnimalKind(a);
    if (i >= 0x21) {
        i = 0;
    }
    return data_020cc060[i];
}
}

namespace nN {
extern "C" u8 *func_0207f968(u32 a) {
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
extern "C" u8 *func_0207f948(u32 a) {
    u8 *r = NULL;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    if (p != NULL) {
        r = p;
    }
    return r;
}
}

namespace nN {
extern "C" u8 *func_0207f91c(Unk_0207f264_Entry *t, u32 i) {
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
extern "C" u8 func_0207f8ec(u32 a, u32 b) {
    u8 *p = func_0207f91c((Unk_0207f264_Entry *)a, func_0207cdb0());
    if (p != NULL) {
        return func_0209a6e4(b, p[0], p[1]);
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
extern "C" BOOL func_0207f8c0(Unk_0207f264_Entry *t, u32 i) {
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
    if (func_0207f8c0(t, i)) {
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
extern "C" s32 func_0207f804(Unk_0207f264_Entry *t) {
    static Unk_0207f804_Str s;
    s.func_02094294();
    return Villager_FindMemoryIndex(t, &s);
}
}

namespace nN {
extern "C" s32 func_0207f7cc(Unk_0207f264_Entry *t, void *id) {
    s32 i = 0;
    for (; i < 8; i++) {
        if (_ZN8PlayerId13func_020941e8EPS_(func_02080e18(&t[i]), id) != 0) {
            return i;
        }
    }
    return -1;
}
}

namespace nN {
extern "C" s32 func_0207f79c(Unk_0207f264_Entry *t) {
    s32 best = -0x80;
    s32 i = 0;
    do {
        if (func_02080f94(t) != 0) {
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
extern "C" s32 func_0207f728(Unk_0207f264_Entry *t, void *o) {
    s32 best = 0x7fffffff;
    s32 i = 0;
    for (; i < 8; t++, i++) {
        if (func_02080f94(t) != 0) {
            void *p = func_02080ec8(t);
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
extern "C" s32 func_0207f660(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *)) {
    s32 res = -1;
    if (func_02063954(data_021d7352) != 0) {
        Unk_0207f264_Entry *best = NULL;
        s32 i = 0;
        do {
            if (func_02080f94(t) != 0) {
                if (cb((void *)func_02080e18(t), data_021d7352, data_021d735c) != 0) {
                    if (best != NULL) {
                        if (_ZN14VillagerMemory16isLetterReceivedEv(best) == _ZN14VillagerMemory16isLetterReceivedEv(t)) {
                            if (_ZN14VillagerMemory13getFriendshipEv(best) > _ZN14VillagerMemory13getFriendshipEv(t)) {
                                best = t;
                                res = i;
                            } else if (_ZN14VillagerMemory13getFriendshipEv(best) == _ZN14VillagerMemory13getFriendshipEv(t)) {
                                void *pa = func_02080ec8(best);
                                void *pb = func_02080ec8(t);
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
extern "C" s32 func_0207f61c(u32 a, u16 *p, u32 c) {
    BOOL r = FALSE;
    u16 *q = func_0209409c();
    if (p[0] == q[0] && memcmp(p + 1, q + 1, 8) == 0) {
        if (func_02097740(c, a) == ~r) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nN {
extern "C" s32 func_0207f60c(Unk_0207f264_Entry *t) {
    return func_0207f660(t, (s32 (*)(void *, void *, void *))func_0207f61c);
}
}

namespace nN {
extern "C" s32 func_0207f5e0(void *a, u16 *p, void *c) {
    u16 *q = func_0209409c();
    if (p[0] != q[0] || memcmp(p + 1, q + 1, 8) != 0) {
        return 1;
    }
    return 0;
}
}

namespace nN {
extern "C" s32 func_0207f5d0(Unk_0207f264_Entry *t) {
    return func_0207f660(t, (s32 (*)(void *, void *, void *))func_0207f5e0);
}
}

namespace nN {
extern "C" s32 func_0207f5a4(Unk_0207f264_Entry *t) {
    s32 r = func_0207f804(t);
    if (r == -1) {
        r = func_0207f60c(t);
    }
    if (r == -1) {
        r = func_0207f5d0(t);
    }
    return r;
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *func_0207f58c(Unk_0207f264_Entry *t) {
    return Villager_GetMemory(t, func_0207f5a4(t));
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *func_0207f55c(Unk_0207f264_Entry *t, void *b) {
    Unk_0207f264_Entry *e = Villager_FindMemory((u32)t, b);
    if (e == NULL) {
        e = func_0207f58c(t);
        if (e != NULL) {
            VillagerMemory_InitForPlayer(e, b, 0, 0);
        }
    }
    return e;
}
}

namespace nN {
extern "C" s32 func_0207f4a4(Unk_0207f264_Entry *t, Unk_0207f264_Entry **out, void *id, s32 mode) {
    s32 n = 0;
    if ((u32)data_021d7352 != 0 && _ZN8PlayerId13func_02094218Ev(id) != 0) {
        s32 i = 0;
        do {
            Unk_0207f264_Entry *e = &t[i];
            if (func_02080f94(e) != 0 && VillagerMemory_MatchesPlayer(e, id) == 0) {
                switch (mode) {
                case 0: {
                    u16 *p = func_02080e1c(e);
                    if (p[0] == data_021d7352[0] && memcmp(p + 1, (void *)((u8 *)data_021d7352 + 2), 8) == 0) {
                        out[n] = e;
                        n++;
                    }
                    break;
                }
                case 1: {
                    u16 *p = func_02080e1c(e);
                    if (p[0] != data_021d7352[0] || memcmp(p + 1, (void *)((u8 *)data_021d7352 + 2), 8) != 0) {
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
extern "C" s32 func_0207f480(Unk_0207f264_Entry *t) {
    s32 n = 0;
    s32 i = 0;
    do {
        if (func_02080f94(t) != 0) {
            n++;
        }
        t++;
        i++;
    } while (i < 8);
    return n;
}
}

namespace nN {
extern "C" BOOL func_0207f3d0(u32 a, u32 b, void *c) {
    s32 x, y;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) == 0) {
        return FALSE;
    }
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(b)) == 0) {
        return TRUE;
    }
    x = func_0207f480((Unk_0207f264_Entry *)a);
    y = func_0207f480((Unk_0207f264_Entry *)b);
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
    x = func_0207f79c((Unk_0207f264_Entry *)a);
    y = func_0207f79c((Unk_0207f264_Entry *)b);
    if (x > y) {
        return TRUE;
    }
    if (x < y) {
        return FALSE;
    }
    x = func_0207f728((Unk_0207f264_Entry *)a, c);
    y = func_0207f728((Unk_0207f264_Entry *)b, c);
    if (x < y) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nN {
extern "C" void Villager_GetNicknameFor(u32 a, void *b, void *c) {
    Unk_0207f264_Entry *e = Villager_FindMemory(a, c);
    if (e == NULL || _ZN8PlayerId13func_02094218Ev(c) == 0 || _ZN14VillagerMemory13getFriendshipEv(e) <= -10) {
        _ZN8PlayerId13func_020940d0EP9MsgString(c, b);
    } else {
        _ZN14VillagerMemory11getNicknameEPv(e, b);
    }
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *func_0207f368(u32 a, void *b, void *c) {
    Unk_0207f264_Entry *e = Villager_FindMemory(a, c);
    if (e != NULL) {
        _ZN14VillagerMemory18setNicknameFromMsgEPv(e, b);
    }
    return e;
}
}

namespace nN {
extern "C" Unk_0207f264_Entry *func_0207f344(u32 a, u32 b, u32 c, void *d) {
    Unk_0207f264_Entry *e = Villager_FindMemory(a, d);
    if (e != NULL) {
        _ZN14VillagerMemory11setNicknameEPvi(e, b, c);
    }
    return e;
}
}

namespace nN {
extern "C" void func_0207f264(u32 a, u32 b, void *c) {
    Unk_0207f264_Entry *e1, *e2;
    void *t;
    if (c == NULL) {
        c = PlayerData_GetCurrent();
    }
    if (c != NULL) {
        t = _ZN10PlayerData11getPlayerIdEv(c);
        if (_ZN8PlayerId13func_02094218Ev(t) != 0 && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) != 0 && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(b)) != 0) {
            Unk_0207f264_Entry *r6 = NULL, *r7 = NULL;
            e1 = Villager_FindMemory(b, t);
            e2 = Villager_FindMemory(a, t);
            Unk_020e1c64 s1;
            Unk_020e1c64 s2;
            if (e1 != NULL && e2 != NULL) {
                _ZN8PlayerId13func_020940d0EP9MsgString(t, &s2);
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
        if (_ZN8PlayerId13func_02094218Ev(c)) {
            if (_ZN14VillagerMemory13hasComplimentEv(o)) {
                _ZN14VillagerMemory13getComplimentEPv(o, a);
            }
        }
    }
}

void VillagerDataItemView::func_0207f20c(void *a, s32 n, void *c) {
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
        if (_ZN8PlayerId13func_02094218Ev(c)) {
            if (_ZN14VillagerMemory11hasGreetingEv(o)) {
                _ZN14VillagerMemory11getGreetingEPv(o, a);
                r = TRUE;
            }
        }
    }
    return r;
}

void VillagerDataItemView::func_0207f1a8(void *a, s32 n, void *c) {
    using namespace nM;
    void *o = Villager_FindMemory(this, c);
    if (o) {
        _ZN14VillagerMemory11setGreetingEPvi(o, a, n);
    }
}

u8 *VillagerDataItemView::getMovedFromTownId() {
    using namespace nM;
    return unk_6d4;
}

s32 VillagerDataItemView::clearHousePos() {
    using namespace nM;
    return func_0208104c(unk_6e8);
}

s32 VillagerDataItemView::hasHousePos() {
    using namespace nM;
    return func_02081038(unk_6e8);
}

u8 *VillagerDataItemView::getHousePos() {
    using namespace nM;
    return unk_6e8;
}

void VillagerDataItemView::setHousePos(u8 *p) {
    using namespace nM;
    unk_6e8[0] = p[0];
    unk_6e8[1] = p[1];
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

BOOL VillagerDataItemView::func_0207f07c(s32 *o1, s32 *o2) {
    using namespace nM;
    void *t;
    BOOL r = FALSE;
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(this)) != 0) {
        if (VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(this))) != 0) {
            t = func_0209a610(Villager_GetPlan(this));
            if (_ZN12Unk_0209b3bc13func_0209b354Ev(t) == 2 ||
                ((_ZN12Unk_0209b3bc13func_0209b354Ev(t) == 8 || _ZN12Unk_0209b3bc13func_0209b354Ev(t) == 9 || _ZN12Unk_0209b3bc13func_0209b354Ev(t) == 10 ||
                  _ZN12Unk_0209b3bc13func_0209b354Ev(t) == 11) &&
                 _ZN12Unk_0209b3bc13func_0209b2e4Ev(t) != 0)) {
                *o1 = 3;
                *o2 = unk_6f2 % 10;
            } else {
                *o1 = 2;
                *o2 = unk_6f2;
            }
            r = TRUE;
        }
    }
    return r;
}

s32 VillagerDataItemView::func_0207f04c() {
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

s32 VillagerDataItemView::func_0207eff8(u16 *pp) {
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
        out.v = unk_6ac[idx];
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
    return unk_6ac;
}

BOOL VillagerDataItemView::func_0207ef34(s32 *lo, s32 *hi, s32 mode, s32 type, u8 flag) {
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

s32 VillagerDataItemView::func_0207eec8(s32 lo, s32 hi) {
    using namespace nM;
    s32 res;
    if (isValidFurnitureIndex(lo)) {
        u16 *p = unk_6ac + lo;
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

s32 VillagerDataItemView::func_0207ee5c(s32 lo, s32 hi) {
    using namespace nM;
    s32 res;
    if (isValidFurnitureIndex(lo)) {
        u16 *p = unk_6ac + lo;
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

BOOL VillagerDataItemView::func_0207ee34(u16 *p) {
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

BOOL VillagerDataItemView::func_0207ee0c(u16 *p) {
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

BOOL VillagerDataItemView::func_0207ede4(u16 *p) {
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

BOOL VillagerDataItemView::func_0207edbc(u16 *p) {
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

BOOL VillagerDataItemView::func_0207ed68(u16 *item) {
    using namespace nM;
    BOOL r = FALSE;
    BOOL ok = FALSE;
    if (Item_IsFurniture(item)) {
        if (!Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
            ok = TRUE;
        }
    }
    if (ok) {
        if (func_0207f8ec(this, item) > 0) {
            r = TRUE;
        }
    }
    return r;
}

Unk_0207ed1c_Fn VillagerDataItemView::func_0207ed1c(s32 type) {
    using namespace nM;
    u8 k = 3;
    u32 idx = func_0209b2f8(&k, type);
    if (k == 0 && idx < 5) {
        return data_021cc934[idx];
    }
    return *(Unk_0207ed1c_Fn *)__ptmf_null;
}

BOOL VillagerDataItemView::func_0207ecd4(u16 *p, s32 type) {
    using namespace nM;
    Unk_0207ed1c_Fn f = func_0207ed1c(type);
    BOOL r = TRUE;
    if (f) {
        if (!(this->*f)(p)) {
            r = FALSE;
        }
    }
    return r;
}

s32 VillagerDataItemView::func_0207ec54(s32 type, s32 lo, s32 hi) {
    using namespace nM;
    s32 res;
    if (isValidFurnitureIndex(lo)) {
        u16 *p = unk_6ac + lo;
        u16 mask = 0;
        s32 cnt = 0;
        for (; lo < hi; p++, lo++) {
            if (isValidFurnitureIndex(lo) && *p != 0xfff1 && !func_0207ecd4(p, type)) {
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
extern "C" BOOL func_0207ec38(u16 *p) {
    if (func_02039dec(*p) != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nM {
extern "C" BOOL func_0207ec10(u16 *p) {
    if (func_02063b8c(2) == 0) {
        if (func_02039dec(*p) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}
}

s32 VillagerDataItemView::func_0207eb70(s32 mode, s32 type, u8 a, u8 c) {
    using namespace nM;
    s32 lo = 0, hi = 0;
    s32 r;
    if (func_0207ef34(&lo, &hi, mode, type, a)) {
        r = func_0207eec8(lo, hi);
        if (r == -1) {
            r = func_0207ec54(type, lo, hi);
            if (r == -1 && c) {
                r = func_0207ee5c(lo, hi);
            }
            if (r != -1) {
                func_0207ec10(unk_6ac + r);
            }
        }
        if (r != -1) {
            unk_6ac[r] = 0xfff1;
        }
        return r;
    } else {
        return -1;
    }
}

s32 VillagerDataItemView::func_0207eadc(u16 *item) {
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

BOOL VillagerDataItemView::func_0207e940(u16 *item, s32 mode, s32 type, u8 a, u8 b) {
    using namespace nM;
    s32 lo, hi;
    if (Unk_0207e940_InRange(item, 0x450c, 0x45db)) {
        if (mode == 2) {
            lo = 0;
            hi = 0;
            if (func_0207ef34(&lo, &hi, mode, type, a)) {
                s32 range = hi - lo;
                s32 idx = func_0207eadc(item);
                s32 slot = 0;
                if (idx >= 0) {
                    slot = lo + idx % range;
                }
                if (isValidFurnitureIndex(slot)) {
                    u16 *p = unk_6ac + slot;
                    if (*p == 0xfff1) {
                        *p = *item;
                        return TRUE;
                    }
                    BOOL occupied = func_0207ecd4(p, type);
                    if (b) {
                        void *v10;
                        void *v14;
                        Villager_GetPlan(this);
                        v10 = func_0209a60c();
                        v14 = func_0209a940();
                        Item_GetPrice(item);
                        Item_GetPrice(p);
                        if (type == 2) {
                            s32 lim = 0x18;
                            if (_ZN12Unk_0209ada413func_0209ad68Ev(v14) != 0 && _ZN12Unk_0209ada413func_0209ac64Ev(v14) == 2 &&
                                func_0209a938(v10) >= 2 && func_0209a8e0(v10) < 0x18) {
                                lim = func_0209a8e0(v10);
                            }
                            if (lim < 0x18) {
                                if (lim == Item_GetFossilGroup(item)) {
                                    func_0207ec10(p);
                                    *p = *item;
                                    return TRUE;
                                } else if (occupied) {
                                    if (lim == Item_GetFossilGroup(p)) {
                                        func_0207ec10(item);
                                        goto fail;
                                    } else {
                                        func_0207ec10(p);
                                        *p = *item;
                                        return TRUE;
                                    }
                                } else {
                                    func_0207ec10(p);
                                    *p = *item;
                                    return TRUE;
                                }
                            } else {
                                func_0207ec10(p);
                                *p = *item;
                                return TRUE;
                            }
                        } else {
                            func_0207ec10(p);
                            *p = *item;
                            return TRUE;
                        }
                    } else {
                        if (occupied) {
                            func_0207ec10(item);
                            goto fail;
                        } else {
                            func_0207ec10(p);
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
extern "C" BOOL func_0207e80c(Unk_0207e268 *a, u16 *b) {
    u16 v[1];
    if (*b != 0xfff1) {
        void *r6;
        s32 r7, s8, n, f;
        Item_ToPlacedForm(v, b, 1);
        r6 = func_0209a610(Villager_GetPlan(a));
        r7 = _ZN12Unk_0209b3bc13func_0209b354Ev(r6);
        s8 = _ZN12Unk_0209b3bc13func_0209b2e4Ev(r6);
        if (Item_IsFurniture(v) != 0) {
            s32 r6 = _ZN20VillagerDataItemView13func_0207ecd4EPti(a, b, r7);
            n = Ftr_GetUnk05(v);
            f = 0;
            if (*b >= 0x450c && *b <= 0x45db) f = 1;
            if (f != 0 && n == 2) {
                return _ZN20VillagerDataItemView13func_0207e940EPtiihh(a, b, n, r7, s8, r6);
            }
            r6 = _ZN20VillagerDataItemView13func_0207eb70Eiihh(a, n, r7, s8, r6);
            if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r6) != 0) {
                a->unk_6ac[r6] = *b;
                return TRUE;
            }
            func_0207ec10(b);
        } else {
            f = 0;
            if (*b >= 0x1100 && *b <= 0x1143) f = 1;
            if (f != 0) {
                func_0207e394(a, (u8)((*b >= 0x1100 && *b <= 0x1143) ? *b - 0x1100 : -1));
            } else if (*b >= 0x1144 && *b <= 0x1187) {
                func_0207e388(a, (u8)((*b >= 0x1144 && *b <= 0x1187) ? *b - 0x1144 : -1));
            }
        }
    }
    return FALSE;
}
}

namespace nL {
extern "C" s32 func_0207e7a8(Unk_0207e268 *a, u16 *b) {
    u16 *p = a->unk_6ac;
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
extern "C" s32 func_0207e77c(Unk_0207e268 *a) {
    u16 *p = a->unk_6ac;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (*p != 0xfff1) cnt++;
    }
    return cnt;
}
}

namespace nL {
extern "C" void func_0207e684(Unk_0207e268 *a) {
    s32 cnt, r6, i;
    s32 s8, sc;
    s32 x, y;
    Unk_0207e684_Tbl tbl;
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (func_0207e77c(a) >= 7) {
            if (func_02063b8c(2) == 0) {
                void *r4 = func_0209a610(Villager_GetPlan(a));
                s8 = _ZN12Unk_0209b3bc13func_0209b354Ev(r4);
                sc = _ZN12Unk_0209b3bc13func_0209b2e4Ev(r4);
                tbl = *(Unk_0207e684_Tbl *)data_020e05ac;
                s32 *p = tbl.v;
                cnt = 0;
                x = 0;
                y = 0;
                for (r6 = 0; r6 < 3; r6++) {
                    if (_ZN20VillagerDataItemView13func_0207ef34EPiS0_iih(a, &x, &y, r6, s8, sc) != 0) {
                        p[r6] = _ZN20VillagerDataItemView13func_0207ec54Eiii(a, s8, x, y);
                        if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, p[r6]) != 0) cnt++;
                    }
                }
                if (cnt > 0) {
                    r6 = func_02063b8c(cnt);
                    if (r6 < 3) {
                        for (i = 0; i < 3; i++) {
                            s32 r7 = tbl.v[i];
                            if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r7) != 0) {
                                if (r6 == 0) {
                                    u16 *q = (u16 *)((u8 *)a + 0x6ac) + r7;
                                    if (*q != 0xfff1) func_0207ec38(q);
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
extern "C" void func_0207e668(Unk_0207e268 *a) {
    u16 *p = &a->unk_6ac[1];
    s32 i;
    for (i = 0; i < 2; p++, i++) *p = 0xfff1;
}
}

namespace nL {
extern "C" void func_0207e630(u16 *out, void *a, u16 *in) {
    *out = 0xfff1;
    if (Item_IsFurniture(in) != 0) {
        s32 r = Ftr_GetUnk05(in);
        if (r < 3) *out = data_020cbfb0[r];
    }
}
}

namespace nL {
extern "C" void func_0207e568(Unk_0207e268 *a, u16 *b) {
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
            idx = _ZN20VillagerDataItemView13func_0207eff8EPt(a, b);
            _ZN20VillagerDataItemView14getFurnitureAtEi(&y, a, idx);
            x = y;
            if (r7) {
                if (Item_IsFurniture(&x)) {
                    if (Villager_IsFurnitureShown(a, idx)) {
                        func_0207e630(&z, a, &x);
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
extern "C" void func_0207e4f4(Unk_0207e268 *a) {
    if (gCommManager->isSlotActive(gCommManager->unk_64) == 0) {
        if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
            u16 *r4 = func_0207d074(a, 0);
            BOOL r6 = FALSE;
            s32 i = 0;
            do {
                if (func_0207e80c(a, r4) != 0) r6 = TRUE;
                r4++; i++;
            } while (i < 4);
            func_0207d08c(a);
            if (r6 != 0) {
                func_02052648(func_0207e334(a));
            }
            func_0209a9bc(func_0209a60c(Villager_GetPlan(a)));
        }
    }
}
}

namespace nL {
extern "C" void func_0207e4b4(Unk_0207e268 *a, s32 b, s32 c) {
    if (b == 2) {
        a->unk_6f2 = func_02063b8c(10);
        func_0207e668(a);
    } else {
        a->unk_6f2 = func_02063b8c(0x28);
        if (c != 0) func_0207e668(a);
    }
}
}

namespace nL {
extern "C" s32 func_0207e440(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    if (c != 0) {
        u32 y = b[1];
        u32 x = b[0];
        if (x < 16 && y < 16) {
            s32 i;
            u8 *e = c;
            for (i = 0; i < d; e += 4, i++) {
                if (b[0] == e[2] && b[1] == e[3]) {
                    u16 code = *(u16 *)e;
                    if (Unk_0207e440_InRange(&code)) return _ZN20VillagerDataItemView13func_0207eff8EPt(a, &code);
                }
            }
        }
    }
    return -1;
}
}

namespace nL {
extern "C" BOOL func_0207e400(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    s32 r4 = func_0207e440(a, b, c, d);
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r4) != 0) {
        a->unk_6ac[r4] = 0xfff1;
        Villager_HideFurniture(a, r4);
        return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL func_0207e3b8(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    s32 r4 = func_0207e440(a, b, c, d);
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(a, r4) != 0) {
        if (a->unk_6ac[r4] != 0xfff1) {
            if (Villager_IsFurnitureShown(a, r4) != 0) return TRUE;
        }
    }
    return FALSE;
}
}

namespace nL {
extern "C" u32 func_0207e3ac(Unk_0207e268 *a) { return a->unk_6ee; }
}

namespace nL {
extern "C" u32 func_0207e3a0(Unk_0207e268 *a) { return a->unk_6ef; }
}

namespace nL {
extern "C" void func_0207e394(Unk_0207e268 *a, u8 b) { a->unk_6ee = b; }
}

namespace nL {
extern "C" void func_0207e388(Unk_0207e268 *a, u8 b) { a->unk_6ef = b; }
}

namespace nL {
extern "C" u32 func_0207e364() {
    void *u;
    u8 *p = VillagerInfo_Get(VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(u)));
    if (p != 0) return p[0x4d];
    return 0;
}
}

namespace nL {
extern "C" s32 func_0207e33c(Unk_0207e268 *a) {
    u32 g = (u32)data_021dfd8c;
    s32 r = -1;
    if (g != 0) {
        r = SaveVillagers_FindIndex((void *)g, _ZN12VillagerData13getVillagerIdEv(a));
    }
    return r;
}
}

namespace nL {
extern "C" s32 func_0207e334(Unk_0207e268 *a) { return func_0207e33c(a); }
}

namespace nL {
extern "C" s32 func_0207e310(Unk_0207e268 *a) {
    s32 r4 = func_020783f8();
    return func_020783d8(r4, func_0207e33c(a));
}
}

namespace nL {
extern "C" s32 func_0207e278(Unk_0207e268 *a) {
    s32 r4 = 0;
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        r4 = func_0207e310(a);
        if (gCommManager->isSlotActive(gCommManager->unk_64) != 0) {
            if (func_02078580(r4) == 2) r4 = 2;
            else r4 = 1;
        } else {
            switch (func_020785ec(r4)) {
            case 0:
                if (func_02078580(r4) == 2) r4 = 2;
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
extern "C" void *Villager_GetPlan(Unk_0207e268 *a) { return a->unk_65c; }
}

namespace nL {
extern "C" s32 Villager_GetTrend(Unk_0207e268 *a, s32 b) {
    if ((u32)_ZN12Unk_0209b3bc13func_0209b328Ev(func_0209a610(a->unk_65c)) <= 1) {
        _ZN12Unk_0209b3bc13func_0209b014Ei(b, _ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(a->unk_65c)));
    } else {
        _ZN12Unk_0209b3bc13func_0209b014Ei(b, 7);
    }
}
}

namespace nL {
extern "C" s32 Villager_GetResidentStatus(Unk_0207e268 *a) {
    if (Villager_IsMovingOut(a) != 0) return 0;
    if (func_0207e190(a) != 0) return 1;
    if (Villager_IsJustMovedIn(a) != 0) return 2;
    return 3;
}
}

namespace nL {
extern "C" BOOL Villager_IsMovingOut(Unk_0207e268 *a) {
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(Villager_GetPlan(a))) == 9) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL func_0207e190(Unk_0207e268 *a) {
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(Villager_GetPlan(a))) == 0xa) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL Villager_IsJustMovedIn(Unk_0207e268 *a) {
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(Villager_GetPlan(a))) == 0xb) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL func_0207e114(Unk_0207e268 *a) {
    void *r4 = _ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent());
    if (_ZN12VillagerData13getVillagerIdEv(a)->isValid() != 0) {
        if (Villager_GetResidentStatus(a) == 3) {
            if (func_0207e278(a) != 2) {
                if (func_0207dff4(a, r4) == 0) return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace nL {
extern "C" BOOL func_0207dff4(Unk_0207e268 *a, void *b) {
    VillagerId *r4 = _ZN12VillagerData13getVillagerIdEv(a);
    if (r4->isValid() != 0) {
        void *r7 = func_02099db4(b, 0);
        void *s0 = func_02099db4(b, 1);
        void *s4 = b;
        VillagerId *r5;
        s4 = (u8 *)b + 0x88;
        if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a4f0(r7)) != 0) {
            if (((r5 = (VillagerId *)(func_0209a4e4(r7, 0))), (r5->unk_00 == r4->unk_00 && memcmp(r5->unk_02, r4->unk_02, 8) == 0 && r5->unk_0b == r4->unk_0b)) || ((r5 = (VillagerId *)(func_0209a4e4(r7, 1))), (r5->unk_00 == r4->unk_00 && memcmp(r5->unk_02, r4->unk_02, 8) == 0 && r5->unk_0b == r4->unk_0b))) return TRUE;
        }
        if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a4f0(s0)) != 0) {
            if (((r5 = (VillagerId *)(func_0209a4e4(s0, 0))), (r5->unk_00 == r4->unk_00 && memcmp(r5->unk_02, r4->unk_02, 8) == 0 && r5->unk_0b == r4->unk_0b)) || ((r5 = (VillagerId *)(func_0209a4e4(s0, 1))), (r5->unk_00 == r4->unk_00 && memcmp(r5->unk_02, r4->unk_02, 8) == 0 && r5->unk_0b == r4->unk_0b))) return TRUE;
        }
        if (func_02099868(b, r4) != 0) return TRUE;
        if (func_02099ed4(s4, r4) != 0) return TRUE;
    }
    return FALSE;
}
}

namespace nL {
extern "C" u32 func_0207dfe8(Unk_0207e268 *a) { return a->unk_6f0; }
}

namespace nL {
extern "C" void func_0207dfdc(Unk_0207e268 *a, u32 b) { a->unk_6f0 = b; }
}

namespace nL {
extern "C" void Villager_GetFriendName(void *a, u32 b) {
    void *r = SaveVillagers_FindFriendOf(data_021dfd8c, a);
    if (r != 0) {
        if (_ZN12VillagerData13getVillagerIdEv(r)->isValid() != 0) {
            _ZN12VillagerData13getVillagerIdEv(r)->getName(b);
        }
    }
}
}

namespace nK {
extern "C" void Villager_GetEnemyName(u32 a, u32 b) {
    void *r = SaveVillagers_FindEnemyOf(data_021dfd8c, a);
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
    void *r = SaveVillagers_PickRandomExcept(data_021dfd8c, &v, 1);
    if (r) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r))) {
            _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(r), b);
        }
    }
}
}

namespace nK {
extern "C" s32 func_0207df10(u32 a, u32 b, u32 c) { return func_02098778(a, b, c); }
}

namespace nK {
extern "C" s32 func_0207de6c(void) {
    void *tb = func_020947f0(4);
    if (Unk_0207dd24_IsZero(*data_020e416c) && tb) {
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
extern "C" s32 func_0207dd24(void) {
    void *tb = func_020947f0(4);
    if (Unk_0207dd24_IsZero(*data_020e416c) && tb) {
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
extern "C" BOOL func_0207dd08(void) {
    BOOL r = FALSE;
    if (SaveVillagers_Count(data_021dfd8c) <= 4) r = TRUE;
    return r;
}
}

namespace nK {
extern "C" BOOL func_0207dcf0(u32 a) {
    if (func_02079fd8(a) != 0xb) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207dce4(s32 a, s32 b, s32 c) {
    if (c == 1) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207dcd4(s32 a, s32 b, s32 c) {
    if (c == 2 || c == 4) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207dc98(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1376, 0x1376)) {
        if (*p < 0x1377 || *p > 0x1377) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL func_0207dc58(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x136b, 0x1372)) {
        if (*p < 0x1373 || *p > 0x1373) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL func_0207dc1c(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1374, 0x1374)) {
        if (*p < 0x1375 || *p > 0x1375) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL func_0207dbe0(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1378, 0x1378)) {
        if (*p < 0x1379 || *p > 0x1379) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL func_0207db94(u32 a) {
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
extern "C" BOOL func_0207db48(u32 a) {
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
extern "C" BOOL func_0207dafc(u32 a) {
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
extern "C" BOOL func_0207dab0(u32 a) {
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
extern "C" BOOL func_0207da64(u32 a) {
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
extern "C" BOOL func_0207da18(u32 a) {
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
extern "C" BOOL func_0207d9cc(u32 a) {
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
extern "C" BOOL func_0207d980(u32 a) {
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
extern "C" BOOL func_0207d934(u32 a) {
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
extern "C" BOOL func_0207d8e8(u32 a) {
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
extern "C" BOOL func_0207d89c(u32 a) {
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
extern "C" BOOL func_0207d820(u32 a) {
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
extern "C" BOOL func_0207d7d8(u32 a) {
    u16 *p = _ZN10PlayerData11getHeldItemEv(a);
    BOOL k = TRUE;
    if (!Unk_0207d774_R(p, 0x1380, 0x139f)) {
        if (*p < 0x13a0 || *p > 0x13a7) k = FALSE;
    }
    return k;
}
}

namespace nK {
extern "C" BOOL func_0207d7c0(void) {
    if (func_020b8fe8() == 1) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d7a8(void) {
    if (func_020b8fe8() == 2) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d774(u32 a) {
    BOOL r = Unk_0207d774_R(_ZN10PlayerData8getShirtEv(a), 0x12a8, 0x12af);
    if (r) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d75c(void) {
    if (Clock_GetTimeOfDay() == 0) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d744(void) {
    if (Clock_GetTimeOfDay() == 3) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d724(void) {
    s32 t = _ZN15PlayerInventory15findEmptyPocketEv(_ZN10PlayerData13func_02098750Ev());
    BOOL r = FALSE;
    s32 m = -1;
    if (t == m) r = TRUE;
    return r;
}
}

namespace nK {
extern "C" BOOL func_0207d714(s32 a, s32 b) {
    if (b <= -0x50) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d704(s32 a, s32 b) {
    if (b <= -0x1e) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d6f4(s32 a, s32 b) {
    if (b >= 0x46 && b < 0x6e) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d6e8(s32 a, s32 b) {
    if (b >= 0x6e) return TRUE;
    return FALSE;
}
}

namespace nK {
extern "C" BOOL func_0207d6ac(s32 a, s32 b, s32 c) {
    if (func_0207d6a4() == 0) {
        if (func_0207d674(a, b, c) == 0) {
            s32 h = (u32)func_0203c314() >> 1;
            if (func_0203c2f4() >= h) return TRUE;
            return FALSE;
        }
    }
    return FALSE;
}
}

namespace nK {
extern "C" s32 func_0207d6a4(void) { return func_0203c31c(); }
}

namespace nK {
extern "C" BOOL func_0207d67c(void) {
    if (Unk_0207d67c_Ns::func_0207d674() == 0) {
        s32 h = (u32)func_0203c318() >> 1;
        if (func_0203c304() >= h) return TRUE;
        return FALSE;
    }
    return FALSE;
}
}

namespace nK {
extern "C" s32 func_0207d674(s32 a, s32 b, s32 c) { return func_0203c338(a, b, c); }
}

namespace nJ {
extern "C" BOOL func_0207d650() {
    if (_ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(), 1) <= 300) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d62c() {
    if (_ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(), 1) <= 1000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d5fc() {
    s32 v = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(), 1);
    if (v >= 10000 && v < 20000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d5cc() {
    s32 v = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(), 1);
    if (v >= 20000 && v < 40000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d59c() {
    s32 v = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(), 1);
    if (v >= 40000 && v < 60000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d578() {
    if (_ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(), 1) >= 60000) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d4f8(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (func_0207d38c(a, b, c) || func_0207d368(a, b, c) || func_0207d2fc(a, b, c) || func_0207d2d8(a, b, c) ||
            func_0207d290(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL func_0207d494(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (func_0207d344(a, b, c) || func_0207d320(a, b, c) || func_0207d2b4(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL func_0207d430(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (func_0207d344(a, b, c) || func_0207d2fc(a, b, c) || func_0207d2b4(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL func_0207d3b0(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(_ZN10PlayerData11getFaceItemEv(), 0x1431, 0x1470)) {
        if (func_0207d38c(a, b, c) || func_0207d368(a, b, c) || func_0207d320(a, b, c) || func_0207d2d8(a, b, c) ||
            func_0207d290(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace nJ {
extern "C" BOOL func_0207d38c(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 0 || _ZN10PlayerData12getHairStyleEv(a) == 8) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d368(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 1 || _ZN10PlayerData12getHairStyleEv(a) == 9) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d344(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 2 || _ZN10PlayerData12getHairStyleEv(a) == 10) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d320(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 3 || _ZN10PlayerData12getHairStyleEv(a) == 11) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d2fc(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 4 || _ZN10PlayerData12getHairStyleEv(a) == 12) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d2d8(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 5 || _ZN10PlayerData12getHairStyleEv(a) == 13) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d2b4(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 6 || _ZN10PlayerData12getHairStyleEv(a) == 14) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d290(u32 a, u32 b, u32 c) {                                                     if (_ZN10PlayerData12getHairStyleEv(a) == 7 || _ZN10PlayerData12getHairStyleEv(a) == 15) {                              return TRUE;                                                                 }                                                                                return FALSE;                                                                }
}

namespace nJ {
extern "C" BOOL func_0207d264() {
    if (_ZN6TownId13func_02094058Ev(_ZN10PlayerData11getPlayerIdEv()) == 0 && func_020978a4(data_021d735c) == 4) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d238() {
    if (_ZN6TownId13func_02094058Ev(_ZN10PlayerData11getPlayerIdEv()) == 0 && func_020978a4(data_021d735c) >= 2) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" BOOL func_0207d20c() {
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
extern "C" BOOL func_0207d1e4() {
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
extern "C" BOOL func_0207d1bc() {
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
extern "C" BOOL func_0207d1b8() {
    return TRUE;
}
}

namespace nJ {
extern "C" u32 func_0207d164(u32 a, u32 b, u32 c) {
    s32 t = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv());
    Unk_0207d164_Entry *e = data_020cc148;
    u32 ret = 0x58;
    s32 i;
    for (i = 0; i < 0x58; e++, i++) {
        if (e->unk_0 == 2 || e->unk_0 == t) {
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
extern "C" u32 func_0207d0f4(void *self, s32 r, s32 p) {
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
            ret = func_0207d164(p, ret, func_0207856c(func_0207e310(self)));
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
extern "C" void func_0207d08c(Unk_0207cd94 *self) {
    u16 *p = self->unk_6cc;
    s32 i;
    for (i = 0; i < 4; p++, i++) {
        *p = 0xfff1;
    }
}
}

namespace nJ {
extern "C" u16 *func_0207d074(Unk_0207cd94 *self, u32 idx) {
    if (idx < 4) {
        return &self->unk_6cc[idx];
    }
    return NULL;
}
}

namespace nJ {
extern "C" void func_0207d028(Unk_0207cd94 *self) {
    s32 i;
    s32 j;
    for (i = 0; i < 3; i++) {
        if (self->unk_6cc[i] == 0xfff1) {
            for (j = i + 1; j < 4; j++) {
                if (self->unk_6cc[j] != 0xfff1) {
                    self->unk_6cc[i] = self->unk_6cc[j];
                    self->unk_6cc[j] = 0xfff1;
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
extern "C" void func_0207cfb8(Unk_0207cd94 *self, u16 *val) {
    u16 tmp;
    s32 idx;
    func_0207d028(self);
    tmp = 0xfff1;
    idx = func_0207cf54(self, &tmp);
    if (idx != -1) {
        self->unk_6cc[idx] = *val;
    } else {
        s32 i = 0;
        s32 n;
        do {
            n = i + 1;
            self->unk_6cc[i] = self->unk_6cc[n];
            i = n;
        } while (n < 3);
        self->unk_6cc[3] = *val;
    }
    func_02077380(self, func_0207d074(self, 0));
}
}

namespace nJ {
extern "C" s32 func_0207cf54(Unk_0207cd94 *self, u16 *key) {
    u16 *p = func_0207d074(self, 0);
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
extern "C" BOOL func_0207cf10(Unk_0207cd94 *self, u16 *key) {
    s32 idx = func_0207cf54(self, key);
    if (idx != -1) {
        self->unk_6cc[idx] = 0xfff1;
        func_0207d028(self);
        func_02077380(self, func_0207d074(self, 0));
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" void func_0207ceb4(u16 *out, Unk_0207cd94 *self) {
    u16 *p;
    s32 cnt;
    s32 i;
    *out = 0xfff1;
    p = func_0207d074(self, 0);
    cnt = 0;
    for (i = 0; i < 4; i++) {
        if (p[i] != 0xfff1) {
            cnt++;
        }
    }
    if (cnt > 0) {
        cnt = func_02063b8c(cnt);
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
extern "C" void func_0207ce70(u16 *out, Unk_0207cd94 *self) {
    u16 *p;
    s32 best;
    s32 i;
    *out = 0xfff1;
    p = func_0207d074(self, 0);
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
extern "C" BOOL func_0207ce24(void *self) {
    s32 a = *(s8 *)(func_020783f8() + 0x160);
    s32 b = SaveVillagers_FindIndex(data_021dfd8c, _ZN12VillagerData13getVillagerIdEv(self));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) && a != -1 && b == a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" void func_0207ce00(void *self) {
    if (func_0207ce24(self)) {
        *(s8 *)(func_020783f8() + 0x160) = -1;
    }
}
}

namespace nJ {
extern "C" BOOL func_0207cdbc(void *self) {
    s32 a = *(s8 *)(func_020783f8() + 0x161);
    s32 b = SaveVillagers_FindIndex(data_021dfd8c, _ZN12VillagerData13getVillagerIdEv(self));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) && b == a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nJ {
extern "C" u32 func_0207cdb0(Unk_0207cd94 *self) {
    return self->unk_6f1;
}
}

namespace nJ {
extern "C" void func_0207cd94(Unk_0207cd94 *self) {
    self->unk_6f1++;
    if (self->unk_6f1 >= 6) {
        self->unk_6f1 = 0;
    }
}
}

namespace nJ {
extern "C" BOOL func_0207cd48(u32 a) {
    u8 *g = data_021d735c;
    s32 i;
    for (i = 0; i < 4; i++) {
        s32 t = PlayerData_GetResident(g, i);
        if (_ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv())) {
            if (func_0207dff4(a, _ZN10PlayerData13func_0209865cEv(t))) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}

namespace nI {
extern "C" void func_0207ccd0(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        Unk_0207ccd0_Rec *r4 = (Unk_0207ccd0_Rec *)func_0209a610(Villager_GetPlan(a));
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(r4) == 2 || (_ZN12Unk_0209b3bc13func_0209b354Ev(r4) == 8 && _ZN12Unk_0209b3bc13func_0209b2e4Ev(r4) != 0)) {
            r4->unk_21_0 = 1;
        }
        _ZN12Unk_0209b3bc13func_0209b350Ej(r4, 9);
        MI_CpuCopy8(b, func_0209b010(r4), 8);
        func_0209ab18(func_0209a60c(Villager_GetPlan(a)));
    }
}
}

namespace nI {
extern "C" void func_0207cc88(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        void *r6 = func_0209a610(Villager_GetPlan(a));
        _ZN12Unk_0209b3bc13func_0209b350Ej(r6, 10);
        MI_CpuCopy8(b, func_0209b010(r6), 8);
        func_0209ab18(func_0209a60c(Villager_GetPlan(a)));
    }
}
}

namespace nI {
extern "C" s32 func_0207cbe8(void *a, void *b) {
    void *r5 = _ZN12VillagerData13getVillagerIdEv(a);
    u8 *r4 = (u8 *)func_0209a610(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(r5) && _ZN12Unk_0209b3bc13func_0209b394Ev(r4)) {
        u8 *r5b = (u8 *)func_020812e0(VillagerId_GetPersonality(r5));
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
extern "C" void func_0207cb94(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(b))) {
        void *r6 = Villager_GetInfo3a(a);
        if (r6) {
            void *r4 = func_0209a610(Villager_GetPlan(a));
            _ZN12Unk_0209b3bc13func_0209aed4EPS_Ps(r4, func_0209a610(Villager_GetPlan(b)), r6);
        }
    }
}
}

namespace nI {
extern "C" void func_0207cb68(void *a, void *b, void *c) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) _ZN12Unk_0209b3bc13func_0209af0cEhi(func_0209a610(Villager_GetPlan(a)), (s32)b, (s32)c);
}
}

namespace nI {
extern "C" void func_0207ca74(void *a, void *b) {
    void *r5 = func_0209a610(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN12Unk_0209b3bc13func_0209b394Ev(r5) && _ZN12Unk_0209b3bc13func_0209b3a4Ev(r5)) {
        void *r6 = func_0209b00c(r5);
        void *r7 = Villager_GetInfo3a(a);
        s32 r4;
        s32 cnt;
        u32 tmp[2];
        if (DateTime_IsInvalid(r6) == 0 && r7 != 0) {
            s32 d = DateTime_DiffMinutes(r6, b);
            if (d < 0) d = -d;
            cnt = d / 0x5a0;
            if (cnt > 0) {
                if (_ZN12Unk_0209b3bc13func_0209b1e4EPv(r5, (s32)b)) {
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
                        if (_ZN12Unk_0209b3bc13func_0209af4cEPs(r5, r7) == 0) break;
                        r4--;
                    }
                    _ZN12Unk_0209b3bc13func_0209afa4EPs(r5, r7);
                }
                DateTime_AddDays(r6, cnt);
            }
        }
    }
}
}

namespace nI {
extern "C" void func_0207ca18(void *a, void *b) {
    void *r4 = func_0209a610(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN12Unk_0209b3bc13func_0209b394Ev(r4)) {
        r4 = func_0209b010(r4);
        if (DateTime_IsInvalid(r4) != 0 || DateTime_Compare(b, r4, 0x3f) == -1) MI_CpuCopy8(b, r4, 8);
    }
}
}

namespace nI {
extern "C" void func_0207c9bc(void *a, void *b) {
    void *r4 = func_0209a610(Villager_GetPlan(a));
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN12Unk_0209b3bc13func_0209b394Ev(r4)) {
        r4 = func_0209b00c(r4);
        if (DateTime_IsInvalid(r4) != 0 || DateTime_Compare(b, r4, 0x3f) == -1) MI_CpuCopy8(b, r4, 8);
    }
}
}

namespace nI {
extern "C" s32 func_0207c8e0(void *a, void *b) {
    void *r8 = _ZN12VillagerData13getVillagerIdEv(a);
    void *r6 = func_0209a610(Villager_GetPlan(a));
    s32 r4 = 12;
    s32 r7 = _ZN12Unk_0209b3bc13func_0209b354Ev(r6);
    s32 t;
    if (_ZN10VillagerId7isValidEv(r8) && _ZN12Unk_0209b3bc13func_0209b394Ev(r6)) {
        t = _ZN12Unk_0209b3bc13func_0209b2e4Ev(r6);
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(r6) == 8) {
            if (func_0207cbe8(a, b)) r4 = _ZN12Unk_0209b3bc13func_0209b12cEv(r6);
        } else {
            func_0207ca74(a, b);
            r4 = _ZN12Unk_0209b3bc13func_0209b18cEv(r6);
        }
        if (r4 != 12) {
            if (func_0209b3b0(r7) == 0 || r7 != r4) {
                func_0209ab18(func_0209a60c(Villager_GetPlan(a)));
                void *r6b = func_02078578(func_0207e310(a));
                _ZN12Unk_0209ada413func_0209ad80Ev(r6b);
                if (func_0209b334(r4) == 0) {
                    u16 v = 0xfff1;
                    _ZN12Unk_0209ada413func_0209ad54EhPth(r6b, r4, &v, 0);
                }
                if (func_0209b3b0(r4)) func_0207e4b4(a, r4, t);
            }
        }
    }
    return r4;
}
}

namespace nI {
extern "C" s32 func_0207c828(void *a, void *b, void *c, void *d) {
    void *r6 = a;
    void *r5 = d;
    void *r8 = _ZN12VillagerData13getVillagerIdEv(a);
    void *r7 = func_0209a610(Villager_GetPlan(a));
    s32 r4 = 12;
    s32 t = _ZN12Unk_0209b3bc13func_0209b2e4Ev(r7);
    if (_ZN10VillagerId7isValidEv(r8) && _ZN12Unk_0209b3bc13func_0209b394Ev(r7)) {
        switch (_ZN12Unk_0209b3bc13func_0209b354Ev(r7)) {
        case 11:
            r4 = _ZN12Unk_0209b3bc13func_0209b0c4EPS_(r7, r5);
            if (r4 != 12) func_0207e4b4(r6, r4, t);
            if (r4 != 12) {
                MI_CpuCopy8(r5, b, 8);
                if (*(long long *)c != 0) MI_CpuCopy8(r5, c, 8);
            }
            break;
        case 10:
            r4 = _ZN12Unk_0209b3bc13func_0209b044EPv(r7, r5);
            if (r4 != 12) func_0207e4b4(r6, r4, t);
            break;
        default:
            r4 = func_0207c8e0(r6, r5);
            break;
        }
    }
    return r4;
}
}

namespace nI {
extern "C" void func_0207c7bc(void *a) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        void *r6 = Villager_GetPlan(a);
        void *r7 = func_0209a60c(r6);
        void *r4 = func_0209a940();
        if (_ZN12Unk_0209ada413func_0209ad68Ev(r4)) {
            if (_ZN12Unk_0209ada413func_0209ad28Ev(r4) == 0) {
                if (_ZN12Unk_0209ada413func_0209abc4Ev(r4) == 3) {
                    if (_ZN12Unk_0209ada413func_0209ac64Ev(r4) == 4) func_0207cd94(a);
                    func_0209ab18(r7);
                    _ZN12Unk_0209b3bc13func_0209b294Ev(func_0209a610(r6));
                }
            }
        }
    }
}
}

namespace nI {
extern "C" s32 func_0207c764(void *a) {
    u16 *r5 = (u16 *)_ZN12VillagerData13getVillagerIdEv(a);
    s32 r = FALSE;
    if (_ZN10VillagerId7isValidEv(r5) && Villager_GetResidentStatus(a) == 3) {
        SaveVillagers_GetUnk3830(data_021dfd8c);
        u16 *r4 = (u16 *)_ZN12Unk_020994cc13func_02099788Ev();
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
    u16 *q = p->unk_6ac;
    u32 mask = 0;
    s32 cnt = 0;
    s32 i;
    s32 n, t;
    p->unk_6ea = 0;
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
    if (n > 3) n = func_02063b8c(n - 2) + 3;
    if (cnt > 0) {
        for (; n > 0; n--) {
            s32 r = Random_PickSetBit(mask, cnt, 10);
            if (r != -1) {
                p->unk_6ea |= 1 << r;
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
        if ((p->unk_6ea >> n) & 1) return TRUE;
    }
    return FALSE;
}
}

namespace nI {
extern "C" void Villager_HideFurniture(Unk_0207c67c *p, s32 n) {
    if (_ZN20VillagerDataItemView21isValidFurnitureIndexEi(p)) p->unk_6ea &= ~(1 << n);
}
}

namespace nI {
extern "C" void func_0207c65c(u8 *p) {
    s32 i;
    for (i = 0; i < 8; p += 0x68, i++) _ZN14VillagerMemory13func_02080a88Ev(p);
}
}

namespace nI {
extern "C" s32 func_0207c618(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        u32 v[2];
        v[0] = 0;
        v[1] = 0;
        if (b == 0) {
            Clock_GetDateTime(v);
            b = v;
        }
        return func_02081288(VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(a)), b);
    }
    return 0;
}
}

namespace nI {
extern "C" void func_0207c5e0(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a)) && _ZN8PlayerId13func_02094218Ev(b) && Villager_FindMemory(a, b)) _ZN14VillagerMemory13func_02080978Ev();
}
}

namespace nI {
extern "C" s32 func_0207c55c(void *a, void *b) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(a))) {
        u8 *tbl = data_021d7352;
        if (b == 0) b = PlayerData_GetCurrent();
        if (b != 0 && (u32)tbl != 0) {
            void *r6;
            if (_ZN8PlayerId13func_02094218Ev(r6 = _ZN10PlayerData11getPlayerIdEv(b)) && _ZN6TownId13func_02094058Ev(r6) == 1) {
                r6 = Villager_FindMemory(a, r6);
                if (r6 != 0) {
                    b = _ZN12Unk_02097ff413func_0209817cEv(b);
                    a = _ZN12VillagerData13getVillagerIdEv(a);
                    return _ZN12Unk_02098d2013func_02098d20EPviS0_(b, a, _ZN14VillagerMemory13getFriendshipEv(r6), tbl);
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
    if (_ZN8PlayerId13func_02094218Ev(d) && _ZN10VillagerId7isValidEv(e)) {
        _ZN6LetterC1Ev(obj);
        VillagerId_GetPersonality(e);
        buf[0] = func_020966b0();
        v1 = b + func_02063b8c((u32)c);
        v2 = b + func_02063b8c((u32)c);
        v3 = b + func_02063b8c((u32)c);
        v4 = b + func_02063b8c((u32)c);
        _ZN10VillagerId12makeFileNameEPvjj(e, data_021cc95c, 0x28, a);
        buf[1] = v1;
        buf[2] = v2;
        buf[3] = v3;
        buf[4] = v4;
        func_020658a8(obj, &buf[1], &buf[2], &buf[3], &buf[4], data_021cc95c, buf, e, d, 1);
        if (f) {
            u32 v = *f;
            if (v != 0xfff1) _ZN12Unk_0206555413func_02065588Etj(obj, v, 1);
        }
        if (func_02096a50(obj, 0)) {
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
    if (_ZN8PlayerId13func_02094218Ev(c) && _ZN10VillagerId7isValidEv(d)) {
        _ZN6LetterC1Ev(obj);
        VillagerId_GetPersonality(d);
        buf[0] = func_020966b0();
        _ZN10VillagerId12makeFileNameEPvjj(d, data_021cc984, 0x28, a);
        buf[1] = b;
        func_02065920(obj, &buf[1], data_021cc984, buf, d, c, 1);
        if (e) {
            u32 v = *e;
            if (v != 0xfff1) _ZN12Unk_0206555413func_02065588Etj(obj, v, 1);
        }
        if (func_02096a50(obj, 0)) {
            _ZN6LetterD1Ev(obj);
            return TRUE;
        }
        _ZN6LetterD1Ev(obj);
    }
    return FALSE;
}
}

namespace nH {
extern "C" void func_0207c354(void *self, void *x) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = func_0207e310(self);
        q[0x1e] = 0;
        if (x == NULL) {
            x = PlayerData_GetCurrent();
        }
        if (x != NULL && _ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv(x)) && !_ZN12Unk_02097ff413func_02098044Ej(x, 1) && Villager_FindMemory(self, _ZN10PlayerData11getPlayerIdEv(x))) {
            s32 t = _ZN14VillagerMemory13getFriendshipEv();
            s32 v = ((t + 0x100) >> 7) * (func_02063b8c(10) + 1);
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
extern "C" BOOL func_0207c318(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        void *q = func_0207e310(self);
        if (q != NULL) {
            if (!func_0207856c(q) || func_0207856c(q) == 1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace nH {
extern "C" void func_0207c298(void *self, void *x) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        s32 v = 0;
        if (x == NULL) {
            x = PlayerData_GetCurrent();
        }
        if (x != NULL && _ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv(x)) && !_ZN12Unk_02097ff413func_02098044Ej(x, 1) && func_0207c318(self) && Villager_FindMemory(self, _ZN10PlayerData11getPlayerIdEv(x))) {
            s32 t = _ZN14VillagerMemory13getFriendshipEv();
            s32 k = func_02063b8c(3);
            v = ((t + 0x100) >> 7) * k;
        }
        func_0207c190(self, v);
    }
}
}

namespace nH {
extern "C" BOOL func_0207c22c(void *self, void *x) {
    BOOL r;
    BOOL ok;
    if (x == NULL) {
        x = PlayerData_GetCurrent();
    }
    r = FALSE;
    ok = FALSE;
    if (x != NULL && _ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv(x)) && !_ZN12Unk_02097ff413func_02098044Ej(x, 1) && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) && func_0207e310(self)[0x1e] == 0x20) {
        ok = TRUE;
    }
    if (ok && func_0207c318(self)) {
        r = TRUE;
    }
    return r;
}
}

namespace nH {
extern "C" void func_0207c20c(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = func_0207e310(self);
        q[0x1e] = 0;
    }
}
}

namespace nH {
extern "C" void func_0207c1e8(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = func_0207e310(self);
        q[0x1e] = q[0x1e] >> 1;
    }
}
}

namespace nH {
extern "C" void func_0207c1c8(void *self) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        func_02078510(func_0207e310(self));
    }
}
}

namespace nH {
extern "C" void func_0207c190(void *self, s32 d) {
    if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self))) {
        u8 *q = func_0207e310(self);
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
    func_02078d68(self + 0x3800);
    func_020793e0(self + 0x381c);
    _ZN12Unk_020994cc13func_02099828Ev(self + 0x3830);
    *(s32 *)(self + 0x38c4) = 0;
    *(s32 *)(self + 0x38c8) = 0;
    *(s32 *)(self + 0x38cc) = 0;
    *(s32 *)(self + 0x38d0) = 0;
    return self;
}
}

namespace nH {
extern "C" u8 *SaveVillagers_Destruct(u8 *self) {
    _ZN12Unk_020994cc13func_020997fcEv(self + 0x3830);
    func_020793dc(self + 0x381c);
    func_02078d64(self + 0x3800);
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
    func_02078d58(self + 0x3800);
    func_020793c0(self + 0x381c);
    _ZN12Unk_020994cc13func_02099790Ev(self + 0x3830);
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
    _ZN12Unk_020e1c64C1Ev(objA);
    _ZN12Unk_020e1c4cC1Ev(objB);
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
                    s32 m = Text_TrimmedLength((u8 *)t, _ZN12Unk_020e1c4c8vfunc_08Ev(objB));
                    if (m == n && Mem_Equal((u8 *)t, a1, m)) {
                        result = p;
                        break;
                    }
                }
            }
            p += 0x700;
        }
    }
    _ZN12Unk_020e1c4cD1Ev(objB);
    _ZN12Unk_020e1c64D1Ev(objA);
    return result;
}
}

namespace nH {
extern "C" void *func_0207bdf4(void *self, u32 x) {
    void *r = NULL;
    u32 c = (u8)x;
    if (func_020b51b8(c)) {
        s32 t = func_020b51e8(c);
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
        s32 k = func_02063b8c(cnt);
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
        s32 k = func_02063b8c(cnt);
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
        if (((mask >> i) & 1) == 0 && _ZN10VillagerId7isValidEv(r) && func_0207e114(p)) {
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
    if (_ZN8PlayerId13func_02094218Ev(x)) {
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
                    if (func_02063b8c(10) & 1) {
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
extern "C" void SaveVillagers_UpdateHistory(void *bits, Unk_0207b168 *p0) {
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
extern "C" s32 SaveVillagers_PickNewSpecies(Unk_0207b168 *self, u32 idx, s32 flag) {
    s32 cnt = 0;
    void *bits = self->unk_38d4;
    s32 i;
    Unk_0207b168_Slot *p;
    MI_CpuFill8(data_021cc8d4, 0, 0x14);
    for (i = 0; i < 0x96; i++) {
        if (SpeciesBits_Test(i, bits) == 0) {
            u8 *e = (u8 *)VillagerInfo_Get(i);
            u32 b = e[0x4b];
            if (b < 2) {
                if (flag == 0 || b == 0) {
                    if (e[0x4a] == idx) {
                        SpeciesBits_Set(data_021cc8d4, i);
                        cnt++;
                    }
                }
            }
        }
    }
    if (cnt > 0) {
        s32 k;
        p = self->unk_0000;
        for (k = 0; k < 8; p++, k++) {
            void *o = _ZN12VillagerData13getVillagerIdEv(p);
            if (((VillagerId *)o)->isValid() != 0) {
                u8 id = VillagerId_GetSpecies(o);
                if (SpeciesBits_Test(id, data_021cc8d4) != 0) {
                    SpeciesBits_Clear(self, data_021cc8d4, id);
                    cnt--;
                    if (cnt == 0) {
                        break;
                    }
                }
            }
        }
    }
    if (cnt > 0) {
        s32 r = func_02063b8c(cnt);
        for (i = 0; i < 0x96; i++) {
            if (SpeciesBits_Test(i, data_021cc8d4) != 0) {
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
extern "C" u32 SaveVillagers_PickRarePersonality(Unk_0207b168 *self, s32 mask) {
    Unk_0207b168_Slot *p = self->unk_0000;
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
extern "C" void SaveVillagers_InitNewTown(Unk_0207b168 *self) {
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
                _ZN12VillagerData5setupEjjjh(&self->unk_0000[i], (u8)t, 0, 0, 1);
                SpeciesBits_Set(self->unk_38d4, (u8)t);
                mask = mask | (1 << v);
            }
        }
    }
    Clock_GetDateTime(self->unk_38c4);
    func_02079230(self->unk_381c, self);
    Clock_GetDate(self->unk_38ee);
    self->unk_38ea = -1;
}
}

namespace nG {
extern "C" void func_0207b7fc(Unk_0207b168 *self, s32 x) {
    func_02078d6c(self->unk_381c, self, x);
}
}

namespace nG {
extern "C" s32 func_0207b7d4(Unk_0207b168 *self, VillagerId *o) {
    s32 t = func_02079268(self->unk_381c, SaveVillagers_FindIndex(self, o));
    s32 r = 0;
    if (t != -1) {
        r = 1;
    }
    return r;
}
}

namespace nG {
extern "C" void SaveVillagers_UpdatePlans(Unk_0207b168 *self) {
    struct {
        u32 v[2];
    } buf;
    Unk_0207b168_Slot *p = self->unk_0000;
    s32 i;
    buf.v[0] = 0;
    buf.v[1] = 0;
    Clock_GetDateTime(&buf);
    for (i = 0; i < 8; p++, i++) {
        void *o = _ZN12VillagerData13getVillagerIdEv(p);
        if (((VillagerId *)o)->isValid() != 0) {
            void *q = func_0207e310(p);
            if (func_02078580(q) == 2 && func_020785ec(q) == 0 && func_02079268(self->unk_381c, i) == -1
                && func_02081288(VillagerId_GetPersonality(o), &buf) == 0) {
                func_0207857c(q, 1);
            }
        }
    }
}
}

namespace nG {
extern "C" s32 SaveVillagers_CanMoveIn(Unk_0207b168 *self, void *p) {
    if (SaveVillagers_Count(self) < 8) {
        if (*(s64 *)self->unk_38cc == 0) {
            if (*(s64 *)self->unk_38c4 == 0 || DateTime_IsInvalid(self->unk_38c4) != 0) {
                return TRUE;
            }
            if (DateTime_Compare(p, self->unk_38c4, 0x3f) == 1) {
                if (DateTime_DiffDays(self->unk_38c4, p) >= 1) {
                    return TRUE;
                }
            }
        } else {
            if (DateTime_Compare(p, self->unk_38cc, 0x3f) == 1) {
                s32 n = DateTime_DiffDays(self->unk_38cc, p);
                if (n > 0) {
                    BOOL t;
                    if (n >= 8) {
                        t = TRUE;
                    } else if (func_02063b8c(8 - n) == 0) {
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
extern "C" s32 SaveVillagers_PickMoveInSpecies(Unk_0207b168 *self) {
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
extern "C" void SaveVillagers_TryRandomMoveIn(Unk_0207b168 *self, void *out) {
    if (SaveVillagers_CanMoveIn(self, out) != 0) {
        s32 x = SaveVillagers_FindFreeSlot(self);
        void *r7 = SaveVillagers_Get(self, x);
        if (r7 != 0) {
            s32 idx;
            _ZN12VillagerData5clearEv(r7);
            SaveVillagers_UpdateHistory(self->unk_38d4, self);
            idx = SaveVillagers_PickMoveInSpecies(self);
            if (idx != -1) {
                _ZN12VillagerData5clearEv(data_021ccb58);
                _ZN12VillagerData5setupEjjjh(data_021ccb58, (u8)idx, 1, 0, 0);
                SaveVillagers_MoveIn(self, r7, x, data_021ccb58, 1, out);
            }
        }
        MI_CpuCopy8(out, self->unk_38c4, 8);
        if (*(s64 *)self->unk_38cc != 0) {
            MI_CpuCopy8(out, self->unk_38cc, 8);
        }
    }
}
}

namespace nG {
extern "C" void *SaveVillagers_FindBySpecies(Unk_0207b168 *self, u32 id) {
    Unk_0207b168_Slot *p = self->unk_0000;
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
extern "C" void SaveVillagers_SetLastMovedIn(Unk_0207b168 *self, s8 v) {
    self->unk_38e9 = v;
}
}

namespace nG {
extern "C" void SaveVillagers_SetLastMovedInById(Unk_0207b168 *self, VillagerId *o) {
    if (o->isValid() != 0) {
        s32 i = SaveVillagers_FindIndex(self, o);
        if (SaveVillagers_IsValidIndex(i) != 0) {
            SaveVillagers_SetLastMovedIn(self, (s8)i);
        }
    }
}
}

namespace nG {
extern "C" void SaveVillagers_MoveIn(Unk_0207b168 *self, void *a, s32 idx, void *b, u8 c, void *out) {
    func_0207af88(self);
    _ZN12VillagerData8copyFromEPv(a, b);
    func_0207cc88(a, out);
    _ZN20VillagerDataItemView13clearHousePosEv(a);
    func_0207dfdc(a, c);
    Villager_PickShownFurniture(a);
    func_0207934c(self->unk_381c, idx);
    func_02078cd8(self->unk_3800, idx);
    SpeciesBits_Set(self->unk_38d4, VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(a)));
    MI_CpuCopy8(out, self->unk_38c4, 8);
    if (*(s64 *)self->unk_38cc != 0) {
        MI_CpuCopy8(out, self->unk_38cc, 8);
    }
    SaveVillagers_SetLastMovedIn(self, (s8)idx);
}
}

namespace nG {
extern "C" void SaveVillagers_MoveOut(Unk_0207b168 *self, void *a, void *b, s32 idx, void *out) {
    _ZN20VillagerDataItemView16placeHouseMarkerEv(b);
    _ZN20VillagerDataItemView13clearHousePosEv(b);
    func_02063990(_ZN20VillagerDataItemView18getMovedFromTownIdEv(b), data_021d7352);
    self->unk_38e8 = VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(b));
    func_02079270(self->unk_381c, idx);
    func_02078cd8(self->unk_3800, idx);
    if (a != 0) {
        _ZN12VillagerData8copyFromEPv(a, b);
    }
    _ZN12VillagerData5clearEv(b);
    MI_CpuCopy8(out, self->unk_38cc, 8);
}
}

namespace nG {
extern "C" void SaveVillagers_ProcessTransfer(Unk_0207b168 *self, void *arg) {
    void *r7;
    s32 idx;
    void *r4;

    _ZN12Unk_0208f23813func_0208f148Ev(data_021e7f8c);
    r7 = func_020789a8();
    idx = SaveVillagers_FindMovingOutDue(self, arg);
    r4 = SaveVillagers_Get(self, idx);
    if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(r7))->isValid() == 0) {
        goto nomatch;
    }
    if (func_02063954(_ZN20VillagerDataItemView18getMovedFromTownIdEv(r7)) == 0) {
        goto nomatch;
    }
    {
        Unk_0207b238_Id *g = (Unk_0207b238_Id *)data_021d7352;
        Unk_0207b238_Id *h = (Unk_0207b238_Id *)_ZN20VillagerDataItemView18getMovedFromTownIdEv(r7);
        if (h->id == g->id && memcmp(h->name, g->name, 8) == 0) {
            if (r4 == 0) {
                return;
            }
            _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
            if (func_0207f3d0(r7, r4, arg) == 0) {
                SaveVillagers_MoveOut(self, r7, r4, idx, arg);
            } else {
                SaveVillagers_MoveOut(self, 0, r4, idx, arg);
            }
            return;
        }
    }
    if (SaveVillagers_FindBySpecies(self, VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(r7))) == 0
        && self->unk_38e8 != VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(r7))) {
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
        _ZN12VillagerData5clearEv(data_021ccb58);
        _ZN12VillagerData8copyFromEPv(data_021ccb58, r7);
        _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
        SaveVillagers_MoveOut(self, r7, r4, idx, arg);
        SaveVillagers_MoveIn(self, r4, idx, data_021ccb58, 2, arg);
        return;
    }
    if (r4 == 0) {
        return;
    }
    _ZN23VillagerDataProfileView25updateMemoriesFromPlayersEv(r4);
    if (func_0207f3d0(r7, r4, arg) == 0) {
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
extern "C" s32 SaveVillagers_FindMovingOut(Unk_0207b168 *self) {
    Unk_0207b168_Slot *p = self->unk_0000;
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
extern "C" s32 SaveVillagers_FindMovingOutDue(Unk_0207b168 *self, void *name) {
    s32 idx = SaveVillagers_FindMovingOut(self);
    if (SaveVillagers_Get(self, idx) != 0) {
        void *q = func_0209a610(Villager_GetPlan());
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
extern "C" BOOL func_0207b0f0(u8 *self, u8 *x) {
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
                    } else if (func_02063b8c(4 - n) == 0) {
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
extern "C" s32 func_0207b084(u8 *self) {
    u8 *p = self;
    s32 sp4 = SaveVillagers_GetUnk3830Index(self);
    u32 mask = 0;
    s32 cnt = 0;
    s32 r4 = 0;
    for (; r4 < 8; r4++) {
        if (r4 != *(s8 *)(self + 0x38e9) && r4 != sp4 && _ZN12VillagerData13getVillagerIdEv(p)->isValid() && func_0207cd48(p)) {
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
extern "C" void func_0207b04c(u8 *self, u8 *x) {
    if (func_0207b0f0(self, x)) {
        s32 r = func_0207b084(self);
        if (r != -1) {
            func_0207ccd0(self + r * 0x700, x);
        }
    }
}
}

namespace nF {
extern "C" void func_0207afe0(u8 *self, Unk_0207ae28_Buf *x) {
    u8 *p = self;
    s32 i = 0;
    do {
        if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
            func_0207ca18(p, (u8 *)x);
            func_0207c9bc(p, (u8 *)x);
            if (func_0207c828(p, self + 0x38c4, self + 0x38cc, (u8 *)x) != 0xc) {
                func_0209ab18(func_0209a60c(Villager_GetPlan(p)));
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
}
}

namespace nF {
extern "C" void func_0207af88(u8 *self) {
    u8 *p = self;
    s32 i = 0;
    s32 idx = i;
    do {
        if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
            void *r6 = func_0209a610(Villager_GetPlan(p));
            void *r7 = _ZN12Unk_0209b3bc13func_0209b2e4Ev();
            s32 r1 = _ZN12Unk_0209b3bc13func_0209b044EPv(r6, idx);
            if (r1 != 0xc) {
                func_0207e4b4(p, r1, r7);
            }
        }
        p += 0x700;
        i++;
    } while (i < 8);
}
}

namespace nF {
extern "C" void func_0207af34(u8 *self) {
    if (!gCommManager->isSlotActive(gCommManager->unk_64)) {
        Unk_0207ae28_Buf b;
        b.v[0] = 0;
        b.v[1] = 0;
        Clock_GetDateTime(&b);
        s32 i = 0;
        u8 *p = self;
        Unk_0207ae28_Buf *pb = &b;
        for (; i < 8; i++) {
            if (_ZN12VillagerData13getVillagerIdEv(p)->isValid()) {
                func_0207c8e0(p, pb);
            }
            p += 0x700;
        }
    }
}
}

namespace nF {
extern "C" void func_0207ae84(u8 *self, s32 flag) {
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
    func_0207a550(self, &b);
    func_0207afe0(self, &b);
    SaveVillagers_ProcessTransfer(self, &b);
    func_0207b04c(self, (u8 *)&b);
    SaveVillagers_TryRandomMoveIn(self, &b);
    func_0207ae28(self);
    func_0207a4c4(self, flag);
    func_0207a104(self);
    if (flag == 0) {
        func_02079bb4(self);
    }
    func_02079a0c(self);
}
}

namespace nF {
extern "C" void func_0207ae28(u8 *self) {
    Unk_0207ae28_Buf a;
    Unk_0207ae28_Buf b;
    DateTime_Make(&a, self + 0x38ee, 0, 0, 0);
    b.v[0] = 0;
    b.v[1] = 0;
    Clock_GetDateTime(&b);
    if (DateTime_Compare(&b, (u8 *)&a, 0x38)) {
        u8 *p = self;
        for (s32 i = 0; i < 8; i++) {
            func_0207e684(p);
            p += 0x700;
        }
        Clock_GetDate(self + 0x38ee);
    }
}
}

namespace nF {
extern "C" s32 func_0207adf0(Unk_0207ac60_Elem *p, s32 n, u32 k) {
    s32 i = 0;
    s32 res = -1;
    for (; i < n; p++, i++) {
        if (func_02081038(p)) {
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
extern const u32 data_020cc0a8[11];
const u32 data_020cc0a8[11] = {
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
extern const u8 data_020cc030[24];
const u8 data_020cc030[24] = {
    0x01, 0x1e, 0x08, 0x00, 0x02, 0x00, 0x06, 0x1e, 0x04, 0x1e, 0x0a, 0x00, 0x01, 0x00, 0x05, 0x00,
    0x02, 0x1e, 0x07, 0x00, 0x03, 0x1e, 0x09, 0x00,
};
}
}

namespace nF {
extern "C" void func_0207ac60(u8 *self) {
    s32 n;
    void *g = TownBlockMap_Get(self);
    static Unk_0207ac60_Elem arr[30];
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
            func_0208104c(&arr[i]);
        }
        for (xy[1] = 0; xy[1] < h; xy[1]++) {
            for (xy[0] = 0; xy[0] < w; xy[0]++) {
                struct Q { s32 x, y; };
                struct L { static inline u16 *Cell(void *g, const Q &q) { s32 x = q.x; s32 y = q.y; s32 hx = x >> 4, hy = y >> 4; return BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0); } };
                u16 *t = L::Cell(g, *(Q *)xy);
                if (t != NULL && *t == 0x500a) {
                    func_02081018(&arr[n], xy);
                    n++;
                }
            }
        }
        if (n > 0) {
            u16 v = 0xfff1;
            u8 *p = self;
            for (i = 0; i < 8; i++) {
                if (_ZN12VillagerData13getVillagerIdEv(p)->isValid() && !_ZN20VillagerDataItemView11hasHousePosEv(p)) {
                    s32 idx = func_0207adf0(arr, 30, func_02063b8c(n));
                    v = Item_MakeNeighborHouse(i);
                    Unk_0207ac60_Elem *e = &arr[idx];
                    if (BlockMap_PutStructure(g, &v, arr[idx].unk_00, e->unk_01)) {
                        _ZN20VillagerDataItemView11setHousePosEPh(p, e);
                    }
                    func_0208104c(e);
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
extern "C" u32 func_0207ac2c(u8 *self, s32 a, s32 b) {
    s32 v = func_020789cc(self + 0x3800, a, b);
    u32 r = 4;
    for (s32 i = 0; i < 4; i++) {
        if (v >= data_020cbff8[i]) {
            r = i;
            break;
        }
    }
    return r;
}
}

namespace nF {
extern "C" s32 func_0207abd8(u8 *self, u8 *p1, u8 *p2) {
    s32 a = SaveVillagers_FindIndex(self, _ZN12VillagerData13getVillagerIdEv(p1));
    s32 b = SaveVillagers_FindIndex(self, _ZN12VillagerData13getVillagerIdEv(p2));
    if (a != b && SaveVillagers_IsValidIndex(a) && SaveVillagers_IsValidIndex(b)) {
        return func_0207ac2c(self, a, b);
    }
    return 4;
}
}

namespace nF {
extern "C" void func_0207ab90(u8 *self, u8 *a, u8 *b, s32 c) {
    if (!gCommManager->isOnline()) {
        s32 x = SaveVillagers_FindIndex(self, (VillagerId *)a);
        s32 y = SaveVillagers_FindIndex(self, (VillagerId *)b);
        func_02078c6c(self + 0x3800, x, y, c);
    }
}
}

namespace nF {
extern "C" u32 func_0207aae4(u8 *self, u8 *p, BOOL (**cmp)(s32, s32), s32 best) {
    s32 r6 = SaveVillagers_FindIndex(self, _ZN12VillagerData13getVillagerIdEv(p));
    u8 *r7 = NULL;
    if (_ZN12VillagerData13getVillagerIdEv(p)->isValid() && SaveVillagers_IsValidIndex(r6)) {
        for (s32 i = 0; i < 8; i++) {
            if (i != r6 && SaveVillagers_IsOccupied(self, i)) {
                s32 v = func_020789cc(self + 0x3800, r6, i);
                if ((*cmp)(best, v)) {
                    r7 = SaveVillagers_Get(self, i);
                    best = v;
                } else if (best == v) {
                    if (r7 == NULL || (func_02063b8c(4) & 1) == 1) {
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
extern "C" BOOL func_0207aad8(s32 a, s32 b) {
    if (b > a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nF {
extern "C" BOOL func_0207aacc(s32 a, s32 b) {
    if (b < a) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nF {
extern "C" u32 SaveVillagers_FindFriendOf(u8 *self, u8 *p) {
    BOOL (*fn)(s32, s32) = func_0207aad8;
    return func_0207aae4(self, p, &fn, (s32)0x80000000);
}
}

namespace nF {
extern "C" u32 SaveVillagers_FindEnemyOf(u8 *self, u8 *p) {
    BOOL (*fn)(s32, s32) = func_0207aacc;
    return func_0207aae4(self, p, &fn, 0x7fffffff);
}
}

namespace nF {
extern "C" s32 func_0207aa78(u32 a) {
    return func_020783d8(func_020783f8(), a);
}
}

namespace nF {
extern "C" s32 func_0207a914(u8 *self, u8 *p, u8 *r4) {
    u16 *r5 = (u16 *)_ZN12VillagerData13getVillagerIdEv(p);
    s32 result = 0x16;
    if (r4 == NULL) {
        r4 = PlayerData_GetCurrent();
    }
    if (r4 != NULL) {
        r4 = _ZN10PlayerData13func_0209865cEv(r4);
        u8 *a = func_02099db4(r4, 0);
        u8 *b = func_02099db4(r4, 1);
        u32 *r4u = (u32 *)(r4 + 0x88);
        if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a4f0(a))) {
            u16 *r7 = func_0209a4e4(a, 0);
            if (r7[0] == r5[0] && memcmp(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = _ZN12Unk_0209ada413func_0209ac64Ev(func_0209a4f0(a));
                goto end;
            }
        }
        if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a4f0(b))) {
            u16 *r7 = func_0209a4e4(b, 0);
            if (r7[0] == r5[0] && memcmp(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = _ZN12Unk_0209ada413func_0209ac64Ev(func_0209a4f0(b));
                goto end;
            }
        }
        if (_ZN12Unk_0209ada413func_0209ad68Ev(_ZN12Unk_020994cc13func_0209978cEv(self + 0x3830))) {
            u16 *r7 = _ZN12Unk_020994cc13func_02099788Ev(self + 0x3830);
            if (r7[0] == r5[0] && memcmp(r7 + 1, r5 + 1, 8) == 0 && ((u8 *)r7)[0xb] == ((u8 *)r5)[0xb]) {
                result = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020994cc13func_0209978cEv(self + 0x3830));
                goto end;
            }
        }
        if (func_02099ed4((u8 *)r4u, r5)) {
            r4u += 3;
            result = _ZN12Unk_0209ada413func_0209ac64Ev(r4u);
        } else if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(func_0209a60c(Villager_GetPlan(p))))) {
            result = _ZN12Unk_0209ada413func_0209ac64Ev(func_0209a940(func_0209a60c(Villager_GetPlan(p))));
        }
    }
end:
    return result;
}
}

namespace nF {
extern "C" s32 func_0207a8b8(u8 *self, u8 *p, u8 *r5) {
    u8 *q = (u8 *)func_0207e310(p);
    s32 r7 = 0x16;
    if (r5 == NULL) {
        r5 = PlayerData_GetCurrent();
    }
    if (q != NULL && r5 != NULL) {
        s32 r = func_0207a914(self, p, r5);
        if ((u32)r < 0x16) {
            r7 = r;
        } else if (_ZN12Unk_0209ada413func_0209ad68Ev(func_02078578(q))) {
            r7 = _ZN12Unk_0209ada413func_0209ac64Ev(func_02078578(q));
        }
    }
    return r7;
}
}

namespace nF {
extern "C" BOOL func_0207a834(u8 *self) {
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
            s32 r = func_0207a8b8(self, p, zero);
            if (r == 0x16) {
                c5++;
            } else if (func_0209ad34(r) != 1) {
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
extern "C" void func_0207a80c() {
    u8 *p = func_020783f8();
    for (s32 i = 0; i < 8; i++) {
        _ZN12Unk_0209ada413func_0209ad80Ev(func_02078578(p));
        p += 0x2c;
    }
}
}

namespace nE {
extern "C" void func_0207a63c(void *bb) {
    u8 *b = (u8 *)bb;
    s32 a = PlayerData_GetCurrent(b);
    s32 r5 = 0x11;
    s32 r4 = 8;
    if (a != 0) {
        u16 v[2];
        u32 idx = 0;
        s32 self = SaveVillagers_GetUnk3830Index(b);
        s32 i;
        MI_CpuFill8(data_021cc8c0, 0, r5);
        MI_CpuFill8(data_021cc854, 0, r4);
        for (i = 0; i < 13; i++) {
            if (func_0209acf8(&idx, data_020cbfd8[i])) {
                data_021cc8c0[idx] = 1;
                r5--;
            }
        }
        for (i = 0; i < 8; i++) {
            u8 *p = b + i * 0x700;
            if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid() && Villager_GetResidentStatus(p) == 3 && i != self) {
                u32 t = func_0207a8b8(b, p, a);
                if (t < 0x16) {
                    if (func_0209ad34() == 1) {
                        if (func_0209acf8(&idx, t)) {
                            data_021cc854[i] = 1;
                            r4--;
                            data_021cc8c0[idx] = 1;
                            r5--;
                        }
                    }
                }
            } else {
                data_021cc854[i] = 1;
                r4--;
            }
        }
        s32 zero = 0;
        for (i = 0; i < 8; i++) {
            u8 *p2;
            u8 *flag = &data_021cc854[i];
            if (*flag == 0) {
                p2 = b + i * 0x700;
                s32 e = func_0209a610(Villager_GetPlan(p2));
                if (_ZN12Unk_0209b3bc13func_0209b3a4Ev(e)) {
                    if (_ZN12Unk_0209b3bc13func_0209b328Ev(e) == 0) {
                        s32 x = func_02078578(func_0207e310(p2));
                        v[0] = 0xfff1;
                        _ZN12Unk_0209ada413func_0209ad54EhPth(x, _ZN12Unk_0209b3bc13func_0209b354Ev(e), v, zero);
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
            k = func_02063b8c(r4);
            for (j = 0; j < 8; j++) {
                f = &data_021cc854[j];
                if (*f == 0) {
                    if (k == 0) {
                        x = func_02078578(func_0207e310(b + j * 0x700));
                        k2 = func_02063b8c(r5);
                        for (m = 0; m < 17; m++) {
                            g = &data_021cc8c0[m];
                            if (*g == 0) {
                                if (k2 == 0) {
                                    v[1] = 0xfff1;
                                    _ZN12Unk_0209ada413func_0209ad54EhPth(x, (u8)(m + 5), &v[1], 0);
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
extern "C" void func_0207a624(void *b) {
    if (func_0207a834(b)) func_0207a63c(b);
}
}

namespace nE {
extern "C" void func_0207a550(s32 unused, s32 q) {
    s32 i;
    for (i = 0; i < 4; i++) {
        void *e = PlayerData_GetResident(data_021d735c, i);
        if (_ZN8PlayerId13func_02094218Ev(_ZN10PlayerData11getPlayerIdEv(e))) {
            u8 *r4 = (u8 *)_ZN10PlayerData13func_0209865cEv(e) + 0x88;
            u8 *r6 = r4 + 0xc;
            if (_ZN12Unk_0209ada413func_0209ad68Ev((s32)r6)) {
                if (_ZN12Unk_0209ada413func_0209ac64Ev(r6) == 0x15) {
                    if (((VillagerId *)r4)->isValid()) {
                        u8 *r7 = r4 + 0x18;
                        if (_ZN12Unk_0209ada413func_0209abc4Ev((s32)r6) == 0) {
                            if (DateTime_DiffDays((void *)func_0209ac44(r6), q) < 0) func_02099f1c(r4);
                        } else if (((Unk_0207a550_Rec *)r4)->unk_20 != 0) {
                            r7 = (u8 *)DateTime_DiffDays(r7, q);
                            _ZN12Unk_0209ada413func_0209abb4Eh(r6, 4);
                            if (r7) {
                                u32 bits = ((Unk_0207a550_Rec *)r4)->unk_20;
                                if (func_020594dc(bits, _ZN10PlayerData11getPlayerIdEv(e), r4)) func_02099f1c(r4);
                            }
                        } else {
                            func_02099f1c(r4);
                        }
                    }
                }
            }
        }
    }
}
}

namespace nE {
extern "C" void func_0207a4c4(u8 *p, s32 q) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
            if (q == 0) {
                if (func_02070fbc(i, 0)) {
                    u16 v = 0x12a8;
                    _ZN23VillagerDataProfileView8setShirtEPt(p, &v);
                }
            }
            func_0207c7bc(p);
            s32 a = func_0209a60c(Villager_GetPlan(p));
            s32 c = func_0209a940(a);
            if (_ZN12Unk_0209ada413func_0209ad68Ev(c)) {
                if (_ZN12Unk_0209ada413func_0209abc4Ev(c) == 0) {
                    _ZN8PlayerId13func_02094294Ev((void *)func_0209a92c(a));
                }
            }
            func_0207e4f4(p);
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
    if (_ZN12Unk_0209ada413func_0209ad68Ev(_ZN12Unk_020994cc13func_0209978cEv((void *)SaveVillagers_GetUnk3830(p)))) {
        return SaveVillagers_FindIndex(p, _ZN12Unk_020994cc13func_02099788Ev((void *)SaveVillagers_GetUnk3830(p)));
    }
    return -1;
}
}

namespace nE {
extern "C" s32 func_0207a3b8(void *pp, u32 idx) {
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
                    if (func_0207cd48(p)) {
                        if (func_0207fa50(p, 15, &d) == -1) {
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
        u8 *q = func_0207f948();
        if (!(func_02063b8c(data_020cc048[idx]) >= q[3] + 0x80)) return r4;
    }
    return -1;
}
}

namespace nE {
extern "C" BOOL func_0207a3a0(void *p) {
    if (SaveVillagers_Count(p) >= 7) return TRUE;
    return FALSE;
}
}

namespace nE {
extern "C" void func_0207a310(void *pp) {
    u8 *b = (u8 *)pp;
    u32 c = b[0x38be];
    void *r = NULL;
    if (_ZN12Unk_020994cc13func_02099690Ev(b + 0x3830) || b[0x38b9]) {
        if (c == 0) c = 5;
        else if ((u8)c < 5) c--;
        b[0x38be] = c;
        r = _ZN12Unk_020994cc13func_02099710Ej(b + 0x3830, b[0x38be]);
    } else {
        u8 n = c + 1;
        if (n < 5) {
            b[0x38be] = n;
            r = _ZN12Unk_020994cc13func_02099710Ej(b + 0x3830, b[0x38be]);
        } else if ((u8)c < 5) {
            r = _ZN12Unk_020994cc13func_02099710Ej(b + 0x3830, (u8)c);
        }
    }
    if (r) _ZN8PlayerId13func_02094294Ev(r);
}
}

namespace nE {
extern "C" void func_0207a104(u8 *b) {
    Unk_0207a104_Date d;
    s32 r4, r6, r7;
    s32 v1, flag;
    s32 sel;
    sel = SaveVillagers_GetUnk3830Index(b);
    Clock_GetDate(&d);
    if (sel != -1) {
        if (Date_IsAfterOrEqual(&d, b + 0x38b6) == 0) {
            _ZN12Unk_020994cc13func_02099790Ev(b + 0x3830);
            return;
        }
        if (_ZN12Unk_020994cc13func_02099668Ev(b + 0x3830)) {
            if (_ZN12Unk_020994cc13func_02099624EP17Unk_020994cc_Date(b + 0x3830, &d) == 0) _ZN12Unk_020994cc13func_02099790Ev(b + 0x3830);
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
            func_0207a310(b);
            v1--;
            r6--;
            r4++;
        }
        if (flag) b[0x38b9] = 1;
        while (r6 > 0) {
            func_0207a310(b);
            r6--;
            r4++;
            if (_ZN12Unk_020994cc13func_02099668Ev(b + 0x3830)) break;
        }
        if (_ZN12Unk_020994cc13func_02099668Ev(b + 0x3830)) {
            if (r6 >= 3 && r7 > 0) {
                _ZN12Unk_020994cc13func_02099790Ev(b + 0x3830);
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
                    _ZN12Unk_020994cc13func_02099790Ev(b + 0x3830);
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
        if (func_0207a3a0(b)) {
            r4 = func_0207a3b8(b, (u8)(d.b[1] - 1));
            if (r4 != -1) {
                void *q = SaveVillagers_Get(b, r4);
                if (q) {
                    if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(q))->isValid()) {
                        _ZN12Unk_020994cc13func_02099724EP17Unk_020030d8_R256Ph(b + 0x3830, _ZN12VillagerData13getVillagerIdEv(q), &d);
                        b[0x38ea] = r4;
                        func_02079228(b + 0x381c);
                    }
                }
            }
        }
    }
}
}

namespace nE {
extern "C" void func_0207a038(u8 *base) {
    u8 *p = base;
    u8 mask = 0;
    s32 cnt = 0;
    s32 res = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
            if (func_02078580(func_0207e310(p)) == 0) {
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
    func_020783f8()[0x161] = res;
}
}

namespace nE {
extern "C" s32 func_02079fd8() {
    Unk_02079f54_Date a;
    Unk_02079f54_Date b;
    u32 *t = data_020cc0a8;
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
            if (v == func_02040c70()) return i;
        }
        t++;
    }
    return 11;
}
}

namespace nE {
extern "C" s32 func_02079f54(u32 n, void *src) {
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
            u32 *t = data_020cc0a8;
            for (j = 0; j < 11; j++) {
                if (e->unk_00 == *t) return j;
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
extern "C" void func_02079f1c(u8 *p, void *q) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
            func_0207c354(p, q);
        }
        p += 0x700;
    }
}
}

namespace nE {
extern "C" void func_02079edc(u8 *p) {
    s32 i;
    if (gCommManager->isSlotActive(gCommManager->unk_64) == 0) {
        for (i = 0; i < 8; i++) {
            if (((VillagerId *)_ZN12VillagerData13getVillagerIdEv(p))->isValid()) {
                func_0207c1c8(p);
            }
            p += 0x700;
        }
    }
}
}

namespace nD {
extern "C" void func_02079e9c(void *self0) {
    u8 *self = (u8 *)self0;
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64) == 0) {
        s32 i;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) != 0) {
                func_0207c1e8(self);
            }
        }
    }
}
}

namespace nD {
extern "C" void func_02079da0(void *self0, void *p) {
    u8 *self = (u8 *)self0;
    if (_ZN8PlayerId13func_02094218Ev(p) != 0) {
        u8 *s = self;
        u8 mask = 0;
        s32 cnt = 0;
        s32 i;
        for (i = 0; i < 8; s += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
                if (func_02078580(func_0207e310(s)) == 0) {
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
                    _ZN14VillagerMemory13func_02080940Ev(q);
                }
            }
        }
    }
}
}

namespace nD {
extern "C" void func_02079d64(void *self, void *p) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        func_02079da0(self, p);
    }
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64) == 0) {
        func_02079edc(self);
    }
}
}

namespace nD {
extern "C" void func_02079ce8(void *self, s32 idx) {
    void *o = SaveVillagers_Get(self, idx);
    if (o != NULL) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
            s32 v5 = 5;
            s32 z1 = 0;
            s32 z2 = 0;
            u16 h = 0;
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                Unk_02079ce8_Obj *r5 = (Unk_02079ce8_Obj *)func_0207e310(o);
                if (r5 != NULL) {
                    u32 x[4];
                    func_0205b124(x);
                    h = 0;
                    r5->unk_20 = func_0205af28(x, idx, &h, &v5, &z1, &z2);
                    r5->unk_24 = h;
                    func_0205b120(x);
                }
            }
        }
    }
}
}

namespace nD {
extern "C" void func_02079cc8(void *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        func_02079ce8(self, i);
    }
}
}

namespace nD {
extern "C" void func_02079c7c(u8 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *s = self + i * 0x700;
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
            func_02078568(func_0207e310(s), 0);
            func_0207854c(func_0207e310(s), 0);
        }
    }
}
}

namespace nD {
extern "C" void func_02079bb4(u8 *self) {
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
                    void *r7 = PlayerData_GetResident(data_021d735c, j);
                    if (r7 != NULL) {
                        void *a = _ZN10PlayerData11getPlayerIdEv(r7);
                        if (_ZN8PlayerId13func_02094218Ev(a) != 0) {
                            if (_ZN12Unk_02097ff413func_02098044Ej(r7, 1) == 0) {
                                s32 t = func_0207fa50(self, 7, buf);
                                if (t != -1) {
                                    s32 c = _ZN12Unk_02097ff413func_02098198Ej(r7, i);
                                    if (c != t) {
                                        if (func_0205989c(a, o) != 0) {
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
extern "C" s32 func_02079b34(void *self0, s32 x) {
    u8 *self = (u8 *)self0;
    u8 *s = self;
    s32 best = -100000;
    s32 cnt, i;
    u8 mask;
    mask = 0;
    cnt = 0;
    for (i = 0; i < 8; s += 0x700, i++) {
        if (i != x && func_0207f9e0(s) != 0) {
            s32 v = func_020789cc(self + 0x3800, x, i);
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
extern "C" s32 func_02079ab0(void *self0, void *p0) {
    u8 *self = (u8 *)self0;
    u8 *p = (u8 *)p0;
    struct { u8 v[8]; } b;
    u8 out[0x54];
    void *r0 = PlayerData_GetCurrent();
    if (r0 != NULL && _ZN12Unk_02097ff413func_02098044Ej(r0, 1) == 0 && p[2] >= 6) {
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
extern "C" void func_02079a0c(u8 *self) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    s32 r6 = func_02078294();
    Clock_GetDateTime(buf);
    s32 r4 = func_02079ab0(self, buf);
    if (r4 == -1) {
        func_020782ac(-1);
        func_0207827c(-1);
    } else if (r4 == r6) {
        void *o = SaveVillagers_Get(self, func_02078264());
        if (o == NULL || func_0207f9e0(o) == 0) {
            func_0207827c((s8)func_02079b34(self, r6));
        }
    } else if (r4 != r6) {
        r6 = func_02079b34(self, r4);
        func_020782ac((s8)r4);
        func_0207827c((s8)r6);
        if (r4 == SaveVillagers_GetUnk3830Index(self)) {
            _ZN12Unk_020994cc13func_02099790Ev(self + 0x3830);
        }
    }
}
}

namespace nD {
extern "C" void func_02079954(u8 *self) {
    s32 r7 = func_02078294();
    s32 w = func_02078264();
    u8 *s = self;
    s32 i;
    for (i = 0; i < 8; s += 0x700, i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(s)) != 0) {
            if (func_020785ec(func_0207e310(s)) == 3) {
                func_020785a8(func_0207e310(s));
            }
        }
    }
    if (r7 != -1) {
        void *o = SaveVillagers_Get(self, r7);
        if (o != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
            func_020785e8(func_0207e310(o), 0);
            o = SaveVillagers_Get(self, w);
            if (o != NULL) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                    func_020785e8(func_0207e310(o), 3);
                }
            }
        } else {
            func_020782ac(-1);
            func_0207827c(-1);
        }
    }
}
}

namespace nD {
extern "C" s32 func_020798b8(void *self0) {
    u8 *self = (u8 *)self0;
    void *r0 = PlayerData_GetCurrent();
    void *p;
    if (r0 != NULL) {
        p = _ZN10PlayerData11getPlayerIdEv(r0);
    } else {
        p = NULL;
    }
    if (p != NULL && _ZN8PlayerId13func_02094218Ev(p) != 0) {
        u8 mask = 0;
        s32 cnt = 0;
        s32 i;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(self)) != 0) {
                if (Villager_FindMemory(self, p) != 0) {
                    if (_ZN14VillagerMemory13func_02080950Ev((void *)Villager_FindMemory(self, p)) == 0) {
                        if (func_02078580(func_0207e310(self)) == 0) {
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
extern "C" void func_020798a0(void *self) {
    func_0207821c((s8)func_020798b8(self));
}
}

namespace nD {
extern "C" s32 func_0207980c(void *self0, void *p) {
    u8 *self = (u8 *)self0;
    if (_ZN8PlayerId13func_02094218Ev(p) != 0) {
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
extern "C" void func_02079748(u8 *self, void *p) {
    func_0207824c(-1);
    if (func_020b50e8() == 6) {
        if (p == NULL) {
            p = PlayerData_GetCurrent();
        }
        if (p != NULL) {
            if (_ZN12Unk_02097ff413func_02098044Ej(p, 1) == 0) {
                if (_ZN15PlayerInventory15findEmptyPocketEv(_ZN10PlayerData13func_02098750Ev(p)) != -1) {
                    void *a = _ZN10PlayerData11getPlayerIdEv(p);
                    u8 *r4 = _ZN12Unk_02097ff413func_02098308Ev(p);
                    if (*(u16 *)r4 != 0) {
                        if (_ZN8PlayerId13func_02094218Ev(a) != 0) {
                            Unk_02079748_B bb;
                            *(u32 *)&bb.b[0] = 0;
                            *(u32 *)&bb.b[4] = 0;
                            Clock_GetDateTime(&bb);
                            u32 r7 = bb.b[5];
                            s32 tt = _ZN12Unk_02097ff413func_020982d0Ev(p);
                            if (tt != r7) {
                                if (r4[1] == bb.b[4]) {
                                    if (r4[0] == bb.b[3]) {
                                        if (bb.b[2] >= 6) {
                                            s32 s = func_0207980c(self, a);
                                            if (SaveVillagers_IsValidIndex(s) != 0) {
                                                func_02079228(self + 0x381c);
                                            }
                                            func_0207824c((s8)s);
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
extern "C" BOOL func_020796f8(Unk_020796d4_Obj *self, void *p) {
    BOOL r = TRUE;
    if (self->unk_38c0[3] != 0) {
        if (Date_IsAfterOrEqual(p, self->unk_38c0) != 0) {
            if (Date_DaysBetween(p, self->unk_38c0) < 14) {
                r = FALSE;
            }
        } else {
            if (Date_DaysBetween(self->unk_38c0, p) < 14) {
                r = FALSE;
            }
        }
    }
    return r;
}
}

namespace nD {
extern "C" void func_020796d4(Unk_020796d4_Obj *self, void *p) {
    MI_CpuCopy8(p, self->unk_38c0, 4);
    self->unk_38c0[3] = 1;
}
}

namespace nD {
extern "C" BOOL func_02079678(u8 *self, void *p) {
    if (_ZN8PlayerId13func_02094218Ev(p) != 0) {
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
extern "C" s32 func_020795c4(void *self, void *p) {
    if (p != NULL) {
        void *t = func_02065634(p);
        if (t != NULL) {
            Unk_020795c4_Buf b(t);
            if (_ZN8PlayerId13func_02094218Ev(&b) != 0) {
                void *q = func_0209788c(data_021d735c, &b);
                void *name = func_0206561c(p);
                if (q != NULL) {
                    func_020999c0(_ZN10PlayerData13func_0209865cEv(q), p);
                }
                if (name != NULL) {
                    Unk_020795c4_Str s(name);
                    if (_ZN10VillagerId7isValidEv(s.v) != 0) {
                        void *o = SaveVillagers_Find(self, s.v);
                        if (o != NULL) {
                            _ZN23VillagerDataProfileView13func_020801fcEPvS0_(o, q, p);
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
extern "C" void func_020795a8(Unk_02079524_Self *self) {
    self->unk_38ec_1 = 0;
    self->unk_38ec_2 = 0;
}
}

namespace nC {
extern "C" void func_02079568(Unk_02079524_Self *self, s32 u) {
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
extern "C" BOOL func_02079524(Unk_02079524_Self *self, s32 u) {
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
extern "C" void func_020794f4(u8 *p) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p))) {
            func_0207c65c(p);
        }
        p += 0x700;
    }
}
}

namespace nC {
extern "C" s32 func_020794ac() {
    Unk_02078d6c_Time t;
    Unk_020794ac_Entry *e;
    u8 *q;
    s32 prev, i, n;
    t.lo = 0;
    t.hi = 0;
    Clock_GetDateTime(&t);
    e = (Unk_020794ac_Entry *)func_02060e24(((u8 *)&t)[4] - 1);
    if (e) {
        q = e->unk_00;
        prev = 0;
        i = 0;
        n = e->unk_04;
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
extern "C" void func_020793e8(u8 *p, s32 a1) {
    s32 mask, n, i, r, j, lim, bit;
    func_020783f8()[0x160] = -1;
    if (a1) {
        if (_ZN8PlayerId13func_02094218Ev(a1)) {
            lim = func_020794ac();
            mask = 0;
            n = 0;
            for (i = 0; i < 8; i++) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) && Villager_FindMemory(p, a1) && !func_0207e278(p)) {
                    mask |= 1 << i;
                    mask = (u8)mask;
                    n++;
                }
                p += 0x700;
            }
            while (n > 0) {
                r = func_02063b8c(n);
                n--;
                for (j = 0; j < 8; j++) {
                    bit = (mask >> j) & 1;
                    if (bit) {
                        if (r == 0) {
                            if (func_02063b8c(100) < lim) {
                                func_020783f8()[0x160] = j;
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
extern "C" void func_020793e0(Unk_02078d6c_Self *p) {
    p->unk_0c = 0;
    p->unk_10 = 0;
}
}

namespace nC {
extern "C" void func_020793dc() {}
}

namespace nC {
extern "C" void func_020793c0(Unk_02078d6c_Self *self) {
    func_020793b0(self, self);
    func_020792fc(self);
    self->unk_0c = 0;
    self->unk_10 = 0;
}
}

namespace nC {
extern "C" void func_020793b0(void *a, void *b) {
    MI_CpuFill8(b, 0xff, 8);
}
}

namespace nC {
extern "C" void func_020793a4(void *a, void *b, void *c) {
    MI_CpuCopy8(c, b, 8);
}
}

namespace nC {
extern "C" BOOL func_02079380(u8 *self, s32 a, s32 v) {
    BOOL r = FALSE;
    if (SaveVillagers_IsValidIndex(a)) {
        self[a] = v;
        r = TRUE;
    }
    return r;
}
}

namespace nC {
extern "C" void func_0207934c(s8 *p, s32 x) {
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
extern "C" void func_0207930c(s8 *p, s32 x) {
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
extern "C" void func_020792fc(Unk_02078d6c_Self *self) {
    MI_CpuFill8(self->unk_08, 0xff, 4);
}
}

namespace nC {
extern "C" BOOL func_020792ec(Unk_02078d6c_Self *self, u32 i, s32 v) {
    if (i < 4) {
        self->unk_08[i] = v;
        return TRUE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" s32 func_020792b8(Unk_02078d6c_Self *self, s32 x) {
    s32 i;
    if (SaveVillagers_IsValidIndex(x)) {
        for (i = 0; i < 4; i++) {
            if (x == self->unk_08[i]) {
                return i;
            }
        }
    }
    return ~0;
}
}

namespace nC {
extern "C" void func_0207928c(Unk_02078d6c_Self *self, s32 x) {
    u32 i = func_020792b8(self, x);
    s32 n;
    if (i < 4) {
        for (n = i; n < 3; n = i) {
            i = n + 1;
            self->unk_08[n] = self->unk_08[i];
        }
        self->unk_08[3] = ~0;
    }
}
}

namespace nC {
extern "C" void func_02079270(Unk_02078d6c_Self *self, s32 x) {
    func_0207930c((s8 *)self, x);
    func_0207928c(self, x);
}
}

namespace nC {
extern "C" s32 func_02079268(Unk_02078d6c_Self *a, s32 b) {
    return func_020792b8(a, b);
}
}

namespace nC {
extern "C" void func_02079230(s8 *out, u8 *p) {
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
extern "C" void func_02079228(Unk_02078d6c_Self *p) {
    p->unk_0c = 0;
    p->unk_10 = 0;
}
}

namespace nC {
extern "C" BOOL func_020791c0(Unk_02078d6c_Self *self, void *out) {
    s32 r;
    s32 c;
    if (*(u64 *)&self->unk_0c == 0 || DateTime_IsInvalid(&self->unk_0c)) {
        return TRUE;
    }
    r = 0;
    c = DateTime_Compare(out, &self->unk_0c, 0x3e);
    if (c == ~r) {
        r = DateTime_DiffMinutes(out, &self->unk_0c);
    } else if (c == 1) {
        r = DateTime_DiffMinutes(&self->unk_0c, out);
    }
    if (r >= 0x3c) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" void func_020790d4(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit) {
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
    id = SaveVillagers_GetUnk3830Index(func_0204bdb8() + 0x8a3c);
    q1 = list;
    for (i = 0; i < 8; q1++, i++) {
        v = *q1;
        if (SaveVillagers_IsValidIndex(v) && v != id) {
            v = v * 0x700;
            if (func_0207c764(players + v)) {
                mask |= 1 << i;
                mask = (u8)mask;
                n++;
                if (n >= 6) goto done;
            }
        }
    }
done:
    while (n > 0 && *cnt < limit) {
        r = func_02063b8c(n);
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
extern "C" void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots) {
    s32 i;
    s32 v;
    Unk_02078d6c_Slot *e;
    s32 z = 0;
    s32 m1 = ~z;
    for (i = 0; i < 8; list++, i++) {
        v = *list;
        if (SaveVillagers_IsValidIndex(v) && func_02079380((u8 *)self, *cnt, v)) {
            *cnt = *cnt + 1;
            e = slots + v;
            func_0207857c(e, 1);
            func_020785e8(e, z);
            *list = m1;
        }
    }
}
}

namespace nC {
extern "C" void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n) {
    s32 i;
    s32 v;
    Unk_02078d6c_Slot *e;
    s32 z = 0;
    for (i = 0; i < n; list++, i++) {
        v = *list;
        if (func_02079380((u8 *)self, *cnt, v)) {
            *cnt = *cnt + 1;
            e = slots + v;
            func_0207857c(e, z);
            func_020785e8(e, 1);
            func_020792ec(self, i, v);
        }
    }
}
}

namespace nC {
extern "C" void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players) {
    s32 id = func_02078234(self);
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
extern "C" void func_02078f0c(Unk_02078d6c_Self *self, u8 *p, s32 x) {
    Unk_02078d6c_Slot *s;
    s32 i;
    s32 z = 0;
    s32 r;
    BOOL v;
    s32 t;
    s32 o = PlayerData_GetCurrent(self);
    if (o) {
        r = _ZN12Unk_02097ff413func_02098044Ej(o, 1);
    } else {
        r = 0;
    }
    if (r) {
        v = TRUE;
    } else {
        v = FALSE;
    }
    s = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    for (i = 0; i < 8; i++) {
        t = _ZN12VillagerData13getVillagerIdEv(p);
        if (_ZN10VillagerId7isValidEv(t)) {
            if (!v) {
                if (func_02081288(VillagerId_GetPersonality(t), x)) {
                    func_0207857c(s, 2);
                    func_020785e8(s, z);
                }
            }
        } else {
            func_0207857c(s, 3);
            func_020785e8(s, 7);
        }
        p += 0x700;
        s++;
    }
}
}

namespace nC {
extern "C" void func_02078e60(Unk_02078d6c_Self *self, u8 *p) {
    s8 l1[8];
    s8 l2[8];
    s32 a, c, n, b, i;
    Unk_02078d6c_Slot *slots;
    slots = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    a = 0;
    b = func_020812f4();
    n = SaveVillagers_CountImpl(p);
    c = 0;
    for (i = 0; i < 8; i++) {
        func_0207857c(&slots[i], 3);
    }
    func_020793a4(self, l1, self);
    func_020793b0(self, self);
    func_020793b0(self, l2);
    n = n * 3;
    if (b > (n >> 2)) {
        b = n >> 2;
    }
    func_020792fc(self);
    func_02078f98(self, l2, &a, l1, p);
    func_020790d4(self, l2, &a, l1, p, b);
    func_02079070(self, l1, &c, slots);
    func_02079008(self, l2, &c, slots, a);
}
}

namespace nC {
extern "C" void func_02078de0(Unk_02078d6c_Self *self, u8 *p) {
    Unk_02078d6c_Slot *s = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    s32 i;
    s32 z0 = 0;
    s32 z1 = 0;
    for (i = 0; i < 8; i++) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p))) {
            if (func_020792b8(self, i) != ~0) {
                func_0207857c(s, z1);
                func_020785e8(s, 1);
            } else {
                func_0207857c(s, 1);
                func_020785e8(s, z0);
            }
        } else {
            func_0207857c(s, 3);
            func_020785e8(s, 7);
        }
        p += 0x700;
        s++;
    }
}
}

namespace nC {
extern "C" void func_02078d6c(Unk_02078d6c_Self *self, u8 *p, s32 keep) {
    Unk_02078d6c_Time t;
    Unk_02078d6c_Slot *slots;
    s32 i;
    t.lo = 0;
    t.hi = 0;
    slots = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    for (i = 0; i < 8; i++) {
        func_0207857c(&slots[i], 3);
    }
    Clock_GetDateTime(&t);
    if (func_020791c0(self, &t)) {
        func_02078e60(self, p);
        if (keep) {
            MI_CpuCopy8(&t, &self->unk_0c, 8);
        }
    } else {
        func_02078de0(self, p);
    }
    func_02078f0c(self, p, (s32)&t);
}
}

namespace nC {
extern "C" void func_02078d68() {}
}

namespace nC {
extern "C" void func_02078d64() {}
}

namespace nC {
extern "C" void func_02078d58(void *p) {
    MI_CpuFill8(p, 0, 0x1c);
}
}

namespace nC {
extern "C" BOOL func_02078d4c(void *a, u32 i) {
    if (i < 0x1c) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" s32 func_02078d1c(s32 a, s32 b, s32 c) {
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
extern "C" void func_02078cd8(u8 *a, s32 x) {
    s32 i;
    s32 t;
    if (SaveVillagers_IsValidIndex(x)) {
        for (i = 0; i < 8; i++) {
            if (i != x) {
                t = func_02078d1c((s32)a, x, i);
                if (func_02078d4c(a, t)) {
                    a[t] = 0;
                }
            }
        }
    }
}
}

namespace nC {
extern "C" void func_02078ca8(s8 *a, s32 i, s32 d) {
    if (func_02078d4c(a, i)) {
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
extern "C" void func_02078c6c(void *a, void *p, void *q, s32 r) {
    if (SaveVillagers_IsValidIndex(p) && SaveVillagers_IsValidIndex(q)) {
        func_02078ca8(a, func_02078d1c(a, p, q), r);
    }
}
}

namespace nB {
extern "C" s32 func_02078c24(void *a, void *p, void *q) {
    s32 r = 0x80000000;
    if (SaveVillagers_IsValidIndex(p) && SaveVillagers_IsValidIndex(q)) {
        s32 k = func_02078d1c(a, p, q);
        if (func_02078d4c(a, k)) {
            r = ((s8 *)a)[k];
        }
    }
    return r;
}
}

namespace nB {
extern "C" s32 func_02078be4(void *a, void *p, void *q) {
    s32 r = 0;
    if (_ZN10VillagerId7isValidEv(p) && _ZN10VillagerId7isValidEv(q)) {
        u32 x = VillagerId_GetPersonality(p);
        u32 y = VillagerId_GetPersonality(q);
        r = data_020cc084[x][y];
    }
    return r;
}
}

namespace nB {
extern "C" u32 func_02078bb0(void *a, void *p, void *q) {
    u8 x = func_0207f9c4(p) & 3;
    u8 y = func_0207f9c4(q) & 3;
    return data_020cc008[x][y];
}
}

namespace nB {
extern "C" u32 func_02078b30(void *a, void *p, void *q) {
    u32 x = Villager_GetAnimalKind(p);
    u32 y = Villager_GetAnimalKind(q);
    u8 (*t)[2];
    s32 i;
    if (x == y) {
        return 0x40;
    }
    t = data_020cbfe8;
    for (i = 0; i < 7; t++, i++) {
        u32 a0 = (*t)[0];
        if ((a0 == x && (*t)[1] == y) || ((*t)[1] == x && a0 == y)) {
            return 0x80;
        }
    }
    t = data_020cbfb8;
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
extern "C" u32 func_02078b04(void *a, void *p, void *q) {
    u8 *x = func_0207f948(p);
    u8 *y = func_0207f948(q);
    u32 r = 0;
    if (x != NULL && y != NULL) {
        r = 0x3f;
    }
    return r;
}
}

namespace nB {
extern "C" u32 func_02078acc(void *a, void *p, void *q) {
    u8 *x = func_0207f948(p);
    u8 *y = func_0207f948(q);
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
extern "C" s32 func_02078a3c(void *a, void *p, void *q) {
    s32 r = 0;
    if (p != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) && q != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(q))) {
        void *x = _ZN12VillagerData13getVillagerIdEv(p);
        void *y = _ZN12VillagerData13getVillagerIdEv(q);
        r = func_02078be4(a, x, y);
        r += func_02078bb0(a, p, q);
        r += func_02078b30(a, p, q);
        r += func_02078b04(a, p, q);
        if (r < 200) {
            r -= func_02078acc(a, p, q);
            if (r < 0) {
                r = -r;
            }
        }
    }
    return r;
}
}

namespace nB {
extern "C" s32 func_020789cc(void *a, s32 b, s32 c) {
    void *d = data_021dfd8c;
    void *r5 = SaveVillagers_Get(d, b);
    void *r4 = SaveVillagers_Get(d, c);
    s32 r = 0;
    if (r5 != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r5)) && r4 != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(r4))) {
        r = func_02078c24(a, (void *)b, (void *)c);
        s32 t = func_02078a3c(a, r5, r4);
        r = r * 5;
        r = t + (r >> 1);
    }
    return r;
}
}

namespace nB {
extern "C" void *func_020789bc(void *p) {
    _ZN12VillagerDataC1Ev(p);
    return p;
}
}

namespace nB {
extern "C" void *func_020789ac(void *p) {
    _ZN12VillagerDataD1Ev(p);
    return p;
}
}

namespace nB {
extern "C" void func_020789a8() {}
}

namespace nB {
extern "C" BOOL func_02078948(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1) {
    Unk_02078948_Obj *o = NpcRegistry_FindVillagerByHandle();
    if (o != NULL && o->vfunc_a8()) {
        s32 *pos = &o->unk_5c;
        BOOL result = FALSE;
        BOOL b = FALSE;
        BOOL a = FALSE;
        if (o->unk_5c > x0 && o->unk_5c < x1) {
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
extern "C" void func_02078864(u32 kind, Unk_02078738_Pos *p) {
    if ((u32)data_021dfd8c != 0) {
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
            o = SaveVillagers_Get(data_021dfd8c, i);
            if (o != NULL) {
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o))) {
                    if (_ZN12Unk_0209b3bc13func_0209b1e4EPv(func_0209a610(Villager_GetPlan(o)), &t)) {
                        if (p != NULL) {
                            h = (i & 0xfff) | 0xe000;
                            if (func_02078948(&h, b[0], b[1], b[2], z1)) {
                                b[3] = 2;
                            }
                        }
                        func_0207cb68(o, kind, b[3]);
                    }
                }
            }
        }
        func_020783f8()->unk_168 = 0;
    }
}
}

namespace nB {
extern "C" void func_02078840(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(1, p);
    }
}
}

namespace nB {
extern "C" void func_0207881c(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(0, p);
    }
}
}

namespace nB {
extern "C" void func_020787f8(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(2, p);
    }
}
}

namespace nB {
extern "C" void func_020787d4() {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(3, NULL);
    }
}
}

namespace nB {
extern "C" void func_020787b0() {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(4, NULL);
    }
}
}

namespace nB {
extern "C" void func_0207878c(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(5, p);
    }
}
}

namespace nB {
extern "C" BOOL func_02078738(Unk_02078738_Pos *p) {
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
extern "C" void func_0207870c(Unk_02078738_Pos *p) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        if (func_02078738(p)) {
            func_02078864(6, p);
        }
    }
}
}

namespace nB {
extern "C" void func_020786e8() {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02078864(7, NULL);
    }
}
}

namespace nB {
extern "C" void func_0207869c() {
    if (func_020b5184()) {
        if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
            if (func_020783f8()->unk_168 > 0x4b0) {
                func_020786e8();
            }
            func_020783f8()->unk_168++;
        }
    }
}
}

namespace nB {
extern "C" Unk_02078614 *_ZN17Unk_021cc9e8_ElemC1Ev(Unk_02078614 *e) {
    _ZN12Unk_0209ada413func_0209ada4Ev(e->unk_04);
    func_0209b560(e->unk_10);
    e->unk_26 = 0xfff1;
    func_020784f0(&e->unk_28);
    return e;
}
}

namespace nB {
extern "C" Unk_02078614 *_ZN17Unk_021cc9e8_ElemD1Ev(Unk_02078614 *e) {
    func_020784ec(&e->unk_28);
    func_0209b55c(e->unk_10);
    _ZN12Unk_0209ada413func_0209ada0Ev(e->unk_04);
    return e;
}
}

namespace nB {
extern "C" void func_02078614(Unk_02078614 *e) {
    MI_CpuFill8(e, 0, 0x2c);
    e->unk_00 = 0;
    e->unk_01 = 3;
    _ZN12Unk_0209ada413func_0209ad80Ev(e->unk_04);
    func_0209b550(e->unk_10);
    e->unk_18 = 5;
    e->unk_1c = 0xc;
    e->unk_20 = 0;
    e->unk_24 = 0;
    func_020784f8(e);
}
}

namespace nB {
extern "C" u32 func_020785ec(Unk_02078614 *e) {
    Unk_02078948_Obj *o = (Unk_02078948_Obj *)gCommManager;
    if (_ZN11CommManager12isSlotActiveEi(o, o->unk_64) && e->unk_00 != 7) {
        return 0;
    }
    return e->unk_00;
}
}

namespace nB {
extern "C" void func_020785e8(Unk_02078614 *e, u32 v) { e->unk_00 = v; }
}

namespace nB {
extern "C" void func_020785a8(Unk_02078614 *e) {
    switch (e->unk_00) {
    case 0:
    case 1:
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if (func_02078580(e) == 0) {
            e->unk_00 = 1;
        } else {
            e->unk_00 = 0;
        }
        break;
    }
}
}

namespace nB {
extern "C" u32 func_02078580(Unk_02078614 *e) {
    Unk_02078948_Obj *o = (Unk_02078948_Obj *)gCommManager;
    if (_ZN11CommManager12isSlotActiveEi(o, o->unk_64) && e->unk_01 == 0) {
        return 1;
    }
    return e->unk_01;
}
}

namespace nB {
extern "C" void func_0207857c(Unk_02078614 *e, u32 v) { e->unk_01 = v; }
}

namespace nB {
extern "C" void *func_02078578(Unk_02078614 *e) { return e->unk_04; }
}

namespace nB {
extern "C" u32 func_02078574(Unk_02078614 *e) { return e->unk_1c; }
}

namespace nB {
extern "C" void func_02078570(Unk_02078614 *e, u32 v) { e->unk_1c = v; }
}

namespace nB {
extern "C" u32 func_0207856c(Unk_02078614 *e) { return e->unk_18; }
}

namespace nB {
extern "C" void func_02078568(Unk_02078614 *e, u32 v) { e->unk_18 = v; }
}

namespace nB {
extern "C" void func_02078550(Unk_02078614 *e, s32 v) {
    s32 s = e->unk_1a + v;
    if (s >= 0xffff) {
        e->unk_1a = 0xffff;
        return;
    }
    e->unk_1a = s;
}
}

namespace nB {
extern "C" void func_0207854c(Unk_02078614 *e, u16 v) { e->unk_1a = v; }
}

namespace nB {
extern "C" u32 func_02078548(Unk_02078614 *e) { return e->unk_1a; }
}

namespace nB {
extern "C" void func_0207853c(Unk_02078614 *e) {
    if (e->unk_1a != 0) {
        e->unk_1a = e->unk_1a - 1;
    }
}
}

namespace nB {
extern "C" void func_02078520(Unk_02078614 *e) {
    if (!func_020b51a4()) {
        e->unk_1d |= 2;
    }
}
}

namespace nB {
extern "C" void func_02078510(Unk_02078614 *e) {
    s32 v = e->unk_1e << 1;
    if (v > 32) {
        v = 32;
    }
    e->unk_1e = v;
}
}

namespace nB {
extern "C" u16 *func_0207850c(Unk_02078614 *e) { return &e->unk_26; }
}

namespace nB {
extern "C" void func_02078504(Unk_02078614 *e, u16 *p) { e->unk_26 = *p; }
}

namespace nB {
extern "C" void func_020784f8(Unk_02078614 *e) { e->unk_26 = 0xfff1; }
}

namespace nB {
extern "C" Unk_020784f4 *func_020784f4(Unk_02078614 *e) { return &e->unk_28; }
}

namespace nB {
extern "C" void func_020784f0(Unk_020784f4 *t) {}
}

namespace nB {
extern "C" void func_020784ec(Unk_020784f4 *t) {}
}

namespace nB {
extern "C" void func_020784e0(Unk_020784f4 *t) {
    t->unk_02 = 0;
    t->unk_00 = 0;
    t->unk_03 = 0;
}
}

namespace nB {
extern "C" void func_020784b8(Unk_020784f4 *t, s32 v) {
    if (v == 0) {
        if (t->unk_02 != 0) {
            t->unk_02 = t->unk_02 - 1;
        } else if (t->unk_00 != 0) {
            t->unk_00 = t->unk_00 - 1;
        }
        if (t->unk_00 == 0) {
            t->unk_03 = 0;
        }
    }
}
}

namespace nB {
extern "C" void func_020784a8(Unk_020784f4 *t) {
    if (t->unk_02 != 0) {
        t->unk_03 = t->unk_03 + 1;
    }
}
}

namespace nB {
extern "C" void func_02078498(Unk_020784f4 *t) {
    t->unk_02 = 40;
    t->unk_00 = 0x4b0;
}
}

namespace nB {
extern "C" s32 func_0207846c(Unk_020784f4 *t) {
    if (Unk_02078384_IsZero(data_020e416c)) {
        u32 v = t->unk_03;
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
extern "C" BOOL func_0207845c(s32 i) {
    if (i >= 0 && i < 8) {
        return TRUE;
    }
    return FALSE;
}
}

namespace nB {
extern "C" void func_02078400(Unk_02078400 *m) {
    s32 i;
    for (i = 0; i < 8; i++) {
        func_02078614(&m->unk_00[i]);
    }
    m->unk_160 = -1;
    m->unk_161 = 0;
    m->unk_162 = -1;
    m->unk_163 = -1;
    m->unk_164 = -1;
    m->unk_168 = 0;
    m->unk_16c = -1;
}
}

namespace nB {
extern "C" Unk_02078400 *func_020783f8() { return &data_021cc9e8; }
}

namespace nB {
extern "C" Unk_02078614 *func_020783d8(Unk_02078400 *m, s32 i) {
    Unk_02078614 *r = NULL;
    if (func_0207845c(i)) {
        r = &m->unk_00[i];
    }
    return r;
}
}

namespace nB {
extern "C" void func_020783d4() {}
}

namespace nB {
extern "C" void func_02078384(Unk_02078614 *e) {
    s32 i = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 z3 = 0;
    for (; i < 8; e++, i++) {
        func_020785e8(e, z1);
        e->unk_1d &= ~1;
        func_02078568(e, z2);
        func_0207854c(e, z3);
        e->unk_1d &= ~4;
        func_020784e0(func_020784f4(e));
    }
}
}

namespace nA {
extern "C" void func_02078370() {
    func_02078400(func_020783f8());
}
}

namespace nA {
extern "C" void func_0207835c() {
    func_020783d4(func_020783f8());
}
}

namespace nA {
extern "C" void func_02078348() {
    func_02078384(func_020783f8());
}
}

namespace nA {
extern "C" void func_02078328() {
    Unk_020781ec_Elem *e = func_020783f8()->unk_00;
    s32 i;
    for (i = 0; i < 8; e++, i++) {
        e->unk_1d &= ~1;
    }
}
}

namespace nA {
extern "C" void func_02078308() {
    Unk_020781ec_Elem *e = func_020783f8()->unk_00;
    s32 i;
    for (i = 0; i < 8; e++, i++) {
        e->unk_1d &= ~4;
    }
}
}

namespace nA {
extern "C" void func_020782e0() {
    u8 *p = (u8 *)func_020783f8();
    s32 i;
    for (i = 0; i < 8; p += 0x2c, i++) {
        func_020784e0(func_020784f4(p));
    }
}
}

namespace nA {
extern "C" void func_020782c4() {
    func_020783f8()->unk_160 = -1;
}
}

namespace nA {
extern "C" void func_020782ac(s32 v) {
    func_020783f8()->unk_162 = v;
}
}

namespace nA {
extern "C" s32 func_02078294() {
    return func_020783f8()->unk_162;
}
}

namespace nA {
extern "C" void func_0207827c(s32 v) {
    func_020783f8()->unk_163 = v;
}
}

namespace nA {
extern "C" s32 func_02078264() {
    return func_020783f8()->unk_163;
}
}

namespace nA {
extern "C" void func_0207824c(s32 v) {
    func_020783f8()->unk_16c = v;
}
}

namespace nA {
extern "C" s32 func_02078234() {
    return func_020783f8()->unk_16c;
}
}

namespace nA {
extern "C" void func_0207821c(s32 v) {
    func_020783f8()->unk_164 = v;
}
}

namespace nA {
extern "C" s32 func_02078204() {
    return func_020783f8()->unk_164;
}
}

namespace nA {
extern "C" void func_020781ec() {
    func_020783f8()->unk_168 = 0;
}
}

namespace nA {
extern "C" void func_02078150(u8 *a, s32 b) {
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
                if (func_02080f94(e)) {
                    _ZN14VillagerMemory13func_02080a88Ev(e);
                    _ZN14VillagerMemory13func_02080a54Ev(e);
                    _ZN14VillagerMemory13func_02080a18Ev(e);
                    _ZN14VillagerMemory13func_020809dcEv(e);
                    _ZN14VillagerMemory13func_020809a0Ev(e);
                    _ZN14VillagerMemory13func_02080964Ev(e);
                    _ZN14VillagerMemory13func_02080930Ev(e);
                }
            }
            _ZN23VillagerDataProfileView13func_02080078EPv(a, b);
            _ZN23VillagerDataProfileView13func_0207ff14EPv(a, b);
        }
    }
}
}

namespace nA {
extern "C" s32 func_02078104(s32 x, s32 y) {
    s32 result = 0;
    s32 ax = 0;
    s32 ay = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = func_020947f0(i);
        if (o != 0) {
            FieldPos_ToUnit(&ax, &ay, (s32)o);
            if (ax == x && ay == y) {
                result = func_020951ec(i);
                break;
            }
        }
    }
    return result;
}
}

namespace nA {
extern "C" BOOL func_020780e4(s32 a, s32 b) {
    BOOL r = func_02078104(a, b);
    if (r == 0) {
        r = NpcRegistry_FindAt(a, b);
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_02077f68(s32 x, s32 y, void *grid) {
    BOOL result = FALSE;
    if (grid == 0) {
        grid = gSceneBlockMap;
    }
    if (grid != 0 && _ZN8BlockMap13func_0204e418Eii(grid, x, y)) {
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = (u16 *)BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            u32 v = *c;
            if (v == 0xfff1) goto yes;
            if (Item_IsNormalItem(c)) goto yes;
            if (Unk_02077f68_R(c, 0xa7, 0xc6)) goto yes;
            if (Unk_02077d58_IsZero(data_020e416c)) {
                if (Item_IsFurniture(c)) goto yes;
            }
            if (Item_IsTreeStage0(c)) goto yes;
            if (Unk_02077f68_C2(c)) goto yes;
            if (Unk_02077f68_C9(c)) {
            yes:
                if (!func_020780e4(x, y)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}
}

namespace nA {
extern "C" BOOL func_02077f40(s32 a, void *grid) {
    s32 x = 0;
    s32 y = 0;
    FieldPos_ToUnit(&x, &y, a);
    return func_02077f68(x, y, grid);
}
}

namespace nA {
extern "C" BOOL func_02077eb0(s32 x, s32 y, s32 h, s32 *px, s32 *py) {
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
extern "C" BOOL func_02077e7c(s32 a, s32 h, s32 *px, s32 *py) {
    s32 x = 0;
    s32 y = 0;
    FieldPos_ToUnit(&x, &y, a);
    return func_02077eb0(x, y, h, px, py);
}
}

namespace nA {
extern "C" void func_02077e4c() {
    func_0205b8c0(gCurrentHeap);
    func_02077de4(gCurrentHeap);
    func_02077cf4(gCurrentHeap);
    func_02077c2c(gCurrentHeap);
}
}

namespace nA {
extern "C" void func_02077e30() {
    func_0205b8a0();
    func_02077dcc();
    func_02077cdc();
    func_02077c14();
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
extern "C" void _ZN12Unk_021cc8e8C1Ev(void **p) {
    s32 i;
    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }
}
}

namespace nA {
extern "C" void _ZN12Unk_021cc8e8D1Ev() {}
}

namespace nA {
extern "C" void func_02077de4(void *) {
    func_0205ba1c();
    func_02077d58(data_021cc8e8);
    if (data_021c61ac != 0) {
        func_020e877c(data_021c61ac);
    }
}
}

namespace nA {
extern "C" void func_02077dcc() {
    func_02077d30(data_021cc8e8);
    func_0205ba00();
}
}

namespace nA {
extern "C" void *func_02077dc4(void **p, s32 i) {
    return p[i];
}
}

namespace nA {
extern "C" void func_02077d58(void **p) {
    void *heap = data_021c61ac;
    s32 t = Unk_02077d58_Count();
    s32 n = t + func_02084fbc();
    s32 i;
    for (i = 0; i < n; i++) {
        p[i] = Heap_AllocAligned(heap, 0x2f88, 4);
    }
}
}

namespace nA {
extern "C" void func_02077d30(void **p) {
    void *heap = data_021c61ac;
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
extern "C" void _ZN12Unk_021cc914C1Ev(void **p) {
    s32 i;
    for (i = 0; i < 8; i++) {
        p[i] = 0;
    }
}
}

namespace nA {
extern "C" void _ZN12Unk_021cc914D1Ev() {}
}

namespace nA {
extern "C" void func_02077cf4(void *) {
    func_0205b9c0();
    func_02077ca4(data_021cc914);
    if (data_021c61a8 != 0) {
        func_020e877c(data_021c61a8);
    }
}
}

namespace nA {
extern "C" void func_02077cdc() {
    func_02077c68(data_021cc914);
    func_0205b9a4();
}
}

namespace nA {
extern "C" void *func_02077cd4(void **p, s32 i) {
    return p[i];
}
}

namespace nA {
extern "C" void func_02077ca4(void **p) {
    void *heap = data_021c61a8;
    s32 i;
    for (i = 0; i < 8; i++) {
        p[i] = FrameHeap_Create(0x7ac, heap);
    }
}
}

namespace nA {
extern "C" void func_02077c68(void **p) {
    void *heap = data_021c61a8;
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
extern "C" void _ZN12Unk_021cc8b0C1Ev(void **p) {
    s32 i;
    for (i = 0; i < 4; i++) {
        p[i] = 0;
    }
}
}

namespace nA {
extern "C" void _ZN12Unk_021cc8b0D1Ev() {}
}

namespace nA {
extern "C" void func_02077c2c(void *) {
    func_0205b960();
    func_02077bd4(data_021cc8b0);
    if (data_021c61a4 != 0) {
        func_020e877c(data_021c61a4);
    }
}
}

namespace nA {
extern "C" void func_02077c14() {
    func_02077b98(data_021cc8b0);
    func_0205b944();
}
}

namespace nA {
extern "C" void *func_02077c0c(void **p, s32 i) {
    return p[i];
}
}

namespace nA {
extern "C" void func_02077bd4(void **p) {
    void *heap = data_021c61a4;
    s32 n = func_02084fbc();
    s32 i;
    for (i = 0; i < n; i++) {
        p[i] = FrameHeap_Create(0x7ac, heap);
    }
}
}

namespace nA {
extern "C" void func_02077b98(void **p) {
    void *heap = data_021c61a4;
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
extern "C" void func_02077b90(s32 *p) {
    *p = 5;
}
}

namespace nA {
extern "C" void func_02077b8c() {}
}

namespace nA {
extern "C" void func_02077b84(s32 *p, s32 v) {
    func_02077b80(p, v);
}
}

namespace nA {
extern "C" void func_02077b80(s32 *p, s32 v) {
    *p = v;
}
}

namespace nA {
extern "C" void func_02077b58(s32 *p, void *dst) {
    void *t = func_02077dc4(data_021cc8e8, *p);
    File_LoadToBuffer(dst, t, 0x2f88);
}
}

namespace nA {
extern "C" void *func_02077b44(s32 *p) {
    return func_02077dc4(data_021cc8e8, *p);
}
}

namespace nA {
extern "C" void func_02077b3c(s32 *p) {
    *p = 8;
}
}

namespace nA {
extern "C" void func_02077b38() {}
}

namespace nA {
extern "C" void func_02077b18(s32 *p, s32 x) {
    func_020e885c(func_02077cd4(data_021cc914, x));
    *p = x;
}
}

namespace nA {
extern "C" void *func_02077b04(s32 *p) {
    return func_02077cd4(data_021cc914, *p);
}
}

namespace nA {
extern "C" void func_02077afc(s32 *p) {
    *p = 4;
}
}

namespace nA {
extern "C" void func_02077af8() {}
}

namespace nA {
extern "C" void func_02077ad8(s32 *p, s32 x) {
    func_020e885c(func_02077c0c(data_021cc8b0, x));
    *p = x;
}
}

namespace nA {
extern "C" void *func_02077ac4(s32 *p) {
    return func_02077c0c(data_021cc8b0, *p);
}
}

namespace nZ {
extern "C" {
extern const Unk_020cc148_E data_020cc148[0x58];
const Unk_020cc148_E data_020cc148[0x58] = {
    {2, func_0207df10},
    {2, func_0207de6c},
    {0, func_0207dd24},
    {1, func_0207dd24},
    {0, func_0207dd08},
    {1, func_0207dd08},
    {0, func_0207dcf0},
    {1, func_0207dcf0},
    {0, func_0207dce4},
    {1, func_0207dce4},
    {0, func_0207dcd4},
    {1, func_0207dcd4},
    {2, func_0207dc98},
    {2, func_0207dc58},
    {2, func_0207dc1c},
    {2, func_0207dbe0},
    {2, func_0207db94},
    {2, func_0207db48},
    {2, func_0207dafc},
    {2, func_0207dab0},
    {2, func_0207da64},
    {2, func_0207da18},
    {2, func_0207d9cc},
    {2, func_0207d980},
    {2, func_0207d934},
    {2, func_0207d8e8},
    {2, func_0207d89c},
    {1, func_0207d820},
    {0, func_0207d820},
    {1, func_0207d7d8},
    {0, func_0207d7d8},
    {1, func_0207d7c0},
    {0, func_0207d7c0},
    {1, func_0207d7a8},
    {0, func_0207d7a8},
    {1, func_0207d774},
    {0, func_0207d774},
    {1, func_0207d75c},
    {0, func_0207d75c},
    {1, func_0207d744},
    {0, func_0207d744},
    {2, func_0207d724},
    {1, func_0207d714},
    {0, func_0207d714},
    {1, func_0207d704},
    {0, func_0207d704},
    {1, func_0207d6f4},
    {0, func_0207d6f4},
    {1, func_0207d6e8},
    {0, func_0207d6e8},
    {1, func_0207d6ac},
    {1, func_0207d6a4},
    {1, func_0207d67c},
    {1, func_0207d674},
    {0, func_0207d6ac},
    {0, func_0207d6a4},
    {0, func_0207d67c},
    {0, func_0207d674},
    {2, func_0207d650},
    {2, func_0207d62c},
    {2, func_0207d5fc},
    {2, func_0207d5cc},
    {2, func_0207d59c},
    {2, func_0207d578},
    {1, func_0207d4f8},
    {1, func_0207d494},
    {0, func_0207d430},
    {0, func_0207d3b0},
    {1, func_0207d320},
    {1, func_0207d2fc},
    {1, func_0207d344},
    {1, func_0207d2b4},
    {1, func_0207d290},
    {0, func_0207d320},
    {0, func_0207d2b4},
    {0, func_0207d344},
    {0, func_0207d290},
    {0, func_0207d2fc},
    {2, func_0207d264},
    {2, func_0207d238},
    {1, func_0207d20c},
    {0, func_0207d20c},
    {1, func_0207d1e4},
    {0, func_0207d1e4},
    {1, func_0207d1bc},
    {0, func_0207d1bc},
    {1, func_0207d1b8},
    {0, func_0207d1b8},
};
extern const u32 data_020cbfc0[3];
const u32 data_020cbfc0[3] = {
    0x00000000, 0x00000004, 0x00000003,
};
s32 data_020e05ac[3] = {-1, -1, -1};
extern const u8 data_020cc018[24];
const u8 data_020cc018[24] = {
    0x01, 0x13, 0x02, 0x12, 0x03, 0x14, 0x04, 0x13, 0x05, 0x14, 0x06, 0x15, 0x07, 0x16, 0x08, 0x16,
    0x09, 0x16, 0x0a, 0x17, 0x0b, 0x16, 0x0c, 0x15,
};
u8 data_021cc8c0[0x14];
Unk_021cc8b0 data_021cc8b0;
extern const u8 data_020cbfa8[8];
const u8 data_020cbfa8[8] = {
    0x00, 0x02, 0x0e, 0x10, 0x14, 0x00, 0x00, 0x00,
};
u8 data_021cc95c[0x28];
extern const u32 data_020cbff8[4];
const u32 data_020cbff8[4] = {
    0x00000190, 0x0000010e, 0x00000032, 0xffffffc4,
};
u8 data_021cc854[8];
u8 data_021cc8d4[0x14];
}
}

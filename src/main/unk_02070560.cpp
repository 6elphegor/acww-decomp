#include "types.h"
#include "save/PatternOrder.h"
#include "game/Unk_020702ec_Date.h"
#include "net/Unk_020720f8_Data.h"
#include "save/MuseumData.h"
#include "sys/RecordFile.h"
#include "save/Unk_020942c8.h"
#include "save/Pattern.h"
#include "room/HouseRoom.h"
#include "talk/EncodedString16Buf.h"
#include "room/HouseData.h"

// U125: design (pattern) storage and display helpers, 0x02070560-0x020720f8

class CommManager;
class EncodedString16Buf;
class Unk_020942c8;

namespace U125_calls {
extern "C" void EncodedString_SetRaw(EncodedString16Buf *o, u8 *src, s32 n);
extern "C" BOOL _ZN8PlayerId6equalsEPS_(Unk_020942c8 *self, Unk_020942c8 *o);
}

// ======== types of unk_0206fe80.cpp ========
struct Unk_02070248_Str {
    Unk_02070248_Str();
    ~Unk_02070248_Str();
    u32 pad[7];
};
struct Unk_02070248_Big {
    Unk_02070248_Big();
    ~Unk_02070248_Big();
    u8 d[0xf4];
};

// ======== types of unk_02070790.cpp ========
struct Unk_02070790_Game {
    u8 pad[0x64];
    s32 myAid;
};
struct Unk_02070e4c_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
    u32 f : 3;
};
struct ItemId {
    u16 v;
    u16 pad;
    ItemId() : v(0xfff1) {}
    ~ItemId();
};
struct Unk_020707ec_Grid {
    u8 *cells;
    s32 w;
    s32 h;
};
struct Unk_020707ec_Rooms {
    u8 pad[0x44];
};
class HouseData;
class HouseRoom;

// ======== types of unk_0207116c.cpp ========
struct Unk_02071460_Tbl { u8 pad[0xc]; u8 t[1]; };
struct PatternPaletteFile {
    u8 *fileData;
    u8 *unk_04[16];
    PatternPaletteFile();
    ~PatternPaletteFile();
    void unload();
    void load();
    void clear();
};
struct PatternTexKeys {
    u32 unk_00;
    PatternTexKeys();
    ~PatternTexKeys();
};
struct PatternTexCache {
    PatternTexKeys texKeys;
    PatternPaletteFile paletteFile;
    PatternTexCache();
    ~PatternTexCache();
    void reset();
    u8 *getPalette(s32 i);
    void load();
    void unload();
    BOOL loadPresetPattern(s32 n);
    void createTextures();
    void *getPresetPattern();
    void setAbleDirty(s32 bit);
    BOOL testAndClearAbleDirty(s32 bit);
    u32 getAbleTexKey(s32 i);
    u32 getPlayerTexKey(s32 a, s32 b);
};
struct Unk_02071460_Buf { u32 v[0xb1]; };
struct Unk_020719b0_B8 { u8 v[8]; };
struct Unk_020719b0_B16 { u8 v[16]; };
struct Unk_020719b0_B512 { u32 v[128]; };
struct Unk_020719b0 {
    Unk_020719b0_B512 a;
    u16 b;
    Unk_020719b0_B8 c;
    u16 d;
    Unk_020719b0_B8 e;
    s8 f;
    u8 g;
    Unk_020719b0_B16 h;
    u8 i;
};

// ======== types of unk_02071ae0.cpp ========
enum Unk_020720f8_Id { Unk_020720f8_Id_0 = 0 };


struct PatternPresetInfoFile {
    RecordFile file;
    PatternPresetInfoFile();
    ~PatternPresetInfoFile();
};

// design object sPresetPatternBuffer (0x228 bytes)
struct PresetPatternBuffer {
    Pattern pattern;
    PresetPatternBuffer();
    ~PresetPatternBuffer();
};


// ======== unk_02071ae0.cpp ========
namespace n4 {
extern "C" {
extern u32 OVERLAY_65_ID[];
}
extern "C" {
extern u32 OVERLAY_66_ID[];
}
extern "C" {
extern u32 OVERLAY_67_ID[];
}
extern "C" {
extern u16 data_020cb6f4;
}
extern "C" {
extern u16 data_020d03cc;
}
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
extern Unk_020720f8_Data gOverlayHandle;
}
extern "C" {
void *Mem_Alloc(u32 n);
}
extern "C" {
void Mem_Free(void *p);
}
extern "C" {
void AblePatternDefaults_Ctor(void *p);
}
extern "C" {
void PlayerPatternDefaults_Ctor(void *p);
}
extern "C" {
BOOL AblePatternDefaults_Extract(void *t, void *buf, s16 i);
}
extern "C" {
BOOL PlayerPatternDefaults_Extract(void *t, void *buf, s16 i);
}
extern "C" {
void AblePatternDefaults_Load(void *t);
}
extern "C" {
void PlayerPatternDefaults_Load(void *t);
}
extern "C" {
void *PatternPresetInfo_Get(void);
}
extern "C" {
void PatternPresetInfo_Apply(void *t, PatternInfo *s, s32 id);
}
extern "C" {
Unk_020942c8 *PlayerId_GetTownId(Unk_020942c8 *p);
}
extern "C" {
void TownId_SetId(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN8PlayerId5setIdEt(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN6TownId7setTownEPS_(Unk_020942c8 *a, Unk_020942c8 *b);
}
extern "C" {
s32 memcmp(void *a, void *b, u32 n);
}
extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}
extern "C" {
s32 Comm_AidToPeerIndex(s32 i);
}
extern "C" {
s32 Comm_IsWifi();
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
void *PatternTexCache_Get();
}
extern "C" {
void _ZN15PatternTexCache10getPaletteEi(void *p, u32 v);
}
extern "C" {
s32 Fatal_Trap();
}
extern "C" {
void _ZN13EncodedString13fromMsgStringEP9MsgString(EncodedString16Buf *o, void *x);
}
extern "C" {
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *dst, EncodedString16Buf *o, u32 a, u32 b);
}


}
BOOL PatternInfo::infoEquals(PatternInfo *o) {
    using namespace n4;
    if (tastePalette.lo == o->tastePalette.lo && tastePalette.hi == o->tastePalette.hi && townId == o->townId &&
        memcmp(&townName, &o->townName, 8) == 0 && U125_calls::_ZN8PlayerId6equalsEPS_(this, o) != 0) {
        for (u32 i = 0; i < 16; i++) {
            if (title.b[i] != o->title.b[i]) return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}
namespace n4 {
}
PatternInfo::PatternInfo() {
    using namespace n4;}
namespace n4 {
}
PatternInfo::~PatternInfo() {
    using namespace n4;}
namespace n4 {
}
void PatternInfo::getPaletteData() {
    using namespace n4;
    void *p = PatternTexCache_Get();
    _ZN15PatternTexCache10getPaletteEi(p, getPalette());
}
namespace n4 {
}
u8 PatternInfo::getPalette() {
    using namespace n4;
    u8 f = *(u8 *)&tastePalette;
    u32 t = (u32)(f << 24) >> 28;
    t &= 0xf;
    return t;
}
namespace n4 {
}
void PatternInfo::setPalette(u32 v) {
    using namespace n4;
    u8 &f = *(u8 *)&tastePalette;
    u32 t = v & 0xf;
    f = (f & ~0xf0) | ((u8)t & 0xf) << 4;
}
namespace n4 {
}
void PatternInfo::setAuthorToCurrentPlayer() {
    using namespace n4;
    setAuthor((Unk_020942c8 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
}
namespace n4 {
}
void PatternInfo::setAuthor(Unk_020942c8 *src) {
    using namespace n4;
    townId = src->townId;
    townName = src->townName;
    playerId = src->playerId;
    playerName = src->playerName;
    gender = src->gender;
    unk_15 = src->unk_15;
}
namespace n4 {
}
Unk_020942c8 *PatternInfo::getAuthor() {
    using namespace n4; return this; }
namespace n4 {
}
void PatternInfo::getTitle(void *x) {
    using namespace n4;
    EncodedString16Buf s;
    getTitleEncoded(&s);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(x, &s, 0, 0);
}
namespace n4 {
}
void PatternInfo::getTitleEncoded(EncodedString16Buf *o) {
    using namespace n4;
    U125_calls::EncodedString_SetRaw(o, title.b, 16);
}
namespace n4 {
}
void PatternInfo::getTitleRaw(u8 *dst) {
    using namespace n4;
    *(Unk_02071b10_Id16 *)dst = *(Unk_02071b10_Id16 *)&title;
}
namespace n4 {
}
void PatternInfo::setTitle(void *x) {
    using namespace n4;
    EncodedString16Buf s;
    _ZN13EncodedString13fromMsgStringEP9MsgString(&s, x);
    setTitleEncoded(&s);
}
namespace n4 {
}
void PatternInfo::setTitleEncoded(EncodedString16Buf *o) {
    using namespace n4;
    o->copyTo(title.b, 16);
}
namespace n4 {
}
void PatternInfo::setTitleRaw(u8 *src) {
    using namespace n4;
    *(Unk_02071b10_Id16 *)&title = *(Unk_02071b10_Id16 *)src;
}
namespace n4 {
}
u8 PatternInfo::getTaste() {
    using namespace n4;
    return tastePalette.lo;
}
namespace n4 {
}
void PatternInfo::setTaste(u32 v) {
    using namespace n4;
    u8 &f = *(u8 *)&tastePalette;
    f = (f & ~0xf) | ((u8)v & 0xf);
}
namespace n4 {
}
BOOL Pattern::equals(Pattern *o) {
    using namespace n4;
    if (info.infoEquals(&o->info)) {
        u32 *p = (u32 *)this;
        u32 *q = (u32 *)o;
        for (u32 i = 0; i < 0x80; i++) {
            if (*p != *q) return FALSE;
            p++;
            q++;
        }
        return TRUE;
    }
    return FALSE;
}
namespace n4 {
}
Pattern::Pattern() {
    using namespace n4;}
namespace n4 {
}
Pattern::~Pattern() {
    using namespace n4;}
namespace n4 {
}
u8 *Pattern::getPixels() {
    using namespace n4; return (u8 *)this; }
namespace n4 {
}
void Pattern::setPixels(void *dst) {
    using namespace n4;
    MI_CpuCopy8(dst, getPixels(), 0x200);
}
namespace n4 {
}
void Pattern::fill(u32 v) {
    using namespace n4;
    u8 b = v | (v << 4);
    u32 w = (b << 24) | ((b << 16) | (b | (b << 8)));
    u32 *p = (u32 *)this;
    u32 *end = (u32 *)((u8 *)this + 0x200);
    while (p < end) *p++ = w;
}
namespace n4 {
}
PatternInfo *Pattern::getInfo() {
    using namespace n4;
    return &info;
}
namespace n4 {
}
PlayerPatterns::PlayerPatterns() {
    using namespace n4;}
namespace n4 {
}
PlayerPatterns::~PlayerPatterns() {
    using namespace n4;}
namespace n4 {
}
void PlayerPatterns::initDefaultPatterns(Unk_020942c8 *a) {
    using namespace n4;
    void *t = Mem_Alloc(0x1000);
    if (t) {
        if (t) PlayerPatternDefaults_Ctor(t);
        PlayerPatternDefaults_Load(t);
        for (s16 i = 0; (u32)i < 8; i++) {
            PlayerPatternDefaults_Extract(t, getPattern(i)->getPixels(), i);
            void *tbl = PatternPresetInfo_Get();
            PatternPresetInfo_Apply(tbl, getPattern(i)->getInfo(), i);
            getPattern(i)->getInfo()->setAuthor(a);
        }
        Mem_Free(t);
    }
    patternOrder.reset();
}
namespace n4 {
}
void PlayerPatterns::replaceAuthorTown(Unk_020942c8 *a, Unk_020942c8 *b) {
    using namespace n4;
    for (u8 i = 0; i < 8; i++) {
        PatternInfo *s = getPattern(i)->getInfo();
        Unk_020942c8 *base = s->getAuthor();
        Unk_020942c8 *p = PlayerId_GetTownId(base);
        if (p->townId == b->townId) {
            if (memcmp(&p->townName, &b->townName, 8) == 0) {
                if (U125_calls::_ZN8PlayerId6equalsEPS_(base, a)) {
                    _ZN6TownId7setTownEPS_(s->getAuthor(), PlayerId_GetTownId(a));
                }
            }
        }
    }
}
namespace n4 {
}
Pattern *PlayerPatterns::getPattern(u8 i) {
    using namespace n4;
    return &patterns[i & 7];
}
namespace n4 {
}
Pattern *PlayerPatterns::getPatternByOrder(u32 i) {
    using namespace n4;
    return &patterns[patternOrder.getSlot(i)];
}
namespace n4 {
}
PatternOrder *PlayerPatterns::getPatternOrder() {
    using namespace n4;
    return &patternOrder;
}
namespace n4 {
}
PatternOrder::PatternOrder() {
    using namespace n4;}
namespace n4 {
}
PatternOrder::~PatternOrder() {
    using namespace n4;}
namespace n4 {
}
void PatternOrder::reset() {
    using namespace n4;
    for (u8 i = 0; i < 8; i++) unk_00[i] = i;
}
namespace n4 {
}
void PatternOrder::swap(u32 a, u32 b) {
    using namespace n4;
    u8 t = unk_00[a & 7];
    unk_00[a & 7] = unk_00[b & 7];
    unk_00[b & 7] = t;
}
namespace n4 {
}
u32 PatternOrder::getSlot(u32 i) {
    using namespace n4;
    return (u8)(unk_00[i & 7] & 7);
}
namespace n4 {
}
AbleSistersPatterns::AbleSistersPatterns() {
    using namespace n4;}
namespace n4 {
}
AbleSistersPatterns::~AbleSistersPatterns() {
    using namespace n4;}
namespace n4 {
}
// ---- callers first
void AbleSistersPatterns::initDefaultPatterns() {
    using namespace n4;
    void *t = Mem_Alloc(0x1000);
    if (t) {
        if (t) AblePatternDefaults_Ctor(t);
        AblePatternDefaults_Load(t);
        u16 g1 = data_020cb6f4;
        u16 g2 = data_020d03cc;
        for (s16 i = 0; (u32)i < 8; i++) {
            AblePatternDefaults_Extract(t, getPattern(i)->getPixels(), i);
            void *tbl = PatternPresetInfo_Get();
            PatternPresetInfo_Apply(tbl, getPattern(i)->getInfo(), i + 8);
            TownId_SetId(PlayerId_GetTownId(getPattern(i)->getInfo()->getAuthor()), g1);
            _ZN8PlayerId5setIdEt(getPattern(i)->getInfo()->getAuthor(), g2);
        }
        Mem_Free(t);
    }
}
namespace n4 {
}
Pattern *AbleSistersPatterns::getPattern(u8 i) {
    using namespace n4;
    return &patterns[i & 7];
}
namespace n4 {
}
TownFlagPattern::TownFlagPattern() {
    using namespace n4;}
namespace n4 {
}
TownFlagPattern::~TownFlagPattern() {
    using namespace n4;}
namespace n4 {
}

// ======== unk_0207116c.cpp ========
namespace n3 {
extern "C" {
void Gfx2d_TilesToLinear4bpp(void *src, void *dst, s32 w, s32 h);
}
extern "C" {
void Gfx2d_TilesInRow32ToLinear(void *src, void *dst, s32 x, s32 w, s32 h);
}
extern "C" {
void File_LoadToBuffer(char *name, void *p, u32 size);
}
extern "C" {
s32 func_020639e8(char *buf, const char *fmt, ...);
}
extern "C" {
void *File_Load(void *p);
}
extern "C" {
void *_ZN10RecordFile9getRecordEj(void *, s32);
}
extern "C" {
s32 _ZN10RecordFile5closeEv(void *);
}
extern "C" {
s32 _ZN10RecordFile4openEPvii(void *, void *, s32, s32);
}
extern "C" {
void _ZN10RecordFileD1Ev(void *);
}
extern "C" {
void _ZN10RecordFileC1Ev(void *);
}
extern "C" {
s32 PlayerData_GetBySessionSlot(s32 a);
}
extern "C" {
s32 _ZN10PlayerData8getIndexEv(s32 p);
}
extern "C" {
void PatternTex_UploadPlayer(u32 a, s32 b);
}
extern "C" {
void PatternTex_UploadAble(s32 a);
}
extern "C" {
s32 Scene_GetCurrent(void);
}
extern "C" {
s32 Scene_InTown(void);
}
extern "C" {
void *BuildingList_FindByItem(u32 a);
}
extern "C" {
void GateHouse_ApplyTownFlag(void);
}
extern "C" {
void Mem_Free(void *p);
}
extern "C" {
void *Mem_Alloc(u32 size);
}
extern "C" {
void Heap_Free(void *heap, void *p);
}
extern "C" {
void *Heap_Alloc(void *heap, u32 size);
}
extern "C" {
void ClothTex_Construct(void *p);
}
extern "C" {
void ClothTex_LoadItem(void *self, u16 *p, void *q);
}
extern "C" {
void *PlayerData_GetResident(void *tbl, s32 i);
}
extern "C" {
void *_ZN10PlayerData11getPatternsEv(void *p);
}
extern "C" {
void *_ZN14PlayerPatterns10getPatternEh(void *p, u32 i);
}
extern "C" {
void *ClothTex_GetTexData(void *unused);
}
extern "C" {
void *_ZN7Pattern9getPixelsEv(void *p);
}
extern "C" {
void *ClothTex_GetPlttData(void *unused);
}
extern "C" {
void *_ZN7Pattern7getInfoEv(void *p);
}
extern "C" {
void *_ZN11PatternInfo14getPaletteDataEv(void *p);
}
extern "C" {
void *ClothTex_GetTex(void *);
}
extern "C" {
s32 Gfx3d_LoadTexAndPltt(void *a, u32 b);
}
extern "C" {
void *ResCache_GetTex(void *a, u32 key);
}
extern "C" {
s32 ClothTex_LoadPattern(void *a, void *b);
}
extern "C" {
void *_ZN19AbleSistersPatterns10getPatternEh(void *tbl, u32 i);
}
extern "C" {
void _ZN15TexPatVramTasksC1Ev(void *p);
}
extern "C" {
void *_ZN11PatternInfo9getAuthorEv(void *p);
}
extern "C" {
void *PlayerId_GetTownId(void *p);
}
extern "C" {
void TownId_SetId(u16 *p, u16 v);
}
extern "C" {
void _ZN8PlayerId5setIdEt(void *p, u16 v);
}
extern "C" {
void _ZN7PatternD1Ev(void *p);
}
extern "C" {
void _ZN7PatternC1Ev(void *p);
}
extern "C" {
void _ZN11PatternInfo8setTitleEPv(void *a, void *b);
}
extern "C" {
void _ZN11PatternInfo10setPaletteEj(void *a, u32 b);
}
extern "C" {
void _ZN11PatternInfo8setTasteEj(void *a, u32 b);
}
extern "C" {
void _ZN11PatternInfo9setAuthorEP12Unk_020942c8(void *a, void *b);
}
extern "C" {
void _ZN9MsgString3setEPh(void *dst, void *src);
}
extern "C" {
void _ZN8PlayerId13setNameStringEP9MsgString(void *a, void *b);
}
extern "C" {
void _ZN6TownId7setTownEPS_(void *a, void *b);
}
extern "C" {
void TownId_SetNameString(void *a, void *b);
}
extern "C" {
void _ZN11MsgString9BC1Ev(void *);
}
extern "C" {
void _ZN11MsgString9BD1Ev(void *);
}
extern "C" {
void _ZN8PlayerIdC1EPv(void *);
}
extern "C" {
void _ZN8PlayerIdC1Ev(void *);
}
extern "C" {
void TownId_Construct(void *);
}
extern "C" {
void TownId_Destruct(void *);
}
extern "C" {
void _ZN11MsgString9CC2Ev(void *);
}
extern "C" {
void _ZN11MsgString9CD1Ev(void *);
}
extern "C" {
void _ZN8ItemNameC1Ev(void *);
}
extern "C" {
void _ZN8ItemNameD1Ev(void *);
}
extern "C" {
extern u8 gFieldSceneKind[];
}
extern "C" {
extern char data_020e04ac[];
}
extern "C" {
extern char data_020e04c4[];
}
extern "C" {
extern char data_020e04dc[];
}
extern "C" {
extern char data_020e04f8[];
}
extern "C" {
extern char data_020e0514[];
}
extern "C" {
extern char data_020e0524[];
}
extern "C" {
extern u8 sPatternPresetInfo[];
}
extern "C" {
extern u32 sAblePatternTexKeys[8];
}
extern "C" {
extern u32 sPlayerPatternTexKeys[4][8];
}
extern "C" {
extern u8 sPatternTexCache[];
}
extern "C" {
extern u8 sPresetPatternBuffer[];
}
extern "C" {
extern u8 sAbleDisplayDirtyBits;
}
extern "C" {
extern u8 data_021cbcac[4];
}
extern "C" {
extern Unk_02071460_Tbl gSaveData;
}
extern "C" {
extern void *gCurrentHeap;
}
extern "C" {
extern u8 *sPlayerPatternTexWork;
}
extern "C" {
extern u8 *sPlayerPatternVramTasks;
}
extern "C" {
extern u8 *sAblePatternTexWork;
}
extern "C" {
extern u8 *sAblePatternVramTasks;
}
extern "C" {
extern u16 data_020cb6f4;
}
extern "C" {
extern u16 data_020d03d0;
}
extern "C" {
void PatternTexKeys_Clear(void *p);
}
extern "C" {
void PatternTexCache_ResetKeys(void *p);
}
extern "C" {
void *PatternTexCache_Get(void);
}
extern "C" {
void *PatternPresetInfo_Get(void);
}
static inline BOOL Unk_0207116c_Eq1(u8 *p) { return *p == 1 ? TRUE : FALSE; }
static inline BOOL Unk_0207116c_Eq0(u8 *p) { return *p == 0 ? TRUE : FALSE; }
namespace Unk_020718c0_Calls {
extern "C" s32 PatternTexCache_ClearDirty(void *p);
}
namespace Unk_02071a50_Calls {
extern "C" void *TownFlagPattern_GetPattern(void *p);
extern "C" void TownId_Assign(void *p, void *q);
extern "C" u16 data_020d03d4;
struct Unk_021d7350 {
    u16 unk_00;
    u16 townId[1];
};
extern "C" Unk_021d7350 gSaveData;
}

extern "C" void TownFlagPattern_InitDefault(void *self);
extern "C" void TownFlagPattern_GetPattern(void);
extern "C" void Pattern_CopyFields(Unk_020719b0 *dst, Unk_020719b0 *src);
extern "C" void *PresetPatternBuffer_Get(void);
extern "C" void PatternTexCache_ClearDirty(void *p);
extern "C" void *PatternTexCache_Get(void);
extern "C" u8 *PatternPaletteFile_GetPalette(u8 **self, s32 i);
extern "C" void PatternTexKeys_Clear(void *p);
extern "C" void PatternTexCache_ResetKeys(void *p);
extern "C" u32 PatternTexKeys_GetPlayer(void *self, s32 a, s32 b);
extern "C" u32 PatternTexKeys_GetAble(void *self, s32 i);
extern "C" void PatternPresetInfo_Open(void *p);
extern "C" s32 PatternPresetInfo_Close(void *p);
extern "C" BOOL PatternPresetInfo_Apply(void *tbl, void *dst, s32 idx);
extern "C" void *PatternPresetInfo_Get(void);
extern "C" void PlayerPatternDefaults_Ctor(void *p);
extern "C" void PlayerPatternDefaults_Load(void *p);
extern "C" BOOL PlayerPatternDefaults_Extract(void *a, void *b, s32 x);
extern "C" void AblePatternDefaults_Ctor(void *p);
extern "C" void AblePatternDefaults_Load(void *p);
extern "C" BOOL AblePatternDefaults_Extract(void *a, void *b, s32 x);
extern "C" void TownFlagPatternDefault_Ctor(void *p);
extern "C" void TownFlagPatternDefault_Load(void *p);
extern "C" BOOL TownFlagPatternDefault_Extract(void *a, void *b);
extern "C" void PresetPatternFile_Ctor(void *p);
extern "C" void PresetPatternFile_Load(void *dst, s32 n);
extern "C" BOOL PresetPatternFile_Extract(void *a, void *b);
extern "C" BOOL PatternSrc_OnChanged(s32 cmd, s32 x);

extern "C" void TownFlagPattern_InitDefault(void *self) {
    void *buf = Mem_Alloc(0x200);
    if (buf != 0) {
        if (buf != 0) TownFlagPatternDefault_Ctor(buf);
        TownFlagPatternDefault_Load(buf);
        TownFlagPatternDefault_Extract(buf, _ZN7Pattern9getPixelsEv(Unk_02071a50_Calls::TownFlagPattern_GetPattern(self)));
        void *g = PatternPresetInfo_Get();
        PatternPresetInfo_Apply(g, _ZN7Pattern7getInfoEv(Unk_02071a50_Calls::TownFlagPattern_GetPattern(self)), 0x10);
        Unk_02071a50_Calls::TownId_Assign(
            PlayerId_GetTownId(_ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(Unk_02071a50_Calls::TownFlagPattern_GetPattern(self)))),
            Unk_02071a50_Calls::gSaveData.townId);
        _ZN8PlayerId5setIdEt(_ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(Unk_02071a50_Calls::TownFlagPattern_GetPattern(self))),
                      Unk_02071a50_Calls::data_020d03d4);
        Mem_Free(buf);
    }
}
extern "C" void TownFlagPattern_GetPattern(void) {}
extern "C" void Pattern_CopyFields(Unk_020719b0 *dst, Unk_020719b0 *src) {
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->e = src->e;
    dst->f = src->f;
    dst->g = src->g;
    dst->h = src->h;
    dst->i = src->i;
}
}
PresetPatternBuffer::PresetPatternBuffer() {
    using namespace n3;}
namespace n3 {
}
PresetPatternBuffer::~PresetPatternBuffer() {
    using namespace n3;}
namespace n3 {
}
BOOL PatternTexCache::loadPresetPattern(s32 n) {
    using namespace n3;
    if ((u32)n < 0x20) {
        void *buf = Mem_Alloc(0x200);
        if (buf != 0) {
            if (buf != 0) PresetPatternFile_Ctor(buf);
            PresetPatternFile_Load(buf, n);
            PresetPatternFile_Extract(buf, _ZN7Pattern9getPixelsEv(getPresetPattern()));
            void *g = PatternPresetInfo_Get();
            PatternPresetInfo_Apply(g, _ZN7Pattern7getInfoEv(getPresetPattern()), n + 0x12);
            TownId_SetId((u16 *)PlayerId_GetTownId(_ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(getPresetPattern()))), data_020cb6f4);
            _ZN8PlayerId5setIdEt(_ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(getPresetPattern())), data_020d03d0);
            Mem_Free(buf);
        }
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
void *PatternTexCache::getPresetPattern() {
    using namespace n3; return this; }
namespace n3 {
extern "C" void *PresetPatternBuffer_Get(void) { return sPresetPatternBuffer; }
}
void PatternTexCache::reset() {
    using namespace n3;
    paletteFile.clear();
    PatternTexKeys_Clear(this);
    Unk_020718c0_Calls::PatternTexCache_ClearDirty(this);
}
namespace n3 {
}
PatternTexCache::PatternTexCache() {
    using namespace n3; reset(); }
namespace n3 {
}
PatternTexCache::~PatternTexCache() {
    using namespace n3;}
namespace n3 {
extern "C" void PatternTexCache_ClearDirty(void *p) {
    u32 i;
    for (i = 0; i < 4; i++) data_021cbcac[i] = 0;
    sAbleDisplayDirtyBits = 0;
}
}
void PatternTexCache::setAbleDirty(s32 bit) {
    using namespace n3; sAbleDisplayDirtyBits |= 1 << bit; }
namespace n3 {
}
BOOL PatternTexCache::testAndClearAbleDirty(s32 bit) {
    using namespace n3;
    BOOL r;
    if (((sAbleDisplayDirtyBits >> bit) & 1) == 0) r = FALSE; else r = TRUE;
    sAbleDisplayDirtyBits &= ~(1 << bit);
    return r;
}
namespace n3 {
}
void PatternTexCache::load() {
    using namespace n3;
    reset();
    paletteFile.load();
    createTextures();
    void *h = gCurrentHeap;
    u8 *a, *b, *c, *d;
    u32 i, j;
    sPlayerPatternTexWork = (u8 *)Heap_Alloc(h, 0x1620);
    b = (u8 *)Heap_Alloc(h, 0x1c0);
    sPlayerPatternVramTasks = b;
    a = sPlayerPatternTexWork;
    for (i = 0; i < 8; i++) {
        if (a != 0) ClothTex_Construct(a);
        if (b != 0) _ZN15TexPatVramTasksC1Ev(b);
        a += 0x2c4;
        b += 0x38;
    }
    sAblePatternTexWork = (u8 *)Heap_Alloc(h, 0x1620);
    d = (u8 *)Heap_Alloc(h, 0x1c0);
    sAblePatternVramTasks = d;
    c = sAblePatternTexWork;
    for (j = 0; j < 8; j++) {
        if (c != 0) ClothTex_Construct(c);
        if (d != 0) _ZN15TexPatVramTasksC1Ev(d);
        c += 0x2c4;
        d += 0x38;
    }
}
namespace n3 {
}
void PatternTexCache::unload() {
    using namespace n3;
    paletteFile.unload();
    n3::PatternTexCache_ResetKeys(this);
    void *h = gCurrentHeap;
    if (sPlayerPatternTexWork != 0) {
        Heap_Free(h, sPlayerPatternTexWork);
        sPlayerPatternTexWork = 0;
    }
    if (sPlayerPatternVramTasks != 0) {
        Heap_Free(h, sPlayerPatternVramTasks);
        sPlayerPatternVramTasks = 0;
    }
    if (sAblePatternTexWork != 0) {
        Heap_Free(h, sAblePatternTexWork);
        sAblePatternTexWork = 0;
    }
    if (sAblePatternVramTasks != 0) {
        Heap_Free(h, sAblePatternVramTasks);
        sAblePatternVramTasks = 0;
    }
}
namespace n3 {
}
u32 PatternTexCache::getPlayerTexKey(s32 a, s32 b) {
    using namespace n3; return PatternTexKeys_GetPlayer(this, a, b); }
namespace n3 {
}
u32 PatternTexCache::getAbleTexKey(s32 i) {
    using namespace n3; return PatternTexKeys_GetAble(this, i); }
namespace n3 {
}
u8 *PatternTexCache::getPalette(s32 i) {
    using namespace n3; return PatternPaletteFile_GetPalette((u8 **)&paletteFile, i); }
namespace n3 {
extern "C" void *PatternTexCache_Get(void) { return sPatternTexCache; }
}
void PatternPaletteFile::clear() {
    using namespace n3;
    fileData = 0;
    for (u32 i = 0; i < 16; i++) unk_04[i] = 0;
}
namespace n3 {
}
PatternPaletteFile::PatternPaletteFile() {
    using namespace n3; clear(); }
namespace n3 {
}
PatternPaletteFile::~PatternPaletteFile() {
    using namespace n3;}
namespace n3 {
}
void PatternPaletteFile::load() {
    using namespace n3;
    if (fileData == 0) {
        fileData = (u8 *)File_Load((void *)"/menu/desi/b_myd_ten0_obj.bpl");
        if (fileData != 0) {
            for (u32 i = 0; i < 16; i++) unk_04[i] = fileData + i * 32;
        }
    }
}
namespace n3 {
}
void PatternPaletteFile::unload() {
    using namespace n3;
    if (fileData != 0) {
        Mem_Free(fileData);
        fileData = 0;
    }
    clear();
}
namespace n3 {
extern "C" u8 *PatternPaletteFile_GetPalette(u8 **self, s32 i) { return *(u8 **)((u8 *)self + ((i & 15) << 2) + 4); }
}
PatternTexKeys::PatternTexKeys() {
    using namespace n3; PatternTexKeys_Clear(this); }
namespace n3 {
}
PatternTexKeys::~PatternTexKeys() {
    using namespace n3;}
namespace n3 {
extern "C" void PatternTexKeys_Clear(void *p) {
    u8 i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 8; j++) sPlayerPatternTexKeys[i][j] = 0;
    for (j = 0; j < 8; j++) sAblePatternTexKeys[j] = 0;
}
}
void PatternTexCache::createTextures() {
    using namespace n3;
    Unk_02071460_Buf *a = (Unk_02071460_Buf *)Mem_Alloc(0x2c4);
    Unk_02071460_Buf *b = (Unk_02071460_Buf *)Mem_Alloc(0x2c4);
    if (a != 0) {
        if (b != 0) {
            u8 i, j;
            u32 k1, k2;
            u16 v;
            s32 t;
            void *e;
            u32 *row;
            u8 *src, *p;
            u16 *q, *sp;
            if (a != 0) ClothTex_Construct(a);
            if (b != 0) ClothTex_Construct(b);
            v = 0x11a8;
            ClothTex_LoadItem(a, &v, 0);
            i = 0;
        loop1:
            {
                j = 0;
                row = (u32 *)sPlayerPatternTexKeys + i * 8;
            loop0:
                e = _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(PlayerData_GetResident(((Unk_02071460_Tbl *)(u32)&gSaveData)->t, i)), j);
                *b = *a;
                p = (u8 *)ClothTex_GetTexData(b);
                src = (u8 *)_ZN7Pattern9getPixelsEv(e);
                for (k1 = 0; k1 < 0x200; k1++) *p++ = *src++;
                q = (u16 *)ClothTex_GetPlttData(b);
                sp = (u16 *)_ZN11PatternInfo14getPaletteDataEv(_ZN7Pattern7getInfoEv(e));
                for (k2 = 0; k2 < 0x10; k2++) *q++ = *sp++;
                if (Gfx3d_LoadTexAndPltt(ClothTex_GetTex(b), 0)) {
                    row[j] = (u32)ResCache_GetTex(ClothTex_GetTex(b), 0x4e554c4c);
                }
                j++;
                if (j < 8) goto loop0;
            }
            i++;
            if (i < 4) goto loop1;
            t = Scene_GetCurrent();
            if (t == 10) {
                for (j = 0; j < 8; j++) {
                    ClothTex_LoadPattern(b, _ZN19AbleSistersPatterns10getPatternEh((u8 *)&gSaveData + 0xfafc, j));
                    if (Gfx3d_LoadTexAndPltt(ClothTex_GetTex(b), 0)) {
                        sAblePatternTexKeys[j] = (u32)ResCache_GetTex(ClothTex_GetTex(b), 0x4e554c4c);
                    }
                }
            }
            Mem_Free(a);
            Mem_Free(b);
        }
    }
}
namespace n3 {
extern "C" void PatternTexCache_ResetKeys(void *p) { PatternTexKeys_Clear(p); }
extern "C" u32 PatternTexKeys_GetPlayer(void *self, s32 a, s32 b) { return sPlayerPatternTexKeys[a & 3][b & 7]; }
extern "C" u32 PatternTexKeys_GetAble(void *self, s32 i) { return sAblePatternTexKeys[i & 7]; }
}
PatternPresetInfoFile::PatternPresetInfoFile() {
    using namespace n3;}
namespace n3 {
}
PatternPresetInfoFile::~PatternPresetInfoFile() {
    using namespace n3;}
namespace n3 {
extern "C" void PatternPresetInfo_Open(void *p) { _ZN10RecordFile4openEPvii(p, (void *)"/myOrg/myD.bin", 0x2c, 0x32); }
extern "C" s32 PatternPresetInfo_Close(void *p) { return _ZN10RecordFile5closeEv(p); }
extern "C" BOOL PatternPresetInfo_Apply(void *tbl, void *dst, s32 idx) {
    if (idx < 0x32) {
        u8 *rec = (u8 *)_ZN10RecordFile9getRecordEj(tbl, idx);
        if (rec != 0) {
            struct { u8 o0[0x24]; u8 o1[0x1c]; u8 o2[0x1c]; u8 o3[8]; u16 pad; u8 o4[0x16]; } l;
            _ZN8ItemNameC1Ev(l.o0);
            _ZN9MsgString3setEPh(l.o0, rec + 2);
            _ZN11PatternInfo8setTitleEPv(dst, l.o0);
            _ZN11PatternInfo10setPaletteEj(dst, rec[0]);
            _ZN11PatternInfo8setTasteEj(dst, rec[1]);
            _ZN11MsgString9CC2Ev(l.o1);
            _ZN9MsgString3setEPh(l.o1, rec + 0x1e);
            _ZN11MsgString9BC1Ev(l.o2);
            _ZN9MsgString3setEPh(l.o2, rec + 0x13);
            TownId_Construct(l.o3);
            TownId_SetNameString(l.o3, l.o1);
            _ZN8PlayerIdC1EPv(l.o4);
            _ZN8PlayerId13setNameStringEP9MsgString(l.o4, l.o2);
            _ZN6TownId7setTownEPS_(l.o4, l.o3);
            _ZN11PatternInfo9setAuthorEP12Unk_020942c8(dst, l.o4);
            _ZN8PlayerIdC1Ev(l.o4);
            TownId_Destruct(l.o3);
            _ZN11MsgString9BD1Ev(l.o2);
            _ZN11MsgString9CD1Ev(l.o1);
            _ZN8ItemNameD1Ev(l.o0);
            return TRUE;
        }
    }
    return FALSE;
}
extern "C" void *PatternPresetInfo_Get(void) { return sPatternPresetInfo; }
extern "C" void PlayerPatternDefaults_Ctor(void *p) {}
extern "C" void PlayerPatternDefaults_Load(void *p) { File_LoadToBuffer("menu/desi/b_myd_my_obj.bch", p, 0x1000); }
extern "C" BOOL PlayerPatternDefaults_Extract(void *a, void *b, s32 x) {
    if (x < 0 || x >= 8) return FALSE;
    Gfx2d_TilesInRow32ToLinear(a, b, x * 4, 4, 4);
    return TRUE;
}
extern "C" void AblePatternDefaults_Ctor(void *p) {}
extern "C" void AblePatternDefaults_Load(void *p) { File_LoadToBuffer("menu/desi/b_myd_bu_obj.bch", p, 0x1000); }
extern "C" BOOL AblePatternDefaults_Extract(void *a, void *b, s32 x) {
    if (x < 0 || x >= 8) return FALSE;
    Gfx2d_TilesInRow32ToLinear(a, b, x * 4, 4, 4);
    return TRUE;
}
extern "C" void TownFlagPatternDefault_Ctor(void *p) {}
extern "C" void TownFlagPatternDefault_Load(void *p) { File_LoadToBuffer("menu/desi/myc/obj0.bch", p, 0x200); }
extern "C" BOOL TownFlagPatternDefault_Extract(void *a, void *b) {
    Gfx2d_TilesToLinear4bpp(a, b, 4, 4);
    return TRUE;
}
extern "C" void PresetPatternFile_Ctor(void *p) {}
extern "C" void PresetPatternFile_Load(void *dst, s32 n) {
    char buf[0x28];
    func_020639e8(buf, "menu/desi/myc/obj%d.bch", n + 2);
    File_LoadToBuffer(buf, dst, 0x200);
}
extern "C" BOOL PresetPatternFile_Extract(void *a, void *b) {
    Gfx2d_TilesToLinear4bpp(a, b, 4, 4);
    return TRUE;
}
extern "C" BOOL PatternSrc_OnChanged(s32 cmd, s32 x) {
    switch (cmd) {
    case 0:
    case 9: {
        s32 t = PlayerData_GetBySessionSlot(0);
        if (t != 0) {
            s32 v = _ZN10PlayerData8getIndexEv(t);
            if (v != -1) PatternTex_UploadPlayer((u8)(v & 3), x);
        }
        return TRUE;
    }
    case 4:
        if (Unk_0207116c_Eq1(gFieldSceneKind)) {
            if (Scene_GetCurrent() == 10) {
                PatternTex_UploadAble(x);
                ((PatternTexCache *)PatternTexCache_Get())->setAbleDirty(x & 7);
            }
        }
        return TRUE;
    case 5:
        if (Unk_0207116c_Eq0(gFieldSceneKind)) {
            if (Scene_InTown()) {
                if (BuildingList_FindByItem(0x500b)) GateHouse_ApplyTownFlag();
            }
        }
        return TRUE;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    default:
        return FALSE;
    }
}
}

// ======== unk_02070790.cpp ========
namespace n2 {
static inline BOOL Unk_02070fbc_In(volatile u16 *p, u32 lo, u32 hi) {
    u32 v = *p;
    u32 w = *p;
    BOOL r = FALSE;
    if (w >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}
extern "C" {
extern Unk_02070790_Game *gCommManager;
}
extern "C" {
extern u8 gSaveVillagers[];
}
extern "C" {
extern u8 data_021ed2d4[];
}
extern "C" {
extern u8 gSaveAbleSistersPatterns[];
}
extern "C" {
extern HouseData gSaveHouse;
}
extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *p);
}
extern "C" {
void *PlayerData_GetBySessionSlot(s32 a);
}
extern "C" {
void *_ZN10PlayerData11getPatternsEv(void *p);
}
extern "C" {
s32 _ZN14PlayerPatterns10getPatternEh(void *p, s32 i);
}
extern "C" {
Unk_020707ec_Grid *TownBlockMap_Get(void);
}
extern "C" {
Unk_020707ec_Grid *HouseRoomMaps_Get(s32 i);
}
extern "C" {
u16 *MapBlock_GetItemPtr(void *cell, s32 x, s32 y, s32 z);
}
extern "C" {
BOOL MapBlock_SetItem(void *cell, u16 *t, s32 x, s32 y, s32 v);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void *PatternSrc_Get(s32 t, s32 i);
}
extern "C" {
void PatternSrc_OnChanged(s32 t, s32 i);
}
extern "C" {
void _ZN11CommManager11beginRecordEv(void *g);
}
extern "C" {
void _ZN11CommManager11writeRecordEPhj(void *g, void *p, s32 n);
}
extern "C" {
void _ZN11CommManager9endRecordEjj(void *g, s32 a, s32 n);
}
extern "C" {
void *SaveVillagers_Get(void *a, s32 x);
}
extern "C" {
s32 _ZN12VillagerData13getVillagerIdEv(void *p);
}
extern "C" {
s32 _ZN10VillagerId7isValidEv(s32 p);
}
extern "C" {
u8 *Villager_GetFashionTaste(void *p);
}
extern "C" {
s32 Villager_GetPlan(void *p);
}
extern "C" {
s32 VillagerPlanBlock_GetPlan(s32 p);
}
extern "C" {
s32 _ZN12VillagerPlan8getStateEv(s32 p);
}
extern "C" {
s32 Random_GlobalBelow(s32 n);
}
extern "C" {
void AbleShop_GetItem(void *tbl, s32 i, u16 *out);
}
extern "C" {
void Item_FromPlacedForm(u16 *dst, u16 *src);
}
extern "C" {
s32 _ZN19AbleSistersPatterns10getPatternEh(void *p, s32 i);
}
extern "C" {
s32 _ZN7Pattern7getInfoEv(s32 p);
}
extern "C" {
s32 _ZN11PatternInfo8getTasteEv(s32 p);
}
extern "C" {
s32 PatternSrc_ResolveKind(s32 t);
}
extern "C" {
s32 PatternSrc_GetSessionPlayer(s32 a, s32 b);
}
extern "C" {
BOOL PatternSrc_Swap(u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
BOOL PatternSrc_Copy(u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
BOOL Villager_MaybeCopyAblePattern(s32 a, s32 b);
}
extern "C" {
void Pattern_RemovePlayerItems(s32 p);
}
extern "C" {
static inline s32 Unk_020707ec_K(u16 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return (s32)(v - lo) >> 2;
    }
    return -1;
}
}
extern "C" {
static inline s32 Unk_020707ec_K2(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    if (r) {
        return (s32)(v - lo);
    }
    return -1;
}
}
extern "C" {
static inline s32 Unk_020707ec_K3(BOOL f, u16 v) {
    if (f) {
        return (s32)(v - 0x1188);
    }
    return -1;
}
}
extern "C" {
static inline BOOL Unk_020707ec_In(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}
}

extern "C" BOOL Villager_MaybeCopyAblePattern(s32 a, s32 b);
extern "C" BOOL PatternSrc_Copy(u32 a, u32 b, u32 c, u32 d, u32 e);
extern "C" s32 PatternSrc_ResolveKind(s32 t);
extern "C" BOOL PatternSrc_Swap(u32 a, u32 b, u32 c, u32 d, u32 e);
extern "C" void Pattern_RemovePlayerItems(s32 p);
extern "C" s32 PatternSrc_GetSessionPlayer(s32 a, s32 b);
extern "C" s32 PatternSrc_GetSessionPlayer0(s32 x);
extern "C" s32 PatternSrc_GetSessionPlayer1(s32 x);
extern "C" s32 PatternSrc_GetSessionPlayer2(s32 x);
extern "C" s32 PatternSrc_GetSessionPlayer3(s32 x);

extern "C" BOOL Villager_MaybeCopyAblePattern(s32 a, s32 b) {
    void *p = SaveVillagers_Get(gSaveVillagers, a);
    if (p != NULL) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) != 0) {
            u32 val = *Villager_GetFashionTaste(p);
            s32 mode = _ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(p)));
            u32 rnd = Random_GlobalBelow(100);
            s32 fa, fb, fc;
            u16 bufw[2];
            fb = 0;
            fa = 0;
            fc = 0;
            if (mode == 3) {
                if (rnd < 15) {
                    fa = 1;
                    fb = 1;
                } else if (rnd < 20) {
                    fa = 1;
                } else if (rnd < 30) {
                    fc = 1;
                }
            } else {
                if (rnd < 10) {
                    fa = 1;
                    fb = 1;
                } else if (rnd < 15) {
                    fc = 1;
                }
            }
            if (fc) {
                *(volatile u16 *)&bufw[0] = 0xfff1;
                BOOL z = FALSE;
                for (s32 i = 0; (u32)i < 6; i++) {
                    AbleShop_GetItem(data_021ed2d4, i, &bufw[0]);
                    BOOL in1 = z;
                    u32 v = *(volatile u16 *)&bufw[0];
                    u32 w = *(volatile u16 *)&bufw[0];
                    if (w >= 0x1380 && v <= 0x139f) {
                        in1 = TRUE;
                    }
                    if (in1) break;
                    if (v >= 0x3e24 && v <= 0x3ea3) break;
                }
                {
                    BOOL in1 = FALSE;
                    u32 v = *(volatile u16 *)&bufw[0];
                    u32 w = *(volatile u16 *)&bufw[0];
                    if (w >= 0x1380 && v <= 0x139f) {
                        in1 = TRUE;
                    }
                    if (in1 || (v >= 0x3e24 && v <= 0x3ea3)) {
                        Item_FromPlacedForm(&bufw[1], &bufw[0]);
                    }
                }
            }
            if (fa) {
                void *tbl = gSaveAbleSistersPatterns;
                s32 cnt = 0;
                for (u32 j = 0; j < 8; j++) {
                    s32 x = _ZN11PatternInfo8getTasteEv(_ZN7Pattern7getInfoEv(_ZN19AbleSistersPatterns10getPatternEh(tbl, (u8)j)));
                    if (fb) {
                        if (x == val) cnt++;
                    } else {
                        if (x != val) cnt++;
                    }
                }
                if (cnt > 0) {
                    s32 pick = Random_GlobalBelow(cnt);
                    s32 k = 0;
                    s32 j;
                    for (j = 0; (u32)j < 8; j++) {
                        s32 x = _ZN11PatternInfo8getTasteEv(_ZN7Pattern7getInfoEv(_ZN19AbleSistersPatterns10getPatternEh(tbl, (u8)j)));
                        if (fb) {
                            if (x == val) {
                                if (pick == k) break;
                                k++;
                            }
                        } else {
                            if (x != val) {
                                if (pick == k) break;
                                k++;
                            }
                        }
                    }
                    return PatternSrc_Copy(4, (u8)(j & 7), 6, (u8)a, b);
                }
            }
        }
    }
    return FALSE;
}
extern "C" BOOL PatternSrc_Copy(u32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_02070e4c_Bits bits;
    s32 ta = PatternSrc_ResolveKind(a);
    s32 tc = PatternSrc_ResolveKind(c);
    if (tc == 7) {
        return FALSE;
    }
    Pattern *r4 = (Pattern *)PatternSrc_Get(ta, b);
    Pattern *r6 = (Pattern *)PatternSrc_Get(tc, d);
    *r6 = *r4;
    PatternSrc_OnChanged(tc, d);
    if (*(u8 *)&e) {
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            bits.a = ta;
            bits.b = b;
            bits.c = tc;
            bits.d = d;
            bits.e = 0;
            bits.f = 0;
            Unk_02070790_Game *g = gCommManager;
            _ZN11CommManager11beginRecordEv(g);
            _ZN11CommManager11writeRecordEPhj(g, &bits, 4);
            _ZN11CommManager9endRecordEjj(g, 0x15, 4);
        }
    }
    return TRUE;
}
extern "C" s32 PatternSrc_ResolveKind(s32 t) {
    Unk_02070790_Game *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) && t == 9) {
        return g->myAid;
    }
    return t;
}
extern "C" BOOL PatternSrc_Swap(u32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_02070e4c_Bits bits;
    s32 ta = PatternSrc_ResolveKind(a);
    s32 tc = PatternSrc_ResolveKind(c);
    if (ta == 7 || tc == 7) {
        return FALSE;
    }
    Pattern *r5 = (Pattern *)PatternSrc_Get(ta, b);
    Pattern *r4 = (Pattern *)PatternSrc_Get(tc, d);
    static Pattern tmp;
    tmp = *r4;
    *r4 = *r5;
    *r5 = tmp;
    PatternSrc_OnChanged(ta, b);
    PatternSrc_OnChanged(tc, d);
    if (*(u8 *)&e) {
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            bits.a = ta;
            bits.b = b;
            bits.c = tc;
            bits.d = d;
            bits.e = 1;
            bits.f = 0;
            Unk_02070790_Game *g = gCommManager;
            _ZN11CommManager11beginRecordEv(g);
            _ZN11CommManager11writeRecordEPhj(g, &bits, 4);
            _ZN11CommManager9endRecordEjj(g, 0x15, 4);
        }
    }
    return TRUE;
}
}
// ---- data created here (creation order found by inverting the heapsort; do not move or reorder)
namespace U125_def {
extern "C" {
u8 *sAblePatternTexWork;
}
}
PresetPatternBuffer sPresetPatternBuffer;
namespace U125_def {
extern "C" {
u8 *sAblePatternVramTasks;
u32 sPlayerPatternTexKeys[4][8];
}
}
namespace n2 {
extern "C" void Pattern_RemovePlayerItems(s32 p) {
    static ItemId t;
    s32 i, j;
    s32 m;
    s32 idx;
    s32 y2;
    s32 x2;
    u8 *cells;
    u8 *cell;
    Unk_020707ec_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        s32 x, y;
        for (y = 1; y < g->h - 1; y++) {
            for (x = 1; x < g->w - 1; x++) {
                if ((u32)x < (u32)g->w && (u32)y < (u32)g->h && g->cells != NULL) {
                    cell = g->cells + (y * g->w + x) * 0x28;
                } else {
                    cell = NULL;
                }
                if (cell != NULL) {
                    i = 0;
                    do {
                        j = 0;
                        do {
                            u16 *v = MapBlock_GetItemPtr(cell, j, i, 0);
                            if (v != NULL) {
                                BOOL in = FALSE;
                                if (*v >= 0xa7 && *v <= 0xc6) {
                                    in = TRUE;
                                }
                                if (in) {
                                    if (p == (s32)(*v - 0xa7) / 8) {
                                        MapBlock_SetItem(cell, &t.v, j, i, 0);
                                    }
                                }
                            }
                            j++;
                        } while (j < 16);
                        i++;
                    } while (i < 16);
                }
            }
        }
    }
    m = 0;
    do {
        Unk_020707ec_Grid *g2 = HouseRoomMaps_Get(m);
        if (g2 != NULL) {
            if ((u8 *)g2->w > (u8 *)0 && (u8 *)g2->h > (u8 *)0 && g2->cells != NULL) {
                cells = g2->cells;
            } else {
                cells = NULL;
            }
            if (cells != NULL) {
                y2 = 0;
                do {
                    x2 = 0;
                    do {
                        u16 *v = MapBlock_GetItemPtr(cells, x2, y2, 0);
                        if (v != NULL) {
                            BOOL f = FALSE;
                            u16 val = *v;
                            if (val >= 0x3d84 && val <= 0x3e03) {
                                f = TRUE;
                            }
                            if (f) {
                                idx = ((Unk_020707ec_K(val, 0x3d84, 0x3e03) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x3ea4 && val <= 0x3f23) {
                                idx = ((Unk_020707ec_K(val, 0x3ea4, 0x3f23) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x3f24 && val <= 0x3fa3) {
                                idx = ((Unk_020707ec_K(val, 0x3f24, 0x3fa3) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x4224 && val <= 0x42a3) {
                                idx = ((Unk_020707ec_K(val, 0x4224, 0x42a3) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            }
                        }
                        x2++;
                    } while (x2 < 16);
                    y2++;
                } while (y2 < 16);
            }
        }
        HouseRoom *e = gSaveHouse.getRoom(m);
        if (e != NULL) {
            u16 tmp[2];
            u16 *pv1 = e->getWallpaper(NULL);
            BOOL f1 = FALSE;
            u16 v1 = *pv1;
            if (v1 >= 0x1188 && v1 <= 0x11a7) {
                f1 = TRUE;
            }
            if (f1) {
                u16 *pv2 = e->getWallpaper(NULL);
                BOOL f2 = FALSE;
                u16 v2 = *pv2;
                if (v2 >= 0x1188 && v2 <= 0x11a7) {
                    f2 = TRUE;
                }
                idx = ((Unk_020707ec_K3(f2, v2) >> 3) & 3);
 if (idx == p) {
                    tmp[0] = 0x113e;
                    e->setWallpaper(&tmp[0], 0);
                }
            }
            u16 *pv3 = e->getCarpet(NULL);
            BOOL f3 = FALSE;
            u16 v3 = *pv3;
            if (v3 >= 0x1188 && v3 <= 0x11a7) {
                f3 = TRUE;
            }
            if (f3) {
                u16 *pv4 = e->getCarpet(NULL);
                BOOL f4 = FALSE;
                u16 v4 = *pv4;
                if (v4 >= 0x1188 && v4 <= 0x11a7) {
                    f4 = TRUE;
                }
                idx = ((Unk_020707ec_K3(f4, v4) >> 3) & 3);
 if (idx == p) {
                    tmp[1] = 0x1182;
                    e->setCarpet(&tmp[1], 0);
                }
            }
        }
        m++;
    } while (m < 5);
}
extern "C" s32 PatternSrc_GetSessionPlayer(s32 a, s32 b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        void *p = PlayerData_GetBySessionSlot(a);
        if (p) {
            return _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(p), b);
        }
    }
    return 0;
}
extern "C" s32 PatternSrc_GetSessionPlayer0(s32 x) { return PatternSrc_GetSessionPlayer(0, x); }
extern "C" s32 PatternSrc_GetSessionPlayer1(s32 x) { return PatternSrc_GetSessionPlayer(1, x); }
extern "C" s32 PatternSrc_GetSessionPlayer2(s32 x) { return PatternSrc_GetSessionPlayer(2, x); }
extern "C" s32 PatternSrc_GetSessionPlayer3(s32 x) { return PatternSrc_GetSessionPlayer(3, x); }
}

// ======== unk_0206fe80.cpp ========
namespace n1 {
extern "C" {
extern u8 gSavePlayers[];
}
extern "C" {
extern u16 gSaveTownId[];
}
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u8 data_020e049c[];
}
extern "C" {
extern u8 sMuseumOwlMailName[];
}
extern "C" {
extern u8 data_020e0498[];
}
extern "C" {
extern u32 sAblePatternTexKeys[];
}
extern "C" {
extern u32 sPlayerPatternTexKeys[8][8];
}
extern "C" {
extern u8 *sAblePatternTexWork;
}
extern "C" {
extern u8 *sAblePatternVramTasks;
}
extern "C" {
extern u8 *sPlayerPatternTexWork;
}
extern "C" {
extern u8 *sPlayerPatternVramTasks;
}
extern "C" {
extern u8 gSaveAbleSistersPatterns[];
}
extern "C" {
extern u8 gSaveBlancaFace[];
}
extern "C" {
extern u8 gSaveVillagers[];
}
extern "C" {
extern u8 gSaveTownFlag[];
}
extern "C" {
extern s32 (*sPatternSourceGetters[])(s32);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
void *PlayerData_GetResident(void *a, s32 i);
}
extern "C" {
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
void _ZN8PlayerId13getNameStringEP9MsgString(s32 a, s32 b);
}
extern "C" {
s32 PlayerData_GetCurrentIndex();
}
extern "C" {
s32 PlayerData_IsResidentIndex(s32 t);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
s32 _ZN8SaveData8testFlagEj(void *p, s32 i);
}
extern "C" {
void _ZN8SaveData7setFlagEj(void *p, s32 i);
}
extern "C" {
s32 _ZN10PlayerData6isUsedEv(void *p);
}
extern "C" {
s32 LetterDelivery_PutInAddresseeMailbox(void *p);
}
extern "C" {
void TownId_GetNameString(void *a, void *b);
}
extern "C" {
void MailText_SetSlot(s32 i, void *p);
}
extern "C" {
void _ZN10LetterView10setPresentEtj(void *p, u32 a, s32 b);
}
extern "C" {
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, s32 f);
}
extern "C" {
void PatternSrc_Swap(u32 a, u8 b, u32 c, u8 d, s32 e);
}
extern "C" {
void PatternSrc_Copy(u32 a, u8 b, u32 c, u8 d, s32 e);
}
extern "C" {
s32 _ZN19AbleSistersPatterns10getPatternEh(void *p, s32 i);
}
extern "C" {
void ClothTex_LoadPattern(void *p, s32 v);
}
extern "C" {
s32 ClothTex_GetTex(void *p);
}
extern "C" {
void _ZN18TexPatVramUploader11uploadByIdxEPhiiS0_ii(void *a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
}
extern "C" {
void *_ZN10PlayerData11getPatternsEv(void *p);
}
extern "C" {
void *_ZN14PlayerPatterns10getPatternEh(void *p, s32 i);
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
s32 _ZN16BlancaFaceRecord10getPatternEv(void *p);
}
extern "C" {
s32 PresetPatternBuffer_Get();
}
extern "C" {
s32 _ZN15PatternTexCache17loadPresetPatternEi(s32 t, s32 x);
}
extern "C" {
s32 _ZN15PatternTexCache16getPresetPatternEv(s32 t);
}
extern "C" {
void *SaveVillagers_Get(void *a, s32 x);
}
extern "C" {
s32 _ZN12VillagerData10getPatternEv(void *p);
}
extern "C" {
s32 _ZN19TownStyleRecordView11getTownFlagEv(void *p);
}
extern "C" {
void TownFlag_GetPattern(s32 p);
}
static inline BOOL Unk_020703d8_R(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" s32 PatternSrc_GetAble(s32 x);
extern "C" void PatternSrc_GetTownFlag();
extern "C" s32 PatternSrc_GetVillager(s32 x);
extern "C" s32 PatternSrc_GetPreset(s32 x);
extern "C" s32 PatternSrc_GetBlancaFace();
extern "C" void *PatternSrc_GetCurrentPlayer(s32 i);
extern "C" s32 PatternSrc_Get(s32 i, s32 a);
extern "C" BOOL PatternTex_UploadPlayer(u32 a, u32 b);
extern "C" BOOL PatternTex_UploadAble(u32 x);
extern "C" void PatternSrc_ApplyNetMove(Unk_0206fe80_Bits *p);

extern "C" s32 PatternSrc_GetAble(s32 x) {
    return _ZN19AbleSistersPatterns10getPatternEh(gSaveAbleSistersPatterns, x);
}
extern "C" void PatternSrc_GetTownFlag() {
    TownFlag_GetPattern(_ZN19TownStyleRecordView11getTownFlagEv(gSaveTownFlag));
}
extern "C" s32 PatternSrc_GetVillager(s32 x) {
    void *p = SaveVillagers_Get(gSaveVillagers, x);
    if (p) return _ZN12VillagerData10getPatternEv(p);
    return 0;
}
extern "C" s32 PatternSrc_GetPreset(s32 x) {
    s32 t = PresetPatternBuffer_Get();
    _ZN15PatternTexCache17loadPresetPatternEi(t, x);
    return _ZN15PatternTexCache16getPresetPatternEv(t);
}
extern "C" s32 PatternSrc_GetBlancaFace() {
    return _ZN16BlancaFaceRecord10getPatternEv(gSaveBlancaFace);
}
extern "C" void *PatternSrc_GetCurrentPlayer(s32 i) {
    void *p = PlayerData_GetCurrent();
    if (p) return _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(p), i);
    return 0;
}
extern "C" s32 PatternSrc_Get(s32 i, s32 a) {
    if (i < 10) return sPatternSourceGetters[i](a);
    return 0;
}
extern "C" BOOL PatternTex_UploadPlayer(u32 a, u32 b) {
    u8 x = a & 7;
    u8 y = b & 7;
    u32 t = sPlayerPatternTexKeys[x][y];
    if (t && sPlayerPatternTexWork && sPlayerPatternVramTasks) {
        void *q = _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(PlayerData_GetResident(gSavePlayers, x)), y);
        s32 off = y * 0x2c4;
        ClothTex_LoadPattern(sPlayerPatternTexWork + off, (s32)q);
        _ZN18TexPatVramUploader11uploadByIdxEPhiiS0_ii(sPlayerPatternVramTasks + y * 0x38, t, 0, 0, ClothTex_GetTex(sPlayerPatternTexWork + off), 0, 0);
        return TRUE;
    }
    return FALSE;
}
extern "C" BOOL PatternTex_UploadAble(u32 x) {
    u8 i = x & 7;
    u32 t = sAblePatternTexKeys[i];
    if (t && sAblePatternTexWork && sAblePatternVramTasks) {
        s32 off = i * 0x2c4;
        ClothTex_LoadPattern(sAblePatternTexWork + off, _ZN19AbleSistersPatterns10getPatternEh(gSaveAbleSistersPatterns, x));
        _ZN18TexPatVramUploader11uploadByIdxEPhiiS0_ii(sAblePatternVramTasks + i * 0x38, t, 0, 0, ClothTex_GetTex(sAblePatternTexWork + off), 0, 0);
        return TRUE;
    }
    return FALSE;
}
extern "C" void PatternSrc_ApplyNetMove(Unk_0206fe80_Bits *p) {
    Unk_0206fe80_Bits &v = *p;
    u32 a = v.a;
    u8 b = v.b;
    u32 c = v.c;
    u8 d = v.d;
    u32 e = v.e;
    if (e) {
        PatternSrc_Swap(a, b, c, d, 0);
    } else {
        PatternSrc_Copy(a, b, c, d, 0);
    }
}
}

// ======== data created after the functions (creation order found by inverting the heapsort; do not reorder)
PatternTexCache sPatternTexCache;
namespace U125_def {
extern "C" {
s32 PatternSrc_GetSessionPlayer0(s32);
s32 PatternSrc_GetSessionPlayer1(s32);
s32 PatternSrc_GetSessionPlayer2(s32);
s32 PatternSrc_GetSessionPlayer3(s32);
s32 PatternSrc_GetAble(s32);
s32 PatternSrc_GetTownFlag(s32);
s32 PatternSrc_GetVillager(s32);
s32 PatternSrc_GetPreset(s32);
s32 PatternSrc_GetBlancaFace(s32);
s32 PatternSrc_GetCurrentPlayer(s32);

u8 *sPlayerPatternTexWork;
u8 *sPlayerPatternVramTasks;
u32 sAblePatternTexKeys[8];

extern s32 (*const sPatternSourceGetters[10])(s32);
s32 (*const sPatternSourceGetters[10])(s32) = {
    PatternSrc_GetSessionPlayer0, PatternSrc_GetSessionPlayer1, PatternSrc_GetSessionPlayer2, PatternSrc_GetSessionPlayer3, PatternSrc_GetAble,
    PatternSrc_GetTownFlag, PatternSrc_GetVillager, PatternSrc_GetPreset, PatternSrc_GetBlancaFace, PatternSrc_GetCurrentPlayer,
};

u8 data_021cbcac[4];
u8 sAbleDisplayDirtyBits;
}
}

PatternPresetInfoFile sPatternPresetInfo;

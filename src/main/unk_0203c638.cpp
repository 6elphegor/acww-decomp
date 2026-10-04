#include "types.h"
#include "game/Unk_0203c92c_Bits.h"
#include "game/Unk_0203ce24_Elem.h"

// ---- 0x020d94b8 base (MsgRequest at 0x020e2a30)
class MsgRequest {
public:
    virtual ~MsgRequest();
    virtual void vfunc_08();
    MsgRequest();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

class BmgReader {
public:
    BOOL open(const char *name);
    BOOL loadMessage(u8 *p);
    void close();
    u8 unk_00[0x2a4];
};

class MsgString {
public:
    BOOL append(u8 *str);
    BOOL set(u8 *str);
};

extern "C" {
void MI_CpuFill8(void *dst, u32 value, u32 size);
}

extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}

extern "C" {
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
}

extern "C" {
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
}

extern "C" {
void func_020a71b8(void *);
}

extern "C" {
void func_020a71d0(void *);
}

extern "C" {
s32 func_020639e8(char *buf, const char *fmt, ...);
}

extern "C" {
extern u8 *data_020d9504[];
}

extern "C" {
extern u8 *data_020d9514[];
}

extern "C" {
extern u32 sMailPartDirs[];
}

extern "C" {
extern u32 sMailFolderDirs[];
}

extern "C" {
void String_GetDayOrdinal(void *, s32);
}

extern "C" {
void String_GetMonthName(void *, s32);
}

extern "C" {
s32 func_020a7bd8(void *, void *);
}

extern "C" {
void func_0203d458(void *);
}

extern "C" {
void func_0203d48c(void *);
}

extern "C" {
void func_0203d4a4(void *);
}

extern "C" {
void func_0203d3d8(void *);
}

extern "C" {
void func_0203d3f8(void *, void *);
}

// ---- 0x020d94b8
class MailMsgRequest : public MsgRequest {
public:
    MailMsgRequest();
    virtual ~MailMsgRequest();
    virtual u32 vfunc_0c();
    u32 *getNamePosOut();
    MsgString *getDest();
    void setNamePosOut(u32 *v);
    void setDest(MsgString *v);
    void setPart(u32 v);
    void setFolder(u32 v);
    u32 getPartDir();
    BOOL isAppendPart();

    /* 0x20 */ u32 folder;
    /* 0x24 */ u32 part;
    /* 0x28 */ MsgString *dest;
    /* 0x2c */ u32 *namePosOut;
};

// ---- container singleton at 0x021c3280
class MailTextBuilder {
public:
    BOOL load(MailMsgRequest *p);
    void reset();
    MailTextBuilder *func_0203cd98();
    MailTextBuilder *func_0203cdc8();
    BOOL func_0203d36c(BOOL b);

    /* 0x000 */ u8 expander[0x5c];
    /* 0x05c */ BmgReader reader;
    /* 0x300 */ u8 output[0x200];
    /* 0x500 */ s32 namePos;
    /* 0x504 */ u8 slots[11 * 0x34];
};

// ---- free functions on the 0x34-byte entries at 0x021c3784
extern "C" Unk_0203ce24_Elem data_021c3784[];
extern "C" MailTextBuilder gMailTextBuilder;

// ---- flag object at 0x021c3264
class PlayerOptions {
public:
    void markTalkVoiceChanged();
    void markStereoChanged();
    void markHiraganaChanged();
    BOOL isTalkVoiceChanged();
    BOOL isStereoChanged();
    BOOL isHiraganaChanged();
    void reset();
    void setTalkVoice(u32 v);
    u32 getTalkVoice();
    void clearStereo();
    void setStereo();
    BOOL isStereo();
    void clearHiragana();
    void setHiragana();
    BOOL isHiragana();
    void resetValues();

    /* 0x00 */ u8 options;
    /* 0x01 */ u8 changedMask;
};

extern "C" PlayerOptions sPlayerOptions;
extern "C" PlayerOptions *func_0203c9b4(PlayerOptions *p);
extern "C" PlayerOptions *func_0203c9c4(PlayerOptions *p);
extern "C" void PlayerOptions_OnDestruct();
extern "C" void PlayerOptions_OnConstruct();

extern "C" {
void PlayerData_GetCurrent();
}

extern "C" {
PlayerOptions *func_02098668();
}

extern "C" {
PlayerOptions *PlayerOptions_Get();
}

extern "C" {
s32 PlayerOptions_IsHiragana();
}

extern "C" {
s32 PlayerOptions_IsStereo();
}

extern "C" {
u32 PlayerOptions_GetTalkVoice();
}

// ---- 0x0203c638 .. 0x0203c924
struct Catalog {
    u8 furnitureBits[0x100];
    u8 wallpaperBits[9];
    u8 carpetBits[9];
    u8 songBits[9];
    u8 paperBits[8];
};

struct ItemId {
    u16 id;
    ItemId() : id(0x11a8) {}
    ~ItemId();
};

extern "C" {
void Catalog_Clear(Catalog *p);
}

extern "C" {
void *NNS_G3dGetTex();
}

extern "C" {
void *_ZN12G3dResAccess11getPlttDataEi(void *p, s32 v);
}

extern "C" {
void *_ZN12G3dResAccess10getTexDataEi(void *p, s32 v);
}

extern "C" {
void *_ZN7Pattern9getPixelsEv(void *p);
}

extern "C" {
void _ZN7Pattern7getInfoEv(void *p);
}

extern "C" {
void *_ZN11PatternInfo14getPaletteDataEv();
}

extern "C" {
void *_ZN19AbleSistersPatterns10getPatternEh(void *tbl, u32 i);
}

extern "C" {
void *_ZN14PlayerPatterns10getPatternEh(void *p, u32 i);
}

extern "C" {
void *_ZN10PlayerData11getPatternsEv(void *p);
}

extern "C" {
BOOL File_LoadToBuffer(void *a, void *b, s32 c);
}

extern "C" {
extern u8 gSaveAbleSistersPatterns[];
}

extern "C" {
BOOL ClothTex_LoadItem(void *self, u16 *p, void *q);
}
extern "C" void *ClothTex_GetTex();
extern "C" void *ClothTex_GetTexData(void *unused);
extern "C" void *ClothTex_GetPlttData(void *unused);
extern "C" BOOL ClothTex_LoadPattern(void *a, void *b);

static inline BOOL Unk_0203c764_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void ClothTex_Construct() {}

extern "C" void ClothTex_Destruct() {}

extern "C" BOOL ClothTex_LoadItem(void *self, u16 *p, void *q) {
    s32 i1, i2, i3, i4;
    char buf[0x20];
    BOOL res;
    if (Unk_0203c764_InRange(p, 0x12a8, 0x12af)) {
        if (*p >= 0x12a8 && *p <= 0x12af) i1 = *p - 0x12a8;
        else i1 = -1;
        res = FALSE;
        if (i1 != -1) {
            if (q == 0) res = ClothTex_LoadPattern(self, _ZN19AbleSistersPatterns10getPatternEh(gSaveAbleSistersPatterns, (u8)i1));
            else res = ClothTex_LoadPattern(self, _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(q), (u8)i1));
        }
    } else if (*p >= 0x1429 && *p <= 0x1430) {
        if (*p >= 0x1429 && *p <= 0x1430) i2 = *p - 0x1429;
        else i2 = -1;
        res = FALSE;
        if (i2 != -1) {
            if (q == 0) res = ClothTex_LoadPattern(self, _ZN19AbleSistersPatterns10getPatternEh(gSaveAbleSistersPatterns, (u8)i2));
            else res = ClothTex_LoadPattern(self, _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(q), (u8)i2));
        }
    } else if (*p >= 0x13a0 && *p <= 0x13a7) {
        if (*p >= 0x13a0 && *p <= 0x13a7) i3 = *p - 0x13a0;
        else i3 = -1;
        res = FALSE;
        if (i3 != -1) {
            if (q == 0) res = ClothTex_LoadPattern(self, _ZN19AbleSistersPatterns10getPatternEh(gSaveAbleSistersPatterns, (u8)i3));
            else res = ClothTex_LoadPattern(self, _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(q), (u8)i3));
        }
    } else {
        if (*p >= 0x11a8 && *p <= 0x12a7) i4 = *p - 0x11a8;
        else i4 = -1;
        if (i4 != -1) {
            func_020639e8(buf, "/cloth/%d/cloth%03d.nsbtx", i4 >> 4, i4);
            if (File_LoadToBuffer(buf, self, -1)) return TRUE;
            return FALSE;
        } else {
            static ItemId def;
            return ClothTex_LoadItem(self, &def.id, q);
        }
    }
    return res;
}

extern "C" BOOL ClothTex_LoadPattern(void *a, void *b) {
    u16 id = 0x11a8;
    if (ClothTex_LoadItem(a, &id, 0)) {
        if (b != 0) {
            void *dst = _ZN7Pattern9getPixelsEv(b);
            MI_CpuCopy8(dst, ClothTex_GetTexData(a), 0x200);
            _ZN7Pattern7getInfoEv(b);
            void *dst2 = _ZN11PatternInfo14getPaletteDataEv();
            MI_CpuCopy8(dst2, ClothTex_GetPlttData(a), 0x20);
            return TRUE;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void *ClothTex_GetTexData(void *unused) { return _ZN12G3dResAccess10getTexDataEi(ClothTex_GetTex(), 0); }

extern "C" void *ClothTex_GetPlttData(void *unused) { return _ZN12G3dResAccess11getPlttDataEi(ClothTex_GetTex(), 0); }

extern "C" void *ClothTex_GetTex() { return NNS_G3dGetTex(); }

extern "C" u32 ClothTex_GetBufferSize() { return 0x2c4; }

extern "C" BOOL ClothTex_LoadItemThunk(void *a, u16 *b, void *c) { return ClothTex_LoadItem(a, b, c); }

extern "C" BOOL ClothTex_LoadPatternThunk(void *a, void *b) { return ClothTex_LoadPattern(a, b); }

extern "C" void *ClothTex_GetTexThunk() { return ClothTex_GetTex(); }

extern "C" void Catalog_Construct() {}

extern "C" void Catalog_Destruct() {}

extern "C" void Catalog_Clear(Catalog *p) {
    u32 i;
    for (i = 0; i < 0x100; i++) p->furnitureBits[i] = 0;
    for (i = 0; i < 9; i++) p->wallpaperBits[i] = 0;
    for (i = 0; i < 9; i++) p->carpetBits[i] = 0;
    for (i = 0; i < 9; i++) p->songBits[i] = 0;
    for (i = 0; i < 8; i++) p->paperBits[i] = 0;
}

extern "C" void Catalog_Init(Catalog *p) { Catalog_Clear(p); }


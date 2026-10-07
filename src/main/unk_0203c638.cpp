#include "uptr.h"
#include "types.h"
#include "game/Unk_0203c92c_Bits.h"
#include "game/Unk_0203ce24_Elem.h"
#include "player/PlayerOptions.h"
#include "item/ItemId.h"
#include "talk/BmgReader.h"
#include "talk/MailTextBuilder.h"
#include "talk/MsgString.h"
#include "talk/MsgRequest.h"
#include "talk/MailMsgRequest.h"
#include "gfx/G3dResAccess.h"
#include "player/PlayerData.h"
#include "save/Pattern.h"
#define PROTO_LOCAL_sPlayerOptions  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_0203c638.h"
#include "proto/main/unk_0203c92c.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_020b2c50.h"

// ---- 0x020d94b8 base (MsgRequest at 0x020e2a30)



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
}

extern "C" {
extern u8 *data_020d9504[];
}

extern "C" {
extern u8 *data_020d9514[];
}

extern "C" {
extern uptr sMailPartDirs[];
}

extern "C" {
extern uptr sMailFolderDirs[];
}

extern "C" {
}

extern "C" {
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

// ---- container singleton at 0x021c3280

// ---- free functions on the 0x34-byte entries at 0x021c3784
extern "C" Unk_0203ce24_Elem data_021c3784[];
extern "C" MailTextBuilder gMailTextBuilder;

// ---- flag object at 0x021c3264

extern "C" PlayerOptions sPlayerOptions;
extern "C" PlayerOptions *func_0203c9b4(PlayerOptions *p);
extern "C" PlayerOptions *func_0203c9c4(PlayerOptions *p);

extern "C" {
}

extern "C" {
PlayerOptions *_ZN10PlayerData10getOptionsEv();
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

// ---- 0x0203c638 .. 0x0203c924
struct Catalog {
    u8 furnitureBits[0x100];
    u8 wallpaperBits[9];
    u8 carpetBits[9];
    u8 songBits[9];
    u8 paperBits[8];
};


extern "C" {
void Catalog_Clear(Catalog *p);
}

extern "C" {
void *NNS_G3dGetTex(void *p);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
extern u8 gSaveAbleSistersPatterns[];
}

extern "C" {
}

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
            if (q == 0) res = ClothTex_LoadPattern(self, ((AbleSistersPatterns *)(gSaveAbleSistersPatterns))->getPattern((u8)i1));
            else res = ClothTex_LoadPattern(self, ((PlayerPatterns *)(((PlayerData *)(q))->getPatterns()))->getPattern((u8)i1));
        }
    } else if (*p >= 0x1429 && *p <= 0x1430) {
        if (*p >= 0x1429 && *p <= 0x1430) i2 = *p - 0x1429;
        else i2 = -1;
        res = FALSE;
        if (i2 != -1) {
            if (q == 0) res = ClothTex_LoadPattern(self, ((AbleSistersPatterns *)(gSaveAbleSistersPatterns))->getPattern((u8)i2));
            else res = ClothTex_LoadPattern(self, ((PlayerPatterns *)(((PlayerData *)(q))->getPatterns()))->getPattern((u8)i2));
        }
    } else if (*p >= 0x13a0 && *p <= 0x13a7) {
        if (*p >= 0x13a0 && *p <= 0x13a7) i3 = *p - 0x13a0;
        else i3 = -1;
        res = FALSE;
        if (i3 != -1) {
            if (q == 0) res = ClothTex_LoadPattern(self, ((AbleSistersPatterns *)(gSaveAbleSistersPatterns))->getPattern((u8)i3));
            else res = ClothTex_LoadPattern(self, ((PlayerPatterns *)(((PlayerData *)(q))->getPatterns()))->getPattern((u8)i3));
        }
    } else {
        if (*p >= 0x11a8 && *p <= 0x12a7) i4 = *p - 0x11a8;
        else i4 = -1;
        if (i4 != -1) {
            Str_SPrintf(buf, "/cloth/%d/cloth%03d.nsbtx", i4 >> 4, i4);
            if (File_LoadToBuffer(buf, self, -1)) return TRUE;
            return FALSE;
        } else {
            static ItemId def(0x11a8);
            return ClothTex_LoadItem(self, &def.id, q);
        }
    }
    return res;
}

extern "C" BOOL ClothTex_LoadPattern(void *a, void *b) {
    u16 id = 0x11a8;
    if (ClothTex_LoadItem(a, &id, 0)) {
        if (b != 0) {
            void *dst = ((Pattern *)(b))->getPixels();
            MI_CpuCopy8(dst, ClothTex_GetTexData(a), 0x200);
            void *dst2 = ((PatternInfo *)(((Pattern *)(b))->getInfo()))->getPaletteData();
            MI_CpuCopy8(dst2, ClothTex_GetPlttData(a), 0x20);
            return TRUE;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void *ClothTex_GetTexData(void *tex) { return ((G3dResAccess *)(ClothTex_GetTex(tex)))->getTexData(0); }

extern "C" void *ClothTex_GetPlttData(void *tex) { return ((G3dResAccess *)(ClothTex_GetTex(tex)))->getPlttData(0); }

extern "C" void *ClothTex_GetTex(void *tex) { return NNS_G3dGetTex(tex); }

extern "C" u32 ClothTex_GetBufferSize() { return 0x2c4; }

extern "C" BOOL ClothTex_LoadItemThunk(void *a, u16 *b, void *c) { return ClothTex_LoadItem(a, b, c); }

extern "C" BOOL ClothTex_LoadPatternThunk(void *a, void *b) { return ClothTex_LoadPattern(a, b); }

extern "C" void *ClothTex_GetTexThunk(void *tex) { return ClothTex_GetTex(tex); }

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


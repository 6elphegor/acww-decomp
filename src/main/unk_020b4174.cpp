#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/SceneBase.h"

extern "C" {
void Gfx2d_SetBrightness(s32 x);
void Gfx2d_SetMainPlanes(u32 x);
void Gfx2d_SetSubPlanes(u32 x);
void Gfx2d_SetSubBgMode(u32 x);
void Gfx2d_SetMainBgMode(u32 x);
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Gfx2d_LoadCharFile(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void Gfx2d_LoadScreenFile(const char *path, void *heap, u32 a);
void Gfx2d_LoadPaletteFile(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void Snd_PlaySe(u32 x);
void Snd_CreateScene(void);
void BgHeap_Destroy(void);
void BgHeap_Create(u32 a, u32 b);
void Gfx_DisableAllBanks(void);
void Gfx_ResetScene(void);
void VillagerStates_Init(void);
void VillagerStates_Destroy(void);
void GuestPlayers_ResetAll(void);
void SaveData_Apply(void *p);
void SaveData_Setup(void *p, u32 x);
void _ZN8SaveData5resetEv(void *p);
BOOL _ZN11SaveRecord412isStateUnsetEv(void *p);
void func_0209f224(u32 x);
void Save_InvalidateLetterStorage(void);
u32 Save_SlotStampsMatch(void);
u32 Save_ReadSlotAsyncStep(u32 a, void *p);
void SceneWarp_RequestScene(void *p, u32 x);
void FieldScene_Request(u32 a, u32 b);
u8 *Scene_GetWarpRequest(void);
void VramQueue2d_Init(void);
void VramQueueTex_Init(void);
u64 OS_GetTick(void);
void GX_SetBankForSubBG(u32 x);
void GX_SetBankForBG(u32 x);
void *Heap_Alloc(void *heap, u32 size);
void Heap_Free(void *heap, void *ptr);
void MI_CpuCopy8(const void *src, void *dst, u32 size);

extern u32 gVBlanksPerFrame;
extern void *gCurrentHeap;
extern u8 gSaveData;
extern u8 gSaveFooter;
}


class BootLogoScene : public SceneBase {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    void applyLoadedSave();
    void chooseSaveSlot();
    void setupGraphics();

    /* 0x50 */ u8 logoState;
    /* 0x51 */ volatile u8 fadeTimer;
    /* 0x54 */ u64 startTick;
    /* 0x5c */ u8 slot0Result;
    /* 0x5d */ u8 slot1Result;
    /* 0x5e */ u8 loadResult;
    /* 0x5f */ u8 loadState;
    /* 0x60 */ void *bufferHeap;
    /* 0x64 */ void *slot0Buffer;
    /* 0x68 */ void *slot1Buffer;
};

extern "C" BootLogoScene *BootLogoScene_Create(void) { return new BootLogoScene; }

BOOL BootLogoScene::vfunc_00() {
    gVBlanksPerFrame = 3;
    Snd_CreateScene();
    logoState = 0;
    bufferHeap = gCurrentHeap;
    slot0Buffer = Heap_Alloc(bufferHeap, 0x15fe0);
    slot1Buffer = Heap_Alloc(bufferHeap, 0x15fe0);
    return TRUE;
}

BOOL BootLogoScene::vfunc_0c() {
    Heap_Free(bufferHeap, slot0Buffer);
    Heap_Free(bufferHeap, slot1Buffer);
    return TRUE;
}

BOOL BootLogoScene::onExecute() {
    switch (loadState) {
    case 0:
        if (logoState == 1) loadState = 1;
        break;
    case 1: {
        u32 r = Save_ReadSlotAsyncStep(0, slot0Buffer);
        if (r != 3) {
            slot0Result = r;
            loadState = 2;
        }
        break;
    }
    case 2: {
        u32 r = Save_ReadSlotAsyncStep(1, slot1Buffer);
        if (r != 3) {
            slot1Result = r;
            loadState = 3;
        }
        break;
    }
    }
    switch (logoState) {
    case 0:
        setupGraphics();
        Gfx2d_SetBrightness(-16);
        logoState = 1;
        fadeTimer = 0x10;
        Snd_PlaySe(0x88c);
        break;
    case 1:
        if (fadeTimer != 0) {
            fadeTimer = fadeTimer - 1;
            Gfx2d_SetBrightness(-fadeTimer);
        } else {
            logoState = 2;
            startTick = OS_GetTick();
        }
        break;
    case 2: {
        u64 now = OS_GetTick();
        if (loadState < 5) {
            if (loadState < 3) break;
            chooseSaveSlot();
            applyLoadedSave();
            loadState = 5;
        }
        if (now - startTick < 0x7fd88) break;
        logoState = 3;
        fadeTimer = 0x10;
        break;
    }
    case 3:
        if (fadeTimer != 0) {
            fadeTimer = fadeTimer - 1;
            Gfx2d_SetBrightness(fadeTimer - 0x10);
        } else {
            Gfx2d_SetMainPlanes(0);
            Gfx2d_SetSubPlanes(0);
            logoState = 4;
            SceneWarp_RequestScene(Scene_GetWarpRequest(), 0x2c);
            FieldScene_Request(3, 2);
        }
        break;
    }
    return TRUE;
}

void BootLogoScene::setupGraphics() {
    Gfx_ResetScene();
    VramQueue2d_Init();
    VramQueueTex_Init();
    Gfx_DisableAllBanks();
    GX_SetBankForBG(0x20);
    GX_SetBankForSubBG(0x80);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xffcfffef;
    *(volatile u32 *)0x4001000 = *(volatile u32 *)0x4001000 & 0xffcfffef;
    Gfx2d_SetMainBgMode(0);
    Gfx2d_SetSubBgMode(0);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xc7ffffff;
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerControl(2, 0, 0, 0);
    void *heap = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/nin/nin.bch", heap, 6, 0, 0, 0x2ff);
    Gfx2d_LoadPaletteFile("menu/nin/ninE.bpl", heap, 6, 0, 0, 0);
    Gfx2d_LoadScreenFile("menu/nin/nin.bsc", heap, 6);
    Gfx2d_LoadCharFile("menu/nin/arrE.bch", heap, 2, 0, 0, 0x13f);
    Gfx2d_LoadPaletteFile("menu/nin/arrE.bpl", heap, 2, 0, 0, 0);
    Gfx2d_LoadScreenFile("menu/nin/arrE.bsc", heap, 2);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(2);
}

void BootLogoScene::chooseSaveSlot() {
    if (slot0Result == 1 || slot1Result == 1) {
        loadResult = 1;
    } else if (slot0Result != 0 && slot1Result != 0) {
        loadResult = 4;
    } else {
        u32 r;
        if (slot0Result != 0) {
            r = 1;
        } else if (slot1Result != 0) {
            r = 0;
        } else {
            r = Save_SlotStampsMatch();
        }
        if (r == 0) {
            MI_CpuCopy8(slot0Buffer, &gSaveData, 0x15fe0);
        } else {
            MI_CpuCopy8(slot1Buffer, &gSaveData, 0x15fe0);
        }
        loadResult = 0;
    }
}

void BootLogoScene::applyLoadedSave() {
    BgHeap_Create(0x5000, 0);
    if (loadResult == 4 || loadResult == 1) {
        if (loadResult == 4) {
            if (!_ZN11SaveRecord412isStateUnsetEv(&gSaveFooter)) func_0209f224(1);
        }
        if (loadResult == 4) Save_InvalidateLetterStorage();
        _ZN8SaveData5resetEv(&gSaveData);
        GuestPlayers_ResetAll();
        VillagerStates_Init();
        SaveData_Setup(&gSaveData, 3);
    } else {
        SaveData_Setup(&gSaveData, 4);
    }
    SaveData_Apply(&gSaveData);
    VillagerStates_Destroy();
    BgHeap_Destroy();
}



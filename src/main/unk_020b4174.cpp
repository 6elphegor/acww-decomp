#include "types.h"
#include "Unk_020d8c7c.h"

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
void func_02078370(void);
void func_0207835c(void);
void func_02097564(void);
void SaveData_Apply(void *p);
void SaveData_Setup(void *p, u32 x);
void _ZN8SaveData5resetEv(void *p);
BOOL _ZN11SaveRecord412isStateUnsetEv(void *p);
void func_0209f224(u32 x);
void Save_InvalidateLetterStorage(void);
u32 Save_SlotStampsMatch(void);
u32 Save_ReadSlotAsyncStep(u32 a, void *p);
void func_020b4f78(void *p, u32 x);
void func_020b4968(u32 a, u32 b);
u8 *func_020b4934(void);
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
extern u8 data_021ed32c;
}

// Intermediate game-state class with an inline constructor that sets flags
class Unk_020e2988 : public GameProc {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Unk_020e2988() {}
};

class BootLogoScene : public Unk_020e2988 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    void func_020b41cc();
    void func_020b4248();
    void setupGraphics();

    /* 0x50 */ u8 unk_50;
    /* 0x51 */ volatile u8 unk_51;
    /* 0x54 */ u64 unk_54;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 unk_5d;
    /* 0x5e */ u8 unk_5e;
    /* 0x5f */ u8 unk_5f;
    /* 0x60 */ void *unk_60;
    /* 0x64 */ void *unk_64;
    /* 0x68 */ void *unk_68;
};

extern "C" BootLogoScene *func_020b459c(void) { return new BootLogoScene; }

BOOL BootLogoScene::vfunc_00() {
    gVBlanksPerFrame = 3;
    Snd_CreateScene();
    unk_50 = 0;
    unk_60 = gCurrentHeap;
    unk_64 = Heap_Alloc(unk_60, 0x15fe0);
    unk_68 = Heap_Alloc(unk_60, 0x15fe0);
    return TRUE;
}

BOOL BootLogoScene::vfunc_0c() {
    Heap_Free(unk_60, unk_64);
    Heap_Free(unk_60, unk_68);
    return TRUE;
}

BOOL BootLogoScene::onExecute() {
    switch (unk_5f) {
    case 0:
        if (unk_50 == 1) unk_5f = 1;
        break;
    case 1: {
        u32 r = Save_ReadSlotAsyncStep(0, unk_64);
        if (r != 3) {
            unk_5c = r;
            unk_5f = 2;
        }
        break;
    }
    case 2: {
        u32 r = Save_ReadSlotAsyncStep(1, unk_68);
        if (r != 3) {
            unk_5d = r;
            unk_5f = 3;
        }
        break;
    }
    }
    switch (unk_50) {
    case 0:
        setupGraphics();
        Gfx2d_SetBrightness(-16);
        unk_50 = 1;
        unk_51 = 0x10;
        Snd_PlaySe(0x88c);
        break;
    case 1:
        if (unk_51 != 0) {
            unk_51 = unk_51 - 1;
            Gfx2d_SetBrightness(-unk_51);
        } else {
            unk_50 = 2;
            unk_54 = OS_GetTick();
        }
        break;
    case 2: {
        u64 now = OS_GetTick();
        if (unk_5f < 5) {
            if (unk_5f < 3) break;
            func_020b4248();
            func_020b41cc();
            unk_5f = 5;
        }
        if (now - unk_54 < 0x7fd88) break;
        unk_50 = 3;
        unk_51 = 0x10;
        break;
    }
    case 3:
        if (unk_51 != 0) {
            unk_51 = unk_51 - 1;
            Gfx2d_SetBrightness(unk_51 - 0x10);
        } else {
            Gfx2d_SetMainPlanes(0);
            Gfx2d_SetSubPlanes(0);
            unk_50 = 4;
            func_020b4f78(func_020b4934(), 0x2c);
            func_020b4968(3, 2);
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

void BootLogoScene::func_020b4248() {
    if (unk_5c == 1 || unk_5d == 1) {
        unk_5e = 1;
    } else if (unk_5c != 0 && unk_5d != 0) {
        unk_5e = 4;
    } else {
        u32 r;
        if (unk_5c != 0) {
            r = 1;
        } else if (unk_5d != 0) {
            r = 0;
        } else {
            r = Save_SlotStampsMatch();
        }
        if (r == 0) {
            MI_CpuCopy8(unk_64, &gSaveData, 0x15fe0);
        } else {
            MI_CpuCopy8(unk_68, &gSaveData, 0x15fe0);
        }
        unk_5e = 0;
    }
}

void BootLogoScene::func_020b41cc() {
    BgHeap_Create(0x5000, 0);
    if (unk_5e == 4 || unk_5e == 1) {
        if (unk_5e == 4) {
            if (!_ZN11SaveRecord412isStateUnsetEv(&data_021ed32c)) func_0209f224(1);
        }
        if (unk_5e == 4) Save_InvalidateLetterStorage();
        _ZN8SaveData5resetEv(&gSaveData);
        func_02097564();
        func_02078370();
        SaveData_Setup(&gSaveData, 3);
    } else {
        SaveData_Setup(&gSaveData, 4);
    }
    SaveData_Apply(&gSaveData);
    func_0207835c();
    BgHeap_Destroy();
}



#include "types.h"
#include "Unk_020d8c7c.h"

extern u32 *gCurrentHeap;

extern const u16 sGameRootChildProfiles[8];
const u16 sGameRootChildProfiles[8] = { 0xd7, 0xce, 0xcf, 0xcb, 8, 0xa, 0xcc, 0 };

u32 gGameRoot;

extern "C" {
void Scene_CreateRequested();
void StrBSize_Unload();
void AcreAttr_Unload();
void FtrInfo_Exit();
void ItemInfo_Exit();
void PatternPresetInfo_Get();
void PatternPresetInfo_Close();
void FgData_Unload(u32);
void TownBlockMap_Destroy(u32);
void HouseRoomMaps_Destroy(u32);
void Comm_DestroyHeap();
void NetSession_Exit();
void StrBSize_Load();
void AcreAttr_Load();
void FtrInfo_Init();
void ItemInfo_Init();
void PatternPresetInfo_Open();
void FgData_Load(u32);
void TownBlockMap_Create(u32);
void HouseRoomMaps_Create(u32);
void Comm_CreateHeap(u32);
void NetSession_Init();
void NpcSpawn_ResetAll();
void ChatBalloon_ClearAll();
void Bgm_ResetAll();
void Text_ResetLabels();
void Scene_RequestBoot();
s32 GameProc_CreateRoot(s32, s32, s32);
void GameProc_CreateChild(u32, s32, s32, s32);
}

class GameRoot : public GameProc {
public:
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
};

extern "C" GameRoot *GameRoot_Create() {
    return new GameRoot();
}

extern "C" void GameRoot_Boot() {
    s32 r;
    s32 i;
    Scene_RequestBoot();
    r = GameProc_CreateRoot(0, 0, 1);
    for (i = 0; i < 7; i++) {
        GameProc_CreateChild(sGameRootChildProfiles[i], r, 0, 0);
    }
}

extern "C" void SoftReset_ClearSystems() {
    ChatBalloon_ClearAll();
    Bgm_ResetAll();
    Text_ResetLabels();
}

BOOL GameRoot::onCreate() {
    gGameRoot = (u32)this;
    StrBSize_Load();
    AcreAttr_Load();
    FtrInfo_Init();
    ItemInfo_Init();
    PatternPresetInfo_Get();
    PatternPresetInfo_Open();
    FgData_Load((u32)gCurrentHeap);
    TownBlockMap_Create((u32)gCurrentHeap);
    HouseRoomMaps_Create((u32)gCurrentHeap);
    Comm_CreateHeap((u32)gCurrentHeap);
    NetSession_Init();
    NpcSpawn_ResetAll();
    return TRUE;
}

BOOL GameRoot::onDelete() {
    StrBSize_Unload();
    AcreAttr_Unload();
    FtrInfo_Exit();
    ItemInfo_Exit();
    PatternPresetInfo_Get();
    PatternPresetInfo_Close();
    FgData_Unload((u32)gCurrentHeap);
    TownBlockMap_Destroy((u32)gCurrentHeap);
    HouseRoomMaps_Destroy((u32)gCurrentHeap);
    Comm_DestroyHeap();
    NetSession_Exit();
    return TRUE;
}

BOOL GameRoot::onExecute() {
    Scene_CreateRequested();
    return TRUE;
}

BOOL GameRoot::onDraw() {
    return TRUE;
}

// func_0209c9f8 = D1, func_0209ca18 = D0 (implicit destructor)


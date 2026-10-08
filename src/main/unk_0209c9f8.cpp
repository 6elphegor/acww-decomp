#include "types.h"
#include "sys/ProcProfile.h"
#include "Unk_020d8c7c.h"
#define PROTO_LOCAL_gCurrentHeap  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_0202e840.h"
#include "proto/main/unk_02034438.h"
#include "proto/main/unk_02038474.h"
#include "proto/main/unk_020501d4.h"
#include "proto/main/unk_02052b50.h"
#include "proto/main/unk_02070560.h"
#include "proto/main/unk_020720f8.h"
#include "proto/main/unk_02082d74.h"
#include "proto/main/unk_0209c9f8.h"
#include "proto/main/unk_020a427c.h"
#include "proto/main/unk_020b0e60.h"

extern u32 *gCurrentHeap;

extern const u16 sGameRootChildProfiles[8];
const u16 sGameRootChildProfiles[8] = { 0xd7, 0xce, 0xcf, 0xcb, 8, 0xa, 0xcc, 0 };

u32 gGameRoot;

extern "C" {
void AcreAttr_Unload();
void ItemInfo_Exit();
void FgData_Unload(u32);
void TownBlockMap_Destroy(u32);
void HouseRoomMaps_Destroy(u32);
void AcreAttr_Load();
void ItemInfo_Init();
void FgData_Load(u32);
void TownBlockMap_Create(u32);
void HouseRoomMaps_Create(u32);
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

// Process profile of GameRoot_Create (gProfileTable entry): factory, execute and draw priorities.
ProcProfile sGameRootProfile = {(void *(*)())GameRoot_Create, 0x0, 0xd7};

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
    PatternPresetInfo_Open(PatternPresetInfo_Get());
    FgData_Load((u32)gCurrentHeap);
    TownBlockMap_Create((u32)gCurrentHeap);
    HouseRoomMaps_Create((u32)gCurrentHeap);
    Comm_CreateHeap((Heap *)gCurrentHeap);
    NetSession_Init();
    NpcSpawn_ResetAll();
    return TRUE;
}

BOOL GameRoot::onDelete() {
    StrBSize_Unload();
    AcreAttr_Unload();
    FtrInfo_Exit();
    ItemInfo_Exit();
    PatternPresetInfo_Close(PatternPresetInfo_Get());
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


#include "types.h"
#include "Unk_020d8c7c.h"

extern u32 *gCurrentHeap;

extern const u16 data_020d0650[8];
const u16 data_020d0650[8] = { 0xd7, 0xce, 0xcf, 0xcb, 8, 0xa, 0xcc, 0 };

u32 data_021d72e8;

extern "C" {
void func_020a4394();
void StrBSize_Unload();
void AcreAttr_Unload();
void FtrInfo_Exit();
void ItemInfo_Exit();
void func_02071320();
void func_020713e8();
void FgData_Unload(u32);
void TownBlockMap_Destroy(u32);
void HouseRoomMaps_Destroy(u32);
void Comm_DestroyHeap();
void func_020a5cb8();
void StrBSize_Load();
void AcreAttr_Load();
void FtrInfo_Init();
void ItemInfo_Init();
void func_020713f0();
void FgData_Load(u32);
void TownBlockMap_Create(u32);
void HouseRoomMaps_Create(u32);
void Comm_CreateHeap(u32);
void func_020a5cbc();
void NpcSpawn_ResetAll();
void func_02038ef0();
void func_020349e0();
void Text_ResetLabels();
void func_020a43ec();
s32 GameProc_CreateRoot(s32, s32, s32);
void GameProc_CreateChild(u32, s32, s32, s32);
}

class Unk_020e2304 : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
};

extern "C" Unk_020e2304 *func_0209cb48() {
    return new Unk_020e2304();
}

extern "C" void func_0209cb0c() {
    s32 r;
    s32 i;
    func_020a43ec();
    r = GameProc_CreateRoot(0, 0, 1);
    for (i = 0; i < 7; i++) {
        GameProc_CreateChild(data_020d0650[i], r, 0, 0);
    }
}

extern "C" void func_0209caf4() {
    func_02038ef0();
    func_020349e0();
    Text_ResetLabels();
}

BOOL Unk_020e2304::vfunc_00() {
    data_021d72e8 = (u32)this;
    StrBSize_Load();
    AcreAttr_Load();
    FtrInfo_Init();
    ItemInfo_Init();
    func_02071320();
    func_020713f0();
    FgData_Load((u32)gCurrentHeap);
    TownBlockMap_Create((u32)gCurrentHeap);
    HouseRoomMaps_Create((u32)gCurrentHeap);
    Comm_CreateHeap((u32)gCurrentHeap);
    func_020a5cbc();
    NpcSpawn_ResetAll();
    return TRUE;
}

BOOL Unk_020e2304::vfunc_0c() {
    StrBSize_Unload();
    AcreAttr_Unload();
    FtrInfo_Exit();
    ItemInfo_Exit();
    func_02071320();
    func_020713e8();
    FgData_Unload((u32)gCurrentHeap);
    TownBlockMap_Destroy((u32)gCurrentHeap);
    HouseRoomMaps_Destroy((u32)gCurrentHeap);
    Comm_DestroyHeap();
    func_020a5cb8();
    return TRUE;
}

BOOL Unk_020e2304::onExecute() {
    func_020a4394();
    return TRUE;
}

BOOL Unk_020e2304::onDraw() {
    return TRUE;
}

// func_0209c9f8 = D1, func_0209ca18 = D0 (implicit destructor)


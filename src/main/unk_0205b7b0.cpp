#include "types.h"

#define ALIGN4(x) (((x) + 3) & ~3)
static inline u32 AL(u32 v, u32 a) {
    return (v + a - 1) & ~(a - 1);
}

struct Unk_0205b848_Cfg { u8 pad[0x6c]; u8 unk_6c; };

// sCharaAnimCache object
struct CharaAnimCache {
    u32 unk_00[25];
    u16 unk_64[25];
    u16 unk_96[25];

    CharaAnimCache();
    ~CharaAnimCache();
    void setDataSize(s32 i, u32 v);
    u32 getDataSize(s32 i);
    s32 findSlotByAnim(s32 v);
    void setAnimId(s32 i, u32 v);
    u32 getAnimId(s32 i);
    u32 getBuffer(s32 i);
    void freeBuffers();
    void allocBuffers();
};

extern "C" {
extern void *gTownBclHeap;
extern void *gPlayerActorHeap;
extern void *gNpcModelHeap;
extern void *gSpNpcAnimPoolHeap;
extern void *gVillagerAnimPoolHeap;
extern void *gNpcTexPatBufHeap;
extern void *gFishBobberHeap;
extern void *gHeldItemAnimHeap;
extern void *gPlayerBodyAnimHeap;
extern void *gCharaFaceAnimWorkHeap;
extern void *gHeldItemModelHeap;
extern void *gPlayerGlassesModelHeap;
extern void *gPlayerPaletteHeap;
extern void *gPlayerHeadModelHeap;
extern void *gPlayerBodyModelHeap;
extern void *gCharaFaceAnimHeap;
extern void *gPlayerFaceTexHeap;
extern void *gCharaClothTexHeap;
extern void *sCharaAnimHeap;
extern void *sMuseumAquariumHeap;
extern void *sFishDisplayHeap;
extern void *sFishFinHeap;
extern void *sFishShadowHeap;
extern void *sMuseumInsectHeap;
extern void *sFieldInsectHeap;
extern void *sHeldInsectHeap;
extern void *sSpecialInsectHeap;
extern void *gFieldStructureHeap;
extern void *sFurnitureHeap;
extern void *gBgHeap;
extern void *gMenuHeap;
extern void *gModelCacheHeap;
extern void *gNetHeap;
extern void *gRoomBclHeap;
extern char sCharaAnimPathBuf[];
extern CharaAnimCache sCharaAnimCache;
extern u8 gFieldSceneKind;
extern u32 data_020cbf94, data_020cbf98, data_020cbf9c, data_020cbfa0, data_020cbfa4;
extern u32 data_020c8b9c;
extern u32 data_020c8ba0;
extern Unk_0205b848_Cfg *gCommManager;
extern const u8 sJointGroup3Ranges[4];
extern const u8 sJointGroup1Ranges[4];
extern const u8 sJointGroup0Ranges[4];
extern const u8 sJointGroup2Ranges[4];
extern const u8 sCharaAnimHoldPoseModes[];
extern const u16 sCharaAnimEyeAnims[];
extern const u16 sCharaAnimMouthAnims[];
extern u8 sJointGroupRangeCounts[];
extern u8 *sJointGroupRanges[];
extern u16 sCharaAnimJointGroups[];

void func_020e8c88(void *heap);
void *Heap_AllocAligned(void *, u32, s32);
void func_020e885c(void *);
void func_020e877c(void *);
void *ExpHeap_Create(u32 size, void *parent);
void *FrameHeap_Create(u32 size, void *parent, ...);
u32 func_02094340(void);
u32 func_0209433c(void);
s32 Town_GetMaxOutdoorVillagers(void);
void *Scene_GetCurrent(void);
s32 Scene_GetMaxCharacters(void *);
s32 Scene_GetMaxPlayers(void *);
s32 NpcSpawn_GetSpNpcSlotCount(void);
u32 func_02077e28(void);
u32 func_02077e20(void);
u32 FishBobber_GetModelSize(void);
u32 HeldItem_GetAnimHeapSize(void);
u32 func_0205eec0(void);
u32 func_0205d2fc(void);
u32 HeldItem_GetModelBufferSize(void);
u32 func_0205d770(void);
u32 PlayerPalette_GetSlotSize(void);
u32 PlayerHead_GetBufferSize(void);
u32 func_0205c8c8(void);
u32 func_0205d178(void);
u32 func_0205d418(void);
u32 ClothTex_GetBufferSize(void);
u32 CharaAnim_GetBodySlotSize(void);
u32 CharaAnim_GetPartSlotSize(void);
u32 CharaAnim_GetExtraSlotSize(void);
void MI_CpuCopy8(void *, void *, u32);
s32 File_LoadToBuffer(char *, void *, u32);
s32 func_020639e8(char *, const char *, ...);
BOOL Item_IsFurniture(u16 *);
void CharaAnimHeap_Destroy(void);
void CharaAnimHeap_Create(void *parent);

void AnimSlotRef_CopyFromSlot(u8 *, s32);
void AnimSlotRef_SetSlot(u8 *, u32);
u32 JointGroup_GetRangeCount(u32);
char *CharaAnim_GetPath(u32);
void AnimSlotRef_Load(u8 *, s32, s32, s32);
}

extern const u8 sJointGroup3Ranges[4];
const u8 sJointGroup3Ranges[4] = {17, 17, 0, 0};
void *gVillagerAnimPoolHeap;
extern const u8 sJointGroup2Ranges[4];
const u8 sJointGroup2Ranges[4] = {9, 11, 12, 14};
void *gSpNpcAnimPoolHeap;
extern const u8 sJointGroup0Ranges[4];
const u8 sJointGroup0Ranges[4] = {12, 14, 0, 0};
extern const u16 data_020cab84[2];
const u16 data_020cab84[2] = {0x800, 0};
extern const u16 data_020cab80[2];  // 0x020cab80, 0x020cab84: start of this file's .rodata; read by the unit at 0x020594dc (0x0205a900, 0x0205a90c)
const u16 data_020cab80[2] = {0x400, 0};
void *gRoomBclHeap;
void *gNetHeap;
void *gModelCacheHeap;
void *gMenuHeap;
void *gBgHeap;
extern const u16 sCharaAnimMouthAnims[0x144];
const u16 sCharaAnimMouthAnims[0x144] = {
    367, 367, 367, 367, 367, 187, 188, 189, 189, 190, 190, 191, 367, 192, 191, 367,
    192, 193, 197, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 194, 195, 196, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208,
    209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240,
    241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 367, 367, 367, 367, 367,
    367, 252, 253, 254, 255, 256, 257, 258, 367, 367, 367, 367, 367, 259, 260, 261,
    262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277,
    278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 367, 367, 296,
    297, 298, 299, 300, 367, 367, 301, 302, 303, 307, 308, 367, 367, 367, 367, 304,
    367, 305, 367, 306, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 309, 310, 313, 313, 314, 367, 367, 367, 367, 291, 292, 293, 294, 295, 315,
    316, 317, 318, 319, 367, 320, 321, 322, 323, 324, 325, 326, 327, 367, 367, 328,
    367, 329, 367, 367, 367, 367, 367, 367, 367, 330, 367, 367, 367, 331, 332, 367,
    367, 367, 367, 367, 367, 367, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342,
    367, 367, 367, 343, 344, 345, 346, 347, 348, 349, 367, 367, 350, 351, 352, 353,
    352, 353, 354, 355, 354, 355, 367, 356, 357, 358, 359, 359, 360, 361, 362, 363,
    364, 367, 365, 366, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367,
};
void *gFieldStructureHeap;
void *sSpecialInsectHeap;
void *sHeldInsectHeap;
void *sFieldInsectHeap;
void *sMuseumInsectHeap;
extern const u16 sCharaAnimEyeAnims[0x144];
const u16 sCharaAnimEyeAnims[0x144] = {
    367, 367, 367, 367, 367, 1, 2, 3, 3, 4, 4, 5, 6, 7, 5, 6,
    7, 8, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 9, 10, 11, 367, 367, 367, 12, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 0, 30, 31, 32, 0, 33, 34, 35, 36, 37,
    0, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 0, 66, 67,
    68, 69, 70, 71, 72, 73, 74, 367, 75, 76, 77, 78, 79, 80, 81, 82,
    83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
    99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 367, 367, 367,
    117, 118, 119, 120, 367, 367, 367, 121, 122, 367, 367, 367, 367, 367, 367, 123,
    367, 367, 367, 124, 367, 367, 367, 367, 367, 367, 367, 367, 125, 367, 367, 367,
    367, 367, 367, 126, 126, 127, 367, 367, 367, 367, 112, 113, 114, 115, 116, 128,
    129, 130, 131, 132, 367, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 367, 367, 367, 367, 367, 367, 367, 146, 367, 367, 367, 147, 148, 149,
    150, 151, 367, 367, 367, 367, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161,
    367, 367, 367, 162, 163, 164, 165, 166, 167, 168, 367, 367, 169, 170, 171, 172,
    171, 172, 173, 174, 173, 174, 367, 175, 176, 177, 178, 178, 179, 180, 181, 182,
    183, 367, 184, 185, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367,
};
void *sFishFinHeap;
void *sFishDisplayHeap;
void *sMuseumAquariumHeap;
void *sCharaAnimHeap;
char sCharaAnimPathBuf[0x14];
void *gPlayerFaceTexHeap;
u8 *sJointGroupRanges[4] = {(u8 *)sJointGroup0Ranges, (u8 *)sJointGroup1Ranges, (u8 *)sJointGroup2Ranges, (u8 *)sJointGroup3Ranges};
void *gPlayerBodyModelHeap;
void *gPlayerHeadModelHeap;
void *gPlayerPaletteHeap;
void *gPlayerGlassesModelHeap;
void *gHeldItemModelHeap;
void *sFurnitureHeap;
void *gPlayerBodyAnimHeap;
void *gHeldItemAnimHeap;
void *sFishShadowHeap;
void *gNpcTexPatBufHeap;
extern const u8 sCharaAnimHoldPoseModes[0x144];
const u8 sCharaAnimHoldPoseModes[0x144] = {
    0, 0, 0, 2, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0,
    0, 1, 1, 3, 3, 3, 3, 2, 3, 3, 2, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 2, 2,
    3, 3, 2, 3, 3, 3, 2, 2, 2, 0, 3, 3, 0, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 2, 0, 3, 3, 3, 3, 3, 3, 3, 3,
    0, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3,
};
void *gCharaFaceAnimHeap;
void *gNpcModelHeap;
void *gPlayerActorHeap;
void *gCharaFaceAnimWorkHeap;
CharaAnimCache sCharaAnimCache;
void *gCharaClothTexHeap;
extern const u8 sJointGroup1Ranges[4];
const u8 sJointGroup1Ranges[4] = {9, 11, 0, 0};
u16 sCharaAnimJointGroups[0x144] = {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 2, 2, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3,
};
void *gFishBobberHeap;
void *gTownBclHeap;
u8 sJointGroupRangeCounts[4] = {1, 1, 2, 1};

enum Unk_0205b7cc_Zero { UNK_0205B7CC_ZERO = 0 };

extern "C" void CharaAnimCache_Create(void *parent) {
    CharaAnimHeap_Create(parent);
    sCharaAnimCache.allocBuffers();
    if (sCharaAnimHeap) func_020e877c(sCharaAnimHeap);
}

extern "C" void CharaAnimCache_Destroy() {
    sCharaAnimCache.freeBuffers();
    CharaAnimHeap_Destroy();
}

extern "C" char *CharaAnim_GetPath(u32 x) {
    u32 z = x >> 5;
    func_020639e8(sCharaAnimPathBuf, "/anm/%d/%d.nsbca", z, x);
    return sCharaAnimPathBuf;
}

extern "C" u32 CharaAnim_GetBodySlotSize() { return 0x15c0; }

extern "C" u32 CharaAnim_GetPartSlotSize() { return 0x270; }

extern "C" u32 CharaAnim_GetExtraSlotSize() { return 0x270; }

extern "C" u32 CharaAnim_GetEyeAnim(u32 i) { return sCharaAnimEyeAnims[i]; }

extern "C" u32 CharaAnim_GetMouthAnim(u32 i) { return sCharaAnimMouthAnims[i]; }

extern "C" u32 JointGroup_GetRangeCount(u32 i) { return sJointGroupRangeCounts[i]; }

extern "C" u32 JointGroup_GetRangeFirst(u32 a, u32 b) {
    JointGroup_GetRangeCount(a);
    return sJointGroupRanges[a][b * 2];
}

extern "C" u32 JointGroup_GetRangeLast(u32 a, u32 b) {
    JointGroup_GetRangeCount(a);
    u8 *q = sJointGroupRanges[a] + b * 2;
    return q[1];
}

extern "C" u32 CharaAnim_GetJointGroup(u32 i) { return sCharaAnimJointGroups[i]; }

extern "C" u32 CharaAnim_GetHoldPoseMode(u32 i) { return sCharaAnimHoldPoseModes[i]; }

CharaAnimCache::CharaAnimCache() {
    for (s32 i = 0; i < 0x19; i++) unk_64[i] = 0x144;
}

CharaAnimCache::~CharaAnimCache() {}

void CharaAnimCache::allocBuffers() {
    void *heap = sCharaAnimHeap;
    u32 n = gCommManager->unk_6c;
    u32 m = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (n < m) m = n;
    u32 k = m ? m : 1;
    u32 v[4];
    v[0] = Scene_GetMaxCharacters(Scene_GetCurrent()) + NpcSpawn_GetSpNpcSlotCount() - k;
    v[1] = CharaAnim_GetBodySlotSize();
    v[2] = CharaAnim_GetPartSlotSize();
    v[3] = CharaAnim_GetExtraSlotSize();
    u32 i;
    for (i = 0; i < m; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[1], 4);
    for (i = 4; i < v[0] + 4; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[1], 4);
    for (i = 9; i < m + 9; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[2], 4);
    m = 4;
    for (i = 0xd; i < v[0] + 0xd; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[2], m);
    for (i = 0x12; i < v[0] + 0x12; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[3], m);
}

void CharaAnimCache::freeBuffers() {
    s32 i;
    for (i = 0; i < 0x19; i++) {
        unk_00[i] = 0;
        unk_64[i] = 0x144;
        unk_96[i] = 0;
    }
    if (sCharaAnimHeap) func_020e885c(sCharaAnimHeap);
}

u32 CharaAnimCache::getBuffer(s32 i) { return unk_00[i]; }

u32 CharaAnimCache::getAnimId(s32 i) { return unk_64[i]; }

void CharaAnimCache::setAnimId(s32 i, u32 v) { unk_64[i] = v; }

s32 CharaAnimCache::findSlotByAnim(s32 v) {
    s32 lo = 0, hi = 0x19;
    if (v < 0x137) hi = 9;
    else lo = 9;
    for (; lo < hi; lo++) {
        s32 c = unk_64[lo];
        if (c == v) return lo;
    }
    return 0x19;
}

u32 CharaAnimCache::getDataSize(s32 i) { return unk_96[i]; }

void CharaAnimCache::setDataSize(s32 i, u32 v) { unk_96[i] = v; }

extern "C" void AnimSlotRef_Init(u8 *p) { *p = 0x19; }

extern "C" void AnimSlotRef_Destruct() {}

extern "C" void AnimSlotRef_Assign(u8 *p, u32 v) {
    AnimSlotRef_SetSlot(p, v);
    AnimSlotRef_Load(p, 0x144, 0, 0);
}

extern "C" void AnimSlotRef_SetSlot(u8 *p, u32 v) { *p = v; }

extern "C" void AnimSlotRef_Load(u8 *p, s32 a, s32 b, s32 c) {
    u32 cur = *p;
    if (a >= 0x144) {
        sCharaAnimCache.setAnimId(cur, 0x144);
        sCharaAnimCache.setDataSize(cur, 0);
        return;
    }
    if (c == 0 && a == sCharaAnimCache.getAnimId(cur)) return;
    if (b != 0) {
        s32 slot = sCharaAnimCache.findSlotByAnim(a);
        if (slot != 0x19) {
            AnimSlotRef_CopyFromSlot(p, slot);
            return;
        }
    }
    u32 buf = sCharaAnimCache.getBuffer(cur);
    u32 sz;
    if ((s32)cur > 8) sz = CharaAnim_GetPartSlotSize();
    else sz = CharaAnim_GetBodySlotSize();
    s32 r = File_LoadToBuffer(CharaAnim_GetPath(a), (void *)buf, sz);
    if (r != 0) {
        sCharaAnimCache.setAnimId(cur, a);
        sCharaAnimCache.setDataSize(cur, r);
    }
}

extern "C" void AnimSlotRef_CopyFromSlot(u8 *p, s32 v) {
    u32 cur = *p;
    if (v != cur) {
        u32 x = sCharaAnimCache.getAnimId(v);
        if (x != sCharaAnimCache.getAnimId(cur)) {
            u32 sz = sCharaAnimCache.getDataSize(v);
            if (sz != 0) {
                u32 a = sCharaAnimCache.getBuffer(v);
                u32 b = sCharaAnimCache.getBuffer(cur);
                if (a != 0 && b != 0) {
                    MI_CpuCopy8((void *)a, (void *)b, sz);
                    sCharaAnimCache.setAnimId(cur, x);
                    sCharaAnimCache.setDataSize(cur, sz);
                }
            }
        }
    }
}

extern "C" u32 AnimSlotRef_GetData(u8 *p) { return sCharaAnimCache.getBuffer(*p); }

extern "C" u32 AnimSlotRef_GetAnimId(u8 *p) { return sCharaAnimCache.getAnimId(*p); }

extern "C" void NetHeap_Create(u32 size, void *parent) { gNetHeap = ExpHeap_Create(size, parent); }

extern "C" void NetHeap_Destroy() { func_020e8c88(gNetHeap); gNetHeap = 0; }

extern "C" void ModelCacheHeap_Create(u32 size, void *parent) { gModelCacheHeap = ExpHeap_Create(size, parent); }

extern "C" void ModelCacheHeap_Destroy() { func_020e8c88(gModelCacheHeap); gModelCacheHeap = 0; }

extern "C" void MenuHeap_Create(u32 size, void *parent) { gMenuHeap = ExpHeap_Create(size, parent); }

extern "C" void MenuHeap_Destroy() { func_020e8c88(gMenuHeap); gMenuHeap = 0; }

extern "C" void BgHeap_Create(u32 size, void *parent) { gBgHeap = ExpHeap_Create(size, parent); }

extern "C" void BgHeap_Destroy() { func_020e8c88(gBgHeap); gBgHeap = 0; }

extern "C" void FurnitureHeap_Create(u32 size, void *parent) { sFurnitureHeap = ExpHeap_Create(size, parent); }

extern "C" void FurnitureHeap_Destroy(void) {
    func_020e8c88(sFurnitureHeap);
    sFurnitureHeap = NULL;
}

extern "C" void FieldStructureHeap_Create(u32 size, void *parent) {
    gFieldStructureHeap = FrameHeap_Create(size, parent);
}

extern "C" void FieldStructureHeap_Destroy(void) {
    func_020e8c88(gFieldStructureHeap);
    gFieldStructureHeap = NULL;
}

extern "C" void SpecialInsectHeap_Create(u32 size, void *parent) {
    sSpecialInsectHeap = ExpHeap_Create(size, parent);
}

extern "C" void SpecialInsectHeap_Destroy(void) {
    func_020e8c88(sSpecialInsectHeap);
    sSpecialInsectHeap = NULL;
}

extern "C" void HeldInsectHeap_Create(u32 size, void *parent) {
    sHeldInsectHeap = ExpHeap_Create(size, parent);
}

extern "C" void HeldInsectHeap_Destroy(void) {
    func_020e8c88(sHeldInsectHeap);
    sHeldInsectHeap = NULL;
}

extern "C" void FieldInsectHeap_Create(u32 size, void *parent) {
    sFieldInsectHeap = ExpHeap_Create(size, parent);
}

extern "C" void FieldInsectHeap_Destroy(void) {
    func_020e8c88(sFieldInsectHeap);
    sFieldInsectHeap = NULL;
}

extern "C" void MuseumInsectHeap_Create(u32 size, void *parent) {
    sMuseumInsectHeap = ExpHeap_Create(size, parent);
}

extern "C" void MuseumInsectHeap_Destroy(void) {
    func_020e8c88(sMuseumInsectHeap);
    sMuseumInsectHeap = NULL;
}

extern "C" void FishShadowHeap_Create(u32 size, void *parent) {
    sFishShadowHeap = ExpHeap_Create(size, parent);
}

extern "C" void FishShadowHeap_Destroy(void) {
    func_020e8c88(sFishShadowHeap);
    sFishShadowHeap = NULL;
}

extern "C" void FishFinHeap_Create(u32 size, void *parent) {
    sFishFinHeap = ExpHeap_Create(size, parent);
}

extern "C" void FishFinHeap_Destroy(void) {
    func_020e8c88(sFishFinHeap);
    sFishFinHeap = NULL;
}

extern "C" void FishDisplayHeap_Create(u32 size, void *parent) {
    sFishDisplayHeap = ExpHeap_Create(size, parent);
}

extern "C" void FishDisplayHeap_Destroy(void) {
    func_020e8c88(sFishDisplayHeap);
    sFishDisplayHeap = NULL;
}

extern "C" void MuseumAquariumHeap_Create(u32 size, void *parent) {
    sMuseumAquariumHeap = ExpHeap_Create(size, parent);
}

extern "C" void MuseumAquariumHeap_Destroy(void) {
    func_020e8c88(sMuseumAquariumHeap);
    sMuseumAquariumHeap = NULL;
}

extern "C" void CharaAnimHeap_Create(void *parent) {
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 n = gCommManager->unk_6c;
    u32 a = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (n < a) {
        a = n;
    }
    u32 r = a != 0 ? a : 1;
    u32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    r = c + NpcSpawn_GetSpNpcSlotCount() - r;
    s0 += ALIGN4(CharaAnim_GetBodySlotSize());
    s1 += ALIGN4(CharaAnim_GetPartSlotSize());
    s2 += ALIGN4(CharaAnim_GetExtraSlotSize());
    u32 m = a + r;
    s3 += s0 * m;
    s3 += s1 * m;
    s3 += s2 * r;
    sCharaAnimHeap = FrameHeap_Create(s3, parent);
}

extern "C" void CharaAnimHeap_Destroy(void) {
    func_020e8c88(sCharaAnimHeap);
    sCharaAnimHeap = NULL;
}

extern "C" void CharaClothTexHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(ClothTex_GetBufferSize());
    s32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    s32 d = NpcSpawn_GetSpNpcSlotCount();
    t += s * (c + d + 1);
    gCharaClothTexHeap = FrameHeap_Create(t, parent);
}

extern "C" void CharaClothTexHeap_Destroy(void) {
    func_020e8c88(gCharaClothTexHeap);
    gCharaClothTexHeap = NULL;
}

extern "C" void PlayerFaceTexHeap_Create(void *parent) {
    u32 n = gCommManager->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d418());
    t += s * n;
    gPlayerFaceTexHeap = FrameHeap_Create(t, parent);
}

extern "C" void PlayerFaceTexHeap_Destroy(void) {
    func_020e8c88(gPlayerFaceTexHeap);
    gPlayerFaceTexHeap = NULL;
}

extern "C" void CharaFaceAnimHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d178());
    s32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    s32 d = NpcSpawn_GetSpNpcSlotCount();
    t += s * (c + d);
    gCharaFaceAnimHeap = FrameHeap_Create(t, parent);
}

extern "C" void CharaFaceAnimHeap_Destroy(void) {
    func_020e8c88(gCharaFaceAnimHeap);
    gCharaFaceAnimHeap = NULL;
}

extern "C" void PlayerBodyModelHeap_Create(void *parent) {
    u32 n = gCommManager->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205c8c8());
    t += s * n;
    gPlayerBodyModelHeap = FrameHeap_Create(t, parent);
}

extern "C" void PlayerBodyModelHeap_Destroy(void) {
    func_020e8c88(gPlayerBodyModelHeap);
    gPlayerBodyModelHeap = NULL;
}

extern "C" void PlayerHeadModelHeap_Create(void *parent) {
    u32 n = gCommManager->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(PlayerHead_GetBufferSize());
    t += s * n;
    gPlayerHeadModelHeap = FrameHeap_Create(t, parent);
}

extern "C" void PlayerHeadModelHeap_Destroy(void) {
    func_020e8c88(gPlayerHeadModelHeap);
    gPlayerHeadModelHeap = NULL;
}

extern "C" void PlayerPaletteHeap_Create(void *parent) {
    u32 n = gCommManager->unk_6c;
    u32 s = 0, t = 0;
    s += PlayerPalette_GetSlotSize();
    t += s * n;
    gPlayerPaletteHeap = FrameHeap_Create(t, parent);
}

extern "C" void PlayerPaletteHeap_Destroy(void) {
    func_020e8c88(gPlayerPaletteHeap);
    gPlayerPaletteHeap = NULL;
}

extern "C" void PlayerGlassesModelHeap_Create(void *parent) {
    u32 n = gCommManager->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d770());
    t += s * n;
    gPlayerGlassesModelHeap = FrameHeap_Create(t, parent);
}

extern "C" void PlayerGlassesModelHeap_Destroy(void) {
    func_020e8c88(gPlayerGlassesModelHeap);
    gPlayerGlassesModelHeap = NULL;
}

extern "C" void HeldItemModelHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(HeldItem_GetModelBufferSize());
    s32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    s32 d = NpcSpawn_GetSpNpcSlotCount();
    t += s * (c + d);
    gHeldItemModelHeap = FrameHeap_Create(t, parent);
}

extern "C" void HeldItemModelHeap_Destroy(void) {
    func_020e8c88(gHeldItemModelHeap);
    gHeldItemModelHeap = NULL;
}

extern "C" void CharaFaceAnimWorkHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d2fc());
    s32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    s32 e = c + NpcSpawn_GetSpNpcSlotCount();
    t += ALIGN4(s + 0x48) * e;
    gCharaFaceAnimWorkHeap = FrameHeap_Create(t, parent);
}

extern "C" void CharaFaceAnimWorkHeap_Destroy(void) {
    func_020e8c88(gCharaFaceAnimWorkHeap);
    gCharaFaceAnimWorkHeap = NULL;
}

extern "C" void PlayerBodyAnimHeap_Create(void *parent) {
    u32 n = gCommManager->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205eec0());
    t += ALIGN4(s + 0x48) * n;
    gPlayerBodyAnimHeap = FrameHeap_Create(t, parent);
}

extern "C" void PlayerBodyAnimHeap_Destroy(void) {
    func_020e8c88(gPlayerBodyAnimHeap);
    gPlayerBodyAnimHeap = NULL;
}

extern "C" void HeldItemAnimHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(HeldItem_GetAnimHeapSize());
    s32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    s32 e = c + NpcSpawn_GetSpNpcSlotCount();
    t += ALIGN4(s + 0x48) * e;
    gHeldItemAnimHeap = FrameHeap_Create(t, parent);
}

extern "C" void HeldItemAnimHeap_Destroy(void) {
    func_020e8c88(gHeldItemAnimHeap);
    gHeldItemAnimHeap = NULL;
}

extern "C" void FishBobberHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(FishBobber_GetModelSize());
    s32 c = Scene_GetMaxCharacters(Scene_GetCurrent());
    s32 d = NpcSpawn_GetSpNpcSlotCount();
    t += s * (c + d);
    gFishBobberHeap = FrameHeap_Create(t, parent);
}

extern "C" void FishBobberHeap_Destroy(void) {
    func_020e8c88(gFishBobberHeap);
    gFishBobberHeap = NULL;
}

extern "C" void NpcTexPatBufHeap_Create(void *parent) {
    s32 n;
    if (gFieldSceneKind == 0 ? TRUE : FALSE) {
        n = Town_GetMaxOutdoorVillagers();
    } else {
        n = Scene_GetMaxCharacters(Scene_GetCurrent()) - Scene_GetMaxPlayers(Scene_GetCurrent());
    }
    n += NpcSpawn_GetSpNpcSlotCount();
    u32 s = 0, t = 0;
    s += ALIGN4(data_020cbfa4);
    t += s * n;
    gNpcTexPatBufHeap = FrameHeap_Create(t, parent);
}

extern "C" void NpcTexPatBufHeap_Destroy(void) {
    func_020e8c88(gNpcTexPatBufHeap);
    gNpcTexPatBufHeap = NULL;
}

extern "C" void VillagerAnimPoolHeap_Create(void *parent) {
    u32 t = 0;
    u32 m = data_020cbf9c - 1;
    u32 k = ~m;
    u32 v = (data_020cbfa0 + m) & k;
    v = (v + 0x48 + m) & k;
    t += v * 8;
    gVillagerAnimPoolHeap = FrameHeap_Create(t, parent);
}

extern "C" void VillagerAnimPoolHeap_Destroy(void) {
    func_020e8c88(gVillagerAnimPoolHeap);
    gVillagerAnimPoolHeap = NULL;
}

extern "C" void SpNpcAnimPoolHeap_Create(void *parent) {
    u32 n = NpcSpawn_GetSpNpcSlotCount();
    u32 t = 0;
    u32 m = data_020cbf94 - 1;
    u32 k = ~m;
    u32 v = (data_020cbf98 + m) & k;
    v = (v + 0x48 + m) & k;
    t += v * n;
    gSpNpcAnimPoolHeap = FrameHeap_Create(t, parent);
}

extern "C" void SpNpcAnimPoolHeap_Destroy(void) {
    func_020e8c88(gSpNpcAnimPoolHeap);
    gSpNpcAnimPoolHeap = NULL;
}

extern "C" void *NpcModelHeap_Create(void *parent) {
    u32 t = 0;
    s32 n;
    if (gFieldSceneKind == 0 ? TRUE : FALSE) {
        n = Town_GetMaxOutdoorVillagers();
    } else {
        n = Scene_GetMaxCharacters(Scene_GetCurrent()) - Scene_GetMaxPlayers(Scene_GetCurrent());
    }
    s32 m = NpcSpawn_GetSpNpcSlotCount();
    u32 x = ALIGN4(ALIGN4(func_02077e28()) + 0x48);
    t += x * n;
    x = ALIGN4(ALIGN4(func_02077e20()) + 0x48);
    u32 size = t + x * m;
    if (size != 0) {
        gNpcModelHeap = FrameHeap_Create(size, parent);
    }
    return gNpcModelHeap;
}

extern "C" void NpcModelHeap_Destroy(void) {
    if (gNpcModelHeap) {
        func_020e8c88(gNpcModelHeap);
    }
    gNpcModelHeap = NULL;
}

extern "C" void PlayerActorHeap_Create(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_02094340());
    u32 a = func_0209433c();
    s += AL(16, a);
    t += s * 4;
    gPlayerActorHeap = ExpHeap_Create(t, parent);
}

extern "C" void PlayerActorHeap_Destroy(void) {
    func_020e8c88(gPlayerActorHeap);
    gPlayerActorHeap = NULL;
}

extern "C" void TownBclHeap_Create(s32 x) {
    Unk_0205b7cc_Zero z = UNK_0205B7CC_ZERO;
    u32 s = (data_020c8ba0 + 3) & ~3;
    s = (s + 0x4b) & ~3;
    gTownBclHeap = FrameHeap_Create(z + s, (void *)x, s, z);
}

extern "C" void TownBclHeap_Destroy() {
    func_020e8c88(gTownBclHeap);
    gTownBclHeap = NULL;
}

extern "C" void RoomBclHeap_Create(s32 x) {
    s32 a = x;
    Unk_0205b7cc_Zero z = UNK_0205B7CC_ZERO;
    u32 s = (data_020c8b9c + 3) & ~3;
    s = (s + 0x4b) & ~3;
    u32 e = z + s;
    gRoomBclHeap = FrameHeap_Create(e, (void *)a, s, z);
}

extern "C" void RoomBclHeap_Destroy() {
    func_020e8c88(gRoomBclHeap);
    gRoomBclHeap = NULL;
}


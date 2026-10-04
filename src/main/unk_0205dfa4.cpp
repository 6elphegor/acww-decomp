// mwcc-flags: -str reuse
#include "types.h"
#include "sys/PrioListNode.h"
#include "net/CommManager.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/TexVramSlot.h"
#include "item/ItemId.h"
#include "gfx/TexTransfer.h"
#include "gfx/CachedModel.h"
#include "player/FishBobber.h"
#include "gfx/VramTask.h"
#include "gfx/ModelAnim.h"
#include "gfx/TexVramTask.h"
#include "player/HeldItemModel.h"
#include "gfx/Model.h"
#include "gfx/TwoLayerAnimModel.h"
#include "gfx/Mtx43.h"
#include "gfx/NNSG3dRS.h"

// ---- helper classes (declared elsewhere) ----













// ---- manager singleton (sHeldItemModelBank) ----
class HeldItemModelBank {
public:
    HeldItemModelBank();
    ~HeldItemModelBank();
    void *modelBuffers[9];
    void *animHeaps[9];
    void *animBuffers[9];
    u16 animBufferSizes[9];
    u16 pad_7e;
    void *texAnimBuffers[9];
    u16 texAnimBufferSizes[9];
    u16 pad_b6;
    u32 matAnmHeaps[9];
    TexVramSlot vramSlots[9];
    TexVramTask texTasks[9];
    BlendAnimModel models[9];
    ModelAnim *texAnims[9];
    ItemId items[9];
};


struct Unk_0205e310_P {
    u32 pad[6];
    u32 anmObj;
    u32 resMdl;
};

struct Unk_0205dfb8_Vec {
    s32 x, y, z;
};



static inline BOOL Unk_0205e6e4_Is(u8 v, u8 k) { return v == k ? TRUE : FALSE; }

static inline BOOL Unk_0205ddc8_In(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi)
        r = TRUE;
    return r;
}

extern "C" {
extern const u8 sHeldItemModelIds[0x40];
extern const u8 sHeldItemAnimIds[0x40];
extern const u16 sHeldItemHandPoses[0x40];
extern char sHeldItemModelPathBuf[0x18];
extern char sHeldItemAnimPathBuf[0x18];
extern char sHeldItemTexAnimPathBuf[0x1c];
extern HeldItemModelBank sHeldItemModelBank;
extern void *gHeldItemAnimHeap;
extern void *gHeldItemModelHeap;
extern CommManager *gCommManager;

s32 Str_SPrintf(char *buf, const char *fmt, ...);
s32 File_LoadToBuffer(void *path, void *dst, u32 size);
void *NNS_G3dGetTex(void *p);
void *func_02106654(void);
void *func_02106670(void *p, s32 a);
void *func_021065dc(void);
void *func_021065f8(void *p, s32 a);
#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll(void *p);
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust(void *p);
void *FrameHeap_Create(u32 size, void *heap);
void *Heap_AllocAligned(void *heap, u32 size, u32 align);
void *Scene_GetCurrent(void);
u32 Scene_GetMaxPlayers(void *p);
u32 Scene_GetMaxCharacters(void *p);
s32 NpcSpawn_GetSpNpcSlotCount(void);
u32 ItemInfo_GetHoldableIndex(u16 *p);
u32 ItemInfo_GetHoldableCount(void);
void HeldItemAnimHeap_Destroy(void);
s32 HeldItemModelHeap_Destroy(void);
void HeldItemModelHeap_Create(void);
void HeldItemAnimHeap_Create(u32 x);

void HeldItemModels_OnJointCalcPost(NNSG3dRS *rs);
void HeldItemModel_Update(HeldItemModel *o);
void HeldItemModels_OnJointCalcPre(NNSG3dRS *rs);

void Model_GetJointWorldMtx(void *slot, Mtx43 *out, u32 a);
void _ZN9AnimModel12drawAnimatedEPv(void *slot, Unk_0205dfb8_Vec *v);
void FishBobber_Draw(void *sub, Mtx43 *o, Unk_0205dfb8_Vec *v);
void WorldCurve_FromCurved(Unk_0205dfb8_Vec *o, Unk_0205dfb8_Vec *v);
void _ZN10FishBobber12setTargetPosEP16Unk_0205f8d4_Vec(void *sub, Unk_0205dfb8_Vec *v);
void _ZN13AnimFrameCtrl4stepEv(void *p);
void _ZN10FishBobber6updateEv(void *p);
void _ZN14BlendAnimModel9stepBlendEv(void *slot);
void _ZN10FishBobber8setStateEi(void *p, u32 k);
void _ZN10FishBobber6detachEv(void *p);
void _ZN9AnimModel15detachJointAnimEv(void *slot);
void _ZN14BlendAnimModel15onJointCalcPostEPS_(void *slot, void *o);
u32 CharaClothTexPool_GetOwnRef(void);
void _ZN16CharaClothTexRef8loadItemEPtiii(u32 a, u16 *code, u32 b, u32 c, u32 d);
u32 CharaClothTexRef_GetBuffer(u32 a);
void HeldItemModel_GetJointMtx(Mtx43 *out, HeldItemModel *o, u32 a);
void G3dRes_CopyTexByName(u32 a, u32 b, char *c, char *d);
void G3dRes_CopyPlttByName(u32 a, u32 b, char *c, char *d);
void _ZN11CachedModel11setFromFileEPv(void *slot, u32 a);
void _ZN9AnimModel11allocAnmObjEPv(void *slot, u32 a);
void _ZN11CachedModel16allocJointRecordEPv(void *slot, u32 a);
#define Heap_getFreeSize _ZN4Heap11getFreeSizeEv
u32 Heap_getFreeSize(u32 a);
void _ZN9ModelAnim11allocMatAnmEjPv(u32 *p, u32 a, u32 b);
void _ZN9ModelAnim4initEiiit(u32 *p, u32 a, u32 b, u32 c, u32 d);
void _ZN9ModelAnim14addToRenderObjEj(u32 *p, u32 a);
void _ZN9AnimModel10attachAnimEv(void *slot);
void _ZN5Model11setCallbackEiiiii(void *slot, void (*fn)(void *), u32 a, u32 b, void *o, u32 c);
void _ZN10FishBobber6attachEjP9Characterj(void *p, u32 id, u32 x, u32 k);

u32 HeldItem_GetPlttVramSize(void);
u32 HeldItem_GetTex4x4VramSize(void);
u32 HeldItem_GetTexVramSize(void);
u32 HeldItem_GetAnimHeapSize(void);
u32 HeldItem_GetModelBufferSize(void);
char *HeldItem_GetTexAnimPath(u32 x);
char *HeldItem_GetAnimPath(u32 x);
char *HeldItem_GetModelPath(u32 x);
s32 HeldItem_GetAnimId(u16 *p);
u16 HeldItem_GetHandPose(u16 *p);
s32 HeldItem_GetModelId(u16 *p);
void *HeldItemModels_GetModelBuffer(HeldItemModelBank *self, u32 idx);
void *HeldItemModels_GetTexAnimBuffer(HeldItemModelBank *self, u32 idx);
void *HeldItemModels_GetAnimBuffer(HeldItemModelBank *self, u32 idx);
void *HeldItemModels_GetAnimHeap(HeldItemModelBank *self, u32 idx);
u32 HeldItemModels_GetTexAnimBufferSize(HeldItemModelBank *self, u32 idx);
u32 HeldItemModels_GetAnimBufferSize(HeldItemModelBank *self, u32 idx);
void HeldItemModels_SetMatAnmHeap(HeldItemModelBank *self, u32 idx, u32 v);
u32 HeldItemModels_GetMatAnmHeap(HeldItemModelBank *self, u32 idx);
void HeldItemModels_SetTexAnimBuffer(HeldItemModelBank *self, u32 idx, void *v, u16 w);
void HeldItemModels_SetAnimBuffer(HeldItemModelBank *self, u32 idx, void *v, u16 w);
u16 *HeldItemModels_GetItem(HeldItemModelBank *self, u32 idx);
ModelAnim *HeldItemModels_GetTexAnim(HeldItemModelBank *self, u32 idx);
void HeldItemModels_SetTexAnim(HeldItemModelBank *self, u32 idx, ModelAnim *v);
BlendAnimModel *HeldItemModels_GetModel(HeldItemModelBank *self, u32 idx);
TexVramTask *HeldItemModels_GetTexTask(HeldItemModelBank *self, u32 idx);
TexVramSlot *HeldItemModels_GetVramSlot(HeldItemModelBank *self, u32 idx);
void HeldItemModels_RelocateTexture(HeldItemModelBank *self, u32 idx);
void HeldItemModels_LoadModel(HeldItemModelBank *self, u32 idx, u32 x);
void HeldItemModels_CancelTexUpload(HeldItemModelBank *self, u32 idx);
s32 HeldItemModels_PollTexUpload(HeldItemModelBank *self, u32 idx);
void HeldItemModels_PlayTexAnim(HeldItemModelBank *self, u32 idx, u32 x, u32 y);
void HeldItemModels_PlayAnim(HeldItemModelBank *self, u32 idx, u32 x, u32 y, u8 z);
s32 HeldItemModels_LoadTexAnim(HeldItemModelBank *self, u32 idx, u32 x);
s32 HeldItemModels_LoadAnim(HeldItemModelBank *self, u32 idx, u32 x);
void HeldItemModels_ReleaseAll(HeldItemModelBank *self);
void HeldItemModels_CreateAnimHeaps(HeldItemModelBank *self);
void HeldItemModels_AllocVram(HeldItemModelBank *self);
}

const u8 sHeldItemModelIds[0x40] = {
    0x10, 0x04, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x08, 0x08, 0x00, 0x0f, 0x03, 0x0d, 0x02, 0x0b,
    0x01, 0x11, 0x05, 0x0e, 0x09, 0x0a, 0x0a, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a,
    0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a,
    0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00};

const u8 sHeldItemAnimIds[0x40] = {
    0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x13, 0x13, 0x00, 0x00, 0x2b,
    0x2b, 0x21, 0x21, 0x29, 0x2b, 0x27, 0x27, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x00};

const u16 sHeldItemHandPoses[0x40] = {
    0x0137, 0x0137, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x013a, 0x013a, 0x013b, 0x013b, 0x013c,
    0x013c, 0x0144, 0x0144, 0x013e, 0x0144, 0x0144, 0x0144, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d,
    0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d,
    0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x0000};

char sHeldItemModelPathBuf[0x18];
char sHeldItemAnimPathBuf[0x18];
char sHeldItemTexAnimPathBuf[0x1c];
HeldItemModelBank sHeldItemModelBank;

extern "C" void HeldItemModels_Init(u32 x) {
    HeldItemModelHeap_Create();
    HeldItemModels_AllocVram(&sHeldItemModelBank);
    if (gHeldItemModelHeap) {
        Heap_adjust(gHeldItemModelHeap);
    }
    HeldItemAnimHeap_Create(x);
    HeldItemModels_CreateAnimHeaps(&sHeldItemModelBank);
    if (gHeldItemAnimHeap) {
        Heap_adjust(gHeldItemAnimHeap);
    }
}

extern "C" void HeldItemModels_Destroy(void) {
    HeldItemModels_ReleaseAll(&sHeldItemModelBank);
    HeldItemAnimHeap_Destroy();
    HeldItemModelHeap_Destroy();
}

extern "C" char *HeldItem_GetModelPath(u32 x) {
    Str_SPrintf(sHeldItemModelPathBuf, "/PItm/Mdl%d/%d.nsbmd", x >> 5, x);
    return sHeldItemModelPathBuf;
}

extern "C" s32 HeldItem_GetModelId(u16 *p) {
    u32 i = ItemInfo_GetHoldableIndex(p);
    if (i < ItemInfo_GetHoldableCount()) {
        return sHeldItemModelIds[i];
    }
    return 0x32;
}

extern "C" u16 HeldItem_GetHandPose(u16 *p) {
    u32 i = ItemInfo_GetHoldableIndex(p);
    if (i < ItemInfo_GetHoldableCount()) {
        return sHeldItemHandPoses[i];
    }
    return 0x144;
}

extern "C" s32 HeldItem_GetAnimId(u16 *p) {
    u32 i = ItemInfo_GetHoldableIndex(p);
    if (i < ItemInfo_GetHoldableCount()) {
        return sHeldItemAnimIds[i];
    }
    return 0x2b;
}

extern "C" u32 HeldItem_GetModelBufferSize(void) { return 0xf24; }
extern "C" u32 HeldItem_GetAnimHeapSize(void) { return 0x89c; }
extern "C" u32 HeldItem_GetTexVramSize(void) { return 0x600; }
extern "C" u32 HeldItem_GetTex4x4VramSize(void) { return 0; }
extern "C" u32 HeldItem_GetPlttVramSize(void) { return 0x50; }

extern "C" char *HeldItem_GetAnimPath(u32 x) {
    Str_SPrintf(sHeldItemAnimPathBuf, "/PItm/Anm%d/%d.nsbca", x >> 5, x);
    return sHeldItemAnimPathBuf;
}

extern "C" char *HeldItem_GetTexAnimPath(u32 x) {
    Str_SPrintf(sHeldItemTexAnimPathBuf, "/PItm/ItaAnm%d/%d.nsbta", x >> 5, x);
    return sHeldItemTexAnimPathBuf;
}

HeldItemModelBank::HeldItemModelBank() {}

HeldItemModelBank::~HeldItemModelBank() {}

extern "C" void HeldItemModels_AllocVram(HeldItemModelBank *self) {
    u32 cfg = gCommManager->memberCount;
    u32 n = Scene_GetMaxPlayers(Scene_GetCurrent());
    u32 m, i, end;
    void *heap;
    if (cfg < n) {
        n = cfg;
    }
    m = n ? n : 1;
    end = Scene_GetMaxCharacters(Scene_GetCurrent()) + NpcSpawn_GetSpNpcSlotCount() - m;
    for (i = 0; i < n; i++) {
        self->vramSlots[i].alloc((void *)HeldItem_GetTexVramSize(), (void *)HeldItem_GetTex4x4VramSize(), (void *)HeldItem_GetPlttVramSize());
    }
    for (i = 4; i < end + 4; i++) {
        self->vramSlots[i].alloc((void *)HeldItem_GetTexVramSize(), (void *)HeldItem_GetTex4x4VramSize(), (void *)HeldItem_GetPlttVramSize());
    }
    heap = gHeldItemModelHeap;
    for (i = 0; i < n; i++) {
        self->modelBuffers[i] = Heap_AllocAligned(heap, HeldItem_GetModelBufferSize(), 4);
    }
    u32 al = 4;
    for (i = 4; i < end + 4; i++) {
        self->modelBuffers[i] = Heap_AllocAligned(heap, HeldItem_GetModelBufferSize(), al);
    }
}

extern "C" void HeldItemModels_CreateAnimHeaps(HeldItemModelBank *self) {
    void *heap = gHeldItemAnimHeap;
    u32 n;
    u32 i = gCommManager->memberCount;
    n = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (i < n) {
        n = i;
    }
    for (i = 0; i < n; i++) {
        self->animHeaps[i] = FrameHeap_Create(HeldItem_GetAnimHeapSize(), heap);
    }
    if (n == 0) {
        n = 1;
    }
    u32 t = Scene_GetMaxCharacters(Scene_GetCurrent());
    n = t + NpcSpawn_GetSpNpcSlotCount() - n;
    n += 4;
    for (i = 4; i < n; i++) {
        self->animHeaps[i] = FrameHeap_Create(HeldItem_GetAnimHeapSize(), heap);
    }
}

extern "C" void HeldItemModels_ReleaseAll(HeldItemModelBank *self) {
    s32 i, j, k;
    for (i = 0; i < 9; i++) {
        self->models[i].release();
        HeldItemModels_CancelTexUpload(self, i);
        self->vramSlots[i].clear();
        self->items[i].id = 0xfff1;
    }
    for (j = 0; j < 9; j++) {
        if (self->animHeaps[j]) {
            Heap_freeAll(self->animHeaps[j]);
            self->animHeaps[j] = 0;
            self->animBuffers[j] = 0;
            self->animBufferSizes[j] = 0;
            self->texAnimBuffers[j] = 0;
            self->texAnimBufferSizes[j] = 0;
            self->texAnims[j] = 0;
        }
    }
    if (gHeldItemAnimHeap) {
        Heap_freeAll(gHeldItemAnimHeap);
    }
    for (k = 0; k < 9; k++) {
        self->modelBuffers[k] = 0;
    }
    if (gHeldItemModelHeap) {
        Heap_freeAll(gHeldItemModelHeap);
    }
}

extern "C" void *HeldItemModels_GetModelBuffer(HeldItemModelBank *self, u32 idx) {
    return self->modelBuffers[idx];
}

extern "C" void *HeldItemModels_GetAnimHeap(HeldItemModelBank *self, u32 idx) {
    return self->animHeaps[idx];
}

extern "C" void *HeldItemModels_GetAnimBuffer(HeldItemModelBank *self, u32 idx) {
    return self->animBuffers[idx];
}

extern "C" void HeldItemModels_SetAnimBuffer(HeldItemModelBank *self, u32 idx, void *v, u16 w) {
    self->animBuffers[idx] = v;
    self->animBufferSizes[idx] = w;
}

extern "C" u32 HeldItemModels_GetAnimBufferSize(HeldItemModelBank *self, u32 idx) {
    return self->animBufferSizes[idx];
}

extern "C" void *HeldItemModels_GetTexAnimBuffer(HeldItemModelBank *self, u32 idx) {
    return self->texAnimBuffers[idx];
}

extern "C" void HeldItemModels_SetTexAnimBuffer(HeldItemModelBank *self, u32 idx, void *v, u16 w) {
    self->texAnimBuffers[idx] = v;
    self->texAnimBufferSizes[idx] = w;
}

extern "C" u32 HeldItemModels_GetTexAnimBufferSize(HeldItemModelBank *self, u32 idx) {
    return self->texAnimBufferSizes[idx];
}

extern "C" u32 HeldItemModels_GetMatAnmHeap(HeldItemModelBank *self, u32 idx) {
    return self->matAnmHeaps[idx];
}

extern "C" void HeldItemModels_SetMatAnmHeap(HeldItemModelBank *self, u32 idx, u32 v) {
    self->matAnmHeaps[idx] = v;
}

extern "C" s32 HeldItemModels_LoadAnim(HeldItemModelBank *self, u32 idx, u32 x) {
    void *dst = HeldItemModels_GetAnimBuffer(&sHeldItemModelBank, idx);
    u32 size = HeldItemModels_GetAnimBufferSize(&sHeldItemModelBank, idx);
    return size - File_LoadToBuffer(HeldItem_GetAnimPath(x), dst, size);
}

extern "C" s32 HeldItemModels_LoadTexAnim(HeldItemModelBank *self, u32 idx, u32 x) {
    void *dst = HeldItemModels_GetTexAnimBuffer(&sHeldItemModelBank, idx);
    u32 size = HeldItemModels_GetTexAnimBufferSize(&sHeldItemModelBank, idx);
    return size - File_LoadToBuffer(HeldItem_GetTexAnimPath(x), dst, size);
}

extern "C" void HeldItemModels_PlayAnim(HeldItemModelBank *self, u32 idx, u32 x, u32 y, u8 z) {
    HeldItemModels_LoadAnim(&sHeldItemModelBank, idx, x);
    HeldItemModels_GetAnimBuffer(&sHeldItemModelBank, idx);
    void *a = func_021065dc();
    void *b = func_021065f8(a, 0);
    HeldItemModels_GetModel(&sHeldItemModelBank, idx)->playBlend((s32)b, (s32)y, z, 0x1000, 0, 0);
}

extern "C" void HeldItemModels_PlayTexAnim(HeldItemModelBank *self, u32 idx, u32 x, u32 y) {
    HeldItemModels_LoadTexAnim(&sHeldItemModelBank, idx, x);
    HeldItemModels_GetTexAnimBuffer(&sHeldItemModelBank, idx);
    void *a = func_02106654();
    void *b = func_02106670(a, 0);
    ModelAnim *e = HeldItemModels_GetTexAnim(self, idx);
    void *m = ((Model *)HeldItemModels_GetModel(self, idx))->getRenderObj();
    e->replace((s32)m, (s32)b, (s32)y, 0x1000, 0);
}

extern "C" TexVramSlot *HeldItemModels_GetVramSlot(HeldItemModelBank *self, u32 idx) {
    return &self->vramSlots[idx];
}

extern "C" TexVramTask *HeldItemModels_GetTexTask(HeldItemModelBank *self, u32 idx) {
    return &self->texTasks[idx];
}

extern "C" BlendAnimModel *HeldItemModels_GetModel(HeldItemModelBank *self, u32 idx) {
    return &self->models[idx];
}

extern "C" void HeldItemModels_SetTexAnim(HeldItemModelBank *self, u32 idx, ModelAnim *v) {
    self->texAnims[idx] = v;
}

extern "C" ModelAnim *HeldItemModels_GetTexAnim(HeldItemModelBank *self, u32 idx) {
    return self->texAnims[idx];
}

extern "C" u16 *HeldItemModels_GetItem(HeldItemModelBank *self, u32 idx) {
    return &self->items[idx].id;
}

extern "C" void HeldItemModels_CancelTexUpload(HeldItemModelBank *self, u32 idx) {
    u32 off = idx * 0x1c;
    if (Unk_0205e6e4_Is(*((u8 *)self + off + 0x19d), 1)) {
        ((TexVramTask *)((u8 *)self + 0x190 + off))->cancel();
    } else {
        ((TexVramTask *)((u8 *)self + 0x190 + off))->clear();
    }
}

extern "C" void HeldItemModels_LoadModel(HeldItemModelBank *self, u32 idx, u32 x) {
    char *path = HeldItem_GetModelPath(x);
    void *dst = HeldItemModels_GetModelBuffer(self, idx);
    File_LoadToBuffer(path, dst, HeldItem_GetModelBufferSize());
}

extern "C" void HeldItemModels_RelocateTexture(HeldItemModelBank *self, u32 idx) {
    void *r = NNS_G3dGetTex(HeldItemModels_GetModelBuffer(self, idx));
    HeldItemModels_GetVramSlot(self, idx)->relocateTexture(r);
}

extern "C" s32 HeldItemModels_PollTexUpload(HeldItemModelBank *self, u32 idx) {
    TexVramTask *e = HeldItemModels_GetTexTask(self, idx);
    u8 s = e->state;
    if (Unk_0205e6e4_Is(s, 2)) {
        return 1;
    }
    if (!Unk_0205e6e4_Is(s, 1)) {
        e->requestTexResource((u32 *)NNS_G3dGetTex(HeldItemModels_GetModelBuffer(self, idx)), 1);
    }
    return 0;
}

HeldItemTexAnim::HeldItemTexAnim() {}

HeldItemTexAnim::~HeldItemTexAnim() {}

HeldItemModel::HeldItemModel() {
    bobber.construct();
    slot = 9;
    scale = 0x1000;
}

HeldItemModel::~HeldItemModel() {
    bobber.destruct();
}

extern "C" void HeldItemModels_OnJointCalcPre(NNSG3dRS *rs) {
    HeldItemModel *q = (HeldItemModel *)rs->pRenderObj->ptrUser;
    if (q) {
        HeldItemModels_GetModel(&sHeldItemModelBank, q->slot)->onJointCalcPre((BlendAnimModel *)rs);
    }
    rs->cbVecFunc[6] = (void *)HeldItemModels_OnJointCalcPost; // NODEDESC
    rs->cbVecTiming[6] = 2;
}

extern "C" void HeldItemModels_OnJointCalcPost(NNSG3dRS *rs) {
    NNSG3dRenderObj *p = rs->pRenderObj;
    if (p->ptrUser != 0) {
        _ZN14BlendAnimModel15onJointCalcPostEPS_(HeldItemModels_GetModel(&sHeldItemModelBank, ((HeldItemModel *)p->ptrUser)->slot), rs);
    }
    rs->cbVecFunc[6] = (void *)HeldItemModels_OnJointCalcPre;
    rs->cbVecTiming[6] = 1;
}

extern "C" void HeldItemModel_Setup(HeldItemModel *o, u32 id, u32 x, u16 *code, u32 a5, s32 flag) {
    u32 idx;
    u32 s, t;
    o->slot = id;
    HeldItemModels_SetTexAnim(&sHeldItemModelBank, id, &o->texAnim);
    if (*code == 0xfff1) {
        *HeldItemModels_GetItem(&sHeldItemModelBank, id) = 0xfff1;
    } else {
        idx = ItemInfo_GetHoldableIndex(code);
        if ((s32)idx < 0)
            goto err;
        if (idx >= ItemInfo_GetHoldableCount())
            goto err;
        *HeldItemModels_GetItem(&sHeldItemModelBank, id) = *code;
        HeldItemModels_LoadModel(&sHeldItemModelBank, id, HeldItem_GetModelId(code));
        s = (u32)HeldItemModels_GetModelBuffer(&sHeldItemModelBank, id);
        if (flag == 0) {
            if (Unk_0205ddc8_In(code, 0x13a0, 0x13a7)) {
                u32 f = CharaClothTexPool_GetOwnRef();
                _ZN16CharaClothTexRef8loadItemEPtiii(f, code, a5, 0, 0);
                u32 h = (u32)NNS_G3dGetTex((void *)CharaClothTexRef_GetBuffer(f));
                u32 h2 = (u32)NNS_G3dGetTex((void *)s);
                G3dRes_CopyTexByName(h, h2, (char *)"cloth", (char *)"myD");
                G3dRes_CopyPlttByName(h, h2, (char *)"cloth", (char *)"myD");
            }
        }
        HeldItemModels_RelocateTexture(&sHeldItemModelBank, id);
        u8 *slot = (u8 *)HeldItemModels_GetModel(&sHeldItemModelBank, id);
        _ZN11CachedModel11setFromFileEPv(slot, s);
        s32 kind = HeldItem_GetAnimId(code);
        if (kind == 0x2b)
            goto done;
        _ZN9AnimModel11allocAnmObjEPv(slot, (u32)HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id));
        _ZN11CachedModel16allocJointRecordEPv(slot, (u32)HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id));
        if (kind == 0x27) {
            void *a1 = HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id);
            HeldItemModels_SetTexAnimBuffer(&sHeldItemModelBank, id, Heap_AllocAligned(a1, 0x210, 4), 0x210);
            HeldItemModels_SetMatAnmHeap(&sHeldItemModelBank, id, (u32)a1);
            Heap_AllocAligned(a1, 0x1c, 4);
            u32 *p = (u32 *)HeldItemModels_GetTexAnim(&sHeldItemModelBank, id);
            Unk_0205e310_P *pp = (Unk_0205e310_P *)p;
            pp->anmObj = 0;
            pp->resMdl = 0;
            HeldItemModels_LoadTexAnim(&sHeldItemModelBank, id, 0);
            HeldItemModels_GetTexAnimBuffer(&sHeldItemModelBank, id);
            u32 q = (u32)func_02106670(func_02106654(), 0);
            u32 w = *(u32 *)(slot + 0x5c);
            _ZN9ModelAnim11allocMatAnmEjPv(p, w, HeldItemModels_GetMatAnmHeap(&sHeldItemModelBank, id));
            _ZN9ModelAnim4initEiiit(p, q, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(p, (u32)((Model *)slot)->getRenderObj());
        }
        void *a2 = HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id);
        u32 n = Heap_getFreeSize((u32)a2);
        ((void (*)(HeldItemModelBank *, u32, void *, u32))HeldItemModels_SetAnimBuffer)(&sHeldItemModelBank, id, Heap_AllocAligned(a2, n, 4), n);
        HeldItemModels_PlayAnim(&sHeldItemModelBank, id, kind, 0, 0);
        _ZN9AnimModel10attachAnimEv(slot);
        if (flag == 0)
            _ZN5Model11setCallbackEiiiii(slot, (void (*)(void *))HeldItemModels_OnJointCalcPre, 6, 1, o, 0);
        goto done;
    err:
        *HeldItemModels_GetItem(&sHeldItemModelBank, id) = 0xfff1;
    }
done:
    if (Unk_0205ddc8_In(code, 0x1375, 0x1375)) {
        _ZN10FishBobber6attachEjP9Characterj(&o->bobber, id, x, 1);
    } else if (*code >= 0x1374 && *code <= 0x1374) {
        _ZN10FishBobber6attachEjP9Characterj(&o->bobber, id, x, 0);
    } else if ((*code >= 0x137a && *code <= 0x137a) || (*code >= 0x137b && *code <= 0x137b)) {
        _ZN10FishBobber6attachEjP9Characterj(&o->bobber, id, x, 2);
    } else {
        _ZN10FishBobber6attachEjP9Characterj(&o->bobber, id, x, 3);
    }
    if (Unk_0205ddc8_In(code, 0x1374, 0x1374) || (*code >= 0x1375 && *code <= 0x1375))
        _ZN10FishBobber8setStateEi(&o->bobber, 1);
}

extern "C" void HeldItemModel_Release(HeldItemModel *o) {
    _ZN10FishBobber6detachEv(&o->bobber);
    u32 id = o->slot;
    if (HeldItem_GetAnimId(HeldItemModels_GetItem(&sHeldItemModelBank, id)) != 0x2b) {
        _ZN9AnimModel15detachJointAnimEv(HeldItemModels_GetModel(&sHeldItemModelBank, id));
        o->texAnim.anmObj = 0;
        o->texAnim.resMdl = 0;
    }
    HeldItemModels_SetTexAnim(&sHeldItemModelBank, id, 0);
    HeldItemModels_GetModel(&sHeldItemModelBank, id)->release();
    HeldItemModels_CancelTexUpload(&sHeldItemModelBank, id);
    Heap_freeAll(HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id));
    HeldItemModels_SetAnimBuffer(&sHeldItemModelBank, id, 0, 0);
    HeldItemModels_SetTexAnimBuffer(&sHeldItemModelBank, id, 0, 0);
    HeldItemModels_SetMatAnmHeap(&sHeldItemModelBank, id, 0);
    *HeldItemModels_GetItem(&sHeldItemModelBank, id) = 0xfff1;
    o->slot = 9;
}

extern "C" void HeldItemModel_SetItem(HeldItemModel *o, u16 *code, u32 c) {
    u32 id = o->slot;
    HeldItemModel_Release(o);
    HeldItemModel_Setup(o, id, 0, code, c, 0);
}

extern "C" void HeldItemModel_PlayAnim(HeldItemModel *o, s32 a, u32 b, u32 c) {
    ((void (*)(HeldItemModelBank *, u32, u32, u32, u32))HeldItemModels_PlayAnim)(&sHeldItemModelBank, o->slot, a, b, c);
    switch (a) {
    case 0x13:
        _ZN10FishBobber8setStateEi(&o->bobber, 1);
        break;
    case 0x15:
        _ZN10FishBobber8setStateEi(&o->bobber, 3);
        break;
    case 0x16:
        _ZN10FishBobber8setStateEi(&o->bobber, 2);
        break;
    case 0x18:
        _ZN10FishBobber8setStateEi(&o->bobber, 6);
        break;
    case 0x19:
    case 0x1b:
        _ZN10FishBobber8setStateEi(&o->bobber, 7);
        break;
    case 0x1a:
        _ZN10FishBobber8setStateEi(&o->bobber, 8);
        break;
    case 0x28:
        HeldItemModels_PlayTexAnim(&sHeldItemModelBank, o->slot, 1, c);
        break;
    }
}

extern "C" void HeldItemModel_SetAnimSpeed(HeldItemModel *o, u32 v) {
    AnimFrameCtrl &r = *HeldItemModels_GetModel(&sHeldItemModelBank, o->slot);
    r.frameStep = v;
}

extern "C" void HeldItemModel_Update(HeldItemModel *o) {
    u32 id = o->slot;
    if (*HeldItemModels_GetItem(&sHeldItemModelBank, id) != 0xfff1) {
        HeldItemModels_PollTexUpload(&sHeldItemModelBank, id);
        s32 t = HeldItem_GetAnimId(HeldItemModels_GetItem(&sHeldItemModelBank, id));
        if (t != 0x2b) {
            _ZN14BlendAnimModel9stepBlendEv(HeldItemModels_GetModel(&sHeldItemModelBank, id));
            if (t == 0x27) {
                _ZN13AnimFrameCtrl4stepEv(&o->texAnim);
                *(u32 *)o->texAnim.anmObj = o->texAnim.curFrame;
            }
        }
    }
    _ZN10FishBobber6updateEv(&o->bobber);
}

extern "C" void HeldItemModel_Draw(HeldItemModel *o, Mtx43 *src) {
    Unk_0205dfb8_Vec A;
    Mtx43 B;
    Unk_0205dfb8_Vec C;
    Mtx43 D;
    Mtx43 E;
    Unk_0205dfb8_Vec F;
    Unk_0205dfb8_Vec G;
    u32 id = o->slot;
    if (*HeldItemModels_GetItem(&sHeldItemModelBank, id) != 0xfff1) {
        u8 *slot = (u8 *)HeldItemModels_GetModel(&sHeldItemModelBank, id);
        *(Mtx43 *)(slot + 0x64) = *src;
        u32 t0 = o->scale;
        A.x = t0;
        A.y = t0;
        A.z = t0;
        _ZN9AnimModel12drawAnimatedEPv(slot, &A);
        if (Unk_0205ddc8_In(HeldItemModels_GetItem(&sHeldItemModelBank, id), 0x1374, 0x1374) ||
            Unk_0205ddc8_In(HeldItemModels_GetItem(&sHeldItemModelBank, id), 0x1375, 0x1375)) {
            HeldItemModel_GetJointMtx(&D, o, 2);
            B = D;
        } else {
            HeldItemModel_GetJointMtx(&E, o, 0);
            B = E;
        }
        FishBobber_Draw(&o->bobber, &B, &A);
        F.x = B.m[9];
        F.y = B.m[10];
        F.z = B.m[11];
        WorldCurve_FromCurved(&C, &F);
        switch (o->bobber.curState) {
        case 7:
        case 8:
            G.x = C.x;
            G.y = C.y;
            G.z = C.z;
            _ZN10FishBobber12setTargetPosEP16Unk_0205f8d4_Vec(&o->bobber, &G);
            break;
        }
    }
}

extern "C" void HeldItemModel_GetJointMtx(Mtx43 *out, HeldItemModel *o, u32 a) {
    Mtx43 t;
    u32 id = o->slot;
    if (*HeldItemModels_GetItem(&sHeldItemModelBank, id) != 0xfff1) {
        Model_GetJointWorldMtx(HeldItemModels_GetModel(&sHeldItemModelBank, id), &t, a);
    } else {
        for (s32 i = 0; i < 12; i++)
            t.m[i] = 0;
    }
    *out = t;
}

extern "C" void *HeldItemModel_GetModel(u8 *p) {
    return HeldItemModels_GetModel(&sHeldItemModelBank, *p);
}

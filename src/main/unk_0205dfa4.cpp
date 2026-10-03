// mwcc-flags: -str reuse
#include "types.h"

// ---- helper classes (declared elsewhere) ----
class ItemId {
public:
    u16 unk_00;
    ItemId();
    ~ItemId();
};

class TexVramSlot {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    TexVramSlot();
    virtual ~TexVramSlot();
    void clear(void);
    void relocateTexture(void *p);
    void alloc(void *a, void *b, void *c);
};

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    VramTask();
    virtual BOOL execute() = 0;
};

struct TexTransfer {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class TexVramTask : public VramTask {
public:
    TexTransfer unk_10;
    TexVramTask();
    virtual BOOL execute();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
    void clear(void);
};

class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    u8 pad_04[0x94];
    u32 unk_98;
    BOOL release(void);
};

class BlendAnimModel : public CachedModel {
public:
    BlendAnimModel();
    virtual ~BlendAnimModel();
    u8 pad_9c[0x58];
    void playBlend(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
    void onJointCalcPre(BlendAnimModel *x);
};

class Model {
public:
    void *getRenderObj();
};

class AnimFrameCtrl {
public:
    inline AnimFrameCtrl() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~AnimFrameCtrl();
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void replace(s32 a, s32 b, s32 c, s32 e, u16 f);
    u32 unk_18;
    u32 unk_1c;
};

class HeldItemTexAnim : public ModelAnim {
public:
    HeldItemTexAnim();
    virtual ~HeldItemTexAnim();
};

class FishBobber {
public:
    u8 pad[0x40];
    void destruct();
    void construct();
};

// ---- manager singleton (sHeldItemModelBank) ----
class HeldItemModelBank {
public:
    HeldItemModelBank();
    ~HeldItemModelBank();
    void *unk_00[9];
    void *unk_24[9];
    void *unk_48[9];
    u16 unk_6c[9];
    u16 pad_7e;
    void *unk_80[9];
    u16 unk_a4[9];
    u16 pad_b6;
    u32 unk_b8[9];
    TexVramSlot unk_dc[9];
    TexVramTask unk_190[9];
    BlendAnimModel unk_28c[9];
    ModelAnim *unk_b20[9];
    ItemId unk_b44[9];
};

struct Unk_0205e61c_Q { u8 unk_00; };
struct Unk_0205e61c_P { u8 pad[0x2c]; Unk_0205e61c_Q *unk_2c; };
struct Unk_0205e61c_Obj {
    u32 unk_00;
    Unk_0205e61c_P *unk_04;
    u8 pad_08[0x1c];
    void *unk_24;
    u8 pad_28[0x6a];
    u8 unk_92;
};

struct Unk_0205f6f8_Cfg { u8 pad[0x6c]; u8 unk_6c; };

struct Unk_0205e310_P {
    u32 pad[6];
    u32 unk_18;
    u32 unk_1c;
};

struct Unk_0205dfb8_Out {
    s32 v[12];
};

struct Unk_0205dfb8_Vec {
    s32 x, y, z;
};

struct Unk_0205dfb8_P {
    u8 pad_00[0x2c];
    u8 *unk_2c;
};

struct Unk_0205dfb8_Obj {
    u8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    u8 pad_08[8];
    u32 unk_10;
    u8 pad_14[0xc];
    u32 *unk_20;
    u32 unk_24;
    u8 unk_28[4];
    u32 unk_2c;
    u8 pad_30[0x92 - 0x30];
    u8 unk_92;
};

struct Unk_0205e184_Pre {
    u8 pad[0x9c];
};
struct Unk_0205e184_Sub {
    u32 pad[4];
    u32 unk_10;
    void set(u32 v) { unk_10 = v; }
};
struct Unk_0205e184_Big : Unk_0205e184_Pre, Unk_0205e184_Sub {};

class HeldItemModel {
public:
    u8 unk_00;
    u32 unk_04;
    HeldItemTexAnim unk_08;
    FishBobber unk_28;
    HeldItemModel();
    ~HeldItemModel();
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
extern Unk_0205f6f8_Cfg *gCommManager;

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 File_LoadToBuffer(void *path, void *dst, u32 size);
void *NNS_G3dGetTex(void *p);
void *func_02106654(void);
void *func_02106670(void *p, s32 a);
void *func_021065dc(void);
void *func_021065f8(void *p, s32 a);
void func_020e885c(void *p);
void func_020e877c(void *p);
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

void HeldItemModels_OnJointCalcPost(Unk_0205dfb8_Obj *o);
void HeldItemModel_Update(Unk_0205dfb8_Obj *o);
void HeldItemModels_OnJointCalcPre(Unk_0205e61c_Obj *self);

void Model_GetJointWorldMtx(void *slot, Unk_0205dfb8_Out *out, u32 a);
void _ZN9AnimModel12drawAnimatedEPv(void *slot, Unk_0205dfb8_Vec *v);
void FishBobber_Draw(void *sub, Unk_0205dfb8_Out *o, Unk_0205dfb8_Vec *v);
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
void HeldItemModel_GetJointMtx(Unk_0205dfb8_Out *out, Unk_0205dfb8_Obj *o, u32 a);
void func_02063a5c(u32 a, u32 b, char *c, char *d);
void func_02063a1c(u32 a, u32 b, char *c, char *d);
void _ZN11CachedModel11setFromFileEPv(void *slot, u32 a);
void _ZN9AnimModel11allocAnmObjEPv(void *slot, u32 a);
void _ZN11CachedModel16allocJointRecordEPv(void *slot, u32 a);
u32 func_020e8af4(u32 a);
void _ZN9ModelAnim11allocMatAnmEjPv(u32 *p, u32 a, u32 b);
void _ZN9ModelAnim4initEiiit(u32 *p, u32 a, u32 b, u32 c, u32 d);
void _ZN9ModelAnim14addToRenderObjEj(u32 *p, u32 a);
void _ZN9AnimModel10attachAnimEv(void *slot);
void _ZN5Model11setCallbackEiiiii(void *slot, void (*fn)(void *), u32 a, u32 b, void *o, u32 c);
void _ZN10FishBobber6attachEjP9Characterj(void *p, u32 id, u32 x, u32 k);
void func_0205fba8(void *p);

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
        func_020e877c(gHeldItemModelHeap);
    }
    HeldItemAnimHeap_Create(x);
    HeldItemModels_CreateAnimHeaps(&sHeldItemModelBank);
    if (gHeldItemAnimHeap) {
        func_020e877c(gHeldItemAnimHeap);
    }
}

extern "C" void HeldItemModels_Destroy(void) {
    HeldItemModels_ReleaseAll(&sHeldItemModelBank);
    HeldItemAnimHeap_Destroy();
    HeldItemModelHeap_Destroy();
}

extern "C" char *HeldItem_GetModelPath(u32 x) {
    func_020639e8(sHeldItemModelPathBuf, "/PItm/Mdl%d/%d.nsbmd", x >> 5, x);
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
    func_020639e8(sHeldItemAnimPathBuf, "/PItm/Anm%d/%d.nsbca", x >> 5, x);
    return sHeldItemAnimPathBuf;
}

extern "C" char *HeldItem_GetTexAnimPath(u32 x) {
    func_020639e8(sHeldItemTexAnimPathBuf, "/PItm/ItaAnm%d/%d.nsbta", x >> 5, x);
    return sHeldItemTexAnimPathBuf;
}

HeldItemModelBank::HeldItemModelBank() {}

HeldItemModelBank::~HeldItemModelBank() {}

extern "C" void HeldItemModels_AllocVram(HeldItemModelBank *self) {
    u32 cfg = gCommManager->unk_6c;
    u32 n = Scene_GetMaxPlayers(Scene_GetCurrent());
    u32 m, i, end;
    void *heap;
    if (cfg < n) {
        n = cfg;
    }
    m = n ? n : 1;
    end = Scene_GetMaxCharacters(Scene_GetCurrent()) + NpcSpawn_GetSpNpcSlotCount() - m;
    for (i = 0; i < n; i++) {
        self->unk_dc[i].alloc((void *)HeldItem_GetTexVramSize(), (void *)HeldItem_GetTex4x4VramSize(), (void *)HeldItem_GetPlttVramSize());
    }
    for (i = 4; i < end + 4; i++) {
        self->unk_dc[i].alloc((void *)HeldItem_GetTexVramSize(), (void *)HeldItem_GetTex4x4VramSize(), (void *)HeldItem_GetPlttVramSize());
    }
    heap = gHeldItemModelHeap;
    for (i = 0; i < n; i++) {
        self->unk_00[i] = Heap_AllocAligned(heap, HeldItem_GetModelBufferSize(), 4);
    }
    u32 al = 4;
    for (i = 4; i < end + 4; i++) {
        self->unk_00[i] = Heap_AllocAligned(heap, HeldItem_GetModelBufferSize(), al);
    }
}

extern "C" void HeldItemModels_CreateAnimHeaps(HeldItemModelBank *self) {
    void *heap = gHeldItemAnimHeap;
    u32 n;
    u32 i = gCommManager->unk_6c;
    n = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (i < n) {
        n = i;
    }
    for (i = 0; i < n; i++) {
        self->unk_24[i] = FrameHeap_Create(HeldItem_GetAnimHeapSize(), heap);
    }
    if (n == 0) {
        n = 1;
    }
    u32 t = Scene_GetMaxCharacters(Scene_GetCurrent());
    n = t + NpcSpawn_GetSpNpcSlotCount() - n;
    n += 4;
    for (i = 4; i < n; i++) {
        self->unk_24[i] = FrameHeap_Create(HeldItem_GetAnimHeapSize(), heap);
    }
}

extern "C" void HeldItemModels_ReleaseAll(HeldItemModelBank *self) {
    s32 i, j, k;
    for (i = 0; i < 9; i++) {
        self->unk_28c[i].release();
        HeldItemModels_CancelTexUpload(self, i);
        self->unk_dc[i].clear();
        self->unk_b44[i].unk_00 = 0xfff1;
    }
    for (j = 0; j < 9; j++) {
        if (self->unk_24[j]) {
            func_020e885c(self->unk_24[j]);
            self->unk_24[j] = 0;
            self->unk_48[j] = 0;
            self->unk_6c[j] = 0;
            self->unk_80[j] = 0;
            self->unk_a4[j] = 0;
            self->unk_b20[j] = 0;
        }
    }
    if (gHeldItemAnimHeap) {
        func_020e885c(gHeldItemAnimHeap);
    }
    for (k = 0; k < 9; k++) {
        self->unk_00[k] = 0;
    }
    if (gHeldItemModelHeap) {
        func_020e885c(gHeldItemModelHeap);
    }
}

extern "C" void *HeldItemModels_GetModelBuffer(HeldItemModelBank *self, u32 idx) {
    return self->unk_00[idx];
}

extern "C" void *HeldItemModels_GetAnimHeap(HeldItemModelBank *self, u32 idx) {
    return self->unk_24[idx];
}

extern "C" void *HeldItemModels_GetAnimBuffer(HeldItemModelBank *self, u32 idx) {
    return self->unk_48[idx];
}

extern "C" void HeldItemModels_SetAnimBuffer(HeldItemModelBank *self, u32 idx, void *v, u16 w) {
    self->unk_48[idx] = v;
    self->unk_6c[idx] = w;
}

extern "C" u32 HeldItemModels_GetAnimBufferSize(HeldItemModelBank *self, u32 idx) {
    return self->unk_6c[idx];
}

extern "C" void *HeldItemModels_GetTexAnimBuffer(HeldItemModelBank *self, u32 idx) {
    return self->unk_80[idx];
}

extern "C" void HeldItemModels_SetTexAnimBuffer(HeldItemModelBank *self, u32 idx, void *v, u16 w) {
    self->unk_80[idx] = v;
    self->unk_a4[idx] = w;
}

extern "C" u32 HeldItemModels_GetTexAnimBufferSize(HeldItemModelBank *self, u32 idx) {
    return self->unk_a4[idx];
}

extern "C" u32 HeldItemModels_GetMatAnmHeap(HeldItemModelBank *self, u32 idx) {
    return self->unk_b8[idx];
}

extern "C" void HeldItemModels_SetMatAnmHeap(HeldItemModelBank *self, u32 idx, u32 v) {
    self->unk_b8[idx] = v;
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
    return &self->unk_dc[idx];
}

extern "C" TexVramTask *HeldItemModels_GetTexTask(HeldItemModelBank *self, u32 idx) {
    return &self->unk_190[idx];
}

extern "C" BlendAnimModel *HeldItemModels_GetModel(HeldItemModelBank *self, u32 idx) {
    return &self->unk_28c[idx];
}

extern "C" void HeldItemModels_SetTexAnim(HeldItemModelBank *self, u32 idx, ModelAnim *v) {
    self->unk_b20[idx] = v;
}

extern "C" ModelAnim *HeldItemModels_GetTexAnim(HeldItemModelBank *self, u32 idx) {
    return self->unk_b20[idx];
}

extern "C" u16 *HeldItemModels_GetItem(HeldItemModelBank *self, u32 idx) {
    return &self->unk_b44[idx].unk_00;
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
    u8 s = e->unk_0d;
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
    unk_28.construct();
    unk_00 = 9;
    unk_04 = 0x1000;
}

HeldItemModel::~HeldItemModel() {
    unk_28.destruct();
}

extern "C" void HeldItemModels_OnJointCalcPre(Unk_0205e61c_Obj *self) {
    Unk_0205e61c_Q *q = self->unk_04->unk_2c;
    if (q) {
        HeldItemModels_GetModel(&sHeldItemModelBank, q->unk_00)->onJointCalcPre((BlendAnimModel *)self);
    }
    self->unk_24 = (void *)HeldItemModels_OnJointCalcPost;
    self->unk_92 = 2;
}

extern "C" void HeldItemModels_OnJointCalcPost(Unk_0205dfb8_Obj *o) {
    Unk_0205dfb8_P *p = (Unk_0205dfb8_P *)o->unk_04;
    if (p->unk_2c != 0) {
        _ZN14BlendAnimModel15onJointCalcPostEPS_(HeldItemModels_GetModel(&sHeldItemModelBank, *p->unk_2c), o);
    }
    o->unk_24 = (u32)HeldItemModels_OnJointCalcPre;
    o->unk_92 = 1;
}

extern "C" void HeldItemModel_Setup(Unk_0205dfb8_Obj *o, u32 id, u32 x, u16 *code, u32 a5, s32 flag) {
    u32 idx;
    u32 s, t;
    o->unk_00 = id;
    HeldItemModels_SetTexAnim(&sHeldItemModelBank, id, (ModelAnim *)&o->pad_08);
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
                func_02063a5c(h, h2, (char *)"cloth", (char *)"myD");
                func_02063a1c(h, h2, (char *)"cloth", (char *)"myD");
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
            pp->unk_18 = 0;
            pp->unk_1c = 0;
            HeldItemModels_LoadTexAnim(&sHeldItemModelBank, id, 0);
            HeldItemModels_GetTexAnimBuffer(&sHeldItemModelBank, id);
            u32 q = (u32)func_02106670(func_02106654(), 0);
            u32 w = *(u32 *)(slot + 0x5c);
            _ZN9ModelAnim11allocMatAnmEjPv(p, w, HeldItemModels_GetMatAnmHeap(&sHeldItemModelBank, id));
            _ZN9ModelAnim4initEiiit(p, q, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(p, (u32)((Model *)slot)->getRenderObj());
        }
        void *a2 = HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id);
        u32 n = func_020e8af4((u32)a2);
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
        _ZN10FishBobber6attachEjP9Characterj(o->unk_28, id, x, 1);
    } else if (*code >= 0x1374 && *code <= 0x1374) {
        _ZN10FishBobber6attachEjP9Characterj(o->unk_28, id, x, 0);
    } else if ((*code >= 0x137a && *code <= 0x137a) || (*code >= 0x137b && *code <= 0x137b)) {
        _ZN10FishBobber6attachEjP9Characterj(o->unk_28, id, x, 2);
    } else {
        _ZN10FishBobber6attachEjP9Characterj(o->unk_28, id, x, 3);
    }
    if (Unk_0205ddc8_In(code, 0x1374, 0x1374) || (*code >= 0x1375 && *code <= 0x1375))
        _ZN10FishBobber8setStateEi(o->unk_28, 1);
}

extern "C" void HeldItemModel_Release(Unk_0205dfb8_Obj *o) {
    _ZN10FishBobber6detachEv(o->unk_28);
    u32 id = o->unk_00;
    if (HeldItem_GetAnimId(HeldItemModels_GetItem(&sHeldItemModelBank, id)) != 0x2b) {
        _ZN9AnimModel15detachJointAnimEv(HeldItemModels_GetModel(&sHeldItemModelBank, id));
        o->unk_20 = 0;
        o->unk_24 = 0;
    }
    HeldItemModels_SetTexAnim(&sHeldItemModelBank, id, 0);
    HeldItemModels_GetModel(&sHeldItemModelBank, id)->release();
    HeldItemModels_CancelTexUpload(&sHeldItemModelBank, id);
    func_020e885c(HeldItemModels_GetAnimHeap(&sHeldItemModelBank, id));
    HeldItemModels_SetAnimBuffer(&sHeldItemModelBank, id, 0, 0);
    HeldItemModels_SetTexAnimBuffer(&sHeldItemModelBank, id, 0, 0);
    HeldItemModels_SetMatAnmHeap(&sHeldItemModelBank, id, 0);
    *HeldItemModels_GetItem(&sHeldItemModelBank, id) = 0xfff1;
    o->unk_00 = 9;
}

extern "C" void HeldItemModel_SetItem(Unk_0205dfb8_Obj *o, u16 *code, u32 c) {
    u32 id = o->unk_00;
    HeldItemModel_Release(o);
    HeldItemModel_Setup(o, id, 0, code, c, 0);
}

extern "C" void HeldItemModel_PlayAnim(Unk_0205dfb8_Obj *o, s32 a, u32 b, u32 c) {
    ((void (*)(HeldItemModelBank *, u32, u32, u32, u32))HeldItemModels_PlayAnim)(&sHeldItemModelBank, o->unk_00, a, b, c);
    switch (a) {
    case 0x13:
        _ZN10FishBobber8setStateEi(o->unk_28, 1);
        break;
    case 0x15:
        _ZN10FishBobber8setStateEi(o->unk_28, 3);
        break;
    case 0x16:
        _ZN10FishBobber8setStateEi(o->unk_28, 2);
        break;
    case 0x18:
        _ZN10FishBobber8setStateEi(o->unk_28, 6);
        break;
    case 0x19:
    case 0x1b:
        _ZN10FishBobber8setStateEi(o->unk_28, 7);
        break;
    case 0x1a:
        _ZN10FishBobber8setStateEi(o->unk_28, 8);
        break;
    case 0x28:
        HeldItemModels_PlayTexAnim(&sHeldItemModelBank, o->unk_00, 1, c);
        break;
    }
}

extern "C" void HeldItemModel_SetAnimSpeed(Unk_0205dfb8_Obj *o, u32 v) {
    Unk_0205e184_Sub &r = *(Unk_0205e184_Big *)HeldItemModels_GetModel(&sHeldItemModelBank, o->unk_00);
    r.set(v);
}

extern "C" void HeldItemModel_Update(Unk_0205dfb8_Obj *o) {
    u32 id = o->unk_00;
    if (*HeldItemModels_GetItem(&sHeldItemModelBank, id) != 0xfff1) {
        HeldItemModels_PollTexUpload(&sHeldItemModelBank, id);
        s32 t = HeldItem_GetAnimId(HeldItemModels_GetItem(&sHeldItemModelBank, id));
        if (t != 0x2b) {
            _ZN14BlendAnimModel9stepBlendEv(HeldItemModels_GetModel(&sHeldItemModelBank, id));
            if (t == 0x27) {
                _ZN13AnimFrameCtrl4stepEv(&o->pad_08);
                *o->unk_20 = o->unk_10;
            }
        }
    }
    _ZN10FishBobber6updateEv(o->unk_28);
}

extern "C" void HeldItemModel_Draw(Unk_0205dfb8_Obj *o, Unk_0205dfb8_Out *src) {
    Unk_0205dfb8_Vec LampLights;
    Unk_0205dfb8_Out LightLevel;
    Unk_0205dfb8_Vec C;
    Unk_0205dfb8_Out WindowLight;
    Unk_0205dfb8_Out E;
    Unk_0205dfb8_Vec F;
    Unk_0205dfb8_Vec G;
    u32 id = o->unk_00;
    if (*HeldItemModels_GetItem(&sHeldItemModelBank, id) != 0xfff1) {
        u8 *slot = (u8 *)HeldItemModels_GetModel(&sHeldItemModelBank, id);
        *(Unk_0205dfb8_Out *)(slot + 0x64) = *src;
        u32 t0 = o->unk_04;
        LampLights.x = t0;
        LampLights.y = t0;
        LampLights.z = t0;
        _ZN9AnimModel12drawAnimatedEPv(slot, &LampLights);
        if (Unk_0205ddc8_In(HeldItemModels_GetItem(&sHeldItemModelBank, id), 0x1374, 0x1374) ||
            Unk_0205ddc8_In(HeldItemModels_GetItem(&sHeldItemModelBank, id), 0x1375, 0x1375)) {
            HeldItemModel_GetJointMtx(&WindowLight, o, 2);
            LightLevel = WindowLight;
        } else {
            HeldItemModel_GetJointMtx(&E, o, 0);
            LightLevel = E;
        }
        FishBobber_Draw(o->unk_28, &LightLevel, &LampLights);
        F.x = LightLevel.v[9];
        F.y = LightLevel.v[10];
        F.z = LightLevel.v[11];
        WorldCurve_FromCurved(&C, &F);
        switch (o->unk_2c) {
        case 7:
        case 8:
            G.x = C.x;
            G.y = C.y;
            G.z = C.z;
            _ZN10FishBobber12setTargetPosEP16Unk_0205f8d4_Vec(o->unk_28, &G);
            break;
        }
    }
}

extern "C" void HeldItemModel_GetJointMtx(Unk_0205dfb8_Out *out, Unk_0205dfb8_Obj *o, u32 a) {
    Unk_0205dfb8_Out t;
    u32 id = o->unk_00;
    if (*HeldItemModels_GetItem(&sHeldItemModelBank, id) != 0xfff1) {
        Model_GetJointWorldMtx(HeldItemModels_GetModel(&sHeldItemModelBank, id), &t, a);
    } else {
        for (s32 i = 0; i < 12; i++)
            t.v[i] = 0;
    }
    *out = t;
}

extern "C" void *HeldItemModel_GetModel(u8 *p) {
    return HeldItemModels_GetModel(&sHeldItemModelBank, *p);
}

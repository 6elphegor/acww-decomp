#include "types.h"

extern "C" {
void *Heap_AllocAligned(void *heap, s32 size, s32 align);
void func_020e877c(void *p);
void func_020e885c(void *p);
void *NNS_G3dGetTex(void *h);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 File_LoadToBuffer(const char *path, void *buf, s32 size);
s32 PlayerGlassesModelHeap_Destroy();
s32 PlayerGlassesModelHeap_Create();
extern void *gPlayerGlassesModelHeap;
extern u8 *gCommManager;
}

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

class TexVramSlot {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;

    TexVramSlot();
    virtual ~TexVramSlot();
    void setKeys(u32 a, u32 b, u32 c);
    void clear(void);
    void relocateTexture(void *p);
    u32 makePlttKeyAt(u32 a, u32 b);
    u32 makeKeyAtOffset(u32 a, u32 b, u32 c);
    u32 makeTex4x4KeyAt(u32 a, u32 b);
    u32 makeTexKeyAt(u32 a, u32 b);
    u32 makePlttKey(u32 a);
    u32 makeKeyWithBase(u32 a, u32 b);
    u32 makeTex4x4Key(u32 a);
    u32 makeTexKey(u32 a);
    void alloc(void *a, void *b, void *c);
};

static inline BOOL Unk_0205d4e4_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

static inline BOOL Unk_0205d4e4_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

class PlayerGlassesModelPool {
public:
    void *unk_00[4];
    TexVramSlot unk_10[4];
    TexVramTask unk_60[4];
    u8 unk_d0[4];

    PlayerGlassesModelPool();
    ~PlayerGlassesModelPool();
    void setModelId(u32 i, u32 v);
    u8 getModelId(u32 i);
    TexVramTask *getTexTask(u32 i);
    TexVramSlot *getVramSlot(u32 i);
    void *getBuffer(u32 i);
    void freeBuffers(void);
    void allocBuffers(void);
};

extern "C" {
extern const u8 sPlayerGlassesFlowerModelIds[0xc];
extern const u8 sPlayerGlassesAccessoryModelIds[0x40];
extern char sPlayerGlassesModelPathBuf[0x14];

void PlayerGlassesModelPool_Create();
void PlayerGlassesModelPool_Destroy();
char *PlayerGlassesModel_GetPath(s32 x);
s32 PlayerGlassesModel_GetBufferSize();
u8 PlayerGlassesModel_GetAccessoryModelId(u32 i);
u8 PlayerGlassesModel_GetFlowerModelId(u32 i);
s32 PlayerGlassesModel_GetTexVramSize();
s32 PlayerGlassesModel_GetTex4x4VramSize();
s32 PlayerGlassesModel_GetPlttVramSize();
void PlayerGlassesModelRef_Init(u8 *p);
void PlayerGlassesModelRef_Destruct();
void PlayerGlassesModelRef_SetSlot(u8 *p, u8 v);
void PlayerGlassesModelRef_Release(u8 *p);
void PlayerGlassesModelRef_CancelTexUpload(u8 *p);
void PlayerGlassesModelRef_Load(u8 *p, s32 idx);
void PlayerGlassesModelRef_RelocateTexture(u8 *p);
BOOL PlayerGlassesModelRef_PollTexUpload(u8 *p);
void *PlayerGlassesModelRef_GetBuffer(u8 *p);
TexVramSlot *PlayerGlassesModelRef_GetVramSlot(u8 *p);
TexVramTask *PlayerGlassesModelRef_GetTexTask(u8 *p);
u8 PlayerGlassesModelRef_GetModelId(u8 *p);
void PlayerGlassesModelRef_SetModelId(u8 *p, s32 v);
}

const u8 sPlayerGlassesFlowerModelIds[0xc] = {0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x00};
const u8 sPlayerGlassesAccessoryModelIds[0x40] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f};

char sPlayerGlassesModelPathBuf[0x14];
PlayerGlassesModelPool sPlayerGlassesModelPool;

extern "C" void PlayerGlassesModelPool_Create() {
    PlayerGlassesModelHeap_Create();
    sPlayerGlassesModelPool.allocBuffers();
    if (gPlayerGlassesModelHeap) {
        func_020e877c(gPlayerGlassesModelHeap);
    }
}

extern "C" void PlayerGlassesModelPool_Destroy() {
    sPlayerGlassesModelPool.freeBuffers();
    PlayerGlassesModelHeap_Destroy();
}

extern "C" char *PlayerGlassesModel_GetPath(s32 x) {
    func_020639e8(sPlayerGlassesModelPathBuf, "/PGls/%d/%d.nsbmd", (u32)x >> 5, x);
    return sPlayerGlassesModelPathBuf;
}

extern "C" s32 PlayerGlassesModel_GetBufferSize() { return 0xc74; }

extern "C" u8 PlayerGlassesModel_GetAccessoryModelId(u32 i) {
    return sPlayerGlassesAccessoryModelIds[i];
}

extern "C" u8 PlayerGlassesModel_GetFlowerModelId(u32 i) {
    return sPlayerGlassesFlowerModelIds[i];
}

extern "C" s32 PlayerGlassesModel_GetTexVramSize() { return 0x600; }
extern "C" s32 PlayerGlassesModel_GetTex4x4VramSize() { return 0; }
extern "C" s32 PlayerGlassesModel_GetPlttVramSize() { return 0x60; }

PlayerGlassesModelPool::PlayerGlassesModelPool() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
        unk_d0[i] = 0x4b;
    }
}

PlayerGlassesModelPool::~PlayerGlassesModelPool() {}

void PlayerGlassesModelPool::allocBuffers(void) {
    u32 n = *(u8 *)(gCommManager + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        unk_10[i].alloc((void *)PlayerGlassesModel_GetTexVramSize(), (void *)PlayerGlassesModel_GetTex4x4VramSize(), (void *)PlayerGlassesModel_GetPlttVramSize());
    }
    void *heap = gPlayerGlassesModelHeap;
    for (i = 0; i < n; i++) {
        unk_00[i] = Heap_AllocAligned(heap, PlayerGlassesModel_GetBufferSize(), 4);
    }
}

void PlayerGlassesModelPool::freeBuffers(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_10[i].clear();
    }
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
    }
    if (gPlayerGlassesModelHeap) {
        func_020e885c(gPlayerGlassesModelHeap);
    }
    for (i = 0; i < 4; i++) {
        unk_d0[i] = 0x4b;
    }
}

void *PlayerGlassesModelPool::getBuffer(u32 i) { return unk_00[i]; }
TexVramSlot *PlayerGlassesModelPool::getVramSlot(u32 i) { return &unk_10[i]; }
TexVramTask *PlayerGlassesModelPool::getTexTask(u32 i) { return &unk_60[i]; }
u8 PlayerGlassesModelPool::getModelId(u32 i) { return unk_d0[i]; }
void PlayerGlassesModelPool::setModelId(u32 i, u32 v) { unk_d0[i] = v; }

extern "C" void PlayerGlassesModelRef_Init(u8 *p) {
    *p = 4;
}
extern "C" void PlayerGlassesModelRef_Destruct() {}
extern "C" void PlayerGlassesModelRef_SetSlot(u8 *p, u8 v) {
    *p = v;
}

extern "C" void PlayerGlassesModelRef_Release(u8 *p) {
    PlayerGlassesModelRef_CancelTexUpload(p);
    PlayerGlassesModelRef_SetModelId(p, 0x4b);
}

extern "C" void PlayerGlassesModelRef_CancelTexUpload(u8 *p) {
    if (Unk_0205d4e4_IsOne(PlayerGlassesModelRef_GetTexTask(p)->unk_0d)) {
        PlayerGlassesModelRef_GetTexTask(p)->cancel();
    } else {
        PlayerGlassesModelRef_GetTexTask(p)->clear();
    }
}

extern "C" void PlayerGlassesModelRef_Load(u8 *p, s32 idx) {
    void *r6 = PlayerGlassesModelRef_GetBuffer(p);
    PlayerGlassesModelRef_SetModelId(p, idx);
    if (idx < 0x4b) {
        char *path = PlayerGlassesModel_GetPath(idx);
        File_LoadToBuffer(path, r6, PlayerGlassesModel_GetBufferSize());
    }
}

extern "C" void PlayerGlassesModelRef_RelocateTexture(u8 *p) {
    void *q = NNS_G3dGetTex(PlayerGlassesModelRef_GetBuffer(p));
    PlayerGlassesModelRef_GetVramSlot(p)->relocateTexture(q);
}

extern "C" BOOL PlayerGlassesModelRef_PollTexUpload(u8 *p) {
    TexVramTask *o = PlayerGlassesModelRef_GetTexTask(p);
    u8 st = o->unk_0d;
    if (Unk_0205d4e4_IsTwo(st)) {
        return TRUE;
    }
    if (!Unk_0205d4e4_IsOne(st)) {
        o->requestTexResource((u32 *)NNS_G3dGetTex(PlayerGlassesModelRef_GetBuffer(p)), 1);
    }
    return FALSE;
}

extern "C" void *PlayerGlassesModelRef_GetBuffer(u8 *p) {
    return sPlayerGlassesModelPool.getBuffer(*p);
}
extern "C" TexVramSlot *PlayerGlassesModelRef_GetVramSlot(u8 *p) {
    return sPlayerGlassesModelPool.getVramSlot(*p);
}
extern "C" TexVramTask *PlayerGlassesModelRef_GetTexTask(u8 *p) {
    return sPlayerGlassesModelPool.getTexTask(*p);
}
extern "C" u8 PlayerGlassesModelRef_GetModelId(u8 *p) {
    return sPlayerGlassesModelPool.getModelId(*p);
}
extern "C" void PlayerGlassesModelRef_SetModelId(u8 *p, s32 v) {
    sPlayerGlassesModelPool.setModelId(*p, v);
}

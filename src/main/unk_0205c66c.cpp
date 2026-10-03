#include "types.h"

class TexVramSlot {
public:
    TexVramSlot();
    virtual ~TexVramSlot();
    void clear(void);
    void alloc(void *a, void *b, void *c);
    void relocateTexture(void *p);
    u8 pad_04[0x10];
};

class TexVramTask {
public:
    TexVramTask();
    virtual BOOL vfunc_00();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
    void clear(void);
    u8 pad[9];
    u8 unk_0d;
    u8 pad2[0xe];
};

struct PlayerBodyModelPool {
    u32 unk_00[4];
    TexVramSlot unk_10[4];
    TexVramTask unk_60[4];

    PlayerBodyModelPool();
    ~PlayerBodyModelPool();
    TexVramTask *getTexTask(s32 i);
    void *getVramSlot(s32 i);
    u32 getBuffer(s32 i);
    void freeBuffers();
    void allocBuffers();
};

extern "C" {
extern PlayerBodyModelPool sPlayerBodyModelPool;
extern void *gPlayerBodyModelHeap;
extern u8 *gCommManager;

void *Heap_AllocAligned(void *, u32, s32);
void func_020e885c(void *);
void func_020e877c(void *);
s32 File_LoadToBuffer(char *, void *, u32);
s32 PlayerBodyModelHeap_Destroy();
s32 PlayerBodyModelHeap_Create();
s32 NNS_G3dGetTex(void *);
u32 PlayerBodyModel_GetTexVramSize();
u32 PlayerBodyModel_GetTex4x4VramSize();
u32 PlayerBodyModel_GetPlttVramSize();
u32 PlayerBodyModel_GetBufferSize();
char *PlayerBodyModel_GetPath(u32 i);
TexVramTask *PlayerBodyModelRef_GetTexTask(u8 *p);
void *PlayerBodyModelRef_GetVramSlot(u8 *p);
void *PlayerBodyModelRef_GetBuffer(u8 *p);
}

extern "C" void PlayerBodyModelPool_Create() {
    PlayerBodyModelHeap_Create();
    sPlayerBodyModelPool.allocBuffers();
    if (gPlayerBodyModelHeap) func_020e877c(gPlayerBodyModelHeap);
}

extern "C" void PlayerBodyModelPool_Destroy() {
    sPlayerBodyModelPool.freeBuffers();
    PlayerBodyModelHeap_Destroy();
}

extern char *sPlayerBodyModelPaths[];

extern "C" char *PlayerBodyModel_GetPath(u32 i) { return sPlayerBodyModelPaths[i]; }
extern "C" u32 PlayerBodyModel_GetBufferSize() { return 0x2380; }
extern "C" u32 PlayerBodyModel_GetTexVramSize() { return 0x440; }
extern "C" u32 PlayerBodyModel_GetTex4x4VramSize() { return 0; }
extern "C" u32 PlayerBodyModel_GetPlttVramSize() { return 0x60; }

PlayerBodyModelPool::PlayerBodyModelPool() {
}

PlayerBodyModelPool::~PlayerBodyModelPool() {
}

void PlayerBodyModelPool::allocBuffers() {
    u32 cnt = gCommManager[0x6c];
    u32 i;
    for (i = 0; i < cnt; i++) {
        u32 a = PlayerBodyModel_GetTexVramSize();
        u32 b = PlayerBodyModel_GetTex4x4VramSize();
        u32 c = PlayerBodyModel_GetPlttVramSize();
        unk_10[i].alloc((void *)a, (void *)b, (void *)c);
    }
    void *heap = gPlayerBodyModelHeap;
    for (i = 0; i < cnt; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, PlayerBodyModel_GetBufferSize(), 4);
}

void PlayerBodyModelPool::freeBuffers() {
    for (s32 i = 0; i < 4; i++) unk_10[i].clear();
    s32 j;
    for (j = 0; j < 4; j++) unk_00[j] = 0;
    if (gPlayerBodyModelHeap) func_020e885c(gPlayerBodyModelHeap);
}

u32 PlayerBodyModelPool::getBuffer(s32 i) { return unk_00[i]; }
void *PlayerBodyModelPool::getVramSlot(s32 i) { return &unk_10[i]; }
TexVramTask *PlayerBodyModelPool::getTexTask(s32 i) { return &unk_60[i]; }

extern "C" void PlayerBodyModelRef_Init(u8 *p) { *p = 4; }
extern "C" void PlayerBodyModelRef_Destruct() {}
extern "C" void PlayerBodyModelRef_SetSlot(u8 *p, u32 v) { *p = v; }

extern "C" void PlayerBodyModelRef_CancelTexUpload(u8 *p) {
    u32 s = PlayerBodyModelRef_GetTexTask(p)->unk_0d;
    BOOL a = s == 1 ? TRUE : FALSE;
    if (a) PlayerBodyModelRef_GetTexTask(p)->cancel();
    else PlayerBodyModelRef_GetTexTask(p)->clear();
}

extern "C" s32 PlayerBodyModelRef_Load(u8 *p, u32 idx) {
    void *buf = PlayerBodyModelRef_GetBuffer(p);
    char *name = PlayerBodyModel_GetPath(idx);
    return File_LoadToBuffer(name, buf, PlayerBodyModel_GetBufferSize());
}

extern "C" void PlayerBodyModelRef_RelocateTexture(u8 *p) {
    s32 x = NNS_G3dGetTex(PlayerBodyModelRef_GetBuffer(p));
    ((TexVramSlot *)PlayerBodyModelRef_GetVramSlot(p))->relocateTexture((void *)x);
}

extern "C" s32 PlayerBodyModelRef_PollTexUpload(u8 *p) {
    TexVramTask *e = PlayerBodyModelRef_GetTexTask(p);
    u32 s = e->unk_0d;
    BOOL a = s == 2 ? TRUE : FALSE;
    if (a) return TRUE;
    BOOL b = s == 1 ? TRUE : FALSE;
    if (!b) {
        e->requestTexResource((u32 *)NNS_G3dGetTex(PlayerBodyModelRef_GetBuffer(p)), 1);
    }
    return FALSE;
}

extern "C" void *PlayerBodyModelRef_GetBuffer(u8 *p) { return (void *)sPlayerBodyModelPool.getBuffer(*p); }
extern "C" void *PlayerBodyModelRef_GetVramSlot(u8 *p) { return sPlayerBodyModelPool.getVramSlot(*p); }
extern "C" TexVramTask *PlayerBodyModelRef_GetTexTask(u8 *p) { return sPlayerBodyModelPool.getTexTask(*p); }
// Declarations for data defined further down (definition order sets the data layout)
extern PlayerBodyModelPool sPlayerBodyModelPool;
extern char *sPlayerBodyModelPaths[];

PlayerBodyModelPool sPlayerBodyModelPool;

char *sPlayerBodyModelPaths[] = {"/PBody/boy.nsbmd", "/PBody/grl.nsbmd"};


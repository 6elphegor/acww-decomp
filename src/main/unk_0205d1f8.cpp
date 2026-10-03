#include "types.h"

struct Unk_0205d238 {
    void *ptr[9];
    Unk_0205d238();
    ~Unk_0205d238();
    void *func_0205d238(u32 idx);
    void func_0205d240();
    void func_0205d278();
};

extern "C" {
extern void *gCharaFaceAnimWorkHeap;
extern u8 *gCommManager;
extern Unk_0205d238 data_021c64dc;

void CharaFaceAnimWorkHeap_Destroy();
void CharaFaceAnimWorkHeap_Create();
void *FrameHeap_Create(u32 size, void *heap);
void func_020e885c(void *p);
void func_020e877c(void *p);
u32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(u32 a);
u32 Scene_GetMaxCharacters(u32 a);
u32 NpcSpawn_GetSpNpcSlotCount();
u32 func_0205d2fc();
}

struct Unk_0205d1f8 {
    u8 v;
    Unk_0205d1f8();
    ~Unk_0205d1f8();
    void *func_0205d1f8();
    void func_0205d20c(u32 x);
};

extern "C" void func_0205d318() {
    CharaFaceAnimWorkHeap_Create();
    data_021c64dc.func_0205d278();
    if (gCharaFaceAnimWorkHeap) func_020e877c(gCharaFaceAnimWorkHeap);
}

extern "C" void func_0205d300() {
    data_021c64dc.func_0205d240();
    CharaFaceAnimWorkHeap_Destroy();
}

extern "C" u32 func_0205d2fc() { return 0x50; }

Unk_0205d238::Unk_0205d238() {}

Unk_0205d238::~Unk_0205d238() {}

void Unk_0205d238::func_0205d278() {
    void *heap = gCharaFaceAnimWorkHeap;
    u32 n, i, m;
    n = gCommManager[0x6c];
    m = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = FrameHeap_Create(func_0205d2fc(), heap);
    }
    if (m == 0) m = 1;
    u32 q = Scene_GetMaxCharacters(Scene_GetCurrent());
    m = (q + NpcSpawn_GetSpNpcSlotCount()) - m;
    for (i = 4; i < m + 4; i++) {
        ptr[i] = FrameHeap_Create(func_0205d2fc(), heap);
    }
}

void Unk_0205d238::func_0205d240() {
    for (s32 i = 0; i < 9; i++) {
        void **p = &ptr[i];
        if (ptr[i]) {
            func_020e885c(ptr[i]);
            *p = NULL;
        }
    }
    if (gCharaFaceAnimWorkHeap) func_020e885c(gCharaFaceAnimWorkHeap);
}

void *Unk_0205d238::func_0205d238(u32 idx) { return ptr[idx]; }

Unk_0205d1f8::Unk_0205d1f8() { v = 9; }

Unk_0205d1f8::~Unk_0205d1f8() {}

void Unk_0205d1f8::func_0205d20c(u32 x) {
    func_020e885c(data_021c64dc.func_0205d238(x));
    v = x;
}

void *Unk_0205d1f8::func_0205d1f8() { return data_021c64dc.func_0205d238(v); }

Unk_0205d238 data_021c64dc;

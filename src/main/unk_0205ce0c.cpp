#include "types.h"

struct CharaFaceAnimRef {
    u8 v;
    CharaFaceAnimRef();
    ~CharaFaceAnimRef();
    void load(s32 a, s32 b, s32 c, s32 d);
    s32 loadAnim(s32 a, s32 b, s32 c);
    void getMouthAnimBuffer();
    void getEyeAnimBuffer();
    void getAnimBuffer(u32 j);
    void setSlot(u32 x);
    void assign(u32 x);
};

struct CharaFaceAnimPool {
    u32 ptr[9];
    u16 a[2][9];
    u16 b[2][9];
    CharaFaceAnimPool();
    ~CharaFaceAnimPool();
    void setLoadedSize(u32 i, u32 j, u32 val);
    u32 getLoadedSize(u32 i, u32 j);
    u32 findAnim(u32 x);
    void setAnimId(u32 i, u32 j, u32 val);
    u32 getAnimId(u32 i, u32 j);
    u32 getAnimBuffer(u32 i, u32 j);
    void freeBuffers();
    void allocBuffers();
};

extern "C" {
extern CharaFaceAnimPool sCharaFaceAnimPool;
extern void *gCharaFaceAnimHeap;
extern u8 *gCommManager;
extern const u8 sCharaFaceAnimKinds[];
extern u8 sCharaFaceAnimPathBuf[];

void CharaFaceAnimHeap_Destroy();
void CharaFaceAnimHeap_Create();
void *Heap_AllocAligned(void *heap, u32 size, u32 align);
void func_020e885c(void *p);
void func_020e877c(void *p);
u32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(u32 a);
u32 Scene_GetMaxCharacters(u32 a);
u32 NpcSpawn_GetSpNpcSlotCount();
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 File_LoadToBuffer(void *name, void *buf, s32 size);
void func_020639e8(void *buf, const char *fmt, u32 a, u32 b);

u32 CharaFaceAnim_GetKind(u32 x);
u32 CharaFaceAnim_GetSlotSize();
u32 CharaFaceAnim_GetAnimSize();
u8 *CharaFaceAnim_GetPath(u32 x);
}

extern "C" void CharaFaceAnimPool_Create() {
    CharaFaceAnimHeap_Create();
    sCharaFaceAnimPool.allocBuffers();
    if (gCharaFaceAnimHeap) func_020e877c(gCharaFaceAnimHeap);
}

extern "C" void CharaFaceAnimPool_Destroy() {
    sCharaFaceAnimPool.freeBuffers();
    CharaFaceAnimHeap_Destroy();
}

extern "C" u8 *CharaFaceAnim_GetPath(u32 x) {
    func_020639e8(sCharaFaceAnimPathBuf, "/FcAnm/%d/%d.nsbtp", x >> 5, x);
    return sCharaFaceAnimPathBuf;
}

extern "C" u32 CharaFaceAnim_GetAnimSize() { return 0x118; }
extern "C" u32 CharaFaceAnim_GetSlotSize() { return CharaFaceAnim_GetAnimSize() + 0x118; }
extern "C" u32 CharaFaceAnim_GetKind(u32 x) { return sCharaFaceAnimKinds[x]; }

CharaFaceAnimPool::CharaFaceAnimPool() {
    for (s32 i = 0; i < 9; i++) {
        for (s32 j = 0; j < 2; j++) b[j][i] = 0x16f;
    }
}

CharaFaceAnimPool::~CharaFaceAnimPool() {}

void CharaFaceAnimPool::allocBuffers() {
    void *heap = gCharaFaceAnimHeap;
    u32 n, i, m;
    n = gCommManager[0x6c];
    m = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = (u32)Heap_AllocAligned(heap, CharaFaceAnim_GetSlotSize(), 4);
    }
    if (m == 0) m = 1;
    u32 q = Scene_GetMaxCharacters(Scene_GetCurrent());
    m = (q + NpcSpawn_GetSpNpcSlotCount()) - m;
    u32 al = 4;
    for (i = al; i < m + 4; i++) {
        ptr[i] = (u32)Heap_AllocAligned(heap, CharaFaceAnim_GetSlotSize(), al);
    }
}

void CharaFaceAnimPool::freeBuffers() {
    for (s32 i = 0; i < 9; i++) {
        ptr[i] = 0;
        for (s32 j = 0; j < 2; j++) {
            b[j][i] = 0x16f;
            a[j][i] = 0;
        }
    }
    if (gCharaFaceAnimHeap) func_020e885c(gCharaFaceAnimHeap);
}

u32 CharaFaceAnimPool::getAnimBuffer(u32 i, u32 j) {
    if (j == 1) {
        u32 t = ptr[i];
        return t + CharaFaceAnim_GetAnimSize();
    }
    return ptr[i];
}

u32 CharaFaceAnimPool::getAnimId(u32 i, u32 j) { return b[j][i]; }
void CharaFaceAnimPool::setAnimId(u32 i, u32 j, u32 val) { b[j][i] = val; }

u32 CharaFaceAnimPool::findAnim(u32 x) {
    u32 j = CharaFaceAnim_GetKind(x);
    s32 i;
    for (i = 0; i < 9; i++) {
        s32 c = getAnimId(i, j);
        if (c == x) return i;
    }
    return 9;
}

u32 CharaFaceAnimPool::getLoadedSize(u32 i, u32 j) { return a[j][i]; }
void CharaFaceAnimPool::setLoadedSize(u32 i, u32 j, u32 val) { a[j][i] = val; }

CharaFaceAnimRef::CharaFaceAnimRef() { v = 9; }
CharaFaceAnimRef::~CharaFaceAnimRef() {}

void CharaFaceAnimRef::assign(u32 x) {
    setSlot(x);
    load(0x16f, 0x16f, 0, 0);
}

void CharaFaceAnimRef::setSlot(u32 x) { v = x; }
void CharaFaceAnimRef::getAnimBuffer(u32 j) { sCharaFaceAnimPool.getAnimBuffer(v, j); }
void CharaFaceAnimRef::getEyeAnimBuffer() { getAnimBuffer(0); }
void CharaFaceAnimRef::getMouthAnimBuffer() { getAnimBuffer(1); }

s32 CharaFaceAnimRef::loadAnim(s32 a, s32 b, s32 c) {
    u32 st = v;
    u32 j = CharaFaceAnim_GetKind(a);
    if (c == 0) {
        if (a == sCharaFaceAnimPool.getAnimId(st, j)) return;
    }
    u32 buf = sCharaFaceAnimPool.getAnimBuffer(st, j);
    s32 size;
    if (j == 0) {
        size = CharaFaceAnim_GetAnimSize();
    } else {
        size = CharaFaceAnim_GetSlotSize() - CharaFaceAnim_GetAnimSize();
    }
    if (b != 0) {
        u32 k = sCharaFaceAnimPool.findAnim(a);
        if (k != 9) {
            u32 src = sCharaFaceAnimPool.getAnimBuffer(k, j);
            u32 n = sCharaFaceAnimPool.getLoadedSize(k, j);
            if (src != 0 && n != 0) {
                MI_CpuCopy8((void *)src, (void *)buf, n);
                sCharaFaceAnimPool.setAnimId(st, j, a);
                sCharaFaceAnimPool.setLoadedSize(st, j, n);
            }
        }
    }
    s32 got = File_LoadToBuffer(CharaFaceAnim_GetPath(a), (void *)buf, size);
    if (got != 0) {
        sCharaFaceAnimPool.setAnimId(st, j, a);
        sCharaFaceAnimPool.setLoadedSize(st, j, got);
    }
}

void CharaFaceAnimRef::load(s32 a, s32 b, s32 c, s32 d) {
    u32 st = v;
    if (a >= 0x16f) {
        sCharaFaceAnimPool.setAnimId(st, 0, 0x16f);
        sCharaFaceAnimPool.setLoadedSize(st, 0, 0);
    } else {
        loadAnim(a, c, d);
    }
    if (b >= 0x16f) {
        sCharaFaceAnimPool.setAnimId(st, 1, 0x16f);
        sCharaFaceAnimPool.setLoadedSize(st, 1, 0);
    } else {
        loadAnim(b, c, d);
    }
}

extern const u8 sCharaFaceAnimKinds[0x170];
const u8 sCharaFaceAnimKinds[0x170] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
};

u8 sCharaFaceAnimPathBuf[0x14];
CharaFaceAnimPool sCharaFaceAnimPool;

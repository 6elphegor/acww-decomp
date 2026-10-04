// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_ov004_Vec3.h"

// Static tile entries built by __sinit (ctor = main SceneWarp_Init, dtor = main func_020b4fc0).

extern "C" void SceneWarp_Init(void *e, u8 id, Unk_ov004_Vec3 *v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);

struct Unk_020b4fc0 {
    u8 type;
    u8 flag;
    s16 angle;
    Unk_ov004_Vec3 pos;
    u32 spawnParam;
    u8 fadeOut;
    u8 fadeIn;
    s16 unk_16;
    u8 unk_18;
    Unk_020b4fc0(u8 id, const Unk_ov004_Vec3 &v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t) {
        SceneWarp_Init(this, id, (Unk_ov004_Vec3 *)&v, w, s, p, q, r, t);
    }
    ~Unk_020b4fc0();
};

struct Unk_ov004_Vec3C : Unk_ov004_Vec3 {
    Unk_ov004_Vec3C(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

extern "C" {
extern void *gMenuHeap;
// linker-provided absolute symbol (overlay id 93), no relocation in the original
extern u32 OVERLAY_93_ID[];

// ov093 methods of StaffRoll, called through their real symbols (object passed first)
s32 _ZN9StaffRoll10isFinishedEv(void *self);
void _ZN9StaffRoll9startLogoEv(void *self);
void _ZN9StaffRoll5startEi(void *self, s32 a);
void _ZN9StaffRoll4stopEv(void *self);
void _ZN9StaffRoll13uploadScreensEv(void *self);
void _ZN9StaffRoll6updateEv(void *self);
void _ZN9StaffRoll4initEv(void *self);
void _ZN9StaffRollD1Ev(void *self);
void _ZN9StaffRollC1Ev(void *self);
#define func_ov093_02291dd8 _ZN9StaffRoll10isFinishedEv
#define func_ov093_02291de4 _ZN9StaffRoll9startLogoEv
#define func_ov093_02291e6c _ZN9StaffRoll5startEi
#define func_ov093_02291f5c _ZN9StaffRoll4stopEv
#define func_ov093_02291f70 _ZN9StaffRoll13uploadScreensEv
#define func_ov093_02291ff0 _ZN9StaffRoll6updateEv
#define func_ov093_0229212c _ZN9StaffRoll4initEv
#define func_ov093_02292174 _ZN9StaffRollD1Ev
#define func_ov093_022921b8 _ZN9StaffRollC1Ev
void Heap_Free(void *heap, void *p);
void *Heap_Alloc(void *heap, u32 size);
void OverlayMgr_Release(u32 id);
void OverlayMgr_Acquire(u32 id);
}

extern "C" {

extern u8 sKkShowFxActive;
extern void *sKkShowFx;

void KkShowFx_Start(void) {
    OverlayMgr_Acquire((u32)OVERLAY_93_ID);
    sKkShowFx = Heap_Alloc(gMenuHeap, 0x1fc4);
    if (sKkShowFx) {
        func_ov093_022921b8(sKkShowFx);
    }
    func_ov093_0229212c(sKkShowFx);
    sKkShowFxActive = 1;
}

void KkShowFx_Update(void) {
    if (sKkShowFxActive & 1) {
        func_ov093_02291ff0(sKkShowFx);
    }
}

void KkShowFx_CallUnk1f70(void) {
    if (sKkShowFxActive & 1) {
        func_ov093_02291f70(sKkShowFx);
    }
}

void KkShowFx_Stop() {
    if (sKkShowFxActive & 1) {
        func_ov093_02291f5c(sKkShowFx);
        void *heap = gMenuHeap;
        func_ov093_02292174(sKkShowFx);
        Heap_Free(heap, sKkShowFx);
        sKkShowFx = 0;
        OverlayMgr_Release((u32)OVERLAY_93_ID);
    }
    sKkShowFxActive = 0;
}

void KkShowFx_SetParam(s32 a) {
    if (sKkShowFxActive & 1) {
        if (a <= 0) a = 0x1400;
        func_ov093_02291e6c(sKkShowFx, a);
    }
}

void KkShowFx_CallUnk1de4() {
    if (sKkShowFxActive & 1) func_ov093_02291de4(sKkShowFx);
}

s32 KkShowFx_GetState() {
    if (sKkShowFxActive & 1) return func_ov093_02291dd8(sKkShowFx);
    return 0;
}

}

// file-scope objects (the static initialiser); the definition order sets the data/bss order
extern Unk_020b4fc0 data_ov004_0225893c;

u8 sKkShowFxActive;
void *sKkShowFx;
// {pointer to the first static entry, count}
Unk_020b4fc0 *sRoomSceneEntryList = &data_ov004_0225893c;
extern "C" u32 data_ov004_0224f2d0 = 3;  // unreferenced: kept by its symbols.txt name
Unk_020b4fc0 data_ov004_0225893c(1, Unk_ov004_Vec3C(0xf000, 0x200, 0x1d000), 0x11000000, 0x4000, 2, 2, -0x4000, 2);
u32 sRoomCommonProfileCount = 0x11;
Unk_020b4fc0 data_ov004_02258958(5, Unk_ov004_Vec3C(0x11000, 0x200, 0x1d000), 0x11000000, -0x4000, 2, 2, 0x4000, 2);
Unk_020b4fc0 data_ov004_02258974(0x3e, Unk_ov004_Vec3C(0, 0, 0), 0x800000, 0, 2, 2, 0, 0);
// list of 17 ids
u32 sRoomCommonProfiles[17] = {0xc9, 0xca, 0xe, 0x7, 0x8c, 0x8e, 0xc6, 0x8b, 0xd6, 0xc5, 0x89, 0xd5, 0xbf, 0xd1, 0xd2, 0x8d, 0x2a};

// mwcc-flags: -nothumb -O4,p
// G004c: autoload_2 0x020ed8cc-0x020edd58 (18 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined,
// every function is extern "C" under its symbols.txt name. End of the command sequence object (CmdSeq), then the
// sound-system wrappers around gSndHeap (sound archive/system object: thin assert-and-forward helpers, system
// start-up at 0x020edbbc) and the sound player object (Player) helpers. Fatal stop = Fatal_Trap (assert failure).
#include "types.h"
#include "sys/CmdSeq.h"
#include "snd/SndSeBytes4.h"
#include "snd/SndSeGroup.h"
#include "sys/FndList.h"
#include "snd/Player.h"



struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);


extern "C" {
void Fatal_Trap(void);
extern void *gSndHeap;
extern void *gSndCaptureBuffer;
extern u8 gSndDefaultHandle[];
extern u8 data_021f5aac[];
extern u8 data_021f5a1c[];
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void NNS_SndArcPlayerStartSeqArc(void *a, u32 b, void *c);
void NNS_SndHeapLoadState(void *a, u32 b);
void *func_0210bd4c(void *a);
s32 NNS_SndArcLoadGroup(u32 a, void *b);
s32 NNS_SndHeapSaveState(void *a);
void *NNS_SndHeapAlloc(void *a, u32 b, void (*c)(void), u32 d, u32 e);
void *NNS_SndHeapCreate(u32 a, u32 b);
void NNS_SndArcInit(void *a, u32 b, void *c, u32 d);
void NNS_SndArcInitOnMemory(void *a, u32 b);
s32 NNS_SndArcPlayerSetup(void *a);
void NNS_SndInit(void);
void func_0210ef44(u32 a, u32 b, u32 c);
s32 NNS_SndMain(void);

}
extern "C" {
void SndSeGroup_Shutdown(Group *g);
void *SndList_GetFirst(void **p);
void *SndList_GetNext(void *list, void *obj);
}

// PROTOS-BEGIN
extern "C" {
void *Snd_GetHeapLevel(void);
void *Snd_RestoreHeapLevel(u32 a);
void Snd_StartSeqArc(s32 a, void *b, void *c);
void Snd_AllocCaptureBuffer(void);
void Snd_CaptureBufferDisposeCallback(void);
void *Snd_GetHeap(void);
void SndSeGroupList_StopAll(FndList *o);
void SndSeSystem_UnloadGroup(Player *o);
}

extern "C" void SndSeSystem_Shutdown(Player *o, s32 flag) {
    SndSeGroupList_StopAll(&o->list);
    if (flag != 0) SndSeSystem_UnloadGroup(o);
    o->active = 0;
}

extern "C" void SndSeSystem_UnloadGroup(Player *o) {
    if (o->groupParams.b0 == 255) Fatal_Trap();
    if (o->heapLevel == 255) return;
    Snd_RestoreHeapLevel(o->heapLevel);
}

extern "C" void SndSeGroupList_StopAll(FndList *o) {
    Group *p;
    if (o == NULL) Fatal_Trap();
    p = (Group *)SndList_GetFirst((void **)o);
    if (p == NULL) return;
    do {
        SndSeGroup_Shutdown(p);
        p = (Group *)SndList_GetNext(o, p);
    } while (p != NULL);
}

extern "C" void *Snd_GetHeap(void) {
    return gSndHeap;
}

extern "C" void Snd_InitSystem(u32 a, u32 b, u32 c, u32 d) {
    NNS_SndInit();
    if (gSndHeap != NULL) Fatal_Trap();
    gSndHeap = NNS_SndHeapCreate(a, b);
    if (gSndHeap == NULL) Fatal_Trap();
    Snd_AllocCaptureBuffer();
    if (c != 0) {
        NNS_SndArcInit(data_021f5aac, c, gSndHeap, 0);
    } else {
        if (d == 0) Fatal_Trap();
        NNS_SndArcInitOnMemory(data_021f5a1c, d);
    }
    if (NNS_SndArcPlayerSetup(gSndHeap) == 0) Fatal_Trap();
    NNS_SndHandleInit(gSndDefaultHandle);
}

extern "C" void Snd_CaptureBufferDisposeCallback(void) {
}

extern "C" void Snd_StartOutputEffect(u32 a) {
    if (gSndCaptureBuffer == NULL) Fatal_Trap();
    func_0210ef44(((u32)gSndCaptureBuffer + 31) & ~31, 0x1000, a);
}

extern "C" void Snd_AllocCaptureBuffer(void) {
    gSndCaptureBuffer = NNS_SndHeapAlloc(Snd_GetHeap(), 0x1020, Snd_CaptureBufferDisposeCallback, 0, 0);
    if (gSndCaptureBuffer == NULL) Fatal_Trap();
}

extern "C" void Snd_Main(void) {
    NNS_SndMain();
}

extern "C" void Snd_StartSeqArcDefault(s32 a, void *b) {
    Snd_StartSeqArc(a, b, &gSndDefaultHandle);
}

extern "C" void Snd_StartSeqArc(s32 a, void *b, void *c) {
    if (c == NULL) Fatal_Trap();
    NNS_SndArcPlayerStartSeqArc(c, (u32)b, (void *)a);
}

extern "C" void Snd_StartSeqArcEx(void *a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    if (a == NULL) Fatal_Trap();
    func_0210cebc(a, b, c, d, e, f);
}

extern "C" void Snd_InitHandle(void *a) {
    if (a == NULL) Fatal_Trap();
    NNS_SndHandleInit(a);
}

extern "C" void Snd_StopHandle(void *a, u32 b) {
    if (a == NULL) Fatal_Trap();
    NNS_SndPlayerStopSeq(a, b);
}

extern "C" s32 Snd_LoadGroup(u32 a) {
    s32 r = (s32)Snd_GetHeapLevel();
    if (NNS_SndArcLoadGroup(a, gSndHeap) == 0) return -1;
    if (NNS_SndHeapSaveState(gSndHeap) == -1) Fatal_Trap();
    return r;
}

extern "C" void *Snd_RestoreHeapLevel(u32 a) {
    if (a == 255) Fatal_Trap();
    if (a == 0) Fatal_Trap();
    NNS_SndHeapLoadState(gSndHeap, a);
    if (a != (u32)Snd_GetHeapLevel()) Fatal_Trap();
    return Snd_GetHeapLevel();
}

extern "C" void *Snd_GetHeapLevel(void) {
    return func_0210bd4c(gSndHeap);
}

// PROTOS-END

extern "C" void CmdSeq_Undo(CmdSeq *o) {
    s16 *pi;
    if (o->cmds == NULL) return;
    if (o->state == 0) return;
    pi = &o->cmdIndex;
    o->cmdIndex -= 1;
    while (o->cmdIndex >= 0) {
        o->vfunc_0c(o->cmds[o->cmdIndex]);
        *pi -= 1;
    }
}

// ---- file-scope objects (autoload_3 .bss 0x021f59e8-0x021f5b3c). mwcc sorts a file's bss by size; the 0x28-byte
// gSndSeSystem sits between this file's 4-byte and 0x90-byte objects, so it is this file's object although only other
// units use it.
void *gSndHeap;
u8 gSndDefaultHandle[4]; // NNSSndHandle
void *gSndCaptureBuffer;
Player gSndSeSystem;
u8 data_021f5a1c[0x90];
u8 data_021f5aac[0x90];

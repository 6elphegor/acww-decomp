#include "uptr.h"
#include "types.h"
#include "sys/StackPad.h"
#include "nitro/fs.h"
#include "talk/MsgStringAttr.h"
#include "sys/RecordFile.h"
#include "talk/EncodedStringBase.h"
#include "talk/EncodedString.h"
#include "game/InfoTableSet.h"
#include "talk/EncodedString40.h"
#include "ui/LetterRenderer.h"
#include "nitro/io_access.h"
#include "net/CommManager.h"
#define PROTO_LOCAL_FS_InitFile  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_File_ReadRange  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Main_InitDwc  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Main_LateUpdate  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Main_WaitFrame  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Main_WaitVBlank  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_OverlayHandle_Load  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Snd_Update  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gCurrentHeap  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gMelodyPlayer  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gOverlayHandle  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sCrashContext  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020e8208.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/autoload_2/unk_020e9a08.h"
#include "proto/autoload_2/unk_0210f154.h"
#include "proto/autoload_2/unk_02113088.h"
#include "proto/autoload_2/unk_02114cd8.h"
#include "proto/main/unk_02000c2c.h"
#include "proto/main/unk_0200137c.h"
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_020116e0.h"
#include "proto/main/unk_02037734.h"
#include "proto/main/unk_0203cbc0.h"
#include "proto/main/unk_0204eeb4.h"
#include "proto/main/unk_020501d4.h"
#include "proto/main/unk_02051218.h"
#include "proto/main/unk_020536dc.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02065330.h"
#include "proto/main/unk_0206d5b8.h"
#include "proto/main/unk_0206d988.h"
#include "proto/main/unk_020720f8.h"
#include "proto/main/unk_0209c390.h"
#include "proto/main/unk_020a427c.h"
#include "proto/main/unk_020af258.h"
#include "proto/main/unk_020b7d84.h"
#include "proto/ov001/unk_ov001_0220c594.h"
#include "proto/ov002/unk_ov002_022025cc.h"

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

// ---- buffer interface classes (defined elsewhere) ----






extern "C" {
extern char data_020ddf6c[];
}

extern "C" {
}

extern "C" {
}

extern "C" {
extern u32 gCurrentHeap;
}

extern "C" {
extern u8 sFatalEntered;
}

extern "C" {
extern u8 data_021fccfc[];
}

extern "C" {
extern u8 gOverlayHandle[];
}

extern "C" {
extern u16 gMainWaitingFrame;
}

extern "C" {
extern u32 gCommManager;
}

extern "C" {
extern u32 gFrameCounter;
}

extern "C" {
extern OSThreadQueue gFrameWaitQueue;
}

extern "C" {
extern OSThreadQueue gVBlankQueue;
}

extern "C" {
extern u32 sCrashContext;
}

extern "C" {
extern u8 gBackup[];
}

extern "C" {
}

extern "C" {
extern u8 gMelodyPlayer[];
}

extern "C" {
void func_020a791c(void *p);
}

extern "C" {
s32 EncodedString_SetRaw(void *buf, const void *src, s32 len);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
u32 OS_DisableInterrupts(void);
}

extern "C" {
void OS_Halt(void);
}

extern "C" {
void OS_RestoreInterrupts(u32 v);
}

extern "C" {
void OS_DisableIrqMask(s32 v);
}

extern "C" {
void OS_ResetRequestIrqMask(s32 v);
}

extern "C" {
void OverlayHandle_Load(void *p, s32 v);
}

extern "C" {
void OverlayHandle_Unload(void *p);
}

extern "C" {
void DwcNet_SetAllocator(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
u32 DWC_Init(void *p);
}

extern "C" {
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
}

extern "C" {
void WaitByLoop(s32 n);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void Task_RunFrame(s32 v);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void Main_WaitFrame(void);
}

extern "C" {
}

extern "C" {
void Main_LateUpdate(u32 v);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void Sky_SwapBuffers(void);
}

extern "C" {
void HBlank_RunFrame(void);
}

extern "C" {
void Snd_Update(s32 v);
}

extern "C" {
}

extern "C" {
}

extern "C" {
void VramQueue2d_Run(void);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void Clock_Update(u32 v);
}

extern "C" {
void Backup_GetStatus(void *p);
}

extern "C" {
void FS_InitFile(void *f);
}

extern "C" {
BOOL FS_OpenFileFast(void *f, FSFileID p);
}

extern "C" {
void FS_CloseFile(void *f);
}

extern "C" {
void File_ReadRange(void *f, void *dst, u32 sz, u32 off);
}

extern "C" {
void FS_ConvertPathToFileID(void *p, void *q);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void Main_PxiSendWordRetry(s32 a, s32 b);
}

extern "C" {
}

extern "C" {
void Main_DwcFree(u32 a, void *p);
}

extern "C" {
void *Main_DwcAlloc(u32 a, void *p, u32 n);
}



// ---- free functions ----

extern "C" {
void Fatal_Handler(void *arg);
}

#pragma thumb off

#pragma thumb reset

// ---- RecordFile: cached record table ----

extern "C" void Main_WaitVBlank(void);
extern "C" void Main_WaitFrame(void);
extern "C" void Main_LateUpdate(u32 r);
extern "C" u32 Main_InitDwc(void);

RecordFile::RecordFile() {
    fileId.arc = 0;
    pageIndex = -1;
    recordCount = 0;
    data = 0;
    pageBuf = 0;
    recordSize = 0;
}

RecordFile::~RecordFile() {
    close();
}

BOOL RecordFile::open(void *path, s32 size, s32 count) {
    recordSize = size;
    recordCount = count;
    FS_ConvertPathToFileID(this, path);
    pageBuf = (u8 *)Mem_Alloc(size << 3);
    return TRUE;
}

void RecordFile::loadAll() {
    u32 size = recordSize * recordCount;
    if (data == 0) {
        data = (u8 *)Mem_Alloc(size);
    }
    Backup_GetStatus(gBackup);
    File_ReadRangeById(fileId, data, size, 0);
}

void RecordFile::freeAll() {
    if (data != 0) {
        Mem_Free(data);
        data = 0;
    }
}

void RecordFile::close() {
    fileId.arc = 0;
    pageIndex = -1;
    recordCount = 0;
    recordSize = 0;
    if (data != 0) {
        Mem_Free(data);
        data = 0;
    }
    if (pageBuf != 0) {
        Mem_Free(pageBuf);
        pageBuf = 0;
    }
}

u8 *RecordFile::getRecord(u32 idx) {
    if (data != 0) {
        return data + recordSize * idx;
    }
    u32 blk = idx >> 3;
    if (pageIndex == blk) {
        return pageBuf + recordSize * (idx & 7);
    }
    if (pageBuf != 0) {
        loadPage(idx);
        u32 off = recordSize * (idx & 7);
        pageIndex = blk;
        return pageBuf + off;
    }
    return 0;
}

void RecordFile::loadPage(u32 idx) {
    u32 blk = idx >> 3;
    u8 file[HOST_SIZED(0x4c, FSFile)];
    Backup_GetStatus(gBackup);
    FS_InitFile(file);
    if (FS_OpenFileFast(file, fileId)) {
        u32 sz = recordSize << 3;
        File_ReadRange(file, pageBuf, sz, blk * sz);
        FS_CloseFile(file);
    }
}

BOOL InfoTableSet::open(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count) {
    alwaysTable.open(a, n0, count);
    indoorTable.open(b, n1, count);
    dmaTable.open(c, n2, count);
    alwaysTable.loadAll();
    return TRUE;
}

void InfoTableSet::close() {
    alwaysTable.close();
    indoorTable.close();
    dmaTable.close();
}

BOOL InfoTableSet::loadIndoor(s32 v) {
    if (v == 0) {
        indoorTable.loadAll();
    }
    return TRUE;
}

BOOL InfoTableSet::freeIndoor() {
    indoorTable.freeAll();
    return TRUE;
}

RecordFile *InfoTableSet::getAlways() {
    return &alwaysTable;
}

RecordFile *InfoTableSet::getIndoor() {
    return &indoorTable;
}

RecordFile *InfoTableSet::getDma() {
    return &dmaTable;
}

extern "C" void Fatal_ExceptionCallback(void *arg, void *p) {
    OS_SetUserExceptionHandler(0, 0);
    sCrashContext = (u32)arg;
    CrashScreen_Run();
}

extern "C" void Main_InitNop(void) {}

extern "C" void Main_WaitVBlank(void) {
    OS_SleepThread(&gVBlankQueue);
}

extern "C" void Main_WaitFrame(void) {
    OS_SleepThread(&gFrameWaitQueue);
}

extern "C" void Main_PreTaskUpdate(u32 r) {
    LidSleep_Update();
    Gfx_PreTaskUpdate();
    if (r != 0) {
        Comm_ProcessReceived(r);
    }
    Touch_Update();
    Pad_Update();
    SoftReset_Update();
    Clock_Update(r);
}

extern "C" void Main_PostTaskUpdate(u32 r) {
    if (r == 0) {
        NetSession_PostUpdate();
    }
    Comm_Update(r);
    Gfx_PostTaskUpdate();
    gFrameCounter++;
    IO_W((volatile u32 *)0x4000540, 3);
}

extern "C" void Main_PostFrameUpdate(void) {
    Gfx_VBlankFlush();
    CommCaution_UpdateBlendRegs();
    VramQueue2d_Run();
}

extern "C" void Main_LateUpdate(u32 r) {
    TextLabel_FlushGroup0();
    HudObjGfx_FlushCameraButton();
    Sky_SwapBuffers();
    HBlank_RunFrame();
    Snd_Update(r != 0 ? 1 : 0);
}

extern "C" void Main_PreTaskHook(void) {
    Main_PreTaskStub();
}

extern "C" void Main_PostTaskHook(void) {
    Main_PostTaskStub();
}

extern "C" void Main_Loop(void) {
    u32 r;
    s32 b;
    GX_DispOn();
    IO_OR((volatile u32 *)0x4001000, 0x10000);
    LidSleep_Init();
    u32 v = gCommManager;
    u16 *flag = &gMainWaitingFrame;
    for (;;) {
        Net_Update();
        ((CommManager *)(v))->setLatchedErrorFlags(((CommManager *)(v))->getErrorFlags());
        r = ((CommManager *)(v))->getLatchedErrorFlags();
        Main_PreTaskUpdate(r);
        Main_PreTaskHook();
        if (r != 0) {
            b = 1;
        } else {
            b = 0;
        }
        CommCaution_Update(b);
        Task_RunFrame(b);
        CommCaution_Draw();
        Main_PostTaskUpdate(r);
        Main_PostTaskHook();
        *flag = 1;
        Main_WaitFrame();
        *flag = 0;
        Main_PostFrameUpdate();
        Main_LateUpdate(r);
    }
}

extern "C" u32 Main_InitDwc(void) {
    void *p = Mem_AllocAligned(0x700, 0x20);
    OverlayHandle_Load(gOverlayHandle, (s32)OVERLAY_65_ID);
    u32 r = DWC_Init(p);
    sDwcInitResult = r;
    OverlayHandle_Unload(gOverlayHandle);
    Mem_Free(p);
    return r;
}

extern "C" u8 Main_TakeDwcInitResult(void) {
    u8 old = sDwcInitResult;
    sDwcInitResult = 4;
    return old;
}

u8 sDwcInitResult = 4;

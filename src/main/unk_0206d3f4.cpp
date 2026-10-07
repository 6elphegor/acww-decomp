#include "types.h"
#include "sys/StackPad.h"
#include "nitro/fs.h"
#include "talk/MsgStringAttr.h"
#include "talk/EncodedStringBase.h"
#include "talk/EncodedString.h"
#include "talk/EncodedString40.h"
#include "ui/LetterRenderer.h"
#include "ui/LetterTextLine.h"
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
#include "proto/autoload_2/unk_02119434.h"
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
#include "proto/main/unk_0206d3f4.h"
#include "proto/main/unk_0206d5b8.h"
#include "proto/main/unk_0206d988.h"
#include "proto/main/unk_020720f8.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_0209c390.h"
#include "proto/main/unk_020a427c.h"
#include "proto/main/unk_020af258.h"
#include "proto/main/unk_020b7d84.h"
#include "proto/ov001/unk_ov001_0220c594.h"
#include "proto/ov002/unk_ov002_022025cc.h"

// TU113, first part: 0x0206d3f4-0x0206d470 (the unit's remaining functions are the assembly routine
// Fatal_SaveRegisters and its caller). Owns its string literal (.data 0x020ddf6c-0x020ddf88).

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

// ---- buffer interface classes (defined elsewhere) ----







extern "C" {
extern u32 gCurrentHeap;
extern u8 sFatalEntered;
extern u8 data_021fccfc[];
extern u8 gOverlayHandle[];
extern u16 gMainWaitingFrame;
extern u32 gCommManager;
extern u32 gFrameCounter;
extern u8 gFrameWaitQueue[];
extern u8 gVBlankQueue[];
extern u32 sCrashContext;
extern u8 gBackup[];
extern u8 gMelodyPlayer[];

void func_020a791c(void *p);
s32 EncodedString_SetRaw(void *buf, const void *src, s32 len);
u32 OS_DisableInterrupts(void);
void OS_Halt(void);
void OS_RestoreInterrupts(u32 v);
void OS_DisableIrqMask(s32 v);
void OS_ResetRequestIrqMask(s32 v);
void OverlayHandle_Unload(void *p);
void DwcNet_SetAllocator(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
u32 DWC_Init(void *p);
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
u32 func_02072374(u32 p);
void func_02072398(u32 p, u32 v);
u32 func_0207238c(u32 p);
void Task_RunFrame(s32 v);
void Sky_SwapBuffers(void);
void HBlank_RunFrame(void);
void VramQueue2d_Run(void);
void Clock_Update(u32 v);
void Backup_GetStatus(void *p);
BOOL FS_OpenFileFast(void *f, FSFileID p);
void FS_CloseFile(void *f);
void FS_ConvertPathToFileID(void *p, void *q);
void Main_PxiSendWordRetry(s32 a, s32 b);
void Main_DwcFree(u32 a, void *p);
void *Main_DwcAlloc(u32 a, void *p, u32 n);
}



LetterRenderer::LetterRenderer() {}

LetterRenderer::~LetterRenderer() {}

void LetterRenderer::loadLetterScreen(u32 v) {
    Gfx2d_LoadScreenFile("menu/letter/b_ltr_a_bg.bsc", gCurrentHeap, v);
}

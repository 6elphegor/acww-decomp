#include "types.h"
#include "game/Unk_0206d0a0_Pad.h"
#include "game/Unk_0206d1d4_Src.h"
#include "sys/Unk_0206d8b8_Pair.h"
#include "talk/MsgStringAttr.h"
#include "talk/EncodedStringBase.h"
#include "talk/EncodedString.h"
#include "talk/EncodedString40.h"
#include "ui/LetterRenderer.h"
#include "ui/LetterTextLine.h"

// TU113, first part: 0x0206d3f4-0x0206d470 (the unit's remaining functions are the assembly routine
// Fatal_SaveRegisters and its caller). Owns its string literal (.data 0x020ddf6c-0x020ddf88).

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

// ---- buffer interface classes (defined elsewhere) ----







extern "C" {
extern u8 sDwcInitResult;
extern s32 data_020ddf8c;
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
extern s32 sMelodyTimer;
extern u8 gMelodyPlayer[];

void func_020a791c(void *p);
s32 EncodedString_SetRaw(void *buf, const void *src, s32 len);
void Gfx2d_HideLayer(void *p);
void Gfx2d_SetLayerPriority(void *p, s32 v);
void Gfx2d_SetLayerControl(void *p, s32 a, s32 b, s32 c);
void Gfx2d_SetLayerOffset(void *p, s32 a, s32 b);
void *Letter_GetPaper(void *p);
void Menu_LoadPaperBg(void *a, void *b);
void Mem_Clear(void *p, s32 n);
void Letter_GetRecipientNameBytes(void *dst, void *src);
s32 Text_GetLength(void *p, s32 n);
s32 Text_MeasureWidth(void *p, s32 n);
void Gfx2d_LoadScreenFile(char *s, u32 a, u32 b);
s32 CrashScreen_Run(void);
void func_02114cd8(s32 a, s32 b);
u32 OS_DisableInterrupts(void);
void func_01ffa3c0(void);
void OS_RestoreInterrupts(u32 v);
void OS_DisableIrqMask(s32 v);
void OS_ResetRequestIrqMask(s32 v);
void OverlayHandle_Load(void *p, s32 v);
void OverlayHandle_Unload(void *p);
void DwcNet_SetAllocator(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
void OverlayMgr_Acquire(u32 id);
void OverlayMgr_Release(u32 id);
void *Mem_AllocAligned(u32 size, u32 align);
void Mem_Free(void *p);
void WfcUtil_Run(void *p, s32 a, s32 b);
u32 func_021001e0(void *p);
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
void GX_DispOn(void);
void LidSleep_Init(void);
void Net_Update(void);
u32 func_02072374(u32 p);
void func_02072398(u32 p, u32 v);
u32 func_0207238c(u32 p);
void Main_PreTaskUpdate(u32 v);
void Main_PreTaskHook(void);
void CommCaution_Update(s32 v);
void Task_RunFrame(s32 v);
void CommCaution_Draw(void);
void Main_PostTaskUpdate(u32 v);
void Main_PostTaskHook(void);
void Main_WaitFrame(void);
void Main_PostFrameUpdate(void);
void Main_LateUpdate(u32 v);
void func_0203d4cc(void);
void func_0203d4d0(void);
void TextLabel_FlushGroup0(void);
void HudObjGfx_FlushCameraButton(void);
void Sky_SwapBuffers(void);
void HBlank_RunFrame(void);
void Snd_Update(s32 v);
void Gfx_VBlankFlush(void);
void CommCaution_UpdateBlendRegs(void);
void VramQueue2d_Run(void);
void NetSession_PostUpdate(void);
void Comm_Update(u32 v);
void Gfx_PostTaskUpdate(void);
void LidSleep_Update(void);
void Gfx_PreTaskUpdate(void);
void Comm_ProcessReceived(u32 v);
void Touch_Update(void);
void Pad_Update(void);
void SoftReset_Update(void);
void Clock_Update(u32 v);
void OS_SleepThread(void *p);
void Backup_GetStatus(void *p);
void FS_InitFile(void *f);
BOOL FS_OpenFileFast(void *f, Unk_0206d8b8_Pair p);
void FS_CloseFile(void *f);
void File_ReadRange(void *f, void *dst, u32 sz, u32 off);
void FS_ConvertPathToFileID(void *p, void *q);
void *Mem_Alloc(u32 n);
void File_ReadRangeById(Unk_0206d8b8_Pair p, void *dst, u32 n, s32 z);
void *Snd_MelodyUpdate(void *p);
void Snd_MelodyInit(void *p);
s32 Melody_ApplyEditPattern(void);
void Main_PxiSendWordRetry(s32 a, s32 b);
void Fatal_ExceptionCallback(void *arg, void *p);
void Main_DwcFree(u32 a, void *p);
void *Main_DwcAlloc(u32 a, void *p, u32 n);
}



LetterRenderer::LetterRenderer() {}

LetterRenderer::~LetterRenderer() {}

void LetterRenderer::loadLetterScreen(u32 v) {
    Gfx2d_LoadScreenFile("menu/letter/b_ltr_a_bg.bsc", gCurrentHeap, v);
}

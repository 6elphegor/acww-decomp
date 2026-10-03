#include "types.h"

// TU113, first part: 0x0206d3f4-0x0206d470 (the unit's remaining functions are the assembly routine
// Fatal_SaveRegisters and its caller). Owns its string literal (.data 0x020ddf6c-0x020ddf88).

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

// ---- buffer interface classes (defined elsewhere) ----
class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    MsgStringAttr unk_04;
};

// local text buffer, vtable 0x020ddf5c (0x38 bytes)
class Unk_020ddf5c : public EncodedString {
public:
    Unk_020ddf5c() {}
    virtual ~Unk_020ddf5c() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_10[0x28];
};

// ---- 0x4c-byte object (ctor func_0206ce50, dtor func_0206ce30) ----
class Unk_020ddf44 {
public:
    Unk_020ddf44();
    ~Unk_020ddf44();
    s32 func_0206cc14(u8 a, u8 b);
    s32 func_0206cc20(u8 a, u8 b);
    void func_0206cc38();
    void func_0206cc6c(EncodedString *buf, s32 flag);
    void func_0206cc84(EncodedString *buf);
    void func_0206cdcc(u16 id, s32 arg);
    s32 func_0206ce98();
    void func_0206ced0();
    void func_0206cfdc(u8 *src, s32 *offs, s32 *idx);

    u8 pad_00[0x4c];
};


struct Unk_0206d8b8_Pair {
    u32 a;
    u32 b;
};

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
s32 func_020a78a4(void *buf, const void *src, s32 len);
void Gfx2d_HideLayer(void *p);
void Gfx2d_SetLayerPriority(void *p, s32 v);
void Gfx2d_SetLayerControl(void *p, s32 a, s32 b, s32 c);
void Gfx2d_SetLayerOffset(void *p, s32 a, s32 b);
void *func_02065c8c(void *p);
void func_ov002_02202dd4(void *a, void *b);
void Mem_Clear(void *p, s32 n);
void func_02065604(void *dst, void *src);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
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
void func_ov065_02277ba4(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
void OverlayMgr_Acquire(u32 id);
void OverlayMgr_Release(u32 id);
void *Mem_AllocAligned(u32 size, u32 align);
void Mem_Free(void *p);
void WfcUtil_Run(void *p, s32 a, s32 b);
u32 func_021001e0(void *p);
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
void GX_DispOn(void);
void func_020af3a8(void);
void Net_Update(void);
u32 func_02072374(u32 p);
void func_02072398(u32 p, u32 v);
u32 func_0207238c(u32 p);
void Main_PreTaskUpdate(u32 v);
void Main_PreTaskHook(void);
void func_02038148(s32 v);
void Task_RunFrame(s32 v);
void func_02038138(void);
void Main_PostTaskUpdate(u32 v);
void Main_PostTaskHook(void);
void Main_WaitFrame(void);
void Main_PostFrameUpdate(void);
void Main_LateUpdate(u32 v);
void func_0203d4cc(void);
void func_0203d4d0(void);
void TextLabel_FlushGroup0(void);
void func_020118a4(void);
void func_020b8e44(void);
void HBlank_RunFrame(void);
void Snd_Update(s32 v);
void Gfx_VBlankFlush(void);
void func_02038128(void);
void VramQueue2d_Run(void);
void func_020a5c2c(void);
void Comm_Update(u32 v);
void Gfx_PostTaskUpdate(void);
void func_020af33c(void);
void Gfx_PreTaskUpdate(void);
void Comm_ProcessReceived(u32 v);
void Touch_Update(void);
void Pad_Update(void);
void func_0209c390(void);
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
void func_0206d4e8(s32 a, s32 b);
void Fatal_ExceptionCallback(void *arg, void *p);
void Main_DwcFree(u32 a, void *p);
void *Main_DwcAlloc(u32 a, void *p, u32 n);
}

struct Unk_0206d0a0_Pad {
    s32 v[1];
    Unk_0206d0a0_Pad() {}
    ~Unk_0206d0a0_Pad() {}
};

struct Unk_0206d1d4_Src {
    u8 pad_00[0x34];
    u8 name[0x18];
    u8 pad_4c[0xa0];
    u8 cnt;
};

// ---- Unk_0206d0a0 : Unk_020ddf44 ----
class Unk_0206d0a0 : public Unk_020ddf44 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d0a0(u32 a, u32 b);
    void func_0206d0b8(u8 *data);
    void func_0206d0fc(u8 *src, BOOL flag);
    void func_0206d1d4(Unk_0206d1d4_Src *src, u8 *out);
    void func_0206d288(void *src);
    s32 func_0206d2d4();
    void func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void func_0206d380();
    void func_0206d394();
    void func_0206d39c(s32 v);
    void func_0206d3f4(u32 v);

    /* 0x4c */ Unk_020ddf44 unk_4c;
    /* 0x98 */ Unk_020ddf44 unk_98[4];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
};

Unk_0206d0a0::Unk_0206d0a0() {}

Unk_0206d0a0::~Unk_0206d0a0() {}

void Unk_0206d0a0::func_0206d3f4(u32 v) {
    Gfx2d_LoadScreenFile("menu/letter/b_ltr_a_bg.bsc", gCurrentHeap, v);
}

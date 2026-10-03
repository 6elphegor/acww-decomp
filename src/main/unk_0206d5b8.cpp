#include "types.h"

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
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

    MsgStringAttr unk_04;
};

// local text buffer, vtable 0x020ddf5c (0x38 bytes)
class Unk_020ddf5c : public EncodedString {
public:
    Unk_020ddf5c() {}
    virtual ~Unk_020ddf5c() {}
    virtual u32 capacity();
    virtual u8 *data();
    u8 pad_10[0x28];
};

// ---- 0x4c-byte object (ctor func_0206ce50, dtor func_0206ce30) ----
class Unk_0206ce50 {
public:
    Unk_0206ce50();
    ~Unk_0206ce50();
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
extern char data_020ddf6c[];
}

extern "C" {
extern u8 sDwcInitResult;
}

extern "C" {
extern s32 data_020ddf8c;
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
extern u8 gFrameWaitQueue[];
}

extern "C" {
extern u8 gVBlankQueue[];
}

extern "C" {
extern u32 sCrashContext;
}

extern "C" {
extern u8 gBackup[];
}

extern "C" {
extern s32 sMelodyTimer;
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
void Gfx2d_HideLayer(void *p);
}

extern "C" {
void Gfx2d_SetLayerPriority(void *p, s32 v);
}

extern "C" {
void Gfx2d_SetLayerControl(void *p, s32 a, s32 b, s32 c);
}

extern "C" {
void Gfx2d_SetLayerOffset(void *p, s32 a, s32 b);
}

extern "C" {
void *Letter_GetPaper(void *p);
}

extern "C" {
void Menu_LoadPaperBg(void *a, void *b);
}

extern "C" {
void Mem_Clear(void *p, s32 n);
}

extern "C" {
void Letter_GetRecipientNameBytes(void *dst, void *src);
}

extern "C" {
s32 Text_GetLength(void *p, s32 n);
}

extern "C" {
s32 Text_MeasureWidth(void *p, s32 n);
}

extern "C" {
void Gfx2d_LoadScreenFile(char *s, u32 a, u32 b);
}

extern "C" {
s32 CrashScreen_Run(void);
}

extern "C" {
void func_02114cd8(s32 a, s32 b);
}

extern "C" {
u32 OS_DisableInterrupts(void);
}

extern "C" {
void func_01ffa3c0(void);
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
void OverlayMgr_Acquire(u32 id);
}

extern "C" {
void OverlayMgr_Release(u32 id);
}

extern "C" {
void *Mem_AllocAligned(u32 size, u32 align);
}

extern "C" {
void Mem_Free(void *p);
}

extern "C" {
void WfcUtil_Run(void *p, s32 a, s32 b);
}

extern "C" {
u32 func_021001e0(void *p);
}

extern "C" {
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
}

extern "C" {
void WaitByLoop(s32 n);
}

extern "C" {
void GX_DispOn(void);
}

extern "C" {
void LidSleep_Init(void);
}

extern "C" {
void Net_Update(void);
}

extern "C" {
u32 _ZN11CommManager13getErrorFlagsEv(u32 p);
}

extern "C" {
void _ZN11CommManager20setLatchedErrorFlagsEj(u32 p, u32 v);
}

extern "C" {
u32 _ZN11CommManager20getLatchedErrorFlagsEv(u32 p);
}

extern "C" {
void Main_PreTaskUpdate(u32 v);
}

extern "C" {
void Main_PreTaskHook(void);
}

extern "C" {
void CommCaution_Update(s32 v);
}

extern "C" {
void Task_RunFrame(s32 v);
}

extern "C" {
void CommCaution_Draw(void);
}

extern "C" {
void Main_PostTaskUpdate(u32 v);
}

extern "C" {
void Main_PostTaskHook(void);
}

extern "C" {
void Main_WaitFrame(void);
}

extern "C" {
void Main_PostFrameUpdate(void);
}

extern "C" {
void Main_LateUpdate(u32 v);
}

extern "C" {
void func_0203d4cc(void);
}

extern "C" {
void func_0203d4d0(void);
}

extern "C" {
void TextLabel_FlushGroup0(void);
}

extern "C" {
void HudObjGfx_FlushCameraButton(void);
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
void Gfx_VBlankFlush(void);
}

extern "C" {
void CommCaution_UpdateBlendRegs(void);
}

extern "C" {
void VramQueue2d_Run(void);
}

extern "C" {
void NetSession_PostUpdate(void);
}

extern "C" {
void Comm_Update(u32 v);
}

extern "C" {
void Gfx_PostTaskUpdate(void);
}

extern "C" {
void LidSleep_Update(void);
}

extern "C" {
void Gfx_PreTaskUpdate(void);
}

extern "C" {
void Comm_ProcessReceived(u32 v);
}

extern "C" {
void Touch_Update(void);
}

extern "C" {
void Pad_Update(void);
}

extern "C" {
void SoftReset_Update(void);
}

extern "C" {
void Clock_Update(u32 v);
}

extern "C" {
void OS_SleepThread(void *p);
}

extern "C" {
void Backup_GetStatus(void *p);
}

extern "C" {
void FS_InitFile(void *f);
}

extern "C" {
BOOL FS_OpenFileFast(void *f, Unk_0206d8b8_Pair p);
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
void *Mem_Alloc(u32 n);
}

extern "C" {
void File_ReadRangeById(Unk_0206d8b8_Pair p, void *dst, u32 n, s32 z);
}

extern "C" {
void *Snd_MelodyUpdate(void *p);
}

extern "C" {
void Snd_MelodyInit(void *p);
}

extern "C" {
s32 Melody_ApplyEditPattern(void);
}

extern "C" {
void func_0206d4e8(s32 a, s32 b);
}

extern "C" {
void Fatal_ExceptionCallback(void *arg, void *p);
}

extern "C" {
void Main_DwcFree(u32 a, void *p);
}

extern "C" {
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

// ---- LetterRenderer : Unk_0206ce50 ----
class LetterRenderer : public Unk_0206ce50 {
public:
    LetterRenderer();
    ~LetterRenderer();
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
    void loadLetterScreen(u32 v);

    /* 0x4c */ Unk_0206ce50 unk_4c;
    /* 0x98 */ Unk_0206ce50 unk_98[4];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
};

// ---- free functions ----

extern "C" {
void Fatal_Handler(void *arg);
}

#pragma thumb off

#pragma thumb reset

// ---- RecordFile: cached record table ----
class RecordFile {
public:
    RecordFile();
    ~RecordFile();
    void loadPage(u32 idx);
    u8 *getRecord(u32 idx);
    void close();
    void freeAll();
    void loadAll();
    BOOL open(void *path, s32 size, s32 count);

    /* 0x00 */ Unk_0206d8b8_Pair unk_00;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 *unk_18;
};

class InfoTableSet {
public:
    RecordFile *getDma();
    RecordFile *getIndoor();
    RecordFile *getAlways();
    BOOL freeIndoor();
    BOOL loadIndoor(s32 v);
    void close();
    BOOL open(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count);

    /* 0x00 */ RecordFile unk_00;
    /* 0x1c */ RecordFile unk_1c;
    /* 0x38 */ RecordFile unk_38;
};
extern "C" void Fatal_ExceptionCallback(void *arg, void *p);
extern "C" void Main_InitNop(void);
extern "C" void Main_WaitVBlank(void);
extern "C" void Main_WaitFrame(void);
extern "C" void Main_PreTaskUpdate(u32 r);
extern "C" void Main_PostTaskUpdate(u32 r);
extern "C" void Main_PostFrameUpdate(void);
extern "C" void Main_LateUpdate(u32 r);
extern "C" void Main_PreTaskHook(void);
extern "C" void Main_PostTaskHook(void);
extern "C" void Main_Loop(void);
extern "C" u32 Main_InitDwc(void);
extern "C" u8 Main_TakeDwcInitResult(void);

RecordFile::RecordFile() {
    unk_00.a = 0;
    unk_14 = -1;
    unk_0c = 0;
    unk_10 = 0;
    unk_18 = 0;
    unk_08 = 0;
}

RecordFile::~RecordFile() {
    close();
}

BOOL RecordFile::open(void *path, s32 size, s32 count) {
    unk_08 = size;
    unk_0c = count;
    FS_ConvertPathToFileID(this, path);
    unk_18 = (u8 *)Mem_Alloc(size << 3);
    return TRUE;
}

void RecordFile::loadAll() {
    u32 size = unk_08 * unk_0c;
    if (unk_10 == 0) {
        unk_10 = (u8 *)Mem_Alloc(size);
    }
    Backup_GetStatus(gBackup);
    File_ReadRangeById(unk_00, unk_10, size, 0);
}

void RecordFile::freeAll() {
    if (unk_10 != 0) {
        Mem_Free(unk_10);
        unk_10 = 0;
    }
}

void RecordFile::close() {
    unk_00.a = 0;
    unk_14 = -1;
    unk_0c = 0;
    unk_08 = 0;
    if (unk_10 != 0) {
        Mem_Free(unk_10);
        unk_10 = 0;
    }
    if (unk_18 != 0) {
        Mem_Free(unk_18);
        unk_18 = 0;
    }
}

u8 *RecordFile::getRecord(u32 idx) {
    if (unk_10 != 0) {
        return unk_10 + unk_08 * idx;
    }
    u32 blk = idx >> 3;
    if (unk_14 == blk) {
        return unk_18 + unk_08 * (idx & 7);
    }
    if (unk_18 != 0) {
        loadPage(idx);
        u32 off = unk_08 * (idx & 7);
        unk_14 = blk;
        return unk_18 + off;
    }
    return 0;
}

void RecordFile::loadPage(u32 idx) {
    u32 blk = idx >> 3;
    u8 file[0x4c];
    Backup_GetStatus(gBackup);
    FS_InitFile(file);
    if (FS_OpenFileFast(file, unk_00)) {
        u32 sz = unk_08 << 3;
        File_ReadRange(file, unk_18, sz, blk * sz);
        FS_CloseFile(file);
    }
}

BOOL InfoTableSet::open(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count) {
    unk_00.open(a, n0, count);
    unk_1c.open(b, n1, count);
    unk_38.open(c, n2, count);
    unk_00.loadAll();
    return TRUE;
}

void InfoTableSet::close() {
    unk_00.close();
    unk_1c.close();
    unk_38.close();
}

BOOL InfoTableSet::loadIndoor(s32 v) {
    if (v == 0) {
        unk_1c.loadAll();
    }
    return TRUE;
}

BOOL InfoTableSet::freeIndoor() {
    unk_1c.freeAll();
    return TRUE;
}

RecordFile *InfoTableSet::getAlways() {
    return &unk_00;
}

RecordFile *InfoTableSet::getIndoor() {
    return &unk_1c;
}

RecordFile *InfoTableSet::getDma() {
    return &unk_38;
}

extern "C" void Fatal_ExceptionCallback(void *arg, void *p) {
    func_02114cd8(0, 0);
    sCrashContext = (u32)arg;
    CrashScreen_Run();
}

extern "C" void Main_InitNop(void) {}

extern "C" void Main_WaitVBlank(void) {
    OS_SleepThread(gVBlankQueue);
}

extern "C" void Main_WaitFrame(void) {
    OS_SleepThread(gFrameWaitQueue);
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
    *(volatile u32 *)0x4000540 = 3;
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
    func_0203d4d0();
}

extern "C" void Main_PostTaskHook(void) {
    func_0203d4cc();
}

extern "C" void Main_Loop(void) {
    u32 r;
    s32 b;
    GX_DispOn();
    *(volatile u32 *)0x4001000 |= 0x10000;
    LidSleep_Init();
    u32 v = gCommManager;
    u16 *flag = &gMainWaitingFrame;
    for (;;) {
        Net_Update();
        _ZN11CommManager20setLatchedErrorFlagsEj(v, _ZN11CommManager13getErrorFlagsEv(v));
        r = _ZN11CommManager20getLatchedErrorFlagsEv(v);
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
    u32 r = func_021001e0(p);
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

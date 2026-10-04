#include "sys/DtorEntry.h"
#include "nitro/fs.h"
// mwcc-flags: -nothumb -O4,p
// NitroSDK FS (fs_file / fs_archive / fs_overlay) + MATH_CalcHMACMD5, autoload_2 0x02119434-0x0211a8d4. ARM code.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct {
    u32 w[23];
} MD5Context;

typedef struct {
    u8 b[20];
} Digest20;

typedef struct DtorEntry DtorEntry;

extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void OS_SleepThread(OSThreadQueue *);
extern void OS_WakeupThread(OSThreadQueue *);
extern void MI_CpuFill8(void *dst, u32 v, u32 n);
extern void MI_CpuCopy8(const void *src, void *dst, u32 n);
extern int FSi_TranslateCommand(FSFile *file, u32 cmd);
extern void FSi_ReleaseCommand(FSFile *file, u32 result);
extern void FS_NotifyArchiveAsyncEnd(FSArc *arc, u32 result);
extern void FS_SetArchiveProc(FSArc *arc, int (*proc)(FSFile *, u32), u32 mask);
extern void FS_LoadArchive(FSArc *arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                          int (*read)(FSArc *, void *, u32, u32), int (*write)(FSArc *, void *, u32, u32));
extern void FS_RegisterArchiveName(FSArc *arc, const char *name, int len);
extern FSArc *FS_FindArchive(const char *name, int len);
extern void FS_InitArchive(FSArc *arc);
extern BOOL FSi_SendCommand(FSFile *file, u32 cmd);
extern u32 OS_GetLockID(void);
extern void CARD_UnlockRom(u32);
extern void CARD_LockRom(u32);
extern void CARD_Init(void);
extern void CARDi_ReadRom(u32 dma, u32 src, void *dst, u32 len, void (*cb)(FSArc *), FSArc *arg, BOOL async);
extern void DC_FlushRange(u32 addr, u32 len);
extern void DC_InvalidateRange(u32 addr, u32 len);
extern void IC_InvalidateRange(u32 addr, u32 len);
extern void MIi_UncompressBackward(u32 addr);
extern void Fatal_Trap(void);
extern void func_0211aeb4(void *digest, const void *data, u32 len, const void *key, u32 keylen);
extern void DGT_Hash1Reset(MD5Context *ctx);
extern void DGT_Hash1SetSource(MD5Context *ctx, const void *data, u32 len);
extern void DGT_Hash1GetDigest_R(void *digest, MD5Context *ctx);

extern FSDirPos data_021fea6c;
extern u32 data_021fea78;
extern u32 data_021fea7c;
extern u32 data_021fea80;
extern FSOvtCache data_021fea84;
extern FSOvtCache data_021fea8c;
extern FSArc data_021fea94;
extern char data_0213bff8[];
extern u8 *data_0213bffc;
extern u32 data_0213c000;
extern DtorEntry *data_0220066c;
extern Digest20 data_020e74ec[];
extern Digest20 data_020e74ec_end[];

#define REG_BOOTTYPE (*(volatile u16 *)0x027ffc40)

static inline BOOL IsBusy(volatile FSFile *f) {
    BOOL r;
    r = (f->stat & 1) != 0;
    return r;
}
static inline BOOL IsCanceled(volatile FSFile *f) {
    BOOL r;
    r = (f->stat & 2) != 0;
    return r;
}
static inline BOOL IsBlocking(volatile FSFile *f) {
    BOOL r;
    r = (f->stat & 4) != 0;
    return r;
}
static inline BOOL IsSuspended(volatile FSArc *a) {
    BOOL r;
    r = (a->flag & 8) != 0;
    return r;
}
static inline BOOL IsStarted(volatile FSArc *a) {
    BOOL r;
    r = (a->flag & 0x10) != 0;
    return r;
}
static inline const FSROMTable *GetFNT(void) {
    return (const FSROMTable *)0x027ffe40;
}
static inline const FSROMTable *GetFAT(void) {
    return (const FSROMTable *)0x027ffe48;
}
static inline BOOL IsLoaded(volatile FSArc *a) {
    BOOL r;
    r = (a->flag & 2) != 0;
    return r;
}
static inline BOOL IsIdle(volatile FSFile *f) {
    BOOL r;
    r = (f->stat & 0x44) == 0;
    return r;
}

int FSi_RomArchiveProc(FSFile *file, u32 cmd);
u32 FSi_ReadDummyCallback(void);
u32 FSi_EmptyArchiveProc(void);
u32 FSi_WriteDummyCallback(void);
int FSi_ReadRomCallback(FSArc *arc, void *dst, u32 src, u32 len);
void FSi_OnRomReadDone(FSArc *arc);
void FS_InitFile(FSFile *file);
void FSi_InitRom(u32 dma);
BOOL FS_OpenFileFast(FSFile *file, FSFileID id);
BOOL FS_OpenFileDirect(FSFile *file, FSArc *arc, u32 start, u32 end, int id);
BOOL FS_ConvertPathToFileID(FSFileID *id, const char *path);
BOOL FSi_FindPath(FSFile *file, const char *path, FSFileID *id, FSDirPos *pos);
s32 FSi_ReadFileCore(FSFile *file, void *dst, s32 len, BOOL async);
s32 FS_ReadFile(FSFile *file, void *dst, s32 len);
BOOL FS_CloseFile(FSFile *file);
BOOL FS_WaitAsync(FSFile *file);
int FSi_ExecuteSyncCommand(FSFile *file);
FSFile *FSi_NextCommand(volatile FSArc *arc);
void FSi_ExecuteAsyncCommand(FSFile *file);
BOOL FSi_CompareDigest(const u8 *expected, const void *data, u32 len);
void FS_StartOverlay(FSOverlayInfoHeader *h);
BOOL FS_LoadOverlayImage(FSOverlayInfo *p);
BOOL FS_LoadOverlayInfo(FSOverlayInfo *p, int target, u32 id);
BOOL FS_UnloadOverlayImage(FSOverlayInfo *p);
void FS_EndOverlay(FSOverlayInfo *p);
FSFileID FS_GetOverlayFileID(const FSOverlayInfoHeader *h);
void FS_ClearOverlayImage(FSOverlayInfoHeader *h);
u32 FSi_GetOverlayBinarySize(const FSOverlayInfoHeader *h);

// FSi_LoadOverlayInfoCore (ROM table read)
BOOL FSi_LoadOverlayInfoCore(FSOverlayInfo *p, int target, u32 id, FSArc *arc, u32 offset_arm9, u32 len_arm9, u32 offset_arm7, u32 len_arm7) {
    FSROMTable pr[1];
    u32 pos;
    if (target == 0) {
        pr->offset = offset_arm9;
        pr->length = len_arm9;
    } else {
        pr->offset = offset_arm7;
        pr->length = len_arm7;
    }
    pos = id * 32;
    if (pos >= pr->length) return 0;
    {
        FSFile file[1];
        FS_InitFile(file);
        if (!FS_OpenFileDirect(file, arc, pr->offset + pos, pr->offset + pr->length, -1)) return 0;
        if (FS_ReadFile(file, p, 32) != 32) {
            FS_CloseFile(file);
            return 0;
        }
        FS_CloseFile(file);
        p->target = target;
        if (!FS_OpenFileFast(file, FS_GetOverlayFileID(&p->header))) return 0;
        p->start = file->prop.file.start;
        p->length = file->prop.file.end - file->prop.file.start;
        FS_CloseFile(file);
        return 1;
    }
}

// FS_LoadOverlayInfo
static inline const FSROMTable *GetOVT(int target) {
    return (target == 0) ? (const FSROMTable *)0x027ffe50 : (const FSROMTable *)0x027ffe58;
}
BOOL FS_LoadOverlayInfo(FSOverlayInfo *p, int target, u32 id) {
    const FSOvtCache *t = (target == 0) ? &data_021fea84 : &data_021fea8c;
    if (t->ptr) {
        FSFile file[1];
        const u32 pos = id * 32;
        if (pos >= t->size) return 0;
        MI_CpuCopy8(t->ptr + pos, p, 32);
        p->target = target;
        FS_InitFile(file);
        if (!FS_OpenFileFast(file, FS_GetOverlayFileID(&p->header))) return 0;
        p->start = file->prop.file.start;
        p->length = file->prop.file.end - file->prop.file.start;
        FS_CloseFile(file);
        return 1;
    } else {
        const FSROMTable *const rom9 = GetOVT(0);
        const FSROMTable *const rom7 = GetOVT(1);
        return FSi_LoadOverlayInfoCore(p, target, id, &data_021fea94, rom9->offset, rom9->length, rom7->offset, rom7->length);
    }
}

#include "nitro/fs.h"
// mwcc-flags: -nothumb -O4,p
// NitroSDK FS (fs_file.c / fs_archive.c / fs_command.c region), autoload_2 0x0211802c-0x02119434. ARM code.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void OS_SleepThread(OSThreadQueue *);
extern void OS_WakeupThread(OSThreadQueue *);
extern void MI_CpuFill8(void *dst, u32 v, u32 n);
extern void MI_CpuCopy8(const void *src, void *dst, u32 n);
extern void FS_InitFile(FSFile *);
extern BOOL FS_OpenFileDirect(FSFile *, FSArc *, u32, u32, int);
extern s32 FS_ReadFile(FSFile *, void *, s32);
extern void FS_CloseFile(FSFile *);
extern u32 FSi_GetPackedName(const char *, int);
extern FSFile *FSi_NextCommand(FSArc *);
extern void FSi_ExecuteAsyncCommand(FSFile *);
extern int FSi_ExecuteSyncCommand(FSFile *);
extern int FSi_ReadMemoryCore(FSArc *, void *, u32, u32);
extern int FSi_ReadMemCallback(FSArc *, void *, u32, u32);
extern int FSi_WriteMemCallback(FSArc *, void *, u32, u32);
extern int (*data_0213a388[])(FSFile *);
extern char data_0213bff4[];
extern FSArc *data_021fea68;
extern FSDirPos data_021fea6c;

static inline BOOL FSi_IsBlocking(FSFile *f) {
    return !!(f->stat & 4);
}

static inline BOOL FSi_IsSuspended(FSArc *a) {
    return !!(a->flag & 8);
}

static inline BOOL FSi_IsStarted(FSArc *a) {
    return !!(a->flag & 2);
}

static inline BOOL FSi_IsTableLoaded(FSArc *a) {
    return !!(a->flag & 4);
}

static inline BOOL FSi_IsPathChar(u32 c) {
    BOOL r = 0;
    if (c != 0 && c != '/' && c != '\\') r = 1;
    return r;
}

static inline BOOL FSi_IsDirOnly(FSFile *f) {
    return !!(f->stat & 0x20);
}

static inline u32 FSi_NameLen(u32 name) {
    u32 l = 0;
    if (name <= 0xff) {
        l += 1;
    } else if (name <= 0xff00) {
        l += 2;
    } else {
        l += 3;
    }
    return l;
}

static inline u32 FSi_NameLen2(u32 name) {
    if (name <= 0xff) return 1;
    if (name <= 0xff00) return 2;
    return 3;
}

int FSi_TranslateCommand(FSFile *file, u32 cmd);
void FSi_ReleaseCommand(FSFile *file, u32 result);
int FSi_CloseFileCommand(void);
int FSi_OpenFileDirectCommand(FSFile *file);
int FSi_OpenFileFastCommand(FSFile *file);
int FSi_GetPathCommand(FSFile *file);
int FSi_FindPathCommand(FSFile *file);
int func_02118894(FSFile *file);
int FSi_SeekDirCommand(FSFile *file);
int FSi_WriteFileCommand(FSFile *file);
int FSi_WriteFileCommand(FSFile *file);
int FSi_ReadFileCommand(FSFile *file);
int FSi_SeekDirDirect(FSFile *file, u32 id);
void FSi_ReadTable(FSStream *s, void *dst, u32 len);
int FSi_StrNICmp(const char *a, const char *b, u32 n);
void FS_NotifyArchiveAsyncEnd(FSArc *arc, u32 result);
void FS_SetArchiveProc(FSArc *arc, int (*proc)(FSFile *, u32), u32 mask);
BOOL FS_ResumeArchive(FSArc *arc);
BOOL FS_SuspendArchive();
void *FS_UnloadArchiveTables(FSArc *arc);
u32 FS_LoadArchiveTables(FSArc *arc, void *mem, u32 mem_max);
BOOL FS_UnloadArchive(FSArc *arc);
BOOL FS_LoadArchive(FSArc *arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size, FSIoFunc rd, FSIoFunc wr);
void FS_ReleaseArchiveName(FSArc *arc);
BOOL FS_RegisterArchiveName(FSArc *arc, const char *name, int len);
FSArc *FS_FindArchive(const char *name, int len);
void FS_InitArchive(FSArc *arc);
BOOL FSi_SendCommand(FSFile *file, u32 cmd);

// FS_LoadArchiveTables
u32 FS_LoadArchiveTables(FSArc *arc, void *mem, u32 mem_max) {
    u32 need = ((u32)(s32)(arc->fat_size + arc->fnt_size + 32) + 31) & ~31;
    if (need <= mem_max) {
        u8 *tbl = (u8 *)(((u32)mem + 31) & ~31);
        FSFile file;
        FS_InitFile(&file);
        if (FS_OpenFileDirect(&file, arc, arc->fat, arc->fat + arc->fat_size, -1)) {
            if (FS_ReadFile(&file, tbl, arc->fat_size) < 0) {
                MI_CpuFill8(tbl, 0, arc->fat_size);
            }
            FS_CloseFile(&file);
        }
        arc->fat = (u32)tbl;
        tbl += arc->fat_size;
        if (FS_OpenFileDirect(&file, arc, arc->fnt, arc->fnt + arc->fnt_size, -1)) {
            if (FS_ReadFile(&file, tbl, arc->fnt_size) < 0) {
                MI_CpuFill8(tbl, 0, arc->fnt_size);
            }
            FS_CloseFile(&file);
        }
        arc->fnt = (u32)tbl;
        arc->load_mem = mem;
        arc->read = FSi_ReadMemoryCore;
        arc->flag |= 4;
    }
    return need;
}

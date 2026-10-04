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
int FSi_ReadDirCommand(FSFile *file);
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

// FS_ClearArchive-ish
void *FS_UnloadArchiveTables(FSArc *arc) {
    void *ret = 0;
    if (FSi_IsStarted(arc) != 0) {
        BOOL susp = FS_SuspendArchive(arc);
        if (FSi_IsTableLoaded(arc) != 0) {
            arc->flag &= ~4;
            ret = arc->load_mem;
            arc->load_mem = 0;
            arc->fat = arc->fat_orig;
            arc->fnt = arc->fnt_orig;
            arc->read = arc->read_orig;
        }
        if (susp) FS_ResumeArchive(arc);
    }
    return ret;
}

// FS_SuspendArchive
BOOL FS_SuspendArchive(FSArc *arc) {
    u32 irq = OS_DisableInterrupts();
    BOOL ret = !FSi_IsSuspended(arc);
    if (ret) {
        if (arc->flag & 0x10) {
            arc->flag |= 0x40;
            do {
                OS_SleepThread(&arc->queue2);
            } while (arc->flag & 0x40);
        } else {
            arc->flag |= 8;
        }
    }
    OS_RestoreInterrupts(irq);
    return ret;
}

// FS_ResumeArchive
BOOL FS_ResumeArchive(FSArc *arc) {
    FSFile *next = 0;
    u32 irq = OS_DisableInterrupts();
    BOOL ret = !FSi_IsSuspended(arc);
    if (!ret) {
        arc->flag &= ~8;
        next = FSi_NextCommand(arc);
    }
    OS_RestoreInterrupts(irq);
    if (next) FSi_ExecuteAsyncCommand(next);
    return ret;
}

// FS_SetArchiveProc
void FS_SetArchiveProc(FSArc *arc, int (*proc)(FSFile *, u32), u32 mask) {
    if (mask == 0) {
        proc = 0;
    } else if (proc == 0) {
        mask = 0;
    }
    arc->proc = proc;
    arc->proc_mask = mask;
}

void FS_NotifyArchiveAsyncEnd(FSArc *arc, u32 result) {
    if (arc->flag & 0x100) {
        FSFile *file = arc->list.next;
        arc->flag &= ~0x100;
        FSi_ReleaseCommand(file, result);
        {
            FSFile *n = FSi_NextCommand(arc);
            if (n) FSi_ExecuteAsyncCommand(n);
        }
    } else {
        FSFile *file = arc->list.next;
        u32 irq = OS_DisableInterrupts();
        file->error = result;
        arc->flag &= ~0x200;
        OS_WakeupThread(&arc->queue);
        OS_RestoreInterrupts(irq);
    }
}

// strnicmp
int FSi_StrNICmp(const char *a, const char *b, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        int c1 = (u8)a[i];
        int c2 = (u8)b[i];
        c1 -= 'A';
        c2 -= 'A';
        if (c1 <= 25u) c1 += 32;
        if (c2 <= 25u) c2 += 32;
        if (c1 != c2) return c1 - c2;
    }
    return 0;
}

// FSi_ReadTable
void FSi_ReadTable(FSStream *s, void *dst, u32 len) {
    FSArc *arc = s->arc;
    int r;
    arc->flag |= 0x200;
    r = arc->read(arc, dst, s->pos, len);
    switch (r) {
    case 0:
    case 1:
        arc->flag &= ~0x200;
        break;
    case 6: {
        u32 irq = OS_DisableInterrupts();
        while (arc->flag & 0x200) OS_SleepThread(&arc->queue);
        OS_RestoreInterrupts(irq);
        break;
    }
    }
    s->pos += len;
}

int FSi_SeekDirDirect(FSFile *file, u32 id) {
    file->stat |= 4;
    file->arg.pos.arc = file->arc;
    file->arg.pos.pos = 0;
    file->arg.pos.u.d.index = 0;
    file->arg.pos.u.d.own_id = id;
    return FSi_TranslateCommand(file, 2);
}

int FSi_ReadFileCommand(FSFile *file) {
    u32 pos = file->prop.file.pos;
    u32 len = file->arg.w.w38;
    FSArc *arc = file->arc;
    void *dst = (void *)file->arg.w.w30;
    file->prop.file.pos = pos + len;
    return arc->read_orig(arc, dst, pos, len);
}

int FSi_WriteFileCommand(FSFile *file) {
    u32 pos = file->prop.file.pos;
    u32 len = file->arg.w.w38;
    FSArc *arc = file->arc;
    void *dst = (void *)file->arg.w.w30;
    file->prop.file.pos = pos + len;
    return arc->write(arc, dst, pos, len);
}

int FSi_SeekDirCommand(FSFile *file) {
    FSArc *arc = file->arc;
    FSDirPos *pos = &file->arg.pos;
    struct {
        u32 off;
        u16 first;
        u16 parent;
    } buf;
    FSStream s;
    s.arc = arc;
    s.pos = arc->fnt + pos->u.d.own_id * 8;
    FSi_ReadTable(&s, &buf, 8);
    file->prop.dir.pos = *pos;
    if (pos->u.d.index == 0 && pos->pos == 0) {
        file->prop.dir.pos.u.d.index = buf.first;
        file->prop.dir.pos.pos = arc->fnt + buf.off;
    }
    file->prop.dir.parent = buf.parent & 0xfff;
    return 0;
}

int FSi_ReadDirCommand(FSFile *file) {
    FSEntry *ent = (FSEntry *)file->arg.w.w30;
    u8 b;
    u16 id;
    FSStream s;
    s.arc = file->arc;
    s.pos = file->prop.dir.pos.pos;
    FSi_ReadTable(&s, &b, 1);
    ent->name_len = b & 0x7f;
    ent->is_dir = (b >> 7) & 1;
    if (ent->name_len == 0) return 1;
    if (file->arg.w.w34) {
        s.pos += ent->name_len;
    } else {
        FSi_ReadTable(&s, ent->name, ent->name_len);
        ent->name[ent->name_len] = 0;
    }
    if (ent->is_dir) {
        FSi_ReadTable(&s, &id, 2);
        ent->pos.arc = file->arc;
        ent->pos.u.d.own_id = id & 0xfff;
        ent->pos.u.d.index = 0;
        ent->pos.pos = 0;
    } else {
        ent->pos.arc = file->arc;
        ent->pos.u.file_id = file->prop.dir.pos.u.d.index;
        file->prop.dir.pos.u.d.index++;
    }
    file->prop.dir.pos.pos = s.pos;
    return 0;
}

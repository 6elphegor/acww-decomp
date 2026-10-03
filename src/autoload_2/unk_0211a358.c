// mwcc-flags: -nothumb -O4,p
// NitroSDK FS (fs_file / fs_archive / fs_overlay) + MATH_CalcHMACMD5, autoload_2 0x0211a358-0x0211a49c. ARM code.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct FSArc FSArc;
typedef struct FSFile FSFile;
typedef struct {
    void *head;
    void *tail;
} OSThreadQueue;
typedef struct {
    FSArc *arc;
    union {
        u32 file_id;
        struct {
            u16 own_id;
            u16 index;
        } d;
    } u;
    u32 pos;
} FSDirPos;
typedef struct {
    FSArc *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    u32 offset;
    u32 length;
} FSROMTable;
typedef struct {
    u8 *ptr;
    u32 size;
} FSOvtCache;

struct FSFile {
    FSFile *prev;
    FSFile *next;
    FSArc *arc;
    u32 stat;
    u32 command;
    u32 error;
    OSThreadQueue queue;
    u32 w20;
    s32 start;
    s32 end;
    s32 pos;
    u32 a30;
    u32 a34;
    u32 a38;
    u32 a3c;
    u32 a40;
    FSDirPos *a44;
};

struct FSArc {
    u32 name;
    FSArc *next;
    FSArc *prev;
    OSThreadQueue queue;
    OSThreadQueue queue2;
    u32 flag;
    struct {
        FSFile *prev;
        FSFile *next;
    } list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_orig;
    u32 fnt_orig;
    void *load_mem;
    int (*read_orig)(FSArc *, void *, u32, u32);
    int (*write)(FSArc *, void *, u32, u32);
    int (*read)(FSArc *, void *, u32, u32);
    int (*proc)(FSFile *, u32);
    u32 proc_mask;
    u32 pad5c[2];
};

typedef struct {
    u32 id;
    u32 ram_address;
    u32 ram_size;
    u32 bss_size;
    void (**sinit_init)(void);
    void (**sinit_init_end)(void);
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} FSOverlayInfoHeader;

typedef struct {
    FSOverlayInfoHeader header;
    u32 target;
    u32 start;
    u32 length;
} FSOverlayInfo;

typedef struct {
    u32 w[23];
} MD5Context;

typedef struct {
    u8 b[20];
} Digest20;

typedef struct DtorEntry DtorEntry;
struct DtorEntry {
    DtorEntry *next;
    void (*dtor)(void *);
    void *obj;
};

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
extern void func_02000934(u32 addr);
extern void func_0206d49c(void);
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
u32 func_02119f8c(void);
u32 func_02119f84(void);
u32 func_0211a024(void);
int func_0211a02c(FSArc *arc, void *dst, u32 src, u32 len);
void func_0211a078(FSArc *arc);
void FS_InitFile(FSFile *file);
void FSi_InitRom(u32 dma);
BOOL FS_OpenFileFast(FSFile *file, FSFileID id);
BOOL FS_OpenFileDirect(FSFile *file, FSArc *arc, u32 start, u32 end, int id);
BOOL FS_ConvertPathToFileID(FSFileID *id, const char *path);
BOOL FSi_FindPath(FSFile *file, const char *path, FSFileID *id, FSDirPos *pos);
s32 FSi_ReadFileCore(FSFile *file, void *dst, s32 len, BOOL async);
s32 func_021198b4(FSFile *file, void *dst, s32 len);
BOOL FS_CloseFile(FSFile *file);
BOOL FS_WaitAsync(FSFile *file);
int FSi_ExecuteSyncCommand(FSFile *file);
FSFile *FSi_NextCommand(volatile FSArc *arc);
void FSi_ExecuteAsyncCommand(FSFile *file);
BOOL FSi_CompareDigest(const u8 *expected, const void *data, u32 len);
void func_0211a258(FSOverlayInfoHeader *h);
BOOL FS_LoadOverlayImage(FSOverlayInfo *p);
BOOL FS_LoadOverlayInfo(FSOverlayInfo *p, int target, u32 id);
BOOL FS_UnloadOverlayImage(FSOverlayInfo *p);
void FS_EndOverlay(FSOverlayInfo *p);
FSFileID FS_GetOverlayFileID(const FSOverlayInfoHeader *h);
void FS_ClearOverlayImage(FSOverlayInfoHeader *h);
u32 FSi_GetOverlayBinarySize(const FSOverlayInfoHeader *h);

// FSi_LoadOverlayImage
BOOL FS_LoadOverlayImage(FSOverlayInfo *p) {
    FSFile file;
    FSFileID id;
    u32 len;
    FS_InitFile(&file);
    id = FS_GetOverlayFileID(&p->header);
    if (!FS_OpenFileFast(&file, id)) return 0;
    len = FSi_GetOverlayBinarySize(&p->header);
    FS_ClearOverlayImage(&p->header);
    if (len != func_021198b4(&file, (void *)p->header.ram_address, len)) {
        FS_CloseFile(&file);
        return 0;
    }
    FS_CloseFile(&file);
    return 1;
}

// FSi_CheckOverlayDigest
BOOL FSi_CompareDigest(const u8 *expected, const void *data, u32 len) {
    u8 digest[20];
    u8 key[64];
    u32 i;
    MI_CpuFill8(digest, 0, 20);
    MI_CpuCopy8(data_0213bffc, key, data_0213c000);
    func_0211aeb4(digest, data, len, key, data_0213c000);
    for (i = 0; i < 20; i += 4) {
        if (*(u32 *)(digest + i) != *(u32 *)(expected + i)) break;
    }
    return i == 20;
}

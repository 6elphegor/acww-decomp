// mwcc-flags: -nothumb -O4,p
// NitroSDK FS (fs_file / fs_archive / fs_overlay) + MATH_CalcHMACMD5, autoload_2 0x02119434-0x02119de4. ARM code.
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

extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_02113720(OSThreadQueue *);
extern void func_021136a0(OSThreadQueue *);
extern void func_02115fb4(void *dst, u32 v, u32 n);
extern void func_02116048(const void *src, void *dst, u32 n);
extern int func_0211802c(FSFile *file, u32 cmd);
extern void func_021181a8(FSFile *file, u32 result);
extern void func_02118be8(FSArc *arc, u32 result);
extern void func_02118c68(FSArc *arc, int (*proc)(FSFile *, u32), u32 mask);
extern void func_02119020(FSArc *arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                          int (*read)(FSArc *, void *, u32, u32), int (*write)(FSArc *, void *, u32, u32));
extern void func_02119130(FSArc *arc, const char *name, int len);
extern FSArc *func_021191f0(const char *name, int len);
extern void func_02119240(FSArc *arc);
extern BOOL func_02119278(FSFile *file, u32 cmd);
extern u32 func_021123d0(void);
extern void func_0211d6a0(u32);
extern void func_0211d6c0(u32);
extern void func_0211e0ac(void);
extern void func_0211e130(u32 dma, u32 src, void *dst, u32 len, void (*cb)(FSArc *), FSArc *arg, BOOL async);
extern void func_021145cc(u32 addr, u32 len);
extern void func_02114594(u32 addr, u32 len);
extern void func_02114608(u32 addr, u32 len);
extern void func_02000934(u32 addr);
extern void func_0206d49c(void);
extern void func_0211aeb4(void *digest, const void *data, u32 len, const void *key, u32 keylen);
extern void func_0211ae74(MD5Context *ctx);
extern void func_0211ad80(MD5Context *ctx, const void *data, u32 len);
extern void func_0211acbc(void *digest, MD5Context *ctx);

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

int func_02119f94(FSFile *file, u32 cmd);
u32 func_02119f8c(void);
u32 func_02119f84(void);
u32 func_0211a024(void);
int func_0211a02c(FSArc *arc, void *dst, u32 src, u32 len);
void func_0211a078(FSArc *arc);
void func_02119d78(FSFile *file);
void func_02119de4(u32 dma);
BOOL func_02119a78(FSFile *file, FSFileID id);
BOOL func_02119af4(FSFile *file, FSArc *arc, u32 start, u32 end, int id);
BOOL func_02119b4c(FSFileID *id, const char *path);
BOOL func_02119c18(FSFile *file, const char *path, FSFileID *id, FSDirPos *pos);
s32 func_02119b90(FSFile *file, void *dst, s32 len, BOOL async);
s32 func_021198b4(FSFile *file, void *dst, s32 len);
BOOL func_021199e0(FSFile *file);
BOOL func_02119910(FSFile *file);
int func_02119434(FSFile *file);
FSFile *func_02119520(volatile FSArc *arc);
void func_0211947c(FSFile *file);
BOOL func_0211a358(const u8 *expected, const void *data, u32 len);
void func_0211a258(FSOverlayInfoHeader *h);
BOOL func_0211a3fc(FSOverlayInfo *p);
BOOL func_0211a49c(FSOverlayInfo *p, int target, u32 id);
BOOL func_0211a138(FSOverlayInfo *p);
void func_0211a154(FSOverlayInfo *p);
FSFileID func_0211a6c0(const FSOverlayInfoHeader *h);
void func_0211a6e8(FSOverlayInfoHeader *h);
u32 func_0211a72c(const FSOverlayInfoHeader *h);

// FS_Init
void func_02119da8(u32 dma) {
    if (data_021fea78) return;
    data_021fea78 = 1;
    func_02119de4(dma);
}

// FS_InitFile
void func_02119d78(FSFile *file) {
    file->next = file->prev = 0;
    file->queue.head = file->queue.tail = 0;
    file->arc = 0;
    file->command = 14;
    file->stat = 0;
}

// FSi_SetPathCommand
BOOL func_02119c18(FSFile *file, const char *path, FSFileID *id, FSDirPos *dirpos) {
    FSDirPos pos;
    int i;
    u8 c = path[0];
    if (c == '/' || c == '\\') {
        pos.u.d.own_id = 0;
        pos.arc = data_021fea6c.arc;
        pos.pos = 0;
        pos.u.d.index = 0;
        path++;
    } else {
        pos = data_021fea6c;
        for (i = 0; i <= 3; i++) {
            u8 ch = path[i];
            if (ch == 0 || ch == '/' || ch == '\\') break;
            if (ch == ':') {
                FSArc *arc = func_021191f0(path, i);
                if (!arc) return 0;
                if (!IsLoaded(arc)) return 0;
                pos.arc = arc;
                pos.pos = 0;
                pos.u.d.index = 0;
                pos.u.d.own_id = 0;
                path += i + 1;
                ch = *path;
                if (ch == '/' || ch == '\\') path++;
                break;
            }
        }
    }
    file->arc = pos.arc;
    file->a3c = (u32)path;
    *(FSDirPos *)&file->a30 = pos;
    if (dirpos) {
        file->a40 = 1;
        file->a44 = dirpos;
    } else {
        file->a40 = 0;
        file->a44 = (FSDirPos *)id;
    }
    return func_02119278(file, 4);
}

// FSi_ReadFileCore
s32 func_02119b90(FSFile *file, void *dst, s32 len, BOOL async) {
    s32 pos = file->pos;
    s32 rest = file->end - pos;
    s32 len_org = len;
    file->a30 = (u32)dst;
    if (len > rest) len = rest;
    if (len < 0) len = 0;
    file->a34 = len_org;
    file->a38 = len;
    if (!async) file->stat |= 4;
    func_02119278(file, 0);
    if (!async) {
        len = func_02119910(file) ? file->pos - pos : -1;
    }
    return len;
}

// FS_ConvertPathToFileID
BOOL func_02119b4c(FSFileID *id, const char *path) {
    FSFile tmp;
    func_02119d78(&tmp);
    return func_02119c18(&tmp, path, id, 0) ? 1 : 0;
}

// FS_OpenFileDirect
BOOL func_02119af4(FSFile *file, FSArc *arc, u32 start, u32 end, int id) {
    file->arc = arc;
    file->a38 = id;
    file->a30 = start;
    file->a34 = end;
    if (!func_02119278(file, 7)) return 0;
    file->stat |= 0x10;
    file->stat &= ~0x20;
    return 1;
}

// FS_OpenFileFast
BOOL func_02119a78(FSFile *file, FSFileID id) {
    if (id.arc == 0) return 0;
    file->arc = id.arc;
    *(FSFileID *)&file->a30 = id;
    if (!func_02119278(file, 6)) return 0;
    file->stat |= 0x10;
    file->stat &= ~0x20;
    return 1;
}

// FS_OpenFile
BOOL func_02119a28(FSFile *file, const char *path) {
    FSFileID id;
    if (func_02119b4c(&id, path) && func_02119a78(file, id)) return 1;
    return 0;
}

// FS_CloseFile
BOOL func_021199e0(FSFile *file) {
    if (!func_02119278(file, 8)) return 0;
    file->arc = 0;
    file->command = 14;
    file->stat &= ~0x30;
    return 1;
}

// FS_WaitAsync
BOOL func_02119910(FSFile *file) {
    BOOL done = 0;
    u32 irq = func_01ffa2ec();
    if (IsBusy(file)) {
        done = IsIdle(file);
        if (done) {
            file->stat |= 4;
            do {
                func_02113720(&file->queue);
            } while (!(file->stat & 0x40));
        } else {
            do {
                func_02113720(&file->queue);
            } while (IsBusy(file));
        }
    }
    func_01ffa3d4(irq);
    if (done) return func_02119434(file);
    return file->error == 0;
}

// FS_CancelFile
void func_021198c4(FSFile *file) {
    u32 irq = func_01ffa2ec();
    if (IsBusy(file)) {
        file->stat |= 2;
        file->arc->flag |= 0x20;
    }
    func_01ffa3d4(irq);
}

// FS_ReadFile
s32 func_021198b4(FSFile *file, void *dst, s32 len) {
    return func_02119b90(file, dst, len, 0);
}

// FS_SeekFile
BOOL func_02119848(FSFile *file, s32 pos, u32 origin) {
    switch (origin) {
    case 0:
        pos += file->start;
        break;
    case 1:
        pos += file->pos;
        break;
    case 2:
        pos += file->end;
        break;
    default:
        return 0;
    }
    if (pos < file->start) pos = file->start;
    if (pos > file->end) pos = file->end;
    file->pos = pos;
    return 1;
}

// FS_SetCurrentDirectory
BOOL func_021197f4(const char *path) {
    FSDirPos pos;
    FSFile tmp;
    func_02119d78(&tmp);
    if (!func_02119c18(&tmp, path, 0, &pos)) return 0;
    data_021fea6c = pos;
    return 1;
}

// FSi_GetPackedName
u32 func_02119790(const char *name, int len) {
    u32 ret = 0;
    u32 d;
    int i;
    if (len <= 3) {
        for (i = 0; i < len; i++) {
            u32 c = (u8)name[i];
            if (c == 0) break;
            d = c - 'A';
            if (d <= 'Z' - 'A') c = d + 'a';
            else c = d + 'A';
            ret |= c << (i * 8);
        }
    }
    return ret;
}

int func_02119768(FSArc *arc, void *dst, u32 src, u32 len) {
    func_02116048((void *)(arc->base + src), dst, len);
    return 0;
}

int func_0211973c(FSArc *arc, void *src, u32 dst, u32 len) {
    func_02116048(src, (void *)(arc->base + dst), len);
    return 0;
}

int func_02119718(FSArc *arc, void *dst, u32 src, u32 len) {
    func_02116048((void *)src, dst, len);
    return 0;
}

// FSi_NextCommand
FSFile *func_02119520(volatile FSArc *arc) {
    FSFile file;
    FSFile *cur;
    u32 irq = func_01ffa2ec();
    if (arc->flag & 0x20) {
        arc->flag &= ~0x20;
        cur = arc->list.next;
        if (cur) {
            do {
                FSFile *next = cur->next;
                if (IsCanceled(cur)) {
                    if (arc->list.next == cur) arc->list.next = next;
                    func_021181a8(cur, 3);
                    if (next == 0) next = arc->list.next;
                }
                cur = next;
            } while (cur);
        }
    }
    if (!(arc->flag & 0x40) && !(IsSuspended(arc)) && (cur = arc->list.next) != 0) {
        BOOL start = !(IsStarted(arc));
        if (start) arc->flag |= 0x10;
        func_01ffa3d4(irq);
        if (start && (arc->proc_mask & 0x200)) arc->proc(cur, 9);
        irq = func_01ffa2ec();
        cur->stat |= 0x40;
        if (IsBlocking(cur)) {
            func_021136a0(&cur->queue);
            func_01ffa3d4(irq);
            return 0;
        }
        func_01ffa3d4(irq);
        return cur;
    }
    if (arc->flag & 0x10) {
        arc->flag &= ~0x10;
        if (arc->proc_mask & 0x400) {
            func_02119d78(&file);
            file.arc = (FSArc *)arc;
            arc->proc(&file, 10);
        }
    }
    if (arc->flag & 0x40) {
        arc->flag &= ~0x40;
        arc->flag |= 8;
        func_021136a0((OSThreadQueue *)&arc->queue2);
    }
    func_01ffa3d4(irq);
    return 0;
}

// FSi_ExecuteSyncCommand
void func_0211947c(FSFile *file) {
    FSArc *arc = file->arc;
    while (file) {
        u32 irq = func_01ffa2ec();
        file->stat |= 0x40;
        if (IsBlocking(file)) {
            func_021136a0(&file->queue);
            func_01ffa3d4(irq);
            return;
        }
        file->stat |= 8;
        func_01ffa3d4(irq);
        if (func_0211802c(file, file->command) == 6) return;
        file = func_02119520(arc);
    }
}

// FSi_EndCommand
int func_02119434(FSFile *file) {
    func_021181a8(file, func_0211802c(file, file->command));
    {
        FSFile *next = func_02119520(file->arc);
        if (next) func_0211947c(next);
    }
    return file->error == 0;
}

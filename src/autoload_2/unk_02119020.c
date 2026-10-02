// mwcc-flags: -nothumb -O4,p
// NitroSDK FS (fs_file.c / fs_archive.c / fs_command.c region), autoload_2 0x0211802c-0x02119434. ARM code.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct FSArc FSArc;
typedef struct FSFile FSFile;
typedef int (*FSIoFunc)(FSArc *, void *, u32, u32);
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
    FSDirPos pos;
    u32 is_dir;
    u32 name_len;
    char name[128];
} FSEntry;
typedef struct {
    FSArc *arc;
    u32 pos;
} FSStream;

struct FSFile {
    FSFile *prev;
    FSFile *next;
    FSArc *arc;
    volatile u32 stat;
    u32 command;
    u32 error;
    OSThreadQueue queue;
    union {
        FSDirPos pos;
        struct {
            u32 w20, w24, w28;
        } w;
    } p;
    u32 parent;
    union {
        struct {
            u32 w30;
            u32 w34;
            u32 w38;
        } w;
        FSDirPos pos;
        struct {
            void *buf;
            u32 buf_size;
            u16 len;
            u16 dirid;
        } path;
        struct {
            FSEntry *ent;
            u32 skip;
        } rdent;
        struct {
            u32 a30;
            u16 id34;
            u16 id36;
            u32 a38;
        } rd;
    } a;
    u32 w3c;
    u32 w40;
    FSDirPos *w44;
};

struct FSArc {
    u32 name;
    FSArc *next;
    FSArc *prev;
    OSThreadQueue queue;
    OSThreadQueue queue2;
    volatile u32 flag;
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
    FSIoFunc read_orig;
    FSIoFunc write;
    FSIoFunc read;
    int (*proc)(FSFile *, u32);
    u32 proc_mask;
    u32 pad5c[2];
};

extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_02113720(OSThreadQueue *);
extern void func_021136a0(OSThreadQueue *);
extern void func_02115fb4(void *dst, u32 v, u32 n);
extern void func_02116048(const void *src, void *dst, u32 n);
extern void func_02119d78(FSFile *);
extern BOOL func_02119af4(FSFile *, FSArc *, u32, u32, int);
extern s32 func_021198b4(FSFile *, void *, s32);
extern void func_021199e0(FSFile *);
extern u32 func_02119790(const char *, int);
extern FSFile *func_02119520(FSArc *);
extern void func_0211947c(FSFile *);
extern int func_02119434(FSFile *);
extern int func_02119718(FSArc *, void *, u32, u32);
extern int func_02119768(FSArc *, void *, u32, u32);
extern int func_0211973c(FSArc *, void *, u32, u32);
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

int func_0211802c(FSFile *file, u32 cmd);
void func_021181a8(FSFile *file, u32 result);
int func_0211820c(void);
int func_02118214(FSFile *file);
int func_0211823c(FSFile *file);
int func_021182b8(FSFile *file);
int func_02118678(FSFile *file);
int func_02118894(FSFile *file);
int func_021189a4(FSFile *file);
int func_02118a3c(FSFile *file);
int func_02118a3c(FSFile *file);
int func_02118a74(FSFile *file);
int func_02118aac(FSFile *file, u32 id);
void func_02118ae0(FSStream *s, void *dst, u32 len);
int func_02118b84(const char *a, const char *b, u32 n);
void func_02118be8(FSArc *arc, u32 result);
void func_02118c68(FSArc *arc, int (*proc)(FSFile *, u32), u32 mask);
BOOL func_02118c88(FSArc *arc);
BOOL func_02118d04();
void *func_02118d94(FSArc *arc);
u32 func_02118e2c(FSArc *arc, void *mem, u32 mem_max);
BOOL func_02118f58(FSArc *arc);
BOOL func_02119020(FSArc *arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size, FSIoFunc rd, FSIoFunc wr);
void func_02119098(FSArc *arc);
BOOL func_02119130(FSArc *arc, const char *name, int len);
FSArc *func_021191f0(const char *name, int len);
void func_02119240(FSArc *arc);
BOOL func_02119278(FSFile *file, u32 cmd);

// FSi_SendCommand
BOOL func_02119278(FSFile *file, u32 cmd) {
    FSArc *arc = file->arc;
    u32 bit;
    u32 irq;
    FSFile *q;
    u32 irq2;
    file->command = cmd;
    file->error = 2;
    bit = 1 << cmd;
    file->stat |= 1;
    irq = func_01ffa2ec();
    if (arc->flag & 0x80) {
        func_021181a8(file, 3);
        func_01ffa3d4(irq);
        return 0;
    }
    q = (FSFile *)&arc->list;
    if (bit & 0x1fc) {
        file->stat |= 4;
    }
    {
        FSFile *prev = file->prev;
        FSFile *next = file->next;
        if (prev) prev->next = next;
        if (next) next->prev = prev;
    }
    {
        while (q->next) q = q->next;
        q->next = file;
        file->prev = q;
        file->next = 0;
    }
    if (FSi_IsSuspended(arc) == 0 && (arc->flag & 0x10) == 0) {
        arc->flag |= 0x10;
        func_01ffa3d4(irq);
        if (arc->proc_mask & 0x200) {
            arc->proc(file, 9);
        }
        irq2 = func_01ffa2ec();
        file->stat |= 0x40;
        if (FSi_IsBlocking(file) == 0) {
            func_01ffa3d4(irq2);
            func_0211947c(file);
            return 1;
        }
        func_01ffa3d4(irq2);
    } else {
        if (FSi_IsBlocking(file) == 0) {
            func_01ffa3d4(irq);
            return 1;
        }
        do {
            func_02113720(&file->queue);
        } while (!(file->stat & 0x40));
        func_01ffa3d4(irq);
    }
    return func_02119434(file);
}

// FS_InitArchive
void func_02119240(FSArc *arc) {
    func_02115fb4(arc, 0, 0x5c);
    arc->queue.tail = 0;
    arc->queue.head = arc->queue.tail;
    arc->queue2.tail = 0;
    arc->queue2.head = arc->queue2.tail;
}

// FS_FindArchive
FSArc *func_021191f0(const char *name, int len) {
    u32 pack = func_02119790(name, len);
    u32 irq = func_01ffa2ec();
    FSArc *arc;
    for (arc = data_021fea68; arc && arc->name != pack; arc = arc->next) {
    }
    func_01ffa3d4(irq);
    return arc;
}

// FS_RegisterArchiveName
BOOL func_02119130(FSArc *arc, const char *name, int len) {
    BOOL ret = 0;
    u32 irq = func_01ffa2ec();
    if (!func_021191f0(name, len)) {
        FSArc *p = data_021fea68;
        if (!p) {
            data_021fea68 = arc;
            data_021fea6c.arc = arc;
            data_021fea6c.pos = 0;
            data_021fea6c.u.d.index = 0;
            data_021fea6c.u.d.own_id = 0;
        } else {
            while (p->next) p = p->next;
            p->next = arc;
            arc->prev = p;
        }
        arc->name = func_02119790(name, len);
        ret = 1;
        arc->flag |= 1;
    }
    func_01ffa3d4(irq);
    return ret;
}

// FS_ReleaseArchiveName
void func_02119098(FSArc *arc) {
    if (arc->name) {
        u32 irq = func_01ffa2ec();
        if (arc->next) arc->next->prev = arc->prev;
        if (arc->prev) arc->prev->next = arc->next;
        arc->name = 0;
        arc->prev = 0;
        arc->next = arc->prev;
        arc->flag &= ~1;
        if (data_021fea6c.arc == arc) {
            data_021fea6c.pos = 0;
            data_021fea6c.arc = data_021fea68;
            data_021fea6c.u.d.index = 0;
            data_021fea6c.u.d.own_id = 0;
        }
        func_01ffa3d4(irq);
    }
}

// FS_LoadArchive
BOOL func_02119020(FSArc *arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size, FSIoFunc rd, FSIoFunc wr) {
    FSIoFunc r;
    FSIoFunc w;
    arc->base = base;
    arc->fat_size = fat_size;
    arc->fat_orig = fat;
    arc->fat = arc->fat_orig;
    arc->fnt_size = fnt_size;
    arc->fnt_orig = fnt;
    arc->fnt = arc->fnt_orig;
    r = rd;
    if (r == 0) r = func_02119768;
    arc->read_orig = r;
    w = wr;
    if (w == 0) w = func_0211973c;
    arc->write = w;
    arc->read = arc->read_orig;
    arc->load_mem = 0;
    arc->flag |= 2;
    return 1;
}

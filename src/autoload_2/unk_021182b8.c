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

typedef struct {
    FSArc *arc;
    u32 file_id;
} FSFileID2;
typedef struct {
    union {
        FSFileID2 file_id;
        FSDirPos dir_id;
    } u;
    u32 is_dir;
    u32 name_len;
    char name[128];
} FSDirEntry2;
int func_02118678(FSFile *file) {
    const u8 *path = (const u8 *)file->w3c;
    const BOOL find_directory = file->w40;
    func_0211802c(file, 2);
    for (; *path; path += (*path ? 1 : 0)) {
        u32 is_directory;
        int name_len = 0;
        while ((is_directory = *(u8 *)(path + name_len)), FSi_IsPathChar(is_directory) != 0) {
            ++name_len;
        }
        if (is_directory || find_directory) {
            is_directory = 1;
        }
        if (name_len == 0) {
            return 1;
        } else if (*path == '.') {
            if (name_len == 1) {
                path += 1;
                continue;
            } else if ((name_len == 2) & (path[1] == '.')) {
                if (file->p.pos.u.d.own_id != 0) {
                    func_02118aac(file, file->parent);
                }
                path += 2;
                continue;
            }
        }
        if (name_len > 127) {
            return 1;
        } else {
            FSDirEntry2 etr;
            file->a.rdent.ent = (FSEntry *)&etr;
            file->a.rdent.skip = 0;
            for (;;) {
                if (func_0211802c(file, 3) != 0) return 1;
                if ((is_directory != etr.is_dir) || (name_len != etr.name_len) || func_02118b84((const char *)path, etr.name, (u32)name_len)) continue;
                if (is_directory) {
                    path += name_len;
                    file->a.pos = etr.u.dir_id;
                    func_0211802c(file, 2);
                    break;
                } else {
                    if (find_directory) return 1;
                    *(FSFileID2 *)file->w44 = etr.u.file_id;
                    return 0;
                }
            }
        }
    }
    if (!find_directory) return 1;
    *file->w44 = file->p.pos;
    return 0;
}

int func_021182b8(FSFile *file) {
    FSEntry ent;
    FSFile tmp;
    FSArc *arc = file->arc;
    struct {
        void *buf;
        u32 buf_size;
        u16 len;
        u16 dirid;
    } *arg = (void *)&file->a.path;
    u32 dir;
    u32 target;
    char *buf;
    u32 len;
    u32 n;
    u32 i;
    u32 cnt;
    func_02119d78(&tmp);
    tmp.arc = file->arc;
    if (FSi_IsDirOnly(file) != 0) {
        dir = file->p.pos.u.d.own_id;
        target = 0x10000;
    } else {
        target = file->p.w.w20;
        if (arg->len != 0) {
            dir = arg->dirid;
        } else {
            i = 0;
            cnt = 0;
            dir = 0x10000;
            do {
                func_02118aac(&tmp, i);
                if (i == 0) cnt = tmp.parent;
                tmp.a.rdent.ent = &ent;
                tmp.a.rdent.skip = 1;
                if (func_0211802c(&tmp, 3) == 0) {
                    for (;;) {
                        if (ent.is_dir == 0 && ent.pos.u.file_id == target) {
                            dir = tmp.p.pos.u.d.own_id;
                            break;
                        }
                        if (func_0211802c(&tmp, 3) != 0) break;
                    }
                }
                if (dir != 0x10000) break;
                i++;
            } while (i < cnt);
        }
    }
    if (dir == 0x10000) {
        arg->len = 0;
        return 1;
    }
    if (arg->len == 0) {
        cnt = 0;
        if (arc->name <= 0xff) {
            cnt += 1;
        } else if (arc->name <= 0xff00) {
            cnt += 2;
        } else {
            cnt += 3;
        }
        cnt += 2;
        if (target != 0x10000) cnt += ent.name_len;
        i = dir;
        if (i != 0) {
            func_02118aac(&tmp, dir);
            do {
                func_02118aac(&tmp, tmp.parent);
                tmp.a.rdent.ent = &ent;
                tmp.a.rdent.skip = 1;
                if (func_0211802c(&tmp, 3) == 0) {
                    for (;;) {
                        if (ent.is_dir != 0 && ent.pos.u.d.own_id == i) {
                            cnt += ent.name_len + 1;
                            break;
                        }
                        if (func_0211802c(&tmp, 3) != 0) break;
                    }
                }
                i = tmp.p.pos.u.d.own_id;
            } while (i != 0);
        }
        arg->len = cnt + 1;
        arg->dirid = dir;
    }
    buf = (char *)arg->buf;
    if (buf == 0) return 0;
    len = arg->len;
    if (arg->buf_size < len) return 1;
    {
    u32 pos = 0;
    u32 n = FSi_NameLen2(arc->name);
    func_02116048(arc, buf + pos, n);
    pos += n;
    func_02116048(data_0213bff4, buf + pos, 2);
    pos += 2;
    }
    func_02118aac(&tmp, dir);
    if (target != 0x10000) {
        tmp.a.rdent.ent = &ent;
        tmp.a.rdent.skip = 0;
        if (func_0211802c(&tmp, 3) == 0) {
            for (;;) {
                if (ent.is_dir == 0 && ent.pos.u.file_id == target) break;
                if (func_0211802c(&tmp, 3) != 0) break;
            }
        }
        target = ent.name_len + 1;
        func_02116048(ent.name, buf + len - target, target);
        len -= target;
    } else {
        *(buf + len - 1) = 0;
        len -= 1;
    }
    if (dir != 0) {
        do {
            func_02118aac(&tmp, tmp.parent);
            tmp.a.rdent.ent = &ent;
            tmp.a.rdent.skip = 0;
            *(buf + len - 1) = '/';
            len -= 1;
            if (func_0211802c(&tmp, 3) == 0) {
                for (;;) {
                    if (ent.is_dir != 0 && ent.pos.u.d.own_id == dir) {
                        n = ent.name_len;
                        func_02116048(ent.name, buf + len - n, n);
                        len -= n;
                        break;
                    }
                    if (func_0211802c(&tmp, 3) != 0) break;
                }
            }
            dir = tmp.p.pos.u.d.own_id;
        } while (dir != 0);
    }
    return 0;
}

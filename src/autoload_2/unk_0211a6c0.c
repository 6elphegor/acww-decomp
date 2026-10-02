// mwcc-flags: -nothumb -O4,p
// NitroSDK FS (fs_file / fs_archive / fs_overlay) + MATH_CalcHMACMD5, autoload_2 0x0211a6c0-0x0211a8d4. ARM code.
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

// MATH_CalcHMACMD5
void func_0211a748(u8 *digest, const u8 *data, u32 dataLen, const u8 *key, int keyLen) {
    u8 ipad[64];
    u8 opad[64];
    u8 hash[16];
    u8 *hp = hash;
    MD5Context ctx;
    int i;
    if (digest == 0) return;
    if (data == 0) return;
    if (dataLen == 0) return;
    if (key == 0) return;
    if (keyLen == 0) return;
    if (keyLen > 64) {
        func_0211ae74(&ctx);
        func_0211ad80(&ctx, key, keyLen);
        func_0211acbc(hp, &ctx);
        key = hp;
        keyLen = 16;
    }
    for (i = 0; i < keyLen; i++) {
        ipad[i] = *key ^ 0x36;
        opad[i] = *key++ ^ 0x5c;
    }
    for (; i < 64; i++) {
        ipad[i] = 0x36;
        opad[i] = 0x5c;
    }
    func_0211ae74(&ctx);
    func_0211ad80(&ctx, ipad, 64);
    func_0211ad80(&ctx, data, dataLen);
    func_0211acbc(hp, &ctx);
    func_0211ae74(&ctx);
    func_0211ad80(&ctx, opad, 64);
    func_0211ad80(&ctx, hp, 16);
    func_0211acbc(digest, &ctx);
}

// FSi_GetOverlayBinSize
u32 func_0211a72c(const FSOverlayInfoHeader *h) {
    return (h->flag & 1) ? h->compressed : h->ram_size;
}

// FSi_ClearOverlayImage
void func_0211a6e8(FSOverlayInfoHeader *h) {
    u32 ram = h->ram_address;
    u32 size = h->ram_size;
    u32 end = size + h->bss_size;
    func_02114608(ram, end);
    func_02114594(ram, end);
    func_02115fb4((void *)(ram + size), 0, end - size);
}

// FSi_GetOverlayFileID
FSFileID func_0211a6c0(const FSOverlayInfoHeader *h) {
    FSFileID id;
    id.arc = &data_021fea94;
    id.file_id = h->file_id;
    return id;
}

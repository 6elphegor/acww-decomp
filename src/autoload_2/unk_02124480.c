// mwcc-flags: -nothumb -O4,p
// NitroSDK MB (multiboot parent) helpers, autoload_2 0x02124480-0x02124830. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef signed char s8;
typedef int BOOL;

typedef struct FSFile {
    u32 w[18];
} FSFile; // 0x48 bytes; the start/end offsets live at w[9] / w[10]

// parent-info buffer (one per game), 0x4c0 bytes
typedef struct MBBuf {
    u8 pad0[0x220];
    u8 f220[0x16];
    u8 f236;
    u8 pad237;
    u8 f238[0x60];
    u8 f298[0xc0];
    u8 f358;
    u8 pad359;
    u16 f35a;
    u16 f35c;
    u8 f35e[0x14a];
    u8 f4a8[8];
    u16 f4b0;
    u8 f4b2;
    u8 f4b3;
    u8 f4b4;
    u8 f4b5;
    u8 pad4b6[2];
    u32 f4b8;
    struct MBBuf *next;
} MBBuf;

typedef struct MBWork {
    MBBuf *head;
    MBBuf *cur;
    void *p8;
    u8 state;
    u8 pd;
    u8 pe;
    u8 pf;
    u8 p10;
    u8 p11;
} MBWork;

// beacon / MP send header at 0x021fffa0
typedef struct MBBeacon {
    u32 w0;
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
    u16 h8;
    u8 ha;
    u8 hb;
    union {
        u8 b;
        u16 h;
    } c;
    u16 he;
    u8 pad10[0x68 - 0x10];
    u8 f68[8];
} MBBeacon;

typedef struct MBSeg {
    u32 addr;
    u32 size;
} MBSeg;

typedef struct MBRomHeader {
    u32 w[9];
    u32 arm9Entry;
    MBSeg arm9;
    u32 arm7Off;
    u32 arm7Entry;
    MBSeg arm7;
    u8 rest[0x160 - 0x40];
} MBRomHeader;

typedef struct MBRange {
    u32 start;
    u32 addr;
    u32 size;
    u32 flags;
} MBRange;

typedef struct MBSegInfo {
    u32 arm9Entry;
    u32 arm7Entry;
    u32 pad8;
    MBRange r[3];
    u8 hdr[0x88];
} MBSegInfo;

typedef struct MBEnt {
    MBSegInfo seg;
    u8 name[0x20];
    MBBuf buf;
    u8 x[0x14];
    const u8 *key;
    const MBRomHeader *info;
    u8 pad5c0[6];
    u16 f5c6;
    u8 pad5c8[2];
    u8 used;
    u8 pad5cb;
    const u8 *p0;
    const u8 *p1;
} MBEnt;

typedef struct MBBig {
    u8 pad0[0x1300];
    u8 f1300[0x224];
    u8 count;
    u8 pad1525[0x1788 - 0x1525];
    MBEnt ent[16];
} MBBig;

extern MBBig *data_0220001c;
extern u8 data_021fff80;
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32 irq);
extern BOOL func_02124888(void);
extern BOOL func_02123368(void *dst, void *seg);
extern BOOL func_021269f8(void);
extern void func_021269e4(void *p);
extern void func_02126a14(void *p, u32 len);

extern MBBeacon data_021fffa0;
extern u16 data_021fffa8[];
extern u8 data_021fffae[];
extern MBWork data_021fff8c;
extern void (*data_021fff88)(u32);
extern u32 data_021fff84;
extern u8 data_021fffb0[4][22];
extern u32 func_02123edc(const u16 *p, int len);
extern void func_02121a24(u32 a, void *p, u32 len, u32 b, u32 c, u32 d);

extern void func_02115e30(u32 value, void *dst, u32 size);
extern void func_02115e48(const void *src, void *dst, u32 size);
extern void func_02115ea8(u32 value, void *dst, u32 size);
extern void func_02119d78(FSFile *file);
extern BOOL func_02119a28(FSFile *file, const char *path);
extern s32 func_021198b4(FSFile *file, void *dst, s32 len);
extern BOOL func_02119848(FSFile *file, s32 pos, u32 origin);
extern void func_021145cc(void *addr, u32 len);
extern void func_021145f0(void);
extern void func_02115fb4(void *dst, u32 value, u32 size);
extern void func_02116048(const void *src, void *dst, u32 size);
extern void func_0206d49c(void);
extern u32 data_0213a3ec[3];
extern void func_021235fc(MBSegInfo *dst, const MBRomHeader *rom);
extern void func_02123444(const MBRomHeader *rom, const u32 *mode, MBRange *out, u32 *limit);
extern void func_021267d4(void *ctx);
extern void func_02126760(void *ctx, u32 addr, u32 len, void *data, u32 mode);
extern void func_021145cc(void *addr, u32 len);
typedef struct MBRegion {
    u32 start;
    u32 len;
} MBRegion;
extern MBRegion *data_0213c204;
extern char data_0213c208[];
extern u8 AutoloadCallback[];
extern void *func_021191f0(const char *name, int len);
extern BOOL func_02119af4(FSFile *file, void *arc, u32 top, u32 bottom, int id);
extern void func_02124930(void *p, u32 a, u32 b);
extern void func_021199e0(FSFile *file);
extern u32 func_021245c4(const u16 *s);
extern BOOL func_02124670(const char *path, void *dst, u32 isChar);

extern void func_02124528(void);
extern BOOL func_02124408(void);
extern void func_021243bc(void);
extern void func_0212423c(u32 a, u32 b, u32 c);
extern void func_0212420c(void);
extern void func_02123f60(u32 a, u32 b, u32 c);
extern void func_02123958(u32 *seg, u32 lo, u32 hi, int clear);

extern void func_02124724(MBBuf *b, const u32 *info, const void *name);
extern BOOL func_02124670(const char *path, void *dst, u32 isChar);
extern void func_021245ec(MBBuf *b, const void *src, u32 mask, u32 w);
extern u32 func_021245c4(const u16 *s);
extern void func_02124580(MBBuf *b);
extern void func_0212454c(void);
extern void func_02124528(void);
extern void func_02124480(u32 a, u32 b, u32 c);
extern BOOL func_02124408(void);
extern void func_021243bc(void);
extern void func_0212423c(u32 a, u32 b, u32 c);
extern void func_0212420c(void);
extern void func_02123f60(u32 a, u32 b, u32 c);
extern void func_02123f24(u32 a, u32 b, void *c);
extern u32 func_02123edc(const u16 *p, int len);
extern u32 func_02123e58(FSFile *file);
extern BOOL func_021239ec(FSFile *file, u32 *buf, u32 size);
extern void func_02123958(u32 *seg, u32 lo, u32 hi, int clear);
extern BOOL func_02123680(const u8 *key, const MBRomHeader *info);
extern void func_021235fc(MBSegInfo *dst, const MBRomHeader *rom);
extern void func_02123444(const MBRomHeader *rom, const u32 *mode, MBRange *out, u32 *limit);

// MB parent: fill a game-info buffer (name unverified, MBi_*-style)
void func_02124724(MBBuf *b, const u32 *info, const void *name) {
    volatile u16 zero16 = 0;
    u32 ok;
    func_02115e30(zero16, b, 0x4c0);
    b->f4b2 = 0;
    ok = func_02124670((const char *)info[3], (void *)b, 1) == 0;
    ok |= func_02124670((const char *)info[4], (void *)b, 0) == 0;
    if (ok) {
        volatile u32 zero32;
        b->f4b2 = 1;
        zero32 = 0;
        func_02115ea8(zero32, b, 0x220);
    }
    b->f4b8 = info[5];
    if (name != 0) func_02115e48(name, b->f220, 0x16);
    b->f236 = ((u8 *)info)[0x18];
    func_02115e48((const void *)info[1], b->f238, (u16)(func_021245c4((const u16 *)info[1]) << 1));
    func_02115e48((const void *)info[2], b->f298, 0xc0);
    b->f358 = 1;
    b->f35a = 1;
    b->f4b0 = 1;
}

// MB parent: read icon palette (0x20) / character (0x200) data from a file (icon palette 0x20 / character 0x200 bytes from a file)
BOOL func_02124670(const char *path, void *dst, u32 isChar) {
    FSFile f;
    u32 size = isChar ? 0x200 : 0x20;
    u8 *p = (u8 *)dst;
    if (isChar) p += 0x20;
    if (path == 0) return 0;
    func_02119d78(&f);
    if (func_02119a28(&f, path) == 0) return 0;
    if (size != f.w[10] - f.w[9]) {
        func_021199e0(&f);
        return 0;
    }
    func_021198b4(&f, p, size);
    func_021199e0(&f);
    return 1;
}

// MB parent: store the entry table and update counters
void func_021245ec(MBBuf *b, const void *src, u32 mask, u32 w) {
    int i;
    u8 n = 1;
    func_02115e48(src, b->f35e, 0x14a);
    for (i = 0; i < 15; i++) {
        if (mask & (2 << i)) n++;
    }
    b->f358 = n;
    b->f35a = mask | 1;
    b->f35c = w;
    b->f4b4++;
}

// string length of a UTF-16 string
u32 func_021245c4(const u16 *s) {
    u32 n = 0;
    while (*s++ != 0) n++;
    return n;
}

// MB parent: append a game-info buffer to the send list
void func_02124580(MBBuf *b) {
    if (data_021fff8c.head == 0) {
        data_021fff8c.head = b;
    } else {
        MBBuf *t = data_021fff8c.head;
        MBBuf *n = t->next;
        if (n != 0) {
            do {
                t = n;
                n = n->next;
            } while (n != 0);
        }
        t->next = b;
    }
    b->next = 0;
}

void func_0212454c(void) {
    data_021fff8c.head = 0;
    data_021fff8c.cur = 0;
    data_021fff8c.state = 1;
    data_021fff88 = 0;
    func_02124528();
}

void func_02124528(void) {
    data_021fff8c.pd = 0;
    data_021fff8c.pe = 0;
    data_021fff8c.pf = 0;
    data_021fff8c.p10 = 0;
    data_021fff8c.p11 = 0;
}

// MB parent: beacon send state machine step
void func_02124480(u32 a, u32 b, u32 c) {
    for (;;) {
        switch (data_021fff8c.state) {
        case 0:
        case 1:
            if (func_02124408() == 0) return;
            break;
        case 2:
            func_021243bc();
            break;
        case 3:
            func_0212423c(a, b, c);
            return;
        case 4:
            func_0212420c();
            break;
        case 5:
            func_02123f60(a, b, c);
            return;
        case 6:
        default:
            break;
        }
    }
}

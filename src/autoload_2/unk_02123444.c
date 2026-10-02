// mwcc-flags: -nothumb -O4,p
// NitroSDK MB (multiboot parent) helpers, autoload_2 0x02123444-0x021239ec. ARM code, mwcc 1.2/base.
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

// MB parent: clamp [lo, hi) to the segment, then fill/copy it
void func_02123958(u32 *seg, u32 lo, u32 hi, int clear) {
    u32 base = seg[0];
    u32 len = seg[3];
    if (lo < 0x4000) lo = 0x4000;
    if (hi > 0x8000) hi = 0x8000;
    if (lo < base) lo = base;
    if (hi > base + len) hi = base + len;
    if (lo >= hi) return;
    if (clear) {
        func_02115fb4((u8 *)seg[2] + lo, 0, hi - lo);
    } else {
        func_02116048((u8 *)seg[1] + lo, (u8 *)seg[2] + lo, hi - lo);
    }
}

// MB parent: register a new game entry
BOOL func_02123680(const u8 *key, const MBRomHeader *info) {
    MBEnt *e;
    u8 idx = 0xff;
    u32 irq = func_01ffa2ec();
    u32 off;
    u8 i;
    u8 seq;
    if (func_02124888() == 0) {
        func_01ffa3d4(irq);
        return 0;
    }
    if (data_0220001c->count + 1 > 16) {
        func_01ffa3d4(irq);
        return 0;
    }
    for (i = 0; i < 16; i = (u8)(i + 1)) {
        if (data_0220001c->ent[i].key == key) {
            func_01ffa3d4(irq);
            return 0;
        }
        if (data_0220001c->ent[i].used == 0) {
            idx = i;
            break;
        }
    }
    if (i == 16) {
        func_01ffa3d4(irq);
        return 0;
    }
    off = idx * sizeof(MBEnt);
    data_0220001c->ent[idx].key = key;
    e = (MBEnt *)((u8 *)data_0220001c + 0x1788 + off);
    func_021235fc(&e->seg, info);
    func_02116048(key + 0x1c, e->name, 0x20);
    if (func_02123368((u8 *)data_0220001c + 0x1d2c + off, e) == 0) {
        func_01ffa3d4(irq);
        return 0;
    }
    func_02124724((MBBuf *)((u8 *)data_0220001c + 0x186c + off), (const u32 *)key, data_0220001c->f1300 - 0 + 0);
    data_0220001c->ent[idx].buf.f4b5 = idx;
    func_02124580((MBBuf *)((u8 *)data_0220001c + 0x186c + off));
    seq = data_021fff80;
    data_021fff80 = seq + 1;
    data_0220001c->ent[idx].buf.f4b3 = seq;
    data_0220001c->ent[idx].f5c6 = 1;
    data_0220001c->ent[idx].info = info;
    data_0220001c->ent[idx].p0 = (const u8 *)info + 0x1e8;
    data_0220001c->ent[idx].p1 = (const u8 *)info + 0x258;
    if (((const u32 *)data_0220001c->ent[idx].p0)[0x6c / 4] != 0) {
        if (func_021269f8() == 0) {
            func_021269e4((u8 *)data_0220001c + 0x7ce0);
            func_02126a14((u8 *)data_0220001c + 0x74e0, 0x800);
        }
    }
    data_0220001c->ent[idx].used = 1;
    data_0220001c->count++;
    func_01ffa3d4(irq);
    return 1;
}

// MB parent: build the segment table of a ROM header
void func_021235fc(MBSegInfo *dst, const MBRomHeader *rom) {
    u32 limit = 0x22c0000;
    const u32 *m;
    MBRange *o;
    int i;
    const u8 *src;
    dst->arm9Entry = rom->arm9Entry;
    src = (const u8 *)rom + 0x160;
    dst->arm7Entry = rom->arm7Entry;
    o = dst->r;
    m = data_0213a3ec;
    for (i = 0; i < 3; i++) {
        func_02123444(rom, m, o, &limit);
        o++;
        m++;
    }
    func_02116048(src, dst->hdr, 0x88);
}

// MB parent: validate one segment of the ROM header
void func_02123444(const MBRomHeader *rom, const u32 *mode, MBRange *out, u32 *limit) {
    switch (*mode) {
    case 0: {
        const MBSeg *p = &rom->arm9;
        if (p->addr >= 0x2000000 && p->addr < 0x22c0000 && p->addr + p->size <= 0x22c0000) {
            out->size = p->size;
            out->addr = p->addr;
            out->start = out->addr;
            out->flags &= ~1;
        } else {
            func_0206d49c();
        }
        break;
    }
    case 1: {
        u32 wram;
        u32 bad;
        const MBSeg *p = &rom->arm7;
        u32 end = p->addr + p->size;
        wram = bad = 0;
        if (p->addr >= 0x2000000 && p->addr < 0x23fe800) {
            if (end > 0x2300000) {
                if (end < 0x23fe800 && p->size <= 0x40000) wram = 1;
                else bad = 1;
            }
        } else if (p->addr >= 0x37f8000 && p->addr < 0x380f000) {
            if (end <= 0x380f000) wram = 1;
            else bad = 1;
        } else {
            bad = 1;
        }
        if (bad == 1) func_0206d49c();
        out->size = p->size;
        out->addr = p->addr;
        if (wram == 0) {
            out->start = out->addr;
        } else {
            out->start = *limit;
            *limit += out->size;
        }
        out->flags = (out->flags & ~1) | 1;
        break;
    }
    case 2:
        out->size = 0x160;
        out->addr = 0x27ffe00;
        out->start = out->addr;
        out->flags &= ~1;
        break;
    }
}

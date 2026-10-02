// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) sound library tail: sound-archive stream player (NNS_SndArcStrm*: thread, job queue,
// stream contexts), capture effects (NNS_SndCapture*) and the NNSiSndFader helpers.
// autoload_2 0x0210da28-0x0210f0c4. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef int BOOL;

typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;

// NNSiSndFader
typedef struct Fader {
    s32 start;      // 0x00
    s32 end;        // 0x04
    s32 cnt;        // 0x08
    s32 frames;     // 0x0c
} Fader;

#define HDR(c) ((u8 *)(c) + 0xa8)
typedef struct FSFileID { void *arc; u32 id; } FSFileID;

// stream context (NNSSndArcStrm), 0x160 bytes, 4 of them (data_021fc650)
typedef struct Ctx {
    u8 strm[0x5c];          // 0x00 NNSSndStrm
    u8 file[0x48];          // 0x5c FSFile
    u32 a4;                 // 0xa4
    u8 pad_a8[0x18];        // 0xa8 .. 0xe8: 64-byte stream header buffer (type etc. are bytes of it)
    u8 type;                // 0xc0
    u8 c1;
    u8 c2;                  // 0xc2
    u8 c3;
    u16 rate;               // 0xc4
    u16 c6;                 // 0xc6
    u8 pad_c8[4];
    u32 cc;                 // 0xcc
    u8 pad_d0[0x18];
    Fader fader;            // 0xe8
    u8 pad_f8[0x18];
    struct {
        s32 a : 1;
        s32 b : 1;
        s32 c : 1;
        s32 d : 1;
        s32 e : 1;
        s32 f : 1;
        s32 g : 1;
    } fl;                   // 0x110
    s32 v114;
    s32 v118;
    s32 pending;            // 0x11c
    s32 users;              // 0x120
    u8 nch;                 // 0x124
    u8 pad125;
    u8 chIdx[6];            // 0x126
    void *buf;              // 0x12c
    u32 bufSize;            // 0x130
    s32 v134;
    s32 v138;
    void *cb;               // 0x13c
    void *cbArg;            // 0x140
    s32 v144;
    s32 v148;
    struct Ctx **handle;    // 0x14c
    s32 prio;               // 0x150
    s32 v154;
    s32 vol;                // 0x158
    u32 v15c;               // 0x15c
} Ctx;

typedef struct Job {
    NNSFndLink link;        // 0x00
    Ctx *owner;             // 0x08
    s32 tag;                // 0x0c
    s32 n;                  // 0x10
    u32 buf[6];             // 0x14
    u32 size;               // 0x2c
} Job;

typedef struct ThreadInfo {
    u8 thread[0x4c0];
    u32 queue[3];           // 0x4c0
    u8 mutex[0x18];         // 0x4cc
    NNSFndList list;        // 0x4e4
} ThreadInfo;

typedef struct SInfo {
    void *file;             // 0
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
} SInfo;

typedef struct EffCtl {
    s32 type;               // 0x00
    void (*fn)();           // 0x04
    void (*pre)();          // 0x08
    void *preArg;           // 0x0c
    void (*post)();         // 0x10
    void *postArg;          // 0x14
    union {
        struct { s32 a; s32 b; } e[24];
        s32 w[48];
    } u;                    // 0x18
} EffCtl;

typedef struct ArcTbl {
    u8 pad[0x1c];
    u32 count;              // 0x1c
    struct { u32 a; u32 b; u32 c; } ent[1];   // 0x20
} ArcTbl;

// externs: data (bss in autoload_3)
extern Ctx data_021fc650[4];
extern ThreadInfo data_021fc160;
extern ThreadInfo *data_021fbdac;
extern u8 data_021fc62c[0x18];
extern NNSFndList data_021fc644;
extern s32 data_021fbda8;
extern NNSFndList data_021fbdb4;
extern u8 data_021fbdc0[0x18];
extern Job data_021fbdd8[8];
extern void *data_021fbdb0;
extern u8 data_021fbf60[];
extern EffCtl data_0213bf10;
extern s32 data_0213bf28[];
extern s16 data_02139fb4[];

// externs: functions
extern void *func_02100248(NNSFndList *, void *);
extern void func_02100260(NNSFndList *, void *);
extern void func_021003b0(NNSFndList *, void *);
extern void func_02100444(NNSFndList *, u16);
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_02114480(void *);
extern void func_02114410(void *);
extern void func_0211450c(void *);
extern void func_02113a70(void *, void *, void *, void *, u32, u32);
extern void func_0211366c(void *);
extern void func_021136a0(void *);
extern void func_02115fb4(u32, u32, u32);
extern void func_02115e30(u32, void *, u32);
extern void func_02115ef4();
extern void func_021145cc(void *, u32);
extern void func_021166b4(u32);
extern void func_021198c4(void *);
extern void func_021199e0(void *);
extern void func_02119d78(void *);
extern BOOL func_02119a78(void *, FSFileID);
extern void func_0210a6b0(Ctx *, s32, s32);
extern void func_0210a6f4(Ctx *, s32);
extern void func_0210a768(Ctx *);
extern void func_0210a798(Ctx *);
extern BOOL func_0210a7f4();
extern void func_0210a9c4(Ctx *);
extern BOOL func_0210a9f4();
extern void func_0210aa58(Ctx *);
extern void func_0210b364();
extern FSFileID func_0210b48c(void);
extern s32 func_0210b4ac();
extern u32 func_0210b558();
extern u8 *func_0210b5e4();
extern SInfo *func_0210b6ac();
extern void *func_0210be9c();
extern void func_0210d10c();

// in-unit prototypes
void func_0210da28(Ctx *);
void func_0210db74(s32, s32, u32 *, u32, s32, Ctx *);
void func_0210dcc0(void *, u32, Ctx *);
void func_0210dd6c(Job *);
Job *func_0210dda4(void);
Job *func_0210ddf0(NNSFndList *);
void func_0210de44(NNSFndList *, Ctx *);
void func_0210deb8(ThreadInfo *, u32);
void func_0210df2c(Ctx *);
BOOL func_0210df74();
void func_0210dfb4(Ctx *);
void func_0210e024(Ctx *);
void func_0210e0c4(Ctx *, s32);
BOOL func_0210e128();
void func_0210e400(Ctx *);
Ctx *func_0210e43c(Ctx **, s32, s32);
void func_0210e694(Ctx **);
void func_0210e760(Ctx **);
BOOL func_0210e778(Ctx **, s32, s32);
BOOL func_0210e7e0(void *);
void func_0210ea0c();
void func_0210e9c0();
void func_0210ec0c();
void func_0210edb0(void);
void func_0210edb4();
void func_0210ee4c(s32);
BOOL func_0210efdc(Fader *);
void func_0210f078(Fader *);
s32 func_0210f00c(Fader *);
void func_0210f048(Fader *, s32, s32);
void func_0210eff4(Fader *);

// NNSi sound value encoder-like (0 -> 0, positive -> v|0x4000, negative -> (-v)|0x8000)
void func_0210f098(u16 *p, s32 v)
{
    if (v == 0) {
        *p = 0;
    } else if (v > 0) {
        *p = v | 0x4000;
    } else {
        *p = (-v) | 0x8000;
    }
}

// NNSiSndFader_Init
void func_0210f078(Fader *f)
{
    f->end = 0;
    f->start = f->end;
    f->frames = 0;
    f->cnt = f->frames;
}

// NNSiSndFader_Set
void func_0210f048(Fader *f, s32 target, s32 frames)
{
    f->start = func_0210f00c(f);
    f->end = target;
    f->frames = frames;
    f->cnt = 0;
}

// NNSiSndFader_Get
s32 func_0210f00c(Fader *f)
{
    s32 start;
    if (f->cnt >= f->frames) return f->end;
    start = f->start;
    return start + (f->cnt * (f->end - start)) / f->frames;
}

// NNSiSndFader_Update
void func_0210eff4(Fader *f)
{
    if (f->cnt < f->frames) f->cnt++;
}

// NNSiSndFader_IsFinished
BOOL func_0210efdc(Fader *f)
{
    return f->cnt >= f->frames;
}

// NNSi_SndArc entry lookup-like (count at +0x1c, 12-byte entries from +0x20, first word -1 = unused)
void *func_0210ef9c(ArcTbl *t, s32 i)
{
    if (i < 0) return 0;
    if ((u32)i >= t->count) return 0;
    if (t->ent[i].a == (u32)-1) return 0;
    return &t->ent[i];
}

// NNS_SndCaptureStartEffect-like (select effect and start the capture)
void func_0210ef44(void *a, void *b, s32 effect)
{
    func_0210ee4c(effect);
    func_0210b364(a, b, 0, 32000, 2, func_0210edb4, &data_0213bf10);
}

// NNS_SndCaptureSetEffect-like (select effect 0..3, clear state)
void func_0210ee4c(s32 effect)
{
    u32 irq;
    volatile u16 zero;
    if (effect == data_0213bf10.type) return;
    if (data_0213bf10.type == 1) func_021166b4(0);
    irq = func_01ffa2ec();
    zero = 0;
    func_02115e30(zero, data_0213bf28, 0xc0);
    data_0213bf10.type = effect;
    switch (effect) {
    case 1:
        data_0213bf10.fn = func_0210ec0c;
        break;
    case 2:
        data_0213bf10.fn = func_0210ea0c;
        break;
    case 3:
        data_0213bf10.fn = func_0210e9c0;
        break;
    case 0:
        data_0213bf10.fn = func_0210edb0;
        break;
    default:
        data_0213bf10.fn = func_0210edb0;
        break;
    }
    func_01ffa3d4(irq);
    if (effect != 1) return;
    func_021166b4(0x3000);
}

// NNSi_SndCaptureCallback-like (pre callback, effect, post callback, flush)
void func_0210edb4(void *l, void *r, u32 len, s32 fmt, EffCtl *c)
{
    if (c->pre != 0) c->pre(l, r, len, fmt, c->preArg);
    c->fn(l, r, len, c);
    if (c->post != 0) c->post(l, r, len, fmt, c->postArg);
    func_021145cc(l, len);
    func_021145cc(r, len);
}

// empty capture effect (effect 0)
void func_0210edb0(void)
{
}

// NNSi_SndCaptureEffect side-signal-like (capture effect 1)
void func_0210ec0c(s16 *l, s16 *r, u32 len, EffCtl *c)
{
    s16 tmp[2];
    u32 n = len >> 1;
    s16 *lp;
    s16 *rp;
    s32 i;
    s32 d;
    s16 *p;
    s16 *q;
    s32 t, x, y;
    i = 0;
    lp = l + n;
    rp = r + n;
    for (; i < 2; i++) {
        d = (l + n + i)[-2] - (r + n + i)[-2];
        tmp[i] = (d < -32768) ? -32768 : (d > 32767) ? 32767 : d;
    }
    p = l + (n - 1);
    q = r + (n - 1);
    if (p >= l + 2) {
        do {
            t = p[-2] - q[-2];
            x = p[0] + t;
            y = q[0] - t;
            if (t >= 0) {
                if (x < 32767) p[0] = x; else p[0] = 32767;
                if (y > -32768) q[0] = y; else q[0] = -32768;
            } else {
                if (x > -32768) p[0] = x; else p[0] = -32768;
                if (y < 32767) q[0] = y; else q[0] = 32767;
            }
            p--;
            q--;
        } while (p >= l + 2);
    }
    for (i = 1; i >= 0; i--) {
        x = l[i] + c->u.w[i];
        l[i] = (x < -32768) ? -32768 : (x > 32767) ? 32767 : x;
        y = r[i] - c->u.w[i];
        r[i] = (y < -32768) ? -32768 : (y > 32767) ? 32767 : y;
    }
    for (i = 0; i < 2; i++) {
        c->u.w[i] = tmp[i];
    }
}

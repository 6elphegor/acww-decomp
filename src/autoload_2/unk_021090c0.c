// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d texture SRT matrices (0x021090c0-0x021093f4) and the NNS sound library:
// snd.c (NNS_SndInit/NNS_SndMain), sound players (NNSSndPlayer / NNSSndHandle / sequence player alloc),
// channel/alarm masks and the stream player (NNSSndStrm). autoload_2 0x021090c0-0x0210a9c4.
// ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef int BOOL;

typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
typedef struct PMCbInfo { void (*cb)(void *); void *arg; void *next; } PMCbInfo;

typedef struct Seq Seq;
typedef struct Handle { Seq *seq; } Handle;

typedef struct Player {
    NNSFndList seqList;     // 0x00 (link at seq+0x0c)
    NNSFndList heapList;    // 0x0c (link at the start of a HeapBlk)
    u32 playable;           // 0x18
    u32 bank;               // 0x1c
    u8 vol;                 // 0x20
    u8 pad[3];
} Player;

typedef struct HeapBlk {
    NNSFndLink link;        // 0x00
    void *heap;             // 0x08
    Seq *seq;               // 0x0c
    s32 playerNo;           // 0x10
} HeapBlk;

struct Seq {
    Handle *handle;         // 0x00
    Player *player;         // 0x04
    HeapBlk *heap;          // 0x08
    NNSFndLink plink;       // 0x0c
    NNSFndLink glink;       // 0x14
    u32 fader[4];           // 0x1c
    u8 status;              // 0x2c
    u8 started;             // 0x2d
    u8 f2e;                 // 0x2e
    u8 pending;             // 0x2f
    u32 tag;                // 0x30
    u16 cmd;                // 0x34
    u16 f36;
    u16 a38;                // 0x38
    u16 a3a;                // 0x3a
    u8 id;                  // 0x3c
    u8 prio;                // 0x3d
    s16 vol;                // 0x3e
    u8 v40;                 // 0x40
    u8 v41;                 // 0x41
    u8 pad42[2];
};

typedef struct StrmEnt { u32 buf; u32 pos; } StrmEnt;
typedef void (*StrmCb)(s32, s32, u32 *, u32, s32, void *);

typedef struct Strm {
    NNSFndLink link;        // 0x00
    PMCbInfo pm0;           // 0x08
    PMCbInfo pm1;           // 0x14
    s32 fmt;                // 0x20
    struct { s32 setup : 1; s32 started : 1; } f;   // 0x24
    u32 blockSize;          // 0x28
    s32 blkCount;           // 0x2c
    StrmCb cb;              // 0x30
    void *arg;              // 0x34
    s32 blk;                // 0x38
    u32 timer;              // 0x3c
    s32 alarm;              // 0x40
    u32 chMask;             // 0x44
    s32 chCount;            // 0x48
    u8 chIdx[16];           // 0x4c
} Strm;

typedef struct SndBuf { u8 b[0x11e0]; } SndBuf;

// externs: data
extern s8 data_021f89d0;
extern u32 data_021f89d4;
extern u32 data_021f89d8;
extern u32 data_021f89dc;
extern PMCbInfo data_021f89e0;
extern PMCbInfo data_021f89ec;
extern SndBuf data_021f8a00[];
extern u32 data_021fadc0;
extern u32 data_021fadc4;
extern u32 data_021fadc8;
extern NNSFndList data_021fadcc;
extern NNSFndList data_021fadd8;
extern Seq data_021fade4[];
extern Player data_021fb224[];
extern NNSFndList data_021fb6a8;
extern u32 data_021fb6b4[];
extern StrmEnt data_021fb6f4[];
extern s16 data_02139fb4[];

// externs: functions
extern void *func_02100248(NNSFndList *, void *);
extern void func_02100260(NNSFndList *, void *);
extern void func_021002cc(NNSFndList *, void *, void *);
extern void func_021003b0(NNSFndList *, void *);
extern void func_02100444(NNSFndList *, u16);
extern void func_01ffc374(s32, s32);
extern s32 func_01ffc464(void);
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_01ff9f5c(void);
extern u32 _u32_div_f();
extern void func_0210ac4c(void);
extern void func_0210acec(void);
extern void func_0210b1b0(void);
extern void func_0210b260(void);
extern void func_0210bf0c(void *);
extern void *func_0210be9c();
extern void *func_0210bfe8(void *, u32);
extern void func_0210bfcc(void *);
extern void func_0210e4e4(void);
extern u32 func_0210efdc(void *);
extern void func_0210eff4(void *);
extern s32 func_0210f00c(void *);
extern void func_0210f048(void *, s32, s32);
extern void func_0210f078(void *);
extern void func_02114594(void *, u32);
extern void func_02116748(void *);
extern void func_02116858();
extern void func_021168b0(u32, u32);
extern void func_021168dc(u32, u32, u32);
extern void func_02116910(u32, u32);
extern void func_0211693c(u32, u32);
extern void func_02116968();
extern void func_0211699c();
extern void func_02116a2c(u32, u32, u32, u32);
extern void func_02116a9c(u32, u32, u32, u32);
extern void func_02116ad0();
extern void func_02116b04();
extern void func_02116b2c();
extern void func_02116b54();
extern void func_02116b7c();
extern void func_02116ba8();
extern void func_02116bdc();
extern void func_02116bf4(u32, s32);
extern void func_02116c0c();
extern void func_02116c24(u32);
extern void func_02116c50();
extern void func_02116c84(u32);
extern void func_02116cd8(void);
extern u32 func_02116f04(u32);
extern u32 func_02116f58(void);
extern u32 func_02116f98(u32);
extern u32 func_02117028(u32);
extern u32 func_021172cc(u32);
extern u32 func_0211764c();
extern u32 func_0211777c();
extern s32 func_02117844(s32);
extern s32 func_02117884();
extern u32 func_021178d8(void);
extern s32 func_02117910(s32);
extern void func_021167a8(u32);
extern void func_0211c220(void *);
extern void func_0211c238(void *);
extern void func_0211c250(void *);
extern void func_0211c268(void *);

// in-unit prototypes
void func_02109830(Seq *, u8);
void func_02109a38(Seq *);
void func_02109a98(NNSFndList *, Seq *);
void func_021098f0(Seq *);
void func_021099fc(Seq *);
Seq *func_02109980(s32);
void func_0210a27c(Handle *);
void func_0210a544(Strm *, s32);
void func_0210a5fc(Strm *);
void func_0210a630(Strm *);
void func_0210a768(Strm *);
void func_02109700(s32);
s32 func_02109720(void);
void func_02109b9c(Seq *, s32);
void func_02109af4(Seq *);
void func_02109894(HeapBlk *);
void func_02109d20(void);
void func_02109e94(void);
void func_021096d4(void);
u32 func_02109400(void);
u32 func_02109498(u32, u32);
u32 func_0210943c(u32, u32, u32);
void func_021093f4(void);

typedef struct TexSrt {
    u8 pad[0x18];
    s32 sx;     // 0x18
    s32 sy;     // 0x1c
    s16 sn;     // 0x20
    s16 cs;     // 0x22
    s32 tx;     // 0x24
    s32 ty;     // 0x28
    u16 w;      // 0x2c
    u16 h;      // 0x2e
} TexSrt;
#define FXM(a, b) ((s32)(((s64)(a) * (b)) >> 12))

// NNS_SndStrmSetup
BOOL func_0210a7f4(Strm *st, s32 fmt, u32 buf, u32 size, s32 timer, s32 interval, StrmCb cb, void *arg)
{
    s32 i;
    u32 q;
    u32 period;
    u32 t;
    u32 e;
    if (st->f.setup) {
        func_0210a768(st);
    }
    q = _u32_div_f(size, st->chCount * (interval << 5));
    st->blockSize = (q * interval) << 5;
    t = st->blockSize;
    if (fmt == 1) {
        t >>= 1;
    }
    period = _u32_div_f(timer * t, interval);
    st->alarm = func_02109720();
    if (st->alarm < 0) {
        return 0;
    }
    for (i = 0; i < st->chCount; i++) {
        u32 ch = st->chIdx[i];
        data_021fb6f4[ch].buf = st->blockSize * i + buf;
        data_021fb6f4[ch].pos = 0;
        func_02116858(ch, fmt, data_021fb6f4[ch].buf, 1, 0, st->blockSize >> 2, 127, 0, timer << 5, 64);
    }
    func_0211699c(st->alarm, period, period, func_01ff9f5c, st);
    func_021003b0(&data_021fb6a8, st);
    st->fmt = fmt;
    st->blkCount = interval;
    st->cb = cb;
    st->arg = arg;
    st->blk = 0;
    st->timer = 0;
    st->f.setup = 1;
    e = func_01ffa2ec();
    st->blkCount = 1;
    func_0210a544(st, 0);
    st->blkCount = interval;
    func_01ffa3d4(e);
    return 1;
}

// NNS_SndStrmStart (start the stream timer; register the PM sleep callbacks)
void func_0210a798(Strm *st)
{
    func_02116a9c(st->chMask, 0, 1 << st->alarm, 0);
    if (st->f.started) {
        return;
    }
    func_0211c268(&st->pm0);
    func_0211c250(&st->pm1);
    st->f.started = 1;
}

// NNS_SndStrmStop-like: free the stream if it is set up
void func_0210a768(Strm *st)
{
    if (!st->f.setup) {
        return;
    }
    func_0210a630(st);
}

// NNS_SndStrmSetPlayPosition-like: per-channel pan/vol update from the position table
void func_0210a6f4(Strm *st, u32 timer)
{
    u32 ch;
    s32 i;
    st->timer = timer;
    i = 0;
    if (st->chCount <= 0) {
        return;
    }
    do {
        s32 v;
        ch = st->chIdx[i];
        v = func_02117910(st->timer + data_021fb6f4[ch].pos);
        func_021168dc(1 << ch, v & 0xff, v >> 8);
        i++;
    } while (i < st->chCount);
}

// NNS_SndStrmSetChannelVolume (ch, vol)
void func_0210a6b0(Strm *st, s32 ch, u32 v)
{
    if (ch > st->chCount - 1) {
        return;
    }
    func_021168b0(1 << st->chIdx[ch], v);
}

// NNSi_SndStrmFree: stop timer, remove PM callbacks, drop from list
void func_0210a630(Strm *st)
{
    u32 t;
    if (st->f.started) {
        func_02116a2c(st->chMask, 0, 1 << st->alarm, 0);
        func_0211c238(&st->pm0);
        func_0211c220(&st->pm1);
        st->f.started = 0;
        t = func_02116f58();
        func_02117028(1);
        func_02116f98(t);
    }
    func_0210a5fc(st);
}

// NNSi_SndStrmRelease: free alarm, remove from stream list
void func_0210a5fc(Strm *st)
{
    func_02109700(st->alarm);
    func_02100260(&data_021fb6a8, st);
    st->f.setup = 0;
}

// NNSi_SndStrmCallback: fill the next block through the user callback
void func_0210a544(Strm *st, s32 flag)
{
    u32 q = _u32_div_f(st->blockSize, st->blkCount);
    u32 off = q * st->blk;
    s32 i;
    for (i = 0; i < st->chCount; i++) {
        u32 b = data_021fb6f4[st->chIdx[i]].buf;
        data_021fb6b4[i] = b + off;
    }
    st->cb(flag, st->chCount, data_021fb6b4, q, st->fmt, st->arg);
    st->blk = st->blk + 1;
    if (st->blk >= st->blkCount) {
        st->blk = 0;
    }
}

// NNS_SndStrmPause-like: stop timer and wait for the SND command
void func_0210a4f0(Strm *st)
{
    u32 t;
    if (!st->f.started) {
        return;
    }
    func_02116a2c(st->chMask, 0, 1 << st->alarm, 0);
    t = func_02116f58();
    func_02117028(1);
    func_02116f98(t);
}

// NNS_SndStrmStop: drain to a block boundary then stop the SND timer
void func_0210a478(Strm *st)
{
    u32 e;
    if (!st->f.started) {
        return;
    }
    while (st->blk != 0) {
        e = func_01ffa2ec();
        func_0210a544(st, 1);
        func_01ffa3d4(e);
    }
    func_02116a9c(st->chMask, 0, 1 << st->alarm, 0);
}

// NNS_SndPlayerSetVolume(playerNo, vol)
void func_0210a460(s32 i, u8 v)
{
    data_021fb224[i].vol = v;
}

// NNS_SndPlayerSetPlayableSeqCount(playerNo, n)
void func_0210a440(s32 i, u32 v)
{
    data_021fb224[i].playable = (u16)v;
}

// NNS_SndPlayerSetBank-like (playerNo, bank)
void func_0210a428(s32 i, u32 v)
{
    data_021fb224[i].bank = v;
}

// NNS_SndPlayerCreateHeap
BOOL func_0210a388(s32 playerNo, void *heap, u32 size)
{
    HeapBlk *b;
    void *h;
    b = func_0210be9c(heap, size + 20, func_02109894, 0, 0);
    if (b == 0) {
        return 0;
    }
    b->seq = 0;
    b->playerNo = playerNo;
    b->heap = 0;
    h = func_0210bfe8((u8 *)b + 20, size);
    if (h == 0) {
        return 0;
    }
    b->heap = h;
    func_021003b0(&data_021fb224[playerNo].heapList, b);
    return 1;
}

// NNS_SndHandleStop(handle, fadeFrames)
void func_0210a378(Handle *h, s32 frames)
{
    func_02109b9c(h->seq, frames);
}

// NNS_SndPlayerStopSeq(playerNo, fadeFrames)
void func_0210a310(s32 playerNo, s32 frames)
{
    s32 i;
    Seq *s;
    Player *p;
    p = &data_021fb224[playerNo];
    s = data_021fade4;
    for (i = 0; i < 16; i++, s++) {
        if (s->status != 0 && s->player == p) {
            func_02109b9c(s, frames);
        }
    }
}

// NNS_SndPlayerStopSeqBySeqNo-like (a, b, fadeFrames)
void func_0210a2a0(u32 a, u32 b, s32 c)
{
    s32 i;
    Seq *s = data_021fade4;
    for (i = 0; i < 16; i++, s++) {
        if (s->status != 0 && s->cmd == 2 && s->a38 == a && s->a3a == b) {
            func_02109b9c(s, c);
        }
    }
}

// NNS_SndHandleInit
void func_0210a294(Handle *h)
{
    h->seq = 0;
}

// NNS_SndHandleReleaseSeq
void func_0210a27c(Handle *h)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->handle = 0;
        h->seq = 0;
    }
}

// NNS_SndHandleSetTrackVolume-like (v41)
void func_0210a26c(Handle *h, u8 v)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->v41 = v;
    }
}

// NNS_SndHandleSetVolume-like (v40)
void func_0210a25c(Handle *h, u8 v)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->v40 = v;
    }
}

// NNS_SndHandleSetMasterVolume-like (fader target, frames)
void func_0210a214(Handle *h, s32 v, s32 frames)
{
    Seq *s = h->seq;
    if (s == 0) {
        return;
    }
    if (s->status == 2) {
        return;
    }
    func_0210f048(s->fader, v << 8, frames);
}

// NNS_SndHandleSetPriority
void func_0210a1e8(Handle *h, u8 prio)
{
    if (h->seq == 0) {
        return;
    }
    func_02109830(h->seq, prio);
}

// NNS_SndHandleSetTempoRatio-like
void func_0210a1b8(Handle *h, u32 b)
{
    if (h->seq == 0) {
        return;
    }
    func_02116bdc(h->seq->id, b);
}

// NNS_SndHandleSetTrackPitch-like
void func_0210a188(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return;
    }
    func_02116968(h->seq->id, b, c);
}

// NNS_SndHandleSetTrackPan-like (volume table lookup)
void func_0210a148(Handle *h, u32 b, s32 c)
{
    if (h->seq == 0) {
        return;
    }
    func_02116b54(h->seq->id, b, data_02139fb4[c]);
}

// NNS_SndHandleSetTrackModDepth-like
void func_0210a118(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return;
    }
    func_02116b2c(h->seq->id, b, c);
}

// NNS_SndHandleSetTrackPitchBend-like
void func_0210a0e8(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return;
    }
    func_02116b04(h->seq->id, b, c);
}

// NNS_SndHandleSetTempo-like
void func_0210a0b8(Handle *h, u32 b)
{
    if (h->seq == 0) {
        return;
    }
    func_02116c0c(h->seq->id, b);
}

// NNS_SndHandleSetSeqNoState (state 1)
void func_0210a09c(Handle *h, u16 a)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->cmd = 1;
        h->seq->a38 = a;
    }
}

// NNS_SndHandleSetSeqNoState (state 2)
void func_0210a074(Handle *h, u16 a, u16 b)
{
    Seq *s = h->seq;
    if (s == 0) {
        return;
    }
    s->cmd = 2;
    h->seq->a38 = a;
    h->seq->a3a = b;
}

// NNS_SndHandleReadVariable-like
BOOL func_0210a024(Handle *h, s32 b, s16 *out)
{
    Seq *s = h->seq;
    if (s == 0) {
        return 0;
    }
    if (s->started == 0) {
        *out = -1;
        return 1;
    }
    *out = func_02117884(s->id, b);
    return 1;
}

// NNS_SndReadGlobalVariable-like
BOOL func_0210a008(s32 a, u16 *out)
{
    *out = func_02117844(a);
    return 1;
}

// NNS_SndHandleSetTrackMute
BOOL func_02109fd0(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return 0;
    }
    func_02116ba8(h->seq->id, b, c);
    return 1;
}

// NNS_SndSetGlobalVariable-like
BOOL func_02109fb4(u32 a, u32 b)
{
    func_02116b7c(a, b);
    return 1;
}

// NNS_SndHandleGetChannelInfo-like
u32 func_02109f80(Handle *h, u32 b)
{
    if (h->seq == 0) {
        return 0;
    }
    return func_02109498(h->seq->id, b);
}

// NNS_SndHandleGetTrackInfo-like
u32 func_02109f4c(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return 0;
    }
    return func_0210943c(h->seq->id, b, c);
}

// NNSi_SndPlayerInit: init seq player lists/free list and 32 players
void func_02109e94(void)
{
    s32 i;
    Seq *s;
    Player *p;
    func_02100444(&data_021fadd8, 20);
    func_02100444(&data_021fadcc, 20);
    s = data_021fade4;
    for (i = 0; i < 16; i++, s++) {
        s->status = 0;
        s->id = i;
        func_021003b0(&data_021fadcc, s);
    }
    p = data_021fb224;
    for (i = 0; i < 32; i++, p++) {
        func_02100444(&p->seqList, 12);
        func_02100444(&p->heapList, 0);
        p->vol = 127;
        p->playable = 1;
        p->bank = 0;
    }
}

// NNSi_SndPlayerMain: per-frame seq player update (volume, fade, release)
void func_02109d20(void)
{
    u32 mask = func_021178d8();
    Seq *s = func_02100248(&data_021fadd8, 0);
    Seq *next;
    s32 vol;
    s32 a, b, c, d;
    if (s == 0) {
        return;
    }
    do {
        next = func_02100248(&data_021fadd8, s);
        if (s->started == 0) {
            if (func_02116f04(s->tag) != 0) {
                s->started = 1;
            }
        }
        if (s->started != 0 && (mask & (1 << s->id)) == 0) {
            func_021098f0(s);
        } else {
            func_0210eff4(s->fader);
            a = data_02139fb4[s->v41];
            b = data_02139fb4[s->v40];
            c = data_02139fb4[s->player->vol];
            d = data_02139fb4[func_0210f00c(s->fader) >> 8];
            vol = d + (c + (b + a));
            if (vol < -723) {
                vol = -723;
            } else if (vol > 0) {
                vol = 0;
            }
            if (vol != s->vol) {
                func_02116bf4(s->id, vol);
                s->vol = vol;
            }
            if (s->status == 2) {
                if (func_0210efdc(s->fader) != 0) {
                    func_021099fc(s);
                }
            }
            if (s->pending != 0) {
                func_02116c24(s->id);
                s->pending = 0;
            }
        }
        s = next;
    } while (s != 0);
}

// NNSi_SndPlayerAllocSeqPlayer(handle, playerNo, prio)
Seq *func_02109c64(Handle *h, s32 playerNo, s32 prio)
{
    Player *p = &data_021fb224[playerNo];
    Seq *s = h->seq;
    if (s != 0) {
        func_0210a27c(h);
    }
    if (p->seqList.num >= p->playable) {
        Seq *o = func_02100248(&p->seqList, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o->prio) {
            return 0;
        }
        func_021099fc(o);
    }
    s = func_02109980(prio);
    if (s == 0) {
        return 0;
    }
    func_02109a98(&p->seqList, s);
    s->handle = h;
    h->seq = s;
    return s;
}

// tail to func_021098f0
void func_02109c58(Seq *s)
{
    func_021098f0(s);
}

// NNSi_SndPlayerStartSeq (SND_StartSeq command)
void func_02109bfc(Seq *s)
{
    Player *p = s->player;
    func_02116c50(s->id);
    if (p->bank != 0) {
        func_02116ad0(s->id, 0xffff, p->bank);
    }
    func_02109af4(s);
    s->tag = func_02116f58();
    s->pending = 1;
    s->status = 1;
}

// NNSi_SndPlayerStopSeq(seq, fadeFrames)
void func_02109b9c(Seq *s, s32 frames)
{
    if (s == 0) {
        return;
    }
    if (s->status == 0) {
        return;
    }
    if (frames == 0) {
        func_021099fc(s);
        return;
    }
    func_0210f048(s->fader, 0, frames);
    func_02109830(s, 0);
    s->status = 2;
}

// NNSi_SndPlayerAllocHeap(playerNo, seq)
void *func_02109b40(s32 playerNo, Seq *seq)
{
    Player *p = &data_021fb224[playerNo];
    HeapBlk *b = func_02100248(&p->heapList, 0);
    if (b == 0) {
        return 0;
    }
    func_02100260(&p->heapList, b);
    b->seq = seq;
    seq->heap = b;
    func_0210bf0c(b->heap);
    return b->heap;
}

// NNSi_SndSeqPlayerInit
void func_02109af4(Seq *s)
{
    s->f2e = 0;
    s->started = 0;
    s->pending = 0;
    s->cmd = 0;
    s->vol = 0;
    s->v40 = 127;
    s->v41 = 127;
    func_0210f078(s->fader);
    func_0210f048(s->fader, 0x7f00, 1);
}

// insert seq into a player list sorted by priority
void func_02109a98(NNSFndList *l, Seq *s)
{
    Seq *o = func_02100248(l, 0);
    while (o != 0) {
        if (s->prio < o->prio) {
            break;
        }
        o = func_02100248(l, o);
    }
    func_021002cc(l, o, s);
    s->player = (Player *)l;
}

// insert seq into the global priority list
void func_02109a38(Seq *s)
{
    Seq *o = func_02100248(&data_021fadd8, 0);
    while (o != 0) {
        if (s->prio < o->prio) {
            break;
        }
        o = func_02100248(&data_021fadd8, o);
    }
    func_021002cc(&data_021fadd8, o, s);
}

// force-stop and free a seq player
void func_021099fc(Seq *s)
{
    if (s->status == 2) {
        func_02116bf4(s->id, -723);
    }
    func_02116c84(s->id);
    func_021098f0(s);
}

// allocate a seq player (steal the lowest priority if none is free)
Seq *func_02109980(s32 prio)
{
    Seq *s = func_02100248(&data_021fadcc, 0);
    if (s == 0) {
        s = func_02100248(&data_021fadd8, 0);
        if (prio < s->prio) {
            return 0;
        }
        func_021099fc(s);
    }
    func_02100260(&data_021fadcc, s);
    s->prio = prio;
    func_02109a38(s);
    return s;
}

// free a seq player
void func_021098f0(Seq *s)
{
    Player *p;
    if (s->handle != 0) {
        s->handle->seq = 0;
        s->handle = 0;
    }
    p = s->player;
    func_02100260(&p->seqList, s);
    s->player = 0;
    if (s->heap != 0) {
        func_021003b0(&p->heapList, s->heap);
        s->heap->seq = 0;
        s->heap = 0;
    }
    func_02100260(&data_021fadd8, s);
    func_021003b0(&data_021fadcc, s);
    s->status = 0;
}

// player heap block free callback
void func_02109894(HeapBlk *b)
{
    if (b->heap == 0) {
        return;
    }
    func_0210bfcc(b->heap);
    if (b->seq != 0) {
        b->seq->heap = 0;
        return;
    }
    func_02100260(&data_021fb224[b->playerNo].heapList, b);
}

// set seq priority and reinsert it in the lists
void func_02109830(Seq *s, u8 prio)
{
    Player *p = s->player;
    if (p != 0) {
        func_02100260(&p->seqList, s);
        s->player = 0;
    }
    func_02100260(&data_021fadd8, s);
    s->prio = prio;
    if (p != 0) {
        func_02109a98(&p->seqList, s);
    }
    func_02109a38(s);
}

// NNSi_SndLockChannel (mask)
BOOL func_021097dc(u32 m)
{
    if (m == 0) {
        return 1;
    }
    if (m & data_021fadc8) {
        return 0;
    }
    func_0211693c(m, 0);
    data_021fadc8 |= m;
    return 1;
}

// NNSi_SndUnlockChannel (mask)
void func_021097a4(u32 m)
{
    if (m == 0) {
        return;
    }
    func_02116910(m, 0);
    data_021fadc8 &= ~m;
}

// reserve channel mask (flags in data_021fadc0)
BOOL func_02109780(u32 m)
{
    if (m & data_021fadc0) {
        return 0;
    }
    data_021fadc0 |= m;
    return 1;
}

// release channel mask
void func_02109764(u32 m)
{
    data_021fadc0 &= ~m;
}

// allocate an alarm number from the mask (-1 if none)
s32 func_02109720(void)
{
    s32 i;
    u32 bit = 1;
    for (i = 0; i < 8; i++, bit <<= 1) {
        if ((data_021fadc4 & bit) == 0) {
            data_021fadc4 |= bit;
            return i;
        }
    }
    return -1;
}

// free an alarm number
void func_02109700(s32 n)
{
    data_021fadc4 &= ~(1 << n);
}

// clear channel/alarm masks
void func_021096d4(void)
{
    data_021fadc8 = 0;
    data_021fadc0 = 0;
    data_021fadc4 = 0;
}

// NNS_SndInit
// NNS_SndInit
void func_0210962c(void)
{
    if (data_021f89dc != 0) {
        return;
    }
    data_021f89dc = 1;
    func_02116cd8();
    data_021f89e0.cb = (void (*)(void *))func_02109400;
    data_021f89e0.arg = 0;
    data_021f89ec.cb = (void (*)(void *))func_021093f4;
    data_021f89ec.arg = 0;
    func_0211c268(&data_021f89e0);
    func_0211c250(&data_021f89ec);
    func_021096d4();
    func_0210b260();
    func_02109e94();
    data_021f89d0 = -1;
    data_021f89d4 = 1;
}

// NNS_SndMain
// NNS_SndMain
void func_021095f8(void)
{
    s32 z = 0;
    while (func_021172cc(z) != 0) {
    }
    func_02109d20();
    func_0210b1b0();
    func_0210e4e4();
    func_02117028(0);
}

// tail to func_021167a8
void func_021095ec(u32 a)
{
    func_021167a8(a);
}

// NNS_SndUpdateDriverInfo-like (double-buffered SND_UpdateDriverInfo)
BOOL func_021094f8(void)
{
    if (data_021f89d4 == 0) {
        if (func_02116f04(data_021f89d8) == 0) {
            return 0;
        }
        if (data_021f89d0 < 0) {
            data_021f89d0 = 1;
        }
        func_02116748(&data_021f8a00[data_021f89d0]);
        data_021f89d8 = func_02116f58();
        if (data_021f89d0 == 0) {
            data_021f89d0 = 1;
        } else {
            data_021f89d0 = 0;
        }
        func_02114594(&data_021f8a00[data_021f89d0], sizeof(SndBuf));
        return 1;
    } else {
        func_02116748(data_021f8a00);
        data_021f89d8 = func_02116f58();
        data_021f89d4 = 0;
        return 0;
    }
}

// read channel info from the current driver info buffer
u32 func_02109498(u32 a, u32 b)
{
    SndBuf *p;
    if (data_021f89d0 < 0) {
        p = 0;
    } else {
        p = &data_021f8a00[data_021f89d0];
    }
    if (p == 0) {
        return 0;
    }
    return func_0211777c(p, a, b);
}

// read track/player info from the current driver info buffer
u32 func_0210943c(u32 a, u32 b, u32 c)
{
    SndBuf *p;
    if (data_021f89d0 < 0) {
        p = 0;
    } else {
        p = &data_021f8a00[data_021f89d0];
    }
    if (p == 0) {
        return 0;
    }
    return func_0211764c(p, a, b, c);
}

// PM pre-sleep callback body: stop sound
u32 func_02109400(void)
{
    u32 t;
    func_0210acec();
    func_02116a2c(0, 0, 0, 0);
    t = func_02116f58();
    func_02117028(1);
    return func_02116f98(t);
}

// PM post-sleep callback (tail to func_0210ac4c)
void func_021093f4(void)
{
    func_0210ac4c();
}

// g3d texture SRT -> texture matrix (elements 0,1,4,5,12,13): scale + rotation + translation
void func_02109294(s32 *m, TexSrt *t)
{
    s32 h, w, sn, sy, cs, sx, x, y, e;
    s64 q, d;
    w = t->w << 12; h = t->h << 12;
    func_01ffc374(h, w);
    cs = t->cs; sx = t->sx; sn = t->sn; sy = t->sy;
    m[0] = FXM(sx, cs);
    x = FXM(sx, sn);
    y = FXM(sy, cs);
    m[5] = y;
    m[1] = FXM(sy, sn) * func_01ffc464() >> 12;
    func_01ffc374(w, h);
    q = ((s64)t->tx * t->cs + (s64)t->ty * t->sn) >> 12;
    d = ((s64)t->tx * t->sn - (s64)t->ty * t->cs) >> 12;
    e = y + (s32)(d * t->sy >> 12);
    m[12] = (t->w * (x - (s32)(q * t->sx >> 12))) << 4;
    m[13] = (-(s32)t->h * (e - 0x1000)) << 4;
    m[4] = (-x) * func_01ffc464() >> 12;
}

// rotation + translation
void func_021091a8(s32 *m, TexSrt *t)
{
    s32 w = t->w << 12;
    s32 h = t->h << 12;
    s32 a, b;
    func_01ffc374(h, w);
    m[0] = t->cs;
    m[5] = t->cs;
    m[1] = t->sn * func_01ffc464() >> 12;
    func_01ffc374(w, h);
    a = (s32)(((s64)t->tx * t->cs + (s64)t->ty * t->sn) >> 12);
    b = (s32)(((s64)t->tx * t->sn - (s64)t->ty * t->cs) >> 12);
    m[12] = (t->w * (t->sn - a)) << 4;
    m[13] = (-(s32)t->h * (t->cs + b - 0x1000)) << 4;
    m[4] = (-t->sn) * func_01ffc464() >> 12;
}

// scale + translation
void func_02109120(s32 *m, TexSrt *t)
{
    s32 tx, ty;
    m[0] = t->sx; m[5] = t->sy; m[1] = 0;
    tx = -FXM(t->tx, t->sx); ty = FXM(-t->ty, t->sy);
    m[12] = (t->w * tx) << 4;
    m[13] = (-(s32)t->h * (t->sy + ty - 0x1000)) << 4;
    m[4] = 0;
}

// translation only
void func_021090c0(s32 *m, TexSrt *t)
{
    s32 tx, ty;
    m[0] = 0x1000; m[5] = 0x1000; m[1] = 0;
    tx = -t->tx; ty = -t->ty;
    m[12] = (t->w * tx) << 4;
    m[13] = (-(s32)t->h * ty) << 4;
    m[4] = 0;
}

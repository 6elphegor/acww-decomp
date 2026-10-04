// mwcc-flags: -nothumb -O4,p
// RC_020f7a5c: the BGM-synchronised animation source file (G011a + BgmSyncSnd_UpdatePosition + G011b part 1) as REAL C++ classes.
// mwcc 1.2/base, C++, ARM, -O4,p. autoload_2 .text 0x020f7a5c-0x020f8b44 (28 functions), .data 0x0213bb7c-0x0213bb94 (2 vtables of
// 1 slot), autoload_3 .bss 0x021f5c30-0x021f5c38 (the two beat counters). No rodata, no __sinit.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt).
// Extent: .data starts with the 0xc-byte vtables after the 0x20-byte ones of RC_020f6850 and ends before the 8-byte function tables
// 0x0213bb94 / 0x0213bb9c (smaller: the particle file's, used only by its code); bss data_021f5c30 / 5c34 are used only by this text,
// data_021f5c38 only by the particle manager (RC_020f8b44); text: after the last G010 class method up to the particle manager.
// Classes:
//   BgmTempoTracker   base (vtable 0x0213bb88): virtual refresh f81dc; C1 f833c / C2 f839c, non-virtual destructor D2 f82fc / D1 f831c
//                  (both called: D1 by the scene class file, D2 by the derived destructor), start f8164, setMode f8290.
//   BgmBeatSync : BgmTempoTracker   (vtable 0x0213bb7c) update f7ebc overrides the refresh; C1 f80d8, D1 f80ac (its body calls the base
//                  destructor explicitly: D1 f831c, then the compiler's D2 f82fc call), setEnable f80a4, pickAnim f7d84, readTempo f7cc0,
//                  calcPhase f7a5c; member BgmBeatPhase at +0x14 (constructor f8134, also called from an overlay).
//   The "Rb" state machine (f83fc, f8604, f86c0..f8b08, called by name from main) stays plain extern "C" over a struct view.
// The scene class file (unk_020f0fb4.cpp) and main call the constructors / destructors by their func_ names (aliases keep them).
#include "types.h"
#include "snd/BgmBeatPhase.h"
#include "snd/SndBgmViews.h"

// BGM descriptor: u16 id at +0x38 (240 = a special track whose values are halved)
struct Hd {
    u8 pad[0x38];
    u16 id;
};

// gSndBgmHandle: BGM info handle, first word = pointer to Hd, queried with func_0210a024(&handle, selector, &out)
struct Hr {
    Hd *p;
};


class BgmBeatSync;
// view of gSndMgr (the sound manager SndMgr, unk_020f0dec.cpp): +0 current animation object, +0x2c Q*, +0x3c Hd* (= gSndBgmHandle)
struct Mg {
    BgmBeatSync *cur;
    u8 p4[0x28];
    Q *q;
    u8 p30[0xc];
    Hd *h;
};


// base: BGM tempo follower (vtable 0x0213bb88), 0x14 bytes
class BgmTempoTracker {
public:
    BgmTempoTracker();
    ~BgmTempoTracker();
    virtual void update(); // per-frame refresh

    void syncTempo();
    void setMode(u8 v);

    /* 0x04 */ s32 w4;
    /* 0x08 */ u8 c8;
    /* 0x09 */ s8 c9;
    /* 0x0a */ s8 c10;
    /* 0x0b */ s8 c11;
    /* 0x0c */ s8 c12;
    /* 0x0e */ s16 h14;
    /* 0x10 */ s8 c16;
    /* 0x12 */ u16 h18;
};

// BGM-synchronised animation object (vtable 0x0213bb7c), 0x30 bytes; gSndMgr.cur points to the live one
class BgmBeatSync : public BgmTempoTracker {
public:
    BgmBeatSync();
    ~BgmBeatSync();
    virtual void update(); // update

    void setEnable(u8 v);
    void pickAnim();
    void readTempo();
    void calcPhase();

    /* 0x14 */ BgmBeatPhase sub;
    /* 0x28 */ u8 c28;
    /* 0x29 */ u8 c29;
    /* 0x2a */ u8 c2a;
    /* 0x2c */ s16 s2c;
    /* 0x2e */ u8 c2e;
};


extern "C" {
extern Mg gSndMgr;
extern Hr gSndBgmHandle;
s32 FX_Div(s32 a, s32 b);
void func_0210a024(void *p, u32 sel, void *out);
void func_0210a008(u32 sel, void *out);
void NNS_SndArcPlayerStartSeq(void *p, u32 v);
void Snd_StopHandle(void *p, u32 v);
void Snd_InitHandle(void *p);
void NNS_SndHandleReleaseSeq(void *p);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 b);
void func_0210a0b8(void *p, s32 v);
void func_02109fd0(void *p, u32 a, s32 b);
void func_02109fb4(u32 a, s32 b);
s32 func_020f4904(u32 a, u32 b);
s32 Snd_DistanceToVolume(s32 d);
s32 Snd_CalcPan(u32 a, u32 b);
u32 SND_RecvCommandReply(u32 a);
void func_021094f8(void);
void SND_FlushCommand(u32 a);
s32 func_02109f80(void *p, void *out);
s32 func_02109f4c(void *p, u32 a, void *out);
void BgmSyncSnd_ReadHeader(Rb *r);
void BgmSyncSnd_ReadVars(Rb *r);
void BgmSyncSnd_SelectStep(Rb *r);
void BgmSyncSnd_UpdatePosition(Rb *r, void *arg);
s32 BgmSyncSnd_CalcPhase(Rb *r);
void BgmSyncSnd_SetState(Rb *r, u32 mode);
}

// beat counters (bss)
s16 data_021f5c30;
s16 data_021f5c34;

static inline BOOL nz(u32 v) { return v != 0; }

extern "C" void BgmSyncSnd_Init(Rb *r, u16 v) {
    Snd_InitHandle(r);
    r->h4 = v;
    r->h6 = 0;
    r->c13 = -1;
    r->c15 = 0;
    r->c16 = 0;
}

extern "C" void BgmSyncSnd_Release(Rb *r) {
    Snd_StopHandle(r, 0);
    NNS_SndHandleReleaseSeq(r);
}

extern "C" void BgmSyncSnd_SetState(Rb *r, u32 mode) {
    switch (mode) {
    case 0:
        r->c8 = 0;
        r->c15 = 0;
        Snd_StopHandle(r, 0);
        break;
    case 1:
        r->c8 = 1;
        NNS_SndArcPlayerStartSeq(r, r->h4);
        break;
    case 2:
        r->c8 = 2;
        break;
    }
}

extern "C" u32 BgmSyncSnd_ReadBeat(void) {
    s16 v;
    func_0210a008(2, &v);
    data_021f5c30 = v;
    return (u8)v;
}

extern "C" void BgmSyncSnd_SetStartBeat(Rb *r, s8 v) {
    r->c11 = v;
    r->c11 = r->c11 - 1;
    r->c11 = (r->c11 < 0) ? 15 : r->c11;
}

extern "C" s32 BgmSyncSnd_PollStarted(Rb *r) {
    s32 res = -1;
    if (r->c8 == 1) {
        if (r->c15 == 0) {
            r->c15 = 1;
            res = 3;
        }
    }
    return res;
}

extern "C" s32 BgmSyncSnd_Update(Rb *r, void *arg) {
    s32 res = -0x1000;
    switch (r->c8) {
    case 0:
        break;
    case 1:
        BgmSyncSnd_ReadVars(r);
        BgmSyncSnd_SelectStep(r);
        BgmSyncSnd_UpdatePosition(r, arg);
        res = BgmSyncSnd_CalcPhase(r);
        break;
    case 2: {
        s16 v;
        func_0210a008(2, &v);
        data_021f5c30 = v;
        if (v == r->c11) BgmSyncSnd_SetState(r, 1);
        break;
    }
    }
    return res;
}

extern "C" void BgmSyncSnd_SelectStep(Rb *r) {
    s32 j;
    s32 found;
    s32 n = r->c13;
    if (n == -1) return;
    if (n != r->c11) return;
    found = 0;
    for (j = 15 - (r->c11 + 1); j >= 0; j--) {
        if ((r->h6 >> j) & 1) {
            found = 1;
            break;
        }
    }
    if (found == 0) {
        for (j = 15; j >= 0; j--) {
            if ((r->h6 >> j) & 1) break;
        }
    }
    r->c13 = 15 - j;
    func_02109fd0(r, 12, r->c13);
}

extern "C" void BgmSyncSnd_ReadVars(Rb *r) {
    s16 a[6];
    if (r->c9 <= 0) BgmSyncSnd_ReadHeader(r);
    func_0210a008(2, &a[0]);
    func_0210a008(1, &a[1]);
    func_0210a024(r, 8, &a[2]);
    func_0210a024(r, 7, &a[3]);
    func_0210a024(r, 12, &a[4]);
    func_0210a024(r, 6, &a[5]);
    data_021f5c30 = a[0];
    data_021f5c34 = a[1];
    r->c11 = a[2];
    r->c12 = a[3];
    r->c13 = a[4];
    r->c14 = a[5];
    if (!nz((u32)gSndMgr.h)) return;
    if (gSndMgr.h->id == 240) data_021f5c34 = data_021f5c34 >> 1;
}

extern "C" void BgmSyncSnd_ReadHeader(Rb *r) {
    struct {
        s16 s0;
        s16 s5;
        s16 v[4];
    } q;
    s32 i;
    if (!nz(r->w0)) return;
    func_0210a024(r, 0, &q.s0);
    func_0210a024(r, 1, &q.v[0]);
    func_0210a024(r, 2, &q.v[1]);
    func_0210a024(r, 3, &q.v[2]);
    func_0210a024(r, 4, &q.v[3]);
    func_0210a024(r, 5, &q.s5);
    r->c9 = q.s0;
    r->c10 = q.s5;
    if (q.v[0] < 0) return;
    for (i = 0; i < 4; i++) {
        r->h6 |= ((s16 *)q.v)[3 - i] << (i * 4);
    }
}

extern "C" void BgmSyncSnd_UpdatePosition(Rb *r, void *arg) {
    s32 a, b;
    if (arg == 0) return;
    a = Snd_DistanceToVolume(func_020f4904((u32)arg, 0));
    b = Snd_CalcPan((u32)arg, 0);
    NNS_SndPlayerSetVolume(r, a);
    NNS_SndPlayerSetTrackPan(r, 15, b);
    if (gSndMgr.q == 0) return;
    s32 x = FX_Div(gSndMgr.q->s16v << 20, 0x78000) >> 12;
    if (!nz((u32)gSndMgr.h)) return;
    if (gSndMgr.h->id == 240) x >>= 1;
    func_0210a0b8(r, x);
}

extern "C" s32 BgmSyncSnd_CalcPhase(Rb *r) {
    s32 sc;
    s32 rv;
    s16 a;
    s16 b;
    s32 d;
    if (r->c9 == 1 || r->c9 == 3) {
        a = r->c12;
        d = data_021f5c30 - a;
        if (d < 0) d += 16;
        rv = d << 14;
        if (gSndMgr.q == 0) return 0;
        if (gSndMgr.q->s1a == 1) {
            s32 w = data_021f5c34;
            if (w < 32) {
                rv += (w << 14) >> 5;
            } else {
                rv += ((w - 32) << 14) >> 4;
            }
        } else {
            rv += FX_Div(data_021f5c34 << 14, 0x18000);
        }
        if (r->c10 == 2) {
            rv <<= 1;
            if (rv > 0x40000) rv -= 0x40000;
        }
    } else {
    func_0210a024(r, 7, &a);
    func_0210a024(r, 12, &b);
    d = data_021f5c30 - a;
    if (d < 0) d += 16;
    switch (r->c10) {
    case 1:
    case 2:
    case 4:
        sc = r->c10;
        break;
    case 99:
        sc = r->c14;
        break;
    }
    if (gSndMgr.q == 0) return 0;
    switch (gSndMgr.q->s1a) {
    case 0:
        rv = 24;
        break;
    case 1: {
        s32 w = data_021f5c34;
        if (w < 32) {
            rv = 32;
        } else {
            data_021f5c34 = w - 32;
            rv = 16;
        }
        break;
    }
    }
    if (r->c16 == 0) {
        if (d >= sc) r->c16 = 1;
    }
    if (r->c16 != 0) {
        if (r->c11 == 0) r->c16 = 0;
    }
    if (r->c16 != 0) {
        rv = 0;
    } else {
        rv = FX_Div((d * rv + data_021f5c34) << 12, (sc * rv) << 12) << 6;
    }
    }
    return rv;
}

BgmTempoTracker::BgmTempoTracker() {
    w4 = 0;
    c8 = 0;
    c9 = 0;
    c10 = 0;
    c11 = -1;
    c12 = -1;
    h14 = 120;
    c16 = -1;
    func_02109fb4(2, -1);
    func_02109fb4(1, -1);
}

BgmTempoTracker::~BgmTempoTracker() {
    gSndMgr.cur = 0;
}

void BgmTempoTracker::setMode(u8 v) {
    c8 = v;
    c11 = -1;
    c12 = -1;
    c9 = 0;
    if (c8 != 0) {
        h14 = 120;
        w4 = FX_Div(0x258000, (s32)h14 << 12);
    } else {
        h14 = 120;
        Snd_StopHandle(&gSndBgmHandle, 0);
    }
}

void BgmTempoTracker::update() {
    s16 a[3];
    if (!nz((u32)gSndMgr.h)) NNS_SndArcPlayerStartSeq(&gSndBgmHandle, 248);
    func_0210a008(1, &a[0]);
    func_0210a008(2, &a[1]);
    func_0210a024(&gSndBgmHandle, 6, &a[2]);
    c10 = (a[1] != c16);
    c16 = a[1];
    h18 = a[2];
    if (c8 != 0) return;
    syncTempo();
}

void BgmTempoTracker::syncTempo() {
    Hr *const h = &gSndBgmHandle;
    u16 buf[8];
    while (SND_RecvCommandReply(0) != 0)
        ;
    func_021094f8();
    SND_FlushCommand(0);
    if (func_02109f80(h, buf) == 0) return;
    h14 = buf[3];
    w4 = FX_Div(0x258000, (s32)h14 << 12);
}

BgmBeatPhase::BgmBeatPhase() {
    trackAnim = -1;
    seqVar0 = -1;
    seqVar2 = -1;
    seqVar3 = -1;
    unk_10 = 0;
    unk_0c = unk_10;
    unk_08 = unk_0c;
}

BgmBeatSync::BgmBeatSync() {
    sub.seqVar4 = -1;
    c28 = 0;
    c2a = 0;
    c29 = 1;
    s2c = -1;
    c2e = 1;
    gSndMgr.cur = this;
}

BgmBeatSync::~BgmBeatSync() {
    this->BgmTempoTracker::~BgmTempoTracker();
}

void BgmBeatSync::setEnable(u8 v) {
    c28 = v;
}

void BgmBeatSync::update() {
    s16 v;
    if (c28 == 0) return;
    BgmTempoTracker::update();
    pickAnim();
    readTempo();
    if (sub.seqVar4 == -1) {
        Hr *h = &gSndBgmHandle;
        s32 id;
        if (!nz((u32)h->p)) return;
        func_0210a024(h, 4, &v);
        sub.seqVar4 = v;
        sub.unk_08 = 0;
        sub.unk_0c = 0;
        sub.unk_10 = 0;
        id = h->p->id;
        switch (id) {
        case 109:
        case 163:
            c29 = 1;
            break;
        case 110:
            c29 = 2;
            break;
        }
        switch (id) {
        case 109:
        case 159:
        case 162:
        case 164:
            c2a = 1;
            return;
        case 103:
        case 104:
        case 108:
        case 110:
        case 111:
        case 119:
        case 133:
        case 158:
        case 166:
            c2a = 2;
            return;
        case 148:
            c2a = 3;
            return;
        default:
            c2a = 0;
            return;
        }
    } else {
        calcPhase();
    }
}

void BgmBeatSync::pickAnim() {
    Hr *const h = &gSndBgmHandle;
    s32 i;
    u8 buf[28];
    sub.trackAnim = -1;
    for (i = 2; i <= 13; i++) {
        if (func_02109f4c(h, i, buf) == 0) continue;
        if (i == 10) continue;
        if (buf[9] == 0) continue;
        switch (i) {
        case 11:
            sub.trackAnim = 0;
            return;
        case 6:
            sub.trackAnim = 1;
            return;
        case 3:
        case 9:
            sub.trackAnim = 2;
            return;
        case 5:
        case 8:
            sub.trackAnim = 3;
            return;
        case 2:
        case 7:
        case 12:
            sub.trackAnim = 4;
            return;
        case 4:
        case 13:
            sub.trackAnim = 5;
            return;
        default:
            sub.trackAnim = 0;
            return;
        }
    }
}

void BgmBeatSync::readTempo() {
    Hr *const h = &gSndBgmHandle;
    s16 v[4];
    if (!nz((u32)h->p)) return;
    func_0210a024(h, 1, &v[0]);
    func_0210a024(h, 0, &v[1]);
    func_0210a024(h, 2, &v[2]);
    func_0210a024(h, 3, &v[3]);
    sub.seqVar0 = v[1];
    sub.seqVar2 = v[2];
    sub.seqVar3 = v[3];
    if (s2c > v[0]) c2e = (c2e == 0);
    s2c = v[0];
}

void BgmBeatSync::calcPhase() {
    s16 t;
    s32 den;
    s32 d;
    sub.unk_08 = FX_Div(s2c << 12, 0x3000);
    t = s2c;
    switch (sub.seqVar4) {
    case 3:
        den = 0x4800;
        break;
    case 4:
    default:
        switch (c2a) {
        case 0:
        default:
            t = t % 96;
            den = 0x3000;
            break;
        case 1:
            t = t % 48;
            den = 0x1800;
            break;
        case 2:
            t = t % 192;
            den = 0x6000;
            break;
        }
        break;
    }
    d = FX_Div(t << 12, den) + 0xc000;
    if (d >= 0x20000) d -= 0x20000;
    sub.unk_10 = d;
    t = s2c;
    switch (sub.seqVar4) {
    case 4:
    default:
        switch (c2a) {
        case 0:
        default:
            t = t % 96;
            den = 0x4ccd;
            break;
        case 1:
            t = t % 48;
            den = 0x2666;
            break;
        case 2:
            t = t % 192;
            den = 0x999a;
            break;
        }
        break;
    case 3:
        if (c2a == 3) {
            if (c2e == 0) t = t + 0x90;
            den = 0xe666;
        } else {
            if (c2e == 0) t = t + 0x30;
            t = t % 96;
            den = 0x4ccd;
        }
        break;
    }
    d = FX_Div(t << 12, den) + 0x4000;
    if (d >= 0x14000) d -= 0x14000;
    sub.unk_0c = d;
}

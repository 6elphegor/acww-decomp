// mwcc-flags: -nothumb -O4,p
// RC_020f4a5c: the sequence-player source file (G012b) as a WHOLE file with its data. mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020f4a5c-0x020f5b9c (40 functions), .rodata 0x0213597c-0x02135c9c (three pattern tables), .data 0x0213b9d8-0x0213b9dc
// (stream-pair switch), autoload_3 .bss 0x021f5c28-0x021f5c30. No vtable, no __sinit. Code unchanged from G012b (functions stay
// extern "C" under their func_ names, the object first; func_020f5b84 keeps its label _ZN11MelodyTrackD1Ev).
// EXTENT (new): this is NOT part of the blocked pan-curve file 0x020f44f0-0x020f4a5c. bss: the pan-curve objects end with the 0x1c-byte
// Ramp gSndVolumeCurve; the 2-byte data_021f5c28 after it starts a new file (objects are sorted by ascending size); its users and those
// of sMelodyBeatPattern, the 1-byte data_0213b9d8 (after the 0x1c-byte vtables of unk_020f30fc.cpp: new file) and the .rodata tables
// 0x0213597c.. (after the 0x18-byte name table of the task manager: new file; followed by a 4-byte object: next file) are all in
// 0x020f4a5c-0x020f5b9c; the pan-curve code (0x020f44f0-0x020f4a5c, with Snd_CalcListenerDistance) uses only bss 0x021f5bfc-0x021f5c28.
// The unit's own compile reproduces the order of all six objects with the definitions at the end of the file in address order.
#include "types.h"
#include "game/Vec3.h"

struct Obj {
    /* 0x00 */ u32 *vptr;
    /* 0x04 */ u8 pad04[0x30];
    /* 0x34 */ void *f34;
    /* 0x38 */ u8 pad38[4];
    /* 0x3c */ u16 h3c;
    /* 0x3e */ u8 b3e;
    /* 0x3f */ u8 b3f;
    /* 0x40 */ u8 b40;
};


struct Seq1 {
    /* 0x00 */ void *h;
    /* 0x04 */ u16 id;
    /* 0x06 */ s8 step;
    /* 0x07 */ u8 tick;
    /* 0x08 */ s8 v8;
    /* 0x09 */ s8 v9;
    /* 0x0a */ u8 active;
    /* 0x0b */ u8 limit;
};

struct Seq2 {
    /* 0x00 */ void *h;
    /* 0x04 */ u8 *pat;
    /* 0x08 */ u16 id;
    /* 0x0a */ u8 active;
    /* 0x0b */ s8 pos;
    /* 0x0c */ u8 tick;
    /* 0x0d */ u8 pad0d;
    /* 0x0e */ s8 s14;
    /* 0x0f */ s8 s15;
    /* 0x10 */ s8 s16;
    /* 0x11 */ s8 s17;
};

struct Ctl2 {
    /* 0x00 */ Seq2 a;
    /* 0x14 */ Seq2 b;
    /* 0x28 */ u8 pat[16];
    /* 0x38 */ u8 b38;
    /* 0x39 */ s8 b39;
    /* 0x3a */ s8 b3a;
    /* 0x3b */ u8 b3b;
    /* 0x3c */ u8 b3c;
};

struct SndObjX {
    /* 0x00 */ u8 pad0[6];
    /* 0x06 */ u8 b6;
    /* 0x07 */ u8 pad7[5];
    /* 0x0c */ s32 w0c;
    /* 0x10 */ u8 pad10[2];
    /* 0x12 */ u8 b12;
    /* 0x13 */ u8 pad13[10];
    /* 0x1d */ u8 b1d;
};

struct Glob {
    /* 0x00 */ u8 pad0[0x28];
    /* 0x28 */ void *f28;
    /* 0x2c */ SndObjX *f2c;
    /* 0x30 */ Ctl2 *f30;
    /* 0x34 */ u8 pad34[0x19];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad4e[0x12];
    /* 0x60 */ u8 f60;
};

extern "C" {
extern Glob gSndMgr;

u32 SndMgr_Rand(void *g, u32 n);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void NNS_SndHandleReleaseSeq(void *p);
void func_0210a148(void *p, u32 a, s32 b);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 b);
void func_0210a0b8(void *p, s32 v);
void func_0210a024(void *p, u32 a, void *out);
void Snd_StopHandle(void *p, u32 v);
void Snd_InitHandle(void *p);
void Snd_StartSeqArc(u16 a, u16 b, void *out);
void *Snd_GetHeap(void);
void NNS_SndHeapLoadState(void *a, u32 b);
void func_0210cc84(u32 id, void *h);
void NNS_SndArcLoadBank(u32 id, void *h);
BOOL NNS_SndArcPlayerStartSeqArc(void *a, u32 b, u32 c);
s32 FX_Div(s32 a, s32 b);

s32 Snd_DistanceToVolume(s32 x);
s32 Snd_CalcPan(Vec3 *p, s32 m);
s32 Snd_CalcListenerDistance(Vec3 *p, s32 m);
void MelodyBeat_ApplyPosition(void *obj, Vec3 *pos);
BOOL MelodyBeat_EndStep(Seq1 *self);
void MelodyBeat_PlayStep(Seq1 *self, Vec3 *pos);
void MelodyBeat_ReadParams(Seq1 *self);
u8 *MelodyPlayer_GetPattern(Ctl2 *c);
void MelodyPlayer_LoadBank(void *c, u32 id);
void MelodyPlayer_LoadSeqArc(void *c, u32 id);
void MelodyTrack_SetInstrument(Seq2 *s, u16 v);
void MelodyTrack_PlayNote(Seq2 *s, u32 idx);
void MelodyTrack_StartPattern(Seq2 *s, u8 *pat);
void MelodyTrack_Start(Seq2 *s, u16 id, u8 *pat);
void MelodyTrack_Init(Seq2 *s);
void MelodyTrack_Stop(void *p);
void MelodyTrack_Reset(Seq2 *s);
s32 MelodyTrack_Update(Seq2 *s);
BOOL MelodyTrack_CheckEnd(Seq2 *s);
void MelodyTrack_PlayStep(Seq2 *s);
u8 MelodyTrack_GetStepNote(Seq2 *s, u8 idx);
void MelodyTrack_ReadParams(Seq2 *s);
}

// this file's objects (defined at the end of the file; defining them here instead gives the same object)
extern u8 data_0213b9d8;
extern u16 data_021f5c28;
extern u8 *sMelodyBeatPattern;
extern const u8 sMelodyPresetPatterns[48][16];
extern const u8 sMelodyDefaultPattern[16];
extern const u8 data_0213597c[16];

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

static inline BOOL nz(void *p) {
    return p != 0;
}

// dtor D1 (alias _ZN11MelodyTrackD1Ev): NNS_SndHandleReleaseSeq(this)
extern "C" Obj *func_020f5b84(Obj *self) {
    NNS_SndHandleReleaseSeq(self);
    return self;
}

// Seq2: init
extern "C" void MelodyTrack_Init(Seq2 *self) {
    MelodyTrack_Reset(self);
    Snd_InitHandle(self);
}

// Seq2: start with id and pattern
extern "C" void MelodyTrack_Start(Seq2 *self, u16 id, u8 *pat) {
    MelodyTrack_Reset(self);
    if (nz(self->h)) Snd_StopHandle(self, 0);
    self->id = id;
    self->pat = pat;
    self->active = 1;
    Snd_StartSeqArc(0, self->id, self);
}

// Seq2: start with a pattern
extern "C" void MelodyTrack_StartPattern(Seq2 *self, u8 *pat) {
    MelodyTrack_Reset(self);
    if (nz(self->h)) Snd_StopHandle(self, 0);
    self->pat = pat;
    self->active = 1;
    Snd_StartSeqArc(0, self->id, self);
}

// Seq2: play event idx + 20
extern "C" void MelodyTrack_PlayNote(Seq2 *self, u32 idx) {
    MelodyTrack_Reset(self);
    if (idx > 13) return;
    if (nz(self->h)) Snd_StopHandle(self, 0);
    Snd_StartSeqArc(idx + 20, 0xd3, self);
}

// Seq2: set id
extern "C" void MelodyTrack_SetInstrument(Seq2 *s, u16 v) {
    s->id = v;
}

// cancel (Snd_StopHandle(p, 5))
extern "C" void MelodyTrack_Stop(void *p) {
    return Snd_StopHandle(p, 5);
}

// Seq2: reset state
extern "C" void MelodyTrack_Reset(Seq2 *self) {
    self->active = 0;
    self->pos = -1;
    self->tick = 0;
    self->s14 = self->s15 = self->s16 = self->s17 = -1;
}

// Seq2: read the four parameters of the playing sound
extern "C" void MelodyTrack_ReadParams(Seq2 *self) {
    s16 a, b, c, d;
    d = -1;
    c = -1;
    b = -1;
    a = -1;
    func_0210a024(self, 0, &a);
    func_0210a024(self, 1, &b);
    func_0210a024(self, 2, &c);
    func_0210a024(self, 3, &d);
    self->s14 = a;
    self->s15 = b;
    self->s16 = c;
    self->s17 = d;
}

// Seq2: pattern value for step idx (mode 0 plain, 1 / 2 pairs, 3 table lookup)
extern "C" u8 MelodyTrack_GetStepNote(Seq2 *self, u8 idx) {
    u8 r;
    switch (self->s16) {
    case 0:
        r = self->pat[idx];
        break;
    case 1: {
        u8 m = idx % 3;
        if (m == 1) {
            r = 14;
        } else {
            u8 q = idx / 3;
            if (m == 0) {
                r = self->pat[q * 2];
            } else {
                r = self->pat[q * 2 + 1];
            }
        }
        break;
    }
    case 2: {
        u8 m = idx % 3;
        if (m == 2) {
            r = 14;
        } else {
            u8 q = idx / 3;
            if (m == 0) {
                r = self->pat[q * 2];
            } else {
                r = self->pat[q * 2 + 1];
            }
        }
        break;
    }
    case 3: {
        s32 found = 0;
        s32 j;
        for (j = 0; j < 13; j++) {
            if (idx == data_0213597c[j]) {
                r = self->pat[j];
                found = 1;
            }
        }
        if (found == 0) r = 14;
        break;
    }
    }
    return r;
}

// Seq2: start the sound of the current step, volume by position
extern "C" void MelodyTrack_PlayStep(Seq2 *self) {
    u32 v = MelodyTrack_GetStepNote(self, self->pos);
    s32 d = 153600 / (self->s14 * 120);
    switch (v) {
    case 13:
        Snd_StartSeqArc(v + 1 + SndMgr_Rand(&gSndMgr, 6), self->id, self);
        func_0210a0b8(self, d);
        break;
    case 14:
    case 15:
        break;
    default:
        Snd_StartSeqArc(v + 1, self->id, self);
        func_0210a0b8(self, d);
        break;
    }
    if (self->s16 != 3) return;
    {
        const u8 *t = data_0213597c;
        s32 p = self->pos;
        s32 vol;
        if (p == t[0]) vol = 64;
        else if (p == t[1]) vol = 80;
        else if (p == t[2]) vol = 96;
        else if (p == t[3]) vol = 112;
        else if (p == t[4]) vol = 127;
        else if (p == t[5]) vol = 127;
        else if (p == t[6]) vol = 112;
        else if (p == t[7]) vol = 96;
        else if (p == t[8]) vol = 80;
        else if (p == t[9]) vol = 64;
        else if (p == t[10]) vol = 48;
        else if (p == t[11]) vol = 32;
        else if (p == t[12]) vol = 16;
        else vol = -1;
        if (vol != -1) NNS_SndPlayerSetVolume(self, vol);
    }
    {
        Ctl2 *c = gSndMgr.f30;
        func_0210a148(self, 0xff, c->b39);
        NNS_SndPlayerSetTrackPan(self, 0xff, c->b3a);
    }
}

// Seq2: end-of-pattern test (positions 15 / 23 / table+6 depending on the mode); starts the next step
extern "C" BOOL MelodyTrack_CheckEnd(Seq2 *self) {
    s8 k = self->s16;
    u32 v;
    if (k == 0) {
        if (self->pos == 15) {
            Snd_StopHandle(self, 0);
            gSndMgr.f30->b3c = 0;
            return TRUE;
        }
    } else if ((u8)(s8)(k - 1) <= 1) {
        if (self->pos == 23) {
            Snd_StopHandle(self, 0);
            gSndMgr.f30->b3c = 0;
            return TRUE;
        }
    } else if (k == 3) {
        if (self->pos == data_0213597c[12] + 6) {
            Snd_StopHandle(self, 0);
            gSndMgr.f30->b3c = 0;
            return TRUE;
        }
    }
    v = MelodyTrack_GetStepNote(self, self->pos + 1);
    if (v != 14 && (v != 15 || self->s17 != 1)) Snd_StopHandle(self, 0);
    return FALSE;
}

// Seq2: per-frame update; returns the current position or -1
extern "C" s32 MelodyTrack_Update(Seq2 *self) {
    s32 r = -1;
    if (self->active) {
        if (self->s14 == -1) {
            MelodyTrack_ReadParams(self);
        } else {
            BOOL t = 0;
            if (self->tick == self->s15) t = MelodyTrack_CheckEnd(self);
            if (t) {
                MelodyTrack_Reset(self);
            } else {
                if (self->tick == 0 || self->tick == self->s14) {
                    self->tick = 0;
                    self->pos++;
                    MelodyTrack_PlayStep(self);
                }
                self->tick++;
            }
            r = self->pos;
        }
    }
    return r;
}

// Ctl2 ctor: registers itself in gSndMgr+0x30
extern "C" void MelodyPlayer_Init(Ctl2 *c) {
    gSndMgr.f30 = c;
    MelodyTrack_Init(&c->b);
    MelodyTrack_Init(&c->a);
    MelodyTrack_SetInstrument(&c->a, 0);
    c->b38 = 0;
    c->b39 = -1;
    c->b3a = 0;
    c->b3b = 0;
}

// address of sMelodyDefaultPattern
extern "C" u8 *Melody_GetDefaultPattern(void) {
    return (u8 *)sMelodyDefaultPattern;
}

// Ctl2: copy a 16-byte pattern
extern "C" void MelodyPlayer_SetPattern(Ctl2 *c, u8 *src) {
    s32 i;
    for (i = 0; i < 16; i++) {
        c->pat[i] = src[i];
    }
}

// Ctl2: address of the pattern (+0x28)
extern "C" u8 *MelodyPlayer_GetPattern(Ctl2 *c) {
    return c->pat;
}

// Ctl2: start by index with a given pattern (400 = special)
extern "C" void MelodyPlayer_PlayPattern(Ctl2 *c, u32 v, u8 *pat) {
    u32 w;
    c->b3c = 1;
    c->b39 = -1;
    if (v == 400) {
        MelodyTrack_Start(&c->b, 0xd3, pat);
        return;
    }
    if (v < 200) {
        MelodyPlayer_LoadBank(c, v + 0x1df);
        w = v + 4;
        MelodyPlayer_LoadSeqArc(c, w);
        MelodyTrack_Start(&c->b, w, pat);
    } else {
        MelodyPlayer_LoadBank(c, v + 0x1ad);
        w = v - 0x2e;
        MelodyPlayer_LoadSeqArc(c, w);
        MelodyTrack_Start(&c->b, w, pat);
    }
}

// Ctl2: start by index with the stored pattern (index < 200 or >= 200)
extern "C" void MelodyPlayer_Play(Ctl2 *c, u32 v) {
    u32 w;
    c->b3c = 1;
    c->b39 = -1;
    if (v < 200) {
        MelodyPlayer_LoadBank(c, v + 0x1df);
        w = v + 4;
        MelodyPlayer_LoadSeqArc(c, w);
        MelodyTrack_Start(&c->b, w, c->pat);
    } else {
        MelodyPlayer_LoadBank(c, v + 0x1ad);
        w = v - 0x2e;
        MelodyPlayer_LoadSeqArc(c, w);
        MelodyTrack_Start(&c->b, w, c->pat);
    }
}

// Ctl2: start by index (0..200), random pattern row
extern "C" void MelodyPlayer_PlayRandom(Ctl2 *c, u32 v) {
    u32 w;
    c->b3c = 1;
    c->b39 = -1;
    if (v > 200) return;
    MelodyPlayer_LoadBank(c, v + 0x1df);
    w = v + 4;
    MelodyPlayer_LoadSeqArc(c, w);
    c->b3b = SndMgr_Rand(&gSndMgr, 0x30);
    MelodyTrack_Start(&c->b, w, (u8 *)sMelodyPresetPatterns[c->b3b]);
}

// Ctl2: copy a random-chosen pattern row (16 bytes) from sMelodyPresetPatterns
extern "C" u8 *MelodyPlayer_ApplyRandomPattern(Ctl2 *c) {
    const u8 *src = sMelodyPresetPatterns[c->b3b];
    s32 i;
    for (i = 0; i < 16; i++) {
        c->pat[i] = src[i];
    }
    return c->pat;
}

// Ctl2: stop the second player
extern "C" void MelodyPlayer_StopTrackB(Ctl2 *c) {
    MelodyTrack_Stop(&c->b);
    c->b.active = 0;
}

// Ctl2: start the first player with the stored pattern
extern "C" void MelodyPlayer_StartTrackA(Ctl2 *c) {
    return MelodyTrack_StartPattern(&c->a, c->pat);
}

// Ctl2: start the event of the given mode with listener volume / pan from a position
extern "C" void MelodyPlayer_PlayAt(Ctl2 *c, Vec3 *pos, u32 mode) {
    u32 a;
    u32 b;
    if ((u8)(c->b3c + 255) <= 1) return;
    c->b39 = Snd_DistanceToVolume(Snd_CalcListenerDistance(pos, 0));
    c->b3a = Snd_CalcPan(pos, 0);
    c->b3c = 4;
    switch (mode) {
    case 0:
        a = 0x1db;
        b = 0xd4;
        break;
    case 1:
        a = 0x1de;
        b = 0xd7;
        break;
    case 2:
        a = 0x1dc;
        b = 0xd5;
        break;
    case 3:
        a = 0x1dd;
        b = 0xd6;
        break;
    default:
        return;
    }
    MelodyPlayer_LoadBank(c, a);
    MelodyPlayer_LoadSeqArc(c, b);
    MelodyTrack_Start(&c->b, b, c->pat);
}

// Ctl2: start event on the second player
extern "C" void MelodyPlayer_PlayNote(Ctl2 *c, u32 idx) {
    return MelodyTrack_PlayNote(&c->b, idx);
}

// Ctl2: update both Seq2 players, +0x38 = first one is active
extern "C" void MelodyPlayer_Update(Ctl2 *c) {
    c->b38 = MelodyTrack_Update(&c->a) >= 0;
    MelodyTrack_Update(&c->b);
}

// Ctl2: byte +0x38 (playing flag)
extern "C" u8 MelodyPlayer_IsPlaying(Ctl2 *c) {
    return c->b38;
}

// forward to MelodyTrack_SetInstrument (set id)
extern "C" void MelodyPlayer_SetInstrument(Seq2 *s, u16 v) {
    return MelodyTrack_SetInstrument(s, v);
}

// same with volume reset (NNS_SndHeapLoadState(stream, 0)) and NNS_SndArcLoadBank
extern "C" void MelodyPlayer_LoadBank(void *c, u32 id) {
    void *h = gSndMgr.f28;
    NNS_SndHeapLoadState(h, 0);
    NNS_SndArcLoadBank(id, h);
}

// start sound id in the stream of the sound manager (gSndMgr+0x28)
extern "C" void MelodyPlayer_LoadSeqArc(void *c, u32 id) {
    func_0210cc84(id, gSndMgr.f28);
}

// empty
extern "C" void MelodyBeat_Construct(void) {
}

// empty
extern "C" void MelodyBeat_Destruct(void) {
}

// Seq1: init (pattern table from MelodyPlayer_GetPattern)
extern "C" void MelodyBeat_Init(Seq1 *self) {
    sMelodyBeatPattern = MelodyPlayer_GetPattern(gSndMgr.f30);
    Snd_InitHandle(self);
    self->active = 0;
    self->step = -1;
    self->tick = 0;
    self->v8 = self->v9 = -1;
}

// Seq1: stop
extern "C" void MelodyBeat_Stop(Seq1 *self) {
    self->active = 0;
    if (nz(self->h)) Snd_StopHandle(self, 0);
    NNS_SndHandleReleaseSeq(self);
}

// Seq1: start pattern/sound id (switches the stream pair 1 / 2 through data_0213b9d8)
extern "C" void MelodyBeat_Start(Seq1 *self, u16 id) {
    Ctl2 *c = gSndMgr.f30;
    SndObjX *o;
    void *h;
    u32 ok;
    if (c->b3c == 1) return;
    Snd_StopHandle(self, 0);
    c->b3c = 2;
    data_021f5c28 = self->id;
    self->id = id;
    ok = 0;
    self->active = 1;
    self->step = -1;
    if (NNS_SndArcPlayerStartSeqArc(self, self->id, ok)) {
        if (data_021f5c28 == self->id) ok = 1;
        Snd_StopHandle(self, 0);
    }
    if (ok) return;
    o = gSndMgr.f2c;
    if (o == 0) return;
    if (o->b6 != 0) {
        data_0213b9d8 = 2;
    } else {
        data_0213b9d8 = (data_0213b9d8 == 1) ? 2 : 1;
    }
    if (data_0213b9d8 == 1) {
        h = Snd_GetHeap();
        NNS_SndHeapLoadState(h, o->b1d + 1);
    } else if (data_0213b9d8 == 2) {
        h = gSndMgr.f28;
        Snd_GetHeap();
        NNS_SndHeapLoadState(h, 0);
    }
    {
        u32 sid = self->id;
        func_0210cc84(sid, h);
        NNS_SndArcLoadBank(sid + 0x1db, h);
    }
}

// Seq1: per-frame update of the pattern player
extern "C" void MelodyBeat_Update(Seq1 *self, Vec3 *pos) {
    SndObjX *o;
    u8 flag;
    s32 v;
    s32 w;
    if (self->active == 0) return;
    if (self->v8 == -1) {
        if (!nz(self->h)) Snd_StartSeqArc(0, self->id, self);
        MelodyBeat_ReadParams(self);
        return;
    }
    self->tick++;
    o = gSndMgr.f2c;
    flag = o->b12;
    if (self->tick >= self->limit) {
        BOOL done = MelodyBeat_EndStep(self);
        self->tick = 0;
        if (done) return;
    }
    if (flag == 0) return;
    self->step++;
    self->tick = 0;
    if (self->step < 16) {
        MelodyBeat_PlayStep(self, pos);
    } else if (self->step >= 16) {
        MelodyBeat_EndStep(self);
        return;
    }
    v = self->v8;
    w = o->w0c;
    if (v == 100) {
        self->limit = w >> 12;
        return;
    }
    self->limit = FX_Mul(w, FX_Div(v << 12, 100 << 12)) >> 12;
}

// Seq1: read the two pattern parameters (ids 4 and 3) of the playing sound
extern "C" void MelodyBeat_ReadParams(Seq1 *self) {
    s16 a, b;
    b = -1;
    a = -1;
    func_0210a024(self, 4, &a);
    func_0210a024(self, 3, &b);
    self->v8 = a;
    self->v9 = b;
}

// Seq1: start the sound of the current pattern step (13 = random variant)
extern "C" void MelodyBeat_PlayStep(Seq1 *self, Vec3 *pos) {
    u32 v = sMelodyBeatPattern[self->step];
    switch (v) {
    case 13:
        if (nz(self->h)) Snd_StopHandle(self, 0);
        NNS_SndArcPlayerStartSeqArc(self, self->id, (u16)(v + 1 + SndMgr_Rand(&gSndMgr, 6)));
        MelodyBeat_ApplyPosition(self, pos);
        return;
    case 14:
    case 15:
        return;
    }
    if (nz(self->h)) Snd_StopHandle(self, 0);
    NNS_SndArcPlayerStartSeqArc(self, self->id, (u16)(v + 1));
    MelodyBeat_ApplyPosition(self, pos);
}

// Seq1: advance to the next pattern step or end the sequence (returns TRUE at the end)
extern "C" BOOL MelodyBeat_EndStep(Seq1 *self) {
    s32 s = self->step;
    if (s >= 15) {
        Snd_StopHandle(self, 0);
        gSndMgr.f30->b3c = 0;
        self->active = 0;
        self->step = -1;
        self->tick = 0;
        return TRUE;
    }
    u32 v = sMelodyBeatPattern[s + 1];
    if (v != 14) {
        if (v == 15) {
            if (self->v9 != 1) Snd_StopHandle(self, 0);
        } else {
            Snd_StopHandle(self, 0);
        }
    }
    return FALSE;
}

// set the volume (id 15) and pan (id 15) of a voice from a position
extern "C" void MelodyBeat_ApplyPosition(void *obj, Vec3 *pos) {
    s32 a = Snd_DistanceToVolume(Snd_CalcListenerDistance(pos, 0));
    s32 b = Snd_CalcPan(pos, 0);
    func_0210a148(obj, 15, a);
    NNS_SndPlayerSetTrackPan(obj, 15, b);
}

// ---- file-scope objects, defined after their users (definition order sets the .rodata / .data / .bss order)
u8 data_0213b9d8 = 1; // which stream pair (1 / 2) Seq1 uses
u16 data_021f5c28; // id of the last Seq1 pattern
u8 *sMelodyBeatPattern; // current Ctl2 pattern row
const u8 data_0213597c[16] = {0, 2, 3, 4, 5, 6, 7, 9, 11, 15, 19, 25, 33, 0, 0, 0};
const u8 sMelodyDefaultPattern[16] = {10, 12, 10, 7, 6, 7, 9, 11, 10, 15, 13, 15, 3, 14, 14, 15};
const u8 sMelodyPresetPatterns[48][16] = {
    {10, 14, 3, 14, 4, 9, 14, 3, 6, 7, 8, 9, 10, 14, 14, 14},
    {0, 2, 4, 7, 9, 14, 8, 14, 0, 2, 4, 7, 9, 14, 14, 14},
    {10, 9, 8, 7, 6, 5, 4, 3, 2, 3, 4, 5, 3, 15, 15, 15},
    {4, 7, 9, 7, 8, 11, 4, 7, 9, 7, 8, 11, 15, 15, 15, 15},
    {9, 9, 15, 9, 15, 7, 9, 15, 11, 15, 15, 15, 15, 15, 15, 15},
    {3, 7, 5, 7, 2, 7, 6, 7, 5, 7, 10, 9, 10, 14, 3, 15},
    {8, 7, 3, 15, 8, 7, 3, 15, 8, 7, 8, 7, 6, 15, 15, 15},
    {3, 15, 3, 4, 5, 15, 4, 3, 15, 7, 15, 5, 15, 10, 15, 15},
    {7, 15, 5, 15, 6, 4, 2, 4, 3, 5, 7, 13, 3, 14, 15, 15},
    {10, 9, 15, 8, 7, 8, 15, 9, 10, 15, 7, 15, 13, 15, 15, 15},
    {6, 8, 10, 15, 6, 8, 10, 15, 8, 10, 8, 10, 14, 14, 14, 14},
    {0, 0, 0, 0, 7, 15, 0, 0, 15, 5, 15, 0, 1, 14, 14, 14},
    {5, 15, 15, 5, 6, 15, 15, 6, 7, 15, 15, 8, 14, 7, 5, 3},
    {5, 14, 6, 5, 4, 14, 2, 4, 3, 14, 13, 14, 3, 14, 14, 14},
    {6, 3, 6, 7, 8, 3, 6, 8, 7, 3, 10, 7, 6, 5, 6, 14},
    {7, 14, 3, 2, 3, 4, 5, 6, 7, 15, 9, 15, 13, 15, 15, 15},
    {11, 9, 10, 11, 15, 15, 4, 10, 9, 7, 8, 9, 14, 15, 15, 15},
    {5, 14, 6, 14, 7, 14, 10, 14, 11, 14, 10, 14, 12, 14, 14, 15},
    {12, 14, 11, 14, 8, 14, 9, 14, 10, 14, 14, 14, 14, 15, 15, 15},
    {4, 5, 6, 4, 3, 14, 14, 15, 2, 3, 4, 14, 3, 14, 14, 14},
    {5, 8, 7, 8, 5, 15, 15, 15, 5, 8, 7, 8, 5, 15, 15, 15},
    {8, 12, 11, 10, 8, 15, 7, 15, 8, 14, 14, 14, 15, 15, 15, 15},
    {3, 6, 15, 6, 5, 15, 4, 15, 3, 15, 9, 15, 10, 15, 15, 15},
    {1, 1, 1, 2, 3, 2, 1, 5, 6, 8, 6, 4, 5, 14, 14, 15},
    {7, 7, 15, 7, 7, 15, 8, 15, 7, 6, 5, 13, 3, 15, 15, 15},
    {6, 15, 15, 6, 4, 15, 15, 4, 7, 15, 15, 7, 3, 3, 4, 5},
    {6, 15, 6, 7, 8, 15, 6, 8, 7, 15, 10, 7, 6, 5, 6, 15},
    {6, 15, 8, 10, 9, 15, 10, 15, 6, 6, 8, 10, 9, 11, 10, 15},
    {3, 5, 15, 6, 7, 15, 3, 6, 15, 7, 8, 15, 7, 10, 9, 10},
    {7, 7, 7, 9, 10, 10, 10, 15, 11, 9, 8, 9, 13, 15, 15, 15},
    {2, 4, 7, 9, 11, 15, 12, 14, 11, 10, 9, 13, 7, 15, 15, 15},
    {8, 14, 14, 7, 14, 14, 6, 14, 7, 5, 4, 3, 2, 14, 4, 3},
    {5, 14, 14, 8, 14, 7, 6, 14, 7, 5, 14, 14, 14, 15, 5, 8},
    {3, 5, 7, 10, 9, 7, 4, 5, 6, 8, 10, 12, 11, 9, 10, 14},
    {10, 15, 10, 9, 10, 15, 10, 9, 10, 15, 7, 15, 3, 15, 13, 15},
    {7, 14, 8, 9, 14, 10, 11, 14, 14, 7, 14, 14, 13, 14, 14, 14},
    {3, 14, 7, 14, 5, 14, 10, 14, 11, 14, 8, 11, 9, 14, 10, 15},
    {4, 11, 15, 10, 9, 15, 8, 15, 7, 15, 8, 15, 13, 15, 15, 15},
    {7, 8, 7, 8, 7, 15, 12, 15, 10, 15, 13, 15, 3, 14, 14, 14},
    {9, 11, 14, 9, 11, 14, 10, 12, 14, 10, 12, 14, 11, 9, 8, 7},
    {9, 9, 15, 9, 10, 15, 15, 11, 15, 9, 15, 8, 7, 15, 15, 15},
    {6, 10, 8, 15, 6, 10, 8, 7, 6, 10, 9, 10, 13, 14, 14, 14},
    {8, 15, 5, 7, 8, 15, 5, 7, 8, 8, 8, 10, 13, 14, 14, 15},
    {3, 5, 7, 15, 8, 14, 14, 7, 6, 5, 4, 13, 3, 15, 15, 15},
    {6, 3, 15, 6, 5, 3, 15, 5, 4, 15, 13, 15, 3, 15, 15, 15},
    {7, 14, 7, 7, 8, 7, 5, 4, 3, 15, 13, 15, 3, 14, 15, 15},
    {3, 15, 0, 15, 3, 15, 0, 15, 0, 0, 1, 2, 13, 15, 15, 15},
    {5, 15, 7, 6, 5, 15, 4, 15, 3, 4, 5, 7, 10, 15, 15, 15},
};

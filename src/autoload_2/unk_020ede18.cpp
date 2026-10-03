// mwcc-flags: -nothumb -O4,p
// G004d: autoload_2 0x020ede18-0x020ee98c (35 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined,
// every function is extern "C" under its symbols.txt name. Sound player object (Player) start/stop, and the "Group" of
// three sound handles (Ent, 12 bytes each: handle word, pan/volume/flag members): allocate, update (0x020ee1b0, the
// per-frame mixer with volume/pan clamping), init, flag helpers, and the list wrappers (NNS_Fnd list functions).
#include "types.h"

struct Ent {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ u16 unk_06;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 pad;
};

struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);
struct Group {
    /* 0x00 */ u8 pad0[8];
    /* 0x08 */ Ent unk_08[3];
    /* 0x2c */ GroupFn unk_2c;
    /* 0x30 */ GroupFn unk_30;
    /* 0x34 */ u16 unk_34;
    /* 0x36 */ u8 unk_36;
};

struct FndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
};
struct PlayCtx {
    /* 0x00 */ Group *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ u8 pad[8];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
};
struct InfoB {
    u8 pad[4];
    u8 unk_04;
};
struct Cfg4 {
    s32 unk_00, unk_04, unk_08, unk_0c;
};
struct Bytes4 {
    u8 b0, b1, b2, b3;
};
struct Player {
    /* 0x00 */ FndList list;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ Bytes4 unk_15;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u8 unk_24[4];
};

extern "C" {
void Fatal_Trap(void);
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void NNS_SndHandleReleaseSeq(void *p);
BOOL SndSeVoice_IsHeld(Ent *e);
void SndSeVoice_Stop(Ent *e, s32 a);
BOOL SndSeVoice_IsPlayingId(Ent *e, u32 a, u32 b);
void SndSeVoice_SetFlag(Ent *e, s32 bit, s32 on);
void SndSeVoice_SetParams(Ent *e, s32 c, s32 d);
s32 SndSeGroup_FindFreeVoice(Group *g);
void SndSeVoice_StartHeld(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeVoice_Start(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeGroup_SetFlag(Group *g, s32 bit, s32 on);
void SndSeVoice_Init(Ent *e);
void SndSeGroup_EvalListener(PlayCtx *c);
InfoB *func_0210b8a0(u32 a, u32 b);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void func_0210a1e8(void *p, s32 v);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 v);
void func_0210a148(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackPitch(void *p, u32 a, s32 b);
extern Cfg4 gSndSeSystem;
void *NNS_FndGetPrevListObject(void *list, void *obj);
void *NNS_FndGetNextListObject(void *list, void *obj);
void NNS_FndRemoveListObject(void *list, void *obj);
void NNS_FndAppendListObject(void *list, void *obj);

extern s32 (*gSndListenerDistanceCallback)(PlayCtx *);
extern s32 (*gSndListenerVolumeCallback)(PlayCtx *);
extern s32 (*gSndListenerPanCallback)(PlayCtx *);
extern u16 gSndPanTrackMask;
void SndSeGroup_StartVoice(Group *g, s32 i, s32 v);
void SndSeGroup_ApplyVoiceParams(Group *g, s32 i);
}
extern "C" {
s32 Snd_LoadGroup(u32 a);
}

// PROTOS-BEGIN
extern "C" {
void SndSeGroup_StopHeld(Group *g, s32 a);
void SndSeGroup_StopAll(Group *g, s32 a);
void SndSeGroup_StopVoice(Group *g, s32 i, s32 a);
void SndSeGroup_ReleaseAll(Group *g);
void SndSeGroup_Shutdown(Group *g);
s32 SndSeGroup_FindFreeVoice(Group *g);
void SndSeGroup_SetFlag(Group *g, s32 bit, s32 on);
BOOL SndSeVoice_IsHeld(Ent *e);
void SndSeVoice_SetFlag(Ent *e, s32 bit, s32 on);
void SndSeVoice_Stop(Ent *e, s32 x);
BOOL SndSeVoice_IsPlayingId(Ent *e, u32 a, u32 b);
void SndSeVoice_StartHeld(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeVoice_Start(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeVoice_SetParams(Ent *e, s32 c, s32 d);
void SndSeVoice_Init(Ent *e);
void SndSeGroup_EvalListener(PlayCtx *p);
void SndSeGroup_ApplyVoiceParams(Group *g, s32 i);
void SndSeGroup_StartVoice(Group *g, s32 i, s32 v);
}

extern "C" void SndList_InitLink(void **p) {
    if (p == NULL) Fatal_Trap();
    p[0] = NULL;
    p[1] = NULL;
}

extern "C" void SndList_Append(void *list, void *obj) {
    NNS_FndAppendListObject(list, obj);
}

extern "C" void SndList_Remove(void *list, void *obj) {
    NNS_FndRemoveListObject(list, obj);
}

extern "C" void *SndList_GetNext(void *list, void *obj) {
    return NNS_FndGetNextListObject(list, obj);
}

extern "C" void *SndList_GetPrev(void *list, void *obj) {
    return NNS_FndGetPrevListObject(list, obj);
}

extern "C" void *SndList_GetFirst(void **p) {
    return p[0];
}

extern "C" void *SndList_GetLast(void **p) {
    return p[1];
}

extern "C" void SndSeGroup_StartVoice(Group *g, s32 i, s32 v) {
    Ent *e = &g->unk_08[i];
    if (g->unk_36 == 0) Fatal_Trap();
    func_0210cebc(e, -1, -1, v, e->unk_08, e->unk_06);
}

extern "C" void SndSeGroup_ApplyVoiceParams(Group *g, s32 i) {
    Ent *e = &g->unk_08[i];
    if (g->unk_36 == 0) Fatal_Trap();
    func_0210a148(e, gSndPanTrackMask, e->unk_0a);
    NNS_SndPlayerSetTrackPitch(e, gSndPanTrackMask, e->unk_04);
}

extern "C" void Snd_SetListenerPanCallback(s32 (*f)(PlayCtx *)) {
    gSndListenerPanCallback = f;
}

extern "C" void Snd_SetListenerDistanceCallback(s32 (*f)(PlayCtx *)) {
    gSndListenerDistanceCallback = f;
}

extern "C" void Snd_SetListenerVolumeCallback(s32 (*f)(PlayCtx *)) {
    gSndListenerVolumeCallback = f;
}

extern "C" void SndSeGroup_EvalListener(PlayCtx *p) {
    if (p->unk_04 == NULL) {
        p->unk_10 = 0;
        p->unk_14 = 127;
        p->unk_1c = 127;
        p->unk_18 = 0;
        return;
    }
    if (gSndListenerDistanceCallback == NULL) Fatal_Trap();
    if (gSndListenerVolumeCallback == NULL) Fatal_Trap();
    if (gSndListenerPanCallback == NULL) Fatal_Trap();
    p->unk_10 = gSndListenerDistanceCallback(p);
    p->unk_14 = gSndListenerVolumeCallback(p);
    p->unk_1c = p->unk_14;
    p->unk_18 = gSndListenerPanCallback(p);
}

extern "C" void SndSeVoice_Init(Ent *e) {
    NNS_SndHandleInit(e);
    e->unk_08 = 0;
    e->unk_06 = 0;
    e->unk_09 = 0;
    e->unk_04 = 0;
    e->unk_0a = 127;
}

extern "C" void SndSeVoice_SetParams(Ent *e, s32 c, s32 d) {
    e->unk_0a = c;
    e->unk_04 = d;
}

extern "C" void SndSeVoice_Start(Ent *e, u32 a, u32 b, s32 c, s16 d) {
    if (e == NULL) Fatal_Trap();
    e->unk_08 = a;
    e->unk_06 = b;
    SndSeVoice_SetFlag(e, 1, 1);
    SndSeVoice_SetParams(e, c, d);
}

extern "C" void SndSeVoice_StartHeld(Ent *e, u32 a, u32 b, s32 c, s16 d) {
    SndSeVoice_Start(e, a, b, c, d);
    SndSeVoice_SetFlag(e, 2, 1);
    SndSeVoice_SetFlag(e, 3, 1);
}

extern "C" BOOL SndSeVoice_IsPlayingId(Ent *e, u32 a, u32 b) {
    if (e->unk_00 != NULL && e->unk_06 == b && e->unk_08 == a) return TRUE;
    return FALSE;
}

extern "C" void SndSeVoice_Stop(Ent *e, s32 x) {
    if (e->unk_00 != NULL) NNS_SndPlayerStopSeq(e, x);
    SndSeVoice_SetFlag(e, 2, 0);
    SndSeVoice_SetFlag(e, 3, 0);
    SndSeVoice_SetFlag(e, 1, 0);
}

extern "C" void SndSeVoice_SetFlag(Ent *e, s32 bit, s32 on) {
    if (e == NULL) Fatal_Trap();
    if (on == 1) {
        e->unk_09 |= (1 << bit);
    } else {
        e->unk_09 &= ~(1 << bit);
    }
}

extern "C" BOOL SndSeVoice_IsHeld(Ent *e) {
    return (e->unk_09 & 4) != 0;
}

extern "C" void SndSeGroup_SetFlag(Group *g, s32 bit, s32 on) {
    if (g == NULL) Fatal_Trap();
    if (on == 1) {
        g->unk_34 |= (1 << bit);
    } else {
        g->unk_34 &= ~(1 << bit);
    }
}

extern "C" void SndSeGroup_SetEnabled(Group *g, s32 x) {
    if (g == NULL) Fatal_Trap();
    SndSeGroup_SetFlag(g, 0, x);
}

extern "C" s32 SndSeGroup_FindFreeVoice(Group *g) {
    s32 i;
    s32 n = g->unk_36;
    u8 *p = (u8 *)g;
    i = 0;
    if (n > 0) {
        do {
            if (*(void **)(p + 8) == NULL && (p[17] & 2) == 0) return i;
            i++;
            p += 12;
        } while (i < n);
    }
    return n;
}

extern "C" void SndSeGroup_Init(Group *g) {
    s32 i;
    Ent *e;
    g->unk_36 = 3;
    g->unk_2c = (GroupFn)SndSeGroup_StartVoice;
    g->unk_30 = (GroupFn)SndSeGroup_ApplyVoiceParams;
    if (g->unk_36 > 3) Fatal_Trap();
    g->unk_34 = 0;
    i = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            SndSeVoice_Init(e);
            i++;
            e++;
        } while (i < g->unk_36);
    }
    Cfg4 *c = &gSndSeSystem;
    if (!(c->unk_0c >= 1 && c->unk_0c < 4)) Fatal_Trap();
}

extern "C" void SndSeGroup_Finish(Group *g) {
    SndSeGroup_Shutdown(g);
}

extern "C" void SndSeGroup_Update(Group *g, void *src) {
    PlayCtx ctx;
    s32 vol;
    s32 x;
    s32 i;
    BOOL inited = FALSE;
    Ent *e;
    if (g->unk_36 == 0) Fatal_Trap();
    if ((g->unk_34 & 1) == 0) {
        if ((g->unk_34 & 2) == 0) return;
        SndSeGroup_StopHeld(g, 0);
        SndSeGroup_SetFlag(g, 1, 0);
        return;
    }
    i = 0;
    ctx.unk_00 = g;
    ctx.unk_04 = src;
    ctx.unk_20 = 0;
    ctx.unk_14 = 0;
    ctx.unk_1c = 0;
    ctx.unk_18 = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            vol = -1;
            x = 0;
            if (SndSeVoice_IsHeld(e) != 0) {
                if ((e->unk_09 & 8) == 0) {
                    SndSeGroup_StopVoice(g, i, 0);
                    goto next;
                }
                SndSeVoice_SetFlag(e, 3, 0);
                x = 2;
            }
            if ((e->unk_09 & 2) != 0) {
                if (!inited) {
                    SndSeGroup_EvalListener(&ctx);
                    inited = TRUE;
                }
                if (ctx.unk_14 > 0) {
                    s32 base = ctx.unk_1c;
                    InfoB *inf = func_0210b8a0(e->unk_08, e->unk_06);
                    if (inf == NULL) Fatal_Trap();
                    vol = base + (inf->unk_04 - 64);
                    if (vol > 0) {
                        if (vol >= 127) vol = 127;
                    } else {
                        vol = 0;
                    }
                    g->unk_2c(g, i, vol);
                    x = 1;
                }
                SndSeVoice_SetFlag(e, 1, 0);
            }
            if (x == 0) {
                if ((e->unk_09 & 1) != 0) {
                    x = 2;
                } else {
                    x = 0;
                }
            }
            if (x != 0 && e->unk_00 != NULL) {
                if (!inited) {
                    SndSeGroup_EvalListener(&ctx);
                    inited = TRUE;
                }
                if (vol == -1) {
                    s32 base = ctx.unk_1c;
                    InfoB *inf = func_0210b8a0(e->unk_08, e->unk_06);
                    if (inf == NULL) Fatal_Trap();
                    vol = base + (inf->unk_04 - 64);
                    if (vol > 0) {
                        if (vol >= 127) vol = 127;
                    } else {
                        vol = 0;
                    }
                }
                if (!inited) Fatal_Trap();
                NNS_SndPlayerSetVolume(e, ctx.unk_14);
                func_0210a1e8(e, vol);
                NNS_SndPlayerSetTrackPan(e, gSndPanTrackMask, ctx.unk_18);
                g->unk_30(g, i, vol);
            }
        next:
            e++;
            i++;
        } while (i < g->unk_36);
    }
    SndSeGroup_SetFlag(g, 1, 1);
}

extern "C" s32 SndSeGroup_Play(Group *g, u32 a, u32 b, s32 c, s16 d) {
    s32 r = 255;
    s32 i;
    Ent *e;
    if ((g->unk_34 & 1) == 0) return -1;
    i = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            if (SndSeVoice_IsPlayingId(e, a, b) != 0) {
                r = i;
                SndSeGroup_StopVoice(g, i, 0);
                break;
            }
            i++;
            e++;
        } while (i < g->unk_36);
    }
    if (r == 255) r = SndSeGroup_FindFreeVoice(g);
    if (r == g->unk_36) return -1;
    SndSeVoice_Start(&g->unk_08[r], a, b, c, d);
    return r;
}

extern "C" s32 SndSeGroup_PlayHeld(Group *g, u32 a, u32 b, s32 c, s16 d) {
    s32 i;
    Ent *e;
    s32 r;
    if ((g->unk_34 & 1) == 0) return -1;
    i = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            if (SndSeVoice_IsHeld(e) != 0) {
                if (SndSeVoice_IsPlayingId(e, a, b) != 0) {
                    SndSeVoice_SetFlag(e, 3, 1);
                    SndSeVoice_SetParams(e, c, d);
                    return i;
                }
            }
            i++;
            e++;
        } while (i < g->unk_36);
    }
    i = SndSeGroup_FindFreeVoice(g);
    if (i == g->unk_36) return -1;
    SndSeVoice_StartHeld(&g->unk_08[i], a, b, c, d);
    return i;
}

extern "C" void SndSeGroup_Shutdown(Group *g) {
    SndSeGroup_StopAll(g, 0);
    SndSeGroup_ReleaseAll(g);
}

extern "C" void SndSeGroup_ReleaseAll(Group *g) {
    s32 i;
    Ent *e;
    if (g == NULL) Fatal_Trap();
    i = 0;
    if ((s32)g->unk_36 <= 0) return;
    e = g->unk_08;
    do {
        NNS_SndHandleReleaseSeq(e);
        i++;
        e++;
    } while (i < g->unk_36);
}

extern "C" void SndSeGroup_StopVoice(Group *g, s32 i, s32 a) {
    Ent *e = &g->unk_08[i];
    if (i >= g->unk_36) Fatal_Trap();
    SndSeVoice_Stop(e, a);
}

extern "C" void SndSeGroup_StopAll(Group *g, s32 a) {
    s32 i = 0;
    if ((s32)g->unk_36 <= 0) return;
    do {
        SndSeGroup_StopVoice(g, i, a);
        i++;
    } while (i < g->unk_36);
}

extern "C" void SndSeGroup_StopHeld(Group *g, s32 a) {
    s32 i = 0;
    Ent *e;
    if ((s32)g->unk_36 <= 0) return;
    e = g->unk_08;
    do {
        if (SndSeVoice_IsHeld(e) != 0) SndSeGroup_StopVoice(g, i, a);
        i++;
        e++;
    } while (i < g->unk_36);
}

// PROTOS-END

extern "C" BOOL SndSeSystem_LoadGroup(Player *o) {
    u32 id;
    if (o->unk_15.b0 != 255) {
        id = Snd_LoadGroup(o->unk_15.b0);
        if (id == (u32)-1) return FALSE;
    } else {
        id = 255;
    }
    o->unk_1c = id;
    return TRUE;
}


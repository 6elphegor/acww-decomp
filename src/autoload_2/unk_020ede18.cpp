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
void func_0206d49c(void);
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void NNS_SndHandleReleaseSeq(void *p);
BOOL func_020ee5d4(Ent *e);
void func_020ee630(Ent *e, s32 a);
BOOL func_020ee680(Ent *e, u32 a, u32 b);
void func_020ee5e8(Ent *e, s32 bit, s32 on);
void func_020ee748(Ent *e, s32 c, s32 d);
s32 func_020ee514(Group *g);
void func_020ee6b0(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee6f4(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee58c(Group *g, s32 bit, s32 on);
void func_020ee754(Ent *e);
void func_020ee784(PlayCtx *c);
InfoB *func_0210b8a0(u32 a, u32 b);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void func_0210a1e8(void *p, s32 v);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 v);
void func_0210a148(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackPitch(void *p, u32 a, s32 b);
extern Cfg4 data_021f59f4;
void *NNS_FndGetPrevListObject(void *list, void *obj);
void *NNS_FndGetNextListObject(void *list, void *obj);
void NNS_FndRemoveListObject(void *list, void *obj);
void NNS_FndAppendListObject(void *list, void *obj);

extern s32 (*data_021f5b3c)(PlayCtx *);
extern s32 (*data_021f5b44)(PlayCtx *);
extern s32 (*data_021f5b40)(PlayCtx *);
extern u16 data_0213b200;
void func_020ee8d0(Group *g, s32 i, s32 v);
void func_020ee87c(Group *g, s32 i);
}
extern "C" {
s32 func_020ed9c8(u32 a);
}

// PROTOS-BEGIN
extern "C" {
void func_020ede5c(Group *g, s32 a);
void func_020edec8(Group *g, s32 a);
void func_020edf10(Group *g, s32 i, s32 a);
void func_020edf50(Group *g);
void func_020edf9c(Group *g);
s32 func_020ee514(Group *g);
void func_020ee58c(Group *g, s32 bit, s32 on);
BOOL func_020ee5d4(Ent *e);
void func_020ee5e8(Ent *e, s32 bit, s32 on);
void func_020ee630(Ent *e, s32 x);
BOOL func_020ee680(Ent *e, u32 a, u32 b);
void func_020ee6b0(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee6f4(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee748(Ent *e, s32 c, s32 d);
void func_020ee754(Ent *e);
void func_020ee784(PlayCtx *p);
void func_020ee87c(Group *g, s32 i);
void func_020ee8d0(Group *g, s32 i, s32 v);
}

extern "C" void func_020ee968(void **p) {
    if (p == NULL) func_0206d49c();
    p[0] = NULL;
    p[1] = NULL;
}

extern "C" void func_020ee95c(void *list, void *obj) {
    NNS_FndAppendListObject(list, obj);
}

extern "C" void func_020ee950(void *list, void *obj) {
    NNS_FndRemoveListObject(list, obj);
}

extern "C" void *func_020ee944(void *list, void *obj) {
    return NNS_FndGetNextListObject(list, obj);
}

extern "C" void *func_020ee938(void *list, void *obj) {
    return NNS_FndGetPrevListObject(list, obj);
}

extern "C" void *func_020ee930(void **p) {
    return p[0];
}

extern "C" void *func_020ee928(void **p) {
    return p[1];
}

extern "C" void func_020ee8d0(Group *g, s32 i, s32 v) {
    Ent *e = &g->unk_08[i];
    if (g->unk_36 == 0) func_0206d49c();
    func_0210cebc(e, -1, -1, v, e->unk_08, e->unk_06);
}

extern "C" void func_020ee87c(Group *g, s32 i) {
    Ent *e = &g->unk_08[i];
    if (g->unk_36 == 0) func_0206d49c();
    func_0210a148(e, data_0213b200, e->unk_0a);
    NNS_SndPlayerSetTrackPitch(e, data_0213b200, e->unk_04);
}

extern "C" void func_020ee86c(s32 (*f)(PlayCtx *)) {
    data_021f5b40 = f;
}

extern "C" void func_020ee85c(s32 (*f)(PlayCtx *)) {
    data_021f5b3c = f;
}

extern "C" void func_020ee84c(s32 (*f)(PlayCtx *)) {
    data_021f5b44 = f;
}

extern "C" void func_020ee784(PlayCtx *p) {
    if (p->unk_04 == NULL) {
        p->unk_10 = 0;
        p->unk_14 = 127;
        p->unk_1c = 127;
        p->unk_18 = 0;
        return;
    }
    if (data_021f5b3c == NULL) func_0206d49c();
    if (data_021f5b44 == NULL) func_0206d49c();
    if (data_021f5b40 == NULL) func_0206d49c();
    p->unk_10 = data_021f5b3c(p);
    p->unk_14 = data_021f5b44(p);
    p->unk_1c = p->unk_14;
    p->unk_18 = data_021f5b40(p);
}

extern "C" void func_020ee754(Ent *e) {
    NNS_SndHandleInit(e);
    e->unk_08 = 0;
    e->unk_06 = 0;
    e->unk_09 = 0;
    e->unk_04 = 0;
    e->unk_0a = 127;
}

extern "C" void func_020ee748(Ent *e, s32 c, s32 d) {
    e->unk_0a = c;
    e->unk_04 = d;
}

extern "C" void func_020ee6f4(Ent *e, u32 a, u32 b, s32 c, s16 d) {
    if (e == NULL) func_0206d49c();
    e->unk_08 = a;
    e->unk_06 = b;
    func_020ee5e8(e, 1, 1);
    func_020ee748(e, c, d);
}

extern "C" void func_020ee6b0(Ent *e, u32 a, u32 b, s32 c, s16 d) {
    func_020ee6f4(e, a, b, c, d);
    func_020ee5e8(e, 2, 1);
    func_020ee5e8(e, 3, 1);
}

extern "C" BOOL func_020ee680(Ent *e, u32 a, u32 b) {
    if (e->unk_00 != NULL && e->unk_06 == b && e->unk_08 == a) return TRUE;
    return FALSE;
}

extern "C" void func_020ee630(Ent *e, s32 x) {
    if (e->unk_00 != NULL) NNS_SndPlayerStopSeq(e, x);
    func_020ee5e8(e, 2, 0);
    func_020ee5e8(e, 3, 0);
    func_020ee5e8(e, 1, 0);
}

extern "C" void func_020ee5e8(Ent *e, s32 bit, s32 on) {
    if (e == NULL) func_0206d49c();
    if (on == 1) {
        e->unk_09 |= (1 << bit);
    } else {
        e->unk_09 &= ~(1 << bit);
    }
}

extern "C" BOOL func_020ee5d4(Ent *e) {
    return (e->unk_09 & 4) != 0;
}

extern "C" void func_020ee58c(Group *g, s32 bit, s32 on) {
    if (g == NULL) func_0206d49c();
    if (on == 1) {
        g->unk_34 |= (1 << bit);
    } else {
        g->unk_34 &= ~(1 << bit);
    }
}

extern "C" void func_020ee558(Group *g, s32 x) {
    if (g == NULL) func_0206d49c();
    func_020ee58c(g, 0, x);
}

extern "C" s32 func_020ee514(Group *g) {
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

extern "C" void func_020ee478(Group *g) {
    s32 i;
    Ent *e;
    g->unk_36 = 3;
    g->unk_2c = (GroupFn)func_020ee8d0;
    g->unk_30 = (GroupFn)func_020ee87c;
    if (g->unk_36 > 3) func_0206d49c();
    g->unk_34 = 0;
    i = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            func_020ee754(e);
            i++;
            e++;
        } while (i < g->unk_36);
    }
    Cfg4 *c = &data_021f59f4;
    if (!(c->unk_0c >= 1 && c->unk_0c < 4)) func_0206d49c();
}

extern "C" void func_020ee46c(Group *g) {
    func_020edf9c(g);
}

extern "C" void func_020ee1b0(Group *g, void *src) {
    PlayCtx ctx;
    s32 vol;
    s32 x;
    s32 i;
    BOOL inited = FALSE;
    Ent *e;
    if (g->unk_36 == 0) func_0206d49c();
    if ((g->unk_34 & 1) == 0) {
        if ((g->unk_34 & 2) == 0) return;
        func_020ede5c(g, 0);
        func_020ee58c(g, 1, 0);
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
            if (func_020ee5d4(e) != 0) {
                if ((e->unk_09 & 8) == 0) {
                    func_020edf10(g, i, 0);
                    goto next;
                }
                func_020ee5e8(e, 3, 0);
                x = 2;
            }
            if ((e->unk_09 & 2) != 0) {
                if (!inited) {
                    func_020ee784(&ctx);
                    inited = TRUE;
                }
                if (ctx.unk_14 > 0) {
                    s32 base = ctx.unk_1c;
                    InfoB *inf = func_0210b8a0(e->unk_08, e->unk_06);
                    if (inf == NULL) func_0206d49c();
                    vol = base + (inf->unk_04 - 64);
                    if (vol > 0) {
                        if (vol >= 127) vol = 127;
                    } else {
                        vol = 0;
                    }
                    g->unk_2c(g, i, vol);
                    x = 1;
                }
                func_020ee5e8(e, 1, 0);
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
                    func_020ee784(&ctx);
                    inited = TRUE;
                }
                if (vol == -1) {
                    s32 base = ctx.unk_1c;
                    InfoB *inf = func_0210b8a0(e->unk_08, e->unk_06);
                    if (inf == NULL) func_0206d49c();
                    vol = base + (inf->unk_04 - 64);
                    if (vol > 0) {
                        if (vol >= 127) vol = 127;
                    } else {
                        vol = 0;
                    }
                }
                if (!inited) func_0206d49c();
                NNS_SndPlayerSetVolume(e, ctx.unk_14);
                func_0210a1e8(e, vol);
                NNS_SndPlayerSetTrackPan(e, data_0213b200, ctx.unk_18);
                g->unk_30(g, i, vol);
            }
        next:
            e++;
            i++;
        } while (i < g->unk_36);
    }
    func_020ee58c(g, 1, 1);
}

extern "C" s32 func_020ee0c4(Group *g, u32 a, u32 b, s32 c, s16 d) {
    s32 r = 255;
    s32 i;
    Ent *e;
    if ((g->unk_34 & 1) == 0) return -1;
    i = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            if (func_020ee680(e, a, b) != 0) {
                r = i;
                func_020edf10(g, i, 0);
                break;
            }
            i++;
            e++;
        } while (i < g->unk_36);
    }
    if (r == 255) r = func_020ee514(g);
    if (r == g->unk_36) return -1;
    func_020ee6f4(&g->unk_08[r], a, b, c, d);
    return r;
}

extern "C" s32 func_020edfbc(Group *g, u32 a, u32 b, s32 c, s16 d) {
    s32 i;
    Ent *e;
    s32 r;
    if ((g->unk_34 & 1) == 0) return -1;
    i = 0;
    if ((s32)g->unk_36 > 0) {
        e = g->unk_08;
        do {
            if (func_020ee5d4(e) != 0) {
                if (func_020ee680(e, a, b) != 0) {
                    func_020ee5e8(e, 3, 1);
                    func_020ee748(e, c, d);
                    return i;
                }
            }
            i++;
            e++;
        } while (i < g->unk_36);
    }
    i = func_020ee514(g);
    if (i == g->unk_36) return -1;
    func_020ee6b0(&g->unk_08[i], a, b, c, d);
    return i;
}

extern "C" void func_020edf9c(Group *g) {
    func_020edec8(g, 0);
    func_020edf50(g);
}

extern "C" void func_020edf50(Group *g) {
    s32 i;
    Ent *e;
    if (g == NULL) func_0206d49c();
    i = 0;
    if ((s32)g->unk_36 <= 0) return;
    e = g->unk_08;
    do {
        NNS_SndHandleReleaseSeq(e);
        i++;
        e++;
    } while (i < g->unk_36);
}

extern "C" void func_020edf10(Group *g, s32 i, s32 a) {
    Ent *e = &g->unk_08[i];
    if (i >= g->unk_36) func_0206d49c();
    func_020ee630(e, a);
}

extern "C" void func_020edec8(Group *g, s32 a) {
    s32 i = 0;
    if ((s32)g->unk_36 <= 0) return;
    do {
        func_020edf10(g, i, a);
        i++;
    } while (i < g->unk_36);
}

extern "C" void func_020ede5c(Group *g, s32 a) {
    s32 i = 0;
    Ent *e;
    if ((s32)g->unk_36 <= 0) return;
    e = g->unk_08;
    do {
        if (func_020ee5d4(e) != 0) func_020edf10(g, i, a);
        i++;
        e++;
    } while (i < g->unk_36);
}

// PROTOS-END

extern "C" BOOL func_020ede18(Player *o) {
    u32 id;
    if (o->unk_15.b0 != 255) {
        id = func_020ed9c8(o->unk_15.b0);
        if (id == (u32)-1) return FALSE;
    } else {
        id = 255;
    }
    o->unk_1c = id;
    return TRUE;
}


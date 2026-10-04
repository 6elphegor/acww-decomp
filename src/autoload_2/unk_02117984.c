// mwcc-flags: -nothumb -O4,p
// NitroSDK SND: snd_bank.c (wave data / instrument access) and the PXI init / FIFO send, autoload_2
// 0x02117984-0x02117e8c. ARM code, mwcc 1.2/base, -O4,p.
// (The former unit 0x02116c0c-0x02117e8c, split into its files by their bss and rodata.)
// PXI_InitFifo (PXI_Init) is outside this unit; it is only called (tail call) from PXI_Init.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct Cmd {
    struct Cmd *next;
    u32 id;
    u32 arg[4];
} Cmd;

typedef struct SndWork {
    u32 f0;
    u32 f4;
    u16 f8;
    u16 fa;
    u8 pad[0x14];
    struct {
        s16 v[16];
        u32 w;
    } t[16];
    s16 u[16];
} SndWork;

typedef struct Slot {
    void *a;
    struct Slot *next;
} Slot;

typedef struct Obj {
    u8 pad[0x18];
    Slot s[4];
} Obj;

typedef struct Pair {
    u32 a;
    u32 b;
} Pair;

typedef struct Bank {
    u8 pad[0x38];
    u32 count;
    u32 ent[1];
} Bank;

typedef struct H5 {
    u16 h[5];
} H5;

typedef struct H6 {
    u16 h[6];
} H6;

typedef union InstOut {
    u8 type;
    u16 h[6];
} InstOut;

typedef struct TrackOut {
    u16 a;
    u8 b;
    u8 c;
    s8 d;
    u8 e;
    u8 f;
    s8 g;
    u8 pad8;
    u8 cnt;
    u8 list[1];
} TrackOut;

typedef struct ChOut {
    u32 bit0 : 1;
    u32 bit1 : 1;
    u16 mask;
    u16 h6;
    u8 b8;
} ChOut;

typedef struct ChRec {
    u8 f0_0 : 1;
    u8 f0_1 : 1;
    u8 f0_2 : 1;
    u8 pad1[4];
    u8 b5;
    u8 pad6[2];
    u8 x[16];
    u16 h24;
    u8 pad26[10];
} ChRec;

typedef struct SlotEnt {
    u32 a;
    u32 b;
    u8 cnt;
} SlotEnt;

extern Cmd data_021fd260[256];
extern Cmd *data_021fcf88;
extern u32 data_021fcf8c;
extern Cmd *data_021fcf90;
extern Cmd *data_021fcf94;
extern Cmd *data_021fcf98;
extern s32 data_021fcf9c;
extern s32 data_021fcfa0;
extern s32 data_021fcfa4;
extern u32 data_021fcfa8;
extern Cmd *data_021fcfac[];
extern u32 data_021fcf6c;
extern u32 data_021fcf70;
extern SndWork data_021fcfe0;
extern SndWork *data_021fea60;
extern const u8 data_0213a0b4[724];
extern SlotEnt data_027e032c[];

extern u32 OS_DisableInterrupts(void);
extern u32 OS_IsRunOnEmulator(void);
extern void OS_RestoreInterrupts(u32);
extern void OS_SpinWait(u32);
extern void PxiFifoCallback(void);
extern void OS_UnlockMutex(void *);
extern void OS_LockMutex(void *);
extern void OS_InitMutex(void *);
extern void DC_InvalidateRange(void *, u32);
extern void DC_StoreRange(void *, u32);
extern void DC_FlushRange(void *, u32);
extern void SNDi_SetPlayerParam(u32, u32, u32, u32);
extern void PushCommand_impl(u32, u32, u32, u32, u32);

typedef union PxiMsg {
    u32 raw;
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } b;
} PxiMsg;

#define reg_IPCSYNC (*(volatile u16 *)0x04000180)
#define reg_IPCFIFOCNT (*(volatile u16 *)0x04000184)
#define reg_IPCFIFOSEND (*(volatile u32 *)0x04000188)

s32 PXI_SendWordByFifo(u32 tag, u32 data, u32 err);
void RequestCommandProc(void);
Cmd *AllocCommand(void);
u32 IsCommandAvailable(void);
u32 SND_CountWaitingCommand(void);
u32 SND_CountReservedCommand(void);
u32 SND_CountFreeCommand(void);
u32 SND_IsFinishedCommandTag(u32 t);
Cmd *SND_RecvCommandReply(u32 flags);
u32 SND_FlushCommand(u32 flags);
void SND_PushCommand(Cmd *c);
Cmd *SND_AllocCommand(u32 flags);
void SND_CommandInit(void);
void SND_AlarmInit(void);
void SNDi_InitSharedWork(SndWork *w);
u32 SNDi_GetFinishedCommandTag(void);
void SNDi_UnlockMutex(void);
void SNDi_LockMutex(void);
void InitPXI(void);
extern void PXI_InitFifo(void);
extern void PXI_SetFifoRecvCallback(u32 tag, void (*cb)(void));
extern u32 PXI_IsCallbackReady(u32 tag, u32 proc);// PXI_SendWordByFifo
s32 PXI_SendWordByFifo(u32 tag, u32 data, u32 err) {
    PxiMsg m;
    u32 e;
    m.b.tag = tag;
    m.b.err = err;
    m.b.data = data;
    if (reg_IPCFIFOCNT & 0x4000) {
        reg_IPCFIFOCNT |= 0xc000;
        return -1;
    }
    e = OS_DisableInterrupts();
    if (reg_IPCFIFOCNT & 2) {
        OS_RestoreInterrupts(e);
        return -2;
    }
    reg_IPCFIFOSEND = m.raw;
    OS_RestoreInterrupts(e);
    return 0;
}

// tail call to PXI_Init (PXI_InitFifo)
void PXI_Init(void) {
    PXI_InitFifo();
}

// SND_... slot attach
void SND_AssignWaveArc(Obj *p, s32 i, Obj *item) {
    Obj *old;
    SNDi_LockMutex();
    old = p->s[i].a;
    if (old != 0) {
        Slot *q;
        if (item == old) {
            SNDi_UnlockMutex();
            return;
        }
        q = old->s[0].a;
        if (&p->s[i] == q) {
            old->s[0].a = p->s[i].next;
            DC_StoreRange(p->s[i].a, 0x3c);
        } else {
            if (q != 0) {
                Slot *n;
                do {
                    n = q->next;
                    if (&p->s[i] == n) {
                        break;
                    }
                    q = n;
                } while (n != 0);
            }
            q->next = p->s[i].next;
            DC_StoreRange(q, 8);
        }
    }
    {
        Slot *prev = item->s[0].a;
        item->s[0].a = &p->s[i];
        p->s[i].next = prev;
        p->s[i].a = item;
    }
    SNDi_UnlockMutex();
    DC_StoreRange(p, 0x3c);
    DC_StoreRange(item, 0x3c);
}

// SND_... slot detach all
void SND_DestroyBank(Obj *p) {
    s32 i;
    SNDi_LockMutex();
    for (i = 0; i < 4; i++) {
        Obj *o = p->s[i].a;
        if (o != 0) {
            Slot *q = o->s[0].a;
            if (&p->s[i] == q) {
                o->s[0].a = p->s[i].next;
                DC_StoreRange(o, 0x3c);
            } else {
                if (q != 0) {
                    Slot *n;
                    do {
                        n = q->next;
                        if (&p->s[i] == n) {
                            break;
                        }
                        q = n;
                    } while (n != 0);
                }
                q->next = p->s[i].next;
                DC_StoreRange(q, 8);
            }
        }
    }
    SNDi_UnlockMutex();
}

void SND_DestroyWaveArc(Obj *p) {
    Slot *n;
    SNDi_LockMutex();
    n = p->s[0].a;
    if (n != 0) {
        do {
            Slot *nx = n->next;
            n->a = 0;
            n->next = 0;
            DC_StoreRange(n, 8);
            n = nx;
        } while (n != 0);
    }
    SNDi_UnlockMutex();
}

void SND_GetFirstInstDataPos(Pair *p) {
    Pair t;
    t.a = 0;
    t.b = 0;
    *p = t;
}

u32 SND_GetNextInstData(Bank *b, InstOut *out, u32 *idx) {
    while (idx[0] < b->count) {
        u32 e;
        e = b->ent[idx[0]];
        out->type = e;
        switch (out->type) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: {
            u16 *p = (u16 *)((u8 *)b + (e >> 8));
            *(H5 *)&out->h[1] = *(H5 *)p;
            idx[0]++;
            return 1;
        }
        case 16: {
            u8 *p = (u8 *)b + (e >> 8);
            while (idx[1] < (u32)(p[1] - p[0] + 1)) {
                u16 *q = (u16 *)(p + idx[1] * 12);
                *(H6 *)out = *(H6 *)(q + 1);
                idx[1]++;
                return 1;
            }
            break;
        }
        case 17: {
            u8 *p = (u8 *)b + (e >> 8);
            while (idx[1] < 8) {
                if (p[idx[1]] == 0) {
                    break;
                }
                {
                    u16 *q = (u16 *)(p + idx[1] * 12);
                    *(H6 *)out = *(H6 *)(q + 4);
                    idx[1]++;
                    return 1;
                }
            }
            break;
        }
        }
        idx[0]++;
        idx[1] = 0;
    }
    return 0;
}

u32 SND_GetWaveDataCount(Bank *b) {
    return b->count;
}

void SND_SetWaveDataAddress(u8 *base, s32 i, u32 v) {
    SNDi_LockMutex();
    *(u32 *)(base + i * 4 + 0x3c) = v;
    DC_StoreRange(base + 0x3c + i * 4, 4);
    SNDi_UnlockMutex();
}

void *SND_GetWaveDataAddress(u8 *base, s32 i) {
    u32 off;
    u8 *r;
    SNDi_LockMutex();
    off = *(u32 *)(base + i * 4 + 0x3c);
    if (off != 0) {
        r = (u8 *)off;
        if (off < 0x2000000) {
            r = base + off;
        }
    } else {
        r = 0;
    }
    SNDi_UnlockMutex();
    return r;
}

// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef int BOOL;

typedef struct Pair { u32 a; u32 b; } Pair;
typedef struct InstOut { u8 type; u8 pad; u16 h1; u16 h2; u16 h3; u16 h4; u16 h5; } InstOut;

// externs: SND / archive helpers (K&R where callers pass different argument counts)
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void OS_SleepThread();
extern void OS_UnlockMutex();
extern void OS_LockMutex();
extern void DC_StoreRange();
extern void DC_FlushRange();
extern void MI_CpuFill8();
extern void MI_CpuCopy8();
extern void SND_InvalidateWaveData();
extern void SND_InvalidateBankData();
extern void SND_InvalidateSeqData();
extern Pair SND_GetFirstInstDataPos();
extern u32 SND_GetNextInstData();
extern void *SND_GetWaveDataAddress();
extern void SND_SetWaveDataAddress();
extern u32 SND_GetWaveDataCount();
extern void SND_DestroyWaveArc();
extern void SND_DestroyBank();
extern void SND_AssignWaveArc();
extern u32 FS_SeekFile();
extern u32 FS_ReadFile();
extern u32 NNS_SndArcSetFileAddress();
extern u32 NNS_SndArcGetFileAddress();
extern u32 NNS_SndArcReadFile();
extern u32 NNS_SndArcGetFileSize();
extern u32 NNS_SndArcGetGroupInfo();
extern u32 NNS_SndArcGetPlayerInfo();
extern u32 NNS_SndArcGetWaveArcInfo();
extern u32 NNS_SndArcGetBankInfo();
extern u32 NNS_SndArcGetSeqArcInfo();
extern u32 NNS_SndArcGetSeqInfo();
extern u32 NNS_SndArcGetCurrent();
extern u32 NNS_SndArcSetCurrent();
extern void *NNS_SndHeapAlloc();
extern void *NNSi_SndSeqArcGetSeqInfo();
extern void *NNSi_SndPlayerAllocSeqPlayer();
extern u32 NNSi_SndPlayerAllocHeap();
extern void NNSi_SndPlayerFreeSeqPlayer();
extern void NNSi_SndPlayerStartSeq();
extern void NNS_SndPlayerSetInitialVolume();
extern void NNS_SndPlayerSetChannelPriority();
extern void NNS_SndPlayerSetSeqArcNo();
extern void NNS_SndPlayerSetSeqNo();
extern u32 NNS_SndPlayerCreateHeap();
extern void NNS_SndPlayerSetAllocatableChannel();
extern void NNS_SndPlayerSetPlayableSeqCount();
extern u32 func_0210ddf0();
extern void FreeCommandBuffer();
extern void func_0210da28();
extern u32 _u32_div_f();

extern u8 data_021fbd6c[0x3c];
extern u32 LoadSingleWaves();
extern u32 LoadSingleWave();
extern void SingleWaveDisposeCallback();
extern void WaveArcTableDisposeCallback();
extern void WaveArcDisposeCallback();
extern void BankDisposeCallback();
extern void SeqDisposeCallback();
extern void DisposeCallback();
extern u32 LoadWaveArcTable();
extern u32 LoadWaveArc();
extern u32 LoadBank();
extern u32 LoadSeqArc();
extern u32 LoadSeq();
extern u32 NNSi_SndArcLoadFile();
extern u32 NNSi_SndArcLoadWaveArc();
extern u32 NNSi_SndArcLoadBank();
extern u32 NNSi_SndArcLoadSeqArc();
extern u32 NNSi_SndArcLoadSeq();
extern u32 NNSi_SndArcLoadGroup();
extern u32 StartSeqArc();
extern u32 StartSeq();


// archive records
typedef struct FileRec { u32 fileId : 24; u32 loadFlag : 8; u16 wa[4]; } FileRec;   // wave archive / bank records
typedef struct SeqRec { u32 fileId; u16 bank; u8 vol; u8 chPrio; u8 prio; u8 player; } SeqRec;
typedef struct PlayerRec { u8 count; u8 pad; u16 bankNo; u32 heapSize; } PlayerRec;
typedef struct GrpEnt { u8 type; u8 flags; u16 pad; u32 id; } GrpEnt;
typedef struct GrpRec { u32 count; GrpEnt ent[1]; } GrpRec;
typedef struct BankRec { u32 fileId; u16 wa[4]; } BankRec;


// stream/wave decode thread entry (never returns)
void func_0210d10c(u8 *obj)
{
    u8 *queue;
    u8 *mutex = obj + 0x4cc;
    u8 *list = obj + 0x4e4;
    u32 item;
    queue = obj + 0x4c0;
    for (;;) {
        OS_SleepThread(queue);
        for (;;) {
            OS_LockMutex(mutex);
            item = func_0210ddf0(list);
            if (item == 0) {
                OS_UnlockMutex(mutex);
                break;
            }
            func_0210d174((void *)item);
            FreeCommandBuffer(item);
            OS_UnlockMutex(mutex);
        }
    }
}

// NNS_SndArcPlayerSetup(heap): set player parameters and create heaps
BOOL NNS_SndArcPlayerSetup(void *heap)
{
    s32 i;
    PlayerRec *info;
    s32 j;
    NNS_SndArcGetCurrent();
    for (i = 0; i < 32; i++) {
        info = (PlayerRec *)NNS_SndArcGetPlayerInfo(i);
        if (info != 0) {
            NNS_SndPlayerSetPlayableSeqCount(i, info->count);
            NNS_SndPlayerSetAllocatableChannel(i, info->bankNo);
            if (info->heapSize != 0 && heap != 0) {
                for (j = 0; j < info->count; j++) {
                    if (NNS_SndPlayerCreateHeap(i, heap, info->heapSize) == 0) {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

// NNS_SndArcPlayerStartSeq(handle, seqNo)
u32 NNS_SndArcPlayerStartSeq(u32 handle, u32 seqNo)
{
    SeqRec *rec = (SeqRec *)NNS_SndArcGetSeqInfo(seqNo);
    if (rec == 0) {
        return 0;
    }
    return StartSeq(handle, rec->player, rec->bank, rec->prio, rec, seqNo);
}

// NNS_SndArcPlayerStartSeqArc(handle, seqArc, idx)
u32 NNS_SndArcPlayerStartSeqArc(u32 handle, u32 arcNo, u32 idx)
{
    SeqRec *rec = (SeqRec *)NNS_SndArcGetSeqArcInfo(arcNo);
    u8 *data;
    SeqRec *info;
    if (rec == 0) {
        return 0;
    }
    data = (u8 *)NNS_SndArcGetFileAddress(rec->fileId);
    if (data == 0) {
        return 0;
    }
    info = (SeqRec *)NNSi_SndSeqArcGetSeqInfo(data, idx);
    if (info == 0) {
        return 0;
    }
    return StartSeqArc(handle, info->player, info->bank, info->prio, info, data, arcNo, idx);
}

// NNS_SndArcPlayerStartSeqArcEx(handle, player, bank, prio, seqArc, idx)
u32 func_0210cebc(u32 handle, s32 player, s32 bank, s32 prio, u32 arcNo, u32 idx)
{
    SeqRec *rec = (SeqRec *)NNS_SndArcGetSeqArcInfo(arcNo);
    u8 *data;
    SeqRec *info;
    if (rec == 0) {
        return 0;
    }
    data = (u8 *)NNS_SndArcGetFileAddress(rec->fileId);
    if (data == 0) {
        return 0;
    }
    info = (SeqRec *)NNSi_SndSeqArcGetSeqInfo(data, idx);
    if (info == 0) {
        return 0;
    }
    if (prio < 0) {
        prio = info->prio;
    }
    if (bank < 0) {
        bank = info->bank;
    }
    if (player < 0) {
        player = info->player;
    }
    return StartSeqArc(handle, player, bank, prio, info, data, arcNo, idx);
}

// NNSi_SndArcPlayerStartSeq-like (start sequence from a sequence file)
u32 StartSeq(u32 handle, s32 player, s32 bank, s32 prio, SeqRec *rec, u32 seqNo)
{
    void *seq;
    void *heap;
    u8 *seqData;
    u32 bankData;
    seq = NNSi_SndPlayerAllocSeqPlayer(handle, player, prio);
    if (seq == 0) {
        return 0;
    }
    heap = (void *)NNSi_SndPlayerAllocHeap(player, seq);
    if (NNSi_SndArcLoadBank(bank, 6, heap, 0, &bankData) != 0) {
        NNSi_SndPlayerFreeSeqPlayer(seq);
        return 0;
    }
    if (NNSi_SndArcLoadSeq(seqNo, 1, heap, 0, &seqData) != 0) {
        NNSi_SndPlayerFreeSeqPlayer(seq);
        return 0;
    }
    NNSi_SndPlayerStartSeq(seq, seqData + *(u32 *)(seqData + 0x18), 0, bankData);
    NNS_SndPlayerSetInitialVolume(handle, rec->vol);
    NNS_SndPlayerSetChannelPriority(handle, rec->chPrio);
    NNS_SndPlayerSetSeqNo(handle, seqNo);
    return 1;
}

// NNSi_SndArcPlayerStartSeqArc-like (start sequence from sequence archive)
u32 StartSeqArc(u32 handle, s32 player, s32 bank, s32 prio, SeqRec *rec, u8 *data, u32 arcNo, u32 idx)
{
    void *seq;
    void *heap;
    u32 bankData;
    seq = NNSi_SndPlayerAllocSeqPlayer(handle, player, prio);
    if (seq == 0) {
        return 0;
    }
    heap = (void *)NNSi_SndPlayerAllocHeap(player, seq);
    if (NNSi_SndArcLoadBank(bank, 6, heap, 0, &bankData) != 0) {
        NNSi_SndPlayerFreeSeqPlayer(seq);
        return 0;
    }
    NNSi_SndPlayerStartSeq(seq, data + *(u32 *)(data + 0x18), rec->fileId, bankData);
    NNS_SndPlayerSetInitialVolume(handle, rec->vol);
    NNS_SndPlayerSetChannelPriority(handle, rec->chPrio);
    NNS_SndPlayerSetSeqArcNo(handle, arcNo, idx);
    return 1;
}

// NNS_SndArcLoadGroup(group, heap): TRUE on success
BOOL NNS_SndArcLoadGroup(u32 a, u32 b)
{
    return NNSi_SndArcLoadGroup(a, b) == 0;
}

// NNS_SndArcLoadSeqArc(id, heap): TRUE on success
BOOL func_0210cc84(u32 id, u32 heap)
{
    return NNSi_SndArcLoadSeqArc(id, 255, heap, 1, 0) == 0;
}

// NNS_SndArcLoadBank(id, heap): TRUE on success
BOOL NNS_SndArcLoadBank(u32 id, u32 heap)
{
    return NNSi_SndArcLoadBank(id, 255, heap, 1, 0) == 0;
}

// NNS_SndArcLoadWaveArc(id, heap): TRUE on success
BOOL NNS_SndArcLoadWaveArc(u32 id, u32 heap)
{
    return NNSi_SndArcLoadWaveArc(id, 255, heap, 1, 0) == 0;
}

// NNSi_SndArcLoadGroup-like: load every entry of a group
u32 NNSi_SndArcLoadGroup(u32 grp, u32 heap)
{
    GrpRec *g = (GrpRec *)NNS_SndArcGetGroupInfo(grp);
    u32 i;
    GrpEnt *e;
    u32 r;
    if (g == 0) {
        return 1;
    }
    for (i = 0; i < g->count; i++) {
        e = &g->ent[i];
        switch (e->type) {
        case 0:
            r = NNSi_SndArcLoadSeq(e->id, e->flags, heap, 1, 0);
            if (r != 0) {
                return r;
            }
            break;
        case 3:
            r = NNSi_SndArcLoadSeqArc(e->id, e->flags, heap, 1, 0);
            if (r != 0) {
                return r;
            }
            break;
        case 1:
            r = NNSi_SndArcLoadBank(e->id, e->flags, heap, 1, 0);
            if (r != 0) {
                return r;
            }
            break;
        case 2:
            r = NNSi_SndArcLoadWaveArc(e->id, e->flags, heap, 1, 0);
            if (r != 0) {
                return r;
            }
            break;
        }
    }
    return 0;
}

// NNS_SndArcLoadSeq-like (internal; loads its bank first)
u32 NNSi_SndArcLoadSeq(u32 id, u32 flags, u32 heap, u32 flag, u32 *out)
{
    SeqRec *rec = (SeqRec *)NNS_SndArcGetSeqInfo(id);
    u32 r;
    u32 p;
    if (rec == 0) {
        return 2;
    }
    r = NNSi_SndArcLoadBank(rec->bank, flags, heap, flag, 0);
    if (r != 0) {
        return r;
    }
    if (flags & 1) {
        p = LoadSeq(rec->fileId, heap, flag);
        if (p == 0) {
            return 6;
        }
    } else {
        p = NNS_SndArcGetFileAddress(rec->fileId);
    }
    if (out != 0) {
        *out = p;
    }
    return 0;
}

// NNS_SndArcLoadSeqArc-like (internal)
u32 NNSi_SndArcLoadSeqArc(u32 id, u32 flags, u32 heap, u32 flag, u32 *out)
{
    u32 *rec = (u32 *)NNS_SndArcGetSeqArcInfo(id);
    u32 p;
    if (rec == 0) {
        return 3;
    }
    if (flags & 8) {
        p = LoadSeqArc(rec[0], heap, flag);
        if (p == 0) {
            return 7;
        }
    } else {
        p = NNS_SndArcGetFileAddress(rec[0]);
    }
    if (out != 0) {
        *out = p;
    }
    return 0;
}

// NNS_SndArcLoadBank-like (internal, loads wave archives as needed)
u32 NNSi_SndArcLoadBank(u32 id, u32 flags, u32 heap, u32 flag, u32 *out)
{
    BankRec *rec = (BankRec *)NNS_SndArcGetBankInfo(id);
    u32 bank;
    u32 wave;
    s32 i;
    u32 load;
    u32 r;
    if (rec == 0) {
        return 4;
    }
    if (flags & 2) {
        bank = LoadBank(rec->fileId, heap, flag);
        if (bank == 0) {
            return 8;
        }
    } else {
        bank = NNS_SndArcGetFileAddress(rec->fileId);
    }
    load = flags & 4;
    for (i = 0; i < 4; i++) {
        FileRec *w;
        if (rec->wa[i] == 0xffff) {
            continue;
        }
        w = (FileRec *)NNS_SndArcGetWaveArcInfo(rec->wa[i]);
        if (w == 0) {
            return 5;
        }
        r = NNSi_SndArcLoadWaveArc(rec->wa[i], flags, heap, flag, &wave);
        if (r != 0) {
            return r;
        }
        if (w->loadFlag & 1) {
            if (load != 0) {
                if (LoadSingleWaves(wave, bank, i, w->fileId, heap) == 0) {
                    return 9;
                }
            }
        }
        if (bank != 0 && wave != 0) {
            SND_AssignWaveArc(bank, i, wave);
        }
    }
    if (out != 0) {
        *out = bank;
    }
    return 0;
}

// NNS_SndArcLoadWaveArc-like (internal, with load flags)
u32 NNSi_SndArcLoadWaveArc(u32 id, u32 flags, u32 heap, u32 flag, u32 *out)
{
    FileRec *rec = (FileRec *)NNS_SndArcGetWaveArcInfo(id);
    u32 p;
    if (rec == 0) {
        return 5;
    }
    if (flags & 4) {
        if (rec->loadFlag & 1) {
            p = LoadWaveArcTable(rec->fileId, heap, flag);
        } else {
            p = LoadWaveArc(rec->fileId, heap, flag);
        }
        if (p == 0) {
            return 9;
        }
    } else {
        p = NNS_SndArcGetFileAddress(rec->fileId);
    }
    if (out != 0) {
        *out = p;
    }
    return 0;
}

// NNSi_SndArcLoadFile-like: alloc in sound heap + read file
u32 NNSi_SndArcLoadFile(u32 file, void *cb, u32 arg1, u32 arg2, u32 heap)
{
    u32 size = NNS_SndArcGetFileSize(file);
    u8 *mem;
    if (size == 0) {
        return 0;
    }
    if (heap == 0) {
        return 0;
    }
    mem = (u8 *)NNS_SndHeapAlloc(heap, size + 32, cb, arg1, arg2);
    if (mem == 0) {
        return 0;
    }
    if (size != NNS_SndArcReadFile(file, mem, size, 0)) {
        return 0;
    }
    DC_StoreRange(mem, size);
    return (u32)mem;
}

// load a whole file once (callback 0210c338)
u32 LoadSeq(u32 file, u32 heap, u32 flag)
{
    u32 p = NNS_SndArcGetFileAddress(file);
    u32 arc;
    if (p == 0) {
        arc = flag ? NNS_SndArcGetCurrent() : 0;
        p = NNSi_SndArcLoadFile(file, SeqDisposeCallback, arc, file, heap);
        if (flag != 0 && p != 0) {
            NNS_SndArcSetFileAddress(file, p);
        }
    }
    return p;
}

// load a whole file once (callback 0210c338)
u32 LoadSeqArc(u32 file, u32 heap, u32 flag)
{
    u32 p = NNS_SndArcGetFileAddress(file);
    u32 arc;
    if (p == 0) {
        arc = flag ? NNS_SndArcGetCurrent() : 0;
        p = NNSi_SndArcLoadFile(file, SeqDisposeCallback, arc, file, heap);
        if (flag != 0 && p != 0) {
            NNS_SndArcSetFileAddress(file, p);
        }
    }
    return p;
}

// load a whole file once (callback 0210c2fc)
u32 LoadBank(u32 file, u32 heap, u32 flag)
{
    u32 p = NNS_SndArcGetFileAddress(file);
    u32 arc;
    if (p == 0) {
        arc = flag ? NNS_SndArcGetCurrent() : 0;
        p = NNSi_SndArcLoadFile(file, BankDisposeCallback, arc, file, heap);
        if (flag != 0 && p != 0) {
            NNS_SndArcSetFileAddress(file, p);
        }
    }
    return p;
}

// load a whole file once (callback 0210c2c0)
u32 LoadWaveArc(u32 file, u32 heap, u32 flag)
{
    u32 p = NNS_SndArcGetFileAddress(file);
    u32 arc;
    if (p == 0) {
        arc = flag ? NNS_SndArcGetCurrent() : 0;
        p = NNSi_SndArcLoadFile(file, WaveArcDisposeCallback, arc, file, heap);
        if (flag != 0 && p != 0) {
            NNS_SndArcSetFileAddress(file, p);
        }
    }
    return p;
}

// NNSi_SndArcLoadWaveArcHeader-like (0x3c byte header + offset table)
u32 LoadWaveArcTable(u32 file, u32 heap, u32 flag)
{
    u8 *p;
    u32 size;
    u32 n;
    u32 arc;
    u32 r;
    p = (u8 *)NNS_SndArcGetFileAddress(file);
    if (p == 0) {
        if (NNS_SndArcReadFile(file, data_021fbd6c, 0x3c, 0) != 0x3c) {
            return 0;
        }
        n = *(u32 *)(data_021fbd6c + 0x38) * 4;
        size = n * 2 + 0x3c;
        if (heap == 0) {
            return 0;
        }
        arc = flag ? NNS_SndArcGetCurrent() : 0;
        p = (u8 *)NNS_SndHeapAlloc(heap, size + 32, WaveArcTableDisposeCallback, arc, file);
        if (p == 0) {
            return 0;
        }
        r = NNS_SndArcReadFile(file, p, n + 0x3c, 0);
        if (r != n + 0x3c) {
            return 0;
        }
        MI_CpuCopy8(p + 0x3c, p + 0x3c + *(u32 *)(p + 0x38) * 4, n);
        MI_CpuFill8(p + 0x3c, 0, n);
        DC_StoreRange(p, size);
        if (flag != 0) {
            NNS_SndArcSetFileAddress(file, p);
        }
    }
    return (u32)p;
}

// clear the loaded-data pointer of file idx in arc if it equals mem (irq-safe)
void DisposeCallback(u32 mem, u32 arc, u32 idx)
{
    u32 old;
    u32 irq;
    if (arc == 0) {
        return;
    }
    irq = OS_DisableInterrupts();
    old = NNS_SndArcSetCurrent(arc);
    if (mem == NNS_SndArcGetFileAddress(idx)) {
        NNS_SndArcSetFileAddress(idx, 0);
    }
    NNS_SndArcSetCurrent(old);
    OS_RestoreInterrupts(irq);
}

// heap-free callback: wave archive data (invalidate 211682c)
void SeqDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx)
{
    DisposeCallback(mem, arc, idx);
    SND_InvalidateSeqData(mem, mem + size);
}

// heap-free callback: bank data (invalidate 2116800)
void BankDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx)
{
    DisposeCallback(mem, arc, idx);
    SND_InvalidateBankData(mem, mem + size);
    SND_DestroyBank(mem);
}

// heap-free callback: sequence data (invalidate 21167d4)
void WaveArcDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx)
{
    DisposeCallback(mem, arc, idx);
    SND_InvalidateWaveData(mem, mem + size);
    SND_DestroyWaveArc(mem);
}

// heap-free callback: wave archive header
void WaveArcTableDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx)
{
    DisposeCallback(mem, arc, idx);
    SND_DestroyWaveArc(mem);
}

// heap-free callback: unlink a loaded wave, then invalidate (21167d4)
void SingleWaveDisposeCallback(u32 mem, u32 size, u32 base, u32 idx)
{
    if (mem == (u32)SND_GetWaveDataAddress(base, idx)) {
        SND_SetWaveDataAddress(base, idx, 0);
    }
    SND_InvalidateWaveData(mem, mem + size);
}

// NNSi_SndArcLoadWave-like: read one wave of a wave archive into the heap and link it
u32 LoadSingleWave(u8 *wa, u32 idx, u32 file, u32 heap)
{
    u32 size;
    u32 start;
    u32 end;
    u32 cnt;
    u32 *ent;
    u8 *mem;
    if (SND_GetWaveDataAddress(wa, idx) != 0) {
        return 1;
    }
    cnt = SND_GetWaveDataCount(wa);
    ent = (u32 *)(wa + (*(u32 *)(wa + 0x38) + idx) * 4);
    start = ent[0x3c / 4];
    end = (idx < cnt - 1) ? ent[0x40 / 4] : *(u32 *)(wa + 8);
    size = end - start;
    if (heap == 0) {
        return 0;
    }
    mem = (u8 *)NNS_SndHeapAlloc(heap, size + 32, SingleWaveDisposeCallback, wa, idx);
    if (mem == 0) {
        return 0;
    }
    if (size != NNS_SndArcReadFile(file, mem, size, start)) {
        return 0;
    }
    DC_StoreRange(mem, size);
    SND_SetWaveDataAddress(wa, idx, mem);
    return 1;
}

// NNSi_SndArcLoadWavesOfBank-like: load every wave a bank instrument uses from its wave archive (individual wave loading)
u32 LoadSingleWaves(u32 wa, u32 bank, u32 arcNo, u32 file, u32 heap)
{
    Pair pos = SND_GetFirstInstDataPos(bank);
    InstOut inst;
    if (bank == 0) {
        return 0;
    }
    while (SND_GetNextInstData(bank, &inst, &pos)) {
        if (inst.type == 1 && arcNo == inst.h2) {
            if (LoadSingleWave((u8 *)wa, inst.h1, file, heap) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

// ---- file-scope objects (autoload_3 .bss 0x021fbd6c-0x021fbda8)
u8 data_021fbd6c[0x3c];

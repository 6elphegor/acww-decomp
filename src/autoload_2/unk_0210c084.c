// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef int BOOL;
#define NULL 0
#define TRUE 1
#define FALSE 0

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
extern u32 PopCommandBuffer();
extern void FreeCommandBuffer();
extern void RequestNextStrm();
extern u32 _u32_div_f();
extern const signed char data_02135e80[16];
extern const short data_02135e90[89];

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


// ---- NitroSystem sndarc_stream.c: MakeWaveData (0x0210d174), in the shape of SonicRushAdventure-Decomp's matched
// version, with this older library's direct FS_SeekFile/FS_ReadFile reads (the file offset is added here) and
// RequestNextStrm for OnDataEnd. Its two ADPCM tables are the file's .rodata (0x02135e80-0x02135f44).
typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct FSFile { u8 data[0x48]; } FSFile;
typedef struct OSMutex { u8 data[0x18]; } OSMutex;
typedef struct NNSSndFader { s32 a, b, c, d; } NNSSndFader;
typedef enum { NNS_SND_STRM_FORMAT_PCM8, NNS_SND_STRM_FORMAT_PCM16 } NNSSndStrmFormat;
typedef void (*NNSSndStrmCallback)(s32 status, int numChannels, void *buffer[], u32 len, NNSSndStrmFormat format, void *arg);
typedef void (*NNSSndArcStrmCallback)(void);

enum { STRM_FORMAT_PCM8, STRM_FORMAT_PCM16, STRM_FORMAT_ADPCM };

typedef struct NNSSndStrmData {
    u8 fileHeader[0x10];
    u8 blockHeader[8];
    u8 format;
    u8 loopFlag;
    u8 numChannels;
    u8 pad_;
    u16 sampleRate;
    u16 timer;
    u32 loopStart;
    u32 loopEnd;
    u32 dataOffset;
    u32 numBlocks;
    u32 blockSize;
    u32 blockSamples;
    u32 lastBlockSize;
    u32 lastBlockSamples;
} NNSSndStrmData;

typedef struct AdpcmState {
    s16 prevSample;
    u8 prevIndex;
    u8 padding;
} AdpcmState;

typedef struct NNSSndStrmPlayer {
    u8 stream[0x5c];
    FSFile file;
    u32 fileOffset;
    NNSSndStrmData info;
    NNSSndFader fader;
    AdpcmState adpcmState[6];
    BOOL activeFlag : 1;
    BOOL playFlag : 1;
    BOOL startFlag : 1;
    BOOL fadeOutFlag : 1;
    BOOL dirtyFlag : 1;
    BOOL finishFlag : 1;
    BOOL monoFlag : 1;
    volatile int finishCounter;
    volatile BOOL prepareFlag;
    volatile int commandCount;
    int allocChannelCount;
    u8 numChannels;
    u8 padding;
    u8 chNoList[6];
    void *buffer;
    u32 bufSize;
    NNSSndStrmCallback strmCallback;
    void *strmCallbackArg;
    NNSSndArcStrmCallback sndArcStrmCallback;
    void *sndArcStrmCallbackArg;
    int strmNo;
    int playerNo;
    void *handle;
    int prio;
    int initVolume;
    int volume;
    u32 curSample;
} NNSSndStrmPlayer;

typedef struct LoadCommand {
    NNSFndLink link;
    NNSSndStrmPlayer *player;
    s32 status;
    int numChannels;
    void *buffer[6];
    u32 bufLen;
} LoadCommand;

extern u8 *data_021fbdb0;   // sDecodeBuffer
extern OSMutex data_021fbdc0; // sDecodeBufferMutex
#define cAdpcmIndexTable data_02135e80
#define cAdpcmStepSizeTable data_02135e90
#define sDecodeBuffer data_021fbdb0
#define sDecodeBufferMutex data_021fbdc0
static inline void MI_CpuClear8(void *dest, u32 size) { MI_CpuFill8(dest, 0, size); }

const s8 data_02135e80[16] = { // cAdpcmIndexTable
    -1, -1, -1, -1, 2, 4, 6, 8, -1, -1, -1, -1, 2, 4, 6, 8,
};

const s16 data_02135e90[89] = { // cAdpcmStepSizeTable
    7,     8,     9,     10,    11,    12,    13,    14,    16,    17,    19,    21,    23,    25,    28,
    31,    34,    37,    41,    45,    50,    55,    60,    66,    73,    80,    88,    97,    107,   118,
    130,   143,   157,   173,   190,   209,   230,   253,   279,   307,   337,   371,   408,   449,   494,
    544,   598,   658,   724,   796,   876,   963,   1060,  1166,  1282,  1411,  1552,  1707,  1878,  2066,
    2272,  2499,  2749,  3024,  3327,  3660,  4026,  4428,  4871,  5358,  5894,  6484,  7132,  7845,  8630,
    9493,  10442, 11487, 12635, 13899, 15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794, 32767,
};

static inline s16 DecodeAdpcm(int code, AdpcmState *state)
{
    int step;
    int sample;
    int index;
    int d;

    sample = state->prevSample;
    index  = state->prevIndex;

    step = cAdpcmStepSizeTable[index];

    d = step >> 3;
    if (code & 4)
        d += step;
    if (code & 2)
        d += step >> 1;
    if (code & 1)
        d += step >> 2;

    if (code & 8)
    {
        sample -= d;
        if (sample < -32768)
            sample = -32768;
    }
    else
    {
        sample += d;
        if (sample > 32767)
            sample = 32767;
    }

    index += cAdpcmIndexTable[code];

    if (index < 0)
        index = 0;
    else if (index > 89 - 1)
        index = 89 - 1;

    state->prevSample = (s16)sample;
    state->prevIndex  = (u8)index;

    return (s16)sample;
}

// MakeWaveData
void MakeWaveData(LoadCommand *command)
{
    NNSSndStrmPlayer *player = command->player;
    BOOL loopFlag;
    u32 destOffset;
    u32 restSize;
    u32 blockNo;
    u32 blockSize;
    u32 blockSamples;
    u32 blockOffsetSample;
    u32 blockOffset;
    u32 offset;
    u32 samples;
    u32 size;
    u32 readSize;
    int ch;

    if (player->finishFlag && player->finishCounter > 0)
    {
        player->finishCounter--;
    }

    destOffset = 0;

    restSize = command->bufLen;
    while (restSize > 0)
    {
        if (player->finishFlag)
        {
            for (ch = 0; ch < command->numChannels; ch++)
            {
                MI_CpuClear8((u8 *)(command->buffer[ch]) + destOffset, restSize);
            }
            break;
        }

        blockNo = player->curSample / player->info.blockSamples;

        if (blockNo < player->info.numBlocks - 1)
        {
            blockSize    = player->info.blockSize;
            blockSamples = player->info.blockSamples;
        }
        else
        {
            blockSize    = player->info.lastBlockSize;
            blockSamples = player->info.lastBlockSamples;
        }

        blockOffsetSample = player->curSample;
        blockOffsetSample -= blockNo * player->info.blockSamples;

        samples = restSize;
        if (player->info.format != STRM_FORMAT_PCM8)
        {
            samples >>= 1;
        }

        if (player->dirtyFlag)
        {
            if (blockOffsetSample == 0)
            {
                player->dirtyFlag = FALSE;
            }
            else
            {
                samples           = blockOffsetSample;
                blockOffsetSample = 0;
            }
        }

        loopFlag = FALSE;
        if (blockOffsetSample + samples >= blockSamples)
        {
            samples = blockSamples - blockOffsetSample;

            if (blockNo >= player->info.numBlocks - 1)
            {
                if (player->info.loopFlag)
                {
                    loopFlag = TRUE;
                }
                else
                {
                    player->finishFlag = TRUE;
                }
            }
        }

        blockOffset = blockOffsetSample;
        size        = samples;
        switch (player->info.format)
        {
            case STRM_FORMAT_PCM8:
                readSize = size;
                break;

            case STRM_FORMAT_PCM16:
                blockOffset <<= 1;
                size <<= 1;
                readSize = size;
                break;

            case STRM_FORMAT_ADPCM: {
                u32 endSample = blockOffsetSample + samples;
                blockOffset >>= 1;
                endSample++;
                endSample >>= 1;
                readSize = endSample - blockOffset;
                if (blockOffsetSample == 0)
                {
                    readSize += sizeof(AdpcmState);
                }
                else
                {
                    blockOffset += sizeof(AdpcmState);
                }
                size <<= 1;

                break;
            }
        }

        offset = blockOffset;
        offset += blockNo * player->info.blockSize * player->info.numChannels;
        offset += player->info.dataOffset;
        offset += player->fileOffset;

        for (ch = 0; ch < command->numChannels; ch++)
        {
            void *dest;
            void *read_dest;

            dest = read_dest = (u8 *)(command->buffer[ch]) + destOffset;

            if (ch < player->info.numChannels)
            {
                s32 resultSize;

                if (player->info.format == STRM_FORMAT_ADPCM)
                {
                    OS_LockMutex(&sDecodeBufferMutex);
                    read_dest = sDecodeBuffer;
                }

                FS_SeekFile(&player->file, (s32)(offset + ch * blockSize), 0);
                resultSize = FS_ReadFile(&player->file, read_dest, (s32)readSize);

                if (resultSize != readSize)
                {
                    size               = 0;
                    samples            = 0;
                    loopFlag           = FALSE;
                    player->finishFlag = TRUE;
                    if (player->info.format == STRM_FORMAT_ADPCM)
                    {
                        OS_UnlockMutex(&sDecodeBufferMutex);
                    }
                    break;
                }

                if (player->info.format == STRM_FORMAT_ADPCM)
                {
                    AdpcmState *state = &player->adpcmState[ch];
                    u8 *srcp          = sDecodeBuffer;
                    s16 *destp        = dest;
                    u32 i;
                    u32 end;

                    if (blockOffsetSample == 0)
                    {
                        *state = *((AdpcmState *)srcp)++;
                    }

                    end = blockOffsetSample + samples;

                    i = blockOffsetSample;
                    if (i & 0x01)
                    {
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    while (i < (end & ~0x01))
                    {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    if (i < end)
                    {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                    }
                    OS_UnlockMutex(&sDecodeBufferMutex);
                }
            }
            else
            {
                if (player->monoFlag)
                {
                    MI_CpuClear8(dest, size);
                }
                else
                {
                    MI_CpuCopy8((u8 *)(command->buffer[0]) + destOffset, dest, size);
                }
            }
        }

        if (player->dirtyFlag)
        {
            player->dirtyFlag = FALSE;
            continue;
        }

        if (loopFlag)
        {
            player->curSample = player->info.loopStart;
        }
        else
        {
            player->curSample += samples;
        }

        destOffset += size;

        restSize -= size;

        if (player->finishFlag && player->sndArcStrmCallback)
        {
            RequestNextStrm(player);
        }
    }

    if (player->strmCallback != NULL)
    {
        player->strmCallback(command->status, command->numChannels, command->buffer, command->bufLen,
                             player->info.format == STRM_FORMAT_PCM8 ? NNS_SND_STRM_FORMAT_PCM8 : NNS_SND_STRM_FORMAT_PCM16, player->strmCallbackArg);
    }

    for (ch = 0; ch < command->numChannels; ch++)
    {
        DC_FlushRange(command->buffer[ch], command->bufLen);
    }

    if (command->status == 0)
    {
        player->prepareFlag = TRUE;
    }
}

// stream/wave decode thread entry (never returns)
void StrmThreadProc(u8 *obj)
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
            item = PopCommandBuffer(list);
            if (item == 0) {
                OS_UnlockMutex(mutex);
                break;
            }
            MakeWaveData((void *)item);
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
u32 NNS_SndArcPlayerStartSeqArcEx(u32 handle, s32 player, s32 bank, s32 prio, u32 arcNo, u32 idx)
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
BOOL NNS_SndArcLoadSeqArc(u32 id, u32 heap)
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

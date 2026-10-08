#ifndef NNSYS_SND_ARCSTRM_H
#define NNSYS_SND_ARCSTRM_H

#include "types.h"
#include "nitro/fs.h"
#include "sys/OSThread.h"
#include "nnsys/fnd_list.h"

// NitroSystem sound-archive stream player (sndarc_stream.c): the stream players and their load commands, used by
// src/autoload_2/unk_0210da28.c (players, command queue, thread) and src/autoload_2/unk_0210c084.c (MakeWaveData and
// the stream thread's procedure). Offsets are the DS's.

// NNSiSndFader (unk_0210ec0c.c)
typedef struct NNSSndFader {
    s32 origin;     // 0x00
    s32 target;     // 0x04
    s32 counter;    // 0x08
    s32 frame;      // 0x0c
} NNSSndFader;

typedef enum { NNS_SND_STRM_FORMAT_PCM8, NNS_SND_STRM_FORMAT_PCM16 } NNSSndStrmFormat;

// the stream data's format (NNSSndStrmData.format)
enum { STRM_FORMAT_PCM8, STRM_FORMAT_PCM16, STRM_FORMAT_ADPCM };

// a block callback's channel buffers: the stream library (unk_0210a478.c) keeps them as 32-bit addresses (they are
// the sound channels' buffers)
typedef u32 NNSSndStrmBufAddr;
static inline void *NNSi_SndStrmBufPtr(NNSSndStrmBufAddr a) { return (void *)(__UINTPTR_TYPE__)a; }
static inline u32 NNSi_SndArm7Addr(const void *p) { return (u32)(__UINTPTR_TYPE__)p; }

typedef void (*NNSSndStrmCallback)(s32 status, int numChannels, NNSSndStrmBufAddr buffer[], u32 len,
                                   NNSSndStrmFormat format, void *arg);

// the stream-change callback (sndArcStrmCallback): asked for the next stream when one ends
typedef struct NNSSndArcStrmCallbackParam {
    u32 playerNo;
    u32 strmNo;
} NNSSndArcStrmCallbackParam;
typedef struct NNSSndArcStrmCallbackInfo {
    u32 strmNo;
    u32 offset; // (ms)
} NNSSndArcStrmCallbackInfo;
typedef BOOL (*NNSSndArcStrmCallback)(s32 status, const NNSSndArcStrmCallbackParam *param,
                                      NNSSndArcStrmCallbackInfo *info, void *arg);

// the stream file's header (the first 0x40 bytes: read into the player)
typedef struct NNSSndStrmData {
    u8 fileHeader[0x10];  // 0x00
    u8 blockHeader[8];    // 0x10
    u8 format;            // 0x18
    u8 loopFlag;          // 0x19
    u8 numChannels;       // 0x1a
    u8 pad_;
    u16 sampleRate;       // 0x1c
    u16 timer;            // 0x1e
    u32 loopStart;        // 0x20
    u32 loopEnd;          // 0x24
    u32 dataOffset;       // 0x28
    u32 numBlocks;        // 0x2c
    u32 blockSize;        // 0x30
    u32 blockSamples;     // 0x34
    u32 lastBlockSize;    // 0x38
    u32 lastBlockSamples; // 0x3c
} NNSSndStrmData;

typedef struct NNSSndStrmAdpcmState {
    s16 prevSample;
    u8 prevIndex;
    u8 padding;
} NNSSndStrmAdpcmState;

// a sound archive's stream record (NNS_SndArcGetStrmInfo: in the archive's info block)
typedef struct NNSSndArcStrmInfo {
    u32 fileId;     // 0
    u8 volume;      // 4
    u8 playerPrio;  // 5
    u8 playerNo;    // 6
    u8 flags;       // 7 (bit 0: stereo)
} NNSSndArcStrmInfo;

// the stream player (NNSSndArcStrmPlayer), 0x160 bytes on the DS, four of them
typedef struct NNSSndStrmPlayer {
#ifdef HOST64
    u8 stream[136] __attribute__((aligned(8)));  // NNSSndStrm (Strm in unk_0210a478.c: its 64-bit size, checked there)
#else
    u8 stream[0x5c];
#endif
    FSFile file;                    // 0x5c
    u32 fileOffset;                 // 0xa4
    NNSSndStrmData info;            // 0xa8
    NNSSndFader fader;              // 0xe8
    NNSSndStrmAdpcmState adpcmState[6]; // 0xf8
    BOOL activeFlag : 1;            // 0x110
    BOOL playFlag : 1;
    BOOL startFlag : 1;
    BOOL fadeOutFlag : 1;
    BOOL dirtyFlag : 1;
    BOOL finishFlag : 1;
    BOOL monoFlag : 1;
    volatile int finishCounter;     // 0x114
    volatile BOOL prepareFlag;      // 0x118
    volatile int commandCount;      // 0x11c
    int allocChannelCount;          // 0x120
    u8 numChannels;                 // 0x124
    u8 padding;
    u8 chNoList[6];                 // 0x126
    void *buffer;                   // 0x12c
    u32 bufSize;                    // 0x130
    NNSSndStrmCallback strmCallback; // 0x134
    void *strmCallbackArg;          // 0x138
    NNSSndArcStrmCallback sndArcStrmCallback; // 0x13c
    void *sndArcStrmCallbackArg;    // 0x140
    int strmNo;                     // 0x144
    int playerNo;                   // 0x148
    struct NNSSndStrmPlayer **handle; // 0x14c
    int prio;                       // 0x150
    int initVolume;                 // 0x154
    int volume;                     // 0x158
    u32 curSample;                  // 0x15c
} NNSSndStrmPlayer;

// a block to fill (queued by the stream's block callback for the stream thread)
typedef struct NNSSndStrmLoadCommand {
    NNSFndLink link;                // 0x00
    NNSSndStrmPlayer *player;       // 0x08
    s32 status;                     // 0x0c
    int numChannels;                // 0x10
    NNSSndStrmBufAddr buffer[6];    // 0x14
    u32 bufLen;                     // 0x2c
} NNSSndStrmLoadCommand;

// the stream thread (its stack after the thread on the DS: the host's threads run on their own stacks)
typedef struct NNSSndStrmThread {
    union {
        OSThread thread;
        u8 threadAndStack[0x4c0];
    };
    OSThreadQueue queue;            // 0x4c0
    u32 pad_4c8;
    OSMutex mutex;                  // 0x4cc
    NNSFndList commandList;         // 0x4e4
} NNSSndStrmThread;

#endif

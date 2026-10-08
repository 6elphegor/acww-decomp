// Host build: the ARM7's sound driver, native. On the DS the ARM7 runs NitroSDK's sound driver (commands from
// the ARM9's SND library, the sequence player, channel envelopes and LFOs) and the sound hardware mixes the 16
// channels. Here the driver is C code in the host program (ported from pret/pokediamond's decompilation of the
// same NitroSDK driver; the command set and the shared structures checked against ACWW's ARM9 side) and spu.c
// mixes the channels in software. See docs/host.md.
//
// What the ARM9 sees keeps the DS layout: SNDSharedWork (in ARM9 memory, written here), the sound files it links
// (banks, wave archives: their pointer slots are 32 bits, `ptr32`: include/host_ptr32.h), the copy of the driver's state that
// READ_DRIVER_INFO writes (serialized field by field, driver.c) and the player / track fields the ARM9 sets by
// offset (SNDi_SetPlayerParam, SNDi_SetTrackParam: all before the first pointer). The driver's own structures use
// host pointers. The ARM9's pointers (commands, sequence data, banks, waves) are host pointers (the commands' arguments
// are pointer-sized; the command list's pointer comes with its PXI message, pxi7.c).
#ifndef HOST_SND7_H
#define HOST_SND7_H

#include <stddef.h>

#include "../host.h"

typedef int8_t s8;
typedef int16_t s16;
typedef signed long long s64;
typedef int BOOL;

// a pointer in a 32-bit slot of the DS's files (the bank's wave archive links) and of the driver state READ_DRIVER_INFO
// copies: the pointer itself when it fits, else a handle (include/host_ptr32.h)
#include "host_ptr32.h"
typedef u32 ptr32;
#define TRUE 1
#define FALSE 0

#define SND_PLAYER_COUNT 16
#define SND_CHANNEL_COUNT 16
#define SND_TRACK_COUNT 32
#define SND_TRACK_COUNT_PER_PLAYER 16
#define SND_ALARM_COUNT 8
#define SND_TRACK_MAX_CALL 3
#define SND_INST_MAX_KEYSPLIT 8
#define SND_BANK_MAX_WAVEARC 4
#define SND_VOL_DB_MIN (-723)

#define SND_ENV_ATTACK 0
#define SND_ENV_DECAY 1
#define SND_ENV_SUSTAIN 2
#define SND_ENV_RELEASE 3

#define SND_CHN_TYPE_PCM 0
#define SND_CHN_TYPE_PSG 1
#define SND_CHN_TYPE_NOISE 2

#define SND_CHN_SYNC_START 0x1
#define SND_CHN_SYNC_STOP 0x2
#define SND_CHN_SYNC_TIMER 0x4
#define SND_CHN_SYNC_VOLUME 0x8
#define SND_CHN_SYNC_PAN 0x10

#define SND_LFO_PITCH 0
#define SND_LFO_VOLUME 1
#define SND_LFO_PAN 2

#define SND_INST_ILLEGAL 0
#define SND_INST_PCM 1
#define SND_INST_PSG 2
#define SND_INST_NOISE 3
#define SND_INST_DIRECTPCM 4
#define SND_INST_DUMMY 5
#define SND_INST_DRUM_TABLE 16
#define SND_INST_KEY_SPLIT 17

struct SNDWaveParam {
    u8 format;       // 0x0
    u8 loopEnabled;  // 0x1
    u16 samplerate;  // 0x2
    u16 timer;       // 0x4
    u16 loopStart;   // 0x6
    u32 loopLength;  // 0x8
};

struct SNDLfoParam {
    u8 target;  // 0x0
    u8 speed;   // 0x1
    u8 depth;   // 0x2
    u8 range;   // 0x3
    u16 delay;  // 0x4
};

struct SNDLfo {
    struct SNDLfoParam param;  // 0x0
    u16 delayCounter;          // 0x6
    u16 counter;               // 0x8
};

struct SNDExChannel;
typedef void (*SNDExChannelCallback)(struct SNDExChannel *chn, int status, void *userData);

struct SNDExChannel {
    u8 id;         // 0x00
    u8 type;       // 0x01
    u8 envStatus;  // 0x02
    struct {
        u8 active : 1;
        u8 start : 1;
        u8 autoSweep : 1;
        u8 syncFlag : 5;
    } flags;                   // 0x03
    u8 panRange;               // 0x04
    u8 rootMidiKey;            // 0x05
    s16 userDecay2;            // 0x06
    u8 midiKey;                // 0x08
    u8 velocity;               // 0x09
    s8 initPan;                // 0x0A
    s8 userPan;                // 0x0B
    s16 userDecay;             // 0x0C
    s16 userPitch;             // 0x0E
    s32 envAttenuation;        // 0x10
    s32 sweepCounter;          // 0x14
    s32 sweepLength;           // 0x18
    u8 envAttack;              // 0x1C
    u8 envSustain;             // 0x1D
    u16 envDecay;              // 0x1E
    u16 envRelease;            // 0x20
    u8 priority;               // 0x22
    u8 pan;                    // 0x23
    u16 volume;                // 0x24
    u16 timer;                 // 0x26
    struct SNDLfo lfo;         // 0x28
    s16 sweepPitch;            // 0x32
    s32 length;                // 0x34
    struct SNDWaveParam waveParam;  // 0x38
    union {
        const void *waveDataPtr;
        s32 dutyCycle;
    };                              // 0x44
    SNDExChannelCallback callback;  // 0x48
    void *callbackUserData;         // 0x4C
    struct SNDExChannel *channelLLNext;  // 0x50
};

struct SNDBankData;

struct SNDPlayer {
    struct {
        u8 active : 1;
        u8 prepared : 1;
        u8 paused : 1;
    } flags;                                 // 0x0
    u8 playerId;                             // 0x1
    u8 unk_2[2];                             // 0x2
    u8 prio;                                 // 0x4
    u8 volume;                               // 0x5
    s16 extFader;                            // 0x6
    u8 tracks[SND_TRACK_COUNT_PER_PLAYER];   // 0x8
    u16 tempo;                               // 0x18
    u16 tempoRatio;                          // 0x1A
    u16 tempoCounter;                        // 0x1C
    u8 unk_1E[2];                            // 0x1E
    struct SNDBankData *bank;                // 0x20
};

struct SNDTrack {
    struct {
        u8 active : 1;
        u8 noteWait : 1;
        u8 muted : 1;
        u8 tie : 1;
        u8 noteFinishWait : 1;
        u8 portamento : 1;
        u8 cmp : 1;
        u8 channelMask : 1;
    } flags;                 // 0x00
    u8 panRange;             // 0x01
    u16 program;             // 0x02
    u8 volume;               // 0x04
    u8 expression;           // 0x05
    s8 pitchBend;            // 0x06
    u8 bendRange;            // 0x07
    s8 pan;                  // 0x08
    s8 extPan;               // 0x09
    s16 extFader;            // 0x0A
    s16 extPitch;            // 0x0C
    u8 envAttack;            // 0x0E
    u8 envDecay;             // 0x0F
    u8 envSustain;           // 0x10
    u8 envRelease;           // 0x11
    u8 priority;             // 0x12
    s8 transpose;            // 0x13
    u8 portamentoKey;        // 0x14
    u8 portamentoTime;       // 0x15
    s16 sweepPitch;          // 0x16
    struct SNDLfoParam mod;  // 0x18
    u16 channelMask;         // 0x1E
    s32 wait;                // 0x20
    const u8 *base;          // 0x24
    const u8 *cur;           // 0x28
    const u8 *posCallStack[SND_TRACK_MAX_CALL];  // 0x2C
    u8 loopCount[SND_TRACK_MAX_CALL];            // 0x38
    u8 callStackDepth;                           // 0x3B
    struct SNDExChannel *channelLLHead;          // 0x3C
};

// the ARM7's OSAlarm in the DS layout is only copied to the ARM9 (driver info), never used there
struct SNDAlarm {
    u8 enable;     // 0x00
    u8 id;         // 0x01
    u16 unk_2;     // 0x02
    u64 tick;      // 0x04 (OS ticks: 64 bus cycles)
    u64 period;    // 0x0C
    u8 alarm[0x2c];  // 0x14
} __attribute__((packed, aligned(4)));

struct SNDWork {
    struct SNDExChannel channels[SND_CHANNEL_COUNT];  // 0x000
    struct SNDPlayer players[SND_PLAYER_COUNT];       // 0x540
    struct SNDTrack tracks[SND_TRACK_COUNT];          // 0x780
    struct SNDAlarm alarms[SND_ALARM_COUNT];          // 0xF80
};

struct SNDSharedWork {
    u32 finishedCommandTag;  // 0x0
    u32 playerStatus;        // 0x4
    u16 channelStatus;       // 0x8
    u16 captureStatus;       // 0xA
    u8 unk_C[0x14];          // 0xC
    struct {
        s16 localVars[16];   // 0x0
        u32 tickCounter;     // 0x20
    } players[SND_PLAYER_COUNT];  // 0x20
    s16 globalVars[16];           // 0x260
};

// in ARM9 memory (READ_DRIVER_INFO): the SNDWork in the DS layout, then
struct SNDDriverInfo {
    u8 work[0x1180];                          // 0x0000 SNDWork, DS layout (driver.c)
    u32 channelControls[SND_CHANNEL_COUNT];   // 0x1180
    u32 workPtr;                              // 0x11C0 the stand-in address the pointers in `work` are relative to
    u32 lockedChannels;                       // 0x11C4
    u8 unk_XXX[24];                           // 0x11C8
};

struct SNDCommand {
    struct SNDCommand *llNext;  // 0x0
    s32 id;                     // 0x4
    uintptr_t arg[4];           // 0x8 (pointer-sized: addresses among them; src/autoload_2/unk_021163b0.c)
};

struct SNDBinaryFileHeader {
    s8 signature[4];  // 0x0
    u16 byteOrder;    // 0x4
    u16 version;      // 0x6
    u32 fileSize;     // 0x8
    u16 headerSize;   // 0xC
    u16 dataBlocks;   // 0xE
};

struct SNDBinaryBlockHeader {
    u32 type;  // 0x0
    u32 size;  // 0x4
};

struct SNDInstParam {
    u16 wave[2];     // 0x0
    u8 rootKey;      // 0x4
    u8 envAttack;    // 0x5
    u8 envDecay;     // 0x6
    u8 envSustain;   // 0x7
    u8 envRelease;   // 0x8
    u8 pan;          // 0x9
};

struct SNDInstData {
    u8 type;                    // 0x0
    u8 unk_1;                   // 0x1
    struct SNDInstParam param;  // 0x2
};

struct SNDKeySplit {
    u8 key[SND_INST_MAX_KEYSPLIT];     // 0x0
    struct SNDInstData instruments[];  // 0x8
};

struct SNDDrumSet {
    u8 minKey;
    u8 maxKey;
    struct SNDInstData instruments[];
};

struct SNDWaveArc;
struct SNDWaveArcLink {
    ptr32 waveArc;        // 0x0 struct SNDWaveArc *
    ptr32 waveArcLLnext;  // 0x4 struct SNDWaveArcLink *
};

struct SNDBankData {
    struct SNDBinaryFileHeader fileHeader;    // 0x00
    struct SNDBinaryBlockHeader blockHeader;  // 0x10
    struct SNDWaveArcLink waveArcLinks[SND_BANK_MAX_WAVEARC];  // 0x18
    u32 instCount;                            // 0x38
    u32 instOffsets[];                        // 0x3C
};

struct SNDWaveArc {
    struct SNDBinaryFileHeader fileHeader;    // 0x00
    struct SNDBinaryBlockHeader blockHeader;  // 0x10
    ptr32 waveArcLLHead;                      // 0x18 struct SNDWaveArcLink *
    u8 unk_1C[28];                            // 0x1C
    u32 waveCount;                            // 0x38
    u32 waveOffsets[];                        // 0x3C
};

struct SNDWaveData {
    struct SNDWaveParam param;  // 0x0
    u8 sampleData[];            // 0xC
};

// the parts the ARM9 reaches by offset, on every host
_Static_assert(offsetof(struct SNDExChannel, waveParam) == 0x38, "SNDExChannel.waveParam");
_Static_assert(offsetof(struct SNDPlayer, tempoRatio) == 0x1a, "SNDPlayer.tempoRatio");
_Static_assert(offsetof(struct SNDPlayer, bank) >= 0x20, "SNDPlayer: the ARM9's fields come first");
_Static_assert(offsetof(struct SNDTrack, wait) == 0x20, "SNDTrack.wait");
_Static_assert(sizeof(struct SNDAlarm) == 0x40, "SNDAlarm");
_Static_assert(sizeof(struct SNDSharedWork) == 0x280, "SNDSharedWork");
_Static_assert(sizeof(struct SNDWaveArcLink) == 8, "SNDWaveArcLink");
#if UINTPTR_MAX == 0xffffffffu  // with 32-bit pointers the driver's own structures are the DS's too
_Static_assert(sizeof(struct SNDExChannel) == 0x54, "SNDExChannel");
_Static_assert(sizeof(struct SNDPlayer) == 0x24, "SNDPlayer");
_Static_assert(sizeof(struct SNDTrack) == 0x40, "SNDTrack");
_Static_assert(offsetof(struct SNDTrack, channelLLHead) == 0x3c, "SNDTrack.channelLLHead");
_Static_assert(sizeof(struct SNDWork) == 0x1180, "SNDWork");
#endif
_Static_assert(sizeof(struct SNDDriverInfo) == 0x11e0, "SNDDriverInfo");
_Static_assert(offsetof(struct SNDDriverInfo, workPtr) == 0x11c0, "SNDDriverInfo.workPtr");
_Static_assert(sizeof(struct SNDInstData) == 0xc, "SNDInstData");
_Static_assert(sizeof(struct SNDBankData) == 0x3c, "SNDBankData");

// driver.c: the driver's state, commands, alarms, tables
extern struct SNDWork snd7_work;
extern struct SNDSharedWork *snd7_shared;
extern const s16 snd7_decibel_square_table[128];
u16 snd7_calc_timer(int timer, int pitch);
u16 snd7_calc_channel_volume(int value);
s8 snd7_sin_idx(int x);
u16 snd7_calc_random(void);
void snd7_skip_pause(void);   // SND_StopIntervalTimer / SND_StartIntervalTimer around a skip
void snd7_skip_resume(void);
BOOL snd7_read_inst_data(const struct SNDBankData *bank, s32 program, s32 midiKey, struct SNDInstData *inst);
BOOL snd7_note_on(struct SNDExChannel *chn, s32 midiKey, s32 velocity, s32 length, const struct SNDBankData *bank,
                  const struct SNDInstData *inst);

// channel.c: the register layer (SND_channel.c / SND_global.c / SND_capture.c) on spu.c
void snd7_setup_channel_pcm(int ch, const void *data, int format, int loop, int loopStart, int loopLength,
                            int volume, int volumeDiv, int timer, int pan);
void snd7_setup_channel_psg(int ch, int duty, int volume, int volumeDiv, int timer, int pan);
void snd7_setup_channel_noise(int ch, int volume, int volumeDiv, int timer, int pan);
void snd7_stop_channel(int ch, int hold);
void snd7_set_channel_volume(int ch, int vol, int volDiv);
void snd7_set_channel_timer(int ch, int timer);
void snd7_set_channel_pan(int ch, int pan);
BOOL snd7_is_channel_active(int ch);
void snd7_set_master_pan(int pan);
u32 snd7_get_channel_control(int ch);
void snd7_set_surround_decay(int decay);
void snd7_setup_capture(int idx, int format, void *data, int size, BOOL loop, int capCtrlSrc, int capCtrlDst);
BOOL snd7_is_capture_active(int idx);

// exchannel.c
void snd7_exchannel_init(void);
void snd7_update_exchannel(void);
void snd7_exchannel_main(BOOL step);
BOOL snd7_start_exchannel_pcm(struct SNDExChannel *chn, const struct SNDWaveParam *wave, const void *data, s32 length);
BOOL snd7_start_exchannel_psg(struct SNDExChannel *chn, s32 duty, s32 length);
BOOL snd7_start_exchannel_noise(struct SNDExChannel *chn, s32 length);
void snd7_set_exchannel_attack(struct SNDExChannel *chn, s32 attack);
void snd7_set_exchannel_decay(struct SNDExChannel *chn, s32 decay);
void snd7_set_exchannel_sustain(struct SNDExChannel *chn, s32 sustain);
void snd7_set_exchannel_release(struct SNDExChannel *chn, s32 release);
void snd7_release_exchannel(struct SNDExChannel *chn);
BOOL snd7_is_exchannel_active(struct SNDExChannel *chn);
struct SNDExChannel *snd7_alloc_exchannel(u32 channelMask, int priority, u32 flags, SNDExChannelCallback callback,
                                          void *userData);
void snd7_free_exchannel(struct SNDExChannel *chn);
void snd7_stop_unlocked_channel(u32 channelMask, u32 weak);
void snd7_lock_channel(u32 channelMask, u32 weak);
void snd7_unlock_channel(u32 channelMask, u32 weak);
u32 snd7_get_locked_channel(u32 weak);
void snd7_invalidate_wave(const void *start, const void *end);
void snd7_init_lfo_param(struct SNDLfoParam *p);

// seq.c
void snd7_seq_init(void);
void snd7_seq_main(BOOL step);
void snd7_prepare_seq(int player, const void *seq, u32 offset, struct SNDBankData *bank);
void snd7_start_prepared_seq(int player);
void snd7_start_seq(int player, const void *seq, u32 offset, struct SNDBankData *bank);
void snd7_stop_seq(int player);
void snd7_pause_seq(int player, BOOL flag);
void snd7_skip_seq(int player, u32 ticks);
void snd7_set_track_mute(int player, u32 trackMask, int muteMode);
void snd7_set_track_allocatable_channel(int player, u32 trackMask, u32 channelMask);
void snd7_invalidate_seq(const void *start, const void *end);
void snd7_invalidate_bank(const void *start, const void *end);
void snd7_set_player_param(int player, u32 offset, u32 data, int size);
void snd7_set_track_param(int player, u32 trackMask, u32 offset, u32 data, int size);

// spu.c: the sound hardware (16 channels, 2 capture units, the mixer), clocked in bus cycles (33.5 MHz)
typedef struct {
    u32 cnt;   // SOUNDxCNT: volume 0-6, divider 8-9, hold 15, pan 16-22, duty 24-26, repeat 27-28, format 29-30,
               // start 31
    uintptr_t sad;  // SOUNDxSAD: source address (the ARM9's buffer, a host pointer)
    u16 tmr;   // SOUNDxTMR: timer reload (the sample period is 0x10000 - tmr cycles of 16.76 MHz)
    u16 pnt;   // SOUNDxPNT: loop start, words
    u32 len;   // SOUNDxLEN: length after the loop start, words
} SpuChannelRegs;
extern SpuChannelRegs spu_ch[16];
extern u16 spu_soundcnt;       // SOUNDCNT: master volume 0-6, output selectors 8-11, ch1/ch3 not mixed 12-13,
                               // enable 15
extern u8 spu_capcnt[2];       // SNDCAPxCNT: add 0, source 1, one-shot 2, PCM8 3, start 7
extern uintptr_t spu_capdad[2];  // SNDCAPxDAD: destination (the ARM9's buffer, a host pointer)
extern u16 spu_caplen[2];      // words
void spu_cnt_written(int ch, u32 old);  // after spu_ch[ch].cnt changes: starts the channel on bit 31 0 -> 1
void spu_capcnt_written(int idx, u8 old);
void spu_mix_until(u64 cycles);         // generate output up to bus cycle `cycles`

// output.c: where the mixed samples go (the viewer's audio ring, ACWW_WAV)
void snd7_output(const s16 *lr, u32 frames);

#endif

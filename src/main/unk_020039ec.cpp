#include "types.h"
#include "gfx/VecFx32.h"
#include "snd/SndEnvChannel.h"
#include "snd/SndSeEmitter.h"
#include "snd/SndSceneBase.h"


extern u32 gCamera;
extern VecFx32 gCameraEye;
extern u8 gSndMgr[];
extern u8 gFieldSceneKind;
extern u8 *data_021c1b3c;
extern u8 data_021f5be0[];



SndSceneBase *gSndScene;
u8 gSndHeapBuffer[0x80000];

extern "C" {
void MelodyBeat_Update(u32, void *);
}

extern "C" {
s32 BgmSyncSnd_Update(u32, void *);
}

extern "C" {
void MelodyPlayer_PlayAt(u32, void *, u32);
}

extern "C" {
#define SndPosNode_setBgmPan _ZN10SndPosNode9setBgmPanEP7VecFx32
void SndPosNode_setBgmPan(u32, void *);
}

extern "C" {
#define SndPosNode_playOnce _ZN10SndPosNode8playOnceEjP7VecFx32
void SndPosNode_playOnce(u32, u32, void *);
}

extern "C" {
#define SndPosNode_play _ZN10SndPosNode4playEiP7VecFx32
void SndPosNode_play(u32, u32, void *);
}

extern "C" {
#define SndSeEmitter_playOneShot _ZN12SndSeEmitter11playOneShotEiis
void SndSeEmitter_playOneShot(u32, u32, u32, u32);
}

extern "C" {
#define SndSeEmitter_playHeld _ZN12SndSeEmitter8playHeldEiis
void SndSeEmitter_playHeld(u32, u32, u32, u32);
}

extern "C" {
void SndMgr_PlayTalkVoice(void *, u32, u32, u32, u32);
}

extern "C" {
s32 _ZN12BgmSceneFade12isKeepingBgmEv(u8 *);
}

extern "C" {
void *_Znwm(u32);
}

extern "C" {
void Clock_GetMinuteHour(void *);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 Taxi_IsArriving();
}

extern "C" {
s32 Taxi_IsLeaving();
}

extern "C" {
s32 Scene_InTownUnk31();
}

extern "C" {
void Clock_GetDateTime(void *);
}

extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}

extern "C" {
s32 Event_GetState(u32, void *, u32);
}

extern "C" {
#define SndScene99_ctor _ZN10SndScene99C1Ev
void *SndScene99_ctor(void *);
}

extern "C" {
#define SndScene19_ctor _ZN10SndScene19C1Ev
void *SndScene19_ctor(void *);
}

extern "C" {
#define SndScene20_ctor _ZN10SndScene20C1Ev
void *SndScene20_ctor(void *);
}

extern "C" {
#define SndScene21_ctor _ZN10SndScene21C1Ev
void *SndScene21_ctor(void *);
}

extern "C" {
#define SndScene22_ctor _ZN10SndScene22C1Ev
void *SndScene22_ctor(void *);
}

extern "C" {
#define SndScene23_ctor _ZN10SndScene23C1Ev
void *SndScene23_ctor(void *);
}

extern "C" {
#define SndScene24_ctor _ZN10SndScene24C1Ev
void *SndScene24_ctor(void *);
}

extern "C" {
#define SndScene30_ctor _ZN10SndScene30C1Ev
void *SndScene30_ctor(void *);
}

extern "C" {
#define SndScene31_ctor _ZN10SndScene31C1Ev
void *SndScene31_ctor(void *);
}

extern "C" {
#define SndScene32_ctor _ZN10SndScene32C1Ev
void *SndScene32_ctor(void *);
}

extern "C" {
#define SndScene33_ctor _ZN10SndScene33C1Ev
void *SndScene33_ctor(void *);
}

extern "C" {
#define SndScene34_ctor _ZN10SndScene34C1Ev
void *SndScene34_ctor(void *);
}

extern "C" {
#define SndScene35_ctor _ZN10SndScene35C1Ev
void *SndScene35_ctor(void *);
}

extern "C" {
#define SndScene40_ctor _ZN10SndScene40C1Ev
void *SndScene40_ctor(void *);
}

extern "C" {
#define SndScene41_ctor _ZN10SndScene41C1Ev
void *SndScene41_ctor(void *);
}

extern "C" {
#define SndScene42_ctor _ZN10SndScene42C1Ev
void *SndScene42_ctor(void *);
}

extern "C" {
#define SndScene43_ctor _ZN10SndScene43C1Ev
void *SndScene43_ctor(void *);
}

extern "C" {
#define SndScene44_ctor _ZN10SndScene44C1Ev
void *SndScene44_ctor(void *);
}

extern "C" {
#define SndScene45_ctor _ZN10SndScene45C1Ev
void *SndScene45_ctor(void *);
}

extern "C" {
#define SndScene47_ctor _ZN10SndScene47C1Ev
void *SndScene47_ctor(void *);
}

extern "C" {
#define SndScene46_ctor _ZN10SndScene46C1Ev
void *SndScene46_ctor(void *);
}

extern "C" {
#define SndScene48_ctor _ZN10SndScene48C1Ev
void *SndScene48_ctor(void *);
}

extern "C" {
#define SndScene50_ctor _ZN10SndScene50C1Ev
void *SndScene50_ctor(void *);
}

extern "C" {
#define SndScene51_ctor _ZN10SndScene51C1Ev
void *SndScene51_ctor(void *);
}

extern "C" {
#define SndScene52_ctor _ZN10SndScene52C1Ev
void *SndScene52_ctor(void *);
}

extern "C" {
#define SndScene10_ctor _ZN10SndScene10C1Ev
void *SndScene10_ctor(void *);
}

extern "C" {
#define SndScene02_ctor _ZN10SndScene02C1Ev
void *SndScene02_ctor(void *);
}

extern "C" {
#define SndScene60_ctor _ZN10SndScene60C1Ev
void *SndScene60_ctor(void *);
}

extern "C" {
#define SndScene03_ctor _ZN10SndScene03C1Ev
void *SndScene03_ctor(void *);
}

extern "C" {
#define SndScene01_ctor _ZN10SndScene01C1Ev
void *SndScene01_ctor(void *);
}

extern "C" {
#define SndPosList_update _ZN10SndPosList6updateEv
void SndPosList_update();
}

extern "C" {
#define SndPosList_init _ZN10SndPosList4initEv
void SndPosList_init();
}

extern "C" {
#define SndPosNode_release _ZN10SndPosNode7releaseEv
void SndPosNode_release();
}

extern "C" {
#define SndPosNode_setPitch _ZN10SndPosNode8setPitchEi
void SndPosNode_setPitch();
}

extern "C" {
#define SndPosNode_init _ZN10SndPosNode4initEP10SndPosList
void SndPosNode_init();
}

extern "C" {
#define SndSeEmitter_playAlternate _ZN12SndSeEmitter13playAlternateEt
void SndSeEmitter_playAlternate();
}

extern "C" {
void MelodyBeat_Start();
}

extern "C" {
void MelodyBeat_Stop();
}

extern "C" {
void MelodyBeat_Init();
}

extern "C" {
void MelodyPlayer_IsPlaying();
}

extern "C" {
void MelodyPlayer_Update();
}

extern "C" {
void MelodyPlayer_PlayNote();
}

extern "C" {
void MelodyPlayer_StartTrackA();
}

extern "C" {
void MelodyPlayer_ApplyRandomPattern();
}

extern "C" {
void MelodyPlayer_PlayRandom();
}

extern "C" {
void MelodyPlayer_Play();
}

extern "C" {
void MelodyPlayer_PlayPattern();
}

extern "C" {
void MelodyPlayer_SetPattern();
}

extern "C" {
void Melody_GetDefaultPattern();
}

extern "C" {
void MelodyPlayer_Init();
}

extern "C" {
void BgmSyncSnd_PollStarted();
}

extern "C" {
void BgmSyncSnd_SetStartBeat();
}

extern "C" {
void BgmSyncSnd_ReadBeat();
}

extern "C" {
void BgmSyncSnd_SetState();
}

extern "C" {
void BgmSyncSnd_Release();
}

extern "C" {
void BgmSyncSnd_Init();
}

extern "C" {
void SndMgr_StopBellRollSe(void *);
}

extern "C" {
void SndMgr_StartBellRollSe(void *);
}

extern "C" {
void SndMgr_StopAuxSe(void *);
}

extern "C" {
void SndMgr_GetBeatState(void *);
}

extern "C" {
void SndMgr_RestoreSubPlayers(void *);
}

extern "C" {
void SndMgr_DuckSubPlayers(void *);
}

extern "C" {
void SndMgr_EndMenuDuck(void *);
}

extern "C" {
void SndMgr_BeginMenuDuck(void *);
}

extern "C" {
#define SndMgr_volumeOn _ZN6SndMgr8volumeOnEv
void SndMgr_volumeOn(void *);
}

extern "C" {
#define SndMgr_volumeOff _ZN6SndMgr9volumeOffEv
void SndMgr_volumeOff(void *);
}

extern "C" {
void SndMgr_PlayAuxSeHeld(void *, u32);
}

extern "C" {
void SndMgr_PlayAuxSe(void *, u32);
}

extern "C" {
void SndMgr_SetSeHandleVolumes(void *, u32);
}

extern "C" {
void SndMgr_PlayKeySe(void *, u32);
}

extern "C" {
void SndMgr_SetKeySeMode(void *, u32);
}

extern "C" {
void SndMgr_SetPan(void *, u32);
}

extern "C" {
void SndMgr_SetPanIfChanged(void *, u32);
}

extern "C" {
void SndMgr_SetBgmTrackVariant(void *, u32);
}

extern "C" {
void SndMgr_FadeInBgmTracks(void *, u32);
}

extern "C" {
void SndMgr_FadeOutBgmTracks(void *, u32);
}

extern "C" {
void SndMgr_StopBgm(void *, u32);
}

extern "C" {
void SndMgr_PlayBgm(void *, u32);
}

extern "C" {
void SndMgr_SetVoiceType(void *, u32);
}

extern "C" {
void SndMgr_PlaySeOnHandle(void *, u32);
}

extern "C" {
void SndMgr_PlaySe(void *, u32);
}

extern "C" {
#define SndMgr_setOutputMode _ZN6SndMgr13setOutputModeEj
void SndMgr_setOutputMode(void *, u32);
}

extern "C" {
void SndMgr_PlaySePanned(void *, u32, u32);
}

extern "C" {
void SndMgr_MoveBgmVolume(void *, u32, u32);
}

extern "C" {
void SndMgr_StopSe(void *, u32, u32);
}

#define NEW(sz, ctor)                                    \
    do {                                                 \
        void *p = _Znwm(sz);                     \
        if (p != NULL) {                                 \
            p = ctor(p);                                 \
        }                                                \
        gSndScene = (SndSceneBase *)p;               \
    } while (0)

static inline BOOL Unk_020040cc_check(u32 id, void *buf) {
    if (Event_GetState(id, buf, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_020040cc_isA() { return gFieldSceneKind == 0; }
static inline BOOL Unk_020040cc_isB() { return gFieldSceneKind == 1; }

extern "C" {
extern s32 gCameraDistance;
void Melody_Update(void);
void Melody_Init(void);
#define SndMgr_update _ZN6SndMgr6updateEv
void SndMgr_update(void *a);
#define SndMgr_init _ZN6SndMgr4initEjjj
void SndMgr_init(void *a, void *b, u32 c, const char *d, s32 e);
}

extern "C" void Snd_Init() {
    gSndScene = 0;
    SndMgr_init(gSndMgr, gSndHeapBuffer, 0x80000, "/sound_dataENG.sdat", 1);
    Melody_Init();
}

extern "C" void Snd_Update() {
    Melody_Update();
    SndMgr_update(gSndMgr);
    if (gSndScene != 0 && gCamera != 0) {
        gSndScene->update(gCameraDistance);
    }
}

extern "C" void func_020044dc() {}

extern "C" void Snd_CreateScene() {
    u8 st[4];
    u32 t[2];
    u32 b0[2], b1[2], b2[2];
    if (!Unk_020040cc_isA() && !Unk_020040cc_isB()) {
        NEW(8, SndScene99_ctor);
    } else {
        Clock_GetMinuteHour(st);
        switch (Scene_GetCurrent()) {
    case 6:
    case 7:
    case 8:
        NEW(8, SndScene19_ctor);
        break;
    case 9:
        NEW(8, SndScene20_ctor);
        break;
    case 10:
        NEW(8, SndScene21_ctor);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 47:
        NEW(8, SndScene22_ctor);
        break;
    case 15:
        NEW(8, SndScene23_ctor);
        break;
    case 16:
        NEW(8, SndScene24_ctor);
        break;
    case 26:
        NEW(8, SndScene30_ctor);
        break;
    case 27:
        NEW(8, SndScene31_ctor);
        break;
    case 28:
        NEW(8, SndScene32_ctor);
        break;
    case 29:
        NEW(8, SndScene33_ctor);
        break;
    case 30:
        NEW(8, SndScene34_ctor);
        break;
    case 31:
        NEW(8, SndScene35_ctor);
        break;
    case 32:
        NEW(8, SndScene40_ctor);
        break;
    case 33:
        NEW(0x38, SndScene41_ctor);
        break;
    case 34:
        NEW(8, SndScene42_ctor);
        break;
    case 35:
    case 36:
        NEW(8, SndScene43_ctor);
        break;
    case 37:
    case 38:
        NEW(8, SndScene44_ctor);
        break;
    case 39:
        NEW(8, SndScene45_ctor);
        break;
    case 40:
        if (st[1] >= 8 && st[1] < 0x11) {
            NEW(8, SndScene47_ctor);
        } else {
            NEW(8, SndScene46_ctor);
        }
        break;
    case 41:
        NEW(8, SndScene48_ctor);
        break;
    case 44:
        NEW(8, SndScene50_ctor);
        break;
    case 45:
        NEW(8, SndScene51_ctor);
        break;
    case 46:
    case 48:
        NEW(8, SndScene52_ctor);
        break;
    case 50:
        NEW(8, SndScene99_ctor);
        break;
        default: {
            if (!Unk_020040cc_isA()) {
                NEW(0x20, SndScene10_ctor);
                break;
            }
            if (Taxi_IsArriving() != 0 || Taxi_IsLeaving() != 0) {
                NEW(8, SndScene02_ctor);
            } else if (Scene_InTownUnk31() != 0) {
                NEW(8, SndScene60_ctor);
            } else {
                t[0] = 0;
                t[1] = 0;
                Clock_GetDateTime(t);
                MI_CpuCopy8(t, b0, 8);
                if (Unk_020040cc_check(0xf, b0)) {
                    NEW(8, SndScene03_ctor);
                } else {
                    MI_CpuCopy8(t, b1, 8);
                    if (Unk_020040cc_check(0x12, b1)) {
                        NEW(8, SndScene03_ctor);
                    } else {
                        MI_CpuCopy8(t, b2, 8);
                        if (Unk_020040cc_check(0x13, b2)) {
                            if (((u8 *)t)[2] < 2) {
                                NEW(8, SndScene03_ctor);
                            } else {
                                NEW(8, SndScene01_ctor);
                            }
                        } else {
                            NEW(8, SndScene01_ctor);
                        }
                    }
                }
            }
            break;
        }
        }
    }
    gSndScene->load();
}

extern "C" void Snd_DestroyScene() {
    if (gSndScene != NULL) {
        if (_ZN12BgmSceneFade12isKeepingBgmEv(data_021c1b3c + 0x2d0) != 0) {
            data_021f5be0[2] = 1;
        }
        gSndScene->unload();
        delete gSndScene;
        gSndScene = NULL;
    }
}

extern "C" void Snd_VolumeOff() { SndMgr_volumeOff(gSndMgr); }

extern "C" void Snd_VolumeOn() { SndMgr_volumeOn(gSndMgr); }

extern "C" void Snd_FadeOutScene() { gSndScene->fadeOutAll(); }

extern "C" void Snd_PlaySe(u32 a) { SndMgr_PlaySe(gSndMgr, a); }


extern "C" void Snd_PlaySePanned(u32 a, u32 b) { SndMgr_PlaySePanned(gSndMgr, a, b); }

extern "C" void Snd_PlaySeOnHandle(u32 a) { SndMgr_PlaySeOnHandle(gSndMgr, a); }

extern "C" void Snd_StopSe(u32 a, u32 b) { SndMgr_StopSe(gSndMgr, a, b); }

extern "C" void Snd_SetOutputMode(u32 a) { SndMgr_setOutputMode(gSndMgr, a); }

extern "C" void Snd_BeginTalk(u32 a) { gSndScene->beginTalk(a); }

extern "C" void Snd_PlayTalkVoice(u32 a, u32 b, u32 c, u32 d) { SndMgr_PlayTalkVoice(gSndMgr, a, b, c, d); }

extern "C" void Snd_EndTalk() { gSndScene->endTalk(); }

extern "C" void Snd_SetVoiceType(u32 a) { SndMgr_SetVoiceType(gSndMgr, a); }

#define SndSceneBase_setBankVariant _ZN12SndSceneBase14setBankVariantEi
extern "C" void SndSceneBase_setBankVariant() {}

extern "C" void Snd_SetSceneBankVariant(u32 a) { gSndScene->setBankVariant(a); }

extern "C" void Snd_SetSeHandleVolumes(u32 a) { SndMgr_SetSeHandleVolumes(gSndMgr, a); }

extern "C" void Snd_SetKeySeMode(u32 a) { SndMgr_SetKeySeMode(gSndMgr, a); }

extern "C" void Snd_PlayKeySe(u32 a) { SndMgr_PlayKeySe(gSndMgr, a); }

extern "C" void Snd_PlayAuxSe(u32 a) { SndMgr_PlayAuxSe(gSndMgr, a); }

extern "C" void Snd_PlayAuxSeHeld(u32 a) { SndMgr_PlayAuxSeHeld(gSndMgr, a); }

extern "C" void Snd_StopAuxSe() { SndMgr_StopAuxSe(gSndMgr); }

extern "C" void Snd_StartBellRollSe() { SndMgr_StartBellRollSe(gSndMgr); }

extern "C" void Snd_StopBellRollSe() { SndMgr_StopBellRollSe(gSndMgr); }

void SndSeEmitter::callInit() { init(); }

void SndSeEmitter::callUpdateRelative(VecFx32 *v) {
    VecFx32 t;
    if (v != NULL) {
        if (gCamera != 0) {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            update(&t);
        }
    } else {
        update(v);
    }
}

extern "C" void Snd_SeEmitterPlayOneShot(u32 a, u32 b, u32 c, u32 d) { SndSeEmitter_playOneShot(a, b, c, d); }

extern "C" void Snd_SeEmitterPlayHeld(u32 a, u32 b, u32 c, u32 d) { SndSeEmitter_playHeld(a, b, c, d); }

void SndSeEmitter::callStop() { stop(); }

void SndSeEmitter::callInitAlt() { init(); }

void SndSeEmitter::callUpdateRelativeAlt(VecFx32 *v) {
    VecFx32 t;
    if (v != NULL) {
        if (gCamera != 0) {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            update(&t);
        }
    } else {
        update(v);
    }
}

extern "C" void Snd_SeEmitterPlayAlternate() { SndSeEmitter_playAlternate(); }

extern "C" void Snd_SeEmitterPlayOneShotAlt(u32 a, u32 b, u32 c, u32 d) { SndSeEmitter_playOneShot(a, b, c, d); }

void SndSeEmitter::callStopAlt() { stop(); }

extern "C" void Snd_PosListInit() { SndPosList_init(); }

extern "C" void Snd_PosListUpdate() { SndPosList_update(); }

extern "C" void Snd_PosNodeInit() { SndPosNode_init(); }

extern "C" void Snd_PosNodePlay(u32 a, u32 b, VecFx32 *v) {
    VecFx32 t;
    if (v != NULL && gCamera != 0) {
        t.x = v->x - gCameraEye.x;
        t.y = v->y - gCameraEye.y;
        t.z = v->z - gCameraEye.z;
        SndPosNode_play(a, b, &t);
    }
}

extern "C" void Snd_PosNodePlayOnce(u32 a, u32 b, VecFx32 *v) {
    VecFx32 t;
    if (v != NULL && gCamera != 0) {
        t.x = v->x - gCameraEye.x;
        t.y = v->y - gCameraEye.y;
        t.z = v->z - gCameraEye.z;
        SndPosNode_playOnce(a, b, &t);
    }
}

extern "C" void Snd_SetBgmPan(u32 a, VecFx32 *v) {
    if (v != NULL && gCamera != 0) {
        VecFx32 t = *v;
        t.x -= gCameraEye.x;
        t.y -= gCameraEye.y;
        t.z -= gCameraEye.z;
        SndPosNode_setBgmPan(a, &t);
    }
}

extern "C" void Snd_PosNodeRelease() { SndPosNode_release(); }

extern "C" void Snd_PosNodeSetPitch() { SndPosNode_setPitch(); }

extern "C" s32 Snd_PosListCanInit() { return 1; }

void SndEnvChannel::callReset() { vfunc_00(); }

void SndEnvChannel::callUpdateRelative(VecFx32 *pos) {
    VecFx32 t;
    if (pos != NULL) {
        if (gCamera != 0) {
            t.x = pos->x - gCameraEye.x;
            t.y = pos->y - gCameraEye.y;
            t.z = pos->z - gCameraEye.z;
            update((VecFx32 *)&t);
        }
    } else {
        update((VecFx32 *)pos);
    }
}

void SndEnvChannel::callUpdate(void *a) { update((VecFx32 *)a); }

void SndEnvChannel::callRequestSustained(void *a) { requestSustained((u32)a); }

void SndEnvChannel::callRequest(void *a) { request((u32)a); }

void SndEnvChannel::callRelease() { vfunc_04(); }

extern "C" void Snd_PlayBgm(u32 a) { SndMgr_PlayBgm(gSndMgr, a); }

extern "C" void Snd_StopBgm(u32 a) { SndMgr_StopBgm(gSndMgr, a); }

extern "C" void Snd_MoveBgmVolume(u32 a, u32 b) { SndMgr_MoveBgmVolume(gSndMgr, a, b); }

extern "C" void Snd_FadeOutBgmTracks(u32 a) { SndMgr_FadeOutBgmTracks(gSndMgr, a); }

extern "C" void Snd_FadeInBgmTracks(u32 a) { SndMgr_FadeInBgmTracks(gSndMgr, a); }

extern "C" void Snd_SetBgmTrackVariant(u32 a) { SndMgr_SetBgmTrackVariant(gSndMgr, a); }

extern "C" void Snd_GetBeatState() { SndMgr_GetBeatState(gSndMgr); }

extern "C" void Snd_BeginMenuDuck() { SndMgr_BeginMenuDuck(gSndMgr); }

extern "C" void Snd_EndMenuDuck() { SndMgr_EndMenuDuck(gSndMgr); }

extern "C" void Snd_DuckSubPlayers() { SndMgr_DuckSubPlayers(gSndMgr); }

extern "C" void Snd_RestoreSubPlayers() { SndMgr_RestoreSubPlayers(gSndMgr); }

extern "C" void Snd_SetPanIfChanged(u32 a) { SndMgr_SetPanIfChanged(gSndMgr, a); }

extern "C" void Snd_SetPan(u32 a) { SndMgr_SetPan(gSndMgr, a); }

extern "C" void Snd_MelodyInit() { MelodyPlayer_Init(); }

extern "C" void Snd_MelodySetPattern() { MelodyPlayer_SetPattern(); }

extern "C" void Snd_MelodyPlayPattern() { MelodyPlayer_PlayPattern(); }

extern "C" void Snd_MelodyPlayAt(u32 a, VecFx32 *v, u32 c) {
    VecFx32 t;
    if (gCamera != 0) {
        t.x = v->x - gCameraEye.x;
        t.y = v->y - gCameraEye.y;
        t.z = v->z - gCameraEye.z;
        MelodyPlayer_PlayAt(a, &t, c);
    }
}

extern "C" void Snd_MelodyPlay() { MelodyPlayer_Play(); }

extern "C" void Snd_MelodyStartTrackA() { MelodyPlayer_StartTrackA(); }

extern "C" void Snd_MelodyPlayNote() { MelodyPlayer_PlayNote(); }

extern "C" void Snd_MelodyUpdate() { MelodyPlayer_Update(); }

extern "C" void Snd_MelodyIsPlaying() { MelodyPlayer_IsPlaying(); }

extern "C" void Snd_MelodyPlayRandom() { MelodyPlayer_PlayRandom(); }

extern "C" void Snd_MelodyApplyRandomPattern() { MelodyPlayer_ApplyRandomPattern(); }

extern "C" void Snd_MelodyGetDefaultPattern() { Melody_GetDefaultPattern(); }

extern "C" void Snd_BgmSyncInit() { BgmSyncSnd_Init(); }

extern "C" void Snd_BgmSyncSetState() { BgmSyncSnd_SetState(); }

extern "C" s32 Snd_BgmSyncUpdate(u32 a, VecFx32 *v) {
    VecFx32 t;
    s32 r;
    if (v != NULL) {
        if (gCamera == 0) {
            r = -1;
        } else {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            r = BgmSyncSnd_Update(a, &t);
        }
    } else {
        r = -1;
    }
    return r;
}

extern "C" void Snd_BgmSyncRelease() { BgmSyncSnd_Release(); }

extern "C" void Snd_BgmSyncSetStartBeat() { BgmSyncSnd_SetStartBeat(); }

extern "C" void Snd_BgmSyncReadBeat() { BgmSyncSnd_ReadBeat(); }

extern "C" void Snd_BgmSyncPollStarted() { BgmSyncSnd_PollStarted(); }

extern "C" void Snd_MelodyBeatInit() { MelodyBeat_Init(); }

extern "C" void Snd_MelodyBeatStart() { MelodyBeat_Start(); }

extern "C" void Snd_MelodyBeatUpdate(u32 a, VecFx32 *v) {
    VecFx32 t;
    if (v != NULL) {
        if (gCamera != 0) {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            MelodyBeat_Update(a, &t);
        }
    } else {
        MelodyBeat_Update(a, v);
    }
}

extern "C" void Snd_MelodyBeatStop() { MelodyBeat_Stop(); }


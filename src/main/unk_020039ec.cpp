#include "types.h"

struct Unk_02003a6c_Vec {
    s32 x, y, z;
};

extern u32 gCamera;
extern Unk_02003a6c_Vec gCameraEye;
extern u8 gSndMgr[];
extern u8 data_020e416c;
extern u8 *data_021c1b3c;
extern u8 data_021f5be0[];

struct Unk_02003c30 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    void callRelease();
    void callReset();
    void func_02003dcc();
    void func_02003e40();
    void func_02003e50();
    void func_02003ecc();
};

struct Unk_02003c40 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08(void *a);
    virtual void vfunc_0c(void *a);
    virtual void vfunc_10(void *a);
    void callRequest(void *a);
    void callRequestSustained(void *a);
    void callUpdate(void *a);
    void callUpdateRelative(Unk_02003a6c_Vec *v);
    void func_02003df4(Unk_02003a6c_Vec *v);
    void func_02003e80(Unk_02003a6c_Vec *v);
};

struct Unk_0213c8ec {
    virtual ~Unk_0213c8ec();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(u32 a);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
};

Unk_0213c8ec *gSndScene;
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
void func_020f3a6c(u32, void *);
}

extern "C" {
void func_020f3b08(u32, u32, void *);
}

extern "C" {
void func_020f3d54(u32, u32, void *);
}

extern "C" {
void func_020f41fc(u32, u32, u32, u32);
}

extern "C" {
void func_020f4158(u32, u32, u32, u32);
}

extern "C" {
void SndMgr_PlayTalkVoice(void *, u32, u32, u32, u32);
}

extern "C" {
s32 _ZN12Unk_020d8e1413func_02035338Ev(u8 *);
}

extern "C" {
void *_Znwm(u32);
}

extern "C" {
void func_0209cf18(void *);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_020b0f0c();
}

extern "C" {
s32 func_020b0f30();
}

extern "C" {
s32 func_020b5164();
}

extern "C" {
void func_0209d498(void *);
}

extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}

extern "C" {
s32 func_0203f2e0(u32, void *, u32);
}

extern "C" {
void *func_020f1044(void *);
}

extern "C" {
void *func_020f2494(void *);
}

extern "C" {
void *func_020f23d0(void *);
}

extern "C" {
void *func_020f230c(void *);
}

extern "C" {
void *func_020f2248(void *);
}

extern "C" {
void *func_020f2184(void *);
}

extern "C" {
void *func_020f20b0(void *);
}

extern "C" {
void *func_020f1fec(void *);
}

extern "C" {
void *func_020f1f18(void *);
}

extern "C" {
void *func_020f1e44(void *);
}

extern "C" {
void *func_020f1d70(void *);
}

extern "C" {
void *func_020f1c9c(void *);
}

extern "C" {
void *func_020f1bc8(void *);
}

extern "C" {
void *func_020f1b04(void *);
}

extern "C" {
void *func_020f1a38(void *);
}

extern "C" {
void *func_020f18f0(void *);
}

extern "C" {
void *func_020f182c(void *);
}

extern "C" {
void *func_020f1768(void *);
}

extern "C" {
void *func_020f16a4(void *);
}

extern "C" {
void *func_020f151c(void *);
}

extern "C" {
void *func_020f15e0(void *);
}

extern "C" {
void *func_020f1458(void *);
}

extern "C" {
void *func_020f138c(void *);
}

extern "C" {
void *func_020f12c8(void *);
}

extern "C" {
void *func_020f11d4(void *);
}

extern "C" {
void *func_020f269c(void *);
}

extern "C" {
void *func_020f2878(void *);
}

extern "C" {
void *func_020f1118(void *);
}

extern "C" {
void *func_020f2788(void *);
}

extern "C" {
void *func_020f2a3c(void *);
}

extern "C" {
void func_020f3800();
}

extern "C" {
void func_020f39f8();
}

extern "C" {
void func_020f3a34();
}

extern "C" {
void func_020f3af0();
}

extern "C" {
void func_020f3e14();
}

extern "C" {
void func_020f3f10();
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
void func_020ef894(void *);
}

extern "C" {
void func_020ef8a8(void *);
}

extern "C" {
void func_020ef8c0(void *);
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
void func_020f0e1c(void *);
}

extern "C" {
void func_020f0e2c(void *);
}

extern "C" {
void func_020ef8d4(void *, u32);
}

extern "C" {
void func_020ef908(void *, u32);
}

extern "C" {
void func_020ef93c(void *, u32);
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
void func_020f09d8(void *, u32);
}

extern "C" {
void SndMgr_PlaySe(void *, u32);
}

extern "C" {
void func_020f0e08(void *, u32);
}

extern "C" {
void func_020ef850(void *, u32, u32);
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
        gSndScene = (Unk_0213c8ec *)p;               \
    } while (0)

static inline BOOL Unk_020040cc_check(u32 id, void *buf) {
    if (func_0203f2e0(id, buf, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_020040cc_isA() { return data_020e416c == 0; }
static inline BOOL Unk_020040cc_isB() { return data_020e416c == 1; }

struct Unk_020044e0_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(s32 v);
};

extern "C" {
extern s32 gCameraDistance;
void Melody_Update(void);
void Melody_Init(void);
void func_020f0e3c(void *a);
void func_020f0e68(void *a, void *b, u32 c, const char *d, s32 e);
}

extern "C" void Snd_Init() {
    gSndScene = 0;
    func_020f0e68(gSndMgr, gSndHeapBuffer, 0x80000, "/sound_dataENG.sdat", 1);
    Melody_Init();
}

extern "C" void Snd_Update() {
    Melody_Update();
    func_020f0e3c(gSndMgr);
    if (gSndScene != 0 && gCamera != 0) {
        ((Unk_020044e0_Obj *)gSndScene)->vfunc_10(gCameraDistance);
    }
}

extern "C" void func_020044dc() {}

extern "C" void Snd_CreateScene() {
    u8 st[4];
    u32 t[2];
    u32 b0[2], b1[2], b2[2];
    if (!Unk_020040cc_isA() && !Unk_020040cc_isB()) {
        NEW(8, func_020f1044);
    } else {
        func_0209cf18(st);
        switch (func_020b50e8()) {
    case 6:
    case 7:
    case 8:
        NEW(8, func_020f2494);
        break;
    case 9:
        NEW(8, func_020f23d0);
        break;
    case 10:
        NEW(8, func_020f230c);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 47:
        NEW(8, func_020f2248);
        break;
    case 15:
        NEW(8, func_020f2184);
        break;
    case 16:
        NEW(8, func_020f20b0);
        break;
    case 26:
        NEW(8, func_020f1fec);
        break;
    case 27:
        NEW(8, func_020f1f18);
        break;
    case 28:
        NEW(8, func_020f1e44);
        break;
    case 29:
        NEW(8, func_020f1d70);
        break;
    case 30:
        NEW(8, func_020f1c9c);
        break;
    case 31:
        NEW(8, func_020f1bc8);
        break;
    case 32:
        NEW(8, func_020f1b04);
        break;
    case 33:
        NEW(0x38, func_020f1a38);
        break;
    case 34:
        NEW(8, func_020f18f0);
        break;
    case 35:
    case 36:
        NEW(8, func_020f182c);
        break;
    case 37:
    case 38:
        NEW(8, func_020f1768);
        break;
    case 39:
        NEW(8, func_020f16a4);
        break;
    case 40:
        if (st[1] >= 8 && st[1] < 0x11) {
            NEW(8, func_020f151c);
        } else {
            NEW(8, func_020f15e0);
        }
        break;
    case 41:
        NEW(8, func_020f1458);
        break;
    case 44:
        NEW(8, func_020f138c);
        break;
    case 45:
        NEW(8, func_020f12c8);
        break;
    case 46:
    case 48:
        NEW(8, func_020f11d4);
        break;
    case 50:
        NEW(8, func_020f1044);
        break;
        default: {
            if (!Unk_020040cc_isA()) {
                NEW(0x20, func_020f269c);
                break;
            }
            if (func_020b0f0c() != 0 || func_020b0f30() != 0) {
                NEW(8, func_020f2878);
            } else if (func_020b5164() != 0) {
                NEW(8, func_020f1118);
            } else {
                t[0] = 0;
                t[1] = 0;
                func_0209d498(t);
                MI_CpuCopy8(t, b0, 8);
                if (Unk_020040cc_check(0xf, b0)) {
                    NEW(8, func_020f2788);
                } else {
                    MI_CpuCopy8(t, b1, 8);
                    if (Unk_020040cc_check(0x12, b1)) {
                        NEW(8, func_020f2788);
                    } else {
                        MI_CpuCopy8(t, b2, 8);
                        if (Unk_020040cc_check(0x13, b2)) {
                            if (((u8 *)t)[2] < 2) {
                                NEW(8, func_020f2788);
                            } else {
                                NEW(8, func_020f2a3c);
                            }
                        } else {
                            NEW(8, func_020f2a3c);
                        }
                    }
                }
            }
            break;
        }
        }
    }
    gSndScene->vfunc_0c();
}

extern "C" void Snd_DestroyScene() {
    if (gSndScene != NULL) {
        if (_ZN12Unk_020d8e1413func_02035338Ev(data_021c1b3c + 0x2d0) != 0) {
            data_021f5be0[2] = 1;
        }
        gSndScene->vfunc_18();
        delete gSndScene;
        gSndScene = NULL;
    }
}

extern "C" void Snd_VolumeOff() { func_020f0e2c(gSndMgr); }

extern "C" void Snd_VolumeOn() { func_020f0e1c(gSndMgr); }

extern "C" void Snd_FadeOutScene() { gSndScene->vfunc_14(); }

extern "C" void Snd_PlaySe(u32 a) { SndMgr_PlaySe(gSndMgr, a); }


extern "C" void func_02004018(u32 a, u32 b) { func_020ef850(gSndMgr, a, b); }

extern "C" void func_02004008(u32 a) { func_020f09d8(gSndMgr, a); }

extern "C" void Snd_StopSe(u32 a, u32 b) { SndMgr_StopSe(gSndMgr, a, b); }

extern "C" void Snd_SetOutputMode(u32 a) { func_020f0e08(gSndMgr, a); }

extern "C" void Snd_BeginTalk(u32 a) { gSndScene->vfunc_1c(a); }

extern "C" void Snd_PlayTalkVoice(u32 a, u32 b, u32 c, u32 d) { SndMgr_PlayTalkVoice(gSndMgr, a, b, c, d); }

extern "C" void Snd_EndTalk() { gSndScene->vfunc_20(); }

extern "C" void Snd_SetVoiceType(u32 a) { SndMgr_SetVoiceType(gSndMgr, a); }

extern "C" void func_02003f78() {}

extern "C" void func_02003f5c(u32 a) { gSndScene->vfunc_24(a); }

extern "C" void func_02003f4c(u32 a) { func_020ef93c(gSndMgr, a); }

extern "C" void Snd_SetKeySeMode(u32 a) { SndMgr_SetKeySeMode(gSndMgr, a); }

extern "C" void Snd_PlayKeySe(u32 a) { SndMgr_PlayKeySe(gSndMgr, a); }

extern "C" void func_02003f1c(u32 a) { func_020ef908(gSndMgr, a); }

extern "C" void func_02003f0c(u32 a) { func_020ef8d4(gSndMgr, a); }

extern "C" void func_02003efc() { func_020ef8c0(gSndMgr); }

extern "C" void func_02003eec() { func_020ef8a8(gSndMgr); }

extern "C" void func_02003edc() { func_020ef894(gSndMgr); }

void Unk_02003c30::func_02003ecc() { vfunc_08(); }

void Unk_02003c40::func_02003e80(Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
    if (v != NULL) {
        if (gCamera != 0) {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            vfunc_0c(&t);
        }
    } else {
        vfunc_0c(v);
    }
}

extern "C" void func_02003e70(u32 a, u32 b, u32 c, u32 d) { func_020f41fc(a, b, c, d); }

extern "C" void Snd_SeEmitterPlayHeld(u32 a, u32 b, u32 c, u32 d) { func_020f4158(a, b, c, d); }

void Unk_02003c30::func_02003e50() { vfunc_10(); }

void Unk_02003c30::func_02003e40() { vfunc_08(); }

void Unk_02003c40::func_02003df4(Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
    if (v != NULL) {
        if (gCamera != 0) {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            vfunc_0c(&t);
        }
    } else {
        vfunc_0c(v);
    }
}

extern "C" void Snd_SeEmitterPlayAlternate() { func_020f3f10(); }

extern "C" void func_02003ddc(u32 a, u32 b, u32 c, u32 d) { func_020f41fc(a, b, c, d); }

void Unk_02003c30::func_02003dcc() { vfunc_10(); }

extern "C" void Snd_PosListInit() { func_020f39f8(); }

extern "C" void Snd_PosListUpdate() { func_020f3800(); }

extern "C" void Snd_PosNodeInit() { func_020f3e14(); }

extern "C" void Snd_PosNodePlay(u32 a, u32 b, Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
    if (v != NULL && gCamera != 0) {
        t.x = v->x - gCameraEye.x;
        t.y = v->y - gCameraEye.y;
        t.z = v->z - gCameraEye.z;
        func_020f3d54(a, b, &t);
    }
}

extern "C" void Snd_PosNodePlayOnce(u32 a, u32 b, Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
    if (v != NULL && gCamera != 0) {
        t.x = v->x - gCameraEye.x;
        t.y = v->y - gCameraEye.y;
        t.z = v->z - gCameraEye.z;
        func_020f3b08(a, b, &t);
    }
}

extern "C" void Snd_SetBgmPan(u32 a, Unk_02003a6c_Vec *v) {
    if (v != NULL && gCamera != 0) {
        Unk_02003a6c_Vec t = *v;
        t.x -= gCameraEye.x;
        t.y -= gCameraEye.y;
        t.z -= gCameraEye.z;
        func_020f3a6c(a, &t);
    }
}

extern "C" void Snd_PosNodeRelease() { func_020f3a34(); }

extern "C" void Snd_PosNodeSetPitch() { func_020f3af0(); }

extern "C" s32 func_02003ccc() { return 1; }

void Unk_02003c30::callReset() { vfunc_00(); }

void Unk_02003c40::callUpdateRelative(Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
    if (v != NULL) {
        if (gCamera != 0) {
            t.x = v->x - gCameraEye.x;
            t.y = v->y - gCameraEye.y;
            t.z = v->z - gCameraEye.z;
            vfunc_10(&t);
        }
    } else {
        vfunc_10(v);
    }
}

void Unk_02003c40::callUpdate(void *a) { vfunc_10(a); }

void Unk_02003c40::callRequestSustained(void *a) { vfunc_08(a); }

void Unk_02003c40::callRequest(void *a) { vfunc_0c(a); }

void Unk_02003c30::callRelease() { vfunc_04(); }

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

extern "C" void Snd_MelodyPlayAt(u32 a, Unk_02003a6c_Vec *v, u32 c) {
    Unk_02003a6c_Vec t;
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

extern "C" s32 Snd_BgmSyncUpdate(u32 a, Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
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

extern "C" void Snd_MelodyBeatUpdate(u32 a, Unk_02003a6c_Vec *v) {
    Unk_02003a6c_Vec t;
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


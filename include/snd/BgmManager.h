#ifndef SND_BGMMANAGER_H
#define SND_BGMMANAGER_H

// BGM manager (0x2f8 bytes; member of BgmProc at 0x50) with its request slots and the field/room/faint BGM
// controllers it owns by value. Defined in src/main/unk_02034438.cpp (declaration order = vtable emission order).
#include "types.h"
#include "snd/BgmVolumeMixer.h"
#include "snd/BgmSceneFade.h"

class BgmManagerView;

// 0x1c-byte slot
class BgmRequest {
public:
    BgmRequest();
    BgmRequest(s32 a, u32 b, s32 c, s32 d, u8 e);
    ~BgmRequest();

    BOOL tickLifetime();
    void copyFrom(BgmRequest *src);
    void clear();
    void func_02036c18();
    BgmRequest *init(s32 a, u32 b, s32 c, s32 d, u8 e);
    BgmRequest *initEmpty();

    /* 0x00 */ s32 priority;
    /* 0x04 */ u16 bgmId;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ s32 stopFadeFrames;
    /* 0x0c */ s32 volume;
    /* 0x10 */ u8 muteDucks;
    /* 0x11 */ u8 transient;
    /* 0x12 */ u8 playing;
    /* 0x13 */ u8 removePending;
    /* 0x14 */ u8 volumePending;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ s32 lifetime;
};

// the symbols name this class in the parameter of three methods of the composite
class BgmRequestView : public BgmRequest {
public:
    BOOL clearPlaying();
};

typedef BOOL (BgmRequestView::*Unk_02034574_Fn)();

class EventBgm {
public:
    u32 manager;
    u16 newYearFanfareBgm;
    u16 newYearNightBgm;
    u16 newYearDayBgm;
    u16 countdownBgm;
    u16 fireworksBgm;
    u8 countdownFadeActive;
    u8 yearChanged;
    u8 keep;
    u8 active;
    virtual ~EventBgm();
    EventBgm(u32 a);
    void updateYearChanged();
    void stopCountdownFade();
    void startCountdownFade(u32 a);
    void stopFireworks();
    void stopCountdown();
    void stopNewYearDay();
    s32 stopNewYearDayAlias(); // alias of func_02036220 declared s32 so the caller emits bl instead of a tail branch
    void stopNewYearNight();
    void stopNewYearFanfare();
    void playFireworks(u32 a);
    void playCountdown(u32 a);
    void playNewYearDay(u32 a);
    void playNewYearNight(u32 a);
    void playNewYearFanfare(u32 a);
    s32 updateFireworks(BOOL a);
    void updateCountdown(BOOL a);
    void updateNewYearDay(BOOL a);
    void updateEvents();
    void setKeep(u32 a);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class FieldSpecialBgm {
public:
    u32 manager;
    u16 currentBgm;
    u8 keep;
    u8 active;

    FieldSpecialBgm(u32 a);
    virtual ~FieldSpecialBgm();
    void stopBgm();
    void play(s32 a, u32 b, u32 c);
    void setKeep(u32 a);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class HourlyBgm {
public:
    u32 manager;
    s32 hour;
    u16 currentBgm;
    u8 hourFadeActive;
    u8 keep;
    u8 active;

    HourlyBgm(u32 v);
    virtual ~HourlyBgm();
    void updateHourFade();
    void stopHourFade();
    void startHourFade(u32 x);
    void updateHour();
    void stopHourBgm();
    void playHourBgm();
    void setKeep(u32 v);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class BgmCommandQueue {
public:
    BgmCommandQueue(void *owner);
    ~BgmCommandQueue();
    void flush();
    void clear();
    BgmCommandQueue *init(void *owner);
    void requestVolume(s32 a, s32 b);
    void requestStop(s32 a);
    void requestPlay(u16 a);
    void func_02035740();

    u32 manager;
    u8 playPending;
    u8 pad_05;
    u16 playBgmId;
    u8 stopPending;
    u8 pad_09[3];
    s32 stopFadeFrames;
    u8 volumePending;
    u8 pad_11[3];
    s32 volume;
    s32 volumeFrames;
};


// 0x18-byte object
class BgmClock {
public:
    BgmClock();
    ~BgmClock();
    s32 year;
    u16 dayMonth;
    u8 minute;
    u8 hour;
    s32 second;
    s32 prevYear;
    u16 prevDayMonth;
    u16 prevMinuteHour;
    s32 prevSecond;

    void update();
    BOOL hasYearChanged();
    BOOL hasHourChanged();
    BOOL isTimeInRange(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
    BOOL isMinuteInRange(u32 a, u32 b, u32 c, u32 d);
    BOOL isAt(u16 *a, u16 *b);
};

class FieldBgm {
public:
    HourlyBgm hourlyBgm;
    FieldSpecialBgm specialBgm;
    EventBgm eventBgm;
    virtual ~FieldBgm();
    FieldBgm(u32 a);
    void setKeep(u32 a);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class RoomBgm {
public:
    u32 manager;
    u8 currentScene;
    u16 sceneBgm;
    u8 closingFadeActive;
    u8 closingMusicPlaying;
    u8 closingForced;
    u8 active;
    u8 keep;
    virtual ~RoomBgm();
    void stopClosingMusic();
    void updateSceneBgm();
    void updateClosingMusic();
    void stopSceneBgm();
    void playSceneBgm(s32 a);
    void setKeep(u32 a);
    void end();
    void start();
    void forceClosingMusic();
    void stop();
    void update();
    void exit();
    void init();
    RoomBgm(u32 a);
};


class FaintBgm {
public:
    virtual ~FaintBgm();
    BgmManagerView *manager;
    u16 currentBgm;
    u8 silenceActive;
    FaintBgm(BgmManagerView *o);
    void stop();
    void exit();
    void init();
    void fadeOut();
    void startSilence();
    void play();
};

class BgmTracks {
public:
    virtual ~BgmTracks();
    BgmTracks();
};

// composite object seen by the first file (data_021c1b3c)
class BgmManager {
public:
    BgmManager();
    ~BgmManager();

    void updateHourChime();
    void exit();
    void init();
    void forEachRequest(Unk_02034574_Fn fn);
    void insertAt(s32 idx);
    BgmRequest *findKeptBefore(s32 n);
    s32 findByBgm(u16 id);
    s32 findByPriority(s32 v);
    s32 findPlaying();
    s32 findInsertPos(BgmRequestView *key);
    void tickRequests();
    void startTop();
    void clearPlaying();
    void removeMarked();
    void updateStop();
    void updateRequests();
    void releaseBgm(u16 id);
    void releasePriority(s32 v);
    void push(BgmRequestView *e);
    s32 func_02034514();
    void update();

    /* 0x000 */ BgmRequest requests[16];
    /* 0x1c0 */ s32 numRequests;
    /* 0x1c4 */ BgmVolumeMixer mixer;
    /* 0x24c */ BgmClock clock;
    /* 0x264 */ FieldBgm fieldBgm;
    /* 0x2a0 */ RoomBgm roomBgm;
    /* 0x2b4 */ BgmCommandQueue commands;
    /* 0x2d0 */ BgmSceneFade sceneFade;
    /* 0x2e4 */ FaintBgm faintBgm;
    /* 0x2f0 */ BgmTracks tracks;
    /* 0x2f4 */ u8 hourChimeDisabled;
    /* 0x2f5 */ u8 pad_2f5[3];
};


#endif

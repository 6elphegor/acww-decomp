#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0209d498_Time {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 a;
    u16 b;
};

// size 0x54
class NewYearCountdown : public GameProc {
public:
    NewYearCountdown();
    virtual ~NewYearCountdown();
    virtual BOOL vfunc_00();
    virtual BOOL onExecute();

    /* 0x50 */ u8 prevSecondDigit;
    /* 0x51 */ u8 secondDigit;
    /* 0x52 */ u8 muteFirstTick;
    /* 0x53 */ u8 midnightSePlayed;
};

extern "C" {
u32 Scene_GetCurrent(void);
void Clock_GetDateTime(void *p);
void Snd_PlaySe(s32 a);
NewYearCountdown *NewYearCountdown_Create();
}

extern "C" const u8 sNewYearCountdownScenes[0x34] = {
    0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0
};

extern "C" Unk_ov004_SceneEntry sNewYearCountdownProfile = { (void *(*)())NewYearCountdown_Create, 0x2a, 0x30 };

extern "C" NewYearCountdown *NewYearCountdown_Create() {
    return new NewYearCountdown;
}

NewYearCountdown::NewYearCountdown() {}
NewYearCountdown::~NewYearCountdown() {}

BOOL NewYearCountdown::vfunc_00() {
    muteFirstTick = 1;
    return TRUE;
}

BOOL NewYearCountdown::onExecute() {
    u32 idx = Scene_GetCurrent();
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    Clock_GetDateTime(&t);
    if (idx < 0x33) {
        if (sNewYearCountdownScenes[idx] != 0) {
            if (t.b4 == 0xc && t.b3 == 0x1f) {
                u32 secs = 0x15180 - (t.b0 + (t.b1 * 0x3c + t.b2 * 0xe10));
                u32 h = secs / 0xe10;
                secs = secs - h * 0xe10;
                u32 m = secs / 0x3c;
                secs = secs - m * 0x3c;
                secondDigit = secs % 10;
                if (secondDigit != prevSecondDigit) {
                    if (h == 0) {
                        if (m == 1 && secs == 0) {
                            if (muteFirstTick == 0) Snd_PlaySe(0x62);
                        } else if (m == 0) {
                            if (secs == 0) {
                                if (muteFirstTick == 0) Snd_PlaySe(0x61);
                            } else if (secs <= 10) {
                                if (muteFirstTick == 0) Snd_PlaySe(0x60);
                            } else {
                                if (muteFirstTick == 0) Snd_PlaySe(0x62);
                            }
                        }
                        muteFirstTick = 0;
                    }
                }
                prevSecondDigit = secondDigit;
            } else if (t.b4 == 1) {
                if (t.b3 == 1 && t.b2 == 0 && t.b1 == 0 && t.b0 == 0) {
                    if (midnightSePlayed == 0) {
                        Snd_PlaySe(0x61);
                        midnightSePlayed = 1;
                    }
                }
            }
        }
    }
    return TRUE;
}
